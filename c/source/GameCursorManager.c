#include "../include/GameCursorManager.h"

void __thiscall
GameCursorManager::meth_0x4361f0
          (GameCursorManager *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  (*(this->CursorManager).vftptr_0x0[5].virt_meth_0x5916e0_0)
            (&this->CursorManager,(byte)(&PTR_s_DefaultCursor_tga_006f2e10)[param_1]);
  return;
}



void __thiscall GameCursorManager::meth_0x436210(GameCursorManager *this,int param_1)

{
  this->mbr_0x34 = param_1;
  meth_0x4361f0(this,param_1,0,0);
  return;
}



GameCursorManager * __thiscall GameCursorManager::~GameCursorManager(GameCursorManager *this)

{
  int **ppiVar1;
  int *piVar2;
  GameCursorManager *local_4;
  
  (this->CursorManager).vftptr_0x0 =
       (CursorManager__vftable_69e774 *)&GameCursorManager__vftable_6550b4_006550b4;
  local_4 = this;
  if (0xf < this->mbr_0x90) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x7c);
  }
  this->mbr_0x90 = 0xf;
  this->mbr_0x8c = 0;
  *(undefined *)&this->mbr_0x7c = 0;
  if (0xf < this->mbr_0x68) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x54);
  }
  this->mbr_0x68 = 0xf;
  this->mbr_0x64 = 0;
  *(undefined *)&this->mbr_0x54 = 0;
  ppiVar1 = (int **)this->mbr_0x44;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0x40,(int **)&local_4,piVar2,(int *)ppiVar1)
  ;
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x44);
}



void __thiscall GameCursorManager::meth_0x436300(GameCursorManager *this)

{
  int **ppiVar1;
  GameCursorManager *local_4;
  
  ppiVar1 = (int **)this->mbr_0x44;
  local_4 = this;
  if (ppiVar1 == (int **)0x0) {
    GUI::Interface::meth_0x4b9d60
              ((Interface *)&this->mbr_0x40,(int **)&local_4,(int *)0x0,(int *)0x0);
    return;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->mbr_0x40,(int **)&local_4,*ppiVar1,(int *)ppiVar1);
  return;
}



GameCursorManager * __thiscall GameCursorManager::GameCursorManager(GameCursorManager *this)

{
  int **ppiVar1;
  dword dVar2;
  int *piVar3;
  GameCursorManager *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062da38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  CursorManager::CursorManager(&this->CursorManager);
  local_4 = 0;
  (this->CursorManager).vftptr_0x0 =
       (CursorManager__vftable_69e774 *)&GameCursorManager__vftable_6550b4_006550b4;
  dVar2 = FUN_0056e0b0();
  this->mbr_0x44 = dVar2;
  this->mbr_0x48 = 0;
  this->mbr_0x4c = 0;
  this->mbr_0x64 = 0;
  this->mbr_0x68 = 0xf;
  *(undefined *)&this->mbr_0x54 = 0;
  this->mbr_0x6c = 0;
  this->mbr_0x70 = 0;
  this->mbr_0x74 = 0;
  this->mbr_0x90 = 0xf;
  this->mbr_0x8c = 0;
  *(undefined *)&this->mbr_0x7c = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x38 = 0;
  ppiVar1 = (int **)this->mbr_0x44;
  if (ppiVar1 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->mbr_0x40,(int **)&local_10,piVar3,(int *)ppiVar1);
  this->mbr_0x9c = 0;
  this->mbr_0xa0 = 0;
  this->mbr_0xa4 = 0;
  this->mbr_0xa8 = 0;
  this->mbr_0xac = 0;
  ExceptionList = local_c;
  return this;
}



int * __thiscall GameCursorManager::virt_meth_0x4363f0(GameCursorManager *this,byte param_1)

