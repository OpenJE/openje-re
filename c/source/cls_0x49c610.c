#include "../include/cls_0x49c610.h"

void __thiscall cls_0x49c610::meth_0x499900(cls_0x49c610 *this,undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  cls_0x50db20 *pcVar3;
  undefined4 *****pppppuVar4;
  char *pcVar5;
  uint unaff_retaddr;
  _String_base local_48 [4];
  undefined4 *****local_44 [4];
  dword local_34;
  uint local_30;
  void *local_28;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00631590;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (undefined4 *****)((uint)local_44[0] & 0xffffff00);
  local_4 = 0;
  ExceptionList = &local_c;
  pcVar2 = (char *)FUN_004df640((VFX_Parameter *)param_1,(undefined4 *)"Resources",
                                (undefined4 *)&DAT_0066a88c,0x64d7d8);
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_48,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
  if (local_34 == 0) {
    pcVar5 = (char *)(this->cls_0x50db20).mbr_0x144;
    pcVar2 = pcVar5;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_48,pcVar5,(int)pcVar2 - (int)(pcVar5 + 1));
    pppppuVar4 = local_44[0];
    if (local_30 < 0x10) {
      pppppuVar4 = local_44;
    }
    if (*(char *)((int)pppppuVar4 + local_34) != '\\') {
      ::cls_0x50db20::meth_0x425bd0((cls_0x50db20 *)local_48,1);
    }
    pcVar3 = FUN_00434600((cls_0x50db20 *)&stack0xffffffd4,local_48,(undefined4 *)"data\\");
    local_4._0_1_ = 2;
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&(this->cls_0x50db20).VFX_Parameter.field_0xc,(_String_base *)pcVar3,
               0,0xffffffff);
  }
  else {
    pppppuVar4 = local_44[0];
    if (local_30 < 0x10) {
      pppppuVar4 = local_44;
    }
    if (*(char *)((int)pppppuVar4 + local_34) != '\\') {
      ::cls_0x50db20::meth_0x425bd0((cls_0x50db20 *)local_48,1);
    }
    pcVar3 = FUN_00434600((cls_0x50db20 *)&stack0xffffffd4,local_48,(undefined4 *)"data\\");
    local_4._0_1_ = 1;
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&(this->cls_0x50db20).VFX_Parameter.field_0xc,(_String_base *)pcVar3,
               0,0xffffffff);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  pcVar2 = (char *)FUN_004df640((VFX_Parameter *)param_1,(undefined4 *)"Resources",
                                (undefined4 *)&DAT_0066a874,0x64d7d8);
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_48,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
  if (local_34 != 0) {
    pppppuVar4 = local_44[0];
    if (local_30 < 0x10) {
      pppppuVar4 = local_44;
    }
    if (*(char *)((int)pppppuVar4 + local_34) != '\\') {
      ::cls_0x50db20::meth_0x425bd0((cls_0x50db20 *)local_48,1);
    }
    pcVar3 = FUN_00434600((cls_0x50db20 *)&stack0xffffffd4,local_48,(undefined4 *)"data\\");
    local_4._0_1_ = 3;
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&(this->cls_0x50db20).VFX_Parameter.mbr_0x28,(_String_base *)pcVar3,0
               ,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
  }
  pcVar2 = (char *)FUN_004df640((VFX_Parameter *)param_1,(undefined4 *)"Resources",
                                (undefined4 *)&DAT_0066a870,0x64d7d8);
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_48,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
  if (local_34 != 0) {
    pppppuVar4 = local_44[0];
    if (local_30 < 0x10) {
      pppppuVar4 = local_44;
    }
    if (*(char *)((int)pppppuVar4 + local_34) != '\\') {
      ::cls_0x50db20::meth_0x425bd0((cls_0x50db20 *)local_48,1);
    }
    pcVar3 = FUN_00434600((cls_0x50db20 *)&stack0xffffffd4,local_48,(undefined4 *)"data\\");
    local_4._0_1_ = 4;
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&(this->cls_0x50db20).field_0x60,(_String_base *)pcVar3,0,0xffffffff)
    ;
    local_4 = (uint)local_4._1_3_ << 8;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
  }
  pcVar2 = (char *)FUN_004df640((VFX_Parameter *)param_1,(undefined4 *)"Resources",
                                (undefined4 *)&DAT_0066a86c,0x64d7d8);
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_48,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
  if (local_34 != 0) {
    pppppuVar4 = local_44[0];
    if (local_30 < 0x10) {
      pppppuVar4 = local_44;
    }
    if (*(char *)((int)pppppuVar4 + local_34) != '\\') {
      ::cls_0x50db20::meth_0x425bd0((cls_0x50db20 *)local_48,1);
    }
    pcVar3 = FUN_00434600((cls_0x50db20 *)&stack0xffffffd4,local_48,(undefined4 *)"data\\");
    local_4._0_1_ = 5;
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&(this->cls_0x50db20).field_0x7c,(_String_base *)pcVar3,0,0xffffffff)
    ;
    local_4 = (uint)local_4._1_3_ << 8;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
  }
  pcVar2 = (char *)FUN_004df640((VFX_Parameter *)param_1,(undefined4 *)"Resources",
                                (undefined4 *)&DAT_0066a868,0x64d7d8);
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_48,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
  if (local_34 != 0) {
    pppppuVar4 = local_44[0];
    if (local_30 < 0x10) {
      pppppuVar4 = local_44;
    }
    if (*(char *)((int)pppppuVar4 + local_34) != '\\') {
      ::cls_0x50db20::meth_0x425bd0((cls_0x50db20 *)local_48,1);
    }
    pcVar3 = FUN_00434600((cls_0x50db20 *)&stack0xffffffd4,local_48,(undefined4 *)"data\\");
    local_4._0_1_ = 6;
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&(this->cls_0x50db20).field_0x98,(_String_base *)pcVar3,0,0xffffffff)
    ;
    local_4 = (uint)local_4._1_3_ << 8;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
  }
  pcVar2 = (char *)FUN_004df640((VFX_Parameter *)param_1,(undefined4 *)"Resources",
                                (undefined4 *)&DAT_0066a864,0x64d7d8);
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_48,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
  if (local_34 != 0) {
    pppppuVar4 = local_44[0];
    if (local_30 < 0x10) {
      pppppuVar4 = local_44;
    }
    if (*(char *)((int)pppppuVar4 + local_34) != '\\') {
      ::cls_0x50db20::meth_0x425bd0((cls_0x50db20 *)local_48,1);
    }
    pcVar3 = FUN_00434600((cls_0x50db20 *)&stack0xffffffd4,local_48,(undefined4 *)"data\\");
    local_4._0_1_ = 7;
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&(this->cls_0x50db20).field_0xb4,(_String_base *)pcVar3,0,0xffffffff)
    ;
    local_4 = (uint)local_4._1_3_ << 8;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
  }
  pcVar2 = (char *)FUN_004df640((VFX_Parameter *)param_1,(undefined4 *)"Resources",
                                (undefined4 *)&DAT_0066a860,0x64d7d8);
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_48,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
  if (local_34 != 0) {
    pppppuVar4 = local_44[0];
    if (local_30 < 0x10) {
      pppppuVar4 = local_44;
    }
    if (*(char *)((int)pppppuVar4 + local_34) != '\\') {
      ::cls_0x50db20::meth_0x425bd0((cls_0x50db20 *)local_48,1);
    }
    pcVar3 = FUN_00434600((cls_0x50db20 *)&stack0xffffffd4,local_48,(undefined4 *)"data\\");
    local_4._0_1_ = 8;
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&(this->cls_0x50db20).field_0xd0,(_String_base *)pcVar3,0,0xffffffff)
    ;
    local_4 = (uint)local_4._1_3_ << 8;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
  }
  pcVar2 = (char *)FUN_004df640((VFX_Parameter *)param_1,(undefined4 *)"Resources",
                                (undefined4 *)&DAT_0066a85c,0x64d7d8);
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_48,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
  if (local_34 != 0) {
    pppppuVar4 = local_44[0];
    if (local_30 < 0x10) {
      pppppuVar4 = local_44;
    }
    if (*(char *)((int)pppppuVar4 + local_34) != '\\') {
      ::cls_0x50db20::meth_0x425bd0((cls_0x50db20 *)local_48,1);
    }
    pcVar3 = FUN_00434600((cls_0x50db20 *)&stack0xffffffd4,local_48,(undefined4 *)"data\\");
    local_4 = CONCAT31(local_4._1_3_,9);
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&(this->cls_0x50db20).mbr_0xec,(_String_base *)pcVar3,0,0xffffffff);
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
  }
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    _free(local_44[0]);
  }
  ExceptionList = local_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}



void __thiscall cls_0x49c610::meth_0x49aa90(cls_0x49c610 *this,undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  _String_base *p_Var5;
  int iVar6;
  dword *this_00;
  uint unaff_retaddr;
  undefined local_48 [32];
  void *local_28;
  uint local_14;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006316a0;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_48._24_4_ = 0xf;
  local_48._20_4_ = 0;
  local_48._4_4_ = local_48._4_4_ & 0xffffff00;
  puVar3 = param_1;
  do {
    cVar1 = *(char *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  } while (cVar1 != '\0');
  ExceptionList = &pvStack_c;
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_48,(char *)param_1,(int)puVar3 - ((int)param_1 + 1));
  local_4 = 0;
  param_1 = (undefined4 *)CONCAT31(param_1._1_3_,0x5c);
  uVar4 = cls_0x4d8d70::meth_0x458a20((cls_0x4d8d70 *)local_48,(char *)&param_1,0xffffffff,1);
  if (uVar4 != 0xffffffff) {
    p_Var5 = (_String_base *)
             cls_0x4d8d70::meth_0x458ef0
                       ((cls_0x4d8d70 *)local_48,local_48 + 0x1c,uVar4 + 1,0xffffffff);
    local_4._0_1_ = 1;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_48,p_Var5,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
  }
  iVar6 = FUN_00499f10((cls_0x50db20 *)local_48);
  this_00 = &(this->cls_0x50db20).mbr_0x128;
  cls_0x50ca00::meth_0x50ca40((cls_0x50ca00 *)this_00);
  puVar3 = (undefined4 *)local_48._4_4_;
  if ((uint)local_48._24_4_ < 0x10) {
    puVar3 = (undefined4 *)(local_48 + 4);
  }
  meth_0x50bf30(this,puVar3,iVar6,1,puVar2,-1);
  cls_0x50ca00::meth_0x50ca50((cls_0x50ca00 *)this_00);
  if (0xf < (uint)local_48._24_4_) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_48._4_4_);
  }
  ExceptionList = pvStack_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall cls_0x49c610::meth_0x49abd0(cls_0x49c610 *this,undefined4 *param_1)

