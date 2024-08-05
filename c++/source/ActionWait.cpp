// Copyright 2024 OpenJE

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/ActionWait.hpp"

namespace F3
{
    ActionWait::ActionWait() : mbr_0x10( 1 ), mbr_0x18( 0 ), mbr_0x1c( 0 ), mbr_0x20( 0 )
    {
        this->mbr_0x4 = 1;
    }

    ActionWait::~ActionWait() {}

    byte ActionWait::vf_a()
    {
        return this->mbr_0x18;
    }

    void ActionWait::vf_b() {}

    void ActionWait::vf_d( dword param )
    {
        this->mbr_0x1c = param;
    }

    void ActionWait::vf_e()
    {
        /*
        uint in_stack_00000004;

        if ((uint)(*(int *)((int)this + 32) + *(int *)((int)this + 28)) < in_stack_00000004)
        {
            *(undefined *)((int)this + 24) = 1;
        }
        return 0;
        */
    }

    void ActionWait::vf_f() {}
} // namespace F3
