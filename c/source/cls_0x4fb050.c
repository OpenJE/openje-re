#include "../include/cls_0x4fb050.h"

int __thiscall cls_0x4fb050::meth_0x4fb050(cls_0x4fb050 *this)

{
  dword dVar1;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 == 0) {
    return dVar1;
  }
  return (int)(this->mbr_0x8 - dVar1) / 0x14;
}



void __thiscall
cls_0x4fb050::meth_0x4fd310
          (cls_0x4fb050 *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  dword dVar5;
  undefined4 *puVar6;
  undefined4 local_30;
  cls_0x4fc0e0 local_2c;
  undefined *local_1c;
  cls_0x4fb050 *local_18;
  undefined *local_14;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006350c8;
  pvStack_10 = ExceptionList;
  local_30 = *param_3;
  local_14 = &stack0xffffffc4;
  ExceptionList = &pvStack_10;
  local_18 = this;
  cls_0x4fc0e0::cls_0x4fc0e0(&local_2c,(int)(param_3 + 1));
  puVar6 = param_2;
  puVar1 = param_1;
  dVar5 = this->mbr_0x4;
  uVar3 = 0;
  local_8 = 0;
  if (dVar5 != 0) {
    uVar3 = (int)(this->mbr_0xc - dVar5) / 0x14;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (dVar5 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)(this->mbr_0x8 - dVar5) / 0x14;
    }
    if ((undefined4 *)(0xcccccccU - iVar4) < param_2) {
      FUN_004fb740();
    }
    else {
      if (dVar5 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (int)(this->mbr_0x8 - dVar5) / 0x14;
      }
      if (uVar3 < (uint)(iVar4 + (int)param_2)) {
        if (0xccccccc - (uVar3 >> 1) < uVar3) {
          uVar3 = 0;
        }
        else {
          uVar3 = uVar3 + (uVar3 >> 1);
        }
        if (dVar5 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (int)(this->mbr_0x8 - dVar5) / 0x14;
        }
        if (uVar3 < (uint)(iVar4 + (int)param_2)) {
          iVar4 = meth_0x4fb050(this);
          uVar3 = iVar4 + (int)puVar6;
        }
        param_2 = (undefined4 *)operator_new(uVar3 * 0x14);
        local_8 = CONCAT31(local_8._1_3_,1);
        param_3 = param_2;
        param_2 = FUN_004fcc60((undefined4 *)this->mbr_0x4,param_1,param_2);
        FUN_004fd1a0(param_2,(int)puVar6,&local_30);
        param_2 = param_2 + (int)puVar6 * 5;
        FUN_004fcc60(param_1,(undefined4 *)this->mbr_0x8,param_2);
        dVar5 = this->mbr_0x4;
        iVar4 = 0;
        local_8 = 0;
        if (dVar5 != 0) {
          iVar4 = (int)(this->mbr_0x8 - dVar5) / 0x14;
        }
        if (dVar5 != 0) {
          FUN_004fcc30(dVar5,this->mbr_0x8);
                    /* WARNING: Subroutine does not return */
          _free((void *)this->mbr_0x4);
        }
        this->mbr_0xc = (dword)(param_3 + uVar3 * 5);
        this->mbr_0x8 = (dword)(param_3 + ((int)puVar6 + iVar4) * 5);
        this->mbr_0x4 = (dword)param_3;
      }
      else {
        param_3 = (undefined4 *)this->mbr_0x8;
        if ((undefined4 *)(((int)param_3 - (int)param_1) / 0x14) < param_2) {
          local_1c = &stack0xffffffb8;
          puVar2 = param_3;
          param_3 = (undefined4 *)((int)param_2 * 0x14);
          FUN_004fd250(param_1,puVar2,
                       (undefined4 *)((int)(undefined4 *)((int)param_2 * 0x14) + (int)param_1));
          local_8 = CONCAT31(local_8._1_3_,3);
          FUN_004fd2e0((undefined4 *)this->mbr_0x8,
                       (int)puVar6 - ((int)(undefined4 *)this->mbr_0x8 - (int)puVar1) / 0x14,
                       &local_30);
          dVar5 = this->mbr_0x8 + (int)param_3;
          this->mbr_0x8 = dVar5;
          puVar6 = (undefined4 *)(dVar5 - (int)param_3);
          local_8 = 0;
        }
        else {
          param_1 = param_3 + (int)param_2 * -5;
          dVar5 = FUN_004fd250(param_1,param_3,param_3);
          puVar2 = param_1;
          this->mbr_0x8 = dVar5;
          param_2 = (undefined4 *)&stack0xffffffbc;
          param_1 = (undefined4 *)&stack0xffffffb8;
          FUN_004fcb60(&param_1,(int)puVar1,(int)puVar2,param_3);
          puVar6 = puVar1 + (int)puVar6 * 5;
        }
        param_1 = (undefined4 *)&stack0xffffffb8;
        FUN_004fcb30(puVar1,puVar6,&local_30);
      }
    }
  }
  local_8 = 0xffffffff;
  cls_0x4fc0e0::meth_0x4fb560(&local_2c);
  ExceptionList = pvStack_10;
  return;
}



void __thiscall
cls_0x4fb050::meth_0x4fd680(cls_0x4fb050 *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  dword dVar1;
  int iVar2;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 != 0) {
    if ((int)(this->mbr_0x8 - dVar1) / 0x14 != 0) {
      iVar2 = (int)((int)param_2 - dVar1) / 0x14;
      goto LAB_004fd6c7;
    }
  }
  iVar2 = 0;
LAB_004fd6c7:
  meth_0x4fd310(this,param_2,(undefined4 *)0x1,param_3);
  *param_1 = this->mbr_0x4 + iVar2 * 0x14;
  return;
}



void __thiscall cls_0x4fb050::meth_0x4fd6f0(cls_0x4fb050 *this,undefined4 *param_1)

{
  dword dVar1;
  undefined4 *puVar2;
  
  dVar1 = this->mbr_0x4;
  if ((dVar1 != 0) &&
     ((uint)((int)(this->mbr_0x8 - dVar1) / 0x14) < (uint)((int)(this->mbr_0xc - dVar1) / 0x14))) {
    puVar2 = (undefined4 *)this->mbr_0x8;
    FUN_004fd1a0(puVar2,1,param_1);
    this->mbr_0x8 = (dword)(puVar2 + 5);
    return;
  }
  meth_0x4fd680(this,(int *)&param_1,(undefined4 *)this->mbr_0x8,param_1);
  return;
}


