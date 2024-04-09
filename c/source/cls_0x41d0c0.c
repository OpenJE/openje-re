#include "../include/cls_0x41d0c0.h"

void __thiscall cls_0x41d0c0::meth_0x41d0c0(cls_0x41d0c0 *this)

{
  if (((this->mbr_0x44 == 0) && (0 < (int)this->mbr_0x40)) && ((int *)this->mbr_0x3c != (int *)0x0))
  {
                    /* WARNING: Could not recover jumptable at 0x0041d0d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)this->mbr_0x3c + 0x28))();
    return;
  }
  return;
}


