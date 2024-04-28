// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_EFFECTTREERINGTRIGGER_HPP_
#define OPENJE_RE_CPP_INCLUDE_EFFECTTREERINGTRIGGER_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/EffectTreeTrigger.hpp"

namespace F3
{
    class EffectTreeRingTrigger
    {
        public:
            EffectTreeTrigger effect_tree_trigger;
            dword mbr_0x88;
            dword mbr_0x8c;

        public:
            EffectTreeRingTrigger();
            ~EffectTreeRingTrigger();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_EFFECTTREERINGTRIGGER_HPP_
