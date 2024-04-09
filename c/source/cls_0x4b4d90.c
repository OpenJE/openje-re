#include "../include/cls_0x4b4d90.h"

void __thiscall cls_0x4b4d90::meth_0x4b4d90(cls_0x4b4d90 *this,undefined param_1,undefined param_2)

{
  dword dVar1;
  int iVar2;
  
  dVar1 = this->mbr_0x98;
  iVar2 = FUN_00433760(dVar1,*(undefined4 *)(dVar1 + 4),(undefined4 *)&param_1);
  cls_0x4b3a10::meth_0x4b3a10((cls_0x4b3a10 *)&this->mbr_0x94,1);
  *(int *)(dVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


