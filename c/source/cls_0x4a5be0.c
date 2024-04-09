#include "../include/cls_0x4a5be0.h"

void __thiscall cls_0x4a5be0::meth_0x4a4c90(cls_0x4a5be0 *this,granny_real32 Duration,char param_2)

{
  granny_real32 AtSeconds;
  granny_control *control;
  
  control = this->control;
  if (control != (granny_control *)0x0) {
    if (param_2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x004a4cc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _GrannyCompleteControlAt_8(control,Duration);
      return;
    }
    _GrannyEaseControlOut_8(control,Duration);
    _GrannyCompleteControlAt_8(this->control,(float)_AtSeconds);
  }
  return;
}



void __thiscall cls_0x4a5be0::meth_0x4a55d0(cls_0x4a5be0 *this,uint param_1)

{
  void *_Memory;
  
  if (((this->mbr_0xa4 != 0) && (param_1 < (uint)((int)(this->mbr_0xa8 - this->mbr_0xa4) >> 2))) &&
     (_Memory = *(void **)(this->mbr_0xa4 + param_1 * 4), _Memory != (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}



undefined4 __thiscall
cls_0x4a5be0::meth_0x4a5640
          (cls_0x4a5be0 *this,dword param_1,uint param_2,uint param_3,granny_real32 param_4,
          bool param_5,granny_int32x param_6)

{
  uint uVar1;
  
  uVar1 = cls_0x467780::meth_0x467780
                    ((cls_0x467780 *)this->animation_object,param_1,param_2,param_3);
  if ((char)uVar1 != '\0') {
    this->granny_duration_2 = param_4;
    this->mbr_0x60 = param_3;
    this->VFX_Parameter_vftable_673a20_3 = param_1;
    this->anim_index_3 = param_2;
    this->granny_from_current_2 = param_5;
    this->loop_count_2 = param_6;
    this->mbr_0x70 = 1;
    return CONCAT31((int3)((uint)param_4 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}



cls_0x4a5be0 * __thiscall
cls_0x4a5be0::cls_0x4a5be0(cls_0x4a5be0 *this,Gfx_AnimationObject *animation_object)

{
  granny_file *pgVar1;
  dword dVar2;
  granny_model_instance *model;
  granny_skeleton *source_skeleton;
  granny_world_pose *world_pose;
  granny_track_mask *tracl_mask;
  granny_matrix_4x4 *bone_matrices_4x4;
  void *pvVar3;
  undefined4 *puVar4;
  uint uVar5;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  granny_int32x bone_count;
  
  puStack_8 = &LAB_00631d2c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->animation_object = animation_object;
  this->mbr_0x0 = 0;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 1;
  this->mbr_0x20 = 0x3f800000;
  this->mbr_0x24 = 0x3f800000;
  this->mbr_0x28 = 0x3f800000;
  this->mbr_0x2c = 0;
  this->control = (granny_control *)0x0;
  this->control_2 = (granny_control *)0x0;
  *(undefined4 *)&this->field_0x44 = 0;
  this->VFX_Parameter_vftable_673a20 = 0xffffffff;
  this->anim_index = 0xffffffff;
  this->mbr_0x54 = 0xffffffff;
  this->VFX_Parameter_vftable_673a20_3 = 0xffffffff;
  this->anim_index_3 = 0xffffffff;
  this->mbr_0x60 = 0xffffffff;
  this->granny_duration_2 = 0.0;
  this->granny_from_current_2 = false;
  this->loop_count_2 = 0;
  this->mbr_0x70 = 0;
  this->VFX_Parameter_vftable_673a20_2 = 0xffffffff;
  this->anim_index_2 = 0xffffffff;
  this->mbr_0x7c = 0xffffffff;
  this->granny_duration = 0.0;
  this->granny_from_current = false;
  this->loop_count = 0;
  this->speed = 1.0;
  this->mbr_0x90 = 0;
  this->seconds = 0.0;
  this->seconds2 = 0.0;
  this->loop_count_3 = 0;
  this->mbr_0xa4 = 0;
  this->mbr_0xa8 = 0;
  this->mbr_0xac = 0;
  local_4 = 0;
  dVar2 = FUN_004910b0();
  (this->cls_0x4a67f0).mbr_0x4 = dVar2;
  (this->cls_0x4a67f0).mbr_0x8 = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  this->mbr_0xbc = 0;
  this->mbr_0xc0 = 0;
  this->mbr_0xc4 = 0;
  model = Gfx_AnimationObject::CreateModelInstance(this->animation_object);
  this->model_instance = model;
  source_skeleton = _GrannyGetSourceSkeleton_4(model);
  bone_count = source_skeleton->BoneCount;
  this->bone_count = bone_count;
  world_pose = _GrannyNewWorldPose_4(bone_count);
  this->world_pose = world_pose;
  tracl_mask = _GrannyNewTrackMask_8(1.0,this->bone_count);
  this->track_mask = tracl_mask;
  bone_matrices_4x4 = (granny_matrix_4x4 *)operator_new(this->bone_count << 6);
  this->bone_matrices_4x4 = bone_matrices_4x4;
  pvVar3 = operator_new(this->bone_count << 6);
  this->mbr_0x48 = (dword)pvVar3;
  pgVar1 = this->animation_object[1].granny_file;
  if (pgVar1 != (granny_file *)0x0) {
    puVar4 = (undefined4 *)operator_new((uint)pgVar1->ConversionBuffer);
    this->mbr_0xc0 = (dword)puVar4;
    pvVar3 = pgVar1->ConversionBuffer;
    for (uVar5 = (uint)pvVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (uVar5 = (uint)pvVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  ExceptionList = pvStack_c;
  return this;
}



void __thiscall cls_0x4a5be0::meth_0x4a5d70(cls_0x4a5be0 *this)

{
  int **ppiVar1;
  int *piVar2;
  void **ppvVar3;
  cls_0x4a5be0 *local_4;
  
  local_4 = this;
  if ((void *)this->mbr_0xc0 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xc0);
  }
  if (this->bone_matrices_4x4 != (granny_matrix_4x4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(this->bone_matrices_4x4);
  }
  if ((void *)this->mbr_0x48 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x48);
  }
  if (this->control != (granny_control *)0x0) {
    _GrannyFreeControl_4(this->control);
  }
  if (this->control_2 != (granny_control *)0x0) {
    _GrannyFreeControl_4(this->control_2);
  }
  if (this->track_mask != (granny_track_mask *)0x0) {
    _GrannyFreeTrackMask_4(this->track_mask);
  }
  if (this->world_pose != (granny_world_pose *)0x0) {
    _GrannyFreeWorldPose_4(this->world_pose);
  }
  if (this->model_instance != (granny_model_instance *)0x0) {
    _GrannyFreeModelInstance_4(this->model_instance);
  }
  ppvVar3 = (void **)this->mbr_0xa4;
  if (ppvVar3 != (void **)this->mbr_0xa8) {
    do {
      if (*ppvVar3 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*ppvVar3);
      }
      ppvVar3 = ppvVar3 + 1;
    } while (ppvVar3 != (void **)this->mbr_0xa8);
  }
  if ((void *)this->mbr_0xbc == (void *)0x0) {
    ppiVar1 = (int **)(this->cls_0x4a67f0).mbr_0x4;
    if (ppiVar1 == (int **)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = *ppiVar1;
    }
    cls_0x4a67f0::meth_0x4a5a90(&this->cls_0x4a67f0,(int **)&local_4,piVar2,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
    _free((void *)(this->cls_0x4a67f0).mbr_0x4);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0xbc);
}



int __thiscall cls_0x4a5be0::meth_0x4a5ea0(cls_0x4a5be0 *this,uint param_1)

{
  uint uVar1;
  
  if ((this->mbr_0xa4 == 0) || ((uint)((int)(this->mbr_0xa8 - this->mbr_0xa4) >> 2) <= param_1)) {
    if (this->mbr_0xa4 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (int)(this->mbr_0xa8 - this->mbr_0xa4) >> 2;
    }
    cls_0x40cc80::meth_0x4a5a10((cls_0x40cc80 *)&this->mbr_0xa0,param_1 + 1);
    for (; (this->mbr_0xa4 != 0 && (uVar1 < (uint)((int)(this->mbr_0xa8 - this->mbr_0xa4) >> 2)));
        uVar1 = uVar1 + 1) {
      *(undefined4 *)(this->mbr_0xa4 + uVar1 * 4) = 0;
    }
  }
  return this->mbr_0xa4 + param_1 * 4;
}



void __thiscall cls_0x4a5be0::meth_0x4a5f20(cls_0x4a5be0 *this)

{
  int **ppiVar1;
  cls_0x4a5be0 *local_4;
  
  ppiVar1 = (int **)(this->cls_0x4a67f0).mbr_0x4;
  local_4 = this;
  if (ppiVar1 == (int **)0x0) {
    cls_0x4a67f0::meth_0x4a5a90(&this->cls_0x4a67f0,(int **)&local_4,(int *)0x0,(int *)0x0);
    return;
  }
  cls_0x4a67f0::meth_0x4a5a90(&this->cls_0x4a67f0,(int **)&local_4,*ppiVar1,(int *)ppiVar1);
  return;
}



void __thiscall cls_0x4a5be0::meth_0x4a5f60(cls_0x4a5be0 *this,int **param_1)

{
  float fVar1;
  uint anim_index;
  void **ppvVar2;
  float10 fVar3;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  int **local_8;
  int **local_4;
  VFX_Parameter__vftable_673a20 *VFX_Parameter_vftable_673a20;
  const_granny_control *control;
  
  fVar1 = (float)this->mbr_0x4;
  control = this->control_2;
  anim_index = this->anim_index;
  VFX_Parameter_vftable_673a20 = (VFX_Parameter__vftable_673a20 *)this->VFX_Parameter_vftable_673a20
  ;
  local_8 = param_1;
  if ((this->control != (const_granny_control *)0x0) &&
     ((this->loop_count_3 == 0 || (0.0 < this->seconds)))) {
    if (this->mbr_0x90 == 0) {
      fVar3 = (float10)fVar1 + (float10)(float)param_1;
    }
    else {
      _GrannyGetControlDuration_4(this->control);
      fVar3 = extraout_ST0 - ((float10)fVar1 + (float10)(float)param_1);
    }
    local_8 = (int **)(float)fVar3;
    _GrannyControlIsComplete_4(this->control);
  }
  local_4 = param_1;
  if ((control != (const_granny_control *)0x0) && (this->mbr_0x90 != 0)) {
    _GrannyGetControlDuration_4(control);
    local_4 = (int **)(float)(extraout_ST0_00 - (float10)(float)param_1);
  }
  if (this->control != (granny_control *)0x0) {
    ppvVar2 = (void **)meth_0x4a5ea0(this,(uint)VFX_Parameter_vftable_673a20);
    Gfx_AnimationObject::ProcessAnimationCues
              (this->animation_object,VFX_Parameter_vftable_673a20,anim_index,local_8,
               (uint)this->mbr_0x90,ppvVar2,&this->cls_0x4a67f0);
  }
  if (this->control_2 != (granny_control *)0x0) {
    Gfx_AnimationObject::ProcessAnimationCues
              (this->animation_object,
               (VFX_Parameter__vftable_673a20 *)this->VFX_Parameter_vftable_673a20_2,
               this->anim_index_2,local_4,(uint)this->mbr_0x90,(void **)&this->mbr_0xbc,
               &this->cls_0x4a67f0);
  }
  return;
}



void __thiscall cls_0x4a5be0::meth_0x4a6070(cls_0x4a5be0 *this)

{
  float fVar1;
  uint uVar2;
  void **ppvVar3;
  void *pvVar4;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 seconds;
  float10 extraout_ST0_02;
  granny_real32 Duration;
  granny_control *control;
  
  if (this->control_2 != (granny_control *)0x0) {
    if (this->control != (granny_control *)0x0) {
      _GrannyFreeControl_4(this->control);
    }
    this->seconds = this->seconds2;
    this->anim_index = this->anim_index_2;
    this->control = this->control_2;
    uVar2 = this->VFX_Parameter_vftable_673a20_2;
    this->loop_count_3 = this->loop_count;
    this->loop_count = 0;
    this->seconds2 = 0.0;
    this->mbr_0x0 = 0;
    this->mbr_0x4 = 0;
    this->control_2 = (granny_control *)0x0;
    this->VFX_Parameter_vftable_673a20 = uVar2;
    this->mbr_0x54 = this->mbr_0x7c;
    if (this->mbr_0xbc != 0) {
      ppvVar3 = (void **)meth_0x4a5ea0(this,uVar2);
      if (*ppvVar3 == (void *)0x0) {
        pvVar4 = operator_new(4);
        *ppvVar3 = pvVar4;
      }
      *(undefined4 *)*ppvVar3 = *(undefined4 *)this->mbr_0xbc;
                    /* WARNING: Subroutine does not return */
      _free((void *)this->mbr_0xbc);
    }
    meth_0x4a55d0(this,uVar2);
  }
  control = this->control;
  if (control != (granny_control *)0x0) {
    if ((this->loop_count_3 != 0) && (this->seconds < 0.0 != (this->seconds == 0.0))) {
      this->mbr_0x4 = 0;
      _GrannyFreeControl_4(control);
      this->control = (granny_control *)0x0;
      goto LAB_004a616d;
    }
    _GrannyGetControlClock_4(control);
    this->mbr_0x4 = (dword)(float)extraout_ST0;
    if (extraout_ST0 < (float10)(float)(LPCWSTR)0x0 ==
        (NAN(extraout_ST0) || NAN((float10)(float)(LPCWSTR)0x0))) goto LAB_004a616d;
  }
  this->mbr_0x4 = 0;
LAB_004a616d:
  control = (granny_control *)
            Gfx_AnimationObject::ApplyAnimation
                      (this->animation_object,this->model_instance,this->track_mask,
                       this->VFX_Parameter_vftable_673a20_3,this->anim_index_3,this->mbr_0x60,0.0);
  this->control_2 = control;
  this->VFX_Parameter_vftable_673a20_2 = this->VFX_Parameter_vftable_673a20_3;
  this->granny_duration = this->granny_duration_2;
  this->anim_index_2 = this->anim_index_3;
  this->mbr_0x7c = this->mbr_0x60;
  this->granny_from_current = this->granny_from_current_2;
  this->loop_count = this->loop_count_2;
  if ((void *)this->mbr_0xbc != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xbc);
  }
  if (this->control_2 == (granny_control *)0x0) {
    FUN_00497120((byte *)"Invalid Animation: Group: %d Anim: %d SubAnim: %d\n");
    return;
  }
  _GrannySetControlLoopCount_8(this->control_2,this->loop_count);
  _GrannySetControlSpeed_8(this->control_2,this->speed);
  fVar1 = this->granny_duration;
  if (fVar1 <= 0.0) {
    Duration = (granny_real32)this->mbr_0x4;
  }
  else {
    _GrannyEaseControlIn_12(this->control_2,this->granny_duration,this->granny_from_current);
    Duration = this->granny_duration;
  }
  meth_0x4a4c90(this,Duration,0.0 < fVar1);
  if (this->mbr_0x90 == 0) {
    _GrannyGetControlDurationLeft_4(this->control_2);
    seconds = extraout_ST0_02;
  }
  else {
    _GrannyGetControlDuration_4(this->control_2);
    _GrannyGetControlDurationLeft_4(this->control_2);
    seconds = (float10)(float)extraout_ST0_00 - extraout_ST0_01;
  }
  this->seconds2 = (float)seconds;
  _GrannyFreeControlOnceUnused_4(this->control_2);
  return;
}



void __thiscall cls_0x4a5be0::meth_0x4a62b0(cls_0x4a5be0 *this,int **seconds)

{
  float fVar1;
  float fVar2;
  dword dVar3;
  dword dVar4;
  granny_matrix_4x4 *paagVar5;
  granny_real32 gVar6;
  bool is_control_complete;
  void **ppvVar7;
  void *pvVar8;
  const_granny_real32__ offset_4x4;
  granny_matrix_4x4 *world_pose_4x4_2;
  granny_matrix_4x4 *world_pose_4x4;
  int iVar9;
  int iVar10;
  uint uVar11;
  granny_real32 *pgVar13;
  dword *pdVar12;
  undefined4 *puVar13;
  dword *pdVar14;
  granny_real32 *world_pose_4x4_r11;
  undefined4 *puVar15;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 fVar16;
  float10 extraout_ST0_03;
  float10 extraout_ST0_04;
  float10 extraout_ST0_05;
  int **new_seconds;
  uint uStack_8c;
  int **new_seconds_2;
  dword adStack_80 [5];
  dword dStack_6c;
  dword dStack_58;
  undefined4 auStack_34 [13];
  granny_matrix_4x4 *temp_5f91a21224;
  granny_control *control;
  
  if (this->mbr_0x70 != 0) {
    meth_0x4a6070(this);
    this->mbr_0x70 = 0;
  }
  new_seconds = seconds;
  control = this->control;
  is_control_complete = false;
  this->mbr_0x0 = (dword)seconds;
  if ((control != (granny_control *)0x0) && ((this->loop_count_3 == 0 || (0.0 < this->seconds)))) {
    if (this->mbr_0x90 == 0) {
      new_seconds = (int **)((float)seconds + (float)this->mbr_0x4);
      _GrannySetControlClock_8(control,(granny_real32)new_seconds);
      _GrannyGetControlDurationLeft_4(this->control);
      this->seconds = (float)extraout_ST0;
    }
    else {
      _GrannyGetControlDuration_4(control);
      new_seconds = (int **)(float)(extraout_ST0_00 -
                                   ((float10)(float)seconds + (float10)(float)this->mbr_0x4));
      _GrannySetControlClock_8(this->control,(granny_real32)new_seconds);
      this->seconds = (granny_real32)new_seconds;
    }
    is_control_complete = _GrannyControlIsComplete_4(this->control);
  }
  new_seconds_2 = seconds;
  if (this->control_2 != (const_granny_control *)0x0) {
    _GrannyGetControlDuration_4(this->control_2);
    if (this->mbr_0x90 != 0) {
      new_seconds_2 = (int **)((float)extraout_ST0_01 - (float)seconds);
    }
    _GrannySetControlClock_8(this->control_2,(granny_real32)new_seconds_2);
    if (this->mbr_0x90 == 0) {
      _GrannyGetControlDurationLeft_4(this->control_2);
      fVar16 = extraout_ST0_03;
    }
    else {
      _GrannyGetControlDurationLeft_4(this->control_2);
      fVar16 = (float10)(float)extraout_ST0_01 - extraout_ST0_02;
    }
    this->seconds2 = (float)fVar16;
  }
  control = this->control;
  if (control == (granny_control *)0x0) {
LAB_004a64f4:
    if ((this->control_2 != (granny_control *)0x0) && (control == (granny_control *)0x0)) {
      this->control = this->control_2;
      this->seconds = this->seconds2;
      this->anim_index = this->anim_index_2;
      this->loop_count_3 = this->loop_count;
      this->loop_count = 0;
      this->seconds2 = 0.0;
      this->control_2 = (granny_control *)0x0;
      this->mbr_0x0 = 0;
      this->mbr_0x4 = 0;
      this->VFX_Parameter_vftable_673a20 = this->VFX_Parameter_vftable_673a20_2;
      this->mbr_0x54 = this->mbr_0x7c;
      if (this->mbr_0x90 == 0) {
        new_seconds = seconds;
      }
      else {
        _GrannyGetControlDuration_4(this->control);
        new_seconds = (int **)(float)(extraout_ST0_05 -
                                     ((float10)(float)seconds + (float10)(float)this->mbr_0x4));
      }
      if (this->mbr_0xbc != 0) {
        ppvVar7 = (void **)meth_0x4a5ea0(this,this->VFX_Parameter_vftable_673a20_2);
        if (*ppvVar7 == (void *)0x0) {
          pvVar8 = operator_new(4);
          *ppvVar7 = pvVar8;
        }
        *(undefined4 *)*ppvVar7 = *(undefined4 *)this->mbr_0xbc;
                    /* WARNING: Subroutine does not return */
        _free((void *)this->mbr_0xbc);
      }
      meth_0x4a55d0(this,this->VFX_Parameter_vftable_673a20_2);
    }
  }
  else {
    if (is_control_complete == false) {
      if ((this->loop_count_3 == 0) || (this->seconds < 0.0 == (this->seconds == 0.0)))
      goto LAB_004a64f4;
      if (this->control_2 != (granny_control *)0x0) goto LAB_004a641c;
    }
    else {
LAB_004a641c:
      _GrannyFreeControl_4(control);
      this->loop_count_3 = this->loop_count;
      this->control = this->control_2;
      this->seconds = this->seconds2;
      this->loop_count = 0;
      this->seconds2 = 0.0;
      this->control_2 = (granny_control *)0x0;
      if (this->mbr_0xbc != 0) {
        ppvVar7 = (void **)meth_0x4a5ea0(this,this->VFX_Parameter_vftable_673a20_2);
        if (*ppvVar7 == (void *)0x0) {
          pvVar8 = operator_new(4);
          *ppvVar7 = pvVar8;
        }
        *(undefined4 *)*ppvVar7 = *(undefined4 *)this->mbr_0xbc;
                    /* WARNING: Subroutine does not return */
        _free((void *)this->mbr_0xbc);
      }
      meth_0x4a55d0(this,this->VFX_Parameter_vftable_673a20_2);
    }
    this->mbr_0x54 = this->mbr_0x7c;
    this->mbr_0x0 = 0;
    this->mbr_0x4 = 0;
    this->VFX_Parameter_vftable_673a20 = this->VFX_Parameter_vftable_673a20_2;
    this->anim_index = this->anim_index_2;
    if (this->mbr_0x90 == 0) {
      new_seconds = seconds;
    }
    else {
      _GrannyGetControlDuration_4(this->control);
      new_seconds = (int **)(float)(extraout_ST0_04 -
                                   ((float10)(float)seconds + (float10)(float)this->mbr_0x4));
    }
  }
  dVar3 = this->mbr_0x18;
  offset_4x4 = (const_granny_real32__)0x0;
  if (dVar3 != 0) {
    if ((int)this->mbr_0x1c < 0xd4) {
      temp_5f91a21224 = *(granny_matrix_4x4 **)(*(int *)(dVar3 + 0xc) + 0x20 + this->mbr_0x1c * 4);
    }
    else {
      temp_5f91a21224 = (granny_matrix_4x4 *)0x0;
    }
    offset_4x4 = (const_granny_real32__)((int)temp_5f91a21224 * 0x40 + *(int *)(dVar3 + 0x40));
  }
  Gfx_AnimationObject::UpdateWorldPose
            (this->animation_object,this->model_instance,this->world_pose,offset_4x4);
  world_pose_4x4_2 = _GrannyGetWorldPoseComposite4x4Array_4(this->world_pose);
  *(granny_matrix_4x4 **)&this->field_0x44 = world_pose_4x4_2;
  if (this->mbr_0x2c == 0) {
    world_pose_4x4 = _GrannyGetWorldPose4x4Array_4(this->world_pose);
    world_pose_4x4_r11 = (granny_real32 *)this->bone_matrices_4x4;
    for (uVar11 = (uint)(this->bone_count << 6) >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *world_pose_4x4_r11 = *(granny_real32 *)world_pose_4x4;
      world_pose_4x4 = (granny_matrix_4x4 *)((int)world_pose_4x4 + 4);
      world_pose_4x4_r11 = world_pose_4x4_r11 + 1;
    }
    for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
      *(undefined *)world_pose_4x4_r11 = *(undefined *)world_pose_4x4;
      world_pose_4x4 = (granny_matrix_4x4 *)((int)world_pose_4x4 + 1);
      world_pose_4x4_r11 = (granny_real32 *)((int)world_pose_4x4_r11 + 1);
    }
    puVar13 = *(undefined4 **)&this->field_0x44;
    puVar15 = (undefined4 *)this->mbr_0x48;
    for (uVar11 = (uint)(this->bone_count << 6) >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar15 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar15 = puVar15 + 1;
    }
    for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
      *(undefined *)puVar15 = *(undefined *)puVar13;
      puVar13 = (undefined4 *)((int)puVar13 + 1);
      puVar15 = (undefined4 *)((int)puVar15 + 1);
    }
  }
  else {
    dVar3 = this->mbr_0x20;
    dVar4 = this->mbr_0x28;
    pdVar12 = &DAT_00708338;
    pdVar14 = adStack_80;
    for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pdVar14 = *pdVar12;
      pdVar12 = pdVar12 + 1;
      pdVar14 = pdVar14 + 1;
    }
    dStack_6c = this->mbr_0x24;
    adStack_80[0] = dVar3;
    dStack_58 = dVar4;
    world_pose_4x4_2 = _GrannyGetWorldPose4x4Array_4(this->world_pose);
    uStack_8c = 0;
    if (this->bone_count != 0) {
      pgVar13 = (*world_pose_4x4_2)[0] + 2;
      do {
        paagVar5 = this->bone_matrices_4x4;
        iVar9 = (-8 - (int)world_pose_4x4_2) + (int)pgVar13;
        *(granny_real32 *)((int)paagVar5 + iVar9) = pgVar13[-2];
        *(granny_real32 *)((int)paagVar5 + iVar9 + 4) = pgVar13[-1];
        *(granny_real32 *)((int)paagVar5 + iVar9 + 8) = *pgVar13;
        *(undefined4 *)((int)paagVar5 + iVar9 + 0xc) = 0;
        *(granny_real32 *)((int)paagVar5 + iVar9 + 0x10) = pgVar13[2];
        *(granny_real32 *)((int)paagVar5 + iVar9 + 0x14) = pgVar13[3];
        gVar6 = pgVar13[4];
        *(undefined4 *)((int)paagVar5 + iVar9 + 0x1c) = 0;
        *(granny_real32 *)((int)paagVar5 + iVar9 + 0x18) = gVar6;
        *(granny_real32 *)((int)paagVar5 + iVar9 + 0x20) = pgVar13[6];
        *(granny_real32 *)((int)paagVar5 + iVar9 + 0x24) = pgVar13[7];
        gVar6 = pgVar13[8];
        *(undefined4 *)((int)paagVar5 + iVar9 + 0x2c) = 0;
        *(granny_real32 *)((int)paagVar5 + iVar9 + 0x28) = gVar6;
        *(float *)((int)paagVar5 + iVar9 + 0x30) = pgVar13[10] * (float)this->mbr_0x20;
        *(float *)((int)paagVar5 + iVar9 + 0x34) = pgVar13[0xb] * (float)this->mbr_0x24;
        fVar1 = pgVar13[0xc];
        fVar2 = (float)this->mbr_0x28;
        *(undefined4 *)((int)paagVar5 + iVar9 + 0x3c) = 0x3f800000;
        *(float *)((int)paagVar5 + iVar9 + 0x38) = fVar1 * fVar2;
        puVar13 = (undefined4 *)(*(int *)&this->field_0x44 + iVar9);
        puVar15 = auStack_34;
        for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar15 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar15 = puVar15 + 1;
        }
        thunk_FUN_00471943();
        uStack_8c = uStack_8c + 1;
        pgVar13 = pgVar13 + 0x10;
      } while (uStack_8c < (uint)this->bone_count);
    }
  }
  this->mbr_0x8 = this->control != (granny_control *)0x0;
  meth_0x4a5f20(this);
  if (this->control != (granny_control *)0x0) {
    ppvVar7 = (void **)meth_0x4a5ea0(this,this->VFX_Parameter_vftable_673a20);
    Gfx_AnimationObject::ProcessAnimationCues
              (this->animation_object,
               (VFX_Parameter__vftable_673a20 *)this->VFX_Parameter_vftable_673a20,this->anim_index,
               new_seconds,(uint)this->mbr_0x90,ppvVar7,&this->cls_0x4a67f0);
  }
  if (this->control_2 != (granny_control *)0x0) {
    Gfx_AnimationObject::ProcessAnimationCues
              (this->animation_object,
               (VFX_Parameter__vftable_673a20 *)this->VFX_Parameter_vftable_673a20_2,
               this->anim_index_2,new_seconds_2,(uint)this->mbr_0x90,(void **)&this->mbr_0xbc,
               &this->cls_0x4a67f0);
  }
  return;
}



cls_0x4a5be0 * __thiscall cls_0x4a5be0::cls_0x4a5be0(cls_0x4a5be0 *this,int param_1)

{
  granny_model_instance *model;
  granny_skeleton *pgVar1;
  granny_world_pose *pgVar2;
  granny_track_mask *pgVar3;
  granny_matrix_4x4 *paagVar4;
  void *pvVar5;
  undefined4 *puVar6;
  uint uVar7;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  granny_int32x bone_count;
  granny_file *unknown;
  
  puStack_8 = &LAB_00631d2c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->mbr_0x0 = 0;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->animation_object = *(Gfx_AnimationObject **)(param_1 + 0xc);
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 1;
  this->mbr_0x20 = 0x3f800000;
  this->mbr_0x24 = 0x3f800000;
  this->mbr_0x28 = 0x3f800000;
  this->mbr_0x2c = 0;
  this->control = (granny_control *)0x0;
  this->control_2 = (granny_control *)0x0;
  *(undefined4 *)&this->field_0x44 = 0;
  this->VFX_Parameter_vftable_673a20 = 0xffffffff;
  this->anim_index = 0xffffffff;
  this->mbr_0x54 = 0xffffffff;
  this->VFX_Parameter_vftable_673a20_3 = 0xffffffff;
  this->anim_index_3 = 0xffffffff;
  this->mbr_0x60 = 0xffffffff;
  this->granny_duration_2 = 0.0;
  this->granny_from_current_2 = false;
  this->loop_count_2 = 0;
  this->mbr_0x70 = 0;
  this->VFX_Parameter_vftable_673a20_2 = 0xffffffff;
  this->anim_index_2 = 0xffffffff;
  this->mbr_0x7c = 0xffffffff;
  this->granny_duration = 0.0;
  this->granny_from_current = false;
  this->loop_count = 0;
  this->speed = 1.0;
  this->mbr_0x90 = 0;
  this->seconds = 0.0;
  this->seconds2 = 0.0;
  this->loop_count_3 = 0;
  this->mbr_0xa4 = 0;
  this->mbr_0xa8 = 0;
  this->mbr_0xac = 0;
  local_4 = 0;
  cls_0x4a67f0::cls_0x4a67f0(&this->cls_0x4a67f0,param_1 + 0xb0);
  this->mbr_0xbc = 0;
  this->mbr_0xc0 = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  this->mbr_0xc4 = *(byte *)(param_1 + 0xc4);
  model = Gfx_AnimationObject::CreateModelInstance(this->animation_object);
  this->model_instance = model;
  pgVar1 = _GrannyGetSourceSkeleton_4(model);
  bone_count = pgVar1->BoneCount;
  this->bone_count = bone_count;
  pgVar2 = _GrannyNewWorldPose_4(bone_count);
  this->world_pose = pgVar2;
  pgVar3 = _GrannyNewTrackMask_8(1.0,this->bone_count);
  this->track_mask = pgVar3;
  paagVar4 = (granny_matrix_4x4 *)operator_new(this->bone_count << 6);
  this->bone_matrices_4x4 = paagVar4;
  pvVar5 = operator_new(this->bone_count << 6);
  this->mbr_0x48 = (dword)pvVar5;
  unknown = this->animation_object[1].granny_file;
  if (unknown != (granny_file *)0x0) {
    puVar6 = (undefined4 *)operator_new((uint)unknown->ConversionBuffer);
    this->mbr_0xc0 = (dword)puVar6;
    pvVar5 = unknown->ConversionBuffer;
    for (uVar7 = (uint)pvVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (uVar7 = (uint)pvVar5 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  ExceptionList = pvStack_c;
  return this;
}



void __thiscall cls_0x4a5be0::meth_0x548d10(cls_0x4a5be0 *this,granny_real32 speed)

{
  if (this->control != (granny_control *)0x0) {
    _GrannySetControlSpeed_8(this->control,speed);
  }
  if (this->control_2 != (granny_control *)0x0) {
    _GrannySetControlSpeed_8(this->control_2,speed);
    this->speed = speed;
    return;
  }
  this->speed = speed;
  return;
}


