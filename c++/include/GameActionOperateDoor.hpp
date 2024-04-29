// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMEACTIONOPERATEDOOR_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMEACTIONOPERATEDOOR_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Action.hpp"

namespace F3
{
    class GameActionOperateDoor : public Action
    {
        public:
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            byte mbr_0x10;
            undefined None;
            undefined None;
            undefined None;
            dword mbr_0x14;
            dword mbr_0x18;
            dword mbr_0x1c;
            dword mbr_0x20;
            byte mbr_0x24;
            byte mbr_0x25;

        public:
            GameActionOperateDoor();

        public:
            virtual ~GameActionOperateDoor();
            byte vf_a() override;
            void vf_b() override;
            void vf_d( dword param ) override;
            void vf_e() override;
            void vf_f() override;
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMEACTIONOPERATEDOOR_HPP_
