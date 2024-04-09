#include "../include/cls_0x52c480.h"

int __thiscall cls_0x52c480::meth_0x52c480(cls_0x52c480 *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  cls_0x52c370 *in_stack_00000004;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  cls_0x52c370::meth_0x52c370(in_stack_00000004,&local_c);
  iVar3 = *(int *)(*(int *)in_stack_00000004 + 0x40);
  iVar1 = *(int *)(*(int *)in_stack_00000004 + 0x3c);
  iVar4 = iVar3 - iVar1;
  if (iVar4 < 1) {
    return 0;
  }
  uVar5 = FUN_00616e24();
  iVar2 = (int)uVar5;
  if (iVar1 < iVar2) {
    if (iVar3 <= iVar2) {
      return 0;
    }
    iVar3 = ((iVar1 - iVar2) * 100) / iVar4 + 100;
    if (iVar3 < 0) {
      return 0;
    }
    if (iVar3 < 0x65) {
      return iVar3;
    }
  }
  return 100;
}



int __thiscall cls_0x52c480::meth_0x52c760(cls_0x52c480 *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_4;
  
  local_4 = 0;
  cls_0x50ca00::meth_0x50ca40((cls_0x50ca00 *)&this->mbr_0xc);
  puVar1 = (undefined4 *)this->mbr_0x4;
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)*puVar1;
  }
  for (; puVar3 != puVar1; puVar3 = (undefined4 *)*puVar3) {
    if ((*(int *)(((Gregorian *)puVar3[2])->mbr_0x20 + 0x58) == param_1) &&
       (iVar2 = Gregorian::meth_0x52c5d0((Gregorian *)puVar3[2]), iVar2 != 0)) {
      local_4 = local_4 + 1;
    }
  }
  cls_0x50ca00::meth_0x50ca50((cls_0x50ca00 *)&this->mbr_0xc);
  return local_4;
}



void __thiscall cls_0x52c480::meth_0x52c7d0(cls_0x52c480 *this,int param_1,int *param_2)

{
  int **ppiVar1;
  Gregorian *this_00;
  int iVar2;
  uint uVar3;
  uint uVar4;
  Gregorian *this_01;
  int **ppiVar5;
  Gregorian *local_14;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636d28;
  local_c = ExceptionList;
  uVar4 = *(uint *)(DAT_0070b250 + 0x4c);
  local_14 = (Gregorian *)0x0;
  ExceptionList = &local_c;
  cls_0x50ca00::meth_0x50ca40((cls_0x50ca00 *)&this->mbr_0xc);
  ppiVar1 = (int **)this->mbr_0x4;
  local_4 = 0;
  if ((ppiVar1 != (int **)0x0) && (ppiVar5 = (int **)*ppiVar1, ppiVar5 != ppiVar1)) {
    do {
      this_00 = (Gregorian *)ppiVar5[2];
      if ((this_00 != (Gregorian *)param_2) &&
         (((*(int *)(this_00->mbr_0x20 + 0x58) == param_1 &&
           (iVar2 = Gregorian::meth_0x52c5d0(this_00), iVar2 != 0)) &&
          (uVar3 = Gregorian::Get_mbr_0x24(this_00), uVar3 < uVar4)))) {
        uVar4 = Gregorian::Get_mbr_0x24(this_01);
        local_14 = this_00;
      }
      ppiVar5 = (int **)*ppiVar5;
    } while (ppiVar5 != ppiVar1);
    if (local_14 != (Gregorian *)0x0) {
      FUN_0052c530((int *)local_14);
    }
  }
  local_4 = 0xffffffff;
  cls_0x50ca00::meth_0x50ca50((cls_0x50ca00 *)&this->mbr_0xc);
  ExceptionList = local_c;
  return;
}


