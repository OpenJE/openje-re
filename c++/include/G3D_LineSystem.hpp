// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_G3D_LINESYSTEM_HPP_
#define OPENJE_RE_CPP_INCLUDE_G3D_LINESYSTEM_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/G3D_BaseAttribute.hpp"

namespace F3
{
    class G3D_LineSystem
    {
        public:
            G3D_BaseAttribute g3d_base_attribute;
            dword mbr_0x20;
            dword mbr_0x24;
            dword mbr_0x28;
            dword mbr_0x2c;
            dword mbr_0x30;

        public:
            G3D_LineSystem();
            ~G3D_LineSystem();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_G3D_LINESYSTEM_HPP_
