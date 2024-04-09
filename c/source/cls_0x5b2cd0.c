#include "../include/cls_0x5b2cd0.h"

void __thiscall cls_0x5b2cd0::meth_0x5b2cd0(cls_0x5b2cd0 *this)

{
  cls_0x48d750 local_4;
  
  local_4.mbr_0x0 = *(int *)this->mbr_0x54;
  if ((int *)local_4.mbr_0x0 != (int *)this->mbr_0x54) {
    do {
      *(undefined4 *)(*(int *)(local_4.mbr_0x0 + 0x10) + 0x16c) = 0;
      cls_0x48d750::meth_0x48d750(&local_4);
    } while (local_4.mbr_0x0 != this->mbr_0x54);
  }
  return;
}


