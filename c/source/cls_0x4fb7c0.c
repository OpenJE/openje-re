#include "../include/cls_0x4fb7c0.h"

cls_0x4fb7c0 * __thiscall cls_0x4fb7c0::cls_0x4fb7c0(cls_0x4fb7c0 *this,int param_1)

{
  VFX_Parameter::meth_0x4ffcc0((VFX_Parameter *)this,param_1);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&this->mbr_0x34,(_String_base *)(param_1 + 0x34),0,0xffffffff);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&this->mbr_0x50,(_String_base *)(param_1 + 0x50),0,0xffffffff);
  VFX_Parameter::meth_0x4ffcc0((VFX_Parameter *)&this->mbr_0x6c,param_1 + 0x6c);
  this->mbr_0xa0 = *(byte *)(param_1 + 0xa0);
  VFX_Parameter::meth_0x4ffcc0((VFX_Parameter *)&this->mbr_0xa4,param_1 + 0xa4);
  this->mbr_0xd8 = *(byte *)(param_1 + 0xd8);
  VFX_Parameter::meth_0x4ffcc0((VFX_Parameter *)&this->mbr_0xdc,param_1 + 0xdc);
  this->mbr_0x110 = *(byte *)(param_1 + 0x110);
  return this;
}


