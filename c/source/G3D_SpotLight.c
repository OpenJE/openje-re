#include "../include/G3D_SpotLight.h"

G3D_SpotLight * __thiscall G3D_SpotLight::G3D_SpotLight(G3D_SpotLight *this)

{
  int iVar1;
  undefined8 *puVar2;
  dword *pdVar3;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00633048;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  G3D_PointLight::G3D_PointLight(&this->G3D_PointLight);
  (this->G3D_PointLight).G3D_BaseLight.G3D_BaseAttribute.vftptr_0x0 =
       (G3D_BaseAttribute__vftable_671ce0 *)&G3D_SpotLight__vftable_671da8_00671da8;
  local_c = 0;
  this->mbr_0x98 = 0;
  this->mbr_0x9c = 0;
  this->mbr_0x90 = 0;
  this->mbr_0x94 = 0;
  this->mbr_0x88 = 0;
  this->mbr_0x8c = 0;
  local_30._0_4_ = 0;
  local_30._4_4_ = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0xbff00000;
  FUN_0048fc80((double *)&local_30);
  puVar2 = &local_30;
  pdVar3 = &this->mbr_0x88;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pdVar3 = *(dword *)puVar2;
    puVar2 = (undefined8 *)((int)puVar2 + 4);
    pdVar3 = pdVar3 + 1;
  }
  this->mbr_0xb0 = 0;
  this->mbr_0xb4 = 0x40468000;
  this->mbr_0xb8 = 0;
  this->mbr_0xbc = 0;
  ExceptionList = local_14;
  return this;
}



void __thiscall G3D_SpotLight::virt_meth_0x4cb950(G3D_SpotLight *this,FILE *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_004c8b00(param_1);
  FID_conflict__fwprintf(param_1,L"猥⁻","SpotLight");
  cls_0x4ca8c0::meth_0x4ca8c0
            ((cls_0x4ca8c0 *)&(this->G3D_PointLight).G3D_BaseLight.G3D_BaseAttribute.field_0x4,
             param_1,'\0');
  FID_conflict__fwprintf(param_1,(wchar_t *)"Ambient");
  FUN_004c8810(param_1);
  FID_conflict__fwprintf(param_1,(wchar_t *)"Diffuse");
  FUN_004c8810(param_1);
  FID_conflict__fwprintf(param_1,(wchar_t *)"Specular");
  FUN_004c8810(param_1);
  FID_conflict__fwprintf(param_1,(wchar_t *)"%s(%g) ");
  FUN_004c8730((this->G3D_PointLight).mbr_0x78,(this->G3D_PointLight).mbr_0x7c);
  FID_conflict__fwprintf(param_1,(wchar_t *)"%s(%g) ");
  FID_conflict__fwprintf(param_1,(wchar_t *)"%s(%d) ","Falloff",(this->G3D_PointLight).mbr_0x80);
  uVar1._0_4_ = (this->G3D_PointLight).mbr_0x70;
  uVar1._4_4_ = (this->G3D_PointLight).mbr_0x74;
  uVar2._0_4_ = (this->G3D_PointLight).mbr_0x68;
  uVar2._4_4_ = (this->G3D_PointLight).mbr_0x6c;
  uVar3._0_4_ = (this->G3D_PointLight).mbr_0x60;
  uVar3._4_4_ = (this->G3D_PointLight).mbr_0x64;
  FID_conflict__fwprintf(param_1,(wchar_t *)"%s(%g %g %g) ","Attenuation",uVar3,uVar2,uVar1);
  FID_conflict__fwprintf(param_1,L"猥","SpotDir");
  FUN_004c9330(param_1,&this->mbr_0x88);
  FID_conflict__fwprintf(param_1,(wchar_t *)"%s(%g) ");
  FID_conflict__fwprintf(param_1,(wchar_t *)"%s(%g) ");
  FID_conflict__fwprintf(param_1,L"੽");
  return;
}



void __thiscall G3D_SpotLight::virt_meth_0x4d1e50(G3D_SpotLight *this,FILE *param_1)

