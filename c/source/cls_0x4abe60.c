#include "../include/cls_0x4abe60.h"

cls_0x4abe60 * __thiscall cls_0x4abe60::cls_0x4abe60(cls_0x4abe60 *this)

{
  this->mbr_0x0 = 0;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  return this;
}



void __thiscall cls_0x4abe60::meth_0x4abe80(cls_0x4abe60 *this)

{
  this->mbr_0x0 = 0;
  this->mbr_0x8 = 0;
  if ((void *)this->mbr_0xc != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xc);
  }
  if ((void *)this->mbr_0x10 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x10);
  }
  if ((void *)this->mbr_0x14 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x14);
  }
  return;
}



void __thiscall cls_0x4abe60::meth_0x4ac240(cls_0x4abe60 *this,uint param_1)

{
  void *pvVar1;
  
  if (param_1 != 0) {
    if ((this->mbr_0xc != 0) || (this->mbr_0x10 != 0)) {
      meth_0x4abe80(this);
    }
    this->mbr_0x0 = param_1;
    this->mbr_0x4 = param_1 * 0x12;
    pvVar1 = operator_new(param_1 * 0x24);
    this->mbr_0xc = (dword)pvVar1;
    pvVar1 = operator_new(param_1);
    this->mbr_0x10 = (dword)pvVar1;
    pvVar1 = operator_new(this->mbr_0x4 * 0xc);
    this->mbr_0x14 = (dword)pvVar1;
    DialogueManager::CommandAttackModeSelect((DialogueManager *)this);
  }
  return;
}


