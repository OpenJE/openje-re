#include "../include/WaterTileModelInstance.h"

void __thiscall WaterTileModelInstance::meth_0x563bb0(WaterTileModelInstance *this)

{
  dword *pdVar1;
  
  if ((DAT_00707ce4 != (int *)0x0) && (pdVar1 = &this->mbr_0x58, *pdVar1 != 0)) {
    (**(code **)(*DAT_00707ce4 + 0xb8))(pdVar1);
    *pdVar1 = 0;
  }
  return;
}



void __thiscall
WaterTileModelInstance::meth_0x563e30
          (WaterTileModelInstance *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int **ppiVar2;
  uint uVar3;
  int *piVar4;
  
  uVar1 = *(uint *)(DAT_0070c528 + 0x1c);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      piVar4 = *(int **)((this->ModelInstance).mbr_0x10 + uVar3 * 4);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0xc))(param_1,param_2,param_3);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  ppiVar2 = (int **)(this->ModelInstance).mbr_0x48;
  if (ppiVar2 == (int **)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *ppiVar2;
  }
  if (piVar4 != (int *)(this->ModelInstance).mbr_0x48) {
    do {
      meth_0x563e30((WaterTileModelInstance *)piVar4[2],param_1,param_2,param_3);
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)(this->ModelInstance).mbr_0x48);
  }
  return;
}



void __thiscall
WaterTileModelInstance::meth_0x563ff0(WaterTileModelInstance *this,undefined4 param_1)

{
  uint uVar1;
  int **ppiVar2;
  uint uVar3;
  int *piVar4;
  
  uVar1 = *(uint *)(DAT_0070c528 + 0x1c);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      piVar4 = *(int **)((this->ModelInstance).mbr_0x10 + uVar3 * 4);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(param_1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  ppiVar2 = (int **)(this->ModelInstance).mbr_0x48;
  if (ppiVar2 == (int **)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *ppiVar2;
  }
  if (piVar4 != (int *)(this->ModelInstance).mbr_0x48) {
    do {
      meth_0x563ff0((WaterTileModelInstance *)piVar4[2],param_1);
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)(this->ModelInstance).mbr_0x48);
  }
  return;
}



void __thiscall WaterTileModelInstance::meth_0x564050(WaterTileModelInstance *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int **ppiVar5;
  uint uVar6;
  int *piVar7;
  
  fVar1 = *param_1;
  uVar4 = *(uint *)(DAT_0070c528 + 0x1c);
  uVar6 = 0;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  if (uVar4 != 0) {
    do {
      piVar7 = *(int **)((this->ModelInstance).mbr_0x10 + uVar6 * 4);
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0x10))(fVar1 * 0.01745329,fVar2 * 0.01745329,fVar3 * 0.01745329);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  ppiVar5 = (int **)(this->ModelInstance).mbr_0x48;
  if (ppiVar5 == (int **)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = *ppiVar5;
  }
  if (piVar7 != (int *)(this->ModelInstance).mbr_0x48) {
    do {
      meth_0x564050((WaterTileModelInstance *)piVar7[2],param_1);
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)(this->ModelInstance).mbr_0x48);
  }
  return;
}



WaterTileModelInstance * __thiscall
WaterTileModelInstance::~WaterTileModelInstance(WaterTileModelInstance *this)

{
  undefined4 *puVar1;
  WaterTileModelInstance *pWVar2;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00638478;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->ModelInstance).vftptr_0x0 =
       (ModelInstance__vftable_697514 *)&WaterTileModelInstance__vftable_697524_00697524;
  puVar1 = *(undefined4 **)(this->ModelInstance).mbr_0x10;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
    *(undefined4 *)(this->ModelInstance).mbr_0x10 = 0;
  }
  if (this->mbr_0x58 != 0) {
    (**(code **)(*DAT_00707ce4 + 0xb8))(&this->mbr_0x58);
    this->mbr_0x58 = 0;
  }
  local_4 = 0xffffffff;
  pWVar2 = (WaterTileModelInstance *)ModelInstance::~ModelInstance(&this->ModelInstance);
  ExceptionList = pvStack_c;
  return pWVar2;
}



undefined4 * __thiscall
WaterTileModelInstance::virt_meth_0x564900(WaterTileModelInstance *this,byte param_1)

