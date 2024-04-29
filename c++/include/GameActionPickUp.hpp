// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMEACTIONPICKUP_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMEACTIONPICKUP_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/ActionPickUp.hpp"

namespace F3
{
    class GameActionPickUp : public ActionPickUp
    {
        public:
            GameActionPickUp();

        public:
            virtual ~GameActionPickUp();
            byte vf_a() override;
            void vf_b() override;
            void vf_d( dword param ) override;
            void vf_e() override;
            void vf_f() override;
            void vf_g() override;
            void vf_h() override;
            void vf_i() override;
            void vf_j() override;
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMEACTIONPICKUP_HPP_
