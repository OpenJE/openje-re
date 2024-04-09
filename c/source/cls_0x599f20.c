#include "../include/cls_0x599f20.h"

cls_0x599f20 * __thiscall cls_0x599f20::~cls_0x599f20(cls_0x599f20 *this)

{
  cls_0x599f20 *_Memory;
  
  if ((void *)this->mbr_0x30 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x30);
  }
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x28 = (dword)&Polygon__vftable_6a0174_006a0174;
  _Memory = (cls_0x599f20 *)this->mbr_0x30;
  if (_Memory != (cls_0x599f20 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x38 = 0;
  if (0xf < this->mbr_0x24) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x10);
  }
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0xf;
  *(undefined *)&this->mbr_0x10 = 0;
  return _Memory;
}


