#include "../include/cls_0x558740.h"

void __thiscall cls_0x558740::meth_0x434120(cls_0x558740 *this,int param_1,int param_2)

{
  if (param_1 < 0) {
    param_1 = 0;
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (0x400 < (int)(this->mbr_0x14 + param_1)) {
    param_1 = 0x400 - this->mbr_0x14;
  }
  if (0x300 < (int)(this->mbr_0x18 + param_2)) {
    param_2 = 0x300 - this->mbr_0x18;
  }
  if ((param_1 != this->mbr_0xc) || (param_2 != this->mbr_0x10)) {
    this->mbr_0xc = param_1;
    this->mbr_0x10 = param_2;
    (**(code **)(*(int *)this->mbr_0x4 + 0x44))(param_1,param_2);
  }
  return;
}



void __thiscall cls_0x558740::meth_0x434250(cls_0x558740 *this)

{
  int **ppiVar1;
  int *piVar2;
  cls_0x558740 *local_4;
  
  if ((int **)this->mbr_0x98 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)this->mbr_0x98;
  }
  local_4 = this;
  if (piVar2 != (int *)this->mbr_0x98) {
    do {
      if ((undefined4 *)piVar2[2] != (undefined4 *)0x0) {
        (***(code ***)(undefined4 *)piVar2[2])(1);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)this->mbr_0x98);
  }
  ppiVar1 = (int **)this->mbr_0x98;
  if (ppiVar1 == (int **)0x0) {
    GUI::Interface::meth_0x4b9d60
              ((Interface *)&this->mbr_0x94,(int **)&local_4,(int *)0x0,(int *)0x0);
    return;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->mbr_0x94,(int **)&local_4,*ppiVar1,(int *)ppiVar1);
  return;
}



void __thiscall cls_0x558740::meth_0x4342c0(cls_0x558740 *this)

{
  cls_0x4d8d70 *this_00;
  int **ppiVar1;
  int *piVar2;
  cls_0x558740 *local_4;
  
  if ((int **)this->mbr_0xa4 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)this->mbr_0xa4;
  }
  local_4 = this;
  if (piVar2 != (int *)this->mbr_0xa4) {
    do {
      this_00 = (cls_0x4d8d70 *)piVar2[2];
      if (this_00 != (cls_0x4d8d70 *)0x0) {
        cls_0x4d8d70::meth_0x56ee40(this_00);
                    /* WARNING: Subroutine does not return */
        _free(this_00);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)this->mbr_0xa4);
  }
  ppiVar1 = (int **)this->mbr_0xa4;
  if (ppiVar1 != (int **)0x0) {
    GUI::Interface::meth_0x4b9d60
              ((Interface *)&this->mbr_0xa0,(int **)&local_4,*ppiVar1,(int *)ppiVar1);
    return;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0xa0,(int **)&local_4,(int *)0x0,(int *)0x0)
  ;
  return;
}



