#include "../include/cls_0x53a150.h"

void __thiscall cls_0x53a150::meth_0x53a150(cls_0x53a150 *this)

{
  int *piVar1;
  
  if ((int **)this->mbr_0xc == (int **)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)this->mbr_0xc;
  }
  if (piVar1 != (int *)this->mbr_0xc) {
    do {
      cls_0x539fb0::meth_0x53a100((cls_0x539fb0 *)piVar1[2]);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)this->mbr_0xc);
  }
  return;
}


