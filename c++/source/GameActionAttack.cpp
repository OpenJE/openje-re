// Copyright 2024 OpenJE

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/GameActionAttack.hpp"

namespace F3
{
    GameActionAttack::GameActionAttack() {}

    GameActionAttack::~GameActionAttack() {}

    byte GameActionAttack::vf_a()
    {
        return this->mbr_0x58;
    }

    void GameActionAttack::vf_b()
    {
        /*
        cls_0x558740 *this_00;
        dword dVar1;
        char *pcVar2;
        char *pcVar3;
        int iVar4;
        GameEntity *this_01;
        undefined unaff_DI;
        _String_base local_28 [4];
        void *local_24;
        dword local_14;
        dword local_10;
        VFX_Parameter::vftable_673a20 *local_c;
        undefined *puStack_8;
        dword local_4;

        local_4 = 4294967295;
        puStack_8 = &LAB_0062b418;
        local_c = (VFX_Parameter::vftable_673a20 *)ExceptionList;
        this_00 = *(cls_0x558740 **)(*(int *)(DAT_0070bd90 + 44) + 140);
        ExceptionList = &local_c;
        if (this_00 != NULL)
        {
            local_10 = 15;
            local_14 = 0;
            local_24 = (void *)((uint)local_24 & 4294967040);
            pcVar2 = "Current attack canceled.";
            do
            {
                pcVar3 = pcVar2;
                pcVar2 = pcVar3 + 1;
            } while (*pcVar3 != '\0');
            ExceptionList = &local_c;
            ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"Current attack canceled.",(uint)(pcVar3 + -6584688));
            local_4 = 0;
            cls_0x558740::meth_0x5583e0(this_00,local_28,128,128,(void *)128);
            local_4 = 4294967295;
            if (15 < local_10)
            {
                _free(local_24);
            }
            local_10 = 15;
            local_14 = 0;
            local_24 = (void *)((uint)local_24 & 4294967040);
        }
        if ((this->mbr_0xb8 != 0) && (dVar1 = this->mbr_0x28, dVar1 != 0))
        {
            iVar4 = cls_0x54c140::meth_0x54c140((cls_0x54c140 *)(*(int *)(*(int *)(dVar1 + 4) + 4) + 4 + dVar1),(char)this->mbr_0xb8,unaff_DI);
            if ((iVar4 != 0) && (*(VFX_VEGInstance **)(iVar4 + 356) != NULL))
            {
                VFX_VEGInstance::meth_0x48dcc0(*(VFX_VEGInstance **)(iVar4 + 356));
            }
        }
        this_01 = (GameEntity *)FUN_006165e0((cls_0x616328 *)this->mbr_0x14,0,&Entity::RTTI_Type_Descriptor,&GameEntity::RTTI_Type_Descriptor,0);
        if (this_01 != NULL)
        {
            GameEntity::QueueAnimEvent(this_01,9,0);
        }
        ExceptionList = local_c;
        return;
        */
    }

    void GameActionAttack::vf_d( dword param )
    {
        /*
        char cVar1;
        int *piVar2;

        if ((this->mbr_0x38 == 0) && (this->mbr_0x48 == 0))
        {
            FailWithError("GameActionAttack::OnCreate() - No target was specified for the attack.");
            return 0;
        }
        if ((int *)this->mbr_0x14 != NULL)
        {
            cVar1 = (**(code **)(*(int *)this->mbr_0x14 + 80))();
            if (cVar1 == '\0')
            {
                if (this->mbr_0x48 != 0)
                {
    LAB_00401226:
                    FUN_005490b0();
                    return 0;
                }
                piVar2 = (int *)GameActionEquip::meth_0x54be10((GameActionEquip *)this->mbr_0x38);
                if (piVar2 != NULL)
                {
                    cVar1 = (**(code **)(*piVar2 + 80))();
                    if (cVar1 == '\0') goto LAB_00401226;
                }
            }
        }
        this->mbr_0x58 = 1;
        return 0;
        */
    }

