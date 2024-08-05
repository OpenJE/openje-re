// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GFX_RS_SK_B_LM_HEIGHTFOG_HPP_
#define OPENJE_RE_CPP_INCLUDE_GFX_RS_SK_B_LM_HEIGHTFOG_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Gfx_RenderStyle.hpp"

namespace F3
{
    class Gfx_RS_SK_B_LM_HeightFog
    {
        public:
            Gfx_RenderStyle gfx_render_style;
            dword mbr_0x4;
            dword mbr_0x8;
            dword mbr_0xc;
            dword mbr_0x10;
            dword mbr_0x14;
            dword mbr_0x18;

        public:
            Gfx_RS_SK_B_LM_HeightFog();
            ~Gfx_RS_SK_B_LM_HeightFog();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GFX_RS_SK_B_LM_HEIGHTFOG_HPP_
