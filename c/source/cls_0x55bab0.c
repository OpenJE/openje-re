#include "../include/cls_0x55bab0.h"

void __thiscall cls_0x55bab0::meth_0x55bab0(cls_0x55bab0 *this)

{
  byte *pbVar1;
  
  pbVar1 = &this->mbr_0x5;
  *pbVar1 = *pbVar1 + 1;
  if (*pbVar1 == 0) {
    this->mbr_0x5 = 1;
  }
  return;
}


