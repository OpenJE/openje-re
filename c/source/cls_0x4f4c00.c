#include "../include/cls_0x4f4c00.h"

cls_0x4f4c00 * __thiscall
cls_0x4f4c00::cls_0x4f4c00(cls_0x4f4c00 *this,undefined4 *param_1,undefined4 *param_2)

{
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0x7f7fffff;
  this->mbr_0x1c = (dword)&LAB_004adc20;
  this->mbr_0x0 = *param_1;
  this->mbr_0x4 = param_1[1];
  this->mbr_0x8 = param_1[2];
  this->mbr_0xc = *param_2;
  this->mbr_0x10 = param_2[1];
  this->mbr_0x14 = param_2[2];
  return this;
}


