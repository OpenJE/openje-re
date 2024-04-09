#include "../include/cls_0x5cb740.h"

cls_0x5cb740 * __thiscall
cls_0x5cb740::cls_0x5cb740(cls_0x5cb740 *this,char *param_1,dword param_2,dword param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (int)this - (int)param_1;
  do {
    cVar1 = *param_1;
    param_1[iVar2] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  this->mbr_0x50 = param_2;
  this->mbr_0x54 = param_3;
  this->mbr_0x58 = 0;
  this->mbr_0x5c = 0;
  this->mbr_0x60 = 0;
  this->mbr_0x670 = 0;
  this->mbr_0x674 = 0;
  return this;
}



int __thiscall cls_0x5cb740::meth_0x5cb790(cls_0x5cb740 *this,int *param_1)

{
  dword dVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  dword dVar5;
  int iVar6;
  HDC hdc;
  HBITMAP h;
  HFONT h_00;
  uint uVar7;
  dword *pdVar8;
  uint uVar9;
  HGDIOBJ unaff_EBP;
  BITMAPINFO *pBVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined4 uStack_158;
  undefined4 uStack_154;
  int iStack_150;
  int iStack_14c;
  HFONT pHStack_148;
  int **ppiStack_144;
  tagSIZE tStack_140;
  HBITMAP pHStack_138;
  undefined auStack_130 [8];
  BITMAPINFO BStack_128;
  undefined local_d4 [80];
  uint uStack_84;
  
  this->mbr_0x58 = (dword)param_1;
  this->mbr_0x6c = 0x3f800000;
  if (this->mbr_0x50 < 0x29) {
    dVar5 = 0x200;
    if (this->mbr_0x50 < 0x15) {
      dVar5 = 0x100;
    }
  }
  else {
    dVar5 = 0x400;
  }
  pHStack_138 = (HBITMAP)local_d4;
  this->mbr_0x68 = dVar5;
  this->mbr_0x64 = dVar5;
  tStack_140.cy = (LONG)param_1;
  tStack_140.cx = 0x5cb7d9;
  (**(code **)(*param_1 + 0x1c))();
  uVar11 = this->mbr_0x64;
  if (uStack_84 < uVar11) {
    fVar2 = (float)uStack_84;
    if ((int)uStack_84 < 0) {
      fVar2 = fVar2 + 4.294967e+09;
    }
    fVar3 = (float)uVar11;
    if ((int)uVar11 < 0) {
      fVar3 = fVar3 + 4.294967e+09;
    }
    this->mbr_0x68 = uStack_84;
    this->mbr_0x64 = uStack_84;
    this->mbr_0x6c = (dword)(fVar2 / fVar3);
    BStack_128.bmiHeader.biSize = uVar11;
  }
  tStack_140.cx = (LONG)&this->mbr_0x5c;
  ppiStack_144 = (int **)0x1;
  pHStack_148 = (HFONT)0x1a;
  iStack_14c = 0;
  uStack_154 = (HGDIOBJ)this->mbr_0x68;
  iStack_150 = 1;
  dVar5 = this->mbr_0x64;
  BStack_128.bmiHeader.biWidth = tStack_140.cx;
  iVar6 = (**(code **)(*(int *)this->mbr_0x58 + 0x50))((int *)this->mbr_0x58);
  if (-1 < iVar6) {
    dVar1 = this->mbr_0x64;
    pBVar10 = &BStack_128;
    for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
      (pBVar10->bmiHeader).biSize = 0;
      pBVar10 = (BITMAPINFO *)&(pBVar10->bmiHeader).biWidth;
    }
    BStack_128.bmiHeader.biHeight = -this->mbr_0x68;
    BStack_128.bmiHeader.biSize = 0x28;
    BStack_128.bmiHeader.biPlanes = 1;
    BStack_128.bmiHeader.biCompression = 0;
    BStack_128.bmiHeader.biBitCount = 0x20;
    BStack_128.bmiHeader.biWidth = dVar1;
    hdc = CreateCompatibleDC((HDC)0x0);
    h = CreateDIBSection(hdc,&BStack_128,0,(void **)&stack0xfffffecc,(HANDLE)0x0,0);
    pHStack_138 = h;
    SetMapMode(hdc,1);
    iVar6 = 0x48;
    iStack_14c = GetDeviceCaps(hdc,0x5a);
    uVar12 = FUN_00616e24();
    iVar6 = MulDiv(this->mbr_0x50,(int)uVar12,iVar6);
    h_00 = CreateFontA(-iVar6,0,0,0,(-(uint)((this->mbr_0x54 & 1) != 0) & 300) + 400,
                       this->mbr_0x54 >> 1 & 1,0,0,1,0,0,4,2,(LPCSTR)this);
    if (h_00 == (HFONT)0x0) {
      return -0x7fffbffb;
    }
    pHStack_148 = h_00;
    SelectObject(hdc,h);
    SelectObject(hdc,h_00);
    SetTextColor(hdc,0xffffff);
    iVar6 = 0;
    SetBkColor(hdc,0);
    SetTextAlign(hdc,0);
    iStack_14c = 0;
    uStack_154 = (HGDIOBJ)CONCAT22(uStack_154._2_2_,0x78);
    uStack_158._0_3_ = (undefined3)dVar5;
    uStack_158 = (int **)CONCAT13(0x20,(undefined3)uStack_158);
    pdVar8 = &this->mbr_0x74;
    do {
      uStack_154 = (HGDIOBJ)CONCAT31(uStack_154._1_3_,uStack_158._3_1_);
      GetTextExtentPoint32A(hdc,(LPCSTR)&uStack_154,1,&tStack_140);
      if (this->mbr_0x64 < (uint)(tStack_140.cx + iVar6 + 1)) {
        iStack_14c = iStack_14c + 1 + tStack_140.cy;
        iVar6 = 0;
      }
      ExtTextOutA(hdc,iVar6,iStack_14c,2,(RECT *)0x0,(LPCSTR)&uStack_154,1,(INT *)0x0);
      fVar2 = (float)iVar6;
      if (iVar6 < 0) {
        fVar2 = fVar2 + 4.294967e+09;
      }
      fVar3 = (float)this->mbr_0x64;
      if ((int)this->mbr_0x64 < 0) {
        fVar3 = fVar3 + 4.294967e+09;
      }
      pdVar8[-1] = (dword)(fVar2 / fVar3);
      fVar2 = (float)iStack_14c;
      if (iStack_14c < 0) {
        fVar2 = fVar2 + 4.294967e+09;
      }
      fVar3 = (float)this->mbr_0x68;
      if ((int)this->mbr_0x68 < 0) {
        fVar3 = fVar3 + 4.294967e+09;
      }
      *pdVar8 = (dword)(fVar2 / fVar3);
      fVar2 = (float)(tStack_140.cx + iVar6);
      if (tStack_140.cx + iVar6 < 0) {
        fVar2 = fVar2 + 4.294967e+09;
      }
      fVar3 = (float)this->mbr_0x64;
      if ((int)this->mbr_0x64 < 0) {
        fVar3 = fVar3 + 4.294967e+09;
      }
      pdVar8[1] = (dword)(fVar2 / fVar3);
      iStack_150 = tStack_140.cy + iStack_14c;
      fVar2 = (float)iStack_150;
      if (iStack_150 < 0) {
        fVar2 = fVar2 + 4.294967e+09;
      }
      fVar3 = (float)this->mbr_0x68;
      if ((int)this->mbr_0x68 < 0) {
        fVar3 = fVar3 + 4.294967e+09;
      }
      pdVar8[2] = (dword)(fVar2 / fVar3);
      iVar6 = iVar6 + 1 + tStack_140.cx;
      cVar4 = uStack_158._3_1_ + '\x01';
      uStack_158 = (int **)CONCAT13(cVar4,(undefined3)uStack_158);
      pdVar8 = pdVar8 + 4;
    } while (cVar4 < '\x7f');
    (**(code **)(**ppiStack_144 + 0x40))(*ppiStack_144,0,auStack_130,0,0);
    uVar11 = 0;
    pdVar8 = (dword *)tStack_140.cx;
    if (this->mbr_0x68 != 0) {
      do {
        uVar9 = 0;
        if (this->mbr_0x64 != 0) {
          do {
            uVar7 = (uint)pHStack_148[this->mbr_0x64 * uVar11 + uVar9].unused >> 4;
            if ((uVar7 & 0xf) == 0) {
              *(ushort *)pdVar8 = 0;
            }
            else {
              *(ushort *)pdVar8 = (ushort)((byte)uVar7 & 0xf) << 0xc | 0xfff;
            }
            pdVar8 = (dword *)((int)pdVar8 + 2);
            uVar9 = uVar9 + 1;
          } while (uVar9 < this->mbr_0x64);
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < this->mbr_0x68);
    }
    (**(code **)(**uStack_158 + 0x44))(*uStack_158,0);
    DeleteObject(uStack_154);
    DeleteDC(hdc);
    DeleteObject(unaff_EBP);
    iVar6 = 0;
  }
  return iVar6;
}



undefined4 __thiscall cls_0x5cb740::meth_0x5cbdb0(cls_0x5cb740 *this)

{
  int *piVar1;
  
  piVar1 = (int *)this->mbr_0x60;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x60 = 0;
  }
  piVar1 = (int *)this->mbr_0x58;
  if (piVar1 != (int *)0x0) {
    if (this->mbr_0x670 != 0) {
      (**(code **)(*piVar1 + 0xe0))(piVar1,this->mbr_0x670);
    }
    if (this->mbr_0x674 != 0) {
      (**(code **)(*(int *)this->mbr_0x58 + 0xe0))((int *)this->mbr_0x58,this->mbr_0x674);
    }
  }
  this->mbr_0x670 = 0;
  this->mbr_0x674 = 0;
  return 0;
}



