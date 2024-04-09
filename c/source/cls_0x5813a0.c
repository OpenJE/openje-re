#include "../include/cls_0x5813a0.h"

byte __thiscall cls_0x5813a0::meth_0x5813a0(cls_0x5813a0 *this)

{
  byte bVar1;
  
  if ((int *)this->mbr_0x8 != (int *)0x0) {
    bVar1 = (**(code **)(*(int *)this->mbr_0x8 + 0x14))();
    this->mbr_0x49 = bVar1;
  }
  return this->mbr_0x49;
}



void __thiscall cls_0x5813a0::meth_0x5813c0(cls_0x5813a0 *this,undefined4 param_1)

{
  this->mbr_0x49 = (byte)param_1;
  if ((int *)this->mbr_0x8 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005813d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)this->mbr_0x8 + 0x18))();
    return;
  }
  return;
}


