#include "../include/cls_0x48d8a0.h"

undefined4 __thiscall cls_0x48d8a0::meth_0x48d8a0(cls_0x48d8a0 *this,undefined4 param_1)

{
  byte bVar1;
  int **ppiVar2;
  byte bVar3;
  int **ppiVar4;
  
  ppiVar4 = (int **)this->mbr_0x34;
  ppiVar2 = (int **)this->mbr_0x38;
  bVar3 = 0;
  if (ppiVar4 != ppiVar2) {
    do {
      if (*ppiVar4 != (int *)0x0) {
        bVar1 = (**(code **)(**ppiVar4 + 0xc))(param_1);
        bVar3 = bVar3 | bVar1;
      }
      ppiVar2 = (int **)this->mbr_0x38;
      ppiVar4 = ppiVar4 + 1;
    } while (ppiVar4 != ppiVar2);
  }
  return CONCAT31((int3)((uint)ppiVar2 >> 8),bVar3);
}


