#include "../include/cls_0x59aa70.h"

uint __thiscall cls_0x59aa70::meth_0x59aa70(cls_0x59aa70 *this,int param_1,int param_2)

{
  uint uVar1;
  dword in_stack_0000000c;
  cls_0x59aa70 *local_4;
  
  local_4 = this;
  uVar1 = FUN_005ce350((int *)param_1,param_2,(int *)&local_4);
  if (uVar1 != 0) {
    return uVar1 & 0xffffff00;
  }
  local_4->mbr_0x0 = in_stack_0000000c;
  return CONCAT31((int3)((uint)local_4 >> 8),1);
}



uint __thiscall cls_0x59aa70::meth_0x59aaa0(cls_0x59aa70 *this,int param_1,int param_2)

{
  uint uVar1;
  dword in_stack_0000000c;
  cls_0x59aa70 *local_4;
  
  local_4 = this;
  uVar1 = FUN_005ce350((int *)param_1,param_2,(int *)&local_4);
  if (uVar1 != 0) {
    return uVar1 & 0xffffff00;
  }
  local_4->mbr_0x0 = in_stack_0000000c;
  return CONCAT31((int3)(in_stack_0000000c >> 8),1);
}



int __thiscall
cls_0x59aa70::meth_0x59ac00(cls_0x59aa70 *this,int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  uint3 uVar2;
  int in_stack_00000010;
  cls_0x59aa70 *local_4;
  
  local_4 = this;
  iVar1 = FUN_005ce350((int *)param_1,(int)param_2,(int *)&local_4);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if (iVar1 == 0) {
    for (; in_stack_00000010 != 0; in_stack_00000010 = in_stack_00000010 + -1) {
      local_4->mbr_0x0 = *(dword *)param_3;
      param_3 = (int)(param_3 + 4);
      local_4 = local_4 + 1;
    }
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}


