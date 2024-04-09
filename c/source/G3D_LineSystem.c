#include "../include/G3D_LineSystem.h"

void __thiscall G3D_LineSystem::virt_meth_0x4cbc50(G3D_LineSystem *this,FILE *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_004c8b00(param_1);
  FID_conflict__fwprintf(param_1,(wchar_t *)"LineSystem");
  FUN_004c8b30(param_1);
  iVar3 = 0;
  iVar2 = 0;
  while( true ) {
    if (this->mbr_0x28 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)(this->mbr_0x2c - this->mbr_0x28) / 0x120;
    }
    if (iVar1 <= iVar3) break;
    FUN_004ca4b0((void *)(this->mbr_0x28 + iVar2),param_1);
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x120;
  }
  FUN_004c8b70(param_1);
  return;
}



G3D_LineSystem * __thiscall G3D_LineSystem::G3D_LineSystem(G3D_LineSystem *this)

{
  (this->G3D_BaseAttribute).mbr_0x1c = 0xf;
  (this->G3D_BaseAttribute).mbr_0x18 = 0;
  *(undefined *)&(this->G3D_BaseAttribute).mbr_0x8 = 0;
  this->mbr_0x20 = 0;
  (this->G3D_BaseAttribute).vftptr_0x0 =
       (G3D_BaseAttribute__vftable_671ce0 *)&G3D_LineSystem__vftable_671f9c_00671f9c;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  return this;
}



undefined4 * __thiscall G3D_LineSystem::virt_meth_0x4d7940(G3D_LineSystem *this,byte param_1)

