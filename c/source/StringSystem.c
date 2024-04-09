#include "../include/StringSystem.h"

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall SS::StringSystem::virt_meth_0x4c5a30(StringSystem *this,int param_1,void *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint unaff_retaddr;
  char *pcVar4;
  char local_2004 [8192];
  uint local_4;
  
  pcVar3 = local_2004;
  pcVar4 = local_2004;
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  if (param_1 != 0) {
    uVar2 = FUN_004c5900(this,param_1 - 1,local_2004);
    if ((char)uVar2 == '\0') {
      pcVar4 = "";
      do {
        pcVar3 = pcVar4;
        pcVar4 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3 = pcVar3 + -0x64d7d8;
      pcVar4 = "";
    }
    else {
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      pcVar3 = pcVar3 + -(int)(local_2004 + 1);
    }
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)param_2,pcVar4,(uint)pcVar3);
  }
  FUN_00616e15(local_4 ^ unaff_retaddr);
  return;
}



StringSystem * __thiscall SS::StringSystem::~StringSystem(StringSystem *this)

{
  cls_0x40a220 *pcVar1;
  dword *pdVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  StringSystem *pSVar7;
  void *local_c;
  undefined *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00632ec7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &StringSystem__vftable_670ec8_00670ec8;
  local_4 = 2;
  if ((void *)this->mbr_0x8 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x8);
  }
  pcVar1 = &this->cls_0x40a220;
  piVar5 = std::basic_filebuf<char,_struct_std::char_traits<char>_>::meth_0x497930
                     ((basic_filebuf<char,_struct_std::char_traits<char>_> *)
                      &(this->cls_0x40a220).cls_0x496bd0.mbr_0x8);
  if (piVar5 == (int *)0x0) {
    iVar3 = *(int *)((pcVar1->cls_0x496bd0).mbr_0x0 + 4);
    uVar4 = *(uint *)((int)&(pcVar1->cls_0x496bd0).mbr_0x4 + iVar3);
    uVar6 = uVar4 | 2;
    if (*(int *)(&(pcVar1->cls_0x496bd0).field_0x28 + iVar3) == 0) {
      uVar6 = uVar4 | 6;
    }
    std::ios_base::clear((ios_base *)((int)&(pcVar1->cls_0x496bd0).mbr_0x0 + iVar3),uVar6,false);
  }
  if ((void *)this->mbr_0xac != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xac);
  }
  pcVar1 = &this->cls_0x40a220;
  piVar5 = std::basic_filebuf<char,_struct_std::char_traits<char>_>::meth_0x497930
                     ((basic_filebuf<char,_struct_std::char_traits<char>_> *)
                      &(this->cls_0x40a220).cls_0x496bd0.mbr_0x8);
  if (piVar5 == (int *)0x0) {
    iVar3 = *(int *)((pcVar1->cls_0x496bd0).mbr_0x0 + 4);
    uVar4 = *(uint *)((int)&(pcVar1->cls_0x496bd0).mbr_0x4 + iVar3);
    uVar6 = uVar4 | 2;
    if (*(int *)(&(pcVar1->cls_0x496bd0).field_0x28 + iVar3) == 0) {
      uVar6 = uVar4 | 6;
    }
    std::ios_base::clear((ios_base *)((int)&(pcVar1->cls_0x496bd0).mbr_0x0 + iVar3),uVar6,false);
  }
  if (this->mbr_0x160 != 0) {
    FUN_004310a0(this->mbr_0x160,this->mbr_0x164);
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x160);
  }
  this->mbr_0x160 = 0;
  this->mbr_0x164 = 0;
  this->mbr_0x168 = 0;
  pdVar2 = &(this->cls_0x40a220).cls_0x4d8d70.mbr_0x8;
  local_4 = local_4 & 0xffffff00;
  std::basic_ios<char,_struct_std::char_traits<char>_>::meth_0x499600
            ((basic_ios<char,_struct_std::char_traits<char>_> *)pdVar2);
  *pdVar2 = (dword)&basic_ios<char,_struct_std::char_traits<char>_>__vftable_669de8_00669de8;
  std::ios_base::~ios_base((ios_base *)pdVar2);
  pdVar2 = &(this->cls_0x40a220).cls_0x4d8d70.mbr_0x8;
  local_4 = 0xffffffff;
  std::basic_ios<char,_struct_std::char_traits<char>_>::meth_0x499600
            ((basic_ios<char,_struct_std::char_traits<char>_> *)pdVar2);
  *pdVar2 = (dword)&basic_ios<char,_struct_std::char_traits<char>_>__vftable_669de8_00669de8;
  pSVar7 = (StringSystem *)std::ios_base::~ios_base((ios_base *)pdVar2);
  ExceptionList = local_c;
  return pSVar7;
}



