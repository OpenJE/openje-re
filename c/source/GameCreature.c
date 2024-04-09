#include "../include/GameCreature.h"

int __thiscall GameCreature::GetTotalSkill(GameCreature *this,int param_1)

{
  int iVar1;
  int extraout_ECX;
  undefined4 extraout_EDX;
  
  iVar1 = cls_0x409820::meth_0x409820((cls_0x409820 *)this,param_1);
  switch(extraout_EDX) {
  case 0:
  case 1:
    return iVar1 + 0x32;
  case 2:
    return *(int *)(extraout_ECX + 0x768) + *(int *)(extraout_ECX + 0x760) * 2 + iVar1;
  case 3:
  case 4:
    return *(int *)(extraout_ECX + 0x76c) * 3 + iVar1;
  case 5:
    return *(int *)(extraout_ECX + 0x770) + *(int *)(extraout_ECX + 0x76c) * 2 + iVar1;
  case 6:
  case 7:
    return *(int *)(extraout_ECX + 0x764) + *(int *)(extraout_ECX + 0x770) * 2 + iVar1;
  case 8:
    return *(int *)(extraout_ECX + 0x768) + *(int *)(extraout_ECX + 0x764) * 2 + iVar1;
  case 9:
    return *(int *)(extraout_ECX + 0x770) * 3 + iVar1;
  case 10:
  case 0xb:
    return *(int *)(extraout_ECX + 0x774) + *(int *)(extraout_ECX + 0x764) * 2 + iVar1;
  case 0xc:
    return *(int *)(extraout_ECX + 0x764) + *(int *)(extraout_ECX + 0x774) * 2 + iVar1;
  default:
    FUN_00497120((byte *)"GameCreature::GetTotalSkill() - UNKNOWN SKILL: %d");
    return iVar1;
  }
}



int __thiscall GameCreature::GetDerivedAttribute(GameCreature *this,int *param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  switch(param_1) {
  case (int *)0x0:
    return *(int *)&this->field_0x774 + 0x14;
  case (int *)0x1:
    return (*(int *)&this->field_0x760 + 1) * 0x19;
  case (int *)0x2:
    return *(int *)&this->field_0x764 << 1;
  case (int *)0x3:
    return *(int *)&this->field_0x778;
  case (int *)0x4:
    return this->mbr_0x7fc;
  case (int *)0x5:
    return *(int *)&this->field_0x768;
  case (int *)0x6:
    return *(int *)&this->field_0x760;
  case (int *)0x7:
    return *(int *)&this->field_0x764 * 3 + 0x28;
  case (int *)0x8:
    return 3;
  case (int *)0x9:
  case (int *)0xa:
  case (int *)0xb:
    return 0;
  case (int *)0xc:
    return *(int *)&this->field_0x770 * 2 + 5;
  case (int *)0xd:
    return *(int *)&this->field_0x760 * 3;
  case (int *)0xe:
    break;
  default:
    FUN_00497120((byte *)"GameCreature::GetDerivedAttribute() - Unknown attribute requested: %d");
    return 0;
  }
  iVar1 = GetDerivedAttribute(this,(int *)0x0);
  if (NAN((double)iVar1 * 0.0001666666666666667) == ((double)iVar1 * 0.0001666666666666667 == 0.0))
  {
    uVar2 = FUN_00616e24();
    return (int)uVar2;
  }
  return 1000;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
GameCreature::CalculateUnarmedDamage
          (GameCreature *this,int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1 == 0) && (param_2 == (int *)0x0)) {
    return 0;
  }
  iVar2 = FUN_006165e0((cls_0x616328 *)param_2,0,&Entity::RTTI_Type_Descriptor,&RTTI_Type_Descriptor
                       ,0);
  iVar3 = FUN_006165e0((cls_0x616328 *)param_2,0,&Entity::RTTI_Type_Descriptor,
                       &GameUsableObject::RTTI_Type_Descriptor,0);
  if ((param_4 != 9) || (iVar3 != 0)) {
    iVar5 = *(int *)(param_1 + 0x3c);
    iVar1 = *(int *)(param_1 + 0x38);
    if (*(int *)(param_1 + 0x10) == 4) {
      iVar4 = GetDerivedAttribute(this,(int *)0x6);
      iVar5 = iVar5 + iVar4;
    }
    iVar5 = FUN_0048cd00(iVar1,iVar5);
    iVar5 = iVar5 + *(int *)(param_1 + 0x24);
    if ((param_5 != 0) &&
       (((*(int *)(param_1 + 0x18) == 1 && (*(int *)(param_5 + 0x3b0) == 9)) ||
        ((*(int *)(param_1 + 0x18) == 3 && (*(int *)(param_5 + 0x3b0) == 10)))))) {
      iVar5 = iVar5 + _DAT_00000024;
    }
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar3 == 0) {
      switch(param_4) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 7:
        iVar2 = *(int *)(iVar2 + 0x7b0 + iVar1 * 4);
        break;
      case 5:
      case 6:
        iVar2 = *(int *)(iVar2 + 0x7c8 + iVar1 * 4);
        break;
      default:
        FUN_00497120((byte *)0x64d598);
        iVar2 = *(int *)(iVar2 + 0x7b0 + iVar1 * 4);
      }
    }
    else {
      iVar2 = *(int *)(iVar3 + 0xa4 + iVar1 * 4);
    }
    iVar3 = FUN_0048cd00(0,iVar2 / 2);
    iVar3 = (iVar5 - iVar2 / 2) - iVar3;
    if (-1 < iVar3) {
      return iVar3;
    }
  }
  return 0;
}



