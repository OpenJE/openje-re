// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMEACTIONWAIT_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMEACTIONWAIT_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/ActionWait.hpp"

namespace F3
{
    class GameActionWait : public ActionWait
    {
        public:
            GameActionWait();

        public:
            virtual ~GameActionWait();
            byte vf_a() override;
            void vf_b() override;
            void vf_d( dword param ) override;
            void vf_e() override;
            void vf_f() override;
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMEACTIONWAIT_HPP_
