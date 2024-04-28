// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_COMBAT_HPP_
#define OPENJE_RE_CPP_INCLUDE_COMBAT_HPP_

#include "openje-re/c++/include/openje_types.hpp"

namespace F3
{
    class Combat
    {
        public:
            dword mbr_0x4;
            byte mbr_0x8;
            undefined None;
            undefined None;
            undefined None;
            dword mbr_0xc;
            dword mbr_0x10;
            byte mbr_0x14;
            byte mbr_0x15;
            undefined None;
            undefined None;
            dword mbr_0x18;
            dword mbr_0x1c;
            dword mbr_0x20;

        public:
            Combat();
            ~Combat();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_COMBAT_HPP_
