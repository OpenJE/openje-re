#include "../include/DialogueWindow.h"

DialogueWindow * __thiscall DialogueWindow::~DialogueWindow(DialogueWindow *this)

{
  cls_0x4296c0 *this_00;
  cls_0x4a5be0 *this_01;
  cls_0x4a1f30 *this_02;
  dword dVar1;
  int *piStack_10;
  void *pvStack_c;
  undefined *puStack_8;
  uint uStack_4;
  
  puStack_8 = &LAB_0063a444;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->Window).Base.vftptr_0x0 = (Base__vftable_66e41c *)&DialogueWindow__vftable_69eea4_0069eea4;
  *(undefined ***)&(this->Window).Base.field_0x18 = &PTR_virt_meth_0x596600_0069ee9c;
  this_00 = (cls_0x4296c0 *)this->mbr_0xd78;
  uStack_4 = 2;
  if (this_00 != (cls_0x4296c0 *)0x0) {
    cls_0x4296c0::~cls_0x4296c0(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  if ((undefined4 *)this->mbr_0xd7c != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0xd7c)(1);
  }
  if ((undefined4 *)this->mbr_0xd8c != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0xd8c)(1);
    this->mbr_0xd8c = 0;
  }
  if ((undefined4 *)this->mbr_0xd94 != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0xd94)(1);
  }
  if (this->mbr_0xd90 != 0) {
    (**(code **)(*DAT_00707ce4 + 0xb8))(&this->mbr_0xd90);
  }
  this_01 = (cls_0x4a5be0 *)this->mbr_0xd9c;
  if (this_01 != (cls_0x4a5be0 *)0x0) {
    cls_0x4a5be0::meth_0x4a5d70(this_01);
                    /* WARNING: Subroutine does not return */
    _free(this_01);
  }
  this_02 = (cls_0x4a1f30 *)this->mbr_0xd98;
  if (this_02 != (cls_0x4a1f30 *)0x0) {
    cls_0x4a1f30::meth_0x4a4c10(this_02);
                    /* WARNING: Subroutine does not return */
    _free(this_02);
  }
  dVar1 = this->mbr_0xda8;
  if (dVar1 != 0) {
    cls_0x50dbb0::meth_0x55ab20
              ((cls_0x50dbb0 *)(dVar1 + 8),&piStack_10,(int **)**(int ***)(dVar1 + 0xc),
               *(int ***)(dVar1 + 0xc));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(dVar1 + 0xc));
  }
  if (0xf < this->mbr_0xdc4) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xdb0);
  }
  this->mbr_0xdc4 = 0xf;
  this->mbr_0xdc0 = 0;
  *(undefined *)&this->mbr_0xdb0 = 0;
  uStack_4 = uStack_4 & 0xffffff00;
  cls_0x570800::meth_0x595f50
            ((cls_0x570800 *)&this->mbr_0xd64,&piStack_10,*(int ***)(int **)this->mbr_0xd68,
             (int **)this->mbr_0xd68);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0xd68);
}



/* WARNING: Removing unreachable block (ram,0x00593ac4) */
/* WARNING: Removing unreachable block (ram,0x00593c94) */
/* WARNING: Removing unreachable block (ram,0x00593864) */

void __thiscall DialogueWindow::meth_0x593660(DialogueWindow *this)

{
  byte bVar1;
  Base__vftable_66e41c *pBVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  Label *pLVar7;
  Picture *pPVar8;
  FILE *pFVar9;
  Window *this_00;
  ReplyLabel *pRVar10;
  char *pcVar11;
  Window *this_01;
  cls_0x4c0190 *pcVar12;
  Gfx_CamCtrl_Orbit *pGVar13;
  dword dVar14;
  Gfx_Light__vftable_651b54 **ppGVar15;
  int iVar16;
  dword *pdVar17;
  Gfx_Light__vftable_651b54 **ppGVar18;
  dword unaff_EDI;
  ReplyLabel **ppRVar19;
  cls_0x4c0190 *pcVar20;
  Gfx_Light__vftable_651b54 **ppGVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined4 *puVar24;
  char *pcVar25;
  void *pvStack_1b4;
  dword dStack_1ac;
  dword dStack_1a8;
  Gfx_Light__vftable_651b54 *pGStack_1a4;
  dword dStack_1a0;
  dword dStack_174;
  uint uStack_170;
  dword dStack_16c;
  dword dStack_128;
  uint uStack_124;
  void *_Memory;
  dword dStack_c4;
  FILE FStack_a0;
  dword dStack_68;
  dword dStack_4c;
  dword dStack_34;
  dword dStack_28;
  dword dStack_24;
  void *pvStack_c;
  undefined *puStack_8;
  dword dStack_4;
  
  dStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063a2c9;
  pvStack_c = ExceptionList;
  dVar14 = this->mbr_0xd74;
  iVar16 = *(int *)(dVar14 + 0x130) + *(int *)(dVar14 + 0x128) * 2;
  iVar6 = *(int *)(dVar14 + 0x28);
  if (*(int *)(dVar14 + 0x28) < iVar16) {
    iVar6 = iVar16;
  }
  dStack_c4 = 0x5936b5;
  ExceptionList = &pvStack_c;
  (*((this->Window).Base.vftptr_0x0)->virt_meth_0x4b2790_16)
            ((Base *)this,*(int *)(dVar14 + 0x24),iVar6);
  (*(this->Window).Base.vftptr_0x0[4].virt_meth_0x4b2850_28)((Base *)this,dVar14 + 8);
  dStack_c4 = 0x5936d3;
  (*(this->Window).Base.vftptr_0x0[1].virt_meth_0x4b27e0_24)((Base *)this,0x100,0xc0);
  (*(this->Window).Base.vftptr_0x0[2].virt_meth_0x4b2770_12)
            ((Base *)this,(uint)*(byte *)(dVar14 + 0x2c),unaff_EDI);
  FStack_a0._bufsiz = 0xf;
  FStack_a0._charbuf = 0;
  FStack_a0._cnt = FStack_a0._cnt & 0xffffff00;
  pcVar25 = "Dialogue Window";
  do {
    pcVar11 = pcVar25;
    pcVar25 = pcVar11 + 1;
  } while (*pcVar11 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&FStack_a0,"Dialogue Window",(uint)(pcVar11 + -0x69ede8));
  (*(this->Window).Base.vftptr_0x0[1].virt_meth_0x4b2800_32)((Base *)this,&FStack_a0);
  if (0xf < (uint)FStack_a0._bufsiz) {
                    /* WARNING: Subroutine does not return */
    _free((void *)FStack_a0._cnt);
  }
  (*(this->Window).Base.vftptr_0x0[1].virt_meth_0x4b2880_40)((Base *)this);
  pLVar7 = (Label *)FUN_004a7680(0xe64);
  dStack_4 = 1;
  if (pLVar7 == (Label *)0x0) {
    pLVar7 = (Label *)0x0;
  }
  else {
    pLVar7 = GUI::Label::Label(pLVar7,3);
  }
  pBVar2 = (this->Window).Base.vftptr_0x0;
  dStack_4 = 0xffffffff;
  this->mbr_0xd4c = (dword)pLVar7;
  (*pBVar2[3].virt_meth_0x4b2800_32)((Base *)this,(FILE *)pLVar7);
  dStack_c4 = 0x5937b9;
  (**(code **)(*(int *)this->mbr_0xd4c + 0x10))();
  dStack_c4 = dVar14 + 0x60;
  (**(code **)(*(int *)this->mbr_0xd4c + 0xcc))();
  (**(code **)(*(int *)this->mbr_0xd4c + 0x148))();
  (**(code **)(*(int *)this->mbr_0xd4c + 0x168))();
  pcVar25 = "NPC Name";
  do {
    pcVar11 = pcVar25;
    pcVar25 = pcVar11 + 1;
  } while (*pcVar11 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&dStack_c4,"NPC Name",(uint)(pcVar11 + -0x69eddc));
  dStack_24 = 2;
  (**(code **)(*(int *)this->mbr_0xd4c + 300))();
  dStack_28 = 0xffffffff;
  (**(code **)(*(int *)this->mbr_0xd4c + 0x3c))();
  (**(code **)(*(int *)this->mbr_0xd4c + 0x180))();
  pPVar8 = (Picture *)FUN_004a7680(0xd2c);
  dStack_34 = 3;
  if (pPVar8 == (Picture *)0x0) {
    pFVar9 = (FILE *)0x0;
  }
  else {
    pFVar9 = (FILE *)GUI::Picture::Picture(pPVar8,2);
  }
  pBVar2 = (this->Window).Base.vftptr_0x0;
  dStack_34 = 0xffffffff;
  this->mbr_0xd50 = (dword)pFVar9;
  (*pBVar2[3].virt_meth_0x4b2800_32)((Base *)this,pFVar9);
  (**(code **)(*(int *)this->mbr_0xd50 + 0xcc))();
  bVar1 = *(byte *)(dVar14 + 0x5c);
  (**(code **)(*(int *)this->mbr_0xd50 + 0x84))();
  (**(code **)(*(int *)this->mbr_0xd50 + 0x10))();
  (**(code **)(*(int *)this->mbr_0xd50 + 0x3c))();
  pcVar25 = "icon_unknown.bmp";
  do {
    pcVar11 = pcVar25;
    pcVar25 = pcVar11 + 1;
  } while (*pcVar11 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&stack0xffffff14,"icon_unknown.bmp",(uint)(pcVar11 + -0x650614));
  _Memory = (void *)0x1;
  dStack_4c = 4;
  (**(code **)(*(int *)this->mbr_0xd50 + 0x130))();
  dStack_68 = 0xffffffff;
  if (0xf < bVar1) {
                    /* WARNING: Subroutine does not return */
    uStack_124 = 0x5939b0;
    _free(_Memory);
  }
  uStack_124 = 0x5939bd;
  pLVar7 = (Label *)FUN_004a7680(0xe64);
  dStack_68 = 5;
  if (pLVar7 == (Label *)0x0) {
    pLVar7 = (Label *)0x0;
  }
  else {
    uStack_124 = 0x5939dc;
    pLVar7 = GUI::Label::Label(pLVar7,3);
  }
  pBVar2 = (this->Window).Base.vftptr_0x0;
  dStack_68 = 0xffffffff;
  *(Label **)&(this->Window).Base.field_0xd1c = pLVar7;
  uStack_124 = 0x5939f9;
  (*pBVar2[3].virt_meth_0x4b2800_32)((Base *)this,(FILE *)pLVar7);
  uStack_124 = *(uint *)(dVar14 + 0xf8);
  dStack_128 = 0x593a12;
  (**(code **)(**(int **)&(this->Window).Base.field_0xd1c + 0x10))();
  dStack_128 = dVar14 + 0xb0;
  (**(code **)(**(int **)&(this->Window).Base.field_0xd1c + 0xcc))();
  (**(code **)(**(int **)&(this->Window).Base.field_0xd1c + 0x148))();
  (**(code **)(**(int **)&(this->Window).Base.field_0xd1c + 0x168))();
  uStack_124 = uStack_124 & 0xffffff00;
  pcVar25 = "";
  do {
    pcVar11 = pcVar25;
    pcVar25 = pcVar11 + 1;
  } while (*pcVar11 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&dStack_128,"",(uint)(pcVar11 + -0x64d7d8));
  FStack_a0._bufsiz = 6;
  (**(code **)(**(int **)&(this->Window).Base.field_0xd1c + 300))();
  FStack_a0._charbuf = 0xffffffff;
  (**(code **)(**(int **)&(this->Window).Base.field_0xd1c + 0x3c))();
  (**(code **)(**(int **)&(this->Window).Base.field_0xd1c + 0x180))();
  this_00 = (Window *)FUN_004a7680(0xd1c);
  FStack_a0._base = (char *)0x7;
  if (this_00 == (Window *)0x0) {
    pFVar9 = (FILE *)0x0;
  }
  else {
    pFVar9 = (FILE *)GUI::Window::Window(this_00,0);
  }
  pBVar2 = (this->Window).Base.vftptr_0x0;
  FStack_a0._base = (char *)0xffffffff;
  this->mbr_0xd48 = (dword)pFVar9;
  (*pBVar2[3].virt_meth_0x4b2800_32)((Base *)this,pFVar9);
  (**(code **)(*(int *)this->mbr_0xd48 + 0x10))();
  (**(code **)(*(int *)this->mbr_0xd48 + 0xcc))();
  (**(code **)(*(int *)this->mbr_0xd48 + 0x3c))();
  (**(code **)(*(int *)this->mbr_0xd48 + 100))();
  dStack_16c = 0x593b8e;
  pLVar7 = (Label *)FUN_004a7680(0xe64);
  if (pLVar7 == (Label *)0x0) {
    pLVar7 = (Label *)0x0;
  }
  else {
    dStack_16c = 0x593bad;
    pLVar7 = GUI::Label::Label(pLVar7,3);
  }
  this->mbr_0xd54 = (dword)pLVar7;
  dStack_16c = 0x593bcd;
  (**(code **)(*(int *)this->mbr_0xd48 + 0xa4))();
  dStack_16c = *(dword *)(dVar14 + 0x1dc);
  uStack_170 = *(uint *)(dVar14 + 0x1d8);
  dStack_174 = 0x593be6;
  (**(code **)(*(int *)this->mbr_0xd54 + 0x10))();
  dStack_174 = dVar14 + 400;
  (**(code **)(*(int *)this->mbr_0xd54 + 0xcc))();
  (**(code **)(*(int *)this->mbr_0xd54 + 0x148))();
  (**(code **)(*(int *)this->mbr_0xd54 + 0x168))();
  uStack_170 = uStack_170 & 0xffffff00;
  pcVar25 = "PC Name";
  do {
    pcVar11 = pcVar25;
    pcVar25 = pcVar11 + 1;
  } while (*pcVar11 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&dStack_174,"PC Name",(uint)(pcVar11 + -0x69edd4));
  (**(code **)(*(int *)this->mbr_0xd54 + 300))();
  (**(code **)(*(int *)this->mbr_0xd54 + 0x3c))();
  (**(code **)(*(int *)this->mbr_0xd54 + 0x180))();
  dStack_1a0 = 0x593cd4;
  pPVar8 = (Picture *)FUN_004a7680(0xd2c);
  if (pPVar8 == (Picture *)0x0) {
    pPVar8 = (Picture *)0x0;
  }
  else {
    dStack_1a0 = 0x593cf3;
    pPVar8 = GUI::Picture::Picture(pPVar8,2);
  }
  this->mbr_0xd58 = (dword)pPVar8;
  dStack_1a0 = 0x593d13;
  (**(code **)(*(int *)this->mbr_0xd48 + 0xa4))();
  dStack_1a0 = dVar14 + 0x160;
  pGStack_1a4 = (Gfx_Light__vftable_651b54 *)0x593d25;
  (**(code **)(*(int *)this->mbr_0xd58 + 0xcc))();
  pGStack_1a4 = (Gfx_Light__vftable_651b54 *)(uint)*(byte *)(dVar14 + 0x18c);
  dStack_1a8 = 0x593d39;
  (**(code **)(*(int *)this->mbr_0xd58 + 0x84))();
  dStack_1a8 = *(dword *)(dVar14 + 0x188);
  dStack_1ac = *(dword *)(dVar14 + 0x184);
  (**(code **)(*(int *)this->mbr_0xd58 + 0x10))();
  pvStack_1b4 = *(void **)(dVar14 + 0x17c);
  (**(code **)(*(int *)this->mbr_0xd58 + 0x3c))();
  pcVar25 = "portrait_elf.bmp";
  do {
    pcVar11 = pcVar25;
    pcVar25 = pcVar11 + 1;
  } while (*pcVar11 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)(&pGStack_1a4 + 1),"portrait_elf.bmp",(uint)(pcVar11 + -0x69edc0));
  pcVar25 = (char *)0x1;
  (**(code **)(*(int *)this->mbr_0xd58 + 0x130))();
  if ((Gfx_Light__vftable_651b54 *)0xf < pGStack_1a4) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar25);
  }
  ppRVar19 = (ReplyLabel **)&(this->Window).Base.field_0xd20;
  dStack_1a0 = 10;
  while( true ) {
    uVar5 = (uint)pvStack_1b4;
    pRVar10 = (ReplyLabel *)FUN_004a7680(0xe6c);
    if (pRVar10 == (ReplyLabel *)0x0) {
      pRVar10 = (ReplyLabel *)0x0;
    }
    else {
      pRVar10 = ReplyLabel::ReplyLabel(pRVar10);
    }
    *ppRVar19 = pRVar10;
    (**(code **)(*(int *)this->mbr_0xd48 + 0xa4))();
    (*(((*ppRVar19)->Label).Window.Base.vftptr_0x0)->virt_meth_0x4b2790_16)
              ((Base *)*ppRVar19,*(int *)(dVar14 + 0x228),*(int *)(dVar14 + 0x22c));
    (*((*ppRVar19)->Label).Window.Base.vftptr_0x0[4].virt_meth_0x4b2850_28)
              ((Base *)*ppRVar19,dVar14 + 0x1e0);
    puVar24 = (undefined4 *)(dVar14 + 0x1fc);
    (*((*ppRVar19)->Label).Window.Base.vftptr_0x0[7].virt_meth_0x4b27c0_20)(*ppRVar19);
    (*((*ppRVar19)->Label).Window.Base.vftptr_0x0[8].virt_meth_0x4b2750_8)
              ((Base *)*ppRVar19,(undefined4 *)0xff808080,puVar24);
    dStack_1a0 = 0xf;
    pGStack_1a4 = (Gfx_Light__vftable_651b54 *)0x0;
    pvStack_1b4 = (void *)((uint)pvStack_1b4 & 0xffffff00);
    pcVar25 = "";
    do {
      pcVar11 = pcVar25;
      pcVar25 = pcVar11 + 1;
    } while (*pcVar11 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&stack0xfffffe48,"",(uint)(pcVar11 + -0x64d7d8));
    (*((*ppRVar19)->Label).Window.Base.vftptr_0x0[6].virt_meth_0x4b2830_36)
              ((Base *)*ppRVar19,(FILE *)&stack0xfffffe48);
    if (0xf < dStack_1a0) break;
    dStack_1a0 = 0xf;
    pGStack_1a4 = (Gfx_Light__vftable_651b54 *)0x0;
    pvStack_1b4 = (void *)(uVar5 & 0xffffff00);
    (*((*ppRVar19)->Label).Window.Base.vftptr_0x0[1].virt_meth_0x4b2790_16)
              ((Base *)*ppRVar19,*(int *)(dVar14 + 0x220),*(int *)(dVar14 + 0x224));
    (*((*ppRVar19)->Label).Window.Base.vftptr_0x0[8].virt_meth_0x4b2800_32)
              ((Base *)*ppRVar19,(FILE *)0x1);
    (*((*ppRVar19)->Label).Window.Base.vftptr_0x0[1].virt_meth_0x4b2880_40)((Base *)*ppRVar19);
    FUN_00591c40(*ppRVar19,this);
    ppRVar19 = ppRVar19 + 1;
    dStack_1a0 = dStack_1a0 - 1;
    if (dStack_1a0 == 0) {
      this_01 = (Window *)FUN_004a7680(0xd1c);
      if (this_01 == (Window *)0x0) {
        pFVar9 = (FILE *)0x0;
      }
      else {
        pFVar9 = (FILE *)GUI::Window::Window(this_01,0);
      }
      pBVar2 = (this->Window).Base.vftptr_0x0;
      this->mbr_0xd5c = (dword)pFVar9;
      (*pBVar2[3].virt_meth_0x4b2800_32)((Base *)this,pFVar9);
      (**(code **)(*(int *)this->mbr_0xd5c + 0xcc))();
      (**(code **)(*(int *)this->mbr_0xd5c + 0x84))(*(undefined *)(dVar14 + 0x134));
      (**(code **)(*(int *)this->mbr_0xd5c + 0x10))
                (*(undefined4 *)(dVar14 + 300),*(undefined4 *)(dVar14 + 0x130));
      (**(code **)(*(int *)this->mbr_0xd5c + 0x3c))
                (*(undefined4 *)(dVar14 + 0x124),*(undefined4 *)(dVar14 + 0x128));
      pcVar12 = (cls_0x4c0190 *)operator_new(0x280);
      if (pcVar12 == (cls_0x4c0190 *)0x0) {
        pcVar12 = (cls_0x4c0190 *)0x0;
      }
      else {
        pcVar12 = cls_0x4c0190::cls_0x4c0190(pcVar12);
      }
      this->mbr_0xd78 = (dword)pcVar12;
      pGVar13 = (Gfx_CamCtrl_Orbit *)operator_new(0xb8);
      if (pGVar13 == (Gfx_CamCtrl_Orbit *)0x0) {
        pGVar13 = (Gfx_CamCtrl_Orbit *)0x0;
      }
      else {
        pGVar13 = Gfx_CamCtrl_Orbit::Gfx_CamCtrl_Orbit(pGVar13);
      }
      this->mbr_0xd7c = (dword)pGVar13;
      cls_0x4b28a0::meth_0x4b28c0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&dStack_1ac,&dStack_1a8);
      uVar22 = FUN_00616e24();
      pcVar25 = (char *)uVar22;
      uVar23 = FUN_00616e24();
      dVar14 = (dword)uVar23;
      FUN_00616e24();
      FUN_00616e24();
      pcVar12 = (cls_0x4c0190 *)this->mbr_0xd78;
      if (dVar14 == 0) {
        dVar14 = pcVar12->mbr_0x8;
      }
      if ((char *)uVar22 == (char *)0x0) {
        pcVar25 = (char *)pcVar12->mbr_0xc;
      }
      fVar3 = (float)dVar14;
      pdVar17 = (dword *)&stack0xfffffe2c;
      pcVar20 = pcVar12;
      for (iVar16 = 6; iVar16 != 0; iVar16 = iVar16 + -1) {
        pcVar20->mbr_0x0 = *pdVar17;
        pdVar17 = pdVar17 + 1;
        pcVar20 = (cls_0x4c0190 *)&pcVar20->mbr_0x4;
      }
      if ((int)dVar14 < 0) {
        fVar3 = fVar3 + 4.294967e+09;
      }
      fVar4 = (float)(int)pcVar25;
      if ((int)pcVar25 < 0) {
        fVar4 = fVar4 + 4.294967e+09;
      }
      pcVar12->mbr_0x18 = (dword)(fVar3 / fVar4);
      (pcVar12->Gfx_Camera).mbr_0x10c = (dword)(fVar3 / fVar4);
      (pcVar12->Gfx_Camera).mbr_0x4a = 1;
      cls_0x4c0190::meth_0x4bffd0(pcVar12);
      FUN_004901d0(pcVar12->mbr_0x164);
      dVar14 = this->mbr_0xd78;
      *(undefined4 *)(dVar14 + 0x24) = 0;
      *(undefined4 *)(dVar14 + 0x1e0) = 0;
      *(undefined4 *)(dVar14 + 0x1c4) = 0;
      *(undefined4 *)(dVar14 + 0x1a8) = 0;
      *(undefined4 *)(dVar14 + 0x18c) = 0;
      cls_0x4c0190::meth_0x429d20((cls_0x4c0190 *)this->mbr_0xd78,this->mbr_0xd7c);
      pGStack_1a4 = (Gfx_Light__vftable_651b54 *)0x1;
      dStack_1a0 = 0x3f800000;
      dStack_174 = 0x3f800000;
      uStack_170 = 0;
      dStack_16c = 0;
      ppGVar15 = (Gfx_Light__vftable_651b54 **)operator_new(0xb4);
      if (ppGVar15 == (Gfx_Light__vftable_651b54 **)0x0) {
        ppGVar15 = (Gfx_Light__vftable_651b54 **)0x0;
      }
      else {
        ppGVar15[0x10] = (Gfx_Light__vftable_651b54 *)0x3f800000;
        ppGVar15[0xb] = (Gfx_Light__vftable_651b54 *)0x3f800000;
        ppGVar15[6] = (Gfx_Light__vftable_651b54 *)0x3f800000;
        ppGVar15[1] = (Gfx_Light__vftable_651b54 *)0x3f800000;
        ppGVar15[0xf] = (Gfx_Light__vftable_651b54 *)0x0;
        ppGVar15[0xe] = (Gfx_Light__vftable_651b54 *)0x0;
        ppGVar15[0xd] = (Gfx_Light__vftable_651b54 *)0x0;
        ppGVar15[0xc] = (Gfx_Light__vftable_651b54 *)0x0;
        ppGVar15[10] = (Gfx_Light__vftable_651b54 *)0x0;
        ppGVar15[9] = (Gfx_Light__vftable_651b54 *)0x0;
        ppGVar15[8] = (Gfx_Light__vftable_651b54 *)0x0;
        ppGVar15[7] = (Gfx_Light__vftable_651b54 *)0x0;
        ppGVar15[5] = (Gfx_Light__vftable_651b54 *)0x0;
        ppGVar15[4] = (Gfx_Light__vftable_651b54 *)0x0;
        ppGVar15[3] = (Gfx_Light__vftable_651b54 *)0x0;
        ppGVar15[2] = (Gfx_Light__vftable_651b54 *)0x0;
        *ppGVar15 = &Gfx_Light__vftable_651b54_00651b54;
        ppGVar15[0x11] = (Gfx_Light__vftable_651b54 *)0x0;
        ppGVar18 = &pGStack_1a4;
        ppGVar21 = ppGVar15 + 0x13;
        for (iVar16 = 0x1a; iVar16 != 0; iVar16 = iVar16 + -1) {
          *ppGVar21 = *ppGVar18;
          ppGVar18 = ppGVar18 + 1;
          ppGVar21 = ppGVar21 + 1;
        }
      }
      this->mbr_0xd8c = (dword)ppGVar15;
      *(undefined *)(ppGVar15 + 0x12) = 0;
      dVar14 = this->mbr_0xd8c;
      *(undefined4 *)(dVar14 + 0x34) = 0;
      *(undefined4 *)(dVar14 + 0x38) = 0x42c80000;
      *(undefined4 *)(dVar14 + 0x3c) = 0;
      *(undefined4 *)(dVar14 + 0x80) = 0;
      *(undefined4 *)(dVar14 + 0x84) = 0x42c80000;
      *(undefined4 *)(dVar14 + 0x88) = 0;
      ExceptionList = this_00;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_1b4);
}



