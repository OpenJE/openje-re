#include "../include/G3D_DirectionalLight.h"

G3D_DirectionalLight * __thiscall
G3D_DirectionalLight::G3D_DirectionalLight(G3D_DirectionalLight *this)

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
  G3D_BaseLight::G3D_BaseLight(&this->G3D_BaseLight);
  (this->G3D_BaseLight).G3D_BaseAttribute.vftptr_0x0 =
       (G3D_BaseAttribute__vftable_671ce0 *)&G3D_DirectionalLight__vftable_671d58_00671d58;
  local_c = 0;
  this->mbr_0x60 = 0;
  this->mbr_0x64 = 0;
  this->mbr_0x68 = 0;
  this->mbr_0x6c = 0;
  this->mbr_0x70 = 0;
  this->mbr_0x74 = 0;
  local_30._0_4_ = 0;
  local_30._4_4_ = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0xbff00000;
  FUN_0048fc80((double *)&local_30);
  puVar2 = &local_30;
  pdVar3 = &this->mbr_0x60;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pdVar3 = *(dword *)puVar2;
    puVar2 = (undefined8 *)((int)puVar2 + 4);
    pdVar3 = pdVar3 + 1;
  }
  ExceptionList = local_14;
  return this;
}



void __thiscall G3D_DirectionalLight::virt_meth_0x4cb6a0(G3D_DirectionalLight *this,FILE *param_1)

{
  undefined8 uVar1;
  
  FUN_004c8b00(param_1);
  FID_conflict__fwprintf(param_1,L"猥⁻","DirectionalLight");
  cls_0x4ca8c0::meth_0x4ca8c0
            ((cls_0x4ca8c0 *)&(this->G3D_BaseLight).G3D_BaseAttribute.field_0x4,param_1,'\0');
  FID_conflict__fwprintf(param_1,(wchar_t *)"Ambient");
  FUN_004c8810(param_1);
  FID_conflict__fwprintf(param_1,(wchar_t *)"Diffuse");
  FUN_004c8810(param_1);
  FID_conflict__fwprintf(param_1,(wchar_t *)"Specular");
  FUN_004c8810(param_1);
  uVar1._0_4_ = (this->G3D_BaseLight).mbr_0x58;
  uVar1._4_4_ = (this->G3D_BaseLight).mbr_0x5c;
  FID_conflict__fwprintf(param_1,(wchar_t *)"%s(%g) ","Intensity",uVar1);
  FID_conflict__fwprintf(param_1,L"੽");
  return;
}



void __thiscall
G3D_DirectionalLight::meth_0x4ce980(G3D_DirectionalLight *this,undefined param_1,undefined4 param_2)

{
  dword in_stack_ffffffe0;
  undefined4 *in_stack_ffffffe4;
  
  FUN_004ce890(&(this->G3D_BaseLight).G3D_BaseAttribute.field_0x4,(cls_0x50db20 *)&stack0xffffffe0);
  FUN_004cb420(in_stack_ffffffe0,in_stack_ffffffe4);
  return;
}



void __thiscall G3D_DirectionalLight::meth_0x4d06b0(G3D_DirectionalLight *this,FILE *param_1)

{
  uint unaff_retaddr;
  _String_base local_2c [4];
  void *local_28;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  puStack_8 = &LAB_006332e8;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  local_4 = 0;
  ExceptionList = &local_c;
  G3D_LightmapSurfaceAttribute::meth_0x4d0450
            ((G3D_LightmapSurfaceAttribute *)local_2c,
             (FILE *)(G3D_LightmapSurfaceAttribute *)local_2c);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->G3D_BaseLight).G3D_BaseAttribute.field_0x4,local_2c,0,
             0xffffffff);
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall
G3D_DirectionalLight::meth_0x4d0750(G3D_DirectionalLight *this,int param_1,int *param_2)

{
  uint unaff_retaddr;
  _String_base local_2c [4];
  void *local_28;
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006332e8;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004d0510((cls_0x50db20 *)local_2c,param_1,param_2);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->G3D_BaseLight).G3D_BaseAttribute.field_0x4,local_2c,0,
             0xffffffff);
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}



