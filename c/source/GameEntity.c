#include "../include/GameEntity.h"

undefined4 __fastcall GameEntity::QueryDefaultAnimation(int param_1)

{
  int iVar1;
  
  switch(*(undefined4 *)(param_1 + -0x78)) {
  case 1:
    return 0;
  case 2:
    switch(*(undefined4 *)(param_1 + -0x74)) {
    case 1:
      return 0x1a;
    case 2:
      return 0x4a;
    case 3:
      return 0x69;
    case 4:
      return 0x88;
    case 5:
      return 0xac;
    case 6:
      return 0xcc;
    case 7:
      return 0xfd;
    default:
      FUN_00497120((byte *)"GameEntity::QueryDefaultAnimation() - Unknown Weapon Stance set.\n");
      return 0xfd;
    }
  case 3:
    break;
  case 4:
    if ((0 < *(int *)(param_1 + -0x74)) && (*(int *)(param_1 + -0x74) < 8)) {
      return 0x163;
    }
    FUN_00497120((byte *)"GameEntity::QueryDefaultAnimation() - Unknown Weapon Stance set.\n");
    return 0x163;
  case 5:
    switch(*(undefined4 *)(param_1 + -0x74)) {
    case 1:
      return 0x169;
    case 2:
      return 0x173;
    case 3:
      return 0x179;
    case 4:
      return 0x17f;
    case 5:
      return 0x185;
    case 6:
      return 0x18b;
    case 7:
      return 0x1a0;
    default:
      FUN_00497120((byte *)"GameEntity::QueryDefaultAnimation() - Unknown Weapon Stance set.\n");
      return 0x1a0;
    }
  case 6:
    iVar1 = *(int *)(param_1 + -0x74);
    if (0 < iVar1) {
      if (iVar1 < 7) {
        return 0x1b6;
      }
      if (iVar1 == 7) {
        return 0x1bd;
      }
    }
    FUN_00497120((byte *)"GameEntity::QueryDefaultAnimation() - Unknown Weapon Stance set.\n");
    return 0x1bd;
  case 7:
    if ((0 < *(int *)(param_1 + -0x74)) && (*(int *)(param_1 + -0x74) < 8)) {
      return 0x1e7;
    }
    FUN_00497120((byte *)"GameEntity::QueryDefaultAnimation() - Unknown Weapon Stance set.\n");
    return 0x1e7;
  case 8:
    if ((0 < *(int *)(param_1 + -0x74)) && (*(int *)(param_1 + -0x74) < 8)) {
      return 0x1f6;
    }
    FUN_00497120((byte *)"GameEntity::QueryDefaultAnimation() - Unknown Weapon Stance set.\n");
    return 0x1f6;
  case 9:
    if ((0 < *(int *)(param_1 + -0x74)) && (*(int *)(param_1 + -0x74) < 8)) {
      return 0x1ff;
    }
    FUN_00497120((byte *)"GameEntity::QueryDefaultAnimation() - Unknown Weapon Stance set.\n");
    return 0x1ff;
  default:
    FUN_00497120((byte *)"GameEntity::QueryDefaultAnimation() - Unknown Animation State set.\n");
    return 0;
  }
  iVar1 = *(int *)(param_1 + -0x74);
  if (0 < iVar1) {
    if (iVar1 < 7) {
      return 0x13e;
    }
    if (iVar1 == 7) {
      return 0x157;
    }
  }
  FUN_00497120((byte *)"GameEntity::QueryDefaultAnimation() - Unknown Weapon Stance set.\n");
  return 0x157;
}



undefined4 __thiscall GameEntity::Queue_Idle(GameEntity *this,undefined4 param_1)

{
  dword dVar1;
  undefined4 uVar2;
  int iVar3;
  
  switch(this->mbr_0x2c) {
  case 1:
    return 0;
  case 2:
    switch(this->mbr_0x30) {
    case 1:
      iVar3 = 0x1a;
      break;
    case 2:
      uVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x4a,
                           (float10 *)0x0,0,0,param_1,0);
      return uVar2;
    case 3:
      iVar3 = 0x69;
      break;
    case 4:
      uVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x88,
                           (float10 *)0x0,0,0,param_1,0);
      return uVar2;
    case 5:
      iVar3 = 0xac;
      break;
    case 6:
      uVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0xcc,
                           (float10 *)0x0,0,0,param_1,0);
      return uVar2;
    case 7:
      iVar3 = 0xfd;
      break;
    default:
      goto switchD_00462de2_caseD_7;
    }
    goto LAB_00462f66;
  case 3:
    dVar1 = this->mbr_0x30;
    if (0 < (int)dVar1) {
      if ((int)dVar1 < 7) {
        iVar3 = 0x13e;
        goto LAB_00462f66;
      }
      if (dVar1 == 7) {
        uVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x157,
                             (float10 *)0x0,0,0,param_1,0);
        return uVar2;
      }
    }
    break;
  case 4:
    if ((0 < (int)this->mbr_0x30) && ((int)this->mbr_0x30 < 8)) {
      uVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x163,
                           (float10 *)0x0,0,0,param_1,0);
      return uVar2;
    }
    break;
  case 5:
    switch(this->mbr_0x30) {
    case 1:
      iVar3 = 0x169;
      break;
    case 2:
      uVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x173,
                           (float10 *)0x0,0,0,param_1,0);
      return uVar2;
    case 3:
      iVar3 = 0x179;
      break;
    case 4:
      uVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x17f,
                           (float10 *)0x0,0,0,param_1,0);
      return uVar2;
    case 5:
      iVar3 = 0x185;
      break;
    case 6:
      uVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x18b,
                           (float10 *)0x0,0,0,param_1,0);
      return uVar2;
    case 7:
      iVar3 = 0x1a0;
      break;
    default:
      goto switchD_00462de2_caseD_7;
    }
