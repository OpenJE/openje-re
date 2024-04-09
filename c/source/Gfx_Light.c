#include "../include/Gfx_Light.h"

void __thiscall Gfx_Light::meth_0x4245b0(Gfx_Light *this)

{
  (this->Gfx_BaseObject).vftptr_0x0 = &Gfx_BaseObject__vftable_651b28_00651b28;
  return;
}



Gfx_Light * __thiscall Gfx_Light::Gfx_Light(Gfx_Light *this,undefined4 *param_1,dword param_2)

{
  int iVar1;
  dword *pdVar2;
  
  (this->Gfx_BaseObject).mbr_0x3c = 0;
  (this->Gfx_BaseObject).mbr_0x38 = 0;
  (this->Gfx_BaseObject).mbr_0x34 = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x30 = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x28 = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x24 = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x20 = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x1c = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x14 = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x10 = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0xc = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x8 = 0;
  this->mbr_0x40 = 0x3f800000;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x2c = 0x3f800000;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x18 = 0x3f800000;
  (this->Gfx_BaseObject).mbr_0x4 = 0x3f800000;
  this->mbr_0x44 = param_2;
  (this->Gfx_BaseObject).vftptr_0x0 =
       (Gfx_BaseObject__vftable_651b28 *)&Gfx_Light__vftable_651b54_00651b54;
  pdVar2 = &this->mbr_0x4c;
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pdVar2 = *param_1;
    param_1 = param_1 + 1;
    pdVar2 = pdVar2 + 1;
  }
  return this;
}



Gfx_Light * __thiscall Gfx_Light::Gfx_Light(Gfx_Light *this,dword param_1)

{
  (this->Gfx_BaseObject).mbr_0x3c = 0;
  (this->Gfx_BaseObject).mbr_0x38 = 0;
  (this->Gfx_BaseObject).mbr_0x34 = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x30 = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x28 = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x24 = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x20 = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x1c = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x14 = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x10 = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0xc = 0;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x8 = 0;
  this->mbr_0x40 = 0x3f800000;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x2c = 0x3f800000;
  *(undefined4 *)&(this->Gfx_BaseObject).field_0x18 = 0x3f800000;
  (this->Gfx_BaseObject).mbr_0x4 = 0x3f800000;
  (this->Gfx_BaseObject).vftptr_0x0 =
       (Gfx_BaseObject__vftable_651b28 *)&Gfx_Light__vftable_651b54_00651b54;
  this->mbr_0x48 = 0;
  this->mbr_0x44 = param_1;
  this->mbr_0x4c = 3;
  this->mbr_0x50 = 0x3f800000;
  this->mbr_0x54 = 0x3f800000;
  this->mbr_0x58 = 0x3f800000;
  this->mbr_0x5c = 0x3f800000;
  this->mbr_0x60 = 0;
  this->mbr_0x64 = 0;
  this->mbr_0x68 = 0;
  this->mbr_0x6c = 0x3f800000;
  this->mbr_0x70 = 0;
  this->mbr_0x74 = 0;
  this->mbr_0x78 = 0;
  this->mbr_0x7c = 0x3f800000;
  this->mbr_0x80 = 0;
  this->mbr_0x84 = 0;
  this->mbr_0x88 = 0;
  this->mbr_0x8c = 0;
  this->mbr_0x90 = 0;
  this->mbr_0x94 = 0x3f800000;
  this->mbr_0x98 = 0;
  this->mbr_0x9c = 0x3f800000;
  this->mbr_0xa0 = 0x3f800000;
  this->mbr_0xa4 = 0;
  this->mbr_0xa8 = 0;
  this->mbr_0xac = 0;
  this->mbr_0xb0 = 0;
  return this;
}


#include "../include/Gfx_Light.h"
