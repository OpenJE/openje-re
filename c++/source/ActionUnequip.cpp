// Copyright 2024 OpenJE

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/ActionUnequip.hpp"

namespace F3
{
    ActionUnequip::ActionUnequip() : mbr_0x10( 1 ), mbr_0x18( 0 )
    {
        this->mbr_0x4 = 1;
    }

    ActionUnequip::~ActionUnequip() {}

    byte ActionUnequip::vf_a()
    {
        return this->mbr_0x18;
    }

    void ActionUnequip::vf_b() {}

    void ActionUnequip::vf_d( dword param ) {}

    void ActionUnequip::vf_e() {}

    void ActionUnequip::vf_f() {}
} // namespace F3
