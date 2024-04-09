#include "../include/cls_0x4b7c30.h"

void __thiscall cls_0x4b7c30::meth_0x4b7c30(cls_0x4b7c30 *this,undefined param_1,undefined4 param_2)

{
  int iVar1;
  dword dVar2;
  int **ppiVar3;
  int **ppiVar4;
  int *piVar5;
  int **ppiVar6;
  dword *pdVar7;
  int **ppiVar8;
  int *piVar9;
  cls_0x4b7750 *this_00;
  int *local_158;
  undefined local_154 [20];
  int *local_140;
  dword local_13c;
  cls_0x4b7750 local_138 [23];
  cls_0x4b7750 local_24 [2];
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632701;
  local_c = ExceptionList;
  if (this->mbr_0x8 < 2) {
    return;
  }
  ExceptionList = &local_c;
  local_154._12_4_ = this;
  ppiVar4 = (int **)FUN_0056e0b0();
  piVar5 = (int *)0x0;
  local_154._8_4_ = 0;
  local_4 = 0;
  local_154._4_4_ = ppiVar4;
  _eh_vector_constructor_iterator_
            (local_154 + 0x10,0xc,0x1a,cls_0x401b00::cls_0x401b00,GUI::Interface::meth_0x4f6d40);
  dVar2 = this->mbr_0x8;
  local_4 = CONCAT31(local_4._1_3_,1);
  local_158 = (int *)0x0;
  do {
    if (dVar2 == 0) {
      if ((int *)0x1 < piVar5) {
        local_158 = (int *)((int)piVar5 - 1);
        this_00 = local_138;
        do {
          cls_0x4b7750::meth_0x4b7830(this_00,this_00 + -1);
          this_00 = this_00 + 1;
          local_158 = (int *)((int)local_158 - 1);
        } while (local_158 != (int *)0x0);
      }
      dVar2 = *(dword *)(local_154 + (int)piVar5 * 0xc + 8);
      iVar1 = (int)piVar5 * 0xc;
      *(dword *)(local_154 + iVar1 + 8) = this->mbr_0x4;
      this->mbr_0x4 = dVar2;
      dVar2 = *(dword *)(local_154 + iVar1 + 0xc);
      *(dword *)(local_154 + iVar1 + 0xc) = this->mbr_0x8;
      this->mbr_0x8 = dVar2;
      local_4 = local_4 & 0xffffff00;
      _eh_vector_destructor_iterator_(local_154 + 0x10,0xc,0x1a,GUI::Interface::meth_0x4f6d40);
      if (ppiVar4 == (int **)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = *ppiVar4;
      }
      GUI::Interface::meth_0x4b9d60((Interface *)local_154,&local_158,piVar5,(int *)ppiVar4);
                    /* WARNING: Subroutine does not return */
      _free((void *)local_154._4_4_);
    }
    ppiVar3 = (int **)this->mbr_0x4;
    if (ppiVar3 == (int **)0x0) {
      ppiVar8 = (int **)0x0;
    }
    else {
      ppiVar8 = (int **)*ppiVar3;
    }
    if (ppiVar4 == (int **)0x0) {
      ppiVar6 = (int **)0x0;
    }
    else {
      ppiVar6 = (int **)*ppiVar4;
    }
    if (((ppiVar8 != ppiVar3) && (ppiVar6 != ppiVar8)) &&
       (ppiVar3 = (int **)*ppiVar8, piVar5 = local_158, ppiVar6 != ppiVar3)) {
      if ((cls_0x4b7c30 *)local_154 != (cls_0x4b7c30 *)local_154._12_4_) {
        cls_0x4b7750::meth_0x4b7500((cls_0x4b7750 *)local_154,1);
        *(dword *)(local_154._12_4_ + 8) = *(dword *)(local_154._12_4_ + 8) - 1;
        ppiVar4 = (int **)local_154._4_4_;
      }
      *ppiVar8[1] = (int)ppiVar3;
      *ppiVar3[1] = (int)ppiVar6;
      *ppiVar6[1] = (int)ppiVar8;
      piVar5 = ppiVar6[1];
      ppiVar6[1] = ppiVar3[1];
      ppiVar3[1] = ppiVar8[1];
      ppiVar8[1] = piVar5;
      piVar5 = local_158;
    }
    piVar9 = (int *)0x0;
    if (piVar5 == (int *)0x0) {
LAB_004b7d84:
      local_154._4_4_ = (&local_140)[(int)piVar9 * 3];
      (&local_140)[(int)piVar9 * 3] = (int *)ppiVar4;
      dVar2 = (&local_13c)[(int)piVar9 * 3];
      (&local_13c)[(int)piVar9 * 3] = local_154._8_4_;
      local_154._8_4_ = dVar2;
      if (piVar9 == piVar5) {
        piVar5 = (int *)((int)piVar5 + 1);
        local_158 = piVar5;
      }
    }
    else {
      pdVar7 = &local_13c;
      do {
        if (*pdVar7 == 0) break;
        cls_0x4b7750::meth_0x4b7830((cls_0x4b7750 *)(pdVar7 + -2),local_154);
        ppiVar4 = (int **)pdVar7[-1];
        pdVar7[-1] = local_154._4_4_;
        dVar2 = *pdVar7;
        *pdVar7 = local_154._8_4_;
        piVar9 = (int *)((int)piVar9 + 1);
        pdVar7 = pdVar7 + 3;
        local_154._8_4_ = dVar2;
        local_154._4_4_ = ppiVar4;
      } while (piVar9 < piVar5);
      if (piVar9 != (int *)0x19) goto LAB_004b7d84;
      cls_0x4b7750::meth_0x4b7830(local_24,local_154);
    }
    dVar2 = *(dword *)(local_154._12_4_ + 8);
    this = (cls_0x4b7c30 *)local_154._12_4_;
    ppiVar4 = (int **)local_154._4_4_;
  } while( true );
}


