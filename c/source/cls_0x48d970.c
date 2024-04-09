#include "../include/cls_0x48d970.h"

uint __thiscall cls_0x48d970::meth_0x48d970(cls_0x48d970 *this)

{
  int **in_EAX;
  undefined4 uVar1;
  int **ppiVar2;
  
  ppiVar2 = (int **)this->mbr_0x34;
  if (ppiVar2 != (int **)this->mbr_0x38) {
    do {
      if ((*ppiVar2 != (int *)0x0) &&
         (uVar1 = (**(code **)(**ppiVar2 + 0x1c))(), (char)uVar1 != '\0')) {
        return CONCAT31((int3)((uint)uVar1 >> 8),1);
      }
      in_EAX = (int **)this->mbr_0x38;
      ppiVar2 = ppiVar2 + 1;
    } while (ppiVar2 != in_EAX);
  }
  return (uint)in_EAX & 0xffffff00;
}


