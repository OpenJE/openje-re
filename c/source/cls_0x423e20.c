#include "../include/cls_0x423e20.h"

void __thiscall cls_0x423e20::meth_0x423e20(cls_0x423e20 *this,char param_1)

{
  if (param_1 != '\0') {
    (**(code **)(*(int *)this->mbr_0x4 + 100))(0);
    (**(code **)(*(int *)this->mbr_0x4 + 0x44))(0x158,0x184);
  }
  return;
}



void __thiscall cls_0x423e20::meth_0x423e50(cls_0x423e20 *this)

{
  void *_Memory;
  int **ppiVar1;
  int *piVar2;
  cls_0x423e20 *local_4;
  
  if ((int **)this->mbr_0x1c == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)this->mbr_0x1c;
  }
  local_4 = this;
  if (piVar2 != (int *)this->mbr_0x1c) {
    do {
      _Memory = (void *)piVar2[2];
      if (_Memory != (void *)0x0) {
        FUN_005a48e0((int)_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)this->mbr_0x1c);
  }
  ppiVar1 = (int **)this->mbr_0x1c;
  if (ppiVar1 != (int **)0x0) {
    GUI::Interface::meth_0x4b9d60
              ((Interface *)&this->mbr_0x18,(int **)&local_4,*ppiVar1,(int *)ppiVar1);
    return;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0x18,(int **)&local_4,(int *)0x0,(int *)0x0)
  ;
  return;
}



void __thiscall cls_0x423e20::meth_0x423ec0(cls_0x423e20 *this)

{
  void *_Memory;
  int **ppiVar1;
  int *piVar2;
  cls_0x423e20 *local_4;
  
  if ((int **)this->mbr_0x28 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)this->mbr_0x28;
  }
  local_4 = this;
  if (piVar2 != (int *)this->mbr_0x28) {
    do {
      _Memory = (void *)piVar2[2];
      if (_Memory != (void *)0x0) {
        FUN_005a48e0((int)_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)this->mbr_0x28);
  }
  ppiVar1 = (int **)this->mbr_0x28;
  if (ppiVar1 != (int **)0x0) {
    GUI::Interface::meth_0x4b9d60
              ((Interface *)&this->mbr_0x24,(int **)&local_4,*ppiVar1,(int *)ppiVar1);
    return;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0x24,(int **)&local_4,(int *)0x0,(int *)0x0)
  ;
  return;
}



void __thiscall cls_0x423e20::meth_0x423f40(cls_0x423e20 *this)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  dword *pdVar5;
  int local_4c;
  int local_48;
  undefined local_44 [4];
  void *local_40;
  dword local_30;
  dword local_2c;
  undefined auStack_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062c8c0;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  ExceptionList = &local_c;
  iVar1 = Gregorian::Get_mbr_0x28((Gregorian *)this->mbr_0x8);
  if ((undefined4 *)this->mbr_0x1c == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = *(undefined4 **)(undefined4 *)this->mbr_0x1c;
  }
  for (iVar3 = 0; (puVar4 != (undefined4 *)this->mbr_0x1c && (iVar3 != iVar1)); iVar3 = iVar3 + 1) {
    puVar4 = (undefined4 *)*puVar4;
  }
  iVar1 = 0;
  local_4c = 0;
  if (puVar4 != (undefined4 *)this->mbr_0x1c) {
    pdVar5 = &this->mbr_0x50;
    do {
      if (7 < local_4c) {
        ExceptionList = local_c;
        return;
      }
      if (puVar4[2] == 0) {
        pcVar2 = "?icon_none.bmp";
        local_2c = 0xf;
        local_30 = 0;
        local_40 = (void *)((uint)local_40 & 0xffffff00);
        do {
          pcVar2 = pcVar2 + 1;
        } while (*pcVar2 != '\0');
        ::cls_0x50db20::meth_0x401bd0
                  ((cls_0x50db20 *)local_44,"icon_none.bmp",(uint)(pcVar2 + -0x651520));
        local_4 = 0;
        (**(code **)(*(int *)*pdVar5 + 0x130))(local_44,0,0,0,0xbf800000,0xbf800000,1);
        local_4 = 0xffffffff;
        if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
          _free(local_40);
        }
        local_2c = 0xf;
        local_30 = 0;
        local_40 = (void *)((uint)local_40 & 0xffffff00);
      }
      else {
        (**(code **)(*(int *)*pdVar5 + 0x130))(puVar4[2] + 8,0,0,0,0xbf800000,0xbf800000,1);
      }
      puVar4 = (undefined4 *)*puVar4;
      iVar1 = local_4c + 1;
      pdVar5 = pdVar5 + 1;
      local_4c = iVar1;
    } while (puVar4 != (undefined4 *)this->mbr_0x1c);
    if (7 < iVar1) {
      ExceptionList = local_c;
      return;
    }
  }
  local_48 = 8 - iVar1;
  pdVar5 = &this->mbr_0x50 + iVar1;
  while( true ) {
    pcVar2 = "?icon_none.bmp";
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    do {
      pcVar2 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)auStack_28,"icon_none.bmp",(uint)(pcVar2 + -0x651520));
    local_4 = 1;
    (**(code **)(*(int *)*pdVar5 + 0x130))(auStack_28,0,0,0,0xbf800000,0xbf800000,1);
    local_4 = 0xffffffff;
    if (0xf < local_10) break;
    pdVar5 = pdVar5 + 1;
    local_48 = local_48 + -1;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    if (local_48 == 0) {
      ExceptionList = local_c;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(local_24);
}



