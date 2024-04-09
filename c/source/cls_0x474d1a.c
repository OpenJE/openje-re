#include "../include/cls_0x474d1a.h"

void __thiscall cls_0x474d1a::meth_0x474d1a(cls_0x474d1a *this,undefined4 param_1,uint param_2)

{
  (**(code **)(*(int *)this->mbr_0x3c + 0x2c))((int *)this->mbr_0x3c,0,0,param_1,param_2 | 0x800);
  return;
}



int __thiscall cls_0x474d1a::meth_0x477c4c(cls_0x474d1a *this,uint param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined local_540 [1032];
  int local_138;
  uint local_134;
  undefined local_114 [4];
  undefined4 local_110;
  uint local_60;
  uint local_5c;
  dword local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  int local_2c;
  dword local_28;
  dword local_24;
  undefined4 *local_20;
  int *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int *local_c;
  int *local_8;
  
  local_3c = this->mbr_0x5c;
  local_40 = this->mbr_0x34;
  local_18 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  local_20 = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  local_1c = (int *)0x0;
  local_38 = local_3c;
  local_34 = local_3c;
  if ((param_1 == 0xffffffff) || (param_2 == 0xffffffff)) {
    iVar2 = -0x7789f794;
    goto LAB_004780c5;
  }
  if (local_3c < param_1) {
    iVar2 = (**(code **)(*(int *)this->mbr_0x24 + 0x60))
                      ((int *)this->mbr_0x24,param_1 * 0xc,this->mbr_0x18,0x66,this->mbr_0x10,
                       &local_c);
    if (iVar2 < 0) goto LAB_004780c5;
    if (this->mbr_0x58 != 0) {
      iVar2 = (**(code **)(*(int *)this->mbr_0x3c + 0x2c))
                        ((int *)this->mbr_0x3c,0,0,&local_20,0x800);
      if ((iVar2 < 0) ||
         (iVar2 = (**(code **)(*local_c + 0x2c))(local_c,0,0,&local_10,0x800), iVar2 < 0))
      goto LAB_004780c5;
      puVar6 = local_20;
      puVar7 = local_10;
      for (uVar4 = this->mbr_0x58 * 3 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined *)puVar7 = *(undefined *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      puVar6 = local_10 + this->mbr_0x58 * 3;
      for (uVar4 = (param_1 - this->mbr_0x58) * 3 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined *)puVar6 = 0;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      iVar2 = (**(code **)(*local_c + 0x30))(local_c);
      if (iVar2 < 0) goto LAB_004780c5;
      local_10 = (undefined4 *)0x0;
      iVar2 = (**(code **)(*(int *)this->mbr_0x3c + 0x30))((int *)this->mbr_0x3c);
      if (iVar2 < 0) goto LAB_004780c5;
      local_20 = (undefined4 *)0x0;
    }
    piVar1 = (int *)this->mbr_0x3c;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      this->mbr_0x3c = 0;
    }
    piVar1 = local_c;
    local_c = (int *)0x0;
    this->mbr_0x3c = (dword)piVar1;
    this->mbr_0x5c = param_1;
    if (((*(byte *)&this->mbr_0xc & 1) == 0) || (iVar2 = FUN_00474f4e(), iVar2 != 0)) {
      if ((*(byte *)&this->mbr_0xc & 4) != 0) {
        iVar2 = FUN_00475046((void **)&this->mbr_0x48,param_1,this->mbr_0x58,&local_38);
        if (iVar2 == 0) goto LAB_00477dbe;
        puVar6 = (undefined4 *)(this->mbr_0x48 + this->mbr_0x58 * 4);
        for (uVar4 = param_1 - this->mbr_0x58 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined *)puVar6 = 0;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
      }
      if (((*(byte *)&this->mbr_0xc & 8) == 0) ||
         (iVar2 = FUN_004750d0((void **)&this->mbr_0x4c,param_1,this->mbr_0x58,&local_34),
         iVar2 != 0)) goto LAB_00477e23;
    }
LAB_00477dbe:
    iVar2 = -0x7ff8fff2;
  }
  else {
LAB_00477e23:
    if (this->mbr_0x34 < param_2) {
      if (((*(byte *)&this->mbr_0xc & 2) != 0) &&
         (iVar2 = FUN_00475046((void **)&this->mbr_0x38,param_2,this->mbr_0x30,&local_40),
         iVar2 == 0)) goto LAB_00477dbe;
      if ((*(byte *)&this->mbr_0xc & 0x20) == 0) {
        iVar2 = (**(code **)(*(int *)this->mbr_0x24 + 0x5c))
                          ((int *)this->mbr_0x24,this->mbr_0x2c * param_2,this->mbr_0x1c,
                           this->mbr_0x4,this->mbr_0x14,&local_8);
        if (iVar2 < 0) goto LAB_004780c5;
        if (this->mbr_0x30 != 0) {
          iVar2 = (**(code **)(*(int *)this->mbr_0x28 + 0x2c))
                            ((int *)this->mbr_0x28,0,0,&local_18,0x800);
          if ((iVar2 < 0) ||
             (iVar2 = (**(code **)(*local_8 + 0x2c))(local_8,0,0,&local_14,0x800), iVar2 < 0))
          goto LAB_004780c5;
          uVar5 = this->mbr_0x30 * this->mbr_0x2c;
          puVar6 = local_18;
          puVar7 = local_14;
          for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined *)puVar7 = *(undefined *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
          uVar5 = (param_2 - this->mbr_0x30) * this->mbr_0x2c;
          puVar6 = (undefined4 *)(this->mbr_0x2c * this->mbr_0x30 + (int)local_14);
          for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined *)puVar6 = 0;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
          }
          iVar2 = (**(code **)(*local_8 + 0x30))(local_8);
          if (iVar2 < 0) goto LAB_004780c5;
          local_14 = (undefined4 *)0x0;
          iVar2 = (**(code **)(*(int *)this->mbr_0x28 + 0x30))((int *)this->mbr_0x28);
          if (iVar2 < 0) goto LAB_004780c5;
          local_18 = (undefined4 *)0x0;
        }
        piVar1 = (int *)this->mbr_0x28;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          this->mbr_0x28 = 0;
        }
        this->mbr_0x28 = (dword)local_8;
        local_8 = (int *)0x0;
        this->mbr_0x34 = param_2;
      }
    }
    this->mbr_0x30 = param_2;
    this->mbr_0x58 = param_1;
    iVar2 = (**(code **)(*(int *)this->mbr_0x24 + 0x1c))((int *)this->mbr_0x24,local_114);
    if (((-1 < iVar2) &&
        (iVar2 = (**(code **)(*(int *)this->mbr_0x24 + 0x18))((int *)this->mbr_0x24,&local_1c),
        -1 < iVar2)) &&
       (iVar2 = (**(code **)(*local_1c + 0x14))(local_1c,local_110,2,local_540), -1 < iVar2)) {
      if (((local_138 == 0x1002) && (0x5143 < local_134)) && (local_134 < 0x5148)) {
        *(byte *)&this->mbr_0xc = *(byte *)&this->mbr_0xc | 0x80;
      }
      if (((local_5c < this->mbr_0x34) || (local_5c < 0x10000)) || (local_60 < this->mbr_0x5c)) {
        this->mbr_0xc = this->mbr_0xc | 0x40;
      }
      if ((*(byte *)&this->mbr_0xc & 0x80) == 0) {
        bVar8 = DAT_00707c28 != this->mbr_0x24;
        this->mbr_0x68 = DAT_00707c2c;
        this->mbr_0x6c = DAT_00707c30;
        if (bVar8) {
          local_30 = 0;
          local_2c = 0;
          local_28 = 0;
          local_24 = 0;
          FUN_00482400(1);
          iVar3 = (**(code **)(*(int *)this->mbr_0x24 + 0x104))
                            ((int *)this->mbr_0x24,4,&local_30,0x10);
          iVar2 = 0;
          FUN_00482400(0);
          if (((iVar3 < 0) || (iVar3 == 1)) || (local_30 != 0x48434143)) {
            local_2c = 1;
            local_28 = 0xc;
            local_24 = 7;
          }
          if (local_2c == 0) {
            local_28 = 0;
            local_24 = 0;
          }
          if (this->mbr_0x68 < this->mbr_0x6c) {
            this->mbr_0x6c = this->mbr_0x68;
          }
          DAT_00707c28 = this->mbr_0x24;
          DAT_00707c2c = local_28;
          DAT_00707c30 = local_24;
          this->mbr_0x68 = local_28;
          this->mbr_0x6c = local_24;
        }
      }
      else {
        this->mbr_0x68 = 0;
        this->mbr_0x6c = 0;
      }
    }
  }
