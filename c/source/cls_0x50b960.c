#include "../include/cls_0x50b960.h"

int ** __thiscall cls_0x50b960::meth_0x50b960(cls_0x50b960 *this,int *param_1)

{
  dword dVar1;
  int **ppiVar2;
  
  ppiVar2 = (int **)operator_new(0xc);
  if (ppiVar2 == (int **)0x0) {
    return (int **)0x0;
  }
  ppiVar2[2] = param_1;
  dVar1 = this->mbr_0x0;
  ppiVar2[1] = (int *)0x0;
  if (dVar1 == 0) {
    *ppiVar2 = (int *)0x0;
    this->mbr_0x0 = (dword)ppiVar2;
    this->mbr_0x4 = (dword)ppiVar2;
    return ppiVar2;
  }
  *(int ***)(this->mbr_0x4 + 4) = ppiVar2;
  *ppiVar2 = (int *)this->mbr_0x4;
  this->mbr_0x4 = (dword)ppiVar2;
  return ppiVar2;
}


