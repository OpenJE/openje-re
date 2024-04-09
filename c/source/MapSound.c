#include "../include/MapSound.h"

void __thiscall MapSound::meth_0x5b29d0(MapSound *this)

{
  Gregorian *this_00;
  
  this_00 = (Gregorian *)this->mbr_0x4c;
  if (this_00 != (Gregorian *)0x0) {
    Gregorian::meth_0x52d100(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  return;
}



void __thiscall MapSound::meth_0x5b2a00(MapSound *this)

{
  cls_0x52e2e0 *pcVar1;
  dword *pdVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b59b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  meth_0x5b29d0(this);
  if (this->mbr_0x40 != 0) {
    pcVar1 = (cls_0x52e2e0 *)operator_new(0x44);
    local_4 = 0;
    if (pcVar1 == (cls_0x52e2e0 *)0x0) {
      pcVar1 = (cls_0x52e2e0 *)0x0;
    }
    else {
      pcVar1 = cls_0x52e2e0::cls_0x52e2e0(pcVar1);
    }
    this->mbr_0x4c = (dword)pcVar1;
    local_4 = 0xffffffff;
    if (this->mbr_0x44 < 0x10) {
      pdVar2 = &this->mbr_0x30;
    }
    else {
      pdVar2 = (dword *)this->mbr_0x30;
    }
    cls_0x52e2e0::meth_0x52d820(pcVar1,pdVar2,(int *)0x0,(undefined4 *)0x0);
    *(undefined *)(this->mbr_0x4c + 0x34) = 1;
    Gregorian::meth_0x52c350
              ((Gregorian *)this->mbr_0x4c,this->mbr_0x20,this->mbr_0x24,this->mbr_0x28);
  }
  ExceptionList = local_c;
  return;
}



MapSound * __thiscall MapSound::MapSound(MapSound *this)

{
  this->vftptr_0x0 = &MapSound__vftable_6aaa7c_006aaa7c;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0xf;
  *(undefined *)&this->mbr_0x8 = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x44 = 0xf;
  this->mbr_0x40 = 0;
  *(undefined *)&this->mbr_0x30 = 0;
  this->mbr_0x48 = 1;
  this->mbr_0x49 = 1;
  this->mbr_0x4c = 0;
  return this;
}



MapSound * __thiscall MapSound::~MapSound(MapSound *this)

{
  MapSound *pMVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063b5c6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &MapSound__vftable_6aaa7c_006aaa7c;
  local_4 = 1;
  pMVar1 = (MapSound *)meth_0x5b29d0(this);
  if (0xf < this->mbr_0x44) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x30);
  }
  this->mbr_0x44 = 0xf;
  this->mbr_0x40 = 0;
  *(undefined *)&this->mbr_0x30 = 0;
  if (0xf < this->mbr_0x1c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x8);
  }
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0xf;
  *(undefined *)&this->mbr_0x8 = 0;
  ExceptionList = local_c;
  return pMVar1;
}



undefined4 * __thiscall MapSound::virt_meth_0x5b2b80(MapSound *this,byte param_1)

{
  ~MapSound(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}


#include "../include/MapSound.h"
