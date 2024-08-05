// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_HOTKEYS_HPP_
#define OPENJE_RE_CPP_INCLUDE_HOTKEYS_HPP_

#include "openje-re/c++/include/openje_types.hpp"

namespace F3
{
    class HotKeys
    {
        public:
            dword mbr_0x4;
            dword mbr_0x8;
            dword mbr_0xc;
            dword mbr_0x10;
            dword mbr_0x14;

        public:
            HotKeys();
            ~HotKeys();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_HOTKEYS_HPP_
