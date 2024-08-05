// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GFX_CUBETEX_HPP_
#define OPENJE_RE_CPP_INCLUDE_GFX_CUBETEX_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Gfx_Texture.hpp"

namespace F3
{
    class Gfx_CubeTex
    {
        public:
            Gfx_Texture gfx_texture;
            dword mbr_0x34;

        public:
            Gfx_CubeTex();
            ~Gfx_CubeTex();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GFX_CUBETEX_HPP_
