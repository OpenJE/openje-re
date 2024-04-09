#include "../include/cls_0x50b560.h"

int __thiscall cls_0x50b560::meth_0x50b560(cls_0x50b560 *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  dword dVar4;
  
  if (this->mbr_0x14 == 0) {
    dVar4 = this->mbr_0x0;
    if (dVar4 != 0xffffffff) {
      this->mbr_0x0 = dVar4 + 1;
      return dVar4;
    }
    iVar3 = 0;
  }
  else {
    iVar3 = this->mbr_0x14 + this->mbr_0x10 + -1;
    uVar2 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
    iVar1 = uVar2 * -4;
    if (this->mbr_0xc <= uVar2) {
      uVar2 = uVar2 - this->mbr_0xc;
    }
    iVar3 = *(int *)(*(int *)(this->mbr_0x8 + uVar2 * 4) + (iVar3 + iVar1) * 4);
    if (this->mbr_0x14 != 0) {
      dVar4 = this->mbr_0x14 - 1;
      this->mbr_0x14 = dVar4;
      if (dVar4 == 0) {
        this->mbr_0x10 = 0;
        return iVar3;
      }
    }
  }
  return iVar3;
}



int * __thiscall cls_0x50b560::meth_0x50b660(cls_0x50b560 *this,undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int *local_10;
  undefined4 local_c;
  undefined4 local_8 [2];
  
  piVar1 = (int *)meth_0x50b560(this);
  if (piVar1 != (int *)0x0) {
    local_c = 0;
    local_10 = piVar1;
    piVar2 = (int *)cls_0x50dbb0::meth_0x492ac0((cls_0x50dbb0 *)&this->mbr_0x18,local_8,&local_10);
    *(undefined4 *)(*piVar2 + 0x10) = param_1;
  }
  return piVar1;
}



int * __thiscall cls_0x50b560::meth_0x5cb2a0(cls_0x50b560 *this,int **param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  int *piVar3;
  int *piVar4;
  int *local_10;
  undefined4 local_c;
  undefined4 local_8 [2];
  
  ppiVar2 = param_1;
  ppiVar1 = (int **)*param_1;
  if (ppiVar1 == (int **)0x0) {
    piVar3 = (int *)meth_0x50b560(this);
    local_c = 0;
    local_10 = piVar3;
    piVar4 = (int *)cls_0x50dbb0::meth_0x5cb1b0((cls_0x50dbb0 *)&this->mbr_0x18,local_8,&local_10);
    *(int ***)(*piVar4 + 0x10) = ppiVar2;
    *ppiVar2 = piVar3;
    return piVar3;
  }
  param_1 = ppiVar1;
  cls_0x50dbb0::meth_0x51f0f0((cls_0x50dbb0 *)&this->mbr_0x18,(int *)&local_10,(uint *)&param_1);
  if (local_10 != (int *)this->mbr_0x1c) {
    if ((int **)local_10[4] != ppiVar2) {
      return (int *)0x0;
    }
    return (int *)ppiVar1;
  }
  piVar3 = (int *)meth_0x50b560(this);
  local_c = 0;
  local_10 = piVar3;
  piVar4 = (int *)cls_0x50dbb0::meth_0x5cb1b0((cls_0x50dbb0 *)&this->mbr_0x18,local_8,&local_10);
  *(int ***)(*piVar4 + 0x10) = ppiVar2;
  *ppiVar2 = piVar3;
  return piVar3;
}


