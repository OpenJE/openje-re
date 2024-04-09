#include "../include/Gfx_Texture.h"

Gfx_Texture * __thiscall Gfx_Texture::Gfx_Texture(Gfx_Texture *this,int param_1)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006362bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &Gfx_Texture__vftable_677370_00677370;
  this->mbr_0x1c = 0xf;
  this->mbr_0x18 = 0;
  *(undefined *)&this->mbr_0x8 = 0;
  local_4 = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x2c = 1;
  meth_0x535370(this,param_1);
  ExceptionList = local_c;
  return this;
}



void __thiscall Gfx_Texture::meth_0x51f280(Gfx_Texture *this)

{
  int **ppiVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006362bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &Gfx_Texture__vftable_677370_00677370;
  iVar5 = 0;
  local_4 = 0;
  if (this->mbr_0x24 != 0) {
    iVar4 = 0;
    if (0 < (int)this->mbr_0x28) {
      do {
        ppiVar1 = (int **)(this->mbr_0x24 + 0x44 + iVar5);
        piVar2 = *ppiVar1;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
          *ppiVar1 = (int *)0x0;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x48;
      } while (iVar4 < (int)this->mbr_0x28);
    }
    pvVar3 = (void *)this->mbr_0x24;
    if (pvVar3 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar3,0x48,*(int *)((int)pvVar3 + -4),cls_0x4d8d70::meth_0x4b2dd0);
                    /* WARNING: Subroutine does not return */
      _free((void *)((int)pvVar3 + -4));
    }
  }
  if (this->mbr_0x1c < 0x10) {
    this->mbr_0x18 = 0;
    this->mbr_0x1c = 0xf;
    *(undefined *)&this->mbr_0x8 = 0;
    ExceptionList = pvStack_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x8);
}



undefined4 * __thiscall Gfx_Texture::virt_meth_0x51f550(Gfx_Texture *this,byte param_1)

{
  meth_0x51f280(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}



int * __thiscall Gfx_Texture::meth_0x520100(Gfx_Texture *this,undefined4 param_1,void *param_2)

{
  int *piVar1;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  int in_stack_00000030;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00636328;
  local_c = ExceptionList;
  local_4 = 0;
  if ((-1 < in_stack_00000030) && (in_stack_00000030 < (int)this->mbr_0x28)) {
    ExceptionList = &local_c;
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&this->mbr_0x4,(_String_base *)&param_1,0,0xffffffff);
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)(this->mbr_0x24 + in_stack_00000030 * 0x48),(_String_base *)&param_1,
               0,0xffffffff);
    piVar1 = CreateTexture(this,in_stack_00000020,in_stack_00000024,in_stack_00000028,
                           in_stack_0000002c,2,0,in_stack_00000030);
    if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
    ExceptionList = local_c;
    return piVar1;
  }
  if (0xf < in_stack_0000001c) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  return (int *)0x8876086c;
}



undefined4 __thiscall Gfx_Texture::meth_0x534bf0(Gfx_Texture *this,int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((-1 < param_1) && (param_1 < (int)this->mbr_0x28)) {
    iVar3 = param_1 * 0x48;
    uVar2 = 0;
    if (*(char *)(this->mbr_0x24 + 0x40 + iVar3) != '\0') {
      *(undefined *)(this->mbr_0x24 + 0x40 + iVar3) = 0;
      piVar1 = *(int **)(this->mbr_0x24 + 0x44 + iVar3);
      uVar2 = (**(code **)(*piVar1 + 0x44))(piVar1,*(undefined4 *)(this->mbr_0x24 + iVar3 + 0x3c));
    }
    return uVar2;
  }
  return 0x8876086c;
}



void __thiscall Gfx_Texture::meth_0x534ce0(Gfx_Texture *this)

