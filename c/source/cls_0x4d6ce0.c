#include "../include/cls_0x4d6ce0.h"

/* WARNING: Removing unreachable block (ram,0x004d6d2d) */

cls_0x4d6ce0 * __thiscall cls_0x4d6ce0::cls_0x4d6ce0(cls_0x4d6ce0 *this,int param_1)

{
  void *pvVar1;
  dword dVar2;
  uint uVar3;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00633510;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  }
  ExceptionList = &local_10;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  if (uVar3 != 0) {
    pvVar1 = operator_new(uVar3);
    this->mbr_0x4 = (dword)pvVar1;
    this->mbr_0x8 = (dword)pvVar1;
    this->mbr_0xc = (int)pvVar1 + uVar3;
    local_8 = 0;
    dVar2 = FUN_004308f0(*(undefined **)(param_1 + 4),*(undefined **)(param_1 + 8),
                         (undefined *)this->mbr_0x4);
    this->mbr_0x8 = dVar2;
  }
  ExceptionList = local_10;
  return this;
}


