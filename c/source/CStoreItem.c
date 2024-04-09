#include "../include/CStoreItem.h"

CStoreItem * __thiscall CStoreItem::~CStoreItem(CStoreItem *this)

{
  this->vftptr_0x0 = &CStoreItem__vftable_6a379c_006a379c;
  if (0xf < this->mbr_0x1c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x8);
  }
  this->mbr_0x1c = 0xf;
  this->mbr_0x18 = 0;
  *(undefined *)&this->mbr_0x8 = 0;
  return (CStoreItem *)0x0;
}



undefined4 * __thiscall CStoreItem::virt_meth_0x5a2100(CStoreItem *this,byte param_1)

{
  ~CStoreItem(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}



CStoreItem * __thiscall CStoreItem::CStoreItem(CStoreItem *this)

{
  char *pcVar1;
  char *pcVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063ad1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &CStoreItem__vftable_6a379c_006a379c;
  this->mbr_0x1c = 0xf;
  this->mbr_0x18 = 0;
  *(undefined *)&this->mbr_0x8 = 0;
  local_4 = 0;
  pcVar1 = "";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&this->mbr_0x4,"",(uint)(pcVar2 + -0x64d7d8));
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  ExceptionList = local_c;
  return this;
}


#include "../include/CStoreItem.h"
