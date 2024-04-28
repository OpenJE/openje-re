// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMEPARTY_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMEPARTY_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Party.hpp"

namespace F3
{
    class GameParty
    {
        public:
            Party party;
            dword mbr_0x14;

        public:
            GameParty();
            ~GameParty();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMEPARTY_HPP_
