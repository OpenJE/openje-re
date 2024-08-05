// Copyright 2024 OpenJE

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/ActionAnim.hpp"

namespace F3
{
    ActionAnim::ActionAnim() : mbr_0x10( 1 ), mbr_0x18( 0 ), mbr_0x1c( 0 ), mbr_0x20( 0 ), mbr_0x22( 0 ), mbr_0x23( 0 ), mbr_0x24( 0 )
    {
        this->mbr_0x4 = 1;
    }

    ActionAnim::~ActionAnim() {}

    byte ActionAnim::vf_a()
    {
        return this->mbr_0x23;
    }

    void ActionAnim::vf_b()
    {
        //this->entity[ 648 * sizeof(this->entity) ] = 1; // Some class/object member
        this->mbr_0x23 = 1;
        return;
    }

    void ActionAnim::vf_d( dword param )
    {
        /*
        int in_stack_00000004;

        this->entity->meth_0x548d80( this->mbr_0x18, this->mbr_0x1c );
        this->entity->field_0x288 = 0;
        net::critical_section::meth_0x548fc0( this->entity );
        unsigned long long uVar1 = FUN_00616e24();
        this->mbr_0x24 = in_stack_00000004 - (int)uVar1;
        return 0;
        */
    }

    void ActionAnim::vf_e()
    {
        uint in_stack_00000004;

        if (this->mbr_0x24 <= in_stack_00000004)
        {
            this->mbr_0x23 = 1;
        }
        return;
    }

    void ActionAnim::vf_f()
    {
        //this->entity->dynamic_object.field_0x288 = 1;
        return;
    }
} // namespace F3
