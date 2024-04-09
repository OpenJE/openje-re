#include "../include/G3D_Transform.h"

undefined4 __thiscall G3D_Transform::meth_0x4c90c0(G3D_Transform *this)

{
  double dVar1;
  double *pdVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_ESI;
  dword *pdVar5;
  undefined4 unaff_EDI;
  float10 extraout_ST0;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsOS<wchar_t>_>_> local_28 [36];
  
  local_60 = 1024.0;
  local_58 = 0.0;
  local_50 = 0.0;
  FUN_0048f670((float10 *)0x0,(double)CONCAT44(unaff_ESI,unaff_EDI));
  pdVar5 = &this->mbr_0x28;
  pdVar2 = &local_48;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(dword *)pdVar2 = *pdVar5;
    pdVar5 = pdVar5 + 1;
    pdVar2 = (double *)((int)pdVar2 + 4);
  }
  local_60 = (double)((float10)local_60 * extraout_ST0 * (float10)0.0);
  local_58 = (double)((float10)local_58 * extraout_ST0) * 0.0;
  local_50 = (double)((float10)local_50 * extraout_ST0) * 0.0;
  dVar1 = local_48 * local_48 + local_40 * local_40 + local_38 * local_38;
  if (NAN(dVar1) == (dVar1 == 0.0)) {
    pdVar5 = &this->mbr_0x28;
    pdVar2 = &local_48;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(dword *)pdVar2 = *pdVar5;
      pdVar5 = pdVar5 + 1;
      pdVar2 = (double *)((int)pdVar2 + 4);
    }
    pdVar2 = (double *)
             ATL::CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsOS<wchar_t>_>_>::
             CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsOS<wchar_t>_>_>
                       (local_28,(wchar_t *)0x0,0,(IAtlStringMgr *)&local_60);
    uVar3 = FUN_0048f7a0(&local_48,pdVar2);
    if ((char)uVar3 != '\0') {
      return 1;
    }
  }
  return 0;
}



undefined4 __thiscall G3D_Transform::meth_0x4c91d0(G3D_Transform *this)

{
  double dVar1;
  int iVar2;
  dword *pdVar3;
  double *pdVar4;
  double local_18;
  double local_10;
  double local_8;
  
  pdVar3 = &this->mbr_0x48;
  pdVar4 = &local_18;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(dword *)pdVar4 = *pdVar3;
    pdVar3 = pdVar3 + 1;
    pdVar4 = (double *)((int)pdVar4 + 4);
  }
  dVar1 = local_18 * local_18 + local_10 * local_10 + local_8 * local_8;
  if (NAN(dVar1) == (dVar1 == 0.0)) {
    return 1;
  }
  return 0;
}



undefined4 __thiscall G3D_Transform::meth_0x4c9220(G3D_Transform *this)

{
  int iVar1;
  dword *pdVar2;
  double *pdVar3;
  double local_18;
  double local_10;
  double local_8;
  
  pdVar2 = &this->mbr_0x60;
  pdVar3 = &local_18;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(dword *)pdVar3 = *pdVar2;
    pdVar2 = pdVar2 + 1;
    pdVar3 = (double *)((int)pdVar3 + 4);
  }
  if (((NAN(local_18) != (local_18 == 1.0)) && (NAN(local_10) != (local_10 == 1.0))) &&
     (NAN(local_8) != (local_8 == 1.0))) {
    return 0;
  }
  return 1;
}



void __thiscall G3D_Transform::meth_0x4ca930(G3D_Transform *this,undefined4 *param_1)

{
  int iVar1;
  dword *pdVar2;
  cls_0x48fb60 *pcVar3;
  double *pdVar4;
  double local_80 [4];
  cls_0x48fb60 local_60;
  
  cls_0x48fb60::cls_0x48fb60(&local_60,0,0x3ff00000);
  pdVar2 = &this->mbr_0x48;
  pdVar4 = local_80;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(dword *)pdVar4 = *pdVar2;
    pdVar2 = pdVar2 + 1;
    pdVar4 = (double *)((int)pdVar4 + 4);
  }
  FUN_0048fc10(&local_60,local_80);
  pdVar2 = &this->mbr_0x28;
  pdVar4 = local_80;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(dword *)pdVar4 = *pdVar2;
    pdVar2 = pdVar2 + 1;
    pdVar4 = (double *)((int)pdVar4 + 4);
  }
  cls_0x48fb60::meth_0x48ffd0(&local_60,local_80);
  pdVar2 = &this->mbr_0x60;
  pdVar4 = local_80;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(dword *)pdVar4 = *pdVar2;
    pdVar2 = pdVar2 + 1;
    pdVar4 = (double *)((int)pdVar4 + 4);
  }
  thunk_FUN_0048fa60(&local_60,local_80);
  pcVar3 = &local_60;
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = pcVar3->mbr_0x0;
    pcVar3 = (cls_0x48fb60 *)&pcVar3->mbr_0x4;
    param_1 = param_1 + 1;
  }
  return;
}



