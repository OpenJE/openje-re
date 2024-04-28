// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GFX_VERTEXBUFFER_HPP_
#define OPENJE_RE_CPP_INCLUDE_GFX_VERTEXBUFFER_HPP_

#include "openje-re/c++/include/openje_types.hpp"

namespace F3
{
    class Gfx_VertexBuffer
    {
        public:
            dword mbr_0x4;
            dword mbr_0x8;
            dword mbr_0xc;
            dword mbr_0x10;

        public:
            Gfx_VertexBuffer();
            ~Gfx_VertexBuffer();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GFX_VERTEXBUFFER_HPP_
