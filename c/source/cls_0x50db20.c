#include "../include/cls_0x50db20.h"

int __thiscall cls_0x50db20::meth_0x401440(cls_0x50db20 *this)

{
  if (0xf < this->mbr_0x18) {
    return this->mbr_0x4;
  }
  return (int)&this->mbr_0x4;
}



void __thiscall cls_0x50db20::meth_0x401490(cls_0x50db20 *this,int param_1)

{
  this->mbr_0x14 = param_1;
  if (0xf < this->mbr_0x18) {
    *(undefined *)(this->mbr_0x4 + param_1) = 0;
    return;
  }
  *(undefined *)((int)&this->mbr_0x4 + param_1) = 0;
  return;
}



void __thiscall cls_0x50db20::meth_0x4014b0(cls_0x50db20 *this,char param_1)

{
  if ((param_1 != '\0') && (0xf < this->mbr_0x18)) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x4);
  }
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  return;
}



void __thiscall cls_0x50db20::meth_0x401510(cls_0x50db20 *this)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  uint uVar2;
  uint in_stack_00000004;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0062b370;
  pvStack_10 = ExceptionList;
  uVar2 = in_stack_00000004 | 0xf;
  if ((in_stack_00000004 | 0xf) == 0xffffffff) {
    uVar2 = in_stack_00000004;
  }
  local_8 = 0;
  ExceptionList = &pvStack_10;
  puVar1 = (undefined4 *)operator_new(uVar2 + 1);
  FUN_0040158e(extraout_ECX,puVar1);
  return;
}



bool __thiscall cls_0x50db20::meth_0x401940(cls_0x50db20 *this,uint param_1,char param_2)

{
  uint uVar1;
  
  if (param_1 == 0xffffffff) {
    std::_String_base::_Xlen((_String_base *)this);
  }
  uVar1 = this->mbr_0x18;
  if (uVar1 < param_1) {
    if (param_2 != '\0') {
      meth_0x401510(this);
      return param_1 != 0;
    }
    meth_0x401510(this);
    return param_1 != 0;
  }
  if ((param_2 != '\0') && (param_1 < 0x10)) {
    if (0xf < uVar1) {
                    /* WARNING: Subroutine does not return */
      _free((void *)this->mbr_0x4);
    }
    this->mbr_0x18 = 0xf;
    this->mbr_0x14 = 0;
    *(undefined *)&this->mbr_0x4 = 0;
    return param_1 != 0;
  }
  if (param_1 == 0) {
    this->mbr_0x14 = 0;
    if (0xf < uVar1) {
      *(undefined *)this->mbr_0x4 = 0;
      return false;
    }
    *(undefined *)&this->mbr_0x4 = 0;
  }
  return param_1 != 0;
}



_String_base * __thiscall cls_0x50db20::meth_0x401a40(cls_0x50db20 *this,uint param_1,uint param_2)

{
  dword *pdVar1;
  uint uVar2;
  dword *pdVar3;
  dword *pdVar4;
  
  if (this->mbr_0x14 < param_1) {
    std::_String_base::_Xran((_String_base *)this);
  }
  uVar2 = this->mbr_0x14 - param_1;
  if (uVar2 < param_2) {
    param_2 = uVar2;
  }
  if (param_2 != 0) {
    pdVar4 = &this->mbr_0x4;
    pdVar3 = pdVar4;
    pdVar1 = pdVar4;
    if (0xf < this->mbr_0x18) {
      pdVar3 = (dword *)*pdVar4;
      pdVar1 = (dword *)*pdVar4;
    }
    _memmove((void *)((int)pdVar3 + param_1),(void *)((int)pdVar1 + param_2 + param_1),
             uVar2 - param_2);
    uVar2 = this->mbr_0x14 - param_2;
    if (uVar2 == 0xffffffff) {
      std::_String_base::_Xlen((_String_base *)this);
    }
    if (this->mbr_0x18 < uVar2) {
      meth_0x401510(this);
    }
    else if (uVar2 == 0) {
      this->mbr_0x14 = 0;
      if (0xf < this->mbr_0x18) {
        pdVar4 = (dword *)*pdVar4;
      }
      *(undefined *)pdVar4 = 0;
      return (_String_base *)this;
    }
    if (uVar2 != 0) {
      this->mbr_0x14 = uVar2;
      if (0xf < this->mbr_0x18) {
        pdVar4 = (dword *)*pdVar4;
      }
      *(undefined *)(uVar2 + (int)pdVar4) = 0;
    }
  }
  return (_String_base *)this;
}



_String_base * __thiscall
cls_0x50db20::meth_0x401b20(cls_0x50db20 *this,_String_base *param_1,uint param_2,uint param_3)

{
  bool bVar1;
  dword *pdVar2;
  uint uVar3;
  dword *pdVar4;
  uint uVar5;
  _String_base *p_Var6;
  dword *pdVar7;
  
  if (*(uint *)(param_1 + 0x14) < param_2) {
    std::_String_base::_Xran((_String_base *)this);
  }
  uVar5 = *(int *)(param_1 + 0x14) - param_2;
  if (param_3 < *(int *)(param_1 + 0x14) - param_2) {
    uVar5 = param_3;
  }
  if (this != (cls_0x50db20 *)param_1) {
    bVar1 = meth_0x401940(this,uVar5,'\x01');
    if (bVar1) {
      if (*(uint *)(param_1 + 0x18) < 0x10) {
        p_Var6 = param_1 + 4;
      }
      else {
        p_Var6 = *(_String_base **)(param_1 + 4);
      }
      pdVar2 = &this->mbr_0x4;
      pdVar4 = pdVar2;
      if (0xf < this->mbr_0x18) {
        pdVar4 = (dword *)*pdVar2;
      }
      pdVar7 = (dword *)(p_Var6 + param_2);
      for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pdVar4 = *pdVar7;
        pdVar7 = pdVar7 + 1;
        pdVar4 = pdVar4 + 1;
      }
      for (uVar3 = uVar5 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined *)pdVar4 = *(undefined *)pdVar7;
        pdVar7 = (dword *)((int)pdVar7 + 1);
        pdVar4 = (dword *)((int)pdVar4 + 1);
      }
      this->mbr_0x14 = uVar5;
      if (0xf < this->mbr_0x18) {
        pdVar2 = (dword *)*pdVar2;
      }
      *(undefined *)((int)pdVar2 + uVar5) = 0;
    }
    return (_String_base *)this;
  }
  meth_0x401a40(this,uVar5 + param_2,0xffffffff);
  meth_0x401a40(this,0,param_2);
  return (_String_base *)this;
}



_String_base * __thiscall cls_0x50db20::meth_0x401bd0(cls_0x50db20 *this,char *param_1,uint param_2)

{
  bool bVar1;
  dword *pdVar2;
  _String_base *p_Var3;
  uint uVar4;
  dword *pdVar5;
  
  uVar4 = this->mbr_0x18;
  pdVar5 = &this->mbr_0x4;
  pdVar2 = pdVar5;
  if (0xf < uVar4) {
    pdVar2 = (dword *)*pdVar5;
  }
  if (pdVar2 <= param_1) {
    pdVar2 = pdVar5;
    if (0xf < uVar4) {
      pdVar2 = (dword *)*pdVar5;
    }
    if (param_1 < (char *)(this->mbr_0x14 + (int)pdVar2)) {
      if (0xf < uVar4) {
        pdVar5 = (dword *)*pdVar5;
      }
      p_Var3 = meth_0x401b20(this,(_String_base *)this,(int)param_1 - (int)pdVar5,param_2);
      return p_Var3;
    }
  }
  bVar1 = meth_0x401940(this,param_2,'\x01');
  if (bVar1) {
    pdVar2 = pdVar5;
    if (0xf < this->mbr_0x18) {
      pdVar2 = (dword *)*pdVar5;
    }
    for (uVar4 = param_2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pdVar2 = *(dword *)param_1;
      param_1 = (char *)((int)param_1 + 4);
      pdVar2 = pdVar2 + 1;
    }
    for (uVar4 = param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)pdVar2 = *param_1;
      param_1 = (char *)((int)param_1 + 1);
      pdVar2 = (dword *)((int)pdVar2 + 1);
    }
    this->mbr_0x14 = param_2;
    if (0xf < this->mbr_0x18) {
      pdVar5 = (dword *)*pdVar5;
    }
    *(undefined *)(param_2 + (int)pdVar5) = 0;
  }
  return (_String_base *)this;
}



cls_0x50db20 * __thiscall cls_0x50db20::cls_0x50db20(cls_0x50db20 *this)

{
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  return this;
}



void __thiscall cls_0x50db20::meth_0x40acc0(cls_0x50db20 *this,int *param_1)

