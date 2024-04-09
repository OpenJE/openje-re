#include "../include/MapEffect.h"

void __thiscall MapEffect::meth_0x5b2d10(MapEffect *this)

{
  void *_Memory;
  cls_0x48d750 local_4;
  
  local_4.mbr_0x0 = *(int *)this->mbr_0x54;
  if ((int *)local_4.mbr_0x0 != (int *)this->mbr_0x54) {
    do {
      FUN_00573430((void *)this->mbr_0x4c,*(uint *)(local_4.mbr_0x0 + 0x10),(int **)0x1);
      cls_0x48d750::meth_0x48d750(&local_4);
    } while (local_4.mbr_0x0 != this->mbr_0x54);
  }
  _Memory = *(void **)(this->mbr_0x54 + 4);
  if (*(char *)((int)_Memory + 0x15) == '\0') {
    cls_0x50dbb0::meth_0x54b0d0((cls_0x50dbb0 *)&this->mbr_0x50);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(dword *)(this->mbr_0x54 + 4) = this->mbr_0x54;
  this->mbr_0x58 = 0;
  *(dword *)this->mbr_0x54 = this->mbr_0x54;
  *(dword *)(this->mbr_0x54 + 8) = this->mbr_0x54;
  return;
}



void __thiscall MapEffect::meth_0x5b2da0(MapEffect *this)

{
  int *piVar1;
  VFX_VEGInstance *pVVar2;
  void *this_00;
  dword dVar3;
  int *local_98;
  undefined4 local_94;
  undefined4 local_90 [2];
  undefined local_88 [64];
  undefined local_48 [68];
  
  meth_0x5b2d10(this);
  if ((((this->mbr_0x3c != 0) &&
       (local_98 = (int *)((int)(this->mbr_0x40 - this->mbr_0x3c) / 0x1c), local_98 != (int *)0x0))
      && (this->mbr_0x4c != 0)) && (dVar3 = this->mbr_0x3c, dVar3 != this->mbr_0x40)) {
    do {
      piVar1 = (int *)FUN_00552a20();
      if (*(uint *)(dVar3 + 0x18) < 0x10) {
        pVVar2 = (VFX_VEGInstance *)(dVar3 + 4);
      }
      else {
        pVVar2 = *(VFX_VEGInstance **)(dVar3 + 4);
      }
      this_00 = (void *)FUN_00574f20((void *)this->mbr_0x4c,pVVar2,piVar1,0);
      if (this_00 != (void *)0x0) {
        local_94 = 0;
        local_98 = piVar1;
        piVar1 = (int *)cls_0x50dbb0::meth_0x54e260
                                  ((cls_0x50dbb0 *)&this->mbr_0x50,local_90,&local_98);
        *(void **)(*piVar1 + 0x10) = this_00;
        thunk_FUN_0047227f(local_88,this->mbr_0x20,this->mbr_0x24,this->mbr_0x28);
        thunk_FUN_004726fd(local_48,this->mbr_0x2c,this->mbr_0x30,this->mbr_0x34);
        thunk_FUN_00471943();
        FUN_0059f850(this_00,'\x01',&local_94);
        FUN_0059f890(this_00,(uint)this->mbr_0x48);
        *(undefined *)((int)this_00 + 0x170) = 0;
      }
      dVar3 = dVar3 + 0x1c;
    } while (dVar3 != this->mbr_0x40);
  }
  return;
}



MapEffect * __thiscall MapEffect::~MapEffect(MapEffect *this)

{
  int *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063b5f1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &MapEffect__vftable_6aaec8_006aaec8;
  local_4 = 2;
  meth_0x5b2d10(this);
  local_4 = CONCAT31(local_4._1_3_,1);
  cls_0x50dbb0::meth_0x54d660
            ((cls_0x50dbb0 *)&this->mbr_0x50,&local_10,*(int ***)(int **)this->mbr_0x54,
             (int **)this->mbr_0x54);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x54);
}



MapEffect * __thiscall MapEffect::MapEffect(MapEffect *this,dword param_1)

{
  dword dVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063b616;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &MapEffect__vftable_6aaec8_006aaec8;
  this->mbr_0x1c = 0xf;
  this->mbr_0x18 = 0;
  *(undefined *)&this->mbr_0x8 = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x3c = 0;
  this->mbr_0x40 = 0;
  this->mbr_0x44 = 0;
  this->mbr_0x48 = 1;
  this->mbr_0x4c = param_1;
  *(undefined *)&this->mbr_0x50 = (undefined)param_1;
  local_4 = 1;
  dVar1 = FUN_004c6640();
  this->mbr_0x54 = dVar1;
  *(undefined *)(dVar1 + 0x15) = 1;
  *(dword *)(this->mbr_0x54 + 4) = this->mbr_0x54;
  *(dword *)this->mbr_0x54 = this->mbr_0x54;
  *(dword *)(this->mbr_0x54 + 8) = this->mbr_0x54;
  this->mbr_0x58 = 0;
  ExceptionList = local_c;
  return this;
}



undefined4 * __thiscall MapEffect::virt_meth_0x5b3050(MapEffect *this,byte param_1)

{
  ~MapEffect(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}


#include "../include/MapEffect.h"