void __thiscall cls_0x558740::meth_0x434760(cls_0x558740 *this)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  char *pcVar5;
  int **ppiVar6;
  undefined auStack_28 [4];
  void *pvStack_24;
  dword dStack_14;
  uint uStack_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  dword dStack_4;
  
  dStack_4 = 0xffffffff;
  puStack_8 = &LAB_0062d708;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  if ((undefined4 *)this->mbr_0x98 == (undefined4 *)0x0) {
    ppiVar6 = (int **)0x0;
  }
  else {
    ppiVar6 = *(int ***)(undefined4 *)this->mbr_0x98;
  }
  piVar4 = (int *)this->mbr_0xa4;
  if (piVar4 != (int *)0x0) {
    piVar4 = (int *)*piVar4;
  }
  ExceptionList = &local_c;
  if (ppiVar6 != (int **)this->mbr_0x98) {
    do {
      if (piVar4 == (undefined4 *)this->mbr_0xa4) break;
      piVar1 = ppiVar6[2];
      iVar2 = piVar4[2];
      if ((piVar1 != (int *)0x0) && (iVar2 != 0)) {
        (**(code **)(*piVar1 + 300))(iVar2);
        (**(code **)(*piVar1 + 0x168))
                  (((*(uint *)(iVar2 + 0x38) | 0xffffff00) << 8 | *(uint *)(iVar2 + 0x3c) & 0xff) <<
                   8 | *(uint *)(iVar2 + 0x40) & 0xff);
      }
      ppiVar6 = (int **)*ppiVar6;
      piVar4 = (int *)*piVar4;
    } while (ppiVar6 != (int **)this->mbr_0x98);
    if (ppiVar6 != (int **)this->mbr_0x98) {
      do {
        piVar4 = ppiVar6[2];
        if (piVar4 != (int *)0x0) {
          uStack_10 = 0xf;
          dStack_14 = 0;
          pvStack_24 = (void *)((uint)pvStack_24 & 0xffffff00);
          pcVar3 = "";
          do {
            pcVar5 = pcVar3;
            pcVar3 = pcVar5 + 1;
          } while (*pcVar5 != '\0');
          ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)auStack_28,"",(uint)(pcVar5 + -0x64d7d8));
          dStack_4 = 0;
          (**(code **)(*piVar4 + 300))(auStack_28);
          dStack_4 = 0xffffffff;
          if (0xf < uStack_10) {
                    /* WARNING: Subroutine does not return */
            _free(pvStack_24);
          }
          pvStack_24 = (void *)((uint)pvStack_24 & 0xffffff00);
        }
        ppiVar6 = (int **)*ppiVar6;
      } while (ppiVar6 != (int **)this->mbr_0x98);
    }
  }
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x558740::meth_0x434910(cls_0x558740 *this,int param_1,int *param_2)