G3D_Transform * __thiscall G3D_Transform::G3D_Transform(G3D_Transform *this)

{
  this->vftptr_0x0 = &G3D_Transform__vftable_671cfc_00671cfc;
  this->mbr_0x20 = 0xf;
  this->mbr_0x1c = 0;
  *(undefined *)&this->mbr_0xc = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x3c = 0;
  this->mbr_0x40 = 0;
  this->mbr_0x44 = 0x3ff00000;
  this->mbr_0x48 = 0;
  this->mbr_0x4c = 0;
  this->mbr_0x50 = 0;
  this->mbr_0x54 = 0;
  this->mbr_0x58 = 0;
  this->mbr_0x5c = 0;
  this->mbr_0x60 = 0;
  this->mbr_0x64 = 0x3ff00000;
  this->mbr_0x68 = 0;
  this->mbr_0x6c = 0x3ff00000;
  this->mbr_0x70 = 0;
  this->mbr_0x74 = 0x3ff00000;
  return this;
}



G3D_Transform * __thiscall G3D_Transform::~G3D_Transform(G3D_Transform *this)

{
  this->vftptr_0x0 = &G3D_Transform__vftable_671cfc_00671cfc;
  if (0xf < this->mbr_0x20) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xc);
  }
  this->mbr_0x20 = 0xf;
  this->mbr_0x1c = 0;
  *(undefined *)&this->mbr_0xc = 0;
  return (G3D_Transform *)0x0;
}



undefined4 * __thiscall G3D_Transform::virt_meth_0x4cb220(G3D_Transform *this,byte param_1)

{
  ~G3D_Transform(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}



void __thiscall G3D_Transform::virt_meth_0x4d0a00(G3D_Transform *this,FILE *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  dword *pdVar3;
  byte local_45;
  G3D_Transform *local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_30 = 0;
  local_2c = 0;
  local_38 = 0;
  local_34 = 0;
  local_40._0_4_ = 0;
  local_40._4_4_ = 0;
  local_18 = 0;
  local_14 = 0;
  local_20 = 0;
  local_1c = 0;
  local_28._0_4_ = 0;
  local_28._4_4_ = 0;
  local_10 = 0;
  local_c = 0x3ff00000;
  local_44 = this;
  G3D_LightmapSurfaceAttribute::meth_0x4d0670
            ((G3D_LightmapSurfaceAttribute *)&this->mbr_0x8,param_1);
  _fread(&local_45,1,1,param_1);
  if ((local_45 & 1) != 0) {
    FUN_004c9400(param_1,(double *)&local_40);
    puVar2 = &local_40;
    pdVar3 = &this->mbr_0x48;
    for (iVar1 = 6; this = local_44, iVar1 != 0; iVar1 = iVar1 + -1) {
      *pdVar3 = *(dword *)puVar2;
      puVar2 = (undefined8 *)((int)puVar2 + 4);
      pdVar3 = pdVar3 + 1;
    }
  }
  if ((local_45 >> 1 & 1) != 0) {
    FUN_004c97a0(param_1,(double *)&local_28);
    puVar2 = &local_28;
    pdVar3 = &this->mbr_0x28;
    for (iVar1 = 8; this = local_44, iVar1 != 0; iVar1 = iVar1 + -1) {
      *pdVar3 = *(dword *)puVar2;
      puVar2 = (undefined8 *)((int)puVar2 + 4);
      pdVar3 = pdVar3 + 1;
    }
  }
  if ((local_45 >> 2 & 1) != 0) {
    FUN_004c9400(param_1,(double *)&local_40);
    puVar2 = &local_40;
    pdVar3 = &this->mbr_0x60;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pdVar3 = *(dword *)puVar2;
      puVar2 = (undefined8 *)((int)puVar2 + 4);
      pdVar3 = pdVar3 + 1;
    }
  }
  return;
}



