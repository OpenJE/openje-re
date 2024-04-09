#include "../include/cls_0x5e89f7.h"

int __thiscall cls_0x5e89f7::meth_0x5e89f7(cls_0x5e89f7 *this)

{
  if (this->mbr_0x8 == 0) {
    return 0;
  }
  return (int)(&this->mbr_0xc + this->mbr_0x4);
}



uint __thiscall cls_0x5e89f7::meth_0x5e8a08(cls_0x5e89f7 *this,int param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)(param_1 + 0xc + (*(int *)(param_1 + 8) + *(int *)(param_1 + 4)) * 4);
  if ((puVar1 < &this->mbr_0xc) || (&this->mbr_0xc + this->mbr_0x8 + this->mbr_0x4 <= puVar1)) {
    puVar1 = (undefined *)0x0;
  }
  return (uint)puVar1;
}


