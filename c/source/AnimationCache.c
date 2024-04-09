#include "../include/AnimationCache.h"

void __thiscall AnimationCache::virt_meth_0x59afe0(AnimationCache *this)

{
  (*this->vftptr_0x0->FUN_00404b70_24)();
  if ((void *)this->mbr_0x1c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x1c);
  }
  return;
}



void __thiscall AnimationCache::Startup(AnimationCache *this)

{
  char cVar1;
  undefined4 **ppuVar2;
  undefined4 *puVar3;
  undefined4 **ppuVar4;
  undefined auStack_28 [4];
  void *pvStack_24;
  dword dStack_14;
  uint uStack_10;
  VFX_Parameter__vftable_673a20 *pVStack_c;
  undefined *puStack_8;
  dword dStack_4;
  
  dStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063a6b8;
  pVStack_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  ExceptionList = &pVStack_c;
  (*this->vftptr_0x0->FUN_00404b70_20)();
  ppuVar4 = (undefined4 **)DAT_006ff3c0;
  if (DAT_006ff3d4 < 0x10) {
    ppuVar4 = &DAT_006ff3c0;
  }
  uStack_10 = 0xf;
  dStack_14 = 0;
  pvStack_24 = (void *)((uint)pvStack_24 & 0xffffff00);
  ppuVar2 = ppuVar4;
  do {
    cVar1 = *(char *)ppuVar2;
    ppuVar2 = (undefined4 **)((int)ppuVar2 + 1);
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)auStack_28,(char *)ppuVar4,(int)ppuVar2 - ((int)ppuVar4 + 1));
  dStack_4 = 0;
  puVar3 = FUN_0059b050((int)auStack_28,&this->mbr_0x20);
  this->mbr_0x1c = (dword)puVar3;
  dStack_4 = 0xffffffff;
  if (0xf < uStack_10) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_24);
  }
  dStack_14 = 0;
  pvStack_24 = (void *)((uint)pvStack_24 & 0xffffff00);
  uStack_10 = 0xf;
  if (this->mbr_0x1c == 0) {
    handle_fatal_error("AnimationCache::Startup() - Could not load default skeleton.");
  }
  ExceptionList = puStack_8;
  return;
}



AnimationCache * __thiscall AnimationCache::~AnimationCache(AnimationCache *this)

{
  dword dVar1;
  int **ppiVar2;
  cls_0x4a5be0 *this_00;
  cls_0x4a1f30 *this_01;
  int iVar3;
  int **_Memory;
  int *piVar4;
  dword unaff_EBP;
  AnimationCache *local_1c;
  int *local_18 [2];
  undefined4 local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063a726;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &AnimationCache__vftable_6a0b24_006a0b24;
  dVar1 = this->mbr_0x18;
  local_4 = 1;
  while( true ) {
    local_1c = this;
    if (dVar1 == 0) {
      piVar4 = *(int **)(int *)this->mbr_0x8;
      if (piVar4 != (int *)this->mbr_0x8) {
        do {
          local_10 = *(undefined4 *)((int)piVar4 + 0x2c);
          this_01 = *(cls_0x4a1f30 **)((int)piVar4 + 0x28);
          cls_0x4e1df0::meth_0x59b2b0((cls_0x4e1df0 *)&this->mbr_0x4,local_18);
          if (this_01 != (cls_0x4a1f30 *)0x0) {
            cls_0x4a1f30::meth_0x4a4c10(this_01);
                    /* WARNING: Subroutine does not return */
            _free(this_01);
          }
          cls_0x4e1e50::meth_0x4e1e50((cls_0x4e1e50 *)&stack0xffffffdc);
          piVar4 = (int *)unaff_EBP;
        } while (unaff_EBP != this->mbr_0x8);
      }
      DAT_0070c658 = 0;
      ppiVar2 = (int **)this->mbr_0x14;
      if (ppiVar2 == (int **)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = *ppiVar2;
      }
      GUI::Interface::meth_0x4b9d60
                ((Interface *)&this->mbr_0x10,(int **)&local_1c,piVar4,(int *)ppiVar2);
                    /* WARNING: Subroutine does not return */
      _free((void *)this->mbr_0x14);
    }
    if ((int *)this->mbr_0x14 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)this->mbr_0x14;
    }
    ppiVar2 = (int **)this->mbr_0x14;
    this_00 = *(cls_0x4a5be0 **)(iVar3 + 8);
    if (ppiVar2 == (int **)0x0) {
      _Memory = (int **)0x0;
    }
    else {
      _Memory = (int **)*ppiVar2;
    }
    if (_Memory != ppiVar2) break;
    if (this_00 != (cls_0x4a5be0 *)0x0) {
      cls_0x4a5be0::meth_0x4a5d70(this_00);
                    /* WARNING: Subroutine does not return */
      _free(this_00);
    }
    dVar1 = this->mbr_0x18;
  }
  *_Memory[1] = (int)*_Memory;
  (*_Memory)[1] = (int)_Memory[1];
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



