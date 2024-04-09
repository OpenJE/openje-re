#include "../include/cls_0x4b3690.h"

void __thiscall cls_0x4b3690::meth_0x4b3690(cls_0x4b3690 *this)

{
  int **ppiVar1;
  GameActionOperateContainer *this_00;
  char cVar2;
  int *piVar3;
  dword dVar4;
  cls_0x4b3690 *pcStack_4;
  
  pcStack_4 = this;
  FUN_004b6450((int *)this->mbr_0xb0);
  cls_0x4b61d0::meth_0x4b61d0((cls_0x4b61d0 *)this->mbr_0xb4);
  if (this->mbr_0x8c != 0) {
    (**(code **)(*DAT_00707ce4 + 0x9c))(this->mbr_0x8c);
    dVar4 = this->mbr_0x8c;
    *(undefined *)(dVar4 + 0x1c) = 1;
    FUN_004948a0(*(void **)(dVar4 + 0x164),(int **)(dVar4 + 600),1);
  }
  if ((int **)this->mbr_0x98 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *(int **)this->mbr_0x98;
  }
  if (piVar3 != (int *)this->mbr_0x98) {
    do {
      if (piVar3[2] != 0) {
        (**(code **)(*DAT_00707ce4 + 0x9c))(piVar3[2]);
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)this->mbr_0x98);
  }
  ppiVar1 = (int **)this->mbr_0x98;
  if (ppiVar1 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->mbr_0x94,(int **)&pcStack_4,piVar3,(int *)ppiVar1);
  dVar4 = *(dword *)(this->mbr_0x20 + 4);
  if (dVar4 != this->mbr_0x20) {
    do {
      this_00 = *(GameActionOperateContainer **)(dVar4 + 8);
      cVar2 = GameActionOperateContainer::Get_mbr_0x20(this_00);
      if (cVar2 == '\0') {
        GameActionOperateContainer::meth_0x495380(this_00);
      }
      dVar4 = *(dword *)(dVar4 + 4);
    } while (dVar4 != this->mbr_0x20);
  }
  FUN_004b7140((void *)this->mbr_0xb0);
  return;
}


