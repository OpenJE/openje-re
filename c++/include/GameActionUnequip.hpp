// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMEACTIONUNEQUIP_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMEACTIONUNEQUIP_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/ActionUnequip.hpp"

namespace F3
{
    class GameActionUnequip : public ActionUnequip
    {
        public:
            undefined None;
            undefined None;
            undefined None;
            dword mbr_0x1c;
            dword mbr_0x20;
            byte mbr_0x24;

        public:
            GameActionUnequip();

        public:
            virtual ~GameActionUnequip();
            byte vf_a() override;
            void vf_b() override;
            void vf_d( dword param ) override;
            void vf_e() override;
            void vf_f() override;
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMEACTIONUNEQUIP_HPP_
