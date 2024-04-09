#include "../include/GameActionAttack.h"

void __thiscall
GameActionAttack::meth_0x401100(GameActionAttack *this,char param_1,undefined4 *param_2)

{
  this->mbr_0x48 = param_1;
  if ((param_1 != '\0') && (param_2 != (undefined4 *)0x0)) {
    this->mbr_0x4c = *param_2;
    this->mbr_0x50 = param_2[1];
    this->mbr_0x54 = param_2[2];
  }
  return;
}



undefined4 __thiscall GameActionAttack::OnCreate(GameActionAttack *this)

{
  char cVar1;
  int *piVar2;
  
  if ((this->mbr_0x38 == 0) && (this->mbr_0x48 == 0)) {
    handle_fatal_error("GameActionAttack::OnCreate() - No target was specified for the attack.");
    return 0;
  }
  if ((int *)this->mbr_0x14 != (int *)0x0) {
    cVar1 = (**(code **)(*(int *)this->mbr_0x14 + 0x50))();
    if (cVar1 == '\0') {
      if (this->mbr_0x48 != 0) {
LAB_00401226:
        FUN_005490b0();
        return 0;
      }
      piVar2 = (int *)GameActionEquip::meth_0x54be10((GameActionEquip *)this->mbr_0x38);
      if (piVar2 != (int *)0x0) {
        cVar1 = (**(code **)(*piVar2 + 0x50))();
        if (cVar1 == '\0') goto LAB_00401226;
      }
    }
  }
  this->mbr_0x58 = 1;
  return 0;
}



void __thiscall GameActionAttack::meth_0x4012c0(GameActionAttack *this,int param_1)

{
  GameEntity::QueueAnimEvent((GameEntity *)this->mbr_0x18,*(int *)(param_1 + 4),0);
  return;
}



void __thiscall GameActionAttack::meth_0x4012e0(GameActionAttack *this)

{
  float fVar1;
  float fVar2;
  dword dVar3;
  critical_section *this_00;
  int iVar4;
  float10 fVar5;
  float local_24;
  dword local_20;
  dword local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_4;
  
  if (this->mbr_0x6c != 0) {
    dVar3 = this->mbr_0x14;
    local_18 = *(float *)(dVar3 + 4);
    local_14 = *(float *)(dVar3 + 8);
    local_10 = *(float *)(dVar3 + 0xc);
    iVar4 = GameActionEquip::meth_0x54be10((GameActionEquip *)this->mbr_0x38);
    if (this->mbr_0x48 == 0) {
      if (iVar4 == 0) {
        return;
      }
      fVar1 = *(float *)(iVar4 + 4);
      fVar2 = *(float *)(iVar4 + 8);
      local_4 = *(float *)(iVar4 + 0xc);
    }
    else {
      local_4 = (float)this->mbr_0x54;
      fVar1 = (float)this->mbr_0x4c;
      fVar2 = (float)this->mbr_0x50;
    }
    this_00 = (critical_section *)this->mbr_0x14;
    fVar1 = fVar1 - local_18;
    local_24 = (float)this_00->mbr_0x1f0;
    local_20 = this_00->mbr_0x1f4;
    local_1c = this_00->mbr_0x1f8;
    fVar1 = fVar1 * (1.0 / SQRT(fVar1 * fVar1 +
                                (fVar2 - local_14) * (fVar2 - local_14) +
                                (local_4 - local_10) * (local_4 - local_10)));
    fVar5 = (float10)FUN_006161d0();
    local_24 = (float)(fVar5 * (float10)57.29578);
    if (fVar1 < 0.0 != NAN(fVar1)) {
      local_24 = -local_24;
    }
    net::critical_section::meth_0x549fe0(this_00,&local_24);
  }
  return;
}



uint __thiscall GameActionAttack::meth_0x401410(GameActionAttack *this)