{
  int *piVar1;
  char *pcVar2;
  dword dVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  Label *this_00;
  dword *pdVar8;
  FILE FStack_28;
  undefined *puStack_8;
  dword dStack_4;
  
  piVar1 = param_2;
  dStack_4 = 0xffffffff;
  puStack_8 = &LAB_0062d753;
  FStack_28._tmpfname = (char *)ExceptionList;
  if (((9 < param_1) && (9 < (int)param_2)) &&
     ((param_1 != this->mbr_0x14 || (param_2 != (int *)this->mbr_0x18)))) {
    ExceptionList = &FStack_28._tmpfname;
    (**(code **)(*(int *)this->mbr_0x8 + 0x10))((param_1 - this->mbr_0x48) - this->mbr_0x44,param_2)
    ;
    this->mbr_0x14 = param_1;
    this->mbr_0x18 = (dword)piVar1;
    (**(code **)(*(int *)this->mbr_0x4 + 0x10))(param_1,piVar1);
    dVar3 = (int)((this->mbr_0x18 - this->mbr_0x4c) - this->mbr_0x50) / (int)this->mbr_0x54;
    if (dVar3 != this->mbr_0x1c) {
      meth_0x434250(this);
      param_1 = dVar3;
      if (0 < (int)dVar3) {
        do {
          param_2 = (int *)FUN_004a7680(0xe64);
          this_00 = (Label *)0x0;
          dStack_4 = 0;
          if ((Label *)param_2 != (Label *)0x0) {
            this_00 = GUI::Label::Label((Label *)param_2,3);
          }
          dStack_4 = 0xffffffff;
          param_2 = (int *)this_00;
          (**(code **)(*(int *)this->mbr_0x4 + 0xa4))(this_00);
          (*(this_00->Window).Base.vftptr_0x0[4].virt_meth_0x4b2850_28)
                    ((Base *)this_00,(int)&this->mbr_0x58);
          iVar7 = 0;
          pdVar8 = &this->mbr_0x74;
          (*(this_00->Window).Base.vftptr_0x0[7].virt_meth_0x4b27c0_20)(this_00);
          (*(this_00->Window).Base.vftptr_0x0[8].virt_meth_0x4b2750_8)
                    ((Base *)this_00,(undefined4 *)0xff808080,pdVar8);
          FStack_28._bufsiz = 0xf;
          FStack_28._charbuf = 0;
          FStack_28._cnt = FStack_28._cnt & 0xffffff00;
          pcVar2 = "";
          do {
            pcVar4 = pcVar2;
            pcVar2 = pcVar4 + 1;
          } while (*pcVar4 != '\0');
          ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&FStack_28,"",(uint)(pcVar4 + -0x64d7d8));
          dStack_4 = 1;
          (*(this_00->Window).Base.vftptr_0x0[6].virt_meth_0x4b2830_36)((Base *)this_00,&FStack_28);
          dStack_4 = 0xffffffff;
          if (0xf < (uint)FStack_28._bufsiz) {
                    /* WARNING: Subroutine does not return */
            _free((void *)FStack_28._cnt);
          }
          FStack_28._bufsiz = 0xf;
          FStack_28._charbuf = 0;
          FStack_28._cnt = FStack_28._cnt & 0xffffff00;
          if ((int *)this->mbr_0x98 != (int *)0x0) {
            iVar7 = *(int *)this->mbr_0x98;
          }
          iVar5 = FUN_00433760(iVar7,*(undefined4 *)(iVar7 + 4),&param_2);
          cls_0x4344a0::meth_0x4344a0((cls_0x4344a0 *)&this->mbr_0x94,1);
          *(int *)(iVar7 + 4) = iVar5;
          **(int **)(iVar5 + 4) = iVar5;
          param_1 = param_1 + -1;
        } while (param_1 != 0);
      }
      this->mbr_0x1c = dVar3;
    }
    puVar6 = (undefined4 *)this->mbr_0x98;
    iVar7 = 1;
    if (puVar6 != (undefined4 *)0x0) {
      puVar6 = (undefined4 *)*puVar6;
    }
    if (puVar6 != (undefined4 *)this->mbr_0x98) {
      do {
        piVar1 = (int *)puVar6[2];
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x10))
                    ((this->mbr_0x14 - this->mbr_0x48) - this->mbr_0x44,this->mbr_0x54);
          (**(code **)(*piVar1 + 0x44))
                    (this->mbr_0xc + this->mbr_0x44,
                     ((this->mbr_0x10 - this->mbr_0x54 * iVar7) - this->mbr_0x50) + this->mbr_0x18);
        }
        puVar6 = (undefined4 *)*puVar6;
        iVar7 = iVar7 + 1;
      } while (puVar6 != (undefined4 *)this->mbr_0x98);
    }
    meth_0x434760(this);
  }
  ExceptionList = FStack_28._tmpfname;
  return;
}



void __thiscall cls_0x558740::meth_0x557a50(cls_0x558740 *this)

{
  cls_0x4d8d70 *this_00;
  int **ppiVar1;
  int *piVar2;
  cls_0x558740 *local_4;
  
  if ((int **)this->mbr_0xa4 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)this->mbr_0xa4;
  }
  local_4 = this;
  if (piVar2 != (int *)this->mbr_0xa4) {
    do {
      this_00 = (cls_0x4d8d70 *)piVar2[2];
      if (this_00 != (cls_0x4d8d70 *)0x0) {
        cls_0x4d8d70::meth_0x4b2dd0(this_00);
                    /* WARNING: Subroutine does not return */
        _free(this_00);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)this->mbr_0xa4);
  }
  ppiVar1 = (int **)this->mbr_0xa4;
  if (ppiVar1 != (int **)0x0) {
    GUI::Interface::meth_0x4b9d60
              ((Interface *)&this->mbr_0xa0,(int **)&local_4,*ppiVar1,(int *)ppiVar1);
    return;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0xa0,(int **)&local_4,(int *)0x0,(int *)0x0)
  ;
  return;
}



void __thiscall cls_0x558740::meth_0x557d90(cls_0x558740 *this,undefined4 *param_1)

