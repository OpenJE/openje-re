#include "../include/GameActionSetActiveWeapon.h"

GameActionSetActiveWeapon * __thiscall
GameActionSetActiveWeapon::GameActionSetActiveWeapon(GameActionSetActiveWeapon *this)

{
  ActionSetActiveWeapon::ActionSetActiveWeapon(&this->ActionSetActiveWeapon);
  this->mbr_0x1c = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x3c = 0;
  this->mbr_0x40 = 0;
  this->mbr_0x41 = 0;
  (this->ActionSetActiveWeapon).Action.vftptr_0x0 =
       (Action__vftable_647888 *)&GameActionSetActiveWeapon__vftable_64afc4_0064afc4;
  return this;
}



GameActionSetActiveWeapon * __thiscall
GameActionSetActiveWeapon::~GameActionSetActiveWeapon(GameActionSetActiveWeapon *this)

{
  GameActionSetActiveWeapon *pGVar1;
  
  (this->ActionSetActiveWeapon).Action.vftptr_0x0 =
       (Action__vftable_647888 *)&GameActionSetActiveWeapon__vftable_64afc4_0064afc4;
  pGVar1 = (GameActionSetActiveWeapon *)Action::~Action((Action *)this);
  return pGVar1;
}



void __thiscall
GameActionSetActiveWeapon::virt_meth_0x407620
          (GameActionSetActiveWeapon *this,undefined param_1,undefined4 param_2)

{
  dword dVar1;
  GameInventory *this_00;
  int iVar2;
  int iVar3;
  GameActionEquip *this_01;
  dword dVar4;
  
  this_00 = (GameInventory *)
            FUN_006165e0(*(cls_0x616328 **)
                          (*(int *)&(this->ActionSetActiveWeapon).field_0x14 + 0x168),0,
                         &Inventory::RTTI_Type_Descriptor,&GameInventory::RTTI_Type_Descriptor,0);
  if (this_00 != (GameInventory *)0x0) {
    iVar2 = GameInventory::meth_0x4693d0(this_00,this->mbr_0x20);
    iVar3 = GameInventory::meth_0x4693d0(this_00,this->mbr_0x1c);
    if (iVar2 != 0) {
      this->mbr_0x28 = *(dword *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 0x1e0 + iVar2);
    }
    if (iVar3 != 0) {
      this->mbr_0x2c = *(dword *)(*(int *)(*(int *)(iVar3 + 4) + 4) + 0x1e0 + iVar3);
    }
    this_01 = (GameActionEquip *)
              FUN_006165e0(*(cls_0x616328 **)&(this->ActionSetActiveWeapon).field_0x14,0,
                           &Entity::RTTI_Type_Descriptor,&GameEntity::RTTI_Type_Descriptor,0);
    if (this_01 != (GameActionEquip *)0x0) {
      dVar1 = this->mbr_0x20;
      dVar4 = GameActionEquip::Get_mbr_0x98(this_01);
      if (dVar4 != dVar1) {
        GameActionEquip::meth_0x463b70(this_01,dVar1);
        GameServer::meth_0x46d390
                  (*(GameServer **)(DAT_0070bd90 + 0x18),
                   *(undefined4 *)
                    (&this_01->field_0x1e0 +
                    *(int *)(*(int *)&(this_01->ActionEquip).Action.mbr_0x4 + 4)),this->mbr_0x20);
        Entity::virt_meth_0x404bb0((Entity *)this);
        return;
      }
    }
  }
  (this->ActionSetActiveWeapon).mbr_0x18 = 1;
  Entity::virt_meth_0x404bb0((Entity *)this);
  return;
}



void __thiscall GameActionSetActiveWeapon::meth_0x407710(GameActionSetActiveWeapon *this)

{
  GameActionEquip *this_00;
  bool bVar1;
  int iVar2;
  cls_0x616328 *pcVar3;
  int *piVar4;
  GameActionEquip *this_01;
  
  if (this->mbr_0x40 == 0) {
    pcVar3 = *(cls_0x616328 **)&(this->ActionSetActiveWeapon).field_0x14;
    this->mbr_0x40 = 1;
    iVar2 = FUN_006165e0(pcVar3,0,&Entity::RTTI_Type_Descriptor,&GameEntity::RTTI_Type_Descriptor,0)
    ;
    if (((iVar2 != 0) &&
        (pcVar3 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(this_01),
        pcVar3 != (cls_0x616328 *)0x0)) &&
       (piVar4 = (int *)FUN_006165e0(pcVar3,0,&Entity::RTTI_Type_Descriptor,
                                     &GameItem::RTTI_Type_Descriptor,0), piVar4 != (int *)0x0)) {
      this_00 = *(GameActionEquip **)(*(int *)(*(int *)(iVar2 + 4) + 4) + 0x16c + iVar2);
      bVar1 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
      if (bVar1) {
        GameActionEquip::ApplyEquipEffects(this_00,piVar4);
      }
      GameActionEquip::meth_0x469cf0(this_00,piVar4,0x1e,this->mbr_0x20);
    }
  }
  return;
}



