#include "../include/GameDialogueInterface.h"

undefined4 * __thiscall
GameDialogueInterface::virt_meth_0x437fe0
          (GameDialogueInterface *this,undefined4 param_1,undefined4 param_2)

{
  GameDialogueWindow *pGVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062dbeb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pGVar1 = (GameDialogueWindow *)FUN_004a7680(0xdc8);
  local_4 = 0;
  if (pGVar1 != (GameDialogueWindow *)0x0) {
    pGVar1 = GameDialogueWindow::GameDialogueWindow
                       (pGVar1,(undefined)param_1,(undefined)param_2,(int)this);
    ExceptionList = local_c;
    return (undefined4 *)pGVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}



GameDialogueInterface * __thiscall
GameDialogueInterface::GameDialogueInterface
          (GameDialogueInterface *this,undefined4 param_1,void *param_2)

{
  undefined *this_00;
  char *pcVar1;
  undefined uVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  GameDialogueInterface *pGVar8;
  undefined4 unaff_EBX;
  dword unaff_EBP;
  uint unaff_ESI;
  undefined4 unaff_EDI;
  uint unaff_retaddr;
  uint in_stack_0000001c;
  int in_stack_00000020;
  dword *pdVar9;
  dword *pdVar10;
  dword dStack_ac;
  dword local_a4;
  dword dStack_a0;
  undefined auStack_9c [4];
  void *pvStack_98;
  int local_94;
  void *local_90;
  dword dStack_88;
  dword dStack_84;
  VFX_Parameter__vftable_673a20 *local_80;
  uint local_7c;
  undefined local_78 [4];
  void *local_74;
  _String_base a_Stack_6c [4];
  undefined auStack_68 [4];
  dword local_64;
  uint local_60 [3];
  void *local_54;
  undefined auStack_50 [4];
  undefined auStack_4c [8];
  dword local_44;
  uint local_40;
  undefined auStack_3c [4];
  void *local_38;
  undefined4 local_28;
  uint local_24;
  uint local_1c;
  GameDialogueInterface *local_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062dcc6;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_1c = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  local_14 = this;
  if (in_stack_00000020 != 0) {
    ExceptionList = &local_c;
    *(Alignment **)&(this->DialogueInterface).field_0x274 = &DAT_006561e4;
    (this->DialogueInterface).mbr_0x4 = (dword)&DAT_00655948;
    CEngineInterface::CEngineInterface
              ((CEngineInterface *)&(this->DialogueInterface).CEngineInterface.Interface.mbr_0x4,
               (_String_base *)&param_1);
    local_4._0_1_ = 1;
  }
  local_1c = (uint)(in_stack_00000020 != 0);
  this_00 = &(this->DialogueInterface).field_0x274;
  cls_0x4395a0::cls_0x4395a0((cls_0x4395a0 *)this_00,(_String_base *)&param_1,0);
  local_4 = 2;
  DialogueInterface::DialogueInterface(&this->DialogueInterface,(_String_base *)&param_1,0);
  (this->DialogueInterface).vftptr_0x0 =
       (DialogueInterface__vftable_69edbc *)&GameDialogueInterface__vftable_655944_00655944;
  *(GameDialogueInterface__vftable_655928 **)
   (&(this->DialogueInterface).field_0x274 + *(int *)(*(int *)this_00 + 4)) =
       &GameDialogueInterface__vftable_655928_00655928;
  *(int *)(&(this->DialogueInterface).field_0x270 + *(int *)(*(int *)this_00 + 4)) =
       *(int *)(*(int *)this_00 + 4) + -8;
  local_40 = 0xf;
  local_44 = 0;
  local_54 = (void *)((uint)local_54 & 0xffffff00);
  local_24 = 0xf;
  local_28 = 0;
  local_38 = (void *)((uint)local_38 & 0xffffff00);
  local_7c = 0xf;
  local_4._0_1_ = 5;
  local_80 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_90 = (void *)((uint)local_90 & 0xffffff00);
  pcVar1 = "Dialog.INT";
  do {
    pcVar7 = pcVar1;
    pcVar1 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_94,"Dialog.INT",(uint)(pcVar7 + -0x655918));
  local_4._0_1_ = 6;
  CLoadMapInterface::meth_0x495b50
            ((CLoadMapInterface *)
             (&(this->DialogueInterface).field_0x274 + *(int *)(*(int *)this_00 + 4)),&local_94);
  local_4._0_1_ = 5;
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free(local_90);
  }
  local_60[0] = 0xf;
  local_64 = 0;
  local_74 = (void *)((uint)local_74 & 0xffffff00);
  pcVar1 = "SpeakerWin";
  do {
    pcVar7 = pcVar1;
    pcVar1 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_78,"SpeakerWin",(uint)(pcVar7 + -0x65590c));
  local_4._0_1_ = 7;
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             (&(this->DialogueInterface).field_0x274 + *(int *)(*(int *)this_00 + 4)
                             ),(int)local_78);
  local_4._0_1_ = 5;
  if (0xf < local_60[0]) {
                    /* WARNING: Subroutine does not return */
    _free(local_74);
  }
  local_60[0] = 0xf;
  local_64 = 0;
  local_74 = (void *)((uint)local_74 & 0xffffff00);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x14))();
    (**(code **)(*piVar3 + 0xd0))();
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&(this->DialogueInterface).field_0x8,(_String_base *)&local_64,0,
               0xffffffff);
    *(uint *)&(this->DialogueInterface).field_0x24 = unaff_ESI;
    *(undefined4 *)&(this->DialogueInterface).field_0x28 = unaff_EBX;
    *(undefined4 *)&(this->DialogueInterface).field_0x2c = 0xb4;
    (**(code **)(*piVar3 + 0x54))();
  }
  local_60[0] = 0xf;
  local_64 = 0;
  local_74 = (void *)((uint)local_74 & 0xffffff00);
  pcVar1 = "SpeakerPic";
  do {
    pcVar7 = pcVar1;
    pcVar1 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_78,"SpeakerPic",(uint)(pcVar7 + -0x655900));
  local_4._0_1_ = 8;
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             (&(this->DialogueInterface).field_0x274 + *(int *)(*(int *)this_00 + 4)
                             ),(int)local_78);
  local_4._0_1_ = 5;
  if (0xf < local_60[0]) {
                    /* WARNING: Subroutine does not return */
    _free(local_74);
  }
  local_60[0] = 0xf;
  local_64 = 0;
  local_74 = (void *)((uint)local_74 & 0xffffff00);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x14))();
    (**(code **)(*piVar3 + 0x40))();
    (**(code **)(*piVar3 + 0xd0))(auStack_68);
    uVar2 = (**(code **)(*piVar3 + 0x88))();
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&(this->DialogueInterface).field_0x30,a_Stack_6c,0,0xffffffff);
    (this->DialogueInterface).field_0x5c = uVar2;
    *(undefined4 *)&(this->DialogueInterface).field_0x4c = unaff_EBX;
    *(undefined4 *)&(this->DialogueInterface).field_0x54 = unaff_EDI;
    *(dword *)&(this->DialogueInterface).field_0x50 = dStack_ac;
    *(dword *)&(this->DialogueInterface).field_0x58 = unaff_EBP;
    (**(code **)(*piVar3 + 0x54))(1);
  }
  local_60[0] = 0xf;
  local_64 = 0;
  local_74 = (void *)((uint)local_74 & 0xffffff00);
  pcVar1 = "SpeakerNameLbl";
  do {
    pcVar7 = pcVar1;
    pcVar1 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_78,"SpeakerNameLbl",(uint)(pcVar7 + -0x6558f0));
  local_4._0_1_ = 9;
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             (&(this->DialogueInterface).field_0x274 + *(int *)(*(int *)this_00 + 4)
                             ),(int)local_78);
  local_4._0_1_ = 5;
  if (0xf < local_60[0]) {
                    /* WARNING: Subroutine does not return */
    _free(local_74);
  }
  local_60[0] = 0xf;
  local_64 = 0;
  local_74 = (void *)((uint)local_74 & 0xffffff00);
  if (piVar3 != (int *)0x0) {
    pdVar10 = &local_a4;
    (**(code **)(*piVar3 + 0x14))();
    pdVar9 = &local_a4;
    (**(code **)(*piVar3 + 0x40))();
    (**(code **)(*piVar3 + 0xd0))(auStack_68);
    (**(code **)(*piVar3 + 0x14c))(auStack_50,0,0,0);
    uVar4 = (**(code **)(*piVar3 + 0x154))();
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&(this->DialogueInterface).field_0x60,(_String_base *)&local_7c,0,
               0xffffffff);
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&(this->DialogueInterface).field_0x7c,(_String_base *)local_60,0,
               0xffffffff);
    *(undefined4 *)&(this->DialogueInterface).field_0x98 = uVar4;
    *(dword **)&(this->DialogueInterface).field_0xa0 = pdVar10;
    *(undefined4 *)&(this->DialogueInterface).field_0xa4 = unaff_EDI;
    *(undefined4 *)&(this->DialogueInterface).field_0x9c = 0;
    *(dword **)&(this->DialogueInterface).field_0xa8 = pdVar9;
    *(dword **)&(this->DialogueInterface).field_0xac = &dStack_a0;
    (**(code **)(*piVar3 + 0x54))(1);
  }
  local_60[0] = 0xf;
  local_64 = 0;
  local_74 = (void *)((uint)local_74 & 0xffffff00);
  pcVar1 = "SpeakerTextLbl";
  do {
    pcVar7 = pcVar1;
    pcVar1 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_78,"SpeakerTextLbl",(uint)(pcVar7 + -0x6558e0));
  local_4._0_1_ = 10;
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             (&(this->DialogueInterface).field_0x274 + *(int *)(*(int *)this_00 + 4)
                             ),(int)local_78);
  local_4._0_1_ = 5;
  if (0xf < local_60[0]) {
                    /* WARNING: Subroutine does not return */
    _free(local_74);
  }
  local_60[0] = 0xf;
  local_64 = 0;
  local_74 = (void *)((uint)local_74 & 0xffffff00);
  if (piVar3 != (int *)0x0) {
    pdVar10 = &local_a4;
    (**(code **)(*piVar3 + 0x14))();
    pdVar9 = &local_a4;
    (**(code **)(*piVar3 + 0x40))();
    (**(code **)(*piVar3 + 0xd0))(auStack_68);
    (**(code **)(*piVar3 + 0x14c))(auStack_50,0,0,0);
    uVar4 = (**(code **)(*piVar3 + 0x154))();
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&(this->DialogueInterface).field_0xb0,(_String_base *)&local_7c,0,
               0xffffffff);
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&(this->DialogueInterface).field_0xcc,(_String_base *)local_60,0,
               0xffffffff);
    *(dword **)&(this->DialogueInterface).field_0xf0 = pdVar10;
    *(undefined4 *)&(this->DialogueInterface).field_0xe8 = uVar4;
    *(dword **)&(this->DialogueInterface).field_0xfc = &dStack_a0;
    *(undefined4 *)&(this->DialogueInterface).field_0xf4 = unaff_EDI;
    *(undefined4 *)&(this->DialogueInterface).field_0xec = 0;
    *(dword **)&(this->DialogueInterface).field_0xf8 = pdVar9;
    *(undefined4 *)&(this->DialogueInterface).field_0x100 = 0;
    dStack_a0 = 0xf;
    local_a4 = 0;
    pcVar1 = "SpeakerWin";
    do {
      pcVar7 = pcVar1;
      pcVar1 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffff48,"SpeakerWin",(uint)(pcVar7 + -0x65590c));
    local_28._0_1_ = 0xb;
    piVar5 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               (&(this->DialogueInterface).field_0x274 +
                               *(int *)(*(int *)this_00 + 4)),(int)&stack0xffffff48);
    local_28._0_1_ = 5;
    if (0xf < dStack_a0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)(unaff_ESI & 0xffffff00));
    }
    dStack_a0 = 0xf;
    local_a4 = 0;
    unaff_ESI = unaff_ESI & 0xffffff00;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0x48))(auStack_3c,&local_80);
      (**(code **)(*piVar3 + 0x48))(auStack_4c,&stack0xffffff34);
      *(int *)&(this->DialogueInterface).field_0x104 =
           ((*(int *)&(this->DialogueInterface).field_0x28 -
            *(int *)&(this->DialogueInterface).field_0xfc) - (int)piVar5) + (int)local_80;
    }
    (**(code **)(*piVar3 + 0x54))(1);
  }
  local_7c = 0xf;
  local_80 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_90 = (void *)((uint)local_90 & 0xffffff00);
  pcVar1 = "SpeakerModel";
  do {
    pcVar7 = pcVar1;
    pcVar1 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_94,"SpeakerModel",(uint)(pcVar7 + -0x6558d0))
  ;
  local_4._0_1_ = 0xc;
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             (&(this->DialogueInterface).field_0x274 + *(int *)(*(int *)this_00 + 4)
                             ),(int)&local_94);
  local_4._0_1_ = 5;
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free(local_90);
  }
  local_7c = 0xf;
  local_80 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_90 = (void *)((uint)local_90 & 0xffffff00);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x14))();
    (**(code **)(*piVar3 + 0x40))();
    (**(code **)(*piVar3 + 0xd0))(auStack_68);
    uVar2 = (**(code **)(*piVar3 + 0x88))();
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&(this->DialogueInterface).field_0x108,a_Stack_6c,0,0xffffffff);
    *(undefined4 *)&(this->DialogueInterface).field_0x124 = unaff_EBX;
    *(dword *)&(this->DialogueInterface).field_0x128 = dStack_ac;
    *(dword *)&(this->DialogueInterface).field_0x130 = unaff_EBP;
    *(undefined4 *)&(this->DialogueInterface).field_0x12c = unaff_EDI;
    (this->DialogueInterface).field_0x134 = uVar2;
    (**(code **)(*piVar3 + 0x54))(1);
  }
  local_7c = 0xf;
  local_80 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_90 = (void *)((uint)local_90 & 0xffffff00);
  pcVar1 = "ListenerWin";
  do {
    pcVar7 = pcVar1;
    pcVar1 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_94,"ListenerWin",(uint)(pcVar7 + -0x6558c4));
  local_4._0_1_ = 0xd;
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             (&(this->DialogueInterface).field_0x274 + *(int *)(*(int *)this_00 + 4)
                             ),(int)&local_94);
  local_4._0_1_ = 5;
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free(local_90);
  }
  local_7c = 0xf;
  local_80 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_90 = (void *)((uint)local_90 & 0xffffff00);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x14))();
    (**(code **)(*piVar3 + 0xd0))();
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&(this->DialogueInterface).field_0x138,(_String_base *)&local_64,0,
               0xffffffff);
    *(uint *)&(this->DialogueInterface).field_0x154 = unaff_ESI;
    *(undefined4 *)&(this->DialogueInterface).field_0x158 = unaff_EBX;
    *(undefined4 *)&(this->DialogueInterface).field_0x15c = 0xb4;
    (**(code **)(*piVar3 + 0x54))();
  }
  local_7c = 0xf;
  local_80 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_90 = (void *)((uint)local_90 & 0xffffff00);
  pcVar1 = "ListenerPic";
  do {
    pcVar7 = pcVar1;
    pcVar1 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_94,"ListenerPic",(uint)(pcVar7 + -0x6558b8));
  local_4._0_1_ = 0xe;
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             (&(this->DialogueInterface).field_0x274 + *(int *)(*(int *)this_00 + 4)
                             ),(int)&local_94);
  local_4._0_1_ = 5;
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free(local_90);
  }
  local_7c = 0xf;
  local_80 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_90 = (void *)((uint)local_90 & 0xffffff00);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x14))();
    (**(code **)(*piVar3 + 0x40))();
    (**(code **)(*piVar3 + 0xd0))(auStack_68);
    uVar2 = (**(code **)(*piVar3 + 0x88))();
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&(this->DialogueInterface).field_0x160,a_Stack_6c,0,0xffffffff);
    (this->DialogueInterface).field_0x18c = uVar2;
    *(undefined4 *)&(this->DialogueInterface).field_0x17c = unaff_EBX;
    *(undefined4 *)&(this->DialogueInterface).field_0x184 = unaff_EDI;
    *(dword *)&(this->DialogueInterface).field_0x180 = dStack_ac;
    *(dword *)&(this->DialogueInterface).field_0x188 = unaff_EBP;
    (**(code **)(*piVar3 + 0x54))(1);
  }
  local_7c = 0xf;
  local_80 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_90 = (void *)((uint)local_90 & 0xffffff00);
  pcVar1 = "ListenerNameLbl";
  do {
    pcVar7 = pcVar1;
    pcVar1 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_94,"ListenerNameLbl",(uint)(pcVar7 + -0x6558a8));
  local_4._0_1_ = 0xf;
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             (&(this->DialogueInterface).field_0x274 + *(int *)(*(int *)this_00 + 4)
                             ),(int)&local_94);
  local_4._0_1_ = 5;
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free(local_90);
  }
  local_7c = 0xf;
  local_80 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_90 = (void *)((uint)local_90 & 0xffffff00);
  if (piVar3 != (int *)0x0) {
    pdVar10 = &local_a4;
    (**(code **)(*piVar3 + 0x14))();
    pdVar9 = &local_a4;
    (**(code **)(*piVar3 + 0x40))();
    (**(code **)(*piVar3 + 0xd0))(auStack_68);
    (**(code **)(*piVar3 + 0x14c))(auStack_50,0,0,0);
    uVar4 = (**(code **)(*piVar3 + 0x154))();
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&(this->DialogueInterface).field_0x190,(_String_base *)&local_7c,0,
               0xffffffff);
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&(this->DialogueInterface).field_0x1ac,(_String_base *)local_60,0,
               0xffffffff);
    *(undefined4 *)&(this->DialogueInterface).field_0x1c8 = uVar4;
    *(dword **)&(this->DialogueInterface).field_0x1d0 = pdVar10;
    *(undefined4 *)&(this->DialogueInterface).field_0x1d4 = unaff_EDI;
    *(undefined4 *)&(this->DialogueInterface).field_0x1cc = 0;
    *(dword **)&(this->DialogueInterface).field_0x1d8 = pdVar9;
    *(dword **)&(this->DialogueInterface).field_0x1dc = &dStack_a0;
    (**(code **)(*piVar3 + 0x54))(1);
  }
  local_7c = 0xf;
  local_80 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_90 = (void *)((uint)local_90 & 0xffffff00);
  pcVar1 = "ListenerTextLbl";
  do {
    pcVar7 = pcVar1;
    pcVar1 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_94,"ListenerTextLbl",(uint)(pcVar7 + -0x655898));
  local_4._0_1_ = 0x10;
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             (&(this->DialogueInterface).field_0x274 + *(int *)(*(int *)this_00 + 4)
                             ),(int)&local_94);
  local_4._0_1_ = 5;
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free(local_90);
  }
  local_7c = 0xf;
  local_80 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_90 = (void *)((uint)local_90 & 0xffffff00);
  if (piVar3 != (int *)0x0) {
    pdVar10 = &local_a4;
    (**(code **)(*piVar3 + 0x14))();
    pdVar9 = &local_a4;
    (**(code **)(*piVar3 + 0x40))();
    (**(code **)(*piVar3 + 0xd0))(auStack_68);
    (**(code **)(*piVar3 + 0x14c))(auStack_50,0,0,0);
    iVar6 = (**(code **)(*piVar3 + 0x154))();
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&(this->DialogueInterface).field_0x1e0,(_String_base *)&local_7c,0,
               0xffffffff);
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&(this->DialogueInterface).field_0x1fc,(_String_base *)local_60,0,
               0xffffffff);
    *(dword **)&(this->DialogueInterface).field_0x220 = pdVar10;
    *(int *)&(this->DialogueInterface).field_0x218 = iVar6;
    *(dword **)&(this->DialogueInterface).field_0x22c = &dStack_a0;
    *(undefined4 *)&(this->DialogueInterface).field_0x224 = unaff_EDI;
    *(undefined4 *)&(this->DialogueInterface).field_0x21c = 0;
    *(dword **)&(this->DialogueInterface).field_0x228 = pdVar9;
    *(undefined4 *)&(this->DialogueInterface).field_0x230 = 0;
    dStack_84 = 0xf;
    dStack_88 = 0;
    pvStack_98 = (void *)((uint)pvStack_98 & 0xffffff00);
    pcVar1 = "ListenerWin";
    do {
      pcVar7 = pcVar1;
      pcVar1 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)auStack_9c,"ListenerWin",(uint)(pcVar7 + -0x6558c4));
    local_28._0_1_ = 0x11;
    piVar5 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               (&(this->DialogueInterface).field_0x274 +
                               *(int *)(*(int *)this_00 + 4)),(int)auStack_9c);
    local_28._0_1_ = 5;
    if (0xf < dStack_84) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_98);
    }
    dStack_84 = 0xf;
    dStack_88 = 0;
    pvStack_98 = (void *)((uint)pvStack_98 & 0xffffff00);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0x48))(&local_44,&stack0xffffff3c);
      (**(code **)(*piVar3 + 0x48))(&local_44,&dStack_88);
      *(int *)&(this->DialogueInterface).field_0x234 =
           ((*(int *)&(this->DialogueInterface).field_0x158 - (int)local_80) -
           *(int *)&(this->DialogueInterface).field_0x22c) + iVar6;
    }
    (**(code **)(*piVar3 + 0x54))(1);
  }
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_38);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38 = (void *)((uint)local_38 & 0xffffff00);
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    _free(local_54);
  }
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  ExceptionList = local_c;
  pGVar8 = (GameDialogueInterface *)FUN_00616e15(local_10 ^ unaff_retaddr);
  return pGVar8;
}


#include "../include/GameDialogueInterface.h"
#include "../include/GameDialogueInterface.h"
