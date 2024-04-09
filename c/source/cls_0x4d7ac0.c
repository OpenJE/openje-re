#include "../include/cls_0x4d7ac0.h"

void __thiscall cls_0x4d7ac0::meth_0x4d7ac0(cls_0x4d7ac0 *this)

{
  if ((void *)this->mbr_0x84 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x84);
  }
  this->mbr_0x84 = 0;
  this->mbr_0x88 = 0;
  this->mbr_0x8c = 0;
  if ((void *)this->mbr_0x74 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x74);
  }
  this->mbr_0x74 = 0;
  this->mbr_0x78 = 0;
  this->mbr_0x7c = 0;
  cls_0x4c9b30::meth_0x4d6c70((cls_0x4c9b30 *)this);
  return;
}


