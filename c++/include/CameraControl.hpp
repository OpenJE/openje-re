// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_CAMERACONTROL_HPP_
#define OPENJE_RE_CPP_INCLUDE_CAMERACONTROL_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Gfx_CamCtrl_Orbit.hpp"

namespace F3
{
    class CameraControl
    {
        public:
            dword mbr_0x4;
            Gfx_CamCtrl_Orbit Gfx_CamCtrl_Orbit;
            word mbr_0xc0;
            word mbr_0xc2;
            dword mbr_0xc4;
            dword mbr_0xc8;
            dword mbr_0xcc;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            dword mbr_0xd4;
            dword mbr_0xd8;
            dword mbr_0xdc;
            dword mbr_0xe0;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            dword mbr_0xec;
            dword mbr_0xf0;
            dword mbr_0xf4;
            dword mbr_0xf8;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            dword mbr_0x100;
            dword mbr_0x104;
            dword mbr_0x108;
            dword mbr_0x10c;
            dword mbr_0x110;
            byte mbr_0x114;
            undefined None;
            undefined None;
            undefined None;
            dword mbr_0x118;
            dword mbr_0x11c;

        public:
            CameraControl();
            ~CameraControl();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_CAMERACONTROL_HPP_
