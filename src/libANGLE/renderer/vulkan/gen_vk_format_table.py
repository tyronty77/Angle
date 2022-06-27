#!/usr/bin/python3
# Copyright 2016 The ANGLE Project Authors. All rights reserved.
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.
#
# gen_vk_format_table.py:
#  Code generation for vk format map. See vk_format_map.json for data source.
#  NOTE: don't run this script directly. Run scripts/run_code_generation.py.

import json
import math
import pprint
import os
import re
import sys

sys.path.append('..')
import angle_format

template_table_autogen_cpp = """// GENERATED FILE - DO NOT EDIT.
// Generated by {script_name} using data from {input_file_name}
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// {out_file_name}:
//   Queries for full Vulkan format information based on GL format.

#include "libANGLE/renderer/vulkan/vk_format_utils.h"

#include "image_util/loadimage.h"

using namespace angle;

namespace rx
{{
namespace vk
{{

void Format::initialize(RendererVk *renderer,
                        const angle::Format &angleFormat)
{{
    switch (angleFormat.id)
    {{
{format_case_data}
        default:
            UNREACHABLE();
            break;
    }}
}}

VkFormat GetVkFormatFromFormatID(angle::FormatID formatID)
{{
    static constexpr angle::FormatMap<VkFormat> kMap = {{
{format_id_cases}
    }};

    return kMap[formatID];
}}

angle::FormatID GetFormatIDFromVkFormat(VkFormat vkFormat)
{{
    switch (vkFormat)
    {{
{vk_format_cases}
        default:
            UNREACHABLE();
            return angle::FormatID::NONE;
    }}
}}
}}  // namespace vk
}}  // namespace rx
"""

empty_format_entry_template = """case angle::FormatID::{format_id}:
// This format is not implemented in Vulkan.
break;
"""

format_entry_template = """case angle::FormatID::{format_id}:
mIntendedGLFormat = {internal_format};
{image_template}
{buffer_template}
break;
"""

image_basic_template = """mActualSampleOnlyImageFormatID = {image};
mImageInitializerFunction = {image_initializer};"""

image_struct_template = "{{{image}, {image_initializer}}}"

image_fallback_template = """{{
static constexpr ImageFormatInitInfo kInfo[] = {{{image_list}}};
initImageFallback(renderer, kInfo, ArraySize(kInfo));
}}"""

buffer_basic_template = """mActualBufferFormatID = {buffer};
mVkBufferFormatIsPacked = {vk_buffer_format_is_packed};
mVertexLoadFunction = {vertex_load_function};
mVertexLoadRequiresConversion = {vertex_load_converts};"""

buffer_struct_template = """{{{buffer}, {vk_buffer_format_is_packed}, 
{vertex_load_function}, {vertex_load_converts}}}"""

buffer_fallback_template = """{{
static constexpr BufferFormatInitInfo kInfo[] = {{{buffer_list}}};
initBufferFallback(renderer, kInfo, ArraySize(kInfo), {buffer_compressed_offset});
}}"""


def is_packed(format_id):
    return "true" if "_PACK" in format_id else "false"


def verify_vk_map_keys(angle_to_gl, vk_json_data):
    """Verify that the keys in Vulkan format tables exist in the ANGLE table.  If they don't, the
    entry in the Vulkan file is incorrect and needs to be fixed."""

    no_error = True
    for table in ["map", "fallbacks"]:
        for angle_format in vk_json_data[table].keys():
            if angle_format not in angle_to_gl.keys():
                print(f"Invalid format {angle_format} in vk_format_map.json in {table}")
                no_error = False

    return no_error


def get_vertex_copy_function(src_format, dst_format, vk_format):
    if "_PACK" in vk_format:
        pack_bits = int(re.search(r'_PACK(\d+)', vk_format)[1])
        base_type = None
        if pack_bits == 16:
            base_type = 'short'
        elif pack_bits == 32:
            base_type = 'int'
        elif pack_bits == 8:
            base_type = 'byte'
        else:
            return 'nullptr'
        return f'CopyNativeVertexData<GLu{base_type}, 1, 1, 0>'
    if 'R10G10B10A2' in src_format:
        # When the R10G10B10A2 type can't be used by the vertex buffer,
        # it needs to be converted to the type which can be used by it.
        is_signed = 'false' if 'UINT' in src_format or 'UNORM' in src_format or 'USCALED' in src_format else 'true'
        normalized = 'true' if 'NORM' in src_format else 'false'
        to_float = 'false' if 'INT' in src_format else 'true'
        to_half = to_float
        return f'CopyXYZ10W2ToXYZWFloatVertexData<{is_signed}, {normalized}, {to_half}, {to_half}>'

    return angle_format.get_vertex_copy_function(src_format, dst_format)


