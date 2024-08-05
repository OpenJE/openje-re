// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMEJOURNAL_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMEJOURNAL_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Journal.hpp"

namespace F3
{
    class GameJournal
    {
        public:
            Journal journal;
            dword mbr_0x10;
            dword mbr_0x14;
            dword mbr_0x18;

        public:
            GameJournal();
            ~GameJournal();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMEJOURNAL_HPP_
