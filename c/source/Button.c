#include "../include/Button.h"

int __thiscall GUI::Button::meth_0x4a6d70(Button *this)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)&(this->Window).Base.field_0xd1c;
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((iVar1 != 3) && (iVar1 != 7)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}



undefined4 __thiscall GUI::Button::virt_meth_0x4a6da0(Button *this,int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = meth_0x4a6d70(this);
  if ((char)iVar1 == '\0') {
    return 0;
  }
  iVar1 = *param_1;
  if (iVar1 == 1) {
    if ((*(byte *)(param_1 + 3) & 1) == 0) {
      *(uint *)&(this->Window).Base.field_0xd1c =
           (uint)((this->Window).Base.field_0xd20 != '\0') * 4 + 1;
    }
    else if (DAT_00707e58 == this) {
LAB_004a6dcc:
      iVar1 = (uint)((this->Window).Base.field_0xd20 != '\0') * 4 + 2;
LAB_004a6de0:
      *(int *)&(this->Window).Base.field_0xd1c = iVar1;
    }
  }
  else if (iVar1 == 3) {
    *(uint *)&(this->Window).Base.field_0xd1c = -(uint)((this->Window).Base.field_0xd20 != '\0') & 4
    ;
  }
  else {
    if ((iVar1 == 4) || (iVar1 == 7)) goto LAB_004a6dcc;
    if (iVar1 == 5) {
      iVar1 = (uint)((this->Window).Base.field_0xd20 != '\0') * 4 + 1;
      goto LAB_004a6de0;
    }
    if (((iVar1 == 0xc) || (iVar1 == 0xf)) && ((this->Window).Base.field_0xd21 != '\0')) {
      *(uint *)&(this->Window).Base.field_0xd1c =
           (uint)((this->Window).Base.field_0xd20 != '\0') * 4 + 2;
    }
    else {
      if ((iVar1 != 0xd) || ((this->Window).Base.field_0xd21 == '\0')) goto LAB_004a6df4;
      *(uint *)&(this->Window).Base.field_0xd1c =
           (uint)((this->Window).Base.field_0xd20 != '\0') * 4 + 1;
    }
  }
  (*(this->Window).Base.vftptr_0x0[4].virt_meth_0x4b2850_28)
            ((Base *)this,(int)&(this->Window).Base.field_0x40);
LAB_004a6df4:
  uVar2 = Window::virt_meth_0x4affa0(&this->Window,param_1);
  return uVar2;
}



Button * __thiscall GUI::Button::Button(Button *this,uint param_1)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631d82;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Window::Window(&this->Window,param_1);
  (this->Window).Base.vftptr_0x0 = (Base__vftable_66e41c *)&Button__vftable_66c9bc_0066c9bc;
  *(undefined ***)&(this->Window).Base.field_0x18 = &PTR_virt_meth_0x4a6fb0_0066c9b4;
  *(undefined4 *)&(this->Window).Base.field_0xd1c = 0;
  (this->Window).Base.field_0xd20 = 0;
  (this->Window).Base.field_0xd21 = 0;
  this->mbr_0xd3c = 0xf;
  this->mbr_0xd38 = 0;
  (this->Window).Base.field_0xd28 = 0;
  this->mbr_0xd58 = 0xf;
  this->mbr_0xd54 = 0;
  *(undefined *)&this->mbr_0xd44 = 0;
  this->mbr_0xd74 = 0xf;
  this->mbr_0xd70 = 0;
  *(undefined *)&this->mbr_0xd60 = 0;
  local_4 = 3;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->Window).Base.field_0xd24,(_String_base *)&DAT_006fae5c,0,
             0xffffffff);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&this->mbr_0xd40,(_String_base *)&DAT_006fae78,0,0xffffffff);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&this->mbr_0xd5c,(_String_base *)&DAT_006fae94,0,0xffffffff);
  ExceptionList = local_c;
  return this;
}



int * __thiscall GUI::Button::virt_meth_0x4a6fc0(Button *this,byte param_1)

{
  ~Button(this);
  if ((param_1 & 1) != 0) {
    FUN_004a7540((int *)this);
  }
  return (int *)this;
}



Button * __thiscall GUI::Button::~Button(Button *this)

{
  Button *pBVar1;
  
  (this->Window).Base.vftptr_0x0 = (Base__vftable_66e41c *)&Button__vftable_66c9bc_0066c9bc;
  *(undefined ***)&(this->Window).Base.field_0x18 = &PTR_virt_meth_0x4a6fb0_0066c9b4;
  if (0xf < this->mbr_0xd74) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xd60);
  }
  this->mbr_0xd74 = 0xf;
  this->mbr_0xd70 = 0;
  *(undefined *)&this->mbr_0xd60 = 0;
  if (0xf < this->mbr_0xd58) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xd44);
  }
  this->mbr_0xd58 = 0xf;
  this->mbr_0xd54 = 0;
  *(undefined *)&this->mbr_0xd44 = 0;
  if (0xf < this->mbr_0xd3c) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&(this->Window).Base.field_0xd28);
  }
  this->mbr_0xd38 = 0;
  this->mbr_0xd3c = 0xf;
  (this->Window).Base.field_0xd28 = 0;
  pBVar1 = (Button *)Label::meth_0x4b0a50((Label *)this);
  return pBVar1;
}



