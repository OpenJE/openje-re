// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_ACTIONMOVETO_HPP_
#define OPENJE_RE_CPP_INCLUDE_ACTIONMOVETO_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Action.hpp"

namespace F3
{
    class ActionMoveTo : public Action
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
            byte mbr_0x34;
            byte mbr_0x35;
            undefined None;
            undefined None;
            dword mbr_0x38;
            byte mbr_0x3c;
            byte mbr_0x3d;
            undefined None;
            undefined None;
            dword mbr_0x40;
            dword mbr_0x44;

        public:
            ActionMoveTo();

        public:
            virtual ~ActionMoveTo();
            byte vf_a() override;
            void vf_b() override;
            void vf_d( dword param ) override;
            void vf_e() override;
            void vf_f() override;
            virtual float10 vf_g();
            virtual void vf_h();
            virtual void vf_i();
            virtual void vf_j();
            virtual void vf_k();
            virtual void vf_l();
    };
}

#endif // OPENJE_RE_CPP_INCLUDE_ACTIONMOVETO_HPP_
