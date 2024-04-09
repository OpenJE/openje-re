#include "../include/cls_0x40cc80.h"

void __thiscall cls_0x40cc80::meth_0x40cc80(cls_0x40cc80 *this,uint param_1)

{
  dword dVar1;
  uint uVar2;
  int iVar3;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)(this->mbr_0x8 - dVar1) >> 2;
  }
  if (uVar2 < param_1) {
    if (dVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(this->mbr_0x8 - dVar1) >> 2;
    }
    meth_0x40cd00(this,(undefined4 *)this->mbr_0x8,param_1 - iVar3,(undefined4 *)&stack0x00000008);
    return;
  }
  if ((dVar1 != 0) && (param_1 < (uint)((int)((int)(undefined4 *)this->mbr_0x8 - dVar1) >> 2))) {
    meth_0x431220(this,&param_1,(undefined4 *)(this->mbr_0x4 + param_1 * 4),
                  (undefined4 *)this->mbr_0x8);
  }
  return;
}



void __thiscall
cls_0x40cc80::meth_0x40cd00(cls_0x40cc80 *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  void *_Memory;
  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  dword dVar6;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0062b940;
  local_10 = ExceptionList;
  dVar6 = this->mbr_0x4;
  param_3 = (undefined4 *)*param_3;
  if (dVar6 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (int)(this->mbr_0xc - dVar6) >> 2;
  }
  if (param_2 != 0) {
    if (dVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
    }
    if (0x3fffffffU - iVar5 < param_2) {
      ExceptionList = &local_10;
      FUN_0040ac40();
      ExceptionList = local_10;
      return;
    }
    if (dVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
    }
    if (uVar1 < iVar5 + param_2) {
      if (0x3fffffff - (uVar1 >> 1) < uVar1) {
        uVar1 = 0;
      }
      else {
        uVar1 = uVar1 + (uVar1 >> 1);
      }
      if (dVar6 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
      }
      if (uVar1 < iVar5 + param_2) {
        if (dVar6 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
        }
        uVar1 = iVar5 + param_2;
      }
      ExceptionList = &local_10;
      pvVar2 = operator_new(uVar1 * 4);
      local_8 = 0;
      puVar3 = (undefined4 *)meth_0x40cfb0(this,(undefined4 *)this->mbr_0x4,param_1);
      FUN_005457b0(puVar3,param_2,&param_3);
      meth_0x40cfb0(this,param_1,(undefined4 *)this->mbr_0x8);
      _Memory = (void *)this->mbr_0x4;
      if (_Memory == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(this->mbr_0x8 - (int)_Memory) >> 2;
      }
      if (_Memory == (void *)0x0) {
        this->mbr_0xc = (dword)(uVar1 * 4 + (int)pvVar2);
        this->mbr_0x8 = (dword)((int)pvVar2 + (param_2 + iVar5) * 4);
        this->mbr_0x4 = (dword)pvVar2;
        ExceptionList = local_10;
        return;
      }
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    puVar3 = (undefined4 *)this->mbr_0x8;
    if ((uint)((int)puVar3 - (int)param_1 >> 2) < param_2) {
      ExceptionList = &local_10;
      meth_0x40cfb0(this,param_1,puVar3);
      local_8 = 2;
      FUN_005457b0((undefined4 *)this->mbr_0x8,
                   param_2 - ((int)(undefined4 *)this->mbr_0x8 - (int)param_1 >> 2),&param_3);
      dVar6 = this->mbr_0x8 + param_2 * 4;
      this->mbr_0x8 = dVar6;
      puVar3 = (undefined4 *)(dVar6 + param_2 * -4);
      if (param_1 != puVar3) {
        do {
          *param_1 = param_3;
          param_1 = param_1 + 1;
        } while (param_1 != puVar3);
        ExceptionList = local_10;
        return;
      }
    }
    else {
      puVar4 = puVar3 + -param_2;
      ExceptionList = &local_10;
      dVar6 = meth_0x40cfb0(this,puVar4,puVar3);
      this->mbr_0x8 = dVar6;
      if (param_1 != puVar4) {
        iVar5 = (int)puVar3 - (int)puVar4;
        do {
          puVar3 = puVar4 + -1;
          puVar4 = puVar4 + -1;
          *(undefined4 *)(iVar5 + (int)puVar4) = *puVar3;
        } while (puVar4 != param_1);
      }
      puVar3 = param_1 + param_2;
      if (param_1 != puVar3) {
        do {
          *param_1 = param_3;
          param_1 = param_1 + 1;
        } while (param_1 != puVar3);
      }
    }
  }
  ExceptionList = local_10;
  return;
}



void __thiscall
cls_0x40cc80::meth_0x40cfb0(cls_0x40cc80 *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_stack_0000000c;
  
  FUN_0040cfe0(param_1,param_2,in_stack_0000000c);
  return;
}



void __thiscall
cls_0x40cc80::meth_0x414030
          (cls_0x40cc80 *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *_Memory;
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  dword dVar6;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puVar3 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0062be10;
  local_10 = ExceptionList;
  param_3 = (undefined4 *)*param_3;
  dVar6 = this->mbr_0x4;
  if (dVar6 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)(this->mbr_0xc - dVar6) >> 2;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (dVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
    }
    if ((undefined4 *)(0x3fffffffU - iVar5) < param_2) {
      ExceptionList = &local_10;
      FUN_00413fb0();
      ExceptionList = local_10;
      return;
    }
    if (dVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
    }
    if (uVar2 < (uint)(iVar5 + (int)param_2)) {
      if (0x3fffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (dVar6 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
      }
      if (uVar2 < (uint)(iVar5 + (int)param_2)) {
        if (dVar6 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
        }
        uVar2 = iVar5 + (int)param_2;
      }
      ExceptionList = &local_10;
      puVar3 = (undefined4 *)operator_new(uVar2 * 4);
      local_8 = 0;
      puVar4 = (undefined4 *)FUN_005456a0((undefined4 *)this->mbr_0x4,param_1,puVar3);
      FUN_005457b0(puVar4,(int)param_2,&param_3);
      FUN_005456a0(param_1,(undefined4 *)this->mbr_0x8,puVar4 + (int)param_2);
      _Memory = (void *)this->mbr_0x4;
      if (_Memory == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(this->mbr_0x8 - (int)_Memory) >> 2;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      this->mbr_0xc = (dword)(puVar3 + uVar2);
      this->mbr_0x8 = (dword)(puVar3 + (int)param_2 + iVar5);
      this->mbr_0x4 = (dword)puVar3;
      ExceptionList = local_10;
      return;
    }
    puVar4 = (undefined4 *)this->mbr_0x8;
    if ((undefined4 *)((int)puVar4 - (int)param_1 >> 2) < param_2) {
      iVar5 = (int)param_2 * 4;
      ExceptionList = &local_10;
      FUN_00413a60(param_1,puVar4,param_1 + (int)param_2);
      local_8 = 2;
      FUN_00431070((undefined4 *)this->mbr_0x8,
                   (int)param_2 - ((int)(undefined4 *)this->mbr_0x8 - (int)param_1 >> 2),&param_3);
      dVar6 = this->mbr_0x8 + iVar5;
      this->mbr_0x8 = dVar6;
      puVar3 = (undefined4 *)(dVar6 + (int)puVar3 * -4);
    }
    else {
      param_2 = puVar4 + -(int)param_2;
      ExceptionList = &local_10;
      dVar6 = FUN_00413a60(param_2,puVar4,puVar4);
      puVar1 = param_2;
      this->mbr_0x8 = dVar6;
      param_2 = (undefined4 *)&stack0xffffffcc;
      FUN_00545780(&param_2,(int)param_1,(int)puVar1,puVar4);
      puVar3 = param_1 + (int)puVar3;
    }
    param_2 = (undefined4 *)&stack0xffffffcc;
    FUN_004016b0(param_1,puVar3,&param_3);
  }
  ExceptionList = local_10;
  return;
}



void __thiscall cls_0x40cc80::meth_0x4142d0(cls_0x40cc80 *this,uint param_1)

{
  dword dVar1;
  uint uVar2;
  int iVar3;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)(this->mbr_0x8 - dVar1) >> 2;
  }
  if (uVar2 < param_1) {
    if (dVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(this->mbr_0x8 - dVar1) >> 2;
    }
    meth_0x414030(this,(undefined4 *)this->mbr_0x8,(undefined4 *)(param_1 - iVar3),
                  (undefined4 *)&stack0x00000008);
    return;
  }
  if ((dVar1 != 0) && (param_1 < (uint)((int)((int)(undefined4 *)this->mbr_0x8 - dVar1) >> 2))) {
    meth_0x431220(this,&param_1,(undefined4 *)(this->mbr_0x4 + param_1 * 4),
                  (undefined4 *)this->mbr_0x8);
  }
  return;
}



