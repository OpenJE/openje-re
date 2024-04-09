#include "../include/GameActionOperateContainer.h"

GameActionOperateContainer * __thiscall
GameActionOperateContainer::GameActionOperateContainer(GameActionOperateContainer *this)

{
  this->mbr_0x10 = 1;
  (this->Action).vftptr_0x0 =
       (Action__vftable_647888 *)&GameActionOperateContainer__vftable_64a094_0064a094;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0;
  this->mbr_0x20 = 0;
  return this;
}



byte __thiscall GameActionOperateContainer::Get_mbr_0x20(GameActionOperateContainer *this)

{
  return this->mbr_0x20;
}



void __thiscall GameActionOperateContainer::meth_0x430760(GameActionOperateContainer *this)

{
  CLoadMapInterface::meth_0x495220((CLoadMapInterface *)this,1);
  if ((int *)this->mbr_0x84 != (int *)0x0) {
    FUN_005853e0(DAT_0070c528,(int *)this->mbr_0x84);
    this->mbr_0x84 = 0;
  }
  return;
}



int __thiscall
GameActionOperateContainer::meth_0x458730(GameActionOperateContainer *this,int param_1)

{
  int iVar1;
  
  iVar1 = Gregorian::Get_mbr_0x28((Gregorian *)this->mbr_0xe5c);
  return (this->mbr_0xe68 - iVar1) + param_1;
}



int __thiscall
GameActionOperateContainer::meth_0x458750(GameActionOperateContainer *this,int param_1)

{
  int iVar1;
  
  iVar1 = Gregorian::Get_mbr_0x28((Gregorian *)this->mbr_0xe58);
  return (this->mbr_0xe6c - iVar1) + param_1;
}



void __thiscall GameActionOperateContainer::meth_0x458ac0(GameActionOperateContainer *this)

{
  int *piVar1;
  int *piVar2;
  
  if ((int **)this->mbr_0xe14 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)this->mbr_0xe14;
  }
  if (piVar2 != (int *)this->mbr_0xe14) {
    do {
      piVar1 = (int *)piVar2[2];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x54))(1);
        (**(code **)(*(int *)piVar1[0x34c] + 0x54))(1);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)this->mbr_0xe14);
  }
  return;
}



int * __thiscall
GameActionOperateContainer::meth_0x458b10(GameActionOperateContainer *this,int param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  
  if ((int **)this->mbr_0xe14 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *(int **)this->mbr_0xe14;
  }
  if (piVar3 != (int *)this->mbr_0xe14) {
    do {
      piVar1 = (int *)piVar3[2];
      if (((piVar1 != (int *)0x0) && (cVar2 = (**(code **)(*piVar1 + 0x58))(), cVar2 == '\0')) &&
         (*(int *)(piVar1[0x34b] + 0xc) == param_1)) {
        return piVar1;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)this->mbr_0xe14);
  }
  return (int *)0x0;
}



void __thiscall GameActionOperateContainer::meth_0x458b70(GameActionOperateContainer *this)

{
  int *piVar1;
  int *piVar2;
  
  if ((int **)this->mbr_0xe20 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)this->mbr_0xe20;
  }
  if (piVar2 != (int *)this->mbr_0xe20) {
    do {
      piVar1 = (int *)piVar2[2];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x54))(1);
        cls_0x41d060::meth_0x4ae280((cls_0x41d060 *)piVar1[0x39f]);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)this->mbr_0xe20);
  }
  return;
}



void __thiscall GameActionOperateContainer::meth_0x458bc0(GameActionOperateContainer *this)