{
  int iVar1;
  _String_base *p_Var2;
  cls_0x50db20 *pcVar3;
  int local_4;
  
  iVar1 = FUN_006165e0((cls_0x616328 *)param_1,0,&Entity::RTTI_Type_Descriptor,
                       &GameCreature::RTTI_Type_Descriptor,0);
  if (iVar1 != 0) {
    meth_0x401b20((cls_0x50db20 *)((int)&this[-3].mbr_0x134 + 3),(_String_base *)(iVar1 + 0x278),0,
                  0xffffffff);
    *(undefined4 *)((int)&this[-3].mbr_0x150 + 3) = *(undefined4 *)(iVar1 + 0x294);
    meth_0x401b20((cls_0x50db20 *)((int)&this[-3].mbr_0x154 + 3),(_String_base *)(iVar1 + 0x298),0,
                  0xffffffff);
    *(undefined4 *)&this[-3].field_0x173 = *(undefined4 *)(iVar1 + 0x2b4);
    this[-3].field_0x177 = *(undefined *)(iVar1 + 0x2b8);
    pcVar3 = (cls_0x50db20 *)&this[-3].field_0x17b;
    p_Var2 = (_String_base *)(iVar1 + 700);
    local_4 = 0xc;
    do {
      meth_0x401b20(pcVar3,p_Var2,0,0xffffffff);
      p_Var2 = p_Var2 + 0x1c;
      pcVar3 = (cls_0x50db20 *)&pcVar3->VFX_Parameter;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
    pcVar3 = (cls_0x50db20 *)&this[-2].field_0xa6;
    p_Var2 = (_String_base *)(iVar1 + 0x428);
    local_4 = 0xd;
    do {
      meth_0x401b20((cls_0x50db20 *)&pcVar3[-1].field_0x225,p_Var2 + -0x1c,0,0xffffffff);
      meth_0x401b20(pcVar3,p_Var2,0,0xffffffff);
      p_Var2 = p_Var2 + 0x38;
      pcVar3 = (cls_0x50db20 *)&(pcVar3->VFX_Parameter).mbr_0x1c;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
    *(undefined *)((int)&this[-1].mbr_0x120 + 1) = *(undefined *)(iVar1 + 0x6e4);
    *(undefined *)((int)&this[-1].mbr_0x120 + 2) = *(undefined *)(iVar1 + 0x6e5);
    *(undefined *)((int)&this[-1].mbr_0x120 + 3) = *(undefined *)(iVar1 + 0x6e6);
    *(undefined *)&this[-1].mbr_0x124 = *(undefined *)(iVar1 + 0x6e7);
    *(undefined *)((int)&this[-1].mbr_0x124 + 1) = *(undefined *)(iVar1 + 0x6e8);
    *(undefined *)((int)&this[-1].mbr_0x124 + 2) = *(undefined *)(iVar1 + 0x6e9);
    *(undefined *)((int)&this[-1].mbr_0x124 + 3) = *(undefined *)(iVar1 + 0x6ea);
    *(undefined *)&this[-1].mbr_0x128 = *(undefined *)(iVar1 + 0x6eb);
    *(undefined *)((int)&this[-1].mbr_0x128 + 1) = *(undefined *)(iVar1 + 0x6ec);
    *(undefined *)((int)&this[-1].mbr_0x128 + 2) = *(undefined *)(iVar1 + 0x6ed);
    *(undefined *)((int)&this[-1].mbr_0x128 + 3) = *(undefined *)(iVar1 + 0x6ee);
    *(undefined *)&this[-1].mbr_0x12c = *(undefined *)(iVar1 + 0x6ef);
  }
  FUN_00468350(&this[-4].field_0x1a4,(cls_0x616328 *)param_1);
  return;
}



_String_base * __thiscall
cls_0x50db20::meth_0x4174f0
          (cls_0x50db20 *this,uint param_1,int **param_2,uint param_3,uint param_4,uint param_5)

{
  int **ppiVar1;
  uint uVar2;
  dword *pdVar3;
  dword *pdVar4;
  void *_Dst;
  dword *pdVar5;
  uint _Size;
  void *_Src;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  if ((this->mbr_0x14 < param_1) || (*(uint *)(param_3 + 0x14) < param_4)) {
    std::_String_base::_Xran((_String_base *)this);
  }
  ppiVar1 = (int **)(this->mbr_0x14 - param_1);
  if (ppiVar1 < param_2) {
    param_2 = ppiVar1;
  }
  uVar2 = *(int *)(param_3 + 0x14) - param_4;
  if (uVar2 < param_5) {
    param_5 = uVar2;
  }
  if (-param_5 - 1 <= this->mbr_0x14 - (int)param_2) {
    std::_String_base::_Xlen((_String_base *)this);
  }
  uVar2 = this->mbr_0x14;
  uVar7 = (uVar2 - (int)param_2) + param_5;
  _Size = (uVar2 - param_1) - (int)param_2;
  if (uVar2 < uVar7) {
    if (uVar7 == 0xffffffff) {
      std::_String_base::_Xlen((_String_base *)this);
    }
    if (this->mbr_0x18 < uVar7) {
      meth_0x401510(this);
    }
    else if (uVar7 == 0) {
      this->mbr_0x14 = 0;
      if (this->mbr_0x18 < 0x10) {
        pdVar3 = &this->mbr_0x4;
      }
      else {
        pdVar3 = (dword *)this->mbr_0x4;
      }
      *(undefined *)pdVar3 = 0;
    }
  }
  pdVar3 = &this->mbr_0x4;
  if (this == (cls_0x50db20 *)param_3) {
    if (param_2 < param_5) {
      if (param_1 < param_4) {
        if (param_4 < param_1 + (int)param_2) {
          pdVar5 = pdVar3;
          pdVar4 = pdVar3;
          if (0xf < this->mbr_0x18) {
            pdVar5 = (dword *)*pdVar3;
            pdVar4 = (dword *)*pdVar3;
          }
          _memmove((void *)((int)pdVar5 + param_1),(void *)((int)pdVar4 + param_4),(size_t)param_2);
          pdVar5 = pdVar3;
          pdVar4 = pdVar3;
          if (0xf < this->mbr_0x18) {
            pdVar5 = (dword *)*pdVar3;
            pdVar4 = (dword *)*pdVar3;
          }
          _memmove((void *)((int)pdVar5 + param_5 + param_1),
                   (void *)((int)pdVar4 + param_1 + (int)param_2),_Size);
          pdVar4 = pdVar3;
          param_3 = (uint)pdVar3;
          if (0xf < this->mbr_0x18) {
            pdVar4 = (dword *)*pdVar3;
            param_3 = *pdVar3;
          }
          _Size = param_5 - (int)param_2;
          _Src = (void *)((int)pdVar4 + param_5 + param_4);
          _Dst = (void *)(param_3 + param_1 + (int)param_2);
        }
        else {
          pdVar5 = pdVar3;
          pdVar4 = pdVar3;
          if (0xf < this->mbr_0x18) {
            pdVar5 = (dword *)*pdVar3;
            pdVar4 = (dword *)*pdVar3;
          }
          _memmove((void *)((int)pdVar5 + param_5 + param_1),
                   (void *)((int)pdVar4 + param_1 + (int)param_2),_Size);
          pdVar5 = pdVar3;
          pdVar4 = pdVar3;
          if (0xf < this->mbr_0x18) {
            pdVar5 = (dword *)*pdVar3;
            pdVar4 = (dword *)*pdVar3;
          }
          _Src = (void *)((int)pdVar4 + param_5 + (param_4 - (int)param_2));
          _Dst = (void *)((int)pdVar5 + param_1);
          _Size = param_5;
        }
      }
      else {
        pdVar5 = pdVar3;
        pdVar4 = pdVar3;
        if (0xf < this->mbr_0x18) {
          pdVar5 = (dword *)*pdVar3;
          pdVar4 = (dword *)*pdVar3;
        }
        _memmove((void *)((int)pdVar5 + param_5 + param_1),
                 (void *)((int)pdVar4 + param_1 + (int)param_2),_Size);
        if (this->mbr_0x18 < 0x10) {
          _Src = (void *)((int)pdVar3 + param_4);
          _Dst = (void *)((int)pdVar3 + param_1);
          _Size = param_5;
        }
        else {
          _Src = (void *)(*pdVar3 + param_4);
          _Dst = (void *)(*pdVar3 + param_1);
          _Size = param_5;
        }
      }
    }
    else {
      pdVar5 = pdVar3;
      pdVar4 = pdVar3;
      if (0xf < this->mbr_0x18) {
        pdVar5 = (dword *)*pdVar3;
        pdVar4 = (dword *)*pdVar3;
      }
      _memmove((void *)((int)pdVar5 + param_1),(void *)((int)pdVar4 + param_4),param_5);
      pdVar5 = pdVar3;
      pdVar4 = pdVar3;
      if (0xf < this->mbr_0x18) {
        pdVar5 = (dword *)*pdVar3;
        pdVar4 = (dword *)*pdVar3;
      }
      _Src = (void *)((int)pdVar4 + param_1 + (int)param_2);
      _Dst = (void *)((int)pdVar5 + param_5 + param_1);
    }
    _memmove(_Dst,_Src,_Size);
  }
  else {
    pdVar5 = pdVar3;
    pdVar4 = pdVar3;
    if (0xf < this->mbr_0x18) {
      pdVar5 = (dword *)*pdVar3;
      pdVar4 = (dword *)*pdVar3;
    }
    _memmove((void *)((int)pdVar5 + param_5 + param_1),
             (void *)((int)pdVar4 + param_1 + (int)param_2),_Size);
    if (*(uint *)(param_3 + 0x18) < 0x10) {
      iVar6 = param_3 + 4;
    }
    else {
      iVar6 = *(int *)(param_3 + 4);
    }
    pdVar4 = pdVar3;
    if (0xf < this->mbr_0x18) {
      pdVar4 = (dword *)*pdVar3;
    }
    puVar8 = (undefined4 *)(param_4 + iVar6);
    puVar9 = (undefined4 *)(param_1 + (int)pdVar4);
    for (uVar2 = param_5 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar2 = param_5 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined *)puVar9 = *(undefined *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
  }
  if (uVar7 <= this->mbr_0x14) {
    if (uVar7 == 0xffffffff) {
      std::_String_base::_Xlen((_String_base *)this);
    }
    if (this->mbr_0x18 < uVar7) {
      meth_0x401510(this);
    }
    else if (uVar7 == 0) {
      this->mbr_0x14 = 0;
      if (0xf < this->mbr_0x18) {
        pdVar3 = (dword *)*pdVar3;
      }
      *(undefined *)pdVar3 = 0;
      return (_String_base *)this;
    }
    if (uVar7 == 0) {
      return (_String_base *)this;
    }
  }
  this->mbr_0x14 = uVar7;
  if (0xf < this->mbr_0x18) {
    pdVar3 = (dword *)*pdVar3;
  }
  *(undefined *)((int)pdVar3 + uVar7) = 0;
  return (_String_base *)this;
}



_String_base * __thiscall
cls_0x50db20::meth_0x417870
          (cls_0x50db20 *this,uint param_1,int **param_2,int **param_3,int **param_4)

{
  _String_base *p_Var1;
  dword *pdVar2;
  dword *pdVar3;
  int **ppiVar4;
  uint uVar5;
  uint uVar6;
  size_t _Size;
  uint uVar7;
  int **ppiVar8;
  
  uVar6 = param_1;
  uVar7 = this->mbr_0x18;
  if (uVar7 < 0x10) {
    pdVar2 = &this->mbr_0x4;
  }
  else {
    pdVar2 = (dword *)this->mbr_0x4;
  }
  if (pdVar2 <= param_3) {
    pdVar2 = &this->mbr_0x4;
    pdVar3 = pdVar2;
    if (0xf < uVar7) {
      pdVar3 = (dword *)*pdVar2;
    }
    if (param_3 < (int **)(this->mbr_0x14 + (int)pdVar3)) {
      if (0xf < uVar7) {
        pdVar2 = (dword *)*pdVar2;
      }
      p_Var1 = meth_0x4174f0(this,param_1,param_2,(uint)this,(int)param_3 - (int)pdVar2,
                             (uint)param_4);
      return p_Var1;
    }
  }
  if (this->mbr_0x14 < param_1) {
    std::_String_base::_Xran((_String_base *)this);
  }
  ppiVar4 = (int **)(this->mbr_0x14 - param_1);
  ppiVar8 = param_2;
  if (ppiVar4 < param_2) {
    ppiVar8 = ppiVar4;
  }
  if (-(int)param_4 - 1U <= this->mbr_0x14 - (int)ppiVar8) {
    std::_String_base::_Xlen((_String_base *)this);
  }
  _Size = (this->mbr_0x14 - param_1) - (int)ppiVar8;
  if (param_4 < ppiVar8) {
    pdVar2 = &this->mbr_0x4;
    param_2 = (int **)pdVar2;
    if (0xf < this->mbr_0x18) {
      param_2 = (int **)*pdVar2;
    }
    if (0xf < this->mbr_0x18) {
      pdVar2 = (dword *)*pdVar2;
    }
    _memmove((void *)((int)pdVar2 + param_1 + (int)param_4),
             (void *)((int)param_2 + param_1 + (int)ppiVar8),_Size);
  }
  if ((param_4 != (int **)0x0) || (ppiVar8 != (int **)0x0)) {
    uVar7 = (int)param_4 + (this->mbr_0x14 - (int)ppiVar8);
    if (uVar7 == 0xffffffff) {
      std::_String_base::_Xlen((_String_base *)this);
    }
    if (this->mbr_0x18 < uVar7) {
      meth_0x401510(this);
    }
    else if (uVar7 == 0) {
      this->mbr_0x14 = 0;
      if (this->mbr_0x18 < 0x10) {
        *(undefined *)&this->mbr_0x4 = 0;
        return (_String_base *)this;
      }
      *(undefined *)this->mbr_0x4 = 0;
      return (_String_base *)this;
    }
    if (uVar7 != 0) {
      if (ppiVar8 < param_4) {
        pdVar2 = &this->mbr_0x4;
        param_1 = (uint)pdVar2;
        if (0xf < this->mbr_0x18) {
          param_1 = *pdVar2;
        }
        if (0xf < this->mbr_0x18) {
          pdVar2 = (dword *)*pdVar2;
        }
        _memmove((void *)((int)pdVar2 + uVar6 + (int)param_4),
                 (void *)(param_1 + uVar6 + (int)ppiVar8),_Size);
      }
      if (this->mbr_0x18 < 0x10) {
        pdVar2 = &this->mbr_0x4;
      }
      else {
        pdVar2 = (dword *)this->mbr_0x4;
      }
      ppiVar8 = (int **)(uVar6 + (int)pdVar2);
      for (uVar5 = (uint)param_4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *ppiVar8 = *param_3;
        param_3 = param_3 + 1;
        ppiVar8 = ppiVar8 + 1;
      }
      for (uVar6 = (uint)param_4 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined *)ppiVar8 = *(undefined *)param_3;
        param_3 = (int **)((int)param_3 + 1);
        ppiVar8 = (int **)((int)ppiVar8 + 1);
      }
      this->mbr_0x14 = uVar7;
      if (0xf < this->mbr_0x18) {
        *(undefined *)(this->mbr_0x4 + uVar7) = 0;
        return (_String_base *)this;
      }
      *(undefined *)((int)this + uVar7 + 4) = 0;
    }
  }
  return (_String_base *)this;
}



uint __thiscall
cls_0x50db20::meth_0x41e4b0
          (cls_0x50db20 *this,uint param_1,uint param_2,_String_base *param_3,uint param_4)

{
  uint uVar1;
  dword *pdVar2;
  uint uVar3;
  _String_base *p_Var4;
  bool bVar5;
  bool bVar6;
  
  if (this->mbr_0x14 < param_1) {
    std::_String_base::_Xran((_String_base *)this);
  }
  uVar1 = this->mbr_0x14 - param_1;
  if (uVar1 < param_2) {
    param_2 = uVar1;
  }
  if (param_2 != 0) {
    uVar1 = param_2;
    if (param_4 <= param_2) {
      uVar1 = param_4;
    }
    if (this->mbr_0x18 < 0x10) {
      pdVar2 = &this->mbr_0x4;
    }
    else {
      pdVar2 = (dword *)this->mbr_0x4;
    }
    bVar5 = false;
    uVar3 = 0;
    bVar6 = true;
    p_Var4 = (_String_base *)((int)pdVar2 + param_1);
    do {
      if (uVar1 == 0) break;
      uVar1 = uVar1 - 1;
      bVar5 = (byte)*p_Var4 < (byte)*param_3;
      bVar6 = *p_Var4 == *param_3;
      p_Var4 = p_Var4 + 1;
      param_3 = param_3 + 1;
    } while (bVar6);
    if (!bVar6) {
      uVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
    }
    if (uVar3 != 0) {
      return uVar3;
    }
  }
  if (param_4 <= param_2) {
    return (uint)(param_2 != param_4);
  }
  return 0xffffffff;
}



cls_0x50db20 * __thiscall cls_0x50db20::cls_0x50db20(cls_0x50db20 *this,_String_base *param_1)

{
  _String_base *p_Var1;
  int iVar2;
  undefined4 *puVar3;
  cls_0x50db20 *this_00;
  dword *pdVar4;
  undefined4 *puVar5;
  dword *pdVar6;
  
  p_Var1 = param_1;
  meth_0x401b20(this,param_1,0,0xffffffff);
  (this->VFX_Parameter).vftptr_0x0 = *(VFX_Parameter__vftable_673a20 **)(param_1 + 0x1c);
  (this->VFX_Parameter).mbr_0x4 = *(dword *)(param_1 + 0x20);
  (this->VFX_Parameter).mbr_0x8 = *(dword *)(param_1 + 0x24);
  *(undefined4 *)&(this->VFX_Parameter).field_0xc = *(undefined4 *)(param_1 + 0x28);
  puVar3 = (undefined4 *)(param_1 + 0x2c);
  puVar5 = (undefined4 *)&(this->VFX_Parameter).field_0x10;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  this->field_0x70 = param_1[0x70];
  this->field_0x71 = param_1[0x71];
  puVar3 = (undefined4 *)(param_1 + 0x74);
  puVar5 = (undefined4 *)&this->field_0x74;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  this->field_0xb8 = param_1[0xb8];
  this->field_0xb9 = param_1[0xb9];
  this->field_0xba = param_1[0xba];
  this->field_0xbb = param_1[0xbb];
  this->field_0xbc = param_1[0xbc];
  this->field_0xbd = param_1[0xbd];
  this_00 = (cls_0x50db20 *)&this->field_0xc0;
  iVar2 = (int)param_1 - (int)this;
  param_1 = (_String_base *)0x4;
  do {
    meth_0x401b20(this_00,(_String_base *)(iVar2 + (int)this_00),0,0xffffffff);
    this_00 = (cls_0x50db20 *)&this_00->VFX_Parameter;
    param_1 = param_1 + -1;
  } while (param_1 != (_String_base *)0x0);
  this->mbr_0x130 = *(dword *)(p_Var1 + 0x130);
  this->mbr_0x134 = *(dword *)(p_Var1 + 0x134);
  this->mbr_0x138 = *(dword *)(p_Var1 + 0x138);
  this->mbr_0x13c = *(dword *)(p_Var1 + 0x13c);
  this->mbr_0x140 = *(dword *)(p_Var1 + 0x140);
  this->mbr_0x144 = *(dword *)(p_Var1 + 0x144);
  this->mbr_0x148 = *(dword *)(p_Var1 + 0x148);
  this->mbr_0x14c = *(dword *)(p_Var1 + 0x14c);
  pdVar4 = (dword *)(p_Var1 + 0x150);
  pdVar6 = &this->mbr_0x150;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pdVar6 = *pdVar4;
    pdVar4 = pdVar4 + 1;
    pdVar6 = pdVar6 + 1;
  }
  pdVar4 = (dword *)(p_Var1 + 0x18c);
  pdVar6 = &this->mbr_0x18c;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pdVar6 = *pdVar4;
    pdVar4 = pdVar4 + 1;
    pdVar6 = pdVar6 + 1;
  }
  pdVar4 = (dword *)(p_Var1 + 0x1c8);
  pdVar6 = &this->mbr_0x1c8;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pdVar6 = *pdVar4;
    pdVar4 = pdVar4 + 1;
    pdVar6 = pdVar6 + 1;
  }
  pdVar4 = (dword *)(p_Var1 + 0x204);
  pdVar6 = &this->mbr_0x204;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pdVar6 = *pdVar4;
    pdVar4 = pdVar4 + 1;
    pdVar6 = pdVar6 + 1;
  }
  this->mbr_0x240 = (byte)p_Var1[0x240];
  return this;
}



_String_base * __thiscall cls_0x50db20::meth_0x425bd0(cls_0x50db20 *this,uint param_1)

{
  uint uVar1;
  dword *pdVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined in_stack_00000008;
  
  if (-this->mbr_0x14 - 1 <= param_1) {
    std::_String_base::_Xlen((_String_base *)this);
  }
  if (param_1 != 0) {
    uVar3 = this->mbr_0x14 + param_1;
    if (uVar3 == 0xffffffff) {
      std::_String_base::_Xlen((_String_base *)this);
    }
    if (this->mbr_0x18 < uVar3) {
      meth_0x401510(this);
    }
    else if (uVar3 == 0) {
      this->mbr_0x14 = 0;
      if (0xf < this->mbr_0x18) {
        *(undefined *)this->mbr_0x4 = 0;
        return (_String_base *)this;
      }
      *(undefined *)&this->mbr_0x4 = 0;
      return (_String_base *)this;
    }
    if (uVar3 != 0) {
      if (this->mbr_0x18 < 0x10) {
        pdVar2 = &this->mbr_0x4;
      }
      else {
        pdVar2 = (dword *)this->mbr_0x4;
      }
      puVar4 = (undefined4 *)(this->mbr_0x14 + (int)pdVar2);
      for (uVar1 = param_1 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar4 = CONCAT22(CONCAT11(in_stack_00000008,in_stack_00000008),
                           CONCAT11(in_stack_00000008,in_stack_00000008));
        puVar4 = puVar4 + 1;
      }
      for (uVar1 = param_1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined *)puVar4 = in_stack_00000008;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      this->mbr_0x14 = uVar3;
      if (0xf < this->mbr_0x18) {
        *(undefined *)(this->mbr_0x4 + uVar3) = 0;
        return (_String_base *)this;
      }
      *(undefined *)((int)&this->mbr_0x4 + uVar3) = 0;
    }
  }
  return (_String_base *)this;
}



int __thiscall cls_0x50db20::meth_0x430800(cls_0x50db20 *this)

{
  dword dVar1;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 == 0) {
    return dVar1;
  }
  return (int)(this->mbr_0x8 - dVar1) / 0x1c;
}



undefined4 __thiscall cls_0x50db20::meth_0x4324b0(cls_0x50db20 *this,uint param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0x9249249 < param_1) {
    uVar1 = FUN_00431db0();
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  pvVar2 = operator_new(param_1 * 0x1c);
  this->mbr_0xc = (dword)(param_1 * 0x1c + (int)pvVar2);
  this->mbr_0x4 = (dword)pvVar2;
  this->mbr_0x8 = (dword)pvVar2;
  return CONCAT31((int3)((uint)pvVar2 >> 8),1);
}



void __thiscall cls_0x50db20::meth_0x432510(cls_0x50db20 *this)

{
  if (this->mbr_0x4 != 0) {
    FUN_004310a0(this->mbr_0x4,this->mbr_0x8);
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x4);
  }
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  return;
}



void __thiscall
cls_0x50db20::meth_0x432f60
          (cls_0x50db20 *this,_String_base *param_1,_String_base *param_2,_String_base *param_3)

{
  _String_base *p_Var1;
  _String_base *p_Var2;
  dword dVar3;
  int iVar4;
  cls_0x50db20 *pcVar5;
  _String_base *p_Var6;
  uint unaff_retaddr;
  _String_base local_3c [4];
  VFX_Parameter__vftable_673a20 *local_38;
  dword local_28;
  uint local_24;
  cls_0x50db20 *local_20;
  cls_0x50db20 *local_1c;
  uint local_18;
  undefined *local_14;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0062d548;
  pvStack_10 = ExceptionList;
  local_18 = DAT_007062c0 ^ unaff_retaddr;
  local_14 = &stack0xffffffb8;
  p_Var6 = (_String_base *)0x0;
  local_24 = 0xf;
  local_28 = 0;
  local_38 = (VFX_Parameter__vftable_673a20 *)((uint)local_38 & 0xffffff00);
  ExceptionList = &pvStack_10;
  local_1c = this;
  meth_0x401b20((cls_0x50db20 *)local_3c,param_3,0,0xffffffff);
  p_Var2 = param_2;
  p_Var1 = param_1;
  local_8 = 0;
  if (this->mbr_0x4 != 0) {
    p_Var6 = (_String_base *)((int)(this->mbr_0xc - this->mbr_0x4) / 0x1c);
  }
  if (param_2 != (_String_base *)0x0) {
    if (this->mbr_0x4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)(this->mbr_0x8 - this->mbr_0x4) / 0x1c;
    }
    if ((_String_base *)(0x9249249U - iVar4) < param_2) {
      FUN_00431db0();
    }
    else {
      if (this->mbr_0x4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (int)(this->mbr_0x8 - this->mbr_0x4) / 0x1c;
      }
      if (p_Var6 < param_2 + iVar4) {
        if ((_String_base *)(0x9249249 - ((uint)p_Var6 >> 1)) < p_Var6) {
          p_Var6 = (_String_base *)0x0;
        }
        else {
          p_Var6 = p_Var6 + ((uint)p_Var6 >> 1);
        }
        if (this->mbr_0x4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (int)(this->mbr_0x8 - this->mbr_0x4) / 0x1c;
        }
        if (p_Var6 < param_2 + iVar4) {
          iVar4 = meth_0x430800(this);
          p_Var6 = p_Var2 + iVar4;
        }
        param_2 = (_String_base *)operator_new((int)p_Var6 * 0x1c);
        local_8 = CONCAT31(local_8._1_3_,1);
        param_3 = param_2;
        param_2 = (_String_base *)
                  FUN_00431ee0((_String_base *)this->mbr_0x4,param_1,(cls_0x50db20 *)param_2);
        FUN_00432ac0((cls_0x50db20 *)param_2,(int)p_Var2,local_3c);
        param_2 = param_2 + (int)p_Var2 * 0x1c;
        FUN_00431ee0(param_1,(_String_base *)this->mbr_0x8,(cls_0x50db20 *)param_2);
        if (this->mbr_0x4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (int)(this->mbr_0x8 - this->mbr_0x4) / 0x1c;
        }
        if (this->mbr_0x4 != 0) {
          FUN_004310a0(this->mbr_0x4,this->mbr_0x8);
                    /* WARNING: Subroutine does not return */
          _free((void *)this->mbr_0x4);
        }
        this->mbr_0xc = (dword)(param_3 + (int)p_Var6 * 0x1c);
        this->mbr_0x8 = (dword)(param_3 + (int)(p_Var2 + iVar4) * 0x1c);
        this->mbr_0x4 = (dword)param_3;
      }
      else {
        local_20 = (cls_0x50db20 *)this->mbr_0x8;
        param_3 = (_String_base *)((int)local_20 - (int)param_1);
        if ((_String_base *)((int)param_3 / 0x1c) < param_2) {
          param_3 = (_String_base *)((int)param_2 * 0x1c);
          pcVar5 = local_20;
          local_20 = (cls_0x50db20 *)&stack0xffffffac;
          FUN_00432d20(param_1,(_String_base *)pcVar5,(cls_0x50db20 *)(param_3 + (int)param_1));
          local_8 = CONCAT31(local_8._1_3_,3);
          FUN_00432e90((cls_0x50db20 *)this->mbr_0x8,
                       (int)p_Var2 - (int)(this->mbr_0x8 - (int)p_Var1) / 0x1c,local_3c);
          dVar3 = this->mbr_0x8;
          this->mbr_0x8 = (dword)(param_3 + dVar3);
          pcVar5 = (cls_0x50db20 *)(param_3 + dVar3 + -(int)param_3);
          local_8 = 0;
        }
        else {
          iVar4 = (int)param_2 * 0x1c;
          param_1 = (_String_base *)((int)local_20 + (int)param_2 * -0x1c);
          dVar3 = FUN_00432d20(param_1,(_String_base *)local_20,local_20);
          p_Var6 = param_1;
          this->mbr_0x8 = dVar3;
          param_2 = (_String_base *)&stack0xffffffb0;
          param_1 = (_String_base *)&stack0xffffffac;
          FUN_00432a80((cls_0x50db20 **)&param_1,p_Var1,p_Var6,local_20);
          pcVar5 = (cls_0x50db20 *)(p_Var1 + iVar4);
        }
        param_1 = (_String_base *)&stack0xffffffac;
        FUN_00431e30((cls_0x50db20 *)p_Var1,pcVar5,local_3c);
      }
    }
  }
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_38);
  }
  ExceptionList = pvStack_10;
  FUN_00616e15(local_18 ^ unaff_retaddr);
  return;
}



