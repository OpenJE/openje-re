#include "../include/cls_0x4c8df0.h"

int __thiscall cls_0x4c8df0::meth_0x4c8df0(cls_0x4c8df0 *this)

{
  dword dVar1;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 == 0) {
    return dVar1;
  }
  return (int)(this->mbr_0x8 - dVar1) / 0x90;
}



void __thiscall
cls_0x4c8df0::meth_0x4d3a70
          (cls_0x4c8df0 *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *_Memory;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  dword dVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_a4 [36];
  undefined *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puVar6 = param_2;
  puVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006333e0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff50;
  puVar7 = param_3;
  puVar2 = local_a4;
  for (iVar3 = 0x24; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar2 = puVar2 + 1;
  }
  dVar5 = this->mbr_0x4;
  if (dVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (int)(this->mbr_0xc - dVar5) / 0x90;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (dVar5 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(this->mbr_0x8 - dVar5) / 0x90;
    }
    if ((undefined4 *)(0x1c71c71U - iVar3) < param_2) {
      ExceptionList = &local_10;
      FUN_004cf230();
      ExceptionList = local_10;
      return;
    }
    if (dVar5 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(this->mbr_0x8 - dVar5) / 0x90;
    }
    if (uVar4 < (uint)(iVar3 + (int)param_2)) {
      if (0x1c71c71 - (uVar4 >> 1) < uVar4) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar4 + (uVar4 >> 1);
      }
      if (dVar5 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)(this->mbr_0x8 - dVar5) / 0x90;
      }
      ExceptionList = &local_10;
      local_14 = &stack0xffffff50;
      if (uVar4 < (uint)(iVar3 + (int)param_2)) {
        ExceptionList = &local_10;
        local_14 = &stack0xffffff50;
        iVar3 = meth_0x4c8df0(this);
        uVar4 = iVar3 + (int)puVar6;
      }
      param_3 = (undefined4 *)operator_new(uVar4 * 0x90);
      local_8 = 0;
      param_2 = (undefined4 *)FUN_004ca7f0((undefined4 *)this->mbr_0x4,param_1,param_3);
      FUN_004cafc0(param_2,(int)puVar6,local_a4);
      FUN_004ca7f0(param_1,(undefined4 *)this->mbr_0x8,param_2 + (int)puVar6 * 0x24);
      _Memory = (void *)this->mbr_0x4;
      if (_Memory == (void *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)(this->mbr_0x8 - (int)_Memory) / 0x90;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      this->mbr_0xc = (dword)(param_3 + uVar4 * 0x24);
      this->mbr_0x8 = (dword)(param_3 + ((int)puVar6 + iVar3) * 0x24);
      this->mbr_0x4 = (dword)param_3;
      ExceptionList = local_10;
      return;
    }
    param_3 = (undefined4 *)this->mbr_0x8;
    if ((undefined4 *)(((int)param_3 - (int)param_1) / 0x90) < param_2) {
      puVar2 = (undefined4 *)((int)(undefined4 *)((int)param_2 * 0x90) + (int)param_1);
      ExceptionList = &local_10;
      param_1 = (undefined4 *)((int)param_2 * 0x90);
      puVar7 = param_3;
      param_3 = (undefined4 *)&stack0xffffff44;
      local_14 = &stack0xffffff50;
      FUN_004cc070(puVar1,puVar7,puVar2);
      local_8 = 2;
      FUN_004cc470((undefined4 *)this->mbr_0x8,
                   (int)puVar6 - ((int)(undefined4 *)this->mbr_0x8 - (int)puVar1) / 0x90,local_a4);
      dVar5 = this->mbr_0x8 + (int)param_1;
      this->mbr_0x8 = dVar5;
      puVar6 = (undefined4 *)(dVar5 - (int)param_1);
    }
    else {
      param_1 = param_3 + (int)param_2 * -0x24;
      ExceptionList = &local_10;
      local_14 = &stack0xffffff50;
      dVar5 = FUN_004cc070(param_1,param_3,param_3);
      puVar2 = param_3;
      puVar7 = param_1;
      this->mbr_0x8 = dVar5;
      param_2 = (undefined4 *)&stack0xffffff4c;
      param_3 = (undefined4 *)&stack0xffffff48;
      param_1 = (undefined4 *)&stack0xffffff44;
      FUN_004cae90(&param_1,puVar1,puVar7,puVar2);
      puVar6 = puVar1 + (int)puVar6 * 0x24;
    }
    param_1 = (undefined4 *)&stack0xffffff44;
    FUN_004ca660(puVar1,puVar6,local_a4);
  }
  ExceptionList = local_10;
  return;
}



void __thiscall cls_0x4c8df0::meth_0x4d6e90(cls_0x4c8df0 *this,uint param_1)

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
    uVar4 = (int)(this->mbr_0x8 - dVar3) / 0x90;
  }
  if (uVar4 < param_1) {
    if (dVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(this->mbr_0x8 - dVar3) / 0x90;
    }
    meth_0x4d3a70(this,(undefined4 *)this->mbr_0x8,(undefined4 *)(param_1 - iVar5),
                  (undefined4 *)&stack0x00000008);
    return;
  }
  if (dVar3 != 0) {
    puVar1 = (undefined4 *)this->mbr_0x8;
    if ((param_1 < (uint)((int)((int)puVar1 - dVar3) / 0x90)) &&
       (puVar2 = (undefined4 *)(param_1 * 0x90 + dVar3), puVar2 != puVar1)) {
      dVar3 = FUN_004cae50(puVar1,puVar1,puVar2);
      this->mbr_0x8 = dVar3;
    }
  }
  return;
}



void __thiscall
cls_0x4c8df0::meth_0x4d6f50(cls_0x4c8df0 *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  dword dVar1;
  int iVar2;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 != 0) {
    if ((int)(this->mbr_0x8 - dVar1) / 0x90 != 0) {
      iVar2 = (int)((int)param_2 - dVar1) / 0x90;
      goto LAB_004d6f97;
    }
  }
  iVar2 = 0;
LAB_004d6f97:
  meth_0x4d3a70(this,param_2,(undefined4 *)0x1,param_3);
  *param_1 = iVar2 * 0x90 + this->mbr_0x4;
  return;
}



void __thiscall cls_0x4c8df0::meth_0x4d7d60(cls_0x4c8df0 *this,undefined4 *param_1)

{
  dword dVar1;
  undefined4 *puVar2;
  
  dVar1 = this->mbr_0x4;
  if ((dVar1 != 0) &&
     ((uint)((int)(this->mbr_0x8 - dVar1) / 0x90) < (uint)((int)(this->mbr_0xc - dVar1) / 0x90))) {
    puVar2 = (undefined4 *)this->mbr_0x8;
    FUN_004cafc0(puVar2,1,param_1);
    this->mbr_0x8 = (dword)(puVar2 + 0x24);
    return;
  }
  meth_0x4d6f50(this,(int *)&param_1,(undefined4 *)this->mbr_0x8,param_1);
  return;
}