{
  dword *pdVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  float local_34 [5];
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0;
  local_c = 0;
  local_18 = 0;
  local_14 = 0;
  local_20._0_4_ = 0;
  local_20._4_4_ = 0;
  G3D_DirectionalLight::meth_0x4d06b0((G3D_DirectionalLight *)this,param_1);
  pdVar1 = (dword *)FUN_004c88f0();
  (this->G3D_PointLight).G3D_BaseLight.mbr_0x24 = *pdVar1;
  (this->G3D_PointLight).G3D_BaseLight.mbr_0x28 = pdVar1[1];
  (this->G3D_PointLight).G3D_BaseLight.mbr_0x2c = pdVar1[2];
  (this->G3D_PointLight).G3D_BaseLight.mbr_0x30 = pdVar1[3];
  pdVar1 = (dword *)FUN_004c88f0();
  (this->G3D_PointLight).G3D_BaseLight.mbr_0x34 = *pdVar1;
  (this->G3D_PointLight).G3D_BaseLight.mbr_0x38 = pdVar1[1];
  (this->G3D_PointLight).G3D_BaseLight.mbr_0x3c = pdVar1[2];
  (this->G3D_PointLight).G3D_BaseLight.mbr_0x40 = pdVar1[3];
  pdVar1 = (dword *)FUN_004c88f0();
  (this->G3D_PointLight).G3D_BaseLight.mbr_0x44 = *pdVar1;
  (this->G3D_PointLight).G3D_BaseLight.mbr_0x48 = pdVar1[1];
  (this->G3D_PointLight).G3D_BaseLight.mbr_0x4c = pdVar1[2];
  (this->G3D_PointLight).G3D_BaseLight.mbr_0x50 = pdVar1[3];
  _fread(local_34,4,1,param_1);
  *(double *)&(this->G3D_PointLight).G3D_BaseLight.mbr_0x58 = (double)local_34[0];
  _fread(local_34,4,1,param_1);
  *(double *)&(this->G3D_PointLight).mbr_0x78 = (double)local_34[0];
  _fread(local_34,4,1,param_1);
  uVar4 = FUN_00616e24();
  (this->G3D_PointLight).mbr_0x80 = (dword)uVar4;
  _fread(local_34,4,1,param_1);
  *(double *)&(this->G3D_PointLight).mbr_0x60 = (double)local_34[0];
  _fread(local_34,4,1,param_1);
  *(double *)&(this->G3D_PointLight).mbr_0x68 = (double)local_34[0];
  _fread(local_34,4,1,param_1);
  *(double *)&(this->G3D_PointLight).mbr_0x70 = (double)local_34[0];
  FUN_004c9400(param_1,(double *)&local_20);
  puVar3 = &local_20;
  pdVar1 = &this->mbr_0x88;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pdVar1 = *(dword *)puVar3;
    puVar3 = (undefined8 *)((int)puVar3 + 4);
    pdVar1 = pdVar1 + 1;
  }
  _fread(local_34,4,1,param_1);
  *(double *)&this->field_0xa0 = (double)local_34[0];
  _fread(local_34,4,1,param_1);
  *(double *)&this->field_0xa8 = (double)local_34[0];
  return;
}



void __thiscall G3D_SpotLight::virt_meth_0x4d1ff0(G3D_SpotLight *this,int param_1,int *param_2)