AnimationCache * __thiscall AnimationCache::AnimationCache(AnimationCache *this)

{
  dword dVar1;
  undefined local_19;
  Exception__vftable_64787c *local_14;
  char *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063a746;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &AnimationCache__vftable_6a0b24_006a0b24;
  *(undefined *)&this->mbr_0x4 = local_19;
  dVar1 = FUN_004e1fe0();
  this->mbr_0x8 = dVar1;
  *(undefined *)(dVar1 + 0x31) = 1;
  *(dword *)(this->mbr_0x8 + 4) = this->mbr_0x8;
  *(dword *)this->mbr_0x8 = this->mbr_0x8;
  *(dword *)(this->mbr_0x8 + 8) = this->mbr_0x8;
  this->mbr_0xc = 0;
  local_4 = 0;
  dVar1 = FUN_0056e0b0();
  this->mbr_0x14 = dVar1;
  this->mbr_0x18 = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (DAT_0070c658 != (AnimationCache *)0x0) {
    local_14 = &Exception__vftable_64787c_0064787c;
    local_10 = "AnimationCache object already exists.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_14,&DAT_006d8834);
  }
  DAT_0070c658 = this;
  this->mbr_0x1c = 0;
  this->mbr_0x20 = 0;
  ExceptionList = local_c;
  return this;
}



undefined4 * __thiscall AnimationCache::virt_meth_0x59bca0(AnimationCache *this,byte param_1)

