#include "../include/cls_0x560390.h"

cls_0x560390 * __thiscall
cls_0x560390::cls_0x560390
          (cls_0x560390 *this,int param_1,dword param_2,dword param_3,dword param_4,dword param_5,
          undefined4 param_6,byte param_7)

{
  int iVar1;
  int *piVar2;
  
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x39 = param_7;
  this->mbr_0xc = param_1;
  this->mbr_0x0 = 0;
  this->mbr_0x4 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x40 = 0;
  this->mbr_0x20 = *(dword *)(param_1 + 4);
  this->mbr_0x24 = *(dword *)(param_1 + 8);
  this->mbr_0x28 = *(dword *)(param_1 + 0xc);
  this->mbr_0x2c = param_2;
  this->mbr_0x30 = param_3;
  this->mbr_0x34 = param_4;
  if (DAT_0070bd98 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
  }
  iVar1 = (**(code **)(*piVar2 + 0x54))(*(undefined4 *)(param_1 + 0x1ec));
  this->mbr_0x4c = *(dword *)(iVar1 + 0x84);
  this->mbr_0x50 = *(dword *)(iVar1 + 0x88);
  this->mbr_0x54 = *(dword *)(iVar1 + 0x8c);
  this->mbr_0x3c = 0;
  this->mbr_0x44 = 0;
  this->mbr_0x48 = 0;
  this->mbr_0x58 = param_5;
  this->mbr_0x5c = (byte)param_4;
  return this;
}


