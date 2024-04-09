#include "../include/cls_0x48d8e0.h"

void __thiscall cls_0x48d8e0::meth_0x48d8e0(cls_0x48d8e0 *this,undefined4 param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)this->mbr_0x34;
  if (ppiVar1 != (int **)this->mbr_0x38) {
    do {
      if (*ppiVar1 != (int *)0x0) {
        (**(code **)(**ppiVar1 + 0x10))(param_1);
      }
      ppiVar1 = ppiVar1 + 1;
    } while (ppiVar1 != (int **)this->mbr_0x38);
  }
  return;
}