void __thiscall cls_0x40cc80::meth_0x414400(cls_0x40cc80 *this,undefined4 *param_1)

{
  dword dVar1;
  undefined4 *puVar2;
  
  dVar1 = this->mbr_0x4;
  if ((dVar1 != 0) &&
     ((uint)((int)(this->mbr_0x8 - dVar1) >> 2) < (uint)((int)(this->mbr_0xc - dVar1) >> 2))) {
    puVar2 = (undefined4 *)this->mbr_0x8;
    FUN_005457b0(puVar2,1,param_1);
    this->mbr_0x8 = (dword)(puVar2 + 1);
    return;
  }
  meth_0x414030(this,(undefined4 *)this->mbr_0x8,(undefined4 *)0x1,param_1);
  return;
}



void __thiscall
cls_0x40cc80::meth_0x41fea0
          (cls_0x40cc80 *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *_Memory;
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  dword dVar6;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puVar3 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0062c590;
  local_10 = ExceptionList;
  param_3 = (undefined4 *)*param_3;
  dVar6 = this->mbr_0x4;
  if (dVar6 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)(this->mbr_0xc - dVar6) >> 2;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (dVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
    }
    if ((undefined4 *)(0x3fffffffU - iVar5) < param_2) {
      ExceptionList = &local_10;
      FUN_0041f800();
      ExceptionList = local_10;
      return;
    }
    if (dVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
    }
    if (uVar2 < (uint)(iVar5 + (int)param_2)) {
      if (0x3fffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (dVar6 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
      }
      if (uVar2 < (uint)(iVar5 + (int)param_2)) {
        if (dVar6 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
        }
        uVar2 = iVar5 + (int)param_2;
      }
      ExceptionList = &local_10;
      puVar3 = (undefined4 *)operator_new(uVar2 * 4);
      local_8 = 0;
      puVar4 = (undefined4 *)FUN_005456a0((undefined4 *)this->mbr_0x4,param_1,puVar3);
      FUN_005457b0(puVar4,(int)param_2,&param_3);
      FUN_005456a0(param_1,(undefined4 *)this->mbr_0x8,puVar4 + (int)param_2);
      _Memory = (void *)this->mbr_0x4;
      if (_Memory == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(this->mbr_0x8 - (int)_Memory) >> 2;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      this->mbr_0xc = (dword)(puVar3 + uVar2);
      this->mbr_0x8 = (dword)(puVar3 + (int)param_2 + iVar5);
      this->mbr_0x4 = (dword)puVar3;
      ExceptionList = local_10;
      return;
    }
    puVar4 = (undefined4 *)this->mbr_0x8;
    if ((undefined4 *)((int)puVar4 - (int)param_1 >> 2) < param_2) {
      iVar5 = (int)param_2 * 4;
      ExceptionList = &local_10;
      FUN_00413a60(param_1,puVar4,param_1 + (int)param_2);
      local_8 = 2;
      FUN_00431070((undefined4 *)this->mbr_0x8,
                   (int)param_2 - ((int)(undefined4 *)this->mbr_0x8 - (int)param_1 >> 2),&param_3);
      dVar6 = this->mbr_0x8 + iVar5;
      this->mbr_0x8 = dVar6;
      puVar3 = (undefined4 *)(dVar6 + (int)puVar3 * -4);
    }
    else {
      param_2 = puVar4 + -(int)param_2;
      ExceptionList = &local_10;
      dVar6 = FUN_00413a60(param_2,puVar4,puVar4);
      puVar1 = param_2;
      this->mbr_0x8 = dVar6;
      param_2 = (undefined4 *)&stack0xffffffcc;
      FUN_00545780(&param_2,(int)param_1,(int)puVar1,puVar4);
      puVar3 = param_1 + (int)puVar3;
    }
    param_2 = (undefined4 *)&stack0xffffffcc;
    FUN_004016b0(param_1,puVar3,&param_3);
  }
  ExceptionList = local_10;
  return;
}



void __thiscall cls_0x40cc80::meth_0x421370(cls_0x40cc80 *this,uint param_1)

{
  dword dVar1;
  uint uVar2;
  int iVar3;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)(this->mbr_0x8 - dVar1) >> 2;
  }
  if (uVar2 < param_1) {
    if (dVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(this->mbr_0x8 - dVar1) >> 2;
    }
    meth_0x41fea0(this,(undefined4 *)this->mbr_0x8,(undefined4 *)(param_1 - iVar3),
                  (undefined4 *)&stack0x00000008);
    return;
  }
  if ((dVar1 != 0) && (param_1 < (uint)((int)((int)(undefined4 *)this->mbr_0x8 - dVar1) >> 2))) {
    meth_0x431220(this,&param_1,(undefined4 *)(this->mbr_0x4 + param_1 * 4),
                  (undefined4 *)this->mbr_0x8);
  }
  return;
}



void __thiscall cls_0x40cc80::meth_0x42a270(cls_0x40cc80 *this,undefined4 *param_1)

{
  dword dVar1;
  undefined4 *puVar2;
  
  dVar1 = this->mbr_0x4;
  if ((dVar1 != 0) &&
     ((uint)((int)(this->mbr_0x8 - dVar1) >> 2) < (uint)((int)(this->mbr_0xc - dVar1) >> 2))) {
    puVar2 = (undefined4 *)this->mbr_0x8;
    FUN_005457b0(puVar2,1,param_1);
    this->mbr_0x8 = (dword)(puVar2 + 1);
    return;
  }
  meth_0x41fea0(this,(undefined4 *)this->mbr_0x8,(undefined4 *)0x1,param_1);
  return;
}



void __thiscall
cls_0x40cc80::meth_0x431220
          (cls_0x40cc80 *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 != param_3) {
    puVar1 = (undefined4 *)this->mbr_0x8;
    puVar2 = param_2;
    if (param_3 != puVar1) {
      do {
        *puVar2 = *param_3;
        param_3 = param_3 + 1;
        puVar2 = puVar2 + 1;
      } while (param_3 != puVar1);
    }
    this->mbr_0x8 = (dword)puVar2;
  }
  *param_1 = param_2;
  return;
}



void __thiscall
cls_0x40cc80::meth_0x4327e0
          (cls_0x40cc80 *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *_Memory;
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  dword dVar6;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puVar3 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0062d4a0;
  local_10 = ExceptionList;
  param_3 = (undefined4 *)*param_3;
  dVar6 = this->mbr_0x4;
  if (dVar6 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)(this->mbr_0xc - dVar6) >> 2;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (dVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
    }
    if ((undefined4 *)(0x3fffffffU - iVar5) < param_2) {
      ExceptionList = &local_10;
      FUN_00431db0();
      ExceptionList = local_10;
      return;
    }
    if (dVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
    }
    if (uVar2 < (uint)(iVar5 + (int)param_2)) {
      if (0x3fffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (dVar6 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
      }
      if (uVar2 < (uint)(iVar5 + (int)param_2)) {
        if (dVar6 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
        }
        uVar2 = iVar5 + (int)param_2;
      }
      ExceptionList = &local_10;
      puVar3 = (undefined4 *)operator_new(uVar2 * 4);
      local_8 = 0;
      puVar4 = (undefined4 *)FUN_005456a0((undefined4 *)this->mbr_0x4,param_1,puVar3);
      FUN_005457b0(puVar4,(int)param_2,&param_3);
      FUN_005456a0(param_1,(undefined4 *)this->mbr_0x8,puVar4 + (int)param_2);
      _Memory = (void *)this->mbr_0x4;
      if (_Memory == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(this->mbr_0x8 - (int)_Memory) >> 2;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      this->mbr_0xc = (dword)(puVar3 + uVar2);
      this->mbr_0x8 = (dword)(puVar3 + (int)param_2 + iVar5);
      this->mbr_0x4 = (dword)puVar3;
      ExceptionList = local_10;
      return;
    }
    puVar4 = (undefined4 *)this->mbr_0x8;
    if ((undefined4 *)((int)puVar4 - (int)param_1 >> 2) < param_2) {
      iVar5 = (int)param_2 * 4;
      ExceptionList = &local_10;
      FUN_00413a60(param_1,puVar4,param_1 + (int)param_2);
      local_8 = 2;
      FUN_00431070((undefined4 *)this->mbr_0x8,
                   (int)param_2 - ((int)(undefined4 *)this->mbr_0x8 - (int)param_1 >> 2),&param_3);
      dVar6 = this->mbr_0x8 + iVar5;
      this->mbr_0x8 = dVar6;
      puVar3 = (undefined4 *)(dVar6 + (int)puVar3 * -4);
    }
    else {
      param_2 = puVar4 + -(int)param_2;
      ExceptionList = &local_10;
      dVar6 = FUN_00413a60(param_2,puVar4,puVar4);
      puVar1 = param_2;
      this->mbr_0x8 = dVar6;
      param_2 = (undefined4 *)&stack0xffffffcc;
      FUN_00545780(&param_2,(int)param_1,(int)puVar1,puVar4);
      puVar3 = param_1 + (int)puVar3;
    }
    param_2 = (undefined4 *)&stack0xffffffcc;
    FUN_004016b0(param_1,puVar3,&param_3);
  }
  ExceptionList = local_10;
  return;
}



void __thiscall cls_0x40cc80::meth_0x432be0(cls_0x40cc80 *this,uint param_1)

{
  dword dVar1;
  uint uVar2;
  int iVar3;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)(this->mbr_0x8 - dVar1) >> 2;
  }
  if (uVar2 < param_1) {
    if (dVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(this->mbr_0x8 - dVar1) >> 2;
    }
    meth_0x4327e0(this,(undefined4 *)this->mbr_0x8,(undefined4 *)(param_1 - iVar3),
                  (undefined4 *)&stack0x00000008);
    return;
  }
  if ((dVar1 != 0) && (param_1 < (uint)((int)((int)(undefined4 *)this->mbr_0x8 - dVar1) >> 2))) {
    meth_0x431220(this,&param_1,(undefined4 *)(this->mbr_0x4 + param_1 * 4),
                  (undefined4 *)this->mbr_0x8);
  }
  return;
}



void __thiscall
cls_0x40cc80::meth_0x48e630
          (cls_0x40cc80 *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *_Memory;
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  dword dVar6;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puVar3 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00630e10;
  local_10 = ExceptionList;
  param_3 = (undefined4 *)*param_3;
  dVar6 = this->mbr_0x4;
  if (dVar6 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)(this->mbr_0xc - dVar6) >> 2;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (dVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
    }
    if ((undefined4 *)(0x3fffffffU - iVar5) < param_2) {
      ExceptionList = &local_10;
      FUN_0048e220();
      ExceptionList = local_10;
      return;
    }
    if (dVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
    }
    if (uVar2 < (uint)(iVar5 + (int)param_2)) {
      if (0x3fffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (dVar6 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
      }
      if (uVar2 < (uint)(iVar5 + (int)param_2)) {
        if (dVar6 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
        }
        uVar2 = iVar5 + (int)param_2;
      }
      ExceptionList = &local_10;
      puVar3 = (undefined4 *)operator_new(uVar2 * 4);
      local_8 = 0;
      puVar4 = (undefined4 *)FUN_005456a0((undefined4 *)this->mbr_0x4,param_1,puVar3);
      FUN_005457b0(puVar4,(int)param_2,&param_3);
      FUN_005456a0(param_1,(undefined4 *)this->mbr_0x8,puVar4 + (int)param_2);
      _Memory = (void *)this->mbr_0x4;
      if (_Memory == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(this->mbr_0x8 - (int)_Memory) >> 2;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      this->mbr_0xc = (dword)(puVar3 + uVar2);
      this->mbr_0x8 = (dword)(puVar3 + (int)param_2 + iVar5);
      this->mbr_0x4 = (dword)puVar3;
      ExceptionList = local_10;
      return;
    }
    puVar4 = (undefined4 *)this->mbr_0x8;
    if ((undefined4 *)((int)puVar4 - (int)param_1 >> 2) < param_2) {
      iVar5 = (int)param_2 * 4;
      ExceptionList = &local_10;
      FUN_00413a60(param_1,puVar4,param_1 + (int)param_2);
      local_8 = 2;
      FUN_00431070((undefined4 *)this->mbr_0x8,
                   (int)param_2 - ((int)(undefined4 *)this->mbr_0x8 - (int)param_1 >> 2),&param_3);
      dVar6 = this->mbr_0x8 + iVar5;
      this->mbr_0x8 = dVar6;
      puVar3 = (undefined4 *)(dVar6 + (int)puVar3 * -4);
    }
    else {
      param_2 = puVar4 + -(int)param_2;
      ExceptionList = &local_10;
      dVar6 = FUN_00413a60(param_2,puVar4,puVar4);
      puVar1 = param_2;
      this->mbr_0x8 = dVar6;
      param_2 = (undefined4 *)&stack0xffffffcc;
      FUN_00545780(&param_2,(int)param_1,(int)puVar1,puVar4);
      puVar3 = param_1 + (int)puVar3;
    }
    param_2 = (undefined4 *)&stack0xffffffcc;
    FUN_004016b0(param_1,puVar3,&param_3);
  }
  ExceptionList = local_10;
  return;
}



void __thiscall cls_0x40cc80::meth_0x48ece0(cls_0x40cc80 *this,uint param_1)

{
  dword dVar1;
  uint uVar2;
  int iVar3;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)(this->mbr_0x8 - dVar1) >> 2;
  }
  if (uVar2 < param_1) {
    if (dVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(this->mbr_0x8 - dVar1) >> 2;
    }
    meth_0x48e630(this,(undefined4 *)this->mbr_0x8,(undefined4 *)(param_1 - iVar3),
                  (undefined4 *)&stack0x00000008);
    return;
  }
  if ((dVar1 != 0) && (param_1 < (uint)((int)((int)(undefined4 *)this->mbr_0x8 - dVar1) >> 2))) {
    meth_0x431220(this,&param_1,(undefined4 *)(this->mbr_0x4 + param_1 * 4),
                  (undefined4 *)this->mbr_0x8);
  }
  return;
}