{
  ~GameCursorManager(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}



void __thiscall GameCursorManager::meth_0x4364c0(GameCursorManager *this)

{
  char *pcVar1;
  undefined4 uVar2;
  Window *pWVar3;
  Label *pLVar4;
  char *pcVar5;
  void *unaff_EBX;
  uint unaff_EBP;
  dword unaff_EDI;
  void *pvStack_a4;
  dword dVar6;
  uint uVar7;
  void **_Memory;
  Window **ppWStack_60;
  Window *pWStack_50;
  dword dStack_4c;
  dword dStack_48;
  uint uStack_40;
  dword dStack_3c;
  dword dStack_34;
  void *pvStack_30;
  undefined uStack_2c;
  uint uStack_1c;
  dword dStack_18;
  dword dStack_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0062daa6;
  pvStack_c = ExceptionList;
  ppWStack_60 = (Window **)0x4364eb;
  ExceptionList = &pvStack_c;
  uVar2 = (**(code **)(*DAT_00707ce4 + 0x98))();
  ppWStack_60 = &pWStack_50;
  (**(code **)(*(int *)(this->CursorManager).mbr_0x8 + 0x48))();
  pWStack_50 = (Window *)FUN_004a7680(0xd1c);
  pvStack_c = (void *)0x0;
  if (pWStack_50 == (Window *)0x0) {
    pWVar3 = (Window *)0x0;
  }
  else {
    pWVar3 = GUI::Window::Window(pWStack_50,0);
  }
  this->mbr_0x9c = (dword)pWVar3;
  pvStack_c = (void *)0xffffffff;
  dStack_18 = 0xf;
  uStack_1c = 0;
  uStack_2c = 0;
  pcVar1 = "quickslot.ini";
  do {
    pcVar5 = pcVar1;
    pcVar1 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&pvStack_30,"quickslot.ini",(uint)(pcVar5 + -0x6550f8));
  _Memory = &pvStack_30;
  pvStack_c = (void *)0x1;
  (**(code **)(*(int *)this->mbr_0x9c + 0xcc))();
  dStack_10 = 0xffffffff;
  if (0xf < uStack_1c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_30);
  }
  (**(code **)(*(int *)this->mbr_0x9c + 100))();
  (**(code **)(*(int *)this->mbr_0x9c + 0x10))();
  (**(code **)(*(int *)this->mbr_0x9c + 0x44))();
  (**(code **)(*(int *)this->mbr_0x9c + 0xe8))();
  (**(code **)(*(int *)this->mbr_0x9c + 0xe0))();
  (**(code **)(*(int *)this->mbr_0x9c + 0x54))();
  pLVar4 = (Label *)FUN_004a7680(0xe64);
  pvStack_30 = (void *)0x2;
  if (pLVar4 == (Label *)0x0) {
    pLVar4 = (Label *)0x0;
  }
  else {
    pLVar4 = GUI::Label::Label(pLVar4,3);
  }
  this->mbr_0xa0 = (dword)pLVar4;
  pvStack_30 = (void *)0xffffffff;
  dStack_3c = 0xf;
  uStack_40 = 0;
  pWStack_50 = (Window *)((uint)pWStack_50 & 0xffffff00);
  pcVar1 = "quickslot.ini";
  do {
    pcVar5 = pcVar1;
    pcVar1 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&stack0xffffffac,"quickslot.ini",(uint)(pcVar5 + -0x6550f8));
  pvStack_30 = (void *)0x3;
  (**(code **)(*(int *)this->mbr_0xa0 + 0xcc))();
  dStack_34 = 0xffffffff;
  if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBX);
  }
  (**(code **)(*(int *)this->mbr_0xa0 + 0x10))();
  dStack_48 = 0xf;
  dStack_4c = 0;
  pcVar1 = "fallouty";
  do {
    pcVar5 = pcVar1;
    pcVar1 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  pvStack_a4 = (void *)0x4366e8;
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&ppWStack_60,"fallouty",(uint)(pcVar5 + -0x6550ec));
  dVar6 = 9;
  pvStack_a4 = (void *)0x0;
  dStack_3c = 4;
  (**(code **)(*(int *)this->mbr_0xa0 + 0x148))(&ppWStack_60);
  dStack_4c = 0xffffffff;
  if (0xf < unaff_EBP) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  (**(code **)(*(int *)this->mbr_0xa0 + 0x168))(0xff808080);
  (**(code **)(*(int *)this->mbr_0xa0 + 0x180))(0);
  (**(code **)(*(int *)this->mbr_0xa0 + 0x188))(0);
  (**(code **)(*(int *)this->mbr_0xa0 + 0x44))(dVar6 + 8,(int)pvStack_a4 + -0x10);
  (**(code **)(*(int *)this->mbr_0xa0 + 0xe0))(uVar2);
  uVar7 = 0;
  pcVar1 = "Tool Tip";
  do {
    pcVar5 = pcVar1;
    pcVar1 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&pvStack_a4,"Tool Tip",(uint)(pcVar5 + -0x6550e0));
  (**(code **)(*(int *)this->mbr_0xa0 + 300))(&pvStack_a4);
  if (0xf < uVar7) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_a4);
  }
  pvStack_a4 = (void *)((uint)pvStack_a4 & 0xffffff00);
  (**(code **)(*(int *)this->mbr_0xa0 + 0x54))(0);
  (**(code **)(*(int *)this->mbr_0x9c + 0xa4))(this->mbr_0xa0);
  (**(code **)(*(int *)(this->CursorManager).mbr_0x8 + 0xa4))(this->mbr_0x9c);
  ExceptionList = (void *)(unaff_EDI - 0x14);
  return;
}