{
  dword *this_00;
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 ****ppppuVar4;
  uint unaff_retaddr;
  undefined4 ****local_28 [4];
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006315a8;
  pvStack_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  local_14 = 0xf;
  local_18 = 0;
  local_28[0] = (undefined4 ****)((uint)local_28[0] & 0xffffff00);
  puVar2 = param_1;
  do {
    cVar1 = *(char *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  } while (cVar1 != '\0');
  ExceptionList = &pvStack_c;
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&stack0xffffffd4,(char *)param_1,(int)puVar2 - ((int)param_1 + 1));
  local_4 = 0;
  iVar3 = FUN_00499f10((cls_0x50db20 *)&stack0xffffffd4);
  this_00 = &(this->cls_0x50db20).mbr_0x128;
  cls_0x50ca00::meth_0x50ca40((cls_0x50ca00 *)this_00);
  ppppuVar4 = local_28[0];
  if (local_14 < 0x10) {
    ppppuVar4 = local_28;
  }
  puVar2 = meth_0x50bb00((cls_0x49c610 *)&(this->cls_0x50db20).mbr_0x14,(char *)ppppuVar4,iVar3);
  if (puVar2 == (undefined4 *)0x0) {
    ppppuVar4 = local_28[0];
    if (local_14 < 0x10) {
      ppppuVar4 = local_28;
    }
    meth_0x50bb00(this,(char *)ppppuVar4,iVar3);
  }
  cls_0x50ca00::meth_0x50ca50((cls_0x50ca00 *)this_00);
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28[0]);
  }
  ExceptionList = pvStack_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}



void __thiscall cls_0x49c610::meth_0x49acd0(cls_0x49c610 *this,undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  _String_base *p_Var5;
  int iVar6;
  dword *this_00;
  uint unaff_retaddr;
  undefined local_48 [32];
  void *local_28;
  uint local_14;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006316a0;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_48._24_4_ = 0xf;
  local_48._20_4_ = 0;
  local_48._4_4_ = local_48._4_4_ & 0xffffff00;
  puVar3 = param_1;
  do {
    cVar1 = *(char *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  } while (cVar1 != '\0');
  ExceptionList = &pvStack_c;
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_48,(char *)param_1,(int)puVar3 - ((int)param_1 + 1));
  local_4 = 0;
  param_1 = (undefined4 *)CONCAT31(param_1._1_3_,0x5c);
  uVar4 = cls_0x4d8d70::meth_0x458a20((cls_0x4d8d70 *)local_48,(char *)&param_1,0xffffffff,1);
  if (uVar4 != 0xffffffff) {
    p_Var5 = (_String_base *)
             cls_0x4d8d70::meth_0x458ef0
                       ((cls_0x4d8d70 *)local_48,local_48 + 0x1c,uVar4 + 1,0xffffffff);
    local_4._0_1_ = 1;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_48,p_Var5,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
  }
  iVar6 = FUN_00499f10((cls_0x50db20 *)local_48);
  this_00 = &(this->cls_0x50db20).mbr_0x128;
  cls_0x50ca00::meth_0x50ca40((cls_0x50ca00 *)this_00);
  puVar3 = (undefined4 *)local_48._4_4_;
  if ((uint)local_48._24_4_ < 0x10) {
    puVar3 = (undefined4 *)(local_48 + 4);
  }
  meth_0x50bf30((cls_0x49c610 *)&(this->cls_0x50db20).mbr_0x14,puVar3,iVar6,1,puVar2,-1);
  cls_0x50ca00::meth_0x50ca50((cls_0x50ca00 *)this_00);
  if (0xf < (uint)local_48._24_4_) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_48._4_4_);
  }
  ExceptionList = pvStack_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall cls_0x49c610::meth_0x49b1d0(cls_0x49c610 *this,void *param_1,char param_2)

{
  dword *this_00;
  int iVar1;
  undefined4 *puVar2;
  
  this_00 = &(this->cls_0x50db20).mbr_0x128;
  cls_0x50ca00::meth_0x50ca40((cls_0x50ca00 *)this_00);
  if (param_1 != (void *)0x0) {
    if (param_2 == '\x01') {
      iVar1 = *(int *)((int)param_1 + 0xc);
      if (*(uint *)(iVar1 + 0x34) < 0x10) {
        puVar2 = (undefined4 *)(iVar1 + 0x20);
      }
      else {
        puVar2 = *(undefined4 **)(iVar1 + 0x20);
      }
      meth_0x49acd0(this,puVar2);
    }
    ResourceFileManager::ReleaseFile(&(this->cls_0x50db20).mbr_0x108,*(int **)((int)param_1 + 0xc));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  cls_0x50ca00::meth_0x50ca50((cls_0x50ca00 *)this_00);
  return;
}



void __thiscall
cls_0x49c610::meth_0x49b240(cls_0x49c610 *this,undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined uVar3;
  undefined4 *puVar4;
  cls_0x50db20 *pcVar5;
  undefined4 ****ppppuVar6;
  char *pcVar7;
  HANDLE hFindFile;
  dword *pdVar8;
  BOOL BVar9;
  uint unaff_retaddr;
  _String_base local_1dc [4];
  undefined4 ****local_1d8 [4];
  dword local_1c8;
  uint local_1c4;
  void *local_1bc;
  dword local_1ac;
  uint local_1a8;
  _String_base local_1a4 [4];
  void *local_1a0;
  dword local_190;
  uint local_18c;
  void *local_184;
  dword local_174;
  uint local_170;
  void *pvStack_168;
  dword dStack_158;
  uint uStack_154;
  byte local_150;
  char cStack_124;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631658;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_1c4 = 0xf;
  local_1c8 = 0;
  local_1d8[0] = (undefined4 ****)((uint)local_1d8[0] & 0xffffff00);
  puVar4 = param_1;
  do {
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  } while (cVar1 != '\0');
  ExceptionList = &pvStack_c;
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_1dc,(char *)param_1,(int)puVar4 - ((int)param_1 + 1));
  local_170 = 0xf;
  local_174 = 0;
  local_184 = (void *)((uint)local_184 & 0xffffff00);
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  ppppuVar6 = local_1d8[0];
  if (local_1c4 < 0x10) {
    ppppuVar6 = local_1d8;
  }
  if (*(char *)ppppuVar6 != '\\') {
    local_18c = 0xf;
    local_190 = 0;
    local_1a0 = (void *)((uint)local_1a0 & 0xffffff00);
    pcVar2 = "\\";
    do {
      pcVar7 = pcVar2;
      pcVar2 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_1a4,"\\",(uint)(pcVar7 + -0x66a9dc));
    local_4._0_1_ = 2;
    pcVar5 = FUN_00425d70((cls_0x50db20 *)&stack0xfffffe40,local_1a4,(int)local_1dc);
    local_4._0_1_ = 3;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_1dc,(_String_base *)pcVar5,0,0xffffffff);
    if (0xf < local_1a8) {
                    /* WARNING: Subroutine does not return */
      _free(local_1bc);
    }
    local_1a8 = 0xf;
    local_1ac = 0;
    local_1bc = (void *)((uint)local_1bc & 0xffffff00);
    local_4._0_1_ = 1;
    if (0xf < local_18c) {
                    /* WARNING: Subroutine does not return */
      _free(local_1a0);
    }
  }
  local_4._0_1_ = 1;
  ppppuVar6 = local_1d8[0];
  if (local_1c4 < 0x10) {
    ppppuVar6 = local_1d8;
  }
  if (*(char *)((int)ppppuVar6 + (local_1c8 - 1)) != '\\') {
    ::cls_0x50db20::meth_0x425bd0((cls_0x50db20 *)local_1dc,1);
  }
  pcVar2 = (char *)(this->cls_0x50db20).mbr_0x144;
  local_18c = 0xf;
  local_190 = 0;
  local_1a0 = (void *)((uint)local_1a0 & 0xffffff00);
  pcVar7 = pcVar2;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_1a4,pcVar2,(int)pcVar7 - (int)(pcVar2 + 1));
  local_4._0_1_ = 4;
  pcVar5 = FUN_00425d70((cls_0x50db20 *)&stack0xfffffe94,local_1a4,(int)local_1dc);
  local_4._0_1_ = 5;
  pcVar5 = FUN_00434600((cls_0x50db20 *)&stack0xfffffe40,(_String_base *)pcVar5,
                        (undefined4 *)&DAT_0066a9d8);
  if (pcVar5->mbr_0x18 < 0x10) {
    pdVar8 = &pcVar5->mbr_0x4;
  }
  else {
    pdVar8 = (dword *)pcVar5->mbr_0x4;
  }
  hFindFile = FindFirstFileA((LPCSTR)pdVar8,(LPWIN32_FIND_DATAA)&local_150);
  if (local_1a8 < 0x10) {
    local_1a8 = 0xf;
    local_1ac = 0;
    local_1bc = (void *)((uint)local_1bc & 0xffffff00);
    if (0xf < uStack_154) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_168);
    }
    uStack_154 = 0xf;
    dStack_158 = 0;
    pvStack_168 = (void *)((uint)pvStack_168 & 0xffffff00);
    local_4._0_1_ = 1;
    uVar3 = (undefined)local_4;
    local_4._0_1_ = 1;
    if (local_18c < 0x10) {
      if (hFindFile == (HANDLE)0xffffffff) {
        if (0xf < local_170) {
                    /* WARNING: Subroutine does not return */
          _free(local_184);
        }
      }
      else {
        do {
          if (cStack_124 != '.') {
            if ((local_150 & 0x10) == 0) {
              pcVar5 = FUN_00434600((cls_0x50db20 *)&stack0xfffffe40,local_1dc,
                                    (undefined4 *)&cStack_124);
              local_4._0_1_ = 7;
              if (pcVar5->mbr_0x18 < 0x10) {
                pdVar8 = &pcVar5->mbr_0x4;
              }
              else {
                pdVar8 = (dword *)pcVar5->mbr_0x4;
              }
              meth_0x49aa90(this,pdVar8);
              local_4._0_1_ = 1;
              if (0xf < local_1a8) {
                    /* WARNING: Subroutine does not return */
                _free(local_1bc);
              }
              local_1a8 = 0xf;
              local_1ac = 0;
              local_1bc = (void *)((uint)local_1bc & 0xffffff00);
            }
            else if ((char)param_2 != '\0') {
              pcVar5 = FUN_00434600((cls_0x50db20 *)&stack0xfffffe94,local_1dc,
                                    (undefined4 *)&cStack_124);
              local_4._0_1_ = 6;
              if (pcVar5->mbr_0x18 < 0x10) {
                pdVar8 = &pcVar5->mbr_0x4;
              }
              else {
                pdVar8 = (dword *)pcVar5->mbr_0x4;
              }
              meth_0x49b240(this,pdVar8,param_2);
              local_4._0_1_ = 1;
              if (0xf < uStack_154) {
                    /* WARNING: Subroutine does not return */
                _free(pvStack_168);
              }
              uStack_154 = 0xf;
              dStack_158 = 0;
              pvStack_168 = (void *)((uint)pvStack_168 & 0xffffff00);
            }
          }
          BVar9 = FindNextFileA(hFindFile,(LPWIN32_FIND_DATAA)&local_150);
        } while (BVar9 != 0);
        FindClose(hFindFile);
        uVar3 = (undefined)local_4;
        if (0xf < local_170) {
                    /* WARNING: Subroutine does not return */
          _free(local_184);
        }
      }
      local_4._0_1_ = uVar3;
      local_170 = 0xf;
      local_174 = 0;
      local_184 = (void *)((uint)local_184 & 0xffffff00);
      if (local_1c4 < 0x10) {
        ExceptionList = pvStack_c;
        FUN_00616e15(local_10 ^ unaff_retaddr);
        return;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_1d8[0]);
    }
                    /* WARNING: Subroutine does not return */
    _free(local_1a0);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_1bc);
}



