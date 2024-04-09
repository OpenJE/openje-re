#include "../include/cls_0x502870.h"

uint __thiscall
cls_0x502870::meth_0x502870
          (cls_0x502870 *this,uint *param_1,uint param_2,uint param_3,int param_4,int param_5,
          char param_6,uint param_7)

{
  int iVar1;
  uint uVar2;
  uint in_EAX;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  uVar3 = in_EAX & 0xffffff00;
  if ((param_2 < this->mbr_0x84) && (param_3 < *(uint *)(param_2 * 0x44c + 0x42c + this->mbr_0x88)))
  {
    iVar1 = *(int *)(param_2 * 0x44c + this->mbr_0x88 + 0x430);
    uVar2 = *(uint *)(param_3 * 0xec + 0xe4 + iVar1);
    iVar1 = *(int *)(param_3 * 0xec + 0xe8 + iVar1);
    *param_1 = 0;
    if (uVar2 != 0) {
      do {
        iVar4 = *param_1 * 0x20;
        iVar5 = iVar4 + iVar1;
        if ((*(int *)(iVar4 + iVar1) == param_4) && (*(int *)(iVar5 + 4) == param_5)) {
          iVar4 = *(int *)(iVar5 + 0x10);
          if (param_6 == '\0') {
            if ((((iVar4 != 0x17) && (iVar4 != 0x18)) && (iVar4 != 0x19)) && (iVar4 != 0x1a)) {
              bVar7 = iVar4 == 0x1e;
              goto LAB_0050291c;
            }
          }
          else if (iVar4 != 0x16) {
            bVar7 = iVar4 == 0x15;
LAB_0050291c:
            if (!bVar7) goto LAB_00502931;
          }
          if (param_7 == 0) {
            bVar7 = *(uint *)(iVar5 + 8) < 0x3c;
          }
          else {
            bVar7 = *(uint *)(iVar5 + 8) < param_7;
          }
          if (!bVar7) {
            return CONCAT31((int3)((uint)param_4 >> 8),1);
          }
        }
LAB_00502931:
        uVar6 = *param_1 + 1;
        *param_1 = uVar6;
        uVar3 = param_4;
      } while (uVar6 < uVar2);
    }
    uVar3 = uVar3 & 0xffffff00;
  }
  return uVar3;
}



dword __thiscall cls_0x502870::meth_0x502bb0(cls_0x502870 *this)

{
  int *piVar1;
  dword dVar2;
  
  piVar1 = (int *)this->mbr_0x8;
  if (piVar1 != (int *)0x0) {
    dVar2 = (**(code **)(*piVar1 + 0x10))(piVar1);
    this->mbr_0xe8 = dVar2;
    FUN_00497120((byte *)"Free Texture Memory: %d\n");
  }
  return this->mbr_0xe8;
}



void __thiscall cls_0x502870::meth_0x502cb0(cls_0x502870 *this)