{
  int *piVar1;
  undefined4 uVar2;
  dword dVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int local_24;
  undefined4 auStack_20 [3];
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_24 = 0;
  if (0 < (int)this->mbr_0x28) {
    iVar6 = 0;
    do {
      piVar1 = *(int **)(iVar6 + 0x44 + this->mbr_0x24);
      if (piVar1 != (int *)0x0) {
        uVar2 = (**(code **)(*piVar1 + 0x34))(piVar1);
        *(undefined4 *)(iVar6 + 0x30 + this->mbr_0x24) = uVar2;
        *(undefined4 *)(iVar6 + 0x28 + this->mbr_0x24) = 0;
        dVar3 = this->mbr_0x24;
        uVar5 = 0;
        if (*(int *)(iVar6 + 0x30 + dVar3) != 0) {
          do {
            piVar1 = *(int **)(iVar6 + 0x44 + dVar3);
            iVar4 = (**(code **)(*piVar1 + 0x38))(piVar1,uVar5,auStack_20);
            if (-1 < iVar4) {
              if (uVar5 == 0) {
                *(undefined4 *)(iVar6 + 0x1c + this->mbr_0x24) = uStack_8;
                *(undefined4 *)(iVar6 + 0x20 + this->mbr_0x24) = uStack_4;
                *(undefined4 *)(iVar6 + 0x34 + this->mbr_0x24) = auStack_20[0];
                *(undefined4 *)(iVar6 + 0x38 + this->mbr_0x24) = uStack_14;
                iVar4 = iVar6 + this->mbr_0x24;
                FUN_00503450(*(int *)(iVar4 + 0x34),(undefined4 *)(iVar4 + 0x24),(undefined4 *)0x0);
                *(int *)(iVar6 + 0x2c + this->mbr_0x24) = iStack_10;
              }
              piVar1 = (int *)(iVar6 + 0x28 + this->mbr_0x24);
              *piVar1 = *piVar1 + iStack_10;
            }
            dVar3 = this->mbr_0x24;
            uVar5 = uVar5 + 1;
          } while (uVar5 < *(uint *)(iVar6 + 0x30 + dVar3));
        }
      }
      local_24 = local_24 + 1;
      iVar6 = iVar6 + 0x48;
    } while (local_24 < (int)this->mbr_0x28);
  }
  return;
}



int * __thiscall
Gfx_Texture::CreateTexture
          (Gfx_Texture *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_5,undefined4 param_6,int param_7)

{
  int *piVar1;
  
  if ((param_7 < 0) || ((int)this->mbr_0x28 <= param_7)) {
    return (int *)0x8876086c;
  }
  piVar1 = (int *)(this->mbr_0x24 + 0x44 + param_7 * 0x48);
  if (*piVar1 != 0) {
    FUN_00497120((byte *)"Gfx_Texture: Must release texture before creating a new one");
    return (int *)0x8876086c;
  }
  piVar1 = (int *)(**(code **)(*DAT_00708300 + 0x50))
                            (DAT_00708300,param_1,param_2,param_3,param_6,param_4,param_5,piVar1);
  if (-1 < (int)piVar1) {
    meth_0x534ce0(this);
    return piVar1;
  }
  FUN_005fb742((int)piVar1);
  FUN_00497120((byte *)"Gfx_Texture::CreateTexture() failed (%x %s)\n");
  return piVar1;
}



int * __thiscall
Gfx_Texture::LoadTextureFrameFromBuffer
          (Gfx_Texture *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,
          undefined4 param_8,int param_9)

