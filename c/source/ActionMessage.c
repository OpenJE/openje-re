#include "../include/ActionMessage.h"

ActionMessage * __thiscall ActionMessage::ActionMessage(ActionMessage *this)

{
  this->mbr_0x10 = 1;
  (this->Action).vftptr_0x0 = (Action__vftable_647888 *)&ActionMessage__vftable_6a5f34_006a5f34;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0xffffffff;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  (this->Action).mbr_0x4 = 1;
  return this;
}



void __thiscall ActionMessage::virt_meth_0x5a9080(ActionMessage *this)

{
  undefined4 *puVar1;
  GameActionEquip *pGVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  
  piVar7 = (int *)this->mbr_0x20;
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)this->mbr_0x24;
    if (piVar7 == (int *)0x0) {
      if (this->mbr_0x1c != 0) {
        pvVar4 = (void *)GameActionEquip::meth_0x54be10((GameActionEquip *)this);
        if (pvVar4 == (void *)0x0) {
          FUN_00497120((byte *)"ActionMessage was unable to retrieve an individual entity.");
                    /* WARNING: Subroutine does not return */
          _free((void *)this->mbr_0x30);
        }
        FUN_0054ee60(pvVar4,*(undefined4 *)(this->mbr_0x14 + 0x1dc),this->mbr_0x28,
                     (undefined4 *)this->mbr_0x30,this->mbr_0x2c);
      }
    }
    else {
      piVar5 = DAT_0070bd98;
      if (DAT_0070bd98 != (int *)0x0) {
        piVar5 = (int *)(*(int *)(DAT_0070bd98[2] + 4) + 8 + (int)DAT_0070bd98);
      }
      pGVar2 = (GameActionEquip *)(**(code **)(*piVar5 + 0x88))();
      iVar3 = GameActionEquip::GetSquadMemberList(pGVar2,piVar7);
      puVar1 = *(undefined4 **)(iVar3 + 4);
      if (puVar1 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = (undefined4 *)*puVar1;
      }
      if (puVar6 != puVar1) {
        do {
          pvVar4 = (void *)GameActionEquip::meth_0x54be10((GameActionEquip *)puVar6[2]);
          if (pvVar4 == (void *)0x0) {
            FUN_00497120((byte *)"ActionMessage was unable to retrieve a squad entity.");
          }
          else {
            FUN_0054ee60(pvVar4,*(undefined4 *)(this->mbr_0x14 + 0x1dc),this->mbr_0x28,
                         (undefined4 *)this->mbr_0x30,this->mbr_0x2c);
          }
          puVar6 = (undefined4 *)*puVar6;
        } while (puVar6 != *(undefined4 **)(iVar3 + 4));
                    /* WARNING: Subroutine does not return */
        _free((void *)this->mbr_0x30);
      }
    }
  }
  else {
    piVar5 = DAT_0070bd98;
    if (DAT_0070bd98 != (int *)0x0) {
      piVar5 = (int *)(*(int *)(DAT_0070bd98[2] + 4) + 8 + (int)DAT_0070bd98);
    }
    pGVar2 = (GameActionEquip *)(**(code **)(*piVar5 + 0x84))();
    iVar3 = GameActionEquip::GetTeamMemberList(pGVar2,piVar7);
    puVar1 = *(undefined4 **)(iVar3 + 4);
    if (puVar1 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = (undefined4 *)*puVar1;
    }
    if (puVar6 != puVar1) {
      do {
        pvVar4 = (void *)GameActionEquip::meth_0x54be10((GameActionEquip *)puVar6[2]);
        if (pvVar4 == (void *)0x0) {
          FUN_00497120((byte *)"ActionMessage was unable to retrieve a team entity.");
        }
        else {
          FUN_0054ee60(pvVar4,*(undefined4 *)(this->mbr_0x14 + 0x1dc),this->mbr_0x28,
                       (undefined4 *)this->mbr_0x30,this->mbr_0x2c);
        }
        puVar6 = (undefined4 *)*puVar6;
      } while (puVar6 != *(undefined4 **)(iVar3 + 4));
                    /* WARNING: Subroutine does not return */
      _free((void *)this->mbr_0x30);
    }
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x30);
}


#include "../include/ActionMessage.h"