void __thiscall
cls_0x50db20::meth_0x433430
          (cls_0x50db20 *this,_String_base *param_1,undefined4 param_2,void *param_3)

{
  dword dVar1;
  _String_base *p_Var2;
  int iVar3;
  uint in_stack_00000020;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062d568;
  pvStack_c = ExceptionList;
  dVar1 = this->mbr_0x4;
  local_4 = 0;
  if (dVar1 == 0) {
    p_Var2 = (_String_base *)0x0;
  }
  else {
    p_Var2 = (_String_base *)((int)(this->mbr_0x8 - dVar1) / 0x1c);
  }
  if (p_Var2 < param_1) {
    if (dVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(this->mbr_0x8 - dVar1) / 0x1c;
    }
    p_Var2 = param_1 + -iVar3;
    param_1 = (_String_base *)&stack0xffffffd8;
    ExceptionList = &pvStack_c;
    meth_0x432f60(this,(_String_base *)this->mbr_0x8,p_Var2,(_String_base *)&param_2);
  }
  else {
    ExceptionList = &pvStack_c;
    if (dVar1 != 0) {
      ExceptionList = &pvStack_c;
      if (param_1 < (_String_base *)((int)((int)(cls_0x50db20 *)this->mbr_0x8 - dVar1) / 0x1c)) {
        iVar3 = (int)param_1 * 0x1c;
        param_1 = (_String_base *)&stack0xffffffdc;
        ExceptionList = &pvStack_c;
        FUN_00432cd0(this,(cls_0x50db20 **)&param_1,(cls_0x50db20 *)(iVar3 + this->mbr_0x4),
                     (cls_0x50db20 *)this->mbr_0x8);
      }
    }
  }
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    _free(param_3);
  }
  ExceptionList = pvStack_c;
  return;
}



cls_0x50db20 * __thiscall cls_0x50db20::cls_0x50db20(cls_0x50db20 *this)

{
  char *pcVar1;
  char *pcVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062d733;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  (this->VFX_Parameter).mbr_0x18 = 0xf;
  *(undefined4 *)&(this->VFX_Parameter).field_0x14 = 0;
  *(undefined *)&(this->VFX_Parameter).mbr_0x4 = 0;
  local_4 = 1;
  pcVar1 = "";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  meth_0x401bd0(this,"",(uint)(pcVar2 + -0x64d7d8));
  pcVar1 = "";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  meth_0x401bd0((cls_0x50db20 *)&this->VFX_Parameter,"",(uint)(pcVar2 + -0x64d7d8));
  (this->VFX_Parameter).mbr_0x1c = 0x80;
  (this->VFX_Parameter).mbr_0x20 = 0x80;
  (this->VFX_Parameter).mbr_0x24 = 0x80;
  ExceptionList = local_c;
  return this;
}



void __thiscall cls_0x50db20::meth_0x45ce10(cls_0x50db20 *this)

{
  int **ppiVar1;
  int *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00630188;
  pvStack_c = ExceptionList;
  ppiVar1 = (int **)(this->VFX_Parameter).mbr_0x4;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  cls_0x4dff90::meth_0x45cd20
            ((cls_0x4dff90 *)&this->VFX_Parameter,&local_10,(int **)*ppiVar1,ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)(this->VFX_Parameter).mbr_0x4);
}



_String_base * __thiscall
cls_0x50db20::meth_0x4971c0(cls_0x50db20 *this,uint param_1,undefined param_2)

{
  bool bVar1;
  uint uVar2;
  dword *pdVar3;
  dword *pdVar4;
  
  if (param_1 == 0xffffffff) {
    std::_String_base::_Xlen((_String_base *)this);
  }
  bVar1 = meth_0x401940(this,param_1,'\x01');
  if (bVar1) {
    pdVar3 = &this->mbr_0x4;
    pdVar4 = pdVar3;
    if (0xf < this->mbr_0x18) {
      pdVar4 = (dword *)*pdVar3;
    }
    for (uVar2 = param_1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pdVar4 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
      pdVar4 = pdVar4 + 1;
    }
    for (uVar2 = param_1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined *)pdVar4 = param_2;
      pdVar4 = (dword *)((int)pdVar4 + 1);
    }
    this->mbr_0x14 = param_1;
    if (0xf < this->mbr_0x18) {
      pdVar3 = (dword *)*pdVar3;
    }
    *(undefined *)(param_1 + (int)pdVar3) = 0;
  }
  return (_String_base *)this;
}



cls_0x50db20 * __thiscall
cls_0x50db20::cls_0x50db20(cls_0x50db20 *this,uint param_1,undefined param_2)

{
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0xf;
  *(undefined *)&this->mbr_0x4 = 0;
  meth_0x4971c0(this,param_1,param_2);
  return this;
}



cls_0x50db20 * __thiscall cls_0x50db20::cls_0x50db20(cls_0x50db20 *this)

{
  char *pcVar1;
  char *pcVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00631418;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  local_4 = 0;
  pcVar1 = "";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  meth_0x401bd0(this,"",(uint)(pcVar2 + -0x64d7d8));
  (this->VFX_Parameter).mbr_0x4 = 0;
  *(undefined4 *)&(this->VFX_Parameter).field_0xc = 0;
  *(undefined4 *)&(this->VFX_Parameter).field_0x10 = 0;
  ExceptionList = local_c;
  return this;
}



void __thiscall cls_0x50db20::meth_0x4b2ec0(cls_0x50db20 *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00632348;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  cls_0x4dff90::meth_0x523470((cls_0x4dff90 *)&this->VFX_Parameter);
  if (0xf < this->mbr_0x18) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x4);
  }
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x50db20::meth_0x4b5e60(cls_0x50db20 *this,undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = &(this->VFX_Parameter).field_0x10;
  puVar3 = param_1;
  puVar4 = (undefined4 *)puVar1;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  (this->VFX_Parameter).mbr_0x20 = *(dword *)puVar1;
  (this->VFX_Parameter).mbr_0x24 = *(dword *)&(this->VFX_Parameter).field_0x14;
  (this->VFX_Parameter).mbr_0x28 = (this->VFX_Parameter).mbr_0x18;
  (this->VFX_Parameter).mbr_0x2c = (this->VFX_Parameter).mbr_0x1c;
  puVar3 = (undefined4 *)&this->field_0x74;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x004b5eff) */
/* WARNING: Removing unreachable block (ram,0x004b5ed9) */
/* WARNING: Removing unreachable block (ram,0x004b5f22) */
/* WARNING: Removing unreachable block (ram,0x004b5f4b) */

void __thiscall
cls_0x50db20::meth_0x4b5eb0(cls_0x50db20 *this,uint param_1,char param_2,char param_3)

{
  if (param_2 != '\0') {
    *(float *)&(this->VFX_Parameter).field_0x10 = (float)(param_1 >> 0x10 & 0xff) * 0.003921569;
    *(float *)&(this->VFX_Parameter).field_0x14 = (float)(param_1 >> 8 & 0xff) * 0.003921569;
    (this->VFX_Parameter).mbr_0x18 = (dword)((float)(param_1 & 0xff) * 0.003921569);
    (this->VFX_Parameter).mbr_0x1c = (this->VFX_Parameter).mbr_0x1c;
  }
  if (param_3 != '\0') {
    (this->VFX_Parameter).mbr_0x1c = (dword)((float)(param_1 >> 0x18) * 0.003921569);
  }
  (this->VFX_Parameter).mbr_0x20 = *(dword *)&(this->VFX_Parameter).field_0x10;
  (this->VFX_Parameter).mbr_0x24 = *(dword *)&(this->VFX_Parameter).field_0x14;
  (this->VFX_Parameter).mbr_0x28 = (this->VFX_Parameter).mbr_0x18;
  (this->VFX_Parameter).mbr_0x2c = (this->VFX_Parameter).mbr_0x1c;
  this->field_0x70 = param_2;
  this->field_0x71 = param_3;
  return;
}



/* WARNING: Removing unreachable block (ram,0x004b5fd1) */
/* WARNING: Removing unreachable block (ram,0x004b5fab) */
/* WARNING: Removing unreachable block (ram,0x004b5ff1) */

void __thiscall cls_0x50db20::meth_0x4b5f90(cls_0x50db20 *this,uint param_1)

{
  *(float *)&this->field_0x5c = (float)(param_1 >> 0x10 & 0xff) * 0.003921569;
  *(float *)&this->field_0x60 = (float)(param_1 >> 8 & 0xff) * 0.003921569;
  *(undefined4 *)&this->field_0x68 = 0x3f800000;
  *(float *)&this->field_0x64 = (float)(param_1 & 0xff) * 0.003921569;
  return;
}



void __thiscall cls_0x50db20::meth_0x4b6010(cls_0x50db20 *this)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  this->field_0x70 = 0;
  this->field_0x71 = 0;
  puVar2 = (undefined4 *)&this->field_0x74;
  puVar3 = (undefined4 *)&(this->VFX_Parameter).field_0x10;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



void __thiscall
cls_0x50db20::meth_0x4c5dc0
          (cls_0x50db20 *this,int *param_1,_String_base *param_2,_String_base *param_3)

{
  dword dVar1;
  int iVar2;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 != 0) {
    if ((int)(this->mbr_0x8 - dVar1) / 0x1c != 0) {
      iVar2 = (int)((int)param_2 - dVar1) / 0x1c;
      goto LAB_004c5e0b;
    }
  }
  iVar2 = 0;
LAB_004c5e0b:
  meth_0x432f60(this,param_2,(_String_base *)0x1,param_3);
  *param_1 = iVar2 * 0x1c + this->mbr_0x4;
  return;
}



void __thiscall cls_0x50db20::meth_0x4c60a0(cls_0x50db20 *this,_String_base *param_1)

{
  dword dVar1;
  cls_0x50db20 *pcVar2;
  
  dVar1 = this->mbr_0x4;
  if ((dVar1 != 0) &&
     ((uint)((int)(this->mbr_0x8 - dVar1) / 0x1c) < (uint)((int)(this->mbr_0xc - dVar1) / 0x1c))) {
    pcVar2 = (cls_0x50db20 *)this->mbr_0x8;
    FUN_00432ac0(pcVar2,1,param_1);
    this->mbr_0x8 = (dword)&pcVar2->VFX_Parameter;
    return;
  }
  meth_0x4c5dc0(this,(int *)&param_1,(_String_base *)this->mbr_0x8,param_1);
  return;
}



void __thiscall
cls_0x50db20::meth_0x4c8610
          (cls_0x50db20 *this,undefined param_1,dword param_2,dword param_3,dword param_4,
          dword param_5)

{
  *(undefined *)&this->mbr_0xf0 = param_1;
  this->mbr_0xf8 = param_2;
  this->mbr_0xfc = param_3;
  this->mbr_0x100 = param_4;
  this->mbr_0x104 = param_5;
  return;
}



void __thiscall
cls_0x50db20::meth_0x4c8650
          (cls_0x50db20 *this,byte param_1,dword param_2,dword param_3,dword param_4,dword param_5)

{
  this->mbr_0x108 = param_1;
  this->mbr_0x110 = param_2;
  this->mbr_0x114 = param_3;
  this->mbr_0x118 = param_4;
  this->mbr_0x11c = param_5;
  return;
}



void __thiscall
cls_0x50db20::meth_0x4c8690
          (cls_0x50db20 *this,undefined param_1,dword param_2,dword param_3,dword param_4,
          dword param_5,dword param_6,dword param_7)

{
  *(undefined *)&this->mbr_0x120 = param_1;
  this->mbr_0x128 = param_2;
  this->mbr_0x12c = param_3;
  this->mbr_0x130 = param_4;
  this->mbr_0x134 = param_5;
  this->mbr_0x138 = param_6;
  this->mbr_0x13c = param_7;
  return;
}



void __thiscall
cls_0x50db20::meth_0x4c86e0
          (cls_0x50db20 *this,undefined param_1,dword param_2,dword param_3,dword param_4,
          dword param_5,dword param_6)

{
  *(undefined *)&this->mbr_0x140 = param_1;
  this->mbr_0x148 = param_2;
  this->mbr_0x14c = param_3;
  this->mbr_0x150 = param_4;
  this->mbr_0x154 = param_5;
  this->mbr_0x158 = param_6;
  return;
}



void __thiscall cls_0x50db20::meth_0x4cb240(cls_0x50db20 *this)

{
  if (0xf < *(uint *)&this->field_0xd0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&this->field_0xbc);
  }
  *(undefined4 *)&this->field_0xd0 = 0xf;
  *(undefined4 *)&this->field_0xcc = 0;
  this->field_0xbc = 0;
  if (0xf < *(uint *)&this->field_0xb4) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&this->field_0xa0);
  }
  *(undefined4 *)&this->field_0xb4 = 0xf;
  *(undefined4 *)&this->field_0xb0 = 0;
  this->field_0xa0 = 0;
  if (0xf < (this->VFX_Parameter).mbr_0x1c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)(this->VFX_Parameter).mbr_0x8);
  }
  (this->VFX_Parameter).mbr_0x1c = 0xf;
  (this->VFX_Parameter).mbr_0x18 = 0;
  *(undefined *)&(this->VFX_Parameter).mbr_0x8 = 0;
  if (0xf < this->mbr_0x18) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x4);
  }
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  return;
}



void __thiscall cls_0x50db20::meth_0x4cd070(cls_0x50db20 *this,uint param_1)

{
  if (param_1 <= this->mbr_0x14) {
    meth_0x401a40(this,param_1,0xffffffff);
    return;
  }
  meth_0x425bd0(this,param_1 - this->mbr_0x14);
  return;
}



cls_0x50db20 * __thiscall cls_0x50db20::cls_0x50db20(cls_0x50db20 *this,_String_base *param_1)

{
  void *local_14;
  undefined *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00633271;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  meth_0x401b20(this,param_1,0,0xffffffff);
  (this->VFX_Parameter).vftptr_0x0 = *(VFX_Parameter__vftable_673a20 **)(param_1 + 0x1c);
  (this->VFX_Parameter).mbr_0x1c = 0xf;
  (this->VFX_Parameter).mbr_0x18 = 0;
  local_c = 0;
  *(undefined *)&(this->VFX_Parameter).mbr_0x8 = 0;
  meth_0x401b20((cls_0x50db20 *)&(this->VFX_Parameter).mbr_0x4,param_1 + 0x20,0,0xffffffff);
  (this->VFX_Parameter).mbr_0x20 = *(dword *)(param_1 + 0x3c);
  (this->VFX_Parameter).mbr_0x24 = *(dword *)(param_1 + 0x40);
  (this->VFX_Parameter).mbr_0x28 = *(dword *)(param_1 + 0x44);
  (this->VFX_Parameter).mbr_0x2c = *(dword *)(param_1 + 0x48);
  (this->VFX_Parameter).mbr_0x30 = *(dword *)(param_1 + 0x4c);
  *(undefined4 *)&this->field_0x50 = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)&this->field_0x54 = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)&this->field_0x58 = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)&this->field_0x5c = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)&this->field_0x60 = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)&this->field_0x64 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)&this->field_0x68 = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)&this->field_0x6c = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)&this->field_0x70 = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)&this->field_0x74 = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)&this->field_0x78 = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)&this->field_0x80 = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)&this->field_0x84 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)&this->field_0x88 = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)&this->field_0x8c = *(undefined4 *)(param_1 + 0x8c);
  this->field_0x90 = param_1[0x90];
  local_c._0_1_ = 1;
  this->field_0x91 = param_1[0x91];
  this->field_0x92 = param_1[0x92];
  this->field_0x93 = param_1[0x93];
  this->field_0x94 = param_1[0x94];
  this->field_0x95 = param_1[0x95];
  this->field_0x96 = param_1[0x96];
  *(undefined4 *)&this->field_0x98 = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)&this->field_0xb4 = 0xf;
  *(undefined4 *)&this->field_0xb0 = 0;
  this->field_0xa0 = 0;
  meth_0x401b20((cls_0x50db20 *)&this->field_0x9c,param_1 + 0x9c,0,0xffffffff);
  *(undefined4 *)&this->field_0xd0 = 0xf;
  *(undefined4 *)&this->field_0xcc = 0;
  local_c = CONCAT31(local_c._1_3_,2);
  this->field_0xbc = 0;
  meth_0x401b20((cls_0x50db20 *)&this->field_0xb8,param_1 + 0xb8,0,0xffffffff);
  this->field_0xd4 = param_1[0xd4];
  this->mbr_0xd8 = *(dword *)(param_1 + 0xd8);
  this->mbr_0xdc = *(dword *)(param_1 + 0xdc);
  *(_String_base *)&this->mbr_0xe0 = param_1[0xe0];
  this->mbr_0xe8 = *(dword *)(param_1 + 0xe8);
  this->mbr_0xec = *(dword *)(param_1 + 0xec);
  *(_String_base *)&this->mbr_0xf0 = param_1[0xf0];
  this->mbr_0xf8 = *(dword *)(param_1 + 0xf8);
  this->mbr_0xfc = *(dword *)(param_1 + 0xfc);
  this->mbr_0x100 = *(dword *)(param_1 + 0x100);
  this->mbr_0x104 = *(dword *)(param_1 + 0x104);
  this->mbr_0x108 = (byte)param_1[0x108];
  this->mbr_0x110 = *(dword *)(param_1 + 0x110);
  this->mbr_0x114 = *(dword *)(param_1 + 0x114);
  this->mbr_0x118 = *(dword *)(param_1 + 0x118);
  this->mbr_0x11c = *(dword *)(param_1 + 0x11c);
  *(_String_base *)&this->mbr_0x120 = param_1[0x120];
  this->mbr_0x128 = *(dword *)(param_1 + 0x128);
  this->mbr_0x12c = *(dword *)(param_1 + 300);
  this->mbr_0x130 = *(dword *)(param_1 + 0x130);
  this->mbr_0x134 = *(dword *)(param_1 + 0x134);
  this->mbr_0x138 = *(dword *)(param_1 + 0x138);
  this->mbr_0x13c = *(dword *)(param_1 + 0x13c);
  *(_String_base *)&this->mbr_0x140 = param_1[0x140];
  this->mbr_0x148 = *(dword *)(param_1 + 0x148);
  this->mbr_0x14c = *(dword *)(param_1 + 0x14c);
  this->mbr_0x150 = *(dword *)(param_1 + 0x150);
  this->mbr_0x154 = *(dword *)(param_1 + 0x154);
  this->mbr_0x158 = *(dword *)(param_1 + 0x158);
  ExceptionList = local_14;
  return this;
}