{
  int iVar1;
  int *piVar2;
  cls_0x41d060 *this_00;
  char cVar3;
  int iVar4;
  int iVar5;
  dword dVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int local_2c;
  float fStack_1c;
  undefined4 *local_18;
  
  local_2c = 0;
  if (0 < (int)this->mbr_0xe08) {
    dVar6 = this->mbr_0xe0c;
    do {
      iVar14 = 0;
      if (0 < (int)dVar6) {
        do {
          iVar1 = **(int **)(this->mbr_0xde0 + (dVar6 * local_2c + iVar14) * 4);
          iVar4 = meth_0x458750(this,local_2c << 8);
          iVar5 = meth_0x458730(this,iVar14 << 8);
          (**(code **)(iVar1 + 0x44))(iVar5,iVar4);
          dVar6 = this->mbr_0xe0c;
          iVar14 = iVar14 + 1;
        } while (iVar14 < (int)dVar6);
      }
      local_2c = local_2c + 1;
    } while (local_2c < (int)this->mbr_0xe08);
  }
  if ((int **)this->mbr_0xe14 == (int **)0x0) {
    piVar13 = (int *)0x0;
  }
  else {
    piVar13 = *(int **)this->mbr_0xe14;
  }
  if (piVar13 != (int *)this->mbr_0xe14) {
    do {
      piVar2 = (int *)piVar13[2];
      if ((piVar2 != (int *)0x0) && (cVar3 = (**(code **)(*piVar2 + 0x58))(), cVar3 == '\0')) {
        iVar14 = piVar2[0x34d];
        iVar1 = *piVar2;
        iVar4 = meth_0x458750(this,piVar2[0x34e]);
        iVar14 = meth_0x458730(this,iVar14);
        (**(code **)(iVar1 + 0x44))(iVar14,iVar4);
      }
      piVar13 = (int *)*piVar13;
    } while (piVar13 != (int *)this->mbr_0xe14);
  }
  puVar9 = (undefined4 *)this->mbr_0xe20;
  local_18 = (undefined4 *)0x0;
  fStack_1c = 0.0;
  if (puVar9 != (undefined4 *)0x0) {
    puVar9 = (undefined4 *)*puVar9;
  }
  if (puVar9 != (undefined4 *)this->mbr_0xe20) {
    do {
      puVar7 = puVar9;
      piVar13 = (int *)puVar7[2];
      if (piVar13 == (int *)0x0) {
        return;
      }
      cVar3 = (**(code **)(*piVar13 + 0x58))();
      if (cVar3 != '\0') {
        return;
      }
      iVar14 = piVar13[0x39a];
      iVar1 = piVar13[0x399];
      iVar4 = *piVar13;
      iVar5 = meth_0x458750(this,iVar14);
      iVar5 = iVar5 + -0x12;
      iVar8 = meth_0x458730(this,iVar1);
      (**(code **)(iVar4 + 0x44))(iVar8 + -0x10,iVar5);
      cls_0x41d060::meth_0x4ae280((cls_0x41d060 *)piVar13[0x39f]);
      puVar9 = (undefined4 *)this->mbr_0xe20;
      if (puVar9 != (undefined4 *)0x0) {
        puVar9 = (undefined4 *)*puVar9;
      }
      if ((puVar7 != puVar9) && (iVar4 = local_18[2], iVar4 != 0)) {
        iVar5 = *(int *)(iVar4 + 0xe64);
        iVar4 = *(int *)(iVar4 + 0xe68);
        iVar8 = meth_0x458750(this,iVar4);
        iVar10 = meth_0x458730(this,iVar5);
        iVar11 = meth_0x458750(this,iVar14);
        iVar12 = meth_0x458730(this,iVar1);
        this_00 = (cls_0x41d060 *)piVar13[0x39f];
        cls_0x41d060::meth_0x4aed50
                  (this_00,iVar12,iVar11,iVar10,iVar8,this_00->mbr_0x4,this_00->mbr_0x5,
                   this_00->mbr_0x6,this_00->mbr_0x7,this_00->mbr_0x4,this_00->mbr_0x5,
                   this_00->mbr_0x6,this_00->mbr_0x7);
        piVar13[0x39b] = (int)(float)(iVar1 - iVar5);
        piVar13[0x39c] = (int)(float)(iVar14 - iVar4);
        fStack_1c = SQRT((float)piVar13[0x39d] * (float)piVar13[0x39d] +
                         (float)piVar13[0x39c] * (float)piVar13[0x39c] +
                         (float)piVar13[0x39b] * (float)piVar13[0x39b]) + fStack_1c;
        piVar13[0x39e] = (int)fStack_1c;
      }
      puVar9 = (undefined4 *)*puVar7;
      local_18 = puVar7;
    } while ((undefined4 *)*puVar7 != (undefined4 *)this->mbr_0xe20);
  }
  return;
}



void __thiscall GameActionOperateContainer::meth_0x458e70(GameActionOperateContainer *this)

{
  cls_0x458770 *this_00;
  int **ppiVar1;
  int *piVar2;
  GameActionOperateContainer *local_4;
  
  if ((int **)this->mbr_0xe50 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)this->mbr_0xe50;
  }
  local_4 = this;
  if (piVar2 != (int *)this->mbr_0xe50) {
    do {
      this_00 = (cls_0x458770 *)piVar2[2];
      if (this_00 != (cls_0x458770 *)0x0) {
        cls_0x458770::meth_0x458770(this_00);
                    /* WARNING: Subroutine does not return */
        _free(this_00);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)this->mbr_0xe50);
  }
  ppiVar1 = (int **)this->mbr_0xe50;
  if (ppiVar1 != (int **)0x0) {
    GUI::Interface::meth_0x4b9d60
              ((Interface *)&this->mbr_0xe4c,(int **)&local_4,*ppiVar1,(int *)ppiVar1);
    return;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->mbr_0xe4c,(int **)&local_4,(int *)0x0,(int *)0x0);
  return;
}



