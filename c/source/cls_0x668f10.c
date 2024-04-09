#include "../include/cls_0x668f10.h"

cls_0x668f10 * __thiscall cls_0x668f10::~cls_0x668f10(cls_0x668f10 *this)

{
  cls_0x668f10 *in_EAX;
  
  this->vftptr_0x0 = &cls_0x668f10__vftable_668f10_00668f10;
  if ((void *)this->mbr_0xc != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xc);
  }
  return in_EAX;
}



undefined4 * __thiscall cls_0x668f10::virt_meth_0x482385(cls_0x668f10 *this,byte param_1)

{
  ~cls_0x668f10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}



undefined4 __thiscall
cls_0x668f10::virt_meth_0x4823a1(cls_0x668f10 *this,int *param_1,int **param_2)

{
  int iVar1;
  int **ppiVar2;
  int **ppiVar3;
  bool bVar4;
  int **in_stack_0000000c;
  
  *in_stack_0000000c = (int *)0x0;
  iVar1 = 4;
  bVar4 = true;
  ppiVar2 = param_2;
  ppiVar3 = (int **)&DAT_006692c0;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *ppiVar2 == *ppiVar3;
    ppiVar2 = ppiVar2 + 1;
    ppiVar3 = ppiVar3 + 1;
  } while (bVar4);
  if (!bVar4) {
    iVar1 = 4;
    bVar4 = true;
    ppiVar2 = (int **)&DAT_00668f6c;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *param_2 == *ppiVar2;
      param_2 = param_2 + 1;
      ppiVar2 = ppiVar2 + 1;
    } while (bVar4);
    if (!bVar4) {
      return 0x80004002;
    }
  }
  *in_stack_0000000c = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  return 0;
}



cls_0x668f10 * __thiscall cls_0x668f10::cls_0x668f10(cls_0x668f10 *this)

{
  this->mbr_0xc = 0;
  this->mbr_0x8 = 0;
  this->vftptr_0x0 = &cls_0x668f10__vftable_668f10_00668f10;
  this->mbr_0x4 = 1;
  return this;
}


#include "../include/cls_0x668f10.h"
