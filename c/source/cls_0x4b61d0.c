#include "../include/cls_0x4b61d0.h"

void __thiscall cls_0x4b61d0::meth_0x4b61d0(cls_0x4b61d0 *this)

{
  if ((int *)this->mbr_0x14 == (int *)0x0) {
    this->mbr_0x8 = dRam00000008;
    this->mbr_0x4 = 0;
    this->mbr_0xc = 0;
    return;
  }
  this->mbr_0x8 = *(dword *)(*(int *)this->mbr_0x14 + 8);
  this->mbr_0x4 = 0;
  this->mbr_0xc = 0;
  return;
}


