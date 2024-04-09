#include "../include/cls_0x49db40.h"

void __thiscall cls_0x49db40::meth_0x49db40(cls_0x49db40 *this,int param_1,undefined4 param_2)

{
  FUN_0049d420((void *)this->mbr_0x48,param_1,param_2);
  return;
}



void __thiscall cls_0x49db40::meth_0x49dd80(cls_0x49db40 *this,int param_1,char param_2)

{
  dword dVar1;
  
  dVar1 = this->mbr_0x6c;
  if (dVar1 != 0) {
    if (*(int *)(dVar1 + 0x54) == 0) {
      FUN_0050e290(dVar1);
    }
    cls_0x49dc20::meth_0x49dc20((cls_0x49dc20 *)(dVar1 + 0x28),param_1,param_2);
  }
  if ((void *)this->mbr_0x70 != (void *)0x0) {
    FUN_005090a0((void *)this->mbr_0x70,param_1,param_2);
  }
  return;
}


