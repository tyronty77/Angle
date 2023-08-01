//
// Copyright 2010 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//

#include "libANGLE/Uniform.h"
#include "libANGLE/ProgramLinkedResources.h"

#include <cstring>

namespace gl
{

ActiveVariable::ActiveVariable()
{
    std::fill(mIds.begin(), mIds.end(), 0);
}

ActiveVariable::~ActiveVariable() {}

ActiveVariable::ActiveVariable(const ActiveVariable &rhs)            = default;
ActiveVariable &ActiveVariable::operator=(const ActiveVariable &rhs) = default;

void ActiveVariable::setActive(ShaderType shaderType, bool used, uint32_t id)
{
    ASSERT(shaderType != ShaderType::InvalidEnum);
    mActiveUseBits.set(shaderType, used);
    mIds[shaderType] = id;
}

void ActiveVariable::unionReferencesWith(const ActiveVariable &other)
{
    mActiveUseBits |= other.mActiveUseBits;
    for (const ShaderType shaderType : AllShaderTypes())
    {
        ASSERT(mIds[shaderType] == 0 || other.mIds[shaderType] == 0 ||
               mIds[shaderType] == other.mIds[shaderType]);
        if (mIds[shaderType] == 0)
        {
            mIds[shaderType] = other.mIds[shaderType];
        }
    }
}

LinkedUniform::LinkedUniform()
    : type(GL_NONE),
      precision(0),
      flagBitsAsUInt(0),
      location(-1),
      binding(-1),
      imageUnitFormat(GL_NONE),
      offset(-1),
      id(0),
      flattenedOffsetInParentArrays(-1),
      typeInfo(nullptr),
      bufferIndex(-1),
      blockInfo(sh::kDefaultBlockMemberInfo),
      outerArraySizeProduct(1),
      outerArrayOffset(0)
{}

LinkedUniform::LinkedUniform(GLenum typeIn,
                             GLenum precisionIn,
                             const std::string &nameIn,
                             const std::vector<unsigned int> &arraySizesIn,
                             const int bindingIn,
                             const int offsetIn,
                             const int locationIn,
                             const int bufferIndexIn,
                             const sh::BlockMemberInfo &blockInfoIn)
    : type(typeIn),
      precision(precisionIn),
      name(nameIn),
      arraySizes(arraySizesIn),
      location(locationIn),
      binding(bindingIn),
      offset(offsetIn),
      typeInfo(&GetUniformTypeInfo(typeIn)),
      bufferIndex(bufferIndexIn),
      blockInfo(blockInfoIn)
{
    flagBitsAsUInt                = 0;
    id                            = 0;
    flattenedOffsetInParentArrays = -1;
    outerArraySizeProduct         = 1;
    outerArrayOffset              = 0;
    imageUnitFormat               = GL_NONE;
    ASSERT(!isArrayOfArrays());
    ASSERT(!isArray() || !isStruct());
}

LinkedUniform::LinkedUniform(const LinkedUniform &other)
{
    *this = other;
}

LinkedUniform::LinkedUniform(const UsedUniform &usedUniform)
{
    type       = usedUniform.type;
    precision  = usedUniform.precision;
    name       = usedUniform.name;
    mappedName = usedUniform.mappedName;
    arraySizes = usedUniform.arraySizes;

    flagBits.staticUse           = usedUniform.staticUse;
    flagBits.active              = usedUniform.active;
    flagBits.isStruct            = usedUniform.isStruct();
    flagBits.rasterOrdered       = usedUniform.rasterOrdered;
    flagBits.readonly            = usedUniform.readonly;
    flagBits.writeonly           = usedUniform.writeonly;
    flagBits.isFragmentInOut     = usedUniform.isFragmentInOut;
    flagBits.texelFetchStaticUse = usedUniform.texelFetchStaticUse;

    flattenedOffsetInParentArrays = usedUniform.getFlattenedOffsetInParentArrays();
    location                      = usedUniform.location;
    binding                       = usedUniform.binding;
    imageUnitFormat               = usedUniform.imageUnitFormat;
    offset                        = usedUniform.offset;
    id                            = usedUniform.id;
    activeVariable                = usedUniform.activeVariable;
    typeInfo                      = usedUniform.typeInfo;
    bufferIndex                   = usedUniform.bufferIndex;
    blockInfo                     = usedUniform.blockInfo;
    outerArraySizeProduct         = ArraySizeProduct(usedUniform.outerArraySizes);
    outerArrayOffset              = usedUniform.outerArrayOffset;
}

LinkedUniform &LinkedUniform::operator=(const LinkedUniform &other)
{
    type                          = other.type;
    precision                     = other.precision;
    name                          = other.name;
    mappedName                    = other.mappedName;
    arraySizes                    = other.arraySizes;
    flagBitsAsUInt                = other.flagBitsAsUInt;
    location                      = other.location;
    binding                       = other.binding;
    imageUnitFormat               = other.imageUnitFormat;
    offset                        = other.offset;
    id                            = other.id;
    flattenedOffsetInParentArrays = other.flattenedOffsetInParentArrays;
    activeVariable                = other.activeVariable;
    typeInfo                      = other.typeInfo;
    bufferIndex                   = other.bufferIndex;
    blockInfo                     = other.blockInfo;
    outerArraySizeProduct         = other.outerArraySizeProduct;
    outerArrayOffset              = other.outerArrayOffset;

    return *this;
}

LinkedUniform::~LinkedUniform() {}

BufferVariable::BufferVariable()
    : bufferIndex(-1), blockInfo(sh::kDefaultBlockMemberInfo), topLevelArraySize(-1)
{}

BufferVariable::BufferVariable(GLenum typeIn,
                               GLenum precisionIn,
                               const std::string &nameIn,
                               const std::vector<unsigned int> &arraySizesIn,
                               const int bufferIndexIn,
                               const sh::BlockMemberInfo &blockInfoIn)
    : bufferIndex(bufferIndexIn), blockInfo(blockInfoIn), topLevelArraySize(-1)
{
    type       = typeIn;
    precision  = precisionIn;
    name       = nameIn;
    arraySizes = arraySizesIn;
}

BufferVariable::~BufferVariable() {}

ShaderVariableBuffer::ShaderVariableBuffer() : binding(0), dataSize(0) {}

ShaderVariableBuffer::ShaderVariableBuffer(const ShaderVariableBuffer &other) = default;

ShaderVariableBuffer::~ShaderVariableBuffer() {}

int ShaderVariableBuffer::numActiveVariables() const
{
    return static_cast<int>(memberIndexes.size());
}

InterfaceBlock::InterfaceBlock() : isArray(false), isReadOnly(false), arrayElement(0) {}

InterfaceBlock::InterfaceBlock(const std::string &nameIn,
                               const std::string &mappedNameIn,
                               bool isArrayIn,
                               bool isReadOnlyIn,
                               unsigned int arrayElementIn,
                               unsigned int firstFieldArraySizeIn,
                               int bindingIn)
    : name(nameIn),
      mappedName(mappedNameIn),
      isArray(isArrayIn),
      isReadOnly(isReadOnlyIn),
      arrayElement(arrayElementIn),
      firstFieldArraySize(firstFieldArraySizeIn)
{
    binding = bindingIn;
}

InterfaceBlock::InterfaceBlock(const InterfaceBlock &other) = default;

std::string InterfaceBlock::nameWithArrayIndex() const
{
    std::stringstream fullNameStr;
    fullNameStr << name;
    if (isArray)
    {
        fullNameStr << "[" << arrayElement << "]";
    }

    return fullNameStr.str();
}

std::string InterfaceBlock::mappedNameWithArrayIndex() const
{
    std::stringstream fullNameStr;
    fullNameStr << mappedName;
    if (isArray)
    {
        fullNameStr << "[" << arrayElement << "]";
    }

    return fullNameStr.str();
}
}  // namespace gl