def gen_format_case(angle, internal_format, vk_json_data):
    vk_map = vk_json_data["map"]
    vk_fallbacks = vk_json_data["fallbacks"]
    args = dict(
        format_id=angle, internal_format=internal_format, image_template="", buffer_template="")

    if ((angle not in vk_map) and (angle not in vk_fallbacks)):
        return empty_format_entry_template.format(**args)

    # get_formats returns override format (if any) + fallbacks
    # this was necessary to support D32_UNORM. There is no appropriate override that allows
    # us to fallback to D32_FLOAT, so now we leave the image override empty and function will
    # give us the fallbacks.
    def get_formats(format, type):
        fallbacks = vk_fallbacks.get(format, {}).get(type, [])
        if not isinstance(fallbacks, list):
            fallbacks = [fallbacks]

        compressed = vk_fallbacks.get(format, {}).get(f"{type}_compressed", [])
        if not isinstance(compressed, list):
            compressed = [compressed]

        fallbacks += compressed

        if format in vk_map:
            fallbacks = [format] + fallbacks

        return (fallbacks, len(fallbacks) - len(compressed))

    def image_args(format):
        return dict(
            image=f"angle::FormatID::{format}",
            image_initializer=angle_format.get_internal_format_initializer(
                internal_format, format
            ),
        )

    def buffer_args(format):
        vk_buffer_format = vk_map[format]
        return dict(
            buffer=f"angle::FormatID::{format}",
            vk_buffer_format_is_packed=is_packed(vk_buffer_format),
            vertex_load_function=get_vertex_copy_function(
                angle, format, vk_buffer_format
            ),
            vertex_load_converts='false' if angle == format else 'true',
        )

    images, images_compressed_offset = get_formats(angle, "image")
    if len(images) == 1:
        args.update(image_template=image_basic_template)
        args.update(image_args(images[0]))
    elif len(images) > 1:
        args.update(
            image_template=image_fallback_template,
            image_list=", ".join(image_struct_template.format(**image_args(i)) for i in images))

    buffers, buffers_compressed_offset = get_formats(angle, "buffer")
    if len(buffers) == 1:
        args.update(buffer_template=buffer_basic_template)
        args.update(buffer_args(buffers[0]))
    elif len(buffers) > 1:
        args.update(
            buffer_template=buffer_fallback_template,
            buffer_list=", ".join(
                buffer_struct_template.format(**buffer_args(i)) for i in buffers),
            buffer_compressed_offset=buffers_compressed_offset)

    return format_entry_template.format(**args).format(**args)


def get_format_id_case(format_id, vk_format):
    return "{angle::FormatID::%s, %s}" % (format_id, vk_format)


def get_vk_format_case(format_id, vk_format):
    return """\
        case %s:
            return angle::FormatID::%s;
""" % (vk_format, format_id)


def main():

    input_file_name = 'vk_format_map.json'
    out_file_name = 'vk_format_table_autogen.cpp'

    # auto_script parameters.
    if len(sys.argv) > 1:
        outputs = [out_file_name]

        if sys.argv[1] == 'inputs':
            inputs = ['../angle_format.py', '../angle_format_map.json', input_file_name]
            print(','.join(inputs))
        elif sys.argv[1] == 'outputs':
            print(','.join(outputs))
        else:
            print('Invalid script parameters')
            return 1
        return 0

    angle_to_gl = angle_format.load_inverse_table(os.path.join('..', 'angle_format_map.json'))
    vk_json_data = angle_format.load_json(input_file_name)

    if not verify_vk_map_keys(angle_to_gl, vk_json_data):
        return 1

    format_id_cases = [
        get_format_id_case(format_id, vk_format)
        for format_id, vk_format in sorted(vk_json_data["map"].items())
    ]

    vk_format_cases = [
        get_vk_format_case(format_id, vk_format)
        for format_id, vk_format in sorted(vk_json_data["map"].items())
    ]

    vk_cases = [
        gen_format_case(angle, gl, vk_json_data) for angle, gl in sorted(angle_to_gl.items())
    ]

    output_cpp = template_table_autogen_cpp.format(
        format_case_data="\n".join(vk_cases),
        format_id_cases=",\n".join(format_id_cases),
        vk_format_cases="".join(vk_format_cases),
        script_name=os.path.basename(__file__),
        out_file_name=out_file_name,
        input_file_name=input_file_name)

    with open(out_file_name, 'wt') as out_file:
        out_file.write(output_cpp)
        out_file.close()
    return 0


if __name__ == '__main__':
    sys.exit(main())
