#include "../include/cls_0x41d0e0.h"

float10 * __thiscall
cls_0x41d0e0::meth_0x41d0e0
          (cls_0x41d0e0 *this,float10 *__return_storage_ptr__,float param_1,float param_2)

{
  int iVar1;
  float10 *pfVar2;
  int iVar3;
  
  this->mbr_0x2c = (dword)__return_storage_ptr__;
  iVar1 = 0;
  if (0 < (int)this->mbr_0x108) {
    iVar3 = 0;
    do {
      *(float10 **)(this->mbr_0x100 + 8 + iVar3) = __return_storage_ptr__;
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (iVar1 < (int)this->mbr_0x108);
  }
  pfVar2 = (float10 *)this->mbr_0x40;
  if ((0 < (int)pfVar2) && ((int *)this->mbr_0x3c != (int *)0x0)) {
    pfVar2 = (float10 *)
             (**(code **)(*(int *)this->mbr_0x3c + 0x30))
                       (param_1 * 0.3333333 + (float)__return_storage_ptr__,param_1 * 0.3333333);
  }
  return pfVar2;
}


