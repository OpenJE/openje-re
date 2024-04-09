#include "../include/ModelInstance.h"

void __thiscall
ModelInstance::meth_0x426540(ModelInstance *this,void *param_1,uint param_2,int param_3)

{
  _String_base *p_Var1;
  undefined4 ****ppppuVar2;
  uint uVar3;
  undefined4 *unaff_EDI;
  uint unaff_retaddr;
  undefined4 ****local_7c [4];
  dword local_6c;
  uint local_68;
  _String_base local_64 [4];
  void *local_60;
  dword local_50;
  uint local_4c;
  undefined local_48 [4];
  void *local_44;
  dword local_34;
  uint local_30;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062c988;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  local_4c = 0xf;
  local_50 = 0;
  local_60 = (void *)((uint)local_60 & 0xffffff00);
  local_4 = 0;
  ExceptionList = &local_c;
  if ((this == (ModelInstance *)0x0) || (ExceptionList = &local_c, param_2 == 0)) goto LAB_004266bd;
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = (undefined4 ****)((uint)local_7c[0] & 0xffffff00);
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  ExceptionList = &local_c;
  if (param_3 < 0) {
LAB_0042663e:
    ppppuVar2 = local_7c;
  }
  else {
    ExceptionList = &local_c;
    meth_0x5648d0(this,local_48,(int)unaff_EDI,param_3);
    local_4._0_1_ = 2;
    if (local_34 != 0) {
      p_Var1 = (_String_base *)
               FUN_00583d60(DAT_0070c528,(cls_0x50db20 *)&stack0xffffffd4,unaff_EDI,param_3);
      local_4._0_1_ = 3;
      ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&stack0xffffff80,p_Var1,0,0xffffffff);
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)&stack0xffffffd4);
    }
    local_4._0_1_ = 1;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      _free(local_44);
    }
    ppppuVar2 = local_7c[0];
    if (local_68 < 0x10) goto LAB_0042663e;
  }
  local_4._0_1_ = 1;
  uVar3 = FUN_00566d60((void *)this->mbr_0x4,unaff_EDI,(char *)ppppuVar2);
  if (param_2 < uVar3) {
    ppppuVar2 = local_7c[0];
    if (local_68 < 0x10) {
      ppppuVar2 = local_7c;
    }
    p_Var1 = (_String_base *)meth_0x566fb0(this,local_48,unaff_EDI,param_2,(char *)ppppuVar2);
    local_4._0_1_ = 4;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_64,p_Var1,0,0xffffffff);
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      _free(local_44);
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
    _free(local_7c[0]);
  }
LAB_004266bd:
  *(undefined4 *)((int)param_1 + 0x18) = 0xf;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined *)((int)param_1 + 4) = 0;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)param_1,local_64,0,0xffffffff);
  if (local_4c < 0x10) {
    ExceptionList = local_c;
    FUN_00616e15((uint)local_10 ^ unaff_retaddr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_60);
}



int __thiscall ModelInstance::meth_0x563930(ModelInstance *this)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)this->mbr_0x10;
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if (iVar1 == 0) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,*(int *)(iVar1 + 0x54) != 0);
}



void __thiscall
ModelInstance::virt_meth_0x563950
          (ModelInstance *this,undefined4 param_1,float *param_2,float *param_3)

{
  if (*(int *)this->mbr_0x10 == 0) {
    handle_fatal_error(
                      "Error: Attempt to get bounding box for an invalid model.  Model did not load properly or is invalid.\n"
                      );
  }
  cls_0x49cb10::meth_0x49cb10(*(cls_0x49cb10 **)this->mbr_0x10,param_2,param_3);
  return;
}



void __thiscall ModelInstance::meth_0x563980(ModelInstance *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)this->mbr_0x10;
  *param_1 = *(undefined4 *)(iVar1 + 0x34);
  param_1[1] = *(undefined4 *)(iVar1 + 0x38);
  param_1[2] = *(undefined4 *)(iVar1 + 0x3c);
  return;
}



void __thiscall ModelInstance::meth_0x563a40(ModelInstance *this,undefined4 *param_1)

