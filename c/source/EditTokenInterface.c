#include "../include/EditTokenInterface.h"

EditTokenInterface * __thiscall
EditTokenInterface::EditTokenInterface(EditTokenInterface *this,_String_base *param_1)

{
  char *pcVar1;
  dword dVar2;
  char *pcVar3;
  EditTokenInterface *pEVar4;
  uint unaff_retaddr;
  EditTokenInterface *local_30;
  int local_2c;
  undefined local_28;
  uint uStack_1c;
  uint local_18;
  VFX_Parameter__vftable_673a20 *local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b71b;
  pvStack_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  ExceptionList = &pvStack_c;
  local_30 = this;
  CEngineInterface::CEngineInterface(&this->CEngineInterface,param_1);
  *(EditTokenInterface__vftable_6ab354 **)&(this->CEngineInterface).Interface =
       &EditTokenInterface__vftable_6ab354_006ab354;
  this->mbr_0x4c = 0xf;
  this->mbr_0x48 = 0;
  *(undefined *)&this->mbr_0x38 = 0;
  local_14 = (VFX_Parameter__vftable_673a20 *)0xf;
  pcVar1 = "?EditToken.INT";
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  local_18 = 0;
  local_28 = 0;
  do {
    pcVar1 = pcVar1 + 1;
  } while (*pcVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_2c,"EditToken.INT",(uint)(pcVar1 + -0x6ab340));
  local_4._0_1_ = 2;
  CLoadMapInterface::meth_0x495b50((CLoadMapInterface *)this,&local_2c);
  pcVar1 = "Main";
  do {
    pcVar3 = pcVar1;
    pcVar1 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_2c,"Main",(uint)(pcVar3 + -0x65cbbc));
  dVar2 = CLoadMapInterface::meth_0x495740((CLoadMapInterface *)this,(int)&local_2c);
  this->mbr_0x50 = dVar2;
  pcVar1 = "Up";
  do {
    pcVar3 = pcVar1;
    pcVar1 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_2c,"Up",(uint)(pcVar3 + -0x65cbdc));
  dVar2 = (**(code **)(*(int *)this->mbr_0x50 + 0xb4))(&local_2c);
  this->mbr_0x54 = dVar2;
  pcVar1 = "Down";
  do {
    pcVar3 = pcVar1;
    pcVar1 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_30,"Down",(uint)(pcVar3 + -0x65cbd4));
  dVar2 = (**(code **)(*(int *)this->mbr_0x50 + 0xb4))(&local_30);
  this->mbr_0x58 = dVar2;
  if (0xf < uStack_1c) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  ExceptionList = local_14;
  pEVar4 = (EditTokenInterface *)FUN_00616e15(local_18 ^ (uint)puStack_8);
  return pEVar4;
}



int * __thiscall EditTokenInterface::virt_meth_0x5b3fd0(EditTokenInterface *this,byte param_1)

{
  meth_0x5b3ff0(this);
  if ((param_1 & 1) != 0) {
    FUN_004a7540((int *)this);
  }
  return (int *)this;
}



void __thiscall EditTokenInterface::meth_0x5b3ff0(EditTokenInterface *this)

{
  if (0xf < this->mbr_0x4c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x38);
  }
  this->mbr_0x4c = 0xf;
  this->mbr_0x48 = 0;
  *(undefined *)&this->mbr_0x38 = 0;
  CEngineInterface::meth_0x580350(&this->CEngineInterface);
  return;
}



/* WARNING: Removing unreachable block (ram,0x005b424f) */

void __thiscall EditTokenInterface::meth_0x5b4130(EditTokenInterface *this)

{
  char *pcVar1;
  char *pcVar2;
  int *piVar3;
  dword *pdVar4;
  uint unaff_retaddr;
  undefined uVar5;
  void *pvStack_34;
  undefined uStack_30;
  dword dStack_24;
  uint uStack_20;
  uint uStack_1c;
  VFX_Parameter__vftable_673a20 *pVStack_18;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063b760;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)this->mbr_0x54 + 0x54))(1);
  (**(code **)(*(int *)this->mbr_0x58 + 0x54))(0);
  uStack_1c = 0xf;
  uStack_20 = 0;
  uStack_30 = 0;
  pcVar1 = "Edit";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&pvStack_34,"Edit",(uint)(pcVar2 + -0x66ee70));
  uVar5 = SUB41(&pvStack_34,0);
  pvStack_c = (void *)0x0;
  piVar3 = (int *)(**(code **)(*(int *)this->mbr_0x50 + 0xb4))();
  local_10 = 0xffffffff;
  if (uStack_20 < 0x10) {
    uStack_20 = 0xf;
    dStack_24 = 0;
    pvStack_34 = (void *)((uint)pvStack_34 & 0xffffff00);
    if (piVar3 != (int *)0x0) {
      local_10 = 1;
      (**(code **)(*piVar3 + 0x13c))(&stack0xffffffac);
      if (this->mbr_0x4c < 0x10) {
        pdVar4 = &this->mbr_0x38;
      }
      else {
        pdVar4 = (dword *)this->mbr_0x38;
      }
      cls_0x4c5ac0::meth_0x56bd50
                ((cls_0x4c5ac0 *)&DAT_0070c2d8,pdVar4,(undefined4 *)&stack0xffffffac);
      (**(code **)(*(int *)this->mbr_0x50 + 0x54))(1);
    }
    local_10 = 0xffffffff;
    cls_0x4b28a0::meth_0x4b2fe0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,(char)this,uVar5);
    ExceptionList = pVStack_18;
    FUN_00616e15(uStack_1c ^ (uint)pvStack_c);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_34);
}



void __thiscall
EditTokenInterface::virt_meth_0x5b42a0(EditTokenInterface *this,int *param_1,int *param_2)

{
  char *_Str1;
  int iVar1;
  bool bVar2;
  char *_Str2;
  
  if (*param_2 == 6) {
    _Str2 = "Up";
    _Str1 = (char *)(**(code **)(*param_1 + 0x50))();
    iVar1 = __stricmp(_Str1,_Str2);
    bVar2 = iVar1 == 0;
LAB_005b42df:
    if (!bVar2) goto LAB_005b42e8;
  }
  else {
    if (*param_2 != 0x11) goto LAB_005b42e8;
    if (param_2[1] != 0x1c) {
      bVar2 = param_2[1] == 0x11c;
      goto LAB_005b42df;
    }
  }
  meth_0x5b4130(this);
LAB_005b42e8:
  CEngineInterface::virt_meth_0x5803e0(&this->CEngineInterface,param_1);
  return;
}


#include "../include/EditTokenInterface.h"