void __thiscall cls_0x423e20::meth_0x424140(cls_0x423e20 *this)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  dword *pdVar5;
  int local_4c;
  int local_48;
  undefined local_44 [4];
  void *local_40;
  dword local_30;
  dword local_2c;
  undefined auStack_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062c8c0;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  ExceptionList = &local_c;
  iVar1 = Gregorian::Get_mbr_0x28((Gregorian *)this->mbr_0xc);
  if ((undefined4 *)this->mbr_0x28 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = *(undefined4 **)(undefined4 *)this->mbr_0x28;
  }
  for (iVar3 = 0; (puVar4 != (undefined4 *)this->mbr_0x28 && (iVar3 != iVar1)); iVar3 = iVar3 + 1) {
    puVar4 = (undefined4 *)*puVar4;
  }
  iVar1 = 0;
  local_4c = 0;
  if (puVar4 != (undefined4 *)this->mbr_0x28) {
    pdVar5 = &this->mbr_0x30;
    do {
      if (7 < local_4c) {
        ExceptionList = local_c;
        return;
      }
      if (puVar4[2] == 0) {
        pcVar2 = "?icon_none.bmp";
        local_2c = 0xf;
        local_30 = 0;
        local_40 = (void *)((uint)local_40 & 0xffffff00);
        do {
          pcVar2 = pcVar2 + 1;
        } while (*pcVar2 != '\0');
        ::cls_0x50db20::meth_0x401bd0
                  ((cls_0x50db20 *)local_44,"icon_none.bmp",(uint)(pcVar2 + -0x651520));
        local_4 = 0;
        (**(code **)(*(int *)*pdVar5 + 0x130))(local_44,0,0,0,0xbf800000,0xbf800000,1);
        local_4 = 0xffffffff;
        if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
          _free(local_40);
        }
        local_2c = 0xf;
        local_30 = 0;
        local_40 = (void *)((uint)local_40 & 0xffffff00);
      }
      else {
        (**(code **)(*(int *)*pdVar5 + 0x130))(puVar4[2] + 8,0,0,0,0xbf800000,0xbf800000,1);
      }
      puVar4 = (undefined4 *)*puVar4;
      iVar1 = local_4c + 1;
      pdVar5 = pdVar5 + 1;
      local_4c = iVar1;
    } while (puVar4 != (undefined4 *)this->mbr_0x28);
    if (7 < iVar1) {
      ExceptionList = local_c;
      return;
    }
  }
  local_48 = 8 - iVar1;
  pdVar5 = &this->mbr_0x30 + iVar1;
  while( true ) {
    pcVar2 = "?icon_none.bmp";
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    do {
      pcVar2 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)auStack_28,"icon_none.bmp",(uint)(pcVar2 + -0x651520));
    local_4 = 1;
    (**(code **)(*(int *)*pdVar5 + 0x130))(auStack_28,0,0,0,0xbf800000,0xbf800000,1);
    local_4 = 0xffffffff;
    if (0xf < local_10) break;
    pdVar5 = pdVar5 + 1;
    local_48 = local_48 + -1;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    if (local_48 == 0) {
      ExceptionList = local_c;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(local_24);
}



void __thiscall cls_0x423e20::meth_0x424340(cls_0x423e20 *this)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  uint unaff_retaddr;
  undefined local_4c [4];
  void *local_48;
  dword local_38;
  uint local_34;
  char local_30 [32];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062c8d8;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  piVar2 = (int *)this->mbr_0x1c;
  if (piVar2 != (int *)0x0) {
    piVar2 = (int *)*piVar2;
  }
  for (; piVar2 != (undefined4 *)this->mbr_0x1c; piVar2 = (int *)*piVar2) {
  }
  if (this->mbr_0x10 != 0) {
    ExceptionList = &local_c;
    FUN_00616d8c(local_30,&DAT_00650668);
    pcVar3 = local_30;
    local_34 = 0xf;
    local_38 = 0;
    local_48 = (void *)((uint)local_48 & 0xffffff00);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_4c,local_30,(int)pcVar3 - (int)(local_30 + 1));
    local_4 = 0;
    (**(code **)(*(int *)this->mbr_0x10 + 300))(local_4c);
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      _free(local_48);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall cls_0x423e20::meth_0x424520(cls_0x423e20 *this)

{
  meth_0x423e50(this);
  meth_0x423ec0(this);
  GUI::ScrollBar::meth_0x4b8ae0((ScrollBar *)this->mbr_0x8,0,'\x01');
  GUI::ScrollBar::meth_0x4b8ae0((ScrollBar *)this->mbr_0xc,0,'\x01');
  meth_0x423f40(this);
  meth_0x424340(this);
  meth_0x424140(this);
  FUN_00424430((int)this);
  return;
}


