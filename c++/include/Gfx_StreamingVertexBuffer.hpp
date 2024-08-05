// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GFX_STREAMINGVERTEXBUFFER_HPP_
#define OPENJE_RE_CPP_INCLUDE_GFX_STREAMINGVERTEXBUFFER_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Gfx_VertexBuffer.hpp"

namespace F3
{
    class Gfx_StreamingVertexBuffer
    {
        public:
            Gfx_VertexBuffer gfx_vertex_buffer;
            dword mbr_0x14;

        public:
            Gfx_StreamingVertexBuffer();
            ~Gfx_StreamingVertexBuffer();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GFX_STREAMINGVERTEXBUFFER_HPP_