{
  ~WaterTileModelInstance(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



WaterTileModelInstance * __thiscall
WaterTileModelInstance::WaterTileModelInstance(WaterTileModelInstance *this,dword param_1)

{
  char *pcVar1;
  char *pcVar2;
  dword in_stack_ffffffcc;
  uint in_stack_ffffffd0;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(in_stack_ffffffd0 & 0xffffff00);
  pcVar1 = "";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&stack0xffffffcc,"",(uint)(pcVar2 + -0x64d7d8));
  ModelInstance::ModelInstance(&this->ModelInstance,in_stack_ffffffcc,puVar3);
  this->mbr_0x54 = param_1;
  this->mbr_0x58 = 0;
  this->mbr_0x5c = 0;
  this->mbr_0x60 = 0;
  (this->ModelInstance).vftptr_0x0 =
       (ModelInstance__vftable_697514 *)&WaterTileModelInstance__vftable_697524_00697524;
  return this;
}



void __thiscall
WaterTileModelInstance::meth_0x565bb0(WaterTileModelInstance *this,int param_1,int param_2)

{
  void *this_00;
  int **_Memory;
  cls_0x616328 **ppcVar1;
  cls_0x616328 **ppcVar2;
  dword dVar3;
  int *piVar4;
  Gfx_WaterTile *this_01;
  int **ppiVar5;
  cls_0x616328 **ppcVar6;
  WaterTileModelInstance *local_44;
  WaterTileModelInstance *local_40;
  undefined auStack_3c [16];
  cls_0x616328 **ppcStack_2c;
  cls_0x616328 **ppcStack_28;
  cls_0x616328 **ppcStack_24;
  cls_0x5658f0 cStack_20;
  void *pvStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  uStack_8 = &LAB_006385c8;
  pvStack_c = ExceptionList;
  local_44 = (WaterTileModelInstance *)0x0;
  ExceptionList = &pvStack_c;
  local_40 = this;
  dVar3 = FUN_00529d80(param_1,1,1,0,(float)this->mbr_0x54,0x152,(int *)&local_44,1);
  this->mbr_0x58 = dVar3;
  local_40 = (WaterTileModelInstance *)(**(code **)(*DAT_00707ce4 + 0xbc))(dVar3);
  auStack_3c._4_4_ = FUN_0056e0b0();
  auStack_3c._8_4_ = 0;
  ppiVar5 = (int **)(auStack_3c._4_4_ + 4);
  uStack_8._0_1_ = 0;
  uStack_8._1_3_ = 0;
  piVar4 = (int *)FUN_00433760(auStack_3c._4_4_,*(int **)(auStack_3c._4_4_ + 4),
                               (undefined4 *)&stack0x00000000);
  GUI::Interface::meth_0x564920((Interface *)auStack_3c,1);
  *ppiVar5 = piVar4;
  *(int **)piVar4[1] = piVar4;
  ppiVar5 = (int **)auStack_3c._4_4_;
  ppcVar6 = (cls_0x616328 **)cStack_20.mbr_0x4;
  ppcVar1 = (cls_0x616328 **)cStack_20.mbr_0x8;
  ppcVar2 = (cls_0x616328 **)cStack_20.mbr_0xc;
  do {
    cStack_20.mbr_0xc = (dword)ppcVar2;
    cStack_20.mbr_0x8 = (dword)ppcVar1;
    cStack_20.mbr_0x4 = (dword)ppcVar6;
    if (auStack_3c._8_4_ == 0) {
      piVar4 = (int *)0x0;
      if (ppiVar5 != (int **)0x0) {
        piVar4 = *ppiVar5;
      }
      GUI::Interface::meth_0x4b9d60
                ((Interface *)auStack_3c,(int **)&stack0x00000000,piVar4,(int *)ppiVar5);
                    /* WARNING: Subroutine does not return */
      _free((void *)auStack_3c._4_4_);
    }
    if (ppiVar5 == (int **)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = *ppiVar5;
    }
    this_00 = (void *)piVar4[2];
    if ((ppiVar5 != (int **)0x0) && (_Memory = (int **)*ppiVar5, _Memory != ppiVar5)) {
      *_Memory[1] = (int)*_Memory;
      (*_Memory)[1] = (int)_Memory[1];
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    FUN_00565aa0(this_00,&cStack_20);
    uStack_8._0_1_ = 1;
    ppcVar6 = (cls_0x616328 **)cStack_20.mbr_0x4;
    if (cStack_20.mbr_0x4 != cStack_20.mbr_0x8) {
      do {
        this_01 = (Gfx_WaterTile *)
                  FUN_006165e0(*ppcVar6,0,&Gfx_NodeAttribute::RTTI_Type_Descriptor,
                               &Gfx_WaterTile::RTTI_Type_Descriptor,0);
        if (this_01 != (Gfx_WaterTile *)0x0) {
          dVar3 = cls_0x51daf0::meth_0x51daf0((cls_0x51daf0 *)&this_01->field_0xd8);
          this->mbr_0x60 = dVar3;
          this->mbr_0x64 = this_01->mbr_0x120;
          this->mbr_0x68 = this_01->mbr_0x124;
          this->mbr_0x6c = this_01->mbr_0x118;
          this->mbr_0x70 = this_01->mbr_0x11c;
          this_01->mbr_0x224 = *(byte *)(param_2 + 0x3c);
          this_01->mbr_0x225 = *(byte *)(param_2 + 0x3d);
          this_01->mbr_0x226 = *(byte *)(param_2 + 0x3e);
          this_01->mbr_0x23c = *(dword *)(param_2 + 0x40);
          Gfx_WaterTile::meth_0x512330(this_01);
          Gfx_WaterTile::meth_0x511ef0
                    (this_01,*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),
                     *(float *)(param_1 + 0x68),*(float *)(param_1 + 0x6c));
          break;
        }
        ppcVar6 = ppcVar6 + 1;
      } while (ppcVar6 != (cls_0x616328 **)cStack_20.mbr_0x8);
    }
    FUN_00565ad0(this_00,(cls_0x5658f0 *)(auStack_3c + 0xc));
    uStack_8._0_1_ = 2;
    ppcVar6 = ppcStack_2c;
    if (ppcStack_2c != ppcStack_28) {
      do {
        piVar4 = (int *)FUN_00433760(ppiVar5,ppiVar5[1],ppcVar6);
        GUI::Interface::meth_0x564920((Interface *)auStack_3c,1);
        ppiVar5[1] = piVar4;
        *(int **)piVar4[1] = piVar4;
        ppcVar6 = ppcVar6 + 1;
        ppiVar5 = (int **)auStack_3c._4_4_;
        this = local_44;
      } while (ppcVar6 != ppcStack_28);
    }
    ppcVar6 = (cls_0x616328 **)0x0;
    if (ppcStack_2c != (cls_0x616328 **)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(ppcStack_2c);
    }
    uStack_8._0_1_ = 0;
    ppcStack_2c = ppcVar6;
    ppcStack_28 = ppcVar6;
    ppcStack_24 = ppcVar6;
    ppcVar1 = ppcVar6;
    ppcVar2 = ppcVar6;
    if ((cls_0x616328 **)cStack_20.mbr_0x4 != (cls_0x616328 **)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)cStack_20.mbr_0x4);
    }
  } while( true );
}



