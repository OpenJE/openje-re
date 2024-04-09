#include "../include/ReplyLabel.h"

ReplyLabel * __thiscall ReplyLabel::ReplyLabel(ReplyLabel *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063a0c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GUI::Label::Label(&this->Label,3);
  local_4 = 0;
  (this->Label).Window.Base.vftptr_0x0 =
       (Base__vftable_66e41c *)&ReplyLabel__vftable_69ebcc_0069ebcc;
  *(undefined ***)&(this->Label).Window.Base.field_0x18 = &PTR_virt_meth_0x591f40_0069ebc4;
  this->mbr_0xe68 = 0;
  this->mbr_0xe64 = 0xffffffff;
  GUI::Window::virt_meth_0x4af4d0((Window *)this,0);
  ExceptionList = local_c;
  return this;
}



ReplyLabel * __thiscall ReplyLabel::~ReplyLabel(ReplyLabel *this)

{
  ReplyLabel *pRVar1;
  
  (this->Label).Window.Base.vftptr_0x0 =
       (Base__vftable_66e41c *)&ReplyLabel__vftable_69ebcc_0069ebcc;
  *(undefined ***)&(this->Label).Window.Base.field_0x18 = &PTR_virt_meth_0x591f40_0069ebc4;
  pRVar1 = (ReplyLabel *)GUI::Label::~Label(&this->Label);
  return pRVar1;
}



int * __thiscall ReplyLabel::virt_meth_0x591f50(ReplyLabel *this,byte param_1)

{
  ~ReplyLabel(this);
  if ((param_1 & 1) != 0) {
    FUN_004a7540((int *)this);
  }
  return (int *)this;
}


#include "../include/ReplyLabel.h"
