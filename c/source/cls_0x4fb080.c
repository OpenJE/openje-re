#include "../include/cls_0x4fb080.h"

int __thiscall cls_0x4fb080::meth_0x4fb080(cls_0x4fb080 *this)

{
  dword dVar1;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 == 0) {
    return dVar1;
  }
  return (int)(this->mbr_0x8 - dVar1) / 0x34;
}



void __thiscall
cls_0x4fb080::meth_0x4fbbc0(cls_0x4fb080 *this,undefined *param_1,undefined *param_2,void *param_3)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *pvVar4;
  int iVar5;
  dword dVar6;
  VFX_Parameter *pVVar7;
  undefined *puVar8;
  uint unaff_retaddr;
  VFX_Parameter local_54;
  undefined *local_20;
  cls_0x4fb080 *local_1c;
  uint local_18;
  undefined *local_14;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00634f38;
  pvStack_10 = ExceptionList;
  local_18 = DAT_007062c0 ^ unaff_retaddr;
  local_14 = &stack0xffffffa0;
  ExceptionList = &pvStack_10;
  local_1c = this;
  VFX_Parameter::VFX_Parameter(&local_54,(int)param_3);
  puVar3 = param_2;
  puVar2 = param_1;
  dVar6 = this->mbr_0x4;
  puVar8 = (undefined *)0x0;
  local_8 = 0;
  if (dVar6 != 0) {
    puVar8 = (undefined *)((int)(this->mbr_0xc - dVar6) / 0x34);
  }
  if (param_2 != (undefined *)0x0) {
    if (dVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(this->mbr_0x8 - dVar6) / 0x34;
    }
    if ((undefined *)(0x4ec4ec4U - iVar5) < param_2) {
      FUN_004fb740();
    }
    else {
      if (dVar6 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(this->mbr_0x8 - dVar6) / 0x34;
      }
      if (puVar8 < param_2 + iVar5) {
        if ((undefined *)(0x4ec4ec4 - ((uint)puVar8 >> 1)) < puVar8) {
          puVar8 = (undefined *)0x0;
        }
        else {
          puVar8 = puVar8 + ((uint)puVar8 >> 1);
        }
        if (dVar6 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(this->mbr_0x8 - dVar6) / 0x34;
        }
        if (puVar8 < param_2 + iVar5) {
          iVar5 = meth_0x4fb080(this);
          puVar8 = puVar3 + iVar5;
        }
        param_2 = (undefined *)operator_new((int)puVar8 * 0x34);
        local_8 = CONCAT31(local_8._1_3_,1);
        param_3 = param_2;
        param_2 = (undefined *)FUN_004fb150(this->mbr_0x4,(int)param_1,(VFX_Parameter *)param_2);
        FUN_004fb240((VFX_Parameter *)param_2,(int)puVar3,(int)&local_54);
        param_2 = param_2 + (int)puVar3 * 0x34;
        FUN_004fb150((int)param_1,this->mbr_0x8,(VFX_Parameter *)param_2);
        puVar1 = (undefined4 *)this->mbr_0x4;
        iVar5 = 0;
        local_8 = 0;
        if (puVar1 != (undefined4 *)0x0) {
          iVar5 = (int)(this->mbr_0x8 - (int)puVar1) / 0x34;
        }
        if (puVar1 != (undefined4 *)0x0) {
          FUN_004fb4b0(puVar1,(undefined4 *)this->mbr_0x8);
                    /* WARNING: Subroutine does not return */
          _free((void *)this->mbr_0x4);
        }
        this->mbr_0xc = (dword)((int)puVar8 * 0x34 + (int)param_3);
        this->mbr_0x8 = (dword)((int)(puVar3 + iVar5) * 0x34 + (int)param_3);
        this->mbr_0x4 = (dword)param_3;
      }
      else {
        param_3 = (void *)this->mbr_0x8;
        if ((undefined *)(((int)param_3 - (int)param_1) / 0x34) < param_2) {
          local_20 = &stack0xffffff94;
          pvVar4 = param_3;
          param_3 = (void *)((int)param_2 * 0x34);
          FUN_004fb450((int)param_1,(int)pvVar4,
                       (VFX_Parameter *)((int)(void *)((int)param_2 * 0x34) + (int)param_1));
          local_8 = CONCAT31(local_8._1_3_,3);
          FUN_004fb480((VFX_Parameter *)this->mbr_0x8,
                       (int)puVar3 - ((int)(VFX_Parameter *)this->mbr_0x8 - (int)puVar2) / 0x34,
                       (int)&local_54);
          dVar6 = this->mbr_0x8 + (int)param_3;
          this->mbr_0x8 = dVar6;
          pVVar7 = (VFX_Parameter *)(dVar6 - (int)param_3);
          local_8 = 0;
        }
        else {
          iVar5 = (int)param_2 * 0x34;
          param_1 = (undefined *)((int)param_3 + (int)param_2 * -0x34);
          dVar6 = FUN_004fb450((int)param_1,(int)param_3,(VFX_Parameter *)param_3);
          puVar8 = param_1;
          this->mbr_0x8 = dVar6;
          param_2 = &stack0xffffff98;
          param_1 = &stack0xffffff94;
          FUN_004fb200((VFX_Parameter **)&param_1,(int)puVar2,(int)puVar8,(VFX_Parameter *)param_3);
          pVVar7 = (VFX_Parameter *)(puVar2 + iVar5);
        }
        param_1 = &stack0xffffff94;
        FUN_004fb0e0((VFX_Parameter *)puVar2,pVVar7,(int)&local_54);
      }
    }
  }
  local_8 = 0xffffffff;
  VFX_Parameter::~VFX_Parameter(&local_54);
  ExceptionList = pvStack_10;
  FUN_00616e15(local_18 ^ unaff_retaddr);
  return;
}



void __thiscall
cls_0x4fb080::meth_0x4fc020(cls_0x4fb080 *this,int *param_1,undefined *param_2,void *param_3)

{
  dword dVar1;
  int iVar2;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 != 0) {
    if ((int)(this->mbr_0x8 - dVar1) / 0x34 != 0) {
      iVar2 = (int)((int)param_2 - dVar1) / 0x34;
      goto LAB_004fc067;
    }
  }
  iVar2 = 0;
LAB_004fc067:
  meth_0x4fbbc0(this,param_2,(undefined *)0x1,param_3);
  *param_1 = iVar2 * 0x34 + this->mbr_0x4;
  return;
}



void __thiscall cls_0x4fb080::meth_0x4fc280(cls_0x4fb080 *this,void *param_1)

{
  dword dVar1;
  VFX_Parameter *pVVar2;
  
  dVar1 = this->mbr_0x4;
  if ((dVar1 != 0) &&
     ((uint)((int)(this->mbr_0x8 - dVar1) / 0x34) < (uint)((int)(this->mbr_0xc - dVar1) / 0x34))) {
    pVVar2 = (VFX_Parameter *)this->mbr_0x8;
    FUN_004fb240(pVVar2,1,(int)param_1);
    this->mbr_0x8 = (dword)(pVVar2 + 1);
    return;
  }
  meth_0x4fc020(this,(int *)&param_1,(undefined *)this->mbr_0x8,param_1);
  return;
}


