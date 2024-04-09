#include "../include/cls_0x5aa3d0.h"

cls_0x5aa3d0 * __thiscall cls_0x5aa3d0::cls_0x5aa3d0(cls_0x5aa3d0 *this)

{
  dword dVar1;
  undefined local_11;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063b1f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  this->mbr_0x4 = 0;
  local_4 = 0;
  *(undefined *)&this->mbr_0x1c = local_11;
  dVar1 = FUN_0045c940();
  this->mbr_0x20 = dVar1;
  *(undefined *)(dVar1 + 0x35) = 1;
  *(dword *)(this->mbr_0x20 + 4) = this->mbr_0x20;
  *(dword *)this->mbr_0x20 = this->mbr_0x20;
  *(dword *)(this->mbr_0x20 + 8) = this->mbr_0x20;
  this->mbr_0x24 = 0;
  ExceptionList = local_c;
  return this;
}