void __thiscall
cls_0x40cc80::meth_0x4a5720
          (cls_0x40cc80 *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *_Memory;
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  dword dVar6;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puVar3 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00631cf0;
  local_10 = ExceptionList;
  param_3 = (undefined4 *)*param_3;
  dVar6 = this->mbr_0x4;
  if (dVar6 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)(this->mbr_0xc - dVar6) >> 2;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (dVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
    }
    if ((undefined4 *)(0x3fffffffU - iVar5) < param_2) {
      ExceptionList = &local_10;
      FUN_004a56a0();
      ExceptionList = local_10;
      return;
    }
    if (dVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
    }
    if (uVar2 < (uint)(iVar5 + (int)param_2)) {
      if (0x3fffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (dVar6 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
      }
      if (uVar2 < (uint)(iVar5 + (int)param_2)) {
        if (dVar6 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
        }
        uVar2 = iVar5 + (int)param_2;
      }
      ExceptionList = &local_10;
      puVar3 = (undefined4 *)operator_new(uVar2 * 4);
      local_8 = 0;
      puVar4 = (undefined4 *)FUN_005456a0((undefined4 *)this->mbr_0x4,param_1,puVar3);
      FUN_005457b0(puVar4,(int)param_2,&param_3);
      FUN_005456a0(param_1,(undefined4 *)this->mbr_0x8,puVar4 + (int)param_2);
      _Memory = (void *)this->mbr_0x4;
      if (_Memory == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(this->mbr_0x8 - (int)_Memory) >> 2;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      this->mbr_0xc = (dword)(puVar3 + uVar2);
      this->mbr_0x8 = (dword)(puVar3 + (int)param_2 + iVar5);
      this->mbr_0x4 = (dword)puVar3;
      ExceptionList = local_10;
      return;
    }
    puVar4 = (undefined4 *)this->mbr_0x8;
    if ((undefined4 *)((int)puVar4 - (int)param_1 >> 2) < param_2) {
      iVar5 = (int)param_2 * 4;
      ExceptionList = &local_10;
      FUN_00413a60(param_1,puVar4,param_1 + (int)param_2);
      local_8 = 2;
      FUN_00431070((undefined4 *)this->mbr_0x8,
                   (int)param_2 - ((int)(undefined4 *)this->mbr_0x8 - (int)param_1 >> 2),&param_3);
      dVar6 = this->mbr_0x8 + iVar5;
      this->mbr_0x8 = dVar6;
      puVar3 = (undefined4 *)(dVar6 + (int)puVar3 * -4);
    }
    else {
      param_2 = puVar4 + -(int)param_2;
      ExceptionList = &local_10;
      dVar6 = FUN_00413a60(param_2,puVar4,puVar4);
      puVar1 = param_2;
      this->mbr_0x8 = dVar6;
      param_2 = (undefined4 *)&stack0xffffffcc;
      FUN_00545780(&param_2,(int)param_1,(int)puVar1,puVar4);
      puVar3 = param_1 + (int)puVar3;
    }
    param_2 = (undefined4 *)&stack0xffffffcc;
    FUN_004016b0(param_1,puVar3,&param_3);
  }
  ExceptionList = local_10;
  return;
}



void __thiscall cls_0x40cc80::meth_0x4a5a10(cls_0x40cc80 *this,uint param_1)

{
  dword dVar1;
  uint uVar2;
  int iVar3;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)(this->mbr_0x8 - dVar1) >> 2;
  }
  if (uVar2 < param_1) {
    if (dVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(this->mbr_0x8 - dVar1) >> 2;
    }
    meth_0x4a5720(this,(undefined4 *)this->mbr_0x8,(undefined4 *)(param_1 - iVar3),
                  (undefined4 *)&stack0x00000008);
    return;
  }
  if ((dVar1 != 0) && (param_1 < (uint)((int)((int)(undefined4 *)this->mbr_0x8 - dVar1) >> 2))) {
    meth_0x431220(this,&param_1,(undefined4 *)(this->mbr_0x4 + param_1 * 4),
                  (undefined4 *)this->mbr_0x8);
  }
  return;
}



void __thiscall
cls_0x40cc80::meth_0x4f1ae0
          (cls_0x40cc80 *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *_Memory;
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  dword dVar6;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puVar3 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006347f0;
  local_10 = ExceptionList;
  param_3 = (undefined4 *)*param_3;
  dVar6 = this->mbr_0x4;
  if (dVar6 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)(this->mbr_0xc - dVar6) >> 2;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (dVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
    }
    if ((undefined4 *)(0x3fffffffU - iVar5) < param_2) {
      ExceptionList = &local_10;
      FUN_004f1970();
      ExceptionList = local_10;
      return;
    }
    if (dVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
    }
    if (uVar2 < (uint)(iVar5 + (int)param_2)) {
      if (0x3fffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (dVar6 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
      }
      if (uVar2 < (uint)(iVar5 + (int)param_2)) {
        if (dVar6 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
        }
        uVar2 = iVar5 + (int)param_2;
      }
      ExceptionList = &local_10;
      puVar3 = (undefined4 *)operator_new(uVar2 * 4);
      local_8 = 0;
      puVar4 = (undefined4 *)FUN_005456a0((undefined4 *)this->mbr_0x4,param_1,puVar3);
      FUN_005457b0(puVar4,(int)param_2,&param_3);
      FUN_005456a0(param_1,(undefined4 *)this->mbr_0x8,puVar4 + (int)param_2);
      _Memory = (void *)this->mbr_0x4;
      if (_Memory == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(this->mbr_0x8 - (int)_Memory) >> 2;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      this->mbr_0xc = (dword)(puVar3 + uVar2);
      this->mbr_0x8 = (dword)(puVar3 + (int)param_2 + iVar5);
      this->mbr_0x4 = (dword)puVar3;
      ExceptionList = local_10;
      return;
    }
    puVar4 = (undefined4 *)this->mbr_0x8;
    if ((undefined4 *)((int)puVar4 - (int)param_1 >> 2) < param_2) {
      iVar5 = (int)param_2 * 4;
      ExceptionList = &local_10;
      FUN_00413a60(param_1,puVar4,param_1 + (int)param_2);
      local_8 = 2;
      FUN_00431070((undefined4 *)this->mbr_0x8,
                   (int)param_2 - ((int)(undefined4 *)this->mbr_0x8 - (int)param_1 >> 2),&param_3);
      dVar6 = this->mbr_0x8 + iVar5;
      this->mbr_0x8 = dVar6;
      puVar3 = (undefined4 *)(dVar6 + (int)puVar3 * -4);
    }
    else {
      param_2 = puVar4 + -(int)param_2;
      ExceptionList = &local_10;
      dVar6 = FUN_00413a60(param_2,puVar4,puVar4);
      puVar1 = param_2;
      this->mbr_0x8 = dVar6;
      param_2 = (undefined4 *)&stack0xffffffcc;
      FUN_00545780(&param_2,(int)param_1,(int)puVar1,puVar4);
      puVar3 = param_1 + (int)puVar3;
    }
    param_2 = (undefined4 *)&stack0xffffffcc;
    FUN_004016b0(param_1,puVar3,&param_3);
  }
  ExceptionList = local_10;
  return;
}



void __thiscall cls_0x40cc80::meth_0x4f24d0(cls_0x40cc80 *this,uint param_1)

{
  dword dVar1;
  uint uVar2;
  int iVar3;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)(this->mbr_0x8 - dVar1) >> 2;
  }
  if (uVar2 < param_1) {
    if (dVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(this->mbr_0x8 - dVar1) >> 2;
    }
    meth_0x4f1ae0(this,(undefined4 *)this->mbr_0x8,(undefined4 *)(param_1 - iVar3),
                  (undefined4 *)&stack0x00000008);
    return;
  }
  if ((dVar1 != 0) && (param_1 < (uint)((int)((int)(undefined4 *)this->mbr_0x8 - dVar1) >> 2))) {
    meth_0x431220(this,&param_1,(undefined4 *)(this->mbr_0x4 + param_1 * 4),
                  (undefined4 *)this->mbr_0x8);
  }
  return;
}