    void GameActionAttack::vf_e()
    {
        /*
        byte bVar1;
        cls_0x558740 *this_00;
        int *piVar2;
        char cVar3;
        undefined uVar4;
        undefined4 uVar5;
        dword dVar6;
        cls_0x616328 *pcVar7;
        cls_0x616328 *pcVar8;
        uint uVar9;
        dword *pdVar10;
        GameActionMoveTo *pGVar11;
        undefined4 *puVar12;
        GameActionReload *pGVar13;
        undefined *puVar14;
        cls_0x616328 **ppcVar15;
        GameActionAttack *this_01;
        GameActionEquip *extraout_ECX;
        GameActionEquip *extraout_ECX_00;
        GameActionEquip *this_02;
        float *unaff_EDI;
        GameActionAttack *this_03;
        float10 extraout_ST0;
        int iVar16;
        TypeDescriptor *pTVar17;
        TypeDescriptor *pTVar18;
        int iVar19;
        void *local_6c;
        cls_0x616328 cStack_5c;
        cls_0x616328 cStack_58;
        cls_0x616328 cStack_54;
        int iStack_50;
        int iStack_4c;
        dword dStack_48;
        undefined auStack_44 [56];
        void *local_c;
        undefined *puStack_8;
        undefined4 uStack_4;

        uStack_4 = 4294967295;
        puStack_8 = &LAB_0062b5f1;
        local_c = ExceptionList;
        this_00 = *(cls_0x558740 **)(*(int *)(DAT_0070bd90 + 44) + 140);
        local_6c = NULL;
        if (this->mbr_0x6e != 0)
        {
            ExceptionList = &local_c;
            uVar5 = meth_0x401410(this);
            if ((char)uVar5 == '\0')
            {
                ExceptionList = local_c;
                return NULL;
            }
            meth_0x401890(this,'\x01');
            ExceptionList = local_c;
            return NULL;
        }
        ExceptionList = &local_c;
        dVar6 = FUN_006165e0((cls_0x616328 *)this->mbr_0x14,0,&Entity::RTTI_Type_Descriptor,&GameEntity::RTTI_Type_Descriptor,0);
        this->mbr_0x18 = dVar6;
        if ((dVar6 == 0) || (cVar3 = (**(code **)(*(int *)(*(int *)(*(int *)(dVar6 + 4) + 4) + 4 + dVar6) + 80))(), cVar3 != '\0')) goto LAB_00404b12;
        dVar6 = FUN_006165e0(*(cls_0x616328 **)(*(int *)(*(int *)(this->mbr_0x18 + 4) + 4) + 364 + this->mbr_0x18),0,&Inventory::RTTI_Type_Descriptor,&GameInventory::RTTI_Type_Descriptor,0);
        this->mbr_0x20 = dVar6;
        if (dVar6 == 0) goto LAB_00404b12;
        dVar6 = FUN_006165e0((cls_0x616328 *)this->mbr_0x18,0,&GameEntity::RTTI_Type_Descriptor,&GameCreature::RTTI_Type_Descriptor,0);
        this->mbr_0x1c = dVar6;
        if (dVar6 == 0) goto LAB_00404b12;
        pcVar7 = (cls_0x616328 *)GameActionEquip::meth_0x54be10((GameActionEquip *)this->mbr_0x38);
        this_02 = extraout_ECX;
        if (this->mbr_0x48 == 0)
        {
            if (pcVar7 == NULL) goto LAB_00404b12;
            dVar6 = FUN_006165e0(pcVar7,0,&Entity::RTTI_Type_Descriptor,&GameEntity::RTTI_Type_Descriptor,0);
            this->mbr_0x3c = dVar6;
            this_02 = extraout_ECX_00;
            if (dVar6 == 0) goto LAB_00404b12;
        }
        if (this->mbr_0x24 != 0)
        {
            iVar19 = 0;
            pTVar18 = &GameWeapon::RTTI_Type_Descriptor;
            pTVar17 = &Entity::RTTI_Type_Descriptor;
            iVar16 = 0;
            pcVar8 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(this_02);
            dVar6 = FUN_006165e0(pcVar8,iVar16,pTVar17,pTVar18,iVar19);
            this->mbr_0x28 = dVar6;
        }
        if (this->mbr_0x48 == 0)
        {
            if (pcVar7[123].mbr_0x0 != *(dword *)(this->mbr_0x14 + 492))
            {
                meth_0x401a10(this,'\x01');
                if (this_00 == NULL)
                {
                    ExceptionList = local_c;
                    return NULL;
                }
                cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_44,"Target is not on the same map. Cancelling.");
                uStack_4 = 0;
                goto LAB_0040454b;
            }
            cVar3 = (**(code **)(pcVar7->mbr_0x0 + 80))();
            if (cVar3 != '\0')
            {
                meth_0x401a10(this,'\x01');
                if (this_00 == NULL)
                {
                    ExceptionList = local_c;
                    return NULL;
                }
                cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_44,"GameActionAttack::OnServerUpdate() - Target entity is already dead.");
                uStack_4 = 1;
                goto LAB_0040454b;
            }
        }
        if ((this->mbr_0x5b != 0) && (uVar9 = meth_0x401790(this), (char)uVar9 != '\0'))
        {
            meth_0x401a10(this,'\x01');
            if (this_00 == NULL)
            {
                ExceptionList = local_c;
                return NULL;
            }
            cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_44,"Out of ammo for this weapon.");
            uStack_4 = 2;
    LAB_0040454b:
            cls_0x558740::meth_0x5583e0(this_00,(_String_base *)auStack_44,128,128,(void *)128);
            cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_44);
            ExceptionList = local_c;
            return NULL;
        }
        this->mbr_0x5b = 0;
        if (this->mbr_0x6d != 0)
        {
            cVar3 = meth_0x4023c0(this);
            if (cVar3 == '\0') goto LAB_00404b12;
            this->mbr_0x6d = 0;
        }
        if (this->mbr_0x48 == 0)
        {
            iVar16 = 0;
            if (*(char *)(this->mbr_0x34 + 108) != '\0')
            {
                iVar16 = FUN_006165e0((cls_0x616328 *)this->mbr_0x3c,0,&GameEntity::RTTI_Type_Descriptor,&GameUsableObject::RTTI_Type_Descriptor,0);
            }
            dVar6 = FUN_006165e0((cls_0x616328 *)this->mbr_0x3c,0,&GameEntity::RTTI_Type_Descriptor,&GameCreature::RTTI_Type_Descriptor,0);
            this->mbr_0x40 = dVar6;
            if ((dVar6 == 0) && (iVar16 == 0))
            {
    LAB_00404b12:
                meth_0x401a10(this,'\x01');
                ExceptionList = local_c;
                return NULL;
            }
            dVar6 = FUN_006165e0(*(cls_0x616328 **)(*(int *)(*(int *)(this->mbr_0x3c + 4) + 4) + 364 + this->mbr_0x3c),0,&Inventory::RTTI_Type_Descriptor,&GameInventory::RTTI_Type_Descriptor,0);
            this->mbr_0x44 = dVar6;
            if ((dVar6 == 0) && (iVar16 == 0)) goto LAB_00404b12;
        }
        piVar2 = (int *)this->mbr_0x14;
        iStack_50 = piVar2[1];
        bVar1 = this->mbr_0x48;
        iStack_4c = piVar2[2];
        dStack_48 = piVar2[3];
        pdVar10 = &this->mbr_0x4c;
        if (bVar1 == 0)
        {
            pdVar10 = &pcVar7[1].mbr_0x0;
        }
        cStack_5c.mbr_0x0 = *pdVar10;
        cStack_58.mbr_0x0 = pdVar10[1];
        cStack_54.mbr_0x0 = pdVar10[2];
        FUN_00401070(&iStack_50,(float10 *)&cStack_5c,unaff_EDI);
        if (this->mbr_0x6f != 0)
        {
            iVar16 = *(int *)((int)&this->mbr_0x73 + 1);
            if ((iVar16 < 1) || (extraout_ST0 <= (float10)iVar16))
            {
                if (bVar1 == 0)
                {
                    iVar16 = (**(code **)(*piVar2 + 144))(pcVar7);
                }
                else
                {
                    iVar16 = (**(code **)(*piVar2 + 148))(this->mbr_0x4c,this->mbr_0x50,this->mbr_0x54);
                }
                if (iVar16 != 0) goto LAB_0040477c;
            }
            pGVar11 = (GameActionMoveTo *)operator_new(72);
            uStack_4 = 3;
            if (pGVar11 == NULL)
            {
                pGVar11 = NULL;
            }
            else
            {
                pGVar11 = GameActionMoveTo::GameActionMoveTo(pGVar11);
            }
            uStack_4 = 4294967295;
            if (this->mbr_0x48 == 0)
            {
                GameActionMoveTo::meth_0x55b350(pGVar11,(int)pcVar7);
            }
            else
            {
                dStack_48 = this->mbr_0x54;
                dVar6 = this->mbr_0x50;
                (pGVar11->ActionMoveTo).mbr_0x24 = this->mbr_0x4c;
                (pGVar11->ActionMoveTo).mbr_0x2c = dStack_48;
                (pGVar11->ActionMoveTo).mbr_0x28 = dVar6;
            }
            (pGVar11->ActionMoveTo).mbr_0x30 = *(dword *)((int)&this->mbr_0x73 + 1);
            net::critical_section::meth_0x550720((critical_section *)this->mbr_0x14,(int)pGVar11);
            puVar12 = meth_0x404270(this);
            net::critical_section::meth_0x550720((critical_section *)this->mbr_0x14,(int)puVar12);
            meth_0x401a10(this,'\0');
            if (this_00 == NULL)
            {
                ExceptionList = local_c;
                return NULL;
            }
            cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_44,"Moving closer to target.");
            uStack_4 = 4;
            cls_0x558740::meth_0x5583e0(this_00,(_String_base *)auStack_44,128,128,(void *)128);
            cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_44);
            ExceptionList = local_c;
            return NULL;
        }
    LAB_0040477c:
        if (this->mbr_0x5c != 0)
        {
            if (this_00 != NULL)
            {
                cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_44,"Preparing attack.");
                uStack_4 = 5;
                cls_0x558740::meth_0x5583e0(this_00,(_String_base *)auStack_44,128,128,(void *)128);
                uStack_4 = 4294967295;
                cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_44);
            }
            this->mbr_0x5c = 0;
            uVar5 = PrepareAttack(this);
            if ((char)uVar5 == '\0')
            {
                pGVar13 = (GameActionReload *)operator_new(60);
                uStack_4 = 6;
                if (pGVar13 != NULL)
                {
                    pGVar13 = GameActionReload::GameActionReload(pGVar13);
                    uStack_4 = 4294967295;
                    net::critical_section::meth_0x550720((critical_section *)this->mbr_0x14,(int)pGVar13);
                    ExceptionList = local_c;
                    return NULL;
                }
                uStack_4 = 4294967295;
                net::critical_section::meth_0x550720((critical_section *)this->mbr_0x14,0);
                ExceptionList = local_c;
                return NULL;
            }
            iVar16 = GameEntity::QueueAnimEvent((GameEntity *)this->mbr_0x18,7,0);
            this->mbr_0x60 = (dword)(param_1 + iVar16);
        }
        if ((((undefined *)this->mbr_0x60 != NULL) && ((undefined *)this->mbr_0x60 <= param_1)) && (*(uint *)(this->mbr_0x34 + 68) <= param_2))
        {
            this->mbr_0x60 = 0;
            cVar3 = meth_0x403300(this);
            if (cVar3 == '\0')
            {
                ExceptionList = local_c;
                return NULL;
            }
            local_6c = *(void **)(this->mbr_0x34 + 68);
            this->mbr_0x64 = 1;
        }
        if (this->mbr_0x64 != 0)
        {
            if (this->mbr_0x84 == 0)
            {
                FailWithError("GameActionAttack::OnServerUpdate() - m_subAttackSeries empty after m_bDoSubAttack true.");
                ExceptionList = local_c;
                return this_00;
            }
            this->mbr_0x64 = 0;
            puVar14 = (undefined *)cls_0x401b00::meth_0x4018e0((cls_0x401b00 *)&this->mbr_0x7c);
            cls_0x401240::meth_0x401240((cls_0x401240 *)&this->mbr_0x88,puVar14);
            cls_0x401b00::meth_0x401900((cls_0x401b00 *)&this->mbr_0x7c);
            this->mbr_0xa8 = 1;
            if (this->mbr_0xa4 == 0)
            {
                this->mbr_0x68 = (dword)param_1;
            }
            else
            {
                iVar16 = meth_0x4012c0(this,(int)&this->mbr_0x88);
                this->mbr_0x68 = (dword)(param_1 + iVar16);
            }
        }
        meth_0x4012e0(this);
        if ((this->mbr_0xa8 != 0) && ((this->mbr_0x65 != 0 || (((undefined *)this->mbr_0x68 != NULL && ((undefined *)this->mbr_0x68 <= param_1))))))
        {
            this->mbr_0xa8 = 0;
            if (this->mbr_0xa5 == 0)
            {
                this->mbr_0x68 = (dword)param_1;
            }
            pdVar10 = &this->mbr_0x88;
            uVar5 = meth_0x402e00(this,pdVar10);
            if ((char)uVar5 == '\0')
            {
                ExceptionList = local_c;
                return local_6c;
            }
            if (this->mbr_0xb4 != 0)
            {
                do
                {
                    ppcVar15 = (cls_0x616328 **)cls_0x401b00::meth_0x4018e0((cls_0x401b00 *)&this->mbr_0xac);
                    pcVar8 = *ppcVar15;
                    cls_0x401b00::meth_0x401900((cls_0x401b00 *)&this->mbr_0xac);
                    uVar4 = meth_0x402260(this,(int)pdVar10,(int *)pcVar8);
                    *(undefined *)pdVar10 = uVar4;
                    if (this->mbr_0x9c == 9)
                    {
                        FUN_00401280((int)pdVar10,pcVar8);
                    }
                    meth_0x403320(this,(char *)pdVar10,(int *)pcVar8);
                    if (*(char *)pdVar10 == '\0')
                    {
                        if (this_00 != NULL)
                        {
                            cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)(auStack_44 + 28),"SubAttack MISSED");
                            uStack_4 = 7;
                            cls_0x558740::meth_0x5583e0(this_00,(_String_base *)(auStack_44 + 28),128,0,NULL);
                            uStack_4 = 4294967295;
                            cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(auStack_44 + 28));
                        }
                    }
                    else
                    {
                        meth_0x404060(this,(int)pdVar10,(int *)pcVar8);
                    }
                    if (this->mbr_0x5a == 0)
                    {
                        uVar9 = *(uint *)(this->mbr_0x34 + 28);
                        if (uVar9 != 0)
                        {
                            GameWeapon::DeductPrimaryAmmo((GameWeapon *)this->mbr_0x28,uVar9);
                        }
                        uVar9 = *(uint *)(this->mbr_0x34 + 32);
                        if (uVar9 != 0)
                        {
                            GameWeapon::DeductSecondaryAmmo((GameWeapon *)this->mbr_0x28,uVar9);
                        }
                        this->mbr_0x5a = 1;
                    }
                } while (this->mbr_0xb4 != 0);
            }
            if ((*(int *)(this->mbr_0x34 + 12) != 1) || (this->mbr_0x84 == 0))
            {
                meth_0x403770(this);
            }
        }
        this_03 = NULL;
        if ((undefined *)this->mbr_0x68 == NULL)
        {
            ExceptionList = local_c;
            return local_6c;
        }
        if (param_1 < (undefined *)this->mbr_0x68)
        {
            ExceptionList = local_c;
            return local_6c;
        }
        this->mbr_0x68 = 0;
        if (this->mbr_0x84 != 0)
        {
            this->mbr_0x64 = 1;
            ExceptionList = local_c;
            return local_6c;
        }
        if ((this->mbr_0x48 == 0) && (cVar3 = (**(code **)(*(int *)(*(int *)(*(int *)(this->mbr_0x3c + 4) + 4) + 4 + this->mbr_0x3c) + 80))(), cVar3 != '\0'))
        {
            meth_0x401a10(this,'\x01');
            ExceptionList = local_c;
            return local_6c;
        }
        if (this->mbr_0x84 != 0)
        {
            ExceptionList = local_c;
            return local_6c;
        }
        this->mbr_0x58 = 1;
        if (this->mbr_0x48 == 0)
        {
            this_01 = (GameActionAttack *)operator_new(200);
            uStack_4 = 8;
            if (this_01 != NULL)
            {
                this_03 = GameActionAttack(this_01);
            }
            uStack_4 = 4294967295;
            meth_0x403fa0(this_03,(int)pcVar7);
            if (this->mbr_0x59 != 0)
            {
                this_03->mbr_0x78 = this->mbr_0x78;
            }
            net::critical_section::meth_0x550720((critical_section *)this->mbr_0x14,(int)this_03);
            ExceptionList = local_c;
            return local_6c;
        }
        ExceptionList = local_c;
        return local_6c;
        */
    }