{
  int *piVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined local_44 [4];
  void *local_40;
  dword local_30;
  dword local_2c;
  undefined local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637de0;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  ExceptionList = &local_c;
  meth_0x557a50(this);
  this->mbr_0xac = 1;
  ::cls_0x50db20::meth_0x4d7bc0((cls_0x50db20 *)&this->mbr_0xb0,(int)param_1);
  puVar4 = *(undefined4 **)(this->mbr_0x98 + 4);
  iVar9 = 0;
  if (0 < (int)this->mbr_0x8) {
    do {
      if (param_1[1] == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = (int)(param_1[2] - param_1[1]) / 0x1c;
      }
    } while ((iVar9 < iVar6) && (iVar9 = iVar9 + 1, iVar9 < (int)this->mbr_0x8));
  }
  iVar6 = iVar9 * 0x1c;
  while( true ) {
    puVar3 = (undefined4 *)this->mbr_0x98;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)*puVar3;
    }
    if (puVar4 == puVar3) break;
    iVar8 = param_1[1];
    if (iVar8 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = (param_1[2] - iVar8) / 0x1c;
    }
    if (iVar7 <= iVar9) break;
    if ((int *)puVar4[2] != (int *)0x0) {
      (**(code **)(*(int *)puVar4[2] + 300))(iVar6 + iVar8);
    }
    puVar4 = (undefined4 *)puVar4[1];
    iVar9 = iVar9 + 1;
    iVar6 = iVar6 + 0x1c;
  }
  iVar6 = param_1[1];
  if (iVar6 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = (param_1[2] - iVar6) / 0x1c;
  }
  param_1 = puVar4;
  if (iVar9 < iVar8) {
    if ((int *)puVar4[2] != (int *)0x0) {
      (**(code **)(*(int *)puVar4[2] + 300))(iVar9 * 0x1c + iVar6);
    }
  }
  else {
    while( true ) {
      if ((int *)this->mbr_0x98 == (int *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = *(undefined4 **)(int *)this->mbr_0x98;
      }
      piVar1 = (int *)param_1[2];
      if (param_1 == puVar4) break;
      if (piVar1 != (int *)0x0) {
        local_30 = 0;
        local_2c = 0xf;
        local_40 = (void *)((uint)local_40 & 0xffffff00);
        pcVar2 = "";
        do {
          pcVar5 = pcVar2;
          pcVar2 = pcVar5 + 1;
        } while (*pcVar5 != '\0');
        ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_44,"",(uint)(pcVar5 + -0x64d7d8));
        local_4 = 0;
        (**(code **)(*piVar1 + 300))(local_44);
        local_4 = 0xffffffff;
        if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
          _free(local_40);
        }
        local_2c = 0xf;
        local_30 = 0;
        local_40 = (void *)((uint)local_40 & 0xffffff00);
      }
      param_1 = (undefined4 *)param_1[1];
    }
    if (piVar1 != (int *)0x0) {
      local_14 = 0;
      local_10 = 0xf;
      local_24 = (void *)((uint)local_24 & 0xffffff00);
      pcVar2 = "";
      do {
        pcVar5 = pcVar2;
        pcVar2 = pcVar5 + 1;
      } while (*pcVar5 != '\0');
      ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"",(uint)(pcVar5 + -0x64d7d8));
      local_4 = 1;
      (**(code **)(*piVar1 + 300))(local_28);
      if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
        _free(local_24);
      }
    }
  }
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x558740::meth_0x557ff0(cls_0x558740 *this)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  int **ppiVar4;
  int iVar5;
  char *pcVar6;
  int **ppiVar7;
  undefined local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637df8;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  if (this->mbr_0xac != 0) {
    ExceptionList = &local_c;
    meth_0x557d90(this,&this->mbr_0xb0);
    ExceptionList = local_c;
    return;
  }
  if ((int **)this->mbr_0x98 == (int **)0x0) {
    ppiVar7 = (int **)0x0;
  }
  else {
    ppiVar7 = *(int ***)(int **)this->mbr_0x98;
  }
  ppiVar4 = (int **)this->mbr_0xa4;
  if (ppiVar4 != (int **)0x0) {
    ppiVar4 = (int **)*ppiVar4;
  }
  iVar5 = 0;
  if (0 < (int)this->mbr_0x8) {
    do {
      if (ppiVar4 == (int **)this->mbr_0xa4) break;
      ppiVar4 = (int **)*ppiVar4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)this->mbr_0x8);
  }
  ExceptionList = &local_c;
  if (ppiVar7 != (int **)this->mbr_0x98) {
    do {
      if (ppiVar4 == (int **)this->mbr_0xa4) break;
      piVar1 = ppiVar7[2];
      piVar2 = ppiVar4[2];
      if ((piVar1 != (int *)0x0) && (piVar2 != (int *)0x0)) {
        (**(code **)(*piVar1 + 300))(piVar2);
        (**(code **)(*piVar1 + 0x168))
                  (((piVar2[7] | 0xffffff00U) << 8 | piVar2[8] & 0xffU) << 8 | piVar2[9] & 0xffU);
      }
      ppiVar7 = (int **)*ppiVar7;
      ppiVar4 = (int **)*ppiVar4;
    } while (ppiVar7 != (int **)this->mbr_0x98);
    if (ppiVar7 != (int **)this->mbr_0x98) {
      do {
        piVar1 = ppiVar7[2];
        if (piVar1 != (int *)0x0) {
          local_10 = 0xf;
          local_14 = 0;
          local_24 = (void *)((uint)local_24 & 0xffffff00);
          pcVar3 = "";
          do {
            pcVar6 = pcVar3;
            pcVar3 = pcVar6 + 1;
          } while (*pcVar6 != '\0');
          ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"",(uint)(pcVar6 + -0x64d7d8));
          local_4 = 0;
          (**(code **)(*piVar1 + 300))(local_28);
          local_4 = 0xffffffff;
          if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
            _free(local_24);
          }
          local_24 = (void *)((uint)local_24 & 0xffffff00);
        }
        ppiVar7 = (int **)*ppiVar7;
      } while (ppiVar7 != (int **)this->mbr_0x98);
    }
  }
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x558740::meth_0x558190(cls_0x558740 *this,int param_1,int *param_2)

