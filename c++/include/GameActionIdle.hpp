// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMEACTIONIDLE_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMEACTIONIDLE_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/ActionIdle.hpp"

namespace F3
{
    class GameActionIdle : public ActionIdle
    {
        public:
            undefined None;
            undefined None;
            undefined None;
            dword mbr_0x1c;
            byte mbr_0x20;

        public:
            GameActionIdle();

        public:
            virtual ~GameActionIdle();
            byte vf_a() override;
            void vf_b() override;
            void vf_d( dword param ) override;
            void vf_e() override;
            void vf_f() override;
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMEACTIONIDLE_HPP_
