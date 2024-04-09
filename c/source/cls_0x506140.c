#include "../include/cls_0x506140.h"

void __thiscall
cls_0x506140::meth_0x506140
          (cls_0x506140 *this,undefined4 param_1,char param_2,char param_3,char param_4,int param_5)

{
  this->mbr_0x14 = 0;
  if (param_3 == '\0') {
    if (((param_4 != '\0') && (param_5 != 0)) && (this->mbr_0x4 != 0)) {
      this->mbr_0x14 = 1;
    }
  }
  else if (((this->mbr_0xc != 0) && (this->mbr_0x14 = 3, param_4 != '\0')) &&
          ((param_5 != 0 && (this->mbr_0x10 != 0)))) {
    this->mbr_0x14 = 4;
  }
  if (this == (cls_0x506140 *)&DAT_00708a8c) {
    (**(code **)(**(int **)(&DAT_00708a8c + DAT_00708aa0 * 4) + 0x18))(param_2 != '\0');
  }
  (**(code **)(**(int **)(&this->field_0x0 + this->mbr_0x14 * 4) + 0x28))(param_1,param_5);
  return;
}


