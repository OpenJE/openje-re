#include "../include/cls_0x48ddc0.h"

undefined4 __thiscall cls_0x48ddc0::meth_0x48ddc0(cls_0x48ddc0 *this,int param_1)

{
  int iVar1;
  
  if (-1 < param_1) {
    if (this->mbr_0x34 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)(this->mbr_0x38 - this->mbr_0x34) >> 2;
    }
    if (param_1 < iVar1) {
      return *(undefined4 *)(this->mbr_0x34 + param_1 * 4);
    }
  }
  return 0;
}


