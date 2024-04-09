#include "../include/cls_0x4f9d10.h"

undefined4 __thiscall cls_0x4f9d10::meth_0x4f9d10(cls_0x4f9d10 *this,int param_1)

{
  int iVar1;
  
  if (-1 < param_1) {
    if (this->mbr_0x14 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)(this->mbr_0x18 - this->mbr_0x14) >> 2;
    }
    if (param_1 < iVar1) {
      return *(undefined4 *)(this->mbr_0x14 + param_1 * 4);
    }
  }
  return 0;
}


