#include "../include/cls_0x526620.h"

cls_0x526620 * __thiscall cls_0x526620::cls_0x526620(cls_0x526620 *this,dword param_1)

{
  dword dVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006367a2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x1c = 0xf;
  this->mbr_0x18 = 0;
  this->mbr_0x8 = 0;
  local_4 = 0;
  this->mbr_0x20 = param_1;
  cls_0x49f150::cls_0x49f150(&this->cls_0x49f150);
  this->mbr_0x128 = 0;
  this->mbr_0x12c = 0;
  this->mbr_0x130 = 0;
  this->mbr_0x138 = 0;
  this->mbr_0x13c = 0;
  this->mbr_0x140 = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  dVar1 = FUN_00498d40();
  this->mbr_0x158 = dVar1;
  this->mbr_0x15c = 0;
  this->mbr_0x0 = 0;
  (this->cls_0x49f150).mbr_0x0 = (dword)this;
  this->mbr_0x144 = 0;
  this->mbr_0x148 = 0;
  this->mbr_0x120 = 0;
  this->mbr_0x14c = 0;
  this->mbr_0x150 = 0;
  ExceptionList = local_c;
  return this;
}


