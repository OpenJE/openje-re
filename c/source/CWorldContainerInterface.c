#include "../include/CWorldContainerInterface.h"

void __thiscall CWorldContainerInterface::meth_0x4574b0(CWorldContainerInterface *this)

{
  int iVar1;
  
  iVar1 = GameActionEquip::meth_0x54be10((GameActionEquip *)this);
  if (iVar1 == 0) {
    return;
  }
  FUN_006165e0(*(cls_0x616328 **)(iVar1 + 0x168),0,&Inventory::RTTI_Type_Descriptor,
               &GameInventory::RTTI_Type_Descriptor,0);
  return;
}



undefined4 __thiscall
CWorldContainerInterface::meth_0x4574f0(CWorldContainerInterface *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)&(this->CSound).field_0x110;
  do {
    if (*piVar2 == param_1) {
      return *(undefined4 *)(&(this->CSound).field_0x114 + iVar1 * 8);
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 2;
  } while (iVar1 < 10);
  return 0;
}



void __thiscall CWorldContainerInterface::meth_0x457520(CWorldContainerInterface *this)

{
  dword dVar1;
  dword *pdVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  cls_0x457460 *pcVar6;
  int iVar7;
  
  iVar3 = Gregorian::Get_mbr_0x28((Gregorian *)this->mbr_0x1a0);
  iVar7 = 0;
  iVar5 = iVar3 * 0x14;
  pcVar6 = (cls_0x457460 *)&(this->CSound).field_0x110;
  while( true ) {
    dVar1 = (this->CSound).mbr_0x104;
    if (dVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)((this->CSound).mbr_0x108 - dVar1) >> 2;
    }
    if (iVar4 <= iVar3 * 5 + iVar7) break;
    cls_0x457460::meth_0x457460(pcVar6,*(int **)((this->CSound).mbr_0x104 + iVar5));
    pdVar2 = &pcVar6->mbr_0x0;
    iVar7 = iVar7 + 1;
    iVar5 = iVar5 + 4;
    pcVar6 = pcVar6 + 1;
    (**(code **)(*(int *)*pdVar2 + 0x54))(0);
    if (9 < iVar7) {
      return;
    }
  }
  if (iVar7 < 10) {
    pcVar6 = (cls_0x457460 *)(&(this->CSound).field_0x110 + iVar7 * 8);
    iVar7 = 10 - iVar7;
    do {
      cls_0x457460::meth_0x457460(pcVar6,(int *)0x0);
      pdVar2 = &pcVar6->mbr_0x0;
      pcVar6 = pcVar6 + 1;
      (**(code **)(*(int *)*pdVar2 + 0x54))(1);
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}



void __thiscall
CWorldContainerInterface::virt_meth_0x4575d0
          (CWorldContainerInterface *this,int *param_1,int *param_2)

{
  GameClient *this_00;
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  char *pcVar7;
  
  if (((ScrollBar *)this->mbr_0x1a0 != (ScrollBar *)0x0) &&
     (uVar2 = GUI::ScrollBar::meth_0x4b8b90((ScrollBar *)this->mbr_0x1a0,param_1,param_2),
     (char)uVar2 == '\x01')) {
    meth_0x457520(this);
  }
  if (*param_2 == 6) {
    this_00 = *(GameClient **)(DAT_0070bd90 + 0x2c);
    pcVar7 = "Done";
    pcVar3 = (char *)(**(code **)(*param_1 + 0x50))();
    iVar4 = __stricmp(pcVar3,pcVar7);
    if (iVar4 == 0) {
      CLoadMapInterface::meth_0x495220((CLoadMapInterface *)this,1);
      CSound::meth_0x4c7eb0(&this->CSound,0,0,0);
    }
    else {
      pcVar7 = "TakeAll";
      pcVar3 = (char *)(**(code **)(*param_1 + 0x50))();
      iVar4 = __stricmp(pcVar3,pcVar7);
      if (iVar4 == 0) {
        CSound::meth_0x4c7eb0(&this->CSound,0,0,0);
        piVar5 = (int *)(this->CSound).mbr_0x104;
        if (piVar5 != (int *)(this->CSound).mbr_0x108) {
          do {
            GameClient::meth_0x58a2d0
                      (this_00,(this->CSound).mbr_0xfc,
                       *(undefined4 *)(*(int *)(*(int *)(*piVar5 + 4) + 4) + 0x1e0 + *piVar5),
                       (this->CSound).mbr_0xf8);
            piVar5 = piVar5 + 1;
          } while (piVar5 != (int *)(this->CSound).mbr_0x108);
        }
      }
      else {
        iVar4 = meth_0x4574f0(this,(int)param_1);
        if (iVar4 != 0) {
          CSound::meth_0x4c7eb0(&this->CSound,0,0,0);
          GameClient::meth_0x58a2d0
                    (this_00,(this->CSound).mbr_0xfc,
                     *(undefined4 *)(*(int *)(*(int *)(iVar4 + 4) + 4) + 0x1e0 + iVar4),
                     (this->CSound).mbr_0xf8);
        }
      }
    }
  }
  if (*param_2 == 0) {
    iVar4 = Get_Interface_mbr_0x24(this);
    puVar6 = *(undefined4 **)(iVar4 + 4);
    if (puVar6 != (undefined4 *)0x0) {
      puVar6 = (undefined4 *)*puVar6;
    }
    if (param_1 == (int *)puVar6[2]) {
      if (DAT_0070bd98 == 0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = (undefined4 *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
      }
      (**(code **)*puVar6)();
      piVar5 = (int *)GameActionEquip::meth_0x54be10((GameActionEquip *)(this->CSound).mbr_0xfc);
      if ((((piVar5 == (int *)0x0) || (*(char *)((int)piVar5 + 0x3a2) == '\x01')) ||
          (*(char *)(piVar5 + 0xe8) == '\0')) ||
         ((cVar1 = (**(code **)(*piVar5 + 0x50))(), cVar1 == '\x01' ||
          (cVar1 = (**(code **)(*piVar5 + 0x1c))(), cVar1 == '\0')))) {
        CLoadMapInterface::meth_0x495220((CLoadMapInterface *)this,1);
      }
      piVar5 = (int *)GameActionEquip::meth_0x54be10((GameActionEquip *)(this->CSound).mbr_0xf8);
      if (((piVar5 == (int *)0x0) || (*(char *)((int)piVar5 + 0x3a2) == '\x01')) ||
         ((*(char *)(piVar5 + 0xe8) == '\0' ||
          (cVar1 = (**(code **)(*piVar5 + 0x1c))(), cVar1 == '\0')))) {
        CLoadMapInterface::meth_0x495220((CLoadMapInterface *)this,1);
      }
    }
  }
  GUI::Interface::virt_meth_0x4958d0(&this->Interface,param_1);
  return;
}



void __thiscall CWorldContainerInterface::meth_0x457a10(CWorldContainerInterface *this)

{
  void *_Memory;
  
  _Memory = (void *)(this->CSound).mbr_0x104;
  if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  (this->CSound).mbr_0x104 = 0;
  (this->CSound).mbr_0x108 = 0;
  (this->CSound).mbr_0x10c = 0;
  if ((undefined4 *)this->mbr_0x1a0 != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0x1a0)(1);
    this->mbr_0x1a0 = 0;
  }
  if ((undefined4 *)this->mbr_0x1a4 != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0x1a4)(1);
    this->mbr_0x1a4 = 0;
  }
  if ((undefined4 *)this->mbr_0x1a8 != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0x1a8)(1);
    this->mbr_0x1a8 = 0;
  }
  return;
}