int * __thiscall cls_0x49c610::meth_0x49b670(cls_0x49c610 *this,int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int local_20;
  int local_1c;
  undefined4 local_18 [6];
  
  piVar3 = (int *)ResourceSystem::OpenFile(this,param_1,param_2);
  if (piVar3 != (int *)0x0) {
    if (param_1[1] == -1) {
      *piVar3 = 0;
      cls_0x40a220::meth_0x4984e0((cls_0x40a220 *)(piVar3[3] + 0x3c),0,2);
      piVar4 = cls_0x40a220::meth_0x498550((cls_0x40a220 *)(piVar3[3] + 0x3c),local_18);
      piVar3[1] = piVar4[2] + *piVar4;
      cls_0x40a220::meth_0x4984e0((cls_0x40a220 *)(piVar3[3] + 0x3c),0,0);
      piVar3[2] = 0;
      return piVar3;
    }
    uVar5 = FUN_00499160((int)param_1,(int)piVar3,&local_20);
    if ((char)uVar5 != '\0') {
      cls_0x40a220::meth_0x4984e0((cls_0x40a220 *)(piVar3[3] + 0x3c),local_20,0);
      piVar4 = cls_0x40a220::meth_0x498550((cls_0x40a220 *)(piVar3[3] + 0x3c),local_18);
      iVar1 = piVar4[2];
      iVar2 = *piVar4;
      *piVar3 = iVar1 + iVar2;
      piVar3[1] = iVar1 + iVar2 + local_1c;
      piVar3[2] = *piVar3;
      return piVar3;
    }
    meth_0x49b1d0(this,piVar3,'\0');
  }
  return (int *)0x0;
}



void __thiscall cls_0x49c610::meth_0x49bc60(cls_0x49c610 *this)

{
  char cVar1;
  undefined3 uVar2;
  bool bVar3;
  char *pcVar4;
  undefined4 *puVar5;
  _String_base *p_Var6;
  dword *pdVar7;
  char *pcVar8;
  uint unaff_retaddr;
  VFX_Parameter *in_stack_00000004;
  char local_8c [4];
  undefined4 local_88;
  cls_0x49c610 *local_84;
  cls_0x4d8d70 local_80;
  undefined local_48 [4];
  void *local_44;
  dword local_34;
  uint local_30;
  undefined local_2c [4];
  void *local_28;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006316d0;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  local_84 = this;
  bVar3 = FUN_004df8b0(in_stack_00000004,(undefined4 *)"Resources",
                       (undefined4 *)"override_recursive",1);
  local_88 = CONCAT31(local_88._1_3_,bVar3);
  pcVar4 = (char *)FUN_004df640(in_stack_00000004,(undefined4 *)"Resources",
                                (undefined4 *)"override_paths",0x66aad0);
  local_80.mbr_0x18 = 0xf;
  local_80.mbr_0x14 = 0;
  local_80.mbr_0x4 = local_80.mbr_0x4 & 0xffffff00;
  pcVar8 = pcVar4;
  do {
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_80,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
  local_80.mbr_0x34 = 0xf;
  local_80.mbr_0x30 = 0;
  local_80.mbr_0x20 = local_80.mbr_0x20 & 0xffffff00;
  local_4._1_3_ = 0;
  uVar2 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  if (local_80.mbr_0x14 != 0) {
    do {
      local_8c[0] = ';';
      puVar5 = cls_0x4d8d70::meth_0x4985f0(&local_80,local_8c,(undefined4 *)0x0,1);
      if (puVar5 == (undefined4 *)0xffffffff) {
        pdVar7 = (dword *)local_80.mbr_0x4;
        if (local_80.mbr_0x18 < 0x10) {
          pdVar7 = &local_80.mbr_0x4;
        }
        if (*(char *)pdVar7 != ';') {
          pdVar7 = (dword *)local_80.mbr_0x4;
          if (local_80.mbr_0x18 < 0x10) {
            pdVar7 = &local_80.mbr_0x4;
          }
          meth_0x49b240(local_84,pdVar7,local_88);
        }
        break;
      }
      p_Var6 = (_String_base *)cls_0x4d8d70::meth_0x458ef0(&local_80,local_48,0,(uint)puVar5);
      local_4._0_1_ = 2;
      ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&local_80.mbr_0x1c,p_Var6,0,0xffffffff);
      local_4._0_1_ = 1;
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        _free(local_44);
      }
      local_30 = 0xf;
      local_34 = 0;
      local_44 = (void *)((uint)local_44 & 0xffffff00);
      p_Var6 = (_String_base *)
               cls_0x4d8d70::meth_0x458ef0(&local_80,local_2c,(int)puVar5 + 1,local_80.mbr_0x14 - 1)
      ;
      local_4._0_1_ = 3;
      ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&local_80,p_Var6,0,0xffffffff);
      local_4._0_1_ = 1;
      if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
        _free(local_28);
      }
      local_14 = 0xf;
      local_18 = 0;
      local_28 = (void *)((uint)local_28 & 0xffffff00);
      pdVar7 = (dword *)local_80.mbr_0x20;
      if (local_80.mbr_0x34 < 0x10) {
        pdVar7 = &local_80.mbr_0x20;
      }
      meth_0x49b240(local_84,pdVar7,local_88);
    } while (local_80.mbr_0x14 != 0);
    uVar2 = local_4._1_3_;
    if (0xf < local_80.mbr_0x34) {
                    /* WARNING: Subroutine does not return */
      _free((void *)local_80.mbr_0x20);
    }
  }
  local_4._1_3_ = uVar2;
  local_80.mbr_0x34 = 0xf;
  local_80.mbr_0x30 = 0;
  local_80.mbr_0x20 = local_80.mbr_0x20 & 0xffffff00;
  if (local_80.mbr_0x18 < 0x10) {
    ExceptionList = local_c;
    FUN_00616e15(local_10 ^ unaff_retaddr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)local_80.mbr_0x4);
}



cls_0x49c610 * __thiscall cls_0x49c610::cls_0x49c610(cls_0x49c610 *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006317b7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ::cls_0x50db20::cls_0x50db20(&this->cls_0x50db20);
  local_4 = 0;
  ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)&(this->cls_0x50db20).mbr_0x14);
  local_4._0_1_ = 1;
  _eh_vector_constructor_iterator_
            (&(this->cls_0x50db20).VFX_Parameter.field_0xc,0x1c,8,::cls_0x50db20::cls_0x50db20,
             cls_0x4d8d70::meth_0x4b2dd0);
  local_4._0_1_ = 2;
  cls_0x50dbb0::cls_0x50dbb0((cls_0x50dbb0 *)&(this->cls_0x50db20).mbr_0x108);
  local_4 = CONCAT31(local_4._1_3_,3);
  cls_0x50ca00::cls_0x50ca00((cls_0x50ca00 *)&(this->cls_0x50db20).mbr_0x128);
  (this->cls_0x50db20).mbr_0x138 = 0;
  (this->cls_0x50db20).mbr_0x134 = 0;
  (this->cls_0x50db20).mbr_0x13c = 0;
  (this->cls_0x50db20).mbr_0x140 = 0;
  (this->cls_0x50db20).mbr_0x12c = 0;
  (this->cls_0x50db20).mbr_0x130 = 0;
  ExceptionList = local_c;
  return this;
}



int __thiscall cls_0x49c610::meth_0x4e8f50(cls_0x49c610 *this)

{
  dword dVar1;
  
  dVar1 = (this->cls_0x50db20).mbr_0x4;
  if (dVar1 == 0) {
    return dVar1;
  }
  return (int)((this->cls_0x50db20).mbr_0x8 - dVar1) / 0xc;
}



void __thiscall
cls_0x49c610::meth_0x4ea010(cls_0x49c610 *this,int **param_1,int *param_2,int *param_3)