cls_0x50db20 * __thiscall cls_0x50db20::cls_0x50db20(cls_0x50db20 *this,_String_base *param_1)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00633288;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  meth_0x401b20(this,param_1,0,0xffffffff);
  (this->VFX_Parameter).mbr_0x18 = 0xf;
  *(undefined4 *)&(this->VFX_Parameter).field_0x14 = 0;
  local_4 = 0;
  *(undefined *)&(this->VFX_Parameter).mbr_0x4 = 0;
  meth_0x401b20((cls_0x50db20 *)&this->VFX_Parameter,param_1 + 0x1c,0,0xffffffff);
  *(_String_base *)&(this->VFX_Parameter).mbr_0x1c = param_1[0x38];
  *(_String_base *)((int)&(this->VFX_Parameter).mbr_0x1c + 1) = param_1[0x39];
  *(_String_base *)((int)&(this->VFX_Parameter).mbr_0x1c + 2) = param_1[0x3a];
  *(_String_base *)((int)&(this->VFX_Parameter).mbr_0x1c + 3) = param_1[0x3b];
  *(_String_base *)&(this->VFX_Parameter).mbr_0x20 = param_1[0x3c];
  (this->VFX_Parameter).mbr_0x24 = *(dword *)(param_1 + 0x40);
  (this->VFX_Parameter).mbr_0x28 = *(dword *)(param_1 + 0x44);
  (this->VFX_Parameter).mbr_0x2c = *(dword *)(param_1 + 0x48);
  ExceptionList = local_c;
  return this;
}



cls_0x50db20 * __thiscall cls_0x50db20::cls_0x50db20(cls_0x50db20 *this)

{
  char *pcVar1;
  char *pcVar2;
  void *local_14;
  undefined *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00633271;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  (this->VFX_Parameter).mbr_0x1c = 0xf;
  (this->VFX_Parameter).mbr_0x18 = 0;
  *(undefined *)&(this->VFX_Parameter).mbr_0x8 = 0;
  this->field_0x90 = 0;
  this->field_0x91 = 0;
  this->field_0x92 = 0;
  this->field_0x93 = 0;
  this->field_0x94 = 0;
  this->field_0x95 = 0;
  this->field_0x96 = 0;
  *(undefined4 *)&this->field_0x98 = 0;
  *(undefined4 *)&this->field_0xb4 = 0xf;
  *(undefined4 *)&this->field_0xb0 = 0;
  local_c._0_1_ = 1;
  local_c._1_3_ = 0;
  this->field_0xa0 = 0;
  pcVar1 = "OPAQUE";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  meth_0x401bd0((cls_0x50db20 *)&this->field_0x9c,"OPAQUE",(uint)(pcVar2 + -0x671f24));
  *(undefined4 *)&this->field_0xd0 = 0xf;
  *(undefined4 *)&this->field_0xcc = 0;
  local_c = CONCAT31(local_c._1_3_,2);
  this->field_0xbc = 0;
  pcVar1 = "SILENT";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  meth_0x401bd0((cls_0x50db20 *)&this->field_0xb8,"SILENT",(uint)(pcVar2 + -0x671f1c));
  this->field_0xd4 = 0;
  this->mbr_0xd8 = 0;
  this->mbr_0xdc = 0;
  *(undefined *)&this->mbr_0xe0 = 0;
  this->mbr_0xe8 = 0;
  this->mbr_0xec = 0;
  *(undefined *)&this->mbr_0xf0 = 0;
  this->mbr_0xf8 = 0;
  this->mbr_0xfc = 0;
  this->mbr_0x100 = 0;
  this->mbr_0x104 = 0;
  this->mbr_0x108 = 0;
  this->mbr_0x110 = 0;
  this->mbr_0x114 = 0;
  this->mbr_0x118 = 0;
  this->mbr_0x11c = 0;
  *(undefined *)&this->mbr_0x120 = 0;
  this->mbr_0x128 = 0;
  this->mbr_0x12c = 0;
  this->mbr_0x130 = 0;
  this->mbr_0x134 = 0;
  this->mbr_0x138 = 0;
  this->mbr_0x13c = 0;
  *(undefined *)&this->mbr_0x140 = 0;
  this->mbr_0x148 = 0;
  this->mbr_0x14c = 0;
  this->mbr_0x150 = 0;
  this->mbr_0x154 = 0;
  this->mbr_0x158 = 0;
  (this->VFX_Parameter).vftptr_0x0 = (VFX_Parameter__vftable_673a20 *)0xffffffff;
  ExceptionList = local_14;
  return this;
}



void __thiscall cls_0x50db20::meth_0x4d05e0(cls_0x50db20 *this)

{
  cls_0x50db20 *pcVar1;
  undefined local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006332c8;
  local_c = ExceptionList;
  pcVar1 = (cls_0x50db20 *)0x28;
  ExceptionList = &local_c;
  FUN_0052ba00('(');
  pcVar1 = FUN_0052ba50(local_28,pcVar1);
  local_4 = 0;
  meth_0x401b20(this,(_String_base *)pcVar1,0,0xffffffff);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  FUN_0052ba00(')');
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x50db20::meth_0x4d1290(cls_0x50db20 *this,FILE *param_1)

{
  dword *pdVar1;
  undefined4 *puVar2;
  G3D_LightmapSurfaceAttribute *this_00;
  uint unaff_retaddr;
  uint local_80;
  float local_7c;
  uint local_78;
  dword local_74;
  dword local_70;
  dword local_6c;
  dword local_68;
  dword local_64;
  dword local_60;
  dword local_5c;
  dword local_58;
  dword local_54;
  dword local_50;
  dword local_4c;
  FILE local_38;
  void *local_14;
  undefined *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00633338;
  local_14 = ExceptionList;
  local_38._tmpfname = (char *)(DAT_007062c0 ^ unaff_retaddr);
  local_38._bufsiz = 0xf;
  local_38._charbuf = 0;
  local_38._cnt = local_38._cnt & 0xffffff00;
  local_c = 0;
  ExceptionList = &local_14;
  G3D_LightmapSurfaceAttribute::meth_0x4d0450((G3D_LightmapSurfaceAttribute *)this,&local_38);
  meth_0x401b20(this,(_String_base *)&local_38,0,0xffffffff);
  (this->VFX_Parameter).vftptr_0x0 = (VFX_Parameter__vftable_673a20 *)0xffffffff;
  G3D_LightmapSurfaceAttribute::meth_0x4d0670
            ((G3D_LightmapSurfaceAttribute *)&(this->VFX_Parameter).mbr_0x4,param_1);
  pdVar1 = (dword *)FUN_004c89e0();
  (this->VFX_Parameter).mbr_0x20 = *pdVar1;
  (this->VFX_Parameter).mbr_0x24 = pdVar1[1];
  (this->VFX_Parameter).mbr_0x28 = pdVar1[2];
  (this->VFX_Parameter).mbr_0x2c = pdVar1[3];
  pdVar1 = (dword *)FUN_004c89e0();
  (this->VFX_Parameter).mbr_0x30 = *pdVar1;
  *(dword *)&this->field_0x50 = pdVar1[1];
  *(dword *)&this->field_0x54 = pdVar1[2];
  *(dword *)&this->field_0x58 = pdVar1[3];
  puVar2 = (undefined4 *)FUN_004c89e0();
  *(undefined4 *)&this->field_0x5c = *puVar2;
  *(undefined4 *)&this->field_0x60 = puVar2[1];
  *(undefined4 *)&this->field_0x64 = puVar2[2];
  *(undefined4 *)&this->field_0x68 = puVar2[3];
  puVar2 = (undefined4 *)FUN_004c89e0();
  *(undefined4 *)&this->field_0x6c = *puVar2;
  *(undefined4 *)&this->field_0x70 = puVar2[1];
  *(undefined4 *)&this->field_0x74 = puVar2[2];
  *(undefined4 *)&this->field_0x78 = puVar2[3];
  _fread(&local_7c,4,1,param_1);
  *(double *)&this->field_0x80 = (double)local_7c;
  _fread(&local_7c,4,1,param_1);
  *(double *)&this->field_0x88 = (double)local_7c;
  G3D_LightmapSurfaceAttribute::meth_0x4d0450(this_00,(FILE *)&this->field_0x9c);
  G3D_LightmapSurfaceAttribute::meth_0x4d0450
            ((G3D_LightmapSurfaceAttribute *)&this->field_0xb8,(FILE *)&this->field_0xb8);
  local_80 = 0;
  _fread(&local_80,4,1,param_1);
  if ((local_80 & 1) != 0) {
    _fread(&local_58,8,1,param_1);
    this->field_0xd4 = 1;
    this->mbr_0xd8 = local_58;
    this->mbr_0xdc = local_54;
  }
  if ((local_80 & 2) != 0) {
    _fread(&local_50,8,1,param_1);
    *(undefined *)&this->mbr_0xe0 = 1;
    this->mbr_0xe8 = local_50;
    this->mbr_0xec = local_4c;
  }
  if ((local_80 & 4) != 0) {
    _fread(&local_60,8,1,param_1);
    _fread(&local_68,8,1,param_1);
    this->mbr_0xf8 = local_60;
    *(undefined *)&this->mbr_0xf0 = 1;
    this->mbr_0xfc = local_5c;
    this->mbr_0x100 = local_68;
    this->mbr_0x104 = local_64;
  }
  if ((local_80 & 8) != 0) {
    _fread(&local_60,8,1,param_1);
    _fread(&local_68,8,1,param_1);
    this->mbr_0x110 = local_60;
    this->mbr_0x108 = 1;
    this->mbr_0x114 = local_5c;
    this->mbr_0x118 = local_68;
    this->mbr_0x11c = local_64;
  }
  if ((local_80 & 0x10) != 0) {
    _fread(&local_58,8,1,param_1);
    _fread(&local_50,8,1,param_1);
    _fread(&local_68,8,1,param_1);
    this->mbr_0x128 = local_58;
    this->mbr_0x12c = local_54;
    this->mbr_0x130 = local_50;
    *(undefined *)&this->mbr_0x120 = 1;
    this->mbr_0x134 = local_4c;
    this->mbr_0x138 = local_68;
    this->mbr_0x13c = local_64;
  }
  if ((local_80 & 0x20) != 0) {
    _fread(&local_68,8,1,param_1);
    _fread(&local_74,4,1,param_1);
    _fread(&local_70,4,1,param_1);
    _fread(&local_6c,4,1,param_1);
    this->mbr_0x148 = local_68;
    this->mbr_0x14c = local_64;
    *(undefined *)&this->mbr_0x140 = 1;
    this->mbr_0x150 = local_74;
    this->mbr_0x154 = local_70;
    this->mbr_0x158 = local_6c;
  }
  local_78 = 0;
  _fread(&local_78,4,1,param_1);
  this->field_0x91 = (byte)local_78 & 1;
  this->field_0x90 = (byte)(local_78 >> 1) & 1;
  this->field_0x92 = (byte)(local_78 >> 2) & 1;
  this->field_0x96 = (byte)(local_78 >> 5) & 1;
  this->field_0x93 = (byte)(local_78 >> 3) & 1;
  this->field_0x94 = (byte)(local_78 >> 4) & 1;
  if (0xf < (uint)local_38._bufsiz) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_38._cnt);
  }
  ExceptionList = local_14;
  FUN_00616e15((uint)local_38._tmpfname ^ unaff_retaddr);
  return;
}



void __thiscall cls_0x50db20::meth_0x4d16a0(cls_0x50db20 *this,int param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  dword dVar4;
  dword dVar5;
  dword dVar6;
  dword dVar7;
  dword dVar8;
  dword dVar9;
  dword *pdVar10;
  undefined4 *puVar11;
  uint unaff_retaddr;
  _String_base local_38 [4];
  void *local_34;
  dword local_24;
  uint local_20;
  VFX_Parameter__vftable_673a20 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00633338;
  local_14 = ExceptionList;
  local_1c = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  local_20 = 0xf;
  local_24 = 0;
  local_34 = (void *)((uint)local_34 & 0xffffff00);
  local_c = 0;
  ExceptionList = &local_14;
  FUN_004d0510((cls_0x50db20 *)local_38,param_1,param_2);
  meth_0x401b20(this,local_38,0,0xffffffff);
  (this->VFX_Parameter).vftptr_0x0 = (VFX_Parameter__vftable_673a20 *)0xffffffff;
  G3D_LightmapSurfaceAttribute::meth_0x4d0690
            ((G3D_LightmapSurfaceAttribute *)&(this->VFX_Parameter).mbr_0x4,param_1,param_2);
  pdVar10 = (dword *)FUN_004c8a30();
  (this->VFX_Parameter).mbr_0x20 = *pdVar10;
  (this->VFX_Parameter).mbr_0x24 = pdVar10[1];
  (this->VFX_Parameter).mbr_0x28 = pdVar10[2];
  (this->VFX_Parameter).mbr_0x2c = pdVar10[3];
  pdVar10 = (dword *)FUN_004c8a30();
  (this->VFX_Parameter).mbr_0x30 = *pdVar10;
  *(dword *)&this->field_0x50 = pdVar10[1];
  *(dword *)&this->field_0x54 = pdVar10[2];
  *(dword *)&this->field_0x58 = pdVar10[3];
  puVar11 = (undefined4 *)FUN_004c8a30();
  *(undefined4 *)&this->field_0x5c = *puVar11;
  *(undefined4 *)&this->field_0x60 = puVar11[1];
  *(undefined4 *)&this->field_0x64 = puVar11[2];
  *(undefined4 *)&this->field_0x68 = puVar11[3];
  puVar11 = (undefined4 *)FUN_004c8a30();
  *(undefined4 *)&this->field_0x6c = *puVar11;
  *(undefined4 *)&this->field_0x70 = puVar11[1];
  *(undefined4 *)&this->field_0x74 = puVar11[2];
  *(undefined4 *)&this->field_0x78 = puVar11[3];
  fVar1 = *(float *)(*param_2 + param_1);
  *param_2 = *param_2 + 4;
  *(double *)&this->field_0x80 = (double)fVar1;
  fVar1 = *(float *)(*param_2 + param_1);
  *param_2 = *param_2 + 4;
  *(double *)&this->field_0x88 = (double)fVar1;
  FUN_004d0510((cls_0x50db20 *)&this->field_0x9c,param_1,param_2);
  FUN_004d0510((cls_0x50db20 *)&this->field_0xb8,param_1,param_2);
  iVar2 = *param_2;
  uVar3 = *(uint *)(iVar2 + param_1);
  *param_2 = iVar2 + 4;
  if ((uVar3 & 1) != 0) {
    dVar4 = *(dword *)(iVar2 + 4 + param_1);
    dVar5 = *(dword *)(iVar2 + 8 + param_1);
    *param_2 = iVar2 + 0xc;
    this->field_0xd4 = 1;
    this->mbr_0xd8 = dVar4;
    this->mbr_0xdc = dVar5;
  }
  if ((uVar3 & 2) != 0) {
    iVar2 = *param_2;
    dVar4 = *(dword *)(iVar2 + param_1);
    dVar5 = *(dword *)(iVar2 + 4 + param_1);
    *param_2 = iVar2 + 8;
    *(undefined *)&this->mbr_0xe0 = 1;
    this->mbr_0xe8 = dVar4;
    this->mbr_0xec = dVar5;
  }
  if ((uVar3 & 4) != 0) {
    iVar2 = *param_2;
    dVar4 = *(dword *)(iVar2 + param_1);
    dVar5 = *(dword *)(iVar2 + 4 + param_1);
    *param_2 = iVar2 + 8;
    dVar6 = *(dword *)(iVar2 + 8 + param_1);
    dVar7 = *(dword *)(iVar2 + 0xc + param_1);
    *param_2 = iVar2 + 0x10;
    this->mbr_0xf8 = dVar4;
    this->mbr_0xfc = dVar5;
    *(undefined *)&this->mbr_0xf0 = 1;
    this->mbr_0x100 = dVar6;
    this->mbr_0x104 = dVar7;
  }
  if ((uVar3 & 8) != 0) {
    iVar2 = *param_2;
    dVar4 = *(dword *)(iVar2 + param_1);
    dVar5 = *(dword *)(iVar2 + 4 + param_1);
    *param_2 = iVar2 + 8;
    dVar6 = *(dword *)(iVar2 + 8 + param_1);
    dVar7 = *(dword *)(iVar2 + 0xc + param_1);
    *param_2 = iVar2 + 0x10;
    this->mbr_0x110 = dVar4;
    this->mbr_0x114 = dVar5;
    this->mbr_0x108 = 1;
    this->mbr_0x118 = dVar6;
    this->mbr_0x11c = dVar7;
  }
  if ((uVar3 & 0x10) != 0) {
    iVar2 = *param_2;
    dVar4 = *(dword *)(iVar2 + param_1);
    dVar5 = *(dword *)(iVar2 + 4 + param_1);
    *param_2 = iVar2 + 8;
    dVar6 = *(dword *)(iVar2 + 8 + param_1);
    dVar7 = *(dword *)(iVar2 + 0xc + param_1);
    *param_2 = iVar2 + 0x10;
    dVar8 = *(dword *)(iVar2 + 0x10 + param_1);
    dVar9 = *(dword *)(iVar2 + 0x14 + param_1);
    *param_2 = iVar2 + 0x18;
    this->mbr_0x128 = dVar4;
    this->mbr_0x12c = dVar5;
    this->mbr_0x130 = dVar6;
    this->mbr_0x134 = dVar7;
    *(undefined *)&this->mbr_0x120 = 1;
    this->mbr_0x138 = dVar8;
    this->mbr_0x13c = dVar9;
  }
  if ((uVar3 & 0x20) != 0) {
    iVar2 = *param_2;
    dVar4 = *(dword *)(iVar2 + param_1);
    dVar5 = *(dword *)(iVar2 + 4 + param_1);
    *param_2 = iVar2 + 8;
    dVar6 = *(dword *)(iVar2 + 8 + param_1);
    *param_2 = iVar2 + 0xc;
    dVar7 = *(dword *)(iVar2 + 0xc + param_1);
    *param_2 = iVar2 + 0x10;
    dVar8 = *(dword *)(iVar2 + 0x10 + param_1);
    *param_2 = iVar2 + 0x14;
    this->mbr_0x148 = dVar4;
    this->mbr_0x150 = dVar6;
    *(undefined *)&this->mbr_0x140 = 1;
    this->mbr_0x14c = dVar5;
    this->mbr_0x154 = dVar7;
    this->mbr_0x158 = dVar8;
  }
  uVar3 = *(uint *)(*param_2 + param_1);
  *param_2 = *param_2 + 4;
  this->field_0x91 = (byte)uVar3 & 1;
  this->field_0x90 = (byte)(uVar3 >> 1) & 1;
  this->field_0x92 = (byte)(uVar3 >> 2) & 1;
  this->field_0x96 = (byte)(uVar3 >> 5) & 1;
  this->field_0x93 = (byte)(uVar3 >> 3) & 1;
  this->field_0x94 = (byte)(uVar3 >> 4) & 1;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    _free(local_34);
  }
  ExceptionList = local_14;
  FUN_00616e15((uint)local_1c ^ unaff_retaddr);
  return;
}



