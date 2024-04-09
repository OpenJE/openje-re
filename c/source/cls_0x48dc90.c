#include "../include/cls_0x48dc90.h"

void __thiscall cls_0x48dc90::meth_0x48dc90(cls_0x48dc90 *this,undefined4 param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)this->mbr_0x34;
  if (ppiVar1 != (int **)this->mbr_0x38) {
    do {
      if (*ppiVar1 != (int *)0x0) {
        (**(code **)(**ppiVar1 + 0x60))(param_1);
      }
      ppiVar1 = ppiVar1 + 1;
    } while (ppiVar1 != (int **)this->mbr_0x38);
  }
  return;
}


