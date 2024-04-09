#include "../include/CSoundFile.h"

CSoundFile * __thiscall CSoundFile::CSoundFile(CSoundFile *this)

{
  char *pcVar1;
  char *pcVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00632f7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &CSoundFile__vftable_671450_00671450;
  this->mbr_0x28 = 0xf;
  this->mbr_0x24 = 0;
  this->mbr_0x14 = 0;
  local_4 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x8 = 0;
  this->mbr_0x4 = 0;
  pcVar1 = "";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&this->mbr_0x10,"",(uint)(pcVar2 + -0x64d7d8));
  ExceptionList = local_c;
  return this;
}


#include "../include/CSoundFile.h"