{
  int **ppiVar1;
  int *piVar2;
  undefined local_1c [28];
  
  if ((param_9 < 0) || ((int)this->mbr_0x28 <= param_9)) {
    return (int *)0x8876086c;
  }
  ppiVar1 = (int **)(this->mbr_0x24 + 0x44 + param_9 * 0x48);
  piVar2 = *ppiVar1;
  if ((piVar2 != (int *)0x0) && (piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *ppiVar1 = (int *)0x0;
  }
  piVar2 = (int *)FUN_005cfb5f(DAT_00708300,param_1,param_2,0xffffffff,0xffffffff,param_5,param_8,
                               param_3,param_4,param_6,param_7,0,local_1c,0,
                               this->mbr_0x24 + 0x44 + param_9 * 0x48);
  if (-1 < (int)piVar2) {
    meth_0x534ce0(this);
    return piVar2;
  }
  FUN_005fb742((int)piVar2);
  FUN_00497120((byte *)"Gfx_Texture::LoadTextureFrameFromBuffer() failed to load (%x %s)\n");
  return piVar2;
}



int __thiscall
Gfx_Texture::LockRect
          (Gfx_Texture *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((-1 < param_5) && (param_5 < (int)this->mbr_0x28)) {
    iVar3 = param_5 * 0x48;
    piVar1 = *(int **)(this->mbr_0x24 + 0x44 + iVar3);
    iVar2 = (**(code **)(*piVar1 + 0x40))(piVar1,param_1,param_2,param_3);
    *(undefined *)(this->mbr_0x24 + 0x40 + iVar3) = 1;
    if (iVar2 < 0) {
      FUN_005fb742(iVar2);
      FUN_00497120((byte *)"Gfx_Texture::LockRect() failed %s (%x %s)\n");
      *(undefined *)(this->mbr_0x24 + 0x40 + iVar3) = 0;
    }
    *(undefined4 *)(this->mbr_0x24 + 0x3c + iVar3) = param_4;
    return iVar2;
  }
  return -0x7789f794;
}



undefined __thiscall
Gfx_Texture::CopyRect
          (Gfx_Texture *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4,
          undefined4 param_5,int param_6,int param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *unaff_EBX;
  int *unaff_EBP;
  uint *unaff_ESI;
  int *unaff_EDI;
  undefined unaff_retaddr;
  
  iVar3 = param_7;
  if ((((-1 < param_6) && (param_6 < *(int *)(param_3 + 0x28))) && (-1 < param_7)) &&
     (param_7 < (int)this->mbr_0x28)) {
    piVar1 = *(int **)(*(int *)(param_3 + 0x24) + 0x44 + param_6 * 0x48);
    param_6 = CONCAT31(param_6._1_3_,1);
    iVar2 = (**(code **)(*piVar1 + 0x3c))(piVar1,param_4,&param_4);
    if (iVar2 < 0) {
      FUN_005fb742(iVar2);
      FUN_00497120((byte *)"Gfx_Texture::CopyRect - Get Src mip-level failed %s (%x %s)\n");
      iVar3 = param_4;
    }
    piVar1 = *(int **)(this->mbr_0x24 + 0x44 + iVar3 * 0x48);
    iVar3 = (**(code **)(*piVar1 + 0x3c))(piVar1,unaff_EBP,&stack0x00000000);
    if (iVar3 < 0) {
      unaff_retaddr = 0;
      FUN_005fb742(iVar3);
      FUN_00497120((byte *)"Gfx_Texture::CopyRect - Get Dest mip-level failed %s (%x %s)\n");
    }
    iVar3 = FUN_005cefdc(unaff_EDI,(int *)0x0,unaff_ESI,unaff_EBP,(int *)0x0,unaff_EBX,(int *)0x5,0)
    ;
    if (iVar3 < 0) {
      unaff_retaddr = 0;
      FUN_005fb742(iVar3);
      FUN_00497120((byte *)"Gfx_Texture::CopyRect - Loading Surface failed %s (%x %s)\n");
    }
    if (unaff_EDI != (int *)0x0) {
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    }
    if (unaff_EBP != (int *)0x0) {
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
    }
    return unaff_retaddr;
  }
  return 0;
}



void __thiscall Gfx_Texture::Clear(Gfx_Texture *this)

{
  int *piVar1;
  dword dVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  int local_14;
  int local_10;
  int local_8;
  undefined4 *puStack_4;
  
  local_14 = 0;
  if (0 < (int)this->mbr_0x28) {
    local_10 = 0;
    do {
      piVar1 = *(int **)(this->mbr_0x24 + 0x44 + local_10);
      iVar4 = (**(code **)(*piVar1 + 0x40))(piVar1,0,&local_8,0,0);
      if (iVar4 < 0) {
        FUN_005fb742(iVar4);
        FUN_00497120((byte *)"Gfx_Texture::Clear - LockRect() failed: %s (%x %s)\n");
      }
      else {
        dVar2 = this->mbr_0x24;
        uVar3 = *(uint *)(dVar2 + 0x24 + local_10);
        iVar4 = dVar2 + local_10;
        uVar8 = 0;
        puVar7 = puStack_4;
        if (*(int *)(dVar2 + 0x20 + local_10) != 0) {
          do {
            uVar5 = *(int *)(iVar4 + 0x1c) * (uVar3 >> 3);
            puVar9 = puVar7;
            for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar9 = 0;
              puVar9 = puVar9 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined *)puVar9 = 0;
              puVar9 = (undefined4 *)((int)puVar9 + 1);
            }
            puVar7 = (undefined4 *)((int)puVar7 + local_8);
            iVar4 = this->mbr_0x24 + local_10;
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(uint *)(iVar4 + 0x20));
        }
        piVar1 = *(int **)(this->mbr_0x24 + 0x44 + local_10);
        (**(code **)(*piVar1 + 0x44))(piVar1,0);
      }
      local_14 = local_14 + 1;
      local_10 = local_10 + 0x48;
    } while (local_14 < (int)this->mbr_0x28);
  }
  return;
}



