#include "../include/cls_0x4b87e0.h"

void __thiscall cls_0x4b87e0::meth_0x4b87e0(cls_0x4b87e0 *this,int *param_1)

{
  dword local_c [3];
  
  this->mbr_0x10 = (dword)param_1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x48))();
    (**(code **)(*(int *)this->mbr_0x10 + 0x14))(&stack0xfffffff0);
    this->mbr_0x44 = local_c[0];
    this->mbr_0x48 = (dword)local_c;
    this->mbr_0x4c = (dword)&param_1;
    this->mbr_0x50 = (dword)local_c;
  }
  return;
}


