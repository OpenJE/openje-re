#include "../include/cls_0x513fc0.h"

int __thiscall cls_0x513fc0::meth_0x513fc0(cls_0x513fc0 *this)

{
  dword dVar1;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 == 0) {
    return dVar1;
  }
  return (int)(this->mbr_0x8 - dVar1) / 0x11c;
}



void __thiscall
cls_0x513fc0::meth_0x515820
          (cls_0x513fc0 *this,undefined *param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  dword dVar3;
  int iVar4;
  Gfx_LineSystem *pGVar5;
  undefined *puVar6;
  Gfx_LineSystem local_138;
  cls_0x513fc0 *local_1c;
  Gfx_LineSystem *local_18;
  undefined *local_14;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00635d7b;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xfffffebc;
  ExceptionList = &pvStack_10;
  local_1c = this;
  Gfx_LineSystem::Gfx_LineSystem(&local_138,(int)param_3);
  puVar2 = param_2;
  puVar1 = param_1;
  puVar6 = (undefined *)0x0;
  local_8 = 0;
  if (this->mbr_0x4 != 0) {
    puVar6 = (undefined *)((int)(this->mbr_0xc - this->mbr_0x4) / 0x11c);
  }
  if (param_2 != (undefined *)0x0) {
    if (this->mbr_0x4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)(this->mbr_0x8 - this->mbr_0x4) / 0x11c;
    }
    if ((undefined *)(0xe6c2b4U - iVar4) < param_2) {
      FUN_00514fb0();
    }
    else {
      if (this->mbr_0x4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (int)(this->mbr_0x8 - this->mbr_0x4) / 0x11c;
      }
      if (puVar6 < param_2 + iVar4) {
        if ((undefined *)(0xe6c2b4 - ((uint)puVar6 >> 1)) < puVar6) {
          puVar6 = (undefined *)0x0;
        }
        else {
          puVar6 = puVar6 + ((uint)puVar6 >> 1);
        }
        if (this->mbr_0x4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (int)(this->mbr_0x8 - this->mbr_0x4) / 0x11c;
        }
        if (puVar6 < param_2 + iVar4) {
          iVar4 = meth_0x513fc0(this);
          puVar6 = puVar2 + iVar4;
        }
        param_2 = (undefined *)operator_new((int)puVar6 * 0x11c);
        local_8 = CONCAT31(local_8._1_3_,1);
        param_3 = param_2;
        param_2 = (undefined *)FUN_00514620(this->mbr_0x4,(int)param_1,(Gfx_LineSystem *)param_2);
        FUN_00514890((Gfx_LineSystem *)param_2,(int)puVar2,(int)&local_138);
        param_2 = param_2 + (int)puVar2 * 0x11c;
        FUN_00514620((int)param_1,this->mbr_0x8,(Gfx_LineSystem *)param_2);
        iVar4 = 0;
        local_8 = 0;
        if (this->mbr_0x4 != 0) {
          iVar4 = (int)(this->mbr_0x8 - this->mbr_0x4) / 0x11c;
        }
        if ((undefined4 *)this->mbr_0x4 != (undefined4 *)0x0) {
          FUN_00514a70((undefined4 *)this->mbr_0x4,(undefined4 *)this->mbr_0x8);
                    /* WARNING: Subroutine does not return */
          _free((void *)this->mbr_0x4);
        }
        this->mbr_0xc = (dword)(param_3 + (int)puVar6 * 0x11c);
        this->mbr_0x8 = (dword)(param_3 + (int)(puVar2 + iVar4) * 0x11c);
        this->mbr_0x4 = (dword)param_3;
      }
      else {
        local_18 = (Gfx_LineSystem *)this->mbr_0x8;
        param_3 = (undefined *)((int)local_18 - (int)param_1);
        if ((undefined *)((int)param_3 / 0x11c) < param_2) {
          param_3 = (undefined *)((int)param_2 * 0x11c);
          pGVar5 = local_18;
          local_18 = (Gfx_LineSystem *)&stack0xfffffeb0;
          FUN_00514930((int)param_1,(int)pGVar5,(Gfx_LineSystem *)(param_3 + (int)param_1));
          local_8 = CONCAT31(local_8._1_3_,3);
          FUN_00514aa0((Gfx_LineSystem *)this->mbr_0x8,
                       (int)puVar2 - (int)(this->mbr_0x8 - (int)puVar1) / 0x11c,(int)&local_138);
          dVar3 = this->mbr_0x8;
          this->mbr_0x8 = (dword)(param_3 + dVar3);
          pGVar5 = (Gfx_LineSystem *)(param_3 + dVar3 + -(int)param_3);
          local_8 = 0;
        }
        else {
          iVar4 = (int)param_2 * 0x11c;
          param_1 = (undefined *)((int)local_18 + (int)param_2 * -0x11c);
          dVar3 = FUN_00514930((int)param_1,(int)local_18,local_18);
          puVar6 = param_1;
          this->mbr_0x8 = dVar3;
          param_2 = &stack0xfffffeb4;
          param_1 = &stack0xfffffeb0;
          FUN_00514850((Gfx_LineSystem **)&param_1,(int)puVar1,(int)puVar6,local_18);
          pGVar5 = (Gfx_LineSystem *)(puVar1 + iVar4);
        }
        param_1 = &stack0xfffffeb0;
        FUN_00514560((Gfx_LineSystem *)puVar1,pGVar5,(int)&local_138);
      }
    }
  }
  local_8 = 0xffffffff;
  Gfx_LineSystem::~Gfx_LineSystem(&local_138);
  ExceptionList = pvStack_10;
  return;
}



void __thiscall cls_0x513fc0::meth_0x515dd0(cls_0x513fc0 *this,undefined *param_1)

{
  dword dVar1;
  undefined *puVar2;
  int iVar3;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00635db8;
  pvStack_c = ExceptionList;
  dVar1 = this->mbr_0x4;
  local_4 = 0;
  if (dVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = (undefined *)((int)(this->mbr_0x8 - dVar1) / 0x11c);
  }
  if (puVar2 < param_1) {
    if (dVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(this->mbr_0x8 - dVar1) / 0x11c;
    }
    puVar2 = param_1 + -iVar3;
    param_1 = &stack0xffffffd8;
    ExceptionList = &pvStack_c;
    meth_0x515820(this,(undefined *)this->mbr_0x8,puVar2,&stack0x00000008);
  }
  else {
    ExceptionList = &pvStack_c;
    if (dVar1 != 0) {
      ExceptionList = &pvStack_c;
      if (param_1 < (undefined *)((int)((int)(Gfx_LineSystem *)this->mbr_0x8 - dVar1) / 0x11c)) {
        iVar3 = (int)param_1 * 0x11c;
        param_1 = &stack0xffffffdc;
        ExceptionList = &pvStack_c;
        FUN_00514b60(this,(Gfx_LineSystem **)&param_1,(Gfx_LineSystem *)(iVar3 + this->mbr_0x4),
                     (Gfx_LineSystem *)this->mbr_0x8);
      }
    }
  }
  local_4 = 0xffffffff;
  Gfx_LineSystem::~Gfx_LineSystem((Gfx_LineSystem *)&stack0x00000008);
  ExceptionList = pvStack_c;
  return;
}


