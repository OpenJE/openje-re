// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMEEFFECTDAMAGE_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMEEFFECTDAMAGE_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/GameEffect.hpp"

namespace F3
{
    class GameEffectDamage
    {
        public:
            GameEffect game_effect;
            dword mbr_0x9c;
            dword mbr_0xa0;
            dword mbr_0xa4;
            dword mbr_0xa8;
            byte mbr_0xac;
            byte mbr_0xad;

        public:
            GameEffectDamage();
            ~GameEffectDamage();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMEEFFECTDAMAGE_HPP_
