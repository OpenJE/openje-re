#include "../include/G3D_PointLight.h"

G3D_PointLight * __thiscall G3D_PointLight::G3D_PointLight(G3D_PointLight *this)

{
  G3D_BaseLight::G3D_BaseLight(&this->G3D_BaseLight);
  this->mbr_0x78 = 0;
  (this->G3D_BaseLight).G3D_BaseAttribute.vftptr_0x0 =
       (G3D_BaseAttribute__vftable_671ce0 *)&G3D_PointLight__vftable_671d74_00671d74;
  this->mbr_0x7c = 0x3ff00000;
  this->mbr_0x60 = 0;
  this->mbr_0x64 = 0x3ff00000;
  this->mbr_0x68 = 0;
  this->mbr_0x6c = 0;
  this->mbr_0x70 = 0;
  this->mbr_0x74 = 0;
  this->mbr_0x80 = 0;
  return this;
}



void __thiscall G3D_PointLight::virt_meth_0x4cb780(G3D_PointLight *this,FILE *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_004c8b00(param_1);
  FID_conflict__fwprintf(param_1,L"猥⁻","PointLight");
  cls_0x4ca8c0::meth_0x4ca8c0
            ((cls_0x4ca8c0 *)&(this->G3D_BaseLight).G3D_BaseAttribute.field_0x4,param_1,'\0');
  FID_conflict__fwprintf(param_1,(wchar_t *)"Ambient");
  FUN_004c8810(param_1);
  FID_conflict__fwprintf(param_1,(wchar_t *)"Diffuse");
  FUN_004c8810(param_1);
  FID_conflict__fwprintf(param_1,(wchar_t *)"Specular");
  FUN_004c8810(param_1);
  FID_conflict__fwprintf(param_1,(wchar_t *)"%s(%g) ");
  FUN_004c8730(this->mbr_0x78,this->mbr_0x7c);
  FID_conflict__fwprintf(param_1,(wchar_t *)"%s(%g) ");
  FID_conflict__fwprintf(param_1,(wchar_t *)"%s(%d) ","Falloff",this->mbr_0x80);
  uVar1._0_4_ = this->mbr_0x70;
  uVar1._4_4_ = this->mbr_0x74;
  uVar2._0_4_ = this->mbr_0x68;
  uVar2._4_4_ = this->mbr_0x6c;
  uVar3._0_4_ = this->mbr_0x60;
  uVar3._4_4_ = this->mbr_0x64;
  FID_conflict__fwprintf(param_1,(wchar_t *)"%s(%g %g %g) ","Attenuation",uVar3,uVar2,uVar1);
  FID_conflict__fwprintf(param_1,L"੽");
  return;
}



void __thiscall G3D_PointLight::virt_meth_0x4d6150(G3D_PointLight *this)

