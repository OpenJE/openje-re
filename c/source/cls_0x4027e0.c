#include "../include/cls_0x4027e0.h"

void __thiscall
cls_0x4027e0::meth_0x4027e0
          (cls_0x4027e0 *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *_Memory;
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  dword dVar6;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puVar3 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0062b430;
  local_10 = ExceptionList;
  param_3 = (undefined4 *)*param_3;
  dVar6 = this->mbr_0x4;
  if (dVar6 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)(this->mbr_0xc - dVar6) >> 2;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (dVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
    }
    if ((undefined4 *)(0x3fffffffU - iVar5) < param_2) {
      ExceptionList = &local_10;
      FUN_00401fa0();
      ExceptionList = local_10;
      return;
    }
    if (dVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
    }
    if (uVar2 < (uint)(iVar5 + (int)param_2)) {
      if (0x3fffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (dVar6 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
      }
      if (uVar2 < (uint)(iVar5 + (int)param_2)) {
        if (dVar6 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
        }
        uVar2 = iVar5 + (int)param_2;
      }
      ExceptionList = &local_10;
      puVar3 = (undefined4 *)operator_new(uVar2 * 4);
      local_8 = 0;
      puVar4 = (undefined4 *)FUN_005456a0((undefined4 *)this->mbr_0x4,param_1,puVar3);
      FUN_005457b0(puVar4,(int)param_2,&param_3);
      FUN_005456a0(param_1,(undefined4 *)this->mbr_0x8,puVar4 + (int)param_2);
      _Memory = (void *)this->mbr_0x4;
      if (_Memory == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(this->mbr_0x8 - (int)_Memory) >> 2;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      this->mbr_0xc = (dword)(puVar3 + uVar2);
      this->mbr_0x8 = (dword)(puVar3 + (int)param_2 + iVar5);
      this->mbr_0x4 = (dword)puVar3;
      ExceptionList = local_10;
      return;
    }
    puVar4 = (undefined4 *)this->mbr_0x8;
    if ((undefined4 *)((int)puVar4 - (int)param_1 >> 2) < param_2) {
      iVar5 = (int)param_2 * 4;
      ExceptionList = &local_10;
      FUN_00413a60(param_1,puVar4,param_1 + (int)param_2);
      local_8 = 2;
      FUN_00431070((undefined4 *)this->mbr_0x8,
                   (int)param_2 - ((int)(undefined4 *)this->mbr_0x8 - (int)param_1 >> 2),&param_3);
      dVar6 = this->mbr_0x8 + iVar5;
      this->mbr_0x8 = dVar6;
      puVar3 = (undefined4 *)(dVar6 + (int)puVar3 * -4);
    }
    else {
      param_2 = puVar4 + -(int)param_2;
      ExceptionList = &local_10;
      dVar6 = FUN_00413a60(param_2,puVar4,puVar4);
      puVar1 = param_2;
      this->mbr_0x8 = dVar6;
      param_2 = (undefined4 *)&stack0xffffffcc;
      FUN_00545780(&param_2,(int)param_1,(int)puVar1,puVar4);
      puVar3 = param_1 + (int)puVar3;
    }
    param_2 = (undefined4 *)&stack0xffffffcc;
    FUN_004016b0(param_1,puVar3,&param_3);
  }
  ExceptionList = local_10;
  return;
}



void __thiscall cls_0x4027e0::meth_0x402eb0(cls_0x4027e0 *this,undefined4 *param_1)

{
  dword dVar1;
  undefined4 *puVar2;
  
  dVar1 = this->mbr_0x4;
  if ((dVar1 != 0) &&
     ((uint)((int)(this->mbr_0x8 - dVar1) >> 2) < (uint)((int)(this->mbr_0xc - dVar1) >> 2))) {
    puVar2 = (undefined4 *)this->mbr_0x8;
    FUN_005457b0(puVar2,1,param_1);
    this->mbr_0x8 = (dword)(puVar2 + 1);
    return;
  }
  meth_0x4027e0(this,(undefined4 *)this->mbr_0x8,(undefined4 *)0x1,param_1);
  return;
}


