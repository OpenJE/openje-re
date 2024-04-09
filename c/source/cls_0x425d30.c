#include "../include/cls_0x425d30.h"

void __thiscall
cls_0x425d30::meth_0x425d30
          (cls_0x425d30 *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 != param_3) {
    puVar1 = (undefined4 *)this->mbr_0x8;
    puVar2 = param_2;
    if (param_3 != puVar1) {
      do {
        *puVar2 = *param_3;
        puVar2[1] = param_3[1];
        param_3 = param_3 + 2;
        puVar2 = puVar2 + 2;
      } while (param_3 != puVar1);
    }
    this->mbr_0x8 = (dword)puVar2;
  }
  *param_1 = param_2;
  return;
}



void __thiscall
cls_0x425d30::meth_0x4292e0
          (cls_0x425d30 *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *_Memory;
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  dword dVar5;
  int iVar6;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puVar3 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0062cce0;
  local_10 = ExceptionList;
  local_1c = param_3[1];
  local_20 = *param_3;
  dVar5 = this->mbr_0x4;
  local_14 = &stack0xffffffd4;
  if (dVar5 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)(this->mbr_0xc - dVar5) >> 3;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (dVar5 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)(this->mbr_0x8 - dVar5) >> 3;
    }
    if ((undefined4 *)(0x1fffffffU - iVar6) < param_2) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffffd4;
      FUN_00426340();
      ExceptionList = local_10;
      return;
    }
    if (dVar5 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)(this->mbr_0x8 - dVar5) >> 3;
    }
    if (uVar2 < (uint)(iVar6 + (int)param_2)) {
      if (0x1fffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (dVar5 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = (int)(this->mbr_0x8 - dVar5) >> 3;
      }
      if (uVar2 < (uint)(iVar6 + (int)param_2)) {
        if (dVar5 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = (int)(this->mbr_0x8 - dVar5) >> 3;
        }
        uVar2 = iVar6 + (int)param_2;
      }
      param_3 = (undefined4 *)(uVar2 << 3);
      ExceptionList = &local_10;
      local_14 = &stack0xffffffd4;
      puVar3 = (undefined4 *)operator_new((uint)param_3);
      local_8 = 0;
      local_18 = puVar3;
      puVar4 = (undefined4 *)FUN_00425170((undefined4 *)this->mbr_0x4,param_1,puVar3);
      FUN_004251d0(puVar4,(int)param_2,&local_20);
      FUN_00425170(param_1,(undefined4 *)this->mbr_0x8,puVar4 + (int)param_2 * 2);
      _Memory = (void *)this->mbr_0x4;
      if (_Memory == (void *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = (int)(this->mbr_0x8 - (int)_Memory) >> 3;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      this->mbr_0xc = (int)param_3 + (int)puVar3;
      this->mbr_0x8 = (dword)(puVar3 + ((int)param_2 + iVar6) * 2);
      this->mbr_0x4 = (dword)puVar3;
      ExceptionList = local_10;
      return;
    }
    puVar4 = (undefined4 *)this->mbr_0x8;
    if ((undefined4 *)((int)puVar4 - (int)param_1 >> 3) < param_2) {
      iVar6 = (int)param_2 * 8;
      param_3 = (undefined4 *)&stack0xffffffc8;
      ExceptionList = &local_10;
      local_14 = &stack0xffffffd4;
      FUN_00425910(param_1,puVar4,param_1 + (int)param_2 * 2);
      local_8 = 2;
      FUN_00425ca0((undefined4 *)this->mbr_0x8,
                   (int)param_2 - ((int)(undefined4 *)this->mbr_0x8 - (int)param_1 >> 3),&local_20);
      dVar5 = this->mbr_0x8 + iVar6;
      this->mbr_0x8 = dVar5;
      puVar3 = (undefined4 *)(dVar5 + (int)puVar3 * -8);
    }
    else {
      param_2 = puVar4 + (int)param_2 * -2;
      ExceptionList = &local_10;
      dVar5 = FUN_00425910(param_2,puVar4,puVar4);
      puVar1 = param_2;
      this->mbr_0x8 = dVar5;
      param_3 = (undefined4 *)&stack0xffffffcc;
      param_2 = (undefined4 *)&stack0xffffffc8;
      FUN_004251a0(&param_2,(int)param_1,(int)puVar1,puVar4);
      puVar3 = param_1 + (int)puVar3 * 2;
    }
    param_2 = (undefined4 *)&stack0xffffffc8;
    FUN_00425140(param_1,puVar3,&local_20);
  }
  ExceptionList = local_10;
  return;
}



void __thiscall cls_0x425d30::meth_0x429bc0(cls_0x425d30 *this,uint param_1)

{
  dword dVar1;
  uint uVar2;
  int iVar3;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)(this->mbr_0x8 - dVar1) >> 3;
  }
  if (uVar2 < param_1) {
    if (dVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(this->mbr_0x8 - dVar1) >> 3;
    }
    meth_0x4292e0(this,(undefined4 *)this->mbr_0x8,(undefined4 *)(param_1 - iVar3),
                  (undefined4 *)&stack0x00000008);
    return;
  }
  if ((dVar1 != 0) && (param_1 < (uint)((int)((int)(undefined4 *)this->mbr_0x8 - dVar1) >> 3))) {
    meth_0x425d30(this,&param_1,(undefined4 *)(this->mbr_0x4 + param_1 * 8),
                  (undefined4 *)this->mbr_0x8);
  }
  return;
}


