#include "../include/cls_0x45d2c0.h"

cls_0x45d2c0 * __thiscall cls_0x45d2c0::cls_0x45d2c0(cls_0x45d2c0 *this)

{
  dword dVar1;
  byte local_1;
  
  local_1 = (byte)((uint)this >> 0x18);
  this->mbr_0x0 = local_1;
  dVar1 = FUN_0045c940();
  this->mbr_0x4 = dVar1;
  *(undefined *)(dVar1 + 0x35) = 1;
  *(dword *)(this->mbr_0x4 + 4) = this->mbr_0x4;
  *(dword *)this->mbr_0x4 = this->mbr_0x4;
  *(dword *)(this->mbr_0x4 + 8) = this->mbr_0x4;
  this->mbr_0x8 = 0;
  return this;
}


