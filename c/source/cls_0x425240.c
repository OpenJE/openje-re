#include "../include/cls_0x425240.h"

void __thiscall cls_0x425240::meth_0x425240(cls_0x425240 *this)

{
  int **ppiVar1;
  cls_0x4a6ce0 *this_00;
  bool bVar2;
  char cVar3;
  int iVar4;
  dword dVar5;
  int iVar6;
  int local_8;
  int local_4;
  
  if (this->mbr_0x14 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = (int)(this->mbr_0x18 - this->mbr_0x14) >> 3;
  }
  local_4 = 0;
  if (0 < local_8) {
    do {
      dVar5 = this->mbr_0x2c + local_4;
      ppiVar1 = (int **)(this->mbr_0x14 + local_4 * 8);
      iVar6 = local_4;
      if ((int)dVar5 < 0) {
LAB_004252ab:
        bVar2 = false;
      }
      else {
        if (this->mbr_0x4 == 0) {
          iVar4 = 0;
          iVar6 = 0;
        }
        else {
          iVar6 = this->mbr_0x8 - this->mbr_0x4;
          iVar4 = iVar6 / 0x2c;
          iVar6 = -(iVar6 >> 0x1f);
        }
        bVar2 = true;
        if (iVar4 <= (int)dVar5) goto LAB_004252ab;
      }
      if ((*ppiVar1 != (int *)0x0) &&
         ((**(code **)(**ppiVar1 + 0x54))(CONCAT31((int3)((uint)iVar6 >> 8),!bVar2)), bVar2)) {
        iVar6 = dVar5 * 0x2c + this->mbr_0x4;
        (**(code **)(**ppiVar1 + 0x100))(*(undefined4 *)(dVar5 * 0x2c + 8 + this->mbr_0x4));
        (**(code **)(**ppiVar1 + 0xf8))(*(undefined4 *)(iVar6 + 0xc));
        (**(code **)(**ppiVar1 + 0x108))(iVar6 + 0x10);
      }
      if ((ppiVar1[1] != (int *)0x0) && ((**(code **)(*ppiVar1[1] + 0x54))(!bVar2), bVar2)) {
        iVar6 = dVar5 * 0x2c + this->mbr_0x4;
        (**(code **)(*ppiVar1[1] + 0x130))(*(undefined4 *)(dVar5 * 0x2c + this->mbr_0x4));
        (**(code **)(*ppiVar1[1] + 0x100))(*(undefined4 *)(iVar6 + 8));
        (**(code **)(*ppiVar1[1] + 0xf8))(*(undefined4 *)(iVar6 + 0xc));
        (**(code **)(*ppiVar1[1] + 0x108))(iVar6 + 0x10);
        if (dVar5 == this->mbr_0x28) {
          (**(code **)(*ppiVar1[1] + 0x168))(0xff4f6064);
        }
        else {
          (**(code **)(*ppiVar1[1] + 0x168))(0xff008000);
        }
      }
      local_4 = local_4 + 1;
    } while (local_4 < local_8);
  }
  if ((cls_0x4a6ce0 *)this->mbr_0x20 != (cls_0x4a6ce0 *)0x0) {
    if ((((int)this->mbr_0x2c < 1) || (this->mbr_0x4 == 0)) ||
       ((int)(this->mbr_0x8 - this->mbr_0x4) / 0x2c == 0)) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
    cls_0x4a6ce0::meth_0x4a6ce0((cls_0x4a6ce0 *)this->mbr_0x20,cVar3);
  }
  this_00 = (cls_0x4a6ce0 *)this->mbr_0x24;
  if (this_00 != (cls_0x4a6ce0 *)0x0) {
    if (this->mbr_0x4 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)(this->mbr_0x8 - this->mbr_0x4) / 0x2c;
    }
    if (this->mbr_0x14 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)(this->mbr_0x18 - this->mbr_0x14) >> 3;
    }
    if ((iVar4 < iVar6) && ((int)this->mbr_0x2c < iVar6 - iVar4)) {
      cls_0x4a6ce0::meth_0x4a6ce0(this_00,'\x01');
      return;
    }
    cls_0x4a6ce0::meth_0x4a6ce0(this_00,'\0');
  }
  return;
}



void __thiscall cls_0x425240::meth_0x425940(cls_0x425240 *this)

{
  if (this->mbr_0x30 != 0) {
    meth_0x425240(this);
    this->mbr_0x30 = 0;
  }
  return;
}