{
  Interface *pIVar1;
  
  if (param_2 != param_3) {
    pIVar1 = FUN_004e9be0((Interface *)param_3,(Interface *)(this->cls_0x50db20).mbr_0x8,
                          (Interface *)param_2);
    FUN_00515c50(pIVar1,(Interface *)(this->cls_0x50db20).mbr_0x8);
    (this->cls_0x50db20).mbr_0x8 = (dword)pIVar1;
  }
  *param_1 = param_2;
  return;
}



void __thiscall
cls_0x49c610::meth_0x4ea390(cls_0x49c610 *this,int *param_1,int *param_2,int *param_3)

{
  cls_0x4e9ac0 *pcVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  dword dVar7;
  Interface *pIVar8;
  cls_0x4e9ac0 local_28;
  undefined *local_1c;
  cls_0x49c610 *local_18;
  undefined *local_14;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_00634568;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  ExceptionList = &pvStack_10;
  local_18 = this;
  cls_0x4e9ac0::cls_0x4e9ac0(&local_28,(int)param_3);
  piVar3 = param_2;
  piVar4 = param_1;
  dVar7 = (this->cls_0x50db20).mbr_0x4;
  uVar5 = 0;
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  if (dVar7 != 0) {
    uVar5 = (int)((this->cls_0x50db20).mbr_0xc - dVar7) / 0xc;
  }
  if (param_2 != (int *)0x0) {
    if (dVar7 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)((this->cls_0x50db20).mbr_0x8 - dVar7) / 0xc;
    }
    if ((int *)(0x15555555U - iVar6) < param_2) {
      FUN_004e92b0();
    }
    else {
      if (dVar7 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = (int)((this->cls_0x50db20).mbr_0x8 - dVar7) / 0xc;
      }
      if (uVar5 < (uint)(iVar6 + (int)param_2)) {
        if (0x15555555 - (uVar5 >> 1) < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (dVar7 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = (int)((this->cls_0x50db20).mbr_0x8 - dVar7) / 0xc;
        }
        if (uVar5 < (uint)(iVar6 + (int)param_2)) {
          iVar6 = meth_0x4e8f50(this);
          uVar5 = iVar6 + (int)piVar3;
        }
        param_2 = (int *)operator_new(uVar5 * 0xc);
        local_8._0_1_ = 1;
        param_3 = param_2;
        param_2 = (int *)FUN_004e9ce0((this->cls_0x50db20).mbr_0x4,(int)param_1,
                                      (cls_0x4e9ac0 *)param_2);
        FUN_004e9e80((cls_0x4e9ac0 *)param_2,(int)piVar3,(int)&local_28);
        param_2 = param_2 + (int)piVar3 * 3;
        FUN_004e9ce0((int)param_1,(this->cls_0x50db20).mbr_0x8,(cls_0x4e9ac0 *)param_2);
        pIVar8 = (Interface *)(this->cls_0x50db20).mbr_0x4;
        if (pIVar8 == (Interface *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = (int)((this->cls_0x50db20).mbr_0x8 - (int)pIVar8) / 0xc;
        }
        if (pIVar8 != (Interface *)0x0) {
          FUN_00515c50(pIVar8,(Interface *)(this->cls_0x50db20).mbr_0x8);
                    /* WARNING: Subroutine does not return */
          _free((void *)(this->cls_0x50db20).mbr_0x4);
        }
        (this->cls_0x50db20).mbr_0xc = (dword)(param_3 + uVar5 * 3);
        (this->cls_0x50db20).mbr_0x8 = (dword)(param_3 + ((int)piVar3 + iVar6) * 3);
        (this->cls_0x50db20).mbr_0x4 = (dword)param_3;
      }
      else {
        param_3 = (int *)(this->cls_0x50db20).mbr_0x8;
        if ((int *)(((int)param_3 - (int)param_1) / 0xc) < param_2) {
          local_1c = &stack0xffffffc0;
          piVar2 = param_3;
          param_3 = (int *)((int)param_2 * 0xc);
          FUN_004ea060((int)param_1,(int)piVar2,
                       (cls_0x4e9ac0 *)((int)(int *)((int)param_2 * 0xc) + (int)param_1));
          pcVar1 = (cls_0x4e9ac0 *)(this->cls_0x50db20).mbr_0x8;
          local_8._0_1_ = 3;
          FUN_004ea340(pcVar1,(int)piVar3 - ((int)pcVar1 - (int)piVar4) / 0xc,(int)&local_28);
          dVar7 = (this->cls_0x50db20).mbr_0x8 + (int)param_3;
          (this->cls_0x50db20).mbr_0x8 = dVar7;
          pIVar8 = (Interface *)(dVar7 - (int)param_3);
          local_8._0_1_ = 0;
          local_8._1_3_ = 0;
        }
        else {
          param_1 = param_3 + (int)param_2 * -3;
          dVar7 = FUN_004ea060((int)param_1,(int)param_3,(cls_0x4e9ac0 *)param_3);
          piVar2 = param_1;
          (this->cls_0x50db20).mbr_0x8 = dVar7;
          param_2 = (int *)&stack0xffffffc4;
          param_1 = (int *)&stack0xffffffc0;
          FUN_004e9e40((Interface **)&param_1,(Interface *)piVar4,(Interface *)piVar2,
                       (Interface *)param_3);
          pIVar8 = (Interface *)(piVar4 + (int)piVar3 * 3);
        }
        param_1 = (int *)&stack0xffffffc0;
        FUN_004e9dd0((Interface *)piVar4,pIVar8,(Interface *)&local_28);
      }
    }
  }
  if ((int **)local_28.mbr_0x4 == (int **)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *(int **)local_28.mbr_0x4;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&local_28,&param_1,piVar4,(int *)local_28.mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)local_28.mbr_0x4);
}



void __thiscall
cls_0x49c610::meth_0x4ec880(cls_0x49c610 *this,int *param_1,undefined4 param_2,int **param_3)

{
  dword dVar1;
  int *piVar2;
  int iVar3;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00634608;
  pvStack_c = ExceptionList;
  dVar1 = (this->cls_0x50db20).mbr_0x4;
  local_4 = 0;
  if (dVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)((int)((this->cls_0x50db20).mbr_0x8 - dVar1) / 0xc);
  }
  if (piVar2 < param_1) {
    if (dVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)((this->cls_0x50db20).mbr_0x8 - dVar1) / 0xc;
    }
    piVar2 = (int *)((int)param_1 - iVar3);
    param_1 = (int *)&stack0xffffffdc;
    ExceptionList = &pvStack_c;
    meth_0x4ea390(this,(int *)(this->cls_0x50db20).mbr_0x8,piVar2,&param_2);
  }
  else {
    ExceptionList = &pvStack_c;
    if (dVar1 != 0) {
      piVar2 = (int *)(this->cls_0x50db20).mbr_0x8;
      ExceptionList = &pvStack_c;
      if (param_1 < (int *)((int)((int)piVar2 - dVar1) / 0xc)) {
        iVar3 = (int)param_1 * 0xc;
        ExceptionList = &pvStack_c;
        param_1 = (int *)&stack0xffffffe0;
        meth_0x4ea010(this,&param_1,(int *)((this->cls_0x50db20).mbr_0x4 + iVar3),piVar2);
      }
    }
  }
  if (param_3 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *param_3;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&param_2,&param_1,piVar2,(int *)param_3);
                    /* WARNING: Subroutine does not return */
  _free(param_3);
}



uint __thiscall cls_0x49c610::meth_0x50ba50(cls_0x49c610 *this,char *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = 0;
  iVar3 = 0;
  iVar5 = 0;
  iVar2 = 1;
  if (*param_1 != '\0') {
    do {
      iVar5 = iVar5 + 1;
    } while (param_1[iVar5] != '\0');
    if (0 < iVar5) {
      iVar4 = 0;
      if (0 < iVar5) {
        do {
          uVar1 = (uint)param_1[iVar4];
          if ((0x60 < uVar1) && (uVar1 < 0x7b)) {
            uVar1 = uVar1 - 0x20;
          }
          uVar1 = (&DAT_00674cc8)[iVar4] * (uVar1 & 0x2f);
          iVar3 = iVar3 + uVar1;
          iVar2 = iVar2 * (uVar1 % (this->cls_0x50db20).mbr_0x10);
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar5);
      }
      uVar1 = (uint)(iVar2 + iVar3 + param_2) % (this->cls_0x50db20).mbr_0x10;
    }
  }
  return uVar1;
}



undefined4 * __thiscall cls_0x49c610::meth_0x50bb00(cls_0x49c610 *this,char *param_1,int param_2)

{
  dword dVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *_Str1;
  int iVar4;
  int iVar5;
  
  uVar2 = meth_0x50ba50(this,param_1,param_2);
  dVar1 = (this->cls_0x50db20).mbr_0x4;
  iVar5 = uVar2 * 0xc;
  puVar3 = *(undefined4 **)(dVar1 + 4 + iVar5);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*puVar3;
  }
  if (puVar3 != *(undefined4 **)(dVar1 + iVar5 + 4)) {
    while( true ) {
      if ((uint)puVar3[0xb] < 0x10) {
        _Str1 = puVar3 + 6;
      }
      else {
        _Str1 = (undefined4 *)puVar3[6];
      }
      iVar4 = __stricmp((char *)_Str1,param_1);
      if ((iVar4 == 0) && (puVar3[4] == param_2)) break;
      puVar3 = (undefined4 *)*puVar3;
      if (puVar3 == *(undefined4 **)(iVar5 + 4 + (this->cls_0x50db20).mbr_0x4)) {
        return (undefined4 *)0x0;
      }
    }
    return puVar3 + 2;
  }
  return (undefined4 *)0x0;
}



void __thiscall cls_0x49c610::meth_0x50bdd0(cls_0x49c610 *this,char *param_1,int *param_2)