{
  int *piVar1;
  char *pcVar2;
  dword dVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  Label *this_00;
  dword *pdVar8;
  FILE FStack_28;
  undefined *puStack_8;
  dword dStack_4;
  
  dStack_4 = 0xffffffff;
  puStack_8 = &LAB_00637e23;
  FStack_28._tmpfname = (char *)ExceptionList;
  if (((9 < param_1) && (9 < (int)param_2)) &&
     ((param_1 != this->mbr_0x14 || (param_2 != (int *)this->mbr_0x18)))) {
    ExceptionList = &FStack_28._tmpfname;
    this->mbr_0x14 = param_1;
    this->mbr_0x18 = (dword)param_2;
    (**(code **)(*(int *)this->mbr_0x4 + 0x10))(param_1,param_2);
    dVar3 = (int)((this->mbr_0x18 - this->mbr_0x4c) - this->mbr_0x50) / (int)this->mbr_0x54;
    if (dVar3 != this->mbr_0x1c) {
      meth_0x434250(this);
      param_1 = dVar3;
      if (0 < (int)dVar3) {
        do {
          param_2 = (int *)FUN_004a7680(0xe64);
          this_00 = (Label *)0x0;
          dStack_4 = 0;
          if ((Label *)param_2 != (Label *)0x0) {
            this_00 = GUI::Label::Label((Label *)param_2,3);
          }
          dStack_4 = 0xffffffff;
          param_2 = (int *)this_00;
          (**(code **)(*(int *)this->mbr_0x4 + 0xa4))(this_00);
          (*(this_00->Window).Base.vftptr_0x0[4].virt_meth_0x4b2850_28)
                    ((Base *)this_00,(int)&this->mbr_0x58);
          iVar7 = 0;
          pdVar8 = &this->mbr_0x74;
          (*(this_00->Window).Base.vftptr_0x0[7].virt_meth_0x4b27c0_20)(this_00);
          (*(this_00->Window).Base.vftptr_0x0[8].virt_meth_0x4b2750_8)
                    ((Base *)this_00,(undefined4 *)0xff808080,pdVar8);
          FStack_28._bufsiz = 0xf;
          FStack_28._charbuf = 0;
          FStack_28._cnt = FStack_28._cnt & 0xffffff00;
          pcVar2 = "";
          do {
            pcVar4 = pcVar2;
            pcVar2 = pcVar4 + 1;
          } while (*pcVar4 != '\0');
          ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&FStack_28,"",(uint)(pcVar4 + -0x64d7d8));
          dStack_4 = 1;
          (*(this_00->Window).Base.vftptr_0x0[6].virt_meth_0x4b2830_36)((Base *)this_00,&FStack_28);
          dStack_4 = 0xffffffff;
          if (0xf < (uint)FStack_28._bufsiz) {
                    /* WARNING: Subroutine does not return */
            _free((void *)FStack_28._cnt);
          }
          FStack_28._bufsiz = 0xf;
          FStack_28._charbuf = 0;
          FStack_28._cnt = FStack_28._cnt & 0xffffff00;
          if ((int *)this->mbr_0x98 != (int *)0x0) {
            iVar7 = *(int *)this->mbr_0x98;
          }
          iVar5 = FUN_00433760(iVar7,*(undefined4 *)(iVar7 + 4),&param_2);
          cls_0x4344a0::meth_0x4344a0((cls_0x4344a0 *)&this->mbr_0x94,1);
          *(int *)(iVar7 + 4) = iVar5;
          **(int **)(iVar5 + 4) = iVar5;
          param_1 = param_1 + -1;
        } while (param_1 != 0);
      }
      this->mbr_0x1c = dVar3;
    }
    puVar6 = (undefined4 *)this->mbr_0x98;
    iVar7 = 1;
    if (puVar6 != (undefined4 *)0x0) {
      puVar6 = (undefined4 *)*puVar6;
    }
    if (puVar6 != (undefined4 *)this->mbr_0x98) {
      do {
        piVar1 = (int *)puVar6[2];
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x10))
                    ((this->mbr_0x14 - this->mbr_0x48) - this->mbr_0x44,this->mbr_0x54);
          (**(code **)(*piVar1 + 0x44))
                    (this->mbr_0xc + this->mbr_0x44,
                     ((this->mbr_0x10 - this->mbr_0x54 * iVar7) - this->mbr_0x50) + this->mbr_0x18);
        }
        puVar6 = (undefined4 *)*puVar6;
        iVar7 = iVar7 + 1;
      } while (puVar6 != (undefined4 *)this->mbr_0x98);
    }
    meth_0x557ff0(this);
  }
  ExceptionList = FStack_28._tmpfname;
  return;
}



