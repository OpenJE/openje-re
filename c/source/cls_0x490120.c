#include "../include/cls_0x490120.h"

int __thiscall cls_0x490120::meth_0x490120(cls_0x490120 *this,uint param_1)

{
  return this->mbr_0x8 -
         ((uint)(this->mbr_0x14 % param_1 != 0) + this->mbr_0x14 / param_1) * param_1;
}


