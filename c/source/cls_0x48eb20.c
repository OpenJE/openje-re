#include "../include/cls_0x48eb20.h"

void __thiscall cls_0x48eb20::meth_0x48de90(cls_0x48eb20 *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)this->mbr_0x4;
  if (puVar2 == (undefined4 *)0x0) {
    this->mbr_0x4 = 0;
    this->mbr_0x8 = 0;
    this->mbr_0xc = 0;
    return;
  }
  puVar1 = (undefined4 *)this->mbr_0x8;
  for (; puVar2 != puVar1; puVar2 = puVar2 + 9) {
    (**(code **)*puVar2)(0);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



undefined4 __thiscall cls_0x48eb20::meth_0x48e8d0(cls_0x48eb20 *this,uint param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0x71c71c7 < param_1) {
    uVar1 = FUN_0048e220();
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  pvVar2 = operator_new(param_1 * 0x24);
  this->mbr_0xc = (dword)(param_1 * 0x24 + (int)pvVar2);
  this->mbr_0x4 = (dword)pvVar2;
  this->mbr_0x8 = (dword)pvVar2;
  return CONCAT31((int3)((uint)pvVar2 >> 8),1);
}



cls_0x48eb20 * __thiscall cls_0x48eb20::cls_0x48eb20(cls_0x48eb20 *this,int param_1)

{
  int iVar1;
  VFX_Effect *pVVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (this == (cls_0x48eb20 *)param_1) {
    return this;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    iVar4 = *(int *)(param_1 + 8) - iVar1;
    iVar3 = iVar4 >> 0x1f;
    iVar4 = iVar4 / 0x24 + iVar3;
    uVar5 = iVar4 - iVar3;
    if (iVar4 != iVar3) {
      pVVar2 = (VFX_Effect *)this->mbr_0x4;
      if (pVVar2 == (VFX_Effect *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (int)(this->mbr_0x8 - (int)pVVar2) / 0x24;
      }
      if (uVar5 <= uVar6) {
        pVVar2 = FUN_0048dcf0(iVar1,*(int *)(param_1 + 8),pVVar2);
        FUN_0048de60((undefined4 *)pVVar2,(undefined4 *)this->mbr_0x8);
        if (*(int *)(param_1 + 4) == 0) {
          this->mbr_0x8 = this->mbr_0x4;
          return this;
        }
        this->mbr_0x8 =
             this->mbr_0x4 + ((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x24) * 0x24;
        return this;
      }
      if (pVVar2 == (VFX_Effect *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (int)(this->mbr_0xc - (int)pVVar2) / 0x24;
      }
      if (uVar5 <= uVar6) {
        iVar3 = meth_0x5639d0(this);
        iVar3 = iVar1 + iVar3 * 0x24;
        FUN_0048dcf0(iVar1,iVar3,pVVar2);
        pVVar2 = FUN_0048dd30(iVar3,*(int *)(param_1 + 8),(VFX_Effect *)this->mbr_0x8);
        this->mbr_0x8 = (dword)pVVar2;
        return this;
      }
      FUN_0048de60((undefined4 *)pVVar2,(undefined4 *)this->mbr_0x8);
                    /* WARNING: Subroutine does not return */
      _free((void *)this->mbr_0x4);
    }
  }
  meth_0x48de90(this);
  return this;
}



void __thiscall
cls_0x48eb20::meth_0x501b00(cls_0x48eb20 *this,undefined *param_1,undefined *param_2,void *param_3)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *pvVar4;
  undefined *puVar5;
  int iVar6;
  dword dVar7;
  VFX_Effect *pVVar8;
  undefined local_40 [40];
  cls_0x48eb20 *local_18;
  undefined *local_14;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00635458;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  ExceptionList = &pvStack_10;
  local_18 = this;
  VFX_Effect::VFX_Effect((VFX_Effect *)local_40,(int)param_3);
  puVar3 = param_2;
  puVar2 = param_1;
  dVar7 = this->mbr_0x4;
  puVar5 = (undefined *)0x0;
  local_8 = 0;
  if (dVar7 != 0) {
    puVar5 = (undefined *)((int)(this->mbr_0xc - dVar7) / 0x24);
  }
  if (param_2 != (undefined *)0x0) {
    if (dVar7 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)(this->mbr_0x8 - dVar7) / 0x24;
    }
    if ((undefined *)(0x71c71c7U - iVar6) < param_2) {
      FUN_0048e220();
    }
    else {
      if (dVar7 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = (int)(this->mbr_0x8 - dVar7) / 0x24;
      }
      if (puVar5 < param_2 + iVar6) {
        if ((undefined *)(0x71c71c7 - ((uint)puVar5 >> 1)) < puVar5) {
          puVar5 = (undefined *)0x0;
        }
        else {
          puVar5 = puVar5 + ((uint)puVar5 >> 1);
        }
        if (dVar7 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = (int)(this->mbr_0x8 - dVar7) / 0x24;
        }
        if (puVar5 < param_2 + iVar6) {
          iVar6 = meth_0x5639d0(this);
          puVar5 = puVar3 + iVar6;
        }
        param_2 = (undefined *)operator_new((int)puVar5 * 0x24);
        local_8 = CONCAT31(local_8._1_3_,1);
        param_3 = param_2;
        param_2 = (undefined *)FUN_005012b0(this->mbr_0x4,(int)param_1,(VFX_Effect *)param_2);
        FUN_00501970((VFX_Effect *)param_2,(int)puVar3,(int)local_40);
        param_2 = param_2 + (int)puVar3 * 0x24;
        FUN_005012b0((int)param_1,this->mbr_0x8,(VFX_Effect *)param_2);
        puVar1 = (undefined4 *)this->mbr_0x4;
        iVar6 = 0;
        local_8 = 0;
        if (puVar1 != (undefined4 *)0x0) {
          iVar6 = (int)(this->mbr_0x8 - (int)puVar1) / 0x24;
        }
        if (puVar1 != (undefined4 *)0x0) {
          FUN_0048de60(puVar1,(undefined4 *)this->mbr_0x8);
                    /* WARNING: Subroutine does not return */
          _free((void *)this->mbr_0x4);
        }
        this->mbr_0xc = (dword)((int)puVar5 * 0x24 + (int)param_3);
        this->mbr_0x8 = (dword)((int)param_3 + (int)(puVar3 + iVar6) * 0x24);
        this->mbr_0x4 = (dword)param_3;
      }
      else {
        param_3 = (void *)this->mbr_0x8;
        if ((undefined *)(((int)param_3 - (int)param_1) / 0x24) < param_2) {
          local_40._36_4_ = &stack0xffffffa8;
          pvVar4 = param_3;
          param_3 = (void *)((int)param_2 * 0x24);
          FUN_00501a00((int)param_1,(int)pvVar4,
                       (VFX_Effect *)((int)(void *)((int)param_2 * 0x24) + (int)param_1));
          local_8 = CONCAT31(local_8._1_3_,3);
          FUN_00501a30((VFX_Effect *)this->mbr_0x8,
                       (int)puVar3 - ((int)(VFX_Effect *)this->mbr_0x8 - (int)puVar2) / 0x24,
                       (int)local_40);
          dVar7 = this->mbr_0x8 + (int)param_3;
          this->mbr_0x8 = dVar7;
          pVVar8 = (VFX_Effect *)(dVar7 - (int)param_3);
          local_8 = 0;
        }
        else {
          iVar6 = (int)param_2 * 0x24;
          param_1 = (undefined *)((int)param_3 + (int)param_2 * -0x24);
          dVar7 = FUN_00501a00((int)param_1,(int)param_3,(VFX_Effect *)param_3);
          puVar5 = param_1;
          this->mbr_0x8 = dVar7;
          param_2 = &stack0xffffffac;
          param_1 = &stack0xffffffa8;
          FUN_00501930((VFX_Effect **)&param_1,(int)puVar2,(int)puVar5,(dword *)param_3);
          pVVar8 = (VFX_Effect *)(puVar2 + iVar6);
        }
        param_1 = &stack0xffffffa8;
        FUN_00501240((VFX_Effect *)puVar2,pVVar8,(int)local_40);
      }
    }
  }
  local_8 = 0xffffffff;
  VFX_Effect::~VFX_Effect((VFX_Effect *)local_40);
  ExceptionList = pvStack_10;
  return;
}



void __thiscall
cls_0x48eb20::meth_0x501e50(cls_0x48eb20 *this,int *param_1,undefined *param_2,void *param_3)

{
  dword dVar1;
  int iVar2;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 != 0) {
    if ((int)(this->mbr_0x8 - dVar1) / 0x24 != 0) {
      iVar2 = (int)((int)param_2 - dVar1) / 0x24;
      goto LAB_00501e97;
    }
  }
  iVar2 = 0;
LAB_00501e97:
  meth_0x501b00(this,param_2,(undefined *)0x1,param_3);
  *param_1 = this->mbr_0x4 + iVar2 * 0x24;
  return;
}



void __thiscall cls_0x48eb20::meth_0x501f10(cls_0x48eb20 *this,void *param_1)

{
  dword dVar1;
  VFX_Effect *pVVar2;
  
  dVar1 = this->mbr_0x4;
  if ((dVar1 != 0) &&
     ((uint)((int)(this->mbr_0x8 - dVar1) / 0x24) < (uint)((int)(this->mbr_0xc - dVar1) / 0x24))) {
    pVVar2 = (VFX_Effect *)this->mbr_0x8;
    FUN_00501970(pVVar2,1,(int)param_1);
    this->mbr_0x8 = (dword)&(pVVar2->VFX_ParameterHolder).field_0x24;
    return;
  }
  meth_0x501e50(this,(int *)&param_1,(undefined *)this->mbr_0x8,param_1);
  return;
}



int __thiscall cls_0x48eb20::meth_0x5639d0(cls_0x48eb20 *this)

{
  dword dVar1;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 == 0) {
    return dVar1;
  }
  return (int)(this->mbr_0x8 - dVar1) / 0x24;
}



