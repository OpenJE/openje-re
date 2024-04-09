#include "../include/WorldMap.h"

void __thiscall WorldMap::meth_0x599e60(WorldMap *this)

{
  void *_Memory;
  int **ppiVar1;
  int *piVar2;
  WorldMap *local_4;
  
  if ((int **)this->mbr_0x6c == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)this->mbr_0x6c;
  }
  local_4 = this;
  if (piVar2 != (int *)this->mbr_0x6c) {
    do {
      _Memory = (void *)piVar2[2];
      if (_Memory != (void *)0x0) {
        FUN_00599df0((int)_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)this->mbr_0x6c);
  }
  ppiVar1 = (int **)this->mbr_0x6c;
  if (ppiVar1 != (int **)0x0) {
    GUI::Interface::meth_0x4b9d60
              ((Interface *)&this->mbr_0x68,(int **)&local_4,*ppiVar1,(int *)ppiVar1);
    return;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0x68,(int **)&local_4,(int *)0x0,(int *)0x0)
  ;
  return;
}



WorldMap * __thiscall WorldMap::WorldMap(WorldMap *this)

{
  int **ppiVar1;
  char *pcVar2;
  dword dVar3;
  char *pcVar4;
  int *piVar5;
  int *piVar6;
  WorldMap *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063a5f7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &WorldMap__vftable_6a017c_006a017c;
  piVar6 = (int *)0x0;
  this->mbr_0x1c = 0xf;
  this->mbr_0x18 = 0;
  *(undefined *)&this->mbr_0x8 = 0;
  this->mbr_0x48 = 0xf;
  this->mbr_0x44 = 0;
  *(undefined *)&this->mbr_0x34 = 0;
  this->mbr_0x64 = 0xf;
  this->mbr_0x60 = 0;
  *(undefined *)&this->mbr_0x50 = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  local_10 = this;
  dVar3 = FUN_0056e0b0();
  this->mbr_0x6c = dVar3;
  this->mbr_0x70 = 0;
  local_4._0_1_ = 3;
  dVar3 = FUN_0056e0b0();
  this->mbr_0x78 = dVar3;
  this->mbr_0x7c = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  pcVar2 = "";
  do {
    pcVar4 = pcVar2;
    pcVar2 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&this->mbr_0x4,"",(uint)(pcVar4 + -0x64d7d8));
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 1;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  pcVar2 = "";
  do {
    pcVar4 = pcVar2;
    pcVar2 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&this->mbr_0x30,"",(uint)(pcVar4 + -0x64d7d8));
  pcVar2 = "";
  do {
    pcVar4 = pcVar2;
    pcVar2 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&this->mbr_0x4c,"",(uint)(pcVar4 + -0x64d7d8));
  ppiVar1 = (int **)this->mbr_0x6c;
  if (ppiVar1 == (int **)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->mbr_0x68,(int **)&local_10,piVar5,(int *)ppiVar1);
  ppiVar1 = (int **)this->mbr_0x78;
  if (ppiVar1 != (int **)0x0) {
    piVar6 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->mbr_0x74,(int **)&local_10,piVar6,(int *)ppiVar1);
  ExceptionList = local_c;
  return this;
}



void __thiscall WorldMap::meth_0x59a1e0(WorldMap *this)

{
  cls_0x599f20 *this_00;
  int **ppiVar1;
  int *piVar2;
  WorldMap *local_4;
  
  if ((int **)this->mbr_0x78 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)this->mbr_0x78;
  }
  local_4 = this;
  if (piVar2 != (int *)this->mbr_0x78) {
    do {
      this_00 = (cls_0x599f20 *)piVar2[2];
      if (this_00 != (cls_0x599f20 *)0x0) {
        cls_0x599f20::~cls_0x599f20(this_00);
                    /* WARNING: Subroutine does not return */
        _free(this_00);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)this->mbr_0x78);
  }
  ppiVar1 = (int **)this->mbr_0x78;
  if (ppiVar1 != (int **)0x0) {
    GUI::Interface::meth_0x4b9d60
              ((Interface *)&this->mbr_0x74,(int **)&local_4,*ppiVar1,(int *)ppiVar1);
    return;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0x74,(int **)&local_4,(int *)0x0,(int *)0x0)
  ;
  return;
}



WorldMap * __thiscall WorldMap::~WorldMap(WorldMap *this)

{
  int **ppiVar1;
  int *piVar2;
  WorldMap *local_4;
  
  this->vftptr_0x0 = &WorldMap__vftable_6a017c_006a017c;
  local_4 = this;
  meth_0x599e60(this);
  meth_0x59a1e0(this);
  ppiVar1 = (int **)this->mbr_0x78;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0x74,(int **)&local_4,piVar2,(int *)ppiVar1)
  ;
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x78);
}



void __thiscall WorldMap::virt_meth_0x59a330(WorldMap *this)

{
  meth_0x599e60(this);
  meth_0x59a1e0(this);
  return;
}



