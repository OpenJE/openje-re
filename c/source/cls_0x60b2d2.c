#include "../include/cls_0x60b2d2.h"

void __thiscall cls_0x60b2d2::meth_0x60b2d2(cls_0x60b2d2 *this)

{
  *(int *)this->mbr_0x30 = *(int *)this->mbr_0x30 + -1;
  *(int *)this->mbr_0x20 = *(int *)this->mbr_0x20 + 2;
  return;
}



undefined2 __thiscall cls_0x60b2d2::meth_0x60d1c8(cls_0x60b2d2 *this)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  
  uVar1 = *(uint *)this->mbr_0x20;
  if ((uVar1 != 0) && (uVar1 < uVar1 + *(int *)this->mbr_0x30 * 2)) {
    puVar3 = (undefined2 *)meth_0x60b2d2(this);
    return *puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0060d1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(this->mbr_0x0 + 0x14))();
  return uVar2;
}