void __thiscall
DialogueWindow::meth_0x5945f0(DialogueWindow *this,void *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  _String_base *p_Var7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint unaff_retaddr;
  int in_stack_00000010;
  undefined local_84 [4];
  void *local_80;
  dword local_70;
  uint local_6c;
  undefined local_68 [4];
  void *local_64;
  dword local_54;
  uint local_50;
  undefined local_4c [4];
  void *local_48;
  dword local_38;
  uint local_34;
  char local_30 [4];
  void *local_2c;
  dword local_1c;
  uint local_18;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063a353;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  uVar11 = 0;
  uVar13 = 0;
  local_50 = 0xf;
  local_54 = 0;
  local_64 = (void *)((uint)local_64 & 0xffffff00);
  local_6c = 0xf;
  local_70 = 0;
  local_80 = (void *)((uint)local_80 & 0xffffff00);
  local_4 = 1;
  pcVar4 = "";
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ExceptionList = &local_c;
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)param_1,"",(uint)(pcVar3 + -0x64d7d8));
  if (0 < in_stack_00000010) {
    FUN_00616d8c(local_30,(byte *)"%d.  ");
    pcVar4 = local_30;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)param_1,local_30,(int)pcVar4 - (int)(local_30 + 1));
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    iVar10 = 0;
    do {
      switch(iVar10) {
      case 0:
        puVar5 = (undefined4 *)(param_2 + 4);
        puVar8 = puVar5;
        if (0xf < *(uint *)(param_2 + 0x18)) {
          puVar8 = (undefined4 *)*puVar5;
        }
        if (*(char *)((int)puVar8 + uVar11) == '{') {
          iVar10 = 2;
          uVar13 = uVar11;
        }
        else {
          if (0xf < *(uint *)(param_2 + 0x18)) {
            puVar5 = (undefined4 *)*puVar5;
          }
          if (*(char *)((int)puVar5 + uVar11) == '<') {
            iVar10 = 3;
            uVar13 = uVar11;
          }
          else {
            iVar10 = 1;
            uVar13 = uVar11;
          }
        }
        break;
      case 1:
        uVar2 = *(uint *)(param_2 + 0x18);
        puVar5 = (undefined4 *)(param_2 + 4);
        puVar8 = puVar5;
        if (0xf < uVar2) {
          puVar8 = (undefined4 *)*puVar5;
        }
        if (*(char *)((int)puVar8 + uVar11) == '{') {
          puVar8 = puVar5;
          if (0xf < uVar2) {
            puVar8 = (undefined4 *)*puVar5;
          }
          if (0xf < *(uint *)(param_2 + 0x18)) {
            puVar5 = (undefined4 *)*puVar5;
          }
          ::cls_0x50db20::meth_0x594370
                    ((cls_0x50db20 *)param_1,(int)puVar5 + uVar13,(int)puVar8 + uVar11);
          iVar10 = 2;
          uVar13 = uVar11;
        }
        else {
          puVar8 = puVar5;
          if (0xf < uVar2) {
            puVar8 = (undefined4 *)*puVar5;
          }
          if (*(char *)((int)puVar8 + uVar11) == '<') {
            puVar8 = puVar5;
            if (0xf < uVar2) {
              puVar8 = (undefined4 *)*puVar5;
            }
            if (0xf < *(uint *)(param_2 + 0x18)) {
              puVar5 = (undefined4 *)*puVar5;
            }
            ::cls_0x50db20::meth_0x594370
                      ((cls_0x50db20 *)param_1,(int)puVar5 + uVar13,(int)puVar8 + uVar11);
            iVar10 = 3;
            uVar13 = uVar11;
          }
        }
        break;
      case 2:
        if (*(uint *)(param_2 + 0x18) < 0x10) {
          iVar6 = param_2 + 4;
        }
        else {
          iVar6 = *(int *)(param_2 + 4);
        }
        if (*(char *)(iVar6 + uVar11) == '}') {
          p_Var7 = (_String_base *)
                   cls_0x4d8d70::meth_0x458ef0
                             ((cls_0x4d8d70 *)param_2,local_4c,uVar13,(uVar11 - uVar13) + 1);
          iVar10 = 0;
          local_4._0_1_ = 2;
          ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_68,p_Var7,0,0xffffffff);
          local_4._0_1_ = 1;
          if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
            _free(local_48);
          }
          local_34 = 0xf;
          local_38 = 0;
          local_48 = (void *)((uint)local_48 & 0xffffff00);
        }
        break;
      case 3:
        if (*(uint *)(param_2 + 0x18) < 0x10) {
          iVar6 = param_2 + 4;
        }
        else {
          iVar6 = *(int *)(param_2 + 4);
        }
        if (*(char *)(iVar6 + uVar11) == '>') {
          p_Var7 = (_String_base *)
                   cls_0x4d8d70::meth_0x458ef0
                             ((cls_0x4d8d70 *)param_2,local_30,uVar13,(uVar11 - uVar13) + 1);
          iVar10 = 0;
          local_4._0_1_ = 3;
          ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_68,p_Var7,0,0xffffffff);
          local_4._0_1_ = 1;
          if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c);
          }
          local_18 = 0xf;
          local_1c = 0;
          local_2c = (void *)((uint)local_2c & 0xffffff00);
          FUN_005930e0((cls_0x50db20 *)local_84,(int)local_68);
          cls_0x4d8d70::meth_0x4256e0((cls_0x4d8d70 *)param_1,(int)local_84,0,0xffffffff);
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(param_2 + 0x14));
    if (iVar10 == 1) {
      puVar5 = (undefined4 *)(param_2 + 4);
      puVar8 = puVar5;
      if (0xf < *(uint *)(param_2 + 0x18)) {
        puVar8 = (undefined4 *)*puVar5;
      }
      if (0xf < *(uint *)(param_2 + 0x18)) {
        puVar5 = (undefined4 *)*puVar5;
      }
      puVar9 = (undefined4 *)((int)param_1 + 4);
      puVar12 = puVar9;
      if (0xf < *(uint *)((int)param_1 + 0x18)) {
        puVar12 = (undefined4 *)*puVar9;
      }
      if (0xf < *(uint *)((int)param_1 + 0x18)) {
        puVar9 = (undefined4 *)*puVar9;
      }
      ::cls_0x50db20::meth_0x592fb0
                ((cls_0x50db20 *)param_1,*(int *)((int)param_1 + 0x14) + (int)puVar9,
                 (int)puVar12 + *(int *)((int)param_1 + 0x14),uVar13 + (int)puVar5,
                 *(int *)(param_2 + 0x14) + (int)puVar8);
    }
  }
  if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
    _free(local_80);
  }
  local_6c = 0xf;
  local_70 = 0;
  local_80 = (void *)((uint)local_80 & 0xffffff00);
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    _free(local_64);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall DialogueWindow::virt_meth_0x595010(DialogueWindow *this,uint param_1,uint param_2)

