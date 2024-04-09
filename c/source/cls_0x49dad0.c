#include "../include/cls_0x49dad0.h"

void __thiscall cls_0x49dad0::meth_0x49dad0(cls_0x49dad0 *this,undefined4 param_1)

{
  int **ppiVar1;
  cls_0x49dad0 **ppcVar2;
  
  ppiVar1 = (int **)this->mbr_0xb0;
  if (ppiVar1 != (int **)this->mbr_0xb4) {
    do {
      (**(code **)(**ppiVar1 + 4))(param_1);
      ppiVar1 = ppiVar1 + 1;
    } while (ppiVar1 != (int **)this->mbr_0xb4);
  }
  ppcVar2 = *(cls_0x49dad0 ***)&this[1].field_0x8;
  if (ppcVar2 != *(cls_0x49dad0 ***)&this[1].field_0xc) {
    do {
      meth_0x49dad0(*ppcVar2,param_1);
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != *(cls_0x49dad0 ***)&this[1].field_0xc);
  }
  return;
}


