#include "../include/cls_0x4b74a0.h"

dword __thiscall cls_0x4b74a0::meth_0x4b74a0(cls_0x4b74a0 *this,undefined param_1,undefined param_2)

{
  cls_0x4b74a0 *local_4;
  
  local_4 = this;
  cls_0x55dc80::meth_0x51f080((cls_0x55dc80 *)&this->mbr_0x44,(int *)&local_4,(uint *)&param_1);
  if (local_4 != (cls_0x4b74a0 *)this->mbr_0x48) {
    return local_4->mbr_0x18;
  }
  return 0;
}



int __thiscall cls_0x4b74a0::meth_0x4b74d0(cls_0x4b74a0 *this,undefined param_1,undefined param_2)

{
  cls_0x4b74a0 *local_4;
  
  local_4 = this;
  cls_0x55dc80::meth_0x51f080((cls_0x55dc80 *)&this->mbr_0x44,(int *)&local_4,(uint *)&param_1);
  if (local_4 != (cls_0x4b74a0 *)this->mbr_0x48) {
    return (int)&local_4->field_0x10;
  }
  return 0;
}



uint __thiscall cls_0x4b74a0::meth_0x4b8050(cls_0x4b74a0 *this,undefined4 param_1,int *param_2)

{
  dword dVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  cls_0x4b7750 *this_00;
  int iVar5;
  undefined1 unaff_DI;
  
  piVar2 = DAT_00707ce4;
  uVar3 = meth_0x4b74a0(this,(char)param_2,unaff_DI);
  uVar4 = (**(code **)(*piVar2 + 0x50))();
  if (uVar3 < uVar4) {
    this_00 = (cls_0x4b7750 *)cls_0x55dc80::meth_0x4b7f70((cls_0x55dc80 *)&this->mbr_0x44,&param_2);
    dVar1 = this_00->mbr_0x4;
    iVar5 = FUN_00433760(dVar1,*(undefined4 *)(dVar1 + 4),&param_1);
    cls_0x4b7750::meth_0x4b7500(this_00,1);
    *(int *)(dVar1 + 4) = iVar5;
    piVar2 = *(int **)(iVar5 + 4);
    *piVar2 = iVar5;
    this->mbr_0x40 = 1;
    return CONCAT31((int3)((uint)piVar2 >> 8),1);
  }
  this->mbr_0x40 = 1;
  return uVar4 & 0xffffff00;
}


