#include "../include/cls_0x56d570.h"

void __thiscall cls_0x56d570::meth_0x56d570(cls_0x56d570 *this)

{
  dword dVar1;
  int *piVar2;
  ulonglong uVar3;
  
  this->mbr_0x1b1 = this->mbr_0x1c4;
  this->mbr_0x1b8 = this->mbr_0x1cc;
  this->mbr_0x1bc = this->mbr_0x1d0;
  uVar3 = FUN_00616e24();
  this->mbr_0x1b4 = (dword)uVar3;
  this->mbr_0x1c0 = this->mbr_0x1d4;
  if (DAT_0070bd98 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
  }
  dVar1 = (**(code **)(*piVar2 + 0x5c))();
  if (dVar1 == this->mbr_0xb4) {
    (**(code **)(*DAT_00707ce4 + 0x108))(this->mbr_0x1b1,0);
    (**(code **)(*DAT_00707ce4 + 0x110))(&this->mbr_0x1b4,0);
    (**(code **)(*DAT_00707ce4 + 0x118))(this->mbr_0x1b8,this->mbr_0x1bc,0);
    (**(code **)(*DAT_00707ce4 + 0x124))(this->mbr_0x1c0,0);
  }
  return;
}


