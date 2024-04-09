#include "../include/CJumplist.h"

CJumplist * __thiscall CJumplist::CJumplist(CJumplist *this)

{
  CSoundFile::CSoundFile(&this->CSoundFile);
  *(undefined *)&this->mbr_0x44 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x50 = 0;
  this->mbr_0x54 = 0;
  (this->CSoundFile).vftptr_0x0 = (CSoundFile__vftable_671450 *)&CJumplist__vftable_67d1bc_0067d1bc;
  this->mbr_0x3c = 0xffffffff;
  this->mbr_0x40 = 0xffffffff;
  return this;
}



CJumplist * __thiscall CJumplist::~CJumplist(CJumplist *this)

{
  void *_Memory;
  CJumplist *pCVar1;
  
  _Memory = (void *)this->mbr_0x50;
  (this->CSoundFile).vftptr_0x0 = (CSoundFile__vftable_671450 *)&CJumplist__vftable_67d1bc_0067d1bc;
  if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if ((void *)this->mbr_0x54 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x54);
  }
  pCVar1 = (CJumplist *)CMasterJumplist::meth_0x4c7e80((CMasterJumplist *)this);
  return pCVar1;
}


#include "../include/CJumplist.h"