{
  dword dVar1;
  uint uVar2;
  undefined1 unaff_BL;
  
  uVar2 = this->mbr_0xb8;
  if ((uVar2 != 0) && (dVar1 = this->mbr_0x28, dVar1 != 0)) {
    uVar2 = cls_0x54c140::meth_0x54c140
                      ((cls_0x54c140 *)(*(int *)(*(int *)(dVar1 + 4) + 4) + 4 + dVar1),(char)uVar2,
                       unaff_BL);
    if (uVar2 != 0) {
      return uVar2 & 0xffffff00;
    }
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}



uint __thiscall GameActionAttack::meth_0x401790(GameActionAttack *this)

{
  dword dVar1;
  uint in_EAX;
  
  dVar1 = this->mbr_0x28;
  if (((dVar1 != 0) && (in_EAX = this->mbr_0x34, in_EAX != 0)) &&
     (((*(uint *)(in_EAX + 0x1c) != 0 && (*(uint *)(dVar1 + 0x3ec) < *(uint *)(in_EAX + 0x1c))) ||
      ((in_EAX = *(uint *)(in_EAX + 0x20), in_EAX != 0 && (*(uint *)(dVar1 + 0x3f4) < in_EAX)))))) {
    return CONCAT31((int3)(in_EAX >> 8),1);
  }
  return in_EAX & 0xffffff00;
}



void __thiscall GameActionAttack::meth_0x401890(GameActionAttack *this,char param_1)

{
  int iVar1;
  int *piVar2;
  
  net::critical_section::meth_0x551c80((critical_section *)this->mbr_0x14);
  if (param_1 != '\0') {
    if (DAT_0070bd98 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
    }
    iVar1 = (**(code **)(*piVar2 + 0x14))(1);
    *(undefined *)(iVar1 + 0x20) = 0;
    net::critical_section::meth_0x550720((critical_section *)this->mbr_0x14,iVar1);
  }
  this->mbr_0x58 = 1;
  return;
}



void __thiscall GameActionAttack::meth_0x401a10(GameActionAttack *this,char param_1)

{
  undefined4 uVar1;
  
  uVar1 = meth_0x401410(this);
  if ((char)uVar1 != '\0') {
    meth_0x401890(this,param_1);
    return;
  }
  this->mbr_0x6e = 1;
  return;
}



void __thiscall GameActionAttack::meth_0x402260(GameActionAttack *this,int param_1,int *param_2)

{
  char cVar1;
  cls_0x558740 *this_00;
  char *pcVar2;
  uint unaff_retaddr;
  _String_base local_12c [4];
  void *local_128;
  dword local_118;
  uint local_114;
  char local_110 [256];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062b56b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  this_00 = *(cls_0x558740 **)(*(int *)(DAT_0070bd90 + 0x2c) + 0x8c);
  if (*(char *)&this->mbr_0x73 == '\0') {
    ExceptionList = &local_c;
    GameWeapon::CalculateToHit
              ((GameWeapon *)this->mbr_0x28,*(int *)(param_1 + 0x18),(int *)this->mbr_0x14,param_2,
               *(undefined4 *)(param_1 + 0x14));
  }
  else {
    ExceptionList = &local_c;
    cls_0x409820::meth_0x409e30
              ((cls_0x409820 *)this->mbr_0x1c,*(int *)(param_1 + 0x18),param_2,
               *(int *)(param_1 + 0x14),this->mbr_0x28);
  }
  FUN_0048cd00(0,100);
  if (this_00 != (cls_0x558740 *)0x0) {
    FUN_00616d8c(local_110,(byte *)"Hit/Miss: Chance = %d, Random = %d");
    pcVar2 = local_110;
    local_114 = 0xf;
    local_118 = 0;
    local_128 = (void *)((uint)local_128 & 0xffffff00);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_12c,local_110,(int)pcVar2 - (int)(local_110 + 1));
    local_4 = 0;
    cls_0x558740::meth_0x5583e0(this_00,local_12c,0x80,0x80,(void *)0x80);
    if (0xf < local_114) {
                    /* WARNING: Subroutine does not return */
      _free(local_128);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall GameActionAttack::meth_0x4023c0(GameActionAttack *this)

{
  dword *pdVar1;
  cls_0x558740 *this_00;
  int iVar2;
  dword dVar3;
  char *pcVar4;
  undefined4 uVar5;
  char *pcVar6;
  _String_base *p_Var7;
  uint unaff_retaddr;
  undefined local_248 [28];
  undefined local_22c [540];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062b3f7;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  this_00 = *(cls_0x558740 **)(*(int *)(DAT_0070bd90 + 0x2c) + 0x8c);
  pdVar1 = &this->mbr_0x34;
  ExceptionList = &local_c;
  uVar5 = GameActionEquip::meth_0x40b380
                    ((GameActionEquip *)this->mbr_0x1c,(int *)&this->mbr_0x28,(int *)pdVar1,
                     (char *)&this->mbr_0x73);
  if ((char)uVar5 == '\0') {
    meth_0x401a10(this,'\x01');
    if (this_00 != (cls_0x558740 *)0x0) {
      local_248._24_4_ = 0xf;
      local_248._20_4_ = 0;
      local_248._4_4_ = local_248._4_4_ & 0xffffff00;
      pcVar4 = "GameActionAttack - ResolveWeaponAndAttackMode failed.";
      do {
        pcVar6 = pcVar4;
        pcVar4 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)local_248,"GameActionAttack - ResolveWeaponAndAttackMode failed.",
                 (uint)(pcVar6 + -0x647af0));
      local_4 = 0;
      cls_0x558740::meth_0x5583e0(this_00,(_String_base *)local_248,0x80,0x80,(void *)0x80);
      if (0xf < (uint)local_248._24_4_) {
                    /* WARNING: Subroutine does not return */
        _free((void *)local_248._4_4_);
      }
    }
  }
  else {
    iVar2 = *(int *)(*pdVar1 + 8);
    if ((iVar2 == 0) || (iVar2 == 3)) {
      *(undefined4 *)((int)&this->mbr_0x73 + 1) = *(undefined4 *)(*pdVar1 + 0x2c);
      if (this_00 != (cls_0x558740 *)0x0) {
        FUN_00616d8c(local_22c + 0x1c,(byte *)"Resolved as melee or unarmed with a range of %d");
        p_Var7 = (_String_base *)
                 cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_248,local_22c + 0x1c);
        local_4 = 1;
        cls_0x558740::meth_0x5583e0(this_00,p_Var7,0x80,0x80,(void *)0x80);
        local_4 = 0xffffffff;
        if (0xf < (uint)local_248._24_4_) {
                    /* WARNING: Subroutine does not return */
          _free((void *)local_248._4_4_);
        }
      }
    }
    else {
      if ((iVar2 != 1) && (iVar2 != 2)) {
        meth_0x401a10(this,'\x01');
        if (this_00 != (cls_0x558740 *)0x0) {
          cls_0x4d8d70::meth_0x401d20
                    ((cls_0x4d8d70 *)local_248,
                     "GameActionAttack - Invalid attack type found in the attack mode. Cancelling.")
          ;
          local_4 = 3;
          cls_0x558740::meth_0x5583e0(this_00,(_String_base *)local_248,0x80,0x80,(void *)0x80);
          cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_248);
        }
        goto LAB_00402649;
      }
      this->mbr_0x72 = 1;
      *(undefined4 *)((int)&this->mbr_0x73 + 1) = 0xffffffff;
      if (this_00 != (cls_0x558740 *)0x0) {
        cls_0x4d8d70::meth_0x401d20
                  ((cls_0x4d8d70 *)local_248,
                   "Resolved as ranged so no auto-move will be queued no matter what.");
        local_4 = 2;
        cls_0x558740::meth_0x5583e0(this_00,(_String_base *)local_248,0x80,0x80,(void *)0x80);
        local_4 = 0xffffffff;
        cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_248);
      }
    }
    if (*(char *)(*pdVar1 + 0x41) != '\0') {
      if (this->mbr_0x78 == 9) {
        if (this_00 != (cls_0x558740 *)0x0) {
          cls_0x4d8d70::meth_0x401d20
                    ((cls_0x4d8d70 *)local_22c,
                     "GameActionAttack - Attack mode is called shot, but SetCalledShot has not been called."
                    );
          local_4 = 4;
          cls_0x558740::meth_0x5583e0(this_00,(_String_base *)local_22c,0x80,0x80,(void *)0x80);
          cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_22c);
        }
        goto LAB_00402649;
      }
      this->mbr_0x59 = 1;
    }
    dVar3 = this->mbr_0x28;
    if (dVar3 != 0) {
      this->mbr_0x24 = *(dword *)(*(int *)(*(int *)(dVar3 + 4) + 4) + 0x1e0 + dVar3);
    }
  }
LAB_00402649:
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



uint __thiscall GameActionAttack::PrepareAttack(GameActionAttack *this)

{
  cls_0x558740 *this_00;
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  _String_base local_28 [4];
  void *local_24;
  dword local_14;
  dword local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062b418;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  ExceptionList = &local_c;
  meth_0x4012e0(this);
  uVar2 = meth_0x401790(this);
  if ((char)uVar2 == '\0') {
    ExceptionList = local_c;
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  this_00 = *(cls_0x558740 **)(*(int *)(DAT_0070bd90 + 0x2c) + 0x8c);
  if (this_00 != (cls_0x558740 *)0x0) {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar1 = "GameActionAttack::PrepareAttack() - Insufficient ammo to do this attack.";
    do {
      pcVar3 = pcVar1;
      pcVar1 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_28,
               "GameActionAttack::PrepareAttack() - Insufficient ammo to do this attack.",
               (uint)(pcVar3 + -0x647b28));
    local_4 = 0;
    cls_0x558740::meth_0x5583e0(this_00,local_28,0x80,0x80,(void *)0x80);
    local_4 = 0xffffffff;
    if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
      _free(local_24);
    }
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
  }
  uVar2 = meth_0x401a10(this,'\x01');
  ExceptionList = local_c;
  return uVar2 & 0xffffff00;
}



