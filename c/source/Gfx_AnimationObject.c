#include "../include/Gfx_AnimationObject.h"

granny_model_instance * __thiscall
Gfx_AnimationObject::CreateModelInstance(Gfx_AnimationObject *this)

{
  granny_model_instance *granny_model_instance;
  
  if (this->granny_model != (const_granny_model *)0x0) {
    granny_model_instance = _GrannyInstantiateModel_4(this->granny_model);
    return granny_model_instance;
  }
  FUN_00497120((byte *)"Gfx_AnimationObject::CreateModelInstance - NO MODEL LOADED!\n");
  return (granny_model_instance *)0x0;
}



void __thiscall
Gfx_AnimationObject::UpdateWorldPose
          (Gfx_AnimationObject *this,granny_model_instance *model_instance,granny_world_pose *Result
          ,const_granny_real32__ offset_4x4)

{
  if (this->Skeleton == (granny_skeleton *)0x0) {
    FUN_00497120((byte *)"Gfx_AnimationObject::UpdateWorldPose - No skeleton loaded!\n");
    return;
  }
  if (model_instance == (granny_model_instance *)0x0) {
    FUN_00497120((byte *)"Gfx_AnimationObject::UpdateWorldPose - NULL ModelInstance\n");
    return;
  }
  _GrannySampleModelAnimations_16
            (model_instance,0,this->Skeleton->BoneCount,(granny_local_pose *)this[1].Skeleton);
  _GrannyBuildWorldPose_24
            (this->Skeleton,0,this->Skeleton->BoneCount,(const_granny_local_pose *)this[1].Skeleton,
             offset_4x4,Result);
  return;
}



/* WARNING: Unable to use type for symbol vertex_data_count_pointer */

uint __thiscall
Gfx_AnimationObject::LoadSkeletonFromBuffer
          (Gfx_AnimationObject *this,granny_int32x memory_size,const_void__ memory,
          granny_real32 desired_units_per_meter)

