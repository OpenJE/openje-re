// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMEACTIONDIE_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMEACTIONDIE_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/ActionDie.hpp"

namespace F3
{
    class GameActionDie
    {
        public:
            ActionDie action_die;
            undefined None;
            undefined None;
            undefined None;
            dword mbr_0x1c;
            dword mbr_0x20;
            dword mbr_0x24;
            byte mbr_0x28;

        public:
            GameActionDie();
            ~GameActionDie();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMEACTIONDIE_HPP_
