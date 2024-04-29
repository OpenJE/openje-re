// Copyright 2024 OpenJE

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/ActionIdle.hpp"

namespace F3
{
    ActionIdle::ActionIdle() : mbr_0x10( 1 ), mbr_0x18( 0 )
    {
        this->mbr_0x4 = 1;
    }

    ActionIdle::~ActionIdle() {}

    byte ActionIdle::vf_a()
    {
        return this->mbr_0x18;
    }

    void ActionIdle::vf_b() {}

    void ActionIdle::vf_d( dword param ) {}

    void ActionIdle::vf_e()
    {
        this->mbr_0x18 = 1;
    }

    void ActionIdle::vf_f() {}
} // namespace F3