int __thiscall
Gfx_Texture::UpdateDefaultTexture(Gfx_Texture *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  int unaff_EBX;
  int iVar2;
  int iVar3;
  
  if ((((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x28))) && (-1 < param_3)) &&
     (param_3 < (int)this->mbr_0x28)) {
    iVar3 = -0x7789f794;
    if (*(int *)(this->mbr_0x24 + 0x38 + param_3 * 0x48) == 0) {
      iVar2 = param_2 * 0x48;
      if (*(int *)(*(int *)(param_1 + 0x24) + 0x38 + iVar2) == 2) {
        piVar1 = *(int **)(*(int *)(param_1 + 0x24) + iVar2 + 0x44);
        iVar3 = (**(code **)(*piVar1 + 0x48))(piVar1,0);
        if (iVar3 < 0) {
          FUN_005fb742(iVar3);
          FUN_00497120((byte *)"UpdateDefaultTexture() - AddDirtyRect failed %s (%x %s)\n");
        }
        iVar3 = (**(code **)(*DAT_00708300 + 0x74))
                          (DAT_00708300,*(undefined4 *)(*(int *)(unaff_EBX + 0x24) + 0x44 + iVar2),
                           *(undefined4 *)(this->mbr_0x24 + 0x44 + param_3 * 0x48));
        if (iVar3 < 0) {
          FUN_005fb742(iVar3);
          FUN_00497120((byte *)"Gfx_Texture::UpdateDefaultTexture() failed %s (%x %s)\n");
        }
      }
    }
    return iVar3;
  }
  return -0x7789f794;
}



void __thiscall Gfx_Texture::meth_0x535370(Gfx_Texture *this,int param_1)

{
  int **ppiVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063715b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (this->mbr_0x24 != 0) {
    local_10 = 0;
    ExceptionList = &pvStack_c;
    if (0 < (int)this->mbr_0x28) {
      iVar4 = 0;
      ExceptionList = &pvStack_c;
      do {
        ppiVar1 = (int **)(this->mbr_0x24 + 0x44 + iVar4);
        piVar3 = *ppiVar1;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
          *ppiVar1 = (int *)0x0;
        }
        local_10 = local_10 + 1;
        iVar4 = iVar4 + 0x48;
      } while (local_10 < (int)this->mbr_0x28);
    }
    pvVar2 = (void *)this->mbr_0x24;
    if (pvVar2 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar2,0x48,*(int *)((int)pvVar2 + -4),cls_0x4d8d70::meth_0x4b2dd0);
                    /* WARNING: Subroutine does not return */
      _free((void *)((int)pvVar2 + -4));
    }
    this->mbr_0x24 = 0;
  }
  if (0 < param_1) {
    piVar3 = (int *)operator_new(param_1 * 0x48 + 4);
    uStack_4 = 0;
    if (piVar3 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = piVar3 + 1;
      *piVar3 = param_1;
      _eh_vector_constructor_iterator_
                (piVar5,0x48,param_1,::cls_0x50db20::cls_0x50db20,cls_0x4d8d70::meth_0x4b2dd0);
    }
    this->mbr_0x24 = (dword)piVar5;
    if (piVar5 != (int *)0x0) {
      this->mbr_0x28 = param_1;
      if (param_1 < 1) {
        ExceptionList = pvStack_c;
        return;
      }
      iVar4 = 0;
      do {
        *(undefined4 *)(iVar4 + 0x1c + this->mbr_0x24) = 0;
        *(undefined4 *)(iVar4 + 0x20 + this->mbr_0x24) = 0;
        *(undefined4 *)(iVar4 + 0x24 + this->mbr_0x24) = 0;
        *(undefined4 *)(iVar4 + 0x28 + this->mbr_0x24) = 0;
        *(undefined4 *)(iVar4 + 0x34 + this->mbr_0x24) = 0;
        *(undefined4 *)(iVar4 + 0x38 + this->mbr_0x24) = 1;
        *(undefined4 *)(iVar4 + 0x3c + this->mbr_0x24) = 0;
        *(undefined *)(iVar4 + 0x40 + this->mbr_0x24) = 0;
        *(undefined4 *)(iVar4 + 0x44 + this->mbr_0x24) = 0;
        iVar4 = iVar4 + 0x48;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      ExceptionList = pvStack_c;
      return;
    }
  }
  this->mbr_0x28 = 0;
  ExceptionList = pvStack_c;
  return;
}