{
  _String_base _Var1;
  byte bVar2;
  _String_base *p_Var3;
  const_granny_mesh *Mesh;
  uint uVar4;
  granny_file *File;
  granny_file_info *granny_file_info;
  _String_base *p_Var5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  granny_local_pose *granny_local_pose;
  granny_int32 vertex_data_count;
  uint uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  cls_0x50db20 *this_00;
  uint *puVar13;
  bool bVar14;
  bool bVar15;
  char *pcVar16;
  granny_file_info *granny_file_info_2;
  byte *vertex_data_count_pointer;
  const_granny_skeleton *from_skeleton;
  granny_file_info *granny_file_info_1;
  
  if (this->granny_file != (granny_file *)0x0) {
    uVar4 = FUN_00497120((byte *)
                         "Gfx_AnimationObject::LoadSkeletonFromBuffer - Skeleton already loaded!  Unload it first!\n"
                        );
    return uVar4 & 0xffffff00;
  }
  File = _GrannyReadEntireFileFromMemory_8(memory_size,memory);
  this->granny_file = File;
  if (File == (granny_file *)0x0) {
    uVar4 = FUN_00497120((byte *)"Gfx_AnimationObject::LoadSkeletonFromBuffer - Failed!");
    return uVar4 & 0xffffff00;
  }
  granny_file_info = _GrannyGetFileInfo_4(File);
  this->granny_file_info = granny_file_info;
  TransformGrannyFileToLHS(desired_units_per_meter);
  granny_file_info_2 = this->granny_file_info;
  this[1].granny_model = (granny_model *)desired_units_per_meter;
  if (granny_file_info_2->Models == (granny_model **)0x0) {
    uVar4 = FUN_00497120((byte *)
                         "Gfx_AnimationObject::LoadSkeletonFromBuffer - NO MODEL (SKELETON) DATA IN .GR2! (ModelCount = 0)"
                        );
    return uVar4 & 0xffffff00;
  }
  memory = (const_void__)0x0;
  if (0 < (int)granny_file_info_2->Models) {
    desired_units_per_meter = 0.0;
    do {
      this_00 = (cls_0x50db20 *)&DAT_006fadb0;
      uVar4 = 0;
      while( true ) {
        p_Var3 = **(_String_base ***)(this->granny_file_info->TrackGroupCount + (int)memory * 4);
        p_Var5 = p_Var3;
        do {
          _Var1 = *p_Var5;
          p_Var5 = p_Var5 + 1;
        } while (_Var1 != (_String_base)0x0);
        uVar6 = ::cls_0x50db20::meth_0x41e4b0
                          (this_00,0,this_00->mbr_0x14,p_Var3,(int)p_Var5 - (int)(p_Var3 + 1));
        if (uVar6 == 0) break;
        uVar4 = uVar4 + 0x1c;
        this_00 = (cls_0x50db20 *)&this_00->VFX_Parameter;
        if (0x6f < uVar4) goto LAB_004a2381;
      }
      memory = (const_void__)((int)memory + 1);
    } while ((int)memory < (int)this->granny_file_info->Models);
LAB_004a2360:
    uVar4 = FUN_00497120((byte *)
                         "Gfx_AnimationObject::LoadSkeletonFromBuffer - NO VALID MODEL (SKELETON) DATA IN .GR2!"
                        );
    return uVar4 & 0xffffff00;
  }
  if (desired_units_per_meter._0_1_ != '\0') goto LAB_004a2360;
LAB_004a2381:
  granny_file_info_1 = this->granny_file_info;
  this->granny_model = *(granny_model **)(granny_file_info_1->TrackGroupCount + (int)memory * 4);
  if (granny_file_info_1->Skeletons == (granny_skeleton **)0x0) {
    uVar4 = FUN_00497120((byte *)
                         "Gfx_AnimationObject::LoadSkeletonFromBuffer - NO SKELETON DATA IN .GR2! (SkeletonCount = 0)"
                        );
    return uVar4 & 0xffffff00;
  }
  memory = (const_void__)0x0;
  if (0 < (int)granny_file_info_1->Skeletons) {
    vertex_data_count = granny_file_info_1->VertexDataCount;
    desired_units_per_meter._0_1_ = '\0';
LAB_004a23b6:
    vertex_data_count_pointer = **(byte ***)vertex_data_count;
    puVar12 = &DAT_006fadc4;
    memory_size = 0;
    do {
      pbVar7 = vertex_data_count_pointer;
      do {
        bVar2 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar2 != 0);
      uVar6 = (int)pbVar7 - (int)(vertex_data_count_pointer + 1);
      uVar4 = *puVar12;
      if (uVar4 == 0) {
LAB_004a240c:
        if ((uVar6 <= uVar4) && (uVar4 == uVar6)) goto LAB_004a2434;
      }
      else {
        uVar10 = uVar4;
        if (uVar6 <= uVar4) {
          uVar10 = uVar6;
        }
        if (puVar12[1] < 0x10) {
          puVar13 = puVar12 + -4;
        }
        else {
          puVar13 = (uint *)puVar12[-4];
        }
        bVar14 = false;
        iVar8 = 0;
        bVar15 = true;
        pbVar7 = vertex_data_count_pointer;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          bVar14 = *(byte *)puVar13 < *pbVar7;
          bVar15 = *(byte *)puVar13 == *pbVar7;
          puVar13 = (uint *)((int)puVar13 + 1);
          pbVar7 = pbVar7 + 1;
        } while (bVar15);
        if (!bVar15) {
          iVar8 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        }
        if (iVar8 == 0) goto LAB_004a240c;
      }
      memory_size = memory_size + 0x1c;
      puVar12 = puVar12 + 7;
      if (0x6f < (uint)memory_size) goto LAB_004a2481;
    } while( true );
  }
  if (desired_units_per_meter._0_1_ != '\0') {
LAB_004a245a:
    uVar4 = FUN_00497120((byte *)
                         "Gfx_AnimationObject::LoadSkeletonFromBuffer - NO VALID SKELETON DATA IN .GR2!"
                        );
    return uVar4 & 0xffffff00;
  }
