#include "../include/cls_0x4ae330.h"

void __thiscall
cls_0x4ae330::meth_0x4ae330
          (cls_0x4ae330 *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *_Memory;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  dword dVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_2c [6];
  undefined *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puVar6 = param_2;
  puVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00632010;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  puVar7 = param_3;
  puVar2 = local_2c;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar2 = puVar2 + 1;
  }
  dVar5 = this->mbr_0x4;
  if (dVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (int)(this->mbr_0xc - dVar5) / 0x18;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (dVar5 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(this->mbr_0x8 - dVar5) / 0x18;
    }
    if ((undefined4 *)(0xaaaaaaaU - iVar3) < param_2) {
      ExceptionList = &local_10;
      FUN_004ae2b0();
      ExceptionList = local_10;
      return;
    }
    if (dVar5 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(this->mbr_0x8 - dVar5) / 0x18;
    }
    if (uVar4 < (uint)(iVar3 + (int)param_2)) {
      if (0xaaaaaaa - (uVar4 >> 1) < uVar4) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar4 + (uVar4 >> 1);
      }
      if (dVar5 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)(this->mbr_0x8 - dVar5) / 0x18;
      }
      ExceptionList = &local_10;
      local_14 = &stack0xffffffc8;
      if (uVar4 < (uint)(iVar3 + (int)param_2)) {
        ExceptionList = &local_10;
        local_14 = &stack0xffffffc8;
        iVar3 = meth_0x5038f0(this);
        uVar4 = iVar3 + (int)puVar6;
      }
      param_3 = (undefined4 *)operator_new(uVar4 * 0x18);
      local_8 = 0;
      param_2 = (undefined4 *)FUN_00503f50((undefined4 *)this->mbr_0x4,param_1,param_3);
      FUN_005040e0(param_2,(int)puVar6,local_2c);
      FUN_00503f50(param_1,(undefined4 *)this->mbr_0x8,param_2 + (int)puVar6 * 6);
      _Memory = (void *)this->mbr_0x4;
      if (_Memory == (void *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)(this->mbr_0x8 - (int)_Memory) / 0x18;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      this->mbr_0xc = (dword)(param_3 + uVar4 * 6);
      this->mbr_0x8 = (dword)(param_3 + ((int)puVar6 + iVar3) * 6);
      this->mbr_0x4 = (dword)param_3;
      ExceptionList = local_10;
      return;
    }
    param_3 = (undefined4 *)this->mbr_0x8;
    if ((undefined4 *)(((int)param_3 - (int)param_1) / 0x18) < param_2) {
      puVar2 = (undefined4 *)((int)(undefined4 *)((int)param_2 * 0x18) + (int)param_1);
      ExceptionList = &local_10;
      param_1 = (undefined4 *)((int)param_2 * 0x18);
      puVar7 = param_3;
      param_3 = (undefined4 *)&stack0xffffffbc;
      local_14 = &stack0xffffffc8;
      FUN_004ae220(puVar1,puVar7,puVar2);
      local_8 = 2;
      FUN_004ae250((undefined4 *)this->mbr_0x8,
                   (int)puVar6 - ((int)(undefined4 *)this->mbr_0x8 - (int)puVar1) / 0x18,local_2c);
      dVar5 = this->mbr_0x8 + (int)param_1;
      this->mbr_0x8 = dVar5;
      puVar6 = (undefined4 *)(dVar5 - (int)param_1);
    }
    else {
      param_1 = param_3 + (int)param_2 * -6;
      ExceptionList = &local_10;
      local_14 = &stack0xffffffc8;
      dVar5 = FUN_004ae220(param_1,param_3,param_3);
      puVar2 = param_3;
      puVar7 = param_1;
      this->mbr_0x8 = dVar5;
      param_2 = (undefined4 *)&stack0xffffffc4;
      param_3 = (undefined4 *)&stack0xffffffc0;
      param_1 = (undefined4 *)&stack0xffffffbc;
      FUN_004ae1e0(&param_1,puVar1,puVar7,puVar2);
      puVar6 = puVar1 + (int)puVar6 * 6;
    }
    param_1 = (undefined4 *)&stack0xffffffbc;
    FUN_005040b0(puVar1,puVar6,local_2c);
  }
  ExceptionList = local_10;
  return;
}



void __thiscall
cls_0x4ae330::meth_0x4aec10(cls_0x4ae330 *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  dword dVar1;
  int iVar2;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 != 0) {
    if ((int)(this->mbr_0x8 - dVar1) / 0x18 != 0) {
      iVar2 = (int)((int)param_2 - dVar1) / 0x18;
      goto LAB_004aec57;
    }
  }
  iVar2 = 0;
LAB_004aec57:
  meth_0x4ae330(this,param_2,(undefined4 *)0x1,param_3);
  *param_1 = this->mbr_0x4 + iVar2 * 0x18;
  return;
}



void __thiscall cls_0x4ae330::meth_0x4aecc0(cls_0x4ae330 *this,undefined4 *param_1)

{
  dword dVar1;
  undefined4 *puVar2;
  
  dVar1 = this->mbr_0x4;
  if ((dVar1 != 0) &&
     ((uint)((int)(this->mbr_0x8 - dVar1) / 0x18) < (uint)((int)(this->mbr_0xc - dVar1) / 0x18))) {
    puVar2 = (undefined4 *)this->mbr_0x8;
    FUN_005040e0(puVar2,1,param_1);
    this->mbr_0x8 = (dword)(puVar2 + 6);
    return;
  }
  meth_0x4aec10(this,(int *)&param_1,(undefined4 *)this->mbr_0x8,param_1);
  return;
}



int __thiscall cls_0x4ae330::meth_0x5038f0(cls_0x4ae330 *this)

