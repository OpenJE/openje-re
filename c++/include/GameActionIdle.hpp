// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMEACTIONIDLE_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMEACTIONIDLE_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/ActionIdle.hpp"

namespace F3
{
    class GameActionIdle
    {
        public:
            ActionIdle action_idle;
            undefined None;
            undefined None;
            undefined None;
            dword mbr_0x1c;
            byte mbr_0x20;

        public:
            GameActionIdle();
            ~GameActionIdle();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMEACTIONIDLE_HPP_