{
  ~G3D_LineSystem(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



G3D_LineSystem * __thiscall G3D_LineSystem::~G3D_LineSystem(G3D_LineSystem *this)

{
  G3D_LineSystem *_Memory;
  
  (this->G3D_BaseAttribute).vftptr_0x0 =
       (G3D_BaseAttribute__vftable_671ce0 *)&G3D_LineSystem__vftable_671f9c_00671f9c;
  _Memory = (G3D_LineSystem *)this->mbr_0x28;
  if (_Memory != (G3D_LineSystem *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  (this->G3D_BaseAttribute).vftptr_0x0 = &G3D_BaseAttribute__vftable_671ce0_00671ce0;
  if (0xf < (this->G3D_BaseAttribute).mbr_0x1c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)(this->G3D_BaseAttribute).mbr_0x8);
  }
  (this->G3D_BaseAttribute).mbr_0x18 = 0;
  (this->G3D_BaseAttribute).mbr_0x1c = 0xf;
  *(undefined *)&(this->G3D_BaseAttribute).mbr_0x8 = 0;
  return _Memory;
}



void __thiscall G3D_LineSystem::virt_meth_0x4d8270(G3D_LineSystem *this)

{
  int **ppiVar1;
  dword *pdVar2;
  char *pcVar3;
  int *piVar4;
  cls_0x4ca480 *pcVar5;
  int **ppiVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 *****pppppuVar10;
  int **ppiVar11;
  byte *pbVar12;
  int **ppiVar13;
  bool bVar14;
  bool bVar15;
  uint unaff_retaddr;
  dword adStack_2ac [68];
  undefined4 uStack_19c;
  G3D_LineSystem *local_17c;
  undefined local_178 [16];
  dword local_168;
  dword local_164;
  dword local_160;
  undefined4 *****local_158 [4];
  char *local_148;
  uint local_144;
  int local_140 [4];
  cls_0x4ca480 local_130 [72];
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006336d6;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  local_17c = this;
  ppiVar1 = (int **)FUN_004cad70();
  local_178._8_4_ = 0;
  local_4 = 0;
  local_178._4_4_ = ppiVar1;
  FUN_0052ba00('{');
  pdVar2 = (dword *)FUN_0052b940(local_140);
  local_168 = pdVar2[1];
  local_178._12_4_ = *pdVar2;
  local_164 = pdVar2[2];
  local_160 = pdVar2[3];
  do {
    if (local_178._12_4_ == 0x7d) {
      pcVar5 = cls_0x4ca480::cls_0x4ca480(local_130);
      pdVar2 = adStack_2ac;
      for (iVar9 = 0x48; iVar9 != 0; iVar9 = iVar9 + -1) {
        *pdVar2 = pcVar5->mbr_0x0;
        pcVar5 = pcVar5 + 1;
        pdVar2 = pdVar2 + 1;
      }
      cls_0x4c8e20::meth_0x4d6fd0((cls_0x4c8e20 *)&this->mbr_0x24,local_178._8_4_);
      if (ppiVar1 == (int **)0x0) {
        ppiVar6 = (int **)0x0;
      }
      else {
        ppiVar6 = (int **)*ppiVar1;
      }
      if (ppiVar6 != ppiVar1) {
        iVar9 = 0;
        do {
          ppiVar11 = ppiVar6 + 2;
          ppiVar13 = (int **)(this->mbr_0x28 + iVar9);
          for (iVar8 = 0x48; iVar8 != 0; iVar8 = iVar8 + -1) {
            *ppiVar13 = *ppiVar11;
            ppiVar11 = ppiVar11 + 1;
            ppiVar13 = ppiVar13 + 1;
          }
          ppiVar6 = (int **)*ppiVar6;
          iVar9 = iVar9 + 0x120;
        } while (ppiVar6 != ppiVar1);
      }
      if (ppiVar1 == (int **)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = *ppiVar1;
      }
      uStack_19c = 0x4d84a5;
      GUI::Interface::meth_0x4b9d60((Interface *)local_178,(int **)&local_17c,piVar4,(int *)ppiVar1)
      ;
                    /* WARNING: Subroutine does not return */
      _free((void *)local_178._4_4_);
    }
    if (local_178._12_4_ == 0x100) {
      FUN_0052afe0((cls_0x50db20 *)&stack0xfffffea4);
      local_4 = CONCAT31(local_4._1_3_,1);
      pcVar7 = "Segment";
      do {
        pcVar3 = pcVar7;
        pcVar7 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3 = pcVar3 + -0x671700;
      if (local_148 == (char *)0x0) {
LAB_004d8372:
        if ((local_148 < pcVar3) || (local_148 != pcVar3)) goto LAB_004d83c3;
        cls_0x4ca480::cls_0x4ca480(local_130);
        cls_0x4ca480::meth_0x4d76b0(local_130);
        uStack_19c = 0x4d83a9;
        piVar4 = (int *)FUN_004cadd0(ppiVar1,ppiVar1[1],local_130);
        GUI::Interface::meth_0x4cf870((Interface *)local_178,1);
        ppiVar1[1] = piVar4;
        *(int **)piVar4[1] = piVar4;
        ppiVar1 = (int **)local_178._4_4_;
      }
      else {
        pcVar7 = local_148;
        if (pcVar3 <= local_148) {
          pcVar7 = pcVar3;
        }
        pppppuVar10 = local_158[0];
        if (local_144 < 0x10) {
          pppppuVar10 = local_158;
        }
        bVar14 = false;
        iVar9 = 0;
        bVar15 = true;
        pbVar12 = (byte *)"Segment";
        do {
          if (pcVar7 == (char *)0x0) break;
          pcVar7 = pcVar7 + -1;
          bVar14 = *(byte *)pppppuVar10 < *pbVar12;
          bVar15 = *(byte *)pppppuVar10 == *pbVar12;
          pppppuVar10 = (undefined4 *****)((int)pppppuVar10 + 1);
          pbVar12 = pbVar12 + 1;
        } while (bVar15);
        if (!bVar15) {
          iVar9 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        }
        if (iVar9 == 0) goto LAB_004d8372;
LAB_004d83c3:
        cls_0x4cc4d0::meth_0x4cc4d0((cls_0x4cc4d0 *)(local_178 + 0xc));
      }
      local_4 = local_4 & 0xffffff00;
      if (0xf < local_144) {
                    /* WARNING: Subroutine does not return */
        _free(local_158[0]);
      }
      local_144 = 0xf;
      local_148 = (char *)0x0;
      local_158[0] = (undefined4 *****)((uint)local_158[0] & 0xffffff00);
      this = local_17c;
    }
    pdVar2 = (dword *)FUN_0052b940(local_140);
    local_168 = pdVar2[1];
    local_178._12_4_ = *pdVar2;
    local_164 = pdVar2[2];
    local_160 = pdVar2[3];
  } while( true );
}



void __thiscall G3D_LineSystem::virt_meth_0x4d84e0(G3D_LineSystem *this)

{
  uint uVar1;
  G3D_LineSystem *pGVar2;
  int **ppiVar3;
  int *piVar4;
  cls_0x4ca480 *pcVar5;
  int **ppiVar6;
  int iVar7;
  int iVar8;
  int **ppiVar9;
  dword *pdVar10;
  int **ppiVar11;
  FILE *in_stack_00000004;
  dword adStack_270 [67];
  undefined4 uStack_164;
  undefined local_140 [16];
  int local_130;
  cls_0x4ca480 local_12c [72];
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006336eb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_140._12_4_ = this;
  ppiVar3 = (int **)FUN_004cad70();
  iVar8 = 0;
  local_140._8_4_ = 0;
  local_4 = 0;
  uStack_164 = 0x4d8535;
  local_140._4_4_ = ppiVar3;
  _fread(&local_130,4,1,in_stack_00000004);
  if (0 < local_130) {
    do {
      cls_0x4ca480::cls_0x4ca480(local_12c);
      cls_0x4ca480::meth_0x4ca500(local_12c,in_stack_00000004);
      piVar4 = (int *)FUN_004cadd0(ppiVar3,ppiVar3[1],local_12c);
      GUI::Interface::meth_0x4cf870((Interface *)local_140,1);
      ppiVar3[1] = piVar4;
      *(int **)piVar4[1] = piVar4;
      iVar8 = iVar8 + 1;
      ppiVar3 = (int **)local_140._4_4_;
    } while (iVar8 < local_130);
  }
  pcVar5 = cls_0x4ca480::cls_0x4ca480(local_12c);
  pGVar2 = (G3D_LineSystem *)local_140._12_4_;
  uVar1 = local_140._8_4_;
  pdVar10 = adStack_270;
  for (iVar8 = 0x48; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pdVar10 = pcVar5->mbr_0x0;
    pcVar5 = pcVar5 + 1;
    pdVar10 = pdVar10 + 1;
  }
  cls_0x4c8e20::meth_0x4d6fd0((cls_0x4c8e20 *)&pGVar2->mbr_0x24,uVar1);
  if (ppiVar3 == (int **)0x0) {
    ppiVar6 = (int **)0x0;
  }
  else {
    ppiVar6 = (int **)*ppiVar3;
  }
  if (ppiVar6 != ppiVar3) {
    iVar8 = 0;
    do {
      ppiVar9 = ppiVar6 + 2;
      ppiVar11 = (int **)(pGVar2->mbr_0x28 + iVar8);
      for (iVar7 = 0x48; iVar7 != 0; iVar7 = iVar7 + -1) {
        *ppiVar11 = *ppiVar9;
        ppiVar9 = ppiVar9 + 1;
        ppiVar11 = ppiVar11 + 1;
      }
      ppiVar6 = (int **)*ppiVar6;
      iVar8 = iVar8 + 0x120;
    } while (ppiVar6 != ppiVar3);
  }
  if (ppiVar3 == (int **)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *ppiVar3;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)local_140,(int **)(local_140 + 0xc),piVar4,(int *)ppiVar3);
                    /* WARNING: Subroutine does not return */
  _free((void *)local_140._4_4_);
}



void __thiscall G3D_LineSystem::virt_meth_0x4d8630(G3D_LineSystem *this,int *param_1)

{
  int **ppiVar1;
  uint uVar2;
  G3D_LineSystem *pGVar3;
  int *piVar4;
  cls_0x4ca480 *pcVar5;
  int **ppiVar6;
  int iVar7;
  int iVar8;
  int **ppiVar9;
  dword *pdVar10;
  int **ppiVar11;
  int *in_stack_00000008;
  dword adStack_270 [68];
  undefined4 uStack_160;
  undefined local_140 [20];
  cls_0x4ca480 local_12c [72];
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006336eb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_140._12_4_ = this;
  local_140._4_4_ = FUN_004cad70();
  local_140._8_4_ = 0;
  iVar7 = *(int *)(*in_stack_00000008 + (int)param_1);
  local_4 = 0;
  *in_stack_00000008 = *in_stack_00000008 + 4;
  if (0 < iVar7) {
    do {
      local_140._16_4_ = iVar7;
      ppiVar1 = (int **)local_140._4_4_;
      cls_0x4ca480::cls_0x4ca480(local_12c);
      cls_0x4ca480::meth_0x4ca530(local_12c,(int)param_1,in_stack_00000008);
      uStack_160 = 0x4d86c2;
      piVar4 = (int *)FUN_004cadd0(ppiVar1,ppiVar1[1],local_12c);
      GUI::Interface::meth_0x4cf870((Interface *)local_140,1);
      ppiVar1[1] = piVar4;
      local_140._16_4_ = local_140._16_4_ + -1;
      *(int **)piVar4[1] = piVar4;
      iVar7 = local_140._16_4_;
    } while (local_140._16_4_ != 0);
  }
  ppiVar1 = (int **)local_140._4_4_;
  pcVar5 = cls_0x4ca480::cls_0x4ca480(local_12c);
  pGVar3 = (G3D_LineSystem *)local_140._12_4_;
  uVar2 = local_140._8_4_;
  pdVar10 = adStack_270;
  for (iVar7 = 0x48; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pdVar10 = pcVar5->mbr_0x0;
    pcVar5 = pcVar5 + 1;
    pdVar10 = pdVar10 + 1;
  }
  cls_0x4c8e20::meth_0x4d6fd0((cls_0x4c8e20 *)&pGVar3->mbr_0x24,uVar2);
  if (ppiVar1 == (int **)0x0) {
    ppiVar6 = (int **)0x0;
  }
  else {
    ppiVar6 = (int **)*ppiVar1;
  }
  if (ppiVar6 != ppiVar1) {
    iVar7 = 0;
    do {
      ppiVar9 = ppiVar6 + 2;
      ppiVar11 = (int **)(pGVar3->mbr_0x28 + iVar7);
      for (iVar8 = 0x48; iVar8 != 0; iVar8 = iVar8 + -1) {
        *ppiVar11 = *ppiVar9;
        ppiVar9 = ppiVar9 + 1;
        ppiVar11 = ppiVar11 + 1;
      }
      ppiVar6 = (int **)*ppiVar6;
      iVar7 = iVar7 + 0x120;
    } while (ppiVar6 != ppiVar1);
  }
  if (ppiVar1 == (int **)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *ppiVar1;
  }
  uStack_160 = 0x4d8758;
  GUI::Interface::meth_0x4b9d60
            ((Interface *)local_140,(int **)(local_140 + 0xc),piVar4,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)local_140._4_4_);
}


#include "../include/G3D_LineSystem.h"
