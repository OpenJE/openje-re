#include "../include/GameWeapon.h"

void GameWeapon::ReadAttackModeData(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint unaff_retaddr;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c [2];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined local_40;
  undefined local_3f;
  char local_3e;
  undefined local_3d;
  undefined4 local_3c [2];
  int iStack_34;
  undefined4 uStack_30;
  void *local_2c;
  dword local_1c;
  uint local_18;
  undefined local_12;
  undefined local_10 [4];
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  iVar3 = param_2;
  uVar2 = param_1;
  puStack_8 = &LAB_0062bad8;
  local_c = ExceptionList;
  local_10 = (undefined  [4])(DAT_007062c0 ^ unaff_retaddr);
  iVar1 = *(int *)(param_1 + 0xc);
  local_18 = 0xf;
  local_1c = 0;
  local_2c = (void *)((uint)local_2c & 0xffffff00);
  local_12 = 0;
  local_3f = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  uVar4 = ResourceSystem::MemStreamRead(&local_74,4,param_2);
  if ((char)uVar4 == '\0') {
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    goto LAB_0040e0cc;
  }
  uVar4 = ResourceSystem::MemStreamRead(&local_70,4,iVar3);
  if ((char)uVar4 == '\0') {
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    goto LAB_0040e0cc;
  }
  uVar4 = ResourceSystem::MemStreamRead(&local_64,4,iVar3);
  if ((char)uVar4 == '\0') {
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    goto LAB_0040e0cc;
  }
  uVar4 = ResourceSystem::MemStreamRead(&local_60,4,iVar3);
  if (((((((char)uVar4 != '\0') &&
         (uVar4 = ResourceSystem::MemStreamRead(&local_5c,4,iVar3), (char)uVar4 != '\0')) &&
        (uVar4 = ResourceSystem::MemStreamRead(&local_58,4,iVar3), (char)uVar4 != '\0')) &&
       ((uVar4 = ResourceSystem::MemStreamRead(&local_54,4,iVar3), (char)uVar4 != '\0' &&
        (uVar4 = ResourceSystem::MemStreamRead(&local_50,4,iVar3), (char)uVar4 != '\0')))) &&
      ((uVar4 = ResourceSystem::MemStreamRead(&local_4c,4,iVar3), (char)uVar4 != '\0' &&
       ((uVar4 = ResourceSystem::MemStreamRead(&local_48,4,iVar3), (char)uVar4 != '\0' &&
        (uVar4 = ResourceSystem::MemStreamRead(&local_44,4,iVar3), (char)uVar4 != '\0')))))) &&
     (uVar4 = ResourceSystem::MemStreamRead(&param_1,1,iVar3), (char)uVar4 != '\0')) {
    local_40 = (char)param_1 != '\0';
    if (iVar1 == 0) {
LAB_0040de7b:
      if (((((*(uint *)(uVar2 + 0xc) < 2) ||
            (uVar4 = ResourceSystem::MemStreamRead(&iStack_34,4,iVar3), (char)uVar4 != '\0')) &&
           ((*(uint *)(uVar2 + 0xc) < 3 ||
            (uVar4 = ResourceSystem::MemStreamRead(&uStack_30,4,iVar3), (char)uVar4 != '\0')))) &&
          ((*(uint *)(uVar2 + 0xc) < 4 ||
           (uVar5 = FUN_0049c8d0((cls_0x50db20 *)&local_2c,iVar3), (char)uVar5 != '\0')))) &&
         ((*(uint *)(uVar2 + 0xc) < 5 ||
          ((uVar4 = ResourceSystem::MemStreamRead((undefined4 *)local_10,1,iVar3),
           (char)uVar4 != '\0' &&
           (uVar4 = ResourceSystem::MemStreamRead((undefined4 *)(local_10 + 1),1,iVar3),
           (char)uVar4 != '\0')))))) {
        if (iStack_34 == 0) {
          switch(local_70) {
          case 1:
            iStack_34 = 0x38;
            break;
          case 2:
            iStack_34 = 0x3b;
            break;
          case 4:
            iStack_34 = 0x3d;
            break;
          case 6:
            iStack_34 = 0x3c;
            break;
          case 7:
            iStack_34 = 0x3f;
            break;
          case 8:
            iStack_34 = 0x40;
            break;
          case 9:
            iStack_34 = 0x41;
            break;
          case 10:
            iStack_34 = 0x35;
            break;
          case 0xb:
            iStack_34 = 0x36;
            break;
          case 0xc:
            iStack_34 = 0x37;
            break;
          case 0xd:
            iStack_34 = 0x53;
            break;
          case 0xe:
            iStack_34 = 0x54;
            break;
          case 0xf:
            iStack_34 = 0x55;
            break;
          case 0x10:
            iStack_34 = 0x56;
            break;
          case 0x11:
            iStack_34 = 0x57;
            break;
          case 0x12:
            iStack_34 = 0x58;
            break;
          case 0x13:
            iStack_34 = 0x59;
            break;
          case 0x14:
            iStack_34 = 0x5a;
            break;
          case 0x15:
            iStack_34 = 0x5b;
            break;
          case 0x16:
            iStack_34 = 0x5c;
            break;
          case 0x17:
            iStack_34 = 0x5d;
            break;
          case 0x18:
            iStack_34 = 0x5e;
            break;
          case 0x19:
            iStack_34 = 0x5f;
            break;
          case 0x1a:
            iStack_34 = 0x60;
            break;
          case 0x1b:
            iStack_34 = 0x61;
            break;
          case 0x1c:
            iStack_34 = 0x62;
            break;
          case 0x1d:
            iStack_34 = 99;
            break;
          case 0x1e:
            iStack_34 = 100;
            break;
          case 0x1f:
            iStack_34 = 0x65;
            break;
          case 0x20:
            iStack_34 = 0x66;
            break;
          case 0x21:
            iStack_34 = 0x67;
            break;
          case 0x22:
            iStack_34 = 0x68;
          }
        }
        FUN_0040c970((void *)0x6fb,&local_74);
        FUN_0040a240((int)&local_74);
        goto LAB_0040e0cc;
      }
    }
    else {
      uVar4 = ResourceSystem::MemStreamRead(local_6c,4,iVar3);
      if (((char)uVar4 != '\0') &&
         (uVar4 = ResourceSystem::MemStreamRead(&param_1,1,iVar3), (char)uVar4 != '\0')) {
        local_3f = (char)param_1 != '\0';
        uVar4 = ResourceSystem::MemStreamRead(local_3c,4,iVar3);
        if (((char)uVar4 != '\0') &&
           (uVar4 = ResourceSystem::MemStreamRead(&param_1,1,iVar3), (char)uVar4 != '\0')) {
          local_3e = (char)param_1 != '\0';
          uVar4 = ResourceSystem::MemStreamRead(&param_1,1,iVar3);
          if ((char)uVar4 != '\0') {
            local_3d = (char)param_1 != '\0';
            if (((bool)local_3d) && (local_3e != '\0')) {
              handle_fatal_error(
                                "GameWeapon::ReadAttackModeData() - A weapon can\'t be both consumed and thrown."
                                );
            }
            goto LAB_0040de7b;
          }
        }
      }
    }
  }
  FUN_0040a240((int)&local_74);
LAB_0040e0cc:
  ExceptionList = puStack_8;
  FUN_00616e15((uint)local_c ^ param_1);
  return;
}



/* WARNING: Type propagation algorithm not settling */

void __thiscall GameWeapon::DeductPrimaryAmmo(GameWeapon *this,uint param_1)