cls_0x50db20 * __thiscall cls_0x50db20::cls_0x50db20(cls_0x50db20 *this,_String_base *param_1)

{
  meth_0x401b20(this,param_1,0,0xffffffff);
  meth_0x401b20((cls_0x50db20 *)&this->VFX_Parameter,param_1 + 0x1c,0,0xffffffff);
  (this->VFX_Parameter).mbr_0x1c = *(dword *)(param_1 + 0x38);
  (this->VFX_Parameter).mbr_0x20 = *(dword *)(param_1 + 0x3c);
  (this->VFX_Parameter).mbr_0x24 = *(dword *)(param_1 + 0x40);
  (this->VFX_Parameter).mbr_0x28 = *(dword *)(param_1 + 0x44);
  (this->VFX_Parameter).mbr_0x2c = *(dword *)(param_1 + 0x48);
  (this->VFX_Parameter).mbr_0x30 = *(dword *)(param_1 + 0x4c);
  *(undefined4 *)&this->field_0x50 = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)&this->field_0x54 = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)&this->field_0x58 = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)&this->field_0x5c = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)&this->field_0x60 = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)&this->field_0x64 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)&this->field_0x68 = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)&this->field_0x6c = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)&this->field_0x70 = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)&this->field_0x74 = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)&this->field_0x78 = *(undefined4 *)(param_1 + 0x78);
  meth_0x401b20((cls_0x50db20 *)&this->field_0x7c,param_1 + 0x7c,0,0xffffffff);
  meth_0x401b20((cls_0x50db20 *)&this->field_0x98,param_1 + 0x98,0,0xffffffff);
  this->field_0xb4 = param_1[0xb4];
  this->field_0xb5 = param_1[0xb5];
  this->field_0xb6 = param_1[0xb6];
  *(undefined4 *)&this->field_0xb8 = *(undefined4 *)(param_1 + 0xb8);
  this->field_0xbc = param_1[0xbc];
  *(undefined4 *)&this->field_0xc0 = *(undefined4 *)(param_1 + 0xc0);
  this->field_0xc4 = param_1[0xc4];
  *(undefined4 *)&this->field_0xc8 = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)&this->field_0xcc = *(undefined4 *)(param_1 + 0xcc);
  this->field_0xd0 = param_1[0xd0];
  *(undefined4 *)&this->field_0xd4 = *(undefined4 *)(param_1 + 0xd4);
  this->mbr_0xd8 = *(dword *)(param_1 + 0xd8);
  *(_String_base *)&this->mbr_0xdc = param_1[0xdc];
  this->mbr_0xe0 = *(dword *)(param_1 + 0xe0);
  this->mbr_0xe4 = *(dword *)(param_1 + 0xe4);
  this->mbr_0xe8 = *(dword *)(param_1 + 0xe8);
  *(_String_base *)&this->mbr_0xec = param_1[0xec];
  this->mbr_0xf0 = *(dword *)(param_1 + 0xf0);
  this->mbr_0xf4 = *(dword *)(param_1 + 0xf4);
  this->mbr_0xf8 = *(dword *)(param_1 + 0xf8);
  this->mbr_0xfc = *(dword *)(param_1 + 0xfc);
  return this;
}



void __thiscall cls_0x50db20::meth_0x4d5100(cls_0x50db20 *this)

