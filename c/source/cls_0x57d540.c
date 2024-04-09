#include "../include/cls_0x57d540.h"

undefined4 __thiscall cls_0x57d540::meth_0x57d540(cls_0x57d540 *this,uint param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0x3fffffff < param_1) {
    uVar1 = FUN_0057cc70();
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  pvVar2 = operator_new(param_1 * 4);
  this->mbr_0xc = (dword)(param_1 * 4 + (int)pvVar2);
  this->mbr_0x4 = (dword)pvVar2;
  this->mbr_0x8 = (dword)pvVar2;
  return CONCAT31((int3)((uint)pvVar2 >> 8),1);
}



int __thiscall cls_0x57d540::meth_0x57d840(cls_0x57d540 *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *_Memory;
  dword dVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (this == (cls_0x57d540 *)param_1) {
    return (int)this;
  }
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = (int)*(undefined4 **)(param_1 + 8) - (int)puVar1 >> 2;
    if (uVar3 != 0) {
      _Memory = (undefined4 *)this->mbr_0x4;
      if (_Memory == (undefined4 *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (int)(this->mbr_0x8 - (int)_Memory) >> 2;
      }
      if (uVar3 <= uVar5) {
        FUN_0041f520(puVar1,*(undefined4 **)(param_1 + 8),_Memory);
        if (*(int *)(param_1 + 4) == 0) {
          this->mbr_0x8 = this->mbr_0x4;
          return (int)this;
        }
        this->mbr_0x8 = this->mbr_0x4 + (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2) * 4;
        return (int)this;
      }
      if (_Memory == (undefined4 *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (int)(this->mbr_0xc - (int)_Memory) >> 2;
      }
      if (uVar3 <= uVar5) {
        if (_Memory == (undefined4 *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (int)(this->mbr_0x8 - (int)_Memory) >> 2;
        }
        FUN_0041f520(puVar1,puVar1 + iVar4,_Memory);
        dVar2 = FUN_005456a0(puVar1 + iVar4,*(undefined4 **)(param_1 + 8),
                             (undefined4 *)this->mbr_0x8);
        this->mbr_0x8 = dVar2;
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


