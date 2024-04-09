#include "../include/Gfx_AnimMeshInstance.h"

uint __thiscall Gfx_AnimMeshInstance::RayIntersection(Gfx_AnimMeshInstance *this,undefined4 param_2)

{
  const_granny_real32 *Min3;
  const_granny_real32 cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  const_granny_real32 cVar4;
  const_granny_int32x *bone_indices;
  const_granny_real32 *transform_4x4;
  granny_int32x gVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  const_granny_mesh_binding *binding;
  const_granny_real32 *pcVar9;
  undefined4 *puVar10;
  undefined uStack_141;
  float fStack_140;
  int iStack_13c;
  const_granny_real32 acStack_11c [3];
  const_granny_real32 cStack_110;
  undefined4 uStack_10c;
  granny_box_intersection box_intersection;
  const_granny_real32 acStack_e4 [32];
  undefined auStack_64 [80];
  float *pfStack_14;
  
  pcVar9 = *(const_granny_real32 **)(*(int *)(this + 0xc) + 0x10);
  box_intersection.MinT = *(granny_real32 *)(*(int *)(this + 0xc) + 0x14);
  iVar8 = 0;
  box_intersection._8_4_ = pcVar9;
  if ((pcVar9 != (const_granny_real32 *)0x0) && (box_intersection.MinT != 0.0)) {
    thunk_FUN_00471e4f();
    thunk_FUN_0047134a();
    thunk_FUN_0047135d();
    cStack_110 = 0.0;
    uStack_10c = param_2;
    cVar1 = pcVar9[7];
    cVar4 = 0.0;
    puVar10 = *(undefined4 **)(this + 0xc0);
    for (uVar6 = (uint)cVar1 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    for (uVar6 = (uint)cVar1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined *)puVar10 = 0;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    fStack_140 = 3.402823e+38;
    uStack_141 = 0;
    if (0 < (int)pcVar9[7]) {
      iStack_13c = 0;
      uStack_141 = 0;
      do {
        cVar1 = pcVar9[8];
        Min3 = (const_granny_real32 *)((int)cVar1 + iStack_13c + 4);
        bone_indices = _GrannyGetMeshBindingToBoneIndices_4(binding);
        transform_4x4 = (const_granny_real32 *)(bone_indices[iVar8] * 0x40 + *(int *)(this + 0x40));
        if (this[0x2c] != (Gfx_AnimMeshInstance)0x0) {
          uVar2 = *(undefined4 *)(this + 0x20);
          uVar3 = *(undefined4 *)(this + 0x28);
          pcVar9 = acStack_e4;
          for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
            *pcVar9 = *transform_4x4;
            transform_4x4 = transform_4x4 + 1;
            pcVar9 = pcVar9 + 1;
          }
          thunk_FUN_004721ef(auStack_64,uVar2,*(undefined4 *)(this + 0x24),uVar3);
          thunk_FUN_00471943();
          transform_4x4 = (const_granny_real32 *)&box_intersection.field_0x14;
          pcVar9 = Min3;
        }
        gVar5 = _GrannyRayIntersectsBoxAt_24
                          (transform_4x4,Min3,
                           (const_granny_real32 *)((int)cVar1 + iStack_13c + 0x10),acStack_11c,
                           &cStack_110,&box_intersection);
        if ((gVar5 != 0) && (box_intersection.MaxT < 0.0 == NAN(box_intersection.MaxT))) {
          if ((box_intersection.MinT < 0.0 == NAN(box_intersection.MinT)) ||
             (box_intersection.MaxT <= 0.0)) {
            if (box_intersection.MinT < fStack_140 !=
                (NAN(box_intersection.MinT) || NAN(fStack_140))) {
              fStack_140 = box_intersection.MinT;
            }
          }
          else {
            fStack_140 = 0.0;
          }
          uStack_141 = 1;
          *(undefined *)(iVar8 + *(int *)(this + 0xc0)) = 1;
        }
        cVar4 = pcVar9[7];
        iVar8 = iVar8 + 1;
        iStack_13c = iStack_13c + 0x24;
      } while (iVar8 < (int)cVar4);
    }
    *pfStack_14 = fStack_140;
    return CONCAT31((int3)((uint)cVar4 >> 8),uStack_141);
  }
  uVar6 = FUN_00497120((byte *)
                       "Gfx_AnimMeshInstance::RayIntersection - No collision mesh and/or mesh binding!\n"
                      );
  return uVar6 & 0xffffff00;
}



