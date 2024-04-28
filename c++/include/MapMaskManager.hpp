// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_MAPMASKMANAGER_HPP_
#define OPENJE_RE_CPP_INCLUDE_MAPMASKMANAGER_HPP_

#include "openje-re/c++/include/openje_types.hpp"

namespace F3
{
    class MapMaskManager
    {
        public:
            dword mbr_0x4;
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

        public:
            MapMaskManager();
            ~MapMaskManager();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_MAPMASKMANAGER_HPP_