LAB_004a2481:
  granny_file_info_1 = this->granny_file_info;
  this->Skeleton = *(granny_skeleton **)(granny_file_info_1->VertexDataCount + (int)memory * 4);
  if (granny_file_info_1->Meshes == (granny_mesh **)0x0) {
    pcVar16 = "Gfx_AnimationObject::LoadSkeletonFromBuffer - %s NO COLLISION MESH DATA IN .GR2!\n";
  }
  else {
    memory = (const_void__)0x0;
    if (0 < (int)granny_file_info_1->Meshes) {
      puVar11 = (undefined4 *)granny_file_info_1->ModelCount;
LAB_004a24b1:
      pbVar7 = *(byte **)*puVar11;
      puVar12 = &DAT_006fadc4;
      desired_units_per_meter = 0.0;
      do {
        pbVar9 = pbVar7;
        do {
          bVar2 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar2 != 0);
        uVar6 = (int)pbVar9 - (int)(pbVar7 + 1);
        uVar4 = *puVar12;
        if (uVar4 == 0) {
LAB_004a2505:
          if ((uVar6 <= uVar4) && (uVar4 == uVar6)) goto LAB_004a252d;
        }
        else {
          uVar10 = uVar4;
          if (uVar6 <= uVar4) {
            uVar10 = uVar6;
          }
          if (puVar12[1] < 0x10) {
            puVar13 = puVar12 + -4;
          }
          else {
            puVar13 = (uint *)puVar12[-4];
          }
          bVar14 = false;
          iVar8 = 0;
          bVar15 = true;
          pbVar9 = pbVar7;
          do {
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            bVar14 = *(byte *)puVar13 < *pbVar9;
            bVar15 = *(byte *)puVar13 == *pbVar9;
            puVar13 = (uint *)((int)puVar13 + 1);
            pbVar9 = pbVar9 + 1;
          } while (bVar15);
          if (!bVar15) {
            iVar8 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
          }
          if (iVar8 == 0) goto LAB_004a2505;
        }
        desired_units_per_meter = (granny_real32)((int)desired_units_per_meter + 0x1c);
        puVar12 = puVar12 + 7;
        if (0x6f < (uint)desired_units_per_meter) goto LAB_004a2572;
      } while( true );
    }
    if (desired_units_per_meter._0_1_ == '\0') {
LAB_004a2572:
      from_skeleton = this->Skeleton;
      Mesh = *(const_granny_mesh **)(this->granny_file_info->ModelCount + (int)memory * 4);
      this[1].granny_file = (granny_file *)Mesh;
      granny_file_info_1 =
           (granny_file_info *)_GrannyNewMeshBinding_12(Mesh,from_skeleton,from_skeleton);
      this[1].granny_file_info = granny_file_info_1;
      if (granny_file_info_1 == (granny_file_info *)0x0) {
        FUN_00497120((byte *)
                     "Gfx_AnimationObject::LoadSkeletonFromBuffer - %s Failed to create Collision Mesh Bindings!\n"
                    );
        this[1].granny_file = (granny_file *)0x0;
      }
      goto LAB_004a25be;
    }
LAB_004a2557:
    pcVar16 = 
    "Gfx_AnimationObject::LoadSkeletonFromBuffer - %s NO VALID COLLISION MESH DATA IN .GR2!\n";
  }
  FUN_00497120((byte *)pcVar16);
LAB_004a25be:
  granny_local_pose = _GrannyNewLocalPose_4(this->Skeleton->BoneCount);
  this[1].Skeleton = (granny_skeleton *)granny_local_pose;
  _Gfx_AnimationObject__ResolveGrannyBoneIndex(this);
  return CONCAT31((int3)((uint)granny_local_pose >> 8),1);
LAB_004a2434:
  memory = (const_void__)((int)memory + 1);
  vertex_data_count = vertex_data_count + 4;
  if ((int)this->granny_file_info->Skeletons <= (int)memory) goto LAB_004a245a;
  goto LAB_004a23b6;
LAB_004a252d:
  memory = (const_void__)((int)memory + 1);
  puVar11 = puVar11 + 1;
  if ((int)this->granny_file_info->Meshes <= (int)memory) goto LAB_004a2557;
  goto LAB_004a24b1;
}



float10 * __thiscall
Gfx_AnimationObject::GetDuration
          (void *this,float10 *__return_storage_ptr__,uint param_1,uint param_2,int param_3)

{
  int iVar1;
  float10 *local_4;
  
  cls_0x4542d0::meth_0x4a2630
            ((cls_0x4542d0 *)((int)this + 0x370),(int *)&local_4,(uint *)&__return_storage_ptr__);
  if (local_4 != *(float10 **)((int)this + 0x374)) {
    iVar1 = *(int *)((int)local_4 + 0x14);
    if ((iVar1 != 0) && (param_1 < (uint)(*(int *)((int)local_4 + 0x18) - iVar1 >> 2))) {
      return *(float10 **)
              (*(int *)(*(int *)(*(int *)(iVar1 + param_1 * 4) + 4) + 0x54) + param_2 * 4);
    }
    local_4 = (float10 *)
              FUN_00497120((byte *)
                           "Gfx_AnimationObject::GetDuration - %s Unknown animation index: %d\n");
  }
  return local_4;
}



undefined4 __thiscall
Gfx_AnimationObject::ApplyAnimation
          (Gfx_AnimationObject *this,granny_model_instance *pModelInstance,
          granny_track_mask *pModelTrackMask,uint param_4,uint anim_index,int param_6,
          granny_real32 start_time)

