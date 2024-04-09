#include "../include/cls_0x4b87b0.h"

cls_0x4b87b0 * __thiscall cls_0x4b87b0::cls_0x4b87b0(cls_0x4b87b0 *this,int *param_1)

{
  this->mbr_0xc = (dword)param_1;
  if (param_1 != (int *)0x0) {
    this = (cls_0x4b87b0 *)(**(code **)(*param_1 + 0x14))(&this->field_0x2c,&this->mbr_0x30);
  }
  return this;
}


