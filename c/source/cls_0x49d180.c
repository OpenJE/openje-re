#include "../include/cls_0x49d180.h"

int __thiscall cls_0x49d180::meth_0x49d180(cls_0x49d180 *this)

{
  dword dVar1;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 == 0) {
    return dVar1;
  }
  return (int)(this->mbr_0x8 - dVar1) / 0x38;
}



undefined4 __thiscall cls_0x49d180::meth_0x50ebd0(cls_0x49d180 *this,uint param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0x4924924 < param_1) {
    uVar1 = FUN_0050eb50();
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  pvVar2 = operator_new(param_1 * 0x38);
  this->mbr_0xc = (dword)(param_1 * 0x38 + (int)pvVar2);
  this->mbr_0x4 = (dword)pvVar2;
  this->mbr_0x8 = (dword)pvVar2;
  return CONCAT31((int3)((uint)pvVar2 >> 8),1);
}



void __thiscall
cls_0x49d180::meth_0x50ec30
          (cls_0x49d180 *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  dword dVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 local_4c [14];
  undefined *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puVar5 = param_2;
  puVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00635b30;
  local_10 = ExceptionList;
  dVar4 = this->mbr_0x4;
  local_14 = &stack0xffffffa8;
  puVar6 = param_3;
  puVar2 = local_4c;
  for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar2 = puVar2 + 1;
  }
  if (dVar4 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (int)(this->mbr_0xc - dVar4) / 0x38;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (this->mbr_0x4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(this->mbr_0x8 - this->mbr_0x4) / 0x38;
    }
    if ((undefined4 *)(0x4924924U - iVar3) < param_2) {
      ExceptionList = &local_10;
      FUN_0050eb50();
      ExceptionList = local_10;
      return;
    }
    if (this->mbr_0x4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(this->mbr_0x8 - this->mbr_0x4) / 0x38;
    }
    if (uVar7 < (uint)(iVar3 + (int)param_2)) {
      if (0x4924924 - (uVar7 >> 1) < uVar7) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 + (uVar7 >> 1);
      }
      if (this->mbr_0x4 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)(this->mbr_0x8 - this->mbr_0x4) / 0x38;
      }
      ExceptionList = &local_10;
      if (uVar7 < (uint)(iVar3 + (int)param_2)) {
        ExceptionList = &local_10;
        iVar3 = meth_0x49d180(this);
        uVar7 = iVar3 + (int)puVar5;
      }
      param_3 = (undefined4 *)operator_new(uVar7 * 0x38);
      local_8 = 0;
      param_2 = (undefined4 *)FUN_0050e890((undefined4 *)this->mbr_0x4,param_1,param_3);
      FUN_0050e9f0(param_2,(int)puVar5,local_4c);
      FUN_0050e890(param_1,(undefined4 *)this->mbr_0x8,param_2 + (int)puVar5 * 0xe);
      if (this->mbr_0x4 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)(this->mbr_0x8 - this->mbr_0x4) / 0x38;
      }
      if ((void *)this->mbr_0x4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free((void *)this->mbr_0x4);
      }
      this->mbr_0xc = (dword)(param_3 + uVar7 * 0xe);
      this->mbr_0x8 = (dword)(param_3 + ((int)puVar5 + iVar3) * 0xe);
      this->mbr_0x4 = (dword)param_3;
      ExceptionList = local_10;
      return;
    }
    param_3 = (undefined4 *)this->mbr_0x8;
    if ((undefined4 *)(((int)param_3 - (int)param_1) / 0x38) < param_2) {
      puVar2 = (undefined4 *)((int)(undefined4 *)((int)param_2 * 0x38) + (int)param_1);
      ExceptionList = &local_10;
      param_1 = (undefined4 *)((int)param_2 * 0x38);
      puVar6 = param_3;
      param_3 = (undefined4 *)&stack0xffffff9c;
      FUN_0050ea70(puVar1,puVar6,puVar2);
      local_8 = 2;
      FUN_0050eaa0((undefined4 *)this->mbr_0x8,
                   (int)puVar5 - (int)(this->mbr_0x8 - (int)puVar1) / 0x38,local_4c);
      dVar4 = this->mbr_0x8 + (int)param_1;
      this->mbr_0x8 = dVar4;
      puVar5 = (undefined4 *)(dVar4 - (int)param_1);
    }
    else {
      param_1 = param_3 + (int)param_2 * -0xe;
      ExceptionList = &local_10;
      dVar4 = FUN_0050ea70(param_1,param_3,param_3);
      puVar2 = param_3;
      puVar6 = param_1;
      this->mbr_0x8 = dVar4;
      param_2 = (undefined4 *)&stack0xffffffa4;
      param_3 = (undefined4 *)&stack0xffffffa0;
      param_1 = (undefined4 *)&stack0xffffff9c;
      FUN_0050e9b0(&param_1,puVar1,puVar6,puVar2);
      puVar5 = puVar1 + (int)puVar5 * 0xe;
    }
    param_1 = (undefined4 *)&stack0xffffff9c;
    FUN_0050e820(puVar1,puVar5,local_4c);
  }
  ExceptionList = local_10;
  return;
}



