#include "../include/Video.h"

void __thiscall Video::meth_0x5b4fc0(Video *this)

{
  dword dVar1;
  int **ppiVar2;
  cls_0x4d8d70 *this_00;
  int *piVar3;
  undefined4 *puVar4;
  int **_Memory;
  
  if (this->mbr_0x4 != 0) {
    _BinkClose_4(this->mbr_0x4);
    this->mbr_0x4 = 0;
  }
  dVar1 = this->mbr_0x28;
  while( true ) {
    if (dVar1 == 0) {
      if (this->mbr_0x8 != 0) {
        (**(code **)(*DAT_00707ce4 + 0xd0))(this->mbr_0x8);
        this->mbr_0x8 = 0;
      }
      piVar3 = (int *)this->mbr_0xc;
      if (piVar3 != (int *)0x0) {
        (***(code ***)(*(int *)(*piVar3 + 4) + (int)piVar3))(1);
        this->mbr_0xc = 0;
      }
      return;
    }
    puVar4 = (undefined4 *)this->mbr_0x24;
    if (puVar4 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)*puVar4;
    }
    ppiVar2 = (int **)this->mbr_0x24;
    this_00 = (cls_0x4d8d70 *)puVar4[2];
    if (ppiVar2 == (int **)0x0) {
      _Memory = (int **)0x0;
    }
    else {
      _Memory = (int **)*ppiVar2;
    }
    if (_Memory != ppiVar2) break;
    if (this_00 != (cls_0x4d8d70 *)0x0) {
      cls_0x4d8d70::meth_0x4b2dd0(this_00);
                    /* WARNING: Subroutine does not return */
      _free(this_00);
    }
    dVar1 = this->mbr_0x28;
  }
  *_Memory[1] = (int)*_Memory;
  (*_Memory)[1] = (int)_Memory[1];
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



Video * __thiscall Video::Video(Video *this)

{
  int **ppiVar1;
  dword dVar2;
  int *piVar3;
  Video *local_4;
  
  this->vftptr_0x0 = &Video__vftable_6ac0a8_006ac0a8;
  local_4 = this;
  dVar2 = FUN_0056e0b0();
  this->mbr_0x24 = dVar2;
  piVar3 = (int *)0x0;
  this->mbr_0x28 = 0;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0;
  ppiVar1 = (int **)this->mbr_0x24;
  if (ppiVar1 != (int **)0x0) {
    piVar3 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0x20,(int **)&local_4,piVar3,(int *)ppiVar1)
  ;
  return this;
}



Video * __thiscall Video::~Video(Video *this)

{
  int **ppiVar1;
  int *piVar2;
  Video *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063b84b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &Video__vftable_6ac0a8_006ac0a8;
  local_4 = 0;
  local_10 = this;
  thunk_FUN_0056af30();
  meth_0x5b4fc0(this);
  ppiVar1 = (int **)this->mbr_0x24;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->mbr_0x20,(int **)&local_10,piVar2,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x24);
}



int * __thiscall Video::virt_meth_0x5b5150(Video *this,byte param_1)

{
  ~Video(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}


#include "../include/Video.h"
