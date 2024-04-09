#include "../include/cls_0x4ca480.h"

cls_0x4ca480 * __thiscall cls_0x4ca480::cls_0x4ca480(cls_0x4ca480 *this)

{
  cls_0x4c9b30 *this_00;
  int iVar1;
  
  iVar1 = 2;
  this_00 = (cls_0x4c9b30 *)this;
  do {
    cls_0x4c9b30::cls_0x4c9b30(this_00);
    this_00 = (cls_0x4c9b30 *)&this_00[1].mbr_0x4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return this;
}



void __thiscall cls_0x4ca480::meth_0x4ca500(cls_0x4ca480 *this,FILE *param_1)

{
  int iVar1;
  
  iVar1 = 2;
  do {
    cls_0x4c9b30::meth_0x4c9e00((cls_0x4c9b30 *)this,param_1);
    this = (cls_0x4ca480 *)&((cls_0x4c9b30 *)((int)this + 0x8c))->mbr_0x4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



void __thiscall cls_0x4ca480::meth_0x4ca530(cls_0x4ca480 *this,int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 2;
  do {
    cls_0x4c9b30::meth_0x4c9fb0((cls_0x4c9b30 *)this,param_1,param_2);
    this = (cls_0x4ca480 *)&((cls_0x4c9b30 *)((int)this + 0x8c))->mbr_0x4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



void __thiscall cls_0x4ca480::meth_0x4d76b0(cls_0x4ca480 *this)

{
  cls_0x4ca480 *pcVar1;
  int **ppiVar2;
  dword *pdVar3;
  char *pcVar4;
  int *piVar5;
  int **ppiVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *****pppppuVar9;
  byte *pbVar10;
  cls_0x4ca480 *pcVar11;
  bool bVar12;
  bool bVar13;
  uint unaff_retaddr;
  cls_0x4ca480 *local_ec;
  undefined local_e8 [16];
  dword local_d8;
  dword local_d4;
  dword local_d0;
  undefined4 *****local_c8 [4];
  char *local_b8;
  uint local_b4;
  int local_b0 [4];
  cls_0x4c9b30 local_a0;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006335e6;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  local_ec = this;
  ppiVar2 = (int **)FUN_004cad50();
  local_e8._8_4_ = 0;
  local_4 = 0;
  local_e8._4_4_ = ppiVar2;
  FUN_0052ba00('{');
  pdVar3 = (dword *)FUN_0052b940(local_b0);
  local_d8 = pdVar3[1];
  local_e8._12_4_ = *pdVar3;
  local_d4 = pdVar3[2];
  local_d0 = pdVar3[3];
  if (local_e8._12_4_ != 0x7d) {
    do {
      if (local_e8._12_4_ == 0x100) {
        FUN_0052afe0((cls_0x50db20 *)&stack0xffffff34);
        local_4 = CONCAT31(local_4._1_3_,1);
        pcVar7 = "Vertex";
        do {
          pcVar4 = pcVar7;
          pcVar7 = pcVar4 + 1;
        } while (*pcVar4 != '\0');
        pcVar4 = pcVar4 + -0x671a24;
        if (local_b8 == (char *)0x0) {
LAB_004d77b2:
          if ((local_b8 < pcVar4) || (local_b8 != pcVar4)) goto LAB_004d7803;
          cls_0x4c9b30::cls_0x4c9b30(&local_a0);
          cls_0x4c9b30::meth_0x4cc620(&local_a0);
          piVar5 = (int *)FUN_004cad90(ppiVar2,ppiVar2[1],&local_a0.mbr_0x0);
          GUI::Interface::meth_0x4cf7c0((Interface *)local_e8,1);
          ppiVar2[1] = piVar5;
          *(int **)piVar5[1] = piVar5;
          ppiVar2 = (int **)local_e8._4_4_;
        }
        else {
          pcVar7 = local_b8;
          if (pcVar4 <= local_b8) {
            pcVar7 = pcVar4;
          }
          pppppuVar9 = local_c8[0];
          if (local_b4 < 0x10) {
            pppppuVar9 = local_c8;
          }
          bVar12 = false;
          iVar8 = 0;
          bVar13 = true;
          pbVar10 = (byte *)"Vertex";
          do {
            if (pcVar7 == (char *)0x0) break;
            pcVar7 = pcVar7 + -1;
            bVar12 = *(byte *)pppppuVar9 < *pbVar10;
            bVar13 = *(byte *)pppppuVar9 == *pbVar10;
            pppppuVar9 = (undefined4 *****)((int)pppppuVar9 + 1);
            pbVar10 = pbVar10 + 1;
          } while (bVar13);
          if (!bVar13) {
            iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          }
          if (iVar8 == 0) goto LAB_004d77b2;
LAB_004d7803:
          cls_0x4cc4d0::meth_0x4cc4d0((cls_0x4cc4d0 *)(local_e8 + 0xc));
        }
        local_4 = local_4 & 0xffffff00;
        if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
          _free(local_c8[0]);
        }
        local_b4 = 0xf;
        local_b8 = (char *)0x0;
        local_c8[0] = (undefined4 *****)((uint)local_c8[0] & 0xffffff00);
      }
      pdVar3 = (dword *)FUN_0052b940(local_b0);
      local_d8 = pdVar3[1];
      local_e8._12_4_ = *pdVar3;
      local_d4 = pdVar3[2];
      local_d0 = pdVar3[3];
    } while (local_e8._12_4_ != 0x7d);
    local_e8._12_4_ = 0x7d;
  }
  pcVar1 = local_ec;
  if (ppiVar2 == (int **)0x0) {
    ppiVar6 = (int **)0x0;
  }
  else {
    ppiVar6 = (int **)*ppiVar2;
  }
  for (; ppiVar6 != ppiVar2; ppiVar6 = (int **)*ppiVar6) {
    pdVar3 = (dword *)(ppiVar6 + 2);
    pcVar11 = pcVar1;
    for (iVar8 = 0x24; iVar8 != 0; iVar8 = iVar8 + -1) {
      pcVar11->mbr_0x0 = *pdVar3;
      pdVar3 = pdVar3 + 1;
      pcVar11 = pcVar11 + 1;
    }
    pcVar1 = pcVar1 + 0x24;
  }
  if (ppiVar2 == (int **)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = *ppiVar2;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)local_e8,(int **)&local_ec,piVar5,(int *)ppiVar2);
                    /* WARNING: Subroutine does not return */
  _free((void *)local_e8._4_4_);
}