void __thiscall GUI::Button::virt_meth_0x4a70d0(Button *this,undefined **param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined uVar3;
  char *pcVar4;
  undefined3 extraout_var;
  int **ppiVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *unaff_ESI;
  int **ppiVar10;
  undefined4 *unaff_EDI;
  bool bVar11;
  int *in_stack_0000000c;
  size_t sVar12;
  int *piStack_3c;
  int *piStack_38;
  undefined4 *puStack_34;
  cls_0x495690 acStack_2c [2];
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *pVStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631da0;
  pVStack_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  pcVar6 = (&PTR_s_button_up_006fae3c)[*(int *)&(this->Window).Base.field_0xd1c];
  local_10 = 0xf;
  local_14 = 0;
  acStack_2c[0].mbr_0x8 = acStack_2c[0].mbr_0x8 & 0xffffff00;
  pcVar4 = pcVar6;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &pVStack_c;
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&acStack_2c[0].mbr_0x4,pcVar6,(int)pcVar4 - (int)(pcVar6 + 1));
  local_4 = 0;
  Window::virt_meth_0x4b06c0(&this->Window,param_1,(_String_base *)&acStack_2c[0].mbr_0x4);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free((void *)acStack_2c[0].mbr_0x8);
  }
  uVar3 = (*(this->Window).Base.vftptr_0x0[4].virt_meth_0x4b2750_8)
                    ((Base *)this,unaff_EDI,unaff_ESI);
  piStack_3c = (int *)0x0;
  piStack_38 = (int *)0x0;
  ppiVar5 = (int **)FUN_0056e0b0();
  puStack_34 = (undefined4 *)0x0;
  acStack_2c[0].mbr_0x8 = 0;
  puVar2 = *(undefined4 **)(CONCAT31(extraout_var,uVar3) + 4);
  if (puVar2 != (undefined4 *)0x0) {
    puStack_34 = (undefined4 *)*puVar2;
  }
  piVar9 = (int *)0x0;
  acStack_2c[0].mbr_0x4 = (dword)ppiVar5;
  if (puStack_34 != puVar2) {
    do {
      piVar9 = (int *)puStack_34[2];
      sVar12 = 5;
      pcVar4 = "BtnUp";
      in_stack_0000000c = piVar9;
      pcVar6 = (char *)(**(code **)(*piVar9 + 0x50))();
      iVar7 = __strnicmp(pcVar6,pcVar4,sVar12);
      if (iVar7 == 0) {
        iVar7 = *(int *)&(this->Window).Base.field_0xd1c;
        if (((iVar7 == 2) || (iVar7 == 1)) || ((iVar7 == 0 || (iVar7 == 3)))) {
          piStack_38 = piVar9;
        }
        (**(code **)(*piVar9 + 0xe8))(1);
        (**(code **)(*piVar9 + 0x54))(1);
        bVar11 = *(int *)&(this->Window).Base.field_0xd1c == 0;
LAB_004a7294:
        if (bVar11) {
          piVar8 = (int *)FUN_00433760(ppiVar5,ppiVar5[1],&stack0x0000000c);
          cls_0x495690::meth_0x495690(acStack_2c,1);
          ppiVar5[1] = piVar8;
          *(int **)piVar8[1] = piVar8;
          ppiVar5 = (int **)acStack_2c[0].mbr_0x4;
        }
      }
      else {
        sVar12 = 0xb;
        pcVar4 = "BtnSelected";
        pcVar6 = (char *)(**(code **)(*piVar9 + 0x50))();
        iVar7 = __strnicmp(pcVar6,pcVar4,sVar12);
        if (iVar7 == 0) {
          (**(code **)(*piVar9 + 0xe8))(1);
          (**(code **)(*piVar9 + 0x54))(1);
          bVar11 = *(int *)&(this->Window).Base.field_0xd1c == 1;
LAB_004a7301:
          if (bVar11) {
            piVar8 = (int *)FUN_00433760(ppiVar5,ppiVar5[1],&stack0x0000000c);
            cls_0x495690::meth_0x495690(acStack_2c,1);
            ppiVar5[1] = piVar8;
            *(int **)piVar8[1] = piVar8;
            ppiVar5 = (int **)acStack_2c[0].mbr_0x4;
          }
        }
        else {
          sVar12 = 7;
          pcVar4 = "BtnDown";
          pcVar6 = (char *)(**(code **)(*piVar9 + 0x50))();
          iVar7 = __strnicmp(pcVar6,pcVar4,sVar12);
          if (iVar7 == 0) {
            iVar7 = *(int *)&(this->Window).Base.field_0xd1c;
            if ((((iVar7 == 6) || (iVar7 == 5)) || (iVar7 == 4)) || (iVar7 == 7)) {
              piStack_3c = piVar9;
            }
            (**(code **)(*piVar9 + 0xe8))(1);
            (**(code **)(*piVar9 + 0x54))(1);
            bVar11 = *(int *)&(this->Window).Base.field_0xd1c == 2;
            goto LAB_004a7294;
          }
          sVar12 = 0xb;
          pcVar4 = "BtnDisabled";
          pcVar6 = (char *)(**(code **)(*piVar9 + 0x50))();
          iVar7 = __strnicmp(pcVar6,pcVar4,sVar12);
          if (iVar7 == 0) {
            (**(code **)(*piVar9 + 0xe8))(1);
            (**(code **)(*piVar9 + 0x54))(1);
            bVar11 = *(int *)&(this->Window).Base.field_0xd1c == 3;
            goto LAB_004a7301;
          }
          sVar12 = 5;
          pcVar4 = "BtnCheckedUp";
          pcVar6 = (char *)(**(code **)(*piVar9 + 0x50))();
          iVar7 = __strnicmp(pcVar6,pcVar4,sVar12);
          if (iVar7 == 0) {
            (**(code **)(*piVar9 + 0xe8))(1);
            (**(code **)(*piVar9 + 0x54))(1);
            bVar11 = *(int *)&(this->Window).Base.field_0xd1c == 4;
          }
          else {
            sVar12 = 0xb;
            pcVar4 = "BtnCheckedSelected";
            pcVar6 = (char *)(**(code **)(*piVar9 + 0x50))();
            iVar7 = __strnicmp(pcVar6,pcVar4,sVar12);
            if (iVar7 == 0) {
              (**(code **)(*piVar9 + 0xe8))(1);
              (**(code **)(*piVar9 + 0x54))(1);
              bVar11 = *(int *)&(this->Window).Base.field_0xd1c == 5;
            }
            else {
              sVar12 = 7;
              pcVar4 = "BtnCheckedDown";
              pcVar6 = (char *)(**(code **)(*piVar9 + 0x50))();
              iVar7 = __strnicmp(pcVar6,pcVar4,sVar12);
              if (iVar7 == 0) {
                (**(code **)(*piVar9 + 0xe8))(1);
                (**(code **)(*piVar9 + 0x54))(1);
                bVar11 = *(int *)&(this->Window).Base.field_0xd1c == 6;
              }
              else {
                sVar12 = 0xb;
                pcVar4 = "BtnCheckedDisabled";
                pcVar6 = (char *)(**(code **)(*piVar9 + 0x50))();
                iVar7 = __strnicmp(pcVar6,pcVar4,sVar12);
                if (iVar7 != 0) goto LAB_004a7426;
                (**(code **)(*piVar9 + 0xe8))(1);
                (**(code **)(*piVar9 + 0x54))(1);
                bVar11 = *(int *)&(this->Window).Base.field_0xd1c == 7;
              }
            }
          }
          if (bVar11) {
            cls_0x495690::meth_0x4a7090(acStack_2c,&stack0x0000000c);
            ppiVar5 = (int **)acStack_2c[0].mbr_0x4;
          }
        }
      }
LAB_004a7426:
      if (piStack_3c == (int *)0x0) {
        piStack_3c = piVar9;
      }
      if (piStack_38 == (int *)0x0) {
        piStack_38 = piVar9;
      }
      puStack_34 = (undefined4 *)*puStack_34;
    } while (puStack_34 != *(undefined4 **)(CONCAT31(extraout_var,uVar3) + 4));
    piVar9 = piStack_38;
    if (acStack_2c[0].mbr_0x8 != 0) {
      if (ppiVar5 == (int **)0x0) {
        ppiVar10 = (int **)0x0;
      }
      else {
        ppiVar10 = (int **)*ppiVar5;
      }
      for (; ppiVar10 != ppiVar5; ppiVar10 = (int **)*ppiVar10) {
        (**(code **)(*ppiVar10[2] + 0x54))(0);
      }
      goto LAB_004a74ee;
    }
  }
  iVar7 = *(int *)&(this->Window).Base.field_0xd1c;
  if (((iVar7 == 2) || (iVar7 == 1)) || ((iVar7 == 0 || (iVar7 == 3)))) {
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 0x54))(0);
      goto LAB_004a74ee;
    }
    if (piStack_3c == (int *)0x0) goto LAB_004a74ee;
    iVar7 = *piStack_3c;
  }
  else {
    if ((((iVar7 != 6) && (iVar7 != 5)) && (iVar7 != 4)) && (iVar7 != 7)) goto LAB_004a74ee;
    if (piStack_3c != (int *)0x0) {
      (**(code **)(*piStack_3c + 0x54))(0);
      goto LAB_004a74ee;
    }
    if (piVar9 == (int *)0x0) goto LAB_004a74ee;
    iVar7 = *piVar9;
  }
  (**(code **)(iVar7 + 0x54))(0);
LAB_004a74ee:
  if (ppiVar5 == (int **)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = *ppiVar5;
  }
  Interface::meth_0x4b9d60((Interface *)acStack_2c,&stack0x0000000c,piVar9,(int *)ppiVar5);
                    /* WARNING: Subroutine does not return */
  _free((void *)acStack_2c[0].mbr_0x4);
}


#include "../include/Button.h"
