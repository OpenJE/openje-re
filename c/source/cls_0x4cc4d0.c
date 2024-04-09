#include "../include/cls_0x4cc4d0.h"

void __thiscall cls_0x4cc4d0::meth_0x4cc4d0(cls_0x4cc4d0 *this)

{
  cls_0x4cc1e0 *pcVar1;
  int *piVar2;
  uint unaff_retaddr;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  Exception__vftable_64787c *pEStack_4b0;
  undefined4 uStack_4ac;
  undefined local_4a8 [36];
  int local_484;
  undefined auStack_480 [136];
  char local_3f8;
  undefined local_3f7;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006330cb;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  if (this->mbr_0x0 == 0x100) {
    ExceptionList = &pvStack_c;
    FUN_0052afe0((cls_0x50db20 *)local_4a8);
    FUN_004ca870((int)&local_3f8,1000);
    if (0xf < (uint)local_4a8._24_4_) {
                    /* WARNING: Subroutine does not return */
      _free((void *)local_4a8._4_4_);
    }
  }
  else if (this->mbr_0x0 == 0x101) {
    ExceptionList = &pvStack_c;
    FUN_00616d8c(&local_3f8,&DAT_00671e20);
  }
  else {
    local_3f8 = *(char *)&this->mbr_0x0;
    local_3f7 = 0;
    ExceptionList = &pvStack_c;
  }
  cls_0x4cb0a0::cls_0x4cb0a0((cls_0x4cb0a0 *)(local_4a8 + 0x1c),1);
  pcVar6 = "\'";
  pcVar5 = &local_3f8;
  pcVar4 = ", token \'";
  local_4 = 0;
  uVar3 = DAT_0070b254;
  pcVar1 = (cls_0x4cc1e0 *)FUN_00496e00(&local_484,"parse error line ");
  pcVar1 = cls_0x4cc1e0::cls_0x4cc1e0(pcVar1,uVar3);
  piVar2 = (int *)FUN_00496e00((int *)pcVar1,pcVar4);
  piVar2 = (int *)FUN_00496e00(piVar2,pcVar5);
  pcVar1 = (cls_0x4cc1e0 *)FUN_00496e00(piVar2,pcVar6);
  cls_0x4cc1e0::meth_0x4cc350(pcVar1,10);
  cls_0x4cc1e0::meth_0x496990(pcVar1);
  cls_0x607988::meth_0x607988((cls_0x607988 *)auStack_480,'\x01');
  uStack_4ac = *(undefined4 *)auStack_480._32_4_;
  pEStack_4b0 = &Exception__vftable_64787c_0064787c;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&pEStack_4b0,&DAT_006d8834);
}