void __thiscall G3D_Transform::virt_meth_0x4d0b40(G3D_Transform *this,int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  dword *pdVar4;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_30 = 0;
  local_2c = 0;
  local_38 = 0;
  local_34 = 0;
  local_40._0_4_ = 0;
  local_40._4_4_ = 0;
  local_18 = 0;
  local_14 = 0;
  local_20 = 0;
  local_1c = 0;
  local_28._0_4_ = 0;
  local_28._4_4_ = 0;
  local_10 = 0;
  local_c = 0x3ff00000;
  G3D_LightmapSurfaceAttribute::meth_0x4d0690
            ((G3D_LightmapSurfaceAttribute *)&this->mbr_0x8,param_1,param_2);
  bVar1 = *(byte *)(*param_2 + param_1);
  *param_2 = *param_2 + 1;
  if ((bVar1 & 1) != 0) {
    FUN_004c9460(param_1,(double *)&local_40,param_2);
    puVar3 = &local_40;
    pdVar4 = &this->mbr_0x48;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pdVar4 = *(dword *)puVar3;
      puVar3 = (undefined8 *)((int)puVar3 + 4);
      pdVar4 = pdVar4 + 1;
    }
  }
  if ((bVar1 >> 1 & 1) != 0) {
    FUN_004c98b0(param_1,(double *)&local_28,param_2);
    puVar3 = &local_28;
    pdVar4 = &this->mbr_0x28;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pdVar4 = *(dword *)puVar3;
      puVar3 = (undefined8 *)((int)puVar3 + 4);
      pdVar4 = pdVar4 + 1;
    }
  }
  if ((bVar1 >> 2 & 1) != 0) {
    FUN_004c9460(param_1,(double *)&local_40,param_2);
    puVar3 = &local_40;
    pdVar4 = &this->mbr_0x60;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pdVar4 = *(dword *)puVar3;
      puVar3 = (undefined8 *)((int)puVar3 + 4);
      pdVar4 = pdVar4 + 1;
    }
  }
  return;
}



G3D_Transform * __thiscall G3D_Transform::G3D_Transform(G3D_Transform *this,int param_1)

{
  int iVar1;
  dword *pdVar2;
  dword *pdVar3;
  
  this->vftptr_0x0 = &G3D_Transform__vftable_671cfc_00671cfc;
  this->mbr_0x1c = 0;
  this->mbr_0x20 = 0xf;
  *(undefined *)&this->mbr_0xc = 0;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&this->mbr_0x8,(_String_base *)(param_1 + 8),0,0xffffffff);
  pdVar2 = (dword *)(param_1 + 0x28);
  pdVar3 = &this->mbr_0x28;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pdVar3 = *pdVar2;
    pdVar2 = pdVar2 + 1;
    pdVar3 = pdVar3 + 1;
  }
  pdVar2 = (dword *)(param_1 + 0x48);
  pdVar3 = &this->mbr_0x48;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pdVar3 = *pdVar2;
    pdVar2 = pdVar2 + 1;
    pdVar3 = pdVar3 + 1;
  }
  pdVar2 = (dword *)(param_1 + 0x60);
  pdVar3 = &this->mbr_0x60;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pdVar3 = *pdVar2;
    pdVar2 = pdVar2 + 1;
    pdVar3 = pdVar3 + 1;
  }
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall G3D_Transform::virt_meth_0x4d4700(G3D_Transform *this)