{
  int *piVar1;
  int iVar2;
  dword *pdVar3;
  undefined4 *puVar4;
  
  pdVar3 = &this->mbr_0xf4;
  for (iVar2 = 0xae; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pdVar3 = 0;
    pdVar3 = pdVar3 + 1;
  }
  puVar4 = (undefined4 *)&DAT_00708158;
  for (iVar2 = 0x2b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  this->mbr_0x184 = 0;
  this->mbr_0x158 = 8;
  this->mbr_0x1d4 = 8;
  this->mbr_0x188 = 0x3f800000;
  this->mbr_0x18c = 0x3f800000;
  piVar1 = (int *)this->mbr_0x94;
  this->mbr_0x110 = 1;
  this->mbr_0x114 = 3;
  this->mbr_0x118 = 2;
  this->mbr_0x11c = 0;
  this->mbr_0x12c = 1;
  this->mbr_0x130 = 0;
  this->mbr_0x134 = 1;
  this->mbr_0x140 = 2;
  this->mbr_0x144 = 1;
  this->mbr_0x14c = 3;
  this->mbr_0x150 = 4;
  this->mbr_0x154 = 0;
  this->mbr_0x15c = 0;
  this->mbr_0x160 = 0;
  this->mbr_0x164 = 0;
  this->mbr_0x168 = 0;
  this->mbr_0x16c = 0;
  this->mbr_0x17c = 0;
  this->mbr_0x180 = 0;
  this->mbr_0x194 = 0;
  this->mbr_0x1b0 = 0;
  this->mbr_0x1b4 = 0;
  this->mbr_0x1c4 = 0;
  this->mbr_0x1c8 = 1;
  this->mbr_0x1cc = 1;
  this->mbr_0x1d0 = 1;
  this->mbr_0x1d8 = 0;
  this->mbr_0x1dc = 0xffffffff;
  this->mbr_0x1e0 = 0xffffffff;
  this->mbr_0x1e4 = 0;
  this->mbr_0x2f4 = 0;
  this->mbr_0x2f8 = 0;
  this->mbr_0x2fc = 0;
  this->mbr_0x300 = 0;
  this->mbr_0x304 = 0;
  this->mbr_0x308 = 0;
  this->mbr_0x30c = 0;
  this->mbr_0x310 = 0;
  this->mbr_0x314 = 1;
  this->mbr_0x318 = 1;
  this->mbr_0x320 = 0;
  this->mbr_0x324 = 0;
  this->mbr_0x328 = 1;
  this->mbr_0x32c = 1;
  this->mbr_0x330 = 0;
  this->mbr_0x338 = 1;
  this->mbr_0x33c = 2;
  this->mbr_0x340 = 2;
  this->mbr_0x344 = 0;
  this->mbr_0x350 = 0;
  this->mbr_0x354 = 0;
  if ((*piVar1 == 3) || ((piVar1[9] & 0x10000U) == 0)) {
    this->mbr_0x358 = 1;
  }
  else {
    this->mbr_0x358 = 0;
  }
  this->mbr_0x35c = 0x3f800000;
  this->mbr_0x360 = 0x3f800000;
  this->mbr_0x36c = 0x3f800000;
  this->mbr_0x370 = 0;
  this->mbr_0x374 = 0;
  this->mbr_0x364 = 0;
  this->mbr_0x368 = 0;
  this->mbr_0x37c = 0xffffffff;
  this->mbr_0x380 = 0;
  this->mbr_0x384 = 0x3f800000;
  this->mbr_0x388 = 0;
  this->mbr_0x378 = 1;
  this->mbr_0x38c = piVar1[0x2e];
  this->mbr_0x390 = 0;
  this->mbr_0x394 = 0xf;
  this->mbr_0x39c = 0;
  this->mbr_0x3a0 = 1;
  this->mbr_0x3a4 = 3;
  this->mbr_0x3a8 = 1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall cls_0x502870::meth_0x502f40(cls_0x502870 *this)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint local_8;
  
  _DAT_007082f0 = 0;
  _DAT_007082f4 = 0;
  puVar3 = &DAT_00708208;
  for (iVar1 = 0x3a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_8 = 0;
  if (this->mbr_0x664 != 0) {
    do {
      iVar2 = local_8 * 0x78;
      puVar3 = (undefined4 *)(this->mbr_0x668 + iVar2);
      for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      if (local_8 == 0) {
        *(undefined4 *)(this->mbr_0x668 + 8) = 4;
      }
      else {
        *(undefined4 *)(iVar2 + 8 + this->mbr_0x668) = 1;
      }
      *(undefined4 *)(iVar2 + 0xc + this->mbr_0x668) = 2;
      *(undefined4 *)(iVar2 + 0x10 + this->mbr_0x668) = 1;
      if (local_8 == 0) {
        *(undefined4 *)(this->mbr_0x668 + 0x14) = 2;
      }
      else {
        *(undefined4 *)(iVar2 + 0x14 + this->mbr_0x668) = 1;
      }
      *(undefined4 *)(iVar2 + 0x18 + this->mbr_0x668) = 2;
      *(undefined4 *)(iVar2 + 0x1c + this->mbr_0x668) = 1;
      *(undefined4 *)(iVar2 + 0x20 + this->mbr_0x668) = 0;
      *(undefined4 *)(iVar2 + 0x24 + this->mbr_0x668) = 0;
      *(undefined4 *)(iVar2 + 0x28 + this->mbr_0x668) = 0;
      *(undefined4 *)(iVar2 + 0x2c + this->mbr_0x668) = 0;
      *(uint *)(iVar2 + 0x30 + this->mbr_0x668) = local_8;
      *(undefined4 *)(iVar2 + 0x38 + this->mbr_0x668) = 1;
      *(undefined4 *)(iVar2 + 0x3c + this->mbr_0x668) = 1;
      *(undefined4 *)(iVar2 + 0x40 + this->mbr_0x668) = 0;
      *(undefined4 *)(iVar2 + 0x44 + this->mbr_0x668) = 1;
      *(undefined4 *)(iVar2 + 0x48 + this->mbr_0x668) = 1;
      *(undefined4 *)(iVar2 + 0x4c + this->mbr_0x668) = 0;
      *(undefined4 *)(iVar2 + 0x50 + this->mbr_0x668) = 0;
      *(undefined4 *)(iVar2 + 0x54 + this->mbr_0x668) = 0;
      *(undefined4 *)(iVar2 + 0x58 + this->mbr_0x668) = 1;
      *(undefined4 *)(iVar2 + 0x5c + this->mbr_0x668) = 0;
      *(undefined4 *)(iVar2 + 0x60 + this->mbr_0x668) = 0;
      *(undefined4 *)(iVar2 + 100 + this->mbr_0x668) = 0;
      *(undefined4 *)(iVar2 + 0x68 + this->mbr_0x668) = 1;
      if ((*(byte *)(this->mbr_0x94 + 0x9b) & 3) != 0) {
        *(undefined4 *)(iVar2 + 0x6c + this->mbr_0x668) = 0;
        *(undefined4 *)(iVar2 + 0x70 + this->mbr_0x668) = 0;
      }
      if ((*(uint *)(this->mbr_0x94 + 0x28) & 0x400) != 0) {
        *(undefined4 *)(iVar2 + 0x74 + this->mbr_0x668) = 1;
      }
      local_8 = local_8 + 1;
    } while (local_8 < this->mbr_0x664);
  }
  return;
}



void __thiscall cls_0x502870::meth_0x503120(cls_0x502870 *this)

{
  int iVar1;
  dword *pdVar2;
  uint uVar3;
  dword *pdVar4;
  
  pdVar2 = &this->mbr_0xf4;
  pdVar4 = &this->mbr_0x3ac;
  for (iVar1 = 0xae; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pdVar4 = *pdVar2;
    pdVar2 = pdVar2 + 1;
    pdVar4 = pdVar4 + 1;
  }
  uVar3 = 0;
  do {
    (**(code **)(*(int *)this->mbr_0x8 + 200))
              ((int *)this->mbr_0x8,*(int *)((int)&DAT_00673bc0 + uVar3),
               (&this->mbr_0x3ac)[*(int *)((int)&DAT_00673bc0 + uVar3)]);
    uVar3 = uVar3 + 4;
  } while (uVar3 < 0x130);
  return;
}



void __thiscall cls_0x502870::meth_0x503170(cls_0x502870 *this)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_8;
  uint local_4;
  
  puVar3 = (undefined4 *)this->mbr_0x668;
  puVar4 = (undefined4 *)this->mbr_0x66c;
  for (uVar1 = this->mbr_0x664 * 0x78 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined *)puVar4 = *(undefined *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  local_4 = 0;
  if (this->mbr_0x664 != 0) {
    local_8 = 0;
    do {
      uVar1 = 0;
      do {
        (**(code **)(*(int *)this->mbr_0x8 + 0xfc))
                  ((int *)this->mbr_0x8,local_4,*(int *)((int)&DAT_00673cf0 + uVar1),
                   *(undefined4 *)
                    (this->mbr_0x66c + 4 + (local_8 + *(int *)((int)&DAT_00673cf0 + uVar1)) * 4));
        uVar1 = uVar1 + 4;
      } while (uVar1 < 0x6c);
      local_4 = local_4 + 1;
      local_8 = local_8 + 0x1e;
    } while (local_4 < this->mbr_0x664);
  }
  return;
}



void __thiscall cls_0x502870::meth_0x503220(cls_0x502870 *this,char param_1)

{
  uint uVar1;
  uint uStack_4;
  
  if (param_1 != '\0') {
    meth_0x503120(this);
    meth_0x503170(this);
    return;
  }
  uVar1 = 0;
  do {
    (**(code **)(*(int *)this->mbr_0x8 + 200))
              ((int *)this->mbr_0x8,*(int *)((int)&DAT_00673bc0 + uVar1),
               (&this->mbr_0x3ac)[*(int *)((int)&DAT_00673bc0 + uVar1)]);
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x130);
  uStack_4 = 0;
  if (this->mbr_0x664 != 0) {
    _param_1 = 0;
    do {
      uVar1 = 0;
      do {
        (**(code **)(*(int *)this->mbr_0x8 + 0xfc))
                  ((int *)this->mbr_0x8,uStack_4,*(int *)((int)&DAT_00673cf0 + uVar1),
                   *(undefined4 *)
                    (this->mbr_0x66c + 4 + (_param_1 + *(int *)((int)&DAT_00673cf0 + uVar1)) * 4));
        uVar1 = uVar1 + 4;
      } while (uVar1 < 0x6c);
      uStack_4 = uStack_4 + 1;
      _param_1 = _param_1 + 0x1e;
    } while (uStack_4 < this->mbr_0x664);
  }
  return;
}



void __thiscall cls_0x502870::meth_0x503cd0(cls_0x502870 *this,undefined4 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  dword *pdVar3;
  uint unaff_retaddr;
  char acStack_104 [256];
  uint local_4;
  
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  if (param_1 != (undefined4 *)0x0) {
    pdVar3 = &this->mbr_0xc;
    for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pdVar3 = *param_1;
      param_1 = param_1 + 1;
      pdVar3 = pdVar3 + 1;
    }
  }
  piVar1 = (int *)this->mbr_0x8;
  if (piVar1 == (int *)0x0) {
    FUN_00497120((byte *)"DeviceReset: Device not created yet\n");
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0x38))(piVar1,&this->mbr_0xc);
    if (iVar2 < 0) {
      FUN_00497120((byte *)"DeviceReset failed!\n");
      FUN_005d03e1(iVar2,acStack_104,0x100);
      FUN_00497120((byte *)"DXErr: %s\n");
    }
    else {
      meth_0x503220(this,'\0');
    }
  }
  FUN_00616e15(local_4 ^ unaff_retaddr);
  return;
}