{
  int iVar1;
  granny_controlled_animation_builder *builder;
  granny_control *control;
  granny_track_mask *model_mask;
  granny_int32x track_group_index;
  granny_model_instance *model;
  
  model_mask = pModelTrackMask;
  model = pModelInstance;
  if (pModelInstance == (granny_model_instance *)0x0) {
    FUN_00497120((byte *)"Gfx_AnimationObject::ApplyAnimation - pModelInstance == NULL\n");
    return 0;
  }
  if (pModelTrackMask == (granny_track_mask *)0x0) {
    FUN_00497120((byte *)"Gfx_AnimationObject::ApplyAnimation - pModelTrackMask == NULL\n");
    return 0;
  }
  cls_0x4542d0::meth_0x4a2630((cls_0x4542d0 *)(this + 0x37),(int *)&pModelInstance,&param_4);
  if ((granny_file_info *)pModelInstance == this[0x37].granny_file_info) {
    FUN_00497120((byte *)"Gfx_AnimationObject::ApplyAnimation - %s Unknown animation group: %d\n");
    return 0;
  }
  iVar1 = *(int *)(pModelInstance + 0x14);
  if ((iVar1 != 0) && (anim_index < (uint)(*(int *)(pModelInstance + 0x18) - iVar1 >> 2))) {
    iVar1 = *(int *)(iVar1 + anim_index * 4);
    track_group_index = *(granny_int32x *)(iVar1 + 8);
    builder = (granny_controlled_animation_builder *)
              _GrannyBeginControlledAnimation_8
                        (start_time,
                         *(undefined4 *)(*(int *)(*(int *)(iVar1 + 4) + 0x54) + param_6 * 4));
    _GrannySetTrackGroupTarget_12(builder,track_group_index,model);
    _GrannySetTrackGroupModelMask_12(builder,track_group_index,model_mask);
    control = _GrannyEndControlledAnimation_4(builder);
    return control;
  }
  FUN_00497120((byte *)"Gfx_AnimationObject::ApplyAnimation - %s anim_index out of bounds: %d\n");
  return 0;
}



uint __thiscall
Gfx_AnimationObject::ProcessAnimationCues
          (void *this,VFX_Parameter__vftable_673a20 *param_1,uint anim_index,int **param_3,
          undefined4 param_4,void **param_5,cls_0x4a67f0 *param_6)

{
  int iVar1;
  uint uVar2;
  void *local_4;
  
  local_4 = this;
  cls_0x4542d0::meth_0x4a2630((cls_0x4542d0 *)((int)this + 0x370),(int *)&local_4,(uint *)&param_1);
  if (local_4 != *(void **)((int)this + 0x374)) {
    iVar1 = *(int *)((int)local_4 + 0x14);
    if ((iVar1 != 0) && (anim_index < (uint)(*(int *)((int)local_4 + 0x18) - iVar1 >> 2))) {
      uVar2 = FUN_004a3360(*(void **)(iVar1 + anim_index * 4),param_1,anim_index,param_3,
                           (char)param_4,param_5,param_6);
      return uVar2;
    }
    local_4 = (void *)FUN_00497120((byte *)
                                   "Gfx_AnimationObject::ProcessAnimationCues - %s anim_index out of bounds: %d\n"
                                  );
  }
  return (uint)local_4 & 0xffffff00;
}



void __thiscall Gfx_AnimationObject::ClearAnimationCues(void *this,undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  void *local_4;
  
  local_4 = this;
  piVar3 = (int *)cls_0x4542d0::meth_0x4a2630
                            ((cls_0x4542d0 *)((int)this + 0x370),(int *)&local_4,&param_1);
  iVar1 = *piVar3;
  if (iVar1 != *(int *)((int)this + 0x374)) {
    iVar2 = *(int *)(iVar1 + 0x14);
    if ((iVar2 == 0) || ((uint)(*(int *)(iVar1 + 0x18) - iVar2 >> 2) <= param_2)) {
      FUN_00497120((byte *)
                   "Gfx_AnimationObject::ClearAnimationCues - %s anim_index out of bounds: %d\n");
      return;
    }
    FUN_004a4730(*(int *)(iVar2 + param_2 * 4));
  }
  return;
}



