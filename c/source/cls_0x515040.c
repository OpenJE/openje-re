#include "../include/cls_0x515040.h"

void __thiscall cls_0x515040::meth_0x41f200(cls_0x515040 *this)

{
  void *pvVar1;
  
  pvVar1 = (void *)this->mbr_0x3c;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar1,0x34,*(int *)((int)pvVar1 + -4),GUI::ScrollBar::meth_0x52afb0);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  this->mbr_0x38 = 0;
  (this->cls_0x4abc60).mbr_0x0 = 0;
  cls_0x4abc60::meth_0x4abc10(&this->cls_0x4abc60);
  pvVar1 = (void *)(this->cls_0x4abc60).mbr_0xc;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar1,0x244,*(int *)((int)pvVar1 + -4),cls_0x4b60b0::meth_0x401720);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  this->mbr_0x40 = 0;
  if ((void *)this->mbr_0x44 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x44);
  }
  if ((void *)this->mbr_0x48 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x48);
  }
  this->mbr_0x4c = 0;
  if ((void *)this->mbr_0x50 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x50);
  }
  return;
}



dword __thiscall cls_0x515040::meth_0x41f630(cls_0x515040 *this,int param_1)

{
  void *pvVar1;
  int *piVar2;
  int *piVar3;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062c55b;
  local_c = ExceptionList;
  pvVar1 = (void *)this->mbr_0x3c;
  piVar3 = (int *)0x0;
  if (pvVar1 != (void *)0x0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_
              (pvVar1,0x34,*(int *)((int)pvVar1 + -4),GUI::ScrollBar::meth_0x52afb0);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  ExceptionList = &local_c;
  this->mbr_0x38 = param_1;
  piVar2 = (int *)operator_new(param_1 * 0x34 + 4);
  local_4 = 0;
  if (piVar2 != (int *)0x0) {
    piVar3 = piVar2 + 1;
    *piVar2 = param_1;
    _eh_vector_constructor_iterator_
              (piVar3,0x34,param_1,cls_0x41f190::cls_0x41f190,GUI::ScrollBar::meth_0x52afb0);
  }
  local_4 = 0xffffffff;
  this->mbr_0x3c = (dword)piVar3;
  cls_0x4abc60::meth_0x41f570(&this->cls_0x4abc60,param_1);
  ExceptionList = local_c;
  return this->mbr_0x3c;
}



void __thiscall cls_0x515040::meth_0x41fdf0(cls_0x515040 *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062c57b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  meth_0x41f200(this);
  local_4 = 0xffffffff;
  cls_0x4abc60::meth_0x41fbd0(&this->cls_0x4abc60);
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x515040::meth_0x4b6670(cls_0x515040 *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006325e3;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  cls_0x420270::meth_0x420270((cls_0x420270 *)&this->mbr_0x78);
  local_4 = 1;
  meth_0x41f200(this);
  local_4 = 0xffffffff;
  cls_0x4abc60::meth_0x41fbd0(&this->cls_0x4abc60);
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x515040::meth_0x4c0ea0(cls_0x515040 *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00632a8b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  meth_0x41f200(this);
  local_4 = 0xffffffff;
  cls_0x4abc60::meth_0x41fbd0(&this->cls_0x4abc60);
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x515040::meth_0x4e42c0(cls_0x515040 *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006341ab;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  meth_0x41f200(this);
  local_4 = 0xffffffff;
  cls_0x4abc60::meth_0x41fbd0(&this->cls_0x4abc60);
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x515040::meth_0x4e6140(cls_0x515040 *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006342bb;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  meth_0x41f200(this);
  local_4 = 0xffffffff;
  cls_0x4abc60::meth_0x41fbd0(&this->cls_0x4abc60);
  ExceptionList = local_c;
  return;
}



cls_0x515040 * __thiscall cls_0x515040::cls_0x515040(cls_0x515040 *this)

{
  cls_0x4abc60::cls_0x4abc60(&this->cls_0x4abc60);
  this->mbr_0x0 = 0;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x3c = 0;
  this->mbr_0x40 = 0;
  this->mbr_0x44 = 0;
  this->mbr_0x48 = 0;
  this->mbr_0x4c = 0;
  this->mbr_0x50 = 0;
  this->mbr_0x6c = 0;
  this->mbr_0x70 = 0;
  this->mbr_0x74 = 0;
  this->mbr_0x78 = 0;
  this->mbr_0x7c = 0;
  this->mbr_0x80 = 0;
  this->mbr_0x84 = 0;
  this->mbr_0x88 = 0;
  this->mbr_0x8c = 0;
  this->mbr_0x90 = 0;
  this->mbr_0x94 = 0;
  return this;
}



void __thiscall cls_0x515040::meth_0x5150c0(cls_0x515040 *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00635d4b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  meth_0x41f200(this);
  local_4 = 0xffffffff;
  cls_0x4abc60::meth_0x41fbd0(&this->cls_0x4abc60);
  ExceptionList = local_c;
  return;
}