void __thiscall
Gfx_AnimMeshInstance::RenderOBB(Gfx_AnimMeshInstance *this,uint param_2,uint param_3)

{
  int iVar1;
  const_granny_int32x *bone_indices;
  uint uVar2;
  int iVar3;
  cls_0x505540 *this_00;
  int iVar4;
  cls_0x5053c0 *this_01;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  bool bVar9;
  uint unaff_retaddr;
  undefined **ppuStack_15c;
  undefined *puStack_158;
  undefined *puStack_154;
  cls_0x5053c0 **ppcStack_150;
  undefined4 uStack_14c;
  undefined *puStack_148;
  int **local_144;
  undefined *puStack_140;
  int iStack_13c;
  Gfx_AnimMeshInstance *local_138;
  cls_0x5053c0 *local_134;
  int local_130;
  undefined *local_12c;
  int *local_128;
  int local_124;
  int *local_120;
  undefined4 uVar10;
  int local_108;
  int iStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  int iStack_ec;
  int iStack_e8;
  cls_0x505540 *local_e4;
  short sStack_e0;
  int iStack_d8;
  short asStack_d4 [14];
  const_granny_mesh_binding *binding_1;
  undefined4 uStack_b4;
  int *piStack_b0;
  cls_0x5053c0 *local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined *puStack_a0;
  int iStack_9c;
  Gfx_AnimMeshInstance *pGStack_98;
  int local_94 [10];
  undefined auStack_6c [8];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined auStack_54 [12];
  undefined auStack_48 [12];
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 auStack_24 [8];
  uint local_4;
  const_granny_mesh_binding *binding;
  
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  local_138 = this;
  if (this[0xc4] != (Gfx_AnimMeshInstance)0x0) {
    iVar5 = *(int *)(*(int *)(this + 0xc) + 0x10);
    local_94[0] = *(int *)(*(int *)(this + 0xc) + 0x14);
    local_144 = (int **)iVar5;
    if ((iVar5 == 0) || (local_94[0] == 0)) {
      FUN_00497120((byte *)
                   "Gfx_AnimMeshInstance::RenderOBB - No collision mesh and/or mesh binding!\n");
    }
    else {
      this_01 = *(cls_0x5053c0 **)(DAT_00707ce0 + 0x28);
      this_00 = *(cls_0x505540 **)(DAT_00707ce0 + 0x30);
      local_130 = 0x20001;
      local_12c = (undefined *)0x30002;
      local_134 = (cls_0x5053c0 *)0x10000;
      local_128 = (int *)0x3;
      uVar10 = 0x70006;
      local_124 = 0x50004;
      local_120 = (int *)0x60005;
      binding = (const_granny_mesh_binding *)0x50001;
      local_108 = 0x70003;
      local_e4 = this_00;
      local_ac = this_01;
      (**(code **)(*DAT_00708300 + 0x130))(DAT_00708300,0x42);
      cls_0x490060::meth_0x503390((cls_0x490060 *)&DAT_007082f8,(int *)0x0,0);
      cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,1,1);
      cls_0x490060::meth_0x503400((cls_0x490060 *)&DAT_007082f8,0,4,1);
      cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x89,0);
      cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x97,0);
      cls_0x490060::meth_0x503360((cls_0x490060 *)&DAT_007082f8,0x100,param_2);
      iVar1 = cls_0x5053c0::meth_0x5053c0(this_01,*(int *)(iVar5 + 0x1c) << 3,0x10);
      uStack_14c = (undefined4 *)CONCAT31(uStack_14c._1_3_,(char)iVar1);
      iVar1 = cls_0x5053c0::meth_0x505400
                        (this_01,*(int *)(iVar5 + 0x1c) << 3,0x10,&ppuStack_15c,&iStack_104,
                         (char)iVar1);
      if (iVar1 < 0) {
        FUN_005fb742(iVar1);
        FUN_00497120((byte *)"Gfx_AnimMeshInstance::RenderOBB - VB Streaming Lock failed! (%x %s)\n"
                    );
      }
      else {
        bVar9 = this_00->mbr_0x10 + this_00->mbr_0xc * *(int *)(iVar5 + 0x1c) * 0x18 <
                this_00->mbr_0x8;
        uStack_14c = (undefined4 *)CONCAT31(uStack_14c._1_3_,bVar9);
        iVar1 = cls_0x505540::meth_0x505540
                          (this_00,*(int *)(iVar5 + 0x1c) * 0x18,&iStack_9c,asStack_d4,bVar9);
        if (iVar1 < 0) {
          (**(code **)(*(int *)this_01->mbr_0x4 + 0x30))((int *)this_01->mbr_0x4);
          FUN_005fb742(iVar1);
          FUN_00497120((byte *)
                       "Gfx_AnimMeshInstance::RenderOBB - IB Streaming Lock failed! (%x %s)\n");
        }
        else {
          puStack_140 = (undefined *)0x0;
          uStack_14c = (undefined4 *)0x0;
          uStack_f4 = 0xff808000;
          pGStack_98 = (Gfx_AnimMeshInstance *)0xffffff00;
          puStack_148 = (undefined *)0x0;
          if (0 < *(int *)(iVar5 + 0x1c)) {
            iVar1 = 0;
            iStack_13c = 0;
            do {
              iVar4 = *(int *)(iVar5 + 0x20) + iStack_13c;
              bone_indices = _GrannyGetMeshBindingToBoneIndices_4(binding);
              iVar5 = iStack_d8;
              puVar6 = (undefined4 *)(bone_indices[iStack_e8] * 0x40 + *(int *)(iStack_d8 + 0x40));
              puVar8 = auStack_24;
              for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *puVar6;
                puVar6 = puVar6 + 1;
                puVar8 = puVar8 + 1;
              }
              if (*(char *)(iStack_d8 + 0x2c) != '\0') {
                local_120 = (int *)0x4a51ec;
                thunk_FUN_004721ef(&stack0x0000001c,*(undefined4 *)(iStack_d8 + 0x20),
                                   *(undefined4 *)(iStack_d8 + 0x24),
                                   *(undefined4 *)(iStack_d8 + 0x28));
                thunk_FUN_00471943();
              }
              uVar2 = 0;
              do {
                iStack_ec = iStack_ec + 1;
                *(short *)(iStack_3c + -2 + iStack_ec * 2) = asStack_d4[uVar2] + sStack_e0;
                uVar2 = uVar2 + 1;
              } while (uVar2 < 0x18);
              piVar7 = &iStack_38;
              if (*(char *)(iStack_e8 + *(int *)(iVar5 + 0xc0)) == '\0') {
                piVar7 = local_94;
              }
              uStack_f8 = *(undefined4 *)(iVar4 + 4);
              uStack_f4 = *(undefined4 *)(iVar4 + 8);
              uStack_f0 = *(undefined4 *)(iVar4 + 0xc);
              puVar6 = &uStack_f8;
              uStack_64 = uStack_f8;
              uStack_60 = uStack_f4;
              uStack_5c = uStack_f0;
              thunk_FUN_0047134a();
              iVar3 = iStack_ec;
              iVar5 = *piVar7;
              *(int *)(iVar1 + 0xc + local_108) = iVar5;
              iStack_104 = *(int *)(iVar4 + 0x10);
              iStack_100 = *(int *)(iVar4 + 8);
              uStack_fc = *(undefined4 *)(iVar4 + 0xc);
              local_120 = &iStack_104;
              local_124 = iVar1 + 0x10 + local_108;
              local_128 = (int *)0x4a52ea;
              iStack_3c = iStack_104;
              iStack_38 = iStack_100;
              uStack_34 = uStack_fc;
              thunk_FUN_0047134a();
              *(int *)(iVar1 + 0x1c + (int)puVar6) = iVar5;
              binding = *(const_granny_mesh_binding **)(iVar4 + 0x10);
              uStack_b4 = *(undefined4 *)(iVar4 + 8);
              local_108 = *(int *)(iVar4 + 0x18);
              local_128 = &iStack_3c;
              local_12c = &stack0xfffffef0;
              local_130 = iVar1 + 0x20 + (int)puVar6;
              local_134 = (cls_0x5053c0 *)0x4a5331;
              binding_1 = binding;
              piStack_b0 = (int *)local_108;
              thunk_FUN_0047134a();
              *(int *)(iVar1 + 0x2c + (int)local_120) = iVar5;
              uVar10 = *(undefined4 *)(iVar4 + 4);
              piStack_b0 = *(int **)(iVar4 + 8);
              local_ac = *(cls_0x5053c0 **)(iVar4 + 0x18);
              local_134 = (cls_0x5053c0 *)auStack_48;
              local_138 = (Gfx_AnimMeshInstance *)&stack0xfffffee4;
              iStack_13c = iVar1 + 0x30 + (int)local_120;
              puStack_140 = (undefined *)0x4a537e;
              uStack_b4 = uVar10;
              thunk_FUN_0047134a();
              *(int *)(local_12c + iVar1 + 0x3c) = iVar5;
              local_128 = *(int **)(iVar4 + 4);
              local_124 = *(undefined4 *)(iVar4 + 0x14);
              local_120 = *(int **)(iVar4 + 0xc);
              puStack_140 = auStack_54;
              local_144 = &local_128;
              puStack_148 = local_12c + iVar1 + 0x40;
              uStack_14c = (undefined4 *)0x4a53ce;
              piStack_b0 = local_128;
              local_ac = (cls_0x5053c0 *)local_124;
              uStack_a8 = local_120;
              thunk_FUN_0047134a();
              *(int *)(local_138 + iVar1 + 0x4c) = iVar5;
              local_134 = *(cls_0x5053c0 **)(iVar4 + 0x10);
              local_130 = *(undefined4 *)(iVar4 + 0x14);
              local_12c = *(undefined **)(iVar4 + 0xc);
              uStack_14c = &uStack_60;
              ppcStack_150 = &local_134;
              puStack_154 = local_138 + iVar1 + 0x50;
              puStack_158 = (undefined *)0x4a541e;
              local_ac = local_134;
              uStack_a8 = local_130;
              uStack_a4 = local_12c;
              thunk_FUN_0047134a();
              *(int *)(iVar1 + 0x5c + (int)local_144) = iVar5;
              puStack_140 = *(undefined **)(iVar4 + 0x10);
              iStack_13c = *(int *)(iVar4 + 0x14);
              local_138 = *(Gfx_AnimMeshInstance **)(iVar4 + 0x18);
              puStack_158 = auStack_6c;
              ppuStack_15c = &puStack_140;
              puStack_a0 = puStack_140;
              iStack_9c = iStack_13c;
              pGStack_98 = local_138;
              thunk_FUN_0047134a();
              *(int *)(iVar1 + 0x6c + (int)ppcStack_150) = iVar5;
              uStack_14c = *(undefined4 **)(iVar4 + 4);
              puStack_148 = *(undefined **)(iVar4 + 0x14);
              local_144 = *(int ***)(iVar4 + 0x18);
              iStack_9c = (int)uStack_14c;
              pGStack_98 = (Gfx_AnimMeshInstance *)puStack_148;
              local_94[0] = (int)local_144;
              thunk_FUN_0047134a();
              *(int *)(iVar1 + 0x7c + (int)ppuStack_15c) = iVar5;
              puStack_140 = (undefined *)(iVar3 + 8);
              iVar1 = iVar1 + 0x80;
              iStack_13c = iStack_13c + 0x24;
              puStack_148 = (undefined *)((int)puStack_148 + 1);
              this_00 = local_e4;
              this_01 = local_ac;
              iVar5 = (int)local_144;
            } while ((int)puStack_148 < *(int *)((int)local_144 + 0x1c));
          }
          (**(code **)(*(int *)this_01->mbr_0x4 + 0x30))((int *)this_01->mbr_0x4);
          (**(code **)(*(int *)this_00->mbr_0x4 + 0x30))((int *)this_00->mbr_0x4);
          DAT_007083cc = DAT_007083cc + 1;
          (**(code **)(*DAT_00708300 + 0x14c))(DAT_00708300,0,this_01->mbr_0x4,0x10);
          (**(code **)(*DAT_00708300 + 0x154))(DAT_00708300,this_00->mbr_0x4,uVar10);
          cls_0x490060::meth_0x4900a0
                    ((cls_0x490060 *)&DAT_007082f8,2,0,*(int *)(iVar5 + 0x1c) * 8,uStack_f8,
                     *(int *)(iVar5 + 0x1c) * 0xc);
          uVar2 = (**(code **)(*DAT_00707ce4 + 0xf4))();
          cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x89,uVar2 & 0xff);
          local_138[0xc4] = (Gfx_AnimMeshInstance)0x0;
        }
      }
    }
  }
  FUN_00616e15(local_4 ^ unaff_retaddr);
  return;
}


