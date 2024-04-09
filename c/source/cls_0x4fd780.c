#include "../include/cls_0x4fd780.h"

cls_0x4fd780 * __thiscall
cls_0x4fd780::~cls_0x4fd780(cls_0x4fd780 *this,undefined4 param_1,uint param_2)

{
  BYTE BVar1;
  char cVar2;
  BYTE *pBVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  BYTE *pBVar8;
  dword dVar9;
  uint uVar10;
  char *pcVar11;
  cls_0x4fd780 *pcVar12;
  VFX_Parameter *this_00;
  int unaff_EDI;
  int iVar13;
  int iVar14;
  uint unaff_retaddr;
  int local_244;
  cls_0x4fc0e0 local_240;
  _String_base a_Stack_230 [4];
  void *pvStack_22c;
  dword dStack_21c;
  dword dStack_218;
  _String_base a_Stack_214 [4];
  void *pvStack_210;
  dword dStack_200;
  dword dStack_1fc;
  _String_base a_Stack_1f8 [4];
  void *pvStack_1f4;
  dword dStack_1e4;
  dword dStack_1e0;
  _String_base local_1dc [4];
  void *local_1d8;
  dword local_1c8;
  uint local_1c4;
  undefined auStack_1c0 [52];
  undefined auStack_18c [52];
  undefined auStack_158 [52];
  VFX_ParameterInfo local_124;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063516d;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  this->mbr_0x0 = (dword)&VFX_FormatManager__vftable_67396c_0067396c;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x1c = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  iVar13 = 0;
  iVar7 = FUN_0052fb10();
  local_1c4 = 0xf;
  local_1c8 = 0;
  local_1d8 = (void *)((uint)local_1d8 & 0xffffff00);
  local_4._0_1_ = 3;
  if (0 < iVar7) {
    do {
      local_240.mbr_0x4 = 0;
      local_240.mbr_0x8 = 0;
      local_240.mbr_0xc = 0;
      local_4._0_1_ = 4;
      local_244 = FUN_0052fa30((&PTR_s_VFXEFFECTTYPE_PARTICLESYSTEM_006fca18)[iVar13]);
      if (iVar7 <= iVar13 + 1) {
        local_4._0_1_ = 3;
        cls_0x4fc0e0::meth_0x4fb560(&local_240);
        break;
      }
      FUN_004fcd00((int)&local_244);
      pBVar3 = (&PTR_s_VFXEFFECTTYPE_PARTICLESYSTEM_006fca18)[iVar13 + 1];
      iVar14 = iVar13 + 2;
      while( true ) {
        iVar13 = iVar14;
        if ((iVar7 <= iVar14) || (pBVar3 == (BYTE *)0x0)) goto LAB_004fdc1b;
        if (*pBVar3 != '\x01') break;
        pBVar8 = pBVar3 + 1;
        do {
          BVar1 = *pBVar8;
          pBVar8 = pBVar8 + 1;
        } while (BVar1 != '\0');
        ::cls_0x50db20::meth_0x401bd0
                  ((cls_0x50db20 *)local_1dc,(char *)(pBVar3 + 1),(int)pBVar8 - (int)(pBVar3 + 2));
LAB_004fdbed:
        pBVar3 = (&PTR_s_VFXEFFECTTYPE_PARTICLESYSTEM_006fca18)[iVar13];
        iVar14 = iVar13 + 1;
      }
      VFX_ParameterInfo::VFX_ParameterInfo((VFX_ParameterInfo *)(auStack_158 + 0x34));
      local_4._0_1_ = 5;
      dVar9 = FUN_004fdcf0(pBVar3);
      uVar10 = FUN_004fdd90(pBVar3);
      dStack_1e0 = 0xf;
      dStack_1e4 = 0;
      pvStack_1f4 = (void *)((uint)pvStack_1f4 & 0xffffff00);
      local_124.VFX_Parameter.mbr_0x20 = dVar9;
      local_124.VFX_Parameter.mbr_0x24 = uVar10;
      ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)a_Stack_1f8,local_1dc,0,0xffffffff);
      local_4._0_1_ = 6;
      ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&local_124.mbr_0x34,a_Stack_1f8,0,0xffffffff);
      local_4._0_1_ = 5;
      if (0xf < dStack_1e0) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_1f4);
      }
      dStack_1e0 = 0xf;
      pcVar4 = (&PTR_s_VFXEFFECTTYPE_PARTICLESYSTEM_006fca18)[iVar14];
      iVar13 = iVar14 + 1;
      dStack_1e4 = 0;
      pvStack_1f4 = (void *)((uint)pvStack_1f4 & 0xffffff00);
      if (iVar13 < iVar7) {
        dStack_218 = 0xf;
        dStack_21c = 0;
        pvStack_22c = (void *)((uint)pvStack_22c & 0xffffff00);
        pcVar11 = pcVar4;
        do {
          cVar2 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar2 != '\0');
        ::cls_0x50db20::meth_0x401bd0
                  ((cls_0x50db20 *)a_Stack_230,pcVar4,(int)pcVar11 - (int)(pcVar4 + 1));
        local_4._0_1_ = 7;
        ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)(auStack_158 + 0x38),a_Stack_230,0,0xffffffff)
        ;
        local_4._0_1_ = 5;
        if (0xf < dStack_218) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_22c);
        }
        dStack_218 = 0xf;
        dStack_21c = 0;
        pvStack_22c = (void *)((uint)pvStack_22c & 0xffffff00);
        VFX_Parameter::meth_0x4fdea0((VFX_Parameter *)(auStack_158 + 0x34),0xffffffff);
        VFX_ParameterInfo::meth_0x4ff1b0
                  ((VFX_ParameterInfo *)(auStack_158 + 0x34),
                   (undefined4 *)(&PTR_s_VFXEFFECTTYPE_PARTICLESYSTEM_006fca18)[iVar13],dVar9,uVar10
                   ,unaff_EDI);
        for (iVar13 = iVar14 + 2;
            (iVar13 < iVar7 &&
            (pcVar4 = (&PTR_s_VFXEFFECTTYPE_PARTICLESYSTEM_006fca18)[iVar13], pcVar4 != (char *)0x0)
            ); iVar13 = iVar13 + 1) {
          cVar2 = *pcVar4;
          if (cVar2 == '\x02') {
            dStack_1fc = 0xf;
            dStack_200 = 0;
            pvStack_210 = (void *)((uint)pvStack_210 & 0xffffff00);
            pcVar11 = pcVar4 + 1;
            do {
              cVar2 = *pcVar11;
              pcVar11 = pcVar11 + 1;
            } while (cVar2 != '\0');
            ::cls_0x50db20::meth_0x401bd0
                      ((cls_0x50db20 *)a_Stack_214,pcVar4 + 1,(int)pcVar11 - (int)(pcVar4 + 2));
            local_4._0_1_ = 8;
            ::cls_0x50db20::meth_0x401b20
                      ((cls_0x50db20 *)&local_124.mbr_0x50,a_Stack_214,0,0xffffffff);
            local_4._0_1_ = 5;
            if (0xf < dStack_1fc) {
                    /* WARNING: Subroutine does not return */
              _free(pvStack_210);
            }
            dStack_1fc = 0xf;
            dStack_200 = 0;
            pvStack_210 = (void *)((uint)pvStack_210 & 0xffffff00);
          }
          else {
            if (cVar2 == '\x03') {
              VFX_Parameter::VFX_Parameter((VFX_Parameter *)auStack_1c0);
              local_4._0_1_ = 9;
              VFX_ParameterInfo::meth_0x4ff1b0
                        ((VFX_ParameterInfo *)auStack_1c0,(undefined4 *)(pcVar4 + 1),dVar9,uVar10,
                         unaff_EDI);
              VFX_Parameter::meth_0x4ffcc0(&local_124.VFX_Parameter,(int)auStack_1c0);
              local_124.mbr_0xa0 = 1;
              this_00 = (VFX_Parameter *)auStack_1c0;
            }
            else if (cVar2 == '\x04') {
              VFX_Parameter::VFX_Parameter((VFX_Parameter *)auStack_158);
              local_4._0_1_ = 10;
              VFX_ParameterInfo::meth_0x4ff1b0
                        ((VFX_ParameterInfo *)auStack_158,(undefined4 *)(pcVar4 + 1),dVar9,uVar10,
                         unaff_EDI);
              VFX_Parameter::meth_0x4ffcc0(&local_124.VFX_Parameter,(int)auStack_158);
              local_124.mbr_0xd8 = 1;
              this_00 = (VFX_Parameter *)auStack_158;
            }
            else {
              if (cVar2 != '\x05') break;
              VFX_Parameter::VFX_Parameter((VFX_Parameter *)auStack_18c);
              local_4._0_1_ = 0xb;
              VFX_ParameterInfo::meth_0x4ff1b0
                        ((VFX_ParameterInfo *)auStack_18c,(undefined4 *)(pcVar4 + 1),dVar9,uVar10,
                         unaff_EDI);
              VFX_Parameter::meth_0x4ffcc0(&local_124.VFX_Parameter,(int)auStack_18c);
              local_124.mbr_0x110 = 1;
              this_00 = (VFX_Parameter *)auStack_18c;
            }
            local_4._0_1_ = 5;
            VFX_Parameter::~VFX_Parameter(this_00);
          }
        }
        cls_0x4fc0e0::meth_0x4fcba0(&local_240,auStack_158 + 0x34);
        local_4._0_1_ = 4;
        if (iVar13 < iVar7) {
          VFX_ParameterInfo::~VFX_ParameterInfo((VFX_ParameterInfo *)(auStack_158 + 0x34));
          goto LAB_004fdbed;
        }
      }
      local_4._0_1_ = 4;
      VFX_ParameterInfo::~VFX_ParameterInfo((VFX_ParameterInfo *)(auStack_158 + 0x34));
LAB_004fdc1b:
      cls_0x4fb050::meth_0x4fd6f0((cls_0x4fb050 *)&this->field_0x4,&local_244);
      puVar6 = (undefined4 *)local_240.mbr_0x8;
      local_4._0_1_ = 3;
      puVar5 = (undefined4 *)local_240.mbr_0x4;
      if ((undefined4 *)local_240.mbr_0x4 != (undefined4 *)0x0) {
        for (; puVar5 != puVar6; puVar5 = puVar5 + 0x45) {
          (**(code **)*puVar5)(0);
        }
                    /* WARNING: Subroutine does not return */
        _free((void *)local_240.mbr_0x4);
      }
      local_240.mbr_0x4 = 0;
      local_240.mbr_0x8 = 0;
      local_240.mbr_0xc = 0;
    } while (iVar13 < iVar7);
  }
  FUN_004fcd00((int)&this->field_0x14);
  FUN_004fc7b0(this);
  if (local_1c4 < 0x10) {
    ExceptionList = pvStack_c;
    pcVar12 = (cls_0x4fd780 *)FUN_00616e15(local_10 ^ unaff_retaddr);
    return pcVar12;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_1d8);
}


