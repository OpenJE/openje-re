#include "../include/Gfx_ParticleInfoBase.h"

Gfx_ParticleInfoBase * __thiscall
Gfx_ParticleInfoBase::~Gfx_ParticleInfoBase(Gfx_ParticleInfoBase *this)

{
  Gfx_ParticleInfoBase *in_EAX;
  
  this->vftptr_0x0 = &Gfx_ParticleInfoBase__vftable_675d88_00675d88;
  return in_EAX;
}



Gfx_ParticleInfoBase * __thiscall
Gfx_ParticleInfoBase::Gfx_ParticleInfoBase(Gfx_ParticleInfoBase *this,int param_1)

{
  int iVar1;
  dword *pdVar2;
  dword *pdVar3;
  
  this->vftptr_0x0 = &Gfx_ParticleInfoBase__vftable_675d88_00675d88;
  this->mbr_0x4 = *(dword *)(param_1 + 4);
  this->mbr_0x8 = *(dword *)(param_1 + 8);
  this->mbr_0xc = *(dword *)(param_1 + 0xc);
  this->mbr_0x10 = *(dword *)(param_1 + 0x10);
  this->mbr_0x14 = *(dword *)(param_1 + 0x14);
  this->mbr_0x18 = *(dword *)(param_1 + 0x18);
  this->mbr_0x1c = *(dword *)(param_1 + 0x1c);
  this->mbr_0x20 = *(dword *)(param_1 + 0x20);
  this->mbr_0x24 = *(dword *)(param_1 + 0x24);
  this->mbr_0x28 = *(dword *)(param_1 + 0x28);
  this->mbr_0x2c = *(dword *)(param_1 + 0x2c);
  this->mbr_0x30 = *(dword *)(param_1 + 0x30);
  this->mbr_0x34 = *(dword *)(param_1 + 0x34);
  this->mbr_0x38 = *(dword *)(param_1 + 0x38);
  this->mbr_0x3c = *(dword *)(param_1 + 0x3c);
  this->mbr_0x40 = *(dword *)(param_1 + 0x40);
  this->mbr_0x44 = *(dword *)(param_1 + 0x44);
  this->mbr_0x48 = *(dword *)(param_1 + 0x48);
  this->mbr_0x4c = *(dword *)(param_1 + 0x4c);
  this->mbr_0x50 = *(dword *)(param_1 + 0x50);
  this->mbr_0x54 = *(dword *)(param_1 + 0x54);
  this->mbr_0x58 = *(dword *)(param_1 + 0x58);
  this->mbr_0x5c = *(dword *)(param_1 + 0x5c);
  this->mbr_0x60 = *(dword *)(param_1 + 0x60);
  this->mbr_0x64 = *(dword *)(param_1 + 100);
  this->mbr_0x68 = *(dword *)(param_1 + 0x68);
  this->mbr_0x6c = *(dword *)(param_1 + 0x6c);
  this->mbr_0x70 = *(dword *)(param_1 + 0x70);
  this->mbr_0x74 = *(dword *)(param_1 + 0x74);
  this->mbr_0x78 = *(dword *)(param_1 + 0x78);
  this->mbr_0x7c = *(dword *)(param_1 + 0x7c);
  this->mbr_0x80 = *(byte *)(param_1 + 0x80);
  this->mbr_0x81 = *(byte *)(param_1 + 0x81);
  pdVar2 = (dword *)(param_1 + 0x84);
  pdVar3 = &this->mbr_0x84;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pdVar3 = *pdVar2;
    pdVar2 = pdVar2 + 1;
    pdVar3 = pdVar3 + 1;
  }
  return this;
}


#include "../include/Gfx_ParticleInfoBase.h"