undefined4 __thiscall GameActionAttack::meth_0x402e00(GameActionAttack *this,void *param_1)

{
  dword *this_00;
  int **ppiVar1;
  dword dVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  GameActionAttack *local_4;
  
  ppiVar1 = (int **)this->mbr_0xb0;
  this_00 = &this->mbr_0xac;
  if (ppiVar1 == (int **)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = *ppiVar1;
  }
  local_4 = this;
  GUI::Interface::meth_0x4b9d60((Interface *)this_00,(int **)&local_4,piVar5,(int *)ppiVar1);
  local_4 = (GameActionAttack *)GameActionEquip::meth_0x54be10((GameActionEquip *)this->mbr_0x38);
  if (*(int *)(*(int *)((int)param_1 + 0x18) + 8) == 3) {
    if (local_4 != (GameActionAttack *)0x0) {
      dVar2 = this->mbr_0xb0;
      iVar3 = FUN_00433760(dVar2,*(undefined4 *)(dVar2 + 4),&local_4);
      uVar4 = cls_0x401b00::meth_0x401dd0((cls_0x401b00 *)this_00,1);
      *(int *)(dVar2 + 4) = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
  }
  else {
    local_4 = (GameActionAttack *)
              GameWeapon::ResolveTargets
                        ((GameWeapon *)this->mbr_0x28,this->mbr_0x14,(cls_0x401b00 *)local_4,
                         this->mbr_0x34,(int)param_1,this->mbr_0x48,&this->mbr_0x4c,
                         (cls_0x401b00 *)this_00);
  }
  return CONCAT31((int3)((uint)local_4 >> 8),1);
}



void __thiscall GameActionAttack::meth_0x403300(GameActionAttack *this)

{
  meth_0x4012e0(this);
  if (*(int *)(this->mbr_0x34 + 8) == 3) {
    FUN_00402d80((int)this);
    return;
  }
  FUN_00402b70((int)this);
  return;
}



void __thiscall GameActionAttack::meth_0x403320(GameActionAttack *this,char *param_1,int *param_2)

{
  int iVar1;
  DynamicObject *this_00;
  char cVar2;
  int iVar3;
  int *piVar4;
  cls_0x559400 *this_01;
  uint uVar5;
  undefined4 *puVar6;
  void *_Memory;
  int *unaff_EDI;
  uint uVar7;
  int iStack_3c;
  cls_0x559400 *pcStack_38;
  GameActionAttack *local_34;
  cls_0x4027e0 cStack_30;
  undefined4 uStack_20;
  int iStack_1c;
  uint uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  piVar4 = param_2;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0062b468;
  local_c = ExceptionList;
  _Memory = (void *)0x0;
  if ((param_2 != (int *)0x0) &&
     (ExceptionList = &local_c, local_34 = this, cVar2 = (**(code **)(*param_2 + 0x50))(),
     cVar2 == '\0')) {
    iStack_1c = piVar4[0x77];
    iStack_3c = 0;
    uStack_20 = *(undefined4 *)&(((Entity *)this->mbr_0x14)->DynamicObject).field_0x1dc;
    uStack_14 = *(undefined4 *)(param_1 + 0x14);
    uStack_18 = (uint)(*param_1 != '\0');
    uStack_10 = 0;
    FUN_0055a220((Entity *)this->mbr_0x14,"OnAttacked",&iStack_3c,5,&uStack_20);
    cVar2 = FUN_0055a220((Entity *)piVar4,"OnAttacked",&iStack_3c,5,&uStack_20);
    if ((cVar2 == '\0') || (iStack_3c != 0)) {
      FUN_005490b0();
    }
    puVar6 = (undefined4 *)0x0;
    cStack_30.mbr_0x4 = 0;
    cStack_30.mbr_0x8 = 0;
    cStack_30.mbr_0xc = 0;
    uStack_4 = 0;
    iVar3 = FUN_00559d90(&pcStack_38,*(int *)(this->mbr_0x14 + 0x1ec),this->mbr_0x14 + 4);
    if ((iVar3 != 0) && (iVar3 = cls_0x559400::meth_0x559400(this_01), iVar3 != 0)) {
      for (uVar7 = 0;
          (iVar1 = *(int *)(iVar3 + 4), piVar4 = param_2, iVar1 != 0 &&
          (uVar7 < (uint)(*(int *)(iVar3 + 8) - iVar1 >> 2))); uVar7 = uVar7 + 1) {
        cls_0x4027e0::meth_0x402eb0(&cStack_30,(undefined4 *)(iVar1 + uVar7 * 4));
        puVar6 = (undefined4 *)cStack_30.mbr_0x8;
        _Memory = (void *)cStack_30.mbr_0x4;
      }
    }
    iVar3 = FUN_00559d90(&pcStack_38,piVar4[0x7b],piVar4 + 1);
    if ((iVar3 != 0) && (iVar3 = cls_0x559400::meth_0x559400(pcStack_38), iVar3 != 0)) {
      uVar7 = 0;
LAB_004034b0:
      do {
        iVar1 = *(int *)(iVar3 + 4);
        if ((iVar1 == 0) || ((uint)(*(int *)(iVar3 + 8) - iVar1 >> 2) <= uVar7)) break;
        param_1 = *(char **)(iVar1 + uVar7 * 4);
        uVar5 = 0;
        while (_Memory != (void *)0x0) {
          if ((uint)((int)puVar6 - (int)_Memory >> 2) <= uVar5) {
            if ((uint)((int)puVar6 - (int)_Memory >> 2) <
                (uint)((int)(cStack_30.mbr_0xc - (int)_Memory) >> 2)) {
              FUN_005457b0(puVar6,1,&param_1);
              puVar6 = puVar6 + 1;
              uVar7 = uVar7 + 1;
              cStack_30.mbr_0x8 = (dword)puVar6;
              goto LAB_004034b0;
            }
            break;
          }
          if (param_1 == *(char **)((int)_Memory + uVar5 * 4)) goto LAB_0040353c;
          uVar5 = uVar5 + 1;
        }
        cls_0x4027e0::meth_0x4027e0(&cStack_30,puVar6,(undefined4 *)0x1,&param_1);
        puVar6 = (undefined4 *)cStack_30.mbr_0x8;
        _Memory = (void *)cStack_30.mbr_0x4;
LAB_0040353c:
        uVar7 = uVar7 + 1;
      } while( true );
    }
    param_1 = (char *)0x0;
    while (_Memory != (void *)0x0) {
      if ((char *)((int)puVar6 - (int)_Memory >> 2) <= param_1) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      this_00 = *(DynamicObject **)((int)_Memory + (int)param_1 * 4);
      if (((this_00 != (DynamicObject *)local_34->mbr_0x14) && (this_00 != (DynamicObject *)param_2)
          ) && (piVar4 = (*this_00->vftptr_0x0[0x14].virt_meth_0x568400_0)(this_00,(byte)unaff_EDI),
               (char)piVar4 == '\0')) {
        unaff_EDI = &iStack_1c;
        cVar2 = FUN_0055a220((Entity *)this_00,"OnAttacked",&pcStack_38,5,unaff_EDI);
        if ((cVar2 != '\0') && (pcStack_38 != (cls_0x559400 *)0x0)) {
          unaff_EDI = (int *)0x4035a0;
          FUN_005490b0();
        }
      }
      param_1 = param_1 + 1;
    }
  }
  ExceptionList = local_c;
  return;
}



void __thiscall GameActionAttack::meth_0x403770(GameActionAttack *this)

{
  code cVar1;
  char cVar2;
  undefined4 uVar3;
  bool bVar4;
  Entity *this_00;
  GameActionEquip *pGVar5;
  GameActionEquip *pGVar6;
  GameActionEquip *extraout_ECX;
  GameActionEquip *extraout_ECX_00;
  int iVar7;
  GameActionEquip *pGVar8;
  GameActionAttack *pGVar9;
  GameActionEquip *pGVar10;
  int iVar11;
  dword dVar12;
  undefined local_11;
  GameActionAttack *local_8;
  char *local_4;
  
  pGVar8 = (GameActionEquip *)(((GameActionEquip *)this->mbr_0xc0)->ActionEquip).Action.vftptr_0x0;
  pGVar9 = this;
  local_8 = this;
  if (pGVar8 != (GameActionEquip *)this->mbr_0xc0) {
    do {
      this_00 = (Entity *)GameActionEquip::meth_0x54be10((GameActionEquip *)this);
      this = (GameActionAttack *)extraout_ECX;
      if (this_00 != (Entity *)0x0) {
        bVar4 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
        if (!bVar4) {
          local_8 = (GameActionAttack *)&Exception__vftable_64787c_0064787c;
          local_4 = "Invalid attempt to retrieve world server instance.";
                    /* WARNING: Subroutine does not return */
          __CxxThrowException_8(&local_8,&DAT_006d8834);
        }
        if ((DAT_0070bd98 == 0) || (iVar11 = DAT_0070bd98, DAT_0070bd98 == -4)) {
          iVar11 = 0;
        }
        pGVar5 = *(GameActionEquip **)&(pGVar8->ActionEquip).field_0x14;
        iVar7 = 0;
        local_11 = 0;
        if (pGVar5 == (GameActionEquip *)0x0) {
          this = (GameActionAttack *)0x0;
        }
        else {
          this = (GameActionAttack *)(pGVar5->ActionEquip).Action.vftptr_0x0;
        }
        for (; (GameActionEquip *)this != pGVar5;
            this = (GameActionAttack *)(((GameActionEquip *)this)->ActionEquip).Action.vftptr_0x0) {
          if (((((GameActionEquip *)this)->ActionEquip).mbr_0x18 != 0) &&
             (iVar7 = iVar7 + 1, 1 < iVar7)) {
            local_11 = 1;
            break;
          }
        }
        if (pGVar5 == (GameActionEquip *)0x0) {
          pGVar10 = (GameActionEquip *)0x0;
        }
        else {
          pGVar10 = (GameActionEquip *)(pGVar5->ActionEquip).Action.vftptr_0x0;
        }
        if (pGVar10 != pGVar5) {
          do {
            GameActionEquip::meth_0x54be10((GameActionEquip *)this);
            pGVar5 = (GameActionEquip *)(**(code **)(*(int *)(iVar11 + 4) + 0x28))(1);
            iVar7 = FUN_006165e0((cls_0x616328 *)pGVar5,0,&Effect::RTTI_Type_Descriptor,
                                 &GameEffectDamage::RTTI_Type_Descriptor,0);
            GameActionEquip::meth_0x55a360(pGVar5,pGVar10->mbr_0x1c);
            if (pGVar10->field_0x19 == '\0') {
              dVar12 = pGVar10->mbr_0x24;
            }
            else {
              dVar12 = pGVar10->mbr_0x1c;
            }
            GameActionEquip::meth_0x55a3e0(pGVar5,1,dVar12);
            GameActionEquip::meth_0x55a3e0(pGVar5,2,pGVar10->mbr_0x20);
            GameActionEquip::meth_0x55a3e0(pGVar5,0,pGVar10->mbr_0x1c);
            GameActionEquip::meth_0x55a3e0(pGVar5,3,0);
            GameActionEquip::meth_0x55a420(pGVar5,1);
            *(undefined4 *)(iVar7 + 0x9c) = *(undefined4 *)&(pGVar10->ActionEquip).field_0x8;
            uVar3 = *(undefined4 *)&(pGVar10->ActionEquip).mbr_0x10;
            *(undefined4 *)(iVar7 + 0xa0) = *(undefined4 *)&(pGVar10->ActionEquip).field_0xc;
            *(undefined4 *)(iVar7 + 0xa4) = uVar3;
            *(undefined4 *)(iVar7 + 0xa8) = *(undefined4 *)&(pGVar10->ActionEquip).field_0x14;
            pGVar6 = *(GameActionEquip **)&(pGVar8->ActionEquip).field_0x14;
            if (pGVar6 != (GameActionEquip *)0x0) {
              pGVar6 = (GameActionEquip *)(pGVar6->ActionEquip).Action.vftptr_0x0;
            }
            if (pGVar10 == pGVar6) {
              *(undefined *)(iVar7 + 0xac) = local_11;
              *(undefined *)(iVar7 + 0xad) = 0;
            }
            else {
              *(undefined *)(iVar7 + 0xad) = 1;
            }
            Entity::meth_0x5506c0(this_00,(int *)pGVar5);
            pGVar10 = (GameActionEquip *)(pGVar10->ActionEquip).Action.vftptr_0x0;
            this = (GameActionAttack *)extraout_ECX_00;
            pGVar9 = local_8;
          } while (pGVar10 != *(GameActionEquip **)&(pGVar8->ActionEquip).field_0x14);
        }
      }
      if (*(char *)((int)&pGVar8->mbr_0x1c + 1) == '\0') {
        this = *(GameActionAttack **)&(pGVar8->ActionEquip).field_0x8;
        if (*(char *)((int)&((GameActionEquip *)this)->mbr_0x1c + 1) == '\0') {
          pGVar5 = (GameActionEquip *)(((GameActionEquip *)this)->ActionEquip).Action.vftptr_0x0;
          cVar1 = *(code *)((int)&pGVar5->mbr_0x1c + 1);
          while (pGVar8 = (GameActionEquip *)this, cVar1 == (code)0x0) {
            pGVar8 = (GameActionEquip *)(pGVar5->ActionEquip).Action.vftptr_0x0;
            this = (GameActionAttack *)pGVar5;
            pGVar5 = pGVar8;
            cVar1 = *(code *)((int)&pGVar8->mbr_0x1c + 1);
          }
        }
        else {
          pGVar5 = *(GameActionEquip **)&(pGVar8->ActionEquip).Action.mbr_0x4;
          cVar2 = *(char *)((int)&pGVar5->mbr_0x1c + 1);
          this = (GameActionAttack *)CONCAT31((int3)((uint)this >> 8),cVar2);
          pGVar10 = pGVar8;
          while ((pGVar8 = pGVar5, cVar2 == '\0' &&
                 (pGVar10 == *(GameActionEquip **)&(pGVar8->ActionEquip).field_0x8))) {
            pGVar5 = *(GameActionEquip **)&(pGVar8->ActionEquip).Action.mbr_0x4;
            cVar2 = *(char *)((int)&pGVar5->mbr_0x1c + 1);
            this = (GameActionAttack *)CONCAT31((int3)((uint)this >> 8),cVar2);
            pGVar10 = pGVar8;
          }
        }
      }
    } while (pGVar8 != (GameActionEquip *)pGVar9->mbr_0xc0);
  }
  cls_0x55dc80::meth_0x4035d0((cls_0x55dc80 *)&pGVar9->mbr_0xbc);
  *(dword *)(pGVar9->mbr_0xc0 + 4) = pGVar9->mbr_0xc0;
  pGVar9->mbr_0xc4 = 0;
  *(dword *)pGVar9->mbr_0xc0 = pGVar9->mbr_0xc0;
  *(dword *)(pGVar9->mbr_0xc0 + 8) = pGVar9->mbr_0xc0;
  return;
}



GameActionAttack * __thiscall GameActionAttack::~GameActionAttack(GameActionAttack *this)

{
  int *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062b4e1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->Action).vftptr_0x0 = (Action__vftable_647888 *)&GameActionAttack__vftable_647bbc_00647bbc;
  local_4 = 2;
  cls_0x55dc80::meth_0x403610
            ((cls_0x55dc80 *)&this->mbr_0xbc,&local_10,*(int ***)(int **)this->mbr_0xc0,
             (int **)this->mbr_0xc0);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0xc0);
}