{
  VFX_Parameter__vftable_673a20 **ppVVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  dword *pdVar5;
  dword *pdVar6;
  int *piVar7;
  cls_0x50db20 *pcVar8;
  char *pcVar9;
  undefined4 *****pppppuVar10;
  byte *pbVar11;
  bool bVar12;
  bool bVar13;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 extraout_ST0_04;
  float10 extraout_ST0_05;
  float10 extraout_ST0_06;
  float10 extraout_ST0_07;
  float10 extraout_ST0_08;
  float10 extraout_ST0_09;
  float10 extraout_ST0_10;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint unaff_retaddr;
  float10 *pfVar17;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 *****local_170 [4];
  char *local_160;
  uint local_15c;
  undefined8 local_158;
  undefined local_14c [32];
  VFX_Parameter__vftable_673a20 *local_12c;
  VFX_Parameter__vftable_673a20 *local_128;
  VFX_Parameter__vftable_673a20 *local_124;
  undefined local_120 [8];
  dword local_118;
  dword local_114;
  undefined8 local_110;
  dword local_104;
  int local_fc;
  void *local_f8;
  dword local_e8;
  uint local_e4;
  _String_base local_e0 [4];
  void *local_dc;
  undefined4 local_cc;
  uint local_c8;
  int local_c4 [4];
  int local_b4 [4];
  undefined local_a4 [72];
  int local_5c [16];
  uint local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006334df;
  local_14 = ExceptionList;
  local_1c = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_14;
  FUN_0052ba00('{');
  this->field_0x90 = 0;
  this->field_0x91 = 0;
  this->field_0x92 = 0;
  this->field_0x93 = 0;
  *(undefined *)&this->mbr_0x140 = 0;
  *(undefined *)&this->mbr_0x120 = 0;
  this->mbr_0x108 = 0;
  *(undefined *)&this->mbr_0xf0 = 0;
  *(undefined *)&this->mbr_0xe0 = 0;
  this->field_0xd4 = 0;
  this->field_0x96 = 0;
  this->field_0x95 = 0;
  this->field_0x94 = 0;
  local_e4 = 0xf;
  local_e8 = 0;
  local_f8 = (void *)((uint)local_f8 & 0xffffff00);
  pcVar9 = "NULL_MATERIAL";
  do {
    pcVar2 = pcVar9;
    pcVar9 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  meth_0x401bd0((cls_0x50db20 *)&local_fc,"NULL_MATERIAL",(uint)(pcVar2 + -0x671908));
  local_c = 0;
  meth_0x401b20((cls_0x50db20 *)&(this->VFX_Parameter).mbr_0x4,(_String_base *)&local_fc,0,
                0xffffffff);
  local_c = 0xffffffff;
  if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
    _free(local_f8);
  }
  ppVVar1 = (VFX_Parameter__vftable_673a20 **)FUN_0052b940(local_c4);
  local_12c = ppVVar1[1];
  local_14c._28_4_ = *ppVVar1;
  local_128 = ppVVar1[2];
  local_124 = ppVVar1[3];
  do {
    if ((VFX_Parameter__vftable_673a20 *)local_14c._28_4_ == (VFX_Parameter__vftable_673a20 *)0x7d)
    {
      ExceptionList = local_14;
      FUN_00616e15(local_1c ^ unaff_retaddr);
      return;
    }
    if ((VFX_Parameter__vftable_673a20 *)local_14c._28_4_ == (VFX_Parameter__vftable_673a20 *)0x100)
    {
      FUN_0052afe0((cls_0x50db20 *)&stack0xfffffe8c);
      local_c = 1;
      pcVar9 = "Mtl_ID";
      do {
        pcVar2 = pcVar9;
        pcVar9 = pcVar2 + 1;
      } while (*pcVar2 != '\0');
      pcVar2 = pcVar2 + -0x671954;
      if (local_160 == (char *)0x0) {
LAB_004d52d4:
        if ((local_160 < pcVar2) || (local_160 != pcVar2)) goto LAB_004d536d;
        pcVar8 = (cls_0x50db20 *)0x28;
        FUN_0052ba00('(');
        FUN_0052ba50(local_e0,pcVar8);
        local_c = CONCAT31(local_c._1_3_,2);
        meth_0x401b20(this,local_e0,0,0xffffffff);
        (this->VFX_Parameter).vftptr_0x0 = (VFX_Parameter__vftable_673a20 *)0xffffffff;
        FUN_0052ba00(')');
        if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
          _free(local_dc);
        }
        local_c8 = 0xf;
        local_cc = 0;
        local_dc = (void *)((uint)local_dc & 0xffffff00);
      }
      else {
        pcVar9 = local_160;
        if (pcVar2 <= local_160) {
          pcVar9 = pcVar2;
        }
        pppppuVar10 = local_170[0];
        if (local_15c < 0x10) {
          pppppuVar10 = local_170;
        }
        bVar12 = false;
        iVar3 = 0;
        bVar13 = true;
        pbVar11 = &DAT_00671954;
        do {
          if (pcVar9 == (char *)0x0) break;
          pcVar9 = pcVar9 + -1;
          bVar12 = *(byte *)pppppuVar10 < *pbVar11;
          bVar13 = *(byte *)pppppuVar10 == *pbVar11;
          pppppuVar10 = (undefined4 *****)((int)pppppuVar10 + 1);
          pbVar11 = pbVar11 + 1;
        } while (bVar13);
        if (!bVar13) {
          iVar3 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        }
        if (iVar3 == 0) goto LAB_004d52d4;
LAB_004d536d:
        pcVar9 = "Name";
        do {
          pcVar2 = pcVar9;
          pcVar9 = pcVar2 + 1;
        } while (*pcVar2 != '\0');
        uVar4 = meth_0x41e4b0((cls_0x50db20 *)&stack0xfffffe8c,0,(uint)local_160,
                              (_String_base *)&DAT_0065cbe0,(uint)(pcVar2 + -0x65cbe0));
        if (uVar4 == 0) {
          meth_0x4d05e0((cls_0x50db20 *)&(this->VFX_Parameter).mbr_0x4);
        }
        else {
          pcVar9 = "Ambient";
          do {
            pcVar2 = pcVar9;
            pcVar9 = pcVar2 + 1;
          } while (*pcVar2 != '\0');
          uVar4 = meth_0x41e4b0((cls_0x50db20 *)&stack0xfffffe8c,0,(uint)local_160,
                                (_String_base *)"Ambient",(uint)(pcVar2 + -0x67194c));
          if (uVar4 == 0) {
            pdVar5 = (dword *)FUN_004c8750();
            (this->VFX_Parameter).mbr_0x20 = *pdVar5;
            (this->VFX_Parameter).mbr_0x24 = pdVar5[1];
            (this->VFX_Parameter).mbr_0x28 = pdVar5[2];
            (this->VFX_Parameter).mbr_0x2c = pdVar5[3];
          }
          else {
            pcVar9 = "Diffuse";
            do {
              pcVar2 = pcVar9;
              pcVar9 = pcVar2 + 1;
            } while (*pcVar2 != '\0');
            uVar4 = meth_0x41e4b0((cls_0x50db20 *)&stack0xfffffe8c,0,(uint)local_160,
                                  (_String_base *)"Diffuse",(uint)(pcVar2 + -0x671944));
            if (uVar4 == 0) {
              pdVar6 = (dword *)FUN_004c8750();
              pdVar5 = &(this->VFX_Parameter).mbr_0x30;
            }
            else {
              pcVar9 = "Emissive";
              do {
                pcVar2 = pcVar9;
                pcVar9 = pcVar2 + 1;
              } while (*pcVar2 != '\0');
              uVar4 = meth_0x41e4b0((cls_0x50db20 *)&stack0xfffffe8c,0,(uint)local_160,
                                    (_String_base *)"Emissive",(uint)(pcVar2 + -0x671938));
              if (uVar4 == 0) {
                pdVar6 = (dword *)FUN_004c8750();
                pdVar5 = (dword *)&this->field_0x5c;
              }
              else {
                pcVar9 = "Specular";
                do {
                  pcVar2 = pcVar9;
                  pcVar9 = pcVar2 + 1;
                } while (*pcVar2 != '\0');
                uVar4 = meth_0x41e4b0((cls_0x50db20 *)&stack0xfffffe8c,0,(uint)local_160,
                                      (_String_base *)"Specular",(uint)(pcVar2 + -0x67192c));
                if (uVar4 != 0) {
                  bVar12 = FUN_0043ffd0((cls_0x50db20 *)&stack0xfffffe8c,(_String_base *)"Shininess"
                                       );
                  if (bVar12) {
                    pfVar17 = (float10 *)0x28;
                    FUN_0052ba00('(');
                    FUN_004c8720(pfVar17);
                    *(double *)&this->field_0x80 = (double)extraout_ST0;
                    FUN_0052ba00(')');
                  }
                  else {
                    bVar12 = FUN_0043ffd0((cls_0x50db20 *)&stack0xfffffe8c,(_String_base *)"Alpha");
                    if (bVar12) {
                      pfVar17 = (float10 *)0x28;
                      FUN_0052ba00('(');
                      FUN_004c8720(pfVar17);
                      *(double *)&this->field_0x88 = (double)extraout_ST0_00;
                      FUN_0052ba00(')');
                    }
                    else {
                      bVar12 = FUN_0043ffd0((cls_0x50db20 *)&stack0xfffffe8c,
                                            (_String_base *)"BLEND_STATE");
                      if (bVar12) {
                        FUN_0052ba00('(');
                        piVar7 = (int *)FUN_0052b940(local_5c);
                        local_110 = (double)CONCAT44(piVar7[1],(dword)local_110);
                        local_104 = piVar7[3];
                        if (*piVar7 == 0x100) {
                          pcVar8 = FUN_0052afe0((cls_0x50db20 *)(local_a4 + 0x1c));
                          local_c._0_1_ = 3;
                          meth_0x401b20((cls_0x50db20 *)&this->field_0x9c,(_String_base *)pcVar8,0,
                                        0xffffffff);
                          local_c = CONCAT31(local_c._1_3_,1);
                          cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(local_a4 + 0x1c));
                        }
                        FUN_0052ba00(')');
                      }
                      else {
                        bVar12 = FUN_0043ffd0((cls_0x50db20 *)&stack0xfffffe8c,
                                              (_String_base *)"MATERIAL_TYPE");
                        if (bVar12) {
                          FUN_0052ba00('(');
                          piVar7 = (int *)FUN_0052b940(&local_fc);
                          local_110 = (double)CONCAT44(piVar7[1],(dword)local_110);
                          local_104 = piVar7[3];
                          if (*piVar7 == 0x100) {
                            pcVar8 = FUN_0052afe0((cls_0x50db20 *)local_a4);
                            local_c._0_1_ = 4;
                            meth_0x401b20((cls_0x50db20 *)&this->field_0xb8,(_String_base *)pcVar8,0
                                          ,0xffffffff);
                            local_c = CONCAT31(local_c._1_3_,1);
                            cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_a4);
                          }
                          FUN_0052ba00(')');
                        }
                        else {
                          bVar12 = FUN_0043ffd0((cls_0x50db20 *)&stack0xfffffe8c,
                                                (_String_base *)"SCROLL_U");
                          if (bVar12) {
                            pfVar17 = (float10 *)0x28;
                            FUN_0052ba00('(');
                            FUN_0052baf0(pfVar17);
                            *(double *)&this->mbr_0xd8 = (double)extraout_ST0_01;
                            this->field_0xd4 = 1;
                            FUN_0052ba00(')');
                          }
                          else {
                            bVar12 = FUN_0043ffd0((cls_0x50db20 *)&stack0xfffffe8c,
                                                  (_String_base *)"SCROLL_V");
                            if (bVar12) {
                              pfVar17 = (float10 *)0x28;
                              FUN_0052ba00('(');
                              FUN_0052baf0(pfVar17);
                              *(double *)&this->mbr_0xe8 = (double)extraout_ST0_02;
                              *(undefined *)&this->mbr_0xe0 = 1;
                              FUN_0052ba00(')');
                            }
                            else {
                              bVar12 = FUN_0043ffd0((cls_0x50db20 *)&stack0xfffffe8c,
                                                    (_String_base *)"SIN_U");
                              if (bVar12) {
                                pfVar17 = (float10 *)0x28;
                                FUN_0052ba00('(');
                                FUN_0052baf0(pfVar17);
                                local_158 = (double)extraout_ST0_03;
                                FUN_0052baf0(pfVar17);
                                FUN_0052ba00(')');
                                local_180 = SUB84((double)extraout_ST0_04,0);
                                meth_0x4c8610(this,1,(VFX_Parameter__vftable_673a20 *)local_158,
                                              local_158._4_4_,local_180,
                                              (int)((ulonglong)(double)extraout_ST0_04 >> 0x20));
                              }
                              else {
                                bVar12 = FUN_0043ffd0((cls_0x50db20 *)&stack0xfffffe8c,
                                                      (_String_base *)"SIN_V");
                                if (bVar12) {
                                  pfVar17 = (float10 *)0x28;
                                  FUN_0052ba00('(');
                                  FUN_0052baf0(pfVar17);
                                  FUN_0052baf0(pfVar17);
                                  local_158 = (double)extraout_ST0_06;
                                  FUN_0052ba00(')');
                                  uStack_17c = (undefined4)
                                               ((ulonglong)(double)extraout_ST0_05 >> 0x20);
                                  local_180 = SUB84((double)extraout_ST0_05,0);
                                  meth_0x4c8650(this,1,local_180,uStack_17c,
                                                (VFX_Parameter__vftable_673a20 *)local_158,
                                                (int)((ulonglong)local_158 >> 0x20));
                                }
                                else {
                                  bVar12 = FUN_0043ffd0((cls_0x50db20 *)&stack0xfffffe8c,
                                                        (_String_base *)"ROTATE");
                                  if (bVar12) {
                                    pfVar17 = (float10 *)0x28;
                                    FUN_0052ba00('(');
                                    FUN_0052baf0(pfVar17);
                                    local_110 = (double)extraout_ST0_07;
                                    FUN_0052baf0(pfVar17);
                                    local_158 = (double)extraout_ST0_08;
                                    FUN_0052baf0(pfVar17);
                                    FUN_0052ba00(')');
                                    meth_0x4c8690(this,1,(dword)local_110,local_110._4_4_,
                                                  (VFX_Parameter__vftable_673a20 *)local_158,
                                                  local_158._4_4_,
                                                  SUB84((double)(float)extraout_ST0_09,0),
                                                  (int)((ulonglong)(double)(float)extraout_ST0_09 >>
                                                       0x20));
                                  }
                                  else {
                                    bVar12 = FUN_0043ffd0((cls_0x50db20 *)&stack0xfffffe8c,
                                                          (_String_base *)"ANIMATE");
                                    if (bVar12) {
                                      pfVar17 = (float10 *)0x28;
                                      FUN_0052ba00('(');
                                      FUN_0052baf0(pfVar17);
                                      local_110 = (double)extraout_ST0_10;
                                      FUN_0052baf0(pfVar17);
                                      uVar14 = FUN_00616e24();
                                      FUN_0052baf0(pfVar17);
                                      uVar15 = FUN_00616e24();
                                      FUN_0052baf0(pfVar17);
                                      uVar16 = FUN_00616e24();
                                      FUN_0052ba00(')');
                                      meth_0x4c86e0(this,1,(dword)local_110,local_110._4_4_,
                                                    (int)uVar14,(int)uVar15,(int)uVar16);
                                    }
                                    else {
                                      bVar12 = FUN_0043ffd0((cls_0x50db20 *)&stack0xfffffe8c,
                                                            (_String_base *)PTR_s_Flags_006fb398);
                                      if (bVar12) {
                                        FUN_0052ba00('(');
                                        pdVar5 = (dword *)FUN_0052b940(local_b4);
                                        local_120._4_4_ = pdVar5[1];
                                        local_120._0_4_ = *pdVar5;
                                        local_118 = pdVar5[2];
                                        local_114 = pdVar5[3];
                                        if (local_120._0_4_ != 0x29) {
                                          do {
                                            if (local_120._0_4_ == 0x100) {
                                              FUN_0052afe0((cls_0x50db20 *)local_14c);
                                              local_c._0_1_ = 5;
                                              bVar12 = FUN_0043ffd0((cls_0x50db20 *)local_14c,
                                                                    (_String_base *)&DAT_00671900);
                                              if (bVar12) {
                                                this->field_0x91 = 1;
                                                local_c = CONCAT31(local_c._1_3_,1);
                                                cls_0x4d8d70::meth_0x4b2dd0
                                                          ((cls_0x4d8d70 *)local_14c);
                                              }
                                              else {
                                                bVar12 = FUN_0043ffd0((cls_0x50db20 *)local_14c,
                                                                      (_String_base *)"TWO_SIDED");
                                                if (bVar12) {
                                                  this->field_0x90 = 1;
                                                  local_c = CONCAT31(local_c._1_3_,1);
                                                  cls_0x4d8d70::meth_0x4b2dd0
                                                            ((cls_0x4d8d70 *)local_14c);
                                                }
                                                else {
                                                  bVar12 = FUN_0043ffd0((cls_0x50db20 *)local_14c,
                                                                        (_String_base *)"FLOOR");
                                                  if (bVar12) {
                                                    this->field_0x92 = 1;
                                                    local_c = CONCAT31(local_c._1_3_,1);
                                                    cls_0x4d8d70::meth_0x4b2dd0
                                                              ((cls_0x4d8d70 *)local_14c);
                                                  }
                                                  else {
                                                    bVar12 = FUN_0043ffd0((cls_0x50db20 *)local_14c,
                                                                          (_String_base *)
                                                                          "NO_SHADOW");
                                                    if (bVar12) {
                                                      this->field_0x93 = 1;
                                                      local_c = CONCAT31(local_c._1_3_,1);
                                                      cls_0x4d8d70::meth_0x4b2dd0
                                                                ((cls_0x4d8d70 *)local_14c);
                                                    }
                                                    else {
                                                      bVar12 = FUN_0043ffd0((cls_0x50db20 *)
                                                                            local_14c,
                                                                            (_String_base *)
                                                                            "BTM_STORY");
                                                      if (bVar12) {
                                                        this->field_0x94 = 1;
                                                        local_c = CONCAT31(local_c._1_3_,1);
                                                        cls_0x4d8d70::meth_0x4b2dd0
                                                                  ((cls_0x4d8d70 *)local_14c);
                                                      }
                                                      else {
                                                        bVar12 = FUN_0043ffd0((cls_0x50db20 *)
                                                                              local_14c,
                                                                              (_String_base *)
                                                                              "BTM_STORY_INT");
                                                        if (bVar12) {
                                                          this->field_0x95 = 1;
                                                          local_c = CONCAT31(local_c._1_3_,1);
                                                          cls_0x4d8d70::meth_0x4b2dd0
                                                                    ((cls_0x4d8d70 *)local_14c);
                                                        }
                                                        else {
                                                          bVar12 = FUN_0043ffd0((cls_0x50db20 *)
                                                                                local_14c,
                                                                                (_String_base *)
                                                                                "TOP_STORY");
                                                          if (bVar12) {
                                                            this->field_0x96 = 1;
                                                            local_c = CONCAT31(local_c._1_3_,1);
                                                            cls_0x4d8d70::meth_0x4b2dd0
                                                                      ((cls_0x4d8d70 *)local_14c);
                                                          }
                                                          else {
                                                            bVar12 = FUN_0043ffd0((cls_0x50db20 *)
                                                                                  local_14c,
                                                                                  (_String_base *)
                                                                                  "BLD_NUM01");
                                                            if (bVar12) {
                                                              *(undefined4 *)&this->field_0x98 = 1;
                                                              local_c = CONCAT31(local_c._1_3_,1);
                                                              cls_0x4d8d70::meth_0x4b2dd0
                                                                        ((cls_0x4d8d70 *)local_14c);
                                                            }
                                                            else {
                                                              bVar12 = FUN_0043ffd0((cls_0x50db20 *)
                                                                                    local_14c,
                                                                                    (_String_base *)
                                                                                    "BLD_NUM02");
                                                              if (bVar12) {
                                                                *(undefined4 *)&this->field_0x98 = 2
                                                                ;
                                                                local_c = CONCAT31(local_c._1_3_,1);
                                                                cls_0x4d8d70::meth_0x4b2dd0
                                                                          ((cls_0x4d8d70 *)local_14c
                                                                          );
                                                              }
                                                              else {
                                                                bVar12 = FUN_0043ffd0((cls_0x50db20
                                                                                       *)local_14c,
                                                                                      (_String_base
                                                                                       *)"BLD_NUM03"
                                                                                     );
                                                                if (bVar12) {
                                                                  *(undefined4 *)&this->field_0x98 =
                                                                       3;
                                                                  local_c = CONCAT31(local_c._1_3_,1
                                                                                    );
                                                                  cls_0x4d8d70::meth_0x4b2dd0
                                                                            ((cls_0x4d8d70 *)
                                                                             local_14c);
                                                                }
                                                                else {
                                                                  bVar12 = FUN_0043ffd0((
                                                  cls_0x50db20 *)local_14c,
                                                  (_String_base *)"BLD_NUM04");
                                                  if (bVar12) {
                                                    *(undefined4 *)&this->field_0x98 = 4;
                                                    local_c = CONCAT31(local_c._1_3_,1);
                                                    cls_0x4d8d70::meth_0x4b2dd0
                                                              ((cls_0x4d8d70 *)local_14c);
                                                  }
                                                  else {
                                                    bVar12 = FUN_0043ffd0((cls_0x50db20 *)local_14c,
                                                                          (_String_base *)
                                                                          "BLD_NUM05");
                                                    if (bVar12) {
                                                      *(undefined4 *)&this->field_0x98 = 5;
                                                      local_c = CONCAT31(local_c._1_3_,1);
                                                      cls_0x4d8d70::meth_0x4b2dd0
                                                                ((cls_0x4d8d70 *)local_14c);
                                                    }
                                                    else {
                                                      bVar12 = FUN_0043ffd0((cls_0x50db20 *)
                                                                            local_14c,
                                                                            (_String_base *)
                                                                            "BLD_NUM06");
                                                      if (bVar12) {
                                                        *(undefined4 *)&this->field_0x98 = 6;
                                                        local_c = CONCAT31(local_c._1_3_,1);
                                                        cls_0x4d8d70::meth_0x4b2dd0
                                                                  ((cls_0x4d8d70 *)local_14c);
                                                      }
                                                      else {
                                                        bVar12 = FUN_0043ffd0((cls_0x50db20 *)
                                                                              local_14c,
                                                                              (_String_base *)
                                                                              "BLD_NUM07");
                                                        if (bVar12) {
                                                          *(undefined4 *)&this->field_0x98 = 7;
                                                          local_c = CONCAT31(local_c._1_3_,1);
                                                          cls_0x4d8d70::meth_0x4b2dd0
                                                                    ((cls_0x4d8d70 *)local_14c);
                                                        }
                                                        else {
                                                          bVar12 = FUN_0043ffd0((cls_0x50db20 *)
                                                                                local_14c,
                                                                                (_String_base *)
                                                                                "BLD_NUM08");
                                                          if (bVar12) {
                                                            *(undefined4 *)&this->field_0x98 = 8;
                                                            local_c = CONCAT31(local_c._1_3_,1);
                                                            cls_0x4d8d70::meth_0x4b2dd0
                                                                      ((cls_0x4d8d70 *)local_14c);
                                                          }
                                                          else {
                                                            bVar12 = FUN_0043ffd0((cls_0x50db20 *)
                                                                                  local_14c,
                                                                                  (_String_base *)
                                                                                  "BLD_NUM09");
                                                            if (bVar12) {
                                                              *(undefined4 *)&this->field_0x98 = 9;
                                                              local_c = CONCAT31(local_c._1_3_,1);
                                                              cls_0x4d8d70::meth_0x4b2dd0
                                                                        ((cls_0x4d8d70 *)local_14c);
                                                            }
                                                            else {
                                                              bVar12 = FUN_0043ffd0((cls_0x50db20 *)
                                                                                    local_14c,
                                                                                    (_String_base *)
                                                                                    "BLD_NUM10");
                                                              if (bVar12) {
                                                                *(undefined4 *)&this->field_0x98 =
                                                                     10;
                                                                local_c = CONCAT31(local_c._1_3_,1);
                                                                cls_0x4d8d70::meth_0x4b2dd0
                                                                          ((cls_0x4d8d70 *)local_14c
                                                                          );
                                                              }
                                                              else {
                                                                bVar12 = FUN_0043ffd0((cls_0x50db20
                                                                                       *)local_14c,
                                                                                      (_String_base
                                                                                       *)"BLD_NUM11"
                                                                                     );
                                                                if (bVar12) {
                                                                  *(undefined4 *)&this->field_0x98 =
                                                                       0xb;
                                                                  local_c = CONCAT31(local_c._1_3_,1
                                                                                    );
                                                                  cls_0x4d8d70::meth_0x4b2dd0
                                                                            ((cls_0x4d8d70 *)
                                                                             local_14c);
                                                                }
                                                                else {
                                                                  bVar12 = FUN_0043ffd0((
                                                  cls_0x50db20 *)local_14c,
                                                  (_String_base *)"BLD_NUM12");
                                                  if (bVar12) {
                                                    *(undefined4 *)&this->field_0x98 = 0xc;
                                                    local_c = CONCAT31(local_c._1_3_,1);
                                                    cls_0x4d8d70::meth_0x4b2dd0
                                                              ((cls_0x4d8d70 *)local_14c);
                                                  }
                                                  else {
                                                    bVar12 = FUN_0043ffd0((cls_0x50db20 *)local_14c,
                                                                          (_String_base *)
                                                                          "BLD_NUM13");
                                                    if (bVar12) {
                                                      *(undefined4 *)&this->field_0x98 = 0xd;
                                                      local_c = CONCAT31(local_c._1_3_,1);
                                                      cls_0x4d8d70::meth_0x4b2dd0
                                                                ((cls_0x4d8d70 *)local_14c);
                                                    }
                                                    else {
                                                      bVar12 = FUN_0043ffd0((cls_0x50db20 *)
                                                                            local_14c,
                                                                            (_String_base *)
                                                                            "BLD_NUM14");
                                                      if (bVar12) {
                                                        *(undefined4 *)&this->field_0x98 = 0xe;
                                                        local_c = CONCAT31(local_c._1_3_,1);
                                                        cls_0x4d8d70::meth_0x4b2dd0
                                                                  ((cls_0x4d8d70 *)local_14c);
                                                      }
                                                      else {
                                                        bVar12 = FUN_0043ffd0((cls_0x50db20 *)
                                                                              local_14c,
                                                                              (_String_base *)
                                                                              "BLD_NUM15");
                                                        if (bVar12) {
                                                          *(undefined4 *)&this->field_0x98 = 0xf;
                                                          local_c = CONCAT31(local_c._1_3_,1);
                                                          cls_0x4d8d70::meth_0x4b2dd0
                                                                    ((cls_0x4d8d70 *)local_14c);
                                                        }
                                                        else {
                                                          cls_0x4cc4d0::meth_0x4cc4d0
                                                                    ((cls_0x4cc4d0 *)local_120);
                                                          local_c = CONCAT31(local_c._1_3_,1);
                                                          cls_0x4d8d70::meth_0x4b2dd0
                                                                    ((cls_0x4d8d70 *)local_14c);
                                                        }
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                            else {
                                              cls_0x4cc4d0::meth_0x4cc4d0((cls_0x4cc4d0 *)local_120)
                                              ;
                                            }
                                            pdVar5 = (dword *)FUN_0052b940(local_b4);
                                            local_120._4_4_ = pdVar5[1];
                                            local_120._0_4_ = *pdVar5;
                                            local_118 = pdVar5[2];
                                            local_114 = pdVar5[3];
                                          } while (local_120._0_4_ != 0x29);
                                          local_120._0_4_ = 0x29;
                                        }
                                      }
                                      else {
                                        cls_0x4cc4d0::meth_0x4cc4d0
                                                  ((cls_0x4cc4d0 *)(local_14c + 0x1c));
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LAB_004d5e07;
                }
                pdVar6 = (dword *)FUN_004c8750();
                pdVar5 = (dword *)&this->field_0x6c;
              }
            }
            *pdVar5 = *pdVar6;
            pdVar5[1] = pdVar6[1];
            pdVar5[2] = pdVar6[2];
            pdVar5[3] = pdVar6[3];
          }
        }
      }
LAB_004d5e07:
      local_c = 0xffffffff;
      if (0xf < local_15c) {
                    /* WARNING: Subroutine does not return */
        _free(local_170[0]);
      }
      local_15c = 0xf;
      local_160 = (char *)0x0;
      local_170[0] = (undefined4 *****)((uint)local_170[0] & 0xffffff00);
    }
    else {
      cls_0x4cc4d0::meth_0x4cc4d0((cls_0x4cc4d0 *)(local_14c + 0x1c));
    }
    ppVVar1 = (VFX_Parameter__vftable_673a20 **)FUN_0052b940(local_c4);
    local_12c = ppVVar1[1];
    local_14c._28_4_ = *ppVVar1;
    local_128 = ppVVar1[2];
    local_124 = ppVVar1[3];
  } while( true );
}



cls_0x50db20 * __thiscall cls_0x50db20::cls_0x50db20(cls_0x50db20 *this,int param_1)

{
  undefined4 uVar1;
  cls_0x50db20 *pcVar2;
  uint uVar3;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00633660;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
  }
  ExceptionList = &local_10;
  uVar1 = meth_0x4324b0(this,uVar3);
  if ((char)uVar1 != '\0') {
    local_8 = 0;
    pcVar2 = FUN_004d0200(*(_String_base **)(param_1 + 4),*(_String_base **)(param_1 + 8),
                          (cls_0x50db20 *)this->mbr_0x4);
    this->mbr_0x8 = (dword)pcVar2;
  }
  ExceptionList = local_10;
  return this;
}



int __thiscall cls_0x50db20::meth_0x4d7bc0(cls_0x50db20 *this,int param_1)

{
  uint uVar1;
  cls_0x50db20 *pcVar2;
  int iVar3;
  uint uVar4;
  _String_base *p_Var5;
  
  if (this == (cls_0x50db20 *)param_1) {
    return (int)this;
  }
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = ((int)*(_String_base **)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
    if (uVar1 != 0) {
      pcVar2 = (cls_0x50db20 *)this->mbr_0x4;
      if (pcVar2 == (cls_0x50db20 *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (int)(this->mbr_0x8 - (int)pcVar2) / 0x1c;
      }
      if (uVar1 <= uVar4) {
        pcVar2 = FUN_00431e60(*(_String_base **)(param_1 + 4),*(_String_base **)(param_1 + 8),pcVar2
                             );
        FUN_004310a0((int)pcVar2,this->mbr_0x8);
        if (*(int *)(param_1 + 4) == 0) {
          this->mbr_0x8 = this->mbr_0x4;
          return (int)this;
        }
        this->mbr_0x8 =
             ((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c) * 0x1c + this->mbr_0x4;
        return (int)this;
      }
      if (pcVar2 == (cls_0x50db20 *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (int)(this->mbr_0xc - (int)pcVar2) / 0x1c;
      }
      if (uVar1 <= uVar4) {
        iVar3 = meth_0x430800(this);
        p_Var5 = *(_String_base **)(param_1 + 4) + iVar3 * 0x1c;
        FUN_00431e60(*(_String_base **)(param_1 + 4),p_Var5,pcVar2);
        pcVar2 = FUN_004d0200(p_Var5,*(_String_base **)(param_1 + 8),(cls_0x50db20 *)this->mbr_0x8);
        this->mbr_0x8 = (dword)pcVar2;
        return (int)this;
      }
      FUN_004310a0((int)pcVar2,this->mbr_0x8);
                    /* WARNING: Subroutine does not return */
      _free((void *)this->mbr_0x4);
    }
  }
  meth_0x432510(this);
  return (int)this;
}



cls_0x50db20 * __thiscall cls_0x50db20::cls_0x50db20(cls_0x50db20 *this,_String_base *param_1)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00633288;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  meth_0x401b20(this,param_1,0,0xffffffff);
  local_4 = 0;
  G3D_Water::G3D_Water((G3D_Water *)&(this->VFX_Parameter).mbr_0x4,(int)(param_1 + 0x20));
  ExceptionList = local_c;
  return this;
}



cls_0x50db20 * __thiscall
cls_0x50db20::cls_0x50db20(cls_0x50db20 *this,_String_base *param_1,int param_2)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00633288;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  meth_0x401b20(this,param_1,0,0xffffffff);
  local_4 = 0;
  G3D_Water::G3D_Water((G3D_Water *)&(this->VFX_Parameter).mbr_0x4,param_2);
  ExceptionList = local_c;
  return this;
}



cls_0x50db20 * __thiscall
cls_0x50db20::cls_0x50db20(cls_0x50db20 *this,_String_base *param_1,_String_base *param_2)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00633d18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  meth_0x401b20(this,param_1,0,0xffffffff);
  (this->VFX_Parameter).mbr_0x18 = 0xf;
  *(undefined4 *)&(this->VFX_Parameter).field_0x14 = 0;
  local_4 = 0;
  *(undefined *)&(this->VFX_Parameter).mbr_0x4 = 0;
  meth_0x401b20((cls_0x50db20 *)&this->VFX_Parameter,param_2,0,0xffffffff);
  ExceptionList = local_c;
  return this;
}



cls_0x50db20 * __thiscall cls_0x50db20::cls_0x50db20(cls_0x50db20 *this,_String_base *param_1)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00633d18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  meth_0x401b20(this,param_1,0,0xffffffff);
  (this->VFX_Parameter).mbr_0x18 = 0xf;
  *(undefined4 *)&(this->VFX_Parameter).field_0x14 = 0;
  local_4 = 0;
  *(undefined *)&(this->VFX_Parameter).mbr_0x4 = 0;
  meth_0x401b20((cls_0x50db20 *)&this->VFX_Parameter,param_1 + 0x1c,0,0xffffffff);
  ExceptionList = local_c;
  return this;
}



cls_0x50db20 * __thiscall cls_0x50db20::cls_0x50db20(cls_0x50db20 *this,_String_base *param_1)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00633d18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  meth_0x401b20(this,param_1,0,0xffffffff);
  local_4 = 0;
  cls_0x4dff90::cls_0x4dff90((cls_0x4dff90 *)&this->VFX_Parameter,param_1 + 0x1c);
  ExceptionList = local_c;
  return this;
}



cls_0x50db20 * __thiscall
cls_0x50db20::cls_0x50db20(cls_0x50db20 *this,_String_base *param_1,undefined *param_2)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00633d18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  meth_0x401b20(this,param_1,0,0xffffffff);
  local_4 = 0;
  cls_0x4dff90::cls_0x4dff90((cls_0x4dff90 *)&this->VFX_Parameter,param_2);
  ExceptionList = local_c;
  return this;
}



cls_0x50db20 * __thiscall cls_0x50db20::cls_0x50db20(cls_0x50db20 *this,_String_base *param_1)

{
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0xf;
  *(undefined *)&this->mbr_0x4 = 0;
  meth_0x401b20(this,param_1,0,0xffffffff);
  return this;
}



cls_0x50db20 * __thiscall cls_0x50db20::cls_0x50db20(cls_0x50db20 *this,_String_base *param_1)

{
  meth_0x401b20(this,param_1,0,0xffffffff);
  return this;
}



cls_0x50db20 * __thiscall cls_0x50db20::cls_0x50db20(cls_0x50db20 *this,_String_base *param_1)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00633f38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  local_4 = 0;
  meth_0x401b20(this,param_1,0,0xffffffff);
  ExceptionList = local_c;
  return this;
}



void __thiscall cls_0x50db20::meth_0x4f9e60(cls_0x50db20 *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00634d28;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  VFX_Parameter::~VFX_Parameter(&this->VFX_Parameter);
  if (0xf < this->mbr_0x18) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x4);
  }
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  ExceptionList = local_c;
  return;
}



cls_0x50db20 * __thiscall
cls_0x50db20::cls_0x50db20(cls_0x50db20 *this,_String_base *param_1,int param_2)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634d28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  meth_0x401b20(this,param_1,0,0xffffffff);
  local_4 = 0;
  VFX_Parameter::VFX_Parameter(&this->VFX_Parameter,param_2);
  ExceptionList = local_c;
  return this;
}



cls_0x50db20 * __thiscall cls_0x50db20::cls_0x50db20(cls_0x50db20 *this,_String_base *param_1)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634d28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  meth_0x401b20(this,param_1,0,0xffffffff);
  local_4 = 0;
  VFX_Parameter::VFX_Parameter(&this->VFX_Parameter,(int)(param_1 + 0x1c));
  ExceptionList = local_c;
  return this;
}



cls_0x50db20 * __thiscall cls_0x50db20::cls_0x50db20(cls_0x50db20 *this)

{
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  return this;
}



cls_0x50db20 * __thiscall cls_0x50db20::cls_0x50db20(cls_0x50db20 *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00635a53;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  (this->VFX_Parameter).mbr_0x18 = 0xf;
  *(undefined4 *)&(this->VFX_Parameter).field_0x14 = 0;
  *(undefined *)&(this->VFX_Parameter).mbr_0x4 = 0;
  local_4 = 1;
  cls_0x40a220::cls_0x40a220((cls_0x40a220 *)&(this->VFX_Parameter).mbr_0x20,1);
  ExceptionList = local_c;
  return this;
}



cls_0x50db20 * __thiscall cls_0x50db20::~cls_0x50db20(cls_0x50db20 *this)

{
  undefined *this_00;
  cls_0x50db20 *pcVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00635a53;
  local_c = ExceptionList;
  this_00 = &this->field_0xa8;
  local_4 = 1;
  ExceptionList = &local_c;
  std::basic_ios<char,_struct_std::char_traits<char>_>::meth_0x497c80
            ((basic_ios<char,_struct_std::char_traits<char>_> *)this_00);
  *(basic_ios<char,_struct_std::char_traits<char>_>__vftable_669de8 **)this_00 =
       &basic_ios<char,_struct_std::char_traits<char>_>__vftable_669de8_00669de8;
  pcVar1 = (cls_0x50db20 *)std::ios_base::~ios_base((ios_base *)this_00);
  if (0xf < (this->VFX_Parameter).mbr_0x18) {
                    /* WARNING: Subroutine does not return */
    _free((void *)(this->VFX_Parameter).mbr_0x4);
  }
  (this->VFX_Parameter).mbr_0x18 = 0xf;
  *(undefined4 *)&(this->VFX_Parameter).field_0x14 = 0;
  *(undefined *)&(this->VFX_Parameter).mbr_0x4 = 0;
  if (0xf < this->mbr_0x18) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x4);
  }
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  ExceptionList = local_c;
  return pcVar1;
}



cls_0x50db20 * __thiscall cls_0x50db20::cls_0x50db20(cls_0x50db20 *this)

{
  char *pcVar1;
  char *pcVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00636c38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  local_4 = 0;
  pcVar1 = "";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  meth_0x401bd0(this,"",(uint)(pcVar2 + -0x64d7d8));
  (this->VFX_Parameter).mbr_0x18 = 0;
  (this->VFX_Parameter).mbr_0x4 = 0;
  *(undefined4 *)&(this->VFX_Parameter).field_0xc = 0;
  *(undefined4 *)&(this->VFX_Parameter).field_0x10 = 0;
  *(undefined4 *)&(this->VFX_Parameter).field_0x14 = 0;
  (this->VFX_Parameter).vftptr_0x0 = (VFX_Parameter__vftable_673a20 *)0x50;
  (this->VFX_Parameter).mbr_0x8 = 100;
  ExceptionList = local_c;
  return this;
}



cls_0x50db20 * __thiscall cls_0x50db20::cls_0x50db20(cls_0x50db20 *this)

{
  this->mbr_0x0 = 0;
  this->mbr_0x4 = 0x3f800000;
  this->mbr_0x8 = 0x3f800000;
  this->mbr_0xc = 0;
  return this;
}



cls_0x50db20 * __thiscall
cls_0x50db20::cls_0x50db20
          (cls_0x50db20 *this,_String_base *param_1,VFX_Parameter__vftable_673a20 *param_2,
          dword param_3,dword param_4)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00637d68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  local_4 = 0;
  meth_0x401b20(this,param_1,0,0xffffffff);
  (this->VFX_Parameter).vftptr_0x0 = param_2;
  (this->VFX_Parameter).mbr_0x8 = param_4;
  (this->VFX_Parameter).mbr_0x4 = param_3;
  ExceptionList = local_c;
  return this;
}



cls_0x50db20 * __thiscall cls_0x50db20::cls_0x50db20(cls_0x50db20 *this,_String_base *param_1)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638cd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  meth_0x401b20(this,param_1,0,0xffffffff);
  (this->VFX_Parameter).mbr_0x18 = 0xf;
  *(undefined4 *)&(this->VFX_Parameter).field_0x14 = 0;
  local_4 = 0;
  *(undefined *)&(this->VFX_Parameter).mbr_0x4 = 0;
  meth_0x401b20((cls_0x50db20 *)&this->VFX_Parameter,param_1 + 0x1c,0,0xffffffff);
  (this->VFX_Parameter).mbr_0x1c = *(dword *)(param_1 + 0x38);
  *(_String_base *)&(this->VFX_Parameter).mbr_0x20 = param_1[0x3c];
  *(_String_base *)((int)&(this->VFX_Parameter).mbr_0x20 + 1) = param_1[0x3d];
  *(_String_base *)((int)&(this->VFX_Parameter).mbr_0x20 + 2) = param_1[0x3e];
  *(_String_base *)((int)&(this->VFX_Parameter).mbr_0x20 + 3) = param_1[0x3f];
  (this->VFX_Parameter).mbr_0x24 = *(dword *)(param_1 + 0x40);
  (this->VFX_Parameter).mbr_0x28 = *(dword *)(param_1 + 0x44);
  (this->VFX_Parameter).mbr_0x2c = *(dword *)(param_1 + 0x48);
  (this->VFX_Parameter).mbr_0x30 = *(dword *)(param_1 + 0x4c);
  *(undefined4 *)&this->field_0x50 = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)&this->field_0x54 = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)&this->field_0x58 = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)&this->field_0x5c = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)&this->field_0x60 = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)&this->field_0x64 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)&this->field_0x68 = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)&this->field_0x6c = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)&this->field_0x70 = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)&this->field_0x74 = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)&this->field_0x78 = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)&this->field_0x7c = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)&this->field_0x80 = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)&this->field_0x84 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)&this->field_0x88 = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)&this->field_0x8c = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)&this->field_0x90 = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)&this->field_0x94 = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)&this->field_0x98 = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)&this->field_0x9c = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)&this->field_0xa0 = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)&this->field_0xa4 = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)&this->field_0xa8 = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)&this->field_0xac = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)&this->field_0xb0 = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)&this->field_0xb4 = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)&this->field_0xb8 = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)&this->field_0xbc = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)&this->field_0xc0 = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)&this->field_0xc4 = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)&this->field_0xc8 = *(undefined4 *)(param_1 + 200);
  ExceptionList = local_c;
  return this;
}



