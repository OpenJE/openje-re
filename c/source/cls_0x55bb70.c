#include "../include/cls_0x55bb70.h"

void __thiscall cls_0x55bb70::meth_0x55bb70(cls_0x55bb70 *this)

{
  char cVar1;
  dword dVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  dVar2 = this->mbr_0x0;
  if (*(char *)(dVar2 + 0xbd) == '\0') {
    ppiVar3 = *(int ***)(dVar2 + 8);
    if (*(char *)((int)ppiVar3 + 0xbd) == '\0') {
      cVar1 = *(char *)((int)*ppiVar3 + 0xbd);
      ppiVar4 = (int **)*ppiVar3;
      while (ppiVar5 = ppiVar4, cVar1 == '\0') {
        ppiVar4 = (int **)*ppiVar5;
        cVar1 = *(char *)((int)ppiVar4 + 0xbd);
        ppiVar3 = ppiVar5;
      }
      this->mbr_0x0 = (dword)ppiVar3;
      return;
    }
    dVar2 = *(dword *)(dVar2 + 4);
    cVar1 = *(char *)(dVar2 + 0xbd);
    while ((cVar1 == '\0' && (this->mbr_0x0 == *(dword *)(dVar2 + 8)))) {
      this->mbr_0x0 = dVar2;
      dVar2 = *(dword *)(dVar2 + 4);
      cVar1 = *(char *)(dVar2 + 0xbd);
    }
    this->mbr_0x0 = dVar2;
  }
  return;
}


