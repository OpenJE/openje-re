#include "../include/cls_0x4b28a0.h"

void __thiscall
cls_0x4b28a0::meth_0x4b28a0(cls_0x4b28a0 *this,undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = this->mbr_0x60;
  *param_2 = this->mbr_0x64;
  return;
}



void __thiscall
cls_0x4b28a0::meth_0x4b28c0(cls_0x4b28a0 *this,undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = this->mbr_0x68;
  *param_2 = this->mbr_0x6c;
  return;
}



void __thiscall cls_0x4b28a0::meth_0x4b28e0(cls_0x4b28a0 *this,undefined4 *param_1)

{
  *param_1 = this->mbr_0x2c;
  param_1[1] = this->mbr_0x30;
  param_1[2] = this->mbr_0x34;
  param_1[3] = this->mbr_0x38;
  return;
}



void __thiscall cls_0x4b28a0::Set_mbr_0x4_to_1(cls_0x4b28a0 *this)

{
  this->mbr_0x4 = 1;
  return;
}



uint __thiscall cls_0x4b28a0::meth_0x4b2ad0(cls_0x4b28a0 *this,int *param_1)

{
  int *piVar1;
  uint in_EAX;
  
  piVar1 = (int *)this->mbr_0xb8;
  if (param_1 == piVar1) {
    return in_EAX & 0xffffff00;
  }
  if (piVar1 != (int *)0x0) {
    in_EAX = (**(code **)(*piVar1 + 0x118))(param_1);
  }
  this->mbr_0xb8 = (dword)param_1;
  return CONCAT31((int3)(in_EAX >> 8),1);
}



bool __thiscall cls_0x4b28a0::meth_0x4b2c10(cls_0x4b28a0 *this)

{
  return this->mbr_0xa8 != 0;
}



int __thiscall
cls_0x4b28a0::meth_0x4b2c20
          (cls_0x4b28a0 *this,undefined param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  dword dVar2;
  int *piVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = FUN_00616e24();
  uVar5 = FUN_00616e24();
  dVar2 = this->mbr_0xb8;
  if (dVar2 == 0) {
    if ((int **)this->mbr_0x20 == (int **)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = *(int **)this->mbr_0x20;
    }
    if (piVar3 != (int *)this->mbr_0x20) {
      do {
        iVar1 = CWorldContainerInterface::meth_0x4952b0
                          ((CWorldContainerInterface *)piVar3[2],(int)uVar4,(int)uVar5,0);
        if (iVar1 != 0) {
          return iVar1;
        }
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)this->mbr_0x20);
    }
    dVar2 = 0;
  }
  return dVar2;
}



undefined4 __thiscall cls_0x4b28a0::meth_0x4b2d40(cls_0x4b28a0 *this,HWND param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 unaff_EDI;
  tagPOINT local_8;
  
  GetCursorPos(&local_8);
  ScreenToClient(param_1,&local_8);
  piVar1 = (int *)meth_0x4b2c20(this,(char)local_8.x,local_8.y,unaff_EDI);
  piVar3 = piVar1;
  while( true ) {
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    piVar2 = (int *)(**(code **)(*piVar3 + 0x98))();
    if (piVar2 != (int *)0x0) break;
    piVar3 = (int *)(**(code **)(*piVar3 + 0xa0))();
  }
  uVar4 = (**(code **)(*piVar2 + 0x14))(piVar1,local_8.x,local_8.y);
  return uVar4;
}



int __thiscall
cls_0x4b28a0::meth_0x4b2f30(cls_0x4b28a0 *this,undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  if (this->mbr_0xa8 != 0) {
    puVar2 = (undefined4 *)this->mbr_0xa4;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)*puVar2;
    }
    if (param_2 != (int *)puVar2[2]) {
      return 0;
    }
  }
  iVar1 = (**(code **)(*param_2 + 8))(param_3,param_1);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_3 + 0x11c))(param_1);
  }
  return iVar1;
}



int __thiscall cls_0x4b28a0::meth_0x4b2f80(cls_0x4b28a0 *this)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *in_stack_00000004;
  
  iVar4 = 0;
  iVar2 = (**(code **)(*in_stack_00000004 + 0xb8))();
  puVar1 = *(undefined4 **)(iVar2 + 4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)*puVar1;
  }
  if (puVar5 != puVar1) {
    do {
      iVar3 = meth_0x4b2f80(this);
      puVar5 = (undefined4 *)*puVar5;
      iVar4 = iVar4 + iVar3;
    } while (puVar5 != *(undefined4 **)(iVar2 + 4));
  }
  iVar2 = (**(code **)(*in_stack_00000004 + 0x128))();
  return iVar2 + 1 + iVar4;
}



void __thiscall cls_0x4b28a0::meth_0x4b2fe0(cls_0x4b28a0 *this,undefined param_1,undefined param_2)

{
  cls_0x401b00::meth_0x40e780((cls_0x401b00 *)&this->mbr_0xa0,(int **)&param_1);
  return;
}



undefined4 __thiscall cls_0x4b28a0::meth_0x4b3000(cls_0x4b28a0 *this)

{
  if (this->mbr_0xa8 == 0) {
    return 0;
  }
  if ((int *)this->mbr_0xa4 == (int *)0x0) {
    return uRam00000008;
  }
  return *(undefined4 *)(*(int *)this->mbr_0xa4 + 8);
}



undefined __thiscall
cls_0x4b28a0::meth_0x4b3040(cls_0x4b28a0 *this,int *param_1,undefined4 *param_2)

{
  dword *pdVar1;
  dword dVar2;
  dword dVar3;
  uint uVar4;
  dword dVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  CWorldContainerInterface *this_00;
  int *piVar11;
  bool bVar12;
  ulonglong uVar13;
  undefined local_2d;
  undefined4 uStack_18;
  dword local_14;
  dword local_10;
  dword local_c;
  dword local_8;
  undefined4 *local_4;
  
  local_2d = 0;
  if (this->mbr_0x28 != 0) {
    return 0;
  }
  pdVar1 = &this->mbr_0x2c;
  dVar2 = *pdVar1;
  dVar3 = this->mbr_0x30;
  uVar4 = this->mbr_0x34;
  *pdVar1 = *param_1;
  this->mbr_0x30 = param_1[1];
  this->mbr_0x34 = param_1[2];
  this->mbr_0x38 = param_1[3];
  uVar13 = FUN_00616e24();
  dVar5 = (dword)uVar13;
  *pdVar1 = dVar5;
  uVar13 = FUN_00616e24();
  local_10 = (dword)uVar13;
  bVar12 = (this->mbr_0x34 & 0xffff0000) != 0;
  this->mbr_0x30 = local_10;
  if (bVar12) {
    this->mbr_0x34 = (int)this->mbr_0x34 >> 0x10;
  }
  local_c = this->mbr_0x34;
  local_8 = this->mbr_0x38;
  local_4 = param_2;
  piVar6 = (int *)this->mbr_0xb8;
  this_00 = (CWorldContainerInterface *)0x0;
  piVar11 = (int *)0x0;
  local_14 = dVar5;
  if (piVar6 == (int *)0x0) {
    if (this->mbr_0xa8 == 0) {
      param_2 = (undefined4 *)this->mbr_0x20;
      if (param_2 != (undefined4 *)0x0) {
        param_2 = (undefined4 *)*param_2;
      }
      if (param_2 != (undefined4 *)this->mbr_0x20) {
        do {
          this_00 = (CWorldContainerInterface *)param_2[2];
          piVar11 = (int *)CWorldContainerInterface::meth_0x4952b0(this_00,*pdVar1,this->mbr_0x30,0)
          ;
          if (piVar11 != (int *)0x0) break;
          param_2 = (undefined4 *)*param_2;
        } while (param_2 != (undefined4 *)this->mbr_0x20);
      }
    }
    else {
      puVar9 = (undefined4 *)this->mbr_0xa4;
      if (puVar9 != (undefined4 *)0x0) {
        puVar9 = (undefined4 *)*puVar9;
      }
      this_00 = (CWorldContainerInterface *)puVar9[2];
      piVar11 = (int *)CWorldContainerInterface::meth_0x4952b0(this_00,dVar5,local_10,0);
      if (piVar11 == (int *)0x0) {
        iVar7 = CWorldContainerInterface::Get_Interface_mbr_0x24(this_00);
        piVar11 = piRam00000008;
        if (*(int **)(iVar7 + 4) != (int *)0x0) {
          piVar11 = *(int **)(**(int **)(iVar7 + 4) + 8);
        }
      }
    }
  }
  else {
    do {
      this_00 = (CWorldContainerInterface *)(**(code **)(*piVar6 + 0x98))();
      if (this_00 != (CWorldContainerInterface *)0x0) {
        piVar11 = (int *)this->mbr_0xb8;
        break;
      }
      piVar6 = (int *)(**(code **)(*piVar6 + 0xa0))();
    } while (piVar6 != (int *)0x0);
  }
  if (this->mbr_0xb8 == 0) {
    piVar6 = (int *)this->mbr_0xc;
    if ((piVar6 != (int *)0x0) && (piVar11 != piVar6)) {
      uStack_18 = 3;
      meth_0x4b2f30(this,&uStack_18,(int *)this->mbr_0x8,piVar6);
    }
    if ((piVar11 != (int *)0x0) && (piVar11 != (int *)this->mbr_0xc)) {
LAB_004b3251:
      uStack_18 = 1;
      meth_0x4b2f30(this,&uStack_18,(int *)this_00,piVar11);
      local_2d = 1;
    }
  }
  else {
    if ((piVar11 == (int *)0x0) ||
       ((this_00 == (CWorldContainerInterface *)0x0 ||
        (piVar6 = (int *)CWorldContainerInterface::meth_0x4952b0
                                   (this_00,this->mbr_0x2c,this->mbr_0x30,0), piVar11 != piVar6))))
    {
      if ((int *)this->mbr_0xc != (int *)0x0) {
        uStack_18 = 3;
        meth_0x4b2f30(this,&uStack_18,(int *)this->mbr_0x8,(int *)this->mbr_0xc);
      }
      this->mbr_0xc = 0;
      this->mbr_0x8 = 0;
      goto LAB_004b326b;
    }
    if (this->mbr_0xc == 0) goto LAB_004b3251;
  }
  this->mbr_0xc = (dword)piVar11;
  this->mbr_0x8 = (dword)this_00;
LAB_004b326b:
  uVar8 = this->mbr_0x34;
  uVar10 = uVar8 & 1;
  if ((uVar10 != (uVar4 & 1)) && (uVar10 != 0)) {
    this->mbr_0x10 = (dword)piVar11;
  }
  if (((uVar8 & 2) != (uVar4 & 2)) && ((uVar8 & 2) != 0)) {
    this->mbr_0x14 = (dword)piVar11;
  }
  if (((uVar8 & 4) != (uVar4 & 4)) && ((uVar8 & 4) != 0)) {
    this->mbr_0x18 = (dword)piVar11;
  }
  if (piVar11 != (int *)0x0) {
    if (uVar10 != (uVar4 & 1)) {
      if (uVar10 == 0) {
        uStack_18 = 5;
        if ((int *)this->mbr_0x10 == piVar11) {
          meth_0x4b2f30(this,&uStack_18,(int *)this_00,piVar11);
          uStack_18 = 6;
        }
      }
      else {
        uStack_18 = 4;
        if (bVar12) {
          uStack_18 = 7;
        }
      }
      meth_0x4b2f30(this,&uStack_18,(int *)this_00,piVar11);
    }
    uVar8 = this->mbr_0x34 & 2;
    if (uVar8 != (uVar4 & 2)) {
      if (uVar8 == 0) {
        uStack_18 = 9;
        if ((int *)this->mbr_0x14 == piVar11) {
          meth_0x4b2f30(this,&uStack_18,(int *)this_00,piVar11);
          uStack_18 = 10;
        }
      }
      else {
        uStack_18 = 8;
        if (bVar12) {
          uStack_18 = 0xb;
        }
      }
      meth_0x4b2f30(this,&uStack_18,(int *)this_00,piVar11);
    }
    uVar8 = this->mbr_0x34 & 4;
    if (uVar8 != (uVar4 & 4)) {
      if (uVar8 == 0) {
        uStack_18 = 0xd;
        if ((int *)this->mbr_0x18 == piVar11) {
          meth_0x4b2f30(this,&uStack_18,(int *)this_00,piVar11);
          uStack_18 = 0xe;
        }
      }
      else {
        uStack_18 = 0xc;
        if (bVar12) {
          uStack_18 = 0xf;
        }
      }
      meth_0x4b2f30(this,&uStack_18,(int *)this_00,piVar11);
    }
    if ((this->mbr_0x2c != dVar2) || (this->mbr_0x30 != dVar3)) {
      uStack_18 = 2;
      meth_0x4b2f30(this,&uStack_18,(int *)this_00,piVar11);
    }
    if (this->mbr_0x38 != 0) {
      uStack_18 = 0x10;
      meth_0x4b2f30(this,&uStack_18,(int *)this_00,piVar11);
    }
    return 1;
  }
  return local_2d;
}



void __thiscall cls_0x4b28a0::meth_0x4b3430(cls_0x4b28a0 *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = param_1;
  piVar3 = (int *)this->mbr_0xb8;
  do {
    if (piVar3 == (int *)0x0) {
LAB_004b3470:
      cls_0x401b00::meth_0x40e780((cls_0x401b00 *)&this->mbr_0x1c,&param_1);
      Set_mbr_0x4_to_1(this);
      if ((int *)this->mbr_0x8 == piVar1) {
        this->mbr_0x8 = 0;
        meth_0x4b3040(this,(int *)&this->mbr_0x2c,(undefined4 *)0x0);
      }
      return;
    }
    piVar2 = (int *)(**(code **)(*piVar3 + 0x98))();
    if (piVar2 != (int *)0x0) {
      if (piVar2 == piVar1) {
        meth_0x4b2ad0(this,(int *)0x0);
      }
      goto LAB_004b3470;
    }
    piVar3 = (int *)(**(code **)(*piVar3 + 0xa0))();
  } while( true );
}



void __thiscall cls_0x4b28a0::meth_0x4b34b0(cls_0x4b28a0 *this,int *param_1)

{
  if (((int *)this->mbr_0xb8 != (int *)0x0) && (param_1 == (int *)this->mbr_0xb8)) {
    meth_0x4b2ad0(this,(int *)0x0);
  }
  if ((int *)this->mbr_0xc == param_1) {
    this->mbr_0xc = 0;
    (**(code **)(*param_1 + 0x54))(1);
    meth_0x4b3040(this,(int *)&this->mbr_0x2c,(undefined4 *)0x0);
  }
  return;
}



int __thiscall
cls_0x4b28a0::meth_0x4b3500(cls_0x4b28a0 *this,undefined4 param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = meth_0x4b2f30(this,param_1,param_2,param_3);
  if (iVar2 == 0) {
    iVar3 = (**(code **)(*param_3 + 0xb8))();
    puVar1 = *(undefined4 **)(iVar3 + 4);
    if (puVar1 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)*puVar1;
    }
    if (puVar4 != puVar1) {
      while (iVar2 = meth_0x4b3500(this,param_1,param_2,(int *)puVar4[2]), iVar2 != 1) {
        puVar4 = (undefined4 *)*puVar4;
        if (puVar4 == *(undefined4 **)(iVar3 + 4)) {
          return iVar2;
        }
      }
    }
  }
  return iVar2;
}



int __thiscall cls_0x4b28a0::meth_0x4b3570(cls_0x4b28a0 *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_4;
  
  puVar2 = (undefined4 *)this->mbr_0x20;
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar2;
  }
  if (puVar2 == (undefined4 *)this->mbr_0x20) {
    return 0;
  }
  do {
    iVar3 = CWorldContainerInterface::Get_Interface_mbr_0x24((CWorldContainerInterface *)puVar2[2]);
    puVar1 = *(undefined4 **)(iVar3 + 4);
    if (puVar1 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)*puVar1;
    }
    if (puVar5 != puVar1) {
      do {
        iVar4 = meth_0x4b2f80(this);
        puVar5 = (undefined4 *)*puVar5;
        local_4 = local_4 + iVar4;
      } while (puVar5 != *(undefined4 **)(iVar3 + 4));
    }
    puVar2 = (undefined4 *)*puVar2;
  } while (puVar2 != (undefined4 *)this->mbr_0x20);
  return local_4;
}



void __thiscall cls_0x4b28a0::meth_0x4b35f0(cls_0x4b28a0 *this)

{
  GameActionOperateContainer *this_00;
  float fVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  float10 extraout_ST0;
  float local_4;
  
  if (this->mbr_0x4 != 0) {
    iVar3 = meth_0x4b3570(this);
    fVar1 = (float)iVar3;
    if (iVar3 < 0) {
      fVar1 = fVar1 + 4.294967e+09;
    }
    local_4 = 0.005;
    if ((int **)this->mbr_0x20 == (int **)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = *(int **)this->mbr_0x20;
    }
    if (piVar4 != (int *)this->mbr_0x20) {
      do {
        this_00 = (GameActionOperateContainer *)piVar4[2];
        cVar2 = GameActionOperateContainer::Get_mbr_0x20(this_00);
        if (cVar2 == '\0') {
          (*((this_00->Action).vftptr_0x0)->virt_meth_0x6162e5_4)(local_4,0.245 / fVar1);
          local_4 = (float)(extraout_ST0 + (float10)(0.245 / fVar1));
        }
        piVar4 = (int *)*piVar4;
      } while (piVar4 != (int *)this->mbr_0x20);
    }
    this->mbr_0x4 = 0;
  }
  return;
}



undefined4 __thiscall
cls_0x4b28a0::meth_0x4b3780(cls_0x4b28a0 *this,undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = CWorldContainerInterface::Get_Interface_mbr_0x24((CWorldContainerInterface *)param_2);
  puVar1 = *(undefined4 **)(iVar2 + 4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)*puVar1;
  }
  if (puVar4 != puVar1) {
    do {
      iVar3 = meth_0x4b3500(this,param_1,param_2,(int *)puVar4[2]);
      if (iVar3 == 1) {
        return 1;
      }
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != *(undefined4 **)(iVar2 + 4));
  }
  return 0;
}



void __thiscall cls_0x4b28a0::meth_0x4b37f0(cls_0x4b28a0 *this)

{
  int *piVar1;
  GameActionOperateContainer *pGVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int **_Memory;
  int **ppiVar7;
  undefined4 *puVar8;
  dword dVar9;
  undefined4 *puStack_1c;
  undefined4 local_18 [6];
  
  if ((undefined4 *)this->mbr_0x20 == (undefined4 *)0x0) {
    _Memory = (int **)0x0;
  }
  else {
    _Memory = *(int ***)(undefined4 *)this->mbr_0x20;
  }
  if (_Memory != (int **)this->mbr_0x20) {
    do {
      piVar1 = _Memory[2];
      if (*(char *)(piVar1 + 0xc) == '\0') {
        ppiVar7 = (int **)*_Memory;
      }
      else {
        ppiVar7 = (int **)*_Memory;
        if (_Memory != (int **)this->mbr_0x20) {
          *_Memory[1] = (int)ppiVar7;
          (*_Memory)[1] = (int)_Memory[1];
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        Set_mbr_0x4_to_1(this);
        if ((int *)this->mbr_0x8 == piVar1) {
          this->mbr_0x8 = 0;
        }
        (**(code **)*piVar1)(1);
      }
      _Memory = ppiVar7;
    } while (ppiVar7 != (int **)this->mbr_0x20);
  }
  puStack_1c = (undefined4 *)this->mbr_0x20;
  local_18[0] = 0;
  if (puStack_1c != (undefined4 *)0x0) {
    puStack_1c = (undefined4 *)*puStack_1c;
  }
  if (puStack_1c != (undefined4 *)this->mbr_0x20) {
    do {
      pGVar2 = (GameActionOperateContainer *)puStack_1c[2];
      cVar4 = GameActionOperateContainer::Get_mbr_0x20(pGVar2);
      if (cVar4 == '\0') {
        iVar5 = CWorldContainerInterface::Get_Interface_mbr_0x24((CWorldContainerInterface *)pGVar2)
        ;
        puVar3 = *(undefined4 **)(iVar5 + 4);
        if (puVar3 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          puVar8 = (undefined4 *)*puVar3;
        }
        if (puVar8 != puVar3) {
          do {
            iVar6 = meth_0x4b3500(this,local_18,(int *)pGVar2,(int *)puVar8[2]);
            if (iVar6 == 1) break;
            puVar8 = (undefined4 *)*puVar8;
          } while (puVar8 != *(undefined4 **)(iVar5 + 4));
        }
      }
      puStack_1c = (undefined4 *)*puStack_1c;
    } while (puStack_1c != (undefined4 *)this->mbr_0x20);
  }
  dVar9 = *(dword *)(this->mbr_0x20 + 4);
  if (dVar9 != this->mbr_0x20) {
    do {
      pGVar2 = *(GameActionOperateContainer **)(dVar9 + 8);
      cVar4 = GameActionOperateContainer::Get_mbr_0x20(pGVar2);
      if (cVar4 == '\0') {
        GameActionOperateContainer::meth_0x495340(pGVar2);
      }
      dVar9 = *(dword *)(dVar9 + 4);
    } while (dVar9 != this->mbr_0x20);
  }
  meth_0x4b35f0(this);
  return;
}



undefined4 __thiscall cls_0x4b28a0::meth_0x4b3920(cls_0x4b28a0 *this,undefined4 param_1)

{
  GameActionOperateContainer *pGVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  if ((int **)this->mbr_0xa4 == (int **)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *(int **)this->mbr_0xa4;
  }
  if (piVar4 != (int *)this->mbr_0xa4) {
    do {
      pGVar1 = (GameActionOperateContainer *)piVar4[2];
      cVar2 = GameActionOperateContainer::Get_mbr_0x20(pGVar1);
      if (cVar2 == '\0') {
        meth_0x4b3780(this,param_1,(int *)pGVar1);
        return 1;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)this->mbr_0xa4);
  }
  if ((int **)this->mbr_0x20 == (int **)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *(int **)this->mbr_0x20;
  }
  if (piVar4 != (int *)this->mbr_0x20) {
    do {
      pGVar1 = (GameActionOperateContainer *)piVar4[2];
      cVar2 = GameActionOperateContainer::Get_mbr_0x20(pGVar1);
      if ((cVar2 == '\0') && (iVar3 = meth_0x4b3780(this,param_1,(int *)pGVar1), iVar3 == 1)) {
        return 1;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)this->mbr_0x20);
  }
  return 0;
}



bool __thiscall
cls_0x4b28a0::meth_0x4b40a0(cls_0x4b28a0 *this,undefined4 param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  int local_18;
  undefined4 local_14;
  undefined4 local_4;
  
  if (this->mbr_0x28 != 0) {
    return false;
  }
  local_14 = param_1;
  local_18 = 0x12 - (uint)(param_2 != '\0');
  local_4 = param_3;
  iVar1 = meth_0x4b3920(this,&local_18);
  return iVar1 == 1;
}



undefined __thiscall cls_0x4b28a0::meth_0x4b40f0(cls_0x4b28a0 *this,char param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_18;
  char local_14;
  undefined4 local_4;
  
  if (this->mbr_0x28 != 0) {
    return 0;
  }
  iVar1 = meth_0x619b38(this);
  if ((iVar1 != 0) || (param_1 == ' ')) {
    local_4 = param_2;
    local_18 = 0x13;
    local_14 = param_1;
    iVar1 = meth_0x4b3920(this,&local_18);
    if (iVar1 == 1) {
      return 1;
    }
  }
  return 0;
}



void __thiscall cls_0x4b28a0::meth_0x4b4dd0(cls_0x4b28a0 *this,int *param_1)

{
  int **_Memory;
  int iVar1;
  int iVar2;
  
  _Memory = (int **)this->mbr_0x20;
  if (_Memory != (int **)0x0) {
    _Memory = (int **)*_Memory;
  }
  do {
    if (_Memory == (int **)this->mbr_0x20) {
LAB_004b4e21:
      if ((int *)this->mbr_0x20 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)this->mbr_0x20;
      }
      iVar1 = FUN_00433760(iVar2,*(undefined4 *)(iVar2 + 4),&param_1);
      cls_0x4b3a10::meth_0x4b3a10((cls_0x4b3a10 *)&this->mbr_0x1c,1);
      *(int *)(iVar2 + 4) = iVar1;
      **(int **)(iVar1 + 4) = iVar1;
      Set_mbr_0x4_to_1(this);
      return;
    }
    if (param_1 == _Memory[2]) {
      if (_Memory != (int **)this->mbr_0x20) {
        *_Memory[1] = (int)*_Memory;
        (*_Memory)[1] = (int)_Memory[1];
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      goto LAB_004b4e21;
    }
    _Memory = (int **)*_Memory;
  } while( true );
}



void __thiscall cls_0x4b28a0::meth_0x4b4e60(cls_0x4b28a0 *this,int *param_1)

{
  int **_Memory;
  int iVar1;
  int iVar2;
  
  _Memory = (int **)this->mbr_0x20;
  if (_Memory != (int **)0x0) {
    _Memory = (int **)*_Memory;
  }
  if (_Memory != (int **)this->mbr_0x20) {
    while (param_1 != _Memory[2]) {
      _Memory = (int **)*_Memory;
      if (_Memory == (int **)this->mbr_0x20) {
        return;
      }
    }
    if (_Memory != (int **)this->mbr_0x20) {
      *_Memory[1] = (int)*_Memory;
      (*_Memory)[1] = (int)_Memory[1];
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    if ((int *)this->mbr_0x20 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)this->mbr_0x20;
    }
    iVar1 = FUN_00433760(iVar2,*(undefined4 *)(iVar2 + 4),&param_1);
    cls_0x4b3a10::meth_0x4b3a10((cls_0x4b3a10 *)&this->mbr_0x1c,1);
    *(int *)(iVar2 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    Set_mbr_0x4_to_1(this);
  }
  return;
}



void __thiscall cls_0x4b28a0::meth_0x4b4f00(cls_0x4b28a0 *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uStack_18;
  dword dStack_14;
  dword dStack_10;
  dword dStack_c;
  dword dStack_8;
  
  piVar2 = (int *)this->mbr_0xb8;
  do {
    if (piVar2 == (int *)0x0) {
LAB_004b4f41:
      if (((int *)this->mbr_0x8 != (int *)0x0) && ((int *)this->mbr_0xc != (int *)0x0)) {
        dStack_c = this->mbr_0x34;
        dStack_14 = this->mbr_0x2c;
        dStack_10 = this->mbr_0x30;
        dStack_8 = this->mbr_0x38;
        uStack_18 = 3;
        meth_0x4b2f30(this,&uStack_18,(int *)this->mbr_0x8,(int *)this->mbr_0xc);
      }
      if ((int *)this->mbr_0xa4 == (int *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)this->mbr_0xa4;
      }
      iVar3 = FUN_00433760(iVar1,*(undefined4 *)(iVar1 + 4),&param_1);
      cls_0x4b3a10::meth_0x4b3a10((cls_0x4b3a10 *)&this->mbr_0xa0,1);
      *(int *)(iVar1 + 4) = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
      return;
    }
    iVar1 = (**(code **)(*piVar2 + 0x98))();
    if (iVar1 != 0) {
      if (iVar1 != param_1) {
        meth_0x4b2ad0(this,(int *)0x0);
      }
      goto LAB_004b4f41;
    }
    piVar2 = (int *)(**(code **)(*piVar2 + 0xa0))();
  } while( true );
}



void __thiscall
cls_0x4b28a0::meth_0x4b58d0
          (cls_0x4b28a0 *this,undefined4 *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  void **ppvVar2;
  undefined4 *puVar3;
  uint uVar4;
  Font *this_00;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 ****ppppuVar8;
  bool bVar9;
  bool bVar10;
  uint unaff_retaddr;
  int *local_38;
  undefined4 ****local_28 [4];
  uint local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00632503;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  if ((int **)this->mbr_0x58 == (int **)0x0) {
    local_38 = (int *)0x0;
  }
  else {
    local_38 = *(int **)this->mbr_0x58;
  }
  ExceptionList = &local_c;
  ppvVar2 = &local_c;
  if (local_38 != (int *)this->mbr_0x58) {
    do {
      ExceptionList = ppvVar2;
      iVar7 = local_38[2];
      local_14 = 0xf;
      local_18 = 0;
      local_28[0] = (undefined4 ****)((uint)local_28[0] & 0xffffff00);
      local_4 = 0;
      ::cls_0x50db20::meth_0x401b20
                ((cls_0x50db20 *)&stack0xffffffd4,(_String_base *)(iVar7 + 4),0,0xffffffff);
      uVar1 = param_1[5];
      if ((uint)param_1[6] < 0x10) {
        puVar3 = param_1 + 1;
      }
      else {
        puVar3 = (undefined4 *)param_1[1];
      }
      if (local_18 == 0) {
LAB_004b59a7:
        if (uVar1 <= local_18) {
          uVar4 = (uint)(local_18 != uVar1);
          goto LAB_004b59b2;
        }
      }
      else {
        uVar6 = local_18;
        if (uVar1 <= local_18) {
          uVar6 = uVar1;
        }
        ppppuVar8 = local_28[0];
        if (local_14 < 0x10) {
          ppppuVar8 = local_28;
        }
        bVar9 = false;
        uVar4 = 0;
        bVar10 = true;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          bVar9 = *(byte *)ppppuVar8 < *(byte *)puVar3;
          bVar10 = *(byte *)ppppuVar8 == *(byte *)puVar3;
          ppppuVar8 = (undefined4 ****)((int)ppppuVar8 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + 1);
        } while (bVar10);
        if (!bVar10) {
          uVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        }
        if (uVar4 == 0) goto LAB_004b59a7;
LAB_004b59b2:
        if ((((uVar4 == 0) && (*(int *)(iVar7 + 0x20) == param_2)) &&
            (*(int *)(iVar7 + 0x24) == param_3)) && (*(int *)(iVar7 + 0x28) == param_4)) {
          if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
            _free(local_28[0]);
          }
          goto LAB_004b5ab3;
        }
      }
      local_4 = 0xffffffff;
      if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
        _free(local_28[0]);
      }
      local_38 = (int *)*local_38;
      local_14 = 0xf;
      local_18 = 0;
      local_28[0] = (undefined4 ****)((uint)local_28[0] & 0xffffff00);
      ppvVar2 = (void **)ExceptionList;
    } while (local_38 != (int *)this->mbr_0x58);
  }
  puVar3 = param_1;
  local_4 = 0xffffffff;
  this_00 = (Font *)0x0;
  param_1 = (undefined4 *)operator_new(0x38);
  local_4 = 1;
  if ((Font *)param_1 != (Font *)0x0) {
    this_00 = GUI::Font::Font((Font *)param_1);
  }
  local_4 = 0xffffffff;
  param_1 = &this_00->vftptr_0x0;
  GUI::Font::meth_0x51ebd0(this_00,(_String_base *)puVar3,param_2,param_3,param_4);
  if ((int *)this->mbr_0x58 == (int *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)this->mbr_0x58;
  }
  iVar5 = FUN_00433760(iVar7,*(undefined4 *)(iVar7 + 4),&param_1);
  cls_0x4b3a10::meth_0x4b3a10((cls_0x4b3a10 *)&this->mbr_0x54,1);
  *(int *)(iVar7 + 4) = iVar5;
  **(int **)(iVar5 + 4) = iVar5;
LAB_004b5ab3:
  ExceptionList = local_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}



undefined4 __thiscall cls_0x4b28a0::meth_0x619b38(cls_0x4b28a0 *this)

{
  uint uVar1;
  _ptiddata p_Var2;
  int *piVar3;
  BOOL BVar4;
  undefined uVar5;
  undefined2 uStack00000004;
  undefined4 local_8;
  
  local_8 = this;
  p_Var2 = __getptd();
  piVar3 = (int *)p_Var2->_tpxcptinfoptrs;
  if (piVar3 != DAT_0070fd28) {
    piVar3 = FUN_00625e2a();
  }
  uVar5 = (undefined)_uStack00000004;
  if (_uStack00000004 < 0x100) {
    if (((*(ushort *)(&DAT_006cb59a + (_uStack00000004 & 0xff) * 2) & 0x117) != 0) ||
       ((*(byte *)((_uStack00000004 & 0xff) + 0x1d + (int)piVar3) & 3) != 0)) {
      return 1;
    }
  }
  else {
    local_8 = (cls_0x4b28a0 *)0x0;
    uVar1 = _uStack00000004 >> 8;
    _uStack00000004 = CONCAT13(uVar5,CONCAT12((char)uVar1,uStack00000004));
    if ((((piVar3[2] != 0) &&
         (BVar4 = FUN_00624ac7(1,(LPCSTR)((int)&stack0x00000004 + 2),2,(LPWORD)&local_8,piVar3[1],
                               piVar3[3],1), BVar4 != 0)) && (local_8._2_2_ == 0)) &&
       (((uint)local_8 & 0x117) != 0)) {
      return 1;
    }
  }
  return 0;
}


