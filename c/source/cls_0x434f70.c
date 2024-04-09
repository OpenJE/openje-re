#include "../include/cls_0x434f70.h"

void __thiscall cls_0x434f70::meth_0x434b70(cls_0x434f70 *this,undefined4 param_1,void *param_2)

{
  undefined3 uVar1;
  cls_0x50db20 *pcVar2;
  int iVar3;
  int iVar4;
  uint unaff_retaddr;
  undefined4 uStack00000018;
  uint in_stack_0000001c;
  dword in_stack_00000020;
  dword in_stack_00000024;
  dword in_stack_00000028;
  void *in_stack_00000030;
  int in_stack_00000040;
  uint in_stack_00000044;
  int iStack_90;
  int iStack_8c;
  cls_0x50db20 *pcStack_84;
  undefined local_80 [4];
  void *local_7c;
  dword local_6c;
  dword local_68;
  _String_base local_64 [4];
  void *local_60;
  dword local_50;
  uint local_4c;
  void *local_44;
  dword local_34;
  uint local_30;
  void *local_28;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_0062d7ae;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  local_4 = 1;
  uStack_3 = 0;
  if (*(int *)&(this->cls_0x4395a0).CEngineInterface.Interface == 0) {
    if (0xf < in_stack_0000001c) {
      ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
    param_2 = (void *)((uint)param_2 & 0xffffff00);
    ExceptionList = &local_c;
    if (in_stack_00000044 < 0x10) {
LAB_00434f37:
      in_stack_0000001c = 0xf;
      uStack00000018 = 0;
      ExceptionList = local_c;
      FUN_00616e15((uint)local_10 ^ unaff_retaddr);
      return;
    }
  }
  else {
    local_68 = 0xf;
    local_6c = 0;
    local_7c = (void *)((uint)local_7c & 0xffffff00);
    uStack_3 = 0;
    uVar1 = uStack_3;
    local_4 = 2;
    uStack_3 = 0;
    if (in_stack_00000040 == 0) {
      ExceptionList = &local_c;
      uStack_3 = uVar1;
      pcVar2 = FUN_00434550((cls_0x50db20 *)&stack0xffffffd4,(undefined4 *)&DAT_00654320,
                            (int)&param_1);
      local_4 = 6;
      ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_80,(_String_base *)pcVar2,0,0xffffffff);
      local_4 = 2;
      if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
        _free(local_28);
      }
    }
    else {
      ExceptionList = &local_c;
      pcVar2 = FUN_00434550((cls_0x50db20 *)&stack0xffffffd4,(undefined4 *)&DAT_00654320,
                            (int)&stack0x0000002c);
      local_4 = 3;
      pcVar2 = FUN_00434600((cls_0x50db20 *)&stack0xffffffb8,(_String_base *)pcVar2,
                            (undefined4 *)&DAT_0065431c);
      local_4 = 4;
      pcVar2 = FUN_00425d70((cls_0x50db20 *)local_64,(_String_base *)pcVar2,(int)&param_1);
      local_4 = 5;
      ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_80,(_String_base *)pcVar2,0,0xffffffff);
      if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
        _free(local_60);
      }
      local_4c = 0xf;
      local_50 = 0;
      local_60 = (void *)((uint)local_60 & 0xffffff00);
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        _free(local_44);
      }
      local_30 = 0xf;
      local_34 = 0;
      local_44 = (void *)((uint)local_44 & 0xffffff00);
      local_4 = 2;
      if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
        _free(local_28);
      }
    }
    local_4 = 2;
    (**(code **)(**(int **)&(this->cls_0x4395a0).CEngineInterface.Interface + 300))(local_80);
    iVar4 = *(int *)&(this->cls_0x4395a0).CEngineInterface.Interface;
    iVar3 = *(int *)(iVar4 + 0xe50);
    if (iVar3 == 0) {
      iStack_8c = 0;
    }
    else {
      iStack_8c = (*(int *)(iVar4 + 0xe54) - iVar3) / 0x28;
    }
    iStack_90 = 0;
    if (0 < iStack_8c) {
      do {
        local_4c = 0xf;
        local_50 = 0;
        local_60 = (void *)((uint)local_60 & 0xffffff00);
        local_4 = 7;
        pcStack_84 = (cls_0x50db20 *)operator_new(0x44);
        local_4 = 8;
        if (pcStack_84 == (cls_0x50db20 *)0x0) {
          pcVar2 = (cls_0x50db20 *)0x0;
        }
        else {
          pcVar2 = ::cls_0x50db20::cls_0x50db20(pcStack_84);
        }
        local_4 = 7;
        pcStack_84 = pcVar2;
        GUI::Edit::meth_0x4a8b90
                  (*(Edit **)&(this->cls_0x4395a0).CEngineInterface.Interface,iStack_90,local_64);
        ::cls_0x50db20::meth_0x401b20(pcVar2,local_64,0,0xffffffff);
        ::cls_0x50db20::meth_0x401b20
                  ((cls_0x50db20 *)&pcVar2->VFX_Parameter,(_String_base *)&stack0x0000002c,0,
                   0xffffffff);
        (pcVar2->VFX_Parameter).mbr_0x1c = in_stack_00000020;
        (pcVar2->VFX_Parameter).mbr_0x20 = in_stack_00000024;
        (pcVar2->VFX_Parameter).mbr_0x24 = in_stack_00000028;
        if ((int *)this->mbr_0xa4 == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)this->mbr_0xa4;
        }
        iVar3 = FUN_00433760(iVar4,*(undefined4 *)(iVar4 + 4),&pcStack_84);
        cls_0x4344a0::meth_0x4344a0((cls_0x4344a0 *)&this->mbr_0xa0,1);
        *(int *)(iVar4 + 4) = iVar3;
        **(int **)(iVar3 + 4) = iVar3;
        local_4 = 2;
        if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
          _free(local_60);
        }
        iStack_90 = iStack_90 + 1;
        local_4c = 0xf;
        local_50 = 0;
        local_60 = (void *)((uint)local_60 & 0xffffff00);
      } while (iStack_90 < iStack_8c);
    }
    cls_0x558740::meth_0x434760((cls_0x558740 *)this);
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      _free(local_7c);
    }
    local_68 = 0xf;
    local_6c = 0;
    local_7c = (void *)((uint)local_7c & 0xffffff00);
    if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
    param_2 = (void *)((uint)param_2 & 0xffffff00);
    if (in_stack_00000044 < 0x10) goto LAB_00434f37;
  }
  in_stack_0000001c = 0xf;
  uStack00000018 = 0;
                    /* WARNING: Subroutine does not return */
  _free(in_stack_00000030);
}



