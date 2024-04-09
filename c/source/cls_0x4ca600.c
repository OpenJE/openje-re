#include "../include/cls_0x4ca600.h"

void __thiscall cls_0x4ca600::meth_0x4ca600(cls_0x4ca600 *this)

{
  char cVar1;
  dword dVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  dVar2 = this->mbr_0x0;
  if (*(char *)(dVar2 + 0xb9) == '\0') {
    ppiVar3 = *(int ***)(dVar2 + 8);
    if (*(char *)((int)ppiVar3 + 0xb9) == '\0') {
      cVar1 = *(char *)((int)*ppiVar3 + 0xb9);
      ppiVar4 = (int **)*ppiVar3;
      while (ppiVar5 = ppiVar4, cVar1 == '\0') {
        ppiVar4 = (int **)*ppiVar5;
        cVar1 = *(char *)((int)ppiVar4 + 0xb9);
        ppiVar3 = ppiVar5;
      }
      this->mbr_0x0 = (dword)ppiVar3;
      return;
    }
    dVar2 = *(dword *)(dVar2 + 4);
    cVar1 = *(char *)(dVar2 + 0xb9);
    while ((cVar1 == '\0' && (this->mbr_0x0 == *(dword *)(dVar2 + 8)))) {
      this->mbr_0x0 = dVar2;
      dVar2 = *(dword *)(dVar2 + 4);
      cVar1 = *(char *)(dVar2 + 0xb9);
    }
    this->mbr_0x0 = dVar2;
  }
  return;
}


