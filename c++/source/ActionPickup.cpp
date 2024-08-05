// Copyright 2024 OpenJE

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/ActionPickup.hpp"

namespace F3
{
    ActionPickUp::ActionPickUp() :
        mbr_0x10( 1 ), mbr_0x20( 0 ), mbr_0x24( 0 ), mbr_0x28( 0 ), mbr_0x2c( 1 ), mbr_0x2d( 0 ), mbr_0x1c( 0 ), mbr_0x18( 0 )
    {
        this->mbr_0x4 = 1;
    }

    ActionPickUp::~ActionPickUp() {}

    byte ActionPickUp::vf_a()
    {
        return this->mbr_0x2d;
    }

    void ActionPickUp::vf_b() {}

    void ActionPickUp::vf_d( dword param ) {}

    void ActionPickUp::vf_e()
    {
        /*
        dword dVar1;
        float fVar2;
        uint uVar3;
        dword dVar4;
        undefined4 uVar5;
        GameActionMoveTo *this_00;
        GameActionPickUp *this_01;
        int *piVar6;
        int extraout_ECX;
        undefined4 unaff_ESI;
        ulonglong uVar7;
        uint in_stack_00000004;
        undefined4 local_28;
        float local_24;
        float local_20;
        float local_1c;
        float local_18;
        float local_14;
        float local_10;
        Vec3 local_c;

        dVar4 = GameActionEquip::meth_0x54be10((GameActionEquip *)this);
        uVar3 = in_stack_00000004;
        this->mbr_0x18 = dVar4;
        if (dVar4 == 0)
        {
            this->mbr_0x2d = 1;
            return 0;
        }
        dVar1 = this->mbr_0x14;
        if (*(int *)(dVar4 + 492) == *(int *)(dVar1 + 492))
        {
            local_18 = *(float *)(dVar1 + 4);
            local_14 = *(float *)(dVar1 + 8);
            local_10 = *(float *)(dVar1 + 12);
            local_24 = *(float *)(dVar4 + 4);
            local_20 = *(float *)(dVar4 + 8);
            local_1c = *(float *)(dVar4 + 12);
            fVar2 = SQRT((local_18 - local_24) * (local_18 - local_24) + (local_14 - local_20) * (local_14 - local_20) + (local_10 - local_1c) * (local_10 - local_1c));
            uVar5 = CONCAT22((short)((uint)local_1c >> 16),(ushort)(fVar2 < 3.0) << 8 | (ushort)NAN(fVar2) << 10 | (ushort)(fVar2 == 3.0) << 14);
            if (fVar2 < 3.0)
            {
                if (this->mbr_0x2c != 0)
                {
                    local_c.x = local_24 - local_18;
                    this->mbr_0x2c = 0;
                    local_c.y = local_20 - local_14;
                    local_c.z = local_1c - local_10;
                    vec3::normalize(&local_c);
                    return uVar5;
                }
                if ((this->mbr_0x20 != 0) && (this->mbr_0x20 <= in_stack_00000004))
                {
                    (*(this->Action).vftptr_0x0[1].virt_meth_0x6162e5_4)(&stack0x00000004,&local_28);
                    if (in_stack_00000004 == 4294967295)
                    {
                        this->mbr_0x24 = uVar3;
                    }
                    else
                    {
                        Entity::meth_0x548d80((Entity *)this->mbr_0x14,in_stack_00000004,local_28);
                        net::critical_section::meth_0x548fc0((critical_section *)this->mbr_0x14);
                        uVar7 = FUN_00616e24();
                        this->mbr_0x24 = uVar3 - (int)uVar7;
                    }
                    this->mbr_0x20 = 0;
                }
                if ((this->mbr_0x24 != 0) && (this->mbr_0x24 <= uVar3))
                {
                    Server::meth_0x5556c0(*(Server **)(DAT_0070bd90 + 24),(int *)this->mbr_0x18);
                    Server::meth_0x555640(*(Server **)(DAT_0070bd90 + 24),this->mbr_0x14,this->mbr_0x18);
                    (*(this->Action).vftptr_0x0[1].virt_meth_0x6162e5_8)(&stack0x00000004,&local_28);
                    if (in_stack_00000004 == 4294967295)
                    {
                        this->mbr_0x28 = uVar3;
                    }
                    else
                    {
                        Entity::meth_0x548d80((Entity *)this->mbr_0x14,in_stack_00000004,local_28);
                        net::critical_section::meth_0x548fc0((critical_section *)this->mbr_0x14);
                        uVar7 = FUN_00616e24();
                        this->mbr_0x28 = uVar3 - (int)uVar7;
                    }
                    this->mbr_0x24 = 0;
                }
                if ((this->mbr_0x28 != 0) && (this->mbr_0x28 <= uVar3))
                {
                    (*(this->Action).vftptr_0x0[1].virt_meth_0x4010d0_12)(this);
                    if (local_c.z != -NAN)
                    {
                        Entity::meth_0x548d80((Entity *)this->mbr_0x14,(int)local_c.z,unaff_ESI);
                    }
                    this->mbr_0x28 = 0;
                    this->mbr_0x2d = 1;
                }
                return 0;
            }
            if (DAT_0070bd98 == 0)
            {
                piVar6 = NULL;
            }
            else
            {
                piVar6 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
            }
            this_00 = (GameActionMoveTo *)(**(code **)(*piVar6 + 20))(2);
            GameActionMoveTo::meth_0x55b350(this_00,this->mbr_0x18);
            (this_00->ActionMoveTo).mbr_0x30 = 3;
            net::critical_section::meth_0x550720((critical_section *)this->mbr_0x14,(int)this_00);
            if (DAT_0070bd98 == 0)
            {
                piVar6 = NULL;
            }
            else
            {
                piVar6 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
            }
            this_01 = (GameActionPickUp *)(**(code **)(*piVar6 + 20))(3);
            GameActionPickUp::meth_0x406a30(this_01,this->mbr_0x18);
            net::critical_section::meth_0x550720((critical_section *)this->mbr_0x14,extraout_ECX);
        }
        this->mbr_0x2d = 1;
        return 0
        */
    }

    void ActionPickUp::vf_f() {}
} // namespace F3
