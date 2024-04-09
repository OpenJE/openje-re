#include "../include/cls_0x401d60.h"

void __thiscall cls_0x401d60::meth_0x401d60(cls_0x401d60 *this)

{
  if ((void *)this->mbr_0x4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x4);
  }
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  return;
}



int __thiscall cls_0x401d60::meth_0x4341f0(cls_0x401d60 *this)

{
  dword dVar1;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 == 0) {
    return dVar1;
  }
  return (int)(this->mbr_0x8 - dVar1) / 0x28;
}



void __thiscall
cls_0x401d60::meth_0x4a8c40
          (cls_0x401d60 *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *_Memory;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  dword dVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_3c [10];
  undefined *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puVar6 = param_2;
  puVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00631e10;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb8;
  puVar7 = param_3;
  puVar2 = local_3c;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar2 = puVar2 + 1;
  }
  dVar5 = this->mbr_0x4;
  if (dVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (int)(this->mbr_0xc - dVar5) / 0x28;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (dVar5 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(this->mbr_0x8 - dVar5) / 0x28;
    }
    if ((undefined4 *)(0x6666666U - iVar3) < param_2) {
      ExceptionList = &local_10;
      FUN_004a8a10();
      ExceptionList = local_10;
      return;
    }
    if (dVar5 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(this->mbr_0x8 - dVar5) / 0x28;
    }
    if (uVar4 < (uint)(iVar3 + (int)param_2)) {
      if (0x6666666 - (uVar4 >> 1) < uVar4) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar4 + (uVar4 >> 1);
      }
      if (dVar5 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)(this->mbr_0x8 - dVar5) / 0x28;
      }
      ExceptionList = &local_10;
      local_14 = &stack0xffffffb8;
      if (uVar4 < (uint)(iVar3 + (int)param_2)) {
        ExceptionList = &local_10;
        local_14 = &stack0xffffffb8;
        iVar3 = meth_0x4341f0(this);
        uVar4 = iVar3 + (int)puVar6;
      }
      param_3 = (undefined4 *)operator_new(uVar4 * 0x28);
      local_8 = 0;
      param_2 = (undefined4 *)FUN_004a81d0((undefined4 *)this->mbr_0x4,param_1,param_3);
      FUN_004a88d0(param_2,(int)puVar6,local_3c);
      FUN_004a81d0(param_1,(undefined4 *)this->mbr_0x8,param_2 + (int)puVar6 * 10);
      _Memory = (void *)this->mbr_0x4;
      if (_Memory == (void *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)(this->mbr_0x8 - (int)_Memory) / 0x28;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      this->mbr_0xc = (dword)(param_3 + uVar4 * 10);
      this->mbr_0x8 = (dword)(param_3 + ((int)puVar6 + iVar3) * 10);
      this->mbr_0x4 = (dword)param_3;
      ExceptionList = local_10;
      return;
    }
    param_3 = (undefined4 *)this->mbr_0x8;
    if ((undefined4 *)(((int)param_3 - (int)param_1) / 0x28) < param_2) {
      puVar2 = (undefined4 *)((int)(undefined4 *)((int)param_2 * 0x28) + (int)param_1);
      ExceptionList = &local_10;
      param_1 = (undefined4 *)((int)param_2 * 0x28);
      puVar7 = param_3;
      param_3 = (undefined4 *)&stack0xffffffac;
      local_14 = &stack0xffffffb8;
      FUN_004a8990(puVar1,puVar7,puVar2);
      local_8 = 2;
      FUN_004a89e0((undefined4 *)this->mbr_0x8,
                   (int)puVar6 - ((int)(undefined4 *)this->mbr_0x8 - (int)puVar1) / 0x28,local_3c);
      dVar5 = this->mbr_0x8 + (int)param_1;
      this->mbr_0x8 = dVar5;
      puVar6 = (undefined4 *)(dVar5 - (int)param_1);
    }
    else {
      param_1 = param_3 + (int)param_2 * -10;
      ExceptionList = &local_10;
      local_14 = &stack0xffffffb8;
      dVar5 = FUN_004a8990(param_1,param_3,param_3);
      puVar2 = param_3;
      puVar7 = param_1;
      this->mbr_0x8 = dVar5;
      param_2 = (undefined4 *)&stack0xffffffb4;
      param_3 = (undefined4 *)&stack0xffffffb0;
      param_1 = (undefined4 *)&stack0xffffffac;
      FUN_004a8890(&param_1,puVar1,puVar7,puVar2);
      puVar6 = puVar1 + (int)puVar6 * 10;
    }
    param_1 = (undefined4 *)&stack0xffffffac;
    FUN_004a8160(puVar1,puVar6,local_3c);
  }
  ExceptionList = local_10;
  return;
}



void __thiscall
cls_0x401d60::meth_0x4a9070(cls_0x401d60 *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  dword dVar1;
  int iVar2;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 != 0) {
    if ((int)(this->mbr_0x8 - dVar1) / 0x28 != 0) {
      iVar2 = (int)((int)param_2 - dVar1) / 0x28;
      goto LAB_004a90b7;
    }
  }
  iVar2 = 0;
LAB_004a90b7:
  meth_0x4a8c40(this,param_2,(undefined4 *)0x1,param_3);
  *param_1 = this->mbr_0x4 + iVar2 * 0x28;
  return;
}



void __thiscall cls_0x401d60::meth_0x4a9310(cls_0x401d60 *this,undefined4 *param_1)

{
  dword dVar1;
  undefined4 *puVar2;
  
  dVar1 = this->mbr_0x4;
  if ((dVar1 != 0) &&
     ((uint)((int)(this->mbr_0x8 - dVar1) / 0x28) < (uint)((int)(this->mbr_0xc - dVar1) / 0x28))) {
    puVar2 = (undefined4 *)this->mbr_0x8;
    FUN_004a88d0(puVar2,1,param_1);
    this->mbr_0x8 = (dword)(puVar2 + 10);
    return;
  }
  meth_0x4a9070(this,(int *)&param_1,(undefined4 *)this->mbr_0x8,param_1);
  return;
}