{
  dword *pdVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  dword *pdVar6;
  undefined4 *****pppppuVar7;
  double *pdVar8;
  undefined8 *puVar9;
  dword *pdVar10;
  byte *pbVar11;
  bool bVar12;
  bool bVar13;
  uint unaff_retaddr;
  double local_130;
  double local_128;
  double local_120;
  undefined local_118 [8];
  dword local_110;
  dword local_10c;
  undefined4 *****local_104 [4];
  char *local_f4;
  uint local_f0;
  cls_0x50db20 *local_ec;
  dword *local_e8;
  dword *local_e4;
  undefined8 local_e0;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  undefined8 local_c8;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  undefined4 local_ac;
  G3D_Transform__vftable_671cfc *local_a8;
  _String_base local_a0 [4];
  void *local_9c;
  undefined4 local_8c;
  uint local_88;
  dword local_80 [4];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  dword local_60 [4];
  undefined4 local_50;
  undefined4 local_4c;
  dword local_48 [4];
  undefined4 local_38;
  undefined4 local_34;
  int local_2c [4];
  uint local_1c;
  void *local_14;
  undefined *puStack_10;
  dword local_c;
  
  puStack_10 = &LAB_00633466;
  local_14 = ExceptionList;
  local_1c = DAT_007062c0 ^ unaff_retaddr;
  local_a8 = &G3D_Transform__vftable_671cfc_00671cfc;
  local_88 = 0xf;
  local_8c = 0;
  local_9c = (void *)((uint)local_9c & 0xffffff00);
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0x3ff00000;
  local_60[0] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  local_50 = 0;
  local_4c = 0;
  local_48[0] = 0;
  local_48[1] = 0x3ff00000;
  local_48[2] = 0;
  local_48[3] = 0x3ff00000;
  local_38 = 0;
  local_34 = 0x3ff00000;
  local_c = 0;
  local_ec = (cls_0x50db20 *)&this->mbr_0x8;
  ExceptionList = &local_14;
  ::cls_0x50db20::meth_0x401b20(local_ec,local_a0,0,0xffffffff);
  local_e8 = &this->mbr_0x28;
  pdVar6 = local_80;
  pdVar1 = &this->mbr_0x28;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pdVar1 = *pdVar6;
    pdVar6 = pdVar6 + 1;
    pdVar1 = pdVar1 + 1;
  }
  pdVar6 = &this->mbr_0x48;
  pdVar1 = local_60;
  pdVar10 = pdVar6;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pdVar10 = *pdVar1;
    pdVar1 = pdVar1 + 1;
    pdVar10 = pdVar10 + 1;
  }
  local_e4 = &this->mbr_0x60;
  pdVar1 = local_48;
  pdVar10 = &this->mbr_0x60;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pdVar10 = *pdVar1;
    pdVar1 = pdVar1 + 1;
    pdVar10 = pdVar10 + 1;
  }
  local_c = 0xffffffff;
  local_a8 = &G3D_Transform__vftable_671cfc_00671cfc;
  if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
    _free(local_9c);
  }
  FUN_0052ba00('{');
  pdVar1 = (dword *)FUN_0052b940(local_2c);
  local_118._0_4_ = *pdVar1;
  local_118._4_4_ = pdVar1[1];
  local_110 = pdVar1[2];
  local_10c = pdVar1[3];
  do {
    if (local_118._0_4_ == 0x7d) {
      local_118._0_4_ = 0x7d;
      pdVar1 = pdVar6;
      pdVar8 = &local_130;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(dword *)pdVar8 = *pdVar1;
        pdVar1 = pdVar1 + 1;
        pdVar8 = (double *)((int)pdVar8 + 4);
      }
      local_130 = local_130 * _DAT_006fb350;
      local_128 = local_128 * _DAT_006fb350;
      local_120 = local_120 * _DAT_006fb350;
      pdVar8 = &local_130;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pdVar6 = *(dword *)pdVar8;
        pdVar8 = (double *)((int)pdVar8 + 4);
        pdVar6 = pdVar6 + 1;
      }
      ExceptionList = local_14;
      FUN_00616e15(local_1c ^ unaff_retaddr);
      return;
    }
    if (local_118._0_4_ == 0x100) {
      FUN_0052afe0((cls_0x50db20 *)&stack0xfffffef8);
      local_c = 1;
      pcVar5 = "Name";
      do {
        pcVar2 = pcVar5;
        pcVar5 = pcVar2 + 1;
      } while (*pcVar2 != '\0');
      pcVar2 = pcVar2 + -0x65cbe0;
      if (local_f4 == (char *)0x0) {
LAB_004d4947:
        if ((local_f4 < pcVar2) || (local_f4 != pcVar2)) goto LAB_004d4964;
        ::cls_0x50db20::meth_0x4d05e0(local_ec);
      }
      else {
        pcVar5 = local_f4;
        if (pcVar2 <= local_f4) {
          pcVar5 = pcVar2;
        }
        pppppuVar7 = local_104[0];
        if (local_f0 < 0x10) {
          pppppuVar7 = local_104;
        }
        bVar12 = false;
        iVar4 = 0;
        bVar13 = true;
        pbVar11 = &DAT_0065cbe0;
        do {
          if (pcVar5 == (char *)0x0) break;
          pcVar5 = pcVar5 + -1;
          bVar12 = *(byte *)pppppuVar7 < *pbVar11;
          bVar13 = *(byte *)pppppuVar7 == *pbVar11;
          pppppuVar7 = (undefined4 *****)((int)pppppuVar7 + 1);
          pbVar11 = pbVar11 + 1;
        } while (bVar13);
        if (!bVar13) {
          iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        }
        if (iVar4 == 0) goto LAB_004d4947;
LAB_004d4964:
        pcVar5 = "Translation";
        do {
          pcVar2 = pcVar5;
          pcVar5 = pcVar2 + 1;
        } while (*pcVar2 != '\0');
        uVar3 = ::cls_0x50db20::meth_0x41e4b0
                          ((cls_0x50db20 *)&stack0xfffffef8,0,(uint)local_f4,
                           (_String_base *)"Translation",(uint)(pcVar2 + -0x671a2c));
        if (uVar3 == 0) {
          local_e0._0_4_ = uVar3;
          local_e0._4_4_ = uVar3;
          local_d8 = uVar3;
          local_d4 = uVar3;
          local_d0 = uVar3;
          local_cc = uVar3;
          FUN_004c92b0((double *)&local_e0);
          puVar9 = &local_e0;
          pdVar1 = pdVar6;
          for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
            *pdVar1 = *(dword *)puVar9;
            puVar9 = (undefined8 *)((int)puVar9 + 4);
            pdVar1 = pdVar1 + 1;
          }
        }
        else {
          pcVar5 = "Scale";
          do {
            pcVar2 = pcVar5;
            pcVar5 = pcVar2 + 1;
          } while (*pcVar2 != '\0');
          uVar3 = ::cls_0x50db20::meth_0x41e4b0
                            ((cls_0x50db20 *)&stack0xfffffef8,0,(uint)local_f4,
                             (_String_base *)"Scale",(uint)(pcVar2 + -0x671a38));
          if (uVar3 == 0) {
            local_120 = 0.0;
            local_128 = 0.0;
            local_130 = 0.0;
            FUN_004c92b0(&local_130);
            pdVar8 = &local_130;
            pdVar1 = local_e4;
            for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
              *pdVar1 = *(dword *)pdVar8;
              pdVar8 = (double *)((int)pdVar8 + 4);
              pdVar1 = pdVar1 + 1;
            }
          }
          else {
            pcVar5 = "Rotation";
            do {
              pcVar2 = pcVar5;
              pcVar5 = pcVar2 + 1;
            } while (*pcVar2 != '\0');
            uVar3 = ::cls_0x50db20::meth_0x41e4b0
                              ((cls_0x50db20 *)&stack0xfffffef8,0,(uint)local_f4,
                               (_String_base *)"Rotation",(uint)(pcVar2 + -0x671a40));
            if (uVar3 == 0) {
              local_ac = 0x3ff00000;
              local_c8._0_4_ = uVar3;
              local_c8._4_4_ = uVar3;
              local_c0 = uVar3;
              local_bc = uVar3;
              local_b8 = uVar3;
              local_b4 = uVar3;
              local_b0 = uVar3;
              FUN_004c9550((double *)&local_c8);
              puVar9 = &local_c8;
              pdVar1 = local_e8;
              for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
                *pdVar1 = *(dword *)puVar9;
                puVar9 = (undefined8 *)((int)puVar9 + 4);
                pdVar1 = pdVar1 + 1;
              }
            }
            else {
              cls_0x4cc4d0::meth_0x4cc4d0((cls_0x4cc4d0 *)local_118);
            }
          }
        }
      }
      local_c = 0xffffffff;
      if (0xf < local_f0) {
                    /* WARNING: Subroutine does not return */
        _free(local_104[0]);
      }
      local_f0 = 0xf;
      local_f4 = (char *)0x0;
      local_104[0] = (undefined4 *****)((uint)local_104[0] & 0xffffff00);
    }
    else {
      cls_0x4cc4d0::meth_0x4cc4d0((cls_0x4cc4d0 *)local_118);
    }
    pdVar1 = (dword *)FUN_0052b940(local_2c);
    local_118._0_4_ = *pdVar1;
    local_118._4_4_ = pdVar1[1];
    local_110 = pdVar1[2];
    local_10c = pdVar1[3];
  } while( true );
}


#include "../include/G3D_Transform.h"
