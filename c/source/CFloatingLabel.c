#include "../include/CFloatingLabel.h"

CFloatingLabel * __thiscall CFloatingLabel::CFloatingLabel(CFloatingLabel *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639e98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GUI::Label::Label(&this->Label,3);
  local_4 = 0;
  (this->Label).Window.Base.vftptr_0x0 =
       (Base__vftable_66e41c *)&CFloatingLabel__vftable_69dcc4_0069dcc4;
  *(undefined ***)&(this->Label).Window.Base.field_0x18 = &PTR_virt_meth_0x58fc60_0069dcbc;
  GUI::Window::Window((Window *)&this->field_0xe80,0);
  this->mbr_0xe64 = 0;
  this->mbr_0xe68 = 0;
  this->mbr_0xe6c = 0;
  this->mbr_0xe70 = 0;
  this->mbr_0xe74 = 0;
  this->mbr_0xe78 = 0;
  this->mbr_0xe7c = 0;
  this->field_0x1b9c = 0xb4;
  ExceptionList = local_c;
  return this;
}



CFloatingLabel * __thiscall CFloatingLabel::~CFloatingLabel(CFloatingLabel *this)

{
  CFloatingLabel *pCVar1;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00639e98;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->Label).Window.Base.vftptr_0x0 =
       (Base__vftable_66e41c *)&CFloatingLabel__vftable_69dcc4_0069dcc4;
  *(undefined ***)&(this->Label).Window.Base.field_0x18 = &PTR_virt_meth_0x58fc60_0069dcbc;
  local_4 = 0;
  GUI::Label::meth_0x4b0a50((Label *)&this->field_0xe80);
  local_4 = 0xffffffff;
  pCVar1 = (CFloatingLabel *)GUI::Label::~Label(&this->Label);
  ExceptionList = pvStack_c;
  return pCVar1;
}



int * __thiscall CFloatingLabel::virt_meth_0x58fca0(CFloatingLabel *this,byte param_1)

{
  ~CFloatingLabel(this);
  if ((param_1 & 1) != 0) {
    FUN_004a7540((int *)this);
  }
  return (int *)this;
}


#include "../include/CFloatingLabel.h"
