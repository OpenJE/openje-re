#include "../include/cls_0x50b6b0.h"

cls_0x50b6b0 * __thiscall cls_0x50b6b0::cls_0x50b6b0(cls_0x50b6b0 *this)

{
  dword dVar1;
  undefined local_11;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00635883;
  local_c = ExceptionList;
  DAT_00707ce8 = this;
  ExceptionList = &local_c;
  this->mbr_0x0 = 1;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  local_4 = 1;
  *(undefined *)&this->mbr_0x18 = local_11;
  dVar1 = FUN_004c6640();
  this->mbr_0x1c = dVar1;
  *(undefined *)(dVar1 + 0x15) = 1;
  *(dword *)(this->mbr_0x1c + 4) = this->mbr_0x1c;
  *(dword *)this->mbr_0x1c = this->mbr_0x1c;
  *(dword *)(this->mbr_0x1c + 8) = this->mbr_0x1c;
  this->mbr_0x20 = 0;
  ExceptionList = local_c;
  return this;
}