undefined4 __thiscall cls_0x5cb740::meth_0x5cbe20(cls_0x5cb740 *this)

{
  int *piVar1;
  
  piVar1 = (int *)this->mbr_0x5c;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x5c = 0;
  }
  this->mbr_0x58 = 0;
  return 0;
}



void __thiscall cls_0x5cb740::meth_0x5cbe50(cls_0x5cb740 *this)

{
  meth_0x5cbdb0(this);
  meth_0x5cbe20(this);
  return;
}



undefined4 __thiscall cls_0x5cb740::meth_0x5cbe60(cls_0x5cb740 *this)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int **ppiVar6;
  int **ppiVar7;
  int **ppiVar8;
  int *piStack_170;
  int **ppiVar9;
  int *piStack_148;
  float fStack_144;
  int *piStack_140;
  undefined4 uStack_13c;
  int *piStack_138;
  float fStack_134;
  int *piStack_130;
  dword dStack_12c;
  float fStack_f8;
  int *piStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  float fStack_d0;
  float fStack_cc;
  int *piStack_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  float fStack_b4;
  float fStack_b0;
  int *piStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  float fStack_94;
  int *piStack_90;
  float fStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  float fStack_7c;
  float fStack_78;
  int *piStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float fStack_60;
  float fStack_5c;
  int *piStack_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_38;
  float fStack_34;
  undefined4 uStack_30;
  char *pcStack_2c;
  int *piStack_24;
  byte bStack_14;
  
  piStack_130 = (int *)this->mbr_0x58;
  if (piStack_130 == (int *)0x0) {
    return 0x80004005;
  }
  dStack_12c = this->mbr_0x670;
  fStack_134 = 8.517231e-39;
  (**(code **)(*piStack_130 + 0xdc))();
  fStack_134 = (float)this->mbr_0x674;
  piStack_138 = (int *)this->mbr_0x58;
  uStack_13c = 0x5cbea6;
  (**(code **)(*piStack_138 + 0xd8))();
  uStack_13c = 0x144;
  piStack_140 = DAT_00708300;
  fStack_144 = 8.517284e-39;
  (**(code **)(*DAT_00708300 + 0x130))();
  piStack_148 = (int *)this->mbr_0x60;
  fStack_144 = 3.923636e-44;
  DAT_007083cc = DAT_007083cc + 1;
  (**(code **)(*DAT_00708300 + 0x14c))();
  if ((bStack_14 & 4) != 0) {
    cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,0x11,2);
    cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,0x10,2);
  }
  ppiVar7 = &piStack_148;
  ppiVar9 = (int **)0x0;
  piStack_e4 = piStack_24;
  piStack_148 = (int *)0x0;
  fStack_144 = 0.0;
  (**(code **)(*(int *)this->mbr_0x60 + 0x2c))();
  cVar1 = *pcStack_2c;
  ppiVar6 = (int **)0x0;
  while (cVar1 != '\0') {
    pcStack_2c = pcStack_2c + 1;
    if (cVar1 == '\n') {
      fVar2 = (float)this->mbr_0x68;
      fStack_38 = fStack_f8;
      if ((int)this->mbr_0x68 < 0) {
        fVar2 = fVar2 + 4.294967e+09;
      }
      fStack_34 = fVar2 * (*(float *)&this->field_0x7c - (float)this->mbr_0x74) + fStack_34;
    }
    else if ('\x1f' < cVar1) {
      iVar5 = (int)cVar1;
      fStack_d0 = *(float *)((iVar5 + -0x19) * 0x10 + (int)this);
      fStack_94 = *(float *)((int)this + iVar5 * 0x10 + -0x18c);
      fStack_60 = *(float *)((int)this + iVar5 * 0x10 + -0x188);
      fStack_cc = *(float *)((int)this + iVar5 * 0x10 + -0x184);
      fVar2 = 1.0 / (float)this->mbr_0x6c;
      fVar4 = (float)this->mbr_0x64;
      if ((int)this->mbr_0x64 < 0) {
        fVar4 = fVar4 + 4.294967e+09;
      }
      fVar3 = (float)this->mbr_0x68;
      if ((int)this->mbr_0x68 < 0) {
        fVar3 = fVar3 + 4.294967e+09;
      }
      uStack_dc = 0x3f666666;
      piStack_138 = (int *)(fStack_38 - 0.5);
      uStack_d4 = uStack_30;
      piStack_e4 = piStack_138;
      uStack_d8 = 0x3f800000;
      fStack_144 = (fVar3 * (fStack_cc - fStack_94) * fVar2 + fStack_34) - 0.5;
      uStack_9c = uStack_30;
      uStack_13c = 0x3f800000;
      piStack_140 = (int *)0x3f666666;
      fStack_e0 = fStack_144;
      ppiVar6 = &piStack_e4;
      ppiVar8 = ppiVar9;
      for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
        *ppiVar8 = *ppiVar6;
        ppiVar6 = ppiVar6 + 1;
        ppiVar8 = ppiVar8 + 1;
      }
      fStack_134 = fStack_34 - 0.5;
      fStack_98 = fStack_d0;
      fVar2 = fVar4 * (fStack_60 - fStack_d0) * fVar2 + fStack_38;
      fStack_a8 = fStack_134;
      piStack_ac = piStack_138;
      piStack_148 = (int *)(fVar2 - 0.5);
      uStack_a4 = 0x3f666666;
      uStack_a0 = 0x3f800000;
      fStack_5c = fStack_cc;
      ppiVar6 = &piStack_ac;
      ppiVar8 = ppiVar9 + 7;
      for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
        *ppiVar8 = *ppiVar6;
        ppiVar6 = ppiVar6 + 1;
        ppiVar8 = ppiVar8 + 1;
      }
      piStack_74 = piStack_148;
      uStack_68 = 0x3f800000;
      fStack_70 = fStack_144;
      uStack_6c = 0x3f666666;
      uStack_64 = uStack_30;
      piStack_c8 = piStack_148;
      ppiVar6 = &piStack_74;
      ppiVar8 = ppiVar9 + 0xe;
      for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
        *ppiVar8 = *ppiVar6;
        ppiVar6 = ppiVar6 + 1;
        ppiVar8 = ppiVar8 + 1;
      }
      fStack_b4 = fStack_60;
      fStack_b0 = fStack_94;
      fStack_7c = fStack_60;
      fStack_78 = fStack_cc;
      fStack_44 = fStack_d0;
      fStack_40 = fStack_94;
      uStack_c0 = 0x3f666666;
      fStack_c4 = fStack_134;
      uStack_bc = 0x3f800000;
      uStack_b8 = uStack_30;
      ppiVar6 = &piStack_c8;
      ppiVar8 = ppiVar9 + 0x15;
      for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
        *ppiVar8 = *ppiVar6;
        ppiVar6 = ppiVar6 + 1;
        ppiVar8 = ppiVar8 + 1;
      }
      fStack_8c = fStack_144;
      piStack_90 = piStack_148;
      uStack_88 = 0x3f666666;
      uStack_84 = 0x3f800000;
      uStack_80 = uStack_30;
      ppiVar6 = &piStack_90;
      ppiVar8 = ppiVar9 + 0x1c;
      for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
        *ppiVar8 = *ppiVar6;
        ppiVar6 = ppiVar6 + 1;
        ppiVar8 = ppiVar8 + 1;
      }
      piStack_58 = piStack_138;
      fStack_54 = fStack_134;
      piStack_130 = (int *)0x3f666666;
      dStack_12c = 0x3f800000;
      uStack_50 = 0x3f666666;
      uStack_4c = 0x3f800000;
      uStack_48 = uStack_30;
      ppiVar6 = &piStack_58;
      ppiVar8 = ppiVar9 + 0x23;
      for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
        *ppiVar8 = *ppiVar6;
        ppiVar6 = ppiVar6 + 1;
        ppiVar8 = ppiVar8 + 1;
      }
      ppiVar7 = (int **)((int)ppiVar7 + 2);
      ppiVar9 = ppiVar9 + 0x2a;
      if (0x126 < (uint)((int)ppiVar7 * 3)) {
        piStack_170 = (int *)this->mbr_0x60;
        (**(code **)(*piStack_170 + 0x30))();
        (**(code **)(*(int *)this->mbr_0x58 + 0x118))((int *)this->mbr_0x58,4,0,ppiVar7);
        piStack_170 = (int *)0x0;
        (**(code **)(*(int *)this->mbr_0x60 + 0x2c))((int *)this->mbr_0x60,0,0,&piStack_170,0x2000);
        ppiVar7 = (int **)0x0;
      }
      fStack_38 = fVar2;
    }
    ppiVar6 = ppiVar7;
    cVar1 = *pcStack_2c;
  }
  (**(code **)(*(int *)this->mbr_0x60 + 0x30))();
  if (ppiVar6 != (int **)0x0) {
    piStack_170 = (int *)0x0;
    (**(code **)(*(int *)this->mbr_0x58 + 0x118))((int *)this->mbr_0x58,4);
  }
  piStack_170 = (int *)this->mbr_0x58;
  (**(code **)(*piStack_170 + 0xd8))();
  return 0;
}


