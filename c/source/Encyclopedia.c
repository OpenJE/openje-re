#include "../include/Encyclopedia.h"

void __thiscall Encyclopedia::virt_meth_0x58f2a0(Encyclopedia *this)

{
                    /* WARNING: Could not recover jumptable at 0x0058f2a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*this->vftptr_0x0->virt_meth_0x58f3e0_8)(this);
  return;
}



Encyclopedia * __thiscall Encyclopedia::Encyclopedia(Encyclopedia *this)

{
  int **ppiVar1;
  int *piVar2;
  Encyclopedia *local_4;
  
  this->vftptr_0x0 = &Encyclopedia__vftable_69d88c_0069d88c;
  local_4 = this;
  ppiVar1 = (int **)FUN_0056e0b0();
  piVar2 = (int *)0x0;
  this->mbr_0x8 = (dword)ppiVar1;
  this->mbr_0xc = 0;
  if (ppiVar1 != (int **)0x0) {
    piVar2 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0x4,(int **)&local_4,piVar2,(int *)ppiVar1);
  return this;
}



void __thiscall Encyclopedia::virt_meth_0x58f3e0(Encyclopedia *this)

{
  int *_Memory;
  int **ppiVar1;
  int *piVar2;
  Encyclopedia *local_4;
  
  if ((int **)this->mbr_0x8 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)this->mbr_0x8;
  }
  local_4 = this;
  if (piVar2 != (int *)this->mbr_0x8) {
    do {
      _Memory = (int *)piVar2[2];
      if (_Memory != (int *)0x0) {
        FUN_0058f330(_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)this->mbr_0x8);
  }
  ppiVar1 = (int **)this->mbr_0x8;
  if (ppiVar1 != (int **)0x0) {
    GUI::Interface::meth_0x4b9d60
              ((Interface *)&this->mbr_0x4,(int **)&local_4,*ppiVar1,(int *)ppiVar1);
    return;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0x4,(int **)&local_4,(int *)0x0,(int *)0x0);
  return;
}



Encyclopedia * __thiscall Encyclopedia::~Encyclopedia(Encyclopedia *this)

{
  int **ppiVar1;
  int *piVar2;
  Encyclopedia *local_4;
  
  this->vftptr_0x0 = &Encyclopedia__vftable_69d88c_0069d88c;
  local_4 = this;
  virt_meth_0x58f3e0(this);
  ppiVar1 = (int **)this->mbr_0x8;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0x4,(int **)&local_4,piVar2,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x8);
}



void __thiscall
Encyclopedia::virt_meth_0x58f5b0
          (Encyclopedia *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3,
          undefined4 param_4)

{
  dword dVar1;
  char *pcVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *local_48;
  _String_base local_44 [4];
  void *local_40;
  dword local_30;
  dword local_2c;
  _String_base local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639e5b;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  ExceptionList = &local_c;
  local_48 = (undefined4 *)operator_new(0x60);
  local_4 = 0;
  if (local_48 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_0058f4a0(local_48);
  }
  *puVar4 = param_1;
  local_4 = 0xffffffff;
  puVar4[0x10] = param_2;
  local_48 = puVar4;
  if (param_3 != (undefined4 *)0x0) {
    cVar3 = cls_0x49c610::meth_0x49abd0(DAT_00707da8,param_3);
    if (cVar3 != '\0') {
      local_10 = 0xf;
      local_14 = 0;
      local_24 = (void *)((uint)local_24 & 0xffffff00);
      puVar5 = param_3;
      do {
        cVar3 = *(char *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      } while (cVar3 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)local_28,(char *)param_3,(int)puVar5 - ((int)param_3 + 1));
      local_4 = 1;
      ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)(puVar4 + 0x11),local_28,0,0xffffffff);
      local_4 = 0xffffffff;
      if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
        _free(local_24);
      }
      goto LAB_0058f6ff;
    }
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  pcVar2 = "icon_unknown.bmp";
  do {
    pcVar6 = pcVar2;
    pcVar2 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_44,"icon_unknown.bmp",(uint)(pcVar6 + -0x650614));
  local_4 = 2;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)(puVar4 + 0x11),local_44,0,0xffffffff);
  local_4 = 0xffffffff;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
LAB_0058f6ff:
  local_4 = 0xffffffff;
  puVar4[1] = param_4;
  dVar1 = this->mbr_0x8;
  iVar7 = FUN_00433760(dVar1,*(undefined4 *)(dVar1 + 4),&local_48);
  cls_0x433790::meth_0x433790((cls_0x433790 *)&this->mbr_0x4,1);
  *(int *)(dVar1 + 4) = iVar7;
  **(int **)(iVar7 + 4) = iVar7;
  ExceptionList = local_c;
  return;
}



void __thiscall Encyclopedia::virt_meth_0x58f750(Encyclopedia *this,undefined4 *param_1)

{
  char cVar1;
  dword dVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  uint unaff_EDI;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 *local_30;
  void *local_2c;
  _String_base local_28 [4];
  void *local_24;
  dword local_14;
  dword local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639e83;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  ExceptionList = &local_c;
  pvVar3 = (void *)ResourceSystem::Demand(DAT_00707da8,param_1,(int *)0x1,unaff_EDI);
  if (pvVar3 != (void *)0x0) {
    param_1 = *(undefined4 **)((int)pvVar3 + 0x2c);
    local_2c = pvVar3;
    local_38 = FUN_005a1e50((int *)&param_1);
    if (0 < local_38) {
      do {
        local_30 = (undefined4 *)operator_new(0x60);
        local_4 = 0;
        if (local_30 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4 = FUN_0058f4a0(local_30);
        }
        local_4 = 0xffffffff;
        local_30 = puVar4;
        uVar5 = FUN_005a1e50((int *)&param_1);
        *puVar4 = uVar5;
        uVar5 = FUN_005a1e50((int *)&param_1);
        puVar4[1] = uVar5;
        iVar6 = FUN_005a1e50((int *)&param_1);
        *(char *)(puVar4 + 2) = '\x01' - (iVar6 != 0);
        pcVar7 = (char *)FUN_005a1e60((char **)&param_1);
        local_14 = 0;
        local_10 = 0xf;
        local_24 = (void *)((uint)local_24 & 0xffffff00);
        pcVar9 = pcVar7;
        do {
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        ::cls_0x50db20::meth_0x401bd0
                  ((cls_0x50db20 *)local_28,pcVar7,(int)pcVar9 - (int)(pcVar7 + 1));
        local_4 = 1;
        ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)(puVar4 + 3),local_28,0,0xffffffff);
        local_4 = 0xffffffff;
        if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
          _free(local_24);
        }
        local_10 = 0xf;
        local_14 = 0;
        local_24 = (void *)((uint)local_24 & 0xffffff00);
        local_3c = FUN_005a1e50((int *)&param_1);
        if (0 < local_3c) {
          do {
            local_34 = FUN_005a1e50((int *)&param_1);
            iVar6 = puVar4[0xe];
            iVar8 = FUN_00433760(iVar6,*(undefined4 *)(iVar6 + 4),&local_34);
            cls_0x5206e0::meth_0x4cf920((cls_0x5206e0 *)(puVar4 + 0xd),1);
            *(int *)(iVar6 + 4) = iVar8;
            **(int **)(iVar8 + 4) = iVar8;
            local_3c = local_3c + -1;
          } while (local_3c != 0);
        }
        local_3c = FUN_005a1e50((int *)&param_1);
        if (0 < local_3c) {
          do {
            local_34 = FUN_005a1e50((int *)&param_1);
            iVar6 = puVar4[0xb];
            iVar8 = FUN_00433760(iVar6,*(undefined4 *)(iVar6 + 4),&local_34);
            cls_0x5206e0::meth_0x4cf920((cls_0x5206e0 *)(puVar4 + 10),1);
            *(int *)(iVar6 + 4) = iVar8;
            local_3c = local_3c + -1;
            **(int **)(iVar8 + 4) = iVar8;
          } while (local_3c != 0);
        }
        dVar2 = this->mbr_0x8;
        iVar6 = FUN_00433760(dVar2,*(undefined4 *)(dVar2 + 4),&local_30);
        cls_0x433790::meth_0x433790((cls_0x433790 *)&this->mbr_0x4,1);
        *(int *)(dVar2 + 4) = iVar6;
        local_38 = local_38 + -1;
        **(int **)(iVar6 + 4) = iVar6;
        pvVar3 = local_2c;
      } while (local_38 != 0);
    }
    ResourceSystem::Release(DAT_00707da8,pvVar3);
  }
  ExceptionList = local_c;
  return;
}


#include "../include/Encyclopedia.h"
