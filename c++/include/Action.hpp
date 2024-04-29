// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_ACTION_HPP_
#define OPENJE_RE_CPP_INCLUDE_ACTION_HPP_

#include "openje-re/c++/include/openje_types.hpp"

namespace F3
{
    class Action
    {
        protected:
            byte mbr_0x4;

        public:
            Action();

        public:
            virtual ~Action();
            virtual byte vf_a() = 0;
            virtual void vf_b() = 0;
            virtual byte Get_mbr_0x4();
            virtual void vf_d( dword param ) = 0;
            virtual void vf_e() = 0;
            virtual void vf_f() = 0;
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_ACTION_HPP_
