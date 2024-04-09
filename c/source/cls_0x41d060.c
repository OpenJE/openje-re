#include "../include/cls_0x41d060.h"

void __thiscall
cls_0x41d060::meth_0x41d060
          (cls_0x41d060 *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4)

{
  meth_0x4aed50(this,param_1,param_2,param_3,param_4,this->mbr_0x4,this->mbr_0x5,this->mbr_0x6,
                this->mbr_0x7,this->mbr_0x4,this->mbr_0x5,this->mbr_0x6,this->mbr_0x7);
  return;
}



void __thiscall cls_0x41d060::meth_0x4ae0a0(cls_0x41d060 *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    if (this->mbr_0x24 == 0) {
      pvVar2 = operator_new(0x10);
      this->mbr_0x24 = (dword)pvVar2;
    }
    puVar1 = (undefined4 *)this->mbr_0x24;
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_1[3];
    return;
  }
  if ((void *)this->mbr_0x24 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x24);
  }
  return;
}



void __thiscall
cls_0x41d060::meth_0x4ae100(cls_0x41d060 *this,byte param_1,byte param_2,byte param_3,byte param_4)

{
  this->mbr_0x4 = param_1;
  this->mbr_0x5 = param_2;
  this->mbr_0x6 = param_3;
  this->mbr_0x7 = param_4;
  return;
}



void __thiscall cls_0x41d060::meth_0x4ae280(cls_0x41d060 *this)

{
  if ((void *)this->mbr_0x10 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x10);
  }
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x28 = 1;
  return;
}



void __thiscall
cls_0x41d060::meth_0x4aed50
          (cls_0x41d060 *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined param_5,undefined param_6,undefined param_7,undefined param_8
          ,undefined param_9,undefined param_10,undefined param_11,undefined param_12)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined local_8;
  undefined local_7;
  undefined local_6;
  undefined local_5;
  undefined local_4;
  undefined local_3;
  undefined local_2;
  undefined local_1;
  
  local_18 = param_1;
  local_14 = param_2;
  local_c = param_4;
  local_10 = param_3;
  local_8 = param_5;
  local_6 = param_7;
  local_7 = param_6;
  local_5 = param_8;
  local_3 = param_10;
  local_4 = param_9;
  local_2 = param_11;
  local_1 = param_12;
  cls_0x4ae330::meth_0x4aecc0((cls_0x4ae330 *)&this->mbr_0xc,&local_18);
  this->mbr_0x28 = 1;
  return;
}


