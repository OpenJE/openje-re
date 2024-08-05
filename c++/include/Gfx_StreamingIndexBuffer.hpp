// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GFX_STREAMINGINDEXBUFFER_HPP_
#define OPENJE_RE_CPP_INCLUDE_GFX_STREAMINGINDEXBUFFER_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Gfx_IndexBuffer.hpp"

namespace F3
{
    class Gfx_StreamingIndexBuffer
    {
        public:
            Gfx_IndexBuffer gfx_index_buffer;
            dword mbr_0x10;
            dword mbr_0x14;

        public:
            Gfx_StreamingIndexBuffer();
            ~Gfx_StreamingIndexBuffer();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GFX_STREAMINGINDEXBUFFER_HPP_
