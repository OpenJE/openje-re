#include "../include/cls_0x4fc0e0.h"

int __thiscall cls_0x4fc0e0::meth_0x4fb0b0(cls_0x4fc0e0 *this)

{
  dword dVar1;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 == 0) {
    return dVar1;
  }
  return (int)(this->mbr_0x8 - dVar1) / 0x114;
}



void __thiscall cls_0x4fc0e0::meth_0x4fb560(cls_0x4fc0e0 *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)this->mbr_0x4;
  if (puVar2 == (undefined4 *)0x0) {
    this->mbr_0x4 = 0;
    this->mbr_0x8 = 0;
    this->mbr_0xc = 0;
    return;
  }
  puVar1 = (undefined4 *)this->mbr_0x8;
  for (; puVar2 != puVar1; puVar2 = puVar2 + 0x45) {
    (**(code **)*puVar2)(0);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



undefined4 __thiscall cls_0x4fc0e0::meth_0x4fbb60(cls_0x4fc0e0 *this,uint param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0xed7303 < param_1) {
    uVar1 = FUN_004fb740();
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  pvVar2 = operator_new(param_1 * 0x114);
  this->mbr_0xc = (dword)(param_1 * 0x114 + (int)pvVar2);
  this->mbr_0x4 = (dword)pvVar2;
  this->mbr_0x8 = (dword)pvVar2;
  return CONCAT31((int3)((uint)pvVar2 >> 8),1);
}



cls_0x4fc0e0 * __thiscall cls_0x4fc0e0::cls_0x4fc0e0(cls_0x4fc0e0 *this,int param_1)

{
  uint uVar1;
  cls_0x4fb7c0 *pcVar2;
  int iVar3;
  VFX_ParameterInfo *pVVar4;
  uint uVar5;
  
  if (this == (cls_0x4fc0e0 *)param_1) {
    return this;
  }
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x114;
    if (uVar1 != 0) {
      pcVar2 = (cls_0x4fb7c0 *)this->mbr_0x4;
      if (pcVar2 == (cls_0x4fb7c0 *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (int)(this->mbr_0x8 - (int)pcVar2) / 0x114;
      }
      if (uVar1 <= uVar5) {
        pcVar2 = FUN_004fb940(*(int *)(param_1 + 4),*(int *)(param_1 + 8),pcVar2);
        FUN_004fb4e0((undefined4 *)pcVar2,(undefined4 *)this->mbr_0x8);
        if (*(int *)(param_1 + 4) == 0) {
          this->mbr_0x8 = this->mbr_0x4;
          return this;
        }
        this->mbr_0x8 =
             ((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x114) * 0x114 + this->mbr_0x4;
        return this;
      }
      if (pcVar2 == (cls_0x4fb7c0 *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (int)(this->mbr_0xc - (int)pcVar2) / 0x114;
      }
      if (uVar1 <= uVar5) {
        iVar3 = meth_0x4fb0b0(this);
        iVar3 = iVar3 * 0x114 + *(int *)(param_1 + 4);
        FUN_004fb940(*(int *)(param_1 + 4),iVar3,pcVar2);
        pVVar4 = FUN_004fb8a0(iVar3,*(int *)(param_1 + 8),(VFX_ParameterInfo *)this->mbr_0x8);
        this->mbr_0x8 = (dword)pVVar4;
        return this;
      }
      FUN_004fb4e0((undefined4 *)pcVar2,(undefined4 *)this->mbr_0x8);
                    /* WARNING: Subroutine does not return */
      _free((void *)this->mbr_0x4);
    }
  }
  meth_0x4fb560(this);
  return this;
}



void __thiscall
cls_0x4fc0e0::meth_0x4fc340(cls_0x4fc0e0 *this,undefined *param_1,undefined *param_2,void *param_3)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *pvVar4;
  int iVar5;
  dword dVar6;
  cls_0x4fb7c0 *pcVar7;
  undefined *puVar8;
  uint unaff_retaddr;
  VFX_ParameterInfo local_134;
  undefined *local_20;
  cls_0x4fc0e0 *local_1c;
  uint local_18;
  undefined *local_14;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00634f7b;
  pvStack_10 = ExceptionList;
  local_18 = DAT_007062c0 ^ unaff_retaddr;
  local_14 = &stack0xfffffec0;
  ExceptionList = &pvStack_10;
  local_1c = this;
  VFX_ParameterInfo::VFX_ParameterInfo(&local_134,(int)param_3);
  puVar3 = param_2;
  puVar2 = param_1;
  dVar6 = this->mbr_0x4;
  puVar8 = (undefined *)0x0;
  local_8 = 0;
  if (dVar6 != 0) {
    puVar8 = (undefined *)((int)(this->mbr_0xc - dVar6) / 0x114);
  }
  if (param_2 != (undefined *)0x0) {
    if (dVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(this->mbr_0x8 - dVar6) / 0x114;
    }
    if ((undefined *)(0xed7303U - iVar5) < param_2) {
      FUN_004fb740();
    }
    else {
      if (dVar6 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(this->mbr_0x8 - dVar6) / 0x114;
      }
      if (puVar8 < param_2 + iVar5) {
        if ((undefined *)(0xed7303 - ((uint)puVar8 >> 1)) < puVar8) {
          puVar8 = (undefined *)0x0;
        }
        else {
          puVar8 = puVar8 + ((uint)puVar8 >> 1);
        }
        if (dVar6 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(this->mbr_0x8 - dVar6) / 0x114;
        }
        if (puVar8 < param_2 + iVar5) {
          iVar5 = meth_0x4fb0b0(this);
          puVar8 = puVar3 + iVar5;
        }
        param_2 = (undefined *)operator_new((int)puVar8 * 0x114);
        local_8 = CONCAT31(local_8._1_3_,1);
        param_3 = param_2;
        param_2 = (undefined *)FUN_004fb8a0(this->mbr_0x4,(int)param_1,(VFX_ParameterInfo *)param_2)
        ;
        FUN_004fbf80((VFX_ParameterInfo *)param_2,(int)puVar3,(int)&local_134);
        param_2 = param_2 + (int)puVar3 * 0x114;
        FUN_004fb8a0((int)param_1,this->mbr_0x8,(VFX_ParameterInfo *)param_2);
        puVar1 = (undefined4 *)this->mbr_0x4;
        iVar5 = 0;
        local_8 = 0;
        if (puVar1 != (undefined4 *)0x0) {
          iVar5 = (int)(this->mbr_0x8 - (int)puVar1) / 0x114;
        }
        if (puVar1 != (undefined4 *)0x0) {
          FUN_004fb4e0(puVar1,(undefined4 *)this->mbr_0x8);
                    /* WARNING: Subroutine does not return */
          _free((void *)this->mbr_0x4);
        }
        this->mbr_0xc = (dword)((int)puVar8 * 0x114 + (int)param_3);
        this->mbr_0x8 = (dword)((int)(puVar3 + iVar5) * 0x114 + (int)param_3);
        this->mbr_0x4 = (dword)param_3;
      }
      else {
        param_3 = (void *)this->mbr_0x8;
        if ((undefined *)(((int)param_3 - (int)param_1) / 0x114) < param_2) {
          local_20 = &stack0xfffffeb4;
          pvVar4 = param_3;
          param_3 = (void *)((int)param_2 * 0x114);
          FUN_004fc090((int)param_1,(int)pvVar4,
                       (VFX_ParameterInfo *)((int)(void *)((int)param_2 * 0x114) + (int)param_1));
          local_8 = CONCAT31(local_8._1_3_,3);
          FUN_004fc310((VFX_ParameterInfo *)this->mbr_0x8,
                       (int)puVar3 - ((int)(VFX_ParameterInfo *)this->mbr_0x8 - (int)puVar2) / 0x114
                       ,(int)&local_134);
          dVar6 = this->mbr_0x8 + (int)param_3;
          this->mbr_0x8 = dVar6;
          pcVar7 = (cls_0x4fb7c0 *)(dVar6 - (int)param_3);
          local_8 = 0;
        }
        else {
          iVar5 = (int)param_2 * 0x114;
          param_1 = (undefined *)((int)param_3 + (int)param_2 * -0x114);
          dVar6 = FUN_004fc090((int)param_1,(int)param_3,(VFX_ParameterInfo *)param_3);
          puVar8 = param_1;
          this->mbr_0x8 = dVar6;
          param_2 = &stack0xfffffeb8;
          param_1 = &stack0xfffffeb4;
          FUN_004fbf40((cls_0x4fb7c0 **)&param_1,(int)puVar2,(int)puVar8,(cls_0x4fb7c0 *)param_3);
          pcVar7 = (cls_0x4fb7c0 *)(puVar2 + iVar5);
        }
        param_1 = &stack0xfffffeb4;
        FUN_004fbf10((cls_0x4fb7c0 *)puVar2,pcVar7,(int)&local_134);
      }
    }
  }
  local_8 = 0xffffffff;
  VFX_ParameterInfo::~VFX_ParameterInfo(&local_134);
  ExceptionList = pvStack_10;
  FUN_00616e15(local_18 ^ unaff_retaddr);
  return;
}



cls_0x4fc0e0 * __thiscall cls_0x4fc0e0::cls_0x4fc0e0(cls_0x4fc0e0 *this,int param_1)

{
  undefined4 uVar1;
  VFX_ParameterInfo *pVVar2;
  uint uVar3;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00634f90;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x114;
  }
  ExceptionList = &local_10;
  uVar1 = meth_0x4fbb60(this,uVar3);
  if ((char)uVar1 != '\0') {
    local_8 = 0;
    pVVar2 = FUN_004fb8a0(*(int *)(param_1 + 4),*(int *)(param_1 + 8),
                          (VFX_ParameterInfo *)this->mbr_0x4);
    this->mbr_0x8 = (dword)pVVar2;
  }
  ExceptionList = local_10;
  return this;
}



void __thiscall
cls_0x4fc0e0::meth_0x4fcac0(cls_0x4fc0e0 *this,int *param_1,undefined *param_2,void *param_3)

{
  dword dVar1;
  int iVar2;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 != 0) {
    if ((int)(this->mbr_0x8 - dVar1) / 0x114 != 0) {
      iVar2 = (int)((int)param_2 - dVar1) / 0x114;
      goto LAB_004fcb07;
    }
  }
  iVar2 = 0;
LAB_004fcb07:
  meth_0x4fc340(this,param_2,(undefined *)0x1,param_3);
  *param_1 = iVar2 * 0x114 + this->mbr_0x4;
  return;
}



void __thiscall cls_0x4fc0e0::meth_0x4fcba0(cls_0x4fc0e0 *this,void *param_1)

{
  dword dVar1;
  VFX_ParameterInfo *pVVar2;
  
  dVar1 = this->mbr_0x4;
  if ((dVar1 != 0) &&
     ((uint)((int)(this->mbr_0x8 - dVar1) / 0x114) < (uint)((int)(this->mbr_0xc - dVar1) / 0x114)))
  {
    pVVar2 = (VFX_ParameterInfo *)this->mbr_0x8;
    FUN_004fbf80(pVVar2,1,(int)param_1);
    this->mbr_0x8 = (dword)((int)&pVVar2[1].VFX_Parameter.vftptr_0x0 + 3);
    return;
  }
  meth_0x4fcac0(this,(int *)&param_1,(undefined *)this->mbr_0x8,param_1);
  return;
}