void __thiscall G3D_DirectionalLight::virt_meth_0x4d5ea0(G3D_DirectionalLight *this)

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
  uint unaff_retaddr;
  float10 *__return_storage_ptr__;
  undefined local_7c [8];
  dword local_74;
  dword local_70;
  int local_6c [17];
  undefined4 *****local_28 [4];
  char *local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006332e8;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  FUN_0052ba00('{');
  pdVar1 = (dword *)FUN_0052b940(local_6c);
  local_7c._4_4_ = pdVar1[1];
  local_7c._0_4_ = *pdVar1;
  local_74 = pdVar1[2];
  local_70 = pdVar1[3];
  if (local_7c._0_4_ != 0x7d) {
    do {
      if (local_7c._0_4_ == 0x100) {
        FUN_0052afe0((cls_0x50db20 *)(local_6c + 0x10));
        local_4 = 0;
        pcVar5 = "Name";
        do {
          pcVar2 = pcVar5;
          pcVar5 = pcVar2 + 1;
        } while (*pcVar2 != '\0');
        pcVar2 = pcVar2 + -0x65cbe0;
        if (local_18 == (char *)0x0) {
LAB_004d5f82:
          if ((local_18 < pcVar2) || (local_18 != pcVar2)) goto LAB_004d5f9e;
          ::cls_0x50db20::meth_0x4d05e0
                    ((cls_0x50db20 *)&(this->G3D_BaseLight).G3D_BaseAttribute.field_0x4);
        }
        else {
          pcVar5 = local_18;
          if (pcVar2 <= local_18) {
            pcVar5 = pcVar2;
          }
          pppppuVar7 = local_28[0];
          if (local_14 < 0x10) {
            pppppuVar7 = local_28;
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
          if (iVar6 == 0) goto LAB_004d5f82;
LAB_004d5f9e:
          pcVar5 = "Ambient";
          do {
            pcVar2 = pcVar5;
            pcVar5 = pcVar2 + 1;
          } while (*pcVar2 != '\0');
          uVar3 = ::cls_0x50db20::meth_0x41e4b0
                            ((cls_0x50db20 *)(local_6c + 0x10),0,(uint)local_18,
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
                              ((cls_0x50db20 *)(local_6c + 0x10),0,(uint)local_18,
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
                                ((cls_0x50db20 *)(local_6c + 0x10),0,(uint)local_18,
                                 (_String_base *)"Specular",(uint)(pcVar2 + -0x67192c));
              if (uVar3 != 0) {
                pcVar5 = "Intensity";
                do {
                  pcVar2 = pcVar5;
                  pcVar5 = pcVar2 + 1;
                } while (*pcVar2 != '\0');
                uVar3 = ::cls_0x50db20::meth_0x41e4b0
                                  ((cls_0x50db20 *)(local_6c + 0x10),0,(uint)local_18,
                                   (_String_base *)"Intensity",(uint)(pcVar2 + -0x671778));
                if (uVar3 == 0) {
                  __return_storage_ptr__ = (float10 *)0x28;
                  FUN_0052ba00('(');
                  FUN_0052baf0(__return_storage_ptr__);
                  *(double *)&(this->G3D_BaseLight).mbr_0x58 = (double)extraout_ST0;
                  FUN_0052ba00(')');
                }
                else {
                  cls_0x4cc4d0::meth_0x4cc4d0((cls_0x4cc4d0 *)local_7c);
                }
                goto LAB_004d60b6;
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
LAB_004d60b6:
        local_4 = 0xffffffff;
        if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
          _free(local_28[0]);
        }
        local_14 = 0xf;
        local_18 = (char *)0x0;
        local_28[0] = (undefined4 *****)((uint)local_28[0] & 0xffffff00);
      }
      else {
        cls_0x4cc4d0::meth_0x4cc4d0((cls_0x4cc4d0 *)local_7c);
      }
      pdVar1 = (dword *)FUN_0052b940(local_6c);
      local_7c._4_4_ = pdVar1[1];
      local_7c._0_4_ = *pdVar1;
      local_74 = pdVar1[2];
      local_70 = pdVar1[3];
    } while (local_7c._0_4_ != 0x7d);
    local_7c._0_4_ = 0x7d;
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}


#include "../include/G3D_DirectionalLight.h"