void __thiscall
WaterTileModelInstance::meth_0x565f50
          (WaterTileModelInstance *this,int param_1,int param_2,undefined4 param_3,dword param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (int *)(this->ModelInstance).mbr_0x10;
  this->mbr_0x5c = param_4;
  iVar5 = *piVar1;
  if (iVar5 != 0) {
    iVar5 = *(int *)(iVar5 + 0x44);
    iVar4 = *(int *)(iVar5 + 0x14c);
    if (iVar4 != 0) {
      iVar5 = *(int *)(iVar5 + 0x150);
      do {
        cls_0x49db40::meth_0x49dd80(*(cls_0x49db40 **)(this->ModelInstance).mbr_0x10,iVar5,'\x01');
        iVar5 = iVar5 + 0x1c;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    puVar2 = *(undefined4 **)(this->ModelInstance).mbr_0x10;
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)(this->ModelInstance).mbr_0x10 = 0;
    meth_0x563bb0(this);
    *(undefined4 *)(this->ModelInstance).mbr_0x14 = 0xffffffff;
  }
  uVar3 = meth_0x565bb0(this,param_1,param_2);
  *(undefined4 *)(this->ModelInstance).mbr_0x10 = uVar3;
  *(undefined4 *)(this->ModelInstance).mbr_0x14 = 0;
  return;
}


#include "../include/WaterTileModelInstance.h"
