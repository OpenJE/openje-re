#include "../include/cls_0x58f2b0.h"

int * __thiscall cls_0x58f2b0::meth_0x58f2b0(cls_0x58f2b0 *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if ((undefined4 *)this->mbr_0x8 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(undefined4 *)this->mbr_0x8;
  }
  while( true ) {
    if (puVar2 == (undefined4 *)this->mbr_0x8) {
      return (int *)0x0;
    }
    piVar1 = (int *)puVar2[2];
    if ((piVar1 != (int *)0x0) && (*piVar1 == param_1)) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  return piVar1;
}


