typedef struct {
    granny_file * granny_file;
    granny_file_info * granny_file_info;
    granny_model * granny_model;
    granny_skeleton * Skeleton;
} Gfx_AnimationObject;
granny_model_instance * __thiscall CreateModelInstance(Gfx_AnimationObject * this);
void __thiscall UpdateWorldPose(Gfx_AnimationObject * this, granny_model_instance * model_instance, granny_world_pose * Result, const granny_real32 * offset_4x4);
undefined4 __thiscall LoadSkeletonFromBuffer(Gfx_AnimationObject * this, granny_int32x memory_size, const void * memory, granny_real32 desired_units_per_meter);
float10 __thiscall GetDuration(undefined4 param_1, uint param_2, int param_3);
undefined4 __thiscall ApplyAnimation(Gfx_AnimationObject * this, granny_model_instance * pModelInstance, granny_track_mask * pModelTrackMask, uint param_4, uint anim_index, int param_6, granny_real32 start_time);
uint __thiscall ProcessAnimationCues(VFX_Parameter::vftable_673a20 * param_1, uint anim_index, int * * param_3, undefined4 param_4, void * * param_5, cls_0x4a67f0 * param_6);
undefined __thiscall ClearAnimationCues(undefined4 param_1, uint param_2);
undefined __thiscall AddAnimationCue(uint param_1, uint param_2, undefined4 param_3, undefined4 * param_4);
undefined __thiscall DestroyAnimationGroup(int * param_1);
bool __thiscall LoadAnimationFileFromBuffer(undefined4 param_1, undefined4 * param_2, int param_3, float param_4);
