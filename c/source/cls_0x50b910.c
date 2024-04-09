#include "../include/cls_0x50b910.h"

void __thiscall cls_0x50b910::meth_0x50b910(cls_0x50b910 *this,int *param_1)

{
  undefined4 *puVar1;
  dword dVar2;
  
  if (*param_1 == 0) {
    puVar1 = (undefined4 *)param_1[1];
    this->mbr_0x0 = (dword)puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
  }
  else {
    *(int *)(*param_1 + 4) = param_1[1];
  }
  dVar2 = *param_1;
  if ((dword *)param_1[1] != (dword *)0x0) {
    *(dword *)param_1[1] = dVar2;
    return;
  }
  this->mbr_0x4 = dVar2;
  if (dVar2 != 0) {
    *(undefined4 *)(dVar2 + 4) = 0;
  }
  return;
}



void __thiscall cls_0x50b910::meth_0x50b9b0(cls_0x50b910 *this,int *param_1)

{
  int **extraout_ECX;
  
  if (param_1 != (int *)this->mbr_0x0) {
    meth_0x50b910(this,param_1);
    *param_1 = 0;
    param_1[1] = (int)*extraout_ECX;
    **extraout_ECX = (int)param_1;
    *extraout_ECX = param_1;
  }
  return;
}


