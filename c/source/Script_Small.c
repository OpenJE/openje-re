#include "../include/Script_Small.h"

void __thiscall Script_Small::virt_meth_0x5a58c0(Script_Small *this,char *param_1,int **param_2)

{
  byte bVar1;
  char cVar2;
  dword dVar3;
  cls_0x50db20 *pcVar4;
  bool bVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  char *pcVar9;
  int unaff_EDI;
  char *pcVar10;
  uint unaff_retaddr;
  int local_118;
  cls_0x50db20 *pcStack_114;
  int iStack_110;
  cls_0x50db20 *pcStack_10c;
  byte abStack_108 [260];
  uint local_4;
  
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  if (this->mbr_0xd0 == 0) goto LAB_005a5a6e;
  local_118 = 0;
  if (this->mbr_0x24 == 0) {
LAB_005a5931:
    if (local_118 == 3) goto LAB_005a59c7;
    bVar5 = cls_0x5529e0::meth_0x5529e0(*(cls_0x5529e0 **)(DAT_0070bd90 + 0x18),this->mbr_0x4);
    if (bVar5) goto LAB_005a5a6e;
    iVar6 = 9;
    bVar5 = true;
    pcVar9 = "OnUpdate";
    pcVar10 = param_1;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar5 = *pcVar9 == *pcVar10;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    } while (bVar5);
    if (bVar5) {
      pcStack_114 = (cls_0x50db20 *)0x0;
      FUN_005cccc0((int)&this->mbr_0x26,0x45555146,&pcStack_114);
      pcVar4 = pcStack_114;
      if ((pcStack_114 == (cls_0x50db20 *)0x0) ||
         (iVar6 = ::cls_0x50db20::meth_0x430800(pcStack_114), iVar6 == 0)) {
        iVar6 = -(int)param_1;
        do {
          cVar2 = *param_1;
          param_1[(int)(abStack_108 + iVar6)] = cVar2;
          param_1 = param_1 + 1;
        } while (cVar2 != '\0');
      }
      else {
        dVar3 = pcVar4->mbr_0x4;
        if (*(uint *)(dVar3 + 0x18) < 0x10) {
          pbVar7 = (byte *)(dVar3 + 4);
        }
        else {
          pbVar7 = *(byte **)(dVar3 + 4);
        }
        pbVar8 = abStack_108;
        do {
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          *pbVar8 = bVar1;
          pbVar8 = pbVar8 + 1;
        } while (bVar1 != 0);
        FUN_00580770(pcStack_114,&pcStack_10c,(cls_0x50db20 *)pcVar4->mbr_0x4);
      }
    }
    else {
      iVar6 = -(int)param_1;
      do {
        cVar2 = *param_1;
        param_1[(int)(abStack_108 + iVar6)] = cVar2;
        param_1 = param_1 + 1;
      } while (cVar2 != '\0');
    }
    iVar6 = FUN_005cca80((int *)&this->mbr_0x26,abStack_108,&iStack_110);
    if (iVar6 != 0) goto LAB_005a5a6e;
  }
  else {
    iVar6 = FUN_005cccc0((int)&this->mbr_0x26,0x54415453,&local_118);
    if ((iVar6 != 0) || (local_118 == 2)) goto LAB_005a5a6e;
    if ((this->mbr_0x24 == 0) || (local_118 != 4)) goto LAB_005a5931;
    local_118 = 1;
    FUN_005ccd00((int)&this->mbr_0x26,0x54415453,1);
LAB_005a59c7:
    iStack_110 = -2;
  }
  FUN_005cce50((int *)&this->mbr_0x26,param_2,iStack_110,(int **)0x0,unaff_EDI);
LAB_005a5a6e:
  FUN_00616e15(local_4 ^ unaff_retaddr);
  return;
}



Script_Small * __thiscall Script_Small::Script_Small(Script_Small *this,dword param_1)

