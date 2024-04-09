#include "../include/Chunk.h"

Chunk * __thiscall Common::Chunk::~Chunk(Chunk *this)

{
  Chunk *in_EAX;
  
  this->vftptr_0x0 = &Chunk__vftable_64d500_0064d500;
  return in_EAX;
}



Chunk * __thiscall Common::Chunk::Chunk(Chunk *this)

{
  this->vftptr_0x0 = &Chunk__vftable_64d500_0064d500;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0;
  return this;
}



uint __thiscall Common::Chunk::Read(Chunk *this,undefined4 param_1,int param_2)

{
  dword dVar1;
  uint uVar2;
  
  if (this->mbr_0x4 != 0) {
    handle_fatal_error("Chunk::Read() called when not in proper mode.\n");
  }
  this->mbr_0x4 = 1;
  this->mbr_0x18 = param_2;
  dVar1 = FUN_004981d0(param_2);
  this->mbr_0x1c = dVar1;
  uVar2 = ResourceSystem::MemStreamRead(&this->mbr_0x8,4,param_2);
  if ((char)uVar2 != '\0') {
    uVar2 = ResourceSystem::MemStreamRead(&this->mbr_0xc,4,param_2);
    if ((char)uVar2 != '\0') {
      uVar2 = ResourceSystem::MemStreamRead(&this->mbr_0x10,4,param_2);
      if ((char)uVar2 != '\0') {
        return CONCAT31((int3)(uVar2 >> 8),1);
      }
    }
  }
  this->mbr_0x4 = 0;
  return uVar2 & 0xffffff00;
}



void __thiscall Common::Chunk::SkipToEnd(Chunk *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (this->mbr_0x4 != 1) {
    handle_fatal_error("Chunk::SkipToEnd() called when not in write mode.\n");
  }
  if ((int *)this->mbr_0x14 == (int *)0x0) {
    if (this->mbr_0x18 == 0) goto LAB_004a1ddf;
    iVar1 = this->mbr_0x1c + this->mbr_0x10;
    iVar3 = FUN_004981d0(this->mbr_0x18);
    if (iVar3 == iVar1) goto LAB_004a1ddf;
    uVar4 = ResourceSystem::MemStreamSeek(this->mbr_0x18,iVar1,0);
    cVar2 = (char)uVar4;
  }
  else {
    iVar1 = this->mbr_0x1c + this->mbr_0x10;
    iVar3 = FUN_004989c0((int *)this->mbr_0x14);
    if (iVar3 == iVar1) goto LAB_004a1ddf;
    uVar4 = ResourceSystem::FileStreamSeek(DAT_00707da8,(uint *)this->mbr_0x14,iVar1,0);
    cVar2 = (char)uVar4;
  }
  if (cVar2 == '\0') {
    handle_fatal_error("Seek failed during Chunk::SkipToEnd().\n");
  }
LAB_004a1ddf:
  this->mbr_0x4 = 0;
  return;
}


#include "../include/Chunk.h"
