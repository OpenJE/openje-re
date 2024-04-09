#include "../include/Gfx_Water.h"

void __thiscall Gfx_Water::meth_0x49eac0(Gfx_Water *this,undefined4 param_1,void *param_2)

{
  uint in_stack_0000001c;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006318a8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&this->field_0x7c,(_String_base *)&param_1,0,0xffffffff);
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  ExceptionList = local_c;
  return;
}



void __thiscall Gfx_Water::meth_0x49eb20(Gfx_Water *this,undefined4 param_1,void *param_2)

{
  uint in_stack_0000001c;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006318a8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&this->field_0x40,(_String_base *)&param_1,0,0xffffffff);
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  ExceptionList = local_c;
  return;
}



void __thiscall Gfx_Water::meth_0x49eb80(Gfx_Water *this,undefined4 param_1,void *param_2)

{
  uint in_stack_0000001c;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006318a8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&this->field_0x60,(_String_base *)&param_1,0,0xffffffff);
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  ExceptionList = local_c;
  return;
}



int __thiscall Gfx_Water::meth_0x51c8e0(Gfx_Water *this,uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((int)param_1 < 0) {
    do {
      param_1 = param_1 + this->mbr_0x38;
    } while ((int)param_1 < 0);
  }
  if (param_2 < 0) {
    do {
      param_2 = param_2 + this->mbr_0x3c;
    } while (param_2 < 0);
  }
  if (this->mbr_0xc0 != 0) {
    uVar1 = this->mbr_0x38;
    uVar3 = uVar1 & 0x80000007;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
    }
    uVar2 = param_1 & 0x80000007;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
    }
    if ((1 << ((byte)uVar2 & 0x1f) &
        (uint)(*(char *)(((int)(param_1 + ((int)param_1 >> 0x1f & 7U)) >> 3) +
                        this->mbr_0xc0 +
                        ((uint)(uVar3 != 0) + ((int)(uVar1 + ((int)uVar1 >> 0x1f & 7U)) >> 3)) *
                        param_2) == '\0')) != 0) {
      return -1;
    }
  }
  return (param_2 % (int)this->mbr_0x3c) * this->mbr_0x38 + (int)param_1 % (int)this->mbr_0x38;
}



void __thiscall Gfx_Water::meth_0x51c990(Gfx_Water *this,uint param_1,int param_2,float param_3)

{
  int iVar1;
  
  if ((((-1 < (int)param_1) && ((int)param_1 < (int)this->mbr_0x38)) && (-1 < param_2)) &&
     (param_2 < (int)this->mbr_0x3c)) {
    iVar1 = meth_0x51c8e0(this,param_1,param_2);
    if (-1 < iVar1) {
      *(float *)(this->mbr_0xb4 + 4 + iVar1 * 8) =
           *(float *)(this->mbr_0xb4 + 4 + iVar1 * 8) - param_3;
    }
  }
  return;
}



void __thiscall Gfx_Water::meth_0x51c9e0(Gfx_Water *this,uint param_1,int param_2,float param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  
  fVar4 = param_3 * 0.5;
  fVar5 = fVar4 * 0.5;
  meth_0x51c990(this,param_1,param_2,param_3);
  uVar1 = param_1 - 1;
  meth_0x51c990(this,uVar1,param_2,fVar4);
  uVar2 = param_1 + 1;
  meth_0x51c990(this,uVar2,param_2,fVar4);
  iVar3 = param_2 + -1;
  meth_0x51c990(this,param_1,iVar3,fVar4);
  iVar6 = param_2 + 1;
  meth_0x51c990(this,param_1,iVar6,fVar4);
  meth_0x51c990(this,uVar1,iVar3,fVar5);
  meth_0x51c990(this,uVar2,iVar6,fVar5);
  meth_0x51c990(this,uVar2,iVar3,fVar5);
  meth_0x51c990(this,uVar1,iVar6,fVar5);
  return;
}



