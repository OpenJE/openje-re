#include "../include/cls_0x4b5c30.h"

int * __thiscall cls_0x4b5c30::meth_0x4b5c30(cls_0x4b5c30 *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  Skin **ppSVar3;
  Skin *this_00;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063253b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cls_0x4d8d70::meth_0x56f520((cls_0x4d8d70 *)&this->mbr_0x3c,&param_1,param_1);
  if (param_1 != (undefined4 *)this->mbr_0x40) {
    ExceptionList = local_c;
    return (int *)param_1[10];
  }
  param_1 = (undefined4 *)operator_new(0x28);
  this_00 = (Skin *)0x0;
  local_4 = 0;
  if ((Skin *)param_1 != (Skin *)0x0) {
    this_00 = GUI::Skin::Skin((Skin *)param_1);
  }
  local_4 = 0xffffffff;
  cVar2 = (*this_00->vftptr_0x0->virt_meth_0x522c30_8)(this_00,puVar1);
  if (cVar2 == '\0') {
    (*this_00->vftptr_0x0->virt_meth_0x4b5b90_0)(this_00,1);
    ExceptionList = local_c;
    return (int *)0x0;
  }
  ppSVar3 = (Skin **)cls_0x4d8d70::meth_0x4b5470
                               ((cls_0x4d8d70 *)&this->mbr_0x3c,(_String_base *)puVar1);
  *ppSVar3 = this_00;
  ExceptionList = local_c;
  return (int *)this_00;
}