{
  dword dVar1;
  uint uVar2;
  int **_Memory;
  int **_Str1;
  int iVar3;
  int iVar4;
  
  uVar2 = meth_0x50ba50(this,param_1,(int)param_2);
  dVar1 = (this->cls_0x50db20).mbr_0x4;
  iVar4 = uVar2 * 0xc;
  _Memory = *(int ***)(dVar1 + 4 + iVar4);
  if (_Memory != (int **)0x0) {
    _Memory = (int **)*_Memory;
  }
  if (_Memory != *(int ***)(dVar1 + iVar4 + 4)) {
    while( true ) {
      if (_Memory[0xb] < (int *)0x10) {
        _Str1 = _Memory + 6;
      }
      else {
        _Str1 = (int **)_Memory[6];
      }
      iVar3 = __stricmp((char *)_Str1,param_1);
      if ((iVar3 == 0) && (_Memory[4] == param_2)) break;
      _Memory = (int **)*_Memory;
      if (_Memory == *(int ***)(iVar4 + 4 + (this->cls_0x50db20).mbr_0x4)) {
        return;
      }
    }
    if (_Memory != *(int ***)((this->cls_0x50db20).mbr_0x4 + 4 + iVar4)) {
      *_Memory[1] = (int)*_Memory;
      (*_Memory)[1] = (int)_Memory[1];
      FUN_00498e60((int)_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  return;
}



void __thiscall
cls_0x49c610::meth_0x50bf30
          (cls_0x49c610 *this,undefined4 *param_1,int param_2,int param_3,undefined4 *param_4,
          int param_5)

{
  char cVar1;
  int **ppiVar2;
  uint uVar3;
  int *_Str1;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  void *this_00;
  int iVar7;
  uint unaff_retaddr;
  int local_58;
  int local_54;
  int local_50;
  void *local_48;
  dword local_38;
  uint local_34;
  void *local_2c;
  dword local_1c;
  uint local_18;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  puStack_8 = &LAB_00635908;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_34 = 0xf;
  local_38 = 0;
  local_48 = (void *)((uint)local_48 & 0xffffff00);
  local_18 = 0xf;
  local_1c = 0;
  local_2c = (void *)((uint)local_2c & 0xffffff00);
  local_4 = 0;
  ExceptionList = &local_c;
  uVar3 = meth_0x50ba50(this,(char *)param_1,param_2);
  iVar7 = uVar3 * 0xc;
  iVar4 = (this->cls_0x50db20).mbr_0x4 + iVar7;
  ppiVar2 = *(int ***)(iVar4 + 4);
  if (ppiVar2 == (int **)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = *ppiVar2;
  }
  if (piVar6 != *(int **)(iVar4 + 4)) {
    do {
      if ((uint)piVar6[0xb] < 0x10) {
        _Str1 = piVar6 + 6;
      }
      else {
        _Str1 = (int *)piVar6[6];
      }
      iVar4 = __stricmp((char *)_Str1,(char *)param_1);
      if ((iVar4 == 0) && (piVar6[4] == param_2)) {
        if (piVar6 + 2 != (int *)0x0) {
          piVar6[2] = param_3;
          puVar5 = param_4;
          do {
            cVar1 = *(char *)puVar5;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
          } while (cVar1 != '\0');
          ::cls_0x50db20::meth_0x401bd0
                    ((cls_0x50db20 *)(piVar6 + 0xc),(char *)param_4,(int)puVar5 - ((int)param_4 + 1)
                    );
          piVar6[3] = param_5;
          goto LAB_0050c09a;
        }
        break;
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)*(int *)((this->cls_0x50db20).mbr_0x4 + 4 + iVar7));
  }
  puVar5 = param_1;
  do {
    cVar1 = *(char *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&stack0xffffffb4,(char *)param_1,(int)puVar5 - ((int)param_1 + 1));
  local_50 = param_2;
  local_58 = param_3;
  puVar5 = param_4;
  do {
    cVar1 = *(char *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&stack0xffffffd0,(char *)param_4,(int)puVar5 - ((int)param_4 + 1));
  local_54 = param_5;
  this_00 = (void *)((this->cls_0x50db20).mbr_0x4 + iVar7);
  iVar4 = *(int *)((int)this_00 + 4);
  puVar5 = FUN_0050bd40(iVar4,*(undefined4 *)(iVar4 + 4),&local_58);
  FUN_0050bc90(this_00,1);
  *(undefined4 **)(iVar4 + 4) = puVar5;
  *(undefined4 **)puVar5[1] = puVar5;
LAB_0050c09a:
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c = (void *)((uint)local_2c & 0xffffff00);
  if (local_34 < 0x10) {
    ExceptionList = local_c;
    FUN_00616e15(local_10 ^ unaff_retaddr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_48);
}



void __thiscall
cls_0x49c610::meth_0x50c4c0(cls_0x49c610 *this,int **param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  if (param_2 != param_3) {
    piVar1 = FUN_0050c190(param_3,(int *)(this->cls_0x50db20).mbr_0x8,param_2);
    FUN_0049c480(piVar1,(int *)(this->cls_0x50db20).mbr_0x8);
    (this->cls_0x50db20).mbr_0x8 = (dword)piVar1;
  }
  *param_1 = param_2;
  return;
}



void __thiscall
cls_0x49c610::meth_0x50c510(cls_0x49c610 *this,int *param_1,int *param_2,int *param_3)

{
  void *pvVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  dword dVar6;
  int *piVar7;
  int local_28;
  int **ppiStack_24;
  undefined *local_1c;
  cls_0x49c610 *local_18;
  undefined *local_14;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00635978;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  ExceptionList = &pvStack_10;
  local_18 = this;
  FUN_0050c100(&local_28,(int)param_3);
  piVar7 = param_2;
  piVar3 = param_1;
  dVar6 = (this->cls_0x50db20).mbr_0x4;
  uVar4 = 0;
  local_8 = 0;
  if (dVar6 != 0) {
    uVar4 = (int)((this->cls_0x50db20).mbr_0xc - dVar6) / 0xc;
  }
  if (param_2 != (int *)0x0) {
    if (dVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)((this->cls_0x50db20).mbr_0x8 - dVar6) / 0xc;
    }
    if ((int *)(0x15555555U - iVar5) < param_2) {
      FUN_0050bc10();
    }
    else {
      if (dVar6 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)((this->cls_0x50db20).mbr_0x8 - dVar6) / 0xc;
      }
      if (uVar4 < (uint)(iVar5 + (int)param_2)) {
        if (0x15555555 - (uVar4 >> 1) < uVar4) {
          uVar4 = 0;
        }
        else {
          uVar4 = uVar4 + (uVar4 >> 1);
        }
        if (dVar6 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)((this->cls_0x50db20).mbr_0x8 - dVar6) / 0xc;
        }
        if (uVar4 < (uint)(iVar5 + (int)param_2)) {
          iVar5 = meth_0x4e8f50(this);
          uVar4 = iVar5 + (int)piVar7;
        }
        param_2 = (int *)operator_new(uVar4 * 0xc);
        local_8 = CONCAT31(local_8._1_3_,1);
        param_3 = param_2;
        param_2 = (int *)FUN_0050c290((this->cls_0x50db20).mbr_0x4,(int)param_1,param_2);
        FUN_0050c3d0(param_2,(int)piVar7,(int)&local_28);
        param_2 = param_2 + (int)piVar7 * 3;
        FUN_0050c290((int)param_1,(this->cls_0x50db20).mbr_0x8,param_2);
        piVar3 = (int *)(this->cls_0x50db20).mbr_0x4;
        if (piVar3 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)((this->cls_0x50db20).mbr_0x8 - (int)piVar3) / 0xc;
        }
        if (piVar3 != (int *)0x0) {
          FUN_0049c480(piVar3,(int *)(this->cls_0x50db20).mbr_0x8);
                    /* WARNING: Subroutine does not return */
          _free((void *)(this->cls_0x50db20).mbr_0x4);
        }
        (this->cls_0x50db20).mbr_0xc = (dword)(param_3 + uVar4 * 3);
        (this->cls_0x50db20).mbr_0x8 = (dword)(param_3 + ((int)piVar7 + iVar5) * 3);
        (this->cls_0x50db20).mbr_0x4 = (dword)param_3;
      }
      else {
        param_3 = (int *)(this->cls_0x50db20).mbr_0x8;
        if ((int *)(((int)param_3 - (int)param_1) / 0xc) < param_2) {
          local_1c = &stack0xffffffc0;
          piVar2 = param_3;
          param_3 = (int *)((int)param_2 * 0xc);
          FUN_0050c460((int)param_1,(int)piVar2,
                       (int *)((int)(int *)((int)param_2 * 0xc) + (int)param_1));
          pvVar1 = (void *)(this->cls_0x50db20).mbr_0x8;
          local_8 = CONCAT31(local_8._1_3_,3);
          FUN_0050c490(pvVar1,(int)piVar7 - ((int)pvVar1 - (int)piVar3) / 0xc,(int)&local_28);
          dVar6 = (this->cls_0x50db20).mbr_0x8 + (int)param_3;
          (this->cls_0x50db20).mbr_0x8 = dVar6;
          piVar7 = (int *)(dVar6 - (int)param_3);
          local_8 = 0;
        }
        else {
          param_1 = param_3 + (int)param_2 * -3;
          dVar6 = FUN_0050c460((int)param_1,(int)param_3,param_3);
          piVar2 = param_1;
          (this->cls_0x50db20).mbr_0x8 = dVar6;
          param_2 = (int *)&stack0xffffffc4;
          param_1 = (int *)&stack0xffffffc0;
          FUN_0050c390(&param_1,piVar3,piVar2,param_3);
          piVar7 = piVar3 + (int)piVar7 * 3;
        }
        param_1 = (int *)&stack0xffffffc0;
        FUN_0050c320(piVar3,piVar7,&local_28);
      }
    }
  }
  if (ppiStack_24 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *ppiStack_24;
  }
  FUN_0049a8b0(&local_28,&param_1,piVar3,(int *)ppiStack_24);
                    /* WARNING: Subroutine does not return */
  _free(ppiStack_24);
}



void __thiscall
cls_0x49c610::meth_0x50c870(cls_0x49c610 *this,int *param_1,undefined4 param_2,int **param_3)

{
  dword dVar1;
  int *piVar2;
  int iVar3;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00635998;
  pvStack_c = ExceptionList;
  dVar1 = (this->cls_0x50db20).mbr_0x4;
  local_4 = 0;
  if (dVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)((int)((this->cls_0x50db20).mbr_0x8 - dVar1) / 0xc);
  }
  if (piVar2 < param_1) {
    if (dVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)((this->cls_0x50db20).mbr_0x8 - dVar1) / 0xc;
    }
    piVar2 = (int *)((int)param_1 - iVar3);
    param_1 = (int *)&stack0xffffffdc;
    ExceptionList = &pvStack_c;
    meth_0x50c510(this,(int *)(this->cls_0x50db20).mbr_0x8,piVar2,&param_2);
  }
  else {
    ExceptionList = &pvStack_c;
    if (dVar1 != 0) {
      piVar2 = (int *)(this->cls_0x50db20).mbr_0x8;
      ExceptionList = &pvStack_c;
      if (param_1 < (int *)((int)((int)piVar2 - dVar1) / 0xc)) {
        iVar3 = (int)param_1 * 0xc;
        ExceptionList = &pvStack_c;
        param_1 = (int *)&stack0xffffffe0;
        meth_0x50c4c0(this,&param_1,(int *)((this->cls_0x50db20).mbr_0x4 + iVar3),piVar2);
      }
    }
  }
  if (param_3 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *param_3;
  }
  FUN_0049a8b0(&param_2,&param_1,piVar2,(int *)param_3);
                    /* WARNING: Subroutine does not return */
  _free(param_3);
}



