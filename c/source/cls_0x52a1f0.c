#include "../include/cls_0x52a1f0.h"

dword __thiscall cls_0x52a1f0::meth_0x52a1f0(cls_0x52a1f0 *this,int param_1)

{
  if (param_1 < 0) {
    return this->mbr_0x58;
  }
  if (100 < param_1) {
    param_1 = 100;
  }
  return (&this->mbr_0x58)[param_1];
}