LAB_00462f66:
    uVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),iVar3,
                         (float10 *)0x0,0,0,param_1,0);
    return uVar2;
  case 6:
    if ((0 < (int)this->mbr_0x30) && ((int)this->mbr_0x30 < 8)) {
      uVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x1bd,
                           (float10 *)0x0,0,0,param_1,0);
      return uVar2;
    }
    break;
  case 7:
    if ((0 < (int)this->mbr_0x30) && ((int)this->mbr_0x30 < 8)) {
      iVar3 = 0x1e7;
      goto LAB_00462f66;
    }
    break;
  case 8:
    if ((0 < (int)this->mbr_0x30) && ((int)this->mbr_0x30 < 8)) {
      uVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x1f6,
                           (float10 *)0x0,0,0,param_1,0);
      return uVar2;
    }
    break;
  case 9:
    if ((0 < (int)this->mbr_0x30) && ((int)this->mbr_0x30 < 8)) {
      iVar3 = 0x1ff;
      goto LAB_00462f66;
    }
    break;
  default:
    FUN_00497120((byte *)"GameEntity::Queue_Idle() - Unknown Animation State set.\n");
    return 0;
  }
switchD_00462de2_caseD_7:
  FUN_00497120((byte *)"GameEntity::Queue_Idle() - Unknown Weapon Stance set.\n");
  return 0;
}



int __thiscall GameEntity::QueueToCombat(GameEntity *this)

{
  dword dVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  switch(this->mbr_0x2c) {
  case 3:
    if ((0 < (int)this->mbr_0x30) && ((int)this->mbr_0x30 < 8)) {
      iVar3 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x15d,
                           (float10 *)0x0,1,0,0,0);
      this->mbr_0x2c = 2;
      return iVar3;
    }
    FUN_00497120((byte *)"GameEntity::QueueToCombat() - Unknown Weapon Stance set.\n");
    this->mbr_0x2c = 2;
    return 0;
  case 4:
    iVar3 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x166,
                         (float10 *)0x0,1,0,0,0);
    this->mbr_0x2c = 5;
    iVar2 = QueueToCombat(this);
    this->mbr_0x2c = 2;
    return iVar3 + iVar2;
  case 5:
    switch(this->mbr_0x30) {
    case 1:
      iVar3 = 0x16d;
      break;
    case 2:
      iVar3 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x174,
                           (float10 *)0x0,1,0,0,0);
      this->mbr_0x2c = 2;
      return iVar3;
    case 3:
      iVar3 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x17a,
                           (float10 *)0x0,1,0,0,0);
      this->mbr_0x2c = 2;
      return iVar3;
    case 4:
      iVar3 = 0x180;
      break;
    case 5:
      iVar3 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x186,
                           (float10 *)0x0,1,0,0,0);
      this->mbr_0x2c = 2;
      return iVar3;
    case 6:
      iVar3 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x18c,
                           (float10 *)0x0,1,0,0,0);
      this->mbr_0x2c = 2;
      return iVar3;
    case 7:
      iVar3 = 0x1a7;
      break;
    default:
      FUN_00497120((byte *)"GameEntity::QueueToCombat() - Unknown weapon stance set.\n");
      this->mbr_0x2c = 2;
      return 0;
    }
    break;
  case 6:
    dVar1 = this->mbr_0x30;
    if (0 < (int)dVar1) {
      if ((int)dVar1 < 7) {
        iVar3 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x1b7,
                             (float10 *)0x0,1,0,0,0);
        iVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x147,
                             (float10 *)0x0,1,0,0,0);
        this->mbr_0x2c = 2;
        return iVar3 + iVar2;
      }
      if (dVar1 == 7) {
        iVar3 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x1be,
                             (float10 *)0x0,1,0,0,0);
        iVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x147,
                             (float10 *)0x0,1,0,0,0);
        this->mbr_0x2c = 2;
        return iVar3 + iVar2;
      }
    }
    FUN_00497120((byte *)"GameEntity::QueueToCombat() - Unknown weapon stance is set.\n");
    this->mbr_0x2c = 2;
    return 0;
  case 7:
    switch(this->mbr_0x30) {
    case 1:
      iVar3 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x1db,
                           (float10 *)0x0,1,0,0,0);
      this->mbr_0x2c = 2;
      return iVar3;
    case 2:
      iVar3 = 0x1dd;
      break;
    case 3:
      iVar3 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x1df,
                           (float10 *)0x0,1,0,0,0);
      this->mbr_0x2c = 2;
      return iVar3;
    case 4:
      iVar3 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x1e0,
                           (float10 *)0x0,1,0,0,0);
      this->mbr_0x2c = 2;
      return iVar3;
    case 5:
      iVar3 = 0x1e1;
      break;
    case 6:
      iVar3 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x1e2,
                           (float10 *)0x0,1,0,0,0);
      this->mbr_0x2c = 2;
      return iVar3;
    case 7:
      iVar3 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x1e8,
                           (float10 *)0x0,1,0,0,0);
      this->mbr_0x2c = 2;
      return iVar3;
    default:
