#include "../include/cls_0x563c40.h"

void __thiscall cls_0x563c40::meth_0x563c40(cls_0x563c40 *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1 * 0x10;
  iVar1 = *(int *)(iVar3 + 4 + this->mbr_0x0);
  iVar4 = param_2 * 0x24;
  *(int *)(iVar1 + 0x20 + iVar4) = *(int *)(iVar1 + 0x20 + iVar4) + -1;
  iVar1 = *(int *)(iVar3 + 4 + this->mbr_0x0);
  piVar2 = (int *)(iVar1 + iVar4);
  if (((*(int *)(iVar1 + 0x20 + iVar4) == 0) && (DAT_00707ce4 != (int *)0x0)) && (*piVar2 != 0)) {
    (**(code **)(*DAT_00707ce4 + 0xb8))(piVar2);
    *(undefined4 *)(iVar4 + *(int *)(iVar3 + 4 + this->mbr_0x0)) = 0;
  }
  return;
}


