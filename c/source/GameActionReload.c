#include "../include/GameActionReload.h"

GameActionReload * __thiscall GameActionReload::GameActionReload(GameActionReload *this)

{
  this->mbr_0x10 = 1;
  (this->Action).vftptr_0x0 = (Action__vftable_647888 *)&GameActionReload__vftable_64a99c_0064a99c;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x2d = 0;
  this->mbr_0x2e = 0;
  this->mbr_0x30 = 6;
  this->mbr_0x34 = 1;
  this->mbr_0x38 = 0;
  (this->Action).mbr_0x4 = 1;
  return this;
}



int __thiscall GameActionReload::meth_0x407250(GameActionReload *this)

{
  int iVar1;
  
  iVar1 = GameEntity::QueueAnimEvent((GameEntity *)this->mbr_0x18,0x78,0);
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  return iVar1;
}



uint __thiscall
GameActionReload::OnServerUpdate
          (GameActionReload *this,undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  cls_0x558740 *this_00;
  dword dVar3;
  cls_0x616328 *pcVar4;
  GameInventory *this_01;
  GameActionEquip *extraout_ECX;
  GameActionEquip *extraout_ECX_00;
  GameActionEquip *extraout_ECX_01;
  GameActionEquip *this_02;
  int *piVar5;
  int unaff_EBP;
  int iVar6;
  TypeDescriptor *pTVar7;
  TypeDescriptor *pTVar8;
  int iVar9;
  uint uStack_28;
  _String_base a_Stack_20 [20];
  void *pvStack_c;
  undefined *puStack_8;
  void *pvStack_4;
  
  pvStack_4 = (void *)0xffffffff;
  puStack_8 = &LAB_0062b6c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  dVar3 = FUN_006165e0((cls_0x616328 *)this->mbr_0x14,0,&Entity::RTTI_Type_Descriptor,
                       &GameCreature::RTTI_Type_Descriptor,0);
  this->mbr_0x18 = dVar3;
  this_02 = extraout_ECX;
  if (dVar3 == 0) {
    handle_fatal_error(
                      "GameActionReload::OnServerUpdate() - This action doesn\'t belong to a game creature."
                      );
    this_02 = extraout_ECX_00;
  }
  if (this->mbr_0x20 != 0) {
    iVar9 = 0;
    pTVar8 = &GameWeapon::RTTI_Type_Descriptor;
    pTVar7 = &Entity::RTTI_Type_Descriptor;
    iVar6 = 0;
    pcVar4 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(this_02);
    dVar3 = FUN_006165e0(pcVar4,iVar6,pTVar7,pTVar8,iVar9);
    this->mbr_0x1c = dVar3;
    this_02 = extraout_ECX_01;
    if (dVar3 == 0) {
      FUN_00497120((byte *)"GameActionReload::OnServerUpdate() - lost weapon between updates.\n");
      this->mbr_0x2d = 1;
      ExceptionList = puStack_8;
      return 0;
    }
  }
  if (this->mbr_0x28 != 0) {
    iVar9 = 0;
    pTVar8 = &GameAmmo::RTTI_Type_Descriptor;
    pTVar7 = &Entity::RTTI_Type_Descriptor;
    iVar6 = 0;
    pcVar4 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(this_02);
    dVar3 = FUN_006165e0(pcVar4,iVar6,pTVar7,pTVar8,iVar9);
    this->mbr_0x24 = dVar3;
    if (dVar3 == 0) {
      FUN_00497120((byte *)"GameActionReload::OnServerUpdate() - lost ammo between updates.\n");
      this->mbr_0x2d = 1;
      ExceptionList = puStack_8;
      return 0;
    }
  }
  if (this->mbr_0x1c == 0) {
    iVar6 = GameActionEquip::Get_mbr_0x98((GameActionEquip *)this->mbr_0x18);
    this_01 = (GameInventory *)
              FUN_006165e0(*(cls_0x616328 **)(this->mbr_0x14 + 0x168),0,
                           &Inventory::RTTI_Type_Descriptor,&GameInventory::RTTI_Type_Descriptor,0);
    if (this_01 == (GameInventory *)0x0) {
      handle_fatal_error("GameActionReload::OnServerCreate() - Unable to look up inventory.");
    }
    pcVar4 = (cls_0x616328 *)GameInventory::meth_0x4693d0(this_01,iVar6);
    if (pcVar4 != (cls_0x616328 *)0x0) {
      dVar3 = FUN_006165e0(pcVar4,0,&GameItem::RTTI_Type_Descriptor,
                           &GameWeapon::RTTI_Type_Descriptor,0);
      this->mbr_0x1c = dVar3;
      if (dVar3 == 0) {
        FUN_00497120((byte *)
                     "GameActionReload::OnServerCreate() - The equipped item is not a weapon.");
        this->mbr_0x2d = 1;
        ExceptionList = pvStack_4;
        return 0;
      }
      this->mbr_0x20 = *(dword *)(*(int *)(*(int *)(dVar3 + 4) + 4) + 0x1e0 + dVar3);
      goto LAB_0040741c;
    }
    FUN_00497120((byte *)
                 "GameActionReload::OnServerCreate() - No weapon specified, and none equipped.");
LAB_004073cb:
    this->mbr_0x2d = 1;
    uStack_28 = 0;
  }
  else {
LAB_0040741c:
    if (this->mbr_0x24 == 0) {
      piVar5 = *(int **)(*(int *)(this->mbr_0x14 + 0x168) + 0xc);
      if (piVar5 != (int *)0x0) {
        piVar5 = (int *)*piVar5;
      }
      puVar1 = *(undefined4 **)(*(int *)(this->mbr_0x14 + 0x168) + 0xc);
      dVar3 = this->mbr_0x1c;
      if (this->mbr_0x2c == 0) {
        iVar6 = *(int *)(dVar3 + 0x3b4);
        iVar9 = *(int *)(dVar3 + 0x3b8);
      }
      else {
        iVar6 = *(int *)(dVar3 + 0x3c0);
        iVar9 = *(int *)(dVar3 + 0x3c4);
      }
      for (; piVar5 != puVar1; piVar5 = (int *)*piVar5) {
        pcVar4 = (cls_0x616328 *)
                 FUN_006165e0((cls_0x616328 *)piVar5[2],0,&Entity::RTTI_Type_Descriptor,
                              &GameItem::RTTI_Type_Descriptor,0);
        if ((((pcVar4 != (cls_0x616328 *)0x0) &&
             (*(int *)((int)&pcVar4[0x58].mbr_0x0 + *(int *)(pcVar4[1].mbr_0x0 + 4)) == 9)) &&
            (dVar3 = FUN_006165e0(pcVar4,0,&GameItem::RTTI_Type_Descriptor,
                                  &GameAmmo::RTTI_Type_Descriptor,0),
            *(int *)(dVar3 + 0x3b0) == iVar6)) && (*(int *)(dVar3 + 0x3b4) == iVar9)) {
          this->mbr_0x24 = dVar3;
          break;
        }
      }
      if (this->mbr_0x24 == 0) goto LAB_004073cb;
    }
    if (this->mbr_0x34 == 1) {
      if (this->mbr_0x2c == 0) {
        dVar3 = *(dword *)(this->mbr_0x1c + 0x3bc);
      }
      else {
        dVar3 = *(dword *)(this->mbr_0x1c + 0x3c8);
      }
      if (dVar3 != 0) {
        this->mbr_0x30 = dVar3;
      }
      this->mbr_0x34 = 0;
    }
    else if (this->mbr_0x38 == 0) {
      uVar2 = this->mbr_0x30;
      if (uVar2 <= param_4) {
        dVar3 = meth_0x407250(this);
        this->mbr_0x38 = dVar3;
        uStack_28 = uVar2;
      }
    }
    else if (this->mbr_0x38 <= param_3) {
      this_00 = *(cls_0x558740 **)(*(int *)(DAT_0070bd90 + 0x2c) + 0x8c);
      if (this_00 != (cls_0x558740 *)0x0) {
        cls_0x4d8d70::meth_0x401d20
                  ((cls_0x4d8d70 *)a_Stack_20,"Calling weapon\'s Reload function now.");
        cls_0x558740::meth_0x5583e0(this_00,a_Stack_20,0,0x40,(void *)0x40);
        cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)a_Stack_20);
      }
      if (this->mbr_0x2c == 0) {
        GameWeapon::ReloadPrimaryAmmo
                  ((GameWeapon *)this->mbr_0x1c,this->mbr_0x24,this->mbr_0x14,unaff_EBP);
      }
      else {
        GameWeapon::ReloadSecondaryAmmo((GameWeapon *)this->mbr_0x1c,this->mbr_0x24,this->mbr_0x14);
      }
      this->mbr_0x2d = 1;
    }
  }
  ExceptionList = pvStack_4;
  return uStack_28;
}


#include "../include/GameActionReload.h"