GameActionAttack * __thiscall GameActionAttack::GameActionAttack(GameActionAttack *this)

{
  dword dVar1;
  undefined local_11;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062b531;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x10 = 1;
  (this->Action).vftptr_0x0 = (Action__vftable_647888 *)&GameActionAttack__vftable_647bbc_00647bbc;
  this->mbr_0x18 = 0;
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
  this->mbr_0x44 = 0;
  this->mbr_0x48 = 0;
  this->mbr_0x4c = 0;
  this->mbr_0x50 = 0;
  this->mbr_0x54 = 0;
  local_4 = 0;
  this->mbr_0x58 = 0;
  this->mbr_0x59 = 0;
  this->mbr_0x5a = 0;
  this->mbr_0x5c = 1;
  this->mbr_0x5d = 0;
  this->mbr_0x5e = 0;
  this->mbr_0x60 = 0;
  this->mbr_0x64 = 0;
  this->mbr_0x65 = 0;
  this->mbr_0x68 = 0;
  this->mbr_0x6d = 1;
  this->mbr_0x6e = 0;
  this->mbr_0x6f = 1;
  this->mbr_0x70 = 0;
  this->mbr_0x71 = 0;
  this->mbr_0x72 = 0;
  *(undefined *)&this->mbr_0x73 = 0;
  *(undefined4 *)((int)&this->mbr_0x73 + 1) = 0;
  this->mbr_0x78 = 9;
  dVar1 = FUN_00401690();
  this->mbr_0x80 = dVar1;
  this->mbr_0x84 = 0;
  this->mbr_0x90 = 0;
  this->mbr_0x94 = 0;
  this->mbr_0x98 = 0;
  this->mbr_0xa0 = 0;
  local_4._0_1_ = 1;
  this->mbr_0xa8 = 0;
  dVar1 = FUN_0056e0b0();
  this->mbr_0xb0 = dVar1;
  this->mbr_0xb4 = 0;
  this->mbr_0xb8 = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined *)&this->mbr_0xbc = local_11;
  dVar1 = FUN_0057c2e0();
  this->mbr_0xc0 = dVar1;
  *(undefined *)(dVar1 + 0x1d) = 1;
  *(dword *)(this->mbr_0xc0 + 4) = this->mbr_0xc0;
  *(dword *)this->mbr_0xc0 = this->mbr_0xc0;
  *(dword *)(this->mbr_0xc0 + 8) = this->mbr_0xc0;
  this->mbr_0xc4 = 0;
  (this->Action).mbr_0x4 = 1;
  this->mbr_0x6c = 1;
  ExceptionList = local_c;
  return this;
}



