#include "../include/cls_0x4c9020.h"

void __thiscall cls_0x4c9020::meth_0x4c9020(cls_0x4c9020 *this)

{
  char cVar1;
  dword dVar2;
  dword dVar3;
  dword *pdVar4;
  
  pdVar4 = (dword *)this->mbr_0x0;
  if (*(char *)((int)pdVar4 + 0xb9) != '\0') {
    this->mbr_0x0 = pdVar4[2];
    return;
  }
  dVar2 = *pdVar4;
  if (*(char *)(dVar2 + 0xb9) == '\0') {
    cVar1 = *(char *)(*(dword *)(dVar2 + 8) + 0xb9);
    dVar3 = *(dword *)(dVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(dword *)(dVar3 + 8) + 0xb9);
      dVar2 = dVar3;
      dVar3 = *(dword *)(dVar3 + 8);
    }
    this->mbr_0x0 = dVar2;
    return;
  }
  pdVar4 = (dword *)pdVar4[1];
  if (*(char *)((int)pdVar4 + 0xb9) == '\0') {
    do {
      if (this->mbr_0x0 != *pdVar4) break;
      this->mbr_0x0 = (dword)pdVar4;
      pdVar4 = (dword *)pdVar4[1];
    } while (*(char *)((int)pdVar4 + 0xb9) == '\0');
    if (*(char *)((int)pdVar4 + 0xb9) == '\0') {
      this->mbr_0x0 = (dword)pdVar4;
    }
  }
  return;
}

