#include "../include/cls_0x56f590.h"

void __thiscall
cls_0x56f590::meth_0x56f590(cls_0x56f590 *this,int **param_1,int *param_2,int *param_3)

{
  int *_Memory;
  
  _Memory = param_2;
  if (param_2 != param_3) {
    do {
      param_2 = (int *)*_Memory;
      if (_Memory != (int *)this->mbr_0x4) {
        *(int *)_Memory[1] = *_Memory;
        *(int *)(*_Memory + 4) = _Memory[1];
        FUN_0056d200((int)_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      _Memory = param_2;
    } while (param_2 != param_3);
  }
  *param_1 = param_2;
  return;
}



void __thiscall cls_0x56f590::meth_0x56fe40(cls_0x56f590 *this)

{
  int **ppiVar1;
  int *piVar2;
  cls_0x56f590 *local_4;
  
  ppiVar1 = (int **)this->mbr_0x4;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  local_4 = this;
  meth_0x56f590(this,(int **)&local_4,piVar2,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}


