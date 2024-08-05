// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMEHOTKEYS_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMEHOTKEYS_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/HotKeys.hpp"

namespace F3
{
    class GameHotKeys
    {
        public:
            HotKeys hot_keys;

        public:
            GameHotKeys();
            ~GameHotKeys();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMEHOTKEYS_HPP_
