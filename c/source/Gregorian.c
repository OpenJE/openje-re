#include "../include/Gregorian.h"

dword __thiscall Gregorian::Get_mbr_0x30(Gregorian *this)

{
  return this->mbr_0x30;
}



dword __thiscall Gregorian::Get_mbr_0x34(Gregorian *this)

{
  return this->mbr_0x34;
}



dword __thiscall Gregorian::Get_mbr_0x2c(Gregorian *this)

{
  return this->mbr_0x2c;
}



int __thiscall Gregorian::meth_0x424d80(Gregorian *this)

{
  dword dVar1;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 == 0) {
    return dVar1;
  }
  return (int)(this->mbr_0x8 - dVar1) / 0x2c;
}



undefined4 __thiscall Gregorian::meth_0x424e50(Gregorian *this,int param_1)

{
  int in_EAX;
  uint3 uVar1;
  int iVar2;
  dword dVar3;
  
  if (param_1 < 0) {
    param_1 = 0;
  }
  else {
    if (this->mbr_0x4 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)(this->mbr_0x8 - this->mbr_0x4) / 0x2c;
    }
    if (this->mbr_0x14 == 0) {
      in_EAX = 0;
    }
    else {
      in_EAX = (int)(this->mbr_0x18 - this->mbr_0x14) >> 3;
    }
    dVar3 = iVar2 - in_EAX;
    if ((int)dVar3 < 0) {
      dVar3 = 0;
    }
    if ((int)dVar3 < param_1) {
      param_1 = dVar3;
    }
  }
  uVar1 = (uint3)((uint)in_EAX >> 8);
  if (this->mbr_0x2c != param_1) {
    this->mbr_0x2c = param_1;
    *(undefined *)&this->mbr_0x30 = 1;
    return CONCAT31(uVar1,1);
  }
  return (uint)uVar1 << 8;
}



uint __thiscall Gregorian::meth_0x424ec0(Gregorian *this,int *param_1,int **param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  DWORD DVar4;
  Gregorian *this_00;
  Gregorian *this_01;
  Gregorian *this_02;
  
  piVar1 = *param_2;
  if ((piVar1 == (int *)0x4) || (piVar1 == (int *)0x7)) {
    piVar1 = param_1;
    if (param_1[0x346] == 1) {
      if (param_1 == (int *)this->mbr_0x20) {
        DVar4 = timeGetTime();
        this->mbr_0x34 = DVar4;
        this->mbr_0x38 = DVar4;
        iVar2 = Get_mbr_0x2c(this);
        uVar3 = meth_0x424e50(this_02,iVar2 + -1);
        return uVar3;
      }
      if (param_1 == (int *)this->mbr_0x24) {
        piVar1 = (int *)timeGetTime();
        this->mbr_0x34 = (dword)piVar1;
LAB_00424f5d:
        this->mbr_0x38 = (dword)piVar1;
        iVar2 = Get_mbr_0x2c(this);
        uVar3 = meth_0x424e50(this_01,iVar2 + 1);
        return uVar3;
      }
    }
  }
  else if (piVar1 == (int *)0x0) {
    if (param_1 == (int *)this->mbr_0x20) {
      piVar1 = (int *)(**(code **)(*param_1 + 300))();
      if (piVar1 == (int *)0x2) {
        piVar1 = (int *)timeGetTime();
        if (((int *)(this->mbr_0x3c + this->mbr_0x34) < piVar1) &&
           ((int *)(this->mbr_0x40 + this->mbr_0x38) < piVar1)) {
          iVar2 = Get_mbr_0x2c(this);
          uVar3 = meth_0x424e50(this_00,iVar2 + -1);
          return uVar3;
        }
      }
    }
    else if (param_1 == (int *)this->mbr_0x24) {
      piVar1 = (int *)(**(code **)(*param_1 + 300))();
      if (piVar1 == (int *)0x2) {
        piVar1 = (int *)timeGetTime();
        if (((int *)(this->mbr_0x3c + this->mbr_0x34) < piVar1) &&
           ((int *)(this->mbr_0x40 + this->mbr_0x38) < piVar1)) goto LAB_00424f5d;
      }
    }
  }
  return (uint)piVar1 & 0xffffff00;
}



void __thiscall Gregorian::meth_0x424fc0(Gregorian *this)

{
  int iVar1;
  dword dVar2;
  
  dVar2 = this->mbr_0x28;
  if ((int)this->mbr_0x2c <= (int)dVar2) {
    if (this->mbr_0x14 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)(this->mbr_0x18 - this->mbr_0x14) >> 3;
    }
    if ((int)dVar2 < (int)(this->mbr_0x2c + iVar1)) {
      return;
    }
    dVar2 = (dVar2 - iVar1) + 1;
  }
  meth_0x424e50(this,dVar2);
  return;
}



void __thiscall
Gregorian::meth_0x425200(Gregorian *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (-1 < param_1) {
    if (this->mbr_0x14 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)(this->mbr_0x18 - this->mbr_0x14) >> 3;
    }
    if (param_1 < iVar2) {
      puVar1 = (undefined4 *)(this->mbr_0x14 + param_1 * 8);
      *puVar1 = param_2;
      puVar1[1] = param_3;
      *(undefined *)&this->mbr_0x30 = 1;
    }
  }
  return;
}



void __thiscall Gregorian::meth_0x429b70(Gregorian *this)