cls_0x50db20 * __thiscall cls_0x50db20::cls_0x50db20(cls_0x50db20 *this,_String_base *param_1)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638cd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  meth_0x401b20(this,param_1,0,0xffffffff);
  (this->VFX_Parameter).mbr_0x18 = 0xf;
  *(undefined4 *)&(this->VFX_Parameter).field_0x14 = 0;
  local_4 = 0;
  *(undefined *)&(this->VFX_Parameter).mbr_0x4 = 0;
  meth_0x401b20((cls_0x50db20 *)&this->VFX_Parameter,param_1 + 0x1c,0,0xffffffff);
  (this->VFX_Parameter).mbr_0x1c = *(dword *)(param_1 + 0x38);
  (this->VFX_Parameter).mbr_0x20 = *(dword *)(param_1 + 0x3c);
  ExceptionList = local_c;
  return this;
}



cls_0x50db20 * __thiscall
cls_0x50db20::cls_0x50db20(cls_0x50db20 *this,_String_base *param_1,_String_base *param_2)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638cd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  meth_0x401b20(this,param_1,0,0xffffffff);
  *(undefined4 *)&(this->VFX_Parameter).field_0x14 = 0;
  (this->VFX_Parameter).mbr_0x18 = 0xf;
  local_4 = 0;
  *(undefined *)&(this->VFX_Parameter).mbr_0x4 = 0;
  meth_0x401b20((cls_0x50db20 *)&this->VFX_Parameter,param_2,0,0xffffffff);
  (this->VFX_Parameter).mbr_0x1c = *(dword *)(param_2 + 0x1c);
  (this->VFX_Parameter).mbr_0x20 = *(dword *)(param_2 + 0x20);
  ExceptionList = local_c;
  return this;
}



void * __thiscall cls_0x50db20::meth_0x571110(cls_0x50db20 *this,_String_base *param_1)

{
  meth_0x401b20(this,param_1,0,0xffffffff);
  meth_0x401b20((cls_0x50db20 *)&this->VFX_Parameter,param_1 + 0x1c,0,0xffffffff);
  (this->VFX_Parameter).mbr_0x1c = *(dword *)(param_1 + 0x38);
  *(_String_base *)&(this->VFX_Parameter).mbr_0x20 = param_1[0x3c];
  *(_String_base *)((int)&(this->VFX_Parameter).mbr_0x20 + 1) = param_1[0x3d];
  *(_String_base *)((int)&(this->VFX_Parameter).mbr_0x20 + 2) = param_1[0x3e];
  *(_String_base *)((int)&(this->VFX_Parameter).mbr_0x20 + 3) = param_1[0x3f];
  (this->VFX_Parameter).mbr_0x24 = *(dword *)(param_1 + 0x40);
  (this->VFX_Parameter).mbr_0x28 = *(dword *)(param_1 + 0x44);
  (this->VFX_Parameter).mbr_0x2c = *(dword *)(param_1 + 0x48);
  (this->VFX_Parameter).mbr_0x30 = *(dword *)(param_1 + 0x4c);
  *(undefined4 *)&this->field_0x50 = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)&this->field_0x54 = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)&this->field_0x58 = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)&this->field_0x5c = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)&this->field_0x60 = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)&this->field_0x64 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)&this->field_0x68 = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)&this->field_0x6c = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)&this->field_0x70 = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)&this->field_0x74 = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)&this->field_0x78 = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)&this->field_0x7c = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)&this->field_0x80 = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)&this->field_0x84 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)&this->field_0x88 = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)&this->field_0x8c = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)&this->field_0x90 = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)&this->field_0x94 = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)&this->field_0x98 = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)&this->field_0x9c = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)&this->field_0xa0 = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)&this->field_0xa4 = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)&this->field_0xa8 = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)&this->field_0xac = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)&this->field_0xb0 = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)&this->field_0xb4 = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)&this->field_0xb8 = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)&this->field_0xbc = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)&this->field_0xc0 = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)&this->field_0xc4 = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)&this->field_0xc8 = *(undefined4 *)(param_1 + 200);
  return this;
}



