#include "../include/cls_0x505170.h"

cls_0x505170 * __thiscall
cls_0x505170::cls_0x505170(cls_0x505170 *this,undefined4 param_1,undefined4 param_2,char param_3)

{
  dword dVar1;
  int iVar2;
  dword *pdVar3;
  
  this->mbr_0x44 = 0;
  this->mbr_0x48 = 0;
  this->mbr_0x4c = 0;
  this->mbr_0x50 = 0;
  this->mbr_0x58 = 0;
  this->mbr_0x5c = 0;
  this->mbr_0x60 = 0;
  this->mbr_0x64 = 0;
  this->mbr_0x6c = 0;
  this->mbr_0x70 = 0;
  this->mbr_0x74 = 0;
  this->mbr_0x78 = 0;
  this->mbr_0x40 = 0x3f800000;
  this->mbr_0x54 = 0x3f800000;
  this->mbr_0x68 = 0x3f800000;
  this->mbr_0x7c = 0x3f800000;
  this->mbr_0x680 = 0;
  this->mbr_0x684 = 0;
  this->mbr_0x688 = 0;
  this->mbr_0x68c = 0;
  this->mbr_0x670 = 0;
  this->mbr_0x674 = 0;
  this->mbr_0x67c = 0;
  this->mbr_0x678 = 0;
  this->mbr_0x8 = 0;
  pdVar3 = &this->mbr_0xc;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pdVar3 = 0;
    pdVar3 = pdVar3 + 1;
  }
  this->mbr_0x80 = 0;
  this->mbr_0xf0 = 0;
  this->mbr_0x664 = 0;
  this->mbr_0x66c = 0;
  this->mbr_0x84 = 0;
  this->mbr_0x88 = 0;
  this->mbr_0x8c = 0;
  this->mbr_0x90 = 0;
  this->mbr_0x94 = 0;
  this->mbr_0x98 = 0;
  this->mbr_0x9c = 0;
  this->mbr_0xa0 = 0;
  QueryPerformanceFrequency((LARGE_INTEGER *)&this->mbr_0x698);
  this->mbr_0x6b4 = 0;
  this->mbr_0xb0 = 0;
  this->mbr_0xb4 = 0;
  this->mbr_0xb8 = 0;
  this->mbr_0xbc = 0;
  this->mbr_0xc0 = 0;
  this->mbr_0xc4 = 0;
  this->mbr_0xe8 = 0;
  this->mbr_0xec = 0;
  this->mbr_0xc8 = 0;
  this->mbr_0xcc = 0;
  this->mbr_0xd0 = 0;
  this->mbr_0xd4 = 0;
  this->mbr_0xd8 = 0;
  this->mbr_0xdc = 0;
  this->mbr_0xe0 = 0;
  this->mbr_0xe4 = 0;
  this->mbr_0x690 = 1;
  *(float *)&this->field_0x6b0 = 1.0 / (float)*(longlong *)&this->mbr_0x698;
  dVar1 = Direct3DCreate8(0xdc);
  this->mbr_0x4 = dVar1;
  if (dVar1 != 0) {
    FUN_00497120((byte *)"Created D3D\n");
    Gfx_D3D::EnumDevices(this,(char)param_1);
    return this;
  }
  handle_fatal_error("Failed to Create D3D!  Please ensure that DX8.1 is installed properly.\n");
  return this;
}