int * __thiscall WorldMap::virt_meth_0x59a3f0(WorldMap *this,byte param_1)

{
  ~WorldMap(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}



void __thiscall WorldMap::virt_meth_0x59a440(WorldMap *this,undefined4 *param_1)

{
  char cVar1;
  void *pvVar2;
  undefined4 *puVar3;
  dword dVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  cls_0x59a340 *this_00;
  int iVar9;
  char *pcVar10;
  int *piVar11;
  uint unaff_EDI;
  int local_70;
  cls_0x59a340 *local_6c;
  undefined4 *local_68;
  void *local_64;
  _String_base local_60 [4];
  void *local_5c;
  dword local_4c;
  dword local_48;
  _String_base local_44 [4];
  void *local_40;
  dword local_30;
  uint local_2c;
  _String_base local_28 [4];
  void *local_24;
  dword local_14;
  dword local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  dword local_4;
  
  puVar7 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063a6a6;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = (void *)ResourceSystem::Demand(DAT_00707da8,param_1,(int *)0x1,unaff_EDI);
  if (pvVar2 != (void *)0x0) {
    local_2c = 0xf;
    local_30 = 0;
    local_40 = (void *)((uint)local_40 & 0xffffff00);
    puVar3 = puVar7;
    do {
      cVar1 = *(char *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    } while (cVar1 != '\0');
    local_64 = pvVar2;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_44,(char *)puVar7,(int)puVar3 - ((int)puVar7 + 1));
    local_4 = 0;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&this->mbr_0x4,local_44,0,0xffffffff);
    local_4 = 0xffffffff;
    if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
      _free(local_40);
    }
    param_1 = *(undefined4 **)((int)pvVar2 + 0x2c);
    dVar4 = FUN_005a1e50((int *)&param_1);
    this->mbr_0x20 = dVar4;
    pcVar5 = (char *)FUN_005a1e60((char **)&param_1);
    local_2c = 0xf;
    local_30 = 0;
    local_40 = (void *)((uint)local_40 & 0xffffff00);
    pcVar10 = pcVar5;
    do {
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_44,pcVar5,(int)pcVar10 - (int)(pcVar5 + 1));
    local_4 = 1;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&this->mbr_0x30,local_44,0,0xffffffff);
    local_4 = 0xffffffff;
    if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
      _free(local_40);
    }
    pcVar5 = (char *)FUN_005a1e60((char **)&param_1);
    local_2c = 0xf;
    local_30 = 0;
    local_40 = (void *)((uint)local_40 & 0xffffff00);
    pcVar10 = pcVar5;
    do {
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_44,pcVar5,(int)pcVar10 - (int)(pcVar5 + 1));
    local_4 = 2;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&this->mbr_0x4c,local_44,0,0xffffffff);
    local_4 = 0xffffffff;
    if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
      _free(local_40);
    }
    iVar6 = FUN_005a1e50((int *)&param_1);
    this->mbr_0x24 = 1 - (iVar6 != 0);
    dVar4 = FUN_005a1e50((int *)&param_1);
    this->mbr_0x2c = dVar4;
    dVar4 = FUN_005a1e50((int *)&param_1);
    this->mbr_0x28 = dVar4;
    local_70 = FUN_005a1e50((int *)&param_1);
    if (0 < local_70) {
      do {
        local_68 = (undefined4 *)operator_new(0x74);
        local_4 = 3;
        if (local_68 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7 = FUN_0059a0c0(local_68);
        }
        local_4 = 0xffffffff;
        local_68 = puVar7;
        uVar8 = FUN_005a1e50((int *)&param_1);
        puVar7[6] = uVar8;
        uVar8 = FUN_005a1e50((int *)&param_1);
        puVar7[4] = uVar8;
        uVar8 = FUN_005a1e50((int *)&param_1);
        puVar7[7] = uVar8;
        uVar8 = FUN_005a1e50((int *)&param_1);
        puVar7[5] = uVar8;
        pcVar5 = (char *)FUN_005a1e60((char **)&param_1);
        local_48 = 0xf;
        local_4c = 0;
        local_5c = (void *)((uint)local_5c & 0xffffff00);
        pcVar10 = pcVar5;
        do {
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        ::cls_0x50db20::meth_0x401bd0
                  ((cls_0x50db20 *)local_60,pcVar5,(int)pcVar10 - (int)(pcVar5 + 1));
        local_4 = 4;
        ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)(puVar7 + 8),local_60,0,0xffffffff);
        local_4 = 0xffffffff;
        if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
          _free(local_5c);
        }
        local_48 = 0xf;
        local_4c = 0;
        local_5c = (void *)((uint)local_5c & 0xffffff00);
        pcVar5 = (char *)FUN_005a1e60((char **)&param_1);
        local_2c = 0xf;
        local_30 = 0;
        local_40 = (void *)((uint)local_40 & 0xffffff00);
        pcVar10 = pcVar5;
        do {
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        ::cls_0x50db20::meth_0x401bd0
                  ((cls_0x50db20 *)local_44,pcVar5,(int)pcVar10 - (int)(pcVar5 + 1));
        local_4 = 5;
        ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)(puVar7 + 0x16),local_44,0,0xffffffff);
        local_4 = 0xffffffff;
        if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
          _free(local_40);
        }
        local_2c = 0xf;
        local_30 = 0;
        local_40 = (void *)((uint)local_40 & 0xffffff00);
        uVar8 = FUN_005a1e50((int *)&param_1);
        puVar7[1] = uVar8;
        uVar8 = FUN_005a1e50((int *)&param_1);
        puVar7[2] = uVar8;
        uVar8 = FUN_005a1e50((int *)&param_1);
        *puVar7 = uVar8;
        uVar8 = FUN_005a1e50((int *)&param_1);
        puVar7[3] = uVar8;
        dVar4 = this->mbr_0x6c;
        iVar6 = FUN_00433760(dVar4,*(undefined4 *)(dVar4 + 4),&local_68);
        cls_0x459bc0::meth_0x458f30((cls_0x459bc0 *)&this->mbr_0x68,1);
        *(int *)(dVar4 + 4) = iVar6;
        **(int **)(iVar6 + 4) = iVar6;
        local_70 = local_70 + -1;
      } while (local_70 != 0);
    }
    puVar7 = (undefined4 *)FUN_005a1e50((int *)&param_1);
    if (0 < (int)puVar7) {
      do {
        local_68 = puVar7;
        local_6c = (cls_0x59a340 *)operator_new(0x3c);
        local_4 = 6;
        if (local_6c == (cls_0x59a340 *)0x0) {
          this_00 = (cls_0x59a340 *)0x0;
        }
        else {
          this_00 = cls_0x59a340::cls_0x59a340(local_6c);
        }
        local_4 = 0xffffffff;
        local_6c = this_00;
        dVar4 = FUN_005a1e50((int *)&param_1);
        this_00->mbr_0x0 = dVar4;
        dVar4 = FUN_005a1e50((int *)&param_1);
        this_00->mbr_0x4 = dVar4;
        dVar4 = FUN_005a1e50((int *)&param_1);
        this_00->mbr_0x8 = dVar4;
        pcVar5 = (char *)FUN_005a1e60((char **)&param_1);
        local_10 = 0xf;
        local_14 = 0;
        local_24 = (void *)((uint)local_24 & 0xffffff00);
        pcVar10 = pcVar5;
        do {
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        ::cls_0x50db20::meth_0x401bd0
                  ((cls_0x50db20 *)local_28,pcVar5,(int)pcVar10 - (int)(pcVar5 + 1));
        local_4 = 7;
        ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&this_00->mbr_0xc,local_28,0,0xffffffff);
        local_4 = 0xffffffff;
        if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
          _free(local_24);
        }
        local_10 = 0xf;
        local_14 = 0;
        local_24 = (void *)((uint)local_24 & 0xffffff00);
        local_70 = FUN_005a1e50((int *)&param_1);
        if (0 < local_70) {
          do {
            iVar6 = FUN_005a1e50((int *)&param_1);
            iVar9 = FUN_005a1e50((int *)&param_1);
            FUN_0059a410(this_00,iVar6,iVar9);
            local_70 = local_70 + -1;
          } while (local_70 != 0);
        }
        if ((int **)this->mbr_0x78 == (int **)0x0) {
          piVar11 = (int *)0x0;
        }
        else {
          piVar11 = *(int **)this->mbr_0x78;
        }
        if (piVar11 == (int *)this->mbr_0x78) {
LAB_0059a9e5:
          dVar4 = this->mbr_0x78;
          local_6c = (cls_0x59a340 *)FUN_00433760(dVar4,*(undefined4 *)(dVar4 + 4),&local_6c);
          cls_0x459bc0::meth_0x458f30((cls_0x459bc0 *)&this->mbr_0x74,1);
          *(cls_0x59a340 **)(dVar4 + 4) = local_6c;
          *(cls_0x59a340 **)local_6c->mbr_0x4 = local_6c;
        }
        else {
          do {
            if ((piVar11[2] != 0) && (*(int *)(piVar11[2] + 8) <= (int)this_00->mbr_0x8)) {
              iVar6 = FUN_00433760(piVar11,piVar11[1],&local_6c);
              cls_0x459bc0::meth_0x458f30((cls_0x459bc0 *)&this->mbr_0x74,1);
              piVar11[1] = iVar6;
              **(int **)(iVar6 + 4) = iVar6;
              break;
            }
            piVar11 = (int *)*piVar11;
          } while (piVar11 != (int *)this->mbr_0x78);
          if (piVar11 == (int *)this->mbr_0x78) goto LAB_0059a9e5;
        }
        local_68 = (undefined4 *)((int)local_68 + -1);
        puVar7 = local_68;
      } while (local_68 != (undefined4 *)0x0);
    }
    ResourceSystem::Release(DAT_00707da8,local_64);
  }
  ExceptionList = local_c;
  return;
}


#include "../include/WorldMap.h"
