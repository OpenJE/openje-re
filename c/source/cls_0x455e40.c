#include "../include/cls_0x455e40.h"

/* WARNING: Removing unreachable block (ram,0x00456df3) */
/* WARNING: Removing unreachable block (ram,0x00456d10) */
/* WARNING: Removing unreachable block (ram,0x00456bc2) */
/* WARNING: Removing unreachable block (ram,0x00456add) */
/* WARNING: Removing unreachable block (ram,0x00456987) */
/* WARNING: Removing unreachable block (ram,0x004567fb) */
/* WARNING: Removing unreachable block (ram,0x004565f2) */
/* WARNING: Removing unreachable block (ram,0x004564ea) */
/* WARNING: Removing unreachable block (ram,0x0045644e) */
/* WARNING: Removing unreachable block (ram,0x00456572) */
/* WARNING: Removing unreachable block (ram,0x00456703) */
/* WARNING: Removing unreachable block (ram,0x0045686d) */
/* WARNING: Removing unreachable block (ram,0x00456a11) */
/* WARNING: Removing unreachable block (ram,0x00456b54) */
/* WARNING: Removing unreachable block (ram,0x00456c30) */
/* WARNING: Removing unreachable block (ram,0x00456d85) */
/* WARNING: Removing unreachable block (ram,0x00456e59) */
/* WARNING: Removing unreachable block (ram,0x00456362) */

cls_0x455e40 * __thiscall
cls_0x455e40::cls_0x455e40(cls_0x455e40 *this,_String_base *param_1,int param_2)

