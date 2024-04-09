#include "../include/cls_0x607988.h"

void __thiscall cls_0x607988::meth_0x607988(cls_0x607988 *this,char param_1)

{
  uint uVar1;
  
  uVar1 = this->mbr_0x48;
  if (param_1 == '\0') {
    if ((uVar1 & 8) != 0) {
      this->mbr_0x48 = uVar1 & 0xfffffff7;
      *(dword *)this->mbr_0x34 = this->mbr_0x40 - *(int *)this->mbr_0x24;
    }
  }
  else if ((uVar1 & 8) == 0) {
    this->mbr_0x48 = uVar1 | 8;
    this->mbr_0x40 = *(int *)this->mbr_0x34 + *(int *)this->mbr_0x24;
    *(int *)this->mbr_0x34 = *(int *)this->mbr_0x10 - *(int *)this->mbr_0x24;
  }
  return;
}