undefined4 * __thiscall GameActionAttack::virt_meth_0x403f80(GameActionAttack *this,byte param_1)

{
  ~GameActionAttack(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



void __thiscall GameActionAttack::meth_0x403fa0(GameActionAttack *this,int param_1)

{
  byte bVar1;
  GameActionAttack *this_00;
  dword dVar2;
  GameActionAttack *this_01;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062b54b;
  local_c = ExceptionList;
  this_01 = (GameActionAttack *)0x0;
  if (param_1 == 0) {
    dVar2 = 0;
  }
  else {
    dVar2 = *(dword *)(param_1 + 0x1dc);
  }
  if ((this->mbr_0x38 != 0) && (this->mbr_0x38 != dVar2)) {
    ExceptionList = &local_c;
    this->mbr_0x58 = 1;
    this_00 = (GameActionAttack *)operator_new(200);
    local_4 = 0;
    if (this_00 != (GameActionAttack *)0x0) {
      this_01 = GameActionAttack(this_00);
    }
    local_4 = 0xffffffff;
    meth_0x403fa0(this_01,param_1);
    this_01->mbr_0x78 = this->mbr_0x78;
    bVar1 = this->mbr_0x48;
    this_01->mbr_0x48 = bVar1;
    if ((bVar1 != 0) && (&this->mbr_0x4c != (dword *)0x0)) {
      this_01->mbr_0x4c = this->mbr_0x4c;
      this_01->mbr_0x50 = this->mbr_0x50;
      this_01->mbr_0x54 = this->mbr_0x54;
    }
    net::critical_section::meth_0x550720((critical_section *)this->mbr_0x14,(int)this_01);
  }
  this->mbr_0x38 = dVar2;
  ExceptionList = local_c;
  return;
}



void __thiscall GameActionAttack::meth_0x404060(GameActionAttack *this,int param_1,int *param_2)

{
  char cVar1;
  cls_0x558740 *this_00;
  dword dVar2;
  cls_0x402f20 *this_01;
  int iVar3;
  char *pcVar4;
  undefined4 unaff_EDI;
  uint unaff_retaddr;
  int local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined local_13c;
  undefined local_13b;
  byte local_13a;
  undefined4 local_138;
  int *local_134;
  undefined4 local_130;
  _String_base a_Stack_12c [4];
  void *pvStack_128;
  dword dStack_118;
  uint uStack_114;
  char acStack_110 [256];
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  dword dStack_4;
  
  dStack_4 = 0xffffffff;
  puStack_8 = &LAB_0062b56b;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  this_00 = *(cls_0x558740 **)(*(int *)(DAT_0070bd90 + 0x2c) + 0x8c);
  if (*(char *)&this->mbr_0x73 == '\0') {
    ExceptionList = &pvStack_c;
    local_14c = GameWeapon::CalculateDamage
                          ((GameWeapon *)this->mbr_0x28,*(int *)(param_1 + 0x18),this->mbr_0x14,
                           param_2,(uint)this->mbr_0x70,*(int *)(param_1 + 0x14),unaff_EDI);
  }
  else {
    ExceptionList = &pvStack_c;
    local_14c = GameCreature::CalculateUnarmedDamage
                          ((GameCreature *)this->mbr_0x1c,*(int *)(param_1 + 0x18),param_2,
                           (uint)this->mbr_0x70,*(int *)(param_1 + 0x14),this->mbr_0x28);
  }
  iVar3 = *(int *)(param_1 + 0x18);
  local_144 = *(undefined4 *)(iVar3 + 0x14);
  local_148 = *(undefined4 *)(iVar3 + 0x10);
  local_140 = *(undefined4 *)(param_1 + 0x14);
  local_13c = *(int *)(iVar3 + 0xc) == 1;
  local_13a = this->mbr_0x72;
  local_13b = *(undefined *)&this->mbr_0x73;
  local_138 = *(undefined4 *)(*(int *)(*(int *)(this->mbr_0x18 + 4) + 4) + 0x1e0 + this->mbr_0x18);
  local_134 = (int *)param_2[0x77];
  dVar2 = this->mbr_0x28;
  if (dVar2 == 0) {
    local_130 = 0;
  }
  else {
    local_130 = *(undefined4 *)(*(int *)(*(int *)(dVar2 + 4) + 4) + 0x1e0 + dVar2);
  }
  this_01 = (cls_0x402f20 *)cls_0x55dc80::meth_0x403d60((cls_0x55dc80 *)&this->mbr_0xbc,&local_134);
  dVar2 = this_01->mbr_0x4;
  iVar3 = FUN_004b9ad0(dVar2,*(undefined4 *)(dVar2 + 4),&local_14c);
  cls_0x402f20::meth_0x401ef0(this_01,1);
  *(int *)(dVar2 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  FUN_00616d8c(acStack_110,(byte *)"Damage for %d queued.");
  if (this_00 != (cls_0x558740 *)0x0) {
    pcVar4 = acStack_110;
    uStack_114 = 0xf;
    dStack_118 = 0;
    pvStack_128 = (void *)((uint)pvStack_128 & 0xffffff00);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)a_Stack_12c,acStack_110,(int)pcVar4 - (int)(acStack_110 + 1));
    dStack_4 = 0;
    cls_0x558740::meth_0x5583e0(this_00,a_Stack_12c,0x80,0x80,(void *)0x80);
    if (0xf < uStack_114) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_128);
    }
  }
  ExceptionList = pvStack_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