void __thiscall
Gfx_Water::meth_0x51cab0(Gfx_Water *this,float param_1,float param_2,float param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int unaff_retaddr;
  float fVar4;
  float fVar5;
  float fStack_10;
  float fStack_c;
  float local_4;
  
  iVar1 = meth_0x51c8e0(this,(uint)param_1,(int)param_2);
  if (-1 < iVar1) {
    *(float *)(this->mbr_0xb4 + 4 + iVar1 * 8) =
         *(float *)(this->mbr_0xb4 + 4 + iVar1 * 8) - param_3;
  }
  thunk_FUN_00470dfd();
  if ((NAN(fStack_10) == (fStack_10 == 0.0)) || (NAN(fStack_c) == (fStack_c == 0.0))) {
    if (ABS(fStack_c) < ABS(fStack_10) == (NAN(ABS(fStack_c)) || NAN(ABS(fStack_10)))) {
      fVar5 = 1.0;
      param_2 = fStack_10 / fStack_c;
    }
    else {
      param_2 = 1.0;
      fVar5 = fStack_c / fStack_10;
    }
    iVar1 = 0;
    fVar4 = (float)param_4;
    local_4 = (float)unaff_retaddr;
    do {
      while( true ) {
        if (iVar1 == 0) {
          fVar4 = fVar4 + param_2;
          local_4 = local_4 + fVar5;
        }
        else {
          fVar4 = fVar4 - param_2;
          local_4 = local_4 - fVar5;
        }
        if ((((fVar4 < 0.0 != NAN(fVar4)) ||
             ((float)this->mbr_0x38 < fVar4 != ((float)this->mbr_0x38 == fVar4))) ||
            (local_4 < 0.0 != NAN(local_4))) ||
           ((float)this->mbr_0x3c < local_4 != ((float)this->mbr_0x3c == local_4))) break;
        uVar3 = FUN_00616e24();
        iVar2 = (int)uVar3;
        uVar3 = FUN_00616e24();
        iVar2 = meth_0x51c8e0(this,(uint)uVar3,iVar2);
        if (-1 < iVar2) {
          *(float *)(this->mbr_0xb4 + 4 + iVar2 * 8) =
               *(float *)(this->mbr_0xb4 + 4 + iVar2 * 8) - param_1;
        }
      }
      iVar1 = iVar1 + 1;
      fVar4 = (float)param_4;
      local_4 = (float)unaff_retaddr;
    } while (iVar1 < 2);
  }
  return;
}



void __thiscall
Gfx_Water::meth_0x51ccc0
          (Gfx_Water *this,dword param_1,dword param_2,dword param_3,dword param_4,dword param_5,
          dword param_6,dword param_7,dword param_8)

{
  this->mbr_0xe8 = param_1;
  this->mbr_0xec = param_2;
  this->mbr_0xf0 = param_3;
  this->mbr_0xf4 = param_4;
  this->mbr_0xf8 = param_5;
  this->mbr_0xfc = param_6;
  this->mbr_0x100 = param_7;
  this->mbr_0x104 = param_8;
  return;
}



void __thiscall
Gfx_Water::meth_0x51cd20
          (Gfx_Water *this,dword param_1,dword param_2,dword param_3,dword param_4,dword param_5,
          dword param_6,dword param_7,dword param_8,dword param_9,dword param_10,dword param_11,
          dword param_12)

{
  this->mbr_0x110 = param_1;
  this->mbr_0x114 = param_2;
  this->mbr_0x118 = param_3;
  this->mbr_0x11c = param_4;
  this->mbr_0x120 = param_5;
  this->mbr_0x124 = param_6;
  this->mbr_0x128 = param_7;
  this->mbr_0x12c = param_8;
  this->mbr_0x130 = param_9;
  this->mbr_0x134 = param_10;
  this->mbr_0x138 = param_11;
  this->mbr_0x13c = param_12;
  return;
}



void __thiscall
Gfx_Water::meth_0x51cda0
          (Gfx_Water *this,dword param_1,dword param_2,dword param_3,dword param_4,dword param_5,
          dword param_6,dword param_7,dword param_8)

