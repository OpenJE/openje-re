#include "../include/cls_0x616328.h"

int __thiscall cls_0x616328::meth_0x616328(cls_0x616328 *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this->mbr_0x0 - 4);
  iVar2 = (int)this - *(int *)(iVar1 + 4);
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 != 0) {
    iVar2 = iVar2 + *(int *)((int)this - iVar1);
  }
  return iVar2;
}


