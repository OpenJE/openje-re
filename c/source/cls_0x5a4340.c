#include "../include/cls_0x5a4340.h"

void __thiscall cls_0x5a4340::meth_0x5a4340(cls_0x5a4340 *this)

{
  if (this->mbr_0x0 == 1) {
    this->mbr_0x0 = 2;
  }
  else if (this->mbr_0x0 == 3) {
    this->mbr_0x0 = 0;
    this->mbr_0x4 = 0;
  }
  if (this->mbr_0x8 == 1) {
    this->mbr_0x0 = 1;
    this->mbr_0x4 = this->mbr_0xc;
    this->mbr_0xc = 0;
    this->mbr_0x8 = 0;
  }
  else if (this->mbr_0x8 == 3) {
    this->mbr_0x0 = 3;
    this->mbr_0x8 = 0;
    return;
  }
  return;
}