void __thiscall GameCursorManager::meth_0x436840(GameCursorManager *this,uint param_1)

{
  char *pcVar1;
  char *pcVar2;
  cls_0x616328 *pcVar3;
  int iVar4;
  DWORD DVar5;
  uint unaff_retaddr;
  undefined auStack_4c [4];
  void *local_48;
  void *local_44;
  dword dStack_38;
  uint local_34;
  uint local_30;
  VFX_Parameter__vftable_673a20 *local_2c;
  dword dStack_1c;
  uint uStack_18;
  uint local_10;
  undefined4 local_c;
  undefined4 uStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  uStack_8 = &LAB_0062dad0;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  if (param_1 == this->mbr_0xa8) {
    if (this->mbr_0xa4 != 0) {
      ExceptionList = &local_c;
      DVar5 = timeGetTime();
      if (this->mbr_0xac + 0xfa < DVar5) {
        (**(code **)(*(int *)this->mbr_0x9c + 0x54))(0);
        this->mbr_0xa4 = 0;
      }
    }
    goto LAB_00436aac;
  }
  if (param_1 == 0) {
    local_30 = 0xf;
    local_34 = 0;
    local_44 = (void *)((uint)local_44 & 0xffffff00);
    pcVar1 = "";
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    ExceptionList = &local_c;
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_48,"",(uint)(pcVar2 + -0x64d7d8));
    local_4 = 0;
    (**(code **)(*(int *)this->mbr_0xa0 + 300))(&local_48);
    uStack_8 = (undefined *)0xffffffff;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      _free(local_48);
    }
LAB_00436a61:
    uStack_8 = (undefined *)0xffffffff;
    (**(code **)(*(int *)this->mbr_0x9c + 0x54))(1);
    this->mbr_0xa4 = 0;
  }
  else {
    ExceptionList = &local_c;
    pcVar3 = (cls_0x616328 *)GameActionEquip::meth_0x54be10((GameActionEquip *)this);
    iVar4 = FUN_006165e0(pcVar3,0,&Entity::RTTI_Type_Descriptor,&GameEntity::RTTI_Type_Descriptor,0)
    ;
    if (iVar4 == 0) {
      iVar4 = cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&local_2c,"");
      local_4 = 3;
      (**(code **)(*(int *)this->mbr_0xa0 + 300))(iVar4);
      uStack_8 = (undefined *)0xffffffff;
      if (0xf < uStack_18) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      uStack_18 = 0xf;
      dStack_1c = 0;
      local_2c = (VFX_Parameter__vftable_673a20 *)((uint)local_2c & 0xffffff00);
      goto LAB_00436a61;
    }
    (**(code **)(*(int *)(*(int *)(*(int *)(iVar4 + 4) + 4) + 4 + iVar4) + 0xa8))(&local_48);
    uStack_8 = (undefined *)0x1;
    if (dStack_38 == 0) {
      iVar4 = cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&local_30,"");
      uStack_8 = (undefined *)CONCAT31(uStack_8._1_3_,2);
      (**(code **)(*(int *)this->mbr_0xa0 + 300))(iVar4);
      local_c = (void *)CONCAT31(local_c._1_3_,1);
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)&local_34);
      (**(code **)(*(int *)this->mbr_0x9c + 0x54))(1);
      this->mbr_0xa4 = 0;
    }
    else {
      (**(code **)(*(int *)this->mbr_0xa0 + 300))(auStack_4c);
      iVar4 = (**(code **)(*(int *)this->mbr_0xa0 + 0x15c))();
      (**(code **)(*(int *)this->mbr_0x9c + 0x14))(&stack0xffffffac,&local_4);
      (**(code **)(*(int *)this->mbr_0x9c + 0x10))(iVar4 + 0x10,local_c);
      (**(code **)(*(int *)this->mbr_0x9c + 0x54))(1);
      this->mbr_0xa4 = 1;
      DVar5 = timeGetTime();
      this->mbr_0xac = DVar5;
    }
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      _free(local_44);
    }
  }
  this->mbr_0xa8 = param_1;
