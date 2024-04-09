#include "../include/cls_0x4a4970.h"

cls_0x4a4970 * __thiscall cls_0x4a4970::cls_0x4a4970(cls_0x4a4970 *this)

{
  dword dVar1;
  undefined local_1;
  
  local_1 = (undefined)((uint)this >> 0x18);
  this->mbr_0x0 = 0;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0x3f800000;
  *(undefined *)&this->mbr_0x10 = local_1;
  dVar1 = FUN_0057c2e0();
  this->mbr_0x14 = dVar1;
  *(undefined *)(dVar1 + 0x1d) = 1;
  *(dword *)(this->mbr_0x14 + 4) = this->mbr_0x14;
  *(dword *)this->mbr_0x14 = this->mbr_0x14;
  *(dword *)(this->mbr_0x14 + 8) = this->mbr_0x14;
  this->mbr_0x18 = 0;
  return this;
}