void __thiscall
cls_0x40cc80::meth_0x4f5160
          (cls_0x40cc80 *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *_Memory;
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  dword dVar6;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puVar3 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00634ae0;
  local_10 = ExceptionList;
  param_3 = (undefined4 *)*param_3;
  dVar6 = this->mbr_0x4;
  if (dVar6 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)(this->mbr_0xc - dVar6) >> 2;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (dVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
    }
    if ((undefined4 *)(0x3fffffffU - iVar5) < param_2) {
      ExceptionList = &local_10;
      FUN_004f50e0();
      ExceptionList = local_10;
      return;
    }
    if (dVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
    }
    if (uVar2 < (uint)(iVar5 + (int)param_2)) {
      if (0x3fffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (dVar6 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
      }
      if (uVar2 < (uint)(iVar5 + (int)param_2)) {
        if (dVar6 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
        }
        uVar2 = iVar5 + (int)param_2;
      }
      ExceptionList = &local_10;
      puVar3 = (undefined4 *)operator_new(uVar2 * 4);
      local_8 = 0;
      puVar4 = (undefined4 *)FUN_005456a0((undefined4 *)this->mbr_0x4,param_1,puVar3);
      FUN_005457b0(puVar4,(int)param_2,&param_3);
      FUN_005456a0(param_1,(undefined4 *)this->mbr_0x8,puVar4 + (int)param_2);
      _Memory = (void *)this->mbr_0x4;
      if (_Memory == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(this->mbr_0x8 - (int)_Memory) >> 2;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      this->mbr_0xc = (dword)(puVar3 + uVar2);
      this->mbr_0x8 = (dword)(puVar3 + (int)param_2 + iVar5);
      this->mbr_0x4 = (dword)puVar3;
      ExceptionList = local_10;
      return;
    }
    puVar4 = (undefined4 *)this->mbr_0x8;
    if ((undefined4 *)((int)puVar4 - (int)param_1 >> 2) < param_2) {
      iVar5 = (int)param_2 * 4;
      ExceptionList = &local_10;
      FUN_00413a60(param_1,puVar4,param_1 + (int)param_2);
      local_8 = 2;
      FUN_00431070((undefined4 *)this->mbr_0x8,
                   (int)param_2 - ((int)(undefined4 *)this->mbr_0x8 - (int)param_1 >> 2),&param_3);
      dVar6 = this->mbr_0x8 + iVar5;
      this->mbr_0x8 = dVar6;
      puVar3 = (undefined4 *)(dVar6 + (int)puVar3 * -4);
    }
    else {
      param_2 = puVar4 + -(int)param_2;
      ExceptionList = &local_10;
      dVar6 = FUN_00413a60(param_2,puVar4,puVar4);
      puVar1 = param_2;
      this->mbr_0x8 = dVar6;
      param_2 = (undefined4 *)&stack0xffffffcc;
      FUN_00545780(&param_2,(int)param_1,(int)puVar1,puVar4);
      puVar3 = param_1 + (int)puVar3;
    }
    param_2 = (undefined4 *)&stack0xffffffcc;
    FUN_004016b0(param_1,puVar3,&param_3);
  }
  ExceptionList = local_10;
  return;
}



void __thiscall cls_0x40cc80::meth_0x4f5d30(cls_0x40cc80 *this,uint param_1)

{
  dword dVar1;
  uint uVar2;
  int iVar3;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)(this->mbr_0x8 - dVar1) >> 2;
  }
  if (uVar2 < param_1) {
    if (dVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(this->mbr_0x8 - dVar1) >> 2;
    }
    meth_0x4f5160(this,(undefined4 *)this->mbr_0x8,(undefined4 *)(param_1 - iVar3),
                  (undefined4 *)&stack0x00000008);
    return;
  }
  if ((dVar1 != 0) && (param_1 < (uint)((int)((int)(undefined4 *)this->mbr_0x8 - dVar1) >> 2))) {
    meth_0x431220(this,&param_1,(undefined4 *)(this->mbr_0x4 + param_1 * 4),
                  (undefined4 *)this->mbr_0x8);
  }
  return;
}