void __thiscall GameActionSetActiveWeapon::meth_0x4077b0(GameActionSetActiveWeapon *this)

{
  GameInventory *this_00;
  bool bVar1;
  int iVar2;
  cls_0x616328 *pcVar3;
  void *pvVar4;
  GameActionEquip *this_01;
  
  if (this->mbr_0x41 == 0) {
    pcVar3 = *(cls_0x616328 **)&(this->ActionSetActiveWeapon).field_0x14;
    this->mbr_0x41 = 1;
    iVar2 = FUN_006165e0(pcVar3,0,&Entity::RTTI_Type_Descriptor,&GameEntity::RTTI_Type_Descriptor,0)
    ;
    if (((iVar2 != 0) &&
        (pcVar3 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(this_01),
        pcVar3 != (cls_0x616328 *)0x0)) &&
       (pvVar4 = (void *)FUN_006165e0(pcVar3,0,&Entity::RTTI_Type_Descriptor,
                                      &GameItem::RTTI_Type_Descriptor,0), pvVar4 != (void *)0x0)) {
      this_00 = *(GameInventory **)(*(int *)(*(int *)(iVar2 + 4) + 4) + 0x16c + iVar2);
      bVar1 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
      if (bVar1) {
        GameInventory::meth_0x46b100(this_00,(uint)pvVar4);
      }
      GameInventory::meth_0x469f90(this_00,pvVar4);
    }
  }
  return;
}



void __thiscall GameActionSetActiveWeapon::virt_meth_0x407850(GameActionSetActiveWeapon *this)

{
  cls_0x41a2b0 *this_00;
  int iVar1;
  GameActionEquip *this_01;
  
  meth_0x4077b0(this);
  meth_0x407710(this);
  DialogueManager::CommandAttackModeSelect((DialogueManager *)this);
  iVar1 = FUN_006165e0(*(cls_0x616328 **)(DAT_0070bd90 + 0x2c),0,&Client::RTTI_Type_Descriptor,
                       &GameClient::RTTI_Type_Descriptor,0);
  if (((iVar1 != 0) &&
      (this_00 = *(cls_0x41a2b0 **)(*(int *)(iVar1 + 0xa0) + 0x10), this_00 != (cls_0x41a2b0 *)0x0))
     && (this_01 = (GameActionEquip *)
                   FUN_006165e0(*(cls_0x616328 **)&(this->ActionSetActiveWeapon).field_0x14,0,
                                &Entity::RTTI_Type_Descriptor,&GameEntity::RTTI_Type_Descriptor,0),
        this_01 != (GameActionEquip *)0x0)) {
    iVar1 = GameActionEquip::Get_mbr_0x98(this_01);
    cls_0x41a2b0::meth_0x416eb0(this_00,0,iVar1 == 2);
    iVar1 = GameActionEquip::Get_mbr_0x98(this_01);
    cls_0x41a2b0::meth_0x416eb0(this_00,1,iVar1 == 3);
  }
  return;
}



undefined4 * __thiscall
GameActionSetActiveWeapon::virt_meth_0x4078f0(GameActionSetActiveWeapon *this,byte param_1)