LAB_004780c5:
  if (local_1c != (int *)0x0) {
    (**(code **)(*local_1c + 8))(local_1c);
    local_1c = (int *)0x0;
  }
  if (local_10 != (undefined4 *)0x0) {
    (**(code **)(*local_c + 0x30))(local_c);
  }
  if (local_20 != (undefined4 *)0x0) {
    (**(code **)(*(int *)this->mbr_0x3c + 0x30))((int *)this->mbr_0x3c);
  }
  if (local_14 != (undefined4 *)0x0) {
    (**(code **)(*local_8 + 0x30))(local_8);
  }
  if (local_18 != (undefined4 *)0x0) {
    (**(code **)(*(int *)this->mbr_0x28 + 0x30))((int *)this->mbr_0x28);
  }
  return iVar2;
}



undefined4 __thiscall cls_0x474d1a::meth_0x478f13(cls_0x474d1a *this)

{
  int *in_EAX;
  uint uVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = 0;
  if (this->mbr_0x54 != 0) {
    in_EAX = (int *)this->mbr_0x50;
    do {
      uVar2 = in_EAX[1];
      uVar1 = in_EAX[2] + uVar2;
      if (uVar2 < uVar1) {
        do {
          if (((this->mbr_0xc & 4) != 0) && (*(int *)(this->mbr_0x48 + uVar2 * 4) != *in_EAX)) {
            return (uint)in_EAX & 0xffffff00;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar1);
      }
      local_8 = local_8 + 1;
      in_EAX = in_EAX + 5;
    } while (local_8 < this->mbr_0x54);
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}



void __thiscall cls_0x474d1a::meth_0x479039(cls_0x474d1a *this,void *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  dword dVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int local_8;
  
  local_c = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  local_8 = meth_0x474d1a(this,&local_18,0);
  if ((-1 < local_8) &&
     (local_8 = meth_0x474d1a((cls_0x474d1a *)param_1,&local_14,0x10), -1 < local_8)) {
    puVar5 = local_14;
    puVar6 = local_18;
    for (uVar1 = this->mbr_0x58 * 3 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined *)puVar6 = *(undefined *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    if (((*(byte *)&this->mbr_0xc & 1) != 0) && ((*(byte *)((int)param_1 + 0xc) & 1) != 0)) {
      puVar5 = *(undefined4 **)((int)param_1 + 0x44);
      puVar6 = (undefined4 *)this->mbr_0x44;
      for (uVar1 = this->mbr_0x58 * 3 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined *)puVar6 = *(undefined *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
    }
    if (((*(byte *)&this->mbr_0xc & 4) != 0) && ((*(byte *)((int)param_1 + 0xc) & 4) != 0)) {
      puVar5 = *(undefined4 **)((int)param_1 + 0x48);
      puVar6 = (undefined4 *)this->mbr_0x48;
      for (uVar1 = this->mbr_0x58 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined *)puVar6 = *(undefined *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
    }
    if (((*(byte *)&this->mbr_0xc & 8) != 0) && ((*(byte *)((int)param_1 + 0xc) & 8) != 0)) {
      uVar3 = this->mbr_0x58 << 1;
      puVar5 = *(undefined4 **)((int)param_1 + 0x4c);
      puVar6 = (undefined4 *)this->mbr_0x4c;
      for (uVar1 = uVar3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined *)puVar6 = *(undefined *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
    }
    if ((*(byte *)((int)param_1 + 0xc) & 0x10) != 0) {
      if (((*(byte *)&this->mbr_0xc & 0x10) == 0) ||
         (this->mbr_0x54 != *(dword *)((int)param_1 + 0x54))) {
                    /* WARNING: Subroutine does not return */
        _free((void *)this->mbr_0x50);
      }
      puVar5 = *(undefined4 **)((int)param_1 + 0x50);
      puVar6 = (undefined4 *)this->mbr_0x50;
      for (uVar1 = this->mbr_0x54 * 5 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined *)puVar6 = *(undefined *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
    }
    dVar4 = this->mbr_0x30;
    if (dVar4 != 0) {
      if (((*(byte *)&this->mbr_0xc & 2) != 0) && ((*(byte *)((int)param_1 + 0xc) & 2) != 0)) {
        puVar5 = *(undefined4 **)((int)param_1 + 0x38);
        puVar6 = (undefined4 *)this->mbr_0x38;
        for (; dVar4 != 0; dVar4 = dVar4 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      if ((((*(byte *)&this->mbr_0xc & 0x20) == 0) &&
          (local_8 = cls_0x668cd8::meth_0x474cfb((cls_0x668cd8 *)param_1,&local_10,0x10),
          -1 < local_8)) &&
         (local_8 = cls_0x668cd8::meth_0x474cfb((cls_0x668cd8 *)this,&local_c,0), -1 < local_8)) {
        uVar3 = this->mbr_0x2c * this->mbr_0x30;
        puVar5 = local_10;
        puVar6 = local_c;
        for (uVar1 = uVar3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined *)puVar6 = *(undefined *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
      }
    }
  }
  if (local_c != (undefined4 *)0x0) {
    (**(code **)(*(int *)this->mbr_0x28 + 0x30))((int *)this->mbr_0x28);
  }
  if (local_10 != (undefined4 *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x28) + 0x30))(*(int **)((int)param_1 + 0x28));
  }
  if (local_14 != (undefined4 *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x3c) + 0x30))(*(int **)((int)param_1 + 0x3c));
  }
  if (local_18 != (undefined4 *)0x0) {
    (**(code **)(*(int *)this->mbr_0x3c + 0x30))((int *)this->mbr_0x3c);
  }
  if (local_8 < 0) {
    this->mbr_0xc = this->mbr_0xc & 0xffffffef;
    this->mbr_0x30 = 0;
    this->mbr_0x58 = 0;
  }
  return;
}



int __thiscall cls_0x474d1a::meth_0x47c653(cls_0x474d1a *this,void *param_1)

{
  int *piVar1;
  void *pvVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  pvVar2 = param_1;
  *(dword *)((int)param_1 + 0xc) =
       (this->mbr_0xc ^ *(uint *)((int)param_1 + 0xc)) & 0x20 ^ this->mbr_0xc;
  local_14 = 0;
  local_18 = 0;
  local_8 = cls_0x668cd8::meth_0x478854((cls_0x668cd8 *)param_1,this->mbr_0x58,this->mbr_0x30);
  if (((-1 < local_8) &&
      (local_8 = meth_0x474d1a((cls_0x474d1a *)param_1,&local_18,0), -1 < local_8)) &&
     (local_8 = meth_0x474d1a(this,&local_14,0x10), -1 < local_8)) {
    if ((*(byte *)&this->mbr_0xc & 4) != 0) {
      puVar3 = (undefined4 *)this->mbr_0x48;
      puVar8 = *(undefined4 **)((int)param_1 + 0x48);
      for (uVar4 = this->mbr_0x58 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar8 = puVar8 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined *)puVar8 = *(undefined *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
    }
    if ((*(byte *)&this->mbr_0xc & 8) != 0) {
      uVar6 = this->mbr_0x58 << 1;
      puVar3 = (undefined4 *)this->mbr_0x4c;
      puVar8 = *(undefined4 **)((int)param_1 + 0x4c);
      for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined *)puVar8 = *(undefined *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
    }
    if (this->mbr_0x50 != 0) {
      puVar3 = (undefined4 *)operator_new(this->mbr_0x54 * 0x14);
      *(undefined4 **)((int)param_1 + 0x50) = puVar3;
      if (puVar3 == (undefined4 *)0x0) {
        local_8 = -0x7ff8fff2;
        goto LAB_0047c7fd;
      }
      puVar8 = (undefined4 *)this->mbr_0x50;
      for (uVar4 = this->mbr_0x54 * 5 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar3 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar3 = puVar3 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined *)puVar3 = *(undefined *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      *(dword *)((int)param_1 + 0x54) = this->mbr_0x54;
    }
    param_1 = (void *)0x0;
    if (this->mbr_0x58 != 0) {
      local_10 = 0;
      local_c = 0;
      do {
        uVar4 = 0;
        do {
          if (*(int *)(local_10 + local_14 + uVar4 * 4) == -1) {
            *(undefined2 *)(local_c + local_18 + uVar4 * 2) = 0xffff;
          }
          else {
            *(undefined2 *)(local_c + local_18 + uVar4 * 2) =
                 *(undefined2 *)(local_10 + local_14 + uVar4 * 4);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < 3);
        param_1 = (void *)((int)param_1 + 1);
        local_c = local_c + 6;
        local_10 = local_10 + 0xc;
      } while (param_1 < (void *)this->mbr_0x58);
    }
    if (((*(byte *)&this->mbr_0xc & 1) != 0) && (param_1 = (void *)0x0, this->mbr_0x58 != 0)) {
      local_c = 0;
      local_10 = 0;
      do {
        iVar5 = *(int *)((int)pvVar2 + 0x44) + local_10;
        iVar7 = this->mbr_0x44 + local_c;
        uVar4 = 0;
        do {
          if (*(int *)(iVar7 + uVar4 * 4) == -1) {
            *(undefined2 *)(iVar5 + uVar4 * 2) = 0xffff;
          }
          else {
            *(undefined2 *)(iVar5 + uVar4 * 2) = *(undefined2 *)(iVar7 + uVar4 * 4);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < 3);
        param_1 = (void *)((int)param_1 + 1);
        local_10 = local_10 + 6;
        local_c = local_c + 0xc;
      } while (param_1 < (void *)this->mbr_0x58);
    }
  }
LAB_0047c7fd:
  if (local_14 != 0) {
    (**(code **)(*(int *)this->mbr_0x3c + 0x30))((int *)this->mbr_0x3c);
  }
  if (local_18 != 0) {
    piVar1 = *(int **)((int)pvVar2 + 0x3c);
    (**(code **)(*piVar1 + 0x30))(piVar1);
  }
  return local_8;
}



int __thiscall cls_0x474d1a::meth_0x47c823(cls_0x474d1a *this,void *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  pvVar2 = param_1;
  *(dword *)((int)param_1 + 0xc) =
       (this->mbr_0xc ^ *(uint *)((int)param_1 + 0xc)) & 0x20 ^ this->mbr_0xc;
  local_c = 0;
  local_10 = 0;
  local_8 = meth_0x477c4c((cls_0x474d1a *)param_1,this->mbr_0x58,this->mbr_0x30);
  if (((-1 < local_8) &&
      (local_8 = meth_0x474d1a((cls_0x474d1a *)param_1,&local_10,0), -1 < local_8)) &&
     (local_8 = meth_0x474d1a(this,&local_c,0x10), -1 < local_8)) {
    if ((*(byte *)&this->mbr_0xc & 4) != 0) {
      puVar3 = (undefined4 *)this->mbr_0x48;
      puVar9 = *(undefined4 **)((int)param_1 + 0x48);
      for (uVar4 = this->mbr_0x58 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar9 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar9 = puVar9 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined *)puVar9 = *(undefined *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
    }
    if ((*(byte *)&this->mbr_0xc & 8) != 0) {
      uVar6 = this->mbr_0x58 << 1;
      puVar3 = (undefined4 *)this->mbr_0x4c;
      puVar9 = *(undefined4 **)((int)param_1 + 0x4c);
      for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar9 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined *)puVar9 = *(undefined *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
    }
    if (this->mbr_0x50 != 0) {
      puVar3 = (undefined4 *)operator_new(this->mbr_0x54 * 0x14);
      *(undefined4 **)((int)param_1 + 0x50) = puVar3;
      if (puVar3 == (undefined4 *)0x0) {
        local_8 = -0x7ff8fff2;
        goto LAB_0047c9ae;
      }
      puVar9 = (undefined4 *)this->mbr_0x50;
      for (uVar4 = this->mbr_0x54 * 5 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar3 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar3 = puVar3 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined *)puVar3 = *(undefined *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      *(dword *)((int)param_1 + 0x54) = this->mbr_0x54;
    }
    iVar5 = 0;
    param_1 = (void *)0x0;
    if (this->mbr_0x58 != 0) {
      do {
        piVar7 = (int *)(local_10 + iVar5);
        iVar8 = (local_c + iVar5) - (int)piVar7;
        local_14 = 3;
        do {
          iVar1 = *(int *)(iVar8 + (int)piVar7);
          if (iVar1 == -1) {
            *piVar7 = -1;
          }
          else {
            *piVar7 = iVar1;
          }
          piVar7 = piVar7 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
        param_1 = (void *)((int)param_1 + 1);
        iVar5 = iVar5 + 0xc;
      } while (param_1 < (void *)this->mbr_0x58);
    }
    if ((*(byte *)&this->mbr_0xc & 1) != 0) {
      iVar5 = 0;
      param_1 = (void *)0x0;
      if (this->mbr_0x58 != 0) {
        do {
          piVar7 = (int *)(*(int *)((int)pvVar2 + 0x44) + iVar5);
          iVar8 = (this->mbr_0x44 + iVar5) - (int)piVar7;
          local_14 = 3;
          do {
            iVar1 = *(int *)((int)piVar7 + iVar8);
            if (iVar1 == -1) {
              *piVar7 = -1;
            }
            else {
              *piVar7 = iVar1;
            }
            piVar7 = piVar7 + 1;
            local_14 = local_14 + -1;
          } while (local_14 != 0);
          param_1 = (void *)((int)param_1 + 1);
          iVar5 = iVar5 + 0xc;
        } while (param_1 < (void *)this->mbr_0x58);
      }
    }
  }
LAB_0047c9ae:
  if (local_c != 0) {
    (**(code **)(*(int *)this->mbr_0x3c + 0x30))((int *)this->mbr_0x3c);
  }
  if (local_10 != 0) {
    piVar7 = *(int **)((int)pvVar2 + 0x3c);
    (**(code **)(*piVar7 + 0x30))(piVar7);
  }
  return local_8;
}



void __thiscall
cls_0x474d1a::meth_0x47db36
          (cls_0x474d1a *this,uint *param_1,uint *param_2,uint *param_3,uint *param_4,int **param_5,
          int *param_6,uint *param_7)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  dword dVar5;
  int *piVar6;
  uint *puVar7;
  uint *puVar8;
  cls_0x4760ef local_174;
  dword local_50;
  uint local_4c;
  dword local_48;
  void *local_44;
  void *local_40;
  uint local_3c;
  dword local_38;
  dword local_34;
  int *local_30;
  uint *local_2c;
  int local_28;
  int local_24;
  int *local_20;
  uint local_1c;
  uint *local_18;
  void *local_14;
  uint *local_10;
  uint *local_c;
  int local_8;
  
  local_50 = this->mbr_0x58;
  local_10 = (uint *)0x0;
  local_c = (uint *)0x0;
  local_2c = (uint *)0x0;
  local_14 = (void *)0x0;
  local_44 = (void *)0x0;
  local_18 = (uint *)0x0;
  local_40 = (void *)0x0;
  local_1c = 0;
  local_38 = 0;
  local_20 = (int *)0x0;
  local_28 = 0;
  local_24 = 0;
  local_30 = (int *)0x0;
  local_34 = 0;
  if ((((param_1 == (uint *)0x0) || (((uint)param_1 & 0xffefff) != 0)) ||
      ((param_2 == (uint *)0x0 && (param_3 != (uint *)0x0)))) ||
     ((((uint)param_1 & 0x40000000) != 0 && (this->mbr_0x54 == 0)))) {
    local_8 = -0x7789f794;
    goto LAB_0047e12c;
  }
  if (((uint)param_1 & 0xc000000) != 0) {
    param_1 = (uint *)((uint)param_1 | 0x3000000);
  }
  local_3c = (uint)param_1 & 0x2000000;
  if ((local_3c != 0) && (((uint)param_1 & 0x40000000) == 0)) {
    local_38 = this->mbr_0x30;
    local_8 = cls_0x668cd8::meth_0x4799c4((cls_0x668cd8 *)this,&local_40,&local_1c);
    if (local_8 < 0) goto LAB_0047e12c;
    if ((local_1c != 0) && (((uint)param_1 & 0x10000000) != 0)) {
      local_8 = -0x7789f4aa;
      goto LAB_0047e12c;
    }
  }
  local_10 = (uint *)operator_new(this->mbr_0x58 << 2);
  local_c = (uint *)operator_new(this->mbr_0x58 << 2);
  local_14 = operator_new(this->mbr_0x30 << 2);
  if (((local_10 != (uint *)0x0) && (local_c != (uint *)0x0)) && (local_14 != (void *)0x0)) {
    local_48 = this->mbr_0x30;
    local_4c = (uint)param_1 & 0xc000000;
    if ((local_4c == 0) ||
       (local_2c = (uint *)operator_new(this->mbr_0x58 << 2), local_2c != (uint *)0x0)) {
      if (((uint)param_1 & 0x40000000) == 0) {
        local_8 = cls_0x668cd8::meth_0x47527b
                            ((cls_0x668cd8 *)this,(int)local_10,(int)local_c,(int)local_14);
        if (local_8 < 0) goto LAB_0047e12c;
      }
      else {
        uVar1 = 0;
        if (this->mbr_0x58 != 0) {
          puVar7 = local_10;
          do {
            *(uint *)(((int)local_c - (int)local_10) + (int)puVar7) = uVar1;
            *puVar7 = uVar1;
            uVar1 = uVar1 + 1;
            puVar7 = puVar7 + 1;
          } while (uVar1 < this->mbr_0x58);
        }
        uVar1 = 0;
        if (this->mbr_0x30 != 0) {
          do {
            *(uint *)((int)local_14 + uVar1 * 4) = uVar1;
            uVar1 = uVar1 + 1;
          } while (uVar1 < this->mbr_0x30);
        }
      }
      if (((local_3c != 0) && (((uint)param_1 & 0x40000000) == 0)) &&
         (local_8 = cls_0x668cd8::meth_0x4795f3
                              ((cls_0x668cd8 *)this,(int)local_10,(int)local_c,(int)local_14,
                               (uint)param_1 & 0x10000000), local_8 < 0)) goto LAB_0047e12c;
      local_3c = (uint)param_1 & 0x10000000;
      if ((local_3c != 0) && (uVar1 = 0, this->mbr_0x30 != 0)) {
        do {
          *(uint *)((int)local_14 + uVar1 * 4) = uVar1;
          uVar1 = uVar1 + 1;
        } while (uVar1 < this->mbr_0x30);
      }
      local_8 = cls_0x668cd8::meth_0x479d3e((cls_0x668cd8 *)this,(int)local_10,(int)local_14);
      if (local_8 < 0) goto LAB_0047e12c;
      if (local_4c != 0) {
        puVar7 = local_c;
        puVar8 = local_2c;
        for (uVar1 = this->mbr_0x58 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined *)puVar8 = *(undefined *)puVar7;
          puVar7 = (uint *)((int)puVar7 + 1);
          puVar8 = (uint *)((int)puVar8 + 1);
        }
        local_8 = cls_0x668cd8::meth_0x47d538((cls_0x668cd8 *)this);
        if (local_8 < 0) goto LAB_0047e12c;
        pvVar2 = operator_new(this->mbr_0x30 << 2);
        local_44 = pvVar2;
        if (pvVar2 == (void *)0x0) goto LAB_0047e124;
        if (local_3c == 0) {
          local_8 = cls_0x668cd8::meth_0x475333((cls_0x668cd8 *)this,(int)local_c,(int)pvVar2);
          if (local_8 < 0) goto LAB_0047e12c;
          uVar1 = 0;
          if (this->mbr_0x30 != 0) {
            do {
              piVar6 = (int *)((int)local_14 + uVar1 * 4);
              iVar3 = *piVar6;
              if (iVar3 != -1) {
                *piVar6 = *(int *)((int)pvVar2 + iVar3 * 4);
              }
              uVar1 = uVar1 + 1;
            } while (uVar1 < this->mbr_0x30);
          }
        }
        else {
          uVar1 = 0;
          if (this->mbr_0x30 != 0) {
            do {
              *(uint *)((int)pvVar2 + uVar1 * 4) = uVar1;
              uVar1 = uVar1 + 1;
            } while (uVar1 < this->mbr_0x30);
          }
        }
        puVar7 = local_10;
        local_8 = cls_0x668cd8::meth_0x479d3e((cls_0x668cd8 *)this,(int)local_10,(int)pvVar2);
        if (local_8 < 0) goto LAB_0047e12c;
        uVar1 = 0;
        if (this->mbr_0x58 != 0) {
          do {
            puVar8 = local_c + uVar1;
            if (*puVar8 == 0xffffffff) {
              *puVar8 = 0xffffffff;
            }
            else {
              *puVar8 = local_2c[*puVar8];
            }
            uVar1 = uVar1 + 1;
          } while (uVar1 < this->mbr_0x58);
        }
        uVar1 = 0;
        if (this->mbr_0x58 != 0) {
          do {
            puVar7[uVar1] = 0xffffffff;
            uVar1 = uVar1 + 1;
          } while (uVar1 < this->mbr_0x58);
        }
        uVar1 = 0;
        if (this->mbr_0x58 != 0) {
          do {
            if (local_c[uVar1] != 0xffffffff) {
              puVar7[local_c[uVar1]] = uVar1;
            }
            uVar1 = uVar1 + 1;
          } while (uVar1 < this->mbr_0x58);
        }
      }
      if (((param_5 != (int **)0x0) || (local_1c != 0)) || (this->mbr_0x34 == 0)) {
        local_8 = FUN_004745ba((cls_0x668f10 **)(this->mbr_0x30 << 2));
        if (local_8 < 0) goto LAB_0047e12c;
        local_28 = (**(code **)(*local_20 + 0xc))(local_20);
        uVar1 = 0;
        if (this->mbr_0x30 != 0) {
          do {
            *(undefined4 *)(local_28 + uVar1 * 4) = 0xffffffff;
            uVar1 = uVar1 + 1;
          } while (uVar1 < this->mbr_0x30);
        }
        uVar1 = 0;
        if (local_48 != 0) {
          do {
            iVar3 = *(int *)((int)local_14 + uVar1 * 4);
            if (iVar3 != -1) {
              *(uint *)(local_28 + iVar3 * 4) = uVar1;
            }
            uVar1 = uVar1 + 1;
          } while (uVar1 < local_48);
        }
        if ((local_1c != 0) && (uVar1 = 0, this->mbr_0x30 != 0)) {
          do {
            uVar4 = *(uint *)(local_28 + uVar1 * 4);
            if ((uVar4 != 0xffffffff) && (local_38 <= uVar4)) {
              *(undefined4 *)(local_28 + uVar1 * 4) =
                   *(undefined4 *)((int)local_40 + (uVar4 - local_38) * 4);
            }
            uVar1 = uVar1 + 1;
          } while (uVar1 < this->mbr_0x30);
        }
      }
      if ((local_1c == 0) && (this->mbr_0x34 != 0)) {
        local_8 = cls_0x668cd8::meth_0x474cfb((cls_0x668cd8 *)this,&local_18,0);
        if ((local_8 < 0) ||
           (local_8 = cls_0x668cd8::meth_0x479c17((cls_0x668cd8 *)this,(int)local_14,(int)local_18),
           local_8 < 0)) goto LAB_0047e12c;
      }
      else if ((*(byte *)&this->mbr_0xc & 0x20) == 0) {
        local_34 = this->mbr_0x38;
        local_30 = (int *)this->mbr_0x28;
        uVar1 = this->mbr_0x30;
        piVar6 = local_30;
        if (this->mbr_0x34 == 0) {
          local_30 = param_6;
          (**(code **)(*param_6 + 4))(param_6);
          piVar6 = param_6;
        }
        this->mbr_0x28 = 0;
        this->mbr_0x30 = 0;
        this->mbr_0x34 = 0;
        this->mbr_0x38 = 0;
        local_8 = meth_0x477c4c(this,this->mbr_0x58,uVar1);
        if (((local_8 < 0) ||
            (local_8 = cls_0x668cd8::meth_0x474cfb((cls_0x668cd8 *)this,&local_18,0), local_8 < 0))
           || (local_8 = (**(code **)(*piVar6 + 0x2c))(piVar6,0,0,&local_24,0x810), local_8 < 0))
        goto LAB_0047e12c;
        if ((uint *)this->mbr_0x4 == param_7) {
          param_7 = local_18;
          uVar1 = 0;
          if (this->mbr_0x30 != 0) {
            dVar5 = this->mbr_0x2c;
            do {
              puVar7 = (uint *)(*(int *)(local_28 + uVar1 * 4) * dVar5 + local_24);
              puVar8 = param_7;
              for (uVar4 = dVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              for (uVar4 = dVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                *(undefined *)puVar8 = *(undefined *)puVar7;
                puVar7 = (uint *)((int)puVar7 + 1);
                puVar8 = (uint *)((int)puVar8 + 1);
              }
              dVar5 = this->mbr_0x2c;
              param_7 = (uint *)((int)param_7 + dVar5);
              uVar1 = uVar1 + 1;
            } while (uVar1 < this->mbr_0x30);
          }
        }
        else {
          cls_0x4760ef::cls_0x4760ef(&local_174,(uint)param_7,(uint)(uint *)this->mbr_0x4);
          uVar1 = 0;
          puVar7 = local_18;
          if (this->mbr_0x30 != 0) {
            do {
              cls_0x4760ef::meth_0x476257
                        (&local_174,
                         (undefined4 *)
                         (*(int *)(local_28 + uVar1 * 4) * local_174.cls_0x474824.mbr_0x4 + local_24
                         ),puVar7);
              puVar7 = (uint *)((int)puVar7 + this->mbr_0x2c);
              uVar1 = uVar1 + 1;
            } while (uVar1 < this->mbr_0x30);
          }
        }
        uVar1 = 0;
        if ((local_34 != 0) && (this->mbr_0x30 != 0)) {
          do {
            *(undefined4 *)(this->mbr_0x38 + uVar1 * 4) =
                 *(undefined4 *)
                  ((int)local_14 + *(int *)(local_34 + *(int *)(local_28 + uVar1 * 4) * 4) * 4);
            uVar1 = uVar1 + 1;
          } while (uVar1 < this->mbr_0x30);
        }
        uVar1 = 0;
        dVar5 = 0;
        if (this->mbr_0x30 != 0) {
          do {
            piVar6 = (int *)((int)local_14 + uVar1 * 4);
            if (*piVar6 == -1) {
              *piVar6 = -1;
            }
            else {
              dVar5 = dVar5 + 1;
            }
            uVar1 = uVar1 + 1;
          } while (uVar1 < this->mbr_0x30);
        }
        this->mbr_0x30 = dVar5;
      }
      if (param_4 != (uint *)0x0) {
        uVar1 = this->mbr_0x58 & 0x3fffffff;
        puVar7 = local_10;
        if (((uint)param_1 & 0x80000000) == 0) {
          puVar7 = local_c;
        }
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *param_4 = *puVar7;
          puVar7 = puVar7 + 1;
          param_4 = param_4 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined *)param_4 = *(undefined *)puVar7;
          puVar7 = (uint *)((int)puVar7 + 1);
          param_4 = (uint *)((int)param_4 + 1);
        }
      }
      uVar1 = 0;
      if (param_3 != (uint *)0x0) {
        if (param_3 == param_2) {
          local_8 = FUN_004744b6((int)local_10,(int)param_3,local_50);
          if (local_8 < 0) goto LAB_0047e12c;
        }
        else if (this->mbr_0x58 != 0) {
          param_1 = param_3;
          do {
            uVar4 = local_c[uVar1];
            param_3 = (uint *)0x3;
            puVar7 = param_1;
            do {
              iVar3 = *(int *)((int)param_2 + (uVar4 * 0xc - (int)param_1) + (int)puVar7);
              if (iVar3 == -1) {
                *puVar7 = 0xffffffff;
              }
              else {
                *puVar7 = local_10[iVar3];
              }
              puVar7 = puVar7 + 1;
              param_3 = (uint *)((int)param_3 + -1);
            } while (param_3 != (uint *)0x0);
            param_1 = param_1 + 3;
            uVar1 = uVar1 + 1;
          } while (uVar1 < this->mbr_0x58);
        }
      }
      piVar6 = local_20;
      if (param_5 != (int **)0x0) {
        local_20 = (int *)0x0;
        *param_5 = piVar6;
      }
      goto LAB_0047e12c;
    }
  }
LAB_0047e124:
  local_8 = -0x7ff8fff2;
LAB_0047e12c:
                    /* WARNING: Subroutine does not return */
  _free(local_14);
}



undefined4 __thiscall cls_0x474d1a::meth_0x47ef19(cls_0x474d1a *this)

{
  undefined *puVar1;
  uint uVar2;
  cls_0x668c68 *this_00;
  cls_0x474d1a *this_01;
  int iVar3;
  void *extraout_ECX;
  int unaff_EBP;
  uint uVar4;
  
  FUN_0061781c();
  uVar2 = *(uint *)(unaff_EBP + 8);
  uVar4 = uVar2 & 0x1cfff;
  *(uint *)(unaff_EBP + -0x10) = uVar2;
  if (uVar4 == 0) {
    if ((uVar2 & 0x1000) == 0) {
      uVar4 = *(uint *)((int)extraout_ECX + 8) & 0xffffefff;
    }
    else {
      uVar4 = *(uint *)((int)extraout_ECX + 8) | 0x1000;
    }
  }
  else {
    if ((uVar2 & 0x1000) != 0) {
      uVar4 = uVar4 | 0x1000;
    }
    if ((*(byte *)((int)extraout_ECX + 8) & 1) != 0) {
      uVar4 = uVar4 | 1;
    }
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffe3000;
  }
  if ((*(uint *)(unaff_EBP + -0x10) & 0xe0ffefff) != 0) {
    *(undefined4 *)(unaff_EBP + 8) = 0x8876086c;
    goto LAB_0047f04f;
  }
  this_00 = (cls_0x668c68 *)operator_new(0x70);
  *(cls_0x668c68 **)(unaff_EBP + 8) = this_00;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (this_00 == (cls_0x668c68 *)0x0) {
    this_01 = (cls_0x474d1a *)0x0;
  }
  else {
    this_01 = (cls_0x474d1a *)
              cls_0x668c68::cls_0x668c68
                        (this_00,*(int **)((int)extraout_ECX + 0x24),*(uint *)(unaff_EBP + 0x1c),
                         uVar4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(cls_0x474d1a **)(unaff_EBP + 0x1c) = this_01;
  if (this_01 == (cls_0x474d1a *)0x0) {
    *(undefined4 *)(unaff_EBP + 8) = 0x8007000e;
  }
  else {
    iVar3 = meth_0x477c4c(this_01,*(uint *)((int)extraout_ECX + 0x58),0);
    *(int *)(unaff_EBP + 8) = iVar3;
    if (-1 < iVar3) {
      iVar3 = meth_0x479039(this_01,extraout_ECX);
      *(int *)(unaff_EBP + 8) = iVar3;
      if (-1 < iVar3) {
        puVar1 = &this_01->field_0x40;
        this_01->mbr_0x30 = *(dword *)((int)extraout_ECX + 0x30);
        iVar3 = meth_0x474d1a(this_01,puVar1,0);
        *(int *)(unaff_EBP + 8) = iVar3;
        if (-1 < iVar3) {
          iVar3 = meth_0x47db36(this_01,*(uint **)(unaff_EBP + -0x10),*(uint **)(unaff_EBP + 0xc),
                                *(uint **)(unaff_EBP + 0x10),*(uint **)(unaff_EBP + 0x14),
                                *(int ***)(unaff_EBP + 0x18),*(int **)((int)extraout_ECX + 0x28),
                                *(uint **)((int)extraout_ECX + 4));
          *(int *)(unaff_EBP + 8) = iVar3;
          if (-1 < iVar3) {
            if (*(int *)puVar1 != 0) {
              (**(code **)(*(int *)this_01->mbr_0x3c + 0x30))((int *)this_01->mbr_0x3c);
              *(undefined4 *)puVar1 = 0;
            }
            **(cls_0x474d1a ***)(unaff_EBP + 0x20) = this_01;
            this_01 = (cls_0x474d1a *)0x0;
            goto LAB_0047f035;
          }
        }
        this_01 = *(cls_0x474d1a **)(unaff_EBP + 0x1c);
      }
    }
  }
LAB_0047f035:
  if (this_01 != (cls_0x474d1a *)0x0) {
    if (*(int *)&this_01->field_0x40 != 0) {
      (**(code **)(*(int *)this_01->mbr_0x3c + 0x30))((int *)this_01->mbr_0x3c);
    }
    (**(code **)(*(int *)this_01 + 8))(this_01);
  }
LAB_0047f04f:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}



undefined4 __thiscall cls_0x474d1a::meth_0x480849(cls_0x474d1a *this)

{
  dword *pdVar1;
  uint uVar2;
  cls_0x668cd8 *pcVar3;
  int iVar4;
  void *extraout_ECX;
  cls_0x668cd8 *extraout_ECX_00;
  cls_0x668cd8 *extraout_ECX_01;
  cls_0x668cd8 *extraout_ECX_02;
  cls_0x668cd8 *extraout_ECX_03;
  cls_0x668cd8 *extraout_ECX_04;
  cls_0x668cd8 *extraout_ECX_05;
  cls_0x668cd8 *extraout_ECX_06;
  int unaff_EBP;
  uint uVar5;
  cls_0x668cd8 *this_00;
  
  FUN_0061781c();
  uVar2 = *(uint *)(unaff_EBP + 8);
  uVar5 = uVar2 & 0x1cfff;
  *(uint *)(unaff_EBP + -0x10) = uVar2;
  if (uVar5 == 0) {
    if ((uVar2 & 0x1000) == 0) {
      uVar5 = *(uint *)((int)extraout_ECX + 8) & 0xffffefff;
    }
    else {
      uVar5 = *(uint *)((int)extraout_ECX + 8) | 0x1000;
    }
  }
  else {
    if ((uVar2 & 0x1000) != 0) {
      uVar5 = uVar5 | 0x1000;
    }
    if ((*(byte *)((int)extraout_ECX + 8) & 1) != 0) {
      uVar5 = uVar5 | 1;
    }
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffe3000;
  }
  if ((*(uint *)(unaff_EBP + -0x10) & 0xe0ffefff) != 0) {
    *(undefined4 *)(unaff_EBP + 8) = 0x8876086c;
    goto LAB_0048097f;
  }
  this_00 = (cls_0x668cd8 *)0x70;
  pcVar3 = (cls_0x668cd8 *)operator_new(0x70);
  *(cls_0x668cd8 **)(unaff_EBP + 8) = pcVar3;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (pcVar3 == (cls_0x668cd8 *)0x0) {
    pcVar3 = (cls_0x668cd8 *)0x0;
  }
  else {
    pcVar3 = cls_0x668cd8::cls_0x668cd8
                       (pcVar3,*(int **)((int)extraout_ECX + 0x24),*(uint *)(unaff_EBP + 0x1c),uVar5
                       );
    this_00 = extraout_ECX_00;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(cls_0x668cd8 **)(unaff_EBP + 0x1c) = pcVar3;
  if (pcVar3 == (cls_0x668cd8 *)0x0) {
    *(undefined4 *)(unaff_EBP + 8) = 0x8007000e;
  }
  else {
    iVar4 = cls_0x668cd8::meth_0x478854(pcVar3,*(uint *)((int)extraout_ECX + 0x58),0);
    *(int *)(unaff_EBP + 8) = iVar4;
    this_00 = extraout_ECX_01;
    if (-1 < iVar4) {
      iVar4 = cls_0x668cd8::meth_0x47923e(pcVar3,extraout_ECX);
      *(int *)(unaff_EBP + 8) = iVar4;
      this_00 = extraout_ECX_02;
      if (-1 < iVar4) {
        pdVar1 = &pcVar3->mbr_0x40;
        pcVar3->mbr_0x30 = *(dword *)((int)extraout_ECX + 0x30);
        iVar4 = meth_0x474d1a((cls_0x474d1a *)pcVar3,pdVar1,0);
        *(int *)(unaff_EBP + 8) = iVar4;
        this_00 = extraout_ECX_03;
        if (-1 < iVar4) {
          iVar4 = cls_0x668cd8::meth_0x47e1ac
                            (pcVar3,*(uint **)(unaff_EBP + -0x10),*(uint **)(unaff_EBP + 0xc),
                             *(uint **)(unaff_EBP + 0x10),*(uint **)(unaff_EBP + 0x14),
                             *(int ***)(unaff_EBP + 0x18),*(int **)((int)extraout_ECX + 0x28),
                             *(uint **)((int)extraout_ECX + 4));
          *(int *)(unaff_EBP + 8) = iVar4;
          this_00 = extraout_ECX_04;
          if (-1 < iVar4) {
            if (*pdVar1 != 0) {
              (**(code **)(*(int *)pcVar3->mbr_0x3c + 0x30))((int *)pcVar3->mbr_0x3c);
              *pdVar1 = 0;
              this_00 = extraout_ECX_05;
            }
            **(cls_0x668cd8 ***)(unaff_EBP + 0x20) = pcVar3;
            pcVar3 = (cls_0x668cd8 *)0x0;
            goto LAB_00480965;
          }
        }
        pcVar3 = *(cls_0x668cd8 **)(unaff_EBP + 0x1c);
      }
    }
  }
LAB_00480965:
  if (pcVar3 != (cls_0x668cd8 *)0x0) {
    if (pcVar3->mbr_0x40 != 0) {
      (**(code **)(*(int *)pcVar3->mbr_0x3c + 0x30))((int *)pcVar3->mbr_0x3c);
      this_00 = extraout_ECX_06;
    }
    (*pcVar3->vftptr_0x0->virt_meth_0x47ac13_8)(this_00);
  }
LAB_0048097f:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}