{
  cls_0x4a5be0 *this_00;
  char *pcVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  cls_0x5944f0 *pcVar6;
  char *pcVar7;
  int iVar8;
  dword *pdVar9;
  void **ppvVar10;
  DWORD DVar11;
  int iVar12;
  cls_0x4960d0 *pcVar13;
  GameActionEquip *this_01;
  GameActionEquip *extraout_ECX;
  GameActionEquip *extraout_ECX_00;
  GameActionEquip *this_02;
  int iVar14;
  int unaff_EBX;
  undefined4 *puVar15;
  int unaff_EBP;
  int unaff_ESI;
  undefined *puVar16;
  int **ppiVar17;
  undefined4 *unaff_EDI;
  dword *pdVar18;
  float10 extraout_ST0;
  ulonglong uVar19;
  uint unaff_retaddr;
  float10 *in_stack_ffffddbc;
  undefined *puVar20;
  undefined4 *in_stack_ffffddcc;
  int in_stack_ffffddd0;
  uint uVar21;
  undefined4 *puStack_2214;
  float fVar22;
  uint *puVar23;
  dword dVar24;
  undefined4 uStack_21f4;
  void *pvStack_21ec;
  undefined4 *puStack_21e8;
  uint auStack_21e4 [2];
  Entity *pEStack_21dc;
  cls_0x5944f0 *pcStack_21d8;
  undefined auStack_21d4 [4];
  overflow__vftable_6647c4 *poStack_21d0;
  char *pcStack_21cc;
  dword dStack_21c0;
  uint uStack_21bc;
  undefined auStack_21a8 [4];
  undefined auStack_21a4 [16];
  undefined uStack_2194;
  undefined auStack_218c [8];
  undefined4 uStack_2184;
  int iStack_2180;
  undefined auStack_217c [12];
  dword adStack_2170 [7];
  dword dStack_2154;
  undefined4 uStack_2150;
  cls_0x50dbb0 acStack_214c [4];
  undefined4 auStack_20c8 [32];
  undefined local_2048 [12];
  uint uStack_203c;
  uint local_2038;
  dword dStack_2034;
  int iStack_1f5c;
  undefined uStack_5c;
  undefined uStack_38;
  undefined uStack_34;
  undefined uStack_20;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063a3d0;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  net::packet::packet((packet *)local_2048);
  local_4 = 0;
  piVar4 = (int *)GameActionEquip::meth_0x54be10(this_01);
  auStack_21a4._8_4_ = piVar4;
  if ((((piVar4 == (int *)0x0) || (*(char *)((int)piVar4 + 0x3a2) == '\x01')) ||
      (*(char *)(piVar4 + 0xe8) == '\0')) ||
     ((cVar2 = (**(code **)(*piVar4 + 0x50))(), cVar2 == '\x01' ||
      (cVar2 = (**(code **)(*piVar4 + 0x1c))(), this_02 = extraout_ECX, cVar2 == '\0')))) {
    if (local_2048._8_4_ == local_2038) {
      pcStack_21cc = "Buffer overflow.";
      poStack_21d0 = &overflow__vftable_6647c4_006647c4;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(auStack_21d4 + 4,&DAT_006ddff0);
    }
    *(byte *)(uStack_203c + dStack_2034) = this->mbr_0xd60;
    uStack_203c = uStack_203c + 1;
    if (local_2038 < uStack_203c) {
      local_2038 = uStack_203c;
    }
    FUN_00587830(*(void **)(DAT_0070bd90 + 0x2c),local_2048,unaff_ESI);
    this_02 = extraout_ECX_00;
  }
  uVar21 = param_1;
  piVar4 = (int *)GameActionEquip::meth_0x54be10(this_02);
  if (((piVar4 == (int *)0x0) || (*(char *)((int)piVar4 + 0x3a2) == '\x01')) ||
     ((*(char *)(piVar4 + 0xe8) == '\0' ||
      ((cVar2 = (**(code **)(*piVar4 + 0x50))(), cVar2 == '\x01' ||
       (cVar2 = (**(code **)(*piVar4 + 0x1c))(), cVar2 == '\0')))))) {
    if (local_2048._8_4_ == local_2038) {
      pcStack_21cc = "Buffer overflow.";
      poStack_21d0 = &overflow__vftable_6647c4_006647c4;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(auStack_21d4 + 4,&DAT_006ddff0);
    }
    *(byte *)(uStack_203c + dStack_2034) = this->mbr_0xd60;
    uStack_203c = uStack_203c + 1;
    if (local_2038 < uStack_203c) {
      local_2038 = uStack_203c;
    }
    FUN_00587830(*(void **)(DAT_0070bd90 + 0x2c),local_2048,unaff_EBX);
  }
  piVar4 = (int *)cls_0x570800::meth_0x592810
                            ((cls_0x570800 *)&this->mbr_0xd64,(int *)&pcStack_21d8,&param_1);
  iVar5 = *piVar4;
  dStack_2154 = *(dword *)(iVar5 + 0x10);
  uStack_2150 = *(undefined4 *)(iVar5 + 0x14);
  cls_0x50dbb0::cls_0x50dbb0(acStack_214c,(undefined *)(iVar5 + 0x18));
  pdVar9 = (dword *)(iVar5 + 0x24);
  pdVar18 = (dword *)&acStack_214c[0].mbr_0xc;
  for (iVar14 = 10; iVar14 != 0; iVar14 = iVar14 + -1) {
    *pdVar18 = *pdVar9;
    pdVar9 = pdVar9 + 1;
    pdVar18 = pdVar18 + 1;
  }
  local_4._0_1_ = 1;
  if ((this->mbr_0xd70 == uVar21) && ((int *)this->mbr_0xda8 != (int *)0x0)) {
    iVar5 = FUN_005929e0((int *)&dStack_2154,(int *)this->mbr_0xda8);
    uStack_21f4 = uStack_21f4 & 0xffffff;
    if (iVar5 == 0) goto LAB_0059527d;
  }
  uStack_21f4 = CONCAT13(1,(undefined3)uStack_21f4);
LAB_0059527d:
  if (this->mbr_0xda8 == 0) {
    pcStack_21d8 = (cls_0x5944f0 *)operator_new(0x3c);
    local_4._0_1_ = 2;
    if (pcStack_21d8 == (cls_0x5944f0 *)0x0) {
      pcVar6 = (cls_0x5944f0 *)0x0;
    }
    else {
      pcVar6 = cls_0x5944f0::cls_0x5944f0(pcStack_21d8);
    }
    local_4._0_1_ = 1;
    this->mbr_0xda8 = (dword)pcVar6;
  }
  FUN_00594560((void *)this->mbr_0xda8,(int *)&dStack_2154);
  this->mbr_0xd70 = uVar21;
  iStack_2180 = 0xf;
  uStack_2184 = 0;
  uStack_2194 = 0;
  pcVar1 = "";
  do {
    pcVar7 = pcVar1;
    pcVar1 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)(auStack_21a4 + 0xc),"",(uint)(pcVar7 + -0x64d7d8));
  local_4._0_1_ = 3;
  if ((uStack_21f4._3_1_ != '\0') && (dStack_2154 != 0)) {
    SS::EngineStringSystem::virt_meth_0x56c260
              ((EngineStringSystem *)&DAT_0070c2d8,dStack_2154,(_String_base *)(auStack_21a4 + 0xc))
    ;
  }
  auStack_21d4 = (undefined  [4])0x0;
  adStack_2170[3] = 0xf;
  adStack_2170[2] = 0;
  auStack_217c[4] = 0;
  puVar15 = (undefined4 *)this->mbr_0xd74;
  local_4 = CONCAT31(local_4._1_3_,4);
  puStack_21e8 = puVar15;
  if (this->mbr_0xda0 != param_2) {
    dVar24 = this->mbr_0xda8;
    if (dVar24 != 0) {
      puStack_2214 = (undefined4 *)0x595393;
      cls_0x50dbb0::meth_0x55ab20
                ((cls_0x50dbb0 *)(dVar24 + 8),(int **)&pcStack_21d8,
                 (int **)**(int ***)(dVar24 + 0xc),*(int ***)(dVar24 + 0xc));
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(dVar24 + 0xc));
    }
    if ((undefined4 *)this->mbr_0xd94 != (undefined4 *)0x0) {
      (***(code ***)(undefined4 *)this->mbr_0xd94)();
      this->mbr_0xd94 = 0;
    }
    if (this->mbr_0xd90 != 0) {
      (**(code **)(*DAT_00707ce4 + 0xb8))();
    }
    this_00 = (cls_0x4a5be0 *)this->mbr_0xd9c;
    if (this_00 != (cls_0x4a5be0 *)0x0) {
      cls_0x4a5be0::meth_0x4a5d70(this_00);
                    /* WARNING: Subroutine does not return */
      _free(this_00);
    }
    cls_0x4a1f30::meth_0x4a4ba0((cls_0x4a1f30 *)this->mbr_0xd98);
    pcVar1 = "";
    do {
      pcVar7 = pcVar1;
      pcVar1 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&this->mbr_0xdac,"",(uint)(pcVar7 + -0x64d7d8));
    this->mbr_0xda0 = param_2;
  }
  if (uStack_21f4._3_1_ == '\0') {
    (*((this->Window).Base.vftptr_0x0)->virt_meth_0x4b27c0_20)(this);
    puStack_2214 = &uStack_21f4;
    auStack_21e4[0] = uStack_21f4;
    (**(code **)(*(int *)this->mbr_0xd48 + 0x14))();
    puVar16 = (undefined *)(unaff_EBP + in_stack_ffffddd0);
  }
  else {
    puVar23 = auStack_21e4;
    (**(code **)(**(int **)&(this->Window).Base.field_0xd1c + 0x14))();
    iVar14 = 0x300;
    puStack_2214 = puStack_21e8;
    (**(code **)(**(int **)&(this->Window).Base.field_0xd1c + 0x10))();
    meth_0x5945f0(this,auStack_218c,auStack_21d4 + 0x2c,this->mbr_0xd70);
    (**(code **)(**(int **)&(this->Window).Base.field_0xd1c + 300))();
    iVar5 = (**(code **)(**(int **)&(this->Window).Base.field_0xd1c + 0x160))();
    iVar5 = iVar5 + 1;
    uVar21 = uStack_21f4;
    (**(code **)(**(int **)&(this->Window).Base.field_0xd1c + 0x10))();
    if (this->mbr_0xd98 != 0) {
      uStack_21bc = 0xf;
      dStack_21c0 = 0;
      poStack_21d0 = (overflow__vftable_6647c4 *)((uint)poStack_21d0 & 0xffffff00);
      uStack_20 = 7;
      iVar8 = FUN_0048cd00(1,1);
      FUN_004a1a30((cls_0x50db20 *)auStack_21d4,(byte *)"HumF_Def_1H_Fidget_0%d.gr2",(char)iVar8);
      piVar4 = (int *)poStack_21d0;
      if (uStack_21bc < 0x10) {
        piVar4 = (int *)(auStack_21d4 + 4);
      }
      if (this->mbr_0xdc4 < 0x10) {
        pdVar9 = &this->mbr_0xdb0;
      }
      else {
        pdVar9 = (dword *)this->mbr_0xdb0;
      }
      iVar8 = __stricmp((char *)pdVar9,(char *)piVar4);
      puVar15 = unaff_EDI;
      if (iVar8 != 0) {
        piVar4 = (int *)poStack_21d0;
        if (uStack_21bc < 0x10) {
          piVar4 = (int *)(auStack_21d4 + 4);
        }
        ppvVar10 = (void **)ResourceSystem::MemStreamOpen(DAT_00707da8,piVar4,(int *)0x0);
        puVar15 = unaff_EDI;
        if (ppvVar10 != (void **)0x0) {
          Gfx_AnimationObject::DestroyAnimationGroup((void *)this->mbr_0xd98,(int *)0x2);
          FUN_00401c70(&this->mbr_0xdac,(undefined4 *)&DAT_0064d7d8);
          bVar3 = Gfx_AnimationObject::LoadAnimationFileFromBuffer
                            ((void *)this->mbr_0xd98,2,
                             (undefined4 *)((int)ppvVar10[2] - (int)ppvVar10[1]),(int)ppvVar10[1],
                             DAT_006ff0d8);
          puVar15 = unaff_EDI;
          if (bVar3) {
            ::cls_0x50db20::meth_0x401b20
                      ((cls_0x50db20 *)&this->mbr_0xdac,(_String_base *)auStack_21d4,0,0xffffffff);
            puVar15 = unaff_EDI;
          }
          FUN_00498f30(DAT_00707da8,ppvVar10);
        }
      }
      uStack_20 = 4;
      unaff_EDI = puVar15;
      if (0xf < uStack_21bc) {
                    /* WARNING: Subroutine does not return */
        _free(poStack_21d0);
      }
    }
    if ((cls_0x4a5be0 *)this->mbr_0xd9c != (cls_0x4a5be0 *)0x0) {
      cls_0x4a5be0::meth_0x4a5640((cls_0x4a5be0 *)this->mbr_0xd9c,2,0,0,0,1,1);
      cls_0x4a5be0::meth_0x548d10((cls_0x4a5be0 *)this->mbr_0xd9c,0x3f800000);
      *(undefined *)(this->mbr_0xd9c + 0x90) = 0;
      DVar11 = timeGetTime();
      this->mbr_0xda4 = DVar11;
    }
    in_stack_ffffddbc = (float10 *)&stack0xffffddf4;
    (*((this->Window).Base.vftptr_0x0)->virt_meth_0x4b27c0_20)(this);
    puStack_2214 = (undefined4 *)(puVar15[0x41] + puVar15[0x3d] + (int)puVar23);
    puVar15 = (undefined4 *)(puVar15[0x4c] + puVar15[0x4a] * 2);
    if ((int)puStack_2214 < (int)puVar15) {
      puStack_2214 = puVar15;
    }
    (*((this->Window).Base.vftptr_0x0)->virt_meth_0x4b2790_16)
              ((Base *)this,iVar14,(int)puStack_2214);
    (*(this->Window).Base.vftptr_0x0[1].virt_meth_0x4b2850_28)((Base *)this,(int)auStack_21e4);
    puVar16 = auStack_218c + auStack_21e4[0];
    in_stack_ffffddcc = puStack_21e8;
    (**(code **)(*(int *)this->mbr_0xd48 + 0x44))();
    ppiVar17 = (int **)&(this->Window).Base.field_0xd20;
    iVar8 = 10;
    uStack_21f4 = uVar21;
    do {
      poStack_21d0 = (overflow__vftable_6647c4 *)0xf;
      auStack_21d4 = (undefined  [4])0x0;
      auStack_21e4[0] = auStack_21e4[0] & 0xffffff00;
      uStack_34 = 8;
      (**(code **)(**ppiVar17 + 300))(&puStack_21e8);
      uStack_38 = 4;
      if (0xf < (uint)auStack_21d4) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_21e8);
      }
      auStack_21d4 = (undefined  [4])0xf;
      pcStack_21d8 = (cls_0x5944f0 *)0x0;
      puStack_21e8 = (undefined4 *)((uint)puStack_21e8 & 0xffffff00);
      FUN_00591c30(*ppiVar17,0xffffffff);
      (**(code **)(**ppiVar17 + 0x54))(1);
      ppiVar17 = ppiVar17 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    iVar8 = 0;
    if (0 < iStack_2180) {
      pdVar9 = (dword *)&((cls_0x50dbb0 *)auStack_217c)->mbr_0xc;
      ppiVar17 = (int **)&(this->Window).Base.field_0xd20;
      do {
        FUN_00591c30(*ppiVar17,*pdVar9);
        cls_0x50dbb0::meth_0x51f0f0((cls_0x50dbb0 *)auStack_217c,(int *)&stack0xffffde00,pdVar9);
        puVar20 = &stack0xffffddf0;
        (**(code **)(**ppiVar17 + 0x14))(puVar20,&puStack_2214);
        (**(code **)(**ppiVar17 + 0x10))(auStack_218c,0x300);
        SS::EngineStringSystem::virt_meth_0x56c260
                  ((EngineStringSystem *)&DAT_0070c2d8,(int)auStack_218c,
                   (_String_base *)&pcStack_21d8);
        iVar8 = iVar8 + 1;
        meth_0x5945f0(this,auStack_21d4 + 0x18,&pcStack_21d8,this->mbr_0xd70);
        (**(code **)(**ppiVar17 + 300))(auStack_21d4 + 0x18);
        iVar12 = (**(code **)(**ppiVar17 + 0x160))();
        piVar4 = (int *)(iVar12 + 1);
        (**(code **)(**ppiVar17 + 0x10))(in_stack_ffffddbc,piVar4);
        (**(code **)(*(int *)this->mbr_0xd48 + 0x48))(&stack0xffffddf4,&stack0xffffddf8);
        (**(code **)(**ppiVar17 + 0x44))
                  (*(int *)(puVar20 + 0x220) + (int)puStack_2214,
                   *(int *)(puVar20 + 0x224) + iVar14 + (int)piVar4);
        (**(code **)(**ppiVar17 + 0x54))(0);
        unaff_EDI = (undefined4 *)((int)unaff_EDI + iStack_1f5c + (int)puStack_2214);
        pdVar9 = pdVar9 + 1;
        ppiVar17 = ppiVar17 + 1;
      } while (iVar8 < iStack_2180);
    }
    (**(code **)(*(int *)this->mbr_0xd48 + 0x14))(&stack0xffffdde4,&stack0xffffdde0);
    (**(code **)(*(int *)this->mbr_0xd48 + 0x10))
              (in_stack_ffffddbc,*(int *)(uVar21 + 0x234) + *(int *)(uVar21 + 0x224) + iVar5);
    puVar16 = (undefined *)((int)unaff_EDI + (int)puVar16);
  }
  ppiVar17 = (int **)(pEStack_21dc->DynamicObject).mbr_0x4;
  fVar22 = (float)(pEStack_21dc->DynamicObject).mbr_0x8;
  dVar24 = (pEStack_21dc->DynamicObject).mbr_0xc;
  Entity::meth_0x548ff0(pEStack_21dc,in_stack_ffffddbc);
  auStack_21a4._8_4_ = (undefined4)((float10)fVar22 + extraout_ST0);
  pdVar9 = &acStack_214c[0].mbr_0x4;
  auStack_21a4._4_4_ = ppiVar17;
  auStack_21a4._12_4_ = dVar24;
  pcVar13 = (cls_0x4960d0 *)(**(code **)(*DAT_00707ce4 + 0xa8))();
  cls_0x4960d0::meth_0x496250(pcVar13,pdVar9);
  puVar15 = auStack_20c8;
  pcVar13 = (cls_0x4960d0 *)(**(code **)(*DAT_00707ce4 + 0xa8))();
  cls_0x4960d0::meth_0x4962c0(pcVar13,puVar15);
  thunk_FUN_00471943();
  thunk_FUN_004712ac();
  uVar19 = FUN_00616e24();
  iVar5 = (int)uVar19;
  uVar19 = FUN_00616e24();
  FUN_005921b0(this,(int)uVar19,iVar5,in_stack_ffffddcc,(int)puVar16);
  if (0xf < uStack_21bc) {
                    /* WARNING: Subroutine does not return */
    _free(poStack_21d0);
  }
  uStack_21bc = 0xf;
  dStack_21c0 = 0;
  poStack_21d0 = (overflow__vftable_6647c4 *)((uint)poStack_21d0 & 0xffffff00);
  if ((cls_0x5944f0 *)0xf < pcStack_21d8) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_21ec);
  }
  pcStack_21d8 = (cls_0x5944f0 *)0xf;
  pEStack_21dc = (Entity *)0x0;
  pvStack_21ec = (void *)((uint)pvStack_21ec & 0xffffff00);
  uStack_5c = 0;
  cls_0x50dbb0::meth_0x55ab20
            ((cls_0x50dbb0 *)auStack_21a4,(int **)&stack0xffffddd8,*(int ***)auStack_21a4._4_4_,
             (int **)auStack_21a4._4_4_);
                    /* WARNING: Subroutine does not return */
  _free((void *)auStack_21a4._4_4_);
}