cls_0x434f70 * __thiscall
cls_0x434f70::cls_0x434f70(cls_0x434f70 *this,_String_base *param_1,int param_2)

{
  int iVar1;
  int **ppiVar2;
  char *pcVar3;
  dword dVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  dword unaff_EBX;
  dword unaff_EBP;
  dword unaff_ESI;
  dword in_stack_ffffff64;
  uint in_stack_ffffff68;
  void *pvVar8;
  dword local_74;
  uint local_70;
  dword *pdStack_6c;
  uint local_48;
  dword local_44;
  dword local_40;
  dword *local_30;
  cls_0x434f70 *local_2c;
  int local_28;
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062d83a;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  ExceptionList = &local_c;
  local_2c = this;
  if (param_2 != 0) {
    ExceptionList = &local_c;
    (this->cls_0x4395a0).mbr_0x0 = 0x654364;
    CEngineInterface::CEngineInterface((CEngineInterface *)&this->field_0xb0,param_1);
    local_4 = 0;
  }
  local_48 = (uint)(param_2 != 0);
  cls_0x4395a0::cls_0x4395a0(&this->cls_0x4395a0,param_1,0);
  *(CFeedbackInterface__vftable_654304 **)
   ((int)&(this->cls_0x4395a0).mbr_0x0 + *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)) =
       &CFeedbackInterface__vftable_654304_00654304;
  iVar1 = *(int *)((this->cls_0x4395a0).mbr_0x0 + 4);
  *(int *)(iVar1 + -4 + (int)this) = iVar1 + -0xb0;
  this->mbr_0x70 = 0xf;
  this->mbr_0x6c = 0;
  this->mbr_0x5c = 0;
  this->mbr_0x8c = 0xf;
  this->mbr_0x88 = 0;
  this->mbr_0x78 = 0;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  dVar4 = FUN_0056e0b0();
  this->mbr_0x98 = dVar4;
  this->mbr_0x9c = 0;
  local_4._0_1_ = 4;
  dVar4 = FUN_0056e0b0();
  this->mbr_0xa4 = dVar4;
  this->mbr_0xa8 = 0;
  local_4._0_1_ = 5;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "Feedback.INT";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_28,"Feedback.INT",(uint)(pcVar6 + -0x654354))
  ;
  local_4._0_1_ = 6;
  CLoadMapInterface::meth_0x495b50
            ((CLoadMapInterface *)
             ((int)&(this->cls_0x4395a0).mbr_0x0 + *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),
             &local_28);
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ppiVar2 = (int **)this->mbr_0x98;
  if (ppiVar2 == (int **)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = *ppiVar2;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->mbr_0x94,(int **)&local_30,piVar7,(int *)ppiVar2);
  ppiVar2 = (int **)this->mbr_0xa4;
  if (ppiVar2 == (int **)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = *ppiVar2;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->mbr_0xa0,(int **)&local_30,piVar7,(int *)ppiVar2);
  this->mbr_0x44 = 0;
  this->mbr_0x48 = 0;
  this->mbr_0x4c = 0;
  this->mbr_0x50 = 0;
  this->mbr_0x54 = 0;
  pcVar3 = "";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&this->mbr_0x58,"",(uint)(pcVar6 + -0x64d7d8));
  pcVar3 = "";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&this->mbr_0x74,"",(uint)(pcVar6 + -0x64d7d8));
  this->mbr_0x90 = 0;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x4 = 0;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x8 = 0;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0xc = 0;
  *(undefined4 *)&(this->cls_0x4395a0).CEngineInterface.Interface.field_0x10 = 0;
  *(undefined4 *)&(this->cls_0x4395a0).CEngineInterface.Interface.field_0x14 = 0;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x18 = 0;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x1c = 0;
  *(undefined4 *)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x20 = 0;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x24 = 0;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x28 = 0;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x2c = 0;
  *(undefined4 *)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x30 = 0;
  this->mbr_0x3c = 0;
  this->mbr_0x40 = 0;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "FeedbackWin";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_28,"FeedbackWin",(uint)(pcVar6 + -0x654348));
  local_4._0_1_ = 7;
  uVar5 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  *(undefined4 *)&(this->cls_0x4395a0).field_0x4 = uVar5;
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "FeedbackLine";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_28,"FeedbackLine",(uint)(pcVar6 + -0x654338))
  ;
  local_4._0_1_ = 8;
  uVar5 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  *(undefined4 *)&(this->cls_0x4395a0).CEngineInterface.Interface = uVar5;
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  piVar7 = *(int **)&(this->cls_0x4395a0).field_0x4;
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0x48))();
    pdStack_6c = (dword *)0x435249;
    (**(code **)(**(int **)&(this->cls_0x4395a0).field_0x4 + 0x14))();
    (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x4 = unaff_ESI;
    *(VFX_Parameter__vftable_673a20 **)&(this->cls_0x4395a0).CEngineInterface.Interface.field_0x10 =
         local_c;
    piVar7 = *(int **)&(this->cls_0x4395a0).field_0x4;
    (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x8 = unaff_EBP;
    (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0xc = (dword)puStack_8;
    pdStack_6c = (dword *)0x0;
    local_70 = 0x43526e;
    (**(code **)(*piVar7 + 100))();
    piVar7 = *(int **)&(this->cls_0x4395a0).CEngineInterface.Interface;
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x40))();
      pdStack_6c = (dword *)0x43529a;
      (**(code **)(**(int **)&(this->cls_0x4395a0).CEngineInterface.Interface + 0x14))();
      this->mbr_0x48 = (dword)(puStack_8 + (-unaff_EBX - local_48));
      this->mbr_0x44 = unaff_EBX;
      this->mbr_0x4c = local_44;
      this->mbr_0x54 = local_40;
      piVar7 = *(int **)&(this->cls_0x4395a0).CEngineInterface.Interface;
      pdStack_6c = &this->mbr_0x58;
      this->mbr_0x50 = (int)local_c + (-local_44 - local_40);
      local_70 = 0x4352d8;
      (**(code **)(*piVar7 + 0xd0))();
      local_70 = 0;
      local_74 = 0;
      (**(code **)(**(int **)&(this->cls_0x4395a0).CEngineInterface.Interface + 0x14c))();
      dVar4 = (**(code **)(**(int **)&(this->cls_0x4395a0).CEngineInterface.Interface + 0x154))();
      piVar7 = *(int **)&(this->cls_0x4395a0).CEngineInterface.Interface;
      this->mbr_0x90 = dVar4;
      (**(code **)(*piVar7 + 0x54))();
      (**(code **)(**(int **)&(this->cls_0x4395a0).CEngineInterface.Interface + 0x180))();
    }
  }
  local_30 = &local_74;
  local_70 = local_70 & 0xffffff00;
  pcVar3 = "";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_74,"",(uint)(pcVar6 + -0x64d7d8));
  local_4._0_1_ = 9;
  pvVar8 = (void *)(in_stack_ffffff68 & 0xffffff00);
  pcVar3 = "Welcome to Fallout.";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&stack0xffffff64,"Welcome to Fallout.",(uint)(pcVar6 + -0x654324));
  local_4 = CONCAT31(local_4._1_3_,5);
  meth_0x434b70(this,in_stack_ffffff64,pvVar8);
  ExceptionList = local_c;
  return this;
}


