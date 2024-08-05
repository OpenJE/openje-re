// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMEWORLD_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMEWORLD_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/World.hpp"

namespace F3
{
    class GameWorld
    {
        public:
            World world;
            dword mbr_0x164;

        public:
            GameWorld();
            ~GameWorld();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMEWORLD_HPP_
