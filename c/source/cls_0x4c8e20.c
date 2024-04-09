#include "../include/cls_0x4c8e20.h"

int __thiscall cls_0x4c8e20::meth_0x4c8e20(cls_0x4c8e20 *this)

{
  dword dVar1;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 == 0) {
    return dVar1;
  }
  return (int)(this->mbr_0x8 - dVar1) / 0x120;
}



void __thiscall
cls_0x4c8e20::meth_0x4d40c0
          (cls_0x4c8e20 *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *_Memory;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  dword dVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_134 [72];
  undefined *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puVar6 = param_2;
  puVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00633410;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffec0;
  puVar7 = param_3;
  puVar2 = local_134;
  for (iVar3 = 0x48; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar2 = puVar2 + 1;
  }
  dVar5 = this->mbr_0x4;
  if (dVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (int)(this->mbr_0xc - dVar5) / 0x120;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (dVar5 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(this->mbr_0x8 - dVar5) / 0x120;
    }
    if ((undefined4 *)(0xe38e38U - iVar3) < param_2) {
      ExceptionList = &local_10;
      FUN_004cf230();
      ExceptionList = local_10;
      return;
    }
    if (dVar5 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(this->mbr_0x8 - dVar5) / 0x120;
    }
    if (uVar4 < (uint)(iVar3 + (int)param_2)) {
      if (0xe38e38 - (uVar4 >> 1) < uVar4) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar4 + (uVar4 >> 1);
      }
      if (dVar5 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)(this->mbr_0x8 - dVar5) / 0x120;
      }
      ExceptionList = &local_10;
      local_14 = &stack0xfffffec0;
      if (uVar4 < (uint)(iVar3 + (int)param_2)) {
        ExceptionList = &local_10;
        local_14 = &stack0xfffffec0;
        iVar3 = meth_0x4c8e20(this);
        uVar4 = iVar3 + (int)puVar6;
      }
      param_3 = (undefined4 *)operator_new(uVar4 * 0x120);
      local_8 = 0;
      param_2 = (undefined4 *)FUN_004ca830((undefined4 *)this->mbr_0x4,param_1,param_3);
      FUN_004caff0(param_2,(int)puVar6,local_134);
      FUN_004ca830(param_1,(undefined4 *)this->mbr_0x8,param_2 + (int)puVar6 * 0x48);
      _Memory = (void *)this->mbr_0x4;
      if (_Memory == (void *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)(this->mbr_0x8 - (int)_Memory) / 0x120;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      this->mbr_0xc = (dword)(param_3 + uVar4 * 0x48);
      this->mbr_0x8 = (dword)(param_3 + ((int)puVar6 + iVar3) * 0x48);
      this->mbr_0x4 = (dword)param_3;
      ExceptionList = local_10;
      return;
    }
    param_3 = (undefined4 *)this->mbr_0x8;
    if ((undefined4 *)(((int)param_3 - (int)param_1) / 0x120) < param_2) {
      puVar2 = (undefined4 *)((int)(undefined4 *)((int)param_2 * 0x120) + (int)param_1);
      ExceptionList = &local_10;
      param_1 = (undefined4 *)((int)param_2 * 0x120);
      puVar7 = param_3;
      param_3 = (undefined4 *)&stack0xfffffeb4;
      local_14 = &stack0xfffffec0;
      FUN_004cc0a0(puVar1,puVar7,puVar2);
      local_8 = 2;
      FUN_004cc4a0((undefined4 *)this->mbr_0x8,
                   (int)puVar6 - ((int)(undefined4 *)this->mbr_0x8 - (int)puVar1) / 0x120,local_134)
      ;
      dVar5 = this->mbr_0x8 + (int)param_1;
      this->mbr_0x8 = dVar5;
      puVar6 = (undefined4 *)(dVar5 - (int)param_1);
    }
    else {
      param_1 = param_3 + (int)param_2 * -0x48;
      ExceptionList = &local_10;
      local_14 = &stack0xfffffec0;
      dVar5 = FUN_004cc0a0(param_1,param_3,param_3);
      puVar2 = param_3;
      puVar7 = param_1;
      this->mbr_0x8 = dVar5;
      param_2 = (undefined4 *)&stack0xfffffebc;
      param_3 = (undefined4 *)&stack0xfffffeb8;
      param_1 = (undefined4 *)&stack0xfffffeb4;
      FUN_004caf10(&param_1,puVar1,puVar7,puVar2);
      puVar6 = puVar1 + (int)puVar6 * 0x48;
    }
    param_1 = (undefined4 *)&stack0xfffffeb4;
    FUN_004ca690(puVar1,puVar6,local_134);
  }
  ExceptionList = local_10;
  return;
}



void __thiscall cls_0x4c8e20::meth_0x4d6fd0(cls_0x4c8e20 *this,uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  dword dVar3;
  uint uVar4;
  int iVar5;
  
  dVar3 = this->mbr_0x4;
  if (dVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (int)(this->mbr_0x8 - dVar3) / 0x120;
  }
  if (uVar4 < param_1) {
    if (dVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(this->mbr_0x8 - dVar3) / 0x120;
    }
    meth_0x4d40c0(this,(undefined4 *)this->mbr_0x8,(undefined4 *)(param_1 - iVar5),
                  (undefined4 *)&stack0x00000008);
    return;
  }
  if (dVar3 != 0) {
    puVar1 = (undefined4 *)this->mbr_0x8;
    if ((param_1 < (uint)((int)((int)puVar1 - dVar3) / 0x120)) &&
       (puVar2 = (undefined4 *)(param_1 * 0x120 + dVar3), puVar2 != puVar1)) {
      dVar3 = FUN_004caed0(puVar1,puVar1,puVar2);
      this->mbr_0x8 = dVar3;
    }
  }
  return;
}