switchD_004634d8_caseD_7:
      FUN_00497120((byte *)"Entity::QueueToCombat() - Unknown weapon stance set.\n");
      this->mbr_0x2c = 2;
      return 0;
    }
    break;
  case 8:
    switch(this->mbr_0x30) {
    case 1:
      iVar3 = 0x1eb;
      break;
    case 2:
      iVar3 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x1ec,
                           (float10 *)0x0,1,0,0,0);
      this->mbr_0x2c = 2;
      return iVar3;
    case 3:
      iVar3 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x1ee,
                           (float10 *)0x0,1,0,0,0);
      this->mbr_0x2c = 2;
      return iVar3;
    case 4:
      iVar3 = 0x1ef;
      break;
    case 5:
      iVar3 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x1f0,
                           (float10 *)0x0,1,0,0,0);
      this->mbr_0x2c = 2;
      return iVar3;
    case 6:
      iVar3 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x1f1,
                           (float10 *)0x0,1,0,0,0);
      this->mbr_0x2c = 2;
      return iVar3;
    case 7:
      iVar3 = 0x1f7;
      break;
    default:
      goto switchD_004634d8_caseD_7;
    }
    break;
  case 9:
    iVar3 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x201,
                         (float10 *)0x0,1,0,0,0);
    this->mbr_0x2c = 5;
    iVar2 = QueueToCombat(this);
    iVar3 = iVar3 + iVar2;
  default:
    FUN_00497120((byte *)"GameEntity::QueueToCombat() - Unknown Root Anim state currently set.\n");
  case 1:
  case 2:
    this->mbr_0x2c = 2;
    return iVar3;
  }
  iVar3 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),iVar3,
                       (float10 *)0x0,1,0,0,0);
  this->mbr_0x2c = 2;
  return iVar3;
}



undefined4 __thiscall GameEntity::Queue_Unequip(GameEntity *this)

{
  void *this_00;
  undefined4 uVar1;
  int iVar2;
  
  switch(this->mbr_0x2c) {
  case 0:
  case 1:
  case 4:
  case 6:
  case 7:
  case 8:
  case 9:
    return 0;
  case 2:
  case 5:
    switch(this->mbr_0x30) {
    case 1:
      iVar2 = 0x3c;
      break;
    case 2:
      iVar2 = 0x5b;
      break;
    case 3:
      iVar2 = 0x7b;
      break;
    case 4:
      iVar2 = 0x9a;
      break;
    case 5:
      iVar2 = 0xbe;
      break;
    case 6:
      iVar2 = 0xdd;
      break;
    case 7:
      iVar2 = 0x128;
      break;
    default:
      FUN_00497120((byte *)"GameEntity::Queue_Unequip() - Unsupported weapon stance encountered.\n")
      ;
      return 0;
    }
    uVar1 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),iVar2,
                         (float10 *)0x0,1,0,0,0);
    return uVar1;
  case 3:
    break;
  default:
    FUN_00497120((byte *)"GameEntity::Queue_Unequip() - Unsupported rootanimstate found.\n");
    return 0;
  }
  this_00 = (void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4));
  if (this->mbr_0x30 != 7) {
    uVar1 = FUN_005505f0(this_00,0x14a,(float10 *)0x0,1,0,0,0);
    return uVar1;
  }
  uVar1 = FUN_005505f0(this_00,0x160,(float10 *)0x0,1,0,0,0);
  return uVar1;
}



/* WARNING: Type propagation algorithm not settling */

