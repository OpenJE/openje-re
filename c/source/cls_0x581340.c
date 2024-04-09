#include "../include/cls_0x581340.h"

void __thiscall cls_0x581340::meth_0x581340(cls_0x581340 *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *unaff_retaddr;
  undefined local_44 [68];
  
  if ((int *)this->mbr_0x8 != (int *)0x0) {
    (**(code **)(*(int *)this->mbr_0x8 + 0x1d8))(local_44);
    puVar2 = (undefined4 *)&stack0xffffffb8;
    for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
      *unaff_retaddr = *puVar2;
      puVar2 = puVar2 + 1;
      unaff_retaddr = unaff_retaddr + 1;
    }
    return;
  }
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


