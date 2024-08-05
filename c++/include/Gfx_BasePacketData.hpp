// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GFX_BASEPACKETDATA_HPP_
#define OPENJE_RE_CPP_INCLUDE_GFX_BASEPACKETDATA_HPP_

#include "openje-re/c++/include/openje_types.hpp"

namespace F3
{
    class Gfx_BasePacketData
    {
        public:
            byte mbr_0x4;
            undefined None;
            undefined None;
            undefined None;
            dword mbr_0x8;
            dword mbr_0xc;
            dword mbr_0x10;
            dword mbr_0x14;
            dword mbr_0x18;
            dword mbr_0x1c;
            dword mbr_0x20;
            dword mbr_0x24;
            dword mbr_0x28;
            dword mbr_0x2c;
            dword mbr_0x30;
            dword mbr_0x34;
            dword mbr_0x38;
            dword mbr_0x3c;
            byte mbr_0x40;
            undefined None;
            undefined None;
            undefined None;
            dword mbr_0x44;
            dword mbr_0x48;
            dword mbr_0x4c;

        public:
            Gfx_BasePacketData();
            ~Gfx_BasePacketData();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GFX_BASEPACKETDATA_HPP_
