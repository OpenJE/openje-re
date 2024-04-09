#include "../include/HotKeys.h"

HotKeys * __thiscall HotKeys::~HotKeys(HotKeys *this)

{
  HotKeys *pHStack_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_0063a5ab;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &HotKeys__vftable_69fd34_0069fd34;
  uStack_4 = 0;
  pHStack_10 = this;
  virt_meth_0x599a90(this);
  uStack_4 = 0xffffffff;
  cls_0x4d8d70::meth_0x52b540
            ((cls_0x4d8d70 *)&this->mbr_0xc,(int **)&pHStack_10,*(int ***)(int **)this->mbr_0x10,
             (int **)this->mbr_0x10);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x10);
}



HotKeys * __thiscall HotKeys::HotKeys(HotKeys *this,dword param_1,dword param_2)

{
  dword dVar1;
  
  this->mbr_0x8 = param_2;
  this->vftptr_0x0 = &HotKeys__vftable_69fd34_0069fd34;
  this->mbr_0x4 = param_1;
  *(undefined *)&this->mbr_0xc = (undefined)param_1;
  dVar1 = FUN_0059ec40();
  this->mbr_0x10 = dVar1;
  *(undefined *)(dVar1 + 0x2d) = 1;
  *(dword *)(this->mbr_0x10 + 4) = this->mbr_0x10;
  *(dword *)this->mbr_0x10 = this->mbr_0x10;
  *(dword *)(this->mbr_0x10 + 8) = this->mbr_0x10;
  this->mbr_0x14 = 0;
  return this;
}



void __thiscall HotKeys::virt_meth_0x5998c0(HotKeys *this)

{
  char cVar1;
  HotKeys *this_00;
  char *pcVar2;
  int **ppiVar3;
  bool bVar4;
  VFX_Parameter *this_01;
  char *pcVar5;
  undefined4 **ppuVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int **ppiVar11;
  int **ppiVar12;
  undefined4 *local_28;
  undefined4 *local_24;
  HotKeys *local_20;
  undefined local_1c [4];
  void *local_18;
  dword local_8;
  uint local_4;
  
  local_20 = this;
  this_01 = (VFX_Parameter *)FUN_0056af30();
  local_4 = 0xf;
  local_8 = 0;
  local_18 = (void *)((uint)local_18 & 0xffffff00);
  pcVar2 = "HotKeys";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_1c,"HotKeys",(uint)(pcVar5 + -0x69fd50));
  local_28 = VFX_Parameter::meth_0x4339b0(this_01,(int)local_1c);
  if ((local_28 == (undefined4 *)this_01->mbr_0x4) ||
     (bVar4 = FUN_00433930((int)local_1c,(int)(local_28 + 3)), bVar4)) {
    local_24 = (undefined4 *)this_01->mbr_0x4;
    ppuVar6 = &local_24;
  }
  else {
    ppuVar6 = &local_28;
  }
  local_24 = *ppuVar6;
  if (0xf < local_4) {
                    /* WARNING: Subroutine does not return */
    _free(local_18);
  }
  local_4 = 0xf;
  local_8 = 0;
  local_18 = (void *)((uint)local_18 & 0xffffff00);
  if ((local_24 != (undefined4 *)this_01->mbr_0x4) &&
     (ppiVar12 = *(int ***)(int **)local_24[0xb], ppiVar12 != (int **)local_24[0xb])) {
    do {
      piVar10 = (int *)0x0;
      local_28 = (undefined4 *)0x0;
      if (ppiVar12[9] < (int *)0x10) {
        ppiVar11 = ppiVar12 + 4;
      }
      else {
        ppiVar11 = (int **)ppiVar12[4];
      }
      if ((*(char *)ppiVar11 == '-') && ((int *)0x1 < ppiVar12[8])) {
        local_28 = (undefined4 *)0x1;
LAB_005999b6:
        ppiVar11 = (int **)((int)ppiVar11 + 1);
      }
      else if ((*(char *)ppiVar11 == '+') && ((int *)0x1 < ppiVar12[8])) goto LAB_005999b6;
      iVar9 = 2;
      do {
        iVar7 = _strncmp((char *)ppiVar11,"Ctrl+",5);
        if (iVar7 == 0) {
          piVar10 = (int *)((uint)piVar10 | 1);
          ppiVar11 = (int **)((int)ppiVar11 + 5);
        }
        iVar7 = _strncmp((char *)ppiVar11,"Shift+",6);
        this_00 = local_20;
        if (iVar7 == 0) {
          piVar10 = (int *)((uint)piVar10 | 2);
          ppiVar11 = (int **)((int)ppiVar11 + 6);
        }
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      uVar8 = (**(code **)(*(int *)local_20->mbr_0x4 + 0x10))(ppiVar11);
      if (uVar8 != 0) {
        if (ppiVar12[0x10] < (int *)0x10) {
          ppiVar11 = ppiVar12 + 0xb;
        }
        else {
          ppiVar11 = (int **)ppiVar12[0xb];
        }
        GameHotKeys::meth_0x599860((GameHotKeys *)this_00,uVar8,(uint)local_28,piVar10,ppiVar11);
      }
      if (*(char *)((int)ppiVar12 + 0x45) == '\0') {
        ppiVar11 = (int **)ppiVar12[2];
        if (*(char *)((int)ppiVar11 + 0x45) == '\0') {
          cVar1 = *(char *)((int)*ppiVar11 + 0x45);
          ppiVar12 = ppiVar11;
          ppiVar11 = (int **)*ppiVar11;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar11 + 0x45);
            ppiVar12 = ppiVar11;
            ppiVar11 = (int **)*ppiVar11;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar12[1] + 0x45);
          ppiVar3 = (int **)ppiVar12[1];
          ppiVar11 = ppiVar12;
          while ((ppiVar12 = ppiVar3, cVar1 == '\0' && (ppiVar11 == (int **)ppiVar12[2]))) {
            cVar1 = *(char *)((int)ppiVar12[1] + 0x45);
            ppiVar3 = (int **)ppiVar12[1];
            ppiVar11 = ppiVar12;
          }
        }
      }
    } while (ppiVar12 != (int **)local_24[0xb]);
  }
  return;
}



