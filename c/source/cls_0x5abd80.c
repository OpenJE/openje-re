#include "../include/cls_0x5abd80.h"

cls_0x5abd80 * __thiscall cls_0x5abd80::cls_0x5abd80(cls_0x5abd80 *this)

{
  dword *pdVar1;
  int iVar2;
  
  iVar2 = 3;
  pdVar1 = &this->mbr_0x4c;
  do {
    *pdVar1 = 0;
    pdVar1[1] = 0;
    pdVar1[2] = 0;
    pdVar1[3] = 0;
    pdVar1 = pdVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  this->mbr_0x0 = 0;
  this->mbr_0x4 = 0;
  pdVar1 = &this->mbr_0x8;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pdVar1 = 0;
    pdVar1 = pdVar1 + 1;
  }
  this->mbr_0x48 = 0;
  this->mbr_0x4c = 0;
  this->mbr_0x50 = 0;
  this->mbr_0x54 = 0;
  this->mbr_0x58 = 0;
  this->mbr_0x5c = 0;
  this->mbr_0x60 = 0;
  this->mbr_0x64 = 0;
  this->mbr_0x68 = 0;
  this->mbr_0x6c = 0;
  this->mbr_0x70 = 0;
  this->mbr_0x74 = 0;
  this->mbr_0x78 = 0;
  return this;
}


