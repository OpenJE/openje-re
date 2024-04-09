#include "../include/cls_0x495af0.h"

void __thiscall cls_0x495af0::meth_0x495af0(cls_0x495af0 *this)

{
  int **ppiVar1;
  int **ppiVar2;
  int *piVar3;
  int **ppiVar4;
  undefined4 *puVar5;
  
  if (1 < this->mbr_0x8) {
    ppiVar1 = (int **)this->mbr_0x4;
    ppiVar4 = ppiVar1;
    if (ppiVar1 != (int **)0x0) {
      ppiVar4 = (int **)*ppiVar1;
    }
    ppiVar4 = (int **)*ppiVar4;
    while (ppiVar4 != ppiVar1) {
      puVar5 = (undefined4 *)this->mbr_0x4;
      ppiVar2 = (int **)*ppiVar4;
      if (puVar5 != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)*puVar5;
      }
      *ppiVar4[1] = (int)ppiVar2;
      *ppiVar2[1] = (int)puVar5;
      *(int ***)puVar5[1] = ppiVar4;
      piVar3 = (int *)puVar5[1];
      puVar5[1] = ppiVar2[1];
      ppiVar2[1] = ppiVar4[1];
      ppiVar4[1] = piVar3;
      ppiVar4 = ppiVar2;
    }
  }
  return;
}


