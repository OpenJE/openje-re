#include "../include/cls_0x6bcaf8.h"

cls_0x6bcaf8 * __thiscall cls_0x6bcaf8::cls_0x6bcaf8(cls_0x6bcaf8 *this,dword param_1)

{
  this->mbr_0xc = 0;
  this->mbr_0x4 = 1;
  this->vftptr_0x0 = &cls_0x6bcaf8__vftable_6bcaf8_006bcaf8;
  this->mbr_0x10 = param_1;
  return this;
}



cls_0x6bcaf8 * __thiscall cls_0x6bcaf8::~cls_0x6bcaf8(cls_0x6bcaf8 *this)

{
  cls_0x6bc9d8__vftable_6bc9d8 *pcVar1;
  cls_0x6bc9d8__vftable_6bc9d8 **extraout_ECX;
  int unaff_EBP;
  
  FUN_0061781c();
  *(cls_0x6bc9d8__vftable_6bc9d8 ***)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = (cls_0x6bc9d8__vftable_6bc9d8 *)&cls_0x6bcaf8__vftable_6bcaf8_006bcaf8;
  pcVar1 = extraout_ECX[3];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (pcVar1 != (cls_0x6bc9d8__vftable_6bc9d8 *)0x0) {
    pcVar1 = (cls_0x6bc9d8__vftable_6bc9d8 *)
             (**(code **)(pcVar1->virt_deldtor_0x5f51ec_0 + 8))(pcVar1);
    extraout_ECX[3] = (cls_0x6bc9d8__vftable_6bc9d8 *)0x0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &cls_0x6bc9d8__vftable_6bc9d8_006bc9d8;
  return (cls_0x6bcaf8 *)pcVar1;
}



undefined4 __thiscall cls_0x6bcaf8::virt_meth_0x5f4545(cls_0x6bcaf8 *this)

{
  int *piVar1;
  
  piVar1 = (int *)this->mbr_0xc;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0xc = 0;
  }
  return 0;
}



undefined4 __thiscall cls_0x6bcaf8::virt_meth_0x5f455d(cls_0x6bcaf8 *this)

{
  int *piVar1;
  
  piVar1 = (int *)this->mbr_0xc;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0xc = 0;
  }
  return 0;
}



undefined4 __thiscall cls_0x6bcaf8::virt_meth_0x5f459f(cls_0x6bcaf8 *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = param_1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0xc))(param_1,&param_1);
    if (param_1 == (int *)this->mbr_0x10) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    else {
      piVar2 = (int *)0x0;
    }
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  piVar1 = (int *)this->mbr_0xc;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  this->mbr_0xc = (dword)piVar2;
  return 0;
}



undefined4 __thiscall cls_0x6bcaf8::virt_meth_0x5f45fa(cls_0x6bcaf8 *this,undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)this->mbr_0xc;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  *param_1 = this->mbr_0xc;
  return 0;
}



undefined4 __thiscall cls_0x6bcaf8::virt_meth_0x5f4619(cls_0x6bcaf8 *this)

{
  int *piVar1;
  int iVar2;
  undefined local_44 [12];
  int local_38;
  undefined local_24 [12];
  int local_18;
  
  piVar1 = (int *)this->mbr_0xc;
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  iVar2 = (**(code **)(*piVar1 + 0x28))(piVar1);
  if (iVar2 == 3) {
LAB_005f463a:
    (**(code **)(*(int *)this->mbr_0xc + 0x38))((int *)this->mbr_0xc,0,local_24);
  }
  else {
    if (iVar2 != 4) {
      if (iVar2 != 5) goto LAB_005f4650;
      goto LAB_005f463a;
    }
    (**(code **)(*(int *)this->mbr_0xc + 0x38))((int *)this->mbr_0xc,0,local_44);
    local_18 = local_38;
  }
  if (local_18 != 0) {
    return 0;
  }
LAB_005f4650:
  piVar1 = (int *)this->mbr_0xc;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0xc = 0;
  }
  return 0;
}



void * __thiscall cls_0x6bcaf8::virt_meth_0x5f558f(cls_0x6bcaf8 *this,byte param_1)

{
  ~cls_0x6bcaf8(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


#include "../include/cls_0x6bcaf8.h"
