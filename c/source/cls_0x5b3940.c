#include "../include/cls_0x5b3940.h"

/* WARNING: Removing unreachable block (ram,0x005b395c) */
/* WARNING: Removing unreachable block (ram,0x005b3960) */

void __thiscall
cls_0x5b3940::meth_0x5b3940(cls_0x5b3940 *this,undefined4 *param_1,undefined4 *param_2)

{
  param_2 = (undefined4 *)*param_2;
  if (this->mbr_0x4 != this->mbr_0x8) {
    this->mbr_0x8 = this->mbr_0x4;
  }
  cls_0x40cc80::meth_0x5b3550((cls_0x40cc80 *)this,(undefined4 *)this->mbr_0x4,param_1,&param_2);
  return;
}


