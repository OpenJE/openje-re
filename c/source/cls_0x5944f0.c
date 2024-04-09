#include "../include/cls_0x5944f0.h"

cls_0x5944f0 * __thiscall cls_0x5944f0::cls_0x5944f0(cls_0x5944f0 *this)

{
  dword dVar1;
  undefined local_1;
  
  local_1 = (undefined)((uint)this >> 0x18);
  *(undefined *)&this->mbr_0x8 = local_1;
  dVar1 = FUN_004c6640();
  this->mbr_0xc = dVar1;
  *(undefined *)(dVar1 + 0x15) = 1;
  *(dword *)(this->mbr_0xc + 4) = this->mbr_0xc;
  *(dword *)this->mbr_0xc = this->mbr_0xc;
  *(dword *)(this->mbr_0xc + 8) = this->mbr_0xc;
  this->mbr_0x10 = 0;
  return this;
}


