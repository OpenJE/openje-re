#include "../include/cls_0x41f2b0.h"

int __thiscall cls_0x41f2b0::meth_0x41f2b0(cls_0x41f2b0 *this,int param_1)

{
  int iVar1;
  
  if (-1 < param_1) {
    if (this->mbr_0x4c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)(this->mbr_0x50 - this->mbr_0x4c) / 0x6c;
    }
    if (param_1 < iVar1) {
      return param_1 * 0x6c + this->mbr_0x4c;
    }
  }
  return 0;
}



void __thiscall
cls_0x41f2b0::meth_0x57fcf0
          (cls_0x41f2b0 *this,_String_base *param_1,dword param_2,dword param_3,dword param_4,
          dword param_5,_String_base *param_6,undefined4 *param_7,undefined param_8)

{
  uint unaff_retaddr;
  undefined local_7c [108];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639868;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  AreaMapNote::AreaMapNote((AreaMapNote *)local_7c);
  local_4 = 0;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)(local_7c + 4),param_1,0,0xffffffff);
  local_7c._32_4_ = param_2;
  local_7c._36_4_ = param_3;
  local_7c._44_4_ = param_5;
  local_7c._40_4_ = param_4;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)(local_7c + 0x34),param_6,0,0xffffffff);
  local_7c._80_4_ = *param_7;
  local_7c._84_4_ = param_7[1];
  local_7c._88_4_ = param_7[2];
  local_7c[92] = param_8;
  cls_0x41d500::meth_0x57f8c0((cls_0x41d500 *)&this->mbr_0x48,local_7c);
  this->mbr_0x78 = this->mbr_0x78 | 2;
  local_4 = 0xffffffff;
  AreaMapNote::~AreaMapNote((AreaMapNote *)local_7c);
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}