LAB_00436aac:
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall
GameCursorManager::virt_meth_0x437ab0
          (GameCursorManager *this,undefined4 *param_1,int param_2,int param_3,byte param_4)

{
  char cVar1;
  dword *_Str1;
  int iVar2;
  undefined4 *puVar3;
  
  if (((this->mbr_0x4c != 0) && (param_2 == this->mbr_0x6c)) && (param_3 == this->mbr_0x70)) {
    if (this->mbr_0x68 < 0x10) {
      _Str1 = &this->mbr_0x54;
    }
    else {
      _Str1 = (dword *)this->mbr_0x54;
    }
    iVar2 = __stricmp((char *)_Str1,(char *)param_1);
    if (iVar2 == 0) {
      return;
    }
  }
  this->mbr_0x74 = param_4;
  this->mbr_0x4c = 1;
  puVar3 = param_1;
  do {
    cVar1 = *(char *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&this->mbr_0x50,(char *)param_1,(int)puVar3 - ((int)param_1 + 1));
  this->mbr_0x6c = param_2;
  this->mbr_0x70 = param_3;
  return;
}



void __thiscall GameCursorManager::virt_meth_0x437bb0(GameCursorManager *this)

{
  undefined4 unaff_ESI;
  
  meth_0x591780(this);
  meth_0x4364c0(this);
  meth_0x4361f0(this,1,0,0);
  meth_0x436300(this);
  meth_0x591670(this,1,unaff_ESI);
  return;
}



void __thiscall GameCursorManager::virt_meth_0x5915d0(GameCursorManager *this)

{
  ShowCursor(1);
  return;
}



void __thiscall
GameCursorManager::meth_0x591670(GameCursorManager *this,undefined param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(this->CursorManager).mbr_0x8;
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00591686. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x54))();
    return;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0059195d) */

void __thiscall GameCursorManager::meth_0x591780(GameCursorManager *this)

{
  char *pcVar1;
  Interface *pIVar2;
  Picture *pPVar3;
  char *pcVar4;
  bool bVar5;
  undefined4 unaff_EDI;
  undefined4 uVar6;
  void *pvStack_28;
  void *pvStack_24;
  dword dStack_18;
  dword dStack_14;
  uint uStack_10;
  VFX_Parameter__vftable_673a20 *pVStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063a08d;
  pVStack_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  bVar5 = false;
  ExceptionList = &pVStack_c;
  ShowCursor(0);
  if ((this->CursorManager).mbr_0x4 == 0) {
    pIVar2 = (Interface *)FUN_004a7680(0x34);
    uStack_4 = 0;
    if (pIVar2 == (Interface *)0x0) {
      pIVar2 = (Interface *)0x0;
    }
    else {
      uStack_10 = 0xf;
      dStack_14 = 0;
      pvStack_24 = (void *)((uint)pvStack_24 & 0xffffff00);
      pcVar1 = "Cursor";
      do {
        pcVar4 = pcVar1;
        pcVar1 = pcVar4 + 1;
      } while (*pcVar4 != '\0');
      ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&pvStack_28,"Cursor",(uint)(pcVar4 + -0x69e79c))
      ;
      bVar5 = true;
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      pIVar2 = GUI::Interface::Interface(pIVar2,(_String_base *)&pvStack_28);
    }
    (this->CursorManager).mbr_0x4 = (dword)pIVar2;
    uStack_4 = 0xffffffff;
    if ((bVar5) && (0xf < uStack_10)) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_24);
    }
  }
  if ((this->CursorManager).mbr_0x8 == 0) {
    (**(code **)(*DAT_00707ce4 + 0x98))();
    pPVar3 = (Picture *)FUN_004a7680(0xd2c);
    uStack_4 = 3;
    if (pPVar3 == (Picture *)0x0) {
      pPVar3 = (Picture *)0x0;
    }
    else {
      pPVar3 = GUI::Picture::Picture(pPVar3,2);
    }
    (this->CursorManager).mbr_0x8 = (dword)pPVar3;
    uStack_4 = 0xffffffff;
    uStack_10 = 0xf;
    dStack_14 = 0;
    pvStack_24 = (void *)((uint)pvStack_24 & 0xffffff00);
    pcVar1 = "Cursor";
    do {
      pcVar4 = pcVar1;
      pcVar1 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&pvStack_28,"Cursor",(uint)(pcVar4 + -0x69e79c));
    uStack_4 = 4;
    (**(code **)(*(int *)(this->CursorManager).mbr_0x8 + 0x4c))(&pvStack_28);
    puStack_8 = (undefined *)0xffffffff;
    if (0xf < dStack_14) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28);
    }
    (**(code **)(*(int *)(this->CursorManager).mbr_0x8 + 0x84))(0);
    uVar6 = 0x20;
    (**(code **)(*(int *)(this->CursorManager).mbr_0x8 + 0x10))(0x20,0x20);
    pcVar1 = "DefaultInterface.ini";
    do {
      pcVar4 = pcVar1;
      pcVar1 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffffac,"DefaultInterface.ini",(uint)(pcVar4 + -0x65202c));
    dStack_14 = 5;
    (**(code **)(*(int *)(this->CursorManager).mbr_0x8 + 0xcc))(&stack0xffffffac);
    dStack_18 = 0xffffffff;
    (**(code **)(*(int *)(this->CursorManager).mbr_0x8 + 0x54))(0);
    (**(code **)(*(int *)(this->CursorManager).mbr_0x8 + 0xe8))(1);
    (**(code **)(*(int *)(this->CursorManager).mbr_0x8 + 0xe0))(uVar6);
    GameActionOperateContainer::meth_0x4959b0
              ((GameActionOperateContainer *)(this->CursorManager).mbr_0x4,
               (int *)(this->CursorManager).mbr_0x8);
  }
  meth_0x591670(this,0,unaff_EDI);
  ExceptionList = pVStack_c;
  return;
}