    void GameActionAttack::vf_f()
    {
        /*
        cls_0x558740 *this_00;
        char *pcVar1;
        char *pcVar2;
        _String_base local_28 [4];
        void *local_24;
        dword local_14;
        uint local_10;
        VFX_Parameter::vftable_673a20 *local_c;
        undefined *puStack_8;
        dword local_4;

        local_4 = 4294967295;
        puStack_8 = &LAB_0062b418;
        local_c = (VFX_Parameter::vftable_673a20 *)ExceptionList;
        this_00 = *(cls_0x558740 **)(*(int *)(DAT_0070bd90 + 44) + 140);
        if (this_00 != NULL)
        {
            local_10 = 15;
            local_14 = 0;
            local_24 = (void *)((uint)local_24 & 4294967040);
            pcVar1 = "Current attack has finished.";
            do
            {
                pcVar2 = pcVar1;
                pcVar1 = pcVar2 + 1;
            } while (*pcVar2 != '\0');
            ExceptionList = &local_c;
            ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"Current attack has finished.",(uint)(pcVar2 + -6584716));
            local_4 = 0;
            cls_0x558740::meth_0x5583e0(this_00,local_28,128,128,NULL);
            if (15 < local_10)
            {
                _free(local_24);
            }
        }
        ExceptionList = local_c;
        return 0
        */
    }

} // namespace F3