void __thiscall GameActionOperateContainer::meth_0x458fe0(GameActionOperateContainer *this)

{
  undefined4 *puVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (0 < (int)this->mbr_0xe08) {
    do {
      iVar5 = 0;
      if (0 < (int)this->mbr_0xe0c) {
        do {
          puVar1 = *(undefined4 **)(this->mbr_0xde0 + (this->mbr_0xe0c * iVar4 + iVar5) * 4);
          if (puVar1 != (undefined4 *)0x0) {
            (**(code **)*puVar1)(1);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)this->mbr_0xe0c);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)this->mbr_0xe08);
  }
  this->mbr_0xe08 = 0;
  this->mbr_0xe0c = 0;
  pcVar2 = "";
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&this->mbr_0xdec,"",(uint)(pcVar3 + -0x64d7d8));
  if ((void *)this->mbr_0xde0 == (void *)0x0) {
    this->mbr_0xde0 = 0;
    this->mbr_0xde4 = 0;
    this->mbr_0xde8 = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0xde0);
}



/* WARNING: Type propagation algorithm not settling */

int * __thiscall GameActionOperateContainer::meth_0x459150(GameActionOperateContainer *this)

{
  int *this_00;
  char **ppcVar1;
  Base *pBVar2;
  POIPicture *this_01;
  char *pcVar3;
  Label *this_02;
  int iVar4;
  int *piVar5;
  Label *this_03;
  POIPicture *this_04;
  undefined4 *puVar6;
  dword dVar7;
  FILE FStack_28;
  undefined *puStack_8;
  dword dStack_4;
  
  dStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063003e;
  FStack_28._tmpfname = (char *)ExceptionList;
  if ((int **)this->mbr_0xe14 == (int **)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = *(int **)this->mbr_0xe14;
  }
  ExceptionList = &FStack_28._tmpfname;
  ppcVar1 = &FStack_28._tmpfname;
  if (piVar5 != (int *)this->mbr_0xe14) {
    do {
      ExceptionList = ppcVar1;
      this_00 = (int *)piVar5[2];
      if ((this_00 != (int *)0x0) &&
         (pBVar2 = (**(code **)(*this_00 + 0x58))(this_00), (char)pBVar2 != '\0')) {
        ExceptionList = FStack_28._ptr;
        return this_00;
      }
      piVar5 = (int *)*piVar5;
      ppcVar1 = (char **)ExceptionList;
    } while (piVar5 != (int *)this->mbr_0xe14);
  }
  this_01 = (POIPicture *)FUN_004a7680(0xd3c);
  this_04 = (POIPicture *)0x0;
  dStack_4 = 0;
  if (this_01 != (POIPicture *)0x0) {
    this_04 = POIPicture::POIPicture(this_01);
  }
  dStack_4 = 0xffffffff;
  meth_0x4959b0(this,(int *)this_04);
  pcVar3 = "=POIIcon";
  FStack_28._bufsiz = 0xf;
  FStack_28._charbuf = 0;
  FStack_28._cnt = FStack_28._cnt & 0xffffff00;
  do {
    pcVar3 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&FStack_28,"POIIcon",(uint)(pcVar3 + -0x65d308));
  dStack_4 = 1;
  (*(this_04->Picture).Window.Base.vftptr_0x0[1].virt_meth_0x4b2800_32)((Base *)this_04,&FStack_28);
  dStack_4 = 0xffffffff;
  if ((uint)FStack_28._bufsiz < 0x10) {
    this_03 = (Label *)0x0;
    FStack_28._bufsiz = 0xf;
    FStack_28._charbuf = 0;
    FStack_28._cnt = FStack_28._cnt & 0xffffff00;
    (*(this_04->Picture).Window.Base.vftptr_0x0[4].virt_meth_0x4b2850_28)
              ((Base *)this_04,(int)&this->mbr_0xd70);
    (*((this_04->Picture).Window.Base.vftptr_0x0)->virt_meth_0x4b2790_16)
              ((Base *)this_04,this->mbr_0xd68,this->mbr_0xd6c);
    (*(this_04->Picture).Window.Base.vftptr_0x0[5].virt_meth_0x4af060_4)(this_04);
    (*(this_04->Picture).Window.Base.vftptr_0x0[1].virt_meth_0x4b2880_40)((Base *)this_04);
    this_02 = (Label *)FUN_004a7680(0xe64);
    FStack_28._tmpfname = (char *)0x2;
    if (this_02 != (Label *)0x0) {
      this_03 = GUI::Label::Label(this_02,3);
    }
    FStack_28._tmpfname = (char *)0xffffffff;
    (*(this_04->Picture).Window.Base.vftptr_0x0[3].virt_meth_0x4b2800_32)
              ((Base *)this_04,(FILE *)this_03);
    (*(this_03->Window).Base.vftptr_0x0[4].virt_meth_0x4b2850_28)
              ((Base *)this_03,(int)&this->mbr_0xd94);
    (*(this_03->Window).Base.vftptr_0x0[7].virt_meth_0x4b27c0_20)(this_03);
    (*((this_03->Window).Base.vftptr_0x0)->virt_meth_0x4b2790_16)
              ((Base *)this_03,this->mbr_0xd8c,this->mbr_0xd90);
    puVar6 = (undefined4 *)0x2;
    (*(this_03->Window).Base.vftptr_0x0[8].virt_meth_0x4b2880_40)((Base *)this_03);
    (*(this_03->Window).Base.vftptr_0x0[8].virt_meth_0x4b2750_8)
              ((Base *)this_03,(undefined4 *)this->mbr_0xdd8,puVar6);
    dVar7 = this->mbr_0xe60;
    (*(this_03->Window).Base.vftptr_0x0[5].virt_meth_0x4af060_4)(this_03);
    (*(this_03->Window).Base.vftptr_0x0[5].virt_meth_0x4b2770_12)((Base *)this_03,1,dVar7);
    (*(this_03->Window).Base.vftptr_0x0[1].virt_meth_0x4b2880_40)((Base *)this_03);
    (this_04->Picture).Window.Base.mbr_0xd30 = (dword)this_03;
    dVar7 = this->mbr_0xe14;
    iVar4 = FUN_00433760(dVar7,*(undefined4 *)(dVar7 + 4),(undefined4 *)&stack0xffffffb4);
    cls_0x459bc0::meth_0x458f30((cls_0x459bc0 *)&this->mbr_0xe10,1);
    *(int *)(dVar7 + 4) = iVar4;
    **(int **)(iVar4 + 4) = iVar4;
    ExceptionList = FStack_28._ptr;
    return (int *)this_04;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)FStack_28._cnt);
}



