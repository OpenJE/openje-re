#include "../include/cls_0x41d550.h"

void __thiscall cls_0x41d550::meth_0x41d550(cls_0x41d550 *this)

{
  char cVar1;
  dword dVar2;
  int **ppiVar3;
  int **ppiVar4;
  
  dVar2 = this->mbr_0x0;
  if (*(char *)(dVar2 + 0x21) == '\0') {
    ppiVar3 = *(int ***)(dVar2 + 8);
    if (*(char *)((int)ppiVar3 + 0x21) == '\0') {
      cVar1 = *(char *)((int)*ppiVar3 + 0x21);
      ppiVar4 = (int **)*ppiVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)((int)*ppiVar4 + 0x21);
        ppiVar3 = ppiVar4;
        ppiVar4 = (int **)*ppiVar4;
      }
      this->mbr_0x0 = (dword)ppiVar3;
      return;
    }
    dVar2 = *(dword *)(dVar2 + 4);
    cVar1 = *(char *)(dVar2 + 0x21);
    while ((cVar1 == '\0' && (this->mbr_0x0 == *(dword *)(dVar2 + 8)))) {
      this->mbr_0x0 = dVar2;
      dVar2 = *(dword *)(dVar2 + 4);
      cVar1 = *(char *)(dVar2 + 0x21);
    }
    this->mbr_0x0 = dVar2;
  }
  return;
}



void __thiscall cls_0x41d550::meth_0x4c8eb0(cls_0x41d550 *this)

{
  char cVar1;
  dword dVar2;
  int **ppiVar3;
  int **ppiVar4;
  
  dVar2 = this->mbr_0x0;
  if (*(char *)(dVar2 + 0x2d) == '\0') {
    ppiVar3 = *(int ***)(dVar2 + 8);
    if (*(char *)((int)ppiVar3 + 0x2d) == '\0') {
      cVar1 = *(char *)((int)*ppiVar3 + 0x2d);
      ppiVar4 = (int **)*ppiVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)((int)*ppiVar4 + 0x2d);
        ppiVar3 = ppiVar4;
        ppiVar4 = (int **)*ppiVar4;
      }
      this->mbr_0x0 = (dword)ppiVar3;
      return;
    }
    dVar2 = *(dword *)(dVar2 + 4);
    cVar1 = *(char *)(dVar2 + 0x2d);
    while ((cVar1 == '\0' && (this->mbr_0x0 == *(dword *)(dVar2 + 8)))) {
      this->mbr_0x0 = dVar2;
      dVar2 = *(dword *)(dVar2 + 4);
      cVar1 = *(char *)(dVar2 + 0x2d);
    }
    this->mbr_0x0 = dVar2;
  }
  return;
}



void __thiscall cls_0x41d550::meth_0x56a0a0(cls_0x41d550 *this)

{
  char cVar1;
  dword dVar2;
  int **ppiVar3;
  int **ppiVar4;
  
  dVar2 = this->mbr_0x0;
  if (*(char *)(dVar2 + 0x29) == '\0') {
    ppiVar3 = *(int ***)(dVar2 + 8);
    if (*(char *)((int)ppiVar3 + 0x29) == '\0') {
      cVar1 = *(char *)((int)*ppiVar3 + 0x29);
      ppiVar4 = (int **)*ppiVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)((int)*ppiVar4 + 0x29);
        ppiVar3 = ppiVar4;
        ppiVar4 = (int **)*ppiVar4;
      }
      this->mbr_0x0 = (dword)ppiVar3;
      return;
    }
    dVar2 = *(dword *)(dVar2 + 4);
    cVar1 = *(char *)(dVar2 + 0x29);
    while ((cVar1 == '\0' && (this->mbr_0x0 == *(dword *)(dVar2 + 8)))) {
      this->mbr_0x0 = dVar2;
      dVar2 = *(dword *)(dVar2 + 4);
      cVar1 = *(char *)(dVar2 + 0x29);
    }
    this->mbr_0x0 = dVar2;
  }
  return;
}


