#include "../include/cls_0x5b5c50.h"

void __thiscall cls_0x5b5c50::meth_0x5b5c50(cls_0x5b5c50 *this,int param_1,int param_2)

{
  if (param_1 < 0) {
    param_1 = 0;
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (0x400 < (int)(this->mbr_0xc + param_1)) {
    param_1 = 0x400 - this->mbr_0xc;
  }
  if (0x300 < (int)(this->mbr_0x10 + param_2)) {
    param_2 = 0x300 - this->mbr_0x10;
  }
  if ((param_1 != this->mbr_0x4) || (param_2 != this->mbr_0x8)) {
    this->mbr_0x4 = param_1;
    this->mbr_0x8 = param_2;
    (**(code **)(*(int *)this->mbr_0x28 + 0x44))(param_1,param_2);
  }
  return;
}


