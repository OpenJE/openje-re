#include "../include/cls_0x475cb6.h"

cls_0x475cb6 * __thiscall
cls_0x475cb6::cls_0x475cb6(cls_0x475cb6 *this,dword param_1,dword param_2,word param_3)

{
  this->mbr_0x10 = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x0 = param_1;
  this->mbr_0x4 = param_2;
  this->mbr_0x18 = param_3;
  return this;
}



void __thiscall cls_0x475cb6::meth_0x475cd9(cls_0x475cb6 *this)

{
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x10);
}


