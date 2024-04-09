#include "../include/cls_0x563a00.h"

int __thiscall cls_0x563a00::meth_0x563a00(cls_0x563a00 *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x10 + this->mbr_0x0;
  iVar1 = *(int *)(iVar2 + 4);
  if (iVar1 == 0) {
    return 0;
  }
  return (*(int *)(iVar2 + 8) - iVar1) / 0x24;
}



void __thiscall cls_0x563a00::meth_0x5646b0(cls_0x563a00 *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  int iVar2;
  int iVar3;
  uint unaff_retaddr;
  int local_34;
  undefined local_30 [4];
  void *local_2c;
  dword local_1c;
  uint local_18;
  VFX_Parameter__vftable_673a20 *local_14;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638498;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  iVar3 = param_1 * 0x10;
  iVar1 = *(int *)(this->mbr_0x0 + 4 + iVar3);
  iVar2 = param_2 * 0x24;
  local_34 = *(int *)(iVar2 + iVar1);
  local_1c = 0;
  local_2c = (void *)((uint)local_2c & 0xffffff00);
  local_18 = 0xf;
  ExceptionList = &pvStack_c;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)local_30,(_String_base *)(iVar2 + 4 + iVar1),0,0xffffffff);
  local_14 = *(VFX_Parameter__vftable_673a20 **)(iVar2 + 0x20 + iVar1);
  local_4 = 0;
  if (local_1c != 0) {
    if (local_34 == 0) {
      local_34 = FUN_00529e30((int)local_30,1,
                              CONCAT31((int3)((uint)extraout_ECX >> 8),this->mbr_0x28 == 0),1,
                              (float)this->mbr_0x24,0x152);
      *(int *)(iVar2 + *(int *)(iVar3 + 4 + this->mbr_0x0)) = local_34;
    }
    (**(code **)(*DAT_00707ce4 + 0xbc))(local_34);
    iVar1 = *(int *)(iVar3 + 4 + this->mbr_0x0);
    *(int *)(iVar1 + 0x20 + iVar2) = *(int *)(iVar1 + 0x20 + iVar2) + 1;
  }
  if (local_18 < 0x10) {
    ExceptionList = pvStack_c;
    FUN_00616e15(local_10 ^ unaff_retaddr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}


