#include "../include/cls_0x5813e0.h"

undefined4 __thiscall cls_0x5813e0::meth_0x5813e0(cls_0x5813e0 *this)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((int *)this->mbr_0x8 != (int *)0x0) {
    uVar1 = (**(code **)(*(int *)this->mbr_0x8 + 0xc))(this->mbr_0x2c,this->mbr_0x30);
  }
  return uVar1;
}



undefined4 __thiscall cls_0x5813e0::meth_0x581400(cls_0x5813e0 *this)

{
  undefined4 uVar1;
  
  if ((int *)this->mbr_0x8 != (int *)0x0) {
    uVar1 = (**(code **)(*(int *)this->mbr_0x8 + 0x10))(this->mbr_0x2c,this->mbr_0x30);
    return uVar1;
  }
  return 0;
}



undefined4 __thiscall cls_0x5813e0::meth_0x581420(cls_0x5813e0 *this)

{
  undefined4 uVar1;
  
  if ((int *)this->mbr_0x8 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00581429. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(int *)this->mbr_0x8 + 0x34))();
    return uVar1;
  }
  return 0;
}



int __thiscall cls_0x5813e0::meth_0x581430(cls_0x5813e0 *this)

{
  if (this->mbr_0x8 != 0) {
    return this->mbr_0x2c * 0x44c + 0x200 + DAT_00708380;
  }
  return 0;
}



undefined __thiscall cls_0x5813e0::meth_0x5817a0(cls_0x5813e0 *this,uint param_1)

{
  uint uVar1;
  dword *pdVar2;
  undefined uVar3;
  
  uVar3 = 0;
  if (this->mbr_0x8 != 0) {
    uVar1 = meth_0x5813e0(this);
    if (param_1 < uVar1) {
      this->mbr_0x34 = param_1;
      (**(code **)(*(int *)this->mbr_0x8 + 0x2c))(param_1);
      uVar3 = 1;
      pdVar2 = (dword *)(**(code **)(*(int *)this->mbr_0x8 + 0x34))();
      this->mbr_0x3c = *pdVar2;
      this->mbr_0x40 = pdVar2[1];
      this->mbr_0x44 = pdVar2[2];
      if ((pdVar2[4] != 0x16) && (pdVar2[4] != 0x15)) {
        this->mbr_0x48 = 0;
        this->mbr_0x38 = 1;
        return 1;
      }
      this->mbr_0x48 = 1;
      this->mbr_0x38 = 1;
    }
  }
  return uVar3;
}


