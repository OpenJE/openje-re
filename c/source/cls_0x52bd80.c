#include "../include/cls_0x52bd80.h"

cls_0x52bd80 * __thiscall cls_0x52bd80::cls_0x52bd80(cls_0x52bd80 *this)

{
  dword dVar1;
  byte local_11;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636b28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x0 = local_11;
  dVar1 = FUN_0059ec40();
  this->mbr_0x4 = dVar1;
  *(undefined *)(dVar1 + 0x2d) = 1;
  *(dword *)(this->mbr_0x4 + 4) = this->mbr_0x4;
  *(dword *)this->mbr_0x4 = this->mbr_0x4;
  *(dword *)(this->mbr_0x4 + 8) = this->mbr_0x4;
  this->mbr_0x8 = 0;
  *(byte *)&this->mbr_0xc = local_11;
  local_4 = 0;
  dVar1 = FUN_0059ec40();
  this->mbr_0x10 = dVar1;
  *(undefined *)(dVar1 + 0x2d) = 1;
  *(dword *)(this->mbr_0x10 + 4) = this->mbr_0x10;
  *(dword *)this->mbr_0x10 = this->mbr_0x10;
  *(dword *)(this->mbr_0x10 + 8) = this->mbr_0x10;
  this->mbr_0x14 = 0;
  ExceptionList = local_c;
  return this;
}


