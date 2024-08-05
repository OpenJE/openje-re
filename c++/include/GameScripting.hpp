// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMESCRIPTING_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMESCRIPTING_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Scripting.hpp"

namespace F3
{
    class GameScripting
    {
        public:
            Scripting scripting;

        public:
            GameScripting();
            ~GameScripting();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMESCRIPTING_HPP_
