#include "../include/cls_0x59abc0.h"

int __thiscall
cls_0x59abc0::meth_0x59abc0(cls_0x59abc0 *this,int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  uint3 uVar2;
  int in_stack_00000010;
  cls_0x59abc0 *local_4;
  
  local_4 = this;
  iVar1 = FUN_005ce350((int *)param_1,(int)param_2,(int *)&local_4);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if (iVar1 == 0) {
    for (; in_stack_00000010 != 0; in_stack_00000010 = in_stack_00000010 + -1) {
      *(dword *)param_3 = local_4->mbr_0x0;
      local_4 = local_4 + 1;
      param_3 = (int)(param_3 + 4);
    }
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}