{
  this->mbr_0x148 = param_1;
  this->mbr_0x14c = param_2;
  this->mbr_0x150 = param_3;
  this->mbr_0x154 = param_4;
  this->mbr_0x158 = param_5;
  this->mbr_0x15c = param_6;
  this->mbr_0x160 = param_7;
  this->mbr_0x164 = param_8;
  return;
}



void __thiscall Gfx_Water::meth_0x51d840(Gfx_Water *this)

{
  float fVar1;
  DWORD DVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  unkbyte10 Var7;
  float10 fVar8;
  float10 fVar9;
  
  DVar2 = GetTickCount();
  FUN_00616e99(DVar2);
  if (this->mbr_0xb4 == 0) {
    uVar4 = this->mbr_0x3c * this->mbr_0x38 * 8;
    puVar3 = (undefined4 *)operator_new(uVar4);
    this->mbr_0xb4 = (dword)puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      return;
    }
    for (uVar4 = uVar4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  this->mbr_0x9c = 0x41a00000;
  *(float *)&this->field_0xa0 = 1.0 / ((float)this->mbr_0xc4 * (float)this->mbr_0x5c);
  *(float *)&this->field_0xa4 = 1.0 / ((float)this->mbr_0xc8 * (float)this->mbr_0x5c);
  if (this->mbr_0xb8 == 0) {
    this->mbr_0xb8 = (dword)&DAT_0070a600;
    iVar5 = 0;
    uVar4 = 0;
    do {
      fVar1 = (float)iVar5;
      if (iVar5 < 0) {
        fVar1 = fVar1 + 4.294967e+09;
      }
      Var7 = FUN_006161d0();
      fVar8 = (float10)fsin(Var7);
      Var7 = FUN_00618b40();
      fVar9 = (float10)fcos(Var7);
      iVar5 = iVar5 + 1;
      *(float *)(uVar4 + this->mbr_0xb8) =
           (float)((fVar9 / (float10)(float)(fVar8 * (float10)0.7501876)) * (float10)(float)fVar8 -
                  (float10)(fVar1 * 0.00390625));
      uVar6 = uVar4 + 0xc;
      *(float *)(uVar4 + 4 + this->mbr_0xb8) = -((float)(fVar8 * (float10)0.7501876) / (float)fVar8)
      ;
      *(undefined4 *)(uVar4 + 8 + this->mbr_0xb8) = 0xffffff;
      *(undefined4 *)((int)&DAT_00709a00 + uVar4) = DAT_0070a600;
      *(undefined4 *)((int)&DAT_00709a04 + uVar4) = DAT_0070a604;
      *(undefined4 *)((int)&DAT_00709a08 + uVar4) = DAT_0070a608;
      uVar4 = uVar6;
    } while (uVar6 < 0xc00);
  }
  if ((this->mbr_0x34 != 0) && ((int *)this->mbr_0x30 != (int *)0x0)) {
    Gfx_Texture_Manager::DeleteTexture(DAT_0070b200,(int *)this->mbr_0x30);
    this->mbr_0x30 = 0;
  }
  return;
}



Gfx_Water * __thiscall Gfx_Water::Gfx_Water(Gfx_Water *this)

{
  dword dVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00636209;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)&(this->Gfx_NodeAttribute).field_0x4 = 0;
  (this->Gfx_NodeAttribute).mbr_0x20 = 0xf;
  (this->Gfx_NodeAttribute).mbr_0x1c = 0;
  *(undefined *)&(this->Gfx_NodeAttribute).mbr_0xc = 0;
  (this->Gfx_NodeAttribute).vftptr_0x0 =
       (Gfx_NodeAttribute__vftable_66b488 *)&Gfx_Water__vftable_675dd0_00675dd0;
  this->mbr_0x58 = 0xf;
  this->mbr_0x54 = 0;
  *(undefined *)&this->mbr_0x44 = 0;
  this->mbr_0x78 = 0xf;
  this->mbr_0x74 = 0;
  *(undefined *)&this->mbr_0x64 = 0;
  this->mbr_0x94 = 0xf;
  this->mbr_0x90 = 0;
  *(undefined *)&this->mbr_0x80 = 0;
  local_4 = 3;
  dVar1 = FUN_0051da20();
  this->mbr_0xd0 = dVar1;
  this->mbr_0xd4 = 0;
  this->mbr_0xe8 = 0;
  this->mbr_0xec = 0;
  this->mbr_0xf0 = 0x3f800000;
  this->mbr_0xf4 = 0x3f800000;
  this->mbr_0x30 = 0;
  this->mbr_0xd8 = 1;
  this->mbr_0x2c = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x3c = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x5c = 0;
  this->mbr_0xb4 = 0;
  this->mbr_0xb8 = 0;
  this->mbr_0xbc = 0;
  this->mbr_0xc0 = 0;
  this->mbr_0xc4 = 0;
  this->mbr_0xc8 = 0;
  this->mbr_0xdc = 0;
  this->mbr_0xe4 = 1;
  this->mbr_0xe0 = 0x3ccccccd;
  this->mbr_0xf8 = 0x3dcccccd;
  this->mbr_0xfc = 0x3e4ccccd;
  this->mbr_0x100 = 0x3ccccccd;
  this->mbr_0x104 = 0x3ccccccd;
  this->mbr_0x108 = 0x3ccccccd;
  this->mbr_0x110 = 0;
  this->mbr_0x114 = 0;
  this->mbr_0x118 = 0;
  this->mbr_0x11c = 0;
  this->mbr_0x120 = 0;
  this->mbr_0x124 = 0;
  this->mbr_0x128 = 0;
  this->mbr_0x12c = 0;
  this->mbr_0x138 = 0x3ccccccd;
  this->mbr_0x13c = 0x3ccccccd;
  this->mbr_0x140 = 0x3ccccccd;
  this->mbr_0x160 = 0x3ccccccd;
  this->mbr_0x164 = 0x3ccccccd;
  this->mbr_0x168 = 0x3ccccccd;
  this->mbr_0x130 = 0x3f800000;
  this->mbr_0x134 = 0x3f800000;
  this->mbr_0x148 = 0x3f800000;
  this->mbr_0x14c = 0x3f800000;
  this->mbr_0x150 = 0x3f800000;
  this->mbr_0x154 = 0x3f800000;
  this->mbr_0x158 = 0x3f800000;
  this->mbr_0x15c = 0x3f800000;
  this->mbr_0x10c = 0;
  this->mbr_0x144 = 0;
  this->mbr_0x16c = 0;
  this->mbr_0x170 = 0;
  this->mbr_0x174 = 1;
  ExceptionList = local_c;
  return this;
}



Gfx_Water * __thiscall Gfx_Water::~Gfx_Water(Gfx_Water *this)

{
  int **ppiVar1;
  int *piVar2;
  Gfx_Water *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00636257;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->Gfx_NodeAttribute).vftptr_0x0 =
       (Gfx_NodeAttribute__vftable_66b488 *)&Gfx_Water__vftable_675dd0_00675dd0;
  local_4 = 4;
  local_10 = this;
  if ((void *)this->mbr_0xb4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xb4);
  }
  if ((void *)this->mbr_0xc0 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xc0);
  }
  if ((this->mbr_0x34 != 0) && ((int *)this->mbr_0x30 != (int *)0x0)) {
    Gfx_Texture_Manager::DeleteTexture(DAT_0070b200,(int *)this->mbr_0x30);
  }
  ppiVar1 = (int **)this->mbr_0xd0;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  cls_0x4d8d70::meth_0x51e0b0
            ((cls_0x4d8d70 *)&this->mbr_0xcc,(int **)&local_10,piVar2,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0xd0);
}



int * __thiscall Gfx_Water::virt_meth_0x51e900(Gfx_Water *this,byte param_1)

{
  ~Gfx_Water(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}


#include "../include/Gfx_Water.h"