{
  ~GameActionSetActiveWeapon(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



undefined4 __thiscall
GameActionSetActiveWeapon::virt_meth_0x407910(GameActionSetActiveWeapon *this,uint param_1)

{
  GameActionEquip *this_00;
  int iVar1;
  cls_0x616328 *pcVar2;
  dword dVar3;
  undefined4 uVar4;
  GameActionEquip *extraout_ECX;
  GameActionEquip *extraout_ECX_00;
  GameActionEquip *extraout_ECX_01;
  GameActionEquip *extraout_ECX_02;
  GameActionEquip *this_01;
  GameActionEquip *extraout_ECX_03;
  GameActionEquip *extraout_ECX_04;
  GameActionEquip *this_02;
  int iVar5;
  TypeDescriptor *pTVar6;
  TypeDescriptor *pTVar7;
  int iVar8;
  
  if ((this->ActionSetActiveWeapon).mbr_0x18 != 0) {
    return 0;
  }
  this_00 = (GameActionEquip *)
            FUN_006165e0(*(cls_0x616328 **)&(this->ActionSetActiveWeapon).field_0x14,0,
                         &Entity::RTTI_Type_Descriptor,&GameEntity::RTTI_Type_Descriptor,0);
  if ((this_00 == (GameActionEquip *)0x0) ||
     (iVar1 = FUN_006165e0(*(cls_0x616328 **)
                            ((int)&this_00->mbr_0x16c +
                            *(int *)(*(int *)&(this_00->ActionEquip).Action.mbr_0x4 + 4)),0,
                           &Inventory::RTTI_Type_Descriptor,&GameInventory::RTTI_Type_Descriptor,0),
     iVar1 == 0)) {
    (this->ActionSetActiveWeapon).mbr_0x18 = 1;
    return 0;
  }
  iVar1 = 0;
  this_02 = extraout_ECX;
  do {
    switch(this->mbr_0x24) {
    case 0:
      iVar8 = 0;
      pTVar7 = &GameItem::RTTI_Type_Descriptor;
      pTVar6 = &Entity::RTTI_Type_Descriptor;
      iVar5 = 0;
      pcVar2 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(this_02);
      iVar5 = FUN_006165e0(pcVar2,iVar5,pTVar6,pTVar7,iVar8);
      iVar8 = 0;
      if (iVar5 == 0) {
        pTVar7 = &GameItem::RTTI_Type_Descriptor;
        pTVar6 = &Entity::RTTI_Type_Descriptor;
        iVar5 = 0;
        pcVar2 = (cls_0x616328 *)GameActionEquip::meth_0x54be10((GameActionEquip *)this->mbr_0x28);
        iVar5 = FUN_006165e0(pcVar2,iVar5,pTVar6,pTVar7,iVar8);
        if (iVar5 != 0) {
          GameEntity::SetWeaponStance((GameEntity *)this_00,0);
          this->mbr_0x30 = 1;
          this->mbr_0x34 = param_1 + iVar1;
          this->mbr_0x24 = 1;
          this_02 = extraout_ECX_01;
          break;
        }
      }
      else {
        iVar5 = GameEntity::QueueAnimEvent((GameEntity *)this_00,0x16,0);
        iVar1 = iVar1 + iVar5;
        this->mbr_0x30 = 1;
        this->mbr_0x34 = param_1 + iVar1;
      }
      GameEntity::SetWeaponStance((GameEntity *)this_00,0);
      this->mbr_0x24 = 1;
      this_02 = extraout_ECX_00;
      break;
    case 1:
      if (this->mbr_0x30 != 0) {
        if (param_1 < this->mbr_0x34) goto LAB_00407acc;
        meth_0x4077b0(this);
        this_02 = extraout_ECX_02;
      }
      this->mbr_0x24 = 2;
      break;
    case 2:
      GameEntity::SetWeaponStance((GameEntity *)this_00,0);
      iVar8 = 0;
      pTVar7 = &GameItem::RTTI_Type_Descriptor;
      pTVar6 = &Entity::RTTI_Type_Descriptor;
      iVar5 = 0;
      pcVar2 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(this_01);
      iVar5 = FUN_006165e0(pcVar2,iVar5,pTVar6,pTVar7,iVar8);
      this_02 = extraout_ECX_03;
      if (iVar5 != 0) {
        dVar3 = GameActionEquip::Get_mbr_0x98(this_00);
        if (dVar3 == this->mbr_0x20) {
          iVar5 = GameEntity::QueueAnimEvent((GameEntity *)this_00,0x15,0);
          iVar1 = iVar1 + iVar5;
        }
        this_02 = (GameActionEquip *)(param_1 + iVar1);
        this->mbr_0x38 = 1;
        this->mbr_0x3c = (dword)this_02;
      }
      this->mbr_0x24 = 3;
      break;
    case 3:
      if (this->mbr_0x38 != 0) {
        if (param_1 < this->mbr_0x3c) goto LAB_00407acc;
        meth_0x407710(this);
        this_02 = extraout_ECX_04;
      }
      this->mbr_0x24 = 4;
      break;
    default:
      (this->ActionSetActiveWeapon).mbr_0x18 = 1;
LAB_00407acc:
      uVar4 = ActionDie::virt_meth_0x5638d0((ActionDie *)this);
      return uVar4;
    }
  } while( true );
}


#include "../include/GameActionSetActiveWeapon.h"
