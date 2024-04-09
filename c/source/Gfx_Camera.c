#include "../include/Gfx_Camera.h"

Gfx_Camera * __thiscall Gfx_Camera::Gfx_Camera(Gfx_Camera *this)

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
  this->mbr_0x44 = 0;
  this->mbr_0x11c = 0;
  (this->Gfx_BaseObject).vftptr_0x0 =
       (Gfx_BaseObject__vftable_651b28 *)&Gfx_Camera__vftable_669db0_00669db0;
  this->mbr_0x120 = 0;
  this->mbr_0x124 = 0;
  this->mbr_0x128 = 0;
  this->mbr_0x84 = 0;
  this->mbr_0x80 = 0;
  this->mbr_0x7c = 0;
  this->mbr_0x78 = 0;
  this->mbr_0x70 = 0;
  this->mbr_0x6c = 0;
  this->mbr_0x68 = 0;
  this->mbr_0x64 = 0;
  this->mbr_0x5c = 0;
  this->mbr_0x58 = 0;
  this->mbr_0x54 = 0;
  this->mbr_0x50 = 0;
  this->mbr_0x88 = 0x3f800000;
  this->mbr_0x74 = 0x3f800000;
  this->mbr_0x60 = 0x3f800000;
  this->mbr_0x4c = 0x3f800000;
  this->mbr_0xc4 = 0;
  this->mbr_0xc0 = 0;
  this->mbr_0xbc = 0;
  this->mbr_0xb8 = 0;
  this->mbr_0xb0 = 0;
  this->mbr_0xac = 0;
  this->mbr_0xa8 = 0;
  this->mbr_0xa4 = 0;
  this->mbr_0x9c = 0;
  this->mbr_0x98 = 0;
  this->mbr_0x94 = 0;
  this->mbr_0x90 = 0;
  this->mbr_0xc8 = 0x3f800000;
  this->mbr_0xb4 = 0x3f800000;
  this->mbr_0xa0 = 0x3f800000;
  this->mbr_0x8c = 0x3f800000;
  this->mbr_0x104 = 0;
  this->mbr_0x100 = 0;
  this->mbr_0xfc = 0;
  this->mbr_0xf8 = 0;
  this->mbr_0xf0 = 0;
  this->mbr_0xec = 0;
  this->mbr_0xe8 = 0;
  this->mbr_0xe4 = 0;
  this->mbr_0xdc = 0;
  this->mbr_0xd8 = 0;
  this->mbr_0xd4 = 0;
  this->mbr_0xd0 = 0;
  this->mbr_0x108 = 0x3f800000;
  this->mbr_0xf4 = 0x3f800000;
  this->mbr_0xe0 = 0x3f800000;
  this->mbr_0xcc = 0x3f800000;
  this->mbr_0x10c = 0x3faaaaab;
  this->mbr_0x118 = 0x469c4000;
  *(undefined4 *)&this->field_0x110 = 0x3e860a92;
  this->mbr_0x114 = 0x41200000;
  this->mbr_0x48 = 1;
  this->mbr_0x49 = 1;
  this->mbr_0x4a = 1;
  return this;
}



undefined4 * __thiscall Gfx_Camera::virt_meth_0x4960b0(Gfx_Camera *this,byte param_1)

{
  Gfx_Light::meth_0x4245b0((Gfx_Light *)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}


#include "../include/Gfx_Camera.h"