{
  dword dVar1;
  dword dVar2;
  
  dVar2 = this->mbr_0x4;
  if (dVar2 == 0) {
    this->mbr_0x4 = 0;
    this->mbr_0x8 = 0;
    this->mbr_0xc = 0;
    return;
  }
  dVar1 = this->mbr_0x8;
  for (; dVar2 != dVar1; dVar2 = dVar2 + 0x2c) {
    FUN_005a48b0(dVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall Gregorian::meth_0x429b70(Gregorian *this)

{
  dword dVar1;
  dword dVar2;
  
  dVar2 = this->mbr_0x4;
  if (dVar2 == 0) {
    this->mbr_0x4 = 0;
    this->mbr_0x8 = 0;
    this->mbr_0xc = 0;
    return;
  }
  dVar1 = this->mbr_0x8;
  for (; dVar2 != dVar1; dVar2 = dVar2 + 0x2c) {
    FUN_005a48b0(dVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall
Gregorian::meth_0x42a320
          (Gregorian *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  dword dVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint unaff_retaddr;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  void *local_38;
  dword local_28;
  uint local_24;
  VFX_Parameter__vftable_673a20 *local_20;
  Gregorian *local_1c;
  uint local_18;
  undefined *local_14;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0062cda8;
  pvStack_10 = ExceptionList;
  local_18 = DAT_007062c0 ^ unaff_retaddr;
  local_14 = &stack0xffffffa8;
  local_48 = param_3[1];
  local_4c = *param_3;
  local_44 = param_3[2];
  local_40 = param_3[3];
  uVar6 = 0;
  local_24 = 0xf;
  local_28 = 0;
  local_38 = (void *)((uint)local_38 & 0xffffff00);
  ExceptionList = &pvStack_10;
  local_1c = this;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&stack0xffffffc4,(_String_base *)(param_3 + 4),0,0xffffffff);
  puVar5 = param_2;
  puVar1 = param_1;
  dVar4 = this->mbr_0x4;
  local_8 = 0;
  if (dVar4 != 0) {
    uVar6 = (int)(this->mbr_0xc - dVar4) / 0x2c;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (dVar4 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(this->mbr_0x8 - dVar4) / 0x2c;
    }
    if ((undefined4 *)(0x5d1745dU - iVar3) < param_2) {
      FUN_00426340();
    }
    else {
      if (dVar4 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)(this->mbr_0x8 - dVar4) / 0x2c;
      }
      if (uVar6 < (uint)(iVar3 + (int)param_2)) {
        if (0x5d1745d - (uVar6 >> 1) < uVar6) {
          uVar6 = 0;
        }
        else {
          uVar6 = uVar6 + (uVar6 >> 1);
        }
        if (dVar4 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (int)(this->mbr_0x8 - dVar4) / 0x2c;
        }
        if (uVar6 < (uint)(iVar3 + (int)param_2)) {
          iVar3 = meth_0x424d80(this);
          uVar6 = iVar3 + (int)puVar5;
        }
        param_2 = (undefined4 *)operator_new(uVar6 * 0x2c);
        local_8 = CONCAT31(local_8._1_3_,1);
        param_3 = param_2;
        param_2 = FUN_00426420((undefined4 *)this->mbr_0x4,param_1,param_2);
        FUN_00429620(param_2,(int)puVar5,&local_4c);
        param_2 = param_2 + (int)puVar5 * 0xb;
        FUN_00426420(param_1,(undefined4 *)this->mbr_0x8,param_2);
        dVar4 = this->mbr_0x4;
        if (dVar4 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (int)(this->mbr_0x8 - dVar4) / 0x2c;
        }
        if (dVar4 != 0) {
          FUN_00429b40(dVar4,this->mbr_0x8);
                    /* WARNING: Subroutine does not return */
          _free((void *)this->mbr_0x4);
        }
        this->mbr_0xc = (dword)(param_3 + uVar6 * 0xb);
        this->mbr_0x8 = (dword)(param_3 + ((int)puVar5 + iVar3) * 0xb);
        this->mbr_0x4 = (dword)param_3;
      }
      else {
        param_3 = (undefined4 *)this->mbr_0x8;
        if ((undefined4 *)(((int)param_3 - (int)param_1) / 0x2c) < param_2) {
          local_20 = (VFX_Parameter__vftable_673a20 *)&stack0xffffff9c;
          puVar2 = param_3;
          param_3 = (undefined4 *)((int)param_2 * 0x2c);
          FUN_00429c40(param_1,puVar2,
                       (undefined4 *)((int)(undefined4 *)((int)param_2 * 0x2c) + (int)param_1));
          local_8 = CONCAT31(local_8._1_3_,3);
          FUN_0042a2f0((undefined4 *)this->mbr_0x8,
                       (int)puVar5 - ((int)(undefined4 *)this->mbr_0x8 - (int)puVar1) / 0x2c,
                       &local_4c);
          dVar4 = this->mbr_0x8 + (int)param_3;
          this->mbr_0x8 = dVar4;
          puVar5 = (undefined4 *)(dVar4 - (int)param_3);
          local_8 = 0;
        }
        else {
          param_1 = param_3 + (int)param_2 * -0xb;
          dVar4 = FUN_00429c40(param_1,param_3,param_3);
          puVar2 = param_1;
          this->mbr_0x8 = dVar4;
          param_2 = (undefined4 *)&stack0xffffffa0;
          param_1 = (undefined4 *)&stack0xffffff9c;
          FUN_004295e0(&param_1,(int)puVar1,(int)puVar2,param_3);
          puVar5 = puVar1 + (int)puVar5 * 0xb;
        }
        param_1 = (undefined4 *)&stack0xffffff9c;
        FUN_00429590(puVar1,puVar5,&local_4c);
      }
    }
  }
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_38);
  }
  ExceptionList = pvStack_10;
  FUN_00616e15(local_18 ^ unaff_retaddr);
  return;
}



void __thiscall Gregorian::meth_0x42a740(Gregorian *this,uint param_1)

{
  if ((int)param_1 < 0) {
    param_1 = 0;
  }
  cls_0x425d30::meth_0x429bc0((cls_0x425d30 *)&this->mbr_0x10,param_1);
  *(undefined *)&this->mbr_0x30 = 1;
  return;
}



void __thiscall Gregorian::meth_0x42a770(Gregorian *this)

{
  meth_0x429b70(this);
  *(undefined *)&this->mbr_0x30 = 1;
  return;
}



void __thiscall
Gregorian::meth_0x42ca00(Gregorian *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  dword dVar1;
  int iVar2;
  
  dVar1 = this->mbr_0x4;
  if (dVar1 != 0) {
    if ((int)(this->mbr_0x8 - dVar1) / 0x2c != 0) {
      iVar2 = (int)((int)param_2 - dVar1) / 0x2c;
      goto LAB_0042ca47;
    }
  }
  iVar2 = 0;
LAB_0042ca47:
  meth_0x42a320(this,param_2,(undefined4 *)0x1,param_3);
  *param_1 = iVar2 * 0x2c + this->mbr_0x4;
  return;
}



void __thiscall Gregorian::meth_0x42cc60(Gregorian *this,undefined4 *param_1)

{
  dword dVar1;
  undefined4 *puVar2;
  
  dVar1 = this->mbr_0x4;
  if ((dVar1 != 0) &&
     ((uint)((int)(this->mbr_0x8 - dVar1) / 0x2c) < (uint)((int)(this->mbr_0xc - dVar1) / 0x2c))) {
    puVar2 = (undefined4 *)this->mbr_0x8;
    FUN_00429620(puVar2,1,param_1);
    this->mbr_0x8 = (dword)(puVar2 + 0xb);
    return;
  }
  meth_0x42ca00(this,(int *)&param_1,(undefined4 *)this->mbr_0x8,param_1);
  return;
}



void __thiscall
Gregorian::meth_0x42ccf0
          (Gregorian *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,_String_base *param_5)

{
  uint unaff_retaddr;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_28;
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062d138;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  local_3c = param_1;
  local_4 = 0;
  local_38 = param_2;
  local_34 = param_3;
  local_30 = param_4;
  ExceptionList = &local_c;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&stack0xffffffd4,param_5,0,0xffffffff);
  meth_0x42cc60(this,&local_3c);
  *(undefined *)&this->mbr_0x30 = 1;
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}



void __thiscall Gregorian::meth_0x4ab680(Gregorian *this,dword param_1,dword param_2,int *param_3)

{
  this->mbr_0x14 = param_1;
  this->mbr_0x18 = param_2;
  this->mbr_0x1c = (dword)param_3;
  if (DAT_007083a0 < param_3) {
    FUN_00497120((byte *)"Gfx_MeshData::SetVertexDesc - invalid vertex count: %d (max = %d)\n");
  }
  return;
}



void __thiscall Gregorian::meth_0x4ab6c0(Gregorian *this,dword param_1,dword param_2)

{
  this->mbr_0x20 = param_1;
  this->mbr_0x24 = param_2;
  return;
}



void __thiscall Gregorian::meth_0x4b1470(Gregorian *this,undefined4 param_1)

{
  *(undefined4 *)(this->mbr_0x128 + 0x130) = param_1;
  *(undefined *)&this->mbr_0x18 = 1;
  return;
}



undefined4 __thiscall Gregorian::meth_0x4b1490(Gregorian *this)

{
  return *(undefined4 *)(this->mbr_0x128 + 0x130);
}



void __thiscall Gregorian::meth_0x4b14a0(Gregorian *this,uint param_1)

{
  if (param_1 < 8) {
    this->mbr_0x1c = param_1;
    *(undefined *)&this->mbr_0x18 = 1;
  }
  return;
}



void __thiscall Gregorian::meth_0x4b14c0(Gregorian *this,uint param_1)

{
  dword *this_00;
  
  this_00 = &this->mbr_0x70;
  cls_0x4abc60::meth_0x4ab600((cls_0x4abc60 *)this_00,'\x01','\x01',param_1,(uint *)0x0);
  if ((this->mbr_0x154 & 0xff000000) == 0xff000000) {
    if ((param_1 & 0xff000000) != 0xff000000) {
      cls_0x4abc60::meth_0x4abdd0((cls_0x4abc60 *)this_00);
      this->mbr_0x154 = param_1;
      return;
    }
  }
  else if ((param_1 & 0xff000000) == 0xff000000) {
    cls_0x4abc60::meth_0x4abdd0((cls_0x4abc60 *)this_00);
  }
  this->mbr_0x154 = param_1;
  return;
}



void __thiscall Gregorian::meth_0x4b1540(Gregorian *this,dword param_1)

{
  this->mbr_0x28 = param_1;
  return;
}



void __thiscall Gregorian::meth_0x4b1550(Gregorian *this,undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = this->mbr_0x20;
  *param_2 = this->mbr_0x24;
  return;
}



void __thiscall Gregorian::meth_0x4b1570(Gregorian *this,dword param_1)

{
  this->mbr_0x30 = param_1;
  return;
}



void __thiscall
Gregorian::meth_0x4b15a0(Gregorian *this,dword param_1,dword param_2,dword param_3,dword param_4)

{
  this->mbr_0x38 = param_1;
  this->mbr_0x3c = param_2;
  this->mbr_0x40 = param_3;
  this->mbr_0x44 = param_4;
  *(undefined *)&this->mbr_0x4 = 1;
  return;
}



void __thiscall
Gregorian::meth_0x4b6d40(Gregorian *this,int param_1,int *param_2,undefined4 param_3)

{
  ushort uVar1;
  short sVar2;
  dword dVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  this->mbr_0x70 = 0;
  this->mbr_0xa0 = 0;
  if (param_2 != (int *)0x0) {
    dVar3 = FUN_004b6bb0(DAT_00707efc,(int)param_2 * 0x1c);
    this->mbr_0x70 = dVar3;
    dVar3 = FUN_004b6bb0(DAT_00707efc,param_1 * 0xc);
    this->mbr_0xa0 = dVar3;
    if (0 < (int)param_2) {
      sVar2 = 1;
      do {
        uVar5 = uVar6 & 0xffff;
        *(short *)(this->mbr_0xa0 + uVar5 * 2) = sVar2 + -1;
        *(short *)(this->mbr_0xa0 + 2 + uVar5 * 2) = sVar2;
        *(short *)(this->mbr_0xa0 + 4 + uVar5 * 2) = sVar2 + 1;
        *(short *)(this->mbr_0xa0 + 6 + uVar5 * 2) = sVar2 + 1;
        *(short *)(this->mbr_0xa0 + 8 + uVar5 * 2) = sVar2;
        *(short *)(this->mbr_0xa0 + 10 + uVar5 * 2) = sVar2 + 2;
        uVar1 = sVar2 + 3;
        uVar6 = uVar6 + 6;
        sVar2 = sVar2 + 4;
      } while ((int)(uint)uVar1 < (int)param_2);
    }
  }
  this->vftptr_0x0 = (Gregorian__vftable_69166c *)0x0;
  this->mbr_0x4 = 0xffffffff;
  this->mbr_0xc = this->mbr_0x70;
  this->mbr_0x10 = this->mbr_0xa0;
  iVar4 = FUN_0047460d(0x144);
  meth_0x4ab680(this,0x144,iVar4,param_2);
  meth_0x4ab6c0(this,2,param_1 * 6);
  dVar3 = cls_0x515040::meth_0x41f630((cls_0x515040 *)this,1);
  this->mbr_0x6c = dVar3;
  *(undefined4 *)(dVar3 + 0x20) = 4;
  *(undefined4 *)(this->mbr_0x6c + 0x24) = 1;
  *(undefined4 *)(this->mbr_0x6c + 0x28) = 0;
  *(undefined4 *)(this->mbr_0x6c + 0x2c) = 0;
  *(int *)(this->mbr_0x6c + 0x30) = param_1 * 2;
  dVar3 = this->mbr_0x34;
  this->mbr_0x74 = dVar3;
  *(undefined4 *)(dVar3 + 0x1c) = 9;
  *(undefined4 *)(dVar3 + 0x20) = 9;
  *(undefined4 *)(this->mbr_0x74 + 0x130) = param_3;
  cls_0x505880::meth_0x4ab6e0((cls_0x505880 *)&this->mbr_0x78,(int)this);
  cls_0x4abc60::meth_0x4abdd0((cls_0x4abc60 *)&this->mbr_0x28);
  return;
}



void __thiscall
Gregorian::meth_0x4b6eb0
          (Gregorian *this,undefined4 param_1,int *param_2,undefined4 param_3,uint param_4)

{
  dword dVar1;
  int iVar2;
  
  this->mbr_0x70 = 0;
  if (param_2 != (int *)0x0) {
    dVar1 = FUN_004b6bb0(DAT_00707efc,(int)param_2 * 0x1c);
    this->mbr_0x70 = dVar1;
  }
  this->vftptr_0x0 = (Gregorian__vftable_69166c *)0x0;
  this->mbr_0x4 = 0xffffffff;
  this->mbr_0xc = this->mbr_0x70;
  iVar2 = FUN_0047460d(0x144);
  meth_0x4ab680(this,0x144,iVar2,param_2);
  dVar1 = cls_0x515040::meth_0x41f630((cls_0x515040 *)this,1);
  this->mbr_0x6c = dVar1;
  *(undefined4 *)(dVar1 + 0x20) = 4;
  *(undefined4 *)(this->mbr_0x6c + 0x28) = 0;
  *(undefined4 *)(this->mbr_0x6c + 0x2c) = 0;
  *(undefined4 *)(this->mbr_0x6c + 0x30) = param_1;
  dVar1 = this->mbr_0x34;
  this->mbr_0x74 = dVar1;
  *(undefined4 *)(dVar1 + 0x1c) = 0x14;
  *(undefined4 *)(dVar1 + 0x20) = 0x14;
  dVar1 = this->mbr_0x74;
  *(undefined4 *)(dVar1 + 0x28) = 1;
  *(undefined4 *)(dVar1 + 0x24) = 1;
  *(undefined4 *)(this->mbr_0x74 + 0x130) = param_3;
  cls_0x505880::meth_0x4ab6e0((cls_0x505880 *)&this->mbr_0x78,(int)this);
  if (param_4 != 0xff808080) {
    cls_0x4abc60::meth_0x4ab600((cls_0x4abc60 *)&this->mbr_0x28,'\x01','\x01',param_4,(uint *)0x0);
  }
  cls_0x4abc60::meth_0x4abdd0((cls_0x4abc60 *)&this->mbr_0x28);
  return;
}



void __thiscall Gregorian::meth_0x52c350(Gregorian *this,dword param_1,dword param_2,dword param_3)

{
  this->mbr_0x38 = param_1;
  this->mbr_0x3c = param_2;
  this->mbr_0x40 = param_3;
  return;
}



undefined4 __thiscall Gregorian::meth_0x52c580(Gregorian *this,int param_1)

{
  int **ppiVar1;
  CSound *this_00;
  int *piVar2;
  
  this->mbr_0x28 = 0xffffffff;
  ppiVar1 = (int **)this->vftptr_0x0->virt_meth_0x544a30_48;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  if (piVar2 != (int *)this->vftptr_0x0->virt_meth_0x544a30_48) {
    do {
      if ((piVar2[2] != 0) && (this_00 = *(CSound **)(piVar2[2] + 0x34), this_00 != (CSound *)0x0))
      {
        CSound::meth_0x4c79e0(this_00,param_1);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)this->vftptr_0x0->virt_meth_0x544a30_48);
  }
  return 0;
}



undefined4 __thiscall Gregorian::meth_0x52c5d0(Gregorian *this)

{
  int iVar1;
  int *piVar2;
  
  if (0x7fffffff < this->mbr_0x28) {
    piVar2 = (int *)this->vftptr_0x0->virt_meth_0x544a30_48;
    if (piVar2 != (int *)0x0) {
      piVar2 = (int *)*piVar2;
    }
    while( true ) {
      if (piVar2 == (int *)this->vftptr_0x0->virt_meth_0x544a30_48) {
        return 0;
      }
      if (((piVar2[2] != 0) && (iVar1 = *(int *)(piVar2[2] + 0x34), iVar1 != 0)) &&
         ((*(byte *)(iVar1 + 0x34) & 4) != 0)) break;
      piVar2 = (int *)*piVar2;
    }
  }
  return 1;
}



undefined4 __thiscall Gregorian::meth_0x52c610(Gregorian *this)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)this->vftptr_0x0->virt_meth_0x544a30_48;
  uVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)*puVar5;
  }
  puVar1 = (undefined4 *)this->vftptr_0x0->virt_meth_0x544a30_48;
  if (puVar5 != puVar1) {
    do {
      if ((puVar5[2] != 0) && (iVar2 = *(int *)(puVar5[2] + 0x34), iVar2 != 0)) {
        uVar3 = *(uint *)(iVar2 + 0x34);
        if ((uVar3 & 4) != 0) {
          return 0;
        }
        if ((uVar3 & 0x1000) != 0) {
          uVar4 = 1;
        }
      }
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != puVar1);
    return uVar4;
  }
  return 0;
}