undefined4 * __thiscall GameActionAttack::meth_0x404270(GameActionAttack *this)

{
  byte bVar1;
  GameActionAttack *pGVar2;
  int iVar3;
  GameActionEquip *extraout_ECX;
  GameActionEquip *extraout_ECX_00;
  GameActionEquip *this_00;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062b58b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pGVar2 = (GameActionAttack *)operator_new(200);
  local_4 = 0;
  if (pGVar2 == (GameActionAttack *)0x0) {
    pGVar2 = (GameActionAttack *)0x0;
    this_00 = extraout_ECX;
  }
  else {
    pGVar2 = GameActionAttack(pGVar2);
    this_00 = extraout_ECX_00;
  }
  local_4 = 0xffffffff;
  iVar3 = GameActionEquip::meth_0x54be10(this_00);
  meth_0x403fa0(pGVar2,iVar3);
  pGVar2->mbr_0x5b = this->mbr_0x5b;
  pGVar2->mbr_0x78 = this->mbr_0x78;
  bVar1 = this->mbr_0x48;
  pGVar2->mbr_0x48 = bVar1;
  if ((bVar1 != 0) && (&this->mbr_0x4c != (dword *)0x0)) {
    pGVar2->mbr_0x4c = this->mbr_0x4c;
    pGVar2->mbr_0x50 = this->mbr_0x50;
    pGVar2->mbr_0x54 = this->mbr_0x54;
  }
  ExceptionList = local_c;
  return (undefined4 *)pGVar2;
}



void * __thiscall
GameActionAttack::OnServerUpdate(GameActionAttack *this,undefined *param_1,uint param_2)