void __thiscall GameEntity::SetWeaponStance(GameEntity *this,int param_1)

{
  GameInventory *this_00;
  cls_0x616328 *pcVar1;
  
  if (param_1 == 0) {
    pcVar1 = *(cls_0x616328 **)
              (&(this->Entity).DynamicObject.Gfx_LineSystem.field_0x88 + *(int *)(this->mbr_0x4 + 4)
              );
    if (pcVar1 == (cls_0x616328 *)0x0) {
      return;
    }
    this_00 = (GameInventory *)
              FUN_006165e0(pcVar1,0,&Inventory::RTTI_Type_Descriptor,
                           &GameInventory::RTTI_Type_Descriptor,0);
    pcVar1 = (cls_0x616328 *)GameInventory::meth_0x4693d0(this_00,this->mbr_0x98);
    if ((pcVar1 == (cls_0x616328 *)0x0) ||
       (param_1 = FUN_006165e0(pcVar1,0,&GameItem::RTTI_Type_Descriptor,
                               &GameWeapon::RTTI_Type_Descriptor,0), param_1 == 0))
    goto switchD_00463bf0_caseD_9;
  }
  switch(*(undefined4 *)(param_1 + 0x3b0)) {
  case 1:
  case 6:
    this->mbr_0x30 = 1;
    return;
  case 2:
  case 3:
    this->mbr_0x30 = 5;
    return;
  case 4:
    this->mbr_0x30 = 3;
    return;
  case 5:
    this->mbr_0x30 = 6;
    return;
  case 7:
    this->mbr_0x30 = 4;
    return;
  case 8:
    this->mbr_0x30 = 2;
    return;
  case 9:
  case 10:
    break;
  default:
    FUN_00497120((byte *)"GameEntity::SetWeaponStance() - Unknown Weapon Type encountered.\n");
  }
switchD_00463bf0_caseD_9:
  this->mbr_0x30 = 7;
  return;
}



undefined4 __thiscall GameEntity::Queue_Equip(GameEntity *this)

{
  void *this_00;
  undefined4 uVar1;
  int iVar2;
  
  switch(this->mbr_0x2c) {
  case 0:
  case 1:
  case 4:
  case 6:
  case 7:
  case 8:
  case 9:
    return 0;
  case 2:
  case 5:
    switch(this->mbr_0x30) {
    case 1:
      iVar2 = 0x17;
      break;
    case 2:
      iVar2 = 0x49;
      break;
    case 3:
      iVar2 = 0x68;
      break;
    case 4:
      iVar2 = 0x87;
      break;
    case 5:
      iVar2 = 0xa7;
      break;
    case 6:
      iVar2 = 0xcb;
      break;
    case 7:
      iVar2 = 0xfa;
      break;
    default:
      FUN_00497120((byte *)"GameEntity::Queue_Equip() - Unsupported weapon stance encountered.\n");
      return 0;
    }
    uVar1 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),iVar2,
                         (float10 *)0x0,1,0,0,0);
    return uVar1;
  case 3:
    break;
  default:
    FUN_00497120((byte *)"GameEntity::Queue_Equip() - Unsupported rootanimstate found.\n");
    return 0;
  }
  this_00 = (void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4));
  if (this->mbr_0x30 != 7) {
    uVar1 = FUN_005505f0(this_00,0x13a,(float10 *)0x0,1,0,0,0);
    return uVar1;
  }
  uVar1 = FUN_005505f0(this_00,0x155,(float10 *)0x0,1,0,0,0);
  return uVar1;
}



int __thiscall GameEntity::QueueToDefault(GameEntity *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  switch(this->mbr_0x2c) {
  case 2:
    switch(this->mbr_0x30) {
    case 1:
      iVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x38,
                           (float10 *)0x0,1,0,0,0);
      this->mbr_0x2c = 5;
      return iVar2;
    case 2:
      iVar2 = 0x57;
      break;
    case 3:
      iVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x77,
                           (float10 *)0x0,1,0,0,0);
      this->mbr_0x2c = 5;
      return iVar2;
    case 4:
      iVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x96,
                           (float10 *)0x0,1,0,0,0);
      this->mbr_0x2c = 5;
      return iVar2;
    case 5:
      iVar2 = 0xba;
      break;
    case 6:
      iVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0xd9,
                           (float10 *)0x0,1,0,0,0);
      this->mbr_0x2c = 5;
      return iVar2;
    case 7:
      iVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x124,
                           (float10 *)0x0,1,0,0,0);
      this->mbr_0x2c = 5;
      return iVar2;
    default:
      FUN_00497120((byte *)"GameEntity::QueueToDefault() - Unknown weapon stance set.\n");
      this->mbr_0x2c = 5;
      return 0;
    }
    break;
  case 3:
    if ((0 < (int)this->mbr_0x30) && ((int)this->mbr_0x30 < 8)) {
      iVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x15e,
                           (float10 *)0x0,1,0,0,0);
      iVar1 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x1bf,
                           (float10 *)0x0,1,0,0,0);
      this->mbr_0x2c = 5;
      return iVar2 + iVar1;
    }
    goto LAB_00465ddc;
  case 4:
    if ((0 < (int)this->mbr_0x30) && ((int)this->mbr_0x30 < 8)) {
      iVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x166,
                           (float10 *)0x0,1,0,0,0);
    }