/* WARNING: Type propagation algorithm not settling */

GameCreature * __thiscall GameCreature::GameCreature(GameCreature *this,int param_1)

{
  undefined *this_00;
  char cVar1;
  undefined4 uVar2;
  dword dVar3;
  char *pcVar4;
  dword *pdVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  Gfx_LineSystem *pGVar9;
  Gfx_LineSystem *pGVar10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062ba0d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_1 != 0) {
    ExceptionList = &pvStack_c;
    (this->GameEntity).mbr_0x4 = (dword)&DAT_0064d7cc;
    Entity::Entity((Entity *)&this->field_0x804);
    local_4 = 0;
  }
  GameEntity::GameEntity(&this->GameEntity,0);
  (this->GameEntity).vftptr_0x0 =
       (GameEntity__vftable_666130 *)&GameCreature__vftable_64d7c8_0064d7c8;
  *(undefined ***)((int)&(this->GameEntity).mbr_0x4 + *(int *)((this->GameEntity).mbr_0x4 + 4)) =
       &PTR_virt_meth_0x40d300_0064d6dc;
  iVar6 = *(int *)((this->GameEntity).mbr_0x4 + 4);
  *(int *)((int)&(this->GameEntity).vftptr_0x0 + iVar6) = iVar6 + -0x800;
  local_4 = 1;
  uVar2 = FUN_0056e0b0();
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x1bc = uVar2;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x1c0 = 0;
  local_4._0_1_ = 2;
  uVar2 = FUN_0056e0b0();
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x1c8 = uVar2;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x1cc = 0;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x1ec = 0xf;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x1e8 = 0;
  (this->GameEntity).Entity.DynamicObject.field_0x1d8 = 0;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x20c = 0xf;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x208 = 0;
  (this->GameEntity).Entity.DynamicObject.field_0x1f8 = 0;
  local_4._0_1_ = 5;
  _eh_vector_constructor_iterator_
            (&(this->GameEntity).Entity.DynamicObject.field_0x218,0x1c,0xc,
             ::cls_0x50db20::cls_0x50db20,cls_0x4d8d70::meth_0x4b2dd0);
  this_00 = &(this->GameEntity).Entity.DynamicObject.field_0x368;
  local_4._0_1_ = 6;
  _eh_vector_constructor_iterator_
            (this_00,0x38,0xd,cls_0x40a220::cls_0x40a220,cls_0x4d8d70::meth_0x56ee40);
  local_4._0_1_ = 7;
  this->mbr_0x6f4 = 0;
  dVar3 = FUN_0040a190();
  this->mbr_0x6fc = dVar3;
  this->mbr_0x700 = 0;
  local_4._0_1_ = 8;
  dVar3 = FUN_0040a190();
  this->mbr_0x708 = dVar3;
  this->mbr_0x70c = 0;
  local_4._0_1_ = 9;
  dVar3 = FUN_0056e0b0();
  this->mbr_0x7f4 = dVar3;
  this->mbr_0x7f8 = 0;
  local_4 = CONCAT31(local_4._1_3_,10);
  *(undefined4 *)
   (&(this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.field_0x7c +
   *(int *)((this->GameEntity).mbr_0x4 + 4)) = 1;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x1f0 = 10;
  dVar3 = (this->GameEntity).mbr_0x4;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x210 = 0;
  (this->GameEntity).Entity.DynamicObject.field_0x214 = 0;
  iVar6 = *(int *)(dVar3 + 4);
  if (*(uint *)(&(this->GameEntity).Entity.DynamicObject.field_0x190 + iVar6) < 0x10) {
    pcVar7 = &(this->GameEntity).Entity.DynamicObject.field_0x17c + iVar6;
  }
  else {
    pcVar7 = *(char **)(&(this->GameEntity).Entity.DynamicObject.field_0x17c + iVar6);
  }
  pcVar4 = pcVar7;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)this_00,pcVar7,(int)pcVar4 - (int)(pcVar7 + 1));
  iVar6 = *(int *)((this->GameEntity).mbr_0x4 + 4);
  if (*(uint *)(&(this->GameEntity).Entity.DynamicObject.field_0x1ac + iVar6) < 0x10) {
    pcVar7 = &(this->GameEntity).Entity.DynamicObject.field_0x198 + iVar6;
  }
  else {
    pcVar7 = *(char **)(&(this->GameEntity).Entity.DynamicObject.field_0x198 + iVar6);
  }
  pcVar4 = pcVar7;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&(this->GameEntity).Entity.DynamicObject.field_0x384,pcVar7,
             (int)pcVar4 - (int)(pcVar7 + 1));
  puVar8 = (undefined4 *)&(this->GameEntity).field_0xa0;
  for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  (this->GameEntity).Entity.DynamicObject.mbr_0x18 = 1;
  (this->GameEntity).Entity.DynamicObject.mbr_0x20 = 1;
  pGVar10 = (Gfx_LineSystem *)&(this->GameEntity).Entity.DynamicObject.mbr_0x3c;
  (this->GameEntity).Entity.DynamicObject.mbr_0x1c = 0;
  (this->GameEntity).Entity.DynamicObject.mbr_0x24 = 0;
  (this->GameEntity).Entity.DynamicObject.mbr_0x28 = 0x12;
  (this->GameEntity).Entity.DynamicObject.mbr_0x2c = 0;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.mbr_0x30 = 0;
  (this->GameEntity).Entity.DynamicObject.mbr_0x34 = 0;
  (this->GameEntity).Entity.DynamicObject.mbr_0x38 = 0;
  this->mbr_0x7ec = 0;
  *(undefined4 *)&(this->GameEntity).Entity.DynamicObject.field_0x1d0 = 0;
  pGVar9 = pGVar10;
  for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
    (pGVar9->Gfx_NodeAttribute).vftptr_0x0 = (Gfx_NodeAttribute__vftable_66b488 *)0x0;
    pGVar9 = (Gfx_LineSystem *)&(pGVar9->Gfx_NodeAttribute).field_0x4;
  }
  pdVar5 = &(this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.mbr_0x30;
  for (iVar6 = 0x52; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pdVar5 = 0;
    pdVar5 = pdVar5 + 1;
  }
  pdVar5 = &this->mbr_0x710;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pdVar5 = 0;
    pdVar5 = pdVar5 + 1;
  }
  pdVar5 = &this->mbr_0x748;
  iVar6 = 6;
  do {
    pdVar5[-6] = 0;
    *pdVar5 = 0;
    pdVar5[0x1a] = 0;
    pdVar5[0x20] = 0;
    pdVar5 = pdVar5 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
    (pGVar10->Gfx_NodeAttribute).vftptr_0x0 = (Gfx_NodeAttribute__vftable_66b488 *)0x0;
    pGVar10 = (Gfx_LineSystem *)&(pGVar10->Gfx_NodeAttribute).field_0x4;
  }
  Entity::meth_0x4097a0((Entity *)&this->field_0x804);
  this->mbr_0x6f0 = 0;
  this->mbr_0x6f4 = 0;
  this->mbr_0x7fc = 0;
  ExceptionList = pvStack_c;
  return this;
}



