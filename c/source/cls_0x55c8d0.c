#include "../include/cls_0x55c8d0.h"

undefined4 __thiscall cls_0x55c8d0::meth_0x402780(cls_0x55c8d0 *this,uint param_1)

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
    uVar1 = FUN_00401fa0();
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  pvVar2 = operator_new(param_1 * 4);
  this->mbr_0xc = (dword)(param_1 * 4 + (int)pvVar2);
  this->mbr_0x4 = (dword)pvVar2;
  this->mbr_0x8 = (dword)pvVar2;
  return CONCAT31((int3)((uint)pvVar2 >> 8),1);
}



cls_0x55c8d0 * __thiscall cls_0x55c8d0::cls_0x55c8d0(cls_0x55c8d0 *this,int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  dword dVar3;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00638050;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  }
  ExceptionList = &local_10;
  uVar2 = meth_0x402780(this,uVar1);
  if ((char)uVar2 != '\0') {
    local_8 = 0;
    dVar3 = FUN_005456a0(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8),
                         (undefined4 *)this->mbr_0x4);
    this->mbr_0x8 = dVar3;
  }
  ExceptionList = local_10;
  return this;
}