undefined4 __thiscall Gregorian::meth_0x52c660(Gregorian *this)

{
  int iVar1;
  int *piVar2;
  
  if (((((this->mbr_0x30 & 2) != 0) && ((this->mbr_0x30 & 1) == 0)) &&
      (iVar1 = meth_0x52c5d0(this), iVar1 == 0)) && (iVar1 = meth_0x52c610(this), iVar1 == 0)) {
    piVar2 = (int *)this->vftptr_0x0->virt_meth_0x544a30_48;
    if (piVar2 != (int *)0x0) {
      piVar2 = (int *)*piVar2;
    }
    while( true ) {
      if (piVar2 == (int *)this->vftptr_0x0->virt_meth_0x544a30_48) {
        return 0;
      }
      if (((piVar2[2] != 0) && (iVar1 = *(int *)(piVar2[2] + 0x34), iVar1 != 0)) &&
         ((*(byte *)(iVar1 + 0x34) & 0x48) != 0)) break;
      piVar2 = (int *)*piVar2;
    }
    return 1;
  }
  return 0;
}



undefined4 __thiscall Gregorian::meth_0x52c6c0(Gregorian *this,undefined4 param_1)

{
  int **ppiVar1;
  CSound *this_00;
  int *piVar2;
  
  ppiVar1 = (int **)this->vftptr_0x0->virt_meth_0x544a30_48;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  if (piVar2 != (int *)this->vftptr_0x0->virt_meth_0x544a30_48) {
    do {
      if ((piVar2[2] != 0) && (this_00 = *(CSound **)(piVar2[2] + 0x34), this_00 != (CSound *)0x0))
      {
        CSound::SetVolume(this_00,param_1,'\0');
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)this->vftptr_0x0->virt_meth_0x544a30_48);
  }
  return 0;
}



