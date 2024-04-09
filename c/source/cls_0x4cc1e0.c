#include "../include/cls_0x4cc1e0.h"

int * __thiscall cls_0x4cc1e0::meth_0x496990(cls_0x4cc1e0 *this)

{
  int iVar1;
  ios_base *this_00;
  uint uVar2;
  
  iVar1 = *(int *)(this->mbr_0x0 + 4);
  uVar2 = 0;
  if ((*(byte *)((int)&this[1].mbr_0x0 + iVar1) & 6) == 0) {
    iVar1 = (**(code **)(**(int **)((int)&this[10].mbr_0x0 + iVar1) + 0x2c))();
    if (iVar1 == -1) {
      uVar2 = 4;
    }
  }
  this_00 = (ios_base *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4));
  if (uVar2 != 0) {
    uVar2 = *(uint *)&this_00->field_0x4 | uVar2;
    if (this_00[1].vftptr_0x0 == (ios_base__vftable_669dd8 *)0x0) {
      uVar2 = uVar2 | 4;
    }
    std::ios_base::clear(this_00,uVar2,false);
  }
  return (int *)this;
}



/* WARNING: Removing unreachable block (ram,0x004cc2c1) */

cls_0x4cc1e0 * __thiscall cls_0x4cc1e0::cls_0x4cc1e0(cls_0x4cc1e0 *this,undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  facet *this_00;
  uint uVar3;
  ios_base *this_01;
  undefined4 *puVar4;
  cls_0x4cc1e0 *local_2c;
  char local_28;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  cls_0x4cc1e0 *local_18;
  undefined *local_14;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00633090;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_1c = 0;
  ExceptionList = &pvStack_10;
  local_18 = this;
  FUN_004969f0(&local_2c,(int *)this);
  local_8 = 0;
  if (local_28 != '\0') {
    piVar2 = cls_0x40a220::meth_0x498120
                       ((cls_0x40a220 *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                        (int *)&local_20);
    local_8._0_1_ = 1;
    this_00 = FUN_004cbf60((locale *)piVar2);
    local_8._0_1_ = 0;
    if (local_20 != 0) {
      cls_0x4d8d70::cls_0x4d8d70((cls_0x4d8d70 *)&local_24,0);
      iVar1 = *(int *)(local_20 + 4);
      if ((iVar1 != 0) && (iVar1 != -1)) {
        *(int *)(local_20 + 4) = iVar1 + -1;
      }
      puVar4 = (undefined4 *)(local_20 & (*(int *)(local_20 + 4) != 0) - 1);
      cls_0x4d8d70::meth_0x605760((cls_0x4d8d70 *)&local_24);
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)*puVar4)(1);
      }
    }
    local_24 = CONCAT31(local_24._1_3_,
                        *(undefined *)((int)&this[0xc].mbr_0x0 + *(int *)(this->mbr_0x0 + 4)));
    local_8 = CONCAT31(local_8._1_3_,2);
    (*this_00->vftptr_0x0[7].virt_deldtor_0x4963c0_0)(this_00);
  }
  this_01 = (ios_base *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4));
  local_8 = 0;
  if (local_1c != 0) {
    uVar3 = *(uint *)&this_01->field_0x4 | local_1c;
    if (this_01[1].vftptr_0x0 == (ios_base__vftable_669dd8 *)0x0) {
      uVar3 = uVar3 | 4;
    }
    std::ios_base::clear(this_01,uVar3,false);
  }
  local_8 = 0xffffffff;
  FUN_00496b60(&local_2c);
  ExceptionList = pvStack_10;
  return this;
}



int * __thiscall cls_0x4cc1e0::meth_0x4cc350(cls_0x4cc1e0 *this,byte param_1)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  ios_base *this_00;
  cls_0x4cc1e0 *local_24;
  char local_20;
  cls_0x4cc1e0 *local_1c;
  uint local_18;
  undefined *local_14;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006330a8;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_18 = 0;
  ExceptionList = &pvStack_10;
  local_1c = this;
  FUN_004969f0(&local_24,(int *)this);
  local_8 = 0;
  if (local_20 == '\0') {
    piVar3 = (int *)FUN_004cc41c();
    return piVar3;
  }
  piVar3 = *(int **)((int)&this[10].mbr_0x0 + *(int *)(this->mbr_0x0 + 4));
  uVar4 = *(uint *)piVar3[9];
  local_8 = 1;
  uVar5 = 0;
  if (uVar4 != 0) {
    iVar1 = *(int *)piVar3[0xd];
    uVar5 = local_18;
    if (uVar4 < iVar1 + uVar4) {
      *(int *)piVar3[0xd] = iVar1 + -1;
      pbVar2 = *(byte **)piVar3[9];
      *(byte **)piVar3[9] = pbVar2 + 1;
      *pbVar2 = param_1;
      uVar4 = (uint)param_1;
      goto LAB_004cc3e1;
    }
  }
  uVar4 = (**(code **)(*piVar3 + 4))(param_1);
LAB_004cc3e1:
  if (uVar4 != 0xffffffff) {
    this_00 = (ios_base *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4));
    local_8 = 0;
    if (uVar5 != 0) {
      uVar5 = *(uint *)&this_00->field_0x4 | uVar5;
      if (this_00[1].vftptr_0x0 == (ios_base__vftable_669dd8 *)0x0) {
        uVar5 = uVar5 | 4;
      }
      std::ios_base::clear(this_00,uVar5,false);
    }
    local_8 = 0xffffffff;
    FUN_00496b60(&local_24);
    ExceptionList = pvStack_10;
    return (int *)this;
  }
  piVar3 = (int *)FUN_004cc41c();
  return piVar3;
}


