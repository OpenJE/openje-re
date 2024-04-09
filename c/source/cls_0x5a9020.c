#include "../include/cls_0x5a9020.h"

void __thiscall cls_0x5a9020::meth_0x5a9020(cls_0x5a9020 *this,int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = operator_new(param_1 * 4);
  this->mbr_0x30 = (dword)pvVar1;
  iVar2 = 0;
  this->mbr_0x2c = param_1;
  if (0 < param_1) {
    do {
      *(undefined4 *)(this->mbr_0x30 + iVar2 * 4) = *(undefined4 *)(param_2 + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)this->mbr_0x2c);
  }
  return;
}


