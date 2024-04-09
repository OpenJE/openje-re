#include "../include/cls_0x45f060.h"

cls_0x45f060 * __thiscall cls_0x45f060::~cls_0x45f060(cls_0x45f060 *this)

{
  byte bVar1;
  undefined4 in_EAX;
  
  bVar1 = this->mbr_0x4;
  this->mbr_0x0 = (dword)&buffer__vftable_6648e8_006648e8;
  if (bVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x14);
  }
  this->mbr_0x4 = 0;
  this->mbr_0x14 = 0;
  return (cls_0x45f060 *)CONCAT31((int3)((uint)in_EAX >> 8),bVar1);
}


