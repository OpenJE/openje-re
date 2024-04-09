#include "../include/cls_0x457460.h"

void __thiscall cls_0x457460::meth_0x457460(cls_0x457460 *this,int *param_1)

{
  this->mbr_0x4 = (dword)param_1;
  if (((int *)this->mbr_0x0 != (int *)0x0) && (param_1 != (int *)0x0)) {
    (**(code **)(*(int *)this->mbr_0x0 + 0x130))
              (*(int *)(param_1[1] + 4) + 0x254 + (int)param_1,0,0,0,0xbf800000,0xbf800000,1);
  }
  return;
}


