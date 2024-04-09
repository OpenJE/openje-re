#include "../include/FontPage.h"

FontPage * __thiscall GUI::FontPage::~FontPage(FontPage *this,byte param_1)

{
  this->vftptr_0x0 = &FontPage__vftable_67732c_0067732c;
  meth_0x5382a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}



void __thiscall GUI::FontPage::meth_0x5382a0(FontPage *this)

{
  int iVar1;
  dword *pdVar2;
  
  this->mbr_0x4 = 0;
  if (this->mbr_0x8 != 0) {
    (**(code **)(*DAT_00707ce4 + 0xd0))(this->mbr_0x8);
  }
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0x3f800000;
  pdVar2 = &this->mbr_0x10;
  for (iVar1 = 0x600; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pdVar2 = 0;
    pdVar2 = pdVar2 + 1;
  }
  return;
}



void __thiscall
GUI::FontPage::meth_0x5382e0
          (FontPage *this,_String_base *param_1,uint param_2,int param_3,int param_4,DWORD param_5)

{
  char cVar1;
  float fVar2;
  float fVar3;
  FontPage *pFVar4;
  HDC hdc;
  HBITMAP ho;
  HFONT h;
  undefined4 *puVar5;
  int iVar6;
  BOOL BVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  _String_base *pszFaceName;
  undefined *puVar12;
  BITMAPINFO *pBVar13;
  ulonglong uVar14;
  uint unaff_retaddr;
  dword dVar15;
  uint uVar16;
  void *pvVar17;
  undefined *local_f0;
  dword dStack_ec;
  undefined2 uStack_e8;
  undefined *local_e4;
  HDC pHStack_e0;
  HBITMAP pHStack_dc;
  undefined *puStack_d8;
  HFONT pHStack_d4;
  int iStack_d0;
  tagSIZE tStack_cc;
  FontPage *local_c4;
  undefined *local_c0;
  void *pvStack_bc;
  undefined auStack_b8 [28];
  VFX_Parameter__vftable_673a20 *pVStack_9c;
  dword dStack_98;
  BITMAPINFO BStack_90;
  Gfx_Texture GStack_64;
  char acStack_30 [32];
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006372c3;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  local_c4 = this;
  meth_0x5382a0(this);
  if (param_3 < 0x29) {
    if (param_3 < 0x17) {
      local_f0 = (undefined *)0x200;
      if (param_3 < 0xb) {
        local_f0 = (undefined *)0x100;
      }
    }
    else {
      local_f0 = (undefined *)0x400;
    }
    this->mbr_0xc = 0x3f800000;
    local_e4 = local_f0;
    (**(code **)(*DAT_00707ce4 + 0x5c))();
    if (local_c0 < local_f0) {
      puStack_d8 = local_c0;
      fVar2 = (float)(int)local_c0;
      if ((int)local_c0 < 0) {
        fVar2 = fVar2 + 4.294967e+09;
      }
      fVar3 = (float)(int)local_f0;
      local_e4 = local_c0;
      local_f0 = local_c0;
      this->mbr_0xc = (dword)(fVar2 / fVar3);
    }
    pBVar13 = &BStack_90;
    for (iVar10 = 10; iVar10 != 0; iVar10 = iVar10 + -1) {
      (pBVar13->bmiHeader).biSize = 0;
      pBVar13 = (BITMAPINFO *)&(pBVar13->bmiHeader).biWidth;
    }
    BStack_90.bmiHeader.biHeight = -(int)local_e4;
    BStack_90.bmiHeader.biSize = 0x28;
    BStack_90.bmiHeader.biWidth = (LONG)local_f0;
    BStack_90.bmiHeader.biPlanes = 1;
    BStack_90.bmiHeader.biCompression = 0;
    BStack_90.bmiHeader.biBitCount = 0x20;
    hdc = CreateCompatibleDC((HDC)0x0);
    pHStack_e0 = hdc;
    if (hdc != (HDC)0x0) {
      ho = CreateDIBSection(hdc,&BStack_90,0,&pvStack_bc,(HANDLE)0x0,0);
      pHStack_dc = ho;
      if (ho != (HBITMAP)0x0) {
        iVar10 = SetMapMode(hdc,1);
        if (iVar10 == 0) {
          DeleteObject(ho);
          DeleteDC(hdc);
          goto LAB_0053894f;
        }
        iVar10 = 0x48;
        uVar14 = FUN_00616e24();
        iVar10 = MulDiv(param_3,(int)uVar14,iVar10);
        if (*(uint *)(param_1 + 0x18) < 0x10) {
          pszFaceName = param_1 + 4;
        }
        else {
          pszFaceName = *(_String_base **)(param_1 + 4);
        }
        puVar12 = (undefined *)0x0;
        uVar16 = 0;
        dVar15 = 0;
        h = CreateFontA(-iVar10,0,0,0,(-(uint)((param_2 & 1) != 0) & 300) + 400,param_2 >> 1 & 1,
                        param_2 >> 2 & 1,param_2 >> 3 & 1,param_5,0,0,2,2,(LPCSTR)pszFaceName);
        pHStack_d4 = h;
        if (h != (HFONT)0x0) {
          SelectObject(hdc,pHStack_dc);
          SelectObject(hdc,h);
          SetTextColor(hdc,0xffffff);
          SetBkColor(hdc,0);
          SetTextAlign(hdc,0);
          dStack_ec = 0;
          puStack_d8 = (undefined *)0x0;
          uStack_e8 = 0;
          iStack_d0 = 0;
          iVar10 = 0;
          do {
            uStack_e8 = CONCAT11(uStack_e8._1_1_,(char)param_4 + (char)iVar10);
            GetTextExtentPoint32A(pHStack_e0,(LPCSTR)&uStack_e8,1,&tStack_cc);
            puVar5 = (undefined4 *)(param_1 + 4);
            if (0xf < *(uint *)(param_1 + 0x18)) {
              puVar5 = (undefined4 *)*puVar5;
            }
            iVar6 = __stricmp((char *)puVar5,"fallouty");
            if ((iVar6 == 0) && (iVar10 == 0x20)) {
              tStack_cc.cx = tStack_cc.cx + 3;
            }
            if (iStack_d0 < tStack_cc.cy) {
              iStack_d0 = tStack_cc.cy;
            }
            if ((int)local_f0 < (int)(tStack_cc.cx + 2 + dStack_ec)) {
              puVar12 = puVar12 + iStack_d0 + 1;
              dStack_ec = 0;
              iStack_d0 = 0;
              puStack_d8 = puVar12;
            }
            BVar7 = ExtTextOutA(pHStack_e0,dStack_ec,(int)puVar12,2,(RECT *)0x0,(LPCSTR)&uStack_e8,1
                                ,(INT *)0x0);
            pFVar4 = local_c4;
            if (BVar7 == 0) {
              DeleteObject(h);
              DeleteObject(pHStack_dc);
              DeleteDC(pHStack_e0);
              goto LAB_0053894f;
            }
            uVar14 = FUN_00616e24();
            *(int *)((int)pFVar4 + iVar10 * 0x18 + 0x10) = (int)uVar14;
            uVar14 = FUN_00616e24();
            fVar2 = (float)dStack_ec;
            *(int *)((int)pFVar4 + iVar10 * 0x18 + 0x14) = (int)uVar14;
            iVar6 = tStack_cc.cx + dStack_ec;
            iVar11 = iVar10 + 1;
            dStack_ec = iVar6 + 2;
            *(float *)((int)pFVar4 + iVar10 * 0x18 + 0x18) = fVar2 / (float)(int)local_f0;
            *(float *)((int)pFVar4 + iVar10 * 0x18 + 0x1c) =
                 (float)(int)puStack_d8 / (float)(int)local_e4;
            *(float *)((int)pFVar4 + iVar10 * 0x18 + 0x20) = (float)iVar6 / (float)(int)local_f0;
            *(float *)((int)pFVar4 + iVar10 * 0x18 + 0x24) =
                 (float)(int)(puVar12 + tStack_cc.cy) / (float)(int)local_e4;
            iVar10 = iVar11;
            h = pHStack_d4;
          } while (iVar11 < 0x100);
          iVar10 = 0;
          auStack_b8._24_4_ = 0xf;
          auStack_b8._20_4_ = 0;
          auStack_b8._4_4_ = auStack_b8._4_4_ & 0xffffff00;
          uStack_4 = 0;
          ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)auStack_b8,param_1,0,0xffffffff);
          puVar8 = (undefined4 *)__itoa(param_2,acStack_30,10);
          puVar5 = puVar8;
          do {
            cVar1 = *(char *)puVar5;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
          } while (cVar1 != '\0');
          cls_0x4d8d70::meth_0x4257d0
                    ((cls_0x4d8d70 *)auStack_b8,puVar8,(int)puVar5 - ((int)puVar8 + 1));
          puVar8 = (undefined4 *)__itoa(param_3,acStack_30,10);
          puVar5 = puVar8;
          do {
            cVar1 = *(char *)puVar5;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
          } while (cVar1 != '\0');
          cls_0x4d8d70::meth_0x4257d0
                    ((cls_0x4d8d70 *)auStack_b8,puVar8,(int)puVar5 - ((int)puVar8 + 1));
          puVar8 = (undefined4 *)__itoa(param_4,acStack_30,10);
          puVar5 = puVar8;
          do {
            cVar1 = *(char *)puVar5;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
          } while (cVar1 != '\0');
          cls_0x4d8d70::meth_0x4257d0
                    ((cls_0x4d8d70 *)auStack_b8,puVar8,(int)puVar5 - ((int)puVar8 + 1));
          puVar8 = (undefined4 *)__itoa(param_5,acStack_30,10);
          puVar5 = puVar8;
          do {
            cVar1 = *(char *)puVar5;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
          } while (cVar1 != '\0');
          cls_0x4d8d70::meth_0x4257d0
                    ((cls_0x4d8d70 *)auStack_b8,puVar8,(int)puVar5 - ((int)puVar8 + 1));
          Gfx_Texture::Gfx_Texture(&GStack_64,1);
          puVar12 = local_e4;
          puStack_d8 = &stack0xfffffed0;
          uStack_4._0_1_ = 1;
          pvVar17 = (void *)(uVar16 & 0xffffff00);
          ::cls_0x50db20::meth_0x401b20
                    ((cls_0x50db20 *)&stack0xfffffed0,(_String_base *)auStack_b8,0,0xffffffff);
          piVar9 = Gfx_Texture::meth_0x520100(&GStack_64,dVar15,pvVar17);
          if ((int)piVar9 < 0) {
            DeleteObject(pHStack_d4);
            DeleteObject(pHStack_dc);
            DeleteDC(pHStack_e0);
            uStack_4 = (uint)uStack_4._1_3_ << 8;
            Gfx_Texture::meth_0x51f280(&GStack_64);
            cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_b8);
          }
          else {
            Gfx_Texture::LockRect(&GStack_64,0,auStack_b8 + 0x1c,0,0,0);
            if (0 < (int)puVar12) {
              do {
                iVar11 = 0;
                iVar6 = iVar10;
                if (0 < (int)local_f0) {
                  do {
                    uVar16 = *(uint *)(iVar6 + (int)pvStack_bc) & 0xff;
                    if (uVar16 == 0) {
                      *(undefined4 *)(dStack_98 + iVar11 * 4) = 0;
                    }
                    else {
                      *(uint *)(dStack_98 + iVar11 * 4) = uVar16 << 0x18 | 0xffffff;
                    }
                    iVar11 = iVar11 + 1;
                    iVar6 = iVar6 + 4;
                  } while (iVar11 < (int)local_f0);
                }
                dStack_98 = (int)&pVStack_9c->virt_meth_0x4ff950_0 + dStack_98;
                iVar10 = iVar10 + (int)local_f0 * 4;
                puVar12 = puVar12 + -1;
              } while (puVar12 != (undefined *)0x0);
            }
            Gfx_Texture::meth_0x534bf0(&GStack_64,0);
            pFVar4 = local_c4;
            iVar10 = (**(code **)(*DAT_00707ce4 + 0xcc))();
            if (iVar10 < 0) {
              DeleteObject(pHStack_d4);
              DeleteObject(pHStack_dc);
              DeleteDC(pHStack_e0);
              uStack_4 = (uint)uStack_4._1_3_ << 8;
              Gfx_Texture::meth_0x51f280(&GStack_64);
              if (0xf < (uint)auStack_b8._24_4_) {
                    /* WARNING: Subroutine does not return */
                _free((void *)auStack_b8._4_4_);
              }
            }
            else {
              DeleteObject(pHStack_d4);
              DeleteObject(pHStack_dc);
              DeleteDC(pHStack_e0);
              pFVar4->mbr_0x4 = 1;
              uStack_4 = (uint)uStack_4._1_3_ << 8;
              Gfx_Texture::meth_0x51f280(&GStack_64);
              if (0xf < (uint)auStack_b8._24_4_) {
                    /* WARNING: Subroutine does not return */
                _free((void *)auStack_b8._4_4_);
              }
            }
          }
          goto LAB_0053894f;
        }
        DeleteObject(pHStack_dc);
      }
      DeleteDC(hdc);
    }
  }
LAB_0053894f:
  ExceptionList = pvStack_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}


#include "../include/FontPage.h"
