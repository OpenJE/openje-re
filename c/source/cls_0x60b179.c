#include "../include/cls_0x60b179.h"

undefined4 __thiscall cls_0x60b179::meth_0x60b179(cls_0x60b179 *this)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined2 **)this->mbr_0x20;
  if ((puVar1 != (undefined2 *)0x0) && (puVar1 < puVar1 + *(int *)this->mbr_0x30)) {
    return CONCAT22((short)((uint)puVar1 >> 0x10),*puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0060b194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(this->mbr_0x0 + 0x10))();
  return uVar2;
}


