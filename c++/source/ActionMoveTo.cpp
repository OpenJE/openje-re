// Copyright 2024 OpenJE

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/ActionMoveTo.hpp"

namespace F3
{
    ActionMoveTo::ActionMoveTo() {}

    ActionMoveTo::~ActionMoveTo() {}

    byte ActionMoveTo::vf_a()
    {
        return this->mbr_0x3d;
    }

    void ActionMoveTo::vf_b()
    {
        //this->mbr_0x14[ 930 * sizeof(this->mbr_0x14) ] = 0;
    }

    void ActionMoveTo::vf_d( dword param )
    {
        /*
        dword dVar1;
        cls_0x560390 *pcVar2;
        int iVar3;
        undefined extraout_DL;
        undefined uVar4;
        void *local_c;
        undefined *puStack_8;
        undefined4 local_4;

        local_4 = 4294967295;
        puStack_8 = &LAB_00637feb;
        local_c = ExceptionList;
        ExceptionList = &local_c;
        dVar1 = GameActionEquip::meth_0x54be10((GameActionEquip *)this);
        this->mbr_0x1c = dVar1;
        if (dVar1 != 0)
        {
            if (*(int *)(dVar1 + 492) != *(int *)(this->mbr_0x14 + 492))
            {
                GameActionMoveTo::meth_0x55b420((GameActionMoveTo *)this,'\x01');
                ExceptionList = local_c;
                return 0;
            }
            this->mbr_0x24 = *(dword *)(dVar1 + 4);
            this->mbr_0x28 = *(dword *)(dVar1 + 8);
            this->mbr_0x2c = *(dword *)(dVar1 + 12);
        }
        if (this->mbr_0x18 == 0)
        {
            pcVar2 = (cls_0x560390 *)operator_new(96);
            local_4 = 0;
            if (pcVar2 == NULL)
            {
                pcVar2 = NULL;
            }
            else
            {
                pcVar2 = cls_0x560390::cls_0x560390(pcVar2,this->mbr_0x14,this->mbr_0x24,this->mbr_0x28,this->mbr_0x2c,0,0,0);
            }
            local_4 = 4294967295;
            this->mbr_0x18 = (dword)pcVar2;
            iVar3 = FUN_00401150();
            uVar4 = (undefined)this->mbr_0x18;
            iVar3 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar3 + 4) + 4) + 4 + iVar3) + 100))();
            FUN_00561b90(iVar3,extraout_DL,uVar4);
        }
        ExceptionList = local_c;
        return 0;
        */
    }

