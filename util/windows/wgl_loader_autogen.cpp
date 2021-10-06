// GENERATED FILE - DO NOT EDIT.
// Generated by generate_loader.py using data from wgl.xml.
//
// Copyright 2018 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// wgl_loader_autogen.cpp:
//   Simple WGL function loader.

#include "wgl_loader_autogen.h"

PFNCHOOSEPIXELFORMATPROC l__ChoosePixelFormat;
PFNDESCRIBEPIXELFORMATPROC l__DescribePixelFormat;
PFNGETENHMETAFILEPIXELFORMATPROC l__GetEnhMetaFilePixelFormat;
PFNGETPIXELFORMATPROC l__GetPixelFormat;
PFNSETPIXELFORMATPROC l__SetPixelFormat;
PFNSWAPBUFFERSPROC l__SwapBuffers;
PFNWGLCOPYCONTEXTPROC l__wglCopyContext;
PFNWGLCREATECONTEXTPROC l__wglCreateContext;
PFNWGLCREATELAYERCONTEXTPROC l__wglCreateLayerContext;
PFNWGLDELETECONTEXTPROC l__wglDeleteContext;
PFNWGLDESCRIBELAYERPLANEPROC l__wglDescribeLayerPlane;
PFNWGLGETCURRENTCONTEXTPROC l__wglGetCurrentContext;
PFNWGLGETCURRENTDCPROC l__wglGetCurrentDC;
PFNWGLGETLAYERPALETTEENTRIESPROC l__wglGetLayerPaletteEntries;
PFNWGLGETPROCADDRESSPROC l__wglGetProcAddress;
PFNWGLMAKECURRENTPROC l__wglMakeCurrent;
PFNWGLREALIZELAYERPALETTEPROC l__wglRealizeLayerPalette;
PFNWGLSETLAYERPALETTEENTRIESPROC l__wglSetLayerPaletteEntries;
PFNWGLSHARELISTSPROC l__wglShareLists;
PFNWGLSWAPLAYERBUFFERSPROC l__wglSwapLayerBuffers;
PFNWGLUSEFONTBITMAPSPROC l__wglUseFontBitmaps;
PFNWGLUSEFONTBITMAPSAPROC l__wglUseFontBitmapsA;
PFNWGLUSEFONTBITMAPSWPROC l__wglUseFontBitmapsW;
PFNWGLUSEFONTOUTLINESPROC l__wglUseFontOutlines;
PFNWGLUSEFONTOUTLINESAPROC l__wglUseFontOutlinesA;
PFNWGLUSEFONTOUTLINESWPROC l__wglUseFontOutlinesW;
PFNWGLCREATECONTEXTATTRIBSARBPROC l__wglCreateContextAttribsARB;
PFNWGLGETEXTENSIONSSTRINGARBPROC l__wglGetExtensionsStringARB;
PFNWGLGETSWAPINTERVALEXTPROC l__wglGetSwapIntervalEXT;
PFNWGLSWAPINTERVALEXTPROC l__wglSwapIntervalEXT;

