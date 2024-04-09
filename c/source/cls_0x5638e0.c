#include "../include/cls_0x5638e0.h"

void __thiscall cls_0x5638e0::meth_0x5638e0(cls_0x5638e0 *this,undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(1);
  }
  this->mbr_0x4 = this->mbr_0x4 - 1;
  return;
}



void __thiscall cls_0x5638e0::meth_0x567f50(cls_0x5638e0 *this)

{
  ScrollBar *pSVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  ScrollBar *this_00;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  piVar3 = DAT_00707ce4;
  puStack_8 = &LAB_0063883b;
  iVar4 = *(int *)(DAT_0070c528 + 0x1c);
  iVar5 = 0;
  local_4 = 0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    piVar6 = *(int **)(iVar5 + 4 + this->mbr_0x0);
    if (piVar6 != *(int **)(iVar5 + this->mbr_0x0 + 8)) {
      do {
        if ((piVar3 != (int *)0x0) && (*piVar6 != 0)) {
          (**(code **)(*piVar3 + 0xb8))(piVar6);
          *piVar6 = 0;
        }
        piVar6 = piVar6 + 9;
      } while (piVar6 != *(int **)(iVar5 + 8 + this->mbr_0x0));
    }
    this_00 = *(ScrollBar **)(this->mbr_0x0 + 4 + iVar5);
    iVar7 = this->mbr_0x0 + iVar5;
    if (this_00 != (ScrollBar *)0x0) {
      pSVar1 = *(ScrollBar **)(iVar7 + 8);
      for (; this_00 != pSVar1; this_00 = (ScrollBar *)&this_00->mbr_0x24) {
        GUI::ScrollBar::meth_0x52afb0(this_00);
      }
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(iVar7 + 4));
    }
    *(undefined4 *)(iVar7 + 4) = 0;
    *(undefined4 *)(iVar7 + 8) = 0;
    *(undefined4 *)(iVar7 + 0xc) = 0;
    iVar5 = iVar5 + 0x10;
  }
  pvVar2 = (void *)this->mbr_0x0;
  if (pvVar2 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar2,0x10,*(int *)((int)pvVar2 + -4),thunk_FUN_00565e60);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar2 + -4));
  }
  pvVar2 = (void *)this[6].mbr_0x0;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)this[5].mbr_0x4;
    if (pvVar2 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar2,0x10,*(int *)((int)pvVar2 + -4),::cls_0x50db20::meth_0x432510);
                    /* WARNING: Subroutine does not return */
      _free((void *)((int)pvVar2 + -4));
    }
    if (this[4].mbr_0x0 < 0x10) {
      this[4].mbr_0x0 = 0xf;
      this[3].mbr_0x4 = 0;
      *(undefined *)&this[1].mbr_0x4 = 0;
      ExceptionList = pvStack_c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)this[1].mbr_0x4);
  }
  _eh_vector_destructor_iterator_(pvVar2,0xc,*(int *)((int)pvVar2 + -4),meth_0x566fe0);
                    /* WARNING: Subroutine does not return */
  _free((void *)((int)pvVar2 + -4));
}



void * __thiscall cls_0x5638e0::meth_0x5839f0(cls_0x5638e0 *this,void *param_1)

{
  *(undefined4 *)((int)param_1 + 0x18) = 0xf;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined *)((int)param_1 + 4) = 0;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)param_1,(_String_base *)(this + 1),0,0xffffffff);
  return param_1;
}