{
  dword dVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063af96;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x20 = 0xf;
  this->mbr_0x1c = 0;
  *(undefined *)&this->mbr_0xc = 0;
  this->mbr_0x4 = param_1;
  this->vftptr_0x0 = &Script_Small__vftable_6a539c_006a539c;
  this->mbr_0x24 = 0;
  this->mbr_0x25 = 0;
  this->mbr_0xc4 = 0;
  this->mbr_0xc8 = 0;
  this->mbr_0xcc = 0;
  this->mbr_0xd0 = 0;
  *(undefined *)&this->mbr_0xd4 = (undefined)param_1;
  local_4 = 1;
  dVar1 = FUN_0059ec40();
  this->mbr_0xd8 = dVar1;
  *(undefined *)(dVar1 + 0x2d) = 1;
  *(dword *)(this->mbr_0xd8 + 4) = this->mbr_0xd8;
  *(dword *)this->mbr_0xd8 = this->mbr_0xd8;
  *(dword *)(this->mbr_0xd8 + 8) = this->mbr_0xd8;
  this->mbr_0xdc = 0;
  ExceptionList = local_c;
  return this;
}



void __thiscall Script_Small::virt_meth_0x5a72f0(Script_Small *this)

{
  int iVar1;
  dword *pdVar2;
  cls_0x5a4550 *local_8;
  void *local_4;
  
  if (this->mbr_0xd0 == 0) {
    pdVar2 = &this->mbr_0x26;
    for (iVar1 = 0x26; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pdVar2 = 0;
      pdVar2 = pdVar2 + 1;
    }
    return;
  }
  if ((this->mbr_0x24 != 0) || (this->mbr_0x25 != 0)) {
    FUN_005cccc0((int)&this->mbr_0x26,0x4c425446,&local_4);
  }
  if (this->mbr_0x24 != 0) {
    iVar1 = FUN_005cccc0((int)&this->mbr_0x26,0x50414d56,&local_8);
    if ((iVar1 != 0) && (local_8 != (cls_0x5a4550 *)0x0)) {
      cls_0x5a4550::meth_0x5a5d30(local_8);
                    /* WARNING: Subroutine does not return */
      _free(local_8);
    }
    iVar1 = FUN_005cccc0((int)&this->mbr_0x26,0x4b545356,&local_4);
    if ((iVar1 != 0) && (local_4 != (void *)0x0)) {
      thunk_FUN_005a5130((int)local_4);
                    /* WARNING: Subroutine does not return */
      _free(local_4);
    }
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0xd0);
}



Script_Small * __thiscall Script_Small::~Script_Small(Script_Small *this)

{
  int *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063afe4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &Script_Small__vftable_6a539c_006a539c;
  local_4 = 2;
  virt_meth_0x5a72f0(this);
  local_4 = CONCAT31(local_4._1_3_,1);
  cls_0x4d8d70::meth_0x52b540
            ((cls_0x4d8d70 *)&this->mbr_0xd4,&local_10,*(int ***)(int **)this->mbr_0xd8,
             (int **)this->mbr_0xd8);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0xd8);
}



undefined4 * __thiscall Script_Small::virt_meth_0x5a78e0(Script_Small *this,byte param_1)