void __thiscall
cls_0x48eb20::meth_0x5660a0
          (cls_0x48eb20 *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ScrollBar *pSVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  dword dVar6;
  undefined4 *puVar7;
  uint unaff_retaddr;
  undefined4 local_44 [2];
  void *local_3c;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  undefined *local_20;
  cls_0x48eb20 *local_1c;
  uint local_18;
  undefined *local_14;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puVar3 = param_3;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00638608;
  pvStack_10 = ExceptionList;
  local_18 = DAT_007062c0 ^ unaff_retaddr;
  local_14 = &stack0xffffffb0;
  local_44[0] = *param_3;
  local_28 = 0xf;
  local_2c = 0;
  local_3c = (void *)((uint)local_3c & 0xffffff00);
  ExceptionList = &pvStack_10;
  local_1c = this;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)(local_44 + 1),(_String_base *)(param_3 + 1),0,0xffffffff);
  puVar7 = param_2;
  puVar2 = param_1;
  local_24 = puVar3[8];
  dVar6 = this->mbr_0x4;
  local_8 = 0;
  if (dVar6 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (int)(this->mbr_0xc - dVar6) / 0x24;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (dVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(this->mbr_0x8 - dVar6) / 0x24;
    }
    if ((undefined4 *)(0x71c71c7U - iVar5) < param_2) {
      FUN_005649d0();
    }
    else {
      if (dVar6 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)(this->mbr_0x8 - dVar6) / 0x24;
      }
      if (uVar4 < (uint)(iVar5 + (int)param_2)) {
        if (0x71c71c7 - (uVar4 >> 1) < uVar4) {
          uVar4 = 0;
        }
        else {
          uVar4 = uVar4 + (uVar4 >> 1);
        }
        if (dVar6 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(this->mbr_0x8 - dVar6) / 0x24;
        }
        if (uVar4 < (uint)(iVar5 + (int)param_2)) {
          iVar5 = meth_0x5639d0(this);
          uVar4 = iVar5 + (int)puVar7;
        }
        param_2 = (undefined4 *)operator_new(uVar4 * 0x24);
        local_8 = CONCAT31(local_8._1_3_,1);
        param_3 = param_2;
        param_2 = FUN_00565690((undefined4 *)this->mbr_0x4,param_1,param_2);
        FUN_005659c0(param_2,(int)puVar7,local_44);
        param_2 = param_2 + (int)puVar7 * 9;
        FUN_00565690(param_1,(undefined4 *)this->mbr_0x8,param_2);
        pSVar1 = (ScrollBar *)this->mbr_0x4;
        if (pSVar1 == (ScrollBar *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(this->mbr_0x8 - (int)pSVar1) / 0x24;
        }
        if (pSVar1 != (ScrollBar *)0x0) {
          FUN_00565990(pSVar1,(ScrollBar *)this->mbr_0x8);
                    /* WARNING: Subroutine does not return */
          _free((void *)this->mbr_0x4);
        }
        this->mbr_0xc = (dword)(param_3 + uVar4 * 9);
        this->mbr_0x8 = (dword)(param_3 + ((int)puVar7 + iVar5) * 9);
        this->mbr_0x4 = (dword)param_3;
      }
      else {
        param_3 = (undefined4 *)this->mbr_0x8;
        if ((undefined4 *)(((int)param_3 - (int)param_1) / 0x24) < param_2) {
          local_20 = &stack0xffffffa4;
          puVar3 = param_3;
          param_3 = (undefined4 *)((int)param_2 * 0x24);
          FUN_00565f20(param_1,puVar3,
                       (undefined4 *)((int)(undefined4 *)((int)param_2 * 0x24) + (int)param_1));
          local_8 = CONCAT31(local_8._1_3_,3);
          FUN_00566000((undefined4 *)this->mbr_0x8,
                       (int)puVar7 - ((int)(undefined4 *)this->mbr_0x8 - (int)puVar2) / 0x24,
                       local_44);
          dVar6 = this->mbr_0x8 + (int)param_3;
          this->mbr_0x8 = dVar6;
          puVar7 = (undefined4 *)(dVar6 - (int)param_3);
          local_8 = 0;
        }
        else {
          param_1 = param_3 + (int)param_2 * -9;
          dVar6 = FUN_00565f20(param_1,param_3,param_3);
          puVar3 = param_1;
          this->mbr_0x8 = dVar6;
          param_2 = (undefined4 *)&stack0xffffffa8;
          param_1 = (undefined4 *)&stack0xffffffa4;
          FUN_00565650(&param_1,(int)puVar2,(int)puVar3,param_3);
          puVar7 = puVar2 + (int)puVar7 * 9;
        }
        param_1 = (undefined4 *)&stack0xffffffa4;
        FUN_00565610(puVar2,puVar7,local_44);
      }
    }
  }
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_3c);
  }
  ExceptionList = pvStack_10;
  FUN_00616e15(local_18 ^ unaff_retaddr);
  return;
}