int __thiscall Gregorian::meth_0x52c710(Gregorian *this)

{
  cls_0x4c6b60 *this_00;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)this->vftptr_0x0->virt_meth_0x544a30_48;
  iVar3 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar1;
  }
  if (puVar1 != (undefined4 *)this->vftptr_0x0->virt_meth_0x544a30_48) {
    do {
      if (((puVar1[2] != 0) &&
          (this_00 = *(cls_0x4c6b60 **)(puVar1[2] + 0x34), this_00 != (cls_0x4c6b60 *)0x0)) &&
         (iVar2 = cls_0x4c6b60::Get_mbr_0x80(this_00), iVar3 < iVar2)) {
        iVar3 = iVar2;
      }
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)this->vftptr_0x0->virt_meth_0x544a30_48);
  }
  return iVar3;
}



undefined4 __thiscall Gregorian::meth_0x52c960(Gregorian *this,int param_1,uint param_2,int param_3)

{
  cls_0x52c890 *this_00;
  CSound *this_01;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  this_00 = *(cls_0x52c890 **)(DAT_0070b250 + 0x1f0);
  iVar3 = 0;
  if (this_00 == (cls_0x52c890 *)0x0) {
    return 1;
  }
  if ((param_1 != 0) && (this_01 = *(CSound **)(param_1 + 0x34), this_01 != (CSound *)0x0)) {
    CSound::meth_0x4c7120(this_01,*(int *)(param_1 + 0x24));
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 != 0) {
      iVar3 = FUN_0052c390(-iVar1,iVar1);
    }
    iVar1 = *(int *)(this->mbr_0x20 + 0x3c);
    if (iVar1 != 100) {
      iVar3 = iVar1 + -100 + iVar3;
    }
    CSound::meth_0x4c7150(this_01,iVar3);
    CSound::meth_0x4c70e0(this_01,*(int *)(param_1 + 0x1c));
    iVar3 = *(int *)(param_1 + 0x20);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_0052c390(-iVar3,iVar3);
    }
    iVar1 = *(int *)(this->mbr_0x20 + 0x38);
    if (iVar1 != 100) {
      iVar3 = iVar3 + -100 + iVar1;
    }
    CSound::meth_0x4c7110(this_01,iVar3);
    iVar3 = cls_0x52c890::meth_0x52c890(this_00,(int *)this);
    CSound::meth_0x4c6b20(this_01,iVar3);
    iVar3 = *(int *)(param_1 + 0x2c);
    if (0 < *(int *)(param_1 + 0x30)) {
      iVar1 = FUN_0052c390(0,*(int *)(param_1 + 0x30));
      iVar3 = iVar3 + iVar1;
    }
    uVar2 = CSound::meth_0x4c7eb0(this_01,param_2,param_3,iVar3);
    return uVar2;
  }
  return 2;
}



