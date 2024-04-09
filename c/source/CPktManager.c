#include "../include/CPktManager.h"

CPktManager * __thiscall GUI::CPktManager::CPktManager(CPktManager *this)

{
  int **ppiVar1;
  dword dVar2;
  int *piVar3;
  CPktManager *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063259c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &CPktManager__vftable_66f7b4_0066f7b4;
  local_10 = this;
  dVar2 = FUN_0056e0b0();
  this->mbr_0xc = dVar2;
  this->mbr_0x10 = 0;
  local_4 = 0;
  dVar2 = FUN_0056e0b0();
  this->mbr_0x18 = dVar2;
  this->mbr_0x1c = 0;
  local_4._0_1_ = 1;
  dVar2 = FUN_0056e0b0();
  this->mbr_0x24 = dVar2;
  this->mbr_0x28 = 0;
  local_4._0_1_ = 2;
  dVar2 = FUN_0056e0b0();
  this->mbr_0x30 = dVar2;
  this->mbr_0x34 = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  dVar2 = FUN_0056e0b0();
  piVar3 = (int *)0x0;
  this->mbr_0x3c = dVar2;
  this->mbr_0x40 = 0;
  this->mbr_0x4 = 1;
  ppiVar1 = (int **)this->mbr_0xc;
  if (ppiVar1 != (int **)0x0) {
    piVar3 = *ppiVar1;
  }
  Interface::meth_0x4b9d60((Interface *)&this->mbr_0x8,(int **)&local_10,piVar3,(int *)ppiVar1);
  ppiVar1 = (int **)this->mbr_0x18;
  if (ppiVar1 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *ppiVar1;
  }
  Interface::meth_0x4b9d60((Interface *)&this->mbr_0x14,(int **)&local_10,piVar3,(int *)ppiVar1);
  ppiVar1 = (int **)this->mbr_0x24;
  if (ppiVar1 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *ppiVar1;
  }
  Interface::meth_0x4b9d60((Interface *)&this->mbr_0x20,(int **)&local_10,piVar3,(int *)ppiVar1);
  ppiVar1 = (int **)this->mbr_0x30;
  if (ppiVar1 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *ppiVar1;
  }
  Interface::meth_0x4b9d60((Interface *)&this->mbr_0x2c,(int **)&local_10,piVar3,(int *)ppiVar1);
  ppiVar1 = (int **)this->mbr_0x3c;
  if (ppiVar1 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *ppiVar1;
  }
  Interface::meth_0x4b9d60((Interface *)&this->mbr_0x38,(int **)&local_10,piVar3,(int *)ppiVar1);
  ExceptionList = local_c;
  return this;
}



CPktManager * __thiscall GUI::CPktManager::~CPktManager(CPktManager *this)

{
  int **ppiVar1;
  int *piVar2;
  CPktManager *local_4;
  
  this->vftptr_0x0 = &CPktManager__vftable_66f7b4_0066f7b4;
  ppiVar1 = (int **)this->mbr_0x3c;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  local_4 = this;
  Interface::meth_0x4b9d60((Interface *)&this->mbr_0x38,(int **)&local_4,piVar2,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x3c);
}



int * __thiscall GUI::CPktManager::virt_meth_0x4b64f0(CPktManager *this,byte param_1)

{
  ~CPktManager(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}


#include "../include/CPktManager.h"
