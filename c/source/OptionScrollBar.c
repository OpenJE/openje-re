#include "../include/OptionScrollBar.h"

OptionScrollBar * __thiscall OptionScrollBar::OptionScrollBar(OptionScrollBar *this)

{
  ScrollBar *pSVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e99b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &OptionScrollBar__vftable_65903c_0065903c;
  pSVar1 = (ScrollBar *)operator_new(0x68);
  local_4 = 0;
  if (pSVar1 == (ScrollBar *)0x0) {
    pSVar1 = (ScrollBar *)0x0;
  }
  else {
    pSVar1 = GUI::ScrollBar::ScrollBar(pSVar1);
  }
  local_4 = 0xffffffff;
  this->mbr_0x4 = (dword)pSVar1;
  GUI::ScrollBar::meth_0x59c2c0(pSVar1,1);
  GUI::ScrollBar::meth_0x4b8ac0((ScrollBar *)this->mbr_0x4,1);
  GUI::ScrollBar::meth_0x4b8aa0((ScrollBar *)this->mbr_0x4,0x2f);
  GUI::ScrollBar::meth_0x568420((ScrollBar *)this->mbr_0x4,1);
  GUI::ScrollBar::meth_0x4b87d0((ScrollBar *)this->mbr_0x4,1);
  ExceptionList = local_c;
  return this;
}



OptionScrollBar * __thiscall OptionScrollBar::~OptionScrollBar(OptionScrollBar *this)

{
  OptionScrollBar *in_EAX;
  
  this->vftptr_0x0 = &OptionScrollBar__vftable_65903c_0065903c;
  if ((undefined4 *)this->mbr_0x4 != (undefined4 *)0x0) {
    in_EAX = (OptionScrollBar *)(***(code ***)(undefined4 *)this->mbr_0x4)(1);
    this->mbr_0x4 = 0;
  }
  return in_EAX;
}



undefined4 * __thiscall OptionScrollBar::virt_meth_0x443550(OptionScrollBar *this,byte param_1)

{
  ~OptionScrollBar(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}


#include "../include/OptionScrollBar.h"
