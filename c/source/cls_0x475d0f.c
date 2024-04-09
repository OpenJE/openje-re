#include "../include/cls_0x475d0f.h"

int __thiscall cls_0x475d0f::meth_0x475d0f(cls_0x475d0f *this)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((&this->mbr_0x8)[uVar1 & 0xffff] != 0xffff) {
      return (uint)(&this->mbr_0x8)[uVar1 & 0xffff] + (uint)this->mbr_0x14;
    }
    uVar1 = uVar1 + 1;
  } while ((ushort)uVar1 < 4);
  return CONCAT22((short)(uVar1 >> 0x10),0xffff);
}



void __thiscall cls_0x475d0f::meth_0x475fee(cls_0x475d0f *this,ushort param_1)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  
  iVar4 = (uint)param_1 * 6;
  iVar1 = this->mbr_0x10 + iVar4;
  uVar2 = *(ushort *)(iVar1 + 2);
  if (uVar2 == 0xffff) {
    uVar2 = *(ushort *)(iVar1 + 4);
    (&this->mbr_0x8)[*(byte *)(iVar1 + 1)] = uVar2;
    if (uVar2 != 0xffff) {
      *(undefined2 *)(this->mbr_0x10 + 2 + (uint)uVar2 * 6) = 0xffff;
    }
  }
  else {
    uVar3 = *(ushort *)(iVar1 + 4);
    *(ushort *)(this->mbr_0x10 + 4 + (uint)uVar2 * 6) = uVar3;
    if (uVar3 != 0xffff) {
      *(ushort *)(this->mbr_0x10 + 2 + (uint)uVar3 * 6) = uVar2;
    }
  }
  *(undefined2 *)(this->mbr_0x10 + 4 + iVar4) = 0xffff;
  *(undefined2 *)(this->mbr_0x10 + 2 + iVar4) = 0xffff;
  return;
}



void __thiscall cls_0x475d0f::meth_0x476072(cls_0x475d0f *this,ushort param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = this->mbr_0x10 + (uint)param_1 * 6;
  bVar1 = *(byte *)(iVar3 + 1);
  uVar2 = (&this->mbr_0x8)[bVar1];
  *(ushort *)(iVar3 + 4) = uVar2;
  if (uVar2 != 0xffff) {
    *(ushort *)(this->mbr_0x10 + 2 + (uint)uVar2 * 6) = param_1;
  }
  (&this->mbr_0x8)[bVar1] = param_1;
  *(undefined2 *)(this->mbr_0x10 + 2 + (uint)param_1 * 6) = 0xffff;
  return;
}



void __thiscall cls_0x475d0f::meth_0x4760be(cls_0x475d0f *this,short param_1)

{
  char *pcVar1;
  ushort uVar2;
  
  uVar2 = param_1 - this->mbr_0x14;
  meth_0x475fee(this,uVar2);
  pcVar1 = (char *)(this->mbr_0x10 + 1 + (uint)uVar2 * 6);
  *pcVar1 = *pcVar1 + -1;
  meth_0x476072(this,uVar2);
  return;
}



undefined4 __thiscall
cls_0x475d0f::meth_0x47a934(cls_0x475d0f *this,ushort param_1,ushort param_2,char param_3)

