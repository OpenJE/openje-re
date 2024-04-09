#include "../include/cls_0x431000.h"

void __thiscall
cls_0x431000::meth_0x431000
          (cls_0x431000 *this,undefined4 *param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 != param_3) {
    puVar1 = (undefined *)this->mbr_0x8;
    puVar2 = param_2;
    if (param_3 != puVar1) {
      do {
        *puVar2 = *param_3;
        puVar2 = puVar2 + 1;
        param_3 = param_3 + 1;
      } while (param_3 != puVar1);
    }
    this->mbr_0x8 = (dword)puVar2;
  }
  *param_1 = param_2;
  return;
}



void __thiscall
cls_0x431000::meth_0x432550
          (cls_0x431000 *this,undefined *param_1,undefined *param_2,undefined *param_3)

{
  void *_Memory;
  undefined *puVar1;
  undefined *puVar2;
  dword dVar3;
  int iVar4;
  undefined *puVar5;
  undefined *local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0062d490;
  local_10 = ExceptionList;
  dVar3 = this->mbr_0x4;
  param_3 = (undefined *)CONCAT13(*param_3,param_3._0_3_);
  if (dVar3 == 0) {
    local_18 = (undefined *)0x0;
  }
  else {
    local_18 = (undefined *)(this->mbr_0xc - dVar3);
  }
  if (param_2 != (undefined *)0x0) {
    if (dVar3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = this->mbr_0x8 - dVar3;
    }
    if ((undefined *)(-iVar4 - 1U) < param_2) {
      ExceptionList = &local_10;
      FUN_00431db0();
      ExceptionList = local_10;
      return;
    }
    if (dVar3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = this->mbr_0x8 - dVar3;
    }
    if (local_18 < param_2 + iVar4) {
      if ((undefined *)(-((uint)local_18 >> 1) - 1) < local_18) {
        local_18 = (undefined *)0x0;
      }
      else {
        local_18 = local_18 + ((uint)local_18 >> 1);
      }
      if (dVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = this->mbr_0x8 - dVar3;
      }
      if (local_18 < param_2 + iVar4) {
        if (dVar3 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = this->mbr_0x8 - dVar3;
        }
        local_18 = param_2 + iVar4;
      }
      ExceptionList = &local_10;
      puVar1 = (undefined *)operator_new((uint)local_18);
      local_8 = 0;
      puVar2 = (undefined *)FUN_004308f0((undefined *)this->mbr_0x4,param_1,puVar1);
      FUN_00430950(puVar2,(int)param_2,(undefined *)((int)&param_3 + 3));
      FUN_004308f0(param_1,(undefined *)this->mbr_0x8,puVar2 + (int)param_2);
      _Memory = (void *)this->mbr_0x4;
      if (_Memory == (void *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = this->mbr_0x8 - (int)_Memory;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      this->mbr_0xc = (dword)(puVar1 + (int)local_18);
      this->mbr_0x8 = (dword)(puVar1 + (int)(param_2 + iVar4));
      this->mbr_0x4 = (dword)puVar1;
      ExceptionList = local_10;
      return;
    }
    puVar2 = (undefined *)this->mbr_0x8;
    if (puVar2 + -(int)param_1 < param_2) {
      puVar5 = param_2 + (int)param_1;
      param_1 = &stack0xffffffcc;
      ExceptionList = &local_10;
      FUN_00430be0(puVar1,puVar2,puVar5);
      puVar5 = param_2;
      local_8 = 2;
      FUN_00431040((undefined *)this->mbr_0x8,
                   (int)(param_2 + ((int)puVar1 - (int)(undefined *)this->mbr_0x8)),
                   (undefined *)((int)&param_3 + 3));
      puVar2 = puVar5 + this->mbr_0x8;
      this->mbr_0x8 = (dword)puVar2;
      puVar2 = puVar2 + -(int)puVar5;
    }
    else {
      param_1 = puVar2 + -(int)param_2;
      ExceptionList = &local_10;
      dVar3 = FUN_00430be0(param_1,puVar2,puVar2);
      puVar5 = param_1;
      this->mbr_0x8 = dVar3;
      param_1 = &stack0xffffffcc;
      FUN_00430920(&param_1,(int)puVar1,(int)puVar5,puVar2);
      param_1 = &stack0xffffffd0;
      puVar2 = puVar1 + (int)param_2;
    }
    param_2 = &stack0xffffffcc;
    FUN_004308d0(puVar1,puVar2,(undefined *)((int)&param_3 + 3));
  }
  ExceptionList = local_10;
  return;
}



void __thiscall cls_0x431000::meth_0x432c60(cls_0x431000 *this,uint param_1)

{
  dword dVar1;
  uint uVar2;
  int iVar3;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = this->mbr_0x8 - dVar1;
  }
  if (uVar2 < param_1) {
    if (dVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = this->mbr_0x8 - dVar1;
    }
    meth_0x432550(this,(undefined *)this->mbr_0x8,(undefined *)(param_1 - iVar3),&stack0x00000008);
    return;
  }
  if ((dVar1 != 0) && (param_1 < (int)(undefined *)this->mbr_0x8 - dVar1)) {
    meth_0x431000(this,(undefined4 *)&stack0x00000008,(undefined *)(this->mbr_0x4 + param_1),
                  (undefined *)this->mbr_0x8);
  }
  return;
}



void __thiscall
cls_0x431000::meth_0x4d37e0
          (cls_0x431000 *this,undefined *param_1,undefined *param_2,undefined *param_3)

{
  void *_Memory;
  undefined *puVar1;
  undefined *puVar2;
  dword dVar3;
  int iVar4;
  undefined *puVar5;
  undefined *local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006333d0;
  local_10 = ExceptionList;
  dVar3 = this->mbr_0x4;
  param_3 = (undefined *)CONCAT13(*param_3,param_3._0_3_);
  if (dVar3 == 0) {
    local_18 = (undefined *)0x0;
  }
  else {
    local_18 = (undefined *)(this->mbr_0xc - dVar3);
  }
  if (param_2 != (undefined *)0x0) {
    if (dVar3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = this->mbr_0x8 - dVar3;
    }
    if ((undefined *)(-iVar4 - 1U) < param_2) {
      ExceptionList = &local_10;
      FUN_004cf230();
      ExceptionList = local_10;
      return;
    }
    if (dVar3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = this->mbr_0x8 - dVar3;
    }
    if (local_18 < param_2 + iVar4) {
      if ((undefined *)(-((uint)local_18 >> 1) - 1) < local_18) {
        local_18 = (undefined *)0x0;
      }
      else {
        local_18 = local_18 + ((uint)local_18 >> 1);
      }
      if (dVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = this->mbr_0x8 - dVar3;
      }
      if (local_18 < param_2 + iVar4) {
        if (dVar3 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = this->mbr_0x8 - dVar3;
        }
        local_18 = param_2 + iVar4;
      }
      ExceptionList = &local_10;
      puVar1 = (undefined *)operator_new((uint)local_18);
      local_8 = 0;
      puVar2 = (undefined *)FUN_004308f0((undefined *)this->mbr_0x4,param_1,puVar1);
      FUN_00430950(puVar2,(int)param_2,(undefined *)((int)&param_3 + 3));
      FUN_004308f0(param_1,(undefined *)this->mbr_0x8,puVar2 + (int)param_2);
      _Memory = (void *)this->mbr_0x4;
      if (_Memory == (void *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = this->mbr_0x8 - (int)_Memory;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      this->mbr_0xc = (dword)(puVar1 + (int)local_18);
      this->mbr_0x8 = (dword)(puVar1 + (int)(param_2 + iVar4));
      this->mbr_0x4 = (dword)puVar1;
      ExceptionList = local_10;
      return;
    }
    puVar2 = (undefined *)this->mbr_0x8;
    if (puVar2 + -(int)param_1 < param_2) {
      puVar5 = param_2 + (int)param_1;
      param_1 = &stack0xffffffcc;
      ExceptionList = &local_10;
      FUN_00430be0(puVar1,puVar2,puVar5);
      puVar5 = param_2;
      local_8 = 2;
      FUN_00431040((undefined *)this->mbr_0x8,
                   (int)(param_2 + ((int)puVar1 - (int)(undefined *)this->mbr_0x8)),
                   (undefined *)((int)&param_3 + 3));
      puVar2 = puVar5 + this->mbr_0x8;
      this->mbr_0x8 = (dword)puVar2;
      puVar2 = puVar2 + -(int)puVar5;
    }
    else {
      param_1 = puVar2 + -(int)param_2;
      ExceptionList = &local_10;
      dVar3 = FUN_00430be0(param_1,puVar2,puVar2);
      puVar5 = param_1;
      this->mbr_0x8 = dVar3;
      param_1 = &stack0xffffffcc;
      FUN_00430920(&param_1,(int)puVar1,(int)puVar5,puVar2);
      param_1 = &stack0xffffffd0;
      puVar2 = puVar1 + (int)param_2;
    }
    param_2 = &stack0xffffffcc;
    FUN_004308d0(puVar1,puVar2,(undefined *)((int)&param_3 + 3));
  }
  ExceptionList = local_10;
  return;
}



void __thiscall cls_0x431000::meth_0x4d6e20(cls_0x431000 *this,uint param_1)

{
  dword dVar1;
  uint uVar2;
  int iVar3;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = this->mbr_0x8 - dVar1;
  }
  if (uVar2 < param_1) {
    if (dVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = this->mbr_0x8 - dVar1;
    }
    meth_0x4d37e0(this,(undefined *)this->mbr_0x8,(undefined *)(param_1 - iVar3),&stack0x00000008);
    return;
  }
  if ((dVar1 != 0) && (param_1 < (int)(undefined *)this->mbr_0x8 - dVar1)) {
    meth_0x431000(this,(undefined4 *)&stack0x00000008,(undefined *)(this->mbr_0x4 + param_1),
                  (undefined *)this->mbr_0x8);
  }
  return;
}


