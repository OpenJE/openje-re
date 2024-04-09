#include "../include/cls_0x6b80d8.h"

cls_0x6b80d8 * __thiscall cls_0x6b80d8::~cls_0x6b80d8(cls_0x6b80d8 *this)

{
  cls_0x6b80d8 *in_EAX;
  
  this->vftptr_0x0 = &cls_0x6b80d8__vftable_6b80d8_006b80d8;
  if (this->mbr_0x8 != 0) {
    in_EAX = (cls_0x6b80d8 *)FUN_00507960(this->mbr_0x8);
  }
  return in_EAX;
}



undefined4 __thiscall cls_0x6b80d8::meth_0x5cfce8(cls_0x6b80d8 *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_0061781c();
  iVar1 = *(int *)(unaff_EBP + 8);
  iVar2 = FUN_00507930(iVar1 << 6);
  *(int *)(unaff_EBP + 8) = iVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_004010a0(iVar2,0x40,iVar1,&LAB_00474d39);
    iVar3 = iVar2;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  extraout_ECX[2] = iVar3;
  if (iVar3 == 0) {
    uVar4 = 0x8007000e;
  }
  else {
    extraout_ECX[3] = 0;
    extraout_ECX[1] = iVar1;
    (**(code **)(*extraout_ECX + 0x14))(extraout_ECX);
    uVar4 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}



undefined4 __thiscall
cls_0x6b80d8::virt_meth_0x5cfd56(cls_0x6b80d8 *this,int *param_1,int **param_2)

{
  undefined4 uVar1;
  int iVar2;
  int **ppiVar3;
  int **ppiVar4;
  bool bVar5;
  int **in_stack_0000000c;
  
  if (in_stack_0000000c == (int **)0x0) {
    uVar1 = 0x8876086c;
  }
  else {
    iVar2 = 4;
    bVar5 = true;
    ppiVar3 = param_2;
    ppiVar4 = (int **)&DAT_00668f7c;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *ppiVar3 == *ppiVar4;
      ppiVar3 = ppiVar3 + 1;
      ppiVar4 = ppiVar4 + 1;
    } while (bVar5);
    if (!bVar5) {
      iVar2 = 4;
      bVar5 = true;
      ppiVar3 = (int **)&DAT_006692c0;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *param_2 == *ppiVar3;
        param_2 = param_2 + 1;
        ppiVar3 = ppiVar3 + 1;
      } while (bVar5);
      if (!bVar5) {
        return 0x80004002;
      }
    }
    *in_stack_0000000c = param_1;
    (**(code **)(*param_1 + 4))(param_1);
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 __thiscall cls_0x6b80d8::virt_meth_0x5cfdc1(cls_0x6b80d8 *this)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  FUN_0061781c();
  iVar5 = *(int *)(unaff_EBP + 8);
  *(int *)(iVar5 + 0xc) = *(int *)(iVar5 + 0xc) + 1;
  iVar4 = *(int *)(iVar5 + 4);
  if (iVar4 <= *(int *)(iVar5 + 0xc)) {
    iVar1 = FUN_00507930(iVar4 << 7);
    *(int *)(unaff_EBP + 8) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 == 0) {
      *(undefined4 *)(unaff_EBP + 8) = 0;
    }
    else {
      FUN_004010a0(iVar1,0x40,iVar4 * 2,&LAB_00474d39);
      *(int *)(unaff_EBP + 8) = iVar1;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(undefined4 **)(unaff_EBP + 8) == (undefined4 *)0x0) {
      uVar2 = 0x8007000e;
      goto LAB_005cfe66;
    }
    if (*(undefined4 **)(iVar5 + 8) != (undefined4 *)0x0) {
      puVar6 = *(undefined4 **)(iVar5 + 8);
      puVar7 = *(undefined4 **)(unaff_EBP + 8);
      for (uVar3 = (uint)(*(int *)(iVar5 + 4) << 6) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined *)puVar7 = *(undefined *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      FUN_00507960(*(int *)(iVar5 + 8));
    }
    uVar2 = *(undefined4 *)(unaff_EBP + 8);
    *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) << 1;
    *(undefined4 *)(iVar5 + 8) = uVar2;
  }
  puVar6 = (undefined4 *)(*(int *)(iVar5 + 0xc) * 0x40 + *(int *)(iVar5 + 8));
  puVar7 = puVar6 + -0x10;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar2 = 0;
LAB_005cfe66:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}



undefined4 __thiscall cls_0x6b80d8::virt_meth_0x5cfef7(cls_0x6b80d8 *this)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_stack_00000004;
  undefined4 local_84 [16];
  undefined4 local_44 [16];
  
  thunk_FUN_00471943();
  puVar2 = local_44;
  puVar3 = local_84;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = local_84;
  puVar3 = (undefined4 *)
           (*(int *)(in_stack_00000004 + 0xc) * 0x40 + *(int *)(in_stack_00000004 + 8));
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}