DialogueWindow * __thiscall DialogueWindow::~DialogueWindow(DialogueWindow *this)

{
  cls_0x4296c0 *this_00;
  cls_0x4a5be0 *this_01;
  cls_0x4a1f30 *this_02;
  dword dVar1;
  int *piStack_10;
  void *pvStack_c;
  undefined *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0063a444;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->Window).Base.vftptr_0x0 = (Base__vftable_66e41c *)&DialogueWindow__vftable_69eea4_0069eea4;
  *(undefined ***)&(this->Window).Base.field_0x18 = &PTR_virt_meth_0x596600_0069ee9c;
  this_00 = (cls_0x4296c0 *)this->mbr_0xd78;
  local_4 = 2;
  if (this_00 != (cls_0x4296c0 *)0x0) {
    cls_0x4296c0::~cls_0x4296c0(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  if ((undefined4 *)this->mbr_0xd7c != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0xd7c)(1);
  }
  if ((undefined4 *)this->mbr_0xd8c != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0xd8c)(1);
    this->mbr_0xd8c = 0;
  }
  if ((undefined4 *)this->mbr_0xd94 != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0xd94)(1);
  }
  if (this->mbr_0xd90 != 0) {
    (**(code **)(*DAT_00707ce4 + 0xb8))(&this->mbr_0xd90);
  }
  this_01 = (cls_0x4a5be0 *)this->mbr_0xd9c;
  if (this_01 != (cls_0x4a5be0 *)0x0) {
    cls_0x4a5be0::meth_0x4a5d70(this_01);
                    /* WARNING: Subroutine does not return */
    _free(this_01);
  }
  this_02 = (cls_0x4a1f30 *)this->mbr_0xd98;
  if (this_02 != (cls_0x4a1f30 *)0x0) {
    cls_0x4a1f30::meth_0x4a4c10(this_02);
                    /* WARNING: Subroutine does not return */
    _free(this_02);
  }
  dVar1 = this->mbr_0xda8;
  if (dVar1 != 0) {
    cls_0x50dbb0::meth_0x55ab20
              ((cls_0x50dbb0 *)(dVar1 + 8),&piStack_10,(int **)**(int ***)(dVar1 + 0xc),
               *(int ***)(dVar1 + 0xc));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(dVar1 + 0xc));
  }
  if (0xf < this->mbr_0xdc4) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xdb0);
  }
  this->mbr_0xdc4 = 0xf;
  this->mbr_0xdc0 = 0;
  *(undefined *)&this->mbr_0xdb0 = 0;
  local_4 = local_4 & 0xffffff00;
  cls_0x570800::meth_0x595f50
            ((cls_0x570800 *)&this->mbr_0xd64,&piStack_10,*(int ***)(int **)this->mbr_0xd68,
             (int **)this->mbr_0xd68);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0xd68);
}



