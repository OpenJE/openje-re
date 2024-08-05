// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_ACTIONWAIT_HPP_
#define OPENJE_RE_CPP_INCLUDE_ACTIONWAIT_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Action.hpp"

namespace F3
{
    class ActionWait : public Action
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
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            byte mbr_0x18;
            undefined None;
            undefined None;
            undefined None;
            dword mbr_0x1c;
            dword mbr_0x20;

        public:
            ActionWait();

        public:
            virtual ~ActionWait();
            byte vf_a() override;
            void vf_b() override;
            void vf_d( dword param ) override;
            void vf_e() override;
            void vf_f() override;
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_ACTIONWAIT_HPP_