void __thiscall Gregorian::meth_0x52ca70(Gregorian *this)

{
  dword dVar1;
  Gregorian__vftable_69166c *pGVar2;
  uint uVar3;
  CSound *this_00;
  int iVar4;
  undefined4 *puVar5;
  int **ppiVar6;
  int *piVar7;
  dword dVar8;
  int iVar9;
  undefined4 local_8;
  cls_0x401b00 *local_4;
  
  iVar9 = 0;
  if (this->vftptr_0x0 == (Gregorian__vftable_69166c *)0x0) {
    return;
  }
  if (*(char *)&this->mbr_0x34 != '\0') {
    iVar4 = cls_0x52c480::meth_0x52c480(*(cls_0x52c480 **)(DAT_0070b250 + 0x1f0));
    meth_0x52c6c0(this,iVar4);
  }
  dVar1 = this->mbr_0x28;
  if ((int)dVar1 < 0) goto LAB_0052cbd1;
  pGVar2 = this->vftptr_0x0;
  local_4 = (cls_0x401b00 *)&pGVar2->virt_meth_0x544a20_44;
  puVar5 = (undefined4 *)pGVar2->virt_meth_0x544a30_48;
  local_8 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)*puVar5;
  }
  dVar8 = 0;
  if (puVar5 != (undefined4 *)pGVar2->virt_meth_0x544a30_48) {
    do {
      if (dVar8 == dVar1) {
        iVar9 = puVar5[2];
      }
      if (dVar8 == dVar1 + 1) {
        iVar4 = puVar5[2];
        goto LAB_0052caf5;
      }
      puVar5 = (undefined4 *)*puVar5;
      dVar8 = dVar8 + 1;
    } while (puVar5 != (undefined4 *)this->vftptr_0x0->virt_meth_0x544a30_48);
    iVar4 = 0;
LAB_0052caf5:
    if ((iVar9 != 0) && (*(int *)(iVar9 + 0x34) != 0)) {
      uVar3 = *(uint *)(*(int *)(iVar9 + 0x34) + 0x34);
      if (((uVar3 & 4) != 0) || ((uVar3 & 0x1000) != 0)) goto LAB_0052cbd1;
      if (pGVar2->virt_meth_0x544a50_56 == (virt_meth_0x544a50 *)0x1) {
        if (iVar4 != 0) {
          meth_0x52c960(this,iVar4,0,0);
          this->mbr_0x28 = this->mbr_0x28 + 1;
          goto LAB_0052cbd1;
        }
        if ((*(byte *)&this->mbr_0x30 & 1) != 0) {
          piVar7 = cls_0x401b00::meth_0x4014f0(local_4,&local_8);
          meth_0x52c960(this,*(int *)(*piVar7 + 8),0,0);
          this->mbr_0x28 = 0;
          goto LAB_0052cbd1;
        }
      }
      else {
        if (pGVar2->virt_meth_0x544a50_56 != (virt_meth_0x544a50 *)0x2) goto LAB_0052cbd1;
        iVar9 = 1;
        if ((*(byte *)&this->mbr_0x30 & 1) != 0) {
          iVar4 = FUN_0052c390(1,(int)pGVar2->virt_meth_0x544a40_52);
          pGVar2 = this->vftptr_0x0;
          ppiVar6 = (int **)cls_0x401b00::meth_0x4014f0
                                      ((cls_0x401b00 *)&pGVar2->virt_meth_0x544a20_44,&local_4);
          piVar7 = *ppiVar6;
          if (piVar7 != (int *)pGVar2->virt_meth_0x544a30_48) {
            do {
              if (iVar9 == iVar4) {
                meth_0x52c960(this,piVar7[2],0,0);
                this->mbr_0x28 = iVar9 - 1;
                break;
              }
              piVar7 = (int *)*piVar7;
              iVar9 = iVar9 + 1;
            } while (piVar7 != (int *)this->vftptr_0x0->virt_meth_0x544a30_48);
          }
          goto LAB_0052cbd1;
        }
      }
    }
  }
  this->mbr_0x28 = 0xffffffff;
LAB_0052cbd1:
  puVar5 = (undefined4 *)this->vftptr_0x0->virt_meth_0x544a30_48;
  if (puVar5 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)*puVar5;
  }
  if (puVar5 != (undefined4 *)this->vftptr_0x0->virt_meth_0x544a30_48) {
    do {
      if ((puVar5[2] != 0) && (this_00 = *(CSound **)(puVar5[2] + 0x34), this_00 != (CSound *)0x0))
      {
        if ((this_00->mbr_0x34 & 4) == 0) {
          if ((this_00->mbr_0x34 & 0x1000) == 0) goto LAB_0052cc22;
          this->mbr_0x24 = *(dword *)(DAT_0070b250 + 0x4c);
        }
        iVar9 = cls_0x52c890::meth_0x52c890(*(cls_0x52c890 **)(DAT_0070b250 + 0x1f0),(int *)this);
        CSound::meth_0x4c6b20(this_00,iVar9);
      }
LAB_0052cc22:
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)this->vftptr_0x0->virt_meth_0x544a30_48);
  }
  return;
}



bool __thiscall Gregorian::meth_0x52cc40(Gregorian *this)

{
  int iVar1;
  
  iVar1 = meth_0x52c5d0(this);
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = meth_0x52c610(this);
  return iVar1 != 0;
}



undefined4 __thiscall Gregorian::meth_0x52cca0(Gregorian *this,uint param_1,int param_2)

