// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_INPUT_WIN32_HPP_
#define OPENJE_RE_CPP_INCLUDE_INPUT_WIN32_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Input.hpp"

namespace F3
{
    class Input_Win32
    {
        public:
            Input input;
            dword mbr_0x18;
            dword mbr_0x1c;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            dword mbr_0x2c;
            dword mbr_0x30;

        public:
            Input_Win32();
            ~Input_Win32();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_INPUT_WIN32_HPP_