void __thiscall
Gfx_AnimationObject::AddAnimationCue
          (void *this,uint param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  void *local_4;
  
  local_4 = this;
  piVar3 = (int *)cls_0x4542d0::meth_0x4a2630
                            ((cls_0x4542d0 *)((int)this + 0x370),(int *)&local_4,&param_1);
  iVar1 = *piVar3;
  if (iVar1 == *(int *)((int)this + 0x374)) {
    FUN_00497120((byte *)"Gfx_AnimationObject::AddAnimationCue - %s Unknown animation group: %d\n");
    return;
  }
  iVar2 = *(int *)(iVar1 + 0x14);
  if ((iVar2 != 0) && (param_2 < (uint)(*(int *)(iVar1 + 0x18) - iVar2 >> 2))) {
    FUN_004a4760(*(void **)(iVar2 + param_2 * 4),param_3,param_4);
    return;
  }
  FUN_00497120((byte *)"Gfx_AnimationObject::AddAnimationCue - %s anim_index out of bounds: %d\n");
  return;
}



void __thiscall Gfx_AnimationObject::DestroyAnimationGroup(void *this,int *param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  int *unknown;
  int **ppiVar3;
  int **ppiVar4;
  void *local_4;
  
  local_4 = this;
  cls_0x4542d0::meth_0x4a2630((cls_0x4542d0 *)((int)this + 0x370),(int *)&local_4,(uint *)&param_1);
  if (local_4 == *(void **)((int)this + 0x374)) {
    FUN_00497120((byte *)
                 "Gfx_AnimationObject::DestroyAnimationGroup - Unknown animation group: %d\n");
  }
  else {
    ppiVar2 = *(int ***)((int)local_4 + 0x14);
    if (ppiVar2 != *(int ***)((int)local_4 + 0x18)) {
      ppiVar1 = ppiVar2 + 1;
      do {
        unknown = *ppiVar2;
        if (unknown != (int *)0x0) {
          FUN_004a4910(unknown);
                    /* WARNING: Subroutine does not return */
          _free(unknown);
        }
        ppiVar4 = *(int ***)((int)local_4 + 0x18);
        if (ppiVar1 != ppiVar4) {
          ppiVar3 = ppiVar1;
          do {
            *(int **)(((int)ppiVar2 - (int)ppiVar1) + (int)ppiVar3) = *ppiVar3;
            ppiVar3 = ppiVar3 + 1;
          } while (ppiVar3 != ppiVar4);
        }
        ppiVar4 = (int **)(*(int *)((int)local_4 + 0x18) + -4);
        *(int ***)((int)local_4 + 0x18) = ppiVar4;
      } while (ppiVar2 != ppiVar4);
      return;
    }
  }
  return;
}



bool __thiscall
Gfx_AnimationObject::LoadAnimationFileFromBuffer
          (void *this,undefined4 param_1,undefined4 *param_2,int param_3,float param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  void *this_00;
  bool bVar4;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  iVar2 = param_3;
  puVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631c9b;
  local_c = ExceptionList;
  if (param_2 == (undefined4 *)0x0) {
    ExceptionList = &local_c;
    FUN_00497120((byte *)"Gfx_AnimationObject::LoadAnimationFileFromBuffer - 0 buffersize!\n");
    ExceptionList = local_c;
    return false;
  }
  if (param_3 == 0) {
    ExceptionList = &local_c;
    FUN_00497120((byte *)"Gfx_AnimationObject::LoadAnimationFileFromBuffer - NULL buffer!\n");
    ExceptionList = local_c;
    return false;
  }
  if (param_4 < 0.0 != (param_4 == 0.0)) {
    ExceptionList = &local_c;
    FUN_00497120((byte *)"Gfx_AnimationObject::LoadAnimationFileFromBuffer - invalid scale: %f\n");
    ExceptionList = local_c;
    return false;
  }
  ExceptionList = &local_c;
  param_2 = (undefined4 *)operator_new(0x1c);
  local_4 = 0;
  if ((cls_0x4a4970 *)param_2 == (cls_0x4a4970 *)0x0) {
    param_2 = (undefined4 *)0x0;
  }
  else {
    param_2 = &cls_0x4a4970::cls_0x4a4970((cls_0x4a4970 *)param_2)->mbr_0x0;
  }
  local_4 = 0xffffffff;
  uVar3 = Gfx_AnimationData::LoadAnimationDataFromBuffer(param_2,(int)puVar1,iVar2,param_4);
  bVar4 = (char)uVar3 != '\0';
  if (bVar4) {
    this_00 = (void *)cls_0x4542d0::meth_0x4a4410
                                ((cls_0x4542d0 *)((int)this + 0x370),(int **)&param_1);
    FUN_004a31a0(this_00,&param_2);
  }
  ExceptionList = local_c;
  return bVar4;
}


