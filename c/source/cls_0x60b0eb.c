#include "../include/cls_0x60b0eb.h"

void __thiscall cls_0x60b0eb::meth_0x60b0eb(cls_0x60b0eb *this,char param_1)

{
  if ((param_1 != '\0') && (7 < this->mbr_0x18)) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x4);
  }
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 7;
  *(undefined2 *)&this->mbr_0x4 = 0;
  return;
}



void __thiscall cls_0x60b0eb::meth_0x60b197(cls_0x60b0eb *this)

{
  void *pvVar1;
  undefined4 extraout_ECX;
  int unaff_EBP;
  uint uVar2;
  
  FUN_0061781c();
  uVar2 = *(uint *)(unaff_EBP + 8) | 7;
  *(undefined **)(unaff_EBP + -0x10) = &stack0xffffffe8;
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  if (0x7ffffffe < uVar2) {
    uVar2 = *(uint *)(unaff_EBP + 8);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  pvVar1 = operator_new(uVar2 * 2 + 2);
  *(void **)(unaff_EBP + 8) = pvVar1;
  FUN_0060b1fb();
  return;
}



bool __thiscall cls_0x60b0eb::meth_0x60cf38(cls_0x60b0eb *this,uint param_1,char param_2)

{
  dword *pdVar1;
  
  if (0x7ffffffe < param_1) {
    std::_String_base::_Xlen((_String_base *)this);
  }
  if (this->mbr_0x18 < param_1) {
    meth_0x60b197(this);
  }
  else if ((param_2 == '\0') || (7 < param_1)) {
    if (param_1 == 0) {
      this->mbr_0x14 = 0;
      if (this->mbr_0x18 < 8) {
        pdVar1 = &this->mbr_0x4;
      }
      else {
        pdVar1 = (dword *)this->mbr_0x4;
      }
      *(undefined2 *)pdVar1 = 0;
    }
  }
  else {
    meth_0x60b0eb(this,'\x01');
  }
  return param_1 != 0;
}



_String_base * __thiscall cls_0x60b0eb::meth_0x60ed0b(cls_0x60b0eb *this,uint param_1,uint param_2)

{
  dword *pdVar1;
  bool bVar2;
  uint uVar3;
  dword *pdVar4;
  dword *pdVar5;
  
  if (this->mbr_0x14 < param_1) {
    std::_String_base::_Xran((_String_base *)this);
  }
  uVar3 = this->mbr_0x14 - param_1;
  if (uVar3 < param_2) {
    param_2 = uVar3;
  }
  if (param_2 != 0) {
    pdVar5 = &this->mbr_0x4;
    pdVar4 = pdVar5;
    pdVar1 = pdVar5;
    if (7 < this->mbr_0x18) {
      pdVar4 = (dword *)*pdVar5;
      pdVar1 = (dword *)*pdVar5;
    }
    _memmove((void *)((int)pdVar4 + param_1 * 2),(void *)((int)pdVar1 + (param_2 + param_1) * 2),
             (uVar3 - param_2) * 2);
    uVar3 = this->mbr_0x14 - param_2;
    bVar2 = meth_0x60cf38(this,uVar3,'\0');
    if (bVar2) {
      this->mbr_0x14 = uVar3;
      if (7 < this->mbr_0x18) {
        pdVar5 = (dword *)*pdVar5;
      }
      *(undefined2 *)((int)pdVar5 + uVar3 * 2) = 0;
    }
  }
  return (_String_base *)this;
}



undefined4 __thiscall cls_0x60b0eb::meth_0x60ee42(cls_0x60b0eb *this,undefined4 *param_1)

{
  dword *pdVar1;
  dword *pdVar2;
  
  pdVar1 = &this->mbr_0x4;
  pdVar2 = pdVar1;
  if (7 < this->mbr_0x18) {
    pdVar2 = (dword *)*pdVar1;
  }
  if (pdVar2 <= param_1) {
    if (7 < this->mbr_0x18) {
      pdVar1 = (dword *)*pdVar1;
    }
    if (param_1 < (undefined4 *)((int)pdVar1 + this->mbr_0x14 * 2)) {
      return 1;
    }
  }
  return 0;
}



_String_base * __thiscall
cls_0x60b0eb::meth_0x60f178(cls_0x60b0eb *this,_String_base *param_1,uint param_2,uint param_3)

{
  bool bVar1;
  _String_base *p_Var2;
  dword *_Dst;
  dword *pdVar3;
  uint uVar4;
  
  if (*(uint *)(param_1 + 0x14) < param_2) {
    std::_String_base::_Xran((_String_base *)this);
  }
  uVar4 = *(int *)(param_1 + 0x14) - param_2;
  if (param_3 < *(int *)(param_1 + 0x14) - param_2) {
    uVar4 = param_3;
  }
  if (this == (cls_0x60b0eb *)param_1) {
    meth_0x60ed0b(this,uVar4 + param_2,0xffffffff);
    meth_0x60ed0b(this,0,param_2);
  }
  else {
    bVar1 = meth_0x60cf38(this,uVar4,'\x01');
    if (bVar1) {
      if (*(uint *)(param_1 + 0x18) < 8) {
        p_Var2 = param_1 + 4;
      }
      else {
        p_Var2 = *(_String_base **)(param_1 + 4);
      }
      pdVar3 = &this->mbr_0x4;
      _Dst = pdVar3;
      if (7 < this->mbr_0x18) {
        _Dst = (dword *)*pdVar3;
      }
      _memcpy(_Dst,p_Var2 + param_2 * 2,uVar4 * 2);
      this->mbr_0x14 = uVar4;
      if (7 < this->mbr_0x18) {
        pdVar3 = (dword *)*pdVar3;
      }
      *(undefined2 *)(uVar4 * 2 + (int)pdVar3) = 0;
    }
  }
  return (_String_base *)this;
}



_String_base * __thiscall
cls_0x60b0eb::meth_0x6105ce(cls_0x60b0eb *this,uint param_1,uint param_2,undefined2 param_3)

{
  bool bVar1;
  dword *pdVar2;
  dword *pdVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  if (this->mbr_0x14 < param_1) {
    std::_String_base::_Xran((_String_base *)this);
  }
  if (-this->mbr_0x14 - 1 <= param_2) {
    std::_String_base::_Xlen((_String_base *)this);
  }
  if (param_2 != 0) {
    uVar5 = this->mbr_0x14 + param_2;
    bVar1 = meth_0x60cf38(this,uVar5,'\0');
    if (bVar1) {
      if (this->mbr_0x18 < 8) {
        pdVar3 = &this->mbr_0x4;
        pdVar2 = &this->mbr_0x4;
      }
      else {
        pdVar3 = (dword *)this->mbr_0x4;
        pdVar2 = (dword *)this->mbr_0x4;
      }
      _memmove((void *)((int)pdVar2 + (param_1 + param_2) * 2),(void *)((int)pdVar3 + param_1 * 2),
               (this->mbr_0x14 - param_1) * 2);
      if (this->mbr_0x18 < 8) {
        pdVar3 = &this->mbr_0x4;
      }
      else {
        pdVar3 = (dword *)this->mbr_0x4;
      }
      puVar6 = (undefined4 *)(param_1 * 2 + (int)pdVar3);
      for (uVar4 = param_2 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = CONCAT22(param_3,param_3);
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = (uint)((param_2 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined2 *)puVar6 = param_3;
        puVar6 = (undefined4 *)((int)puVar6 + 2);
      }
      this->mbr_0x14 = uVar5;
      if (this->mbr_0x18 < 8) {
        pdVar3 = &this->mbr_0x4;
      }
      else {
        pdVar3 = (dword *)this->mbr_0x4;
      }
      *(undefined2 *)((int)pdVar3 + uVar5 * 2) = 0;
    }
  }
  return (_String_base *)this;
}


