// Copyright 2024 OpenJE

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/ActionWander.hpp"

namespace F3
{
    ActionWander::ActionWander() :
        mbr_0x10( 1 ), mbr_0x18( 0 ), mbr_0x1c( 0 ), mbr_0x20( 0 ), mbr_0x24( 0 ), mbr_0x28( 0 ),
        mbr_0x2c( 0 ), mbr_0x30( 6000 ), mbr_0x34( 0 ), mbr_0x38( 0 ), mbr_0x3c( 0 ), mbr_0x40( 0 )
    {
        this->mbr_0x4 = 1;
    }

    ActionWander::~ActionWander() {}

    byte ActionWander::vf_a()
    {
        return 1;
    }

    void ActionWander::vf_b() {}

    void ActionWander::vf_d( dword param )
    {
        /*
        FUN_005a2850(this);
        return 0;
        */
    }

    void ActionWander::vf_e()
    {
        /*
        undefined4 uVar1;
        undefined4 uVar2;
        bool bVar3;
        ScrollBar *this_00;
        uint uVar4;
        int iVar5;
        cls_0x5a2820 *this_01;
        int *piVar6;
        int extraout_ECX;

        if (DAT_0070bd98 == 0)
        {
            piVar6 = NULL;
        }
        else
        {
            piVar6 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
        }
        this_00 = (ScrollBar *)(**(code **)(*piVar6 + 20))(5);
        uVar4 = _rand();
        GUI::ScrollBar::meth_0x568420(this_00,uVar4 % (*(int *)((int)this + 48) - 1000U) + 1000);
        net::critical_section::meth_0x550720(*(critical_section **)((int)this + 20),(int)this_00);
        bVar3 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
        if (!bVar3)
        {
    // WARNING: Subroutine does not return
            __CxxThrowException@8(&stack0xfffffff0,&DAT_006d8834);
        }
        if (DAT_0070bd98 == 0)
        {
            iVar5 = 0;
        }
        else
        {
            iVar5 = DAT_0070bd98 + 4;
        }
        iVar5 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar5 + 4) + 4) + 4 + iVar5) + 20))(2);
        uVar1 = *(undefined4 *)((int)this + 60);
        uVar2 = *(undefined4 *)((int)this + 64);
        *(undefined4 *)(iVar5 + 36) = *(undefined4 *)((int)this + 56);
        *(undefined4 *)(iVar5 + 44) = uVar2;
        *(undefined4 *)(iVar5 + 40) = uVar1;
        net::critical_section::meth_0x550720(*(critical_section **)((int)this + 20),iVar5);
        if (*(int *)((int)this + 52) != 1)
        {
            if (DAT_0070bd98 == 0)
            {
                piVar6 = NULL;
            }
            else
            {
                piVar6 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
            }
            this_01 = (cls_0x5a2820 *)(**(code **)(*piVar6 + 20))(4);
            cls_0x5a2820::meth_0x5a2820(this_01,(undefined4 *)((int)this + 24),(undefined4 *)((int)this + 36));
            if (*(int *)((int)this + 52) == 0)
            {
                *(undefined4 *)(extraout_ECX + 52) = 0;
            }
            else
            {
                iVar5 = *(int *)((int)this + 52) + -1;
                *(int *)((int)this + 52) = iVar5;
                *(int *)(extraout_ECX + 52) = iVar5;
            }
            net::critical_section::meth_0x550720(*(critical_section **)((int)this + 20),extraout_ECX);
        }
        return 1;
        */
    }

    void ActionWander::vf_f() {}
} // namespace F3
