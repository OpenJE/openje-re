#include "../include/cls_0x5810b0.h"

void __thiscall cls_0x5810b0::meth_0x5810b0(cls_0x5810b0 *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(int *)this->mbr_0x8 + 0x134))(0);
  if (cVar1 != '\0') {
    (**(code **)(*(int *)this->mbr_0x8 + 0x130))(0);
    return;
  }
  (**(code **)(*(int *)this->mbr_0x8 + 0x130))(1,0);
  return;
}