namespace angle
{
void LoadWGL(LoadProc loadProc)
{
    l__ChoosePixelFormat =
        reinterpret_cast<PFNCHOOSEPIXELFORMATPROC>(loadProc("ChoosePixelFormat"));
    l__DescribePixelFormat =
        reinterpret_cast<PFNDESCRIBEPIXELFORMATPROC>(loadProc("DescribePixelFormat"));
    l__GetEnhMetaFilePixelFormat =
        reinterpret_cast<PFNGETENHMETAFILEPIXELFORMATPROC>(loadProc("GetEnhMetaFilePixelFormat"));
    l__GetPixelFormat   = reinterpret_cast<PFNGETPIXELFORMATPROC>(loadProc("GetPixelFormat"));
    l__SetPixelFormat   = reinterpret_cast<PFNSETPIXELFORMATPROC>(loadProc("SetPixelFormat"));
    l__SwapBuffers      = reinterpret_cast<PFNSWAPBUFFERSPROC>(loadProc("SwapBuffers"));
    l__wglCopyContext   = reinterpret_cast<PFNWGLCOPYCONTEXTPROC>(loadProc("wglCopyContext"));
    l__wglCreateContext = reinterpret_cast<PFNWGLCREATECONTEXTPROC>(loadProc("wglCreateContext"));
    l__wglCreateLayerContext =
        reinterpret_cast<PFNWGLCREATELAYERCONTEXTPROC>(loadProc("wglCreateLayerContext"));
    l__wglDeleteContext = reinterpret_cast<PFNWGLDELETECONTEXTPROC>(loadProc("wglDeleteContext"));
    l__wglDescribeLayerPlane =
        reinterpret_cast<PFNWGLDESCRIBELAYERPLANEPROC>(loadProc("wglDescribeLayerPlane"));
    l__wglGetCurrentContext =
        reinterpret_cast<PFNWGLGETCURRENTCONTEXTPROC>(loadProc("wglGetCurrentContext"));
    l__wglGetCurrentDC = reinterpret_cast<PFNWGLGETCURRENTDCPROC>(loadProc("wglGetCurrentDC"));
    l__wglGetLayerPaletteEntries =
        reinterpret_cast<PFNWGLGETLAYERPALETTEENTRIESPROC>(loadProc("wglGetLayerPaletteEntries"));
    l__wglGetProcAddress =
        reinterpret_cast<PFNWGLGETPROCADDRESSPROC>(loadProc("wglGetProcAddress"));
    l__wglMakeCurrent = reinterpret_cast<PFNWGLMAKECURRENTPROC>(loadProc("wglMakeCurrent"));
    l__wglRealizeLayerPalette =
        reinterpret_cast<PFNWGLREALIZELAYERPALETTEPROC>(loadProc("wglRealizeLayerPalette"));
    l__wglSetLayerPaletteEntries =
        reinterpret_cast<PFNWGLSETLAYERPALETTEENTRIESPROC>(loadProc("wglSetLayerPaletteEntries"));
    l__wglShareLists = reinterpret_cast<PFNWGLSHARELISTSPROC>(loadProc("wglShareLists"));
    l__wglSwapLayerBuffers =
        reinterpret_cast<PFNWGLSWAPLAYERBUFFERSPROC>(loadProc("wglSwapLayerBuffers"));
    l__wglUseFontBitmaps =
        reinterpret_cast<PFNWGLUSEFONTBITMAPSPROC>(loadProc("wglUseFontBitmaps"));
    l__wglUseFontBitmapsA =
        reinterpret_cast<PFNWGLUSEFONTBITMAPSAPROC>(loadProc("wglUseFontBitmapsA"));
    l__wglUseFontBitmapsW =
        reinterpret_cast<PFNWGLUSEFONTBITMAPSWPROC>(loadProc("wglUseFontBitmapsW"));
    l__wglUseFontOutlines =
        reinterpret_cast<PFNWGLUSEFONTOUTLINESPROC>(loadProc("wglUseFontOutlines"));
    l__wglUseFontOutlinesA =
        reinterpret_cast<PFNWGLUSEFONTOUTLINESAPROC>(loadProc("wglUseFontOutlinesA"));
    l__wglUseFontOutlinesW =
        reinterpret_cast<PFNWGLUSEFONTOUTLINESWPROC>(loadProc("wglUseFontOutlinesW"));
    l__wglCreateContextAttribsARB =
        reinterpret_cast<PFNWGLCREATECONTEXTATTRIBSARBPROC>(loadProc("wglCreateContextAttribsARB"));
    l__wglGetExtensionsStringARB =
        reinterpret_cast<PFNWGLGETEXTENSIONSSTRINGARBPROC>(loadProc("wglGetExtensionsStringARB"));
    l__wglGetSwapIntervalEXT =
        reinterpret_cast<PFNWGLGETSWAPINTERVALEXTPROC>(loadProc("wglGetSwapIntervalEXT"));
    l__wglSwapIntervalEXT =
        reinterpret_cast<PFNWGLSWAPINTERVALEXTPROC>(loadProc("wglSwapIntervalEXT"));
}
}  // namespace angle
