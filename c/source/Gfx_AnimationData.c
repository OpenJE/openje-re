#include "../include/Gfx_AnimationData.h"

uint __thiscall
Gfx_AnimationData::LoadAnimationDataFromBuffer(void *this,int param_1,int param_2,float param_3)

{
  uint uVar1;
  granny_file *File;
  granny_file_info *pgVar2;
  int iVar3;
  Alignment *this_00;
  
  if (param_1 == 0) {
    uVar1 = FUN_00497120((byte *)"Gfx_AnimationData::LoadAnimationDataFromBuffer - 0 buffersize!\n")
    ;
    return uVar1 & 0xffffff00;
  }
  if (param_2 == 0) {
    uVar1 = FUN_00497120((byte *)"Gfx_AnimationData::LoadAnimationDataFromBuffer - NULL buffer\n");
    return uVar1 & 0xffffff00;
  }
  if (param_3 < 0.0 != (param_3 == 0.0)) {
    uVar1 = FUN_00497120((byte *)
                         "Gfx_AnimationData::LoadAnimationDataFromBuffer - invalid scale: %f\n");
    return uVar1 & 0xffffff00;
  }
                    /* WARNING: Load size is inaccurate */
  if (*this != 0) {
    uVar1 = FUN_00497120((byte *)
                         "Gfx_AnimationData::LoadAnimationDataFromBuffer - This object already contains animation data; unload it first!\n"
                        );
    return uVar1 & 0xffffff00;
  }
  File = _GrannyReadEntireFileFromMemory_8(param_1,(const_void__)param_2);
  *(granny_file **)this = File;
  if (File == (granny_file *)0x0) {
    uVar1 = FUN_00497120((byte *)"Gfx_AnimationData::LoadAnimationDataFromBuffer - Failed!");
    return uVar1 & 0xffffff00;
  }
  pgVar2 = _GrannyGetFileInfo_4(File);
  *(granny_file_info **)((int)this + 4) = pgVar2;
  TransformGrannyFileToLHS(param_3);
  iVar3 = *(int *)((int)this + 4);
  *(float *)((int)this + 0xc) = param_3;
  if (((*(int *)(iVar3 + 0x50) != 0) && (*(int *)(iVar3 + 0x54) != 0)) &&
     (*(int *)(iVar3 + 0x48) != 0)) {
    *(undefined4 *)((int)this + 8) = 0;
    if (*(int *)(iVar3 + 0x48) != 0) {
      do {
        this_00 = &DAT_006fadb0;
        uVar1 = 0;
        while( true ) {
          iVar3 = FUN_004a20e0(this_00,0,*(uint *)((int)this_00 + 0x14),
                               **(_String_base ***)
                                 (*(int *)(*(int *)((int)this + 4) + 0x4c) +
                                 *(int *)((int)this + 8) * 4));
          if (iVar3 == 0) break;
          uVar1 = uVar1 + 0x1c;
          this_00 = (Alignment *)((int)this_00 + 0x1c);
          if (0x6f < uVar1) {
            return CONCAT31((int3)((uint)iVar3 >> 8),1);
          }
        }
        *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      } while (*(uint *)((int)this + 8) < *(uint *)(*(int *)((int)this + 4) + 0x48));
    }
    uVar1 = FUN_00497120((byte *)
                         "Gfx_AnimationData::LoadAnimationDataFromBuffer - NO VALID ANIMATION DATA!"
                        );
    return uVar1 & 0xffffff00;
  }
  uVar1 = FUN_00497120((byte *)
                       "Gfx_AnimationData::LoadAnimationDataFromBuffer - NO ANIMATION DATA (AnimCount = 0 or Animations = NULL or TrackGroupCount = 0)!\n"
                      );
  return uVar1 & 0xffffff00;
}



undefined4 __thiscall
Gfx_AnimationData::LoadAnimationDataFromBuffer
          (Gfx_AnimationData *this,undefined4 param_2,undefined4 param_3)

{
  granny_file *granny_file;
  granny_file_info *granny_file_info;
  int iVar1;
  granny_int32x memory_size;
  uint uVar2;
  Alignment *this_00;
  granny_file **unaff_EDI;
  granny_file *in_stack_00000010;
  
  granny_file = _GrannyReadEntireFileFromMemory_8(memory_size,this);
  *unaff_EDI = granny_file;
  if (granny_file == (granny_file *)0x0) {
    uVar2 = FUN_00497120((byte *)"Gfx_AnimationData::LoadAnimationDataFromBuffer - Failed!");
    return uVar2 & 0xffffff00;
  }
  granny_file_info = _GrannyGetFileInfo_4(granny_file);
  unaff_EDI[1] = (granny_file *)granny_file_info;
  TransformGrannyFileToLHS((granny_real32)in_stack_00000010);
  granny_file = unaff_EDI[1];
  unaff_EDI[3] = in_stack_00000010;
  if (((granny_file[2].SourceMagicValue != (granny_grn_file_magic_value *)0x0) &&
      (granny_file[2].SectionCount != 0)) && (granny_file[2].IsByteReversed != 0)) {
    unaff_EDI[2] = (granny_file *)0x0;
    if (granny_file[2].IsByteReversed != 0) {
      do {
        this_00 = &DAT_006fadb0;
        uVar2 = 0;
        while( true ) {
          iVar1 = FUN_004a20e0(this_00,0,*(uint *)((int)this_00 + 0x14),
                               *(_String_base **)
                                (unaff_EDI[1][2].Header)->ExtraTags
                                [(int)((int)&unaff_EDI[2][-1].IsUserMemory + 2)]);
          if (iVar1 == 0) break;
          uVar2 = uVar2 + 0x1c;
          this_00 = (Alignment *)((int)this_00 + 0x1c);
          if (0x6f < uVar2) {
            return CONCAT31((int3)((uint)iVar1 >> 8),1);
          }
        }
        unaff_EDI[2] = (granny_file *)((int)&unaff_EDI[2]->IsByteReversed + 1);
      } while (unaff_EDI[2] < (granny_file *)unaff_EDI[1][2].IsByteReversed);
    }
    uVar2 = FUN_00497120((byte *)
                         "Gfx_AnimationData::LoadAnimationDataFromBuffer - NO VALID ANIMATION DATA!"
                        );
    return uVar2 & 0xffffff00;
  }
  uVar2 = FUN_00497120((byte *)
                       "Gfx_AnimationData::LoadAnimationDataFromBuffer - NO ANIMATION DATA (AnimCount = 0 or Animations = NULL or TrackGroupCount = 0)!\n"
                      );
  return uVar2 & 0xffffff00;
}


