#include "../include/cls_0x4c5ac0.h"

undefined4 __thiscall
cls_0x4c5ac0::meth_0x4c5ac0(cls_0x4c5ac0 *this,uint param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  uint in_EAX;
  undefined4 *puVar3;
  _String_base *p_Var4;
  int iVar5;
  int iVar6;
  
  uVar2 = this->mbr_0x154;
  if (uVar2 <= param_1) {
    if (this->mbr_0x160 == 0) {
      iVar5 = 0;
      in_EAX = 0;
    }
    else {
      iVar6 = this->mbr_0x164 - this->mbr_0x160;
      iVar5 = iVar6 / 0x1c;
      in_EAX = -(iVar6 >> 0x1f);
    }
    if (param_1 < iVar5 + uVar2) {
      puVar3 = param_2;
      do {
        cVar1 = *(char *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      } while (cVar1 != '\0');
      p_Var4 = ::cls_0x50db20::meth_0x401bd0
                         ((cls_0x50db20 *)((param_1 - uVar2) * 0x1c + this->mbr_0x160),
                          (char *)param_2,(int)puVar3 - ((int)param_2 + 1));
      return CONCAT31((int3)((uint)p_Var4 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}



int __thiscall cls_0x4c5ac0::meth_0x4c6130(cls_0x4c5ac0 *this,undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  _String_base local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632f38;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  puVar2 = param_1;
  do {
    cVar1 = *(char *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_28,(char *)param_1,(int)puVar2 - ((int)param_1 + 1));
  local_4 = 0;
  ::cls_0x50db20::meth_0x4c60a0((cls_0x50db20 *)&this->mbr_0x15c,local_28);
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  if (this->mbr_0x160 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)(this->mbr_0x164 - this->mbr_0x160) / 0x1c;
  }
  ExceptionList = local_c;
  return (this->mbr_0x154 - 1) + iVar3;
}



void __thiscall
cls_0x4c5ac0::meth_0x56bd50(cls_0x4c5ac0 *this,undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638b68;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  puVar2 = param_1;
  do {
    cVar1 = *(char *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_28,(char *)param_1,(int)puVar2 - ((int)param_1 + 1));
  local_4 = 0;
  uVar3 = cls_0x4d8d70::meth_0x5ace40((cls_0x4d8d70 *)&this->mbr_0x16c,local_28);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  if (uVar3 == 0) {
    iVar4 = meth_0x4c6130(this,param_2);
    cls_0x4d8d70::meth_0x5ad460((cls_0x4d8d70 *)&this->mbr_0x16c,param_1,iVar4);
  }
  else {
    meth_0x4c5ac0(this,uVar3,param_2);
  }
  ExceptionList = local_c;
  return;
}


