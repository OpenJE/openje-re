#include "../include/cls_0x51abf0.h"

void __thiscall cls_0x51abf0::meth_0x51abf0(cls_0x51abf0 *this)

{
  dword dVar1;
  int **ppiVar2;
  int **ppiVar3;
  int *piVar4;
  int **ppiVar5;
  dword *pdVar6;
  int **ppiVar7;
  int *piVar8;
  cls_0x514f00 *this_00;
  int *local_158;
  cls_0x51abf0 local_154;
  cls_0x51abf0 *local_148;
  undefined local_144 [4];
  int *local_140;
  dword local_13c;
  cls_0x514f00 local_138 [23];
  cls_0x514f00 local_24 [2];
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006360f1;
  local_c = ExceptionList;
  if (this->mbr_0x8 < 2) {
    return;
  }
  ExceptionList = &local_c;
  local_148 = this;
  ppiVar3 = (int **)FUN_005147e0();
  piVar4 = (int *)0x0;
  local_154.mbr_0x8 = 0;
  local_4 = 0;
  local_154.mbr_0x4 = (dword)ppiVar3;
  _eh_vector_constructor_iterator_
            (local_144,0xc,0x1a,cls_0x5149b0::cls_0x5149b0,cls_0x514f00::meth_0x516270);
  dVar1 = this->mbr_0x8;
  local_4 = CONCAT31(local_4._1_3_,1);
  local_158 = (int *)0x0;
  do {
    if (dVar1 == 0) {
      if ((int *)0x1 < piVar4) {
        local_158 = (int *)((int)piVar4 - 1);
        this_00 = local_138;
        do {
          cls_0x514f00::meth_0x519db0(this_00,this_00 + -1);
          this_00 = this_00 + 1;
          local_158 = (int *)((int)local_158 - 1);
        } while (local_158 != (int *)0x0);
      }
      dVar1 = (&local_154)[(int)piVar4].mbr_0x8;
      (&local_154)[(int)piVar4].mbr_0x8 = this->mbr_0x4;
      this->mbr_0x4 = dVar1;
      dVar1 = *(dword *)(local_144 + (int)piVar4 * 0xc + -4);
      *(dword *)(local_144 + (int)piVar4 * 0xc + -4) = this->mbr_0x8;
      this->mbr_0x8 = dVar1;
      local_4 = local_4 & 0xffffff00;
      _eh_vector_destructor_iterator_(local_144,0xc,0x1a,cls_0x514f00::meth_0x516270);
      if (ppiVar3 == (int **)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = *ppiVar3;
      }
      cls_0x514f00::meth_0x516080((cls_0x514f00 *)&local_154,&local_158,piVar4,(int *)ppiVar3);
                    /* WARNING: Subroutine does not return */
      _free((void *)local_154.mbr_0x4);
    }
    ppiVar2 = (int **)this->mbr_0x4;
    if (ppiVar2 == (int **)0x0) {
      ppiVar7 = (int **)0x0;
    }
    else {
      ppiVar7 = (int **)*ppiVar2;
    }
    if (ppiVar3 == (int **)0x0) {
      ppiVar5 = (int **)0x0;
    }
    else {
      ppiVar5 = (int **)*ppiVar3;
    }
    if (((ppiVar7 != ppiVar2) && (ppiVar5 != ppiVar7)) &&
       (ppiVar2 = (int **)*ppiVar7, piVar4 = local_158, ppiVar5 != ppiVar2)) {
      if (&local_154 != local_148) {
        cls_0x514f00::meth_0x514f00((cls_0x514f00 *)&local_154,1);
        local_148->mbr_0x8 = local_148->mbr_0x8 - 1;
        ppiVar3 = (int **)local_154.mbr_0x4;
      }
      *ppiVar7[1] = (int)ppiVar2;
      *ppiVar2[1] = (int)ppiVar5;
      *ppiVar5[1] = (int)ppiVar7;
      piVar4 = ppiVar5[1];
      ppiVar5[1] = ppiVar2[1];
      ppiVar2[1] = ppiVar7[1];
      ppiVar7[1] = piVar4;
      piVar4 = local_158;
    }
    piVar8 = (int *)0x0;
    if (piVar4 == (int *)0x0) {
LAB_0051ad34:
      local_154.mbr_0x4 = (dword)(&local_140)[(int)piVar8 * 3];
      (&local_140)[(int)piVar8 * 3] = (int *)ppiVar3;
      dVar1 = (&local_13c)[(int)piVar8 * 3];
      (&local_13c)[(int)piVar8 * 3] = local_154.mbr_0x8;
      local_154.mbr_0x8 = dVar1;
      if (piVar8 == piVar4) {
        piVar4 = (int *)((int)piVar4 + 1);
        local_158 = piVar4;
      }
    }
    else {
      pdVar6 = &local_13c;
      do {
        if (*pdVar6 == 0) break;
        cls_0x514f00::meth_0x519db0((cls_0x514f00 *)(pdVar6 + -2),&local_154);
        ppiVar3 = (int **)pdVar6[-1];
        pdVar6[-1] = local_154.mbr_0x4;
        dVar1 = *pdVar6;
        *pdVar6 = local_154.mbr_0x8;
        piVar8 = (int *)((int)piVar8 + 1);
        pdVar6 = pdVar6 + 3;
        local_154.mbr_0x8 = dVar1;
        local_154.mbr_0x4 = (dword)ppiVar3;
      } while (piVar8 < piVar4);
      if (piVar8 != (int *)0x19) goto LAB_0051ad34;
      cls_0x514f00::meth_0x519db0(local_24,&local_154);
    }
    dVar1 = local_148->mbr_0x8;
    this = local_148;
    ppiVar3 = (int **)local_154.mbr_0x4;
  } while( true );
}


