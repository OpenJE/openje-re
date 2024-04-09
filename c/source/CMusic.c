#include "../include/CMusic.h"

CMusic * __thiscall CMusic::CMusic(CMusic *this)

{
  CSound::CSound(&this->CSound);
  (this->CSound).mbr_0x104 = 0;
  (this->CSound).mbr_0x108 = 0;
  (this->CSound).mbr_0x100 = 0;
  (this->CSound).mbr_0xfc = 0;
  *(undefined *)&(this->CSound).mbr_0x10c = 0;
  *(undefined *)&(this->CSound).mbr_0x115 = 0;
  (this->CSound).mbr_0xf8 = 0;
  (this->CSound).vftptr_0x0 = (CSound__vftable_67140c *)&CMusic__vftable_67d1d8_0067d1d8;
  return this;
}



CMusic * __thiscall CMusic::~CMusic(CMusic *this)

{
  CSound *pCVar1;
  
  (this->CSound).vftptr_0x0 = (CSound__vftable_67140c *)&CMusic__vftable_67d1d8_0067d1d8;
  pCVar1 = CSound::~CSound(&this->CSound);
  return (CMusic *)pCVar1;
}


#include "../include/CMusic.h"
