// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_G3D_CAMERA_HPP_
#define OPENJE_RE_CPP_INCLUDE_G3D_CAMERA_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/G3D_BaseAttribute.hpp"

namespace F3
{
    class G3D_Camera
    {
        public:
            G3D_BaseAttribute g3d_base_attribute;
            dword mbr_0x20;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            dword mbr_0x28;
            dword mbr_0x2c;
            dword mbr_0x30;
            dword mbr_0x34;
            dword mbr_0x38;
            dword mbr_0x3c;

        public:
            G3D_Camera();
            ~G3D_Camera();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_G3D_CAMERA_HPP_
