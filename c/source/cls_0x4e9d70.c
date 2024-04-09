#include "../include/cls_0x4e9d70.h"

void __thiscall
cls_0x4e9d70::meth_0x4e9d70(cls_0x4e9d70 *this,int **param_1,int **param_2,int **param_3)

{
  int **_Memory;
  
  _Memory = param_2;
  if (param_2 != param_3) {
    do {
      param_2 = (int **)*_Memory;
      if (_Memory != (int **)this->mbr_0x4) {
        *_Memory[1] = (int)*_Memory;
        *(int **)((int)*_Memory + 4) = _Memory[1];
        FUN_004e93e0((int *)_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      _Memory = param_2;
    } while (param_2 != param_3);
  }
  *param_1 = (int *)param_2;
  return;
}



void __thiscall cls_0x4e9d70::meth_0x4e9f10(cls_0x4e9d70 *this)

{
  int **ppiVar1;
  int **ppiVar2;
  cls_0x4e9d70 *local_4;
  
  ppiVar1 = (int **)this->mbr_0x4;
  if (ppiVar1 == (int **)0x0) {
    ppiVar2 = (int **)0x0;
  }
  else {
    ppiVar2 = (int **)*ppiVar1;
  }
  local_4 = this;
  meth_0x4e9d70(this,(int **)&local_4,ppiVar2,ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x4e9d70::meth_0x4e9f50(cls_0x4e9d70 *this)

{
  int **ppiVar1;
  cls_0x4e9d70 *local_4;
  
  ppiVar1 = (int **)this->mbr_0x4;
  local_4 = this;
  if (ppiVar1 == (int **)0x0) {
    meth_0x4e9d70(this,(int **)&local_4,(int **)0x0,(int **)0x0);
    return;
  }
  meth_0x4e9d70(this,(int **)&local_4,(int **)*ppiVar1,ppiVar1);
  return;
}