void __thiscall cls_0x49c610::meth_0x50c9a0(cls_0x49c610 *this,int *param_1)

{
  int **ppiVar1;
  undefined4 in_stack_ffffffe8;
  
  ppiVar1 = (int **)FUN_0050bae0();
  meth_0x50c870(this,param_1,in_stack_ffffffe8,ppiVar1);
  return;
}



void __thiscall cls_0x49c610::meth_0x50c9e0(cls_0x49c610 *this,int *param_1)

{
  meth_0x50c9a0(this,param_1);
  (this->cls_0x50db20).mbr_0x10 = (dword)param_1;
  return;
}



void __thiscall
cls_0x49c610::meth_0x516580(cls_0x49c610 *this,int **param_1,int *param_2,int *param_3)

{
  Interface *pIVar1;
  
  if (param_2 != param_3) {
    pIVar1 = FUN_005160e0((Interface *)param_3,(Interface *)(this->cls_0x50db20).mbr_0x8,
                          (Interface *)param_2);
    FUN_00515c50(pIVar1,(Interface *)(this->cls_0x50db20).mbr_0x8);
    (this->cls_0x50db20).mbr_0x8 = (dword)pIVar1;
  }
  *param_1 = param_2;
  return;
}



void __thiscall
cls_0x49c610::meth_0x518f10(cls_0x49c610 *this,int *param_1,int *param_2,int *param_3)

{
  cls_0x515f80 *pcVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  dword dVar7;
  Interface *pIVar8;
  cls_0x515f80 local_28;
  undefined *local_1c;
  cls_0x49c610 *local_18;
  undefined *local_14;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_00635f98;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  ExceptionList = &pvStack_10;
  local_18 = this;
  cls_0x515f80::cls_0x515f80(&local_28,(int)param_3);
  piVar3 = param_2;
  piVar4 = param_1;
  dVar7 = (this->cls_0x50db20).mbr_0x4;
  uVar5 = 0;
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  if (dVar7 != 0) {
    uVar5 = (int)((this->cls_0x50db20).mbr_0xc - dVar7) / 0xc;
  }
  if (param_2 != (int *)0x0) {
    if (dVar7 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)((this->cls_0x50db20).mbr_0x8 - dVar7) / 0xc;
    }
    if ((int *)(0x15555555U - iVar6) < param_2) {
      FUN_00514fb0();
    }
    else {
      if (dVar7 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = (int)((this->cls_0x50db20).mbr_0x8 - dVar7) / 0xc;
      }
      if (uVar5 < (uint)(iVar6 + (int)param_2)) {
        if (0x15555555 - (uVar5 >> 1) < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (dVar7 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = (int)((this->cls_0x50db20).mbr_0x8 - dVar7) / 0xc;
        }
        if (uVar5 < (uint)(iVar6 + (int)param_2)) {
          iVar6 = meth_0x4e8f50(this);
          uVar5 = iVar6 + (int)piVar3;
        }
        param_2 = (int *)operator_new(uVar5 * 0xc);
        local_8._0_1_ = 1;
        param_3 = param_2;
        param_2 = (int *)FUN_005161e0((this->cls_0x50db20).mbr_0x4,(int)param_1,
                                      (cls_0x515f80 *)param_2);
        FUN_005163f0((cls_0x515f80 *)param_2,(int)piVar3,(int)&local_28);
        param_2 = param_2 + (int)piVar3 * 3;
        FUN_005161e0((int)param_1,(this->cls_0x50db20).mbr_0x8,(cls_0x515f80 *)param_2);
        pIVar8 = (Interface *)(this->cls_0x50db20).mbr_0x4;
        if (pIVar8 == (Interface *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = (int)((this->cls_0x50db20).mbr_0x8 - (int)pIVar8) / 0xc;
        }
        if (pIVar8 != (Interface *)0x0) {
          FUN_00515c50(pIVar8,(Interface *)(this->cls_0x50db20).mbr_0x8);
                    /* WARNING: Subroutine does not return */
          _free((void *)(this->cls_0x50db20).mbr_0x4);
        }
        (this->cls_0x50db20).mbr_0xc = (dword)(param_3 + uVar5 * 3);
        (this->cls_0x50db20).mbr_0x8 = (dword)(param_3 + ((int)piVar3 + iVar6) * 3);
        (this->cls_0x50db20).mbr_0x4 = (dword)param_3;
      }
      else {
        param_3 = (int *)(this->cls_0x50db20).mbr_0x8;
        if ((int *)(((int)param_3 - (int)param_1) / 0xc) < param_2) {
          local_1c = &stack0xffffffc0;
          piVar2 = param_3;
          param_3 = (int *)((int)param_2 * 0xc);
          FUN_005165d0((int)param_1,(int)piVar2,
                       (cls_0x515f80 *)((int)(int *)((int)param_2 * 0xc) + (int)param_1));
          pcVar1 = (cls_0x515f80 *)(this->cls_0x50db20).mbr_0x8;
          local_8._0_1_ = 3;
          FUN_005169f0(pcVar1,(int)piVar3 - ((int)pcVar1 - (int)piVar4) / 0xc,(int)&local_28);
          dVar7 = (this->cls_0x50db20).mbr_0x8 + (int)param_3;
          (this->cls_0x50db20).mbr_0x8 = dVar7;
          pIVar8 = (Interface *)(dVar7 - (int)param_3);
          local_8._0_1_ = 0;
          local_8._1_3_ = 0;
        }
        else {
          param_1 = param_3 + (int)param_2 * -3;
          dVar7 = FUN_005165d0((int)param_1,(int)param_3,(cls_0x515f80 *)param_3);
          piVar2 = param_1;
          (this->cls_0x50db20).mbr_0x8 = dVar7;
          param_2 = (int *)&stack0xffffffc4;
          param_1 = (int *)&stack0xffffffc0;
          FUN_005163b0((Interface **)&param_1,(Interface *)piVar4,(Interface *)piVar2,
                       (Interface *)param_3);
          pIVar8 = (Interface *)(piVar4 + (int)piVar3 * 3);
        }
        param_1 = (int *)&stack0xffffffc0;
        FUN_00516340((Interface *)piVar4,pIVar8,(Interface *)&local_28);
      }
    }
  }
  if ((int **)local_28.mbr_0x4 == (int **)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *(int **)local_28.mbr_0x4;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&local_28,&param_1,piVar4,(int *)local_28.mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)local_28.mbr_0x4);
}



void __thiscall
cls_0x49c610::meth_0x519ca0(cls_0x49c610 *this,int *param_1,undefined4 param_2,int **param_3)

{
  dword dVar1;
  int *piVar2;
  int iVar3;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00636038;
  pvStack_c = ExceptionList;
  dVar1 = (this->cls_0x50db20).mbr_0x4;
  local_4 = 0;
  if (dVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)((int)((this->cls_0x50db20).mbr_0x8 - dVar1) / 0xc);
  }
  if (piVar2 < param_1) {
    if (dVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)((this->cls_0x50db20).mbr_0x8 - dVar1) / 0xc;
    }
    piVar2 = (int *)((int)param_1 - iVar3);
    param_1 = (int *)&stack0xffffffdc;
    ExceptionList = &pvStack_c;
    meth_0x518f10(this,(int *)(this->cls_0x50db20).mbr_0x8,piVar2,&param_2);
  }
  else {
    ExceptionList = &pvStack_c;
    if (dVar1 != 0) {
      piVar2 = (int *)(this->cls_0x50db20).mbr_0x8;
      ExceptionList = &pvStack_c;
      if (param_1 < (int *)((int)((int)piVar2 - dVar1) / 0xc)) {
        iVar3 = (int)param_1 * 0xc;
        ExceptionList = &pvStack_c;
        param_1 = (int *)&stack0xffffffe0;
        meth_0x516580(this,&param_1,(int *)((this->cls_0x50db20).mbr_0x4 + iVar3),piVar2);
      }
    }
  }
  if (param_3 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *param_3;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&param_2,&param_1,piVar2,(int *)param_3);
                    /* WARNING: Subroutine does not return */
  _free(param_3);
}