{
  void *this_00;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_80 [4];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined local_40 [64];
  
  iVar1 = meth_0x563930(this);
  if ((((char)iVar1 == '\0') || (iVar1 = *(int *)this->mbr_0x10, iVar1 == 0)) ||
     (*(int *)(iVar1 + 0x4c) == 0)) {
    meth_0x563980(this,param_1);
  }
  else {
    this_00 = *(void **)(iVar1 + 0x54);
    iVar1 = *(int *)(iVar1 + 0x58);
    if (this_00 == (void *)0x0) {
      meth_0x563980(this,param_1);
      return;
    }
    *param_1 = *(undefined4 *)((int)this_00 + 0x34);
    param_1[1] = *(undefined4 *)((int)this_00 + 0x38);
    param_1[2] = *(undefined4 *)((int)this_00 + 0x3c);
    if (*(cls_0x49ca00 **)((int)this_00 + 0x4c) != (cls_0x49ca00 *)0x0) {
      puVar2 = (undefined4 *)
               cls_0x49ca00::meth_0x49ca00(*(cls_0x49ca00 **)((int)this_00 + 0x4c),iVar1);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)FUN_0049cfd0(this_00,local_40,0);
        puVar3 = local_80;
        for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
      }
      else {
        local_80[0] = *puVar2;
        local_80[1] = puVar2[1];
        local_80[2] = puVar2[2];
        local_80[3] = puVar2[3];
        local_70 = puVar2[4];
        local_6c = puVar2[5];
        local_68 = puVar2[6];
        local_64 = puVar2[7];
        local_60 = puVar2[8];
        local_5c = puVar2[9];
        local_58 = puVar2[10];
        local_54 = puVar2[0xb];
        local_50 = puVar2[0xc];
        local_4c = puVar2[0xd];
        local_48 = puVar2[0xe];
        local_44 = puVar2[0xf];
        FUN_0049cfd0(this_00,local_40,0);
        thunk_FUN_00471943();
      }
      *param_1 = local_5c;
      param_1[1] = local_58;
      param_1[2] = local_54;
      return;
    }
  }
  return;
}



void __thiscall ModelInstance::meth_0x563cb0(ModelInstance *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(this->mbr_0x10 + param_1 * 4);
  if (iVar3 != 0) {
    iVar3 = *(int *)(iVar3 + 0x44);
    iVar2 = *(int *)(iVar3 + 0x14c);
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar3 + 0x150);
      do {
        cls_0x49db40::meth_0x49dd80(*(cls_0x49db40 **)this->mbr_0x10,iVar3,'\x01');
        iVar3 = iVar3 + 0x1c;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    puVar1 = *(undefined4 **)(this->mbr_0x10 + param_1 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(this->mbr_0x10 + param_1 * 4) = 0;
    cls_0x563c40::meth_0x563c40
              ((cls_0x563c40 *)this->mbr_0x4,param_1,*(int *)(this->mbr_0x14 + param_1 * 4));
    *(undefined4 *)(this->mbr_0x14 + param_1 * 4) = 0xffffffff;
  }
  return;
}



void __thiscall ModelInstance::meth_0x563dd0(ModelInstance *this)

{
  uint uVar1;
  cls_0x49cc40 *this_00;
  uint uVar2;
  int *piVar3;
  
  uVar1 = *(uint *)(DAT_0070c528 + 0x1c);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      this_00 = *(cls_0x49cc40 **)(this->mbr_0x10 + uVar2 * 4);
      if (this_00 != (cls_0x49cc40 *)0x0) {
        cls_0x49cc40::meth_0x49cdd0(this_00);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  if ((int **)this->mbr_0x48 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *(int **)this->mbr_0x48;
  }
  if (piVar3 != (int *)this->mbr_0x48) {
    do {
      meth_0x563dd0((ModelInstance *)piVar3[2]);
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)this->mbr_0x48);
  }
  return;
}



void __thiscall ModelInstance::meth_0x563eb0(ModelInstance *this,int param_1)

{
  float fVar1;
  int *piVar2;
  
  if ((cls_0x4a5be0 *)this->mbr_0xc != (cls_0x4a5be0 *)0x0) {
    fVar1 = (float)param_1;
    if (param_1 < 0) {
      fVar1 = fVar1 + 4.294967e+09;
    }
    cls_0x4a5be0::meth_0x4a62b0((cls_0x4a5be0 *)this->mbr_0xc,(int **)(fVar1 * 0.001));
  }
  if ((int **)this->mbr_0x48 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)this->mbr_0x48;
  }
  if (piVar2 != (int *)this->mbr_0x48) {
    do {
      meth_0x563eb0((ModelInstance *)piVar2[2],param_1);
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)this->mbr_0x48);
  }
  return;
}



