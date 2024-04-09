#include "../include/Gfx_BasePacketData.h"

Gfx_BasePacketData * __thiscall Gfx_BasePacketData::~Gfx_BasePacketData(Gfx_BasePacketData *this)

{
  int *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062c72b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &Gfx_BasePacketData__vftable_6510c8_006510c8;
  local_4 = 0;
  cls_0x55dc80::meth_0x422710
            ((cls_0x55dc80 *)&this->mbr_0x44,&local_10,*(int ***)(int **)this->mbr_0x48,
             (int **)this->mbr_0x48);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x48);
}



uint __thiscall Gfx_BasePacketData::meth_0x4b7660(Gfx_BasePacketData *this)

{
  uint uVar1;
  dword dVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = this->mbr_0x3c;
  uVar4 = (**(code **)(*DAT_00707ce4 + 0x50))();
  if (uVar1 < uVar4) {
    dVar2 = this->mbr_0x38;
    iVar5 = FUN_00433760(dVar2,*(undefined4 *)(dVar2 + 4),(undefined4 *)&stack0x00000004);
    cls_0x4b7750::meth_0x4b7500((cls_0x4b7750 *)&this->mbr_0x34,1);
    *(int *)(dVar2 + 4) = iVar5;
    piVar3 = *(int **)(iVar5 + 4);
    *piVar3 = iVar5;
    return CONCAT31((int3)((uint)piVar3 >> 8),1);
  }
  return uVar4 & 0xffffff00;
}



Gfx_BasePacketData * __thiscall
Gfx_BasePacketData::Gfx_BasePacketData(Gfx_BasePacketData *this,dword param_1)

{
  dword dVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006326cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &Gfx_BasePacketData__vftable_6510c8_006510c8;
  this->mbr_0xc = param_1;
  this->mbr_0x4 = 0;
  this->mbr_0x18 = 0x3f800000;
  this->mbr_0x1c = 0x3f800000;
  this->mbr_0x20 = 0x3f800000;
  dVar1 = FUN_0056e0b0();
  this->mbr_0x38 = dVar1;
  this->mbr_0x3c = 0;
  this->mbr_0x40 = 0;
  *(undefined *)&this->mbr_0x44 = (undefined)param_1;
  local_4 = 0;
  dVar1 = FUN_0057c2e0();
  this->mbr_0x48 = dVar1;
  *(undefined *)(dVar1 + 0x1d) = 1;
  *(dword *)(this->mbr_0x48 + 4) = this->mbr_0x48;
  *(dword *)this->mbr_0x48 = this->mbr_0x48;
  *(dword *)(this->mbr_0x48 + 8) = this->mbr_0x48;
  this->mbr_0x4c = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0x3f800000;
  this->mbr_0x8 = 0x808080;
  ExceptionList = local_c;
  return this;
}


#include "../include/Gfx_BasePacketData.h"
