#include "../include/cls_0x495420.h"

void __thiscall cls_0x495420::meth_0x495420(cls_0x495420 *this)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int *_Memory;
  undefined uVar4;
  undefined4 unaff_EDI;
  
  uVar4 = (undefined)unaff_EDI;
  if ((int **)this->mbr_0x28 == (int **)0x0) {
    _Memory = (int *)0x0;
  }
  else {
    _Memory = *(int **)this->mbr_0x28;
  }
  if (_Memory != (int *)this->mbr_0x28) {
    do {
      puVar1 = (undefined4 *)_Memory[2];
      piVar2 = (int *)*_Memory;
      if (_Memory != (int *)this->mbr_0x28) {
        *(int **)_Memory[1] = piVar2;
        *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      uVar3 = FUN_004a75a0((int)(puVar1 + 6));
      if (((char)uVar3 != '\0') && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      uVar4 = (undefined)unaff_EDI;
      _Memory = piVar2;
    } while (piVar2 != (int *)this->mbr_0x28);
  }
  cls_0x4b28a0::meth_0x4b2fe0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,(char)this,uVar4);
  cls_0x4b28a0::meth_0x4b3430((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,(int *)this);
  return;
}



void __thiscall cls_0x495420::meth_0x4a7530(cls_0x495420 *this)

{
  this->mbr_0x0 = (dword)&HeapTracker__vftable_669d74_00669d74;
  return;
}


