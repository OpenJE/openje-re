#include "../include/cls_0x4e0ea0.h"

int __thiscall cls_0x4e0ea0::meth_0x4e0ea0(cls_0x4e0ea0 *this)

{
  dword dVar1;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 == 0) {
    return dVar1;
  }
  return (int)(this->mbr_0x8 - dVar1) / 100;
}



void __thiscall
cls_0x4e0ea0::meth_0x5262c0
          (cls_0x4e0ea0 *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  dword dVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint unaff_retaddr;
  Gfx_ModelBone local_84;
  undefined *local_20;
  cls_0x4e0ea0 *local_1c;
  uint local_18;
  undefined *local_14;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00636758;
  pvStack_10 = ExceptionList;
  local_18 = DAT_007062c0 ^ unaff_retaddr;
  local_14 = &stack0xffffff70;
  ExceptionList = &pvStack_10;
  local_1c = this;
  Gfx_ModelBone::Gfx_ModelBone(&local_84,param_3);
  puVar5 = param_2;
  puVar1 = param_1;
  dVar4 = this->mbr_0x4;
  uVar6 = 0;
  local_8 = 0;
  if (dVar4 != 0) {
    uVar6 = (int)(this->mbr_0xc - dVar4) / 100;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (dVar4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(this->mbr_0x8 - dVar4) / 100;
    }
    if ((undefined4 *)(0x28f5c28U - iVar3) < param_2) {
      FUN_00524930();
    }
    else {
      if (dVar4 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)(this->mbr_0x8 - dVar4) / 100;
      }
      if (uVar6 < (uint)(iVar3 + (int)param_2)) {
        if (0x28f5c28 - (uVar6 >> 1) < uVar6) {
          uVar6 = 0;
        }
        else {
          uVar6 = uVar6 + (uVar6 >> 1);
        }
        if (dVar4 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (int)(this->mbr_0x8 - dVar4) / 100;
        }
        if (uVar6 < (uint)(iVar3 + (int)param_2)) {
          iVar3 = meth_0x4e0ea0(this);
          uVar6 = iVar3 + (int)puVar5;
        }
        param_2 = (undefined4 *)operator_new(uVar6 * 100);
        local_8 = CONCAT31(local_8._1_3_,1);
        param_3 = param_2;
        param_2 = (undefined4 *)
                  FUN_00524a10((undefined4 *)this->mbr_0x4,param_1,(Gfx_ModelBone *)param_2);
        FUN_005261d0((Gfx_ModelBone *)param_2,(int)puVar5,(undefined4 *)&local_84);
        param_2 = param_2 + (int)puVar5 * 0x19;
        FUN_00524a10(param_1,(undefined4 *)this->mbr_0x8,(Gfx_ModelBone *)param_2);
        puVar1 = (undefined4 *)this->mbr_0x4;
        iVar3 = 0;
        local_8 = 0;
        if (puVar1 != (undefined4 *)0x0) {
          iVar3 = (int)(this->mbr_0x8 - (int)puVar1) / 100;
        }
        if (puVar1 != (undefined4 *)0x0) {
          FUN_005245c0(puVar1,(undefined4 *)this->mbr_0x8);
                    /* WARNING: Subroutine does not return */
          _free((void *)this->mbr_0x4);
        }
        this->mbr_0xc = (dword)(param_3 + uVar6 * 0x19);
        this->mbr_0x8 = (dword)(param_3 + ((int)puVar5 + iVar3) * 0x19);
        this->mbr_0x4 = (dword)param_3;
      }
      else {
        param_3 = (undefined4 *)this->mbr_0x8;
        if ((undefined4 *)(((int)param_3 - (int)param_1) / 100) < param_2) {
          local_20 = &stack0xffffff64;
          puVar2 = param_3;
          param_3 = (undefined4 *)((int)param_2 * 100);
          FUN_00526260(param_1,puVar2,
                       (Gfx_ModelBone *)((int)(undefined4 *)((int)param_2 * 100) + (int)param_1));
          local_8 = CONCAT31(local_8._1_3_,3);
          FUN_00526290((Gfx_ModelBone *)this->mbr_0x8,
                       (int)puVar5 - ((int)(Gfx_ModelBone *)this->mbr_0x8 - (int)puVar1) / 100,
                       (undefined4 *)&local_84);
          dVar4 = this->mbr_0x8 + (int)param_3;
          this->mbr_0x8 = dVar4;
          puVar5 = (undefined4 *)(dVar4 - (int)param_3);
          local_8 = 0;
        }
        else {
          param_1 = param_3 + (int)param_2 * -0x19;
          dVar4 = FUN_00526260(param_1,param_3,(Gfx_ModelBone *)param_3);
          puVar2 = param_1;
          this->mbr_0x8 = dVar4;
          param_2 = (undefined4 *)&stack0xffffff68;
          param_1 = (undefined4 *)&stack0xffffff64;
          FUN_00526190((int *)&param_1,(int)puVar1,(int)puVar2,(int)param_3);
          puVar5 = puVar1 + (int)puVar5 * 0x19;
        }
        param_1 = (undefined4 *)&stack0xffffff64;
        FUN_00526140(puVar1,puVar5,(undefined4 *)&local_84);
      }
    }
  }
  local_84.Gfx_BaseObject.vftptr_0x0 =
       (Gfx_BaseObject__vftable_651b28 *)&Gfx_ModelBone__vftable_677ea0_00677ea0;
  if (0xf < local_84.mbr_0x5c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_84.mbr_0x48);
  }
  ExceptionList = pvStack_10;
  FUN_00616e15(local_18 ^ unaff_retaddr);
  return;
}



void __thiscall
cls_0x4e0ea0::meth_0x5266e0(cls_0x4e0ea0 *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  dword dVar1;
  int iVar2;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 != 0) {
    if ((int)(this->mbr_0x8 - dVar1) / 100 != 0) {
      iVar2 = (int)((int)param_2 - dVar1) / 100;
      goto LAB_00526727;
    }
  }
  iVar2 = 0;
LAB_00526727:
  meth_0x5262c0(this,param_2,(undefined4 *)0x1,param_3);
  *param_1 = iVar2 * 100 + this->mbr_0x4;
  return;
}



void __thiscall cls_0x4e0ea0::meth_0x526750(cls_0x4e0ea0 *this,undefined4 *param_1)

{
  dword dVar1;
  Gfx_ModelBone *pGVar2;
  
  dVar1 = this->mbr_0x4;
  if ((dVar1 != 0) &&
     ((uint)((int)(this->mbr_0x8 - dVar1) / 100) < (uint)((int)(this->mbr_0xc - dVar1) / 100))) {
    pGVar2 = (Gfx_ModelBone *)this->mbr_0x8;
    FUN_005261d0(pGVar2,1,param_1);
    this->mbr_0x8 = (dword)(pGVar2 + 1);
    return;
  }
  meth_0x5266e0(this,(int *)&param_1,(undefined4 *)this->mbr_0x8,param_1);
  return;
}


