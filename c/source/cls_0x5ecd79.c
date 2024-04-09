#include "../include/cls_0x5ecd79.h"

int __thiscall
cls_0x5ecd79::meth_0x5ecd79
          (cls_0x5ecd79 *this,void *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  cls_0x5f4274 *this_00;
  int *piVar1;
  int iVar2;
  cls_0x5f429a *this_01;
  cls_0x5f427b *this_02;
  byte **ppbVar3;
  dword dVar4;
  undefined4 *puVar5;
  cls_0x5ecd79 *pcVar6;
  undefined4 *puVar7;
  
  this->mbr_0x0 = *(dword *)((int)param_1 + 8);
  if (*param_2 != 0x4e475341) {
    return -0x7fffbffb;
  }
  this->mbr_0x8 = param_2[4];
  this->mbr_0xc = param_2[5];
  piVar1 = (int *)cls_0x5e89f7::meth_0x5e89f7((cls_0x5e89f7 *)param_2);
  if (piVar1 == (int *)0x0) {
    return -0x7fffbffb;
  }
  if (*piVar1 == 0x554c4156) {
    if (((cls_0x5ecd79 *)param_4 == this) ||
       (iVar2 = (**(code **)(*(int *)param_4[4] + 0x5c))(*(undefined4 *)((int)param_1 + 8)),
       iVar2 == 0)) {
      this_01 = (cls_0x5f429a *)FUN_005f56b5();
      this->mbr_0x10 = (dword)this_01;
      if (this_01 == (cls_0x5f429a *)0x0) {
        return -0x7ff8fff2;
      }
      if (((cls_0x5ecd79 *)param_4 != this) &&
         (iVar2 = cls_0x5f429a::meth_0x5f429a(this_01,(int *)param_4[4]), iVar2 < 0)) {
        return iVar2;
      }
      if (piVar1[3] == param_2[3]) {
        iVar2 = (**(code **)(*(int *)this->mbr_0x10 + 8))(piVar1);
        if (iVar2 < 0) {
          return iVar2;
        }
      }
      else {
        this_02 = (cls_0x5f427b *)FUN_005f56b5();
        if (this_02 == (cls_0x5f427b *)0x0) {
          return -0x7ff8fff2;
        }
        iVar2 = (**(code **)(this_02->mbr_0x0 + 8))(piVar1);
        if ((iVar2 < 0) ||
           (iVar2 = cls_0x5f429a::meth_0x5f429a((cls_0x5f429a *)this->mbr_0x10,(int *)this_02),
           iVar2 < 0)) {
          cls_0x5f427b::meth_0x5f427b(this_02);
          return iVar2;
        }
        cls_0x5f427b::meth_0x5f427b(this_02);
      }
    }
    else {
      this_00 = (cls_0x5f4274 *)param_4[4];
      this->mbr_0x10 = (dword)this_00;
      cls_0x5f4274::Increment_mbr_0x4(this_00);
    }
    iVar2 = (**(code **)(*(int *)this->mbr_0x10 + 0x58))();
    if (iVar2 == 0) {
      this->mbr_0x4 = this->mbr_0x4 | 1;
    }
  }
  else {
    if (*piVar1 != 0x45464552) {
      return -0x7fffbffb;
    }
    ppbVar3 = cls_0x5e8d47::meth_0x5e8d47((cls_0x5e8d47 *)param_1,(byte *)(piVar1[4] & 0xffff));
    this->mbr_0x14 = (dword)ppbVar3;
    if (ppbVar3 == (byte **)0x0) {
      return -0x7fffbffb;
    }
    dVar4 = FUN_005f56b5();
    this->mbr_0x10 = dVar4;
    if (dVar4 == 0) {
      return -0x7ff8fff2;
    }
  }
  pcVar6 = (cls_0x5ecd79 *)param_3;
  if ((this->mbr_0x8 & 0xff000000) == 0x3000000) {
    for (; pcVar6 != this; pcVar6 = pcVar6 + 1) {
      if ((pcVar6->mbr_0x8 & 0xff000000) == 0x3000000) {
        this->mbr_0x1c = pcVar6->mbr_0x1c;
        break;
      }
    }
    if (this->mbr_0x1c == 0) {
      puVar5 = (undefined4 *)operator_new(0x68);
      this->mbr_0x1c = (dword)puVar5;
      if (puVar5 == (undefined4 *)0x0) {
        return -0x7ff8fff2;
      }
      iVar2 = 0x1a;
      if ((cls_0x5ecd79 *)param_4 == this) {
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        *(undefined4 *)this->mbr_0x1c = 3;
        *(undefined4 *)(this->mbr_0x1c + 0x40) = 0;
        *(undefined4 *)(this->mbr_0x1c + 0x44) = 0;
        *(undefined4 *)(this->mbr_0x1c + 0x48) = 0x3f800000;
        *(undefined4 *)(this->mbr_0x1c + 4) = 0x3f800000;
        *(undefined4 *)(this->mbr_0x1c + 8) = 0x3f800000;
        *(undefined4 *)(this->mbr_0x1c + 0xc) = 0x3f800000;
      }
      else {
        puVar7 = (undefined4 *)param_4[7];
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      this->mbr_0x4 = this->mbr_0x4 | 2;
    }
    this->mbr_0x4 = this->mbr_0x4 & 0xfffffffe;
  }
  if ((this->mbr_0x8 & 0xff000000) == 0x4000000) {
    for (; (cls_0x5ecd79 *)param_3 != this; param_3 = (undefined4 *)((int)param_3 + 0x20)) {
      if ((*(dword *)((int)param_3 + 8) & 0xff000000) == 0x4000000) {
        this->mbr_0x1c = *(dword *)((int)param_3 + 0x1c);
        break;
      }
    }
    if (this->mbr_0x1c == 0) {
      puVar5 = (undefined4 *)operator_new(0x44);
      this->mbr_0x1c = (dword)puVar5;
      if (puVar5 == (undefined4 *)0x0) {
        return -0x7ff8fff2;
      }
      iVar2 = 0x11;
      if ((cls_0x5ecd79 *)param_4 == this) {
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
      }
      else {
        puVar7 = (undefined4 *)param_4[7];
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      this->mbr_0x4 = this->mbr_0x4 | 4;
    }
    this->mbr_0x4 = this->mbr_0x4 & 0xfffffffe;
  }
  return 0;
}


