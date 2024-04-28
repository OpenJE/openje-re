// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMEMAP_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMEMAP_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Map.hpp"

namespace F3
{
    class GameMap
    {
        public:
            Map map;

        public:
            GameMap();
            ~GameMap();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMEMAP_HPP_
