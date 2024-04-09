#include "../include/ActionMoveTo.h"

ActionMoveTo * __thiscall ActionMoveTo::ActionMoveTo(ActionMoveTo *this)

{
  this->mbr_0x10 = 1;
  (this->Action).vftptr_0x0 = (Action__vftable_647888 *)&ActionMoveTo__vftable_6940e4_006940e4;
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x1c = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x3d = 0;
  this->mbr_0x30 = 5;
  this->mbr_0x34 = 0;
  this->mbr_0x35 = 0;
  (this->Action).mbr_0x4 = 1;
  this->mbr_0x38 = 0;
  this->mbr_0x3c = 0;
  return this;
}



undefined4 __thiscall ActionMoveTo::virt_meth_0x55b3f0(ActionMoveTo *this)

{
  int *_Memory;
  
  _Memory = (int *)this->mbr_0x18;
  if (_Memory != (int *)0x0) {
    FUN_00562e90(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return 0;
}



ActionMoveTo * __thiscall ActionMoveTo::~ActionMoveTo(ActionMoveTo *this)

{
  int *_Memory;
  int iVar1;
  ActionMoveTo *pAVar2;
  undefined extraout_DL;
  undefined uVar3;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00637fc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->Action).vftptr_0x0 = (Action__vftable_647888 *)&ActionMoveTo__vftable_6940e4_006940e4;
  pAVar2 = (ActionMoveTo *)this->mbr_0x18;
  local_4 = 0;
  if (pAVar2 != (ActionMoveTo *)0x0) {
    if ((pAVar2->Action).vftptr_0x0 == (Action__vftable_647888 *)0x0) {
      iVar1 = FUN_00401150();
      uVar3 = (undefined)this->mbr_0x18;
      iVar1 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 4) + 4 + iVar1) + 100))();
      pAVar2 = (ActionMoveTo *)FUN_00560b10(iVar1,extraout_DL,uVar3);
    }
    _Memory = (int *)this->mbr_0x18;
    if (_Memory != (int *)0x0) {
      FUN_00562e90(_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    this->mbr_0x18 = 0;
  }
  (this->Action).vftptr_0x0 = &Action__vftable_647888_00647888;
  ExceptionList = local_c;
  return pAVar2;
}



undefined4 * __thiscall ActionMoveTo::virt_meth_0x55b5e0(ActionMoveTo *this,byte param_1)

{
  ~ActionMoveTo(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}


#include "../include/ActionMoveTo.h"