LAB_00465ddc:
    FUN_00497120((byte *)"GameEntity::QueueToDefault() - Unknown Weapon Stance Set.\n");
    this->mbr_0x2c = 5;
    return iVar2;
  case 6:
    if (((int)this->mbr_0x30 < 1) || (7 < (int)this->mbr_0x30)) goto LAB_00465ddc;
    iVar2 = 0x1bf;
    break;
  case 7:
  case 8:
    iVar2 = QueueToCombat(this);
    this->mbr_0x2c = 2;
    iVar1 = QueueToDefault(this);
    this->mbr_0x2c = 5;
    return iVar2 + iVar1;
  case 9:
    iVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x201,
                         (float10 *)0x0,1,0,0,0);
    this->mbr_0x2c = 5;
    return iVar2;
  default:
    FUN_00497120((byte *)"GameEntity::QueueToDefault() - Unknown RootAnimState.\n");
  case 1:
  case 5:
    this->mbr_0x2c = 5;
    return 0;
  }
  iVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),iVar2,
                       (float10 *)0x0,1,0,0,0);
  this->mbr_0x2c = 5;
  return iVar2;
}



int __thiscall GameEntity::Queue_To_Crouch(GameEntity *this)

{
  dword dVar1;
  int iVar2;
  int iVar3;
  
  switch(this->mbr_0x2c) {
  case 1:
  case 4:
    return 0;
  case 2:
  case 3:
  case 6:
  case 7:
  case 8:
  case 9:
    iVar2 = QueueToDefault(this);
    this->mbr_0x2c = 5;
    iVar3 = Queue_To_Crouch(this);
    return iVar2 + iVar3;
  case 5:
    break;
  default:
    FUN_00497120((byte *)"GameEntity::Queue_To_Crouch() - Unexpected RootAnimState encountered.\n");
    return 0;
  }
  dVar1 = this->mbr_0x30;
  if (0 < (int)dVar1) {
    if ((int)dVar1 < 7) {
      iVar2 = Queue_Unequip(this);
      iVar3 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x1a8,
                           (float10 *)0x0,1,0,0,0);
      return iVar2 + iVar3;
    }
    if (dVar1 == 7) {
      iVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x1a8,
                           (float10 *)0x0,1,0,0,0);
      return iVar2;
    }
  }
  FUN_00497120((byte *)"GameEntity::Queue_To_Crouch() - Unknown weapon stance encountered.\n");
  return 0;
}



