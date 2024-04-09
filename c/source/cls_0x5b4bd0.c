#include "../include/cls_0x5b4bd0.h"

void __thiscall
cls_0x5b4bd0::meth_0x5b4bd0
          (cls_0x5b4bd0 *this,undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  DWORD DVar1;
  dword unaff_ESI;
  
  if ((this->mbr_0x4 != 0) && ((int *)this->mbr_0x8 != (int *)0x0)) {
    (**(code **)(*(int *)this->mbr_0x8 + 0x5c))
              (((param_2 | 0xffffff00) << 8 | param_3 & 0xff) << 8 | param_4 & 0xff);
    (**(code **)(*(int *)this->mbr_0x8 + 100))(0);
    this->mbr_0xc = 2;
    DVar1 = timeGetTime();
    this->mbr_0x10 = DVar1;
    this->mbr_0x14 = unaff_ESI;
    if ((int)unaff_ESI < 1) {
      (**(code **)(*(int *)this->mbr_0x8 + 100))(0xff);
      this->mbr_0xc = 0;
      return;
    }
    (**(code **)(*(int *)this->mbr_0x8 + 0x54))(0);
  }
  return;
}