void __thiscall HotKeys::virt_meth_0x599a90(HotKeys *this)

{
  char cVar1;
  dword dVar2;
  uint uVar3;
  cls_0x41d550 cVar4;
  HotKeys *pHVar5;
  VFX_Parameter *this_00;
  cls_0x4dff90 *this_01;
  char *pcVar6;
  undefined4 *puVar7;
  cls_0x50db20 *this_02;
  undefined4 *puVar8;
  uint unaff_retaddr;
  char *pcVar9;
  cls_0x41d550 cStack_50;
  HotKeys *local_4c;
  cls_0x4d8d70 cStack_48;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063a590;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  local_4c = this;
  this_00 = (VFX_Parameter *)FUN_0056af30();
  if (this->mbr_0x14 != 0) {
    cStack_48.mbr_0x34 = 0xf;
    cStack_48.mbr_0x30 = 0;
    cStack_48.mbr_0x20 = cStack_48.mbr_0x20 & 0xffffff00;
    pcVar9 = "HotKeys";
    do {
      pcVar6 = pcVar9;
      pcVar9 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&cStack_48.mbr_0x1c,"HotKeys",(uint)(pcVar6 + -0x69fd50));
    local_4 = 0;
    this_01 = (cls_0x4dff90 *)VFX_Parameter::meth_0x4e0470(this_00,(int *)&cStack_48.mbr_0x1c);
    local_4 = 0xffffffff;
    if (0xf < cStack_48.mbr_0x34) {
                    /* WARNING: Subroutine does not return */
      _free((void *)cStack_48.mbr_0x20);
    }
    cStack_48.mbr_0x34 = 0xf;
    cStack_48.mbr_0x30 = 0;
    cStack_48.mbr_0x20 = cStack_48.mbr_0x20 & 0xffffff00;
    cls_0x4dff90::meth_0x45cce0(this_01);
    dVar2 = (this_01->cls_0x4d8d70).mbr_0x4;
    *(dword *)(dVar2 + 4) = dVar2;
    dVar2 = (this_01->cls_0x4d8d70).mbr_0x4;
    (this_01->cls_0x4d8d70).mbr_0x8 = 0;
    *(dword *)dVar2 = dVar2;
    dVar2 = (this_01->cls_0x4d8d70).mbr_0x4;
    *(dword *)(dVar2 + 8) = dVar2;
    cStack_48.mbr_0x18 = 0xf;
    cStack_48.mbr_0x14 = 0;
    cStack_48.mbr_0x4 = cStack_48.mbr_0x4 & 0xffffff00;
    cStack_50.mbr_0x0 = *(int *)this->mbr_0x10;
    local_4 = 1;
    if ((int *)cStack_50.mbr_0x0 != (int *)this->mbr_0x10) {
      do {
        cVar4.mbr_0x0 = cStack_50.mbr_0x0;
        uVar3 = *(uint *)(cStack_50.mbr_0x0 + 0xc);
        if ((uVar3 & 0xf0000) == 0x10000) {
          pcVar9 = "-";
          do {
            pcVar6 = pcVar9;
            pcVar9 = pcVar6 + 1;
          } while (*pcVar6 != '\0');
          pcVar6 = pcVar6 + -0x654320;
          pcVar9 = "-";
        }
        else {
          pcVar9 = "+";
          do {
            pcVar6 = pcVar9;
            pcVar9 = pcVar6 + 1;
          } while (*pcVar6 != '\0');
          pcVar6 = pcVar6 + -0x69fd58;
          pcVar9 = "+";
        }
        ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&cStack_48,pcVar9,(uint)pcVar6);
        if (((int)uVar3 >> 0x14 & 1U) != 0) {
          pcVar9 = "Ctrl+";
          do {
            pcVar6 = pcVar9;
            pcVar9 = pcVar6 + 1;
          } while (*pcVar6 != '\0');
          cls_0x4d8d70::meth_0x4257d0
                    (&cStack_48,(undefined4 *)&DAT_0069fd48,(uint)(pcVar6 + -0x69fd48));
        }
        if (((int)uVar3 >> 0x14 & 2U) != 0) {
          pcVar9 = "Shift+";
          do {
            pcVar6 = pcVar9;
            pcVar9 = pcVar6 + 1;
          } while (*pcVar6 != '\0');
          cls_0x4d8d70::meth_0x4257d0
                    (&cStack_48,(undefined4 *)&DAT_0069fd40,(uint)(pcVar6 + -0x69fd40));
        }
        pHVar5 = local_4c;
        puVar7 = (undefined4 *)(**(code **)(*(int *)local_4c->mbr_0x4 + 0xc))(uVar3 & 0xffff);
        puVar8 = puVar7;
        do {
          cVar1 = *(char *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        } while (cVar1 != '\0');
        cls_0x4d8d70::meth_0x4257d0(&cStack_48,puVar7,(int)puVar8 - ((int)puVar7 + 1));
        this_02 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(this_01,(_String_base *)&cStack_48);
        ::cls_0x50db20::meth_0x401b20(this_02,(_String_base *)(cVar4.mbr_0x0 + 0x10),0,0xffffffff);
        cls_0x41d550::meth_0x4c8eb0(&cStack_50);
      } while (cStack_50.mbr_0x0 != pHVar5->mbr_0x10);
      if (0xf < cStack_48.mbr_0x18) {
                    /* WARNING: Subroutine does not return */
        _free((void *)cStack_48.mbr_0x4);
      }
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



HotKeys * __thiscall HotKeys::~HotKeys(HotKeys *this)

{
  HotKeys *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063a5ab;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &HotKeys__vftable_69fd34_0069fd34;
  local_4 = 0;
  local_10 = this;
  virt_meth_0x599a90(this);
  local_4 = 0xffffffff;
  cls_0x4d8d70::meth_0x52b540
            ((cls_0x4d8d70 *)&this->mbr_0xc,(int **)&local_10,*(int ***)(int **)this->mbr_0x10,
             (int **)this->mbr_0x10);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x10);
}



int * __thiscall HotKeys::virt_meth_0x599d50(HotKeys *this,byte param_1)

{
  ~HotKeys(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}


#include "../include/HotKeys.h"
