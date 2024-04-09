#include "../include/cls_0x49ca00.h"

int __thiscall cls_0x49ca00::meth_0x49ca00(cls_0x49ca00 *this,int param_1)

{
  if (param_1 < 0xd4) {
    return *(int *)(this->mbr_0xc + 0x20 + param_1 * 4) * 0x40 + this->mbr_0x40;
  }
  return this->mbr_0x40;
}


