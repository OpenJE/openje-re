// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMEENCYCLOPEDIA_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMEENCYCLOPEDIA_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Encyclopedia.hpp"

namespace F3
{
    class GameEncyclopedia
    {
        public:
            Encyclopedia encyclopedia;

        public:
            GameEncyclopedia();
            ~GameEncyclopedia();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMEENCYCLOPEDIA_HPP_
