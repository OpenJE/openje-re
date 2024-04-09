#include "../include/ScrollBar.h"

ScrollBar * __thiscall GUI::ScrollBar::ScrollBar(ScrollBar *this)

{
  this->vftptr_0x0 = &ScrollBar__vftable_670064_00670064;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x3c = 0;
  this->mbr_0x40 = 0;
  this->mbr_0x44 = 0;
  this->mbr_0x48 = 0;
  this->mbr_0x4c = 0;
  this->mbr_0x50 = 0;
  this->mbr_0x54 = 0;
  this->mbr_0x58 = 0;
  this->mbr_0x5c = 400;
  this->mbr_0x60 = 0x23;
  this->mbr_0x64 = 0;
  return this;
}



ScrollBar * __thiscall GUI::ScrollBar::~ScrollBar(ScrollBar *this)

{
  ScrollBar *in_EAX;
  
  this->vftptr_0x0 = &ScrollBar__vftable_670064_00670064;
  return in_EAX;
}



void __thiscall GUI::ScrollBar::meth_0x4b87d0(ScrollBar *this,dword param_1)

{
  this->mbr_0x24 = param_1;
  return;
}



void __thiscall GUI::ScrollBar::meth_0x4b8840(ScrollBar *this)

{
  int *piVar1;
  dword dVar2;
  dword dVar3;
  int iVar4;
  dword dVar5;
  
  piVar1 = (int *)this->mbr_0xc;
  if (piVar1 != (int *)0x0) {
    iVar4 = this->mbr_0x18 - this->mbr_0x1c;
    if ((*(byte *)&this->mbr_0x14 & 1) == 0) {
      if (iVar4 < 1) {
        iVar4 = 0;
      }
      else {
        iVar4 = (int)((this->mbr_0x50 - this->mbr_0x30) * this->mbr_0x28) / iVar4;
      }
      dVar2 = this->mbr_0x48;
      dVar3 = iVar4 + dVar2;
      if ((int)(iVar4 + dVar2) < (int)dVar2) {
        dVar3 = dVar2;
      }
      iVar4 = dVar2 + (this->mbr_0x50 - this->mbr_0x30);
      dVar5 = this->mbr_0x44;
      if (iVar4 < (int)dVar3) {
        (**(code **)(*piVar1 + 0x44))(this->mbr_0x44,iVar4);
        return;
      }
    }
    else {
      dVar3 = this->mbr_0x48;
      if (iVar4 < 1) {
        iVar4 = 0;
      }
      else {
        iVar4 = (int)((this->mbr_0x4c - this->mbr_0x2c) * this->mbr_0x28) / iVar4;
      }
      dVar2 = this->mbr_0x44;
      dVar5 = iVar4 + dVar2;
      if ((int)(iVar4 + dVar2) < (int)dVar2) {
        dVar5 = dVar2;
      }
      dVar2 = dVar2 + (this->mbr_0x4c - this->mbr_0x2c);
      if ((int)dVar2 < (int)dVar5) {
        dVar5 = dVar2;
      }
    }
    (**(code **)(*piVar1 + 0x44))(dVar5,dVar3);
  }
  return;
}



bool __thiscall GUI::ScrollBar::meth_0x4b88f0(ScrollBar *this,int param_1)

{
  dword dVar1;
  dword dVar2;
  
  dVar1 = this->mbr_0x28;
  dVar2 = dVar1 - param_1;
  this->mbr_0x28 = dVar2;
  if ((int)dVar2 < 0) {
    this->mbr_0x28 = 0;
  }
  meth_0x4b8840(this);
  return dVar1 != this->mbr_0x28;
}



bool __thiscall GUI::ScrollBar::meth_0x4b8930(ScrollBar *this,int param_1)

{
  dword dVar1;
  dword dVar2;
  dword dVar3;
  
  dVar2 = this->mbr_0x28;
  dVar1 = dVar2 + param_1;
  dVar3 = this->mbr_0x18 - this->mbr_0x1c;
  this->mbr_0x28 = dVar1;
  if ((int)dVar3 < (int)dVar1) {
    this->mbr_0x28 = dVar3;
  }
  if ((int)this->mbr_0x28 < 0) {
    this->mbr_0x28 = 0;
  }
  meth_0x4b8840(this);
  return dVar2 != this->mbr_0x28;
}



undefined4 __thiscall GUI::ScrollBar::meth_0x4b8980(ScrollBar *this)

{
  int unaff_ESI;
  int unaff_retaddr;
  undefined local_8 [4];
  int local_4;
  
  (**(code **)(*(int *)this->mbr_0xc + 0x48))(&local_4);
  if ((*(byte *)&this->mbr_0x14 & 1) == 0) {
    if (unaff_retaddr < (int)local_8) {
      return 1;
    }
    if ((int)(local_8 + this->mbr_0x30) <= unaff_retaddr) {
      return 0xffffffff;
    }
  }
  else {
    if (local_4 < unaff_ESI) {
      return 1;
    }
    if ((int)(this->mbr_0x2c + unaff_ESI) <= local_4) {
      return 0xffffffff;
    }
  }
  return 0;
}



int __thiscall GUI::ScrollBar::meth_0x4b8a00(ScrollBar *this,int param_1,int param_2)

{
  dword dVar1;
  int iVar2;
  int iVar3;
  dword dVar4;
  
  dVar4 = this->mbr_0x18;
  iVar2 = dVar4 - this->mbr_0x1c;
  if (iVar2 < 1) {
    return 0;
  }
  if ((*(byte *)&this->mbr_0x14 & 1) == 0) {
    iVar3 = param_2 - this->mbr_0x48;
    if (1 < (int)dVar4) {
      iVar3 = iVar3 + ((int)this->mbr_0x50 / (int)(dVar4 - 1)) / 2;
    }
    dVar4 = this->mbr_0x50;
    dVar1 = this->mbr_0x30;
  }
  else {
    iVar3 = param_1 - this->mbr_0x44;
    if (1 < (int)dVar4) {
      iVar3 = iVar3 + ((int)this->mbr_0x4c / (int)(dVar4 - 1)) / 2;
    }
    dVar4 = this->mbr_0x4c;
    dVar1 = this->mbr_0x2c;
  }
  if (0 < (int)(dVar4 - dVar1)) {
    return (iVar3 * iVar2) / (int)(dVar4 - dVar1);
  }
  return 0;
}



undefined4 * __thiscall GUI::ScrollBar::virt_meth_0x4b8a80(ScrollBar *this,byte param_1)

{
  ~ScrollBar(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}



void __thiscall GUI::ScrollBar::meth_0x4b8aa0(ScrollBar *this,int param_1)

{
  if (this->mbr_0x18 != param_1) {
    this->mbr_0x18 = param_1;
    meth_0x4b8840(this);
  }
  return;
}



void __thiscall GUI::ScrollBar::meth_0x4b8ac0(ScrollBar *this,int param_1)

{
  if (this->mbr_0x1c != param_1) {
    this->mbr_0x1c = param_1;
    meth_0x4b8840(this);
  }
  return;
}



void __thiscall GUI::ScrollBar::meth_0x4b8ae0(ScrollBar *this,dword param_1,char param_2)

{
  this->mbr_0x28 = param_1;
  if (param_2 != '\0') {
    meth_0x4b8840(this);
  }
  return;
}



uint __thiscall GUI::ScrollBar::meth_0x4b8b00(ScrollBar *this,int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  dword dVar3;
  dword dVar4;
  
  uVar1 = this->mbr_0x18;
  if ((int)this->mbr_0x1c < (int)uVar1) {
    dVar3 = param_1 - this->mbr_0x3c;
    dVar4 = param_2 - this->mbr_0x40;
    if ((*(byte *)&this->mbr_0x14 & 1) == 0) {
      dVar3 = this->mbr_0x48;
      if ((int)dVar4 < (int)dVar3) {
        dVar4 = dVar3;
      }
      dVar3 = dVar3 + (this->mbr_0x50 - this->mbr_0x30);
      if ((int)dVar3 < (int)dVar4) {
        dVar4 = dVar3;
      }
      dVar3 = this->mbr_0x44;
    }
    else {
      dVar4 = this->mbr_0x44;
      if ((int)dVar3 < (int)dVar4) {
        dVar3 = dVar4;
      }
      dVar4 = dVar4 + (this->mbr_0x4c - this->mbr_0x2c);
      if ((int)dVar4 < (int)dVar3) {
        dVar3 = dVar4;
      }
      dVar4 = this->mbr_0x48;
    }
    (**(code **)(*(int *)this->mbr_0xc + 0x44))(dVar3,dVar4);
    uVar1 = meth_0x4b8a00(this,dVar3,dVar4);
    if (this->mbr_0x28 != uVar1) {
      uVar2 = meth_0x4b8ae0(this,uVar1,'\0');
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}



uint __thiscall GUI::ScrollBar::meth_0x4b8b90(ScrollBar *this,int *param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  uint in_EAX;
  int *piVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  uint uVar4;
  DWORD DVar5;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  dword dVar6;
  undefined3 extraout_var_05;
  uint3 extraout_var_06;
  int unaff_retaddr;
  int local_10;
  int local_c;
  byte local_8;
  int iStack_4;
  
  piVar1 = param_2;
  if (this->mbr_0x64 != 0) {
    return in_EAX & 0xffffff00;
  }
  piVar3 = (int *)*param_2;
  if ((piVar3 == (int *)0x4) || (piVar3 == (int *)0x7)) {
    piVar3 = param_1;
    if (param_1[0x346] == 1) {
      if (param_1 == (int *)this->mbr_0x4) {
        DVar5 = timeGetTime();
        this->mbr_0x54 = DVar5;
        this->mbr_0x58 = DVar5;
        meth_0x4b88f0(this,this->mbr_0x20);
        return CONCAT31(extraout_var_03,1);
      }
      if (param_1 == (int *)this->mbr_0x8) {
        DVar5 = timeGetTime();
        this->mbr_0x54 = DVar5;
        this->mbr_0x58 = DVar5;
        meth_0x4b8930(this,this->mbr_0x20);
        return CONCAT31(extraout_var_04,1);
      }
      if (param_1 == (int *)this->mbr_0x10) {
        DVar5 = timeGetTime();
        this->mbr_0x54 = DVar5;
        this->mbr_0x58 = DVar5;
        dVar6 = meth_0x4b8980(this);
        this->mbr_0x34 = dVar6;
        if (dVar6 == 0xffffffff) {
          meth_0x4b8930(this,this->mbr_0x24);
          dVar6 = (uint)extraout_var_06 << 8;
        }
        else if (dVar6 == 1) {
          meth_0x4b88f0(this,this->mbr_0x24);
          return CONCAT31(extraout_var_05,1);
        }
        return CONCAT31((int3)(dVar6 >> 8),1);
      }
      if (param_1 == (int *)this->mbr_0xc) {
        (**(code **)(*(int *)this->mbr_0xc + 0x48))(&param_1,&param_2);
        piVar3 = (int *)(piVar1[1] - iStack_4);
        this->mbr_0x3c = (dword)piVar3;
        this->mbr_0x40 = piVar1[2] - unaff_retaddr;
        this->mbr_0x38 = 1;
      }
    }
  }
  else if (piVar3 == (int *)0x0) {
    if (param_1 == (int *)this->mbr_0x4) {
      piVar3 = (int *)(**(code **)(*param_1 + 300))();
      if (piVar3 == (int *)0x2) {
        piVar3 = (int *)timeGetTime();
        if (((int *)(this->mbr_0x5c + this->mbr_0x54) < piVar3) &&
           ((int *)(this->mbr_0x60 + this->mbr_0x58) < piVar3)) {
          this->mbr_0x58 = (dword)piVar3;
          bVar2 = meth_0x4b88f0(this,this->mbr_0x20);
          return CONCAT31(extraout_var,bVar2);
        }
      }
    }
    else if (param_1 == (int *)this->mbr_0x8) {
      piVar3 = (int *)(**(code **)(*param_1 + 300))();
      if (piVar3 == (int *)0x2) {
        piVar3 = (int *)timeGetTime();
        if (((int *)(this->mbr_0x5c + this->mbr_0x54) < piVar3) &&
           ((int *)(this->mbr_0x60 + this->mbr_0x58) < piVar3)) {
          this->mbr_0x58 = (dword)piVar3;
          bVar2 = meth_0x4b8930(this,this->mbr_0x20);
          return CONCAT31(extraout_var_00,bVar2);
        }
      }
    }
    else if (param_1 == (int *)this->mbr_0x10) {
      piVar3 = (int *)(**(code **)(*param_1 + 300))();
      if (piVar3 == (int *)0x2) {
        piVar3 = (int *)timeGetTime();
        if (((int *)(this->mbr_0x5c + this->mbr_0x54) < piVar3) &&
           ((int *)(this->mbr_0x60 + this->mbr_0x58) < piVar3)) {
          this->mbr_0x58 = (dword)piVar3;
          cls_0x4b28a0::meth_0x4b28e0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&local_10);
          piVar3 = (int *)meth_0x4b8980(this);
          if (piVar3 == (int *)this->mbr_0x34) {
            if (piVar3 == (int *)0xffffffff) {
              bVar2 = meth_0x4b8930(this,this->mbr_0x24);
              return CONCAT31(extraout_var_02,bVar2);
            }
            if (piVar3 == (int *)0x1) {
              bVar2 = meth_0x4b88f0(this,this->mbr_0x24);
              return CONCAT31(extraout_var_01,bVar2);
            }
          }
        }
      }
    }
    else if ((param_1 == (int *)this->mbr_0xc) && (piVar3 = (int *)0x0, this->mbr_0x38 != 0)) {
      cls_0x4b28a0::meth_0x4b28e0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&local_10);
      if ((local_8 & 1) != 0) {
        uVar4 = meth_0x4b8b00(this,local_10,local_c);
        return uVar4;
      }
      this->mbr_0x38 = 0;
      uVar4 = meth_0x4b8ae0(this,this->mbr_0x28,'\x01');
      return uVar4 & 0xffffff00;
    }
  }
  return (uint)piVar3 & 0xffffff00;
}



void __thiscall GUI::ScrollBar::meth_0x52afb0(ScrollBar *this)

{
  if (0xf < this->mbr_0x1c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x8);
  }
  this->mbr_0x1c = 0xf;
  this->mbr_0x18 = 0;
  *(undefined *)&this->mbr_0x8 = 0;
  return;
}



void __thiscall GUI::ScrollBar::meth_0x568420(ScrollBar *this,dword param_1)

{
  this->mbr_0x20 = param_1;
  return;
}



void __thiscall GUI::ScrollBar::meth_0x59c2c0(ScrollBar *this,dword param_1)

{
  this->mbr_0x14 = param_1;
  return;
}


#include "../include/ScrollBar.h"
