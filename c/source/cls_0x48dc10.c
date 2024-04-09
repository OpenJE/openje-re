#include "../include/cls_0x48dc10.h"

uint __thiscall cls_0x48dc10::meth_0x48dc10(cls_0x48dc10 *this)

{
  uint uVar1;
  int **ppiVar2;
  int **ppiVar3;
  
  if (this->mbr_0x4c == 0) {
    return 0;
  }
  ppiVar2 = (int **)this->mbr_0x38;
  ppiVar3 = (int **)this->mbr_0x34;
  if (ppiVar3 != ppiVar2) {
    do {
      if ((*ppiVar3 != (int *)0x0) &&
         (uVar1 = (**(code **)(**ppiVar3 + 0x40))(*(undefined4 *)this->mbr_0x4c),
         (char)uVar1 == '\0')) {
        return uVar1 & 0xffffff00;
      }
      ppiVar2 = (int **)this->mbr_0x38;
      ppiVar3 = ppiVar3 + 1;
    } while (ppiVar3 != ppiVar2);
  }
  return CONCAT31((int3)((uint)ppiVar2 >> 8),1);
}