int __thiscall cls_0x49d180::meth_0x50f560(cls_0x49d180 *this,int param_1)

{
  undefined4 *_Memory;
  uint uVar1;
  int iVar2;
  dword dVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if (this == (cls_0x49d180 *)param_1) {
    return (int)this;
  }
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = ((int)*(undefined4 **)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x38;
    if (uVar1 != 0) {
      _Memory = (undefined4 *)this->mbr_0x4;
      if (_Memory == (undefined4 *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (int)(this->mbr_0x8 - (int)_Memory) / 0x38;
      }
      if (uVar1 <= uVar4) {
        FUN_0050ea20(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8),_Memory);
        if (*(int *)(param_1 + 4) == 0) {
          this->mbr_0x8 = this->mbr_0x4;
          return (int)this;
        }
        this->mbr_0x8 =
             ((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x38) * 0x38 + this->mbr_0x4;
        return (int)this;
      }
      if (_Memory == (undefined4 *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (int)(this->mbr_0xc - (int)_Memory) / 0x38;
      }
      if (uVar1 <= uVar4) {
        iVar2 = meth_0x49d180(this);
        puVar5 = *(undefined4 **)(param_1 + 4) + iVar2 * 0xe;
        FUN_0050ea20(*(undefined4 **)(param_1 + 4),puVar5,_Memory);
        dVar3 = FUN_0050e890(puVar5,*(undefined4 **)(param_1 + 8),(undefined4 *)this->mbr_0x8);
        this->mbr_0x8 = dVar3;
        return (int)this;
      }
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  if ((void *)this->mbr_0x4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x4);
  }
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  return (int)this;
}



void __thiscall
cls_0x49d180::meth_0x50f6f0(cls_0x49d180 *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  dword dVar1;
  int iVar2;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 != 0) {
    if ((int)(this->mbr_0x8 - dVar1) / 0x38 != 0) {
      iVar2 = (int)((int)param_2 - dVar1) / 0x38;
      goto LAB_0050f73b;
    }
  }
  iVar2 = 0;
LAB_0050f73b:
  meth_0x50ec30(this,param_2,(undefined4 *)0x1,param_3);
  *param_1 = iVar2 * 0x38 + this->mbr_0x4;
  return;
}



void __thiscall cls_0x49d180::meth_0x50f7e0(cls_0x49d180 *this,undefined4 *param_1)

{
  dword dVar1;
  undefined4 *puVar2;
  
  dVar1 = this->mbr_0x4;
  if ((dVar1 != 0) &&
     ((uint)((int)(this->mbr_0x8 - dVar1) / 0x38) < (uint)((int)(this->mbr_0xc - dVar1) / 0x38))) {
    puVar2 = (undefined4 *)this->mbr_0x8;
    FUN_0050e9f0(puVar2,1,param_1);
    this->mbr_0x8 = (dword)(puVar2 + 0xe);
    return;
  }
  meth_0x50f6f0(this,(int *)&param_1,(undefined4 *)this->mbr_0x8,param_1);
  return;
}


