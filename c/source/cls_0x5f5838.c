#include "../include/cls_0x5f5838.h"

void __thiscall cls_0x5f5838::meth_0x5f5838(cls_0x5f5838 *this)

{
  int *piVar1;
  
  if (this->mbr_0x4 != 0) {
    (**(code **)(*(int *)this->mbr_0x8 + 0xe0))((int *)this->mbr_0x8,this->mbr_0x4);
  }
  piVar1 = (int *)this->mbr_0x8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x8 = 0;
  }
  return;
}



void * __thiscall cls_0x5f5838::meth_0x5f5867(cls_0x5f5838 *this,byte param_1)

{
  meth_0x5f5838(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}



int __thiscall cls_0x5f5838::meth_0x5f592a(cls_0x5f5838 *this)

{
  dword dVar1;
  
  this->mbr_0x0 = this->mbr_0x0 - 1;
  dVar1 = this->mbr_0x0;
  if (this->mbr_0x0 == 0) {
    meth_0x5f5867(this,1);
    dVar1 = 0;
  }
  return dVar1;
}


