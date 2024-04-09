#include "../include/cls_0x433710.h"

void __thiscall cls_0x433710::meth_0x433710(cls_0x433710 *this)

{
  if ((int *)this->mbr_0x4 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00433719. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)this->mbr_0x4 + 0x130))();
    return;
  }
  return;
}



void __thiscall cls_0x433710::meth_0x433730(cls_0x433710 *this,undefined4 param_1)

{
  if ((int *)this->mbr_0x8 != (int *)0x0) {
    (**(code **)(*(int *)this->mbr_0x8 + 0x130))(param_1,0,0,0,0xbf800000,0xbf800000,1);
  }
  return;
}


