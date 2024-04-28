// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_G3D_WATERTILE_HPP_
#define OPENJE_RE_CPP_INCLUDE_G3D_WATERTILE_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/G3D_Mesh.hpp"

namespace F3
{
    class G3D_WaterTile
    {
        public:
            G3D_Mesh g3d_mesh;
            dword mbr_0x9c;
            dword mbr_0xa0;
            dword mbr_0xa4;
            dword mbr_0xa8;
            dword mbr_0xac;

        public:
            G3D_WaterTile();
            ~G3D_WaterTile();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_G3D_WATERTILE_HPP_