undefined4 * __thiscall
cls_0x49c610::meth_0x571550
          (cls_0x49c610 *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *_Memory;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  dword dVar6;
  undefined4 *puVar7;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined *local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puVar7 = param_2;
  puVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00638cf0;
  local_10 = ExceptionList;
  local_1c = param_3[1];
  local_20 = *param_3;
  dVar6 = (this->cls_0x50db20).mbr_0x4;
  local_18 = (undefined4 *)param_3[2];
  local_14 = &stack0xffffffd4;
  if (dVar6 == 0) {
    uVar4 = 0;
    puVar3 = local_18;
  }
  else {
    iVar5 = (this->cls_0x50db20).mbr_0xc - dVar6;
    puVar3 = (undefined4 *)(iVar5 * 0x2aaaaaab);
    uVar4 = iVar5 / 0xc;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (dVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)((this->cls_0x50db20).mbr_0x8 - dVar6) / 0xc;
    }
    if ((undefined4 *)(0x15555555U - iVar5) < param_2) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffffd4;
      puVar1 = (undefined4 *)FUN_00570560();
      ExceptionList = local_10;
      return puVar1;
    }
    if (dVar6 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)((this->cls_0x50db20).mbr_0x8 - dVar6) / 0xc;
    }
    if (uVar4 < (uint)(iVar5 + (int)param_2)) {
      if (0x15555555 - (uVar4 >> 1) < uVar4) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar4 + (uVar4 >> 1);
      }
      if (dVar6 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)((this->cls_0x50db20).mbr_0x8 - dVar6) / 0xc;
      }
      ExceptionList = &local_10;
      local_14 = &stack0xffffffd4;
      if (uVar4 < (uint)(iVar5 + (int)param_2)) {
        ExceptionList = &local_10;
        local_14 = &stack0xffffffd4;
        iVar5 = meth_0x4e8f50(this);
        uVar4 = iVar5 + (int)puVar7;
      }
      param_3 = (undefined4 *)operator_new(uVar4 * 0xc);
      local_8 = 0;
      param_2 = (undefined4 *)
                FUN_0056d7b0((undefined4 *)(this->cls_0x50db20).mbr_0x4,param_1,param_3);
      FUN_0056e360(param_2,(int)puVar7,&local_20);
      FUN_0056d7b0(param_1,(undefined4 *)(this->cls_0x50db20).mbr_0x8,param_2 + (int)puVar7 * 3);
      _Memory = (void *)(this->cls_0x50db20).mbr_0x4;
      if (_Memory == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)((this->cls_0x50db20).mbr_0x8 - (int)_Memory) / 0xc;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      (this->cls_0x50db20).mbr_0xc = (dword)(param_3 + uVar4 * 3);
      (this->cls_0x50db20).mbr_0x8 = (dword)(param_3 + ((int)puVar7 + iVar5) * 3);
      (this->cls_0x50db20).mbr_0x4 = (dword)param_3;
      ExceptionList = local_10;
      return param_3;
    }
    param_3 = (undefined4 *)(this->cls_0x50db20).mbr_0x8;
    if ((undefined4 *)(((int)param_3 - (int)param_1) / 0xc) < param_2) {
      puVar2 = (undefined4 *)((int)(undefined4 *)((int)param_2 * 0xc) + (int)param_1);
      ExceptionList = &local_10;
      param_1 = (undefined4 *)((int)param_2 * 0xc);
      puVar3 = param_3;
      param_3 = (undefined4 *)&stack0xffffffc8;
      local_14 = &stack0xffffffd4;
      FUN_0056efd0(puVar1,puVar3,puVar2);
      puVar3 = (undefined4 *)(this->cls_0x50db20).mbr_0x8;
      local_8 = 2;
      FUN_0056f480(puVar3,(int)puVar7 - ((int)puVar3 - (int)puVar1) / 0xc,&local_20);
      dVar6 = (this->cls_0x50db20).mbr_0x8 + (int)param_1;
      (this->cls_0x50db20).mbr_0x8 = dVar6;
      puVar7 = (undefined4 *)(dVar6 - (int)param_1);
    }
    else {
      param_1 = param_3 + (int)param_2 * -3;
      ExceptionList = &local_10;
      dVar6 = FUN_0056efd0(param_1,param_3,param_3);
      puVar2 = param_3;
      puVar3 = param_1;
      (this->cls_0x50db20).mbr_0x8 = dVar6;
      param_2 = (undefined4 *)&stack0xffffffd0;
      param_3 = (undefined4 *)&stack0xffffffcc;
      param_1 = (undefined4 *)&stack0xffffffc8;
      FUN_0056e320(&param_1,(int)puVar1,(int)puVar3,puVar2);
      puVar7 = puVar1 + (int)puVar7 * 3;
    }
    param_1 = (undefined4 *)&stack0xffffffc8;
    puVar3 = (undefined4 *)FUN_0056e2f0(puVar1,puVar7,&local_20);
  }
  ExceptionList = local_10;
  return puVar3;
}



void __thiscall
cls_0x49c610::meth_0x572650(cls_0x49c610 *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  dword dVar1;
  int iVar2;
  
  dVar1 = (this->cls_0x50db20).mbr_0x4;
  if (dVar1 != 0) {
    if ((int)((this->cls_0x50db20).mbr_0x8 - dVar1) / 0xc != 0) {
      iVar2 = (int)((int)param_2 - dVar1) / 0xc;
      goto LAB_00572695;
    }
  }
  iVar2 = 0;
LAB_00572695:
  meth_0x571550(this,param_2,(undefined4 *)0x1,param_3);
  *param_1 = (this->cls_0x50db20).mbr_0x4 + iVar2 * 0xc;
  return;
}



void __thiscall cls_0x49c610::meth_0x574820(cls_0x49c610 *this,undefined4 *param_1)

{
  dword dVar1;
  undefined4 *puVar2;
  
  dVar1 = (this->cls_0x50db20).mbr_0x4;
  if ((dVar1 != 0) &&
     ((uint)((int)((this->cls_0x50db20).mbr_0x8 - dVar1) / 0xc) <
      (uint)((int)((this->cls_0x50db20).mbr_0xc - dVar1) / 0xc))) {
    puVar2 = (undefined4 *)(this->cls_0x50db20).mbr_0x8;
    FUN_0056e360(puVar2,1,param_1);
    (this->cls_0x50db20).mbr_0x8 = (dword)(puVar2 + 3);
    return;
  }
  meth_0x572650(this,(int *)&param_1,(undefined4 *)(this->cls_0x50db20).mbr_0x8,param_1);
  return;
}



void __thiscall
cls_0x49c610::meth_0x579660(cls_0x49c610 *this,int **param_1,int *param_2,int *param_3)

{
  Interface *pIVar1;
  
  if (param_2 != param_3) {
    pIVar1 = FUN_005756c0((Interface *)param_3,(Interface *)(this->cls_0x50db20).mbr_0x8,
                          (Interface *)param_2);
    FUN_00515c50(pIVar1,(Interface *)(this->cls_0x50db20).mbr_0x8);
    (this->cls_0x50db20).mbr_0x8 = (dword)pIVar1;
  }
  *param_1 = param_2;
  return;
}



void __thiscall
cls_0x49c610::meth_0x5796e0(cls_0x49c610 *this,int **param_1,int *param_2,int *param_3)

{
  Interface *pIVar1;
  
  if (param_2 != param_3) {
    pIVar1 = FUN_00575850((Interface *)param_3,(Interface *)(this->cls_0x50db20).mbr_0x8,
                          (Interface *)param_2);
    FUN_00515c50(pIVar1,(Interface *)(this->cls_0x50db20).mbr_0x8);
    (this->cls_0x50db20).mbr_0x8 = (dword)pIVar1;
  }
  *param_1 = param_2;
  return;
}



void __thiscall
cls_0x49c610::meth_0x579f60(cls_0x49c610 *this,int *param_1,int *param_2,int *param_3)

{
  cls_0x574d90 *pcVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  dword dVar7;
  Interface *pIVar8;
  cls_0x574d90 local_28;
  undefined *local_1c;
  cls_0x49c610 *local_18;
  undefined *local_14;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_00639238;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  ExceptionList = &pvStack_10;
  local_18 = this;
  cls_0x574d90::cls_0x574d90(&local_28,(int)param_3);
  piVar3 = param_2;
  piVar4 = param_1;
  dVar7 = (this->cls_0x50db20).mbr_0x4;
  uVar5 = 0;
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  if (dVar7 != 0) {
    uVar5 = (int)((this->cls_0x50db20).mbr_0xc - dVar7) / 0xc;
  }
  if (param_2 != (int *)0x0) {
    if (dVar7 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)((this->cls_0x50db20).mbr_0x8 - dVar7) / 0xc;
    }
    if ((int *)(0x15555555U - iVar6) < param_2) {
      FUN_00570560();
    }
    else {
      if (dVar7 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = (int)((this->cls_0x50db20).mbr_0x8 - dVar7) / 0xc;
      }
      if (uVar5 < (uint)(iVar6 + (int)param_2)) {
        if (0x15555555 - (uVar5 >> 1) < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (dVar7 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = (int)((this->cls_0x50db20).mbr_0x8 - dVar7) / 0xc;
        }
        if (uVar5 < (uint)(iVar6 + (int)param_2)) {
          iVar6 = meth_0x4e8f50(this);
          uVar5 = iVar6 + (int)piVar3;
        }
        param_2 = (int *)operator_new(uVar5 * 0xc);
        local_8._0_1_ = 1;
        param_3 = param_2;
        param_2 = (int *)FUN_005757c0((this->cls_0x50db20).mbr_0x4,(int)param_1,
                                      (cls_0x574d90 *)param_2);
        FUN_00577090((cls_0x574d90 *)param_2,(int)piVar3,(int)&local_28);
        param_2 = param_2 + (int)piVar3 * 3;
        FUN_005757c0((int)param_1,(this->cls_0x50db20).mbr_0x8,(cls_0x574d90 *)param_2);
        pIVar8 = (Interface *)(this->cls_0x50db20).mbr_0x4;
        if (pIVar8 == (Interface *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = (int)((this->cls_0x50db20).mbr_0x8 - (int)pIVar8) / 0xc;
        }
        if (pIVar8 != (Interface *)0x0) {
          FUN_00515c50(pIVar8,(Interface *)(this->cls_0x50db20).mbr_0x8);
                    /* WARNING: Subroutine does not return */
          _free((void *)(this->cls_0x50db20).mbr_0x4);
        }
        (this->cls_0x50db20).mbr_0xc = (dword)(param_3 + uVar5 * 3);
        (this->cls_0x50db20).mbr_0x8 = (dword)(param_3 + ((int)piVar3 + iVar6) * 3);
        (this->cls_0x50db20).mbr_0x4 = (dword)param_3;
      }
      else {
        param_3 = (int *)(this->cls_0x50db20).mbr_0x8;
        if ((int *)(((int)param_3 - (int)param_1) / 0xc) < param_2) {
          local_1c = &stack0xffffffc0;
          piVar2 = param_3;
          param_3 = (int *)((int)param_2 * 0xc);
          FUN_005796b0((int)param_1,(int)piVar2,
                       (cls_0x574d90 *)((int)(int *)((int)param_2 * 0xc) + (int)param_1));
          pcVar1 = (cls_0x574d90 *)(this->cls_0x50db20).mbr_0x8;
          local_8._0_1_ = 3;
          FUN_00579c90(pcVar1,(int)piVar3 - ((int)pcVar1 - (int)piVar4) / 0xc,(int)&local_28);
          dVar7 = (this->cls_0x50db20).mbr_0x8 + (int)param_3;
          (this->cls_0x50db20).mbr_0x8 = dVar7;
          pIVar8 = (Interface *)(dVar7 - (int)param_3);
          local_8._0_1_ = 0;
          local_8._1_3_ = 0;
        }
        else {
          param_1 = param_3 + (int)param_2 * -3;
          dVar7 = FUN_005796b0((int)param_1,(int)param_3,(cls_0x574d90 *)param_3);
          piVar2 = param_1;
          (this->cls_0x50db20).mbr_0x8 = dVar7;
          param_2 = (int *)&stack0xffffffc4;
          param_1 = (int *)&stack0xffffffc0;
          FUN_00577050((Interface **)&param_1,(Interface *)piVar4,(Interface *)piVar2,
                       (Interface *)param_3);
          pIVar8 = (Interface *)(piVar4 + (int)piVar3 * 3);
        }
        param_1 = (int *)&stack0xffffffc0;
        FUN_00576fe0((Interface *)piVar4,pIVar8,(Interface *)&local_28);
      }
    }
  }
  if ((int **)local_28.mbr_0x4 == (int **)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *(int **)local_28.mbr_0x4;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&local_28,&param_1,piVar4,(int *)local_28.mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)local_28.mbr_0x4);
}