void __thiscall
cls_0x558740::meth_0x5583e0
          (cls_0x558740 *this,_String_base *param_1,undefined4 param_2,undefined4 param_3,
          void *param_4)

{
  int *_Memory;
  cls_0x50db20 *this_00;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637e3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0xac = 0;
  if (this->mbr_0xb4 != 0) {
    FUN_004310a0(this->mbr_0xb4,this->mbr_0xb8);
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xb4);
  }
  this->mbr_0xb4 = 0;
  this->mbr_0xb8 = 0;
  this->mbr_0xbc = 0;
  this_00 = (cls_0x50db20 *)operator_new(0x28);
  local_4 = 0;
  if (this_00 == (cls_0x50db20 *)0x0) {
    param_4 = (cls_0x50db20 *)0x0;
  }
  else {
    param_4 = ::cls_0x50db20::cls_0x50db20(this_00,param_1,param_2,param_3,param_4);
  }
  local_4 = 0xffffffff;
  if ((int *)this->mbr_0xa4 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)this->mbr_0xa4;
  }
  iVar1 = FUN_00433760(iVar2,*(undefined4 *)(iVar2 + 4),&param_4);
  cls_0x557ad0::meth_0x557ad0((cls_0x557ad0 *)&this->mbr_0xa0,1);
  *(int *)(iVar2 + 4) = iVar1;
  **(int **)(iVar1 + 4) = iVar1;
  if ((1000 < this->mbr_0xa8) &&
     (_Memory = *(int **)(this->mbr_0xa4 + 4), _Memory != (int *)this->mbr_0xa4)) {
    *(int *)_Memory[1] = *_Memory;
    *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  meth_0x557ff0(this);
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x558740::meth_0x558510(cls_0x558740 *this,int param_1,int param_2)

{
  dword dVar1;
  dword dVar2;
  int iVar3;
  int iVar4;
  
  switch(this->mbr_0x20) {
  case 1:
    meth_0x434120(this,param_1 - this->mbr_0x24,param_2 - this->mbr_0x28);
    return;
  case 2:
    iVar4 = param_1 - this->mbr_0x24;
    dVar2 = this->mbr_0x14;
    meth_0x558190(this,(this->mbr_0xc - iVar4) + dVar2,(int *)this->mbr_0x18);
    if (this->mbr_0x14 != dVar2) {
      meth_0x434120(this,iVar4,this->mbr_0x10);
      return;
    }
    break;
  case 3:
    meth_0x558190(this,(this->mbr_0x2c - this->mbr_0xc) + param_1,(int *)this->mbr_0x18);
    return;
  case 4:
    iVar4 = param_2 - this->mbr_0x28;
    dVar2 = this->mbr_0x18;
    meth_0x558190(this,this->mbr_0x14,(int *)((this->mbr_0x10 - iVar4) + dVar2));
    if (dVar2 != this->mbr_0x18) {
      meth_0x434120(this,this->mbr_0xc,iVar4);
      return;
    }
    break;
  case 5:
    meth_0x558190(this,this->mbr_0x14,(int *)((this->mbr_0x30 - this->mbr_0x10) + param_2));
    break;
  case 6:
    dVar2 = this->mbr_0x18;
    dVar1 = this->mbr_0x14;
    iVar3 = param_1 - this->mbr_0x24;
    iVar4 = param_2 - this->mbr_0x28;
    meth_0x558190(this,(this->mbr_0xc - iVar3) + dVar1,(int *)((this->mbr_0x10 - iVar4) + dVar2));
    if ((this->mbr_0x14 != dVar1) || (this->mbr_0x18 != dVar2)) {
      meth_0x434120(this,iVar3,iVar4);
      return;
    }
    break;
  case 7:
    dVar2 = this->mbr_0x14;
    iVar4 = param_1 - this->mbr_0x24;
    meth_0x558190(this,(this->mbr_0xc - iVar4) + dVar2,
                  (int *)((this->mbr_0x30 - this->mbr_0x10) + param_2));
    if (this->mbr_0x14 != dVar2) {
      meth_0x434120(this,iVar4,this->mbr_0x10);
      return;
    }
    break;
  case 8:
    dVar2 = this->mbr_0x18;
    iVar4 = param_2 - this->mbr_0x28;
    meth_0x558190(this,(this->mbr_0x2c - this->mbr_0xc) + param_1,
                  (int *)((this->mbr_0x10 - iVar4) + dVar2));
    if (this->mbr_0x18 != dVar2) {
      meth_0x434120(this,this->mbr_0xc,iVar4);
      return;
    }
    break;
  case 9:
    meth_0x558190(this,(this->mbr_0x2c - this->mbr_0xc) + param_1,
                  (int *)((this->mbr_0x30 - this->mbr_0x10) + param_2));
    return;
  }
  return;
}