void __thiscall
Gfx_Texture::LoadTextureFrameFromFile
          (Gfx_Texture *this,undefined4 param_1,int *param_2,undefined4 param_3,void *param_4,
          undefined4 param_5,undefined4 param_6,uint param_7,undefined4 param_8,uint param_9,
          undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
          int param_14)

{
  int *piVar1;
  int **ppiVar2;
  int iVar3;
  uint unaff_retaddr;
  cls_0x4d8d70 cStack_48;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006371a0;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_4 = 0;
  if ((param_14 < 0) || ((int)this->mbr_0x28 <= param_14)) {
    if (0xf < param_7) {
      ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
  }
  else {
    ppiVar2 = (int **)(this->mbr_0x24 + 0x44 + param_14 * 0x48);
    piVar1 = *ppiVar2;
    ExceptionList = &local_c;
    if ((piVar1 != (int *)0x0) && (ExceptionList = &local_c, piVar1 != (int *)0x0)) {
      ExceptionList = &local_c;
      (**(code **)(*piVar1 + 8))(piVar1);
      *ppiVar2 = (int *)0x0;
    }
    ppiVar2 = (int **)param_2;
    if (param_7 < 0x10) {
      ppiVar2 = &param_2;
    }
    iVar3 = FUN_005cfbdf(DAT_00708300,(LPCWSTR)ppiVar2);
    if (iVar3 < 0) {
      cls_0x4d8d70::meth_0x401d20
                (&cStack_48,"Gfx_Texture::LoadTextureFrameFromFile() cannot load: ");
      local_4 = CONCAT31(local_4._1_3_,1);
      cls_0x4d8d70::meth_0x4256e0(&cStack_48,(int)&param_1,0,0xffffffff);
      FUN_005fb742(iVar3);
      FUN_00497120((byte *)"Gfx_Texture::LoadTextureFrameFromFile() failed to load: %s (%x %s)\n");
      if (0xf < cStack_48.mbr_0x18) {
                    /* WARNING: Subroutine does not return */
        _free((void *)cStack_48.mbr_0x4);
      }
    }
    else {
      meth_0x534ce0(this);
    }
    if (0xf < param_7) {
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall
Gfx_Texture::meth_0x535850
          (Gfx_Texture *this,char *param_1,uint param_2,VFX_Parameter__vftable_673a20 *param_3,
          uint param_4,dword param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int **ppiVar2;
  int *piVar3;
  dword dVar4;
  uint unaff_retaddr;
  dword in_stack_fffffb6c;
  int *in_stack_fffffb70;
  dword in_stack_fffffb74;
  void *in_stack_fffffb78;
  dword in_stack_fffffb7c;
  dword in_stack_fffffb80;
  uint in_stack_fffffb84;
  VFX_Parameter__vftable_673a20 *pVVar5;
  uint uVar6;
  dword dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  dword dVar10;
  dword local_44c;
  cls_0x401b00 local_43c;
  undefined local_42c [1052];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = -1;
  puStack_8 = &LAB_006371c6;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  if ((((((7 < param_2) && (*param_1 == 'A')) && (param_1[1] == 'N')) &&
       ((param_1[2] == 'M' && (param_1[3] == 'T')))) &&
      ((param_1[4] == 'V' && ((param_1[5] == '1' && (param_1[6] == '.')))))) && (param_1[7] == '0'))
  {
    local_44c = 0;
    ExceptionList = &local_c;
    cls_0x401b00::cls_0x401b00(&local_43c);
    local_4 = 0;
    while ((0 < (int)param_2 && (uVar1 = FUN_00534c70(param_1,param_2), (char)uVar1 != '\0'))) {
      if ((local_44c != 0) &&
         (uVar1 = FUN_00512de0(local_42c + 0x1c," \n\t\r"), (char)uVar1 == '\0')) {
        cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_42c,local_42c + 0x1c);
        local_4._0_1_ = 1;
        cls_0x401b00::meth_0x49ae10(&local_43c,(_String_base *)local_42c);
        local_4 = (uint)local_4._1_3_ << 8;
        cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_42c);
      }
      local_44c = local_44c + 1;
    }
    if (0 < (int)local_43c.mbr_0x8) {
      meth_0x535370(this,local_43c.mbr_0x8);
      dVar4 = 0;
      ppiVar2 = (int **)cls_0x401b00::meth_0x4014f0(&local_43c,&local_43c.mbr_0xc);
      piVar3 = *ppiVar2;
      if (piVar3 != (int *)local_43c.mbr_0x4) {
        do {
          pVVar5 = param_3;
          uVar6 = param_4;
          dVar7 = param_5;
          uVar1 = param_6;
          uVar8 = param_7;
          uVar9 = param_8;
          dVar10 = dVar4;
          ::cls_0x50db20::cls_0x50db20
                    ((cls_0x50db20 *)&stack0xfffffb6c,(_String_base *)(piVar3 + 2));
          LoadTextureFrameFromFile
                    (this,in_stack_fffffb6c,in_stack_fffffb70,in_stack_fffffb74,in_stack_fffffb78,
                     in_stack_fffffb7c,in_stack_fffffb80,in_stack_fffffb84,pVVar5,uVar6,dVar7,uVar1,
                     uVar8,uVar9,dVar10);
          piVar3 = (int *)*piVar3;
          dVar4 = dVar4 + 1;
        } while (piVar3 != (int *)local_43c.mbr_0x4);
      }
    }
    cls_0x401b00::meth_0x49a870(&local_43c);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall
Gfx_Texture::meth_0x535a80
          (Gfx_Texture *this,char *param_1,uint param_2,undefined4 param_3,uint param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  ::cls_0x50db20::meth_0x401a40((cls_0x50db20 *)&this->mbr_0x4,0,0xffffffff);
  this->mbr_0x20 = 0;
  meth_0x535370(this,1);
  if ((((((7 < param_2) && (*param_1 == 'A')) && (param_1[1] == 'N')) &&
       ((param_1[2] == 'M' && (param_1[3] == 'T')))) &&
      ((param_1[4] == 'V' && ((param_1[5] == '1' && (param_1[6] == '.')))))) &&
     ((param_1[7] == '0' &&
      (iVar1 = meth_0x535850(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8),
      -1 < iVar1)))) {
    return;
  }
  meth_0x535370(this,1);
  LoadTextureFrameFromBuffer(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0)
  ;
  return;
}



undefined4 __thiscall
Gfx_Texture::meth_0x535b40(Gfx_Texture *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 **ppuVar1;
  FILE *_File;
  size_t _ElementSize;
  char *_DstBuf;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  uint in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006371d8;
  local_c = ExceptionList;
  local_4 = 0;
  ppuVar1 = (undefined4 **)param_2;
  if (in_stack_0000001c < 0x10) {
    ppuVar1 = &param_2;
  }
  ExceptionList = &local_c;
  _File = (FILE *)FUN_00618d62((char *)ppuVar1,"rb");
  if (_File == (FILE *)0x0) {
    if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
    ExceptionList = local_c;
    return 0x8876086c;
  }
  _fseek(_File,0,2);
  _ElementSize = _ftell(_File);
  if ((int)_ElementSize < 1) {
    _fclose(_File);
    if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
  }
  else {
    _DstBuf = (char *)operator_new(_ElementSize + 1);
    if (_DstBuf != (char *)0x0) {
      _fseek(_File,0,0);
      _fread(_DstBuf,_ElementSize,1,_File);
      _DstBuf[_ElementSize] = '\0';
      meth_0x535850(this,_DstBuf,_ElementSize + 1,in_stack_00000020,in_stack_00000024,
                    in_stack_00000028,in_stack_0000002c,in_stack_00000030,in_stack_00000034);
                    /* WARNING: Subroutine does not return */
      _free(_DstBuf);
    }
    _fclose(_File);
    if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
  }
  ExceptionList = local_c;
  return 0x8876086c;
}



void __thiscall Gfx_Texture::meth_0x535cc0(Gfx_Texture *this,undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  undefined4 ***pppuVar4;
  int iVar5;
  undefined4 **ppuVar6;
  VFX_Parameter *this_00;
  uint unaff_retaddr;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  VFX_Parameter__vftable_673a20 *in_stack_00000020;
  VFX_Parameter__vftable_673a20 *in_stack_00000024;
  dword in_stack_00000028;
  dword in_stack_0000002c;
  undefined *in_stack_00000030;
  undefined *in_stack_00000034;
  dword in_stack_ffffff8c;
  uint in_stack_ffffff90;
  int *piVar7;
  undefined4 *in_stack_ffffff94;
  void *in_stack_ffffff98;
  dword in_stack_ffffff9c;
  dword dVar8;
  uint uVar9;
  undefined *puVar10;
  undefined *puVar11;
  dword dVar12;
  undefined4 ***local_28 [4];
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00637200;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  local_4 = 0;
  ExceptionList = &local_c;
  ::cls_0x50db20::meth_0x401a40((cls_0x50db20 *)&this->mbr_0x4,0,0xffffffff);
  this->mbr_0x20 = 0;
  meth_0x535370(this,1);
  puVar11 = in_stack_00000034;
  if (3 < in_stack_00000018) {
    ppuVar6 = (undefined4 **)param_2;
    if (in_stack_0000001c < 0x10) {
      ppuVar6 = &param_2;
    }
    pcVar1 = (char *)((int)ppuVar6 + (in_stack_00000018 - 4));
    local_14 = 0xf;
    local_18 = 0;
    local_28[0] = (undefined4 ***)((uint)local_28[0] & 0xffffff00);
    pcVar3 = pcVar1;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffffd4,pcVar1,(int)pcVar3 - (int)(pcVar1 + 1));
    local_4 = CONCAT31(local_4._1_3_,1);
    pppuVar4 = local_28[0];
    if (local_14 < 0x10) {
      pppuVar4 = local_28;
    }
    iVar5 = VFX_Parameter::meth_0x619e6e(this_00,(byte *)pppuVar4);
    if (iVar5 == 0) {
      in_stack_00000034 = &stack0xffffff90;
      in_stack_ffffff94 = (undefined4 *)((uint)in_stack_ffffff94 & 0xffffff00);
      ::cls_0x50db20::meth_0x401b20
                ((cls_0x50db20 *)&stack0xffffff90,(_String_base *)&param_1,0,0xffffffff);
      in_stack_ffffff8c = 0x535dc6;
      iVar5 = meth_0x535b40(this,in_stack_ffffff90,in_stack_ffffff94);
      if (-1 < iVar5) {
        if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
          _free(local_28[0]);
        }
        local_14 = 0xf;
        local_18 = 0;
        local_28[0] = (undefined4 ***)((uint)local_28[0] & 0xffffff00);
        if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
          _free(param_2);
        }
        goto LAB_00535e94;
      }
    }
    local_4 = local_4 & 0xffffff00;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28[0]);
    }
  }
  meth_0x535370(this,1);
  dVar12 = 0;
  uVar9 = 0xf;
  dVar8 = 0;
  piVar7 = (int *)(in_stack_ffffff90 & 0xffffff00);
  puVar10 = in_stack_00000030;
  in_stack_00000030 = &stack0xffffff8c;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&stack0xffffff8c,(_String_base *)&param_1,0,0xffffffff);
  LoadTextureFrameFromFile
            (this,in_stack_ffffff8c,piVar7,in_stack_ffffff94,in_stack_ffffff98,in_stack_ffffff9c,
             dVar8,uVar9,in_stack_00000020,(uint)in_stack_00000024,in_stack_00000028,
             in_stack_0000002c,puVar10,puVar11,dVar12);
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
LAB_00535e94:
  ExceptionList = local_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}


#include "../include/Gfx_Texture.h"