void __thiscall ModelInstance::meth_0x563f10(ModelInstance *this,int param_1)

{
  uint uVar1;
  cls_0x49cc40 *this_00;
  float fVar2;
  uint uVar3;
  int *piVar4;
  
  uVar1 = *(uint *)(DAT_0070c528 + 0x1c);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      this_00 = *(cls_0x49cc40 **)(this->mbr_0x10 + uVar3 * 4);
      if (this_00 != (cls_0x49cc40 *)0x0) {
        fVar2 = (float)param_1;
        if (param_1 < 0) {
          fVar2 = fVar2 + 4.294967e+09;
        }
        cls_0x49cc40::meth_0x4a0750(this_00,fVar2 * 0.001);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  if ((int **)this->mbr_0x48 == (int **)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *(int **)this->mbr_0x48;
  }
  if (piVar4 != (int *)this->mbr_0x48) {
    do {
      meth_0x563f10((ModelInstance *)piVar4[2],param_1);
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)this->mbr_0x48);
  }
  return;
}



void __thiscall ModelInstance::meth_0x564280(ModelInstance *this,undefined4 param_1)

{
  uint uVar1;
  cls_0x49cc40 *this_00;
  uint uVar2;
  int *piVar3;
  
  uVar1 = *(uint *)(DAT_0070c528 + 0x1c);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      this_00 = *(cls_0x49cc40 **)(this->mbr_0x10 + uVar2 * 4);
      if (this_00 != (cls_0x49cc40 *)0x0) {
        cls_0x49cc40::meth_0x49ce40(this_00,param_1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  if ((int **)this->mbr_0x48 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *(int **)this->mbr_0x48;
  }
  if (piVar3 != (int *)this->mbr_0x48) {
    do {
      meth_0x564280((ModelInstance *)piVar3[2],param_1);
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)this->mbr_0x48);
  }
  return;
}



void __thiscall ModelInstance::meth_0x5642e0(ModelInstance *this,undefined4 param_1)

{
  uint uVar1;
  cls_0x49ce70 *this_00;
  uint uVar2;
  int *piVar3;
  
  uVar1 = *(uint *)(DAT_0070c528 + 0x1c);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      this_00 = *(cls_0x49ce70 **)(this->mbr_0x10 + uVar2 * 4);
      if (this_00 != (cls_0x49ce70 *)0x0) {
        cls_0x49ce70::meth_0x49ce70(this_00,(char)param_1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  if ((int **)this->mbr_0x48 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *(int **)this->mbr_0x48;
  }
  if (piVar3 != (int *)this->mbr_0x48) {
    do {
      meth_0x5642e0((ModelInstance *)piVar3[2],param_1);
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)this->mbr_0x48);
  }
  return;
}



void __thiscall ModelInstance::meth_0x564340(ModelInstance *this,undefined4 param_1)

{
  uint uVar1;
  cls_0x49cea0 *this_00;
  uint uVar2;
  int *piVar3;
  
  uVar1 = *(uint *)(DAT_0070c528 + 0x1c);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      this_00 = *(cls_0x49cea0 **)(this->mbr_0x10 + uVar2 * 4);
      if (this_00 != (cls_0x49cea0 *)0x0) {
        cls_0x49cea0::meth_0x49cea0(this_00,param_1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  if ((int **)this->mbr_0x48 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *(int **)this->mbr_0x48;
  }
  if (piVar3 != (int *)this->mbr_0x48) {
    do {
      meth_0x564340((ModelInstance *)piVar3[2],param_1);
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)this->mbr_0x48);
  }
  return;
}



void __thiscall ModelInstance::meth_0x564460(ModelInstance *this)

{
  dword dVar1;
  int **ppiVar2;
  undefined4 *puVar3;
  int **_Memory;
  
  dVar1 = this->mbr_0x4c;
  while( true ) {
    if (dVar1 == 0) {
      return;
    }
    puVar3 = (undefined4 *)this->mbr_0x48;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)*puVar3;
    }
    FUN_00563910(puVar3[2]);
    ppiVar2 = (int **)this->mbr_0x48;
    if (ppiVar2 == (int **)0x0) {
      _Memory = (int **)0x0;
    }
    else {
      _Memory = (int **)*ppiVar2;
    }
    if (_Memory != ppiVar2) break;
    dVar1 = this->mbr_0x4c;
  }
  *_Memory[1] = (int)*_Memory;
  (*_Memory)[1] = (int)_Memory[1];
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



ModelInstance * __thiscall ModelInstance::~ModelInstance(ModelInstance *this)

{
  cls_0x4a5be0 *this_00;
  uint uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint uVar4;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00638466;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &ModelInstance__vftable_697514_00697514;
  local_4 = 1;
  meth_0x564460(this);
  if ((int *)this->mbr_0x8 != (int *)0x0) {
    FUN_0059b650(DAT_0070c658,(int *)this->mbr_0x8);
  }
  this_00 = (cls_0x4a5be0 *)this->mbr_0xc;
  if (this_00 != (cls_0x4a5be0 *)0x0) {
    cls_0x4a5be0::meth_0x4a5d70(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  uVar1 = *(uint *)(DAT_0070c528 + 0x1c);
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      puVar2 = *(undefined4 **)(this->mbr_0x10 + uVar4 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
        *(undefined4 *)(this->mbr_0x10 + uVar4 * 4) = 0;
        if ((cls_0x563c40 *)this->mbr_0x4 != (cls_0x563c40 *)0x0) {
          cls_0x563c40::meth_0x563c40
                    ((cls_0x563c40 *)this->mbr_0x4,uVar4,*(int *)(this->mbr_0x14 + uVar4 * 4));
        }
        *(undefined4 *)(this->mbr_0x14 + uVar4 * 4) = 0xffffffff;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  pvVar3 = (void *)this->mbr_0x50;
  if (pvVar3 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar3,0x1c,*(int *)((int)pvVar3 + -4),cls_0x4d8d70::meth_0x4b2dd0);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar3 + -4));
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x14);
}



undefined4 * __thiscall ModelInstance::virt_meth_0x5648b0(ModelInstance *this,byte param_1)

{
  ~ModelInstance(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}



void * __thiscall
ModelInstance::meth_0x5648d0(ModelInstance *this,void *param_1,int param_2,int param_3)

{
  FUN_005647e0((void *)this->mbr_0x4,(cls_0x50db20 *)param_1,param_2,param_3);
  return param_1;
}



ModelInstance * __thiscall
ModelInstance::ModelInstance(ModelInstance *this,undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  dword dVar3;
  void *pvVar4;
  uint *puVar5;
  cls_0x4a5be0 *pcVar6;
  uint uVar7;
  ModelInstance *pMVar8;
  undefined4 **ppuVar9;
  char *pcVar10;
  uint unaff_retaddr;
  int in_stack_00000018;
  uint in_stack_0000001c;
  dword in_stack_fffffeb0;
  uint in_stack_fffffeb4;
  undefined4 *puVar11;
  char local_114 [260];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_006384f0;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &ModelInstance__vftable_697514_00697514;
  this->mbr_0x34 = 0xf;
  this->mbr_0x30 = 0;
  *(undefined *)&this->mbr_0x20 = 0;
  local_4 = 1;
  uStack_3 = 0;
  dVar3 = FUN_0056e0b0();
  this->mbr_0x48 = dVar3;
  this->mbr_0x4c = 0;
  uVar2 = *(uint *)(DAT_0070c528 + 0x1c);
  local_4 = 2;
  pvVar4 = operator_new(uVar2 * 4);
  this->mbr_0x10 = (dword)pvVar4;
  pvVar4 = operator_new(uVar2 * 4);
  this->mbr_0x14 = (dword)pvVar4;
  puVar5 = (uint *)operator_new(uVar2 * 0x1c + 4);
  local_4 = 3;
  if (puVar5 == (uint *)0x0) {
    puVar5 = (uint *)0x0;
  }
  else {
    *puVar5 = uVar2;
    puVar5 = puVar5 + 1;
    _eh_vector_constructor_iterator_
              (puVar5,0x1c,uVar2,::cls_0x50db20::cls_0x50db20,cls_0x4d8d70::meth_0x4b2dd0);
  }
  this->mbr_0x50 = (dword)puVar5;
  local_4 = 2;
  ppuVar9 = (undefined4 **)param_2;
  if (in_stack_0000001c < 0x10) {
    ppuVar9 = &param_2;
  }
  pcVar10 = local_114;
  do {
    cVar1 = *(char *)ppuVar9;
    ppuVar9 = (undefined4 **)((int)ppuVar9 + 1);
    *pcVar10 = cVar1;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_0062b180(local_114);
  pcVar10 = local_114;
  do {
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&this->mbr_0x1c,local_114,(int)pcVar10 - (int)(local_114 + 1));
  this->mbr_0x40 = 0x3f800000;
  this->mbr_0x3c = 0x3f800000;
  this->mbr_0x38 = 0x3f800000;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x18 = 0;
  if (in_stack_00000018 != 0) {
    puVar11 = (undefined4 *)(in_stack_fffffeb4 & 0xffffff00);
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&stack0xfffffeb0,(_String_base *)&param_1,0,0xffffffff);
    dVar3 = AnimationCache::AcquireAnimObject(DAT_0070c658,in_stack_fffffeb0,puVar11);
    if (dVar3 != 0) {
      pcVar6 = (cls_0x4a5be0 *)operator_new(200);
      local_4 = 4;
      if (pcVar6 == (cls_0x4a5be0 *)0x0) {
        pcVar6 = (cls_0x4a5be0 *)0x0;
      }
      else {
        pcVar6 = cls_0x4a5be0::cls_0x4a5be0(pcVar6,dVar3);
      }
      this->mbr_0xc = (dword)pcVar6;
      this->mbr_0x8 = dVar3;
    }
  }
  uVar7 = 0;
  if (uVar2 != 0) {
    do {
      *(undefined4 *)(this->mbr_0x10 + uVar7 * 4) = 0;
      *(undefined4 *)(this->mbr_0x14 + uVar7 * 4) = 0xffffffff;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar2);
  }
  if (in_stack_0000001c < 0x10) {
    ExceptionList = local_c;
    pMVar8 = (ModelInstance *)FUN_00616e15(local_10 ^ unaff_retaddr);
    return pMVar8;
  }
                    /* WARNING: Subroutine does not return */
  _free(param_2);
}



void __thiscall
ModelInstance::meth_0x564f30(ModelInstance *this,int param_1,undefined4 param_2,void *param_3)

{
  uint in_stack_00000020;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00638508;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)(param_1 * 0x1c + this->mbr_0x50),(_String_base *)&param_2,0,0xffffffff
            );
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    _free(param_3);
  }
  ExceptionList = local_c;
  return;
}



