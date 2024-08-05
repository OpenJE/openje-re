// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMEACTIONWANDER_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMEACTIONWANDER_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/ActionWander.hpp"

namespace F3
{
    class GameActionWander : public ActionWander
    {
        public:
            GameActionWander();

        public:
            virtual ~GameActionWander();
            byte vf_a() override;
            void vf_b() override;
            void vf_d( dword param ) override;
            void vf_e() override;
            void vf_f() override;
            virtual void vf_g();
            virtual void vf_h();
            virtual void vf_i();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMEACTIONWANDER_HPP_