{
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
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0062b5f1;
  local_c = ExceptionList;
  this_00 = *(cls_0x558740 **)(*(int *)(DAT_0070bd90 + 0x2c) + 0x8c);
  local_6c = (void *)0x0;
  if (this->mbr_0x6e != 0) {
    ExceptionList = &local_c;
    uVar5 = meth_0x401410(this);
    if ((char)uVar5 == '\0') {
      ExceptionList = local_c;
      return (void *)0x0;
    }
    meth_0x401890(this,'\x01');
    ExceptionList = local_c;
    return (void *)0x0;
  }
  ExceptionList = &local_c;
  dVar6 = FUN_006165e0((cls_0x616328 *)this->mbr_0x14,0,&Entity::RTTI_Type_Descriptor,
                       &GameEntity::RTTI_Type_Descriptor,0);
  this->mbr_0x18 = dVar6;
  if ((dVar6 == 0) ||
     (cVar3 = (**(code **)(*(int *)(*(int *)(*(int *)(dVar6 + 4) + 4) + 4 + dVar6) + 0x50))(),
     cVar3 != '\0')) goto LAB_00404b12;
  dVar6 = FUN_006165e0(*(cls_0x616328 **)
                        (*(int *)(*(int *)(this->mbr_0x18 + 4) + 4) + 0x16c + this->mbr_0x18),0,
                       &Inventory::RTTI_Type_Descriptor,&GameInventory::RTTI_Type_Descriptor,0);
  this->mbr_0x20 = dVar6;
  if (dVar6 == 0) goto LAB_00404b12;
  dVar6 = FUN_006165e0((cls_0x616328 *)this->mbr_0x18,0,&GameEntity::RTTI_Type_Descriptor,
                       &GameCreature::RTTI_Type_Descriptor,0);
  this->mbr_0x1c = dVar6;
  if (dVar6 == 0) goto LAB_00404b12;
  pcVar7 = (cls_0x616328 *)GameActionEquip::meth_0x54be10((GameActionEquip *)this->mbr_0x38);
  this_02 = extraout_ECX;
  if (this->mbr_0x48 == 0) {
    if (pcVar7 == (cls_0x616328 *)0x0) goto LAB_00404b12;
    dVar6 = FUN_006165e0(pcVar7,0,&Entity::RTTI_Type_Descriptor,&GameEntity::RTTI_Type_Descriptor,0)
    ;
    this->mbr_0x3c = dVar6;
    this_02 = extraout_ECX_00;
    if (dVar6 == 0) goto LAB_00404b12;
  }
  if (this->mbr_0x24 != 0) {
    iVar19 = 0;
    pTVar18 = &GameWeapon::RTTI_Type_Descriptor;
    pTVar17 = &Entity::RTTI_Type_Descriptor;
    iVar16 = 0;
    pcVar8 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(this_02);
    dVar6 = FUN_006165e0(pcVar8,iVar16,pTVar17,pTVar18,iVar19);
    this->mbr_0x28 = dVar6;
  }
  if (this->mbr_0x48 == 0) {
    if (pcVar7[0x7b].mbr_0x0 != *(dword *)(this->mbr_0x14 + 0x1ec)) {
      meth_0x401a10(this,'\x01');
      if (this_00 == (cls_0x558740 *)0x0) {
        ExceptionList = local_c;
        return (void *)0x0;
      }
      cls_0x4d8d70::meth_0x401d20
                ((cls_0x4d8d70 *)auStack_44,"Target is not on the same map. Cancelling.");
      uStack_4 = 0;
      goto LAB_0040454b;
    }
    cVar3 = (**(code **)(pcVar7->mbr_0x0 + 0x50))();
    if (cVar3 != '\0') {
      meth_0x401a10(this,'\x01');
      if (this_00 == (cls_0x558740 *)0x0) {
        ExceptionList = local_c;
        return (void *)0x0;
      }
      cls_0x4d8d70::meth_0x401d20
                ((cls_0x4d8d70 *)auStack_44,
                 "GameActionAttack::OnServerUpdate() - Target entity is already dead.");
      uStack_4 = 1;
      goto LAB_0040454b;
    }
  }
  if ((this->mbr_0x5b != 0) && (uVar9 = meth_0x401790(this), (char)uVar9 != '\0')) {
    meth_0x401a10(this,'\x01');
    if (this_00 == (cls_0x558740 *)0x0) {
      ExceptionList = local_c;
      return (void *)0x0;
    }
    cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_44,"Out of ammo for this weapon.");
    uStack_4 = 2;
LAB_0040454b:
    cls_0x558740::meth_0x5583e0(this_00,(_String_base *)auStack_44,0x80,0x80,(void *)0x80);
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_44);
    ExceptionList = local_c;
    return (void *)0x0;
  }
  this->mbr_0x5b = 0;
  if (this->mbr_0x6d != 0) {
    cVar3 = meth_0x4023c0(this);
    if (cVar3 == '\0') goto LAB_00404b12;
    this->mbr_0x6d = 0;
  }
  if (this->mbr_0x48 == 0) {
    iVar16 = 0;
    if (*(char *)(this->mbr_0x34 + 0x6c) != '\0') {
      iVar16 = FUN_006165e0((cls_0x616328 *)this->mbr_0x3c,0,&GameEntity::RTTI_Type_Descriptor,
                            &GameUsableObject::RTTI_Type_Descriptor,0);
    }
    dVar6 = FUN_006165e0((cls_0x616328 *)this->mbr_0x3c,0,&GameEntity::RTTI_Type_Descriptor,
                         &GameCreature::RTTI_Type_Descriptor,0);
    this->mbr_0x40 = dVar6;
    if ((dVar6 == 0) && (iVar16 == 0)) {
LAB_00404b12:
      meth_0x401a10(this,'\x01');
      ExceptionList = local_c;
      return (void *)0x0;
    }
    dVar6 = FUN_006165e0(*(cls_0x616328 **)
                          (*(int *)(*(int *)(this->mbr_0x3c + 4) + 4) + 0x16c + this->mbr_0x3c),0,
                         &Inventory::RTTI_Type_Descriptor,&GameInventory::RTTI_Type_Descriptor,0);
    this->mbr_0x44 = dVar6;
    if ((dVar6 == 0) && (iVar16 == 0)) goto LAB_00404b12;
  }
  piVar2 = (int *)this->mbr_0x14;
  iStack_50 = piVar2[1];
  bVar1 = this->mbr_0x48;
  iStack_4c = piVar2[2];
  dStack_48 = piVar2[3];
  pdVar10 = &this->mbr_0x4c;
  if (bVar1 == 0) {
    pdVar10 = &pcVar7[1].mbr_0x0;
  }
  cStack_5c.mbr_0x0 = *pdVar10;
  cStack_58.mbr_0x0 = pdVar10[1];
  cStack_54.mbr_0x0 = pdVar10[2];
  FUN_00401070(&iStack_50,(float10 *)&cStack_5c,unaff_EDI);
  if (this->mbr_0x6f != 0) {
    iVar16 = *(int *)((int)&this->mbr_0x73 + 1);
    if ((iVar16 < 1) || (extraout_ST0 <= (float10)iVar16)) {
      if (bVar1 == 0) {
        iVar16 = (**(code **)(*piVar2 + 0x90))(pcVar7);
      }
      else {
        iVar16 = (**(code **)(*piVar2 + 0x94))(this->mbr_0x4c,this->mbr_0x50,this->mbr_0x54);
      }
      if (iVar16 != 0) goto LAB_0040477c;
    }
    pGVar11 = (GameActionMoveTo *)operator_new(0x48);
    uStack_4 = 3;
    if (pGVar11 == (GameActionMoveTo *)0x0) {
      pGVar11 = (GameActionMoveTo *)0x0;
    }
    else {
      pGVar11 = GameActionMoveTo::GameActionMoveTo(pGVar11);
    }
    uStack_4 = 0xffffffff;
    if (this->mbr_0x48 == 0) {
      GameActionMoveTo::meth_0x55b350(pGVar11,(int)pcVar7);
    }
    else {
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
    if (this_00 == (cls_0x558740 *)0x0) {
      ExceptionList = local_c;
      return (void *)0x0;
    }
    cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_44,"Moving closer to target.");
    uStack_4 = 4;
    cls_0x558740::meth_0x5583e0(this_00,(_String_base *)auStack_44,0x80,0x80,(void *)0x80);
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_44);
    ExceptionList = local_c;
    return (void *)0x0;
  }
