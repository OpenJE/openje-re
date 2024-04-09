#include "../include/cls_0x6bcc88.h"

cls_0x6bcc88 * __thiscall cls_0x6bcc88::cls_0x6bcc88(cls_0x6bcc88 *this)

{
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x4 = 1;
  this->vftptr_0x0 = &cls_0x6bcc88__vftable_6bcc88_006bcc88;
  return this;
}



cls_0x6bcc88 * __thiscall cls_0x6bcc88::~cls_0x6bcc88(cls_0x6bcc88 *this)

{
  cls_0x6bcc88__vftable_6bcc88 *_Memory;
  cls_0x6bcc88__vftable_6bcc88 **extraout_ECX;
  int unaff_EBP;
  
  FUN_0061781c();
  *(cls_0x6bcc88__vftable_6bcc88 ***)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &cls_0x6bcc88__vftable_6bcc88_006bcc88;
  _Memory = extraout_ECX[4];
  *(undefined4 *)(unaff_EBP + -4) = 0;
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



undefined4 __thiscall cls_0x6bcc88::virt_meth_0x5f517a(cls_0x6bcc88 *this,undefined4 *param_1)

{
  char *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  void *pvVar4;
  uint uVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    if ((undefined *)this->mbr_0x10 != (undefined *)0x0) {
      *(undefined *)this->mbr_0x10 = 0;
    }
  }
  else {
    puVar3 = param_1;
    do {
      cVar2 = *(char *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    } while (cVar2 != '\0');
    pcVar1 = (char *)((int)puVar3 + (1 - ((int)param_1 + 1)));
    if ((char *)this->mbr_0xc < pcVar1) {
      pvVar4 = operator_new((uint)pcVar1);
      if (pvVar4 == (void *)0x0) {
        return 0x8007000e;
      }
      this->mbr_0xc = (dword)pcVar1;
      this->mbr_0x10 = (dword)pvVar4;
    }
    puVar3 = (undefined4 *)this->mbr_0x10;
    for (uVar5 = (uint)pcVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar3 = *param_1;
      param_1 = param_1 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar5 = (uint)pcVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined *)puVar3 = *(undefined *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  return 0;
}



void * __thiscall cls_0x6bcc88::virt_meth_0x5f5699(cls_0x6bcc88 *this,byte param_1)

{
  ~cls_0x6bcc88(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


#include "../include/cls_0x6bcc88.h"
