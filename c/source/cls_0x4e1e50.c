#include "../include/cls_0x4e1e50.h"

void __thiscall cls_0x4e1e50::meth_0x4e1e50(cls_0x4e1e50 *this)

{
  char cVar1;
  dword dVar2;
  int **ppiVar3;
  int **ppiVar4;
  
  dVar2 = this->mbr_0x0;
  if (*(char *)(dVar2 + 0x31) == '\0') {
    ppiVar3 = *(int ***)(dVar2 + 8);
    if (*(char *)((int)ppiVar3 + 0x31) == '\0') {
      cVar1 = *(char *)((int)*ppiVar3 + 0x31);
      ppiVar4 = (int **)*ppiVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)((int)*ppiVar4 + 0x31);
        ppiVar3 = ppiVar4;
        ppiVar4 = (int **)*ppiVar4;
      }
      this->mbr_0x0 = (dword)ppiVar3;
      return;
    }
    dVar2 = *(dword *)(dVar2 + 4);
    cVar1 = *(char *)(dVar2 + 0x31);
    while ((cVar1 == '\0' && (this->mbr_0x0 == *(dword *)(dVar2 + 8)))) {
      this->mbr_0x0 = dVar2;
      dVar2 = *(dword *)(dVar2 + 4);
      cVar1 = *(char *)(dVar2 + 0x31);
    }
    this->mbr_0x0 = dVar2;
  }
  return;
}


