// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GFX_INDEXBUFFER_HPP_
#define OPENJE_RE_CPP_INCLUDE_GFX_INDEXBUFFER_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Gfx_BaseObject.hpp"

namespace F3
{
    class Gfx_IndexBuffer
    {
        public:
            dword mbr_0x4;
            dword mbr_0x8;
            dword mbr_0xc;

        public:
            Gfx_IndexBuffer();
            ~Gfx_IndexBuffer();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GFX_INDEXBUFFER_HPP_