void __thiscall
cls_0x49c610::meth_0x57a2c0(cls_0x49c610 *this,int *param_1,int *param_2,int *param_3)

{
  cls_0x574e20 *pcVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  dword dVar7;
  Interface *pIVar8;
  cls_0x574e20 local_28;
  undefined *local_1c;
  cls_0x49c610 *local_18;
  undefined *local_14;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8._0_1_ = 0xff;
  local_8._1_3_ = 0xffffff;
  puStack_c = &LAB_00639258;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  ExceptionList = &pvStack_10;
  local_18 = this;
  cls_0x574e20::cls_0x574e20(&local_28,(int)param_3);
  piVar3 = param_2;
  piVar4 = param_1;
  dVar7 = (this->cls_0x50db20).mbr_0x4;
  uVar5 = 0;
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  if (dVar7 != 0) {
    uVar5 = (int)((this->cls_0x50db20).mbr_0xc - dVar7) / 0xc;
  }
  if (param_2 != (int *)0x0) {
    if (dVar7 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)((this->cls_0x50db20).mbr_0x8 - dVar7) / 0xc;
    }
    if ((int *)(0x15555555U - iVar6) < param_2) {
      FUN_00570560();
    }
    else {
      if (dVar7 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = (int)((this->cls_0x50db20).mbr_0x8 - dVar7) / 0xc;
      }
      if (uVar5 < (uint)(iVar6 + (int)param_2)) {
        if (0x15555555 - (uVar5 >> 1) < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (dVar7 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = (int)((this->cls_0x50db20).mbr_0x8 - dVar7) / 0xc;
        }
        if (uVar5 < (uint)(iVar6 + (int)param_2)) {
          iVar6 = meth_0x4e8f50(this);
          uVar5 = iVar6 + (int)piVar3;
        }
        param_2 = (int *)operator_new(uVar5 * 0xc);
        local_8._0_1_ = 1;
        param_3 = param_2;
        param_2 = (int *)FUN_00575950((this->cls_0x50db20).mbr_0x4,(int)param_1,
                                      (cls_0x574e20 *)param_2);
        FUN_005771d0((cls_0x574e20 *)param_2,(int)piVar3,(int)&local_28);
        param_2 = param_2 + (int)piVar3 * 3;
        FUN_00575950((int)param_1,(this->cls_0x50db20).mbr_0x8,(cls_0x574e20 *)param_2);
        pIVar8 = (Interface *)(this->cls_0x50db20).mbr_0x4;
        if (pIVar8 == (Interface *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = (int)((this->cls_0x50db20).mbr_0x8 - (int)pIVar8) / 0xc;
        }
        if (pIVar8 != (Interface *)0x0) {
          FUN_00515c50(pIVar8,(Interface *)(this->cls_0x50db20).mbr_0x8);
                    /* WARNING: Subroutine does not return */
          _free((void *)(this->cls_0x50db20).mbr_0x4);
        }
        (this->cls_0x50db20).mbr_0xc = (dword)(param_3 + uVar5 * 3);
        (this->cls_0x50db20).mbr_0x8 = (dword)(param_3 + ((int)piVar3 + iVar6) * 3);
        (this->cls_0x50db20).mbr_0x4 = (dword)param_3;
      }
      else {
        param_3 = (int *)(this->cls_0x50db20).mbr_0x8;
        if ((int *)(((int)param_3 - (int)param_1) / 0xc) < param_2) {
          local_1c = &stack0xffffffc0;
          piVar2 = param_3;
          param_3 = (int *)((int)param_2 * 0xc);
          FUN_00579730((int)param_1,(int)piVar2,
                       (cls_0x574e20 *)((int)(int *)((int)param_2 * 0xc) + (int)param_1));
          pcVar1 = (cls_0x574e20 *)(this->cls_0x50db20).mbr_0x8;
          local_8._0_1_ = 3;
          FUN_00579cc0(pcVar1,(int)piVar3 - ((int)pcVar1 - (int)piVar4) / 0xc,(int)&local_28);
          dVar7 = (this->cls_0x50db20).mbr_0x8 + (int)param_3;
          (this->cls_0x50db20).mbr_0x8 = dVar7;
          pIVar8 = (Interface *)(dVar7 - (int)param_3);
          local_8._0_1_ = 0;
          local_8._1_3_ = 0;
        }
        else {
          param_1 = param_3 + (int)param_2 * -3;
          dVar7 = FUN_00579730((int)param_1,(int)param_3,(cls_0x574e20 *)param_3);
          piVar2 = param_1;
          (this->cls_0x50db20).mbr_0x8 = dVar7;
          param_2 = (int *)&stack0xffffffc4;
          param_1 = (int *)&stack0xffffffc0;
          FUN_00577190((Interface **)&param_1,(Interface *)piVar4,(Interface *)piVar2,
                       (Interface *)param_3);
          pIVar8 = (Interface *)(piVar4 + (int)piVar3 * 3);
        }
        param_1 = (int *)&stack0xffffffc0;
        FUN_00577120((Interface *)piVar4,pIVar8,(Interface *)&local_28);
      }
    }
  }
  if ((int **)local_28.mbr_0x4 == (int **)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *(int **)local_28.mbr_0x4;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&local_28,&param_1,piVar4,(int *)local_28.mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)local_28.mbr_0x4);
}



void __thiscall
cls_0x49c610::meth_0x57a680(cls_0x49c610 *this,int *param_1,undefined4 param_2,int **param_3)

{
  dword dVar1;
  int *piVar2;
  int iVar3;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00639278;
  pvStack_c = ExceptionList;
  dVar1 = (this->cls_0x50db20).mbr_0x4;
  local_4 = 0;
  if (dVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)((int)((this->cls_0x50db20).mbr_0x8 - dVar1) / 0xc);
  }
  if (piVar2 < param_1) {
    if (dVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)((this->cls_0x50db20).mbr_0x8 - dVar1) / 0xc;
    }
    piVar2 = (int *)((int)param_1 - iVar3);
    param_1 = (int *)&stack0xffffffdc;
    ExceptionList = &pvStack_c;
    meth_0x579f60(this,(int *)(this->cls_0x50db20).mbr_0x8,piVar2,&param_2);
  }
  else {
    ExceptionList = &pvStack_c;
    if (dVar1 != 0) {
      piVar2 = (int *)(this->cls_0x50db20).mbr_0x8;
      ExceptionList = &pvStack_c;
      if (param_1 < (int *)((int)((int)piVar2 - dVar1) / 0xc)) {
        iVar3 = (int)param_1 * 0xc;
        ExceptionList = &pvStack_c;
        param_1 = (int *)&stack0xffffffe0;
        meth_0x579660(this,&param_1,(int *)((this->cls_0x50db20).mbr_0x4 + iVar3),piVar2);
      }
    }
  }
  if (param_3 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *param_3;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&param_2,&param_1,piVar2,(int *)param_3);
                    /* WARNING: Subroutine does not return */
  _free(param_3);
}



void __thiscall
cls_0x49c610::meth_0x57a790(cls_0x49c610 *this,int *param_1,undefined4 param_2,int **param_3)

{
  dword dVar1;
  int *piVar2;
  int iVar3;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00639278;
  pvStack_c = ExceptionList;
  dVar1 = (this->cls_0x50db20).mbr_0x4;
  local_4 = 0;
  if (dVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)((int)((this->cls_0x50db20).mbr_0x8 - dVar1) / 0xc);
  }
  if (piVar2 < param_1) {
    if (dVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)((this->cls_0x50db20).mbr_0x8 - dVar1) / 0xc;
    }
    piVar2 = (int *)((int)param_1 - iVar3);
    param_1 = (int *)&stack0xffffffdc;
    ExceptionList = &pvStack_c;
    meth_0x57a2c0(this,(int *)(this->cls_0x50db20).mbr_0x8,piVar2,&param_2);
  }
  else {
    ExceptionList = &pvStack_c;
    if (dVar1 != 0) {
      piVar2 = (int *)(this->cls_0x50db20).mbr_0x8;
      ExceptionList = &pvStack_c;
      if (param_1 < (int *)((int)((int)piVar2 - dVar1) / 0xc)) {
        iVar3 = (int)param_1 * 0xc;
        ExceptionList = &pvStack_c;
        param_1 = (int *)&stack0xffffffe0;
        meth_0x5796e0(this,&param_1,(int *)((this->cls_0x50db20).mbr_0x4 + iVar3),piVar2);
      }
    }
  }
  if (param_3 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *param_3;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&param_2,&param_1,piVar2,(int *)param_3);
                    /* WARNING: Subroutine does not return */
  _free(param_3);
}