void __thiscall GameCreature::ReadVersion2(GameCreature *this,int param_1)

{
  dword dVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  uint unaff_retaddr;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined uStack_40;
  undefined uStack_3f;
  undefined uStack_3d;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  void *pvStack_2c;
  dword dStack_1c;
  uint uStack_18;
  undefined uStack_14;
  undefined uStack_13;
  undefined uStack_12;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0062bad8;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  uVar3 = ResourceSystem::MemStreamRead(&this->mbr_0x6f0,4,param_1);
  if ((char)uVar3 == '\0') {
    FUN_00497120((byte *)"GameCreature::ReadVersion2 - No Mode counter found");
  }
  else if (this->mbr_0x6f0 == 0) {
    FUN_00497120((byte *)
                 "GameCreature::ReadVersion2() - Making failsafe attack mode for entity: %s\n");
    uStack_18 = 0xf;
    dStack_1c = 0;
    pvStack_2c = (void *)((uint)pvStack_2c & 0xffffff00);
    uStack_12 = 0;
    uStack_58 = 3;
    uStack_54 = 3;
    uStack_78 = 3;
    uStack_3c = 3;
    uStack_4 = 0;
    uStack_38 = 0x61;
    uStack_74 = 0x1b;
    uStack_40 = 1;
    uStack_3f = 0;
    uStack_3d = 0;
    uStack_4c = 0;
    uStack_5c = 0;
    uStack_6c = 0;
    uStack_70 = 4;
    uStack_50 = 0;
    uStack_44 = 2;
    uStack_48 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_68 = 1;
    uStack_34 = 0x378;
    pcVar2 = "";
    do {
      pcVar4 = pcVar2;
      pcVar2 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&stack0xffffffd0,"",(uint)(pcVar4 + -0x64d7d8));
    dVar1 = this->mbr_0x6fc;
    uStack_14 = 1;
    uStack_13 = 0;
    uStack_12 = 0;
    puVar5 = FUN_0040b510(dVar1,*(undefined4 *)(dVar1 + 4),&uStack_78);
    FUN_0040aa40(&this->mbr_0x6f8,1);
    *(undefined4 **)(dVar1 + 4) = puVar5;
    *(undefined4 **)puVar5[1] = puVar5;
    if (0xf < uStack_18) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_2c);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



undefined4 __thiscall GameCreature::ReadData(GameCreature *this,int param_1,uint param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  dword *pdVar5;
  int iVar6;
  int unaff_EDI;
  uint uVar7;
  Chunk CStack_2c;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0062baf8;
  local_c = ExceptionList;
  uVar7 = *(uint *)(param_1 + 0xc);
  ExceptionList = &local_c;
  bVar1 = FUN_0040b6a0(this,param_2);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (((bVar1) && ((uVar7 == 0 || (uVar2 = FUN_00409410(this,param_2), (char)uVar2 != '\0')))) &&
     ((uVar7 < 2 || (uVar2 = ReadVersion2(this,param_2), (char)uVar2 != '\0')))) {
    if (2 < uVar7) {
      uVar2 = FUN_00409700(this,param_2);
      if ((char)uVar2 == '\0') goto LAB_0040e4d8;
      iVar3 = 0;
      pdVar5 = &this->mbr_0x710;
      iVar6 = 8;
      do {
        iVar3 = iVar3 + *pdVar5;
        pdVar5 = pdVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      if (iVar3 != 100) {
        FUN_00497120((byte *)
                     "SANITY ERROR: Entity %d\'s baseUncalledChances don\'t add up to exactly 100\n"
                    );
      }
    }
    if (((uVar7 < 4) || (uVar2 = FUN_0040b9e0(param_2), (char)uVar2 != '\0')) &&
       ((uVar7 < 5 ||
        (uVar2 = ResourceSystem::MemStreamRead
                           (&(this->GameEntity).Entity.DynamicObject.mbr_0x34,4,param_2),
        (char)uVar2 != '\0')))) {
      uVar7 = 0;
      if (this->mbr_0x6f0 != 0) {
        do {
          Common::Chunk::Chunk(&CStack_2c);
          uStack_4 = 0;
          uVar2 = Common::Chunk::Read(&CStack_2c,param_2,unaff_EDI);
          if ((char)uVar2 == '\0') goto LAB_0040e4d8;
          if (CStack_2c.mbr_0x8 != 0x4d415747) {
            uVar2 = FUN_00497120((byte *)
                                 "GameCreature::ReadData() - Unexpected chunk ID. Attack Mode ID \'GWAM\' expected."
                                );
            goto LAB_0040e4d8;
          }
          uVar2 = GameWeapon::ReadAttackModeData((uint)&CStack_2c,param_2);
          if ((char)uVar2 == '\0') goto LAB_0040e4d8;
          Common::Chunk::SkipToEnd(&CStack_2c);
          uVar7 = uVar7 + 1;
          uStack_4 = 0xffffffff;
          CStack_2c.vftptr_0x0 = &Chunk__vftable_64d500_0064d500;
        } while (uVar7 < this->mbr_0x6f0);
      }
      uVar4 = FUN_0040e180((int)this);
      ExceptionList = local_c;
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
  }
LAB_0040e4d8:
  ExceptionList = local_c;
  return uVar2 & 0xffffff00;
}


#include "../include/GameCreature.h"
