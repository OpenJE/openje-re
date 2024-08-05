// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_WATERTILEMODELINSTANCE_HPP_
#define OPENJE_RE_CPP_INCLUDE_WATERTILEMODELINSTANCE_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/ModelInstance.hpp"

namespace F3
{
    class WaterTileModelInstance
    {
        public:
            ModelInstance model_instance;
            dword mbr_0x54;
            dword mbr_0x58;
            dword mbr_0x5c;
            dword mbr_0x60;
            dword mbr_0x64;
            dword mbr_0x68;
            dword mbr_0x6c;
            dword mbr_0x70;

        public:
            WaterTileModelInstance();
            ~WaterTileModelInstance();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_WATERTILEMODELINSTANCE_HPP_