int __thiscall GameEntity::Queue_Walk(GameEntity *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this->mbr_0x4 + 4);
  switch(*(undefined4 *)(&(this->Entity).DynamicObject.field_0x1ec + iVar1)) {
  case 0x3d:
  case 0x5c:
  case 0x7c:
  case 0x9b:
  case 0xbf:
  case 0xde:
  case 299:
    return 0;
  }
  switch(this->mbr_0x2c) {
  case 1:
    FUN_00497120((byte *)
                 "GameEntity::Queue_Walk() - Attempt to queue Walk while in a CLIMB state.\n");
    return 0;
  case 2:
    switch(this->mbr_0x30) {
    case 1:
      iVar1 = FUN_005505f0((void *)((int)&this->mbr_0x4 + iVar1),0x3b,(float10 *)0x0,1,0,0,0);
      iVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x3d,
                           (float10 *)0x0,0,0,0,0);
      return iVar1 + iVar2;
    case 2:
      iVar1 = FUN_005505f0((void *)((int)&this->mbr_0x4 + iVar1),0x5a,(float10 *)0x0,1,0,0,0);
      iVar2 = 0x5c;
      break;
    case 3:
      iVar1 = FUN_005505f0((void *)((int)&this->mbr_0x4 + iVar1),0x7a,(float10 *)0x0,1,0,0,0);
      iVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x7c,
                           (float10 *)0x0,0,0,0,0);
      return iVar1 + iVar2;
    case 4:
      iVar1 = FUN_005505f0((void *)((int)&this->mbr_0x4 + iVar1),0x99,(float10 *)0x0,1,0,0,0);
      iVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x9b,
                           (float10 *)0x0,0,0,0,0);
      return iVar1 + iVar2;
    case 5:
      iVar1 = FUN_005505f0((void *)((int)&this->mbr_0x4 + iVar1),0xbd,(float10 *)0x0,1,0,0,0);
      iVar2 = 0xbf;
      break;
    case 6:
      iVar1 = FUN_005505f0((void *)((int)&this->mbr_0x4 + iVar1),0xdc,(float10 *)0x0,1,0,0,0);
      iVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0xde,
                           (float10 *)0x0,0,0,0,0);
      return iVar1 + iVar2;
    case 7:
      iVar1 = FUN_005505f0((void *)((int)&this->mbr_0x4 + iVar1),0x127,(float10 *)0x0,1,0,0,0);
      iVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),299,
                           (float10 *)0x0,0,0,0,0);
      return iVar1 + iVar2;
    default:
      FUN_00497120((byte *)"GameEntity::Queue_Walk() - Unknown weapon stance encountered.\n");
      return 0;
    }
    break;
  case 3:
  case 7:
  case 8:
    iVar1 = QueueToCombat(this);
    this->mbr_0x2c = 2;
    iVar2 = Queue_Walk(this);
    return iVar1 + iVar2;
  case 4:
  case 6:
  case 9:
    iVar1 = QueueToDefault(this);
    this->mbr_0x2c = 5;
    iVar2 = Queue_Walk(this);
    return iVar1 + iVar2;
  case 5:
    switch(this->mbr_0x30) {
    case 1:
      iVar1 = FUN_005505f0((void *)((int)&this->mbr_0x4 + iVar1),0x171,(float10 *)0x0,1,0,0,0);
      iVar2 = 0x3d;
      break;
    case 2:
      iVar1 = FUN_005505f0((void *)((int)&this->mbr_0x4 + iVar1),0x177,(float10 *)0x0,1,0,0,0);
      iVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x5c,
                           (float10 *)0x0,0,0,0,0);
      return iVar1 + iVar2;
    case 3:
      iVar1 = FUN_005505f0((void *)((int)&this->mbr_0x4 + iVar1),0x17d,(float10 *)0x0,1,0,0,0);
      iVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x7c,
                           (float10 *)0x0,0,0,0,0);
      return iVar1 + iVar2;
    case 4:
      iVar1 = FUN_005505f0((void *)((int)&this->mbr_0x4 + iVar1),0x183,(float10 *)0x0,1,0,0,0);
      iVar2 = 0x9b;
      break;
    case 5:
      iVar1 = FUN_005505f0((void *)((int)&this->mbr_0x4 + iVar1),0x189,(float10 *)0x0,1,0,0,0);
      iVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0xbf,
                           (float10 *)0x0,0,0,0,0);
      return iVar1 + iVar2;
    case 6:
      iVar1 = FUN_005505f0((void *)((int)&this->mbr_0x4 + iVar1),399,(float10 *)0x0,1,0,0,0);
      iVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0xde,
                           (float10 *)0x0,0,0,0,0);
      return iVar1 + iVar2;
    case 7:
      iVar1 = FUN_005505f0((void *)((int)&this->mbr_0x4 + iVar1),0x1ae,(float10 *)0x0,1,0,0,0);
      iVar2 = 299;
      break;
    default:
      FUN_00497120((byte *)"GameEntity::Queue_Walk() - Unhandled weaponstance encountered.\n");
      return 0;
    }
    break;
  default:
    FUN_00497120((byte *)"GameEntity::Queue_Walk() - Unknown rootanimstate encountered.\n");
    return 0;
  }
  iVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),iVar2,
                       (float10 *)0x0,0,0,0,0);
  return iVar1 + iVar2;
}