{
  float fVar1;
  dword *pdVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0;
  local_c = 0;
  local_18 = 0;
  local_14 = 0;
  local_20._0_4_ = 0;
  local_20._4_4_ = 0;
  G3D_DirectionalLight::meth_0x4d0750((G3D_DirectionalLight *)this,param_1,param_2);
  pdVar2 = (dword *)FUN_004c8970(param_2,param_1);
  (this->G3D_PointLight).G3D_BaseLight.mbr_0x24 = *pdVar2;
  (this->G3D_PointLight).G3D_BaseLight.mbr_0x28 = pdVar2[1];
  (this->G3D_PointLight).G3D_BaseLight.mbr_0x2c = pdVar2[2];
  (this->G3D_PointLight).G3D_BaseLight.mbr_0x30 = pdVar2[3];
  pdVar2 = (dword *)FUN_004c8970(param_2,param_1);
  (this->G3D_PointLight).G3D_BaseLight.mbr_0x34 = *pdVar2;
  (this->G3D_PointLight).G3D_BaseLight.mbr_0x38 = pdVar2[1];
  (this->G3D_PointLight).G3D_BaseLight.mbr_0x3c = pdVar2[2];
  (this->G3D_PointLight).G3D_BaseLight.mbr_0x40 = pdVar2[3];
  pdVar2 = (dword *)FUN_004c8970(param_2,param_1);
  (this->G3D_PointLight).G3D_BaseLight.mbr_0x44 = *pdVar2;
  (this->G3D_PointLight).G3D_BaseLight.mbr_0x48 = pdVar2[1];
  (this->G3D_PointLight).G3D_BaseLight.mbr_0x4c = pdVar2[2];
  (this->G3D_PointLight).G3D_BaseLight.mbr_0x50 = pdVar2[3];
  fVar1 = *(float *)(*param_2 + param_1);
  *param_2 = *param_2 + 4;
  *(double *)&(this->G3D_PointLight).G3D_BaseLight.mbr_0x58 = (double)fVar1;
  fVar1 = *(float *)(*param_2 + param_1);
  *param_2 = *param_2 + 4;
  *(double *)&(this->G3D_PointLight).mbr_0x78 = (double)fVar1;
  *param_2 = *param_2 + 4;
  uVar5 = FUN_00616e24();
  (this->G3D_PointLight).mbr_0x80 = (dword)uVar5;
  fVar1 = *(float *)(*param_2 + param_1);
  *param_2 = *param_2 + 4;
  *(double *)&(this->G3D_PointLight).mbr_0x60 = (double)fVar1;
  fVar1 = *(float *)(*param_2 + param_1);
  *param_2 = *param_2 + 4;
  *(double *)&(this->G3D_PointLight).mbr_0x68 = (double)fVar1;
  fVar1 = *(float *)(*param_2 + param_1);
  *param_2 = *param_2 + 4;
  *(double *)&(this->G3D_PointLight).mbr_0x70 = (double)fVar1;
  FUN_004c9460(param_1,(double *)&local_20,param_2);
  puVar4 = &local_20;
  pdVar2 = &this->mbr_0x88;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pdVar2 = *(dword *)puVar4;
    puVar4 = (undefined8 *)((int)puVar4 + 4);
    pdVar2 = pdVar2 + 1;
  }
  fVar1 = *(float *)(*param_2 + param_1);
  *param_2 = *param_2 + 4;
  *(double *)&this->field_0xa0 = (double)fVar1;
  fVar1 = *(float *)(*param_2 + param_1);
  *param_2 = *param_2 + 4;
  *(double *)&this->field_0xa8 = (double)fVar1;
  return;
}



void __thiscall G3D_SpotLight::virt_meth_0x4d64e0(G3D_SpotLight *this)