{
  ~Script_Small(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}



void __cdecl Script_Small::Debugger(int *param_1)

{
  cls_0x558740 *this;
  cls_0x5a45b0 cVar1;
  cls_0x5a4550 *this_00;
  char cVar2;
  cls_0x4d8d70 *pcVar3;
  cls_0x5a5ff0 *pcVar4;
  void *pvVar5;
  cls_0x50db20 *pcVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  cls_0x5b6400 *extraout_ECX;
  cls_0x5b6400 *pcVar10;
  uint unaff_retaddr;
  dword in_stack_ffffff3c;
  void *in_stack_ffffff40;
  undefined4 *puVar11;
  cls_0x5a45b0 local_9c;
  cls_0x5a4550 *local_98;
  cls_0x5a4550 *local_94;
  cls_0x4d8d70 *local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined local_80 [28];
  undefined local_64 [84];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b0ea;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_94 = (cls_0x5a4550 *)0x0;
  local_98 = (cls_0x5a4550 *)0x0;
  if ((param_1[10] & 0x4000U) == 0) {
    switch(param_1[0xd]) {
    case 2:
      local_9c.mbr_0x0 = 0;
      ExceptionList = &local_c;
      FUN_005cccc0((int)param_1,0x464c534d,&local_9c);
      if ((cls_0x4d8d70 *)local_9c.mbr_0x0 ==
          *(cls_0x4d8d70 **)(*(int *)(DAT_0070bd90 + 0x18) + 0x70e8)) {
        local_84 = 0;
        FUN_005cccc0((int)param_1,0x54415453,&local_84);
        if (local_84 == 3) {
          local_8c = 0;
          FUN_005cccc0((int)param_1,0x454e494c,&local_8c);
          if (local_8c != param_1[0xb]) {
            local_84 = 2;
            FUN_005ccd00((int)param_1,0x54415453,2);
            local_8c = param_1[0xb];
            FUN_005ccd00((int)param_1,0x454e494c,local_8c);
            pcVar10 = *(cls_0x5b6400 **)(*(int *)(DAT_0070bd90 + 0x2c) + 0x94);
            if (pcVar10 != (cls_0x5b6400 *)0x0) {
              cls_0x5b6400::meth_0x5b6270(pcVar10,'\x01');
              pcVar10 = extraout_ECX;
            }
            FUN_005a6520(pcVar10,param_1,'\x01','\0');
          }
        }
      }
      break;
    case 3:
      ExceptionList = &local_c;
      iVar7 = FUN_005cccc0((int)param_1,0x4b545356,&local_98);
      if (iVar7 == 0) {
        uVar9 = param_1[0xf] & 0xff;
        if ((((uVar9 != 9) && (uVar9 != 10)) && (iVar7 = param_1[0xf] >> 8, iVar7 != 0)) &&
           (iVar7 != 2)) {
          DAT_0070c720 = (cls_0x4d8d70 *)(param_1[0xe] + param_1[5]);
          puVar11 = (undefined4 *)param_1[0x10];
          local_9c.mbr_0x0 = (dword)DAT_0070c720;
          pvVar5 = (void *)cls_0x5a4550::meth_0x5a6030(local_98,(int **)&local_9c);
          FUN_00401c70(pvVar5,puVar11);
          local_9c.mbr_0x0 = (dword)DAT_0070c720;
          iVar7 = cls_0x5a4550::meth_0x5a6030(local_98,(int **)&local_9c);
          local_9c.mbr_0x0 = (dword)DAT_0070c720;
          *(cls_0x4d8d70 **)(iVar7 + 0x1c) = DAT_0070c720;
          uVar9 = param_1[0xf];
          iVar7 = cls_0x5a4550::meth_0x5a6030(local_98,(int **)&local_9c);
          local_9c.mbr_0x0 = (dword)DAT_0070c720;
          *(uint *)(iVar7 + 0x20) = uVar9 & 0xff;
          iVar7 = param_1[0xf];
          iVar8 = cls_0x5a4550::meth_0x5a6030(local_98,(int **)&local_9c);
          local_9c.mbr_0x0 = (dword)DAT_0070c720;
          *(int *)(iVar8 + 0x24) = iVar7 >> 8;
          iVar7 = cls_0x5a4550::meth_0x5a6030(local_98,(int **)&local_9c);
          *(undefined4 *)(iVar7 + 0x28) = 0;
          local_9c.mbr_0x0 = (dword)DAT_0070c720;
          iVar7 = cls_0x5a4550::meth_0x5a6030(local_98,(int **)&local_9c);
          local_9c.mbr_0x0 = (dword)DAT_0070c720;
          *(undefined4 *)(iVar7 + 0x2c) = 0;
          iVar7 = cls_0x5a4550::meth_0x5a6030(local_98,(int **)&local_9c);
          local_9c.mbr_0x0 = (dword)DAT_0070c720;
          *(undefined4 *)(iVar7 + 0x30) = 0;
          pcVar6 = (cls_0x50db20 *)
                   cls_0x4d8d70::meth_0x401d20
                             ((cls_0x4d8d70 *)(local_64 + 0x38),(char *)param_1[0x10]);
          local_4 = 5;
          cVar2 = FUN_005a4910(pcVar6);
          iVar7 = cls_0x5a4550::meth_0x5a6030(local_98,(int **)&local_9c);
          *(char *)(iVar7 + 0x34) = cVar2;
          cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(local_64 + 0x38));
        }
      }
      break;
    case 4:
      ExceptionList = &local_c;
      iVar7 = FUN_005cccc0((int)param_1,0x4b545356,&local_98);
      if ((iVar7 == 0) && (local_98->mbr_0x8 != 0)) {
        local_9c.mbr_0x0 = ((cls_0x4d8d70 *)local_98->mbr_0x4)->mbr_0x0;
        iVar7 = param_1[8];
        if ((cls_0x4d8d70 *)local_9c.mbr_0x0 != (cls_0x4d8d70 *)local_98->mbr_0x4) {
          do {
            this_00 = local_98;
            cVar1.mbr_0x0 = local_9c.mbr_0x0;
            if (iVar7 <= (int)*(dword *)(local_9c.mbr_0x0 + 0xc)) break;
            cls_0x5a45b0::meth_0x5a45b0(&local_9c);
            cls_0x5a4550::meth_0x5a4df0(this_00,&local_8c,(int **)cVar1.mbr_0x0);
          } while ((cls_0x4d8d70 *)local_9c.mbr_0x0 != (cls_0x4d8d70 *)local_98->mbr_0x4);
        }
      }
      break;
    case 7:
      local_90 = (cls_0x4d8d70 *)0x0;
      local_88 = 1;
      ExceptionList = &local_c;
      FUN_005cccc0((int)param_1,0x464c534d,&local_90);
      if (local_90 == *(cls_0x4d8d70 **)(*(int *)(DAT_0070bd90 + 0x18) + 0x70e8)) {
        FUN_005a6520(local_90,param_1,'\0','\0');
        pcVar10 = *(cls_0x5b6400 **)(*(int *)(DAT_0070bd90 + 0x2c) + 0x94);
        if (pcVar10 != (cls_0x5b6400 *)0x0) {
          cls_0x5b6400::meth_0x5b6270(pcVar10,'\0');
        }
        FUN_005cccc0((int)param_1,0x54415453,&local_88);
        if ((local_88 == 3) &&
           (this = *(cls_0x558740 **)(*(int *)(DAT_0070bd90 + 0x2c) + 0x8c),
           this != (cls_0x558740 *)0x0)) {
          cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_64,"~~Program Finished~~");
          local_4 = 6;
          cls_0x558740::meth_0x5583e0(this,(_String_base *)local_64,0x80,0x80,(void *)0x0);
          cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_64);
        }
      }
      local_88 = 1;
      FUN_005ccd00((int)param_1,0x54415453,1);
      break;
    case 8:
      ExceptionList = &local_c;
      iVar7 = FUN_005cccc0((int)param_1,0x4b545356,&local_98);
      if (iVar7 == 0) {
        local_9c.mbr_0x0 = (dword)DAT_0070c720;
        iVar7 = cls_0x5a4550::meth_0x5a6030(local_98,(int **)&local_9c);
        if (*(int *)(iVar7 + 0x20) == 3) {
          iVar7 = param_1[0xe];
          local_9c.mbr_0x0 = (dword)DAT_0070c720;
          iVar8 = cls_0x5a4550::meth_0x5a6030(local_98,(int **)&local_9c);
          *(int *)(iVar8 + 0x28) = iVar7 + 1;
          local_9c.mbr_0x0 = (dword)DAT_0070c720;
          if (param_1[0xe] == 0) {
            iVar7 = cls_0x5a4550::meth_0x5a6030(local_98,(int **)&local_9c);
            *(int *)(iVar7 + 0x2c) = param_1[0xf];
          }
          else {
            iVar7 = cls_0x5a4550::meth_0x5a6030(local_98,(int **)&local_9c);
            *(int *)(iVar7 + 0x30) = param_1[0xf];
          }
        }
        else {
          FUN_00497120((byte *)
                       "Script_Small::Debugger() Attempt to set SRANGE on non-array LocalVar.");
        }
      }
    }
  }
  else {
    switch(param_1[0xd]) {
    case 0:
      ExceptionList = &local_c;
      local_90 = (cls_0x4d8d70 *)operator_new(0xc);
      local_4 = 0;
      if (local_90 == (cls_0x4d8d70 *)0x0) {
        pcVar3 = (cls_0x4d8d70 *)0x0;
      }
      else {
        pcVar3 = cls_0x4d8d70::cls_0x4d8d70(local_90);
      }
      local_4 = 0xffffffff;
      FUN_005ccd00((int)param_1,0x4c425446,pcVar3);
      local_90 = (cls_0x4d8d70 *)operator_new(0xc);
      local_4 = 1;
      if (local_90 == (cls_0x4d8d70 *)0x0) {
        pcVar4 = (cls_0x5a5ff0 *)0x0;
      }
      else {
        pcVar4 = cls_0x5a5ff0::cls_0x5a5ff0((cls_0x5a5ff0 *)local_90);
      }
      local_4 = 0xffffffff;
      FUN_005ccd00((int)param_1,0x50414d56,pcVar4);
      local_90 = (cls_0x4d8d70 *)operator_new(0xc);
      local_4 = 2;
      if (local_90 == (cls_0x4d8d70 *)0x0) {
        pcVar4 = (cls_0x5a5ff0 *)0x0;
      }
      else {
        pcVar4 = cls_0x5a5ff0::cls_0x5a5ff0((cls_0x5a5ff0 *)local_90);
      }
      FUN_005ccd00((int)param_1,0x4b545356,pcVar4);
      DAT_0070c720 = (cls_0x4d8d70 *)0x0;
      break;
    case 1:
      local_9c.mbr_0x0 = (dword)&stack0xffffff3c;
      ExceptionList = &local_c;
      cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&stack0xffffff3c,(char *)param_1[0x10]);
      cls_0x5a49d0::meth_0x5a7e20
                ((cls_0x5a49d0 *)&DAT_0070c728,local_80,in_stack_ffffff3c,in_stack_ffffff40);
      local_4 = 3;
      if (local_80._20_4_ == 0) {
        FUN_00401c70(local_80,(undefined4 *)param_1[0x10]);
      }
      iVar7 = FUN_005cccc0((int)param_1,0x4c425446,&local_9c);
      if (iVar7 == 0) {
        local_90 = (cls_0x4d8d70 *)param_1[0xc];
        pcVar6 = (cls_0x50db20 *)
                 cls_0x4d8d70::meth_0x52bc90((cls_0x4d8d70 *)local_9c.mbr_0x0,(int **)&local_90);
        ::cls_0x50db20::meth_0x401b20(pcVar6,(_String_base *)local_80,0,0xffffffff);
      }
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_80);
      break;
    case 3:
      ExceptionList = &local_c;
      iVar7 = FUN_005cccc0((int)param_1,0x50414d56,&local_94);
      if (((iVar7 == 0) && ((param_1[0xf] & 0xffU) != 9)) && ((param_1[0xf] & 0xffU) != 10)) {
        DAT_0070c720 = (cls_0x4d8d70 *)param_1[0xe];
        puVar11 = (undefined4 *)param_1[0x10];
        local_9c.mbr_0x0 = (dword)DAT_0070c720;
        pvVar5 = (void *)cls_0x5a4550::meth_0x5a6030(local_94,(int **)&local_9c);
        FUN_00401c70(pvVar5,puVar11);
        local_9c.mbr_0x0 = (dword)DAT_0070c720;
        iVar7 = cls_0x5a4550::meth_0x5a6030(local_94,(int **)&local_9c);
        local_9c.mbr_0x0 = (dword)DAT_0070c720;
        *(int *)(iVar7 + 0x1c) = param_1[0xe];
        uVar9 = param_1[0xf];
        iVar7 = cls_0x5a4550::meth_0x5a6030(local_94,(int **)&local_9c);
        local_9c.mbr_0x0 = (dword)DAT_0070c720;
        *(uint *)(iVar7 + 0x20) = uVar9 & 0xff;
        iVar7 = param_1[0xf];
        iVar8 = cls_0x5a4550::meth_0x5a6030(local_94,(int **)&local_9c);
        *(int *)(iVar8 + 0x24) = iVar7 >> 8;
        local_9c.mbr_0x0 = (dword)DAT_0070c720;
        iVar7 = cls_0x5a4550::meth_0x5a6030(local_94,(int **)&local_9c);
        local_9c.mbr_0x0 = (dword)DAT_0070c720;
        *(undefined4 *)(iVar7 + 0x28) = 0;
        iVar7 = cls_0x5a4550::meth_0x5a6030(local_94,(int **)&local_9c);
        local_9c.mbr_0x0 = (dword)DAT_0070c720;
        *(undefined4 *)(iVar7 + 0x2c) = 0;
        iVar7 = cls_0x5a4550::meth_0x5a6030(local_94,(int **)&local_9c);
        *(undefined4 *)(iVar7 + 0x30) = 0;
        local_9c.mbr_0x0 = (dword)DAT_0070c720;
        pcVar6 = (cls_0x50db20 *)
                 cls_0x4d8d70::meth_0x401d20
                           ((cls_0x4d8d70 *)(local_64 + 0x1c),(char *)param_1[0x10]);
        local_4 = 4;
        cVar2 = FUN_005a4910(pcVar6);
        iVar7 = cls_0x5a4550::meth_0x5a6030(local_94,(int **)&local_9c);
        *(char *)(iVar7 + 0x34) = cVar2;
        cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(local_64 + 0x1c));
      }
      break;
    case 8:
      ExceptionList = &local_c;
      iVar7 = FUN_005cccc0((int)param_1,0x50414d56,&local_94);
      if (iVar7 == 0) {
        local_9c.mbr_0x0 = (dword)DAT_0070c720;
        iVar7 = cls_0x5a4550::meth_0x5a6030(local_94,(int **)&local_9c);
        if (*(int *)(iVar7 + 0x20) == 3) {
          iVar7 = param_1[0xe];
          local_9c.mbr_0x0 = (dword)DAT_0070c720;
          iVar8 = cls_0x5a4550::meth_0x5a6030(local_94,(int **)&local_9c);
          local_9c.mbr_0x0 = (dword)DAT_0070c720;
          *(int *)(iVar8 + 0x28) = iVar7 + 1;
          if (param_1[0xe] == 0) {
            iVar7 = cls_0x5a4550::meth_0x5a6030(local_94,(int **)&local_9c);
            *(int *)(iVar7 + 0x2c) = param_1[0xf];
          }
          else {
            iVar7 = cls_0x5a4550::meth_0x5a6030(local_94,(int **)&local_9c);
            *(int *)(iVar7 + 0x30) = param_1[0xf];
          }
        }
        else {
          FUN_00497120((byte *)
                       "Script_Small::Debugger() Attempt to set SRANGE on non-array variable.");
        }
      }
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Script_Small::Load(Script_Small *this,int *param_1,char param_2)

