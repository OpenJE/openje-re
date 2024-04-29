// Copyright 2024 OpenJE

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/ActionDie.hpp"

namespace F3
{
    ActionDie::ActionDie() : mbr_0x10( 1 ), mbr_0x18( 0 )
    {
        this->mbr_0x4 = 1;
    }

    ActionDie::~ActionDie() {}

    byte ActionDie::vf_a()
    {
        return this->mbr_0x18;
    }

    void ActionDie::vf_b() {}

    void ActionDie::vf_d( dword param )
    {
        //this->entity->meth_0x551ca0();
    }

    void ActionDie::vf_e() {}

    void ActionDie::vf_f() {}
} // namespace F3
