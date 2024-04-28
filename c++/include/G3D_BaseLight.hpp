// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_G3D_BASELIGHT_HPP_
#define OPENJE_RE_CPP_INCLUDE_G3D_BASELIGHT_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/G3D_BaseAttribute.hpp"

namespace F3
{
    class G3D_BaseLight
    {
        public:
            G3D_BaseAttribute g3d_base_attribute;
            dword mbr_0x20;
            dword mbr_0x24;
            dword mbr_0x28;
            dword mbr_0x2c;
            dword mbr_0x30;
            dword mbr_0x34;
            dword mbr_0x38;
            dword mbr_0x3c;
            dword mbr_0x40;
            dword mbr_0x44;
            dword mbr_0x48;
            dword mbr_0x4c;
            dword mbr_0x50;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            dword mbr_0x58;
            dword mbr_0x5c;

        public:
            G3D_BaseLight();
            ~G3D_BaseLight();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_G3D_BASELIGHT_HPP_