undefined4 __thiscall cls_0x6b80d8::virt_meth_0x5cff41(cls_0x6b80d8 *this)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_stack_00000004;
  undefined4 local_84 [16];
  undefined4 local_44 [16];
  
  thunk_FUN_00471943();
  puVar2 = local_44;
  puVar3 = local_84;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = local_84;
  puVar3 = (undefined4 *)
           (*(int *)(in_stack_00000004 + 0xc) * 0x40 + *(int *)(in_stack_00000004 + 8));
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}



undefined4 __thiscall
cls_0x6b80d8::virt_meth_0x5cff8b(cls_0x6b80d8 *this,int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 in_stack_0000000c;
  undefined local_90 [52];
  undefined4 auStack_5c [22];
  
  thunk_FUN_004724e0(local_90,param_2,in_stack_0000000c);
  thunk_FUN_00471943();
  puVar2 = (undefined4 *)&stack0xffffff24;
  puVar3 = auStack_5c;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = auStack_5c;
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0xc) * 0x40 + *(int *)(param_1 + 8));
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}



undefined4 __thiscall
cls_0x6b80d8::virt_meth_0x5cfffa(cls_0x6b80d8 *this,int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 in_stack_0000000c;
  undefined local_90 [52];
  undefined4 auStack_5c [22];
  
  thunk_FUN_004724e0(local_90,param_2,in_stack_0000000c);
  thunk_FUN_00471943();
  puVar2 = (undefined4 *)&stack0xffffff24;
  puVar3 = auStack_5c;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = auStack_5c;
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0xc) * 0x40 + *(int *)(param_1 + 8));
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}



undefined4 __thiscall
cls_0x6b80d8::virt_meth_0x5d0069
          (cls_0x6b80d8 *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000010;
  undefined local_90 [52];
  undefined4 auStack_5c [22];
  
  thunk_FUN_004726fd(local_90,param_2,param_3,in_stack_00000010);
  thunk_FUN_00471943();
  puVar2 = (undefined4 *)&stack0xffffff24;
  puVar3 = auStack_5c;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = auStack_5c;
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0xc) * 0x40 + *(int *)(param_1 + 8));
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}



undefined4 __thiscall
cls_0x6b80d8::virt_meth_0x5d00e5
          (cls_0x6b80d8 *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000010;
  undefined local_90 [52];
  undefined4 auStack_5c [22];
  
  thunk_FUN_004726fd(local_90,param_2,param_3,in_stack_00000010);
  thunk_FUN_00471943();
  puVar2 = (undefined4 *)&stack0xffffff24;
  puVar3 = auStack_5c;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = auStack_5c;
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0xc) * 0x40 + *(int *)(param_1 + 8));
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}



undefined4 __thiscall
cls_0x6b80d8::virt_meth_0x5d0161
          (cls_0x6b80d8 *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000010;
  undefined local_90 [52];
  undefined4 auStack_5c [22];
  
  thunk_FUN_004721ef(local_90,param_2,param_3,in_stack_00000010);
  thunk_FUN_00471943();
  puVar2 = (undefined4 *)&stack0xffffff24;
  puVar3 = auStack_5c;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = auStack_5c;
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0xc) * 0x40 + *(int *)(param_1 + 8));
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}



undefined4 __thiscall
cls_0x6b80d8::virt_meth_0x5d01dd
          (cls_0x6b80d8 *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000010;
  undefined local_90 [52];
  undefined4 auStack_5c [22];
  
  thunk_FUN_004721ef(local_90,param_2,param_3,in_stack_00000010);
  thunk_FUN_00471943();
  puVar2 = (undefined4 *)&stack0xffffff24;
  puVar3 = auStack_5c;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = auStack_5c;
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0xc) * 0x40 + *(int *)(param_1 + 8));
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}



undefined4 __thiscall
cls_0x6b80d8::virt_meth_0x5d0259
          (cls_0x6b80d8 *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000010;
  undefined local_90 [52];
  undefined4 auStack_5c [22];
  
  thunk_FUN_0047227f(local_90,param_2,param_3,in_stack_00000010);
  thunk_FUN_00471943();
  puVar2 = (undefined4 *)&stack0xffffff24;
  puVar3 = auStack_5c;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = auStack_5c;
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0xc) * 0x40 + *(int *)(param_1 + 8));
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}



undefined4 __thiscall
cls_0x6b80d8::virt_meth_0x5d02d5
          (cls_0x6b80d8 *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000010;
  undefined local_90 [52];
  undefined4 auStack_5c [22];
  
  thunk_FUN_0047227f(local_90,param_2,param_3,in_stack_00000010);
  thunk_FUN_00471943();
  puVar2 = (undefined4 *)&stack0xffffff24;
  puVar3 = auStack_5c;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = auStack_5c;
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0xc) * 0x40 + *(int *)(param_1 + 8));
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}



cls_0x6b80d8 * __thiscall cls_0x6b80d8::cls_0x6b80d8(cls_0x6b80d8 *this)

{
  this->vftptr_0x0 = &cls_0x6b80d8__vftable_6b80d8_006b80d8;
  this->mbr_0x8 = 0;
  this->mbr_0x4 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 1;
  return this;
}


#include "../include/cls_0x6b80d8.h"