{
  cls_0x52c480 *this_00;
  dword dVar1;
  Gregorian__vftable_69166c *pGVar2;
  virt_meth_0x544a50 *pvVar3;
  uint uVar4;
  int iVar5;
  int **ppiVar6;
  int *piVar7;
  int iVar8;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar4 = param_1;
  this_00 = *(cls_0x52c480 **)(DAT_0070b250 + 0x1f0);
  if (this_00 == (cls_0x52c480 *)0x0) {
    return 1;
  }
  if ((this->vftptr_0x0 == (Gregorian__vftable_69166c *)0x0) ||
     (this->vftptr_0x0->virt_meth_0x544a40_52 == (virt_meth_0x544a40 *)0x0)) {
    return 2;
  }
  iVar5 = meth_0x52c5d0(this);
  if ((iVar5 == 0) && (iVar5 = meth_0x52c610(this), iVar5 == 0)) {
    this->mbr_0x30 = param_1;
    if ((param_1 & 2) != 0) {
      param_1 = param_1 & 0xfffffffd;
    }
    dVar1 = this->mbr_0x20;
    iVar5 = cls_0x52c480::meth_0x52c760(this_00,*(int *)(dVar1 + 0x58));
    if (*(int *)(dVar1 + 0x2c) <= iVar5) {
      cls_0x52c480::meth_0x52c7d0(this_00,*(int *)(dVar1 + 0x58),(int *)this);
    }
    pGVar2 = this->vftptr_0x0;
    this->mbr_0x24 = *(dword *)(DAT_0070b250 + 0x4c);
    pvVar3 = pGVar2->virt_meth_0x544a50_56;
    if (pvVar3 == (virt_meth_0x544a50 *)0x0) {
      ppiVar6 = (int **)cls_0x401b00::meth_0x4014f0
                                  ((cls_0x401b00 *)&pGVar2->virt_meth_0x544a20_44,&local_4);
      piVar7 = *ppiVar6;
      if (piVar7 != (int *)pGVar2->virt_meth_0x544a30_48) {
        do {
          meth_0x52c960(this,piVar7[2],param_1,param_2);
          piVar7 = (int *)*piVar7;
        } while (piVar7 != (int *)this->vftptr_0x0->virt_meth_0x544a30_48);
      }
    }
    else if (pvVar3 == (virt_meth_0x544a50 *)0x1) {
      this->mbr_0x28 = 0;
      piVar7 = cls_0x401b00::meth_0x4014f0((cls_0x401b00 *)&pGVar2->virt_meth_0x544a20_44,&local_8);
      iVar5 = *(int *)(*piVar7 + 8);
      if ((uVar4 & 1) != 0) {
        param_1 = param_1 & 0xfffffffe;
      }
LAB_0052cdbc:
      meth_0x52c960(this,iVar5,param_1,param_2);
    }
    else if (pvVar3 == (virt_meth_0x544a50 *)0x2) {
      iVar5 = FUN_0052c390(1,(int)pGVar2->virt_meth_0x544a40_52);
      pGVar2 = this->vftptr_0x0;
      ppiVar6 = (int **)cls_0x401b00::meth_0x4014f0
                                  ((cls_0x401b00 *)&pGVar2->virt_meth_0x544a20_44,&local_c);
      piVar7 = *ppiVar6;
      iVar8 = 1;
      if (piVar7 != (int *)pGVar2->virt_meth_0x544a30_48) {
        do {
          if (iVar8 == iVar5) {
            iVar5 = piVar7[2];
            if ((uVar4 & 1) != 0) {
              param_1 = param_1 & 0xfffffffe;
              this->mbr_0x28 = iVar8 - 1;
            }
            goto LAB_0052cdbc;
          }
          piVar7 = (int *)*piVar7;
          iVar8 = iVar8 + 1;
        } while (piVar7 != (int *)this->vftptr_0x0->virt_meth_0x544a30_48);
      }
    }
    if (*(char *)&this->mbr_0x34 != '\0') {
      iVar5 = cls_0x52c480::meth_0x52c480(*(cls_0x52c480 **)(DAT_0070b250 + 0x1f0));
      meth_0x52c6c0(this,iVar5);
    }
  }
  return 0;
}



void __thiscall Gregorian::meth_0x52d100(Gregorian *this)

{
  Gregorian__vftable_69166c *this_00;
  undefined1 unaff_DI;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00636bfb;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  cls_0x401b00::meth_0x52cc70(*(cls_0x401b00 **)(DAT_0070b250 + 0x1f0),(char)this,unaff_DI);
  this_00 = this->vftptr_0x0;
  if (this_00 != (Gregorian__vftable_69166c *)0x0) {
    CSoundPresetInfo::~CSoundPresetInfo((CSoundPresetInfo *)this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  if (0xf < this->mbr_0x1c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x8);
  }
  this->mbr_0x1c = 0xf;
  this->mbr_0x18 = 0;
  *(undefined *)&this->mbr_0x8 = 0;
  ExceptionList = local_c;
  return;
}



Gregorian * __thiscall Gregorian::Gregorian(Gregorian *this,uint *param_1)

{
  int iVar1;
  uint *puVar2;
  dword *pdVar3;
  
  this->mbr_0x4 = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x8 = 1;
  this->mbr_0xc = 1;
  puVar2 = param_1;
  pdVar3 = &this->mbr_0x4;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pdVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    pdVar3 = pdVar3 + 1;
  }
  this->vftptr_0x0 = &Gregorian__vftable_69166c_0069166c;
  this->mbr_0x1c = 0;
  this->mbr_0x20 = 1;
  this->mbr_0x24 = 1;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  virt_meth_0x5a3740(this,param_1);
  return this;
}



void __thiscall Gregorian::virt_meth_0x5449b0(Gregorian *this,undefined4 *param_1)

{
  int iVar1;
  dword *pdVar2;
  
  pdVar2 = &this->mbr_0x4;
  for (iVar1 = 6; param_1 = param_1 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *pdVar2 = *param_1;
    pdVar2 = pdVar2 + 1;
  }
  return;
}



dword __thiscall Gregorian::Get_mbr_0x24(Gregorian *this)

{
  return this->mbr_0x24;
}



dword __thiscall Gregorian::Get_mbr_0x28(Gregorian *this)

{
  return this->mbr_0x28;
}



Gregorian * __thiscall Gregorian::~Gregorian(Gregorian *this)

{
  Gregorian *in_EAX;
  
  this->vftptr_0x0 = &Gregorian__vftable_69166c_0069166c;
  return in_EAX;
}



void __thiscall Gregorian::virt_meth_0x5a3740(Gregorian *this,uint *param_1)