/* WARNING: Removing unreachable block (ram,0x004595cc) */

int * __thiscall GameActionOperateContainer::meth_0x4593a0(GameActionOperateContainer *this)

{
  int *piVar1;
  char *pcVar2;
  char **ppcVar3;
  char cVar4;
  POIWaypoint *pPVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  cls_0x459bc0 *unaff_EDI;
  undefined4 *puVar9;
  dword dVar10;
  void *pvStack_34;
  FILE FStack_28;
  undefined *puStack_8;
  dword dStack_4;
  
  dStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063007b;
  FStack_28._tmpfname = (char *)ExceptionList;
  if ((int **)this->mbr_0xe20 == (int **)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = *(int **)this->mbr_0xe20;
  }
  ExceptionList = &FStack_28._tmpfname;
  ppcVar3 = &FStack_28._tmpfname;
  if (piVar8 != (int *)this->mbr_0xe20) {
    do {
      piVar1 = (int *)piVar8[2];
      if ((piVar1 != (int *)0x0) && (cVar4 = (**(code **)(*piVar1 + 0x58))(), cVar4 != '\0')) {
        ExceptionList = FStack_28._tmpfname;
        return piVar1;
      }
      piVar8 = (int *)*piVar8;
      ppcVar3 = (char **)ExceptionList;
    } while (piVar8 != (int *)this->mbr_0xe20);
  }
  ExceptionList = ppcVar3;
  pPVar5 = (POIWaypoint *)FUN_004a7680(0xe80);
  dStack_4 = 0;
  if (pPVar5 == (POIWaypoint *)0x0) {
    pPVar5 = (POIWaypoint *)0x0;
  }
  else {
    pPVar5 = POIWaypoint::POIWaypoint(pPVar5);
  }
  dStack_4 = 0xffffffff;
  meth_0x4959b0(this,(int *)pPVar5);
  FStack_28._bufsiz = 0xf;
  FStack_28._charbuf = 0;
  FStack_28._cnt = FStack_28._cnt & 0xffffff00;
  pcVar2 = "POIWaypoint";
  do {
    pcVar6 = pcVar2;
    pcVar2 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&FStack_28,"POIWaypoint",(uint)(pcVar6 + -0x65d314))
  ;
  dStack_4 = 1;
  (*(pPVar5->Label).Window.Base.vftptr_0x0[1].virt_meth_0x4b2800_32)((Base *)pPVar5,&FStack_28);
  dStack_4 = 0xffffffff;
  if (0xf < (uint)FStack_28._bufsiz) {
                    /* WARNING: Subroutine does not return */
    _free((void *)FStack_28._cnt);
  }
  FStack_28._bufsiz = 0xf;
  FStack_28._charbuf = 0;
  FStack_28._cnt = FStack_28._cnt & 0xffffff00;
  pcVar2 = "quickslot.ini";
  do {
    pcVar6 = pcVar2;
    pcVar2 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&FStack_28,"quickslot.ini",(uint)(pcVar6 + -0x6550f8));
  dStack_4 = 2;
  (*(pPVar5->Label).Window.Base.vftptr_0x0[4].virt_meth_0x4b2850_28)((Base *)pPVar5,(int)&FStack_28)
  ;
  dStack_4 = 0xffffffff;
  if (0xf < (uint)FStack_28._bufsiz) {
                    /* WARNING: Subroutine does not return */
    _free((void *)FStack_28._cnt);
  }
  FStack_28._bufsiz = 0xf;
  FStack_28._charbuf = 0;
  FStack_28._cnt = FStack_28._cnt & 0xffffff00;
  pcVar2 = "arial";
  do {
    pcVar6 = pcVar2;
    pcVar2 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&FStack_28,"arial",(uint)(pcVar6 + -0x655d94));
  dStack_4 = 3;
  (*(pPVar5->Label).Window.Base.vftptr_0x0[7].virt_meth_0x4b27c0_20)(pPVar5);
  FStack_28._charbuf = 0xffffffff;
  if (FStack_28._base < (char *)0x10) {
    pcVar2 = "x";
    do {
      pcVar6 = pcVar2;
      pcVar2 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&stack0xffffffac,"x",(uint)(pcVar6 + -0x65d310));
    FStack_28._charbuf = 4;
    (*(pPVar5->Label).Window.Base.vftptr_0x0[6].virt_meth_0x4b2830_36)
              ((Base *)pPVar5,(FILE *)&stack0xffffffac);
    FStack_28._charbuf = 0xffffffff;
    (*((pPVar5->Label).Window.Base.vftptr_0x0)->virt_meth_0x4b2790_16)((Base *)pPVar5,0x20,0x20);
    puVar9 = (undefined4 *)0x2;
    (*(pPVar5->Label).Window.Base.vftptr_0x0[8].virt_meth_0x4b2880_40)((Base *)pPVar5);
    (*(pPVar5->Label).Window.Base.vftptr_0x0[8].virt_meth_0x4b2750_8)
              ((Base *)pPVar5,(undefined4 *)0xff000000,puVar9);
    dVar10 = unaff_EDI[0x132].mbr_0x8;
    (*(pPVar5->Label).Window.Base.vftptr_0x0[5].virt_meth_0x4af060_4)(pPVar5);
    (*(pPVar5->Label).Window.Base.vftptr_0x0[5].virt_meth_0x4b2770_12)((Base *)pPVar5,1,dVar10);
    (*(pPVar5->Label).Window.Base.vftptr_0x0[1].virt_meth_0x4b2880_40)((Base *)pPVar5);
    dVar10 = unaff_EDI->mbr_0x4;
    iVar7 = FUN_00433760(dVar10,*(undefined4 *)(dVar10 + 4),(undefined4 *)&stack0xffffffa4);
    cls_0x459bc0::meth_0x458f30(unaff_EDI,1);
    *(int *)(dVar10 + 4) = iVar7;
    **(int **)(iVar7 + 4) = iVar7;
    ExceptionList = FStack_28._base;
    return (int *)pPVar5;
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_34);
}



