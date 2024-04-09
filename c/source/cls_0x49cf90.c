#include "../include/cls_0x49cf90.h"

void __thiscall cls_0x49cf90::meth_0x49cf90(cls_0x49cf90 *this)

{
  dword dVar1;
  
  dVar1 = this->mbr_0x4c;
  if (dVar1 != 0) {
    *(undefined4 *)(dVar1 + 0x18) = 0;
    *(undefined4 *)(dVar1 + 0x1c) = 1;
  }
  dVar1 = this->mbr_0x70;
  if (dVar1 != 0) {
    *(undefined4 *)(dVar1 + 0xb4) = 0;
    *(undefined4 *)(dVar1 + 0xb8) = 0;
    *(undefined4 *)(dVar1 + 0xbc) = 1;
  }
  this->mbr_0x58 = 1;
  this->mbr_0x54 = 0;
  return;
}



void __thiscall
cls_0x49cf90::meth_0x49d290(cls_0x49cf90 *this,int param_1,undefined4 param_2,dword param_3)

{
  dword dVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x70);
  if (iVar2 == 0) {
    handle_fatal_error(
                      "Gfx_ModelInstance::AttachTo - Parent ModelInstance does not contain a SkinMeshPkt!\n"
                      );
    iVar2 = 0;
  }
  meth_0x49cf90(this);
  this->mbr_0x54 = param_1;
  this->mbr_0x58 = param_3;
  if (*(int *)(param_1 + 0x4c) != 0) {
    dVar1 = this->mbr_0x4c;
    *(int *)(dVar1 + 0x18) = *(int *)(param_1 + 0x4c);
    *(dword *)(dVar1 + 0x1c) = param_3;
  }
  if ((cls_0x507be0 *)this->mbr_0x70 != (cls_0x507be0 *)0x0) {
    cls_0x507be0::meth_0x507be0((cls_0x507be0 *)this->mbr_0x70,iVar2,param_3);
  }
  return;
}


