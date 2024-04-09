#include "../include/cls_0x5f5883.h"

bool __thiscall cls_0x5f5883::meth_0x5f5883(cls_0x5f5883 *this)

{
  return this->mbr_0x4 == 0;
}



void __thiscall cls_0x5f5883::meth_0x5f589b(cls_0x5f5883 *this)

{
  if (this->mbr_0x4 != 0) {
    (**(code **)(*(int *)this->mbr_0x8 + 0xe0))((int *)this->mbr_0x8,this->mbr_0x4);
    this->mbr_0x4 = 0;
  }
  (**(code **)(*(int *)this->mbr_0x8 + 0xd0))((int *)this->mbr_0x8);
  return;
}



void __thiscall cls_0x5f5883::meth_0x5f58c4(cls_0x5f5883 *this)

{
  (**(code **)(*(int *)this->mbr_0x8 + 0xd4))((int *)this->mbr_0x8,&this->mbr_0x4);
  return;
}



undefined4 __thiscall cls_0x5f5883::meth_0x5f58d5(cls_0x5f5883 *this)

{
  undefined4 uVar1;
  
  if (this->mbr_0x4 == 0) {
    return 0x80004005;
  }
  uVar1 = (**(code **)(*(int *)this->mbr_0x8 + 0xdc))((int *)this->mbr_0x8,this->mbr_0x4);
  return uVar1;
}



undefined4 __thiscall cls_0x5f5883::meth_0x5f58f0(cls_0x5f5883 *this)

{
  undefined4 uVar1;
  
  if (this->mbr_0x4 == 0) {
    return 0x80004005;
  }
  uVar1 = (**(code **)(*(int *)this->mbr_0x8 + 0xd8))((int *)this->mbr_0x8,this->mbr_0x4);
  return uVar1;
}