void __thiscall GameActionOperateContainer::meth_0x459680(GameActionOperateContainer *this)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = meth_0x458b10(this,this->mbr_0xe28);
  if (piVar3 != (int *)0x0) {
    iVar1 = piVar3[0x34e];
    iVar2 = piVar3[0x34d];
    piVar3 = meth_0x4593a0(this);
    piVar3[0x399] = iVar2 + 0x14;
    piVar3[0x39a] = iVar1 + 0x10;
    piVar3[0x39b] = 0;
    piVar3[0x39c] = 0;
    piVar3[0x39d] = 0;
    piVar3[0x39e] = 0;
    (**(code **)(*piVar3 + 0x54))(0);
                    /* WARNING: Could not recover jumptable at 0x004596e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar3 + 0xc4))();
    return;
  }
  return;
}



void __thiscall
GameActionOperateContainer::meth_0x4596f0
          (GameActionOperateContainer *this,void *param_1,char param_2)

{
  char cVar1;
  dword dVar2;
  dword dVar3;
  uint uVar4;
  _String_base *p_Var5;
  dword *_Str2;
  int iVar6;
  Picture *pPVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 ****_Str1;
  uint unaff_EDI;
  int iVar10;
  uint unaff_retaddr;
  undefined4 uVar11;
  void *_Memory;
  char local_b0 [4];
  dword local_ac;
  dword local_a8;
  void *local_a4;
  uint local_90;
  _String_base local_8c [4];
  undefined4 ****local_88 [4];
  dword local_78;
  uint local_74;
  VFX_Parameter__vftable_673a20 *local_70;
  undefined local_6c;
  char acStack_64 [4];
  dword dStack_60;
  dword local_5c;
  dword local_58;
  Picture *local_54;
  char local_50 [28];
  undefined uStack_34;
  undefined uStack_18;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = -1;
  puStack_8 = &LAB_006300c4;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  if (this->mbr_0x34 != 0) {
    local_74 = 0xf;
    local_78 = 0;
    local_88[0] = (undefined4 ****)((uint)local_88[0] & 0xffffff00);
    local_4 = 0;
    local_b0[0] = '.';
    ExceptionList = &local_c;
    uVar4 = cls_0x4d8d70::meth_0x458a20((cls_0x4d8d70 *)param_1,local_b0,0xffffffff,1);
    p_Var5 = (_String_base *)cls_0x4d8d70::meth_0x458ef0((cls_0x4d8d70 *)param_1,&local_a8,0,uVar4);
    local_4._0_1_ = 1;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_8c,p_Var5,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
      _free(local_a4);
    }
    if (this->mbr_0xe04 < 0x10) {
      _Str2 = &this->mbr_0xdf0;
    }
    else {
      _Str2 = (dword *)this->mbr_0xdf0;
    }
    _Str1 = local_88[0];
    if (local_74 < 0x10) {
      _Str1 = local_88;
    }
    iVar6 = __stricmp((char *)_Str1,(char *)_Str2);
    if ((iVar6 != 0) || (param_2 != '\0')) {
      meth_0x458fe0(this);
      ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&this->mbr_0xdec,local_8c,0,0xffffffff);
      dVar2 = *(dword *)(this->mbr_0x34 + 0x28);
      this->mbr_0xe08 = dVar2;
      dVar3 = *(dword *)(this->mbr_0x34 + 0x2c);
      this->mbr_0xe0c = dVar3;
      cls_0x40cc80::meth_0x432be0((cls_0x40cc80 *)&this->mbr_0xddc,dVar3 * dVar2);
      iVar6 = 0;
      if (0 < (int)this->mbr_0xe08) {
        do {
          iVar10 = 0;
          if (0 < (int)this->mbr_0xe0c) {
            local_ac = iVar6 << 8;
            do {
              FUN_00616d8c(local_50,(byte *)"%s%02d%02d.bmp");
              local_54 = (Picture *)FUN_004a7680(0xd2c);
              local_4._0_1_ = 2;
              if (local_54 == (Picture *)0x0) {
                pPVar7 = (Picture *)0x0;
              }
              else {
                pPVar7 = GUI::Picture::Picture(local_54,2);
              }
              *(Picture **)(this->mbr_0xde0 + (this->mbr_0xe0c * iVar6 + iVar10) * 4) = pPVar7;
              local_4._0_1_ = 0;
              local_58 = 0xf;
              local_5c = 0;
              local_6c = 0;
              pcVar9 = "quickslot.ini";
              do {
                pcVar8 = pcVar9;
                pcVar9 = pcVar8 + 1;
              } while (*pcVar8 != '\0');
              ::cls_0x50db20::meth_0x401bd0
                        ((cls_0x50db20 *)&local_70,"quickslot.ini",(uint)(pcVar8 + -0x6550f8));
              local_4 = CONCAT31(local_4._1_3_,3);
              (**(code **)(**(int **)(this->mbr_0xde0 + (this->mbr_0xe0c * iVar6 + iVar10) * 4) +
                          0xcc))(&local_70);
              puStack_8 = (undefined *)((uint)puStack_8 & 0xffffff00);
              if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
                _free(local_70);
              }
              local_5c = 0xf;
              dStack_60 = 0;
              local_70 = (VFX_Parameter__vftable_673a20 *)((uint)local_70 & 0xffffff00);
              (**(code **)(**(int **)(this->mbr_0xde0 + (this->mbr_0xe0c * iVar6 + iVar10) * 4) +
                          0x84))(0);
              (**(code **)(**(int **)(this->mbr_0xde0 + (this->mbr_0xe0c * iVar6 + iVar10) * 4) +
                          0xe8))(1);
              _Memory = (void *)0x100;
              (**(code **)(**(int **)(this->mbr_0xde0 + (this->mbr_0xe0c * iVar6 + iVar10) * 4) +
                          0x10))(0x100,0x100);
              pcVar9 = acStack_64;
              local_a4 = (void *)0xf;
              local_a8 = 0;
              do {
                cVar1 = *pcVar9;
                pcVar9 = pcVar9 + 1;
              } while (cVar1 != '\0');
              ::cls_0x50db20::meth_0x401bd0
                        ((cls_0x50db20 *)&stack0xffffff44,acStack_64,
                         (int)pcVar9 - (int)(acStack_64 + 1));
              uVar11 = 0xbf800000;
              uStack_18 = 4;
              (**(code **)(**(int **)(this->mbr_0xde0 + (this->mbr_0xe0c * iVar6 + iVar10) * 4) +
                          0x130))(&stack0xffffff44,1,0,0,0xbf800000,0xbf800000,1);
              uStack_34 = 0;
              if (0xf < unaff_EDI) {
                    /* WARNING: Subroutine does not return */
                _free(_Memory);
              }
              unaff_EDI = 0xf;
              (**(code **)(**(int **)(this->mbr_0xde0 + (this->mbr_0xe0c * iVar6 + iVar10) * 4) +
                          0xe0))(this->mbr_0xe60);
              (**(code **)(**(int **)(this->mbr_0xde0 + (this->mbr_0xe0c * iVar6 + iVar10) * 4) +
                          0x44))(iVar10 << 8,uVar11);
              meth_0x4959b0(this,*(int **)(this->mbr_0xde0 + (this->mbr_0xe0c * iVar6 + iVar10) * 4)
                           );
              iVar10 = iVar10 + 1;
            } while (iVar10 < (int)this->mbr_0xe0c);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)this->mbr_0xe08);
      }
      GUI::ScrollBar::meth_0x4b8ac0((ScrollBar *)this->mbr_0xe58,this->mbr_0xe74);
      GUI::ScrollBar::meth_0x4b8aa0((ScrollBar *)this->mbr_0xe58,this->mbr_0xe08 << 8);
      GUI::ScrollBar::meth_0x568420((ScrollBar *)this->mbr_0xe58,10);
      GUI::ScrollBar::meth_0x4b87d0((ScrollBar *)this->mbr_0xe58,100);
      GUI::ScrollBar::meth_0x4b8ae0((ScrollBar *)this->mbr_0xe58,0,'\x01');
      GUI::ScrollBar::meth_0x4b8ac0((ScrollBar *)this->mbr_0xe5c,this->mbr_0xe70);
      GUI::ScrollBar::meth_0x4b8aa0((ScrollBar *)this->mbr_0xe5c,this->mbr_0xe0c << 8);
      GUI::ScrollBar::meth_0x568420((ScrollBar *)this->mbr_0xe5c,10);
      GUI::ScrollBar::meth_0x4b87d0((ScrollBar *)this->mbr_0xe5c,100);
      GUI::ScrollBar::meth_0x4b8ae0((ScrollBar *)this->mbr_0xe5c,0,'\x01');
    }
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      _free(local_88[0]);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall GameActionOperateContainer::meth_0x459c50(GameActionOperateContainer *this)