void __thiscall
cls_0x40cc80::meth_0x515580
          (cls_0x40cc80 *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *_Memory;
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  dword dVar6;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puVar3 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00635d60;
  local_10 = ExceptionList;
  param_3 = (undefined4 *)*param_3;
  dVar6 = this->mbr_0x4;
  if (dVar6 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)(this->mbr_0xc - dVar6) >> 2;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (dVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
    }
    if ((undefined4 *)(0x3fffffffU - iVar5) < param_2) {
      ExceptionList = &local_10;
      FUN_00514fb0();
      ExceptionList = local_10;
      return;
    }
    if (dVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
    }
    if (uVar2 < (uint)(iVar5 + (int)param_2)) {
      if (0x3fffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (dVar6 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
      }
      if (uVar2 < (uint)(iVar5 + (int)param_2)) {
        if (dVar6 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
        }
        uVar2 = iVar5 + (int)param_2;
      }
      ExceptionList = &local_10;
      puVar3 = (undefined4 *)operator_new(uVar2 * 4);
      local_8 = 0;
      puVar4 = (undefined4 *)FUN_005456a0((undefined4 *)this->mbr_0x4,param_1,puVar3);
      FUN_005457b0(puVar4,(int)param_2,&param_3);
      FUN_005456a0(param_1,(undefined4 *)this->mbr_0x8,puVar4 + (int)param_2);
      _Memory = (void *)this->mbr_0x4;
      if (_Memory == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(this->mbr_0x8 - (int)_Memory) >> 2;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      this->mbr_0xc = (dword)(puVar3 + uVar2);
      this->mbr_0x8 = (dword)(puVar3 + (int)param_2 + iVar5);
      this->mbr_0x4 = (dword)puVar3;
      ExceptionList = local_10;
      return;
    }
    puVar4 = (undefined4 *)this->mbr_0x8;
    if ((undefined4 *)((int)puVar4 - (int)param_1 >> 2) < param_2) {
      iVar5 = (int)param_2 * 4;
      ExceptionList = &local_10;
      FUN_00413a60(param_1,puVar4,param_1 + (int)param_2);
      local_8 = 2;
      FUN_00431070((undefined4 *)this->mbr_0x8,
                   (int)param_2 - ((int)(undefined4 *)this->mbr_0x8 - (int)param_1 >> 2),&param_3);
      dVar6 = this->mbr_0x8 + iVar5;
      this->mbr_0x8 = dVar6;
      puVar3 = (undefined4 *)(dVar6 + (int)puVar3 * -4);
    }
    else {
      param_2 = puVar4 + -(int)param_2;
      ExceptionList = &local_10;
      dVar6 = FUN_00413a60(param_2,puVar4,puVar4);
      puVar1 = param_2;
      this->mbr_0x8 = dVar6;
      param_2 = (undefined4 *)&stack0xffffffcc;
      FUN_00545780(&param_2,(int)param_1,(int)puVar1,puVar4);
      puVar3 = param_1 + (int)puVar3;
    }
    param_2 = (undefined4 *)&stack0xffffffcc;
    FUN_004016b0(param_1,puVar3,&param_3);
  }
  ExceptionList = local_10;
  return;
}



void __thiscall cls_0x40cc80::meth_0x515d50(cls_0x40cc80 *this,uint param_1)

{
  dword dVar1;
  uint uVar2;
  int iVar3;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)(this->mbr_0x8 - dVar1) >> 2;
  }
  if (uVar2 < param_1) {
    if (dVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(this->mbr_0x8 - dVar1) >> 2;
    }
    meth_0x515580(this,(undefined4 *)this->mbr_0x8,(undefined4 *)(param_1 - iVar3),
                  (undefined4 *)&stack0x00000008);
    return;
  }
  if ((dVar1 != 0) && (param_1 < (uint)((int)((int)(undefined4 *)this->mbr_0x8 - dVar1) >> 2))) {
    meth_0x431220(this,&param_1,(undefined4 *)(this->mbr_0x4 + param_1 * 4),
                  (undefined4 *)this->mbr_0x8);
  }
  return;
}



void __thiscall
cls_0x40cc80::meth_0x5615a0
          (cls_0x40cc80 *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *_Memory;
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  dword dVar6;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puVar3 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00638390;
  local_10 = ExceptionList;
  param_3 = (undefined4 *)*param_3;
  dVar6 = this->mbr_0x4;
  if (dVar6 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)(this->mbr_0xc - dVar6) >> 2;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (dVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
    }
    if ((undefined4 *)(0x3fffffffU - iVar5) < param_2) {
      ExceptionList = &local_10;
      FUN_00560eb0();
      ExceptionList = local_10;
      return;
    }
    if (dVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
    }
    if (uVar2 < (uint)(iVar5 + (int)param_2)) {
      if (0x3fffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (dVar6 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
      }
      if (uVar2 < (uint)(iVar5 + (int)param_2)) {
        if (dVar6 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
        }
        uVar2 = iVar5 + (int)param_2;
      }
      ExceptionList = &local_10;
      puVar3 = (undefined4 *)operator_new(uVar2 * 4);
      local_8 = 0;
      puVar4 = (undefined4 *)FUN_005456a0((undefined4 *)this->mbr_0x4,param_1,puVar3);
      FUN_005457b0(puVar4,(int)param_2,&param_3);
      FUN_005456a0(param_1,(undefined4 *)this->mbr_0x8,puVar4 + (int)param_2);
      _Memory = (void *)this->mbr_0x4;
      if (_Memory == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(this->mbr_0x8 - (int)_Memory) >> 2;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      this->mbr_0xc = (dword)(puVar3 + uVar2);
      this->mbr_0x8 = (dword)(puVar3 + (int)param_2 + iVar5);
      this->mbr_0x4 = (dword)puVar3;
      ExceptionList = local_10;
      return;
    }
    puVar4 = (undefined4 *)this->mbr_0x8;
    if ((undefined4 *)((int)puVar4 - (int)param_1 >> 2) < param_2) {
      iVar5 = (int)param_2 * 4;
      ExceptionList = &local_10;
      FUN_00413a60(param_1,puVar4,param_1 + (int)param_2);
      local_8 = 2;
      FUN_00431070((undefined4 *)this->mbr_0x8,
                   (int)param_2 - ((int)(undefined4 *)this->mbr_0x8 - (int)param_1 >> 2),&param_3);
      dVar6 = this->mbr_0x8 + iVar5;
      this->mbr_0x8 = dVar6;
      puVar3 = (undefined4 *)(dVar6 + (int)puVar3 * -4);
    }
    else {
      param_2 = puVar4 + -(int)param_2;
      ExceptionList = &local_10;
      dVar6 = FUN_00413a60(param_2,puVar4,puVar4);
      puVar1 = param_2;
      this->mbr_0x8 = dVar6;
      param_2 = (undefined4 *)&stack0xffffffcc;
      FUN_00545780(&param_2,(int)param_1,(int)puVar1,puVar4);
      puVar3 = param_1 + (int)puVar3;
    }
    param_2 = (undefined4 *)&stack0xffffffcc;
    FUN_004016b0(param_1,puVar3,&param_3);
  }
  ExceptionList = local_10;
  return;
}



void __thiscall cls_0x40cc80::meth_0x561a10(cls_0x40cc80 *this,uint param_1)

{
  dword dVar1;
  uint uVar2;
  int iVar3;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)(this->mbr_0x8 - dVar1) >> 2;
  }
  if (uVar2 < param_1) {
    if (dVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(this->mbr_0x8 - dVar1) >> 2;
    }
    meth_0x5615a0(this,(undefined4 *)this->mbr_0x8,(undefined4 *)(param_1 - iVar3),
                  (undefined4 *)&stack0x00000008);
    return;
  }
  if ((dVar1 != 0) && (param_1 < (uint)((int)((int)(undefined4 *)this->mbr_0x8 - dVar1) >> 2))) {
    meth_0x431220(this,&param_1,(undefined4 *)(this->mbr_0x4 + param_1 * 4),
                  (undefined4 *)this->mbr_0x8);
  }
  return;
}



