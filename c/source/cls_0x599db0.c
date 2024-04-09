#include "../include/cls_0x599db0.h"

int __thiscall cls_0x599db0::meth_0x599db0(cls_0x599db0 *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((undefined4 *)this->mbr_0x6c == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = *(undefined4 **)(undefined4 *)this->mbr_0x6c;
  }
  while( true ) {
    if (puVar2 == (undefined4 *)this->mbr_0x6c) {
      return 0;
    }
    iVar1 = puVar2[2];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc) == param_1)) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  return iVar1;
}


