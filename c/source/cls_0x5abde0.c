#include "../include/cls_0x5abde0.h"

void __thiscall cls_0x5abde0::meth_0x5abde0(cls_0x5abde0 *this)

{
  dword *pdVar1;
  uint uVar2;
  
  if (this->mbr_0x10 != 0) {
    (**(code **)**(undefined4 **)(this->mbr_0x4 + this->mbr_0xc * 4))(0);
    uVar2 = this->mbr_0xc + 1;
    this->mbr_0xc = uVar2;
    if (this->mbr_0x8 <= uVar2) {
      this->mbr_0xc = 0;
    }
    pdVar1 = &this->mbr_0x10;
    *pdVar1 = *pdVar1 - 1;
    if (*pdVar1 == 0) {
      this->mbr_0xc = 0;
    }
  }
  return;
}



void __thiscall cls_0x5abde0::meth_0x5abe20(cls_0x5abde0 *this)

{
  dword *pdVar1;
  dword dVar2;
  uint uVar3;
  
  dVar2 = this->mbr_0x10;
  while (dVar2 != 0) {
    if (this->mbr_0x10 != 0) {
      uVar3 = (this->mbr_0x10 - 1) + this->mbr_0xc;
      if (this->mbr_0x8 <= uVar3) {
        uVar3 = uVar3 - this->mbr_0x8;
      }
      (**(code **)**(undefined4 **)(this->mbr_0x4 + uVar3 * 4))(0);
      pdVar1 = &this->mbr_0x10;
      *pdVar1 = *pdVar1 - 1;
      if (*pdVar1 == 0) {
        this->mbr_0xc = 0;
      }
    }
    dVar2 = this->mbr_0x10;
  }
  if (this->mbr_0x8 != 0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((this->mbr_0x4 - 4) + this->mbr_0x8 * 4));
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



undefined4 __thiscall cls_0x5abde0::meth_0x5abef0(cls_0x5abde0 *this,int param_1)

{
  uint uVar1;
  
  uVar1 = this->mbr_0xc + param_1;
  if (this->mbr_0x8 <= uVar1) {
    return *(undefined4 *)(this->mbr_0x4 + (uVar1 - this->mbr_0x8) * 4);
  }
  return *(undefined4 *)(this->mbr_0x4 + uVar1 * 4);
}