void __thiscall
GameCursorManager::meth_0x5919d0
          (GameCursorManager *this,undefined4 *param_1,int param_2,int param_3,char param_4)

{
  char cVar1;
  int *piVar2;
  dword dVar3;
  dword *_Str2;
  int iVar4;
  undefined4 *puVar5;
  void *_Memory;
  uint uStack_2c;
  undefined local_28 [4];
  undefined local_24;
  dword dStack_20;
  dword dStack_18;
  dword local_14;
  dword local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063a0a8;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  if ((this->CursorManager).mbr_0x2c < 0x10) {
    _Str2 = &(this->CursorManager).mbr_0x18;
  }
  else {
    _Str2 = (dword *)(this->CursorManager).mbr_0x18;
  }
  ExceptionList = &local_c;
  iVar4 = __stricmp((char *)param_1,(char *)_Str2);
  if (iVar4 != 0) {
    puVar5 = param_1;
    do {
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&(this->CursorManager).mbr_0x14,(char *)param_1,
               (int)puVar5 - ((int)param_1 + 1));
    local_10 = 0xf;
    local_14 = 0;
    local_24 = 0;
    puVar5 = param_1;
    do {
      cVar1 = *(char *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_28,(char *)param_1,(int)puVar5 - ((int)param_1 + 1));
    _Memory = (void *)0x1;
    local_4 = 0;
    (**(code **)(*(int *)(this->CursorManager).mbr_0x8 + 0x130))
              (local_28,0,0,0,0xbf800000,0xbf800000);
    dStack_20 = 0xffffffff;
    if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    piVar2 = (int *)(this->CursorManager).mbr_0x8;
    dVar3 = piVar2[0x34a];
    iVar4 = piVar2[0x349];
    dStack_18 = dVar3;
    (**(code **)(*piVar2 + 0x10))(iVar4,dVar3);
    if ((1 < iVar4) && (1 < (int)dVar3)) {
      (**(code **)(*(int *)(this->CursorManager).mbr_0x8 + 0x13c))
                (0x3f000000,0x3f000000,0x41600000,(float)(int)param_1 - 1.0);
    }
    AreaMapWindow::meth_0x4aa910((AreaMapWindow *)(this->CursorManager).mbr_0x8,4);
    if (param_4 == '\0') {
      (this->CursorManager).mbr_0xc = param_2;
      (this->CursorManager).mbr_0x10 = param_3;
    }
    else {
      (this->CursorManager).mbr_0xc = iVar4 / 2 + param_2;
      (this->CursorManager).mbr_0x10 = (int)dVar3 / 2 + param_3;
    }
  }
  ExceptionList = local_c;
  return;
}


#include "../include/GameCursorManager.h"
