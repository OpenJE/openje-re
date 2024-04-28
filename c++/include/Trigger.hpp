// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_TRIGGER_HPP_
#define OPENJE_RE_CPP_INCLUDE_TRIGGER_HPP_

#include "openje-re/c++/include/openje_types.hpp"

namespace F3
{
    class Trigger
    {
        public:
            dword mbr_0x4;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            dword mbr_0xc;
            dword mbr_0x10;
            dword mbr_0x14;
            dword mbr_0x18;
            dword mbr_0x1c;
            dword mbr_0x20;
            byte mbr_0x24;

        public:
            Trigger();
            ~Trigger();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_TRIGGER_HPP_