{
  Gregorian__vftable_69166c *pGVar1;
  uint uVar2;
  undefined uVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  int iVar4;
  dword *pdVar5;
  dword *pdVar6;
  
  pdVar5 = &this->mbr_0x4;
  pdVar6 = &this->mbr_0x1c;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pdVar6 = *pdVar5;
    pdVar5 = pdVar5 + 1;
    pdVar6 = pdVar6 + 1;
  }
  this->mbr_0x34 = 0;
  if (this->mbr_0x1c < *param_1) {
    (*this->vftptr_0x0->virt_meth_0x5a39a0_72)(this);
    pGVar1 = this->vftptr_0x0;
    uVar3 = (*pGVar1->virt_meth_0x544a30_48)(this);
    (*pGVar1->virt_meth_0x5a3ab0_76)(this,CONCAT31(extraout_var,uVar3) - this->mbr_0x24);
    uVar2 = this->mbr_0x20;
    while (uVar2 < 0xc) {
      pGVar1 = this->vftptr_0x0;
      uVar3 = (*pGVar1->virt_meth_0x544a30_48)(this);
      (*pGVar1->virt_meth_0x5a3ab0_76)(this,CONCAT31(extraout_var_00,uVar3));
      uVar2 = this->mbr_0x20;
    }
    (*this->vftptr_0x0->virt_meth_0x5a3b50_80)(this,0x17 - this->mbr_0x28);
    (*this->vftptr_0x0->virt_meth_0x5a3be0_84)(this,0x3b - this->mbr_0x2c);
    (*this->vftptr_0x0->virt_meth_0x5a3c60_88)(this,0x3c - this->mbr_0x30);
  }
  if (this->mbr_0x20 < param_1[1]) {
    pGVar1 = this->vftptr_0x0;
    uVar3 = (*pGVar1->virt_meth_0x544a30_48)(this);
    (*pGVar1->virt_meth_0x5a3ab0_76)(this,CONCAT31(extraout_var_01,uVar3) - this->mbr_0x24);
    if (this->mbr_0x20 < param_1[1] - 1) {
      do {
        pGVar1 = this->vftptr_0x0;
        uVar3 = (*pGVar1->virt_meth_0x544a30_48)(this);
        (*pGVar1->virt_meth_0x5a3ab0_76)(this,CONCAT31(extraout_var_02,uVar3));
      } while (this->mbr_0x20 < param_1[1] - 1);
    }
    (*this->vftptr_0x0->virt_meth_0x5a3b50_80)(this,0x17 - this->mbr_0x28);
    (*this->vftptr_0x0->virt_meth_0x5a3be0_84)(this,0x3b - this->mbr_0x2c);
    (*this->vftptr_0x0->virt_meth_0x5a3c60_88)(this,0x3c - this->mbr_0x30);
  }
  if (this->mbr_0x24 < param_1[2]) {
    (*this->vftptr_0x0->virt_meth_0x5a3ab0_76)(this,(param_1[2] - this->mbr_0x24) - 1);
    (*this->vftptr_0x0->virt_meth_0x5a3b50_80)(this,0x17 - this->mbr_0x28);
    (*this->vftptr_0x0->virt_meth_0x5a3be0_84)(this,0x3b - this->mbr_0x2c);
    (*this->vftptr_0x0->virt_meth_0x5a3c60_88)(this,0x3c - this->mbr_0x30);
  }
  if (this->mbr_0x28 < param_1[3]) {
    (*this->vftptr_0x0->virt_meth_0x5a3b50_80)(this,(param_1[3] - this->mbr_0x28) - 1);
    (*this->vftptr_0x0->virt_meth_0x5a3be0_84)(this,0x3b - this->mbr_0x2c);
    (*this->vftptr_0x0->virt_meth_0x5a3c60_88)(this,0x3c - this->mbr_0x30);
  }
  if (this->mbr_0x2c < param_1[4]) {
    (*this->vftptr_0x0->virt_meth_0x5a3be0_84)(this,(param_1[4] - this->mbr_0x2c) - 1);
    (*this->vftptr_0x0->virt_meth_0x5a3c60_88)(this,0x3c - this->mbr_0x30);
  }
  if (this->mbr_0x30 < param_1[5]) {
    (*this->vftptr_0x0->virt_meth_0x5a3c60_88)(this,param_1[5] - this->mbr_0x30);
  }
  return;
}



void __thiscall Gregorian::virt_meth_0x5a3ab0(Gregorian *this,uint param_1)

{
  undefined uVar1;
  char cVar2;
  undefined3 extraout_var;
  uint uVar3;
  uint uVar4;
  
  if (param_1 != 0) {
    while( true ) {
      uVar1 = (*this->vftptr_0x0->virt_meth_0x544a30_48)(this);
      uVar4 = CONCAT31(extraout_var,uVar1) - this->mbr_0x24;
      cVar2 = (*this->vftptr_0x0->virt_meth_0x5a3920_64)(this);
      if ((cVar2 != '\0') && (this->mbr_0x20 == 2)) {
        uVar4 = uVar4 + 1;
      }
      if (param_1 <= uVar4) break;
      uVar3 = this->mbr_0x20 + 1;
      if (uVar3 < 0xd) {
        this->mbr_0x20 = uVar3;
      }
      else {
        this->mbr_0x20 = 1;
        this->mbr_0x1c = this->mbr_0x1c + 1;
      }
      param_1 = param_1 - (uVar4 + 1);
      this->mbr_0x34 = this->mbr_0x34 + (uVar4 + 1) * 0x15180;
      this->mbr_0x24 = 1;
      if (param_1 == 0) {
        return;
      }
    }
    this->mbr_0x34 = this->mbr_0x34 + param_1 * 0x15180;
    this->mbr_0x24 = this->mbr_0x24 + param_1;
  }
  return;
}



void __thiscall Gregorian::virt_meth_0x5a3b50(Gregorian *this,uint param_1)

{
  uint uVar1;
  
  if (0x17 < param_1) {
    uVar1 = param_1 / 0x18;
    param_1 = param_1 % 0x18;
    (*this->vftptr_0x0->virt_meth_0x5a3ab0_76)(this,uVar1);
  }
  if (param_1 != 0) {
    while (uVar1 = 0x18 - this->mbr_0x28, uVar1 <= param_1) {
      (*this->vftptr_0x0->virt_meth_0x5a3ab0_76)(this,1);
      param_1 = param_1 - uVar1;
      this->mbr_0x34 = this->mbr_0x34 + uVar1 * 0xe10;
      this->mbr_0x28 = 0;
      if (param_1 == 0) {
        return;
      }
    }
    this->mbr_0x34 = this->mbr_0x34 + param_1 * 0xe10;
    this->mbr_0x28 = this->mbr_0x28 + param_1;
  }
  return;
}



void __thiscall Gregorian::virt_meth_0x5a3be0(Gregorian *this,uint param_1)

{
  uint uVar1;
  
  if (0x3b < param_1) {
    uVar1 = param_1 / 0x3c;
    param_1 = param_1 % 0x3c;
    (*this->vftptr_0x0->virt_meth_0x5a3b50_80)(this,uVar1);
  }
  if (param_1 != 0) {
    while (uVar1 = 0x3c - this->mbr_0x2c, uVar1 <= param_1) {
      (*this->vftptr_0x0->virt_meth_0x5a3b50_80)(this,1);
      param_1 = param_1 - uVar1;
      this->mbr_0x2c = 0;
      this->mbr_0x34 = this->mbr_0x34 + uVar1 * 0x3c;
      if (param_1 == 0) {
        return;
      }
    }
    this->mbr_0x34 = this->mbr_0x34 + param_1 * 0x3c;
    this->mbr_0x2c = this->mbr_0x2c + param_1;
  }
  return;
}



void __thiscall Gregorian::virt_meth_0x5a3c60(Gregorian *this,uint param_1)

{
  uint uVar1;
  
  if (0x3b < param_1) {
    uVar1 = param_1 / 0x3c;
    param_1 = param_1 % 0x3c;
    (*this->vftptr_0x0->virt_meth_0x5a3be0_84)(this,uVar1);
  }
  if (param_1 != 0) {
    while (uVar1 = 0x3c - this->mbr_0x30, uVar1 <= param_1) {
      (*this->vftptr_0x0->virt_meth_0x5a3be0_84)(this,1);
      param_1 = param_1 - uVar1;
      this->mbr_0x30 = 0;
      this->mbr_0x34 = this->mbr_0x34 + uVar1;
      if (param_1 == 0) {
        return;
      }
    }
    this->mbr_0x30 = this->mbr_0x30 + param_1;
    this->mbr_0x34 = this->mbr_0x34 + param_1;
  }
  return;
}



void __thiscall Gregorian::virt_meth_0x5a3ce0(Gregorian *this)

{
  undefined uVar1;
  char cVar2;
  undefined3 extraout_var;
  uint uVar3;
  int iVar4;
  
  uVar3 = this->mbr_0x20 + 1;
  this->mbr_0x20 = uVar3;
  if (0xc < uVar3) {
    this->mbr_0x1c = this->mbr_0x1c + 1;
    this->mbr_0x20 = 1;
  }
  uVar1 = (*this->vftptr_0x0->virt_meth_0x544a30_48)(this);
  iVar4 = CONCAT31(extraout_var,uVar1) - this->mbr_0x24;
  cVar2 = (*this->vftptr_0x0->virt_meth_0x5a3920_64)(this);
  if ((cVar2 != '\0') && (this->mbr_0x20 == 2)) {
    iVar4 = iVar4 + 1;
  }
  this->mbr_0x34 =
       this->mbr_0x34 +
       (((iVar4 * 0x18 - this->mbr_0x28) * 0x3c - this->mbr_0x2c) * 0x3c - this->mbr_0x30);
  this->mbr_0x24 = 1;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  return;
}



