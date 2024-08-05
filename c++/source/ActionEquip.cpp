// Copyright 2024 OpenJE

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/ActionEquip.hpp"

namespace F3
{
    ActionEquip::ActionEquip() : mbr_0x10( 1 ), mbr_0x18( 0 )
    {
        this->mbr_0x4 = 1;
    }

    ActionEquip::~ActionEquip() {}

    byte ActionEquip::vf_a()
    {
        return this->mbr_0x18;
    }

    void ActionEquip::vf_b() {}

    void ActionEquip::vf_d( dword param ) {}

    void ActionEquip::vf_e() {}

    void ActionEquip::vf_f() {}
} // namespace F3
