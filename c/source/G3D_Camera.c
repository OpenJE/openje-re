#include "../include/G3D_Camera.h"

G3D_Camera * __thiscall G3D_Camera::G3D_Camera(G3D_Camera *this)

{
  (this->G3D_BaseAttribute).mbr_0x1c = 0xf;
  (this->G3D_BaseAttribute).mbr_0x18 = 0;
  *(undefined *)&(this->G3D_BaseAttribute).mbr_0x8 = 0;
  this->mbr_0x20 = 0;
  (this->G3D_BaseAttribute).vftptr_0x0 =
       (G3D_BaseAttribute__vftable_671ce0 *)&G3D_Camera__vftable_671dc8_00671dc8;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0xbff00000;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0xbff00000;
  this->mbr_0x38 = 0;
  this->mbr_0x3c = 0xbff00000;
  return this;
}



void __thiscall G3D_Camera::virt_meth_0x4d2200(G3D_Camera *this,int param_1,int *param_2)

{
  float fVar1;
  
  G3D_DirectionalLight::meth_0x4d0750((G3D_DirectionalLight *)this,param_1,param_2);
  fVar1 = *(float *)(*param_2 + param_1);
  *param_2 = *param_2 + 4;
  *(double *)&this->mbr_0x38 = (double)fVar1;
  fVar1 = *(float *)(*param_2 + param_1);
  *param_2 = *param_2 + 4;
  *(double *)&this->mbr_0x28 = (double)fVar1;
  fVar1 = *(float *)(*param_2 + param_1);
  *param_2 = *param_2 + 4;
  *(double *)&this->mbr_0x30 = (double)fVar1;
  return;
}



void __thiscall G3D_Camera::virt_meth_0x4d6940(G3D_Camera *this)

{
  dword *pdVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *****pppppuVar6;
  byte *pbVar7;
  bool bVar8;
  bool bVar9;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  uint unaff_retaddr;
  float10 *pfVar10;
  undefined local_58 [8];
  dword local_50;
  dword local_4c;
  int local_48 [5];
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
  pdVar1 = (dword *)FUN_0052b940(local_48);
  local_58._4_4_ = pdVar1[1];
  local_58._0_4_ = *pdVar1;
  local_50 = pdVar1[2];
  local_4c = pdVar1[3];
  do {
    if (local_58._0_4_ == 0x7d) {
      ExceptionList = local_14;
      FUN_00616e15(local_1c ^ unaff_retaddr);
      return;
    }
    if (local_58._0_4_ == 0x100) {
      FUN_0052afe0((cls_0x50db20 *)(local_48 + 4));
      local_c = 0;
      pcVar4 = "Name";
      do {
        pcVar2 = pcVar4;
        pcVar4 = pcVar2 + 1;
      } while (*pcVar2 != '\0');
      pcVar2 = pcVar2 + -0x65cbe0;
      if (local_24 == (char *)0x0) {
LAB_004d6a2c:
        if ((local_24 < pcVar2) || (local_24 != pcVar2)) goto LAB_004d6a48;
        ::cls_0x50db20::meth_0x4d05e0((cls_0x50db20 *)&(this->G3D_BaseAttribute).field_0x4);
      }
      else {
        pcVar4 = local_24;
        if (pcVar2 <= local_24) {
          pcVar4 = pcVar2;
        }
        pppppuVar6 = local_34[0];
        if (local_20 < 0x10) {
          pppppuVar6 = local_34;
        }
        bVar8 = false;
        iVar5 = 0;
        bVar9 = true;
        pbVar7 = &DAT_0065cbe0;
        do {
          if (pcVar4 == (char *)0x0) break;
          pcVar4 = pcVar4 + -1;
          bVar8 = *(byte *)pppppuVar6 < *pbVar7;
          bVar9 = *(byte *)pppppuVar6 == *pbVar7;
          pppppuVar6 = (undefined4 *****)((int)pppppuVar6 + 1);
          pbVar7 = pbVar7 + 1;
        } while (bVar9);
        if (!bVar9) {
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        }
        if (iVar5 == 0) goto LAB_004d6a2c;
LAB_004d6a48:
        pcVar4 = "Fov";
        do {
          pcVar2 = pcVar4;
          pcVar4 = pcVar2 + 1;
        } while (*pcVar2 != '\0');
        uVar3 = ::cls_0x50db20::meth_0x41e4b0
                          ((cls_0x50db20 *)(local_48 + 4),0,(uint)local_24,
                           (_String_base *)&DAT_006716fc,(uint)(pcVar2 + -0x6716fc));
        if (uVar3 == 0) {
          pfVar10 = (float10 *)0x28;
          FUN_0052ba00('(');
          FUN_0052baf0(pfVar10);
          *(double *)&this->mbr_0x38 = (double)extraout_ST0;
          FUN_0052ba00(')');
        }
        else {
          pcVar4 = "Near";
          do {
            pcVar2 = pcVar4;
            pcVar4 = pcVar2 + 1;
          } while (*pcVar2 != '\0');
          uVar3 = ::cls_0x50db20::meth_0x41e4b0
                            ((cls_0x50db20 *)(local_48 + 4),0,(uint)local_24,
                             (_String_base *)&DAT_006716f4,(uint)(pcVar2 + -0x6716f4));
          if (uVar3 == 0) {
            pfVar10 = (float10 *)0x28;
            FUN_0052ba00('(');
            FUN_004c8720(pfVar10);
            *(double *)&this->mbr_0x28 = (double)extraout_ST0_00;
            FUN_0052ba00(')');
          }
          else {
            pcVar4 = "Far";
            do {
              pcVar2 = pcVar4;
              pcVar4 = pcVar2 + 1;
            } while (*pcVar2 != '\0');
            uVar3 = ::cls_0x50db20::meth_0x41e4b0
                              ((cls_0x50db20 *)(local_48 + 4),0,(uint)local_24,
                               (_String_base *)&DAT_006716f0,(uint)(pcVar2 + -0x6716f0));
            if (uVar3 == 0) {
              pfVar10 = (float10 *)0x28;
              FUN_0052ba00('(');
              FUN_004c8720(pfVar10);
              *(double *)&this->mbr_0x30 = (double)extraout_ST0_01;
              FUN_0052ba00(')');
            }
            else {
              cls_0x4cc4d0::meth_0x4cc4d0((cls_0x4cc4d0 *)local_58);
            }
          }
        }
      }
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
      cls_0x4cc4d0::meth_0x4cc4d0((cls_0x4cc4d0 *)local_58);
    }
    pdVar1 = (dword *)FUN_0052b940(local_48);
    local_58._4_4_ = pdVar1[1];
    local_58._0_4_ = *pdVar1;
    local_50 = pdVar1[2];
    local_4c = pdVar1[3];
  } while( true );
}


#include "../include/G3D_Camera.h"