StringSystem * __thiscall SS::StringSystem::StringSystem(StringSystem *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632ef9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &StringSystem__vftable_670ec8_00670ec8;
  cls_0x40a220::cls_0x40a220(&this->cls_0x40a220,1);
  local_4 = 0;
  cls_0x40a220::cls_0x40a220(&this->cls_0x40a220,1);
  this->mbr_0x160 = 0;
  this->mbr_0x164 = 0;
  this->mbr_0x168 = 0;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0xac = 0;
  this->mbr_0xb0 = 0;
  this->mbr_0x150 = 0;
  this->mbr_0x154 = 0;
  this->mbr_0x158 = 0;
  ExceptionList = local_c;
  return this;
}



void __thiscall
SS::StringSystem::virt_meth_0x4c5e30
          (StringSystem *this,undefined4 *param_1,undefined4 *param_2,char param_3,
          undefined4 *param_4)

{
  dword *pdVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  _String_base *p_Var8;
  uint unaff_retaddr;
  undefined local_48 [4];
  undefined *local_44;
  dword local_34;
  uint local_30;
  undefined auStack_2c [4];
  void *pvStack_28;
  uint uStack_14;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632f20;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_30 = 0xf;
  local_34 = 0;
  local_44 = (undefined *)((uint)local_44 & 0xffffff00);
  puVar3 = param_1;
  do {
    cVar2 = *(char *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  } while (cVar2 != '\0');
  ExceptionList = &pvStack_c;
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_48,(char *)param_1,(int)puVar3 - ((int)param_1 + 1));
  local_4 = 0;
  puVar4 = local_44;
  if (local_30 < 0x10) {
    puVar4 = local_48 + 4;
  }
  if (puVar4[local_34] != '\\') {
    ::cls_0x50db20::meth_0x425bd0((cls_0x50db20 *)local_48,1);
  }
  puVar5 = (undefined4 *)
           FUN_004df640((VFX_Parameter *)param_2,(undefined4 *)"Strings",(undefined4 *)&DAT_00670f88
                        ,0x670f90);
  puVar3 = puVar5;
  do {
    cVar2 = *(char *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  } while (cVar2 != '\0');
  cls_0x4d8d70::meth_0x4257d0((cls_0x4d8d70 *)local_48,puVar5,(int)puVar3 - ((int)puVar5 + 1));
  pdVar1 = &this->mbr_0xc;
  uVar6 = FUN_004c5d10((int)local_48,&this->cls_0x40a220,(void **)&this->mbr_0x8,(int *)pdVar1);
  if ((char)uVar6 == '\0') {
    this->mbr_0x8 = 0;
    *pdVar1 = 0;
    FUN_00497120((byte *)"StringSystem::Init - Couldn\'t open male string table %s\n");
  }
  param_1 = (undefined4 *)CONCAT31(param_1._1_3_,0x5c);
  uVar7 = cls_0x4d8d70::meth_0x458a20((cls_0x4d8d70 *)local_48,(char *)&param_1,0xffffffff,1);
  p_Var8 = (_String_base *)
           cls_0x4d8d70::meth_0x458ef0((cls_0x4d8d70 *)local_48,local_48 + 0x1c,0,uVar7 + 1);
  local_4._0_1_ = 1;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_48,p_Var8,0,0xffffffff);
  local_4 = (uint)local_4._1_3_ << 8;
  if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_28);
  }
  puVar3 = (undefined4 *)
           FUN_004df640((VFX_Parameter *)param_2,(undefined4 *)"Strings",(undefined4 *)"Female",
                        0x64d7d8);
  if (puVar3 == (undefined4 *)&DAT_0064d7d8) {
    this->mbr_0xac = 0;
    this->mbr_0xb0 = 0;
    FUN_00497120((byte *)"StringSystem::Init - No female string table\n");
  }
  else {
    puVar5 = puVar3;
    do {
      cVar2 = *(char *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    } while (cVar2 != '\0');
    cls_0x4d8d70::meth_0x4257d0((cls_0x4d8d70 *)local_48,puVar3,(int)puVar5 - ((int)puVar3 + 1));
    uVar6 = FUN_004c5d10((int)local_48,&this->cls_0x40a220,(void **)&this->mbr_0xac,
                         (int *)&this->mbr_0xb0);
    if ((char)uVar6 == '\0') {
      this->mbr_0xac = 0;
      this->mbr_0xb0 = 0;
      FUN_00497120((byte *)"StringSystem::Init - Couldn\'t open female string table %s\n");
    }
  }
  this->mbr_0x158 = (dword)&this->cls_0x40a220;
  this->mbr_0x4 = 0;
  this->mbr_0x150 = this->mbr_0x8;
  this->mbr_0x154 = *pdVar1;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    _free(local_44);
  }
  ExceptionList = pvStack_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}


#include "../include/StringSystem.h"
