#include "../include/cls_0x56d1a0.h"

void __thiscall cls_0x56d1a0::meth_0x56d1a0(cls_0x56d1a0 *this)

{
  char cVar1;
  dword dVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  dVar2 = this->mbr_0x0;
  if (*(char *)(dVar2 + 0xdd) == '\0') {
    ppiVar3 = *(int ***)(dVar2 + 8);
    if (*(char *)((int)ppiVar3 + 0xdd) == '\0') {
      cVar1 = *(char *)((int)*ppiVar3 + 0xdd);
      ppiVar4 = (int **)*ppiVar3;
      while (ppiVar5 = ppiVar4, cVar1 == '\0') {
        ppiVar4 = (int **)*ppiVar5;
        cVar1 = *(char *)((int)ppiVar4 + 0xdd);
        ppiVar3 = ppiVar5;
      }
      this->mbr_0x0 = (dword)ppiVar3;
      return;
    }
    dVar2 = *(dword *)(dVar2 + 4);
    cVar1 = *(char *)(dVar2 + 0xdd);
    while ((cVar1 == '\0' && (this->mbr_0x0 == *(dword *)(dVar2 + 8)))) {
      this->mbr_0x0 = dVar2;
      dVar2 = *(dword *)(dVar2 + 4);
      cVar1 = *(char *)(dVar2 + 0xdd);
    }
    this->mbr_0x0 = dVar2;
  }
  return;
}


