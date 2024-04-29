// Copyright 2024 OpenJE

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/ActionSetActiveWeapon.hpp"

namespace F3
{
    ActionSetActiveWeapon::ActionSetActiveWeapon() : mbr_0x10( 1 ), mbr_0x18( 0 )
    {
        this->mbr_0x4 = 1;
    }

    ActionSetActiveWeapon::~ActionSetActiveWeapon() {}

    byte ActionSetActiveWeapon::vf_a()
    {
        return this->mbr_0x18;
    }

    void ActionSetActiveWeapon::vf_b() {}

    void ActionSetActiveWeapon::vf_d( dword param ) {}

    void ActionSetActiveWeapon::vf_e() {}

    void ActionSetActiveWeapon::vf_f() {}
} // namespace F3
