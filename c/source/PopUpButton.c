#include "../include/PopUpButton.h"

PopUpButton * __thiscall PopUpButton::PopUpButton(PopUpButton *this)

{
  Button *pBVar1;
  Picture *pPVar2;
  Label *pLVar3;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062bfd9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &PopUpButton__vftable_6505d4_006505d4;
  pBVar1 = (Button *)FUN_004a7680(0xd78);
  local_4 = 0;
  if (pBVar1 == (Button *)0x0) {
    pBVar1 = (Button *)0x0;
  }
  else {
    pBVar1 = GUI::Button::Button(pBVar1,1);
  }
  local_4 = 0xffffffff;
  this->mbr_0x4 = (dword)pBVar1;
  pPVar2 = (Picture *)FUN_004a7680(0xd2c);
  local_4 = 1;
  if (pPVar2 == (Picture *)0x0) {
    pPVar2 = (Picture *)0x0;
  }
  else {
    pPVar2 = GUI::Picture::Picture(pPVar2,2);
  }
  local_4 = 0xffffffff;
  this->mbr_0x8 = (dword)pPVar2;
  pPVar2 = (Picture *)FUN_004a7680(0xd2c);
  local_4 = 2;
  if (pPVar2 == (Picture *)0x0) {
    pPVar2 = (Picture *)0x0;
  }
  else {
    pPVar2 = GUI::Picture::Picture(pPVar2,2);
  }
  local_4 = 0xffffffff;
  this->mbr_0xc = (dword)pPVar2;
  pPVar2 = (Picture *)FUN_004a7680(0xd2c);
  local_4 = 3;
  if (pPVar2 == (Picture *)0x0) {
    pPVar2 = (Picture *)0x0;
  }
  else {
    pPVar2 = GUI::Picture::Picture(pPVar2,2);
  }
  local_4 = 0xffffffff;
  this->mbr_0x10 = (dword)pPVar2;
  pPVar2 = (Picture *)FUN_004a7680(0xd2c);
  local_4 = 4;
  if (pPVar2 == (Picture *)0x0) {
    pPVar2 = (Picture *)0x0;
  }
  else {
    pPVar2 = GUI::Picture::Picture(pPVar2,2);
  }
  local_4 = 0xffffffff;
  this->mbr_0x14 = (dword)pPVar2;
  pLVar3 = (Label *)FUN_004a7680(0xe64);
  local_4 = 5;
  if (pLVar3 == (Label *)0x0) {
    pLVar3 = (Label *)0x0;
  }
  else {
    pLVar3 = GUI::Label::Label(pLVar3,3);
  }
  local_4 = 0xffffffff;
  this->mbr_0x18 = (dword)pLVar3;
  pLVar3 = (Label *)FUN_004a7680(0xe64);
  local_4 = 6;
  if (pLVar3 == (Label *)0x0) {
    pLVar3 = (Label *)0x0;
  }
  else {
    pLVar3 = GUI::Label::Label(pLVar3,3);
  }
  local_4 = 0xffffffff;
  this->mbr_0x1c = (dword)pLVar3;
  pLVar3 = (Label *)FUN_004a7680(0xe64);
  local_4 = 7;
  if (pLVar3 == (Label *)0x0) {
    pLVar3 = (Label *)0x0;
  }
  else {
    pLVar3 = GUI::Label::Label(pLVar3,3);
  }
  local_4 = 0xffffffff;
  this->mbr_0x20 = (dword)pLVar3;
  pLVar3 = (Label *)FUN_004a7680(0xe64);
  local_4 = 8;
  if (pLVar3 == (Label *)0x0) {
    pLVar3 = (Label *)0x0;
  }
  else {
    pLVar3 = GUI::Label::Label(pLVar3,3);
  }
  local_4 = 0xffffffff;
  this->mbr_0x24 = (dword)pLVar3;
  pPVar2 = (Picture *)FUN_004a7680(0xd2c);
  local_4 = 9;
  if (pPVar2 == (Picture *)0x0) {
    pPVar2 = (Picture *)0x0;
  }
  else {
    pPVar2 = GUI::Picture::Picture(pPVar2,2);
  }
  local_4 = 0xffffffff;
  this->mbr_0x28 = (dword)pPVar2;
  pPVar2 = (Picture *)FUN_004a7680(0xd2c);
  local_4 = 10;
  if (pPVar2 == (Picture *)0x0) {
    pPVar2 = (Picture *)0x0;
  }
  else {
    pPVar2 = GUI::Picture::Picture(pPVar2,2);
  }
  this->mbr_0x2c = (dword)pPVar2;
  ExceptionList = local_c;
  return this;
}



PopUpButton * __thiscall PopUpButton::~PopUpButton(PopUpButton *this)

{
  PopUpButton *in_EAX;
  
  this->vftptr_0x0 = &PopUpButton__vftable_6505d4_006505d4;
  return in_EAX;
}



undefined4 * __thiscall PopUpButton::virt_meth_0x417310(PopUpButton *this,byte param_1)

{
  ~PopUpButton(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}


#include "../include/PopUpButton.h"