{
  bool bVar1;
  undefined3 uVar2;
  dword dVar3;
  cls_0x44da10 *pcVar4;
  AreaMapWindow *pAVar5;
  int *piVar6;
  void *pvVar7;
  char *pcVar8;
  CounterControl *pCVar9;
  cls_0x455e40 *pcVar10;
  char *pcVar11;
  int iVar12;
  undefined *puVar13;
  char cVar14;
  uint unaff_retaddr;
  undefined4 in_stack_ffffff34;
  uint in_stack_ffffff38;
  char *local_78 [2];
  VFX_Parameter__vftable_673a20 *local_70;
  char *local_6c;
  char *pcStack_68;
  char *pcStack_64;
  char *pcStack_60;
  char *local_5c;
  char *local_58;
  char *pcStack_54;
  char *pcStack_50;
  char *pcStack_4c;
  char *pcStack_48;
  char *pcStack_44;
  char *pcStack_40;
  dword dStack_3c;
  uint uStack_38;
  void *pvStack_34;
  undefined uStack_2c;
  uint uStack_28;
  CounterControl *pCStack_24;
  undefined uStack_20;
  undefined4 local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062fdda;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  if (param_2 != 0) {
    ExceptionList = &pvStack_c;
    (this->cls_0x4395a0).mbr_0x0 = 0x65befc;
    CEngineInterface::CEngineInterface((CEngineInterface *)&this->field_0x1e0,param_1);
    local_4 = 0;
  }
  bVar1 = false;
  cls_0x4395a0::cls_0x4395a0(&this->cls_0x4395a0,param_1,0);
  *(CPipBoyInterface__vftable_65bdfc **)
   ((int)&(this->cls_0x4395a0).mbr_0x0 + *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)) =
       &CPipBoyInterface__vftable_65bdfc_0065bdfc;
  iVar12 = *(int *)((this->cls_0x4395a0).mbr_0x0 + 4);
  *(int *)(iVar12 + -4 + (int)this) = iVar12 + -0x1e0;
  *(undefined4 *)&(this->cls_0x4395a0).CEngineInterface.Interface = 0;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x4 = 0;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x8 = 0;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0xc = 0;
  *(undefined4 *)&(this->cls_0x4395a0).CEngineInterface.Interface.field_0x10 = 0;
  *(undefined4 *)&(this->cls_0x4395a0).CEngineInterface.Interface.field_0x14 = 0;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x18 = 0;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x1c = 0;
  *(undefined4 *)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x20 = 0;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x24 = 0;
  this->mbr_0x48 = 0xf;
  this->mbr_0x44 = 0;
  *(undefined *)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x2c = 0;
  this->mbr_0x6c = 0xf;
  this->mbr_0x68 = 0;
  this->mbr_0x58 = 0;
  this->mbr_0x78 = 0xffffffff;
  this->mbr_0x7c = 0xffffffff;
  this->mbr_0x84 = 0;
  this->mbr_0x88 = 0;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  *(undefined *)&this->mbr_0x8c = (undefined)param_2;
  dVar3 = FUN_0056a160();
  this->mbr_0x90 = dVar3;
  *(undefined *)(dVar3 + 0x29) = 1;
  *(dword *)(this->mbr_0x90 + 4) = this->mbr_0x90;
  *(dword *)this->mbr_0x90 = this->mbr_0x90;
  *(dword *)(this->mbr_0x90 + 8) = this->mbr_0x90;
  this->mbr_0x94 = 0;
  this->mbr_0xd4 = 0x7fffffff;
  this->mbr_0xdc = 0x7fffffff;
  local_4._0_1_ = 4;
  this->mbr_0x98 = 0;
  this->mbr_0x9c = 0;
  this->mbr_0xa0 = 0;
  this->mbr_0xa4 = 0xffffffff;
  this->mbr_0xa8 = 0xffffffff;
  this->mbr_0xb0 = 0;
  this->mbr_0xb4 = 0;
  this->mbr_0xb8 = 0;
  this->mbr_0xbc = 0;
  this->mbr_0xc4 = 0;
  this->mbr_0xc8 = 0;
  this->mbr_0xcc = 0;
  this->mbr_0xd0 = 0;
  this->mbr_0xd8 = 0x80000000;
  this->mbr_0xe0 = 0x80000000;
  this->mbr_0xe4 = 0xffffffff;
  AreaMapNote::AreaMapNote(&this->AreaMapNote);
  this->mbr_0x154 = 1;
  this->mbr_0x158 = 2;
  this->mbr_0x160 = 0;
  this->mbr_0x164 = 0;
  this->mbr_0x168 = 0;
  this->mbr_0x170 = 0;
  this->mbr_0x174 = 0;
  this->mbr_0x178 = 0;
  this->mbr_0x17c = 0;
  this->mbr_0x184 = 0;
  this->mbr_0x1a0 = 0xf;
  this->mbr_0x19c = 0;
  this->mbr_0x18c = 0;
  local_58 = (char *)0xf;
  this->mbr_0x1a4 = 0xffffffff;
  this->mbr_0x1a8 = 0xffffffff;
  local_4._0_1_ = 8;
  this->mbr_0x1b0 = 0;
  this->mbr_0x1b4 = 0;
  this->mbr_0x1b8 = 0;
  this->mbr_0x1bc = 0;
  this->mbr_0x1c0 = 0;
  this->mbr_0x1c4 = 400;
  this->mbr_0x1c8 = 0x23;
  *(undefined4 *)&(this->cls_0x4395a0).field_0x4 = 0;
  local_5c = (char *)0x0;
  local_6c = (char *)((uint)local_6c & 0xffffff00);
  pcVar8 = "PipBoy.INT";
  do {
    pcVar11 = pcVar8;
    pcVar8 = pcVar11 + 1;
  } while (*pcVar11 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_70,"PipBoy.INT",(uint)(pcVar11 + -0x65bef0));
  local_4._0_1_ = 9;
  CLoadMapInterface::meth_0x495b50
            ((CLoadMapInterface *)
             ((int)&(this->cls_0x4395a0).mbr_0x0 + *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),
             (int *)&local_70);
  local_4._0_1_ = 8;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  pcVar4 = (cls_0x44da10 *)FUN_004a7680(0x4c);
  local_4._0_1_ = 10;
  if (pcVar4 == (cls_0x44da10 *)0x0) {
    pcVar4 = (cls_0x44da10 *)0x0;
  }
  else {
    local_58 = (char *)0xf;
    local_5c = (char *)0x0;
    local_6c = (char *)((uint)local_6c & 0xffffff00);
    pcVar8 = "AreaMapNote";
    do {
      pcVar11 = pcVar8;
      pcVar8 = pcVar11 + 1;
    } while (*pcVar11 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&local_70,"AreaMapNote",(uint)(pcVar11 + -0x65bee4));
    bVar1 = true;
    local_4._0_1_ = 0xb;
    pcVar4 = cls_0x44da10::cls_0x44da10(pcVar4,(_String_base *)&local_70,1);
  }
  this->mbr_0xc0 = (dword)pcVar4;
  local_4 = 8;
  if ((bVar1) && (0xf < local_58)) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  CLoadMapInterface::meth_0x495220
            ((CLoadMapInterface *)
             (*(int *)(*(int *)this->mbr_0xc0 + 4) + (int)(int *)this->mbr_0xc0),1);
  local_58 = (char *)0xf;
  local_5c = (char *)0x0;
  local_6c = (char *)((uint)local_6c & 0xffffff00);
  pcVar8 = "picLilPip1";
  do {
    pcVar11 = pcVar8;
    pcVar8 = pcVar11 + 1;
  } while (*pcVar11 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_70,"picLilPip1",(uint)(pcVar11 + -0x65bc54));
  local_4._0_1_ = 0xd;
  pAVar5 = (AreaMapWindow *)
           CLoadMapInterface::meth_0x495740
                     ((CLoadMapInterface *)
                      ((int)&(this->cls_0x4395a0).mbr_0x0 +
                      *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_70);
  local_4._0_1_ = 8;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  local_58 = (char *)0xf;
  local_5c = (char *)0x0;
  local_6c = (char *)((uint)local_6c & 0xffffff00);
  (*(pAVar5->Picture).Window.Base.vftptr_0x0[1].virt_meth_0x4b2850_28)
            ((Base *)pAVar5,(int)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x8);
  (*((pAVar5->Picture).Window.Base.vftptr_0x0)->virt_meth_0x4b27c0_20)(pAVar5);
  AreaMapWindow::meth_0x4aa910(pAVar5,4);
  pcStack_64 = (char *)0xf;
  pcStack_68 = (char *)0x0;
  pcVar8 = "picLilPip2";
  do {
    pcVar11 = pcVar8;
    pcVar8 = pcVar11 + 1;
  } while (*pcVar11 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&stack0xffffff84,"picLilPip2",(uint)(pcVar11 + -0x65bc48));
  local_10._0_1_ = 0xe;
  pAVar5 = (AreaMapWindow *)
           CLoadMapInterface::meth_0x495740
                     ((CLoadMapInterface *)
                      ((int)&(this->cls_0x4395a0).mbr_0x0 +
                      *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&stack0xffffff84);
  local_10._0_1_ = 8;
  if (pcStack_64 < 0x10) {
    pcStack_64 = (char *)0xf;
    pcStack_68 = (char *)0x0;
    (*(pAVar5->Picture).Window.Base.vftptr_0x0[1].virt_meth_0x4b2850_28)
              ((Base *)pAVar5,(int)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x18);
    (*((pAVar5->Picture).Window.Base.vftptr_0x0)->virt_meth_0x4b27c0_20)(pAVar5);
    AreaMapWindow::meth_0x4aa910(pAVar5,4);
    uVar2 = *(undefined3 *)&(pAVar5->Picture).Window.Base.field_0xd25;
    (this->cls_0x4395a0).CEngineInterface.Interface.HeapTracker =
         (HeapTracker)(pAVar5->Picture).Window.Base.field_0xd24;
    *(undefined3 *)&(this->cls_0x4395a0).CEngineInterface.Interface.field_0x1 = uVar2;
    (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x4 =
         *(dword *)&(pAVar5->Picture).Window.Base.field_0xd28;
    (*(pAVar5->Picture).Window.Base.vftptr_0x0[7].virt_meth_0x4af060_4)(pAVar5);
    pcVar8 = "lblAlarmClock";
    do {
      pcVar11 = pcVar8;
      pcVar8 = pcVar11 + 1;
    } while (*pcVar11 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffff74,"lblAlarmClock",(uint)(pcVar11 + -0x65bed4));
    uStack_20 = 0xf;
    piVar6 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&(this->cls_0x4395a0).mbr_0x0 +
                               *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&stack0xffffff74);
    uStack_20 = 8;
    (**(code **)(*piVar6 + 0x140))();
    (**(code **)(*piVar6 + 300))();
    dVar3 = (**(code **)(*piVar6 + 0x164))();
    this->mbr_0x50 = dVar3;
    (**(code **)(*piVar6 + 0x130))();
    dVar3 = (**(code **)(*piVar6 + 0x16c))();
    this->mbr_0x70 = dVar3;
    pvVar7 = operator_new(0x38);
    this->mbr_0x74 = (dword)pvVar7;
    iVar12 = 0;
    do {
      *(undefined4 *)(this->mbr_0x74 + iVar12 * 4) = 0xffffffff;
      pcVar8 = FUN_0044a280(iVar12);
      if (pcVar8 != (char *)0x0) {
        pcVar11 = pcVar8;
        do {
          cVar14 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar14 != '\0');
        ::cls_0x50db20::meth_0x401bd0
                  ((cls_0x50db20 *)&stack0xffffff68,pcVar8,(int)pcVar11 - (int)(pcVar8 + 1));
        uStack_2c = 0x10;
        piVar6 = (int *)CLoadMapInterface::meth_0x495740
                                  ((CLoadMapInterface *)
                                   ((int)&(this->cls_0x4395a0).mbr_0x0 +
                                   *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&stack0xffffff68
                                  );
        uStack_2c = 8;
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 0x140))();
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < 0xe);
    pcVar8 = "lblTasks1";
    do {
      pcVar11 = pcVar8;
      pcVar8 = pcVar11 + 1;
    } while (*pcVar11 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffff68,"lblTasks1",(uint)(pcVar11 + -0x65bec8));
    uStack_2c = 0x11;
    piVar6 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&(this->cls_0x4395a0).mbr_0x0 +
                               *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&stack0xffffff68);
    uStack_2c = 8;
    dVar3 = (**(code **)(*piVar6 + 0x16c))();
    this->mbr_0x80 = dVar3;
    pcVar8 = "lblMaps1";
    do {
      pcVar11 = pcVar8;
      pcVar8 = pcVar11 + 1;
    } while (*pcVar11 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffff68,"lblMaps1",(uint)(pcVar11 + -0x65bebc));
    uStack_2c = 0x12;
    piVar6 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&(this->cls_0x4395a0).mbr_0x0 +
                               *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&stack0xffffff68);
    uStack_2c = 8;
    dVar3 = (**(code **)(*piVar6 + 0x16c))();
    this->mbr_0xac = dVar3;
    pcVar8 = "lblDownloads1";
    do {
      pcVar11 = pcVar8;
      pcVar8 = pcVar11 + 1;
    } while (*pcVar11 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffff68,"lblDownloads1",(uint)(pcVar11 + -0x65beac));
    uStack_2c = 0x13;
    piVar6 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&(this->cls_0x4395a0).mbr_0x0 +
                               *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&stack0xffffff68);
    uStack_2c = 8;
    dVar3 = (**(code **)(*piVar6 + 0x16c))();
    pcVar8 = "lbl10min";
    this->mbr_0x1ac = dVar3;
    local_70 = (VFX_Parameter__vftable_673a20 *)0x65b700;
    local_6c = "lbl3hrs";
    pcStack_68 = "lbl4hrs";
    pcStack_64 = "lbl5hrs";
    pcStack_60 = "lbl6hrs";
    local_5c = "lblMorning";
    local_58 = "lblNoon";
    pcStack_54 = "lblEvening";
    pcStack_50 = "lblMidnight";
    pcStack_4c = "lblHealed";
    pcStack_48 = "lblPartyHealed";
    pcStack_44 = "lblRest";
    pcStack_40 = "lblMapMode";
    dStack_3c = 0;
    puVar13 = &stack0xffffff84;
    do {
      pcVar11 = pcVar8;
      do {
        cVar14 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar14 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)&stack0xffffff68,pcVar8,(int)pcVar11 - (int)(pcVar8 + 1));
      uStack_2c = 0x15;
      piVar6 = (int *)CLoadMapInterface::meth_0x495740
                                ((CLoadMapInterface *)
                                 ((int)&(this->cls_0x4395a0).mbr_0x0 +
                                 *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&stack0xffffff68);
      uStack_2c = 8;
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0xe8))();
      }
      pcVar8 = *(char **)(puVar13 + 4);
      puVar13 = puVar13 + 4;
    } while (pcVar8 != (char *)0x0);
    pCStack_24 = (CounterControl *)operator_new(0xcc);
    uStack_2c = 0x16;
    if (pCStack_24 == (CounterControl *)0x0) {
      pCVar9 = (CounterControl *)0x0;
    }
    else {
      pCVar9 = CounterControl::CounterControl(pCStack_24);
    }
    uStack_2c = 8;
    this->mbr_0x1cc = (dword)pCVar9;
    CounterControl::meth_0x4332e0(pCVar9,2);
    CounterControl::meth_0x430a30((CounterControl *)this->mbr_0x1cc,1,0,3);
    pcVar8 = "winDate1";
    do {
      pcVar11 = pcVar8;
      pcVar8 = pcVar11 + 1;
    } while (*pcVar11 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffff68,"winDate1",(uint)(pcVar11 + -0x65bea0));
    uStack_2c = 0x17;
    piVar6 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&(this->cls_0x4395a0).mbr_0x0 +
                               *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&stack0xffffff68);
    CounterControl::meth_0x432b60((CounterControl *)this->mbr_0x1cc,0,piVar6);
    uStack_2c = 8;
    pcVar8 = "winDate10";
    do {
      pcVar11 = pcVar8;
      pcVar8 = pcVar11 + 1;
    } while (*pcVar11 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffff68,"winDate10",(uint)(pcVar11 + -0x65be94));
    uStack_2c = 0x18;
    piVar6 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&(this->cls_0x4395a0).mbr_0x0 +
                               *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&stack0xffffff68);
    CounterControl::meth_0x432b60((CounterControl *)this->mbr_0x1cc,1,piVar6);
    uStack_2c = 8;
    *(undefined4 *)(this->mbr_0x1cc + 0xc4) = 0x3dcccccd;
    pCStack_24 = (CounterControl *)operator_new(0xcc);
    uStack_2c = 0x19;
    if (pCStack_24 == (CounterControl *)0x0) {
      pCVar9 = (CounterControl *)0x0;
    }
    else {
      pCVar9 = CounterControl::CounterControl(pCStack_24);
    }
    this->mbr_0x1d0 = (dword)pCVar9;
    pCVar9->mbr_0xc8 = 0xc;
    uStack_2c = 8;
    CounterControl::meth_0x4332e0((CounterControl *)this->mbr_0x1d0,1);
    CounterControl::meth_0x430a30((CounterControl *)this->mbr_0x1d0,0,0,0xb);
    pCStack_24 = (CounterControl *)&stack0xffffff34;
    ::cls_0x50db20::meth_0x433430
              ((cls_0x50db20 *)(this->mbr_0x1d0 + 0x98),(_String_base *)0xc,in_stack_ffffff34,
               (void *)(in_stack_ffffff38 & 0xffffff00));
    CounterControl::meth_0x430890((CounterControl *)this->mbr_0x1d0,0xb);
    cVar14 = '\0';
    iVar12 = 0;
    do {
      cVar14 = cVar14 + '\x01';
      uStack_2c = 0x1a;
      FUN_004a1a30((cls_0x50db20 *)&stack0xffffff68,(byte *)"f3_month%02d.tga",cVar14);
      ::cls_0x50db20::meth_0x401b20
                ((cls_0x50db20 *)(*(int *)(this->mbr_0x1d0 + 0x9c) + iVar12),
                 (_String_base *)&stack0xffffff68,0,0xffffffff);
      uStack_2c = 8;
      iVar12 = iVar12 + 0x1c;
    } while (iVar12 < 0x150);
    pcVar8 = "winMonth";
    do {
      pcVar11 = pcVar8;
      pcVar8 = pcVar11 + 1;
    } while (*pcVar11 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffff68,"winMonth",(uint)(pcVar11 + -0x65be74));
    uStack_2c = 0x1b;
    piVar6 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&(this->cls_0x4395a0).mbr_0x0 +
                               *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&stack0xffffff68);
    CounterControl::meth_0x432b60((CounterControl *)this->mbr_0x1d0,0,piVar6);
    uStack_2c = 8;
    *(undefined4 *)(this->mbr_0x1d0 + 0xc4) = 0x3dcccccd;
    pCStack_24 = (CounterControl *)operator_new(0xcc);
    uStack_2c = 0x1c;
    if (pCStack_24 == (CounterControl *)0x0) {
      pCVar9 = (CounterControl *)0x0;
    }
    else {
      pCVar9 = CounterControl::CounterControl(pCStack_24);
    }
    uStack_2c = 8;
    this->mbr_0x1d4 = (dword)pCVar9;
    CounterControl::meth_0x4332e0(pCVar9,4);
    pcVar8 = "winYear1";
    do {
      pcVar11 = pcVar8;
      pcVar8 = pcVar11 + 1;
    } while (*pcVar11 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffff68,"winYear1",(uint)(pcVar11 + -0x65be68));
    uStack_2c = 0x1d;
    piVar6 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&(this->cls_0x4395a0).mbr_0x0 +
                               *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&stack0xffffff68);
    CounterControl::meth_0x432b60((CounterControl *)this->mbr_0x1d4,0,piVar6);
    uStack_2c = 8;
    pcVar8 = "winYear10";
    do {
      pcVar11 = pcVar8;
      pcVar8 = pcVar11 + 1;
    } while (*pcVar11 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffff68,"winYear10",(uint)(pcVar11 + -0x65be5c));
    uStack_2c = 0x1e;
    piVar6 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&(this->cls_0x4395a0).mbr_0x0 +
                               *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&stack0xffffff68);
    CounterControl::meth_0x432b60((CounterControl *)this->mbr_0x1d4,1,piVar6);
    uStack_2c = 8;
    pcVar8 = "winYear100";
    do {
      pcVar11 = pcVar8;
      pcVar8 = pcVar11 + 1;
    } while (*pcVar11 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffff68,"winYear100",(uint)(pcVar11 + -0x65be50));
    uStack_2c = 0x1f;
    piVar6 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&(this->cls_0x4395a0).mbr_0x0 +
                               *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&stack0xffffff68);
    CounterControl::meth_0x432b60((CounterControl *)this->mbr_0x1d4,2,piVar6);
    uStack_2c = 8;
    pcVar8 = "winYear1000";
    do {
      pcVar11 = pcVar8;
      pcVar8 = pcVar11 + 1;
    } while (*pcVar11 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffff68,"winYear1000",(uint)(pcVar11 + -0x65be44));
    uStack_2c = 0x20;
    piVar6 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&(this->cls_0x4395a0).mbr_0x0 +
                               *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&stack0xffffff68);
    CounterControl::meth_0x432b60((CounterControl *)this->mbr_0x1d4,3,piVar6);
    uStack_2c = 8;
    *(undefined4 *)(this->mbr_0x1d4 + 0xc4) = 0x3dcccccd;
    pCStack_24 = (CounterControl *)operator_new(0xcc);
    uStack_2c = 0x21;
    if (pCStack_24 == (CounterControl *)0x0) {
      pCVar9 = (CounterControl *)0x0;
    }
    else {
      pCVar9 = CounterControl::CounterControl(pCStack_24);
    }
    uStack_2c = 8;
    this->mbr_0x1d8 = (dword)pCVar9;
    CounterControl::meth_0x4332e0(pCVar9,4);
    CounterControl::meth_0x430a30((CounterControl *)this->mbr_0x1d8,1,0,5);
    CounterControl::meth_0x430a30((CounterControl *)this->mbr_0x1d8,3,0,2);
    pcVar8 = "winMinute1";
    do {
      pcVar11 = pcVar8;
      pcVar8 = pcVar11 + 1;
    } while (*pcVar11 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffff68,"winMinute1",(uint)(pcVar11 + -0x65be38));
    uStack_2c = 0x22;
    piVar6 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&(this->cls_0x4395a0).mbr_0x0 +
                               *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&stack0xffffff68);
    CounterControl::meth_0x432b60((CounterControl *)this->mbr_0x1d8,0,piVar6);
    uStack_2c = 8;
    pcVar8 = "winMinute10";
    do {
      pcVar11 = pcVar8;
      pcVar8 = pcVar11 + 1;
    } while (*pcVar11 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffff68,"winMinute10",(uint)(pcVar11 + -0x65be2c));
    uStack_2c = 0x23;
    piVar6 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&(this->cls_0x4395a0).mbr_0x0 +
                               *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&stack0xffffff68);
    CounterControl::meth_0x432b60((CounterControl *)this->mbr_0x1d8,1,piVar6);
    uStack_2c = 8;
    pcVar8 = "winHour1";
    do {
      pcVar11 = pcVar8;
      pcVar8 = pcVar11 + 1;
    } while (*pcVar11 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffff68,"winHour1",(uint)(pcVar11 + -0x65be20));
    uStack_2c = 0x24;
    piVar6 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&(this->cls_0x4395a0).mbr_0x0 +
                               *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&stack0xffffff68);
    CounterControl::meth_0x432b60((CounterControl *)this->mbr_0x1d8,2,piVar6);
    uStack_2c = 8;
    pcVar8 = "winHour10";
    do {
      pcVar11 = pcVar8;
      pcVar8 = pcVar11 + 1;
    } while (*pcVar11 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffff68,"winHour10",(uint)(pcVar11 + -0x65be14));
    uStack_2c = 0x25;
    piVar6 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&(this->cls_0x4395a0).mbr_0x0 +
                               *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&stack0xffffff68);
    CounterControl::meth_0x432b60((CounterControl *)this->mbr_0x1d8,3,piVar6);
    *(undefined4 *)(this->mbr_0x1d8 + 0xc4) = 0x3dcccccd;
    ExceptionList = pvStack_34;
    pcVar10 = (cls_0x455e40 *)FUN_00616e15(uStack_38 ^ uStack_28);
    return pcVar10;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)0x0);
}


