#include "../include/GameAnimationCache.h"

GameAnimationCache * __thiscall GameAnimationCache::GameAnimationCache(GameAnimationCache *this)

{
  AnimationCache::AnimationCache(&this->AnimationCache);
  (this->AnimationCache).vftptr_0x0 =
       (AnimationCache__vftable_6a0b24 *)&GameAnimationCache__vftable_66105c_0066105c;
  return this;
}



GameAnimationCache * __thiscall GameAnimationCache::~GameAnimationCache(GameAnimationCache *this)

{
  AnimationCache *pAVar1;
  
  (this->AnimationCache).vftptr_0x0 =
       (AnimationCache__vftable_6a0b24 *)&GameAnimationCache__vftable_66105c_0066105c;
  pAVar1 = AnimationCache::~AnimationCache(&this->AnimationCache);
  return (GameAnimationCache *)pAVar1;
}



undefined4 * __thiscall
GameAnimationCache::virt_meth_0x45c8c0(GameAnimationCache *this,byte param_1)

{
  ~GameAnimationCache(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



void __thiscall
GameAnimationCache::ReadAnimations
          (GameAnimationCache *this,void *param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  char *pcVar2;
  void **ppvVar3;
  undefined3 uVar4;
  bool bVar5;
  char *pcVar6;
  undefined4 *puVar7;
  cls_0x50db20 *pcVar8;
  undefined4 **_Source;
  int iVar9;
  uint unaff_retaddr;
  int in_stack_0000001c;
  uint in_stack_00000020;
  char in_stack_00000024;
  uint local_2a8;
  undefined4 *local_290;
  undefined *local_28c;
  GameAnimationCache *local_284;
  uint local_280;
  undefined local_27c [56];
  undefined local_244 [28];
  undefined4 local_228;
  _String_base local_1bc [4];
  void *local_1b8;
  dword local_1a8;
  dword local_1a4;
  void *local_19c;
  dword local_18c;
  uint local_188;
  void *local_164;
  dword local_154;
  uint local_150;
  void *local_12c;
  dword local_11c;
  uint local_118;
  void *local_f4;
  dword local_e4;
  uint local_e0;
  void *local_bc;
  dword local_ac;
  uint local_a8;
  void *local_68;
  dword local_58;
  uint local_54;
  undefined4 local_50;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  byte local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_0063026b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_27c._24_4_ = 0xf;
  local_27c._20_4_ = 0;
  local_27c._4_4_ = local_27c._4_4_ & 0xffffff00;
  uStack_3 = 0;
  uVar4 = uStack_3;
  uStack_3 = 0;
  if (in_stack_00000024 == '\0') {
    local_2a8 = 0;
    local_280 = 0x204;
  }
  else {
    local_2a8 = 0x1a0;
    local_280 = 0x1a1;
  }
  ExceptionList = &local_c;
  ppvVar3 = &local_c;
  local_284 = this;
  if (local_2a8 < local_280) {
    do {
      ExceptionList = ppvVar3;
      local_4 = 1;
      local_28c = &DAT_006f4170 + local_2a8 * 0x1c;
      local_244._24_4_ = 0xf;
      local_244._20_4_ = 0;
      local_244._4_4_ = local_244._4_4_ & 0xffffff00;
      pcVar2 = "_";
      do {
        pcVar6 = pcVar2;
        pcVar2 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
      ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_244,"_",(uint)(pcVar6 + -0x661164));
      local_4 = 2;
      __itoa(1,(char *)&local_228,10);
      pcVar2 = "0";
      do {
        pcVar6 = pcVar2;
        pcVar2 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
      cls_0x4d8d70::meth_0x4257d0
                ((cls_0x4d8d70 *)local_244,(undefined4 *)&DAT_00661160,(uint)(pcVar6 + -0x661160));
      puVar7 = &local_228;
      do {
        cVar1 = *(char *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      } while (cVar1 != '\0');
      cls_0x4d8d70::meth_0x4257d0
                ((cls_0x4d8d70 *)local_244,&local_228,(int)puVar7 - ((int)&local_228 + 1));
      pcVar8 = FUN_00425d70((cls_0x50db20 *)&stack0xfffffe60,(_String_base *)&param_2,(int)local_28c
                           );
      local_4 = 3;
      pcVar8 = FUN_00425d70((cls_0x50db20 *)&stack0xfffffe98,(_String_base *)pcVar8,(int)local_244);
      local_4 = 4;
      pcVar8 = FUN_00434600((cls_0x50db20 *)&stack0xffffff40,(_String_base *)pcVar8,
                            (undefined4 *)&DAT_00661158);
      local_4 = 5;
      ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_27c,(_String_base *)pcVar8,0,0xffffffff);
      if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_bc);
      }
      local_a8 = 0xf;
      local_ac = 0;
      local_bc = (void *)((uint)local_bc & 0xffffff00);
      if (0xf < local_150) {
                    /* WARNING: Subroutine does not return */
        _free(local_164);
      }
      local_150 = 0xf;
      local_154 = 0;
      local_164 = (void *)((uint)local_164 & 0xffffff00);
      local_4 = 2;
      if (0xf < local_188) {
                    /* WARNING: Subroutine does not return */
        _free(local_19c);
      }
      local_188 = 0xf;
      local_18c = 0;
      local_19c = (void *)((uint)local_19c & 0xffffff00);
      local_290 = (undefined4 *)0x0;
      puVar7 = FUN_0059b050((int)local_27c,(uint *)&local_290);
      if (puVar7 != (undefined4 *)0x0) {
LAB_0045d753:
        DAT_00707df0 = '\0';
        bVar5 = Gfx_AnimationObject::LoadAnimationFileFromBuffer
                          (param_1,local_2a8,local_290,(int)puVar7,10.0);
        if (!bVar5) {
          handle_fatal_error(
                            "GameAnimationCache::ReadAnimations() - Unable to load data from animation file buffer."
                            );
        }
        if (DAT_00707df0 != '\0') {
          FUN_00497120((byte *)
                       "GameAnimationCache::ReadAnimations() - LoadAnimationFileFromBuffer (%s) Granny error\n"
                      );
        }
                    /* WARNING: Subroutine does not return */
        _free(puVar7);
      }
      puVar7 = &local_50;
      for (iVar9 = 7; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      *(undefined2 *)puVar7 = 0;
      _Source = (undefined4 **)param_3;
      if (in_stack_00000020 < 0x10) {
        _Source = &param_3;
      }
      _strncpy((char *)&local_50,(char *)_Source,in_stack_0000001c - 3);
      puVar7 = &local_50;
      local_1a4 = 0xf;
      local_1a8 = 0;
      local_1b8 = (void *)((uint)local_1b8 & 0xffffff00);
      do {
        cVar1 = *(char *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      } while (cVar1 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)local_1bc,(char *)&local_50,(int)puVar7 - ((int)&local_50 + 1));
      local_4 = 6;
      pcVar8 = FUN_00425d70((cls_0x50db20 *)&stack0xffffff08,local_1bc,(int)local_28c);
      local_4 = 7;
      pcVar8 = FUN_00425d70((cls_0x50db20 *)&stack0xffffff94,(_String_base *)pcVar8,(int)local_244);
      local_4 = 8;
      pcVar8 = FUN_00434600((cls_0x50db20 *)&stack0xfffffed0,(_String_base *)pcVar8,
                            (undefined4 *)&DAT_00661158);
      local_4 = 9;
      ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_27c,(_String_base *)pcVar8,0,0xffffffff);
      if (0xf < local_118) {
                    /* WARNING: Subroutine does not return */
        _free(local_12c);
      }
      local_118 = 0xf;
      local_11c = 0;
      local_12c = (void *)((uint)local_12c & 0xffffff00);
      if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
        _free(local_68);
      }
      local_54 = 0xf;
      local_58 = 0;
      local_68 = (void *)((uint)local_68 & 0xffffff00);
      if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
        _free(local_f4);
      }
      local_e0 = 0xf;
      local_e4 = 0;
      local_f4 = (void *)((uint)local_f4 & 0xffffff00);
      local_4 = 2;
      if (0xf < local_1a4) {
                    /* WARNING: Subroutine does not return */
        _free(local_1b8);
      }
      local_1a4 = 0xf;
      local_1a8 = 0;
      local_1b8 = (void *)((uint)local_1b8 & 0xffffff00);
      puVar7 = FUN_0059b050((int)local_27c,(uint *)&local_290);
      if (puVar7 != (undefined4 *)0x0) goto LAB_0045d753;
      local_4 = 1;
      if (0xf < (uint)local_244._24_4_) {
                    /* WARNING: Subroutine does not return */
        _free((void *)local_244._4_4_);
      }
      local_2a8 = local_2a8 + 1;
      local_244._24_4_ = 0xf;
      local_244._20_4_ = 0;
      local_244._4_4_ = local_244._4_4_ & 0xffffff00;
      ppvVar3 = (void **)ExceptionList;
    } while (local_2a8 < local_280);
    uVar4 = uStack_3;
    if (0xf < (uint)local_27c._24_4_) {
                    /* WARNING: Subroutine does not return */
      _free((void *)local_27c._4_4_);
    }
  }
  uStack_3 = uVar4;
  local_4 = 1;
  local_27c._24_4_ = 0xf;
  local_27c._20_4_ = 0;
  local_27c._4_4_ = local_27c._4_4_ & 0xffffff00;
  if (in_stack_00000020 < 0x10) {
    ExceptionList = local_c;
    FUN_00616e15(local_10 ^ unaff_retaddr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(param_3);
}


#include "../include/GameAnimationCache.h"