int __thiscall GameEntity::Queue_Limp(GameEntity *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this->mbr_0x4 + 4);
  switch(*(undefined4 *)(&(this->Entity).DynamicObject.field_0x1ec + iVar1)) {
  case 0x1d:
  case 0x4d:
  case 0x6c:
  case 0x8b:
  case 0xaf:
  case 0xcf:
  case 0x111:
    return 0;
  }
  switch(this->mbr_0x2c) {
  case 1:
    FUN_00497120((byte *)
                 "GameEntity::Queue_Limp() - Attempt to queue Limp while in a CLIMB state.\n");
    return 0;
  case 2:
    switch(this->mbr_0x30) {
    case 1:
      iVar1 = FUN_005505f0((void *)((int)&this->mbr_0x4 + iVar1),0x39,(float10 *)0x0,1,0,0,0);
      iVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x1d,
                           (float10 *)0x0,0,0,0,0);
      return iVar1 + iVar2;
    case 2:
      iVar1 = FUN_005505f0((void *)((int)&this->mbr_0x4 + iVar1),0x58,(float10 *)0x0,1,0,0,0);
      iVar2 = 0x4d;
      break;
    case 3:
      iVar1 = FUN_005505f0((void *)((int)&this->mbr_0x4 + iVar1),0x78,(float10 *)0x0,1,0,0,0);
      iVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x6c,
                           (float10 *)0x0,0,0,0,0);
      return iVar1 + iVar2;
    case 4:
      iVar1 = FUN_005505f0((void *)((int)&this->mbr_0x4 + iVar1),0x97,(float10 *)0x0,1,0,0,0);
      iVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x8b,
                           (float10 *)0x0,0,0,0,0);
      return iVar1 + iVar2;
    case 5:
      iVar1 = FUN_005505f0((void *)((int)&this->mbr_0x4 + iVar1),0xbb,(float10 *)0x0,1,0,0,0);
      iVar2 = 0xaf;
      break;
    case 6:
      iVar1 = FUN_005505f0((void *)((int)&this->mbr_0x4 + iVar1),0xda,(float10 *)0x0,1,0,0,0);
      iVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0xcf,
                           (float10 *)0x0,0,0,0,0);
      return iVar1 + iVar2;
    case 7:
      iVar1 = FUN_005505f0((void *)((int)&this->mbr_0x4 + iVar1),0x125,(float10 *)0x0,1,0,0,0);
      iVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x111,
                           (float10 *)0x0,0,0,0,0);
      return iVar1 + iVar2;
    default:
      FUN_00497120((byte *)"GameEntity::Queue_Limp() - Unknown weapon stance encountered.\n");
      return 0;
    }
    break;
  case 3:
  case 7:
  case 8:
    iVar1 = QueueToCombat(this);
    this->mbr_0x2c = 2;
    iVar2 = Queue_Limp(this);
    return iVar1 + iVar2;
  case 4:
  case 6:
  case 9:
    iVar1 = QueueToDefault(this);
    this->mbr_0x2c = 5;
    iVar2 = Queue_Limp(this);
    return iVar1 + iVar2;
  case 5:
    switch(this->mbr_0x30) {
    case 1:
      iVar1 = FUN_005505f0((void *)((int)&this->mbr_0x4 + iVar1),0x16f,(float10 *)0x0,1,0,0,0);
      iVar2 = 0x1d;
      break;
    case 2:
      iVar1 = FUN_005505f0((void *)((int)&this->mbr_0x4 + iVar1),0x175,(float10 *)0x0,1,0,0,0);
      iVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x4d,
                           (float10 *)0x0,0,0,0,0);
      return iVar1 + iVar2;
    case 3:
      iVar1 = FUN_005505f0((void *)((int)&this->mbr_0x4 + iVar1),0x17b,(float10 *)0x0,1,0,0,0);
      iVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0x6c,
                           (float10 *)0x0,0,0,0,0);
      return iVar1 + iVar2;
    case 4:
      iVar1 = FUN_005505f0((void *)((int)&this->mbr_0x4 + iVar1),0x181,(float10 *)0x0,1,0,0,0);
      iVar2 = 0x8b;
      break;
    case 5:
      iVar1 = FUN_005505f0((void *)((int)&this->mbr_0x4 + iVar1),0x187,(float10 *)0x0,1,0,0,0);
      iVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0xaf,
                           (float10 *)0x0,0,0,0,0);
      return iVar1 + iVar2;
    case 6:
      iVar1 = FUN_005505f0((void *)((int)&this->mbr_0x4 + iVar1),0x18d,(float10 *)0x0,1,0,0,0);
      iVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),0xcf,
                           (float10 *)0x0,0,0,0,0);
      return iVar1 + iVar2;
    case 7:
      iVar1 = FUN_005505f0((void *)((int)&this->mbr_0x4 + iVar1),0x1aa,(float10 *)0x0,1,0,0,0);
      iVar2 = 0x111;
      break;
    default:
      FUN_00497120((byte *)"GameEntity::Queue_Limp() - Unhandled weaponstance encountered.\n");
      return 0;
    }
    break;
  default:
    FUN_00497120((byte *)"GameEntity::Queue_Limp() - Unknown rootanimstate encountered.\n");
    return 0;
  }
  iVar2 = FUN_005505f0((void *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),iVar2,
                       (float10 *)0x0,0,0,0,0);
  return iVar1 + iVar2;
}



