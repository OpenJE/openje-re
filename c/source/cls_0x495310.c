#include "../include/cls_0x495310.h"

void __thiscall cls_0x495310::meth_0x495310(cls_0x495310 *this)

{
  int *piVar1;
  
  if ((int **)this->mbr_0x28 == (int **)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)this->mbr_0x28;
  }
  if (piVar1 != (int *)this->mbr_0x28) {
    do {
      (**(code **)(*(int *)piVar1[2] + 0xc))(0,0);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)this->mbr_0x28);
  }
  return;
}


