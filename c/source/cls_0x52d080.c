#include "../include/cls_0x52d080.h"

void __thiscall cls_0x52d080::meth_0x52ce60(cls_0x52d080 *this)

{
  int **ppiVar1;
  int *piVar2;
  int *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00636b98;
  pvStack_c = ExceptionList;
  ppiVar1 = (int **)this->mbr_0x4;
  local_4 = 0;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  ExceptionList = &pvStack_c;
  GUI::Interface::meth_0x4b9d60((Interface *)this,&local_10,piVar2,(int *)ppiVar1);
  cls_0x50ca00::meth_0x50ca20((cls_0x50ca00 *)&this->field_0xc);
  ppiVar1 = (int **)this->mbr_0x4;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)this,&local_10,piVar2,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



cls_0x52d080 * __thiscall cls_0x52d080::cls_0x52d080(cls_0x52d080 *this)

{
  int **ppiVar1;
  dword dVar2;
  int *piVar3;
  cls_0x52d080 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636bd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  dVar2 = FUN_0056e0b0();
  piVar3 = (int *)0x0;
  this->mbr_0x4 = dVar2;
  this->mbr_0x8 = 0;
  local_4 = 0;
  cls_0x50ca00::cls_0x50ca00((cls_0x50ca00 *)&this->field_0xc);
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0;
  ppiVar1 = (int **)this->mbr_0x4;
  if (ppiVar1 != (int **)0x0) {
    piVar3 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)this,(int **)&local_10,piVar3,(int *)ppiVar1);
  ExceptionList = local_c;
  return this;
}



void __thiscall cls_0x52d080::meth_0x52d3b0(cls_0x52d080 *this)

{
  int **ppiVar1;
  Gregorian *this_00;
  int **_Memory;
  
  ppiVar1 = (int **)this->mbr_0x4;
  if (ppiVar1 == (int **)0x0) {
    _Memory = (int **)0x0;
  }
  else {
    _Memory = (int **)*ppiVar1;
  }
  if (_Memory != ppiVar1) {
    do {
      this_00 = (Gregorian *)_Memory[2];
      if ((*(byte *)&this_00->mbr_0x30 & 2) != 0) {
        if (_Memory != ppiVar1) {
          *_Memory[1] = (int)*_Memory;
          (*_Memory)[1] = (int)_Memory[1];
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        Gregorian::meth_0x52d100(this_00);
                    /* WARNING: Subroutine does not return */
        _free(this_00);
      }
      _Memory = (int **)*_Memory;
    } while (_Memory != (int **)this->mbr_0x4);
  }
  return;
}


