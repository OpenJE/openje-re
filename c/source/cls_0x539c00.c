#include "../include/cls_0x539c00.h"

void __thiscall cls_0x539c00::meth_0x539c00(cls_0x539c00 *this)

{
  int *piVar1;
  
  piVar1 = (int *)this->mbr_0x4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(piVar1);
  }
  piVar1 = (int *)this->mbr_0x18;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x18 = 0;
  }
  piVar1 = (int *)this->mbr_0x14;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x14 = 0;
  }
  piVar1 = (int *)this->mbr_0x10;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x10 = 0;
  }
  piVar1 = (int *)this->mbr_0xc;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0xc = 0;
  }
  piVar1 = (int *)this->mbr_0x8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x8 = 0;
  }
  piVar1 = (int *)this->mbr_0x4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x4 = 0;
  }
  piVar1 = (int *)this->mbr_0x0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x0 = 0;
  }
  CoUninitialize();
  this->mbr_0x20 = 0;
  return;
}


