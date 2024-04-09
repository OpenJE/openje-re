#include "../include/cls_0x5a8bc0.h"

cls_0x5a8bc0 * __thiscall cls_0x5a8bc0::cls_0x5a8bc0(cls_0x5a8bc0 *this)

{
  dword dVar1;
  byte local_1;
  
  local_1 = (byte)((uint)this >> 0x18);
  this->mbr_0x0 = local_1;
  dVar1 = FUN_005a4830();
  this->mbr_0x4 = dVar1;
  *(undefined *)(dVar1 + 0x39) = 1;
  *(dword *)(this->mbr_0x4 + 4) = this->mbr_0x4;
  *(dword *)this->mbr_0x4 = this->mbr_0x4;
  *(dword *)(this->mbr_0x4 + 8) = this->mbr_0x4;
  this->mbr_0x8 = 0;
  return this;
}