void __thiscall Gregorian::virt_meth_0x5a3d60(Gregorian *this)

{
  (*this->vftptr_0x0->virt_meth_0x5a3ab0_76)(this,1);
  this->mbr_0x34 =
       this->mbr_0x34 + ((this->mbr_0x28 * 0x3c + this->mbr_0x2c) * -0x3c - this->mbr_0x30);
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  return;
}



void __thiscall Gregorian::virt_meth_0x5a3da0(Gregorian *this)

{
  (*this->vftptr_0x0->virt_meth_0x5a3b50_80)(this,1);
  this->mbr_0x34 = this->mbr_0x34 + (this->mbr_0x2c * -0x3c - this->mbr_0x30);
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  return;
}



void __thiscall Gregorian::virt_meth_0x5a3dd0(Gregorian *this)

{
  (*this->vftptr_0x0->virt_meth_0x5a3be0_84)(this,1);
  this->mbr_0x34 = this->mbr_0x34 - this->mbr_0x30;
  this->mbr_0x30 = 0;
  return;
}



undefined4 __thiscall Gregorian::virt_meth_0x5a3eb0(Gregorian *this,uint param_1)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  uint uVar4;
  int iVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  
  uVar4 = (*this->vftptr_0x0->virt_meth_0x41d1d0_12)(this);
  if (uVar4 < param_1) {
    return 0;
  }
  iVar5 = (*this->vftptr_0x0->virt_meth_0x41d1d0_12)(this);
  uVar1 = (*this->vftptr_0x0->virt_meth_0x544a50_60)(this);
  uVar2 = (*this->vftptr_0x0->virt_meth_0x544a50_56)(this);
  uVar3 = (*this->vftptr_0x0->virt_meth_0x544a40_52)(this);
  return (int)((((ulonglong)(iVar5 - param_1) / (ulonglong)CONCAT31(extraout_var,uVar1)) /
               (ulonglong)CONCAT31(extraout_var_00,uVar2)) /
              (ulonglong)CONCAT31(extraout_var_01,uVar3));
}



undefined4 __thiscall Gregorian::virt_meth_0x5a3f10(Gregorian *this,uint param_1)

{
  undefined uVar1;
  undefined uVar2;
  uint uVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
  uVar3 = (*this->vftptr_0x0->virt_meth_0x41d1d0_12)(this);
  if (uVar3 < param_1) {
    return 0;
  }
  iVar4 = (*this->vftptr_0x0->virt_meth_0x41d1d0_12)(this);
  uVar1 = (*this->vftptr_0x0->virt_meth_0x544a50_60)(this);
  uVar2 = (*this->vftptr_0x0->virt_meth_0x544a50_56)(this);
  return (int)(((ulonglong)(iVar4 - param_1) / (ulonglong)CONCAT31(extraout_var,uVar1)) /
              (ulonglong)CONCAT31(extraout_var_00,uVar2));
}



uint __thiscall Gregorian::virt_meth_0x5a3f60(Gregorian *this,uint param_1)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var;
  
  uVar2 = (*this->vftptr_0x0->virt_meth_0x41d1d0_12)(this);
  if (uVar2 < param_1) {
    return 0;
  }
  iVar3 = (*this->vftptr_0x0->virt_meth_0x41d1d0_12)(this);
  uVar1 = (*this->vftptr_0x0->virt_meth_0x544a50_60)(this);
  return (iVar3 - param_1) / CONCAT31(extraout_var,uVar1);
}



int __thiscall Gregorian::virt_meth_0x5a3fa0(Gregorian *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (*this->vftptr_0x0->virt_meth_0x41d1d0_12)(this);
  if (uVar1 < param_1) {
    return 0;
  }
  iVar2 = (*this->vftptr_0x0->virt_meth_0x41d1d0_12)(this);
  return iVar2 - param_1;
}



void __thiscall Gregorian::virt_meth_0x5a4070(Gregorian *this,uint param_1)

{
  void *pvStack_10;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063adf8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  Gregorian((Gregorian *)&stack0xffffffbc,&this->mbr_0x4);
  local_4 = 0;
  virt_meth_0x5a3c60((Gregorian *)&stack0xffffffbc,param_1);
  (*this->vftptr_0x0->virt_meth_0x5a3df0_112)(this);
  ExceptionList = pvStack_10;
  return;
}



void __thiscall Gregorian::virt_meth_0x5a40d0(Gregorian *this,uint param_1)

{
  void *pvStack_10;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063adf8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  Gregorian((Gregorian *)&stack0xffffffbc,&this->mbr_0x4);
  local_4 = 0;
  virt_meth_0x5a3c60((Gregorian *)&stack0xffffffbc,param_1);
  (*this->vftptr_0x0->virt_meth_0x5a3e20_120)(this);
  ExceptionList = pvStack_10;
  return;
}



void __thiscall Gregorian::virt_meth_0x5a4130(Gregorian *this,uint *param_1)

{
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063adf8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  Gregorian((Gregorian *)&stack0xffffffbc,&this->mbr_0x4);
  local_4 = 0;
  virt_meth_0x5a3740((Gregorian *)&stack0xffffffbc,param_1);
  (*this->vftptr_0x0->virt_meth_0x5a3eb0_124)(this,local_10);
  ExceptionList = pvStack_c;
  return;
}



void __thiscall Gregorian::virt_meth_0x5a4190(Gregorian *this,uint *param_1)

{
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063adf8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  Gregorian((Gregorian *)&stack0xffffffbc,&this->mbr_0x4);
  local_4 = 0;
  virt_meth_0x5a3740((Gregorian *)&stack0xffffffbc,param_1);
  (*this->vftptr_0x0->virt_meth_0x5a3f10_132)(this,local_10);
  ExceptionList = pvStack_c;
  return;
}



void __thiscall Gregorian::virt_meth_0x5a41f0(Gregorian *this,uint *param_1)

{
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063adf8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  Gregorian((Gregorian *)&stack0xffffffbc,&this->mbr_0x4);
  local_4 = 0;
  virt_meth_0x5a3740((Gregorian *)&stack0xffffffbc,param_1);
  (*this->vftptr_0x0->virt_meth_0x5a3f60_140)(this,local_10);
  ExceptionList = pvStack_c;
  return;
}



void __thiscall Gregorian::virt_meth_0x5a4250(Gregorian *this,uint *param_1)

{
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063adf8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  Gregorian((Gregorian *)&stack0xffffffbc,&this->mbr_0x4);
  local_4 = 0;
  virt_meth_0x5a3740((Gregorian *)&stack0xffffffbc,param_1);
  (*this->vftptr_0x0->virt_meth_0x5a3fa0_148)(this,local_10);
  ExceptionList = pvStack_c;
  return;
}


#include "../include/Gregorian.h"