cls_0x50db20 * __thiscall cls_0x50db20::cls_0x50db20(cls_0x50db20 *this)

{
  char *pcVar1;
  char *pcVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00639f2e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  (this->VFX_Parameter).mbr_0x18 = 0xf;
  *(undefined4 *)&(this->VFX_Parameter).field_0x14 = 0;
  *(undefined *)&(this->VFX_Parameter).mbr_0x4 = 0;
  *(undefined4 *)&this->field_0x84 = 0xf;
  *(undefined4 *)&this->field_0x80 = 0;
  this->field_0x70 = 0;
  local_4 = 2;
  pcVar1 = "DefaultInterface.ini";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  meth_0x401bd0(this,"DefaultInterface.ini",(uint)(pcVar2 + -0x65202c));
  pcVar1 = "JH_FALLOUT";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  meth_0x401bd0((cls_0x50db20 *)&this->VFX_Parameter,"JH_FALLOUT",(uint)(pcVar2 + -0x69de9c));
  (this->VFX_Parameter).mbr_0x24 = 0x80;
  (this->VFX_Parameter).mbr_0x28 = 0x80;
  (this->VFX_Parameter).mbr_0x2c = 0x80;
  (this->VFX_Parameter).mbr_0x1c = 10;
  (this->VFX_Parameter).mbr_0x20 = 0;
  (this->VFX_Parameter).mbr_0x30 = 1000;
  *(undefined4 *)&this->field_0x50 = 0;
  *(undefined4 *)&this->field_0x54 = 0;
  *(undefined4 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x5c = 200;
  *(undefined4 *)&this->field_0x60 = 0xb;
  this->field_0x64 = 0;
  *(undefined4 *)&this->field_0x68 = 0;
  pcVar1 = "DefaultInterface.ini";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  meth_0x401bd0((cls_0x50db20 *)&this->field_0x6c,"DefaultInterface.ini",(uint)(pcVar2 + -0x65202c))
  ;
  *(undefined4 *)&this->field_0x8c = 6;
  *(undefined4 *)&this->field_0x90 = 6;
  *(undefined4 *)&this->field_0x94 = 4;
  *(undefined4 *)&this->field_0x98 = 4;
  this->field_0x88 = 0xb4;
  ExceptionList = local_c;
  return this;
}



void __thiscall cls_0x50db20::meth_0x592880(cls_0x50db20 *this,uint param_1)

{
  if (this->mbr_0x18 < param_1) {
    if (param_1 == 0xffffffff) {
      std::_String_base::_Xlen((_String_base *)this);
    }
    if (this->mbr_0x18 < param_1) {
      meth_0x401510(this);
      return;
    }
    if (param_1 == 0) {
      this->mbr_0x14 = 0;
      if (0xf < this->mbr_0x18) {
        *(undefined *)this->mbr_0x4 = 0;
        return;
      }
      *(undefined *)&this->mbr_0x4 = 0;
    }
  }
  return;
}



cls_0x50db20 * __thiscall cls_0x50db20::cls_0x50db20(cls_0x50db20 *this,int param_1,int param_2)

{
  cls_0x50db20 *pcVar1;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063a100;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  pcVar1 = (cls_0x50db20 *)meth_0x592880(this,param_2 - param_1);
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    pcVar1 = (cls_0x50db20 *)meth_0x425bd0(this,1);
  }
  ExceptionList = pvStack_10;
  return pcVar1;
}



void __thiscall
cls_0x50db20::meth_0x592fb0(cls_0x50db20 *this,uint param_1,int param_2,int param_3,int param_4)

{
  int **ppiVar1;
  dword *pdVar2;
  uint unaff_retaddr;
  undefined local_2c [4];
  void *local_28;
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063a138;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  ExceptionList = &local_c;
  cls_0x50db20((cls_0x50db20 *)local_2c,param_3,param_4);
  local_4 = 0;
  if (param_2 == 0) {
    ppiVar1 = (int **)0x0;
  }
  else {
    ppiVar1 = (int **)(param_2 - param_1);
  }
  if (this->mbr_0x18 < 0x10) {
    pdVar2 = &this->mbr_0x4;
  }
  else {
    pdVar2 = (dword *)this->mbr_0x4;
  }
  if (param_1 != 0) {
    param_1 = param_1 - (int)pdVar2;
  }
  meth_0x4174f0(this,param_1,ppiVar1,(uint)local_2c,0,0xffffffff);
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}



cls_0x50db20 * __thiscall cls_0x50db20::cls_0x50db20(cls_0x50db20 *this)

{
  VFX_Parameter__vftable_673a20 *pVVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063a1a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  (this->VFX_Parameter).mbr_0x24 = 0xf;
  (this->VFX_Parameter).mbr_0x20 = 0;
  (this->VFX_Parameter).field_0x10 = 0;
  *(undefined4 *)&this->field_0x70 = 0xf;
  *(undefined4 *)&this->field_0x6c = 0;
  this->field_0x5c = 0;
  *(undefined4 *)&this->field_0x8c = 0xf;
  *(undefined4 *)&this->field_0x88 = 0;
  this->field_0x78 = 0;
  *(undefined4 *)&this->field_0xc0 = 0xf;
  *(undefined4 *)&this->field_0xbc = 0;
  this->field_0xac = 0;
  this->mbr_0xdc = 0xf;
  this->mbr_0xd8 = 0;
  this->field_0xc8 = 0;
  this->mbr_0x118 = 0xf;
  this->mbr_0x114 = 0;
  *(undefined *)&this->mbr_0x104 = 0;
  local_4 = 6;
  pcVar2 = "DefaultInterface.ini";
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  meth_0x401bd0(this,"DefaultInterface.ini",(uint)(pcVar3 + -0x65202c));
  (this->VFX_Parameter).vftptr_0x0 = (VFX_Parameter__vftable_673a20 *)0x140;
  (this->VFX_Parameter).mbr_0x4 = 100;
  (this->VFX_Parameter).mbr_0x8 = 0xff;
  pcVar2 = "DefaultInterface.ini";
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  meth_0x401bd0((cls_0x50db20 *)&(this->VFX_Parameter).field_0xc,"DefaultInterface.ini",
                (uint)(pcVar3 + -0x65202c));
  (this->VFX_Parameter).mbr_0x28 = 4;
  (this->VFX_Parameter).mbr_0x2c = 4;
  (this->VFX_Parameter).mbr_0x30 = 0x20;
  *(undefined4 *)&this->field_0x50 = 0x20;
  this->field_0x54 = 1;
  pcVar2 = "DefaultInterface.ini";
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  meth_0x401bd0((cls_0x50db20 *)&this->field_0x58,"DefaultInterface.ini",(uint)(pcVar3 + -0x65202c))
  ;
  pcVar2 = "Arial";
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  meth_0x401bd0((cls_0x50db20 *)&this->field_0x74,"Arial",(uint)(pcVar3 + -0x6510d4));
  *(undefined4 *)&this->field_0x90 = 0xc;
  *(undefined4 *)&this->field_0x9c = 0xc;
  *(VFX_Parameter__vftable_673a20 **)&this->field_0xa0 = (this->VFX_Parameter).vftptr_0x0 + -0xd;
  *(undefined4 *)&this->field_0x94 = 1;
  *(undefined4 *)&this->field_0x98 = 0x2c;
  *(undefined4 *)&this->field_0xa4 = 0x10;
  pcVar2 = "DefaultInterface.ini";
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  meth_0x401bd0((cls_0x50db20 *)&this->field_0xa8,"DefaultInterface.ini",(uint)(pcVar3 + -0x65202c))
  ;
  pcVar2 = "Arial";
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  meth_0x401bd0((cls_0x50db20 *)&this->field_0xc4,"Arial",(uint)(pcVar3 + -0x6510d4));
  pVVar1 = (this->VFX_Parameter).vftptr_0x0;
  this->mbr_0xe0 = 8;
  this->mbr_0xe8 = 8;
  this->mbr_0xe4 = 0;
  this->mbr_0xec = 0x28;
  this->mbr_0xf0 = (dword)(pVVar1 + -4);
  this->mbr_0xf4 = 0x10;
  this->mbr_0xf8 = 0;
  this->mbr_0xfc = 6;
  pcVar2 = "DefaultInterface.ini";
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  meth_0x401bd0((cls_0x50db20 *)&this->mbr_0x100,"DefaultInterface.ini",(uint)(pcVar3 + -0x65202c));
  this->mbr_0x124 = 0x60;
  this->mbr_0x128 = 0x60;
  this->mbr_0x11c = 0x118;
  this->mbr_0x120 = 4;
  *(undefined *)&this->mbr_0x12c = 1;
  ExceptionList = local_c;
  return this;
}



void __thiscall cls_0x50db20::meth_0x594370(cls_0x50db20 *this,int param_1,int param_2)

{
  dword *pdVar1;
  dword *pdVar2;
  
  pdVar1 = &this->mbr_0x4;
  pdVar2 = pdVar1;
  if (0xf < this->mbr_0x18) {
    pdVar2 = (dword *)*pdVar1;
  }
  if (0xf < this->mbr_0x18) {
    pdVar1 = (dword *)*pdVar1;
  }
  meth_0x592fb0(this,this->mbr_0x14 + (int)pdVar1,(int)pdVar2 + this->mbr_0x14,param_1,param_2);
  return;
}



cls_0x50db20 * __thiscall cls_0x50db20::cls_0x50db20(cls_0x50db20 *this)

{
  char *pcVar1;
  char *pcVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063a998;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  local_4 = 0;
  (this->VFX_Parameter).vftptr_0x0 = (VFX_Parameter__vftable_673a20 *)0x0;
  pcVar1 = "";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  meth_0x401bd0(this,"",(uint)(pcVar2 + -0x64d7d8));
  ExceptionList = local_c;
  return this;
}



cls_0x50db20 * __thiscall cls_0x50db20::cls_0x50db20(cls_0x50db20 *this,_String_base *param_1)

{
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  meth_0x401b20(this,param_1,0,0xffffffff);
  (this->VFX_Parameter).vftptr_0x0 = *(VFX_Parameter__vftable_673a20 **)(param_1 + 0x1c);
  (this->VFX_Parameter).mbr_0x4 = *(dword *)(param_1 + 0x20);
  (this->VFX_Parameter).mbr_0x8 = *(dword *)(param_1 + 0x24);
  *(undefined4 *)&(this->VFX_Parameter).field_0xc = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)&(this->VFX_Parameter).field_0x10 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)&(this->VFX_Parameter).field_0x14 = *(undefined4 *)(param_1 + 0x30);
  *(_String_base *)&(this->VFX_Parameter).mbr_0x18 = param_1[0x34];
  return this;
}



void __thiscall
cls_0x50db20::meth_0x5a9ab0
          (cls_0x50db20 *this,undefined4 param_1,undefined4 *param_2,void *param_3,
          undefined4 param_4,undefined4 param_5,int param_6,uint param_7,uint param_8,
          undefined4 *param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
          int param_13,uint param_14,uint param_15)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  dword *pdVar6;
  undefined4 **ppuVar7;
  undefined4 *puVar8;
  uint unaff_retaddr;
  dword in_stack_fffffeb8;
  uint in_stack_fffffebc;
  undefined4 *puVar9;
  VFX_Parameter__vftable_673a20 *_Memory;
  undefined4 local_114;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  puStack_8 = &LAB_0063b170;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_4 = 1;
  if (param_13 == 0) {
    pcVar3 = "globals.ini";
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    ExceptionList = &local_c;
    meth_0x401bd0(this,"globals.ini",(uint)(pcVar4 + -0x6918b4));
  }
  else {
    ExceptionList = &local_c;
    meth_0x401b20(this,(_String_base *)&param_8,0,0xffffffff);
  }
  if (param_6 == 0) {
    puVar8 = (undefined4 *)(in_stack_fffffebc & 0xffffff00);
    meth_0x401b20((cls_0x50db20 *)&stack0xfffffeb8,(_String_base *)this,0,0xffffffff);
    uVar5 = FUN_004e0960(in_stack_fffffeb8,puVar8);
    if ((char)uVar5 == '\0') {
      handle_fatal_error("Unable to load var file %s from database.\n");
    }
    if (0xf < param_7) {
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
  }
  else {
    ppuVar7 = (undefined4 **)param_2;
    if (param_7 < 0x10) {
      ppuVar7 = &param_2;
    }
    puVar8 = &local_114;
    do {
      cVar1 = *(char *)ppuVar7;
      ppuVar7 = (undefined4 **)((int)ppuVar7 + 1);
      *(char *)puVar8 = cVar1;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    } while (cVar1 != '\0');
    pdVar6 = &this->mbr_0x4;
    if (0xf < this->mbr_0x18) {
      pdVar6 = (dword *)*pdVar6;
    }
    FUN_004c58a0((char *)&local_114,pdVar6);
    puVar8 = &local_114;
    puVar9 = (undefined4 *)(in_stack_fffffebc & 0xffffff00);
    do {
      cVar1 = *(char *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    } while (cVar1 != '\0');
    meth_0x401bd0((cls_0x50db20 *)&stack0xfffffeb8,(char *)&local_114,
                  (int)puVar8 - ((int)&local_114 + 1));
    uVar5 = FUN_004e0820(in_stack_fffffeb8,puVar9);
    if ((char)uVar5 == '\0') {
      _Memory = (VFX_Parameter__vftable_673a20 *)&local_114;
      handle_fatal_error("Unable to load var file %s from %s.\n");
      if (0xf < param_8) {
                    /* WARNING: Subroutine does not return */
        _free(param_3);
      }
      param_8 = 0xf;
      param_7 = 0;
      param_3 = (void *)((uint)param_3 & 0xffffff00);
      pvVar2 = ExceptionList;
      ExceptionList = local_c;
      uVar5 = param_15;
      goto joined_r0x005a9cc1;
    }
    if (0xf < param_7) {
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
  }
  param_2 = (undefined4 *)((uint)param_2 & 0xffffff00);
  param_6 = 0;
  param_7 = 0xf;
  pvVar2 = ExceptionList;
  _Memory = (VFX_Parameter__vftable_673a20 *)param_9;
  ExceptionList = local_c;
  uVar5 = param_14;
joined_r0x005a9cc1:
  local_c = ExceptionList;
  if (uVar5 < 0x10) {
    FUN_00616e15(local_10 ^ unaff_retaddr);
    return;
  }
  ExceptionList = pvVar2;
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



long __thiscall cls_0x50db20::meth_0x5a9e60(cls_0x50db20 *this,undefined4 param_1,void *param_2)

{
  char *pcVar1;
  bool bVar2;
  char *pcVar3;
  undefined4 **ppuVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined4 uStack00000018;
  uint in_stack_0000001c;
  void *in_stack_00000024;
  dword in_stack_00000034;
  uint in_stack_00000038;
  undefined4 *local_14;
  undefined4 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063b170;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  if (in_stack_00000034 == 0) {
    pcVar1 = "Globals";
    do {
      pcVar3 = pcVar1;
      pcVar1 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    ExceptionList = &local_c;
    meth_0x401bd0((cls_0x50db20 *)&stack0x00000020,"Globals",(uint)(pcVar3 + -0x6a6ce4));
  }
  lVar6 = 0;
  local_14 = VFX_Parameter::meth_0x4339b0(&this->VFX_Parameter,(int)&stack0x00000020);
  if (local_14 != (undefined4 *)(this->VFX_Parameter).mbr_0x4) {
    bVar2 = FUN_00433930((int)&stack0x00000020,(int)(local_14 + 3));
    if (!bVar2) {
      ppuVar4 = &local_14;
      goto LAB_005a9eec;
    }
  }
  local_10 = (undefined4 *)(this->VFX_Parameter).mbr_0x4;
  ppuVar4 = &local_10;
LAB_005a9eec:
  puVar5 = *ppuVar4;
  if (puVar5 != (undefined4 *)(this->VFX_Parameter).mbr_0x4) {
    FUN_004df070(puVar5 + 10,&local_10,(int)&param_1);
    if (local_10 != (undefined4 *)puVar5[0xb]) {
      if ((uint)local_10[0x10] < 0x10) {
        puVar5 = local_10 + 0xb;
      }
      else {
        puVar5 = (undefined4 *)local_10[0xb];
      }
      lVar6 = _atol((char *)puVar5);
    }
  }
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  in_stack_0000001c = 0xf;
  uStack00000018 = 0;
  param_2 = (void *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000024);
  }
  ExceptionList = local_c;
  return lVar6;
}



cls_0x50db20 * __thiscall cls_0x50db20::cls_0x50db20(cls_0x50db20 *this)

{
  char *pcVar1;
  char *pcVar2;
  _String_base local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063b890;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  local_10 = 0xf;
  local_4 = 0;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar1 = "";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  meth_0x401bd0((cls_0x50db20 *)local_28,"",(uint)(pcVar2 + -0x64d7d8));
  local_4 = CONCAT31(local_4._1_3_,1);
  meth_0x401b20(this,local_28,0,0xffffffff);
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  (this->VFX_Parameter).vftptr_0x0 = (VFX_Parameter__vftable_673a20 *)0x0;
  (this->VFX_Parameter).mbr_0x4 = 0;
  *(undefined4 *)&(this->VFX_Parameter).field_0x14 = 0;
  (this->VFX_Parameter).mbr_0x8 = 0x400;
  *(undefined4 *)&(this->VFX_Parameter).field_0xc = 0x300;
  (this->VFX_Parameter).field_0x10 = 1;
  (this->VFX_Parameter).field_0x11 = 1;
  ExceptionList = local_c;
  return this;
}



cls_0x50db20 * __thiscall
cls_0x50db20::cls_0x50db20(cls_0x50db20 *this,undefined4 *param_1,uint param_2)

{
  meth_0x4014b0(this,'\0');
  meth_0x401bd0(this,(char *)param_1,param_2);
  return this;
}