{
  cls_0x599d70 *this_00;
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int **ppiVar4;
  uint unaff_retaddr;
  int iVar5;
  int iVar6;
  int local_48;
  int local_44;
  int **local_40;
  int *piStack_3c;
  undefined local_38 [4];
  int **local_34;
  undefined uStack_30;
  void *pvStack_28;
  dword dStack_20;
  dword dStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  uint local_10;
  undefined4 local_c;
  undefined *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006300f0;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  piVar3 = (int *)0x0;
  if (this->mbr_0x34 == 0) {
    FUN_00616e15(DAT_007062c0);
    return;
  }
  ExceptionList = &local_c;
  meth_0x4596f0(this,(void *)(this->mbr_0x34 + 0x30),'\0');
  meth_0x458ac0(this);
  meth_0x458b70(this);
  meth_0x458e70(this);
  this->mbr_0xe34 = 0xffffffff;
  cls_0x459bc0::cls_0x459bc0((cls_0x459bc0 *)local_38,this->mbr_0x34 + 0x68);
  local_4 = 0;
  if (local_34 == (int **)0x0) {
    local_40 = (int **)0x0;
  }
  else {
    local_40 = (int **)*local_34;
  }
  ppiVar4 = local_34;
  if (local_40 != local_34) {
    do {
      this_00 = (cls_0x599d70 *)local_40[2];
      if ((this_00 != (cls_0x599d70 *)0x0) && ((*(byte *)&this_00->mbr_0x0 & 1) != 0)) {
        piVar1 = meth_0x459150(this);
        piVar1[0x34b] = (int)this_00;
        cls_0x599d70::meth_0x599d70(this_00,&local_44,&local_48);
        piVar1[0x34d] = local_44;
        piVar1[0x34e] = local_48;
        (**(code **)(*piVar1 + 0x44))(local_44,local_48);
        dStack_1c = 0xf;
        dStack_20 = 0;
        uStack_30 = 0;
        local_c = (void *)CONCAT31(local_c._1_3_,1);
        cls_0x599d70::meth_0x59a1a0(this_00,local_38 + 4);
        iVar6 = -0x40800000;
        iVar5 = 0;
        (**(code **)(*piVar1 + 0x130))(local_38 + 4,0,0,0,0xbf800000,0xbf800000,1);
        (**(code **)(*piVar1 + 0x54))(0);
        (**(code **)(*piVar1 + 0xc4))();
        (**(code **)(*(int *)piVar1[0x34c] + 0x44))(this->mbr_0xdd0 + iVar6,this->mbr_0xdd4 + iVar5)
        ;
        iVar5 = *(int *)piVar1[0x34c];
        uVar2 = cls_0x599d70::meth_0x599d90(this_00);
        (**(code **)(iVar5 + 0x130))(uVar2);
        (**(code **)(*(int *)piVar1[0x34c] + 0x54))(0);
        local_4 = local_4 & 0xffffff00;
        if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_28);
        }
        uStack_14 = 0xf;
        uStack_18._0_1_ = 0;
        uStack_18._1_3_ = 0;
        pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
        ppiVar4 = local_34;
      }
      local_40 = (int **)*local_40;
    } while (local_40 != ppiVar4);
  }
  meth_0x459680(this);
  meth_0x458bc0(this);
  if (ppiVar4 != (int **)0x0) {
    piVar3 = *ppiVar4;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)local_38,&piStack_3c,piVar3,(int *)ppiVar4);
                    /* WARNING: Subroutine does not return */
  _free(local_34);
}



