#include "../include/cls_0x4903e0.h"

void __thiscall cls_0x4903e0::meth_0x4903e0(cls_0x4903e0 *this)

{
  if ((undefined4 *)this->mbr_0x44 != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0x44)(1);
    this->mbr_0x44 = 0;
  }
  this->mbr_0x40 = 0;
  return;
}



void __thiscall cls_0x4903e0::meth_0x491f90(cls_0x4903e0 *this)

{
  meth_0x4903e0(this);
  if (*(undefined4 **)&this->field_0x34 != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)&this->field_0x34)(1);
    *(undefined4 *)&this->field_0x34 = 0;
  }
  FUN_00491ec0((int)this);
  return;
}



void __thiscall cls_0x4903e0::meth_0x494f30(cls_0x4903e0 *this)

{
  int **ppiVar1;
  int *piVar2;
  int *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006310a3;
  pvStack_c = ExceptionList;
  local_4 = 6;
  ExceptionList = &pvStack_c;
  meth_0x491f90(this);
  ppiVar1 = (int **)this->mbr_0x6c;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0x68,&local_10,piVar2,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x6c);
}


