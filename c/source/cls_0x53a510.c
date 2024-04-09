#include "../include/cls_0x53a510.h"

void __thiscall cls_0x53a510::meth_0x53a4f0(cls_0x53a510 *this)

{
  if ((HMIXER)this->mbr_0x20 != (HMIXER)0x0) {
    mixerClose((HMIXER)this->mbr_0x20);
    this->mbr_0x20 = 0;
  }
  return;
}



cls_0x53a510 * __thiscall cls_0x53a510::cls_0x53a510(cls_0x53a510 *this)

{
  dword dVar1;
  cls_0x53a510 *extraout_ECX;
  dword extraout_EDX;
  
  this->mbr_0x0 = 0;
  this->mbr_0x4 = 0x20c;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 1;
  this->mbr_0x14 = 0x32;
  dVar1 = Gfx_Engine::Get_mbr_0x14((Gfx_Engine *)this);
  extraout_ECX->mbr_0x18 = dVar1;
  extraout_ECX->mbr_0x1c = 0x32;
  extraout_ECX->mbr_0x20 = extraout_EDX;
  extraout_ECX->mbr_0x30 = extraout_EDX;
  return extraout_ECX;
}



MCIERROR __thiscall cls_0x53a510::meth_0x53a550(cls_0x53a510 *this)

{
  MCIERROR MVar1;
  dword dVar2;
  dword local_38;
  undefined4 local_34;
  undefined local_30 [4];
  undefined4 local_2c;
  undefined local_24 [4];
  dword local_20;
  undefined4 local_1c;
  undefined local_14 [4];
  MCIDEVICEID local_10;
  char *local_c;
  
  local_c = "cdaudio";
  MVar1 = mciSendCommandA(0,0x803,0x2000,(DWORD_PTR)local_14);
  if (MVar1 == 0) {
    this->mbr_0x0 = local_10;
    local_2c = 10;
    MVar1 = mciSendCommandA(local_10,0x80d,0x400,(DWORD_PTR)local_30);
    if (MVar1 != 0) {
      mciSendCommandA(this->mbr_0x0,0x804,0,0);
      this->mbr_0x0 = 0;
      return MVar1;
    }
    local_1c = 3;
    MVar1 = mciSendCommandA(this->mbr_0x0,0x814,0x100,(DWORD_PTR)local_24);
    if (MVar1 == 0) {
      this->mbr_0x8 = local_20;
    }
    Gfx_Engine::meth_0x53a3e0((Gfx_Engine *)this,0);
    Gfx_Engine::meth_0x53a220((Gfx_Engine *)this,&local_34,&local_38);
    this->mbr_0x14 = local_38;
    if ((int)local_38 < 0) {
      this->mbr_0x14 = 0;
    }
    if (100 < (int)this->mbr_0x14) {
      this->mbr_0x14 = 100;
    }
    dVar2 = Gfx_Engine::Get_mbr_0x14((Gfx_Engine *)this);
    this->mbr_0x18 = dVar2;
    MVar1 = 0;
  }
  return MVar1;
}



void __thiscall cls_0x53a510::meth_0x53a640(cls_0x53a510 *this)

{
  MCIDEVICEID mciId;
  
  mciId = this->mbr_0x0;
  if (mciId == 0) {
    meth_0x53a550(this);
    mciId = this->mbr_0x0;
    if (mciId == 0) {
      return;
    }
  }
  mciSendCommandA(mciId,0x808,0,0);
  return;
}



void __thiscall cls_0x53a510::meth_0x53a6d0(cls_0x53a510 *this)

{
  meth_0x53a640(this);
  if (this->mbr_0x0 != 0) {
    meth_0x53a4f0(this);
    mciSendCommandA(this->mbr_0x0,0x804,0,0);
    this->mbr_0x0 = 0;
  }
  this->mbr_0x4 = 0x20c;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 1;
  return;
}


