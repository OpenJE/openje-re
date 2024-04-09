#include "../include/cls_0x5607a0.h"

void __thiscall cls_0x5607a0::meth_0x5607a0(cls_0x5607a0 *this)

{
  char cVar1;
  dword dVar2;
  int **ppiVar3;
  int **ppiVar4;
  
  dVar2 = this->mbr_0x0;
  if (*(char *)(dVar2 + 0xe) == '\0') {
    ppiVar3 = *(int ***)(dVar2 + 8);
    if (*(char *)((int)ppiVar3 + 0xe) == '\0') {
      cVar1 = *(char *)((int)*ppiVar3 + 0xe);
      ppiVar4 = (int **)*ppiVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)((int)*ppiVar4 + 0xe);
        ppiVar3 = ppiVar4;
        ppiVar4 = (int **)*ppiVar4;
      }
      this->mbr_0x0 = (dword)ppiVar3;
      return;
    }
    dVar2 = *(dword *)(dVar2 + 4);
    cVar1 = *(char *)(dVar2 + 0xe);
    while ((cVar1 == '\0' && (this->mbr_0x0 == *(dword *)(dVar2 + 8)))) {
      this->mbr_0x0 = dVar2;
      dVar2 = *(dword *)(dVar2 + 4);
      cVar1 = *(char *)(dVar2 + 0xe);
    }
    this->mbr_0x0 = dVar2;
  }
  return;
}


