#include "../include/G3D_BaseLight.h"

G3D_BaseLight * __thiscall G3D_BaseLight::G3D_BaseLight(G3D_BaseLight *this)

{
  (this->G3D_BaseAttribute).mbr_0x1c = 0xf;
  (this->G3D_BaseAttribute).mbr_0x18 = 0;
  *(undefined *)&(this->G3D_BaseAttribute).mbr_0x8 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0x3f800000;
  this->mbr_0x34 = 0x3f800000;
  this->mbr_0x38 = 0x3f800000;
  this->mbr_0x3c = 0x3f800000;
  this->mbr_0x40 = 0x3f800000;
  this->mbr_0x44 = 0;
  this->mbr_0x48 = 0;
  this->mbr_0x4c = 0;
  this->mbr_0x50 = 0x3f800000;
  this->mbr_0x20 = 0;
  (this->G3D_BaseAttribute).vftptr_0x0 =
       (G3D_BaseAttribute__vftable_671ce0 *)&G3D_BaseLight__vftable_671d34_00671d34;
  this->mbr_0x58 = 0;
  this->mbr_0x5c = 0;
  return this;
}


#include "../include/G3D_BaseLight.h"
