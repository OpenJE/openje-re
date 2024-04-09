#include "../include/cls_0x560460.h"

int __thiscall cls_0x560460::meth_0x560460(cls_0x560460 *this)

{
  uint uVar1;
  
  uVar1 = this->mbr_0x40;
  if (9999 < uVar1) {
    return 0;
  }
  this->mbr_0x40 = uVar1 + 1;
  return this->mbr_0x3c + uVar1 * 0x18;
}



int ** __thiscall cls_0x560460::meth_0x562f90(cls_0x560460 *this,int **param_1,int *param_2)

{
  cls_0x560a00 *this_00;
  int **ppiVar1;
  int **ppiVar2;
  dword **local_c;
  dword *local_8;
  int **local_4;
  
  this_00 = (cls_0x560a00 *)this->mbr_0x48;
  cls_0x560a00::meth_0x560a00(this_00,&local_c,(int *)&param_1);
  ppiVar1 = param_1;
  if (local_c == (dword **)this_00->mbr_0x8) {
    ppiVar2 = (int **)meth_0x560460(this);
    if (ppiVar2 == (int **)0x0) {
      return (int **)0x0;
    }
    ppiVar2[1] = param_2;
    ppiVar2[2] = (int *)0x0;
    *(undefined *)(ppiVar2 + 5) = 0;
    *(undefined *)((int)ppiVar2 + 0x15) = 0;
    *ppiVar2 = (int *)param_1;
    local_c = (dword **)param_1;
  }
  else {
    for (; local_c != (dword **)local_8; local_c = (dword **)*local_c) {
      if (((int **)local_c[2] == param_1) && (local_c[3] == (dword *)param_2)) {
        return (int **)local_c[4];
      }
    }
    ppiVar2 = (int **)meth_0x560460(this);
    if (ppiVar2 == (int **)0x0) {
      return (int **)0x0;
    }
    ppiVar2[2] = (int *)0x0;
    *(undefined *)(ppiVar2 + 5) = 0;
    *(undefined *)((int)ppiVar2 + 0x15) = 0;
    ppiVar2[1] = param_2;
    *ppiVar2 = (int *)ppiVar1;
    local_c = (dword **)ppiVar1;
  }
  ppiVar2[4] = (int *)0x7fffffff;
  ppiVar2[3] = (int *)0x7fffffff;
  local_8 = (dword *)param_2;
  local_4 = ppiVar2;
  cls_0x560a00::meth_0x562c40((cls_0x560a00 *)this->mbr_0x48,&param_1,(int *)&local_c);
  return ppiVar2;
}


