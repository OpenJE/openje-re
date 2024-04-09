#include "../include/cls_0x4cb300.h"

cls_0x4cb300 * __thiscall cls_0x4cb300::cls_0x4cb300(cls_0x4cb300 *this)

{
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  G3D_Transform::G3D_Transform(&this->G3D_Transform);
  return this;
}



cls_0x4cb300 * __thiscall cls_0x4cb300::~cls_0x4cb300(cls_0x4cb300 *this)

{
  cls_0x4cb300 *in_EAX;
  
  (this->G3D_Transform).vftptr_0x0 = &G3D_Transform__vftable_671cfc_00671cfc;
  if (0xf < (this->G3D_Transform).mbr_0x20) {
                    /* WARNING: Subroutine does not return */
    _free((void *)(this->G3D_Transform).mbr_0xc);
  }
  (this->G3D_Transform).mbr_0x20 = 0xf;
  (this->G3D_Transform).mbr_0x1c = 0;
  *(undefined *)&(this->G3D_Transform).mbr_0xc = 0;
  if (0xf < this->mbr_0x18) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x4);
  }
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0xf;
  *(undefined *)&this->mbr_0x4 = 0;
  return in_EAX;
}



void __thiscall cls_0x4cb300::meth_0x4d07f0(cls_0x4cb300 *this)

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
  uint unaff_retaddr;
  undefined local_4c [8];
  dword local_44;
  dword local_40;
  int local_3c [5];
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
  pdVar1 = (dword *)FUN_0052b940(local_3c);
  local_4c._4_4_ = pdVar1[1];
  local_4c._0_4_ = *pdVar1;
  local_44 = pdVar1[2];
  local_40 = pdVar1[3];
  if (local_4c._0_4_ != 0x7d) {
    do {
      if (local_4c._0_4_ == 0x100) {
        FUN_0052afe0((cls_0x50db20 *)(local_3c + 4));
        local_4 = 0;
        pcVar4 = "Name";
        do {
          pcVar2 = pcVar4;
          pcVar4 = pcVar2 + 1;
        } while (*pcVar2 != '\0');
        pcVar2 = pcVar2 + -0x65cbe0;
        if (local_18 == (char *)0x0) {
LAB_004d08c3:
          if ((local_18 < pcVar2) || (local_18 != pcVar2)) goto LAB_004d08dd;
          ::cls_0x50db20::meth_0x4d05e0((cls_0x50db20 *)this);
        }
        else {
          pcVar4 = local_18;
          if (pcVar2 <= local_18) {
            pcVar4 = pcVar2;
          }
          pppppuVar6 = local_28[0];
          if (local_14 < 0x10) {
            pppppuVar6 = local_28;
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
          if (iVar5 == 0) goto LAB_004d08c3;
LAB_004d08dd:
          pcVar4 = "Transform";
          do {
            pcVar2 = pcVar4;
            pcVar4 = pcVar2 + 1;
          } while (*pcVar2 != '\0');
          uVar3 = ::cls_0x50db20::meth_0x41e4b0
                            ((cls_0x50db20 *)(local_3c + 4),0,(uint)local_18,
                             (_String_base *)"Transform",(uint)(pcVar2 + -0x671a4c));
          if (uVar3 == 0) {
            (*((this->G3D_Transform).vftptr_0x0)->virt_meth_0x4d4700_4)(&this->G3D_Transform);
          }
          else {
            cls_0x4cc4d0::meth_0x4cc4d0((cls_0x4cc4d0 *)local_4c);
          }
        }
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
        cls_0x4cc4d0::meth_0x4cc4d0((cls_0x4cc4d0 *)local_4c);
      }
      pdVar1 = (dword *)FUN_0052b940(local_3c);
      local_4c._4_4_ = pdVar1[1];
      local_4c._0_4_ = *pdVar1;
      local_44 = pdVar1[2];
      local_40 = pdVar1[3];
    } while (local_4c._0_4_ != 0x7d);
    local_4c._0_4_ = 0x7d;
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall cls_0x4cb300::meth_0x4d09b0(cls_0x4cb300 *this,FILE *param_1)

{
  G3D_LightmapSurfaceAttribute::meth_0x4d0670((G3D_LightmapSurfaceAttribute *)this,param_1);
  (*((this->G3D_Transform).vftptr_0x0)->virt_meth_0x4d0a00_16)(&this->G3D_Transform,param_1);
  return;
}



void __thiscall cls_0x4cb300::meth_0x4d09d0(cls_0x4cb300 *this,int param_1,int *param_2)

{
  G3D_LightmapSurfaceAttribute::meth_0x4d0690((G3D_LightmapSurfaceAttribute *)this,param_1,param_2);
  (*((this->G3D_Transform).vftptr_0x0)->virt_meth_0x4d0b40_12)(&this->G3D_Transform,param_1,param_2)
  ;
  return;
}