void __thiscall ModelInstance::SetSocketModel(ModelInstance *this,int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _String_base *p_Var4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  void **ppvVar8;
  Gfx_Texture *this_00;
  uint uVar9;
  uint uVar10;
  ModelInstance *this_01;
  int iVar11;
  ulonglong uVar12;
  uint unaff_retaddr;
  undefined uStack_d8;
  dword dStack_cc;
  dword dVar13;
  void *pvVar14;
  ModelInstance *local_90;
  dword dStack_8c;
  dword dStack_88;
  dword dStack_84;
  dword dStack_80;
  dword dStack_7c;
  dword dStack_78;
  dword dStack_74;
  dword dStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined local_48 [32];
  void *local_28;
  dword local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_00638530;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_90 = this;
  if (*(int *)(this->mbr_0x10 + param_1 * 4) == 0) goto LAB_00565510;
  local_48._24_4_ = 0xf;
  local_48._20_4_ = 0;
  local_48._4_4_ = local_48._4_4_ & 0xffffff00;
  local_4 = (undefined4 *)0x0;
  ExceptionList = &local_c;
  if ((param_2 == (undefined4 *)0x0) ||
     (ExceptionList = &local_c, uVar2 = FUN_004a1170((char *)param_2," \n\t\r"), (char)uVar2 != '\0'
     )) {
    if (param_1 == 0) {
      iVar7 = cls_0x49cc40::meth_0x49cc40(*(cls_0x49cc40 **)this->mbr_0x10,0);
      ::cls_0x50db20::meth_0x401b20
                ((cls_0x50db20 *)local_48,(_String_base *)(iVar7 + 0xc0),0,0xffffffff);
      this_01 = this;
    }
    else {
      iVar7 = cls_0x49caf0::meth_0x49caf0
                        (*(cls_0x49caf0 **)(*(int *)(this->mbr_0x10 + param_1 * 4) + 0x44));
      iVar11 = 0;
      this_01 = local_90;
      if (0 < iVar7) {
        do {
          p_Var4 = (_String_base *)
                   cls_0x49cc40::meth_0x49cc40
                             (*(cls_0x49cc40 **)(local_90->mbr_0x10 + param_1 * 4),iVar11);
          if (p_Var4 != (_String_base *)0x0) {
            local_14 = 0xf;
            local_18 = 0;
            local_28 = (void *)((uint)local_28 & 0xffffff00);
            local_4._0_1_ = 1;
            ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)(local_48 + 0x1c),p_Var4,0,0xffffffff);
            cVar1 = FUN_00564aa0((int)(local_48 + 0x1c));
            if (cVar1 == '\0') {
              ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_48,p_Var4 + 0xc0,0,0xffffffff);
              local_4 = (undefined4 *)((uint)local_4._1_3_ << 8);
              this_01 = local_90;
              if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
                _free(local_28);
              }
              break;
            }
            local_4 = (undefined4 *)((uint)local_4._1_3_ << 8);
            if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
              _free(local_28);
            }
            local_14 = 0xf;
            local_18 = 0;
            local_28 = (void *)((uint)local_28 & 0xffffff00);
          }
          iVar11 = iVar11 + 1;
          this_01 = local_90;
        } while (iVar11 < iVar7);
      }
    }
  }
  else {
    puVar3 = param_2;
    do {
      cVar1 = *(char *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_48,(char *)param_2,(int)puVar3 - ((int)param_2 + 1));
    this_01 = this;
  }
  if ((this_01->mbr_0x18 == 0) && (local_48._20_4_ != 0)) {
    piVar6 = (int *)local_48._4_4_;
    if ((uint)local_48._24_4_ < 0x10) {
      piVar6 = (int *)(local_48 + 4);
    }
    pcVar5 = str_find_pos((char *)piVar6,"_LG.");
    if (pcVar5 == (char *)0x0) {
      piVar6 = (int *)local_48._4_4_;
      if ((uint)local_48._24_4_ < 0x10) {
        piVar6 = (int *)(local_48 + 4);
      }
      pcVar5 = str_find_pos((char *)piVar6,"_MD.");
      if (pcVar5 == (char *)0x0) {
        piVar6 = (int *)local_48._4_4_;
        if ((uint)local_48._24_4_ < 0x10) {
          piVar6 = (int *)(local_48 + 4);
        }
        pcVar5 = str_find_pos((char *)piVar6,"_SM.");
        if (pcVar5 == (char *)0x0) {
          OutputDebugStringA("ModelInstance::SetSocketModel() - No size suffix on texture.");
          cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_48);
          goto LAB_00565510;
        }
      }
    }
    iVar7 = (**(code **)(*DAT_00707ce4 + 200))();
    if (-1 < iVar7) goto LAB_0056522d;
    OutputDebugStringA("ModelInstance::SetSocketModel() - Unable to create master stitched texture."
                      );
  }
  else {
LAB_0056522d:
    piVar6 = (int *)local_48._4_4_;
    if ((uint)local_48._24_4_ < 0x10) {
      piVar6 = (int *)(local_48 + 4);
    }
    ppvVar8 = (void **)ResourceSystem::MemStreamOpen(DAT_00707da8,piVar6,(int *)0x0);
    if (ppvVar8 != (void **)0x0) {
      dVar13 = *(dword *)((int)*ppvVar8 + 0x20);
      uVar9 = 0;
      local_90 = (ModelInstance *)&stack0xffffff24;
      uStack_d8 = 0;
      ::cls_0x50db20::meth_0x401b20
                ((cls_0x50db20 *)&stack0xffffff24,(_String_base *)local_48,0,0xffffffff);
      iVar7 = (**(code **)(*DAT_00707ce4 + 0xc4))(&dStack_8c);
      FUN_00498f30(DAT_00707da8,ppvVar8);
      if (iVar7 < 0) {
        OutputDebugStringA(
                          "ModelInstance::SetSocketModel() - Unable to create master stitched texture."
                          );
      }
      else {
        local_90 = (ModelInstance *)&stack0xffffff44;
        pvVar14 = (void *)(uVar9 & 0xffffff00);
        dStack_cc = 0x5652f5;
        ::cls_0x50db20::meth_0x401b20
                  ((cls_0x50db20 *)&stack0xffffff44,(_String_base *)local_48,0,0xffffffff);
        meth_0x564f30(this_01,param_1,dVar13,pvVar14);
        this_00 = (Gfx_Texture *)(**(code **)(*DAT_00707ce4 + 0xd8))();
        iVar7 = (**(code **)(*DAT_00707ce4 + 0xd8))();
        dStack_70 = 0;
        if (*(int *)(iVar7 + 0x28) < 1) {
          uStack_68 = 0;
        }
        else {
          uStack_68 = *(undefined4 *)(*(int *)(iVar7 + 0x24) + 0x1c);
        }
        uStack_6c = 0;
        if (*(int *)(iVar7 + 0x28) < 1) {
          uStack_64 = 0;
        }
        else {
          uStack_64 = *(undefined4 *)(*(int *)(iVar7 + 0x24) + 0x20);
        }
        uVar9 = FUN_00584ed0(DAT_0070c528,local_4);
        dStack_88 = 0;
        dStack_84 = 0;
        local_90 = (ModelInstance *)0x0;
        dStack_8c = 0;
        dStack_78 = 0;
        dStack_74 = 0;
        dStack_80 = 0;
        dStack_7c = 0;
        FUN_004ca590(uVar9,&local_90,&dStack_80);
        uVar12 = FUN_00616e24();
        uStack_60 = (undefined4)uVar12;
        uVar12 = FUN_00616e24();
        uStack_58 = (undefined4)uVar12;
        uVar12 = FUN_00616e24();
        uStack_5c = (undefined4)uVar12;
        uVar12 = FUN_00616e24();
        uStack_54 = (undefined4)uVar12;
        Gfx_Texture::CopyRect(this_00,0,&uStack_60,iVar7,0,&dStack_70,0,0);
        FUN_005cf208(*(int **)(this_00->mbr_0x24 + 0x44),(int *)0x0,0,(int *)0xffffffff);
        (**(code **)(*DAT_00707ce4 + 0xd0))();
        uVar9 = 0;
        iVar7 = cls_0x49caf0::meth_0x49caf0
                          (*(cls_0x49caf0 **)(*(int *)(this_01->mbr_0x10 + param_1 * 4) + 0x44));
        if (iVar7 != 0) {
          do {
            iVar7 = cls_0x49cc40::meth_0x49cc40
                              (*(cls_0x49cc40 **)(this_01->mbr_0x10 + param_1 * 4),uVar9);
            if (iVar7 != 0) {
              *(dword *)(iVar7 + 0x130) = this_01->mbr_0x18;
            }
            uVar9 = uVar9 + 1;
            uVar10 = cls_0x49caf0::meth_0x49caf0
                               (*(cls_0x49caf0 **)(*(int *)(this_01->mbr_0x10 + param_1 * 4) + 0x44)
                               );
          } while (uVar9 < uVar10);
        }
      }
    }
  }
  if (0xf < (uint)local_48._24_4_) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_48._4_4_);
  }
