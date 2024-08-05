// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_ACTIONANIM_HPP_
#define OPENJE_RE_CPP_INCLUDE_ACTIONANIM_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Action.hpp"
#include "openje-re/c++/include/Entity.hpp"

namespace F3
{
    class ActionAnim : public Action
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
            Entity * entity; // Some class/object
            dword mbr_0x18;
            dword mbr_0x1c;
            word mbr_0x20;
            byte mbr_0x22;
            byte mbr_0x23;
            dword mbr_0x24;

        public:
            ActionAnim();

        public:
            virtual ~ActionAnim();
            byte vf_a() override;
            void vf_b() override;
            void vf_d( dword param ) override;
            void vf_e() override;
            void vf_f() override;
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_ACTIONANIM_HPP_
