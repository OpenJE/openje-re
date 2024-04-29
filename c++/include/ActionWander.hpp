    // Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_ACTIONWANDER_HPP_
#define OPENJE_RE_CPP_INCLUDE_ACTIONWANDER_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Action.hpp"

namespace F3
{
    class ActionWander : public Action
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
            dword mbr_0x24;
            dword mbr_0x28;
            dword mbr_0x2c;
            dword mbr_0x30;
            dword mbr_0x34;
            dword mbr_0x38;
            dword mbr_0x3c;
            dword mbr_0x40;

        public:
            ActionWander();

        public:
            virtual ~ActionWander();
            byte vf_a() override;
            void vf_b() override;
            void vf_d( dword param ) override;
            void vf_e() override;
            void vf_f() override;
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_ACTIONWANDER_HPP_
