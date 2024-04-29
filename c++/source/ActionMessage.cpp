// Copyright 2024 OpenJE

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/ActionMessage.hpp"

namespace F3
{
    ActionMessage::ActionMessage() :
        mbr_0x10( 1 ), mbr_0x18( 0 ), mbr_0x1c( 0 ), mbr_0x20( 0 ), mbr_0x24( 0 ), mbr_0x28( 4294967295 ), mbr_0x2c( 0 ), mbr_0x30( 0 )
    {
        this->mbr_0x4 = 1;
    }

    ActionMessage::~ActionMessage() {}

    byte ActionMessage::vf_a()
    {
        return this->mbr_0x18;
    }

    void ActionMessage::vf_b() {}

    void ActionMessage::vf_d( dword param )
    {
        /*
        undefined4 *puVar1;
        GameActionEquip *pGVar2;
        int iVar3;
        void *pvVar4;
        int *piVar5;
        undefined4 *puVar6;
        int *piVar7;

        piVar7 = (int *)this->mbr_0x20;
        if (piVar7 == NULL)
        {
            piVar7 = (int *)this->mbr_0x24;
            if (piVar7 == NULL)
            {
                if (this->mbr_0x1c != 0)
                {
                    pvVar4 = (void *)GameActionEquip::meth_0x54be10((GameActionEquip *)this);
                    if (pvVar4 == NULL)
                    {
                        FUN_00497120((byte *)"ActionMessage was unable to retrieve an individual entity.");
                        _free((void *)this->mbr_0x30);
                        return 0;
                    }
                    FUN_0054ee60(pvVar4,*(undefined4 *)(this->mbr_0x14 + 476),this->mbr_0x28,(undefined4 *)this->mbr_0x30,this->mbr_0x2c);
                }
            }
            else
            {
                piVar5 = DAT_0070bd98;
                if (DAT_0070bd98 != NULL)
                {
                    piVar5 = (int *)(*(int *)(DAT_0070bd98[2] + 4) + 8 + (int)DAT_0070bd98);
                }
                pGVar2 = (GameActionEquip *)(**(code **)(*piVar5 + 136))();
                iVar3 = GameActionEquip::GetSquadMemberList(pGVar2,piVar7);
                puVar1 = *(undefined4 **)(iVar3 + 4);
                if (puVar1 == NULL)
                {
                    puVar6 = NULL;
                }
                else
                {
                    puVar6 = (undefined4 *)*puVar1;
                }
                if (puVar6 != puVar1)
                {
                    do
                    {
                        pvVar4 = (void *)GameActionEquip::meth_0x54be10((GameActionEquip *)puVar6[2]);
                        if (pvVar4 == NULL)
                        {
                            FUN_00497120((byte *)"ActionMessage was unable to retrieve a squad entity.");
                        }
                        else
                        {
                            FUN_0054ee60(pvVar4,*(undefined4 *)(this->mbr_0x14 + 476),this->mbr_0x28,(undefined4 *)this->mbr_0x30,this->mbr_0x2c);
                        }
                        puVar6 = (undefined4 *)*puVar6;
                    } while (puVar6 != *(undefined4 **)(iVar3 + 4));
                    _free((void *)this->mbr_0x30);
                    return 0;
                }
            }
        }
        else
        {
            piVar5 = DAT_0070bd98;
            if (DAT_0070bd98 != NULL)
            {
                piVar5 = (int *)(*(int *)(DAT_0070bd98[2] + 4) + 8 + (int)DAT_0070bd98);
            }
            pGVar2 = (GameActionEquip *)(**(code **)(*piVar5 + 132))();
            iVar3 = GameActionEquip::GetTeamMemberList(pGVar2,piVar7);
            puVar1 = *(undefined4 **)(iVar3 + 4);
            if (puVar1 == NULL)
            {
                puVar6 = NULL;
            }
            else
            {
                puVar6 = (undefined4 *)*puVar1;
            }
            if (puVar6 != puVar1)
            {
                do
                {
                    pvVar4 = (void *)GameActionEquip::meth_0x54be10((GameActionEquip *)puVar6[2]);
                    if (pvVar4 == NULL)
                    {
                        FUN_00497120((byte *)"ActionMessage was unable to retrieve a team entity.");
                    }
                    else
                    {
                        FUN_0054ee60(pvVar4,*(undefined4 *)(this->mbr_0x14 + 476),this->mbr_0x28,(undefined4 *)this->mbr_0x30,this->mbr_0x2c);
                    }
                    puVar6 = (undefined4 *)*puVar6;
                } while (puVar6 != *(undefined4 **)(iVar3 + 4));
                _free((void *)this->mbr_0x30);
                return 0;
            }
        }
        _free((void *)this->mbr_0x30);
        return 0;
        */
    }

    void ActionMessage::vf_e()
    {
        this->mbr_0x18 = 1;
    }

    void ActionMessage::vf_f() {}
} // namespace F3
