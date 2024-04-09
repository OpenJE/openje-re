#include "../include/cls_0x46c350.h"

uint __thiscall cls_0x46c350::meth_0x46c350(cls_0x46c350 *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)this->mbr_0x14;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar2;
  }
  if (puVar2 != (undefined4 *)this->mbr_0x14) {
    while ((iVar1 = puVar2[2], iVar1 == 0 || (*(int *)(iVar1 + 4) != param_1))) {
      puVar2 = (undefined4 *)*puVar2;
      if (puVar2 == (undefined4 *)this->mbr_0x14) {
        return (uint)puVar2 & 0xffffff00;
      }
    }
    puVar2 = (undefined4 *)0x0;
    if (*(int *)(iVar1 + 0xc) == 1) {
      return 1;
    }
  }
  return (uint)puVar2 & 0xffffff00;
}



uint __thiscall cls_0x46c350::meth_0x46c390(cls_0x46c350 *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)this->mbr_0x14;
  if (piVar2 != (int *)0x0) {
    piVar2 = (int *)*piVar2;
  }
  do {
    if (piVar2 == (undefined4 *)this->mbr_0x14) {
LAB_0046c3b7:
      return (uint)piVar2 & 0xffffff00;
    }
    iVar1 = piVar2[2];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 4) == param_1)) {
      if (*(int *)(iVar1 + 0xc) == 2) {
        return CONCAT31((int3)((uint)piVar2 >> 8),1);
      }
      goto LAB_0046c3b7;
    }
    piVar2 = (int *)*piVar2;
  } while( true );
}



undefined4 __thiscall cls_0x46c350::meth_0x46c3d0(cls_0x46c350 *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)this->mbr_0x14;
  if (piVar2 != (int *)0x0) {
    piVar2 = (int *)*piVar2;
  }
  while( true ) {
    if (piVar2 == (undefined4 *)this->mbr_0x14) {
      return 0xffffffff;
    }
    iVar1 = piVar2[2];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 4) == param_1)) break;
    piVar2 = (int *)*piVar2;
  }
  return *(undefined4 *)(iVar1 + 8);
}