{
  void *pvVar1;
  short *psVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  undefined4 *puVar8;
  
  uVar7 = 0;
  if (this->mbr_0x10 == 0) {
    pvVar1 = operator_new((uint)this->mbr_0x18 * 6);
    this->mbr_0x10 = (dword)pvVar1;
    if (pvVar1 == (void *)0x0) {
LAB_0047a978:
                    /* WARNING: Subroutine does not return */
      _free((void *)this->mbr_0x10);
    }
    if (param_3 != '\0') {
      pvVar1 = operator_new((uint)this->mbr_0x18 << 2);
      this->mbr_0x20 = (dword)pvVar1;
      if (pvVar1 == (void *)0x0) goto LAB_0047a978;
    }
  }
  this->mbr_0x8 = 0xffff;
  this->mbr_0xa = 0xffff;
  this->mbr_0xc = 0xffff;
  this->mbr_0xe = 0xffff;
  this->mbr_0x16 = param_2;
  uVar3 = (uint)param_1;
  uVar5 = (uint)param_2;
  this->mbr_0x14 = param_1;
  if (uVar3 < uVar3 + uVar5) {
    do {
      psVar2 = (short *)(this->mbr_0x4 + uVar3 * 6);
      cVar4 = '\0';
      iVar6 = 3;
      do {
        if (*psVar2 != -1) {
          cVar4 = cVar4 + '\x01';
        }
        psVar2 = psVar2 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      *(undefined *)((uint)uVar7 * 6 + this->mbr_0x10) = 0;
      *(char *)((uint)uVar7 * 6 + 1 + this->mbr_0x10) = cVar4;
      meth_0x476072(this,uVar7);
      uVar7 = uVar7 + 1;
      uVar3 = (uint)(ushort)(uVar7 + param_1);
    } while (uVar3 < this->mbr_0x14 + uVar5);
  }
  puVar8 = (undefined4 *)this->mbr_0x20;
  if (puVar8 != (undefined4 *)0x0) {
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    this->mbr_0x1c = 0;
  }
  return 0;
}



void __thiscall cls_0x475d0f::meth_0x47aa30(cls_0x475d0f *this,ushort param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  
  uVar2 = param_1 - this->mbr_0x14;
  *(undefined *)(this->mbr_0x10 + (uint)uVar2 * 6) = 1;
  meth_0x475fee(this,uVar2);
  puVar3 = (ushort *)(this->mbr_0x4 + (uint)param_1 * 6);
  _param_1 = 3;
  do {
    uVar1 = *puVar3;
    if ((uVar1 != 0xffff) &&
       (*(char *)(this->mbr_0x10 + ((uint)uVar1 - (uint)this->mbr_0x14) * 6) == '\0')) {
      meth_0x4760be(this,uVar1);
    }
    puVar3 = puVar3 + 1;
    _param_1 = _param_1 + -1;
  } while (_param_1 != 0);
  if (this->mbr_0x20 != 0) {
    *(undefined4 *)(this->mbr_0x20 + (uint)uVar2 * 4) = 0xffffffff;
  }
  return;
}



undefined4 __thiscall cls_0x475d0f::meth_0x47aaab(cls_0x475d0f *this,ushort param_1)

{
  char *pcVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort *puVar7;
  int iVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *local_1c;
  int local_18;
  ushort *local_10;
  ushort *local_8;
  
  uVar2 = 0;
  local_10 = (ushort *)(this->mbr_0x4 + (uint)param_1 * 6);
  uVar5 = 3;
  uVar4 = 0xffff;
  do {
    uVar3 = *local_10;
    puVar7 = local_10;
    if (uVar3 != 0xffff) {
      iVar8 = (uint)uVar3 - (uint)this->mbr_0x14;
      puVar7 = (ushort *)(iVar8 * 3);
      pcVar1 = (char *)(this->mbr_0x10 + iVar8 * 6);
      if (*pcVar1 == '\0') {
        uVar6 = (ushort)(byte)pcVar1[1];
        puVar7 = (ushort *)0xffff;
        local_8 = (ushort *)0xffff;
        puVar10 = (ushort *)(this->mbr_0x4 + (uint)uVar3 * 6);
        local_18 = 3;
        do {
          if (((*puVar10 != 0xffff) &&
              (pcVar1 = (char *)(this->mbr_0x10 + ((uint)*puVar10 - (uint)this->mbr_0x14) * 6),
              puVar7 = local_8, *pcVar1 == '\0')) &&
             (puVar9 = (ushort *)CONCAT22((short)((uint)pcVar1 >> 0x10),(ushort)(byte)pcVar1[1]),
             (ushort)(byte)pcVar1[1] < (ushort)local_8)) {
            puVar7 = puVar9;
            local_8 = puVar9;
          }
          puVar10 = puVar10 + 1;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
        if ((short)puVar7 == -1) {
          puVar7 = (ushort *)0x0;
        }
        if ((uVar6 < uVar4) ||
           ((uVar6 == uVar4 && (uVar6 = uVar4, (ushort)puVar7 < (ushort)local_1c)))) {
          local_1c = puVar7;
          uVar4 = uVar6;
          uVar5 = uVar2;
        }
      }
    }
    uVar2 = uVar2 + 1;
    local_10 = local_10 + 1;
  } while (uVar2 < 3);
  return CONCAT22((short)((uint)puVar7 >> 0x10),uVar5);
}