{
  dword *pdVar1;
  cls_0x558740 *this_00;
  uint *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  _String_base *p_Var5;
  int iVar6;
  dword *pdVar7;
  uint unaff_retaddr;
  char *pcVar8;
  code *pcVar9;
  int aiStack_160 [2];
  byte bStack_158;
  size_t sStack_148;
  undefined auStack_12c [284];
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063b10b;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  this_00 = *(cls_0x558740 **)(*(int *)(DAT_0070bd90 + 0x2c) + 0x8c);
  ExceptionList = &pvStack_c;
  (*this->vftptr_0x0->virt_meth_0x5a72f0_8)(this);
  if ((param_1 == (int *)0x0) || (*(char *)param_1 == '\0')) {
    FUN_00497120((byte *)"Warning: attempt to load NULL script.");
    goto LAB_005a8b84;
  }
  puVar2 = (uint *)ResourceSystem::FileStreamOpen(DAT_00707da8,(char)param_1,1);
  if (puVar2 == (uint *)0x0) {
    FUN_00497120((byte *)"Warning: attempt to load unknown script %s.");
    goto LAB_005a8b84;
  }
  uVar3 = ResourceSystem::FileStreamRead(DAT_00707da8,aiStack_160,0x34,(int)puVar2);
  if ((char)uVar3 == '\0') {
    pcVar8 = "Warning: error reading header from script %s.  Script will not be loaded.\n";
  }
  else {
    pvVar4 = _malloc(sStack_148);
    this->mbr_0xd0 = (dword)pvVar4;
    uVar3 = ResourceSystem::FileStreamSeek(DAT_00707da8,puVar2,0,0);
    if ((char)uVar3 == '\0') {
      FUN_00497120((byte *)"Warning: seek error reading script %s.  Script will not be loaded.\n");
                    /* WARNING: Subroutine does not return */
      _free((void *)this->mbr_0xd0);
    }
    uVar3 = ResourceSystem::FileStreamRead(DAT_00707da8,this->mbr_0xd0,aiStack_160[0],(int)puVar2);
    if ((char)uVar3 != '\0') {
      cls_0x49c610::meth_0x49b1d0(DAT_00707da8,puVar2,'\0');
      pdVar1 = &this->mbr_0x26;
      pdVar7 = pdVar1;
      for (iVar6 = 0x26; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pdVar7 = 0;
        pdVar7 = pdVar7 + 1;
      }
      if (param_2 == '\x01') {
        if ((bStack_158 & 0x10) == 0) {
          if ((bStack_158 & 2) == 0) goto LAB_005a8a7b;
          this->mbr_0x25 = 1;
          pcVar9 = (code *)&LAB_005a5860;
        }
        else {
          if (this_00 != (cls_0x558740 *)0x0) {
            FUN_00616d8c(auStack_12c + 0x1c,(byte *)"Using Debugging Hook on file: %s");
            p_Var5 = (_String_base *)
                     cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_12c,auStack_12c + 0x1c);
            uStack_4 = 0;
            cls_0x558740::meth_0x5583e0(this_00,p_Var5,0x80,0x80,(void *)0x80);
            uStack_4 = 0xffffffff;
            cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_12c);
          }
          this->mbr_0x24 = 1;
          pcVar9 = Debugger;
        }
        FUN_005ce320((int)pdVar1,pcVar9);
      }
LAB_005a8a7b:
      iVar6 = FUN_005cc810((int *)pdVar1,this->mbr_0xd0);
      if (iVar6 != 0) {
        FUN_00497120((byte *)"Script_Small::Load() was unable to initialize the AMX.\n");
                    /* WARNING: Subroutine does not return */
        _free((void *)this->mbr_0xd0);
      }
      if (this->mbr_0x25 == 1) {
        FUN_005ccd00((int)pdVar1,0x4c425446,&this->mbr_0xd4);
      }
      FUN_005ccde0((int *)pdVar1,(int *)&PTR_s_float_007004c0,-1);
      FUN_005ccde0((int *)pdVar1,(int *)&PTR_s_Sample_006ffaf8,-1);
      iVar6 = FUN_005ccde0((int *)pdVar1,(int *)&PTR_s_A_Attack_006f3750,-1);
      if (iVar6 != 0) {
        FUN_00497120((byte *)
                     "Script_Small::Load() Unable to locate a matching function for a Native in: %s\n"
                    );
                    /* WARNING: Subroutine does not return */
        _free((void *)this->mbr_0xd0);
      }
      FUN_005ccd00((int)pdVar1,0x464c534d,this->mbr_0x4);
      _DAT_0070c724 = (uint)(this->mbr_0x24 != 0);
      FUN_005ccd00((int)pdVar1,0x54415453,_DAT_0070c724);
      FUN_00401c70(&this->mbr_0x8,param_1);
      FUN_005ccd00((int)pdVar1,0x45555146,&this->mbr_0xc0);
      goto LAB_005a8b84;
    }
    pcVar8 = "Warning: error reading script %s.  Script will not be loaded.\n";
  }
  FUN_00497120((byte *)pcVar8);
  cls_0x49c610::meth_0x49b1d0(DAT_00707da8,puVar2,'\0');
LAB_005a8b84:
  ExceptionList = pvStack_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}


#include "../include/Script_Small.h"
