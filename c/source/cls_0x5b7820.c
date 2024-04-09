#include "../include/cls_0x5b7820.h"

void __thiscall cls_0x5b7820::meth_0x5b7820(cls_0x5b7820 *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  undefined4 ******ppppppuVar6;
  undefined4 *_Str;
  char *pcVar7;
  uint unaff_EBX;
  char *unaff_EBP;
  uint unaff_retaddr;
  undefined4 ******ppppppuStack_98;
  undefined *puStack_94;
  undefined4 uStack_90;
  undefined4 ******ppppppuStack_88;
  uint *puStack_84;
  undefined auStack_70 [8];
  undefined4 uStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  void *pvStack_5c;
  undefined auStack_4c [4];
  uint uStack_48;
  undefined local_44;
  void *pvStack_40;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  void *pvStack_24;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063bbc8;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  iVar1 = *(int *)(*(int *)(DAT_0070bd90 + 0x2c) + 0x98);
  local_30 = 0xf;
  local_34 = 0;
  local_44 = 0;
  local_14 = 0xf;
  local_18 = 0;
  local_28 = local_28 & 0xffffff00;
  puStack_84 = &local_2c;
  local_4 = 1;
  ppppppuStack_88 = (undefined4 ******)0x5b7894;
  ExceptionList = &pvStack_c;
  (**(code **)(**(int **)(iVar1 + 0x14) + 0x13c))();
  ppppppuStack_88 = (undefined4 ******)0x0;
  uStack_90 = 0;
  puStack_94 = auStack_4c;
  ppppppuStack_98 = (undefined4 ******)0x5b78a7;
  (**(code **)(**(int **)(iVar1 + 0x14) + 0x14c))();
  ppppppuStack_98 = (undefined4 ******)0x5b78b2;
  uVar3 = (**(code **)(**(int **)(iVar1 + 8) + 0x154))();
  ppppppuStack_98 = (undefined4 ******)0x5b78bf;
  uVar4 = (**(code **)(**(int **)(iVar1 + 8) + 0x16c))();
  ppppppuStack_98 = (undefined4 ******)0x5b78c9;
  (**(code **)(**(int **)(iVar1 + 4) + 0x68))();
  puStack_84 = (uint *)(uVar4 >> 0x10 & 0xff);
  uStack_60 = 0xf;
  uStack_64 = 0;
  ppppppuStack_98 = (undefined4 ******)&stack0xffffff88;
  local_18 = CONCAT31(local_18._1_3_,2);
  (**(code **)(*(int *)this->mbr_0x8 + 0x13c))();
  switch(this->mbr_0x10) {
  case 1:
    (**(code **)(**(int **)(iVar1 + 8) + 0x148))();
    (**(code **)(**(int **)(iVar1 + 0xc) + 0x148))(&stack0xffffff74,1,uVar3);
    (**(code **)(**(int **)(iVar1 + 0x10) + 0x148))(&stack0xffffff64,2,uVar3,1);
    (**(code **)(**(int **)(iVar1 + 0x14) + 0x148))(&stack0xffffff54,0,uVar3,1);
    break;
  case 2:
    pcVar7 = unaff_EBP;
    if (uStack_64 < 0x10) {
      pcVar7 = &stack0xffffff88;
    }
    iVar2 = **(int **)(iVar1 + 8);
    _atol(pcVar7);
    _Str = &uStack_60;
    (**(code **)(iVar2 + 0x148))();
    ppppppuVar6 = ppppppuStack_88;
    if ((unaff_EBX & 0xffffff00) < 0x10) {
      ppppppuVar6 = &ppppppuStack_88;
    }
    iVar2 = **(int **)(iVar1 + 0xc);
    lVar5 = _atol((char *)ppppppuVar6);
    (**(code **)(iVar2 + 0x148))(auStack_70,1,lVar5);
    ppppppuVar6 = ppppppuStack_98;
    if (puStack_84 < 0x10) {
      ppppppuVar6 = &ppppppuStack_98;
    }
    iVar2 = **(int **)(iVar1 + 0x10);
    uVar3 = 1;
    lVar5 = _atol((char *)ppppppuVar6);
    (**(code **)(iVar2 + 0x148))(&stack0xffffff80,2,lVar5,uVar3);
    if (puStack_94 < (undefined *)0x10) {
      _Str = (undefined4 *)&stack0xffffff58;
    }
    iVar1 = **(int **)(iVar1 + 0x14);
    uVar3 = 1;
    lVar5 = _atol((char *)_Str);
    (**(code **)(iVar1 + 0x148))(&uStack_90,0,lVar5,uVar3);
    break;
  case 3:
    (**(code **)(**(int **)(iVar1 + 0x14) + 300))();
    break;
  case 4:
    pcVar7 = unaff_EBP;
    if (uStack_64 < 0x10) {
      pcVar7 = &stack0xffffff88;
    }
    iVar1 = **(int **)(iVar1 + 4);
    _atol(pcVar7);
    (**(code **)(iVar1 + 100))();
    break;
  case 5:
    pcVar7 = unaff_EBP;
    if (uStack_64 < 0x10) {
      pcVar7 = &stack0xffffff88;
    }
    _sscanf(pcVar7,"%d %d %d");
    (**(code **)(**(int **)(iVar1 + 8) + 0x168))();
    (**(code **)(**(int **)(iVar1 + 0xc) + 0x168))();
    (**(code **)(**(int **)(iVar1 + 0x10) + 0x168))();
    (**(code **)(**(int **)(iVar1 + 0x14) + 0x168))();
  }
  if (0xf < uStack_64) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBP);
  }
  uStack_64 = 0xf;
  uStack_68 = 0;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_40);
  }
  local_2c = 0xf;
  local_30 = 0;
  pvStack_40 = (void *)((uint)pvStack_40 & 0xffffff00);
  if (uStack_48 < 0x10) {
    ExceptionList = pvStack_24;
    FUN_00616e15(local_28 ^ local_18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  uStack_90 = 0x5b7bd6;
  _free(pvStack_5c);
}



void __thiscall cls_0x5b7820::meth_0x5b8050(cls_0x5b7820 *this)

{
  char *pcVar1;
  char *pcVar2;
  void *local_28;
  undefined local_24;
  uint local_14;
  void *local_10;
  VFX_Parameter__vftable_673a20 *pVStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063bc78;
  pVStack_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  local_10 = (void *)0xf;
  local_14 = 0;
  local_24 = 0;
  pcVar1 = "";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ExceptionList = &pVStack_c;
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_28,"",(uint)(pcVar2 + -0x64d7d8));
  local_4 = 0;
  (**(code **)(*(int *)this->mbr_0x8 + 300))(&local_28);
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_10;
  return;
}


