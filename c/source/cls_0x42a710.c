#include "../include/cls_0x42a710.h"

void __thiscall cls_0x42a710::meth_0x42a710(cls_0x42a710 *this)

{
  if ((void *)this->mbr_0x14 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x14);
  }
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0;
  Gregorian::meth_0x429b70((Gregorian *)this);
  return;
}


