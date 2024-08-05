// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMEWORLDMAP_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMEWORLDMAP_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/WorldMap.hpp"

namespace F3
{
    class GameWorldMap
    {
        public:
            WorldMap world_map;

        public:
            GameWorldMap();
            ~GameWorldMap();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMEWORLDMAP_HPP_
