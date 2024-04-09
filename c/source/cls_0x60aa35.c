#include "../include/cls_0x60aa35.h"

void __thiscall cls_0x60aa35::meth_0x60aa35(cls_0x60aa35 *this)

{
  *(int *)this->mbr_0x34 = *(int *)this->mbr_0x34 + -1;
  *(int *)this->mbr_0x24 = *(int *)this->mbr_0x24 + 2;
  return;
}



undefined4 __thiscall cls_0x60aa35::meth_0x60ab6a(cls_0x60aa35 *this,undefined4 param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)this->mbr_0x24;
  if ((uVar1 != 0) && (uVar1 < uVar1 + *(int *)this->mbr_0x34 * 2)) {
    puVar2 = (undefined2 *)meth_0x60aa35(this);
    *puVar2 = (short)param_1;
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0060ab92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(this->mbr_0x0 + 4))();
  return uVar3;
}