    void ActionMoveTo::vf_e()
    {
        /*
        dword *__return_storage_ptr__;
        Action::vftable_647888 *pAVar1;
        Entity *this_00;
        float fVar2;
        undefined4 uVar3;
        cls_0x560390 *pcVar4;
        int iVar5;
        dword dVar6;
        int *piVar7;
        Action *pAVar8;
        undefined2 uVar10;
        undefined4 *puVar9;
        undefined extraout_DL;
        float *unaff_EDI;
        float10 extraout_ST0;
        float10 extraout_ST0_00;
        float10 extraout_ST0_01;
        float10 extraout_ST0_02;
        float10 fVar11;
        dword in_stack_00000004;
        undefined uVar12;
        float local_38;
        cls_0x560390 *local_34;
        float local_30;
        float local_2c;
        float local_28;
        float local_24;
        float local_20;
        float local_1c;
        Vec3 VStack_18;
        void *local_c;
        undefined *puStack_8;
        undefined4 local_4;

        local_4 = 4294967295;
        puStack_8 = &LAB_0063800b;
        local_c = ExceptionList;
        piVar7 = (int *)this->mbr_0x18;
        if (piVar7 == NULL)
        {
            ExceptionList = &local_c;
            (**(code **)(*(int *)this->mbr_0x14 + 120))();
            GameActionMoveTo::meth_0x55b420((GameActionMoveTo *)this,'\x01');
            ExceptionList = local_c;
            return 0;
        }
        if (piVar7[1] == 0)
        {
            if (*piVar7 != 2)
            {
                return 0;
            }
            ExceptionList = &local_c;
            (*(this->Action).vftptr_0x0[1].virt_meth_0x6162e5_16)();
            (**(code **)(*(int *)this->mbr_0x14 + 120))();
            GameActionMoveTo::meth_0x55b420((GameActionMoveTo *)this,'\x01');
            ExceptionList = local_c;
            return 0;
        }
        if (*(int *)(piVar7[1] + 8) == 0)
        {
            ExceptionList = &local_c;
            (*(this->Action).vftptr_0x0[1].virt_meth_0x6162e5_16)();
            (**(code **)(*(int *)this->mbr_0x14 + 124))();
            GameActionMoveTo::meth_0x55b420((GameActionMoveTo *)this,'\x01');
        }
        else
        {
            ExceptionList = &local_c;
            if (this->mbr_0x35 == 0)
            {
                ExceptionList = &local_c;
                this->mbr_0x35 = 1;
                *(undefined *)(this->mbr_0x14 + 930) = 1;
                pAVar1 = (this->Action).vftptr_0x0;
                this->mbr_0x40 = in_stack_00000004;
                this->mbr_0x44 = in_stack_00000004;
                (*pAVar1[1].virt_meth_0x4010d0_12)(this);
            }
            dVar6 = this->mbr_0x1c;
            if (dVar6 != 0)
            {
                piVar7 = (int *)this->mbr_0x14;
                if (*(int *)(dVar6 + 492) != piVar7[123])
                {
                    (*(this->Action).vftptr_0x0[1].virt_meth_0x6162e5_16)();
                    (**(code **)(*(int *)this->mbr_0x14 + 120))();
                    GameActionMoveTo::meth_0x55b420((GameActionMoveTo *)this,'\x01');
                    ExceptionList = local_c;
                    return 0;
                }
                __return_storage_ptr__ = &this->mbr_0x24;
                FUN_00401070((void *)(dVar6 + 4),(float10 *)__return_storage_ptr__,unaff_EDI);
                if (extraout_ST0 <= (float10)20.0)
                {
                    FUN_00401070((void *)(dVar6 + 4),(float10 *)(piVar7 + 1),unaff_EDI);
                    fVar11 = (float10)this->mbr_0x30;
                    if ((int)this->mbr_0x30 < 0)
                    {
                        fVar11 = fVar11 + (float10)4.294967e+09;
                    }
                    if (extraout_ST0_00 <= fVar11)
                    {
                        if ((this->mbr_0x3c != 0) && (dVar6 = (**(code **)(*piVar7 + 144))(), dVar6 != this->mbr_0x38))
                        {
                            ExceptionList = local_c;
                            return 0;
                        }
                        (*(this->Action).vftptr_0x0[1].virt_meth_0x6162e5_16)();
                        (**(code **)(*(int *)this->mbr_0x14 + 124))();
                        GameActionMoveTo::meth_0x55b420((GameActionMoveTo *)this,'\x01');
                        ExceptionList = local_c;
                        return 0;
                    }
                }
                else if (1999 < in_stack_00000004 - this->mbr_0x44)
                {
                    piVar7 = (int *)this->mbr_0x18;
                    this->mbr_0x44 = in_stack_00000004;
                    if (piVar7 != NULL)
                    {
                        uVar3 = FUN_00562e90(piVar7);
                        _free(piVar7);
                        return uVar3;
                    }
                    dVar6 = this->mbr_0x1c;
                    *__return_storage_ptr__ = *(dword *)(dVar6 + 4);
                    this->mbr_0x28 = *(dword *)(dVar6 + 8);
                    this->mbr_0x2c = *(dword *)(dVar6 + 12);
                    local_34 = (cls_0x560390 *)operator_new(96);
                    local_4 = 0;
                    if (local_34 == NULL)
                    {
                        pcVar4 = NULL;
                    }
                    else
                    {
                        pcVar4 = cls_0x560390::cls_0x560390(local_34,this->mbr_0x14,*__return_storage_ptr__,this->mbr_0x28,this->mbr_0x2c,0,0,0);
                    }
                    local_4 = 4294967295;
                    this->mbr_0x18 = (dword)pcVar4;
                    iVar5 = FUN_00401150();
                    uVar12 = (undefined)this->mbr_0x18;
                    iVar5 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar5 + 4) + 4) + 4 + iVar5) + 100))();
                    FUN_00561b90(iVar5,extraout_DL,uVar12);
                    goto LAB_0055b9b6;
                }
            }
            piVar7 = cls_0x401b00::meth_0x4014f0(*(cls_0x401b00 **)(this->mbr_0x18 + 4),&local_34);
            iVar5 = *piVar7;
            local_24 = *(float *)(iVar5 + 8);
            local_2c = *(float *)(iVar5 + 12);
            local_1c = *(float *)(iVar5 + 16);
            local_30 = *(float *)(this->mbr_0x14 + 4);
            local_28 = *(float *)(this->mbr_0x14 + 12);
            local_20 = local_2c;
            FUN_00401070(&local_30,(float10 *)&local_24,unaff_EDI);
            local_34 = (cls_0x560390 *)(float)extraout_ST0_01;
            pAVar8 = (*(this->Action).vftptr_0x0[1].virt_deldtor_0x4010e0_0)(this);
            iVar5 = in_stack_00000004 - this->mbr_0x40;
            fVar11 = (float10)iVar5;
            if (iVar5 < 0)
            {
                fVar11 = fVar11 + (float10)4.294967e+09;
            }
            fVar11 = fVar11 * (float10)0.001 * extraout_ST0_02;
            local_38 = (float)fVar11;
            uVar10 = (undefined2)((uint)pAVar8 >> 16);
            VStack_18.x = local_24;
            if ((float10)(float)NULL < fVar11)
            {
                do
                {
                    uVar3 = CONCAT22(uVar10,(ushort)((float)local_34 < local_38) << 8 | (ushort)(NAN((float)local_34) || NAN(local_38)) << 10 | (ushort)((float)local_34 == local_38) << 14);
                    if (local_38 < (float)local_34)
                    {
                        VStack_18.x = VStack_18.x - local_30;
                        VStack_18.y = local_20 - local_2c;
                        VStack_18.z = local_1c - local_28;
                        vec3::normalize(&VStack_18);
                        return uVar3;
                    }
                    local_2c = local_20;
                    local_28 = local_1c;
                    local_30 = VStack_18.x;
                    cls_0x401b00::meth_0x401900(*(cls_0x401b00 **)(this->mbr_0x18 + 4));
                    local_38 = local_38 - (float)local_34;
                    iVar5 = *(int *)(this->mbr_0x18 + 4);
                    if (*(int *)(iVar5 + 8) == 0) break;
                    puVar9 = *(undefined4 **)(iVar5 + 4);
                    if (puVar9 != NULL)
                    {
                        puVar9 = (undefined4 *)*puVar9;
                    }
                    local_20 = (float)puVar9[3];
                    local_1c = (float)puVar9[4];
                    fVar2 = local_30 - (float)puVar9[2];
                    local_34 = (cls_0x560390 *)SQRT(fVar2 * fVar2 + (local_2c - local_20) * (local_2c - local_20) + (local_28 - local_1c) * (local_28 - local_1c));
                    uVar10 = (undefined2)((uint)puVar9 >> 16);
                    VStack_18.x = (float)puVar9[2];
                } while (0.0 < local_38);
            }
            local_2c = *(float *)(*(int *)(this->mbr_0x18 + 12) + 8);
            Entity::meth_0x54a8a0(*(Entity **)(this->mbr_0x18 + 12),&local_30);
            this_00 = *(Entity **)(this->mbr_0x18 + 12);
            if ((this_00->DynamicObject).field_0x178 == '\x01')
            {
                Entity::meth_0x54adc0(this_00);
            }
            (*(this->Action).vftptr_0x0[1].virt_meth_0x6162e5_20)();
        }
    LAB_0055b9b6:
        this->mbr_0x40 = in_stack_00000004;
        ExceptionList = local_c;
        return 0;
        */
    }

    void ActionMoveTo::vf_f()
    {
        /*
        int *_Memory;

        _Memory = (int *)this->mbr_0x18;
        if (_Memory != NULL)
        {
            FUN_00562e90(_Memory);
            _free(_Memory);
            this->mbr_0x18 = 0;
        }
        return 0;
        */
    }

    float10 ActionMoveTo::vf_g()
    {
        return 5.0;
    }
} // namespace F3