{
  ~AnimationCache(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}



void __thiscall
AnimationCache::AcquireAnimObject(AnimationCache *this,undefined4 param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 **ppuVar3;
  cls_0x4f45e0 *this_00;
  undefined4 uVar4;
  int iVar5;
  void *unaff_EBP;
  undefined **ppuVar6;
  char *pcVar7;
  uint unaff_retaddr;
  uint in_stack_0000001c;
  undefined *in_stack_00000024;
  undefined auStack_90 [4];
  undefined uStack_8c;
  dword dStack_88;
  cls_0x4e1df0 *this_01;
  undefined4 local_60;
  undefined4 *local_5c;
  dword *local_58;
  int *piStack_54;
  undefined local_50 [44];
  undefined uStack_24;
  uint uStack_20;
  _String_base a_Stack_1c [4];
  void *pvStack_18;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063a773;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_58 = &this->mbr_0x4;
  local_4 = 0;
  ExceptionList = &local_c;
  local_5c = cls_0x4e1df0::meth_0x4e1f70((cls_0x4e1df0 *)local_58,(int)&param_1);
  if ((local_5c == (undefined4 *)this->mbr_0x8) ||
     (bVar1 = FUN_00433930((int)&param_1,(int)(local_5c + 3)), bVar1)) {
    local_60 = (cls_0x4f45e0 *)this->mbr_0x8;
    ppuVar3 = (undefined4 **)&local_60;
  }
  else {
    ppuVar3 = &local_5c;
  }
  puVar2 = *ppuVar3;
  if (puVar2 == (undefined4 *)this->mbr_0x8) {
    FUN_00425d70((cls_0x50db20 *)local_50,(_String_base *)&param_1,0x6ff3a0);
    local_4 = CONCAT31(local_4._1_3_,1);
    local_5c = (undefined4 *)0x0;
    puVar2 = FUN_0059b050((int)local_50,(uint *)&local_5c);
    if (puVar2 == (undefined4 *)0x0) {
      ppuVar3 = (undefined4 **)param_2;
      if (in_stack_0000001c < 0x10) {
        ppuVar3 = &param_2;
      }
      _strncpy((char *)&local_60,(char *)ppuVar3,3);
      local_60 = (cls_0x4f45e0 *)((uint)local_60 & 0xffffff);
      dStack_88 = 0x59bdbb;
      FUN_0062b180((LPCSTR)&local_60);
      iVar5 = 4;
      bVar1 = true;
      puVar2 = &local_60;
      ppuVar6 = &PTR_LAB_006a0c0c;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar1 = *(char *)puVar2 == *(char *)ppuVar6;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        ppuVar6 = (undefined **)((int)ppuVar6 + 1);
      } while (bVar1);
      if (!bVar1) {
        iVar5 = 4;
        bVar1 = true;
        puVar2 = &local_60;
        pcVar7 = "SH_";
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar1 = *(char *)puVar2 == *pcVar7;
          puVar2 = (undefined4 *)((int)puVar2 + 1);
          pcVar7 = pcVar7 + 1;
        } while (bVar1);
        if (!bVar1) {
          cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_50);
          cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)&param_1);
          goto LAB_0059bf82;
        }
      }
      local_5c = (undefined4 *)this->mbr_0x20;
      puVar2 = (undefined4 *)this->mbr_0x1c;
      ::cls_0x50db20::meth_0x401b20
                ((cls_0x50db20 *)local_50,(_String_base *)&DAT_006ff3bc,0,0xffffffff);
    }
    local_60 = (cls_0x4f45e0 *)operator_new(0x37c);
    local_4._0_1_ = 2;
    if (local_60 == (cls_0x4f45e0 *)0x0) {
      this_00 = (cls_0x4f45e0 *)0x0;
    }
    else {
      this_00 = cls_0x4f45e0::cls_0x4f45e0(local_60);
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    DAT_00707df0 = '\0';
    local_60 = this_00;
    uVar4 = Gfx_AnimationObject::LoadSkeletonFromBuffer
                      ((Gfx_AnimationObject *)this_00,(granny_int32x)local_5c,puVar2,10.0);
    if ((char)uVar4 == '\0') {
      handle_fatal_error(
                        "AnimationCache::AcquireAnimObject() - Unable to load skeleton data from buffer."
                        );
    }
    if (DAT_00707df0 != '\0') {
      FUN_00497120((byte *)
                   "AnimationCache::AcquireAnimObject() - LoadSkeletonFromBuffer (%s) Granny error\n"
                  );
    }
    if (local_60._3_1_ == '\0') {
                    /* WARNING: Subroutine does not return */
      _free(puVar2);
    }
    in_stack_00000024 = auStack_90;
    this_01 = (cls_0x4e1df0 *)0xf;
    uStack_8c = 0;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)auStack_90,(_String_base *)&param_2,0,0xffffffff);
    (*this->vftptr_0x0->virt_meth_0x59b120_16)(this);
    local_50._20_4_ = 0xf;
    local_50._16_4_ = 0;
    local_50._0_4_ = local_50._0_4_ & 0xffffff00;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&piStack_54,a_Stack_1c,0,0xffffffff);
    local_50._28_4_ = (VFX_Parameter__vftable_673a20 *)0x1;
    uStack_24 = 3;
    local_50._24_4_ = this_00;
    cls_0x4e1df0::meth_0x59b960(this_01,(undefined4 *)&stack0xffffff88,&piStack_54);
    if (0xf < (uint)local_50._20_4_) {
                    /* WARNING: Subroutine does not return */
      _free((void *)local_50._0_4_);
    }
    local_50._20_4_ = 0xf;
    local_50._16_4_ = 0;
    local_50._0_4_ = local_50._0_4_ & 0xffffff00;
    if ((dword *)0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      _free(unaff_EBP);
    }
  }
  else {
    local_60 = (cls_0x4f45e0 *)puVar2[10];
    puVar2[0xb] = puVar2[0xb] + 1;
  }
  if (0xf < local_4) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_18);
  }
LAB_0059bf82:
  ExceptionList = (void *)local_50._36_4_;
  FUN_00616e15(local_50._32_4_ ^ uStack_20);
  return;
}


#include "../include/AnimationCache.h"
