#include "../include/cls_0x4b2ac0.h"

void __thiscall cls_0x4b2ac0::meth_0x4b2ac0(cls_0x4b2ac0 *this,dword param_1)

{
  this->mbr_0xac = param_1;
  return;
}



void __thiscall cls_0x4b2ac0::meth_0x4b2c80(cls_0x4b2ac0 *this)

{
  int *piVar1;
  
  if ((int **)this->mbr_0x20 == (int **)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)this->mbr_0x20;
  }
  if (piVar1 != (int *)this->mbr_0x20) {
    do {
      cls_0x495310::meth_0x495310((cls_0x495310 *)piVar1[2]);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)this->mbr_0x20);
  }
  return;
}



void __thiscall cls_0x4b2ac0::meth_0x4b4ce0(cls_0x4b2ac0 *this,int param_1,int param_2)

{
  cls_0x4c0190 *this_00;
  dword dVar1;
  int local_18;
  undefined4 local_14;
  dword local_10;
  dword local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  this_00 = (cls_0x4c0190 *)this->mbr_0x8c;
  *(float *)&this->field_0x68 = (float)param_1 * 0.0009765625;
  this->mbr_0x60 = param_1;
  this->mbr_0x64 = param_2;
  *(float *)&this->field_0x6c = (float)param_2 * 0.001302083;
  if (this_00 != (cls_0x4c0190 *)0x0) {
    if (param_1 == 0) {
      param_1 = this_00->mbr_0x8;
    }
    if (param_2 == 0) {
      param_2 = this_00->mbr_0xc;
    }
    local_18 = 0;
    local_14 = 0;
    local_8 = 0;
    local_4 = 0x3f800000;
    local_10 = param_1;
    local_c = param_2;
    cls_0x4c0190::meth_0x424880(this_00,&local_18);
    dVar1 = this->mbr_0x8c;
    *(undefined4 *)(dVar1 + 0x24) = 0;
    *(undefined4 *)(dVar1 + 0x1e0) = 0;
    *(undefined4 *)(dVar1 + 0x1c4) = 0;
    *(undefined4 *)(dVar1 + 0x1a8) = 0;
    *(undefined4 *)(dVar1 + 0x18c) = 0;
    cls_0x4c0190::meth_0x429d20((cls_0x4c0190 *)this->mbr_0x8c,this->mbr_0x90);
  }
  return;
}


