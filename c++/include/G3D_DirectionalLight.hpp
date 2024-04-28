// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_G3D_DIRECTIONALLIGHT_HPP_
#define OPENJE_RE_CPP_INCLUDE_G3D_DIRECTIONALLIGHT_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/G3D_BaseLight.hpp"

namespace F3
{
    class G3D_DirectionalLight
    {
        public:
            G3D_BaseLight g3d_base_light;
            dword mbr_0x60;
            dword mbr_0x64;
            dword mbr_0x68;
            dword mbr_0x6c;
            dword mbr_0x70;
            dword mbr_0x74;

        public:
            G3D_DirectionalLight();
            ~G3D_DirectionalLight();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_G3D_DIRECTIONALLIGHT_HPP_
