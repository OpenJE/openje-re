// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMEACTIONMOVETO_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMEACTIONMOVETO_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/ActionMoveTo.hpp"

namespace F3
{
    class GameActionMoveTo : public ActionMoveTo
    {
        public:
            GameActionMoveTo();

        public:
            virtual ~GameActionMoveTo();
            byte vf_a() override;
            void vf_b() override;
            void vf_d( dword param ) override;
            void vf_e() override;
            void vf_f() override;
            float10 vf_g() override;
            void vf_h() override;
            void vf_i() override;
            void vf_j() override;
            void vf_k() override;
            void vf_l() override;

    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMEACTIONMOVETO_HPP_