void __thiscall cls_0x502870::meth_0x503d90(cls_0x502870 *this,int param_1)

{
  undefined4 *puVar1;
  uint unaff_ESI;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  dword local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  this->mbr_0xa0 = 0;
  puVar1 = (undefined4 *)(*(int *)(this->mbr_0x94 + 0xe8) + param_1 * 0x20);
  this->mbr_0x9c = (dword)puVar1;
  local_34 = *puVar1;
  local_30 = puVar1[1];
  local_2c = puVar1[4];
  local_8 = puVar1[2];
  local_10 = puVar1[5];
  local_18 = 0;
  local_24 = 0;
  local_c = 0;
  local_1c = this->mbr_0x24;
  local_4 = (-(uint)(this->mbr_0x690 != 0) & 0x80000001) + 0x80000000;
  local_20 = 1;
  local_28 = 1;
  local_14 = 1;
  meth_0x503cd0(this,&local_34,unaff_ESI);
  return;
}



void __thiscall
cls_0x502870::meth_0x503e30(cls_0x502870 *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  dword dVar2;
  int iVar3;
  uint unaff_EDI;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  dword local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = this->mbr_0x8c * 0x44c + this->mbr_0x88;
  this->mbr_0xa0 = 1;
  local_2c = *(undefined4 *)(iVar3 + 0x440);
  local_18 = 1;
  local_20 = 1;
  local_10 = *(undefined4 *)(iVar3 + 0x444);
  local_8 = 0;
  local_4 = 0;
  this->mbr_0x9c = (dword)&this->mbr_0x670;
  this->mbr_0x688 = *(dword *)(iVar3 + 0x448);
  puVar1 = (undefined4 *)this->mbr_0x9c;
  *puVar1 = *(undefined4 *)(iVar3 + 0x434);
  puVar1[1] = *(undefined4 *)(iVar3 + 0x438);
  puVar1[2] = *(undefined4 *)(iVar3 + 0x43c);
  puVar1[3] = *(undefined4 *)(iVar3 + 0x440);
  puVar1[4] = puVar1[3];
  *(undefined4 *)this->mbr_0x9c = param_1;
  *(undefined4 *)(this->mbr_0x9c + 4) = param_2;
  *(undefined4 *)(this->mbr_0x9c + 8) = 0;
  iVar3 = *(int *)(this->mbr_0x8c * 0x44c + 0x444 + this->mbr_0x88);
  dVar2 = this->mbr_0x9c;
  local_34 = param_1;
  local_30 = param_2;
  if (((iVar3 == 0x4b) || (iVar3 == 0x4f)) || (iVar3 == 0x49)) {
    *(undefined *)(dVar2 + 0x1c) = 1;
  }
  else {
    *(undefined *)(dVar2 + 0x1c) = 0;
  }
  *(int *)(dVar2 + 0x14) = iVar3;
  local_1c = this->mbr_0x24;
  local_28 = 1;
  local_14 = 1;
  local_24 = 0;
  local_c = 0;
  meth_0x503cd0(this,&local_34,unaff_EDI);
  return;
}


