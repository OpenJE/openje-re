#include "../include/cls_0x5ab960.h"

void __thiscall cls_0x5ab960::meth_0x5ab960(cls_0x5ab960 *this,void *param_1)

{
  void *this_00;
  DWORD DVar1;
  int iVar2;
  int iVar3;
  uint local_8;
  uint local_4;
  
  this_00 = param_1;
  GameActionEquip::meth_0x45e500((GameActionEquip *)param_1,&this->mbr_0x4158);
  GameActionEquip::meth_0x45e500((GameActionEquip *)this_00,&this->mbr_0x415c);
  this->mbr_0x4160 = *(dword *)((int)this_00 + 0x34);
  GameActionEquip::meth_0x45e500((GameActionEquip *)this_00,&param_1);
  GameActionEquip::meth_0x45e500((GameActionEquip *)this_00,&local_8);
  GameActionEquip::meth_0x45e500((GameActionEquip *)this_00,&local_4);
  if (param_1 != (void *)this->mbr_0x40e0) {
    this->mbr_0x40e0 = (dword)param_1;
    DVar1 = timeGetTime();
    iVar2 = FUN_005b8d00(local_8,DVar1);
    iVar3 = FUN_005b8d00(*(uint *)((int)this_00 + 0x34),DVar1);
    if ((uint)(iVar2 - iVar3) < local_4) {
      iVar2 = 0;
    }
    else {
      iVar2 = (iVar2 - iVar3) - local_4;
    }
    *(int *)(&this->field_0x40e4 + ((uint)param_1 & 0xf) * 4) = iVar2;
  }
  return;
}


