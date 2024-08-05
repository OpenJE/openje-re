// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GFX_RS_BASE_FOW_HPP_
#define OPENJE_RE_CPP_INCLUDE_GFX_RS_BASE_FOW_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Gfx_RenderStyle.hpp"

namespace F3
{
    class Gfx_RS_Base_FOW
    {
        public:
            Gfx_RenderStyle gfx_render_style;
            dword mbr_0x4;
            dword mbr_0x8;
            dword mbr_0xc;
            dword mbr_0x10;

        public:
            Gfx_RS_Base_FOW();
            ~Gfx_RS_Base_FOW();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GFX_RS_BASE_FOW_HPP_
