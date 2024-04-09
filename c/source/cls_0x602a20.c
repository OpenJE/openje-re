#include "../include/cls_0x602a20.h"

void __thiscall cls_0x602a20::meth_0x602a20(cls_0x602a20 *this)

{
  uint uVar1;
  dword *pdVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  uVar1 = (uint)this->mbr_0xa4 + (uint)this->mbr_0xa0 + (uint)this->mbr_0x9c + (uint)this->mbr_0x98
          + (uint)this->mbr_0x94 + (uint)this->mbr_0x90 + (uint)this->mbr_0x8c;
  pdVar2 = &this->mbr_0xa8;
  iVar4 = 0x79;
  do {
    uVar3 = uVar3 + *(ushort *)pdVar2;
    pdVar2 = pdVar2 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  pdVar2 = &this->mbr_0x28c;
  iVar4 = 0x80;
  do {
    uVar1 = uVar1 + *(ushort *)pdVar2;
    pdVar2 = pdVar2 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  this->mbr_0x1c = 1 - (uVar3 >> 2 < uVar1);
  return;
}