int __thiscall GameEntity::QueueAnimEvent(GameEntity *this,int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (this->mbr_0x9c != 0) {
    return 0;
  }
  switch(param_1) {
  case 1:
    iVar1 = Queue_Idle(this,param_2);
    return iVar1;
  case 2:
    iVar1 = GameActionEquip::meth_0x463000((GameActionEquip *)this,param_2);
    return iVar1;
  case 3:
    iVar1 = GameActionEquip::meth_0x463040((GameActionEquip *)this,param_2);
    return iVar1;
  case 4:
    iVar1 = GameActionEquip::meth_0x463080((GameActionEquip *)this,param_2);
    return iVar1;
  case 5:
    iVar1 = GameActionEquip::meth_0x4630c0((GameActionEquip *)this,param_2);
    return iVar1;
  case 6:
    iVar1 = GameActionEquip::meth_0x463100((GameActionEquip *)this,param_2);
    return iVar1;
  case 7:
    iVar1 = QueueToCombat(this);
    return iVar1;
  default:
    FUN_00497120((byte *)"GameEntity::QueueAnimEvent() - Unhandled ANIMEVENT.\n");
    return 0;
  case 9:
    iVar1 = QueueToDefault(this);
    return iVar1;
  case 0xb:
    iVar1 = Queue_To_Crouch(this);
    return iVar1;
  case 0x11:
    iVar1 = GameActionEquip::meth_0x464b80((GameActionEquip *)this,0);
    return iVar1;
  case 0x12:
    iVar1 = GameActionEquip::meth_0x464c70((GameActionEquip *)this,0);
    return iVar1;
  case 0x13:
  case 0x27:
    iVar1 = GameActionEquip::meth_0x464b80((GameActionEquip *)this,1);
    return iVar1;
  case 0x14:
  case 0x2a:
    iVar1 = GameActionEquip::meth_0x464c70((GameActionEquip *)this,1);
    return iVar1;
  case 0x15:
    iVar1 = Queue_Equip(this);
    return iVar1;
  case 0x16:
    iVar1 = Queue_Unequip(this);
    return iVar1;
  case 0x1d:
    iVar1 = Queue_Limp(this);
    return iVar1;
  case 0x20:
    iVar1 = Queue_Walk(this);
    return iVar1;
  case 0x21:
  case 0x22:
  case 0x25:
  case 0x26:
  case 0x28:
  case 0x29:
    iVar1 = GameActionEquip::meth_0x464d70((GameActionEquip *)this,param_1);
    return iVar1;
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
    this->mbr_0x9c = 1;
    iVar1 = GameActionEquip::meth_0x464940((GameActionEquip *)this,param_1);
    return iVar1;
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
    iVar1 = GameActionEquip::meth_0x463c80((GameActionEquip *)this,param_1);
    return iVar1;
  case 0x78:
    iVar1 = GameActionEquip::meth_0x4659a0((GameActionEquip *)this);
    return iVar1;
  case 0x79:
    iVar1 = GameActionEquip::meth_0x4667a0((GameActionEquip *)this);
    return iVar1;
  case 0x8d:
    iVar1 = GameActionEquip::meth_0x466880((GameActionEquip *)this);
    return iVar1;
  }
}



GameEntity * __thiscall GameEntity::GameEntity(GameEntity *this,int param_1)

{
  bool bVar1;
  int iVar2;
  dword dVar3;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00630463;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_1 != 0) {
    ExceptionList = &pvStack_c;
    this->mbr_0x4 = (dword)&DAT_00666134;
    Entity::Entity(&this->Entity);
    uStack_4 = 0;
  }
  this->vftptr_0x0 = &GameEntity__vftable_666130_00666130;
  *(undefined ***)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)) =
       &PTR_virt_meth_0x467a00_00666044;
  iVar2 = *(int *)(this->mbr_0x4 + 4);
  *(int *)((int)&this->vftptr_0x0 + iVar2) = iVar2 + -0xa0;
  _eh_vector_constructor_iterator_
            (&this->mbr_0x38,0xc,5,cls_0x401b00::cls_0x401b00,GUI::Interface::meth_0x4f6d40);
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 4;
  this->mbr_0x1c = 0;
  this->mbr_0x20 = 1;
  this->mbr_0x24 = 0;
  this->mbr_0x90 = 0;
  this->mbr_0x94 = 0x41200000;
  this->mbr_0x98 = 2;
  this->mbr_0x8c = 0xffffffff;
  uStack_4 = 1;
  Entity::virt_meth_0x550750((Entity *)((int)&this->mbr_0x4 + *(int *)(this->mbr_0x4 + 4)),5);
  *(undefined4 *)
   ((int)&(this->Entity).DynamicObject.Gfx_LineSystem.mbr_0x94 + *(int *)(this->mbr_0x4 + 4)) = 0;
  bVar1 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (bVar1) {
    iVar2 = FUN_00401150();
    dVar3 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 8))();
    this->mbr_0x28 = dVar3;
  }
  else {
    this->mbr_0x28 = 0;
  }
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 7;
  this->mbr_0x34 = 7;
  this->mbr_0x9c = 0;
  *(undefined *)
   ((int)&(this->Entity).DynamicObject.Gfx_LineSystem.mbr_0xdc + *(int *)(this->mbr_0x4 + 4)) = 1;
  ExceptionList = pvStack_c;
  return this;
}


#include "../include/GameEntity.h"
