#include "../include/cls_0x475a80.h"

cls_0x475a80 * __thiscall
cls_0x475a80::cls_0x475a80(cls_0x475a80 *this,dword param_1,dword param_2,dword param_3)

{
  this->mbr_0x18 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x0 = param_1;
  this->mbr_0x4 = param_2;
  this->mbr_0x24 = param_3;
  return this;
}



void __thiscall cls_0x475a80::meth_0x475aa1(cls_0x475a80 *this)

{
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x18);
}


