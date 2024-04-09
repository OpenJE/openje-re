#include "../include/CursorManager.h"

void __thiscall CursorManager::meth_0x5916a0(CursorManager *this)

{
  this->vftptr_0x0 = &CursorManager__vftable_69e774_0069e774;
  GameCursorManager::virt_meth_0x5915d0((GameCursorManager *)this);
  if (0xf < this->mbr_0x2c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x18);
  }
  this->mbr_0x2c = 0xf;
  this->mbr_0x28 = 0;
  *(undefined *)&this->mbr_0x18 = 0;
  return;
}



undefined4 * __thiscall CursorManager::virt_meth_0x5916e0(CursorManager *this,byte param_1)

{
  meth_0x5916a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}



CursorManager * __thiscall CursorManager::CursorManager(CursorManager *this)

{
  char *pcVar1;
  char *pcVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063a03b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &CursorManager__vftable_69e774_0069e774;
  this->mbr_0x2c = 0xf;
  this->mbr_0x28 = 0;
  *(undefined *)&this->mbr_0x18 = 0;
  local_4 = 0;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  pcVar1 = "";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&this->mbr_0x14,"",(uint)(pcVar2 + -0x64d7d8));
  ExceptionList = local_c;
  return this;
}


#include "../include/CursorManager.h"