void __thiscall cls_0x40cc80::meth_0x5623f0(cls_0x40cc80 *this,undefined4 *param_1)

{
  dword dVar1;
  undefined4 *puVar2;
  
  dVar1 = this->mbr_0x4;
  if ((dVar1 != 0) &&
     ((uint)((int)(this->mbr_0x8 - dVar1) >> 2) < (uint)((int)(this->mbr_0xc - dVar1) >> 2))) {
    puVar2 = (undefined4 *)this->mbr_0x8;
    FUN_005457b0(puVar2,1,param_1);
    this->mbr_0x8 = (dword)(puVar2 + 1);
    return;
  }
  meth_0x5615a0(this,(undefined4 *)this->mbr_0x8,(undefined4 *)0x1,param_1);
  return;
}



void __thiscall
cls_0x40cc80::meth_0x5b3550
          (cls_0x40cc80 *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *_Memory;
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  dword dVar6;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puVar3 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063b690;
  local_10 = ExceptionList;
  param_3 = (undefined4 *)*param_3;
  dVar6 = this->mbr_0x4;
  if (dVar6 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)(this->mbr_0xc - dVar6) >> 2;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (dVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
    }
    if ((undefined4 *)(0x3fffffffU - iVar5) < param_2) {
      ExceptionList = &local_10;
      FUN_005b3480();
      ExceptionList = local_10;
      return;
    }
    if (dVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
    }
    if (uVar2 < (uint)(iVar5 + (int)param_2)) {
      if (0x3fffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (dVar6 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
      }
      if (uVar2 < (uint)(iVar5 + (int)param_2)) {
        if (dVar6 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(this->mbr_0x8 - dVar6) >> 2;
        }
        uVar2 = iVar5 + (int)param_2;
      }
      ExceptionList = &local_10;
      puVar3 = (undefined4 *)operator_new(uVar2 * 4);
      local_8 = 0;
      puVar4 = (undefined4 *)FUN_005456a0((undefined4 *)this->mbr_0x4,param_1,puVar3);
      FUN_005457b0(puVar4,(int)param_2,&param_3);
      FUN_005456a0(param_1,(undefined4 *)this->mbr_0x8,puVar4 + (int)param_2);
      _Memory = (void *)this->mbr_0x4;
      if (_Memory == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(this->mbr_0x8 - (int)_Memory) >> 2;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      this->mbr_0xc = (dword)(puVar3 + uVar2);
      this->mbr_0x8 = (dword)(puVar3 + (int)param_2 + iVar5);
      this->mbr_0x4 = (dword)puVar3;
      ExceptionList = local_10;
      return;
    }
    puVar4 = (undefined4 *)this->mbr_0x8;
    if ((undefined4 *)((int)puVar4 - (int)param_1 >> 2) < param_2) {
      iVar5 = (int)param_2 * 4;
      ExceptionList = &local_10;
      FUN_00413a60(param_1,puVar4,param_1 + (int)param_2);
      local_8 = 2;
      FUN_00431070((undefined4 *)this->mbr_0x8,
                   (int)param_2 - ((int)(undefined4 *)this->mbr_0x8 - (int)param_1 >> 2),&param_3);
      dVar6 = this->mbr_0x8 + iVar5;
      this->mbr_0x8 = dVar6;
      puVar3 = (undefined4 *)(dVar6 + (int)puVar3 * -4);
    }
    else {
      param_2 = puVar4 + -(int)param_2;
      ExceptionList = &local_10;
      dVar6 = FUN_00413a60(param_2,puVar4,puVar4);
      puVar1 = param_2;
      this->mbr_0x8 = dVar6;
      param_2 = (undefined4 *)&stack0xffffffcc;
      FUN_00545780(&param_2,(int)param_1,(int)puVar1,puVar4);
      puVar3 = param_1 + (int)puVar3;
    }
    param_2 = (undefined4 *)&stack0xffffffcc;
    FUN_004016b0(param_1,puVar3,&param_3);
  }
  ExceptionList = local_10;
  return;
}



void __thiscall cls_0x40cc80::meth_0x5b37f0(cls_0x40cc80 *this,uint param_1)

{
  dword dVar1;
  uint uVar2;
  int iVar3;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)(this->mbr_0x8 - dVar1) >> 2;
  }
  if (uVar2 < param_1) {
    if (dVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(this->mbr_0x8 - dVar1) >> 2;
    }
    meth_0x5b3550(this,(undefined4 *)this->mbr_0x8,(undefined4 *)(param_1 - iVar3),
                  (undefined4 *)&stack0x00000008);
    return;
  }
  if ((dVar1 != 0) && (param_1 < (uint)((int)((int)(undefined4 *)this->mbr_0x8 - dVar1) >> 2))) {
    meth_0x431220(this,&param_1,(undefined4 *)(this->mbr_0x4 + param_1 * 4),
                  (undefined4 *)this->mbr_0x8);
  }
  return;
}


