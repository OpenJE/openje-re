#include "../include/cls_0x48fb60.h"

void __thiscall cls_0x48fb60::meth_0x48f870(cls_0x48fb60 *this)

{
  int iVar1;
  dword *pdVar2;
  cls_0x48fb60 *pcVar3;
  dword *pdVar4;
  dword local_20 [4];
  undefined4 local_10;
  undefined4 local_c;
  
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  local_10 = 0;
  local_c = 0;
  pdVar2 = local_20;
  pcVar3 = this;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar3->mbr_0x0 = *pdVar2;
    pdVar2 = pdVar2 + 1;
    pcVar3 = (cls_0x48fb60 *)&pcVar3->mbr_0x4;
  }
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  local_10 = 0;
  local_c = 0;
  pdVar2 = local_20;
  pdVar4 = &this->mbr_0x18;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pdVar4 = *pdVar2;
    pdVar2 = pdVar2 + 1;
    pdVar4 = pdVar4 + 1;
  }
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  local_10 = 0;
  local_c = 0;
  pdVar2 = local_20;
  pdVar4 = &this->mbr_0x30;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pdVar4 = *pdVar2;
    pdVar2 = pdVar2 + 1;
    pdVar4 = pdVar4 + 1;
  }
  return;
}



void __thiscall cls_0x48fb60::meth_0x48f940(cls_0x48fb60 *this,dword param_1,dword param_2)

{
  int iVar1;
  
  iVar1 = 3;
  do {
    this->mbr_0x0 = param_1;
    this->mbr_0x4 = param_2;
    this = (cls_0x48fb60 *)&this->field_0x20;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



cls_0x48fb60 * __thiscall cls_0x48fb60::cls_0x48fb60(cls_0x48fb60 *this)

{
  cls_0x48fb60 *pcVar1;
  int iVar2;
  dword *pdVar3;
  dword *pdVar4;
  dword local_18 [4];
  undefined4 local_8;
  undefined4 local_4;
  
  pcVar1 = (cls_0x48fb60 *)meth_0x48f870(this);
  local_8 = 0;
  local_4 = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  local_18[0] = 0;
  local_18[1] = 0;
  pdVar3 = local_18;
  pdVar4 = &this->mbr_0x48;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pdVar4 = *pdVar3;
    pdVar3 = pdVar3 + 1;
    pdVar4 = pdVar4 + 1;
  }
  return pcVar1;
}



void __thiscall cls_0x48fb60::meth_0x48fe50(cls_0x48fb60 *this)

{
  meth_0x48f870(this);
  meth_0x48f940(this,0,0x3ff00000);
  return;
}



void __thiscall
cls_0x48fb60::meth_0x48fe70(cls_0x48fb60 *this,undefined4 param_1,undefined4 param_2)

{
  meth_0x48f870(this);
  meth_0x48f940(this,param_1,param_2);
  return;
}



void __thiscall cls_0x48fb60::meth_0x48fee0(cls_0x48fb60 *this,undefined4 *param_1,double *param_2)

{
  int iVar1;
  dword *pdVar2;
  cls_0x48fce0 local_60;
  
  cls_0x48fce0::cls_0x48fce0(&local_60);
  cls_0x48fce0::meth_0x48fac0(&local_60,(int)this,param_2);
  pdVar2 = (dword *)&local_60;
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *pdVar2;
    pdVar2 = pdVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



void __thiscall cls_0x48fb60::meth_0x48ff20(cls_0x48fb60 *this)

{
  int iVar1;
  dword *pdVar2;
  dword *pdVar3;
  dword local_18 [4];
  undefined4 local_8;
  undefined4 local_4;
  
  meth_0x48fe50(this);
  local_8 = 0;
  local_4 = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  local_18[0] = 0;
  local_18[1] = 0;
  pdVar2 = local_18;
  pdVar3 = &this->mbr_0x48;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pdVar3 = *pdVar2;
    pdVar2 = pdVar2 + 1;
    pdVar3 = pdVar3 + 1;
  }
  return;
}



void __thiscall
cls_0x48fb60::meth_0x48ff70(cls_0x48fb60 *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  dword *pdVar2;
  dword *pdVar3;
  dword local_18 [4];
  undefined4 local_8;
  undefined4 local_4;
  
  meth_0x48fe70(this,param_1,param_2);
  local_8 = 0;
  local_4 = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  local_18[0] = 0;
  local_18[1] = 0;
  pdVar2 = local_18;
  pdVar3 = &this->mbr_0x48;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pdVar3 = *pdVar2;
    pdVar2 = pdVar2 + 1;
    pdVar3 = pdVar3 + 1;
  }
  return;
}



void __thiscall cls_0x48fb60::meth_0x48ffd0(cls_0x48fb60 *this,double *param_1)

{
  dword *pdVar1;
  int iVar2;
  cls_0x48fe90 local_c0;
  undefined4 local_60 [24];
  
  cls_0x48fe90::cls_0x48fe90(&local_c0,param_1);
  pdVar1 = (dword *)meth_0x48fee0(this,local_60,(double *)&local_c0);
  for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
    this->mbr_0x0 = *pdVar1;
    pdVar1 = pdVar1 + 1;
    this = (cls_0x48fb60 *)&this->mbr_0x4;
  }
  return;
}



cls_0x48fb60 * __thiscall
cls_0x48fb60::cls_0x48fb60(cls_0x48fb60 *this,undefined4 param_1,undefined4 param_2)

{
  dword *pdVar1;
  int iVar2;
  
  pdVar1 = &this->mbr_0x8;
  iVar2 = 3;
  do {
    pdVar1[2] = 0;
    pdVar1[3] = 0;
    *pdVar1 = 0;
    pdVar1[1] = 0;
    ((cls_0x48fb60 *)(pdVar1 + -2))->mbr_0x0 = 0;
    pdVar1[-1] = 0;
    pdVar1 = pdVar1 + 6;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  this->mbr_0x58 = 0;
  this->mbr_0x5c = 0;
  this->mbr_0x50 = 0;
  this->mbr_0x54 = 0;
  this->mbr_0x48 = 0;
  this->mbr_0x4c = 0;
  meth_0x48ff70(this,param_1,param_2);
  return this;
}