LAB_00565510:
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall
ModelInstance::virt_meth_0x565810(ModelInstance *this,int param_1,uint param_2,undefined4 *param_3)

{
  cls_0x563a00 *this_00;
  cls_0x49cc40 *this_01;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  meth_0x563cb0(this,param_1);
  this_00 = (cls_0x563a00 *)this->mbr_0x4;
  uVar1 = cls_0x563a00::meth_0x563a00(this_00,param_1);
  if (param_2 < uVar1) {
    uVar2 = cls_0x563a00::meth_0x5646b0(this_00,param_1,param_2);
    *(undefined4 *)(this->mbr_0x10 + param_1 * 4) = uVar2;
    *(uint *)(this->mbr_0x14 + param_1 * 4) = param_2;
    this_01 = *(cls_0x49cc40 **)(this->mbr_0x10 + param_1 * 4);
    if (this_01 != (cls_0x49cc40 *)0x0) {
      cls_0x49cc40::meth_0x49ced0(this_01,1);
      cls_0x49cc40::meth_0x49cef0(*(cls_0x49cc40 **)(this->mbr_0x10 + param_1 * 4),1);
      if (this->mbr_0xc != 0) {
        cls_0x49cc40::meth_0x49dd40
                  (*(cls_0x49cc40 **)(this->mbr_0x10 + param_1 * 4),this->mbr_0xc,0);
      }
      if (param_1 != 0) {
        (**(code **)(*(int *)((int *)this->mbr_0x10)[param_1] + 4))(*(int *)this->mbr_0x10 + 4);
        iVar3 = *(int *)(*(int *)(this->mbr_0x10 + param_1 * 4) + 0x44);
        iVar4 = *(int *)(iVar3 + 0x14c);
        if (iVar4 != 0) {
          iVar3 = *(int *)(iVar3 + 0x150);
          do {
            cls_0x49db40::meth_0x49dd80(*(cls_0x49db40 **)this->mbr_0x10,iVar3,'\0');
            iVar3 = iVar3 + 0x1c;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      if (*(char *)(this->mbr_0x4 + 0x28) == '\x01') {
        SetSocketModel(this,param_1,param_3);
      }
    }
  }
  return;
}



void __thiscall ModelInstance::meth_0x565b00(ModelInstance *this,void *param_1,undefined4 param_2)

{
  dword dVar1;
  void *this_00;
  int iVar2;
  undefined4 *puVar3;
  undefined4 unaff_EDI;
  undefined4 *puVar4;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40 [16];
  
  this_00 = param_1;
  if (this->mbr_0xc != 0) {
    cls_0x49cf90::meth_0x49d290
              (**(cls_0x49cf90 ***)((int)param_1 + 0x10),*(int *)this->mbr_0x10,param_2,unaff_EDI);
    meth_0x563980(this,&local_4c);
    puVar3 = *(undefined4 **)this->mbr_0x10;
    puVar4 = local_40;
    for (iVar2 = 0x10; puVar3 = puVar3 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar4 = puVar4 + 1;
    }
    WaterTileModelInstance::meth_0x563e30
              ((WaterTileModelInstance *)this_00,local_4c,local_48,local_44);
    WaterTileModelInstance::meth_0x563ff0((WaterTileModelInstance *)this_00,local_40);
    dVar1 = this->mbr_0x48;
    iVar2 = FUN_00433760(dVar1,*(undefined4 *)(dVar1 + 4),&param_1);
    GUI::Interface::meth_0x564920((Interface *)&this->mbr_0x44,1);
    *(int *)(dVar1 + 4) = iVar2;
    **(int **)(iVar2 + 4) = iVar2;
  }
  return;
}



void * __thiscall
ModelInstance::meth_0x566fb0
          (ModelInstance *this,void *param_1,undefined4 *param_2,int param_3,char *param_4)

{
  FUN_00566e90((void *)this->mbr_0x4,(cls_0x50db20 *)param_1,param_2,param_3,param_4);
  return param_1;
}


#include "../include/ModelInstance.h"