DialogueWindow * __thiscall
DialogueWindow::DialogueWindow(DialogueWindow *this,byte param_1,byte param_2,int param_3)

{
  dword dVar1;
  cls_0x4f45e0 *pcVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063a47f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GUI::Window::Window(&this->Window,0);
  (this->Window).Base.vftptr_0x0 = (Base__vftable_66e41c *)&DialogueWindow__vftable_69eea4_0069eea4;
  *(undefined ***)&(this->Window).Base.field_0x18 = &PTR_virt_meth_0x596600_0069ee9c;
  local_4 = 0;
  *(byte *)&this->mbr_0xd64 = param_1;
  dVar1 = FUN_00592570();
  this->mbr_0xd68 = dVar1;
  *(undefined *)(dVar1 + 0x4d) = 1;
  *(dword *)(this->mbr_0xd68 + 4) = this->mbr_0xd68;
  *(dword *)this->mbr_0xd68 = this->mbr_0xd68;
  *(dword *)(this->mbr_0xd68 + 8) = this->mbr_0xd68;
  this->mbr_0xd6c = 0;
  this->mbr_0xd78 = 0;
  this->mbr_0xd7c = 0;
  this->mbr_0xd80 = 0x40490fdb;
  this->mbr_0xd84 = 0x41200000;
  this->mbr_0xd88 = 0x42000000;
  this->mbr_0xd8c = 0;
  this->mbr_0xd90 = 0;
  this->mbr_0xd94 = 0;
  this->mbr_0xd98 = 0;
  this->mbr_0xd9c = 0;
  this->mbr_0xda0 = 0;
  this->mbr_0xda4 = 0;
  this->mbr_0xda8 = 0;
  this->mbr_0xdc4 = 0xf;
  this->mbr_0xdc0 = 0;
  *(undefined *)&this->mbr_0xdb0 = 0;
  local_4._0_1_ = 2;
  this->mbr_0xd60 = param_1;
  this->mbr_0xd61 = param_2;
  this->mbr_0xd74 = param_3;
  pcVar2 = (cls_0x4f45e0 *)operator_new(0x37c);
  local_4._0_1_ = 3;
  if (pcVar2 == (cls_0x4f45e0 *)0x0) {
    pcVar2 = (cls_0x4f45e0 *)0x0;
  }
  else {
    pcVar2 = cls_0x4f45e0::cls_0x4f45e0(pcVar2);
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  this->mbr_0xd98 = (dword)pcVar2;
  this->mbr_0xd70 = 0;
  meth_0x593660(this);
  ExceptionList = local_c;
  return this;
}



int * __thiscall DialogueWindow::virt_meth_0x596760(DialogueWindow *this,byte param_1)

{
  ~DialogueWindow(this);
  if ((param_1 & 1) != 0) {
    FUN_004a7540((int *)this);
  }
  return (int *)this;
}


#include "../include/DialogueWindow.h"
