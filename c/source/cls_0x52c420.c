#include "../include/cls_0x52c420.h"

undefined4 __thiscall cls_0x52c420::meth_0x52c420(cls_0x52c420 *this,int param_1,int param_2)

{
  if ((((-1 < param_1) && (param_1 < (int)this->mbr_0x6c)) && (param_1 < 0x10)) &&
     (((-1 < param_2 && (param_2 < (int)this->mbr_0x6c)) && (param_2 < 0x10)))) {
    return *(undefined4 *)(&this[1].field_0x0 + (param_1 * 0x10 + param_2) * 4);
  }
  return 0;
}