{
  undefined *puVar1;
  GameServer *this_00;
  
  if (*(uint *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x348 < param_1) {
    FUN_00497120((byte *)
                 "GameWeapon::DeductPrimaryAmmo() - Attempt to deduct more ammo than the weapon had.\n"
                );
  }
  puVar1 = &(this->GameItem).GameEntity.Entity.DynamicObject.field_0x348;
  *(uint *)puVar1 = *(int *)puVar1 - param_1;
  if (*(int *)puVar1 == 0) {
    (this->GameItem).GameEntity.Entity.DynamicObject.mbr_0x380 = 0;
  }
  this_00 = (GameServer *)
            FUN_006165e0(*(cls_0x616328 **)(DAT_0070bd90 + 0x18),0,&Server::RTTI_Type_Descriptor,
                         &GameServer::RTTI_Type_Descriptor,0);
  GameServer::meth_0x46d700
            (this_00,*(undefined4 *)
                      ((int)&(this->GameItem).GameEntity.Entity.DynamicObject.Gfx_LineSystem.
                             mbr_0xfc + *(int *)((this->GameItem).GameEntity.mbr_0x4 + 4)),
             *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x314,
             *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x348);
  return;
}



/* WARNING: Type propagation algorithm not settling */

void __thiscall GameWeapon::DeductSecondaryAmmo(GameWeapon *this,uint param_1)

{
  undefined *puVar1;
  GameServer *this_00;
  
  if (*(uint *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x350 < param_1) {
    FUN_00497120((byte *)
                 "GameWeapon::DeductSecondaryAmmo() - Attempt to deduct more ammo than the weapon had.\n"
                );
  }
  puVar1 = &(this->GameItem).GameEntity.Entity.DynamicObject.field_0x350;
  *(uint *)puVar1 = *(int *)puVar1 - param_1;
  if (*(int *)puVar1 == 0) {
    *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x384 = 0;
  }
  this_00 = (GameServer *)
            FUN_006165e0(*(cls_0x616328 **)(DAT_0070bd90 + 0x18),0,&Server::RTTI_Type_Descriptor,
                         &GameServer::RTTI_Type_Descriptor,0);
  GameServer::meth_0x46d7f0
            (this_00,*(undefined4 *)
                      ((int)&(this->GameItem).GameEntity.Entity.DynamicObject.Gfx_LineSystem.
                             mbr_0xfc + *(int *)((this->GameItem).GameEntity.mbr_0x4 + 4)),
             *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x320,
             *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x350);
  return;
}



int __thiscall GameWeapon::GetEffectiveRange(GameWeapon *this,int param_1)

{
  int iVar1;
  dword dVar2;
  
  iVar1 = param_1;
  if (param_1 == 0) {
    iVar1 = *(int *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x364;
  }
  if (iVar1 != 0) {
    if (*(uint *)(param_1 + 0x1c) == 0) {
      return *(int *)(param_1 + 0x2c);
    }
    if ((*(uint *)(param_1 + 0x1c) <=
         *(uint *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x348) &&
       (*(uint *)(param_1 + 0x20) <=
        *(uint *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x350)) {
      if ((this->GameItem).GameEntity.Entity.DynamicObject.mbr_0x380 == 0) {
        dVar2 = FUN_00408110(*(int *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x310,
                             *(int *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x314);
        (this->GameItem).GameEntity.Entity.DynamicObject.mbr_0x380 = dVar2;
        if (dVar2 == 0) {
          handle_fatal_error("GameWeapon::GetEffectiveRange on entitiy %d - Unable to look up ammo."
                            );
        }
      }
      return *(int *)((this->GameItem).GameEntity.Entity.DynamicObject.mbr_0x380 + 0x3c8) +
             *(int *)(param_1 + 0x2c);
    }
  }
  return 0;
}



int __thiscall
GameWeapon::CalculateMeleeToHit
          (GameWeapon *this,int param_1,int *param_2,int *param_3,undefined4 param_4,int param_5)

{
  float fVar1;
  GameCreature *this_00;
  int iVar2;
  int iVar3;
  dword dVar4;
  int iVar5;
  
  this_00 = (GameCreature *)
            FUN_006165e0((cls_0x616328 *)param_2,0,&Entity::RTTI_Type_Descriptor,
                         &GameCreature::RTTI_Type_Descriptor,0);
  iVar2 = FUN_006165e0((cls_0x616328 *)param_3,0,&Entity::RTTI_Type_Descriptor,
                       &GameCreature::RTTI_Type_Descriptor,0);
  iVar3 = GameCreature::GetTotalSkill(this_00,1);
  iVar3 = iVar3 + *(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x1c) != 0) {
    if ((this->GameItem).GameEntity.Entity.DynamicObject.mbr_0x380 == 0) {
      dVar4 = FUN_00408110(*(int *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x310,
                           *(int *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x314);
      (this->GameItem).GameEntity.Entity.DynamicObject.mbr_0x380 = dVar4;
      if (dVar4 == 0) {
        handle_fatal_error(
                          "GameWeapon::CalculateMeleeToHit - Couldn\'t find ammo: caliber %d, modifier %d"
                          );
      }
    }
    iVar3 = iVar3 + *(int *)((this->GameItem).GameEntity.Entity.DynamicObject.mbr_0x380 + 0x3c4);
  }
  iVar5 = GameCreature::GetDerivedAttribute((GameCreature *)param_3,(int *)0x4);
  iVar2 = GetEffectiveRange(this,iVar2);
  fVar1 = SQRT(((float)param_2[1] - (float)param_3[1]) * ((float)param_2[1] - (float)param_3[1]) +
               ((float)param_2[2] - (float)param_3[2]) * ((float)param_2[2] - (float)param_3[2]) +
               ((float)param_2[3] - (float)param_3[3]) * ((float)param_2[3] - (float)param_3[3]));
  if ((float)iVar2 < fVar1 != (NAN((float)iVar2) || NAN(fVar1))) {
    return 0;
  }
  if (param_5 != 9) {
    iVar5 = iVar5 + *(int *)(&DAT_0064f858 + param_5 * 4);
  }
  iVar3 = iVar3 - iVar5;
  if (iVar3 < 0) {
    return 0;
  }
  if (0x5f < iVar3) {
    iVar3 = 0x5f;
  }
  return iVar3;
}



int __thiscall
GameWeapon::CalculateRangedToHit
          (GameWeapon *this,int param_1,int *param_2,int *param_3,undefined4 param_4,int param_5)

{
  GameCreature *this_00;
  int iVar1;
  int iVar2;
  dword dVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  GameCreature *pGStack_24;
  
  this_00 = (GameCreature *)
            FUN_006165e0((cls_0x616328 *)param_2,0,&Entity::RTTI_Type_Descriptor,
                         &GameCreature::RTTI_Type_Descriptor,0);
  FUN_006165e0((cls_0x616328 *)param_3,0,&Entity::RTTI_Type_Descriptor,
               &GameCreature::RTTI_Type_Descriptor,0);
  if (*(int *)(param_1 + 8) == 2) {
    iVar1 = GameCreature::GetTotalSkill(this_00,1);
    iVar1 = iVar1 + *(int *)(param_1 + 0x28);
    iVar2 = GameCreature::GetDerivedAttribute(this_00,(int *)0xd);
  }
  else {
    iVar1 = GameCreature::GetTotalSkill(this_00,0);
    iVar1 = iVar1 + *(int *)(param_1 + 0x28);
    iVar2 = GetEffectiveRange(this,param_1);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    if ((this->GameItem).GameEntity.Entity.DynamicObject.mbr_0x380 == 0) {
      dVar3 = FUN_00408110(*(int *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x310,
                           *(int *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x314);
      (this->GameItem).GameEntity.Entity.DynamicObject.mbr_0x380 = dVar3;
      if (dVar3 == 0) {
        handle_fatal_error(
                          "GameWeapon::CalculateRangedToHit() - Unable to locate ammo. Caliber:%d, modifier:%d"
                          );
      }
    }
    iVar1 = iVar1 + *(int *)((this->GameItem).GameEntity.Entity.DynamicObject.mbr_0x380 + 0x3c4);
  }
  iVar5 = 0;
  if (-1 < iVar2 + -10) {
    iVar5 = (int)(200 / (longlong)((iVar2 + -10) / 5));
  }
  uVar6 = FUN_00616e24();
  iVar2 = -2 - (int)uVar6;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  iVar4 = GameCreature::GetDerivedAttribute(pGStack_24,(int *)0x4);
  if (param_5 != 9) {
    iVar4 = iVar4 + *(int *)(&DAT_0064f858 + param_5 * 4);
  }
  iVar1 = (iVar1 - iVar4) - iVar2 * iVar5;
  if (iVar1 < 0) {
    return 0;
  }
  iVar2 = 0x5f;
  if (iVar1 < 0x60) {
    iVar2 = iVar1;
  }
  return iVar2;
}



/* WARNING: Type propagation algorithm not settling */

int __thiscall
GameWeapon::CalculateDamage
          (GameWeapon *this,int param_1,int param_2,int *param_3,int param_4,int param_5,
          undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  dword dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  if (((param_1 != 0) && (param_3 != (int *)0x0)) && (param_2 != 0)) {
    if (param_5 != 9) {
      FUN_006165e0((cls_0x616328 *)param_3,0,&Entity::RTTI_Type_Descriptor,
                   &GameCreature::RTTI_Type_Descriptor,0);
      uVar7 = *(uint *)(param_1 + 0x38);
      uVar8 = *(uint *)(param_1 + 0x3c);
      if (*(int *)(param_1 + 0x1c) != 0) {
        if ((this->GameItem).GameEntity.Entity.DynamicObject.mbr_0x380 == 0) {
          dVar3 = FUN_00408110(*(int *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x310
                               ,*(int *)&(this->GameItem).GameEntity.Entity.DynamicObject.
                                         field_0x314);
          (this->GameItem).GameEntity.Entity.DynamicObject.mbr_0x380 = dVar3;
          if (dVar3 == 0) {
            handle_fatal_error(
                              "GameWeapon::CalculateDamage() - Unable to find ammo. Caliber:%d, modifier:%d"
                              );
          }
        }
        dVar3 = (this->GameItem).GameEntity.Entity.DynamicObject.mbr_0x380;
        param_4 = *(int *)(dVar3 + 0x3c0);
        uVar8 = uVar8 + *(int *)(dVar3 + 0x3bc);
        uVar1 = *(int *)(dVar3 + 0x3b8) + uVar7;
        if (uVar1 < uVar8) {
          uVar7 = uVar1;
        }
      }
      iVar4 = FUN_0048cd00(uVar7,uVar8);
      iVar2 = *(int *)(param_1 + 0x24);
      iVar5 = *(int *)(param_1 + 0x10);
      switch(param_6) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 7:
        iVar5 = *(int *)(param_2 + 0x7b0 + iVar5 * 4);
        break;
      case 5:
      case 6:
        iVar5 = *(int *)(param_2 + 0x7c8 + iVar5 * 4);
        break;
      default:
        FUN_00497120((byte *)"GameWeapon::CalculateDamage() - Unknown CALLEDTARGET encountered.\n");
        iVar5 = *(int *)(param_2 + 0x7b0 + iVar5 * 4);
      }
      if ((0 < iVar5) && (iVar5 = iVar5 - param_4, iVar5 < 0)) {
        iVar5 = 0;
      }
      iVar6 = FUN_0048cd00(0,iVar5 / 2);
      iVar6 = ((iVar4 + iVar2) - iVar5 / 2) - iVar6;
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      return iVar6;
    }
    FUN_00497120((byte *)"GameWeapon::CalculateDamage - No body part was targeted.\n");
    return 0;
  }
  FUN_00497120((byte *)"GameWeapon::CalculateDamage - Invalid paramaters passed.\n");
  return 0;
}



int __thiscall
GameWeapon::CalculateToHit
          (GameWeapon *this,int param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int unaff_ESI;
  
  if (((param_2 != (int *)0x0) && (param_3 != (int *)0x0)) &&
     (iVar1 = *(int *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x364, iVar1 != 0)) {
    if (*(int *)(iVar1 + 8) == 0) {
      iVar1 = CalculateMeleeToHit(this,param_1,param_2,param_3,param_4,unaff_ESI);
      return iVar1;
    }
    iVar1 = CalculateRangedToHit(this,param_1,param_2,param_3,param_4,unaff_ESI);
    return iVar1;
  }
  FUN_00497120((byte *)"GameWeapon::CalculateToHit() - Recieved a NULL pointer in critical data.");
  return 0;
}



/* WARNING: Type propagation algorithm not settling */

undefined4 __thiscall GameWeapon::UnloadPrimaryAmmo(GameWeapon *this,int param_1)

{
  GameServer *this_00;
  undefined4 *puVar1;
  dword dVar2;
  GameServer *this_01;
  cls_0x616328 *pcVar3;
  GameAmmo *pGVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  GameAmmo *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0062bdcb;
  local_c = (GameAmmo *)ExceptionList;
  puVar8 = (undefined4 *)0x0;
  if (*(int *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x348 == 0) {
    (this->GameItem).GameEntity.Entity.DynamicObject.mbr_0x380 = 0;
    uVar7 = 0;
  }
  else {
    this_00 = *(GameServer **)(DAT_0070bd90 + 0x18);
    ExceptionList = &local_c;
    this_01 = (GameServer *)
              FUN_006165e0((cls_0x616328 *)this_00,0,&Server::RTTI_Type_Descriptor,
                           &GameServer::RTTI_Type_Descriptor,0);
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x168) + 0xc);
    if (puVar1 != (undefined4 *)0x0) {
      puVar8 = (undefined4 *)*puVar1;
    }
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x168) + 0xc);
    for (; puVar8 != puVar1; puVar8 = (undefined4 *)*puVar8) {
      pcVar3 = (cls_0x616328 *)
               FUN_006165e0((cls_0x616328 *)puVar8[2],0,&Entity::RTTI_Type_Descriptor,
                            &GameItem::RTTI_Type_Descriptor,0);
      if ((((pcVar3 != (cls_0x616328 *)0x0) &&
           (*(int *)((int)&pcVar3[0x58].mbr_0x0 + *(int *)(pcVar3[1].mbr_0x0 + 4)) == 9)) &&
          (pGVar4 = (GameAmmo *)
                    FUN_006165e0(pcVar3,0,&GameItem::RTTI_Type_Descriptor,
                                 &GameAmmo::RTTI_Type_Descriptor,0),
          *(int *)&(pGVar4->GameItem).GameEntity.Entity.DynamicObject.field_0x30c ==
          *(int *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x310)) &&
         (*(int *)&(pGVar4->GameItem).GameEntity.Entity.DynamicObject.field_0x310 ==
          *(int *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x314)) {
        if (pGVar4 != (GameAmmo *)0x0) goto LAB_0041378f;
        break;
      }
    }
    iVar5 = FUN_00408110(*(int *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x310,
                         *(int *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x314);
    pGVar4 = (GameAmmo *)0x0;
    if (iVar5 == 0) {
      handle_fatal_error(
                        "GameWeapon::UnloadPrimaryAmmo() - Unable to look up ammo. Caliber %d, modifier %d"
                        );
    }
    local_c = (GameAmmo *)operator_new(0x7b0);
    if (local_c != (GameAmmo *)0x0) {
      pGVar4 = GameAmmo::GameAmmo(local_c,1);
    }
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(iVar5 + 4) + 4) + 4 + iVar5;
    }
    (**(code **)(*(int *)((int)&(pGVar4->GameItem).GameEntity.mbr_0x4 +
                         *(int *)((pGVar4->GameItem).GameEntity.mbr_0x4 + 4)) + 0x28))(iVar5);
    piVar6 = (int *)FUN_006165e0(*(cls_0x616328 **)(param_1 + 0x168),0,
                                 &Inventory::RTTI_Type_Descriptor,
                                 &GameInventory::RTTI_Type_Descriptor,0);
    (**(code **)(*piVar6 + 4))
              ((int)&(pGVar4->GameItem).GameEntity.mbr_0x4 +
               *(int *)((pGVar4->GameItem).GameEntity.mbr_0x4 + 4));
    GameServer::meth_0x46d8e0
              (this_01,*(undefined4 *)(param_1 + 0x1dc),
               *(undefined4 *)
                ((int)&(pGVar4->GameItem).GameEntity.Entity.DynamicObject.Gfx_LineSystem.mbr_0xfc +
                *(int *)((pGVar4->GameItem).GameEntity.mbr_0x4 + 4)),
               *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x310,
               *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x314);
LAB_0041378f:
    FUN_00549d60((void *)((int)&(pGVar4->GameItem).GameEntity.mbr_0x4 +
                         *(int *)((pGVar4->GameItem).GameEntity.mbr_0x4 + 4)),
                 *(int *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x348);
    dVar2 = (this->GameItem).GameEntity.mbr_0x4;
    *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x348 = 0;
    (this->GameItem).GameEntity.Entity.DynamicObject.mbr_0x380 = 0;
    GameServer::meth_0x46d700
              (this_01,*(undefined4 *)
                        ((int)&(this->GameItem).GameEntity.Entity.DynamicObject.Gfx_LineSystem.
                               mbr_0xfc + *(int *)(dVar2 + 4)),
               *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x314,0);
    iVar5 = *(int *)((pGVar4->GameItem).GameEntity.mbr_0x4 + 4);
    uVar7 = GameServer::meth_0x552d40
                      (this_00,*(undefined4 *)
                                ((int)&(pGVar4->GameItem).GameEntity.Entity.DynamicObject.
                                       Gfx_LineSystem.mbr_0xfc + iVar5),
                       *(undefined4 *)
                        (&(pGVar4->GameItem).GameEntity.Entity.DynamicObject.field_0x31c + iVar5));
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar7 >> 8),1);
}



/* WARNING: Type propagation algorithm not settling */

undefined4 __thiscall GameWeapon::UnloadPrimaryAmmo(GameWeapon *this,int param_1)

{
  GameServer *this_00;
  undefined4 *puVar1;
  dword dVar2;
  GameServer *this_01;
  cls_0x616328 *pcVar3;
  GameAmmo *pGVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  GameAmmo *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0062bdcb;
  local_c = (GameAmmo *)ExceptionList;
  puVar8 = (undefined4 *)0x0;
  if (*(int *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x350 == 0) {
    *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x384 = 0;
    uVar7 = 0;
  }
  else {
    this_00 = *(GameServer **)(DAT_0070bd90 + 0x18);
    ExceptionList = &local_c;
    this_01 = (GameServer *)
              FUN_006165e0((cls_0x616328 *)this_00,0,&Server::RTTI_Type_Descriptor,
                           &GameServer::RTTI_Type_Descriptor,0);
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x168) + 0xc);
    if (puVar1 != (undefined4 *)0x0) {
      puVar8 = (undefined4 *)*puVar1;
    }
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x168) + 0xc);
    for (; puVar8 != puVar1; puVar8 = (undefined4 *)*puVar8) {
      pcVar3 = (cls_0x616328 *)
               FUN_006165e0((cls_0x616328 *)puVar8[2],0,&Entity::RTTI_Type_Descriptor,
                            &GameItem::RTTI_Type_Descriptor,0);
      if ((((pcVar3 != (cls_0x616328 *)0x0) &&
           (*(int *)((int)&pcVar3[0x58].mbr_0x0 + *(int *)(pcVar3[1].mbr_0x0 + 4)) == 9)) &&
          (pGVar4 = (GameAmmo *)
                    FUN_006165e0(pcVar3,0,&GameItem::RTTI_Type_Descriptor,
                                 &GameAmmo::RTTI_Type_Descriptor,0),
          *(int *)&(pGVar4->GameItem).GameEntity.Entity.DynamicObject.field_0x30c ==
          *(int *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x31c)) &&
         (*(int *)&(pGVar4->GameItem).GameEntity.Entity.DynamicObject.field_0x310 ==
          *(int *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x320)) {
        if (pGVar4 != (GameAmmo *)0x0) goto LAB_004139df;
        break;
      }
    }
    iVar5 = FUN_00408110(*(int *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x31c,
                         *(int *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x320);
    pGVar4 = (GameAmmo *)0x0;
    if (iVar5 == 0) {
      handle_fatal_error(
                        "GameWeapon::UnloadPrimaryAmmo() - Unable to look up ammo. Caliber %d, modifier %d"
                        );
    }
    local_c = (GameAmmo *)operator_new(0x7b0);
    if (local_c != (GameAmmo *)0x0) {
      pGVar4 = GameAmmo::GameAmmo(local_c,1);
    }
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(iVar5 + 4) + 4) + 4 + iVar5;
    }
    (**(code **)(*(int *)((int)&(pGVar4->GameItem).GameEntity.mbr_0x4 +
                         *(int *)((pGVar4->GameItem).GameEntity.mbr_0x4 + 4)) + 0x28))(iVar5);
    piVar6 = (int *)FUN_006165e0(*(cls_0x616328 **)(param_1 + 0x168),0,
                                 &Inventory::RTTI_Type_Descriptor,
                                 &GameInventory::RTTI_Type_Descriptor,0);
    (**(code **)(*piVar6 + 4))
              ((int)&(pGVar4->GameItem).GameEntity.mbr_0x4 +
               *(int *)((pGVar4->GameItem).GameEntity.mbr_0x4 + 4));
    GameServer::meth_0x46d8e0
              (this_01,*(undefined4 *)(param_1 + 0x1dc),
               *(undefined4 *)
                ((int)&(pGVar4->GameItem).GameEntity.Entity.DynamicObject.Gfx_LineSystem.mbr_0xfc +
                *(int *)((pGVar4->GameItem).GameEntity.mbr_0x4 + 4)),
               *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x31c,
               *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x320);
LAB_004139df:
    FUN_00549d60((void *)((int)&(pGVar4->GameItem).GameEntity.mbr_0x4 +
                         *(int *)((pGVar4->GameItem).GameEntity.mbr_0x4 + 4)),
                 *(int *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x350);
    dVar2 = (this->GameItem).GameEntity.mbr_0x4;
    *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x350 = 0;
    *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x384 = 0;
    GameServer::meth_0x46d700
              (this_01,*(undefined4 *)
                        ((int)&(this->GameItem).GameEntity.Entity.DynamicObject.Gfx_LineSystem.
                               mbr_0xfc + *(int *)(dVar2 + 4)),
               *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x320,0);
    iVar5 = *(int *)((pGVar4->GameItem).GameEntity.mbr_0x4 + 4);
    uVar7 = GameServer::meth_0x552d40
                      (this_00,*(undefined4 *)
                                ((int)&(pGVar4->GameItem).GameEntity.Entity.DynamicObject.
                                       Gfx_LineSystem.mbr_0xfc + iVar5),
                       *(undefined4 *)
                        (&(pGVar4->GameItem).GameEntity.Entity.DynamicObject.field_0x31c + iVar5));
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar7 >> 8),1);
}



/* WARNING: Type propagation algorithm not settling */

uint __thiscall GameWeapon::ReloadPrimaryAmmo(GameWeapon *this,int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  uint uVar2;
  GameServer *this_00;
  bool bVar3;
  uint uVar4;
  int iVar5;
  dword dVar6;
  GameServer *this_01;
  int iVar7;
  undefined4 uVar8;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    param_2 = FUN_00497120((byte *)"GameWeapon::ReloadPrimaryAmmo() - NULL ammo stack pointer.\n");
  }
  else {
    iVar5 = *(int *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x34c;
    if (iVar5 == 0) {
      uVar4 = FUN_00497120((byte *)
                           "GameWeapon::ReloadPrimaryAmmo() - This weapon doesn\'t even use ammo.\n"
                          );
      return uVar4 & 0xffffff00;
    }
    if (*(int *)(param_1 + 0x3b0) !=
        *(int *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x310) {
      uVar4 = FUN_00497120((byte *)
                           "GameWeapon::ReloadPrimaryAmmo() - Wrong caliber of ammo passed for reload.\n"
                          );
      return uVar4 & 0xffffff00;
    }
    bVar3 = false;
    if ((*(int *)(param_1 + 0x3b4) !=
         *(int *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x314) &&
       (*(int *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x348 != 0)) {
      bVar3 = true;
    }
    uVar4 = iVar5 - *(int *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x348;
    if ((bVar3) || (uVar4 != 0)) {
      iVar5 = FUN_006165e0(*(cls_0x616328 **)(param_2 + 0x168),0,&Inventory::RTTI_Type_Descriptor,
                           &GameInventory::RTTI_Type_Descriptor,0);
      if (iVar5 == 0) {
        uVar4 = FUN_00497120((byte *)
                             "GameWeapon::ReloadPrimaryAmmo() - Unable to retrieve owner\'s inventory.\n"
                            );
        return uVar4 & 0xffffff00;
      }
      if (bVar3) {
        UnloadPrimaryAmmo(this,param_2);
        uVar4 = *(uint *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x34c;
      }
      uVar2 = *(uint *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x3c0 + param_1);
      if (uVar2 < uVar4) {
        uVar4 = uVar2;
      }
      puVar1 = &(this->GameItem).GameEntity.Entity.DynamicObject.field_0x348;
      *(uint *)puVar1 = *(int *)puVar1 + uVar4;
      *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x314 =
           *(undefined4 *)(param_1 + 0x3b4);
      dVar6 = FUN_00408110(*(int *)(param_1 + 0x3b0),*(int *)(param_1 + 0x3b4));
      (this->GameItem).GameEntity.Entity.DynamicObject.mbr_0x380 = dVar6;
      if (dVar6 == 0) {
        handle_fatal_error(
                          "GameWeapon::ReloadPrimaryAmmo - Unable to look up ammo: caliber %d, modifier %d"
                          );
      }
      this_00 = *(GameServer **)(DAT_0070bd90 + 0x18);
      this_01 = (GameServer *)
                FUN_006165e0((cls_0x616328 *)this_00,0,&Server::RTTI_Type_Descriptor,
                             &GameServer::RTTI_Type_Descriptor,0);
      GameServer::meth_0x46d700
                (this_01,*(undefined4 *)
                          ((int)&(this->GameItem).GameEntity.Entity.DynamicObject.Gfx_LineSystem.
                                 mbr_0xfc + *(int *)((this->GameItem).GameEntity.mbr_0x4 + 4)),
                 *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x314,
                 *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x348);
      iVar5 = *(int *)(*(int *)(param_1 + 4) + 4);
      iVar7 = iVar5 + param_1;
      if (*(uint *)(iVar5 + 0x3c0 + param_1) == uVar4) {
        GameServer::meth_0x46cf10(this_01,param_3,iVar7 + 4);
        uVar8 = net::critical_section::meth_0x551b60
                          ((critical_section *)(*(int *)(*(int *)(param_1 + 4) + 4) + 4 + param_1));
        return CONCAT31((int3)((uint)uVar8 >> 8),1);
      }
      net::critical_section::meth_0x549d30((critical_section *)(iVar7 + 4),uVar4);
      iVar5 = *(int *)(*(int *)(param_1 + 4) + 4);
      uVar8 = GameServer::meth_0x552d40
                        (this_00,*(undefined4 *)(iVar5 + param_1 + 0x1e0),
                         *(undefined4 *)(iVar5 + 0x3c0 + param_1));
      return CONCAT31((int3)((uint)uVar8 >> 8),1);
    }
  }
  return param_2 & 0xffffff00;
}



/* WARNING: Type propagation algorithm not settling */

uint __thiscall GameWeapon::ReloadSecondaryAmmo(GameWeapon *this,int param_1,int param_2)

{
  uint uVar1;
  GameServer *this_00;
  bool bVar2;
  uint uVar3;
  int iVar4;
  GameServer *this_01;
  int iVar5;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    param_2 = FUN_00497120((byte *)"GameWeapon::ReloadSecondaryAmmo() - NULL ammo stack pointer.\n")
    ;
  }
  else {
    iVar4 = *(int *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x354;
    if (iVar4 == 0) {
      uVar3 = FUN_00497120((byte *)
                           "GameWeapon::ReloadSecondaryAmmo() - This weapon doesn\'t even use a 2ndary ammo.\n"
                          );
      return uVar3 & 0xffffff00;
    }
    if (*(int *)(param_1 + 0x3b0) !=
        *(int *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x31c) {
      uVar3 = FUN_00497120((byte *)
                           "GameWeapon::ReloadSecondaryAmmo() - Wrong caliber of ammo passed for reload.\n"
                          );
      return uVar3 & 0xffffff00;
    }
    bVar2 = false;
    if ((*(int *)(param_1 + 0x3b4) !=
         *(int *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x314) &&
       (*(int *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x348 != 0)) {
      bVar2 = true;
    }
    uVar3 = iVar4 - *(int *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x350;
    if ((bVar2) || (uVar3 != 0)) {
      iVar4 = FUN_006165e0(*(cls_0x616328 **)(param_2 + 0x168),0,&Inventory::RTTI_Type_Descriptor,
                           &GameInventory::RTTI_Type_Descriptor,0);
      if (iVar4 == 0) {
        uVar3 = FUN_00497120((byte *)
                             "GameWeapon::ReloadSecondaryAmmo() - Unable to retrieve owner\'s inventory.\n"
                            );
        return uVar3 & 0xffffff00;
      }
      if (bVar2) {
        UnloadPrimaryAmmo(this,param_2);
      }
      uVar1 = *(uint *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x3c0 + param_1);
      if (uVar1 < uVar3) {
        uVar3 = uVar1;
      }
      *(uint *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x350 = uVar3;
      *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x320 =
           *(undefined4 *)(param_1 + 0x3b4);
      iVar4 = FUN_00408110(*(int *)(param_1 + 0x3b0),*(int *)(param_1 + 0x3b4));
      *(int *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x384 = iVar4;
      if (iVar4 == 0) {
        handle_fatal_error(
                          "GameWeapon::ReloadSecondaryAmmo - Unable to look up ammo: caliber %d, modifier %d"
                          );
      }
      this_00 = *(GameServer **)(DAT_0070bd90 + 0x18);
      this_01 = (GameServer *)
                FUN_006165e0((cls_0x616328 *)this_00,0,&Server::RTTI_Type_Descriptor,
                             &GameServer::RTTI_Type_Descriptor,0);
      GameServer::meth_0x46d7f0
                (this_01,*(undefined4 *)
                          ((int)&(this->GameItem).GameEntity.Entity.DynamicObject.Gfx_LineSystem.
                                 mbr_0xfc + *(int *)((this->GameItem).GameEntity.mbr_0x4 + 4)),
                 *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x320,
                 *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x350);
      iVar4 = *(int *)(*(int *)(param_1 + 4) + 4);
      iVar5 = iVar4 + param_1;
      if (*(uint *)(iVar4 + 0x3c0 + param_1) != uVar3) {
        net::critical_section::meth_0x549d30((critical_section *)(iVar5 + 4),uVar3);
        iVar4 = *(int *)(*(int *)(param_1 + 4) + 4);
        iVar5 = GameServer::meth_0x552d40
                          (this_00,*(undefined4 *)(iVar4 + param_1 + 0x1e0),
                           *(undefined4 *)(iVar4 + 0x3c0 + param_1));
      }
      return CONCAT31((int3)((uint)iVar5 >> 8),1);
    }
  }
  return param_2 & 0xffffff00;
}



/* WARNING: Type propagation algorithm not settling */

GameWeapon * __thiscall GameWeapon::GameWeapon(GameWeapon *this,int param_1)

{
  dword dVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062be97;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    (this->GameItem).GameEntity.mbr_0x4 = (dword)&DAT_00650024;
    Entity::Entity((Entity *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x38c);
    local_4 = 0;
  }
  GameItem::GameItem(&this->GameItem,0);
  dVar1 = (this->GameItem).GameEntity.mbr_0x4;
  (this->GameItem).GameEntity.vftptr_0x0 =
       (GameEntity__vftable_666130 *)&GameWeapon__vftable_650020_00650020;
  *(undefined ***)((int)&(this->GameItem).GameEntity.mbr_0x4 + *(int *)(dVar1 + 4)) =
       &PTR_virt_meth_0x414680_0064ff34;
  iVar2 = *(int *)((this->GameItem).GameEntity.mbr_0x4 + 4);
  *(int *)((int)&(this->GameItem).GameEntity.vftptr_0x0 + iVar2) = iVar2 + -0x42c;
  *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x340 = 0xf;
  (this->GameItem).GameEntity.Entity.DynamicObject.mbr_0x33c = 0;
  (this->GameItem).GameEntity.Entity.DynamicObject.field_0x32c = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x364 = 0;
  uVar3 = FUN_0040a190();
  *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x36c = uVar3;
  *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x370 = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  uVar3 = FUN_0040a190();
  *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x378 = uVar3;
  (this->GameItem).GameEntity.Entity.DynamicObject.mbr_0x37c = 0;
  *(undefined4 *)
   (&(this->GameItem).GameEntity.Entity.DynamicObject.Gfx_LineSystem.field_0x7c +
   *(int *)((this->GameItem).GameEntity.mbr_0x4 + 4)) = 6;
  *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x318 = 2;
  *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x324 = 2;
  *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x30c = 0;
  *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x310 = 0;
  *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x314 = 0;
  *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x31c = 0;
  *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x320 = 0;
  *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x344 = 1;
  *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x348 = 0;
  *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x34c = 1;
  *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x350 = 0;
  *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x354 = 1;
  *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x358 = 0;
  *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x35c = 0;
  *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x360 = 0;
  *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x364 = 0;
  (this->GameItem).GameEntity.Entity.DynamicObject.mbr_0x380 = 0;
  *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x384 = 0;
  ExceptionList = local_c;
  return this;
}



void GameWeapon::ReadAttackModeData(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint unaff_retaddr;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c [2];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined local_40;
  undefined local_3f;
  char local_3e;
  undefined local_3d;
  undefined4 local_3c;
  int iStack_34;
  undefined4 uStack_30;
  void *local_2c;
  dword local_1c;
  uint local_18;
  undefined local_12;
  undefined local_10 [2];
  char cStack_e;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  iVar3 = param_2;
  uVar2 = param_1;
  puStack_8 = &LAB_0062beb8;
  local_c = ExceptionList;
  _local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  iVar1 = *(int *)(param_1 + 0xc);
  local_18 = 0xf;
  local_1c = 0;
  local_2c = (void *)((uint)local_2c & 0xffffff00);
  local_12 = 0;
  local_3f = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  uVar4 = ResourceSystem::MemStreamRead(&local_74,4,param_2);
  if ((char)uVar4 == '\0') {
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    goto LAB_00414e21;
  }
  uVar4 = ResourceSystem::MemStreamRead(&local_70,4,iVar3);
  if ((char)uVar4 == '\0') {
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    goto LAB_00414e21;
  }
  uVar4 = ResourceSystem::MemStreamRead(&local_64,4,iVar3);
  if ((char)uVar4 == '\0') {
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    goto LAB_00414e21;
  }
  uVar4 = ResourceSystem::MemStreamRead(&local_60,4,iVar3);
  if (((((((char)uVar4 != '\0') &&
         (uVar4 = ResourceSystem::MemStreamRead(&local_5c,4,iVar3), (char)uVar4 != '\0')) &&
        (uVar4 = ResourceSystem::MemStreamRead(&local_58,4,iVar3), (char)uVar4 != '\0')) &&
       ((uVar4 = ResourceSystem::MemStreamRead(&local_54,4,iVar3), (char)uVar4 != '\0' &&
        (uVar4 = ResourceSystem::MemStreamRead(&local_50,4,iVar3), (char)uVar4 != '\0')))) &&
      ((uVar4 = ResourceSystem::MemStreamRead(&local_4c,4,iVar3), (char)uVar4 != '\0' &&
       ((uVar4 = ResourceSystem::MemStreamRead(&local_48,4,iVar3), (char)uVar4 != '\0' &&
        (uVar4 = ResourceSystem::MemStreamRead(&local_44,4,iVar3), (char)uVar4 != '\0')))))) &&
     (uVar4 = ResourceSystem::MemStreamRead(&param_1,1,iVar3), (char)uVar4 != '\0')) {
    local_40 = (char)param_1 != '\0';
    if (iVar1 == 0) {
LAB_00414b7c:
      if (((((*(uint *)(uVar2 + 0xc) < 2) ||
            (uVar4 = ResourceSystem::MemStreamRead(&iStack_34,4,iVar3), (char)uVar4 != '\0')) &&
           ((*(uint *)(uVar2 + 0xc) < 3 ||
            (uVar4 = ResourceSystem::MemStreamRead(&uStack_30,4,iVar3), (char)uVar4 != '\0')))) &&
          ((*(uint *)(uVar2 + 0xc) < 4 ||
           (uVar5 = FUN_0049c8d0((cls_0x50db20 *)&local_2c,iVar3), (char)uVar5 != '\0')))) &&
         ((*(uint *)(uVar2 + 0xc) < 5 ||
          ((uVar4 = ResourceSystem::MemStreamRead((undefined4 *)local_10,1,iVar3),
           (char)uVar4 != '\0' &&
           (uVar4 = ResourceSystem::MemStreamRead((undefined4 *)(local_10 + 1),1,iVar3),
           (char)uVar4 != '\0')))))) {
        if (local_3c._3_1_ == '\0') {
          switch(*(undefined4 *)(local_78 + 0x3b0)) {
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
            local_74 = 1;
            break;
          case 6:
          case 7:
          case 8:
            local_74 = 0;
            break;
          case 9:
          case 10:
            local_74 = 3;
          }
        }
        else {
          local_74 = 2;
        }
        if (iStack_34 == 0) {
          switch(local_70) {
          case 1:
            iStack_34 = (-(uint)(cStack_e != '\0') & 6) + 0x38;
            break;
          case 2:
            iStack_34 = 0x3b;
            break;
          case 4:
            iStack_34 = 0x3d;
            break;
          case 6:
            iStack_34 = 0x3c;
            break;
          case 7:
            iStack_34 = 0x3f;
            break;
          case 8:
            iStack_34 = 0x40;
            break;
          case 9:
            iStack_34 = 0x41;
            break;
          case 10:
            iStack_34 = 0x35;
            break;
          case 0xb:
            iStack_34 = 0x36;
            break;
          case 0xc:
            iStack_34 = 0x37;
            break;
          case 0xd:
            iStack_34 = 0x53;
            break;
          case 0xe:
            iStack_34 = 0x54;
            break;
          case 0xf:
            iStack_34 = 0x55;
            break;
          case 0x10:
            iStack_34 = 0x56;
            break;
          case 0x11:
            iStack_34 = 0x57;
            break;
          case 0x12:
            iStack_34 = 0x58;
            break;
          case 0x13:
            iStack_34 = 0x59;
            break;
          case 0x14:
            iStack_34 = 0x5a;
            break;
          case 0x15:
            iStack_34 = 0x5b;
            break;
          case 0x16:
            iStack_34 = 0x5c;
            break;
          case 0x17:
            iStack_34 = 0x5d;
            break;
          case 0x18:
            iStack_34 = 0x5e;
            break;
          case 0x19:
            iStack_34 = 0x5f;
            break;
          case 0x1a:
            iStack_34 = 0x60;
            break;
          case 0x1b:
            iStack_34 = 0x61;
            break;
          case 0x1c:
            iStack_34 = 0x62;
            break;
          case 0x1d:
            iStack_34 = 99;
            break;
          case 0x1e:
            iStack_34 = 100;
            break;
          case 0x1f:
            iStack_34 = 0x65;
            break;
          case 0x20:
            iStack_34 = 0x66;
            break;
          case 0x21:
            iStack_34 = 0x67;
            break;
          case 0x22:
            iStack_34 = 0x68;
          }
        }
        FUN_0040c970((void *)(local_78 + 0x40c),&local_74);
        FUN_0040a240((int)&local_74);
        goto LAB_00414e21;
      }
    }
    else {
      uVar4 = ResourceSystem::MemStreamRead(local_6c,4,iVar3);
      if (((char)uVar4 != '\0') &&
         (uVar4 = ResourceSystem::MemStreamRead(&param_1,1,iVar3), (char)uVar4 != '\0')) {
        local_3f = (char)param_1 != '\0';
        uVar4 = ResourceSystem::MemStreamRead(&local_3c,4,iVar3);
        if (((char)uVar4 != '\0') &&
           (uVar4 = ResourceSystem::MemStreamRead(&param_1,1,iVar3), (char)uVar4 != '\0')) {
          local_3e = (char)param_1 != '\0';
          uVar4 = ResourceSystem::MemStreamRead(&param_1,1,iVar3);
          if ((char)uVar4 != '\0') {
            local_3d = (char)param_1 != '\0';
            if (((bool)local_3d) && (local_3e != '\0')) {
              handle_fatal_error(
                                "GameWeapon::ReadAttackModeData() - A weapon can\'t be both consumed and thrown."
                                );
            }
            goto LAB_00414b7c;
          }
        }
      }
    }
  }
  FUN_0040a240((int)&local_74);
LAB_00414e21:
  ExceptionList = puStack_8;
  FUN_00616e15((uint)local_c ^ param_1);
  return;
}



uint __thiscall GameWeapon::ReadData(GameWeapon *this,int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  uint uVar3;
  int unaff_EDI;
  uint uVar4;
  Chunk local_2c;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062bef8;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0xc);
  ExceptionList = &local_c;
  bVar2 = FUN_00412cd0(this,param_2);
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (bVar2) {
    if (iVar1 == 0) {
LAB_00415205:
      uVar3 = *(uint *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x360;
      uVar4 = 0;
      if (uVar3 != 0) {
        do {
          Common::Chunk::Chunk(&local_2c);
          local_4 = 0;
          uVar3 = Common::Chunk::Read(&local_2c,param_2,unaff_EDI);
          if ((char)uVar3 == '\0') goto LAB_00415292;
          if (local_2c.mbr_0x8 != 0x4d415747) {
            uVar3 = FUN_00497120((byte *)
                                 "GameWeapon::ReadData() - Unexpected chunk ID. Attack Mode ID \'GWAM\' expected."
                                );
            goto LAB_00415292;
          }
          uVar3 = ReadAttackModeData((uint)&local_2c,param_2);
          if ((char)uVar3 == '\0') goto LAB_00415292;
          Common::Chunk::SkipToEnd(&local_2c);
          uVar3 = *(uint *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x360;
          uVar4 = uVar4 + 1;
          local_4 = 0xffffffff;
          local_2c.vftptr_0x0 = &Chunk__vftable_64d500_0064d500;
        } while (uVar4 < uVar3);
      }
      ExceptionList = local_c;
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
    uVar3 = ResourceSystem::MemStreamRead
                      ((undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x314,4
                       ,param_2);
    if ((char)uVar3 != '\0') {
      uVar3 = ResourceSystem::MemStreamRead
                        ((undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x320
                         ,4,param_2);
      if ((char)uVar3 != '\0') goto LAB_00415205;
    }
  }
LAB_00415292:
  ExceptionList = local_c;
  return uVar3 & 0xffffff00;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Exceeded maximum restarts with more pending */

uint __thiscall
GameWeapon::ResolveTargets
          (GameWeapon *this,int param_1,cls_0x401b00 *param_2,int param_3,int param_4,char param_5,
          undefined4 param_6,cls_0x401b00 *param_7)

{
  cls_0x616328 **ppcVar1;
  int *piVar2;
  ModelInstance *pMVar3;
  char cVar4;
  int **ppiVar5;
  int iVar6;
  int *piVar7;
  Map *pMVar8;
  float *pfVar9;
  int iVar10;
  undefined4 uVar11;
  Map *pMVar12;
  int *unaff_EBX;
  float *unaff_EBP;
  int *unaff_ESI;
  int iVar13;
  cls_0x616328 **ppcVar14;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  cls_0x401b00 *unaff_retaddr;
  dword *pdVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined4 *puVar18;
  int iVar19;
  char *pcVar20;
  cls_0x401b00 *pcStack_430;
  int *piStack_42c;
  int iStack_428;
  int iStack_424;
  Map *pMStack_420;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  int *piStack_408;
  Vec3 VStack_404;
  float fStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float fStack_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  undefined auStack_3d8 [8];
  int *piStack_3d0;
  int *piStack_3cc;
  dword dStack_3c8;
  float fStack_3c4;
  dword dStack_3c0;
  int *piStack_3bc;
  dword dStack_3b8;
  dword dStack_3b4;
  dword dStack_3b0;
  dword dStack_3ac;
  dword dStack_3a8;
  dword dStack_3a4;
  dword dStack_3a0;
  dword dStack_39c;
  dword dStack_398;
  dword dStack_394;
  int *piStack_390;
  int *piStack_38c;
  dword dStack_388;
  dword dStack_384;
  dword dStack_380;
  dword dStack_37c;
  dword dStack_378;
  dword dStack_374;
  dword dStack_370;
  dword dStack_36c;
  dword dStack_368;
  dword dStack_364;
  dword dStack_360;
  dword dStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_344;
  float fStack_340;
  dword dStack_33c;
  float fStack_338;
  dword dStack_334;
  dword dStack_330;
  cls_0x415170 cStack_32c;
  dword dStack_304;
  undefined4 uStack_2ec;
  float fStack_2e8;
  undefined4 uStack_2e4;
  undefined auStack_2a4 [4];
  undefined4 uStack_2a0;
  undefined auStack_29c [36];
  cls_0x616328 *apcStack_278 [55];
  undefined auStack_19c [72];
  undefined auStack_154 [316];
  int *piStack_18;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  iVar19 = param_3;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0062bf31;
  local_c = ExceptionList;
  if ((param_1 == 0) || (((param_5 == '\0' && (param_2 == (cls_0x401b00 *)0x0)) || (param_3 == 0))))
  {
    pcVar20 = "GameWeapon::ResolveTargets() - NULL parameters recieved.\n";
LAB_004169ee:
    ExceptionList = &local_c;
    pMVar12 = (Map *)FUN_00497120((byte *)pcVar20);
    goto LAB_004169f6;
  }
  switch(*(undefined4 *)(param_3 + 0xc)) {
  case 0:
  case 2:
    pcStack_430 = param_2;
    if (param_2 != (cls_0x401b00 *)0x0) {
      ExceptionList = &local_c;
      pcStack_430 = (cls_0x401b00 *)cls_0x401b00::meth_0x402b30(param_7,&param_2);
    }
    break;
  case 1:
    pMVar12 = *(Map **)(param_4 + 0x18);
    if (*(char *)((int)&pMVar12->mbr_0x6c + 2) == '\0') {
      if (*(int *)(param_1 + 0x1ec) != 0) {
        ExceptionList = &local_c;
        piVar7 = (int *)FUN_00401130();
        pMVar12 = (Map *)(**(code **)(*piVar7 + 0x54))();
        if (((pMVar12 != (Map *)0x0) &&
            (pMVar8 = (Map *)Map::GetOctree(pMVar12), pMVar12 = pMVar8, pMVar8 != (Map *)0x0)) &&
           (pMVar12 = *(Map **)(&(this->GameItem).GameEntity.Entity.DynamicObject.Gfx_LineSystem.
                                 field_0x80 + *(int *)((this->GameItem).GameEntity.mbr_0x4 + 4)),
           pMVar12 != (Map *)0x0)) {
          fStack_3dc = (float)*(int *)(param_3 + 0x2c);
          auStack_3d8._0_4_ = 4;
          fStack_3e0 = 0.0;
          if (*(int *)(param_3 + 0x2c) < 0) {
            fStack_3dc = fStack_3dc + 4.294967e+09;
          }
          piVar7 = &iStack_428;
          pfVar9 = &fStack_3e0;
          (*pMVar8->vftptr_0x0->virt_meth_0x56e580_28)(pMVar8);
          if (pcStack_430 != (cls_0x401b00 *)0x0) {
            ModelInstance::meth_0x563a40
                      (*(ModelInstance **)
                        (&(this->GameItem).GameEntity.Entity.DynamicObject.Gfx_LineSystem.field_0x80
                        + *(int *)((this->GameItem).GameEntity.mbr_0x4 + 4)),&fStack_40c);
            VStack_404.y = fStack_40c;
            fStack_3f8 = VStack_404.x;
            VStack_404.z = (float)piStack_408;
            thunk_FUN_0047227f(auStack_2a4,fStack_40c,piStack_408,VStack_404.x);
            thunk_FUN_004723ab(auStack_19c,(float)param_2->mbr_0x8 * 0.01745329);
            puVar16 = auStack_2a4;
            puVar17 = auStack_19c;
            pdVar15 = &dStack_334;
            thunk_FUN_00471943();
            cls_0x412ad0::cls_0x412ad0((cls_0x412ad0 *)auStack_3d8);
            auStack_3d8._0_4_ = fStack_340;
            piStack_3d0 = (int *)fStack_338;
            piStack_3cc = (int *)dStack_334;
            auStack_3d8._4_4_ = dStack_33c;
            fStack_3c4 = (float)cStack_32c.cls_0x414470._0_4_;
            dStack_3c0 = cStack_32c.cls_0x414470.mbr_0x4;
            dStack_3c8 = dStack_330;
            dStack_3b8 = cStack_32c.cls_0x414470.mbr_0xc;
            dStack_3b4 = cStack_32c.cls_0x414470.mbr_0x10;
            piStack_3bc = (int *)cStack_32c.cls_0x414470.mbr_0x8;
            dStack_3ac = cStack_32c.cls_0x414470.mbr_0x18;
            dStack_3a8 = cStack_32c.cls_0x414470.mbr_0x1c;
            dStack_3b0 = cStack_32c.cls_0x414470.mbr_0x14;
            dStack_3a0 = cStack_32c.cls_0x414470.mbr_0x24;
            dStack_39c = dStack_304;
            dStack_3a4 = cStack_32c.cls_0x414470.mbr_0x20;
            (**(code **)(*unaff_ESI + 8))(auStack_3d8,pdVar15,puVar17,puVar16);
            (*pMVar8->vftptr_0x0[1].virt_meth_0x56c510_36)(pMVar8);
            iVar10 = 1;
            iVar19 = 0;
            puVar18 = (undefined4 *)0x7f7fffff;
            do {
              (**(code **)(*piVar7 + 0x18))(0x32,apcStack_278,&stack0xfffffbc4);
              if (apcStack_278[0] != (cls_0x616328 *)0x0) {
                ppcVar14 = apcStack_278;
                do {
                  iVar13 = FUN_006165e0(*ppcVar14,0,&DynamicObject::RTTI_Type_Descriptor,
                                        &GameCreature::RTTI_Type_Descriptor,0);
                  if ((((iVar13 != 0) &&
                       (piVar2 = (int *)(*(int *)(*(int *)(iVar13 + 4) + 4) + 4 + iVar13),
                       piVar2 != piStack_18)) &&
                      (cVar4 = (**(code **)(*piVar2 + 0x50))(), cVar4 == '\0')) &&
                     (iVar6 = (**(code **)(*(int *)((int)&(this->GameItem).GameEntity.mbr_0x4 +
                                                   *(int *)((this->GameItem).GameEntity.mbr_0x4 + 4)
                                                   ) + 0x90))
                                        (*(int *)(*(int *)(iVar13 + 4) + 4) + 4 + iVar13),
                     iVar6 != 0)) {
                    iVar6 = *(int *)(*(int *)(iVar13 + 4) + 4);
                    dStack_360 = *(dword *)(iVar6 + 8 + iVar13);
                    iVar6 = iVar6 + 8 + iVar13;
                    dStack_35c = *(dword *)(iVar6 + 4);
                    uStack_358 = *(undefined4 *)(iVar6 + 8);
                    FUN_00412aa0(&fStack_414,(float10 *)&dStack_360,pfVar9);
                    if (extraout_ST0_00 < (float10)(float)puVar18 !=
                        (NAN(extraout_ST0_00) || NAN((float10)(float)puVar18))) {
                      puVar18 = (undefined4 *)(float)extraout_ST0_00;
                      iVar19 = iVar13;
                    }
                  }
                  ppcVar1 = ppcVar14 + 1;
                  ppcVar14 = ppcVar14 + 1;
                } while (*ppcVar1 != (cls_0x616328 *)0x0);
              }
            } while (iVar10 != 0);
            if (iVar19 != 0) {
              cls_0x401b00::meth_0x402b30(unaff_retaddr,(undefined4 *)&stack0xfffffbc8);
            }
            (*pMVar8->vftptr_0x0[1].virt_meth_0x56e970_40)(piVar7);
            uVar11 = (**(code **)*puVar18)();
            ExceptionList = local_c;
            return CONCAT31((int3)((uint)uVar11 >> 8),1);
          }
          break;
        }
      }
    }
    else if (*(int *)(param_1 + 0x1ec) != 0) {
      ExceptionList = &local_c;
      piVar7 = (int *)FUN_00401130();
      pMVar12 = (Map *)(**(code **)(*piVar7 + 0x54))();
      if ((pMVar12 != (Map *)0x0) &&
         (pMVar8 = (Map *)Map::GetOctree(pMVar12), pMVar12 = pMVar8, pMVar8 != (Map *)0x0)) {
        pMVar12 = (Map *)(this->GameItem).GameEntity.mbr_0x4;
        pMVar3 = *(ModelInstance **)
                  (&(this->GameItem).GameEntity.Entity.DynamicObject.Gfx_LineSystem.field_0x80 +
                  pMVar12->mbr_0x4);
        if (pMVar3 != (ModelInstance *)0x0) {
          ModelInstance::meth_0x563a40(pMVar3,&fStack_3f8);
          piStack_3d0 = (int *)0x0;
          piStack_3cc = (int *)0x0;
          dStack_3c8 = 0;
          fStack_2e8 = (float)*(int *)(iVar19 + 0x2c);
          uStack_4 = 0;
          uStack_2e4 = 2;
          uStack_2ec = 0x42340000;
          if (*(int *)(iVar19 + 0x2c) < 0) {
            fStack_2e8 = fStack_2e8 + 4.294967e+09;
          }
          puVar18 = &uStack_2ec;
          (*pMVar8->vftptr_0x0->virt_meth_0x56e580_28)(pMVar8);
          piStack_42c = (int *)0x0;
          pfVar9 = unaff_EBP;
          if (iStack_428 != 0) {
            fStack_3ec = fStack_3f8;
            fStack_3f0 = VStack_404.z;
            thunk_FUN_0047227f(&fStack_2e8,VStack_404.y,VStack_404.z,fStack_3f8);
            thunk_FUN_004723ab(auStack_2a4,(float)param_2->mbr_0x8 * 0.01745329);
            pfVar9 = &fStack_2e8;
            puVar16 = auStack_2a4;
            ppiVar5 = &piStack_38c;
            thunk_FUN_00471943();
            cls_0x412ad0::cls_0x412ad0((cls_0x412ad0 *)auStack_3d8);
            auStack_3d8._0_4_ = dStack_398;
            piStack_3d0 = piStack_390;
            piStack_3cc = piStack_38c;
            auStack_3d8._4_4_ = dStack_394;
            fStack_3c4 = (float)dStack_384;
            dStack_3c0 = dStack_380;
            dStack_3c8 = dStack_388;
            dStack_3b8 = dStack_378;
            dStack_3b4 = dStack_374;
            piStack_3bc = (int *)dStack_37c;
            dStack_3ac = dStack_36c;
            dStack_3a8 = dStack_368;
            dStack_3b0 = dStack_370;
            dStack_3a0 = dStack_360;
            dStack_39c = dStack_35c;
            dStack_3a4 = dStack_364;
            (**(code **)(*unaff_EBX + 8))(auStack_3d8,ppiVar5,puVar16,pfVar9);
            pfVar9 = unaff_EBP;
            (*pMVar8->vftptr_0x0[1].virt_meth_0x56c510_36)(pMVar8);
            iVar19 = 1;
            do {
              (**(code **)(*unaff_ESI + 0x18))(0x32,apcStack_278,&stack0xfffffbb8,unaff_EBP);
              if (apcStack_278[0] != (cls_0x616328 *)0x0) {
                ppcVar14 = apcStack_278;
                do {
                  iVar10 = FUN_006165e0(*ppcVar14,0,&DynamicObject::RTTI_Type_Descriptor,
                                        &GameCreature::RTTI_Type_Descriptor,0);
                  iStack_424 = iVar10;
                  if (((iVar10 != 0) &&
                      (piVar7 = (int *)(*(int *)(*(int *)(iVar10 + 4) + 4) + 4 + iVar10),
                      piVar7 != piStack_18)) &&
                     ((cVar4 = (**(code **)(*piVar7 + 0x50))(), cVar4 == '\0' &&
                      (iVar10 = (**(code **)(*(int *)((int)&(this->GameItem).GameEntity.mbr_0x4 +
                                                     *(int *)((this->GameItem).GameEntity.mbr_0x4 +
                                                             4)) + 0x90))
                                          (*(int *)(*(int *)(iVar10 + 4) + 4) + 4 + iVar10),
                      iVar10 != 0)))) {
                    cls_0x40cc80::meth_0x414400((cls_0x40cc80 *)&fStack_3f0,&iStack_424);
                  }
                  ppcVar1 = ppcVar14 + 1;
                  ppcVar14 = ppcVar14 + 1;
                } while (*ppcVar1 != (cls_0x616328 *)0x0);
              }
            } while (iVar19 != 0);
            (*pMVar8->vftptr_0x0[1].virt_meth_0x56e970_40)(pMVar8);
            (**(code **)*puVar18)(unaff_ESI);
            piStack_42c = piStack_3d0;
          }
          cls_0x415170::cls_0x415170(&cStack_32c);
          uStack_4 = CONCAT31(uStack_4._1_3_,1);
          if (piStack_42c != piStack_3cc) {
            do {
              iVar19 = *piStack_42c;
              iVar10 = *(int *)(*(int *)(iVar19 + 4) + 4);
              fStack_3e4 = *(float *)(iVar10 + 8 + iVar19);
              iVar19 = iVar10 + 8 + iVar19;
              fStack_3e0 = *(float *)(iVar19 + 4);
              fStack_3dc = *(float *)(iVar19 + 8);
              fStack_40c = fStack_3f0;
              piStack_408 = (int *)fStack_3ec;
              VStack_404.x = fStack_3e8;
              FUN_00401070(&fStack_40c,(float10 *)&fStack_3e4,pfVar9);
              VStack_404.y = (float)extraout_ST0;
              fStack_338 = (float)extraout_ST0;
              dStack_334 = 4;
              dStack_33c = 0;
              (*pMVar8->vftptr_0x0->virt_meth_0x56e580_28)(pMVar8);
              if (iStack_428 != 0) {
                uVar11 = thunk_FUN_0047227f(auStack_29c,fStack_414,fStack_410,fStack_40c);
                VStack_404.x = fStack_3ec - fStack_414;
                VStack_404.y = fStack_3e8 - fStack_410;
                VStack_404.z = fStack_3e4 - fStack_40c;
                vec3::normalize(&VStack_404);
                return uVar11;
              }
              piStack_42c = piStack_42c + 1;
            } while (piStack_42c != piStack_3cc);
          }
          cls_0x401d60::meth_0x401d60((cls_0x401d60 *)(auStack_3d8 + 4));
          ppiVar5 = (int **)cls_0x413520::meth_0x413520((cls_0x413520 *)&cStack_32c,&uStack_2a0);
          piVar7 = *ppiVar5;
          if (piVar7 != (int *)cStack_32c.cls_0x414470.mbr_0x8) {
            do {
              cls_0x40cc80::meth_0x414400((cls_0x40cc80 *)(auStack_3d8 + 4),piVar7 + 3);
              piVar7 = (int *)*piVar7;
            } while (piVar7 != (int *)cStack_32c.cls_0x414470.mbr_0x8);
          }
          piVar7 = piStack_3d0;
          iVar19 = *(int *)(param_3 + 0x1c);
          if (piStack_3d0 == (int *)0x0) {
            iVar10 = 0;
          }
          else {
            iVar10 = (int)piStack_3cc - (int)piStack_3d0 >> 2;
          }
          iVar13 = 0;
          if (0 < iVar19) {
            do {
              iVar6 = piVar7[iVar13 % iVar10];
              if (iVar6 == 0) {
                piStack_42c = (int *)0x0;
              }
              else {
                piStack_42c = (int *)(*(int *)(*(int *)(iVar6 + 4) + 4) + 4 + iVar6);
              }
              cls_0x401b00::meth_0x402b30(param_7,&piStack_42c);
              iVar13 = iVar13 + 1;
            } while (iVar13 < iVar19);
          }
          FUN_00561540((int *)&cStack_32c);
          uVar11 = cls_0x401d60::meth_0x401d60((cls_0x401d60 *)(auStack_3d8 + 4));
          ExceptionList = local_c;
          return CONCAT31((int3)((uint)uVar11 >> 8),1);
        }
      }
    }
    goto LAB_004169f6;
  default:
    ExceptionList = &local_c;
    pMVar12 = (Map *)FUN_00497120((byte *)
                                  "GameWeapon::ResolveTargets() - Recieved unknown attack mode type: %d\n"
                                 );
    goto LAB_004169f6;
  case 4:
    pMVar12 = (Map *)param_2;
    if (*(int *)(param_1 + 0x1ec) != 0) {
      ExceptionList = &local_c;
      piVar7 = (int *)FUN_00401130();
      pMVar12 = (Map *)(**(code **)(*piVar7 + 0x54))();
      if (pMVar12 != (Map *)0x0) {
        pMVar8 = (Map *)Map::GetOctree(pMVar12);
        pMVar12 = pMVar8;
        if (pMVar8 != (Map *)0x0) {
          pMVar12 = (Map *)(this->GameItem).GameEntity.mbr_0x4;
          pMVar3 = *(ModelInstance **)
                    (&(this->GameItem).GameEntity.Entity.DynamicObject.Gfx_LineSystem.field_0x80 +
                    pMVar12->mbr_0x4);
          if (pMVar3 != (ModelInstance *)0x0) {
            pMStack_420 = pMVar8;
            ModelInstance::meth_0x563a40(pMVar3,&fStack_3ec);
            piStack_3d0 = (int *)0x0;
            piStack_3cc = (int *)0x0;
            dStack_3c8 = 0;
            fStack_340 = (float)*(int *)(iVar19 + 0x2c);
            uStack_4 = 2;
            dStack_33c = 2;
            uStack_344 = 0x42340000;
            if (*(int *)(iVar19 + 0x2c) < 0) {
              fStack_340 = fStack_340 + 4.294967e+09;
            }
            (*pMVar8->vftptr_0x0->virt_meth_0x56e580_28)(pMVar8);
            piStack_408 = (int *)0x0;
            if (pMStack_420 != (Map *)0x0) {
              fStack_3e0 = fStack_3ec;
              fStack_3e4 = fStack_3f0;
              thunk_FUN_0047227f(auStack_19c,fStack_3f4,fStack_3f0,fStack_3ec);
              thunk_FUN_004723ab(auStack_2a4,(float)param_2->mbr_0x8 * 0.01745329);
              puVar16 = auStack_19c;
              puVar17 = auStack_2a4;
              ppiVar5 = &piStack_38c;
              thunk_FUN_00471943();
              cls_0x412ad0::cls_0x412ad0((cls_0x412ad0 *)auStack_3d8);
              auStack_3d8._0_4_ = dStack_398;
              piStack_3d0 = piStack_390;
              piStack_3cc = piStack_38c;
              auStack_3d8._4_4_ = dStack_394;
              fStack_3c4 = (float)dStack_384;
              dStack_3c0 = dStack_380;
              dStack_3c8 = dStack_388;
              dStack_3b8 = dStack_378;
              dStack_3b4 = dStack_374;
              piStack_3bc = (int *)dStack_37c;
              dStack_3ac = dStack_36c;
              dStack_3a8 = dStack_368;
              dStack_3b0 = dStack_370;
              dStack_3a0 = dStack_360;
              dStack_39c = dStack_35c;
              dStack_3a4 = dStack_364;
              (**(code **)(*piStack_42c + 8))(auStack_3d8,ppiVar5,puVar17,puVar16);
              (*pMVar8->vftptr_0x0[1].virt_meth_0x56c510_36)(pMVar8);
              iVar19 = 1;
              do {
                (**(code **)(*unaff_EBX + 0x18))(0x32,apcStack_278,&stack0xfffffbb8,pcStack_430);
                if (apcStack_278[0] != (cls_0x616328 *)0x0) {
                  ppcVar14 = apcStack_278;
                  do {
                    pfVar9 = (float *)FUN_006165e0(*ppcVar14,0,&DynamicObject::RTTI_Type_Descriptor,
                                                   &GameCreature::RTTI_Type_Descriptor,0);
                    unaff_EBP = pfVar9;
                    if (((pfVar9 != (float *)0x0) &&
                        (piVar7 = (int *)(*(int *)((int)pfVar9[1] + 4) + 4 + (int)pfVar9),
                        piVar7 != piStack_18)) &&
                       ((cVar4 = (**(code **)(*piVar7 + 0x50))(), cVar4 == '\0' &&
                        (iVar10 = (**(code **)(*(int *)((int)&(this->GameItem).GameEntity.mbr_0x4 +
                                                       *(int *)((this->GameItem).GameEntity.mbr_0x4
                                                               + 4)) + 0x90))
                                            (*(int *)((int)pfVar9[1] + 4) + 4 + (int)pfVar9),
                        iVar10 != 0)))) {
                      cls_0x40cc80::meth_0x414400
                                ((cls_0x40cc80 *)&fStack_3f0,(undefined4 *)&stack0xfffffbc8);
                    }
                    ppcVar1 = ppcVar14 + 1;
                    ppcVar14 = ppcVar14 + 1;
                  } while (*ppcVar1 != (cls_0x616328 *)0x0);
                }
              } while (iVar19 != 0);
              (*pMVar8->vftptr_0x0[1].virt_meth_0x56e970_40)(pMVar8);
              (**(code **)*unaff_EBP)(unaff_EBX);
              piStack_408 = piStack_3d0;
            }
            pMVar12 = pMStack_420;
            if (piStack_408 != piStack_3cc) {
              do {
                iVar19 = *piStack_408;
                iVar10 = *(int *)(*(int *)(iVar19 + 4) + 4);
                fStack_3f0 = *(float *)(iVar10 + 8 + iVar19);
                iVar19 = iVar10 + 8 + iVar19;
                fStack_3ec = *(float *)(iVar19 + 4);
                fStack_3e8 = *(float *)(iVar19 + 8);
                fStack_40c = fStack_3e4;
                piStack_408 = (int *)fStack_3e0;
                VStack_404.x = fStack_3dc;
                FUN_00401070(&fStack_40c,(float10 *)&fStack_3f0,unaff_EBP);
                fStack_414 = (float)extraout_ST0_01;
                cStack_32c.cls_0x414470._0_4_ = (undefined4)extraout_ST0_01;
                cStack_32c.cls_0x414470.mbr_0x4 = 4;
                dStack_330 = 0;
                (*pMVar12->vftptr_0x0->virt_meth_0x56e580_28)(pMVar12);
                if (iStack_424 != 0) {
                  uVar11 = thunk_FUN_0047227f(auStack_154,fStack_414,fStack_410,fStack_40c);
                  VStack_404.x = fStack_3f8 - fStack_414;
                  VStack_404.y = fStack_3f4 - fStack_410;
                  VStack_404.z = fStack_3f0 - fStack_40c;
                  vec3::normalize(&VStack_404);
                  return uVar11;
                }
                piStack_408 = (int *)((int)piStack_408 + 4);
              } while (piStack_408 != piStack_3cc);
            }
            uVar11 = cls_0x401d60::meth_0x401d60((cls_0x401d60 *)(auStack_3d8 + 4));
            ExceptionList = local_c;
            return CONCAT31((int3)((uint)uVar11 >> 8),1);
          }
        }
      }
    }
LAB_004169f6:
    ExceptionList = local_c;
    return (uint)pMVar12 & 0xffffff00;
  case 6:
  case 8:
  case 9:
    pcStack_430 = param_2;
    if (param_2 != (cls_0x401b00 *)0x0) {
      ExceptionList = &local_c;
      uVar11 = cls_0x401b00::meth_0x402b30(param_7,&param_2);
      ExceptionList = local_c;
      return CONCAT31((int3)((uint)uVar11 >> 8),1);
    }
    break;
  case 7:
    pcStack_430 = param_2;
    if (param_2 != (cls_0x401b00 *)0x0) {
      ExceptionList = &local_c;
      uVar11 = cls_0x401b00::meth_0x402b30(param_7,&param_2);
      ExceptionList = local_c;
      return CONCAT31((int3)((uint)uVar11 >> 8),1);
    }
    break;
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
    pcVar20 = "GameWeapon::ResolveTargets() - Recieved an Unarmed attack type. Error.\n";
    goto LAB_004169ee;
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)pcStack_430 >> 8),1);
}


#include "../include/GameWeapon.h"
