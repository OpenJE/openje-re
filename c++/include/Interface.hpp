// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_INTERFACE_HPP_
#define OPENJE_RE_CPP_INCLUDE_INTERFACE_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/HeapTracker.hpp"

namespace F3
{
    class Interface
    {
        public:
            HeapTracker heap_tracker;
            undefined None;
            undefined None;
            undefined None;
            dword mbr_0x4;
            dword mbr_0x8;
            dword mbr_0xc;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            dword mbr_0x18;
            dword mbr_0x1c;
            byte mbr_0x20;
            undefined None;
            undefined None;
            undefined None;
            dword mbr_0x24;
            dword mbr_0x28;
            dword mbr_0x2c;
            byte mbr_0x30;

        public:
            Interface();
            ~Interface();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_INTERFACE_HPP_