void __thiscall
cls_0x48eb20::meth_0x566420(cls_0x48eb20 *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  dword dVar1;
  int iVar2;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 != 0) {
    if ((int)(this->mbr_0x8 - dVar1) / 0x24 != 0) {
      iVar2 = (int)((int)param_2 - dVar1) / 0x24;
      goto LAB_00566467;
    }
  }
  iVar2 = 0;
LAB_00566467:
  meth_0x5660a0(this,param_2,(undefined4 *)0x1,param_3);
  *param_1 = this->mbr_0x4 + iVar2 * 0x24;
  return;
}



void __thiscall cls_0x48eb20::meth_0x5668c0(cls_0x48eb20 *this,undefined4 *param_1)

{
  dword dVar1;
  undefined4 *puVar2;
  
  dVar1 = this->mbr_0x4;
  if ((dVar1 != 0) &&
     ((uint)((int)(this->mbr_0x8 - dVar1) / 0x24) < (uint)((int)(this->mbr_0xc - dVar1) / 0x24))) {
    puVar2 = (undefined4 *)this->mbr_0x8;
    FUN_005659c0(puVar2,1,param_1);
    this->mbr_0x8 = (dword)(puVar2 + 9);
    return;
  }
  meth_0x566420(this,(int *)&param_1,(undefined4 *)this->mbr_0x8,param_1);
  return;
}