{
  dword dVar1;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 == 0) {
    return dVar1;
  }
  return (int)(this->mbr_0x8 - dVar1) / 0x18;
}



void __thiscall
cls_0x4ae330::meth_0x504190
          (cls_0x4ae330 *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *_Memory;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  dword dVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_2c [6];
  undefined *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puVar6 = param_2;
  puVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00635520;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  puVar7 = param_3;
  puVar2 = local_2c;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar2 = puVar2 + 1;
  }
  dVar5 = this->mbr_0x4;
  if (dVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (int)(this->mbr_0xc - dVar5) / 0x18;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (dVar5 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(this->mbr_0x8 - dVar5) / 0x18;
    }
    if ((undefined4 *)(0xaaaaaaaU - iVar3) < param_2) {
      ExceptionList = &local_10;
      FUN_00504110();
      ExceptionList = local_10;
      return;
    }
    if (dVar5 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(this->mbr_0x8 - dVar5) / 0x18;
    }
    if (uVar4 < (uint)(iVar3 + (int)param_2)) {
      if (0xaaaaaaa - (uVar4 >> 1) < uVar4) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar4 + (uVar4 >> 1);
      }
      if (dVar5 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)(this->mbr_0x8 - dVar5) / 0x18;
      }
      ExceptionList = &local_10;
      local_14 = &stack0xffffffc8;
      if (uVar4 < (uint)(iVar3 + (int)param_2)) {
        ExceptionList = &local_10;
        local_14 = &stack0xffffffc8;
        iVar3 = meth_0x5038f0(this);
        uVar4 = iVar3 + (int)puVar6;
      }
      param_3 = (undefined4 *)operator_new(uVar4 * 0x18);
      local_8 = 0;
      param_2 = (undefined4 *)FUN_00503f50((undefined4 *)this->mbr_0x4,param_1,param_3);
      FUN_005040e0(param_2,(int)puVar6,local_2c);
      FUN_00503f50(param_1,(undefined4 *)this->mbr_0x8,param_2 + (int)puVar6 * 6);
      _Memory = (void *)this->mbr_0x4;
      if (_Memory == (void *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)(this->mbr_0x8 - (int)_Memory) / 0x18;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      this->mbr_0xc = (dword)(param_3 + uVar4 * 6);
      this->mbr_0x8 = (dword)(param_3 + ((int)puVar6 + iVar3) * 6);
      this->mbr_0x4 = (dword)param_3;
      ExceptionList = local_10;
      return;
    }
    param_3 = (undefined4 *)this->mbr_0x8;
    if ((undefined4 *)(((int)param_3 - (int)param_1) / 0x18) < param_2) {
      puVar2 = (undefined4 *)((int)(undefined4 *)((int)param_2 * 0x18) + (int)param_1);
      ExceptionList = &local_10;
      param_1 = (undefined4 *)((int)param_2 * 0x18);
      puVar7 = param_3;
      param_3 = (undefined4 *)&stack0xffffffbc;
      local_14 = &stack0xffffffc8;
      FUN_004ae220(puVar1,puVar7,puVar2);
      local_8 = 2;
      FUN_004ae250((undefined4 *)this->mbr_0x8,
                   (int)puVar6 - ((int)(undefined4 *)this->mbr_0x8 - (int)puVar1) / 0x18,local_2c);
      dVar5 = this->mbr_0x8 + (int)param_1;
      this->mbr_0x8 = dVar5;
      puVar6 = (undefined4 *)(dVar5 - (int)param_1);
    }
    else {
      param_1 = param_3 + (int)param_2 * -6;
      ExceptionList = &local_10;
      local_14 = &stack0xffffffc8;
      dVar5 = FUN_004ae220(param_1,param_3,param_3);
      puVar2 = param_3;
      puVar7 = param_1;
      this->mbr_0x8 = dVar5;
      param_2 = (undefined4 *)&stack0xffffffc4;
      param_3 = (undefined4 *)&stack0xffffffc0;
      param_1 = (undefined4 *)&stack0xffffffbc;
      FUN_004ae1e0(&param_1,puVar1,puVar7,puVar2);
      puVar6 = puVar1 + (int)puVar6 * 6;
    }
    param_1 = (undefined4 *)&stack0xffffffbc;
    FUN_005040b0(puVar1,puVar6,local_2c);
  }
  ExceptionList = local_10;
  return;
}



void __thiscall
cls_0x4ae330::meth_0x5046a0(cls_0x4ae330 *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  dword dVar1;
  int iVar2;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 != 0) {
    if ((int)(this->mbr_0x8 - dVar1) / 0x18 != 0) {
      iVar2 = (int)((int)param_2 - dVar1) / 0x18;
      goto LAB_005046e7;
    }
  }
  iVar2 = 0;
LAB_005046e7:
  meth_0x504190(this,param_2,(undefined4 *)0x1,param_3);
  *param_1 = this->mbr_0x4 + iVar2 * 0x18;
  return;
}



void __thiscall cls_0x4ae330::meth_0x504710(cls_0x4ae330 *this,undefined4 *param_1)

{
  dword dVar1;
  undefined4 *puVar2;
  
  dVar1 = this->mbr_0x4;
  if ((dVar1 != 0) &&
     ((uint)((int)(this->mbr_0x8 - dVar1) / 0x18) < (uint)((int)(this->mbr_0xc - dVar1) / 0x18))) {
    puVar2 = (undefined4 *)this->mbr_0x8;
    FUN_005040e0(puVar2,1,param_1);
    this->mbr_0x8 = (dword)(puVar2 + 6);
    return;
  }
  meth_0x5046a0(this,(int *)&param_1,(undefined4 *)this->mbr_0x8,param_1);
  return;
}


