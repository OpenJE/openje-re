#include "../include/cls_0x4b6a00.h"

void __thiscall cls_0x4b6a00::meth_0x4b6a00(cls_0x4b6a00 *this)

{
  int **ppiVar1;
  cls_0x515040 *this_00;
  undefined4 *puVar2;
  int *piVar3;
  uint unaff_retaddr;
  int *local_11c;
  dword *local_118;
  cls_0x4b6a00 *local_114;
  char local_110 [256];
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063262c;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  local_114 = this;
  FUN_00616d8c(local_110,(byte *)"GUI memory -> %d total blocks of size %d\n");
  OutputDebugStringA(local_110);
  FUN_00616d8c(local_110,(byte *)"              %d total mesh objects allocated\n");
  OutputDebugStringA(local_110);
  puVar2 = (undefined4 *)this->mbr_0x14;
  local_118 = &this->mbr_0x10;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar2;
  }
  if (puVar2 != (undefined4 *)this->mbr_0x14) {
    do {
      if ((void *)puVar2[2] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free((void *)puVar2[2]);
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)this->mbr_0x14);
  }
  ppiVar1 = (int **)this->mbr_0x14;
  if (ppiVar1 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)local_118,&local_11c,piVar3,(int *)ppiVar1);
  puVar2 = (undefined4 *)this->mbr_0x20;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar2;
  }
  if (puVar2 != (undefined4 *)this->mbr_0x20) {
    do {
      this_00 = (cls_0x515040 *)puVar2[2];
      if (this_00 != (cls_0x515040 *)0x0) {
        cls_0x515040::meth_0x4b6670(this_00);
                    /* WARNING: Subroutine does not return */
        _free(this_00);
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)this->mbr_0x20);
  }
  ppiVar1 = (int **)this->mbr_0x20;
  if (ppiVar1 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0x1c,&local_11c,piVar3,(int *)ppiVar1);
  ppiVar1 = (int **)this->mbr_0x20;
  if (ppiVar1 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0x1c,&local_11c,piVar3,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x20);
}