{
  VFX_Parameter__vftable_673a20 **ppVVar1;
  char *pcVar2;
  uint uVar3;
  dword *pdVar4;
  char *pcVar5;
  int iVar6;
  dword *pdVar7;
  undefined4 ******ppppppuVar8;
  double *pdVar9;
  byte *pbVar10;
  bool bVar11;
  bool bVar12;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 extraout_ST0_04;
  float10 extraout_ST0_05;
  ulonglong uVar13;
  uint unaff_retaddr;
  float10 *pfVar14;
  undefined4 ******local_a0 [4];
  char *local_90;
  uint local_8c;
  undefined local_88 [8];
  VFX_Parameter__vftable_673a20 *local_80;
  VFX_Parameter__vftable_673a20 *local_7c;
  undefined8 local_78;
  dword local_70;
  dword local_6c;
  dword local_68;
  dword local_64;
  int local_5c [16];
  uint local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006334fb;
  local_14 = ExceptionList;
  local_1c = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_14;
  FUN_0052ba00('{');
  ppVVar1 = (VFX_Parameter__vftable_673a20 **)FUN_0052b940(local_5c);
  local_88._4_4_ = ppVVar1[1];
  local_88._0_4_ = *ppVVar1;
  local_80 = ppVVar1[2];
  local_7c = ppVVar1[3];
  do {
    if ((VFX_Parameter__vftable_673a20 *)local_88._0_4_ == (VFX_Parameter__vftable_673a20 *)0x7d) {
      ExceptionList = local_14;
      FUN_00616e15(local_1c ^ unaff_retaddr);
      return;
    }
    if ((VFX_Parameter__vftable_673a20 *)local_88._0_4_ == (VFX_Parameter__vftable_673a20 *)0x100) {
      FUN_0052afe0((cls_0x50db20 *)&stack0xffffff5c);
      local_c = 0;
      pcVar5 = "Name";
      do {
        pcVar2 = pcVar5;
        pcVar5 = pcVar2 + 1;
      } while (*pcVar2 != '\0');
      pcVar2 = pcVar2 + -0x65cbe0;
      if (local_90 == (char *)0x0) {
LAB_004d65cc:
        if ((local_90 < pcVar2) || (local_90 != pcVar2)) goto LAB_004d65e8;
        ::cls_0x50db20::meth_0x4d05e0
                  ((cls_0x50db20 *)&(this->G3D_PointLight).G3D_BaseLight.G3D_BaseAttribute.field_0x4
                  );
      }
      else {
        pcVar5 = local_90;
        if (pcVar2 <= local_90) {
          pcVar5 = pcVar2;
        }
        ppppppuVar8 = local_a0[0];
        if (local_8c < 0x10) {
          ppppppuVar8 = local_a0;
        }
        bVar11 = false;
        iVar6 = 0;
        bVar12 = true;
        pbVar10 = &DAT_0065cbe0;
        do {
          if (pcVar5 == (char *)0x0) break;
          pcVar5 = pcVar5 + -1;
          bVar11 = *(byte *)ppppppuVar8 < *pbVar10;
          bVar12 = *(byte *)ppppppuVar8 == *pbVar10;
          ppppppuVar8 = (undefined4 ******)((int)ppppppuVar8 + 1);
          pbVar10 = pbVar10 + 1;
        } while (bVar12);
        if (!bVar12) {
          iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        }
        if (iVar6 == 0) goto LAB_004d65cc;
LAB_004d65e8:
        pcVar5 = "Ambient";
        do {
          pcVar2 = pcVar5;
          pcVar5 = pcVar2 + 1;
        } while (*pcVar2 != '\0');
        uVar3 = ::cls_0x50db20::meth_0x41e4b0
                          ((cls_0x50db20 *)&stack0xffffff5c,0,(uint)local_90,
                           (_String_base *)"Ambient",(uint)(pcVar2 + -0x67194c));
        if (uVar3 == 0) {
          pdVar4 = (dword *)FUN_004c8750();
          pdVar7 = &(this->G3D_PointLight).G3D_BaseLight.mbr_0x24;
        }
        else {
          pcVar5 = "Diffuse";
          do {
            pcVar2 = pcVar5;
            pcVar5 = pcVar2 + 1;
          } while (*pcVar2 != '\0');
          uVar3 = ::cls_0x50db20::meth_0x41e4b0
                            ((cls_0x50db20 *)&stack0xffffff5c,0,(uint)local_90,
                             (_String_base *)"Diffuse",(uint)(pcVar2 + -0x671944));
          if (uVar3 == 0) {
            pdVar4 = (dword *)FUN_004c8750();
            pdVar7 = &(this->G3D_PointLight).G3D_BaseLight.mbr_0x34;
          }
          else {
            pcVar5 = "Specular";
            do {
              pcVar2 = pcVar5;
              pcVar5 = pcVar2 + 1;
            } while (*pcVar2 != '\0');
            uVar3 = ::cls_0x50db20::meth_0x41e4b0
                              ((cls_0x50db20 *)&stack0xffffff5c,0,(uint)local_90,
                               (_String_base *)"Specular",(uint)(pcVar2 + -0x67192c));
            if (uVar3 != 0) {
              pcVar5 = "Intensity";
              do {
                pcVar2 = pcVar5;
                pcVar5 = pcVar2 + 1;
              } while (*pcVar2 != '\0');
              uVar3 = ::cls_0x50db20::meth_0x41e4b0
                                ((cls_0x50db20 *)&stack0xffffff5c,0,(uint)local_90,
                                 (_String_base *)"Intensity",(uint)(pcVar2 + -0x671778));
              if (uVar3 == 0) {
                pfVar14 = (float10 *)0x28;
                FUN_0052ba00('(');
                FUN_0052baf0(pfVar14);
                *(double *)&(this->G3D_PointLight).G3D_BaseLight.mbr_0x58 = (double)extraout_ST0;
                FUN_0052ba00(')');
              }
              else {
                pcVar5 = "Radius";
                do {
                  pcVar2 = pcVar5;
                  pcVar5 = pcVar2 + 1;
                } while (*pcVar2 != '\0');
                uVar3 = ::cls_0x50db20::meth_0x41e4b0
                                  ((cls_0x50db20 *)&stack0xffffff5c,0,(uint)local_90,
                                   (_String_base *)"Radius",(uint)(pcVar2 + -0x671768));
                if (uVar3 == 0) {
                  pfVar14 = (float10 *)0x28;
                  FUN_0052ba00('(');
                  FUN_004c8720(pfVar14);
                  *(double *)&(this->G3D_PointLight).mbr_0x78 = (double)extraout_ST0_00;
                  FUN_0052ba00(')');
                }
                else {
                  bVar11 = FUN_0043ffd0((cls_0x50db20 *)&stack0xffffff5c,(_String_base *)"Falloff");
                  if (bVar11) {
                    pfVar14 = (float10 *)0x28;
                    FUN_0052ba00('(');
                    FUN_0052baf0(pfVar14);
                    uVar13 = FUN_00616e24();
                    (this->G3D_PointLight).mbr_0x80 = (dword)uVar13;
                    FUN_0052ba00(')');
                  }
                  else {
                    bVar11 = FUN_0043ffd0((cls_0x50db20 *)&stack0xffffff5c,
                                          (_String_base *)"Attenuation");
                    if (bVar11) {
                      pfVar14 = (float10 *)0x28;
                      FUN_0052ba00('(');
                      FUN_0052baf0(pfVar14);
                      *(double *)&(this->G3D_PointLight).mbr_0x60 = (double)extraout_ST0_01;
                      FUN_0052baf0(pfVar14);
                      *(double *)&(this->G3D_PointLight).mbr_0x68 = (double)extraout_ST0_02;
                      FUN_0052baf0(pfVar14);
                      *(double *)&(this->G3D_PointLight).mbr_0x70 = (double)extraout_ST0_03;
                      FUN_0052ba00(')');
                    }
                    else {
                      bVar11 = FUN_0043ffd0((cls_0x50db20 *)&stack0xffffff5c,
                                            (_String_base *)"SpotDir");
                      if (bVar11) {
                        local_68 = 0;
                        local_64 = 0;
                        local_70 = 0;
                        local_6c = 0;
                        local_78._0_4_ = 0;
                        local_78._4_4_ = 0;
                        FUN_004c92b0((double *)&local_78);
                        pdVar9 = (double *)&local_78;
                        pdVar7 = &this->mbr_0x88;
                        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
                          *pdVar7 = *(dword *)pdVar9;
                          pdVar9 = (double *)((int)pdVar9 + 4);
                          pdVar7 = pdVar7 + 1;
                        }
                      }
                      else {
                        bVar11 = FUN_0043ffd0((cls_0x50db20 *)&stack0xffffff5c,
                                              (_String_base *)"SpotAngle");
                        if (bVar11) {
                          pfVar14 = (float10 *)0x28;
                          FUN_0052ba00('(');
                          FUN_0052baf0(pfVar14);
                          *(double *)&this->field_0xa0 = (double)extraout_ST0_04;
                          FUN_0052ba00(')');
                        }
                        else {
                          bVar11 = FUN_0043ffd0((cls_0x50db20 *)&stack0xffffff5c,
                                                (_String_base *)"SpotSoftAngle");
                          if (bVar11) {
                            pfVar14 = (float10 *)0x28;
                            FUN_0052ba00('(');
                            FUN_0052baf0(pfVar14);
                            *(double *)&this->field_0xa8 = (double)extraout_ST0_05;
                            FUN_0052ba00(')');
                          }
                          else {
                            cls_0x4cc4d0::meth_0x4cc4d0((cls_0x4cc4d0 *)local_88);
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_004d68ac;
            }
            pdVar4 = (dword *)FUN_004c8750();
            pdVar7 = &(this->G3D_PointLight).G3D_BaseLight.mbr_0x44;
          }
        }
        *pdVar7 = *pdVar4;
        pdVar7[1] = pdVar4[1];
        pdVar7[2] = pdVar4[2];
        pdVar7[3] = pdVar4[3];
      }
LAB_004d68ac:
      local_c = 0xffffffff;
      if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
        _free(local_a0[0]);
      }
      local_8c = 0xf;
      local_90 = (char *)0x0;
      local_a0[0] = (undefined4 ******)((uint)local_a0[0] & 0xffffff00);
    }
    else {
      cls_0x4cc4d0::meth_0x4cc4d0((cls_0x4cc4d0 *)local_88);
    }
    ppVVar1 = (VFX_Parameter__vftable_673a20 **)FUN_0052b940(local_5c);
    local_88._4_4_ = ppVVar1[1];
    local_88._0_4_ = *ppVVar1;
    local_80 = ppVVar1[2];
    local_7c = ppVVar1[3];
  } while( true );
}


#include "../include/G3D_SpotLight.h"