void __thiscall
GameActionOperateContainer::meth_0x459e70(GameActionOperateContainer *this,int param_1)

{
  dword dVar1;
  int *piVar2;
  
  if (DAT_0070bd98 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
  }
  dVar1 = (**(code **)(*piVar2 + 0x8c))(param_1);
  this->mbr_0x34 = dVar1;
  this->mbr_0xe28 = param_1;
  meth_0x459c50(this);
  return;
}



void __thiscall GameActionOperateContainer::meth_0x4952a0(GameActionOperateContainer *this)

{
  cls_0x4b28a0::meth_0x4b4e60((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,(int *)this);
  return;
}



void __thiscall GameActionOperateContainer::meth_0x495340(GameActionOperateContainer *this)

{
  dword dVar1;
  
  if (this->mbr_0x20 == 0) {
    (*((this->Action).vftptr_0x0)->virt_meth_0x4010d0_12)(this);
    dVar1 = *(dword *)(this->mbr_0x28 + 4);
    if (dVar1 != this->mbr_0x28) {
      do {
        (**(code **)(**(int **)(dVar1 + 8) + 0x28))();
        dVar1 = *(dword *)(dVar1 + 4);
      } while (dVar1 != this->mbr_0x28);
    }
  }
  return;
}



void __thiscall GameActionOperateContainer::meth_0x495380(GameActionOperateContainer *this)

{
  dword dVar1;
  
  if (this->mbr_0x20 == 0) {
    (*((this->Action).vftptr_0x0)->virt_meth_0x6162e5_16)();
    dVar1 = *(dword *)(this->mbr_0x28 + 4);
    if (dVar1 != this->mbr_0x28) {
      do {
        (**(code **)(**(int **)(dVar1 + 8) + 0x2c))();
        dVar1 = *(dword *)(dVar1 + 4);
      } while (dVar1 != this->mbr_0x28);
    }
  }
  return;
}



void __thiscall
GameActionOperateContainer::meth_0x4959b0(GameActionOperateContainer *this,int *param_1)

{
  int *piVar1;
  GameActionOperateContainer *pGVar2;
  int **_Memory;
  int iVar3;
  int iVar4;
  
  piVar1 = param_1;
  pGVar2 = (GameActionOperateContainer *)(**(code **)(*param_1 + 0x98))();
  if (pGVar2 != this) {
    (**(code **)(*piVar1 + 0x94))(this);
  }
  _Memory = (int **)this->mbr_0x28;
  if (_Memory != (int **)0x0) {
    _Memory = (int **)*_Memory;
  }
  do {
    if (_Memory == (int **)this->mbr_0x28) {
LAB_00495a16:
      if ((int *)this->mbr_0x28 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)this->mbr_0x28;
      }
      iVar3 = FUN_00433760(iVar4,*(undefined4 *)(iVar4 + 4),&param_1);
      cls_0x495690::meth_0x495690((cls_0x495690 *)&this->mbr_0x24,1);
      *(int *)(iVar4 + 4) = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
      return;
    }
    if (piVar1 == _Memory[2]) {
      if (_Memory != (int **)this->mbr_0x28) {
        *_Memory[1] = (int)*_Memory;
        (*_Memory)[1] = (int)_Memory[1];
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      goto LAB_00495a16;
    }
    _Memory = (int **)*_Memory;
  } while( true );
}


#include "../include/GameActionOperateContainer.h"
