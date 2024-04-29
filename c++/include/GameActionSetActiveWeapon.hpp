// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMEACTIONSETACTIVEWEAPON_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMEACTIONSETACTIVEWEAPON_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/ActionSetActiveWeapon.hpp"

namespace F3
{
    class GameActionSetActiveWeapon : public ActionSetActiveWeapon
    {
        public:
            undefined None;
            undefined None;
            undefined None;
            dword mbr_0x1c;
            dword mbr_0x20;
            dword mbr_0x24;
            dword mbr_0x28;
            dword mbr_0x2c;
            byte mbr_0x30;
            undefined None;
            undefined None;
            undefined None;
            dword mbr_0x34;
            byte mbr_0x38;
            undefined None;
            undefined None;
            undefined None;
            dword mbr_0x3c;
            byte mbr_0x40;
            byte mbr_0x41;

        public:
            GameActionSetActiveWeapon();

        public:
            virtual ~GameActionSetActiveWeapon();
            byte vf_a() override;
            void vf_b() override;
            void vf_d( dword param ) override;
            void vf_e() override;
            void vf_f() override;
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMEACTIONSETACTIVEWEAPON_HPP_
