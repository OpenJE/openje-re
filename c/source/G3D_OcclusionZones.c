#include "../include/G3D_OcclusionZones.h"

/* WARNING: Removing unreachable block (ram,0x004d74a5) */

G3D_OcclusionZones * __thiscall G3D_OcclusionZones::G3D_OcclusionZones(G3D_OcclusionZones *this)

{
  (this->G3D_BaseAttribute).mbr_0x1c = 0xf;
  (this->G3D_BaseAttribute).mbr_0x18 = 0;
  *(undefined *)&(this->G3D_BaseAttribute).mbr_0x8 = 0;
  this->mbr_0x20 = 0;
  (this->G3D_BaseAttribute).vftptr_0x0 =
       (G3D_BaseAttribute__vftable_671ce0 *)&G3D_OcclusionZones__vftable_671f80_00671f80;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  return this;
}



undefined4 * __thiscall
G3D_OcclusionZones::virt_meth_0x4d74e0(G3D_OcclusionZones *this,byte param_1)

{
  ~G3D_OcclusionZones(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



G3D_OcclusionZones * __thiscall G3D_OcclusionZones::~G3D_OcclusionZones(G3D_OcclusionZones *this)

{
  G3D_OcclusionZones *pGVar1;
  
  (this->G3D_BaseAttribute).vftptr_0x0 =
       (G3D_BaseAttribute__vftable_671ce0 *)&G3D_OcclusionZones__vftable_671f80_00671f80;
  pGVar1 = (G3D_OcclusionZones *)this->mbr_0x28;
  if (pGVar1 != (G3D_OcclusionZones *)0x0) {
    FUN_004310a0((int)pGVar1,this->mbr_0x2c);
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x28);
  }
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  (this->G3D_BaseAttribute).vftptr_0x0 = &G3D_BaseAttribute__vftable_671ce0_00671ce0;
  if (0xf < (this->G3D_BaseAttribute).mbr_0x1c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)(this->G3D_BaseAttribute).mbr_0x8);
  }
  (this->G3D_BaseAttribute).mbr_0x18 = 0;
  (this->G3D_BaseAttribute).mbr_0x1c = 0xf;
  *(undefined *)&(this->G3D_BaseAttribute).mbr_0x8 = 0;
  return pGVar1;
}



void __thiscall G3D_OcclusionZones::virt_meth_0x4d9590(G3D_OcclusionZones *this)

{
  dword *pdVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *****pppppuVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  uint unaff_retaddr;
  cls_0x50db20 *pcVar9;
  undefined local_68 [8];
  dword local_60;
  dword local_5c;
  int local_58 [5];
  undefined4 *****local_44 [4];
  char *local_34;
  uint local_30;
  undefined local_2c [4];
  void *local_28;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006337c0;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  FUN_0052ba00('{');
  pdVar1 = (dword *)FUN_0052b940(local_58);
  local_68._4_4_ = pdVar1[1];
  local_68._0_4_ = *pdVar1;
  local_60 = pdVar1[2];
  local_5c = pdVar1[3];
  if (local_68._0_4_ != 0x7d) {
    do {
      if (local_68._0_4_ == 0x100) {
        FUN_0052afe0((cls_0x50db20 *)(local_58 + 4));
        local_4 = 0;
        pcVar3 = "Zone";
        do {
          pcVar2 = pcVar3;
          pcVar3 = pcVar2 + 1;
        } while (*pcVar2 != '\0');
        pcVar2 = pcVar2 + -0x671ad4;
        if (local_34 == (char *)0x0) {
LAB_004d9668:
          if ((local_34 < pcVar2) || (local_34 != pcVar2)) goto LAB_004d96d1;
          pcVar9 = (cls_0x50db20 *)0x28;
          FUN_0052ba00('(');
          pcVar9 = FUN_0052ba50(local_2c,pcVar9);
          local_4._0_1_ = 1;
          ::cls_0x50db20::meth_0x4c60a0((cls_0x50db20 *)&this->mbr_0x24,(_String_base *)pcVar9);
          local_4 = (uint)local_4._1_3_ << 8;
          if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
            _free(local_28);
          }
          local_14 = 0xf;
          local_18 = 0;
          local_28 = (void *)((uint)local_28 & 0xffffff00);
          FUN_0052ba00(')');
        }
        else {
          pcVar3 = local_34;
          if (pcVar2 <= local_34) {
            pcVar3 = pcVar2;
          }
          pppppuVar5 = local_44[0];
          if (local_30 < 0x10) {
            pppppuVar5 = local_44;
          }
          bVar7 = false;
          iVar4 = 0;
          bVar8 = true;
          pbVar6 = &DAT_00671ad4;
          do {
            if (pcVar3 == (char *)0x0) break;
            pcVar3 = pcVar3 + -1;
            bVar7 = *(byte *)pppppuVar5 < *pbVar6;
            bVar8 = *(byte *)pppppuVar5 == *pbVar6;
            pppppuVar5 = (undefined4 *****)((int)pppppuVar5 + 1);
            pbVar6 = pbVar6 + 1;
          } while (bVar8);
          if (!bVar8) {
            iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          }
          if (iVar4 == 0) goto LAB_004d9668;
LAB_004d96d1:
          cls_0x4cc4d0::meth_0x4cc4d0((cls_0x4cc4d0 *)local_68);
        }
        local_4 = 0xffffffff;
        if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
          _free(local_44[0]);
        }
        local_30 = 0xf;
        local_34 = (char *)0x0;
        local_44[0] = (undefined4 *****)((uint)local_44[0] & 0xffffff00);
      }
      else {
        cls_0x4cc4d0::meth_0x4cc4d0((cls_0x4cc4d0 *)local_68);
      }
      pdVar1 = (dword *)FUN_0052b940(local_58);
      local_68._4_4_ = pdVar1[1];
      local_68._0_4_ = *pdVar1;
      local_60 = pdVar1[2];
      local_5c = pdVar1[3];
    } while (local_68._0_4_ != 0x7d);
    local_68._0_4_ = 0x7d;
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall G3D_OcclusionZones::virt_meth_0x4d9770(G3D_OcclusionZones *this,FILE *param_1)

{
  int iVar1;
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
  _fread(&param_1,4,1,param_1);
  iVar1 = 0;
  if (0 < (int)param_1) {
    do {
      G3D_LightmapSurfaceAttribute::meth_0x4d0450
                ((G3D_LightmapSurfaceAttribute *)local_2c,
                 (FILE *)(G3D_LightmapSurfaceAttribute *)local_2c);
      ::cls_0x50db20::meth_0x4c60a0((cls_0x50db20 *)&this->mbr_0x24,local_2c);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1);
  }
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall
G3D_OcclusionZones::virt_meth_0x4d9830(G3D_OcclusionZones *this,int param_1,int *param_2)

{
  int iVar1;
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
  iVar1 = *(int *)(*param_2 + param_1);
  local_4 = 0;
  ExceptionList = &local_c;
  *param_2 = *param_2 + 4;
  if (0 < iVar1) {
    do {
      FUN_004d0510((cls_0x50db20 *)local_2c,param_1,param_2);
      ::cls_0x50db20::meth_0x4c60a0((cls_0x50db20 *)&this->mbr_0x24,local_2c);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}


#include "../include/G3D_OcclusionZones.h"
