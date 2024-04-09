#include "../include/cls_0x475cf0.h"

int __thiscall cls_0x475cf0::meth_0x475cf0(cls_0x475cf0 *this)

{
  dword *pdVar1;
  uint uVar2;
  
  uVar2 = 0;
  pdVar1 = &this->mbr_0x8;
  do {
    if (*pdVar1 != 0xffffffff) {
      return (&this->mbr_0x8)[uVar2] + this->mbr_0x1c;
    }
    uVar2 = uVar2 + 1;
    pdVar1 = pdVar1 + 1;
  } while (uVar2 < 4);
  return -1;
}



void __thiscall cls_0x475cf0::meth_0x475f1e(cls_0x475cf0 *this,int param_1)

{
  int iVar1;
  int iVar2;
  dword dVar3;
  int iVar4;
  
  iVar4 = param_1 * 0xc;
  iVar1 = this->mbr_0x18 + iVar4;
  iVar2 = *(int *)(iVar1 + 4);
  if (iVar2 == -1) {
    dVar3 = *(dword *)(iVar1 + 8);
    (&this->mbr_0x8)[*(byte *)(iVar1 + 1)] = dVar3;
    if (dVar3 != 0xffffffff) {
      *(undefined4 *)(this->mbr_0x18 + 4 + dVar3 * 0xc) = 0xffffffff;
    }
  }
  else {
    iVar1 = *(int *)(iVar1 + 8);
    *(int *)(this->mbr_0x18 + 8 + iVar2 * 0xc) = iVar1;
    if (iVar1 != -1) {
      *(int *)(this->mbr_0x18 + 4 + iVar1 * 0xc) = iVar2;
    }
  }
  *(undefined4 *)(this->mbr_0x18 + 8 + iVar4) = 0xffffffff;
  *(undefined4 *)(this->mbr_0x18 + 4 + iVar4) = 0xffffffff;
  return;
}



void __thiscall cls_0x475cf0::meth_0x475f85(cls_0x475cf0 *this,int param_1)

{
  int iVar1;
  byte bVar2;
  dword dVar3;
  
  iVar1 = this->mbr_0x18 + param_1 * 0xc;
  bVar2 = *(byte *)(iVar1 + 1);
  dVar3 = (&this->mbr_0x8)[bVar2];
  *(dword *)(iVar1 + 8) = dVar3;
  if (dVar3 != 0xffffffff) {
    *(int *)(this->mbr_0x18 + 4 + dVar3 * 0xc) = param_1;
  }
  (&this->mbr_0x8)[bVar2] = param_1;
  *(undefined4 *)(this->mbr_0x18 + 4 + param_1 * 0xc) = 0xffffffff;
  return;
}



void __thiscall cls_0x475cf0::meth_0x475fc4(cls_0x475cf0 *this,int param_1)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = param_1 - this->mbr_0x1c;
  meth_0x475f1e(this,iVar2);
  pcVar1 = (char *)(this->mbr_0x18 + 1 + iVar2 * 0xc);
  *pcVar1 = *pcVar1 + -1;
  meth_0x475f85(this,iVar2);
  return;
}



undefined4 __thiscall
cls_0x475cf0::meth_0x47a70b(cls_0x475cf0 *this,uint param_1,int param_2,char param_3)