{
  dword *pdVar1;
  char *pcVar2;
  uint uVar3;
  dword *pdVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *****pppppuVar7;
  byte *pbVar8;
  bool bVar9;
  bool bVar10;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  ulonglong uVar11;
  uint unaff_retaddr;
  float10 *pfVar12;
  undefined local_88 [8];
  dword local_80;
  dword local_7c;
  int local_78 [17];
  undefined4 *****local_34 [4];
  char *local_24;
  uint local_20;
  uint local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00633338;
  local_14 = ExceptionList;
  local_1c = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_14;
  FUN_0052ba00('{');
  pdVar1 = (dword *)FUN_0052b940(local_78);
  local_88._4_4_ = pdVar1[1];
  local_88._0_4_ = *pdVar1;
  local_80 = pdVar1[2];
  local_7c = pdVar1[3];
  do {
    if (local_88._0_4_ == 0x7d) {
      ExceptionList = local_14;
      FUN_00616e15(local_1c ^ unaff_retaddr);
      return;
    }
    if (local_88._0_4_ == 0x100) {
      FUN_0052afe0((cls_0x50db20 *)(local_78 + 0x10));
      local_c = 0;
      pcVar5 = "Name";
      do {
        pcVar2 = pcVar5;
        pcVar5 = pcVar2 + 1;
      } while (*pcVar2 != '\0');
      pcVar2 = pcVar2 + -0x65cbe0;
      if (local_24 == (char *)0x0) {
LAB_004d623c:
        if ((local_24 < pcVar2) || (local_24 != pcVar2)) goto LAB_004d6258;
        ::cls_0x50db20::meth_0x4d05e0
                  ((cls_0x50db20 *)&(this->G3D_BaseLight).G3D_BaseAttribute.field_0x4);
      }
      else {
        pcVar5 = local_24;
        if (pcVar2 <= local_24) {
          pcVar5 = pcVar2;
        }
        pppppuVar7 = local_34[0];
        if (local_20 < 0x10) {
          pppppuVar7 = local_34;
        }
        bVar9 = false;
        iVar6 = 0;
        bVar10 = true;
        pbVar8 = &DAT_0065cbe0;
        do {
          if (pcVar5 == (char *)0x0) break;
          pcVar5 = pcVar5 + -1;
          bVar9 = *(byte *)pppppuVar7 < *pbVar8;
          bVar10 = *(byte *)pppppuVar7 == *pbVar8;
          pppppuVar7 = (undefined4 *****)((int)pppppuVar7 + 1);
          pbVar8 = pbVar8 + 1;
        } while (bVar10);
        if (!bVar10) {
          iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        }
        if (iVar6 == 0) goto LAB_004d623c;
LAB_004d6258:
        pcVar5 = "Ambient";
        do {
          pcVar2 = pcVar5;
          pcVar5 = pcVar2 + 1;
        } while (*pcVar2 != '\0');
        uVar3 = ::cls_0x50db20::meth_0x41e4b0
                          ((cls_0x50db20 *)(local_78 + 0x10),0,(uint)local_24,
                           (_String_base *)"Ambient",(uint)(pcVar2 + -0x67194c));
        if (uVar3 == 0) {
          pdVar4 = (dword *)FUN_004c8750();
          pdVar1 = &(this->G3D_BaseLight).mbr_0x24;
        }
        else {
          pcVar5 = "Diffuse";
          do {
            pcVar2 = pcVar5;
            pcVar5 = pcVar2 + 1;
          } while (*pcVar2 != '\0');
          uVar3 = ::cls_0x50db20::meth_0x41e4b0
                            ((cls_0x50db20 *)(local_78 + 0x10),0,(uint)local_24,
                             (_String_base *)"Diffuse",(uint)(pcVar2 + -0x671944));
          if (uVar3 == 0) {
            pdVar4 = (dword *)FUN_004c8750();
            pdVar1 = &(this->G3D_BaseLight).mbr_0x34;
          }
          else {
            pcVar5 = "Specular";
            do {
              pcVar2 = pcVar5;
              pcVar5 = pcVar2 + 1;
            } while (*pcVar2 != '\0');
            uVar3 = ::cls_0x50db20::meth_0x41e4b0
                              ((cls_0x50db20 *)(local_78 + 0x10),0,(uint)local_24,
                               (_String_base *)"Specular",(uint)(pcVar2 + -0x67192c));
            if (uVar3 != 0) {
              pcVar5 = "Intensity";
              do {
                pcVar2 = pcVar5;
                pcVar5 = pcVar2 + 1;
              } while (*pcVar2 != '\0');
              uVar3 = ::cls_0x50db20::meth_0x41e4b0
                                ((cls_0x50db20 *)(local_78 + 0x10),0,(uint)local_24,
                                 (_String_base *)"Intensity",(uint)(pcVar2 + -0x671778));
              if (uVar3 == 0) {
                pfVar12 = (float10 *)0x28;
                FUN_0052ba00('(');
                FUN_0052baf0(pfVar12);
                *(double *)&(this->G3D_BaseLight).mbr_0x58 = (double)extraout_ST0;
                FUN_0052ba00(')');
              }
              else {
                pcVar5 = "Radius";
                do {
                  pcVar2 = pcVar5;
                  pcVar5 = pcVar2 + 1;
                } while (*pcVar2 != '\0');
                uVar3 = ::cls_0x50db20::meth_0x41e4b0
                                  ((cls_0x50db20 *)(local_78 + 0x10),0,(uint)local_24,
                                   (_String_base *)"Radius",(uint)(pcVar2 + -0x671768));
                if (uVar3 == 0) {
                  pfVar12 = (float10 *)0x28;
                  FUN_0052ba00('(');
                  FUN_004c8720(pfVar12);
                  *(double *)&this->mbr_0x78 = (double)extraout_ST0_00;
                  FUN_0052ba00(')');
                }
                else {
                  bVar9 = FUN_0043ffd0((cls_0x50db20 *)(local_78 + 0x10),(_String_base *)"Falloff");
                  if (bVar9) {
                    pfVar12 = (float10 *)0x28;
                    FUN_0052ba00('(');
                    FUN_0052baf0(pfVar12);
                    uVar11 = FUN_00616e24();
                    this->mbr_0x80 = (dword)uVar11;
                    FUN_0052ba00(')');
                  }
                  else {
                    bVar9 = FUN_0043ffd0((cls_0x50db20 *)(local_78 + 0x10),
                                         (_String_base *)"Attenuation");
                    if (bVar9) {
                      pfVar12 = (float10 *)0x28;
                      FUN_0052ba00('(');
                      FUN_0052baf0(pfVar12);
                      *(double *)&this->mbr_0x60 = (double)extraout_ST0_01;
                      FUN_0052baf0(pfVar12);
                      *(double *)&this->mbr_0x68 = (double)extraout_ST0_02;
                      FUN_0052baf0(pfVar12);
                      *(double *)&this->mbr_0x70 = (double)extraout_ST0_03;
                      FUN_0052ba00(')');
                    }
                    else {
                      cls_0x4cc4d0::meth_0x4cc4d0((cls_0x4cc4d0 *)local_88);
                    }
                  }
                }
              }
              goto LAB_004d6444;
            }
            pdVar4 = (dword *)FUN_004c8750();
            pdVar1 = &(this->G3D_BaseLight).mbr_0x44;
          }
        }
        *pdVar1 = *pdVar4;
        pdVar1[1] = pdVar4[1];
        pdVar1[2] = pdVar4[2];
        pdVar1[3] = pdVar4[3];
      }
LAB_004d6444:
      local_c = 0xffffffff;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        _free(local_34[0]);
      }
      local_20 = 0xf;
      local_24 = (char *)0x0;
      local_34[0] = (undefined4 *****)((uint)local_34[0] & 0xffffff00);
    }
    else {
      cls_0x4cc4d0::meth_0x4cc4d0((cls_0x4cc4d0 *)local_88);
    }
    pdVar1 = (dword *)FUN_0052b940(local_78);
    local_88._4_4_ = pdVar1[1];
    local_88._0_4_ = *pdVar1;
    local_80 = pdVar1[2];
    local_7c = pdVar1[3];
  } while( true );
}


#include "../include/G3D_PointLight.h"
