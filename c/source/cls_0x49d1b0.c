#include "../include/cls_0x49d1b0.h"

void __thiscall cls_0x49d1b0::meth_0x49d1b0(cls_0x49d1b0 *this,undefined4 *param_1)

{
  undefined4 **ppuStack_18;
  undefined4 uStack_8;
  
  this->mbr_0x10 = *param_1;
  this->mbr_0x14 = param_1[1];
  this->mbr_0x18 = param_1[2];
  this->mbr_0x1c = param_1[3];
  ppuStack_18 = &param_1;
  thunk_FUN_00472971();
  thunk_FUN_004724e0(&this->mbr_0x2c,&ppuStack_18,uStack_8);
  this->mbr_0xc = 1;
  return;
}