LAB_0040477c:
  if (this->mbr_0x5c != 0) {
    if (this_00 != (cls_0x558740 *)0x0) {
      cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_44,"Preparing attack.");
      uStack_4 = 5;
      cls_0x558740::meth_0x5583e0(this_00,(_String_base *)auStack_44,0x80,0x80,(void *)0x80);
      uStack_4 = 0xffffffff;
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_44);
    }
    this->mbr_0x5c = 0;
    uVar5 = PrepareAttack(this);
    if ((char)uVar5 == '\0') {
      pGVar13 = (GameActionReload *)operator_new(0x3c);
      uStack_4 = 6;
      if (pGVar13 != (GameActionReload *)0x0) {
        pGVar13 = GameActionReload::GameActionReload(pGVar13);
        uStack_4 = 0xffffffff;
        net::critical_section::meth_0x550720((critical_section *)this->mbr_0x14,(int)pGVar13);
        ExceptionList = local_c;
        return (void *)0x0;
      }
      uStack_4 = 0xffffffff;
      net::critical_section::meth_0x550720((critical_section *)this->mbr_0x14,0);
      ExceptionList = local_c;
      return (void *)0x0;
    }
    iVar16 = GameEntity::QueueAnimEvent((GameEntity *)this->mbr_0x18,7,0);
    this->mbr_0x60 = (dword)(param_1 + iVar16);
  }
  if ((((undefined *)this->mbr_0x60 != (undefined *)0x0) && ((undefined *)this->mbr_0x60 <= param_1)
      ) && (*(uint *)(this->mbr_0x34 + 0x44) <= param_2)) {
    this->mbr_0x60 = 0;
    cVar3 = meth_0x403300(this);
    if (cVar3 == '\0') {
      ExceptionList = local_c;
      return (void *)0x0;
    }
    local_6c = *(void **)(this->mbr_0x34 + 0x44);
    this->mbr_0x64 = 1;
  }
  if (this->mbr_0x64 != 0) {
    if (this->mbr_0x84 == 0) {
      handle_fatal_error(
                        "GameActionAttack::OnServerUpdate() - m_subAttackSeries empty after m_bDoSubAttack true."
                        );
      ExceptionList = local_c;
      return this_00;
    }
    this->mbr_0x64 = 0;
    puVar14 = (undefined *)cls_0x401b00::meth_0x4018e0((cls_0x401b00 *)&this->mbr_0x7c);
    cls_0x401240::meth_0x401240((cls_0x401240 *)&this->mbr_0x88,puVar14);
    cls_0x401b00::meth_0x401900((cls_0x401b00 *)&this->mbr_0x7c);
    this->mbr_0xa8 = 1;
    if (this->mbr_0xa4 == 0) {
      this->mbr_0x68 = (dword)param_1;
    }
    else {
      iVar16 = meth_0x4012c0(this,(int)&this->mbr_0x88);
      this->mbr_0x68 = (dword)(param_1 + iVar16);
    }
  }
  meth_0x4012e0(this);
  if ((this->mbr_0xa8 != 0) &&
     ((this->mbr_0x65 != 0 ||
      (((undefined *)this->mbr_0x68 != (undefined *)0x0 && ((undefined *)this->mbr_0x68 <= param_1))
      )))) {
    this->mbr_0xa8 = 0;
    if (this->mbr_0xa5 == 0) {
      this->mbr_0x68 = (dword)param_1;
    }
    pdVar10 = &this->mbr_0x88;
    uVar5 = meth_0x402e00(this,pdVar10);
    if ((char)uVar5 == '\0') {
      ExceptionList = local_c;
      return local_6c;
    }
    if (this->mbr_0xb4 != 0) {
      do {
        ppcVar15 = (cls_0x616328 **)cls_0x401b00::meth_0x4018e0((cls_0x401b00 *)&this->mbr_0xac);
        pcVar8 = *ppcVar15;
        cls_0x401b00::meth_0x401900((cls_0x401b00 *)&this->mbr_0xac);
        uVar4 = meth_0x402260(this,(int)pdVar10,(int *)pcVar8);
        *(undefined *)pdVar10 = uVar4;
        if (this->mbr_0x9c == 9) {
          FUN_00401280((int)pdVar10,pcVar8);
        }
        meth_0x403320(this,(char *)pdVar10,(int *)pcVar8);
        if (*(char *)pdVar10 == '\0') {
          if (this_00 != (cls_0x558740 *)0x0) {
            cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)(auStack_44 + 0x1c),"SubAttack MISSED");
            uStack_4 = 7;
            cls_0x558740::meth_0x5583e0
                      (this_00,(_String_base *)(auStack_44 + 0x1c),0x80,0,(void *)0x0);
            uStack_4 = 0xffffffff;
            cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(auStack_44 + 0x1c));
          }
        }
        else {
          meth_0x404060(this,(int)pdVar10,(int *)pcVar8);
        }
        if (this->mbr_0x5a == 0) {
          uVar9 = *(uint *)(this->mbr_0x34 + 0x1c);
          if (uVar9 != 0) {
            GameWeapon::DeductPrimaryAmmo((GameWeapon *)this->mbr_0x28,uVar9);
          }
          uVar9 = *(uint *)(this->mbr_0x34 + 0x20);
          if (uVar9 != 0) {
            GameWeapon::DeductSecondaryAmmo((GameWeapon *)this->mbr_0x28,uVar9);
          }
          this->mbr_0x5a = 1;
        }
      } while (this->mbr_0xb4 != 0);
    }
    if ((*(int *)(this->mbr_0x34 + 0xc) != 1) || (this->mbr_0x84 == 0)) {
      meth_0x403770(this);
    }
  }
  this_03 = (GameActionAttack *)0x0;
  if ((undefined *)this->mbr_0x68 == (undefined *)0x0) {
    ExceptionList = local_c;
    return local_6c;
  }
  if (param_1 < (undefined *)this->mbr_0x68) {
    ExceptionList = local_c;
    return local_6c;
  }
  this->mbr_0x68 = 0;
  if (this->mbr_0x84 != 0) {
    this->mbr_0x64 = 1;
    ExceptionList = local_c;
    return local_6c;
  }
  if ((this->mbr_0x48 == 0) &&
     (cVar3 = (**(code **)(*(int *)(*(int *)(*(int *)(this->mbr_0x3c + 4) + 4) + 4 + this->mbr_0x3c)
                          + 0x50))(), cVar3 != '\0')) {
    meth_0x401a10(this,'\x01');
    ExceptionList = local_c;
    return local_6c;
  }
  if (this->mbr_0x84 != 0) {
    ExceptionList = local_c;
    return local_6c;
  }
  this->mbr_0x58 = 1;
  if (this->mbr_0x48 == 0) {
    this_01 = (GameActionAttack *)operator_new(200);
    uStack_4 = 8;
    if (this_01 != (GameActionAttack *)0x0) {
      this_03 = GameActionAttack(this_01);
    }
    uStack_4 = 0xffffffff;
    meth_0x403fa0(this_03,(int)pcVar7);
    if (this->mbr_0x59 != 0) {
      this_03->mbr_0x78 = this->mbr_0x78;
    }
    net::critical_section::meth_0x550720((critical_section *)this->mbr_0x14,(int)this_03);
    ExceptionList = local_c;
    return local_6c;
  }
  ExceptionList = local_c;
  return local_6c;
}


#include "../include/GameActionAttack.h"