{
  void *pvVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = 0;
  if (this->mbr_0x18 == 0) {
    pvVar1 = operator_new(this->mbr_0x24 * 0xc);
    this->mbr_0x18 = (dword)pvVar1;
    if (pvVar1 == (void *)0x0) {
LAB_0047a74e:
                    /* WARNING: Subroutine does not return */
      _free((void *)this->mbr_0x18);
    }
    if (param_3 != '\0') {
      pvVar1 = operator_new(this->mbr_0x24 << 2);
      this->mbr_0x2c = (dword)pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_0047a74e;
    }
  }
  this->mbr_0x8 = 0xffffffff;
  this->mbr_0xc = 0xffffffff;
  this->mbr_0x10 = 0xffffffff;
  this->mbr_0x14 = 0xffffffff;
  this->mbr_0x1c = param_1;
  this->mbr_0x20 = param_2;
  if (param_1 < param_1 + param_2) {
    _param_3 = 0;
    iVar4 = param_1 * 0xc;
    do {
      cVar2 = '\0';
      uVar3 = 0;
      do {
        if (*(int *)(this->mbr_0x4 + iVar4 + uVar3 * 4) != -1) {
          cVar2 = cVar2 + '\x01';
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 3);
      *(undefined *)(iVar5 + this->mbr_0x18) = 0;
      *(char *)(iVar5 + 1 + this->mbr_0x18) = cVar2;
      meth_0x475f85(this,_param_3);
      param_1 = param_1 + 1;
      iVar4 = iVar4 + 0xc;
      iVar5 = iVar5 + 0xc;
      _param_3 = _param_3 + 1;
    } while (param_1 < this->mbr_0x1c + param_2);
  }
  puVar6 = (undefined4 *)this->mbr_0x2c;
  if (puVar6 != (undefined4 *)0x0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    this->mbr_0x28 = 0;
  }
  return 0;
}



void __thiscall cls_0x475cf0::meth_0x47a7f7(cls_0x475cf0 *this,int param_1)

{
  dword dVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = param_1 - this->mbr_0x1c;
  *(undefined *)(this->mbr_0x18 + iVar4 * 0xc) = 1;
  meth_0x475f1e(this,iVar4);
  dVar1 = this->mbr_0x4;
  uVar3 = 0;
  do {
    iVar2 = *(int *)(dVar1 + param_1 * 0xc + uVar3 * 4);
    if ((iVar2 != -1) && (*(char *)(this->mbr_0x18 + (iVar2 - this->mbr_0x1c) * 0xc) == '\0')) {
      meth_0x475fc4(this,iVar2);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 3);
  if (this->mbr_0x2c != 0) {
    *(undefined4 *)(this->mbr_0x2c + iVar4 * 4) = 0xffffffff;
  }
  return;
}



uint __thiscall cls_0x475cf0::meth_0x47a85c(cls_0x475cf0 *this,uint param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  uVar4 = param_1;
  local_10 = 0xffffffff;
  param_1 = 0;
  local_14 = 3;
  do {
    iVar2 = *(int *)(this->mbr_0x4 + uVar4 * 0xc + param_1 * 4);
    if (iVar2 != -1) {
      pcVar1 = (char *)(this->mbr_0x18 + (iVar2 - this->mbr_0x1c) * 0xc);
      if (*pcVar1 == '\0') {
        uVar5 = (uint)(byte)pcVar1[1];
        uVar6 = 0xffffffff;
        local_8 = 0;
        local_c = 0xffffffff;
        do {
          iVar3 = *(int *)(this->mbr_0x4 + iVar2 * 0xc + local_8 * 4);
          if (((iVar3 != -1) &&
              (pcVar1 = (char *)(this->mbr_0x18 + (iVar3 - this->mbr_0x1c) * 0xc), uVar6 = local_c,
              *pcVar1 == '\0')) && (uVar7 = (uint)(byte)pcVar1[1], uVar7 < local_c)) {
            uVar6 = uVar7;
            local_c = uVar7;
          }
          local_8 = local_8 + 1;
        } while (local_8 < 3);
        if (uVar6 == 0xffffffff) {
          uVar6 = 0;
        }
        if ((uVar5 < local_10) || ((uVar5 == local_10 && (uVar5 = local_10, uVar6 < local_18)))) {
          local_10 = uVar5;
          local_14 = param_1;
          local_18 = uVar6;
        }
      }
    }
    param_1 = param_1 + 1;
  } while (param_1 < 3);
  return local_14;
}


