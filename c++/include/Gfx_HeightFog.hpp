// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GFX_HEIGHTFOG_HPP_
#define OPENJE_RE_CPP_INCLUDE_GFX_HEIGHTFOG_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Gfx_BaseObject.hpp"

namespace F3
{
    class Gfx_HeightFog
    {
        public:
            Gfx_BaseObject gfx_base_object;
            dword mbr_0x40;
            dword mbr_0x44;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            dword mbr_0x4c;
            dword mbr_0x50;
            dword mbr_0x54;
            dword mbr_0x58;
            dword mbr_0x5c;
            dword mbr_0x60;

        public:
            Gfx_HeightFog();
            ~Gfx_HeightFog();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GFX_HEIGHTFOG_HPP_