CWorldContainerInterface * __thiscall
CWorldContainerInterface::~CWorldContainerInterface(CWorldContainerInterface *this)

{
  void *_Memory;
  CWorldContainerInterface *pCVar1;
  void *pvStack_c;
  undefined *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0062fed1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(CWorldContainerInterface__vftable_65cb9c **)&this->Interface =
       &CWorldContainerInterface__vftable_65cb9c_0065cb9c;
  local_4 = 2;
  meth_0x457a10(this);
  _Memory = (void *)(this->CSound).mbr_0x104;
  if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  (this->CSound).mbr_0x104 = 0;
  (this->CSound).mbr_0x108 = 0;
  (this->CSound).mbr_0x10c = 0;
  local_4 = local_4 & 0xffffff00;
  CSound::~CSound(&this->CSound);
  local_4 = 0xffffffff;
  pCVar1 = (CWorldContainerInterface *)GUI::Interface::meth_0x495500(&this->Interface);
  ExceptionList = pvStack_c;
  return pCVar1;
}



CWorldContainerInterface * __thiscall
CWorldContainerInterface::CWorldContainerInterface
          (CWorldContainerInterface *this,_String_base *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  dword dVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  CWorldContainerInterface *pCVar8;
  int iVar9;
  uint unaff_EBX;
  uint unaff_retaddr;
  int local_130;
  void *local_12c;
  dword dStack_124;
  dword dStack_120;
  VFX_Parameter__vftable_673a20 *local_11c;
  undefined4 local_118;
  CWorldContainerInterface *local_114;
  uint uStack_18;
  void *pvStack_14;
  uint local_10;
  undefined4 uStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062ff2b;
  uStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &uStack_c;
  local_114 = this;
  GUI::Interface::Interface(&this->Interface,param_1);
  local_4 = 0;
  *(CWorldContainerInterface__vftable_65cb9c **)&this->Interface =
       &CWorldContainerInterface__vftable_65cb9c_0065cb9c;
  CSound::CSound(&this->CSound);
  (this->CSound).mbr_0x104 = 0;
  (this->CSound).mbr_0x108 = 0;
  (this->CSound).mbr_0x10c = 0;
  local_4._0_1_ = 2;
  puVar3 = (undefined4 *)&(this->CSound).field_0x110;
  iVar9 = 10;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = puVar3 + 2;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  this->mbr_0x1ac = 0;
  this->mbr_0x1b0 = 0;
  this->mbr_0x1b4 = 0;
  local_118 = 0xf;
  local_11c = (VFX_Parameter__vftable_673a20 *)0x0;
  local_12c = (void *)((uint)local_12c & 0xffffff00);
  pcVar2 = "Container.INT";
  do {
    pcVar4 = pcVar2;
    pcVar2 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_130,"Container.INT",(uint)(pcVar4 + -0x65cbc4));
  local_4._0_1_ = 3;
  CLoadMapInterface::meth_0x495b50((CLoadMapInterface *)this,&local_130);
  local_4._0_1_ = 2;
  if (0xf < local_118) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  (this->CSound).mbr_0xf8 = 0;
  (this->CSound).mbr_0xfc = 0;
  this->mbr_0x1a0 = 0;
  this->mbr_0x1a4 = 0;
  this->mbr_0x1a8 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x3c = 0;
  local_118 = 0xf;
  local_11c = (VFX_Parameter__vftable_673a20 *)0x0;
  local_12c = (void *)((uint)local_12c & 0xffffff00);
  pcVar2 = "Main";
  do {
    pcVar4 = pcVar2;
    pcVar2 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_130,"Main",(uint)(pcVar4 + -0x65cbbc));
  local_4._0_1_ = 4;
  dVar5 = CLoadMapInterface::meth_0x495740((CLoadMapInterface *)this,(int)&local_130);
  this->mbr_0x34 = dVar5;
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0xf < local_118) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  (**(code **)(*(int *)this->mbr_0x34 + 0x14))(&this->mbr_0x38,&this->mbr_0x3c);
  iVar9 = 0;
  puVar3 = (undefined4 *)&(this->CSound).field_0x110;
  while( true ) {
    FUN_00616d8c((char *)&local_118,(byte *)"Slot%d");
    puVar6 = &local_118;
    dStack_120 = 0xf;
    dStack_124 = 0;
    do {
      cVar1 = *(char *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xfffffec8,(char *)&local_118,
               (int)puVar6 - ((int)&local_118 + 1));
    uStack_c._0_1_ = 5;
    uVar7 = (**(code **)(*(int *)this->mbr_0x34 + 0xb4))(&stack0xfffffec8);
    *puVar3 = uVar7;
    uStack_c = (void *)CONCAT31(uStack_c._1_3_,2);
    if (0xf < dStack_120) break;
    iVar9 = iVar9 + 1;
    puVar3 = puVar3 + 2;
    dStack_120 = 0xf;
    dStack_124 = 0;
    unaff_EBX = unaff_EBX & 0xffffff00;
    if (9 < iVar9) {
      (*((this->CSound).vftptr_0x0)->virt_meth_0x4c82e0_0)(&this->CSound,(int *)0x653134,0);
      ExceptionList = pvStack_14;
      pCVar8 = (CWorldContainerInterface *)FUN_00616e15(uStack_18 ^ (uint)puStack_8);
      return pCVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)(unaff_EBX & 0xffffff00));
}



int * __thiscall
CWorldContainerInterface::virt_meth_0x458030(CWorldContainerInterface *this,byte param_1)

{
  ~CWorldContainerInterface(this);
  if ((param_1 & 1) != 0) {
    FUN_004a7540((int *)this);
  }
  return (int *)this;
}



int __thiscall CWorldContainerInterface::Get_Interface_mbr_0x24(CWorldContainerInterface *this)

{
  return (int)&(this->Interface).mbr_0x24;
}



int __thiscall
CWorldContainerInterface::meth_0x4952b0
          (CWorldContainerInterface *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int **ppiVar1;
  int iVar2;
  int *piVar3;
  
  if ((this->Interface).mbr_0x20 == 0) {
    ppiVar1 = (int **)(this->Interface).mbr_0x28;
    if (ppiVar1 == (int **)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = *ppiVar1;
    }
    if (piVar3 != (int *)(this->Interface).mbr_0x28) {
      do {
        iVar2 = (**(code **)(*(int *)piVar3[2] + 0xbc))(param_1,param_2,param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)(this->Interface).mbr_0x28);
    }
  }
  return 0;
}


#include "../include/CWorldContainerInterface.h"
