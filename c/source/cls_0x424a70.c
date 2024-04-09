#include "../include/cls_0x424a70.h"

void __thiscall cls_0x424a70::meth_0x424a70(cls_0x424a70 *this)

{
  dword dVar1;
  int iVar2;
  CounterControl *local_24;
  dword local_20;
  dword local_1c;
  dword local_18;
  dword local_14;
  dword local_10;
  dword local_c;
  dword local_8;
  dword local_4;
  
  CLoadMapInterface::meth_0x495220
            ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),1);
  local_24 = (CounterControl *)this->mbr_0x10;
  local_20 = this->mbr_0x14;
  local_1c = this->mbr_0x18;
  local_18 = this->mbr_0x1c;
  local_14 = this->mbr_0x20;
  local_10 = this->mbr_0x24;
  local_c = this->mbr_0x28;
  local_8 = this->mbr_0x2c;
  local_4 = this->mbr_0x30;
  iVar2 = 0;
  do {
    CounterControl::meth_0x431d70((&local_24)[iVar2]);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 9);
  dVar1 = this->mbr_0x4;
  if (dVar1 != 0) {
    (***(code ***)(*(int *)(*(int *)(dVar1 + 4) + 4) + 4 + dVar1))(1);
    this->mbr_0x4 = 0;
  }
  this->mbr_0xb4 = 0;
  return;
}



void __thiscall cls_0x424a70::meth_0x424be0(cls_0x424a70 *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0070bd90 + 0x2c);
  CameraControl::meth_0x586760
            (*(CameraControl **)(iVar1 + 0x84),this->mbr_0x7c,this->mbr_0x80,this->mbr_0x84);
  CameraControl::meth_0x585e60(*(CameraControl **)(iVar1 + 0x84),(float)this->mbr_0x88);
  CameraControl::meth_0x585fd0(*(CameraControl **)(iVar1 + 0x84),(float)this->mbr_0x8c);
  CameraControl::meth_0x586110(*(CameraControl **)(iVar1 + 0x84),(float)this->mbr_0x90);
  CameraControl::meth_0x5867c0(*(CameraControl **)(iVar1 + 0x84),(float)this->mbr_0x94);
  return;
}



int __thiscall cls_0x424a70::meth_0x424c60(cls_0x424a70 *this)

{
  dword dVar1;
  int iVar2;
  
  dVar1 = this->mbr_0x4;
  iVar2 = 0x28;
  if (dVar1 != 0) {
    iVar2 = ((((((0x28 - *(int *)(dVar1 + 0x778)) - *(int *)(dVar1 + 0x774)) -
               *(int *)(dVar1 + 0x770)) - *(int *)(dVar1 + 0x76c)) - *(int *)(dVar1 + 0x768)) -
            *(int *)(dVar1 + 0x764)) - *(int *)(dVar1 + 0x760);
  }
  return iVar2;
}



void __thiscall cls_0x424a70::meth_0x424ca0(cls_0x424a70 *this,char param_1)

{
  int iVar1;
  int iVar2;
  int extraout_EDX;
  
  iVar1 = (param_1 != '\0') + 1;
  iVar2 = meth_0x424c60(this);
  CounterControl::meth_0x4313b0(*(CounterControl **)(extraout_EDX + 0x2c),iVar2,iVar1);
  return;
}



void __thiscall cls_0x424a70::meth_0x424cd0(cls_0x424a70 *this,char param_1)

{
  int iVar1;
  
  iVar1 = cls_0x409820::Get_mbr_0x270((cls_0x409820 *)this->mbr_0x4);
  CounterControl::meth_0x4313b0((CounterControl *)this->mbr_0x30,3 - iVar1,(param_1 != '\0') + 1);
  return;
}



undefined4 __thiscall cls_0x424a70::meth_0x424d40(cls_0x424a70 *this)

{
  return (&DAT_006f2a48)[this->mbr_0x120 * 2];
}



undefined4 __thiscall cls_0x424a70::meth_0x424d50(cls_0x424a70 *this)

{
  return *(undefined4 *)(&DAT_006f2a98 + this->mbr_0x120 * 4);
}



undefined4 __thiscall cls_0x424a70::meth_0x424d60(cls_0x424a70 *this)

{
  return *(undefined4 *)(&DAT_006f2ac0 + this->mbr_0x120 * 4);
}



undefined4 __thiscall cls_0x424a70::meth_0x424d70(cls_0x424a70 *this)

{
  return *(undefined4 *)(&DAT_006f2ae8 + this->mbr_0x120 * 4);
}



void __thiscall cls_0x424a70::meth_0x425000(cls_0x424a70 *this)

{
  Gregorian *this_00;
  
  cls_0x424df0::meth_0x424df0((cls_0x424df0 *)this->mbr_0x34,this->mbr_0xe8);
  Gregorian::meth_0x424fc0(this_00);
  return;
}



void __thiscall cls_0x424a70::meth_0x425020(cls_0x424a70 *this)

{
  Gregorian *this_00;
  
  cls_0x424df0::meth_0x424df0((cls_0x424df0 *)this->mbr_0x38,this->mbr_0xec);
  Gregorian::meth_0x424fc0(this_00);
  return;
}



void __thiscall cls_0x424a70::meth_0x425040(cls_0x424a70 *this)

{
  dword dVar1;
  int iVar2;
  Gregorian *this_00;
  Gregorian *this_01;
  
  dVar1 = this->mbr_0xf0;
  if (-1 < (int)dVar1) {
    if (this->mbr_0xfc == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)(this->mbr_0x100 - this->mbr_0xfc) >> 2;
    }
    if ((int)dVar1 < iVar2) {
      cls_0x424df0::meth_0x424df0((cls_0x424df0 *)this->mbr_0x3c,dVar1);
      Gregorian::meth_0x424fc0(this_00);
      return;
    }
  }
  cls_0x424df0::meth_0x424df0((cls_0x424df0 *)this->mbr_0x3c,-1);
  Gregorian::meth_0x424fc0(this_01);
  return;
}



void __thiscall cls_0x424a70::meth_0x425090(cls_0x424a70 *this)

{
  dword dVar1;
  int iVar2;
  Gregorian *this_00;
  Gregorian *this_01;
  
  dVar1 = this->mbr_0xf4;
  if (-1 < (int)dVar1) {
    if (this->mbr_0x10c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)(this->mbr_0x110 - this->mbr_0x10c) >> 2;
    }
    if ((int)dVar1 < iVar2) {
      cls_0x424df0::meth_0x424df0((cls_0x424df0 *)this->mbr_0x40,dVar1);
      Gregorian::meth_0x424fc0(this_00);
      return;
    }
  }
  cls_0x424df0::meth_0x424df0((cls_0x424df0 *)this->mbr_0x40,-1);
  Gregorian::meth_0x424fc0(this_01);
  return;
}



void __thiscall cls_0x424a70::meth_0x4250e0(cls_0x424a70 *this)

{
  Gregorian *this_00;
  
  cls_0x424df0::meth_0x424df0((cls_0x424df0 *)this->mbr_0x44,this->mbr_0x118);
  Gregorian::meth_0x424fc0(this_00);
  return;
}



void __thiscall cls_0x424a70::meth_0x425100(cls_0x424a70 *this)

{
  Gregorian *this_00;
  
  cls_0x424df0::meth_0x424df0((cls_0x424df0 *)this->mbr_0x48,this->mbr_0x11c);
  Gregorian::meth_0x424fc0(this_00);
  return;
}



void __thiscall cls_0x424a70::meth_0x425120(cls_0x424a70 *this)

{
  Gregorian *this_00;
  
  cls_0x424df0::meth_0x424df0((cls_0x424df0 *)this->mbr_0x4c,this->mbr_0x120);
  Gregorian::meth_0x424fc0(this_00);
  return;
}



void __thiscall cls_0x424a70::meth_0x425520(cls_0x424a70 *this,int param_1)

{
  undefined *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  void *unaff_EDI;
  uint unaff_retaddr;
  char cVar8;
  undefined local_2c [4];
  uint local_28;
  uint uStack_24;
  VFX_Parameter__vftable_673a20 *pVStack_20;
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  puStack_8 = &LAB_0062cac8;
  pvStack_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  local_14 = 0xf;
  local_18 = 0;
  local_28 = local_28 & 0xffffff00;
  cVar8 = (char)param_1 + '\x01';
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_004a1a30((cls_0x50db20 *)local_2c,(byte *)"lblSkill%da",cVar8);
  piVar2 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)local_2c);
  FUN_004a1a30((cls_0x50db20 *)local_2c,(byte *)"lblSkill%db",cVar8);
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)local_2c);
  FUN_004a1a30((cls_0x50db20 *)local_2c,(byte *)"lblSkill%dc",cVar8);
  piVar4 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)local_2c);
  uVar5 = cls_0x409820::meth_0x409cd0((cls_0x409820 *)this->mbr_0x4,param_1);
  if ((char)uVar5 == '\0') {
    (**(code **)(*piVar2 + 0x168))(0xff008000);
    (**(code **)(*piVar3 + 0x168))(0xff008000);
    (**(code **)(*piVar4 + 0x168))(0xff008000);
  }
  else {
    (**(code **)(*piVar2 + 0x168))(0xff4f6064);
    (**(code **)(*piVar3 + 0x168))(0xff4f6064);
    (**(code **)(*piVar4 + 0x168))(0xff4f6064);
  }
  puVar1 = puStack_8;
  uVar6 = cls_0x409820::meth_0x409820((cls_0x409820 *)this->mbr_0x4,(int)puStack_8);
  FUN_004a1a30((cls_0x50db20 *)&stack0xffffffc8,&DAT_00650668,(char)uVar6);
  (**(code **)(*piVar3 + 300))(&stack0xffffffc8);
  iVar7 = GameCreature::GetTotalSkill((GameCreature *)this->mbr_0x4,(int)puVar1);
  FUN_004a1a30((cls_0x50db20 *)&stack0xffffffc4,&DAT_00650668,(char)iVar7);
  (**(code **)(*piVar4 + 300))(&stack0xffffffc4);
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EDI);
  }
  ExceptionList = pVStack_20;
  FUN_00616e15(uStack_24 ^ local_14);
  return;
}



void __thiscall cls_0x424a70::meth_0x425b50(cls_0x424a70 *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = cls_0x409820::meth_0x409cd0((cls_0x409820 *)this->mbr_0x4,(int)param_1);
  if ((char)uVar1 == '\0') {
    iVar2 = cls_0x409820::Get_mbr_0x270((cls_0x409820 *)this->mbr_0x4);
    if (iVar2 < 3) {
      cls_0x409820::meth_0x40c890((cls_0x409820 *)this->mbr_0x4,(int)param_1);
    }
    else {
      FUN_00441b30((void *)this->mbr_0x8,99,1,0);
    }
  }
  else {
    cls_0x409820::meth_0x40a270((cls_0x409820 *)this->mbr_0x4,param_1);
  }
  meth_0x425520(this,(int)param_1);
  meth_0x424cd0(this,'\0');
  return;
}



void __thiscall cls_0x424a70::meth_0x425bb0(cls_0x424a70 *this)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    meth_0x425520(this,iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xd);
  return;
}



void __thiscall cls_0x424a70::meth_0x426c20(cls_0x424a70 *this,undefined4 param_1)

{
  char *pcVar1;
  char *pcVar2;
  int *piVar3;
  undefined local_28 [4];
  void *local_24;
  dword local_14;
  void *local_10;
  VFX_Parameter__vftable_673a20 *pVStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062ca58;
  pVStack_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  local_10 = (void *)0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar1 = "lblName";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ExceptionList = &pVStack_c;
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"lblName",(uint)(pcVar2 + -0x650a58));
  local_4 = 0;
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)local_28);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = (void *)0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  (**(code **)(*piVar3 + 300))(param_1);
  ExceptionList = local_10;
  return;
}



void __thiscall cls_0x424a70::meth_0x426ce0(cls_0x424a70 *this,undefined param_1,undefined4 param_2)

{
  char *pcVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 ***pppuVar4;
  uint unaff_retaddr;
  void *local_64;
  undefined4 ***local_60 [3];
  undefined4 uStack_54;
  uint local_50;
  uint local_4c;
  undefined local_48 [4];
  void *local_44;
  dword local_34;
  uint local_30;
  VFX_Parameter__vftable_673a20 *local_2c;
  undefined local_28;
  uint local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062ca88;
  pvStack_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  local_30 = 0xf;
  local_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  pcVar1 = "lblAge";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ExceptionList = &pvStack_c;
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_48,"lblAge",(uint)(pcVar2 + -0x651c24));
  local_4 = 0;
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)local_48);
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    _free(local_44);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  local_14 = 0xf;
  local_18 = 0;
  local_28 = 0;
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = (undefined4 ***)((uint)local_60[0] & 0xffffff00);
  local_4 = 2;
  FUN_0056c280(0x18,(_String_base *)&local_64);
  pppuVar4 = local_60[0];
  if (local_4c < 0x10) {
    pppuVar4 = local_60;
  }
  FUN_004a1a30((cls_0x50db20 *)&local_2c,(byte *)"%s %d",(char)pppuVar4);
  (**(code **)(*piVar3 + 300))(&local_2c);
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    _free(local_64);
  }
  local_50 = 0xf;
  uStack_54 = 0;
  local_64 = (void *)((uint)local_64 & 0xffffff00);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_10;
  FUN_00616e15(local_14 ^ local_4);
  return;
}



void __thiscall cls_0x424a70::meth_0x426e40(cls_0x424a70 *this,int param_1)

{
  char *pcVar1;
  char *pcVar2;
  int *piVar3;
  uint unaff_retaddr;
  undefined local_48 [4];
  void *local_44;
  dword local_34;
  uint local_30;
  VFX_Parameter__vftable_673a20 *local_2c;
  undefined local_28;
  uint local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062cab0;
  pvStack_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  local_14 = 0xf;
  local_18 = 0;
  local_28 = 0;
  pcVar1 = "??";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ExceptionList = &pvStack_c;
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_2c,"??",(uint)(pcVar2 + -0x651c34));
  local_4 = 0;
  local_30 = 0xf;
  local_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  pcVar1 = "lblSex";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_48,"lblSex",(uint)(pcVar2 + -0x651c2c));
  local_4._0_1_ = 1;
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)local_48);
  local_4 = (uint)local_4._1_3_ << 8;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    _free(local_44);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  FUN_0056c280(0x1a - (uint)(param_1 != 1),(_String_base *)&local_2c);
  (**(code **)(*piVar3 + 300))(&local_2c);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_10;
  FUN_00616e15(local_14 ^ local_4);
  return;
}



void __thiscall cls_0x424a70::meth_0x426f80(cls_0x424a70 *this)

{
  uint unaff_retaddr;
  undefined4 local_34;
  undefined4 local_30;
  _String_base local_2c [4];
  void *local_28;
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062cac8;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00426bf0((void *)this->mbr_0xc,(cls_0x50db20 *)local_2c,&local_34,&local_30);
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)(this->mbr_0x4 + 0x804),local_2c,0,0xffffffff);
  *(undefined4 *)(this->mbr_0x4 + 0xcc) = local_34;
  *(undefined4 *)(this->mbr_0x4 + 0xd0) = local_30;
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}



void __thiscall cls_0x424a70::meth_0x427040(cls_0x424a70 *this,int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int *piVar4;
  char *local_50 [4];
  char *local_40;
  char *local_3c;
  char *local_38;
  VFX_Parameter__vftable_673a20 *local_34;
  dword local_30;
  dword local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  dword local_1c;
  dword local_18;
  dword local_14;
  void *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062c938;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(int *)(this->mbr_0x4 + 0xa0 + param_1 * 4) = param_2;
  local_50[1] = "lblPE";
  local_3c = "lblAG";
  local_38 = "lblLK";
  local_50[0] = "lblST";
  local_50[2] = "lblEN";
  local_50[3] = "lblCH";
  local_40 = "lblIN";
  pcVar2 = local_50[param_1];
  *(int *)(this->mbr_0x4 + 0x760 + param_1 * 4) = param_2;
  local_34 = (VFX_Parameter__vftable_673a20 *)0x29;
  local_30 = 0x2a;
  local_2c = 0x2b;
  local_28 = 0x2c;
  local_24 = 0x2d;
  local_20 = 0x2e;
  local_1c = 0x2f;
  local_18 = 0x30;
  local_14 = 0x31;
  local_10 = (void *)0x32;
  local_38 = (char *)0xf;
  local_3c = (char *)0x0;
  local_50[1] = "Gen_NAS";
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_50,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0;
  piVar4 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)local_50);
  local_4 = 0xffffffff;
  if ((char *)0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_50[1]);
  }
  local_38 = (char *)0xf;
  local_3c = (char *)0x0;
  local_50[1] = (char *)((uint)local_50[1] & 0xffffff00);
  (**(code **)(*piVar4 + 0x130))((&local_38)[param_2]);
  ExceptionList = local_10;
  return;
}



void __thiscall cls_0x424a70::meth_0x4271a0(cls_0x424a70 *this,int *param_1)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined3 unaff_ESI;
  bool bVar8;
  undefined local_98 [4];
  void *local_94;
  dword local_84;
  uint local_80;
  undefined local_7c [4];
  void *local_78;
  void *pvStack_6c;
  dword local_68;
  uint local_64;
  undefined local_60 [4];
  void *local_5c;
  uint uStack_58;
  undefined auStack_50 [4];
  dword local_4c;
  uint local_48;
  void *apvStack_30 [5];
  uint uStack_1c;
  void *pvStack_18;
  dword dStack_14;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062cb03;
  pvStack_c = ExceptionList;
  local_48 = 0xf;
  local_4c = 0;
  local_5c = (void *)((uint)local_5c & 0xffffff00);
  pcVar1 = "lblToolTipTitle";
  do {
    pcVar4 = pcVar1;
    pcVar1 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ExceptionList = &pvStack_c;
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_60,"lblToolTipTitle",(uint)(pcVar4 + -0x651c88));
  local_4 = 0;
  piVar2 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)local_60);
  local_4 = 0xffffffff;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    _free(local_5c);
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c = (void *)((uint)local_5c & 0xffffff00);
  local_80 = 0xf;
  local_84 = 0;
  local_94 = (void *)((uint)local_94 & 0xffffff00);
  pcVar1 = "lblToolTip";
  do {
    pcVar4 = pcVar1;
    pcVar1 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_98,"lblToolTip",(uint)(pcVar4 + -0x651c7c));
  local_4 = 1;
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)local_98);
  local_4 = 0xffffffff;
  if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
    _free(local_94);
  }
  local_80 = 0xf;
  local_64 = 0xf;
  local_84 = 0;
  local_94 = (void *)((uint)local_94 & 0xffffff00);
  local_68 = 0;
  local_78 = (void *)((uint)local_78 & 0xffffff00);
  pcVar1 = "picToolTip";
  do {
    pcVar4 = pcVar1;
    pcVar1 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_7c,"picToolTip",(uint)(pcVar4 + -0x651c70));
  local_4 = 2;
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)local_7c);
  local_4 = 0xffffffff;
  if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_78);
  }
  local_64 = 0xf;
  local_68 = 0;
  local_78 = (void *)((uint)local_78 & 0xffffff00);
  if (param_1 == (int *)0x0) {
    (**(code **)(*piVar2 + 0x54))(1);
    (**(code **)(*piVar3 + 0x54))(1);
    (**(code **)(*piVar5 + 0x54))(1);
  }
  else {
    (**(code **)(*piVar2 + 0x130))(param_1[0x33d]);
    (**(code **)(*piVar3 + 0x130))(param_1[0x335]);
    iVar6 = (**(code **)(*param_1 + 0x114))(apvStack_30);
    bVar8 = *(int *)(iVar6 + 0x14) == 0;
    if (0xf < uStack_1c) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_30[0]);
    }
    if (bVar8) {
      (**(code **)(*piVar5 + 0x54))(1);
    }
    else {
      uVar7 = (**(code **)(*param_1 + 0x114))(auStack_50);
      dStack_14 = 3;
      (**(code **)(*piVar5 + 0x130))(uVar7,0,0,0,0xbf800000,0xbf800000,1);
      apvStack_30[0] = (void *)0xffffffff;
      if (0xf < uStack_58) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_6c);
      }
      uStack_58 = 0xf;
      local_5c = (void *)0x0;
      pvStack_6c = (void *)((uint)pvStack_6c & 0xffffff00);
      (**(code **)(*piVar5 + 0x54))(0);
    }
    (**(code **)(*(int *)CONCAT13(bVar8,unaff_ESI) + 0x54))(0);
    (**(code **)(*piVar3 + 0x54))(0);
  }
  ExceptionList = pvStack_18;
  return;
}



void __thiscall cls_0x424a70::meth_0x427480(cls_0x424a70 *this,int param_1)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  undefined local_28 [4];
  void *local_24;
  dword local_14;
  void *local_10;
  VFX_Parameter__vftable_673a20 *pVStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062ca58;
  pVStack_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  ExceptionList = &pVStack_c;
  pcVar2 = FUN_004249e0(this,param_1);
  local_10 = (void *)0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
  local_4 = 0;
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)local_28);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = (void *)0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  uVar4 = FUN_0040a0e0((void *)this->mbr_0x4,param_1);
  if ((char)uVar4 == '\0') {
    (**(code **)(*piVar3 + 0x168))(0xff008000);
  }
  else {
    (**(code **)(*piVar3 + 0x168))(0xff4f6064);
  }
  ExceptionList = local_10;
  return;
}



void __thiscall cls_0x424a70::meth_0x427560(cls_0x424a70 *this)

{
  char cVar1;
  undefined uVar2;
  int *piVar3;
  int *piVar4;
  uint unaff_retaddr;
  undefined **ppuVar6;
  int **local_f8;
  int local_f4;
  undefined local_f0 [4];
  void *local_ec;
  dword local_dc;
  dword local_d8;
  undefined local_d4 [4];
  void *local_d0;
  dword local_c0;
  uint local_bc;
  char *local_b8;
  char *local_b4;
  int *local_b0;
  char *local_ac;
  char *local_a8;
  dword local_a4;
  char *local_a0;
  char *local_9c;
  dword local_98;
  char *local_94;
  char *local_90;
  dword local_8c;
  char *local_88;
  char *local_84;
  undefined4 local_80;
  char *local_7c;
  char *local_78;
  undefined4 local_74;
  char *local_70;
  char *local_6c;
  undefined4 local_68;
  char *local_64;
  char *local_60;
  undefined4 local_5c;
  char *local_58;
  char *local_54;
  undefined4 local_50;
  char *local_4c;
  char *local_48;
  undefined4 local_44;
  char *local_40;
  char *local_3c;
  undefined4 local_38;
  char *local_34;
  char *local_30;
  undefined4 local_2c;
  char *local_28;
  char *local_24;
  undefined4 local_20;
  char *local_1c;
  char *local_18;
  dword local_14;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  int iVar5;
  
  puStack_8 = &LAB_0062cb26;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_f8 = &local_b0;
  local_b8 = "lblDerivedStat1a";
  local_b4 = "lblDerivedStat1b";
  local_b0 = (int *)0x0;
  local_ac = "lblDerivedStat2a";
  local_a8 = "lblDerivedStat2b";
  local_a4 = 1;
  local_a0 = "lblDerivedStat3a";
  local_9c = "lblDerivedStat3b";
  local_98 = 2;
  local_94 = "lblDerivedStat4a";
  local_90 = "lblDerivedStat4b";
  local_8c = 3;
  local_88 = "lblDerivedStat5a";
  local_84 = "lblDerivedStat5b";
  local_80 = 4;
  local_7c = "lblDerivedStat6a";
  local_78 = "lblDerivedStat6b";
  local_74 = 5;
  local_70 = "lblDerivedStat7a";
  local_6c = "lblDerivedStat7b";
  local_68 = 6;
  local_64 = "lblDerivedStat8a";
  local_60 = "lblDerivedStat8b";
  local_5c = 7;
  local_58 = "lblDerivedStat9a";
  local_54 = "lblDerivedStat9b";
  local_50 = 8;
  local_4c = "lblDerivedStat10a";
  local_48 = "lblDerivedStat10b";
  local_44 = 0xc;
  local_40 = "lblDerivedStat11a";
  local_3c = "lblDerivedStat11b";
  local_38 = 0xd;
  local_34 = "lblDerivedStat12a";
  local_30 = "lblDerivedStat12b";
  local_2c = 9;
  local_28 = "lblDerivedStat13a";
  local_24 = "lblDerivedStat13b";
  local_20 = 10;
  local_1c = "lblDerivedStat14a";
  local_18 = "lblDerivedStat14b";
  local_14 = 0xb;
  local_f4 = 0xe;
  ExceptionList = &pvStack_c;
  do {
    local_4 = 0xffffffff;
    piVar4 = local_f8[-1];
    local_bc = 0xf;
    local_c0 = 0;
    local_d0 = (void *)((uint)local_d0 & 0xffffff00);
    piVar3 = piVar4;
    do {
      cVar1 = *(char *)piVar3;
      piVar3 = (int *)((int)piVar3 + 1);
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_d4,(char *)piVar4,(int)piVar3 - (int)((int)piVar4 + 1));
    local_4 = 0;
    piVar4 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)local_d4);
    local_4 = 0xffffffff;
    if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
      _free(local_d0);
    }
    local_bc = 0xf;
    local_c0 = 0;
    local_d0 = (void *)((uint)local_d0 & 0xffffff00);
    if (piVar4 != (int *)0x0) {
      piVar3 = *local_f8;
      if ((GameCreature *)this->mbr_0x4 == (GameCreature *)0x0) {
        uVar2 = 0;
      }
      else {
        iVar5 = GameCreature::GetDerivedAttribute((GameCreature *)this->mbr_0x4,piVar3);
        uVar2 = (undefined)iVar5;
      }
      local_d8 = 0xf;
      local_dc = 0;
      local_ec = (void *)((uint)local_ec & 0xffffff00);
      local_4 = 1;
      switch(piVar3) {
      case (int *)0x3:
      case (int *)0x9:
      case (int *)0xa:
      case (int *)0xb:
        ppuVar6 = (undefined **)&DAT_00651cac;
        break;
      default:
        ppuVar6 = (undefined **)&DAT_00650668;
        break;
      case (int *)0x6:
        ppuVar6 = &PTR_LAB_00651c98;
        break;
      case (int *)0x8:
        ppuVar6 = (undefined **)&DAT_00651ca4;
        break;
      case (int *)0xc:
        ppuVar6 = (undefined **)&DAT_00651c9c;
      }
      FUN_004a1a30((cls_0x50db20 *)local_f0,(byte *)ppuVar6,uVar2);
      (**(code **)(*piVar4 + 300))(local_f0);
      local_4 = 0xffffffff;
      if (0xf < local_d8) {
                    /* WARNING: Subroutine does not return */
        _free(local_ec);
      }
      local_d8 = 0xf;
      local_dc = 0;
      local_ec = (void *)((uint)local_ec & 0xffffff00);
    }
    local_4 = 0xffffffff;
    local_f8 = local_f8 + 3;
    local_f4 = local_f4 + -1;
    if (local_f4 == 0) {
      ExceptionList = pvStack_c;
      FUN_00616e15(local_10 ^ unaff_retaddr);
      return;
    }
  } while( true );
}



void __thiscall cls_0x424a70::meth_0x427910(cls_0x424a70 *this)

{
  undefined4 *puVar1;
  char *pcVar2;
  char *pcVar3;
  int *piVar4;
  undefined uVar5;
  uint unaff_retaddr;
  undefined local_48 [4];
  void *local_44;
  dword local_34;
  uint local_30;
  undefined local_2c [4];
  void *local_28;
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062cb40;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  local_30 = 0xf;
  local_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  pcVar2 = "lblHP2";
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ExceptionList = &local_c;
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_48,"lblHP2",(uint)(pcVar3 + -0x651eec));
  local_4 = 0;
  piVar4 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)local_48);
  local_4 = 0xffffffff;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    _free(local_44);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  if (piVar4 != (int *)0x0) {
    puVar1 = (undefined4 *)this->mbr_0x4;
    uVar5 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      uVar5 = (undefined)puVar1[9];
      (**(code **)*puVar1)();
    }
    local_14 = 0xf;
    local_18 = 0;
    local_28 = (void *)((uint)local_28 & 0xffffff00);
    local_4 = 1;
    FUN_004a1a30((cls_0x50db20 *)local_2c,(byte *)"%d/%d",uVar5);
    (**(code **)(*piVar4 + 300))(local_2c);
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}



void __thiscall cls_0x424a70::meth_0x427a40(cls_0x424a70 *this)

{
  dword dVar1;
  char *pcVar2;
  int *piVar3;
  char *pcVar4;
  uint unaff_retaddr;
  undefined uVar5;
  void *local_74;
  dword local_70;
  dword local_6c;
  dword local_68;
  dword local_64;
  uint local_60;
  dword local_5c;
  VFX_Parameter__vftable_673a20 *local_58;
  VFX_Parameter__vftable_673a20 *local_54;
  VFX_Parameter__vftable_673a20 *local_50;
  VFX_Parameter__vftable_673a20 *local_4c;
  VFX_Parameter__vftable_673a20 *local_48;
  VFX_Parameter__vftable_673a20 *local_44;
  VFX_Parameter__vftable_673a20 *pVStack_40;
  VFX_Parameter__vftable_673a20 *pVStack_3c;
  VFX_Parameter__vftable_673a20 *pVStack_38;
  VFX_Parameter__vftable_673a20 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  uStack_8 = &LAB_0062cbb8;
  uStack_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  ExceptionList = &uStack_c;
  GameActionEquip::meth_0x40a670((GameActionEquip *)this->mbr_0x4);
  dVar1 = this->mbr_0x4;
  local_70 = *(dword *)(dVar1 + 0x7c8);
  local_6c = *(dword *)(dVar1 + 0x7cc);
  local_68 = *(dword *)(dVar1 + 2000);
  local_64 = *(dword *)(dVar1 + 0x7d4);
  local_60 = *(uint *)(dVar1 + 0x7dc);
  local_5c = *(dword *)(dVar1 + 0x7b0);
  local_58 = *(VFX_Parameter__vftable_673a20 **)(dVar1 + 0x7b4);
  local_54 = *(VFX_Parameter__vftable_673a20 **)(dVar1 + 0x7b8);
  local_50 = *(VFX_Parameter__vftable_673a20 **)(dVar1 + 0x7bc);
  local_4c = *(VFX_Parameter__vftable_673a20 **)(dVar1 + 0x7c4);
  local_74 = *(void **)(dVar1 + 0x7c0);
  local_30 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_34 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_44 = (VFX_Parameter__vftable_673a20 *)((uint)local_44 & 0xffffff00);
  local_4 = 0;
  local_14 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_18 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_28 = (VFX_Parameter__vftable_673a20 *)((uint)local_28 & 0xffffff00);
  pcVar2 = "lblHeadBallisticValue";
  do {
    pcVar4 = pcVar2;
    pcVar2 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_2c,"lblHeadBallisticValue",(uint)(pcVar4 + -0x651fdc));
  local_4._0_1_ = 1;
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)&local_2c);
  local_4 = (uint)local_4._1_3_ << 8;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  local_14 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_18 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_28 = (VFX_Parameter__vftable_673a20 *)((uint)local_28 & 0xffffff00);
  FUN_004a1a30((cls_0x50db20 *)&local_48,&DAT_00650668,(char)local_70);
  uVar5 = SUB41(&local_48,0);
  (**(code **)(*piVar3 + 300))();
  local_18 = (VFX_Parameter__vftable_673a20 *)0xf;
  uStack_1c = (VFX_Parameter__vftable_673a20 *)0x0;
  local_2c = (VFX_Parameter__vftable_673a20 *)((uint)local_2c & 0xffffff00);
  pcVar2 = "lblHeadBiologicalValue";
  do {
    pcVar4 = pcVar2;
    pcVar2 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_30,"lblHeadBiologicalValue",(uint)(pcVar4 + -0x651fc4));
  uStack_8._0_1_ = 2;
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)&local_30);
  uStack_8 = (undefined *)((uint)uStack_8._1_3_ << 8);
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_18 = (VFX_Parameter__vftable_673a20 *)0xf;
  uStack_1c = (VFX_Parameter__vftable_673a20 *)0x0;
  local_2c = (VFX_Parameter__vftable_673a20 *)((uint)local_2c & 0xffffff00);
  FUN_004a1a30((cls_0x50db20 *)&local_4c,&DAT_00650668,(char)local_70);
  (**(code **)(*piVar3 + 300))(&local_4c);
  uStack_1c = (VFX_Parameter__vftable_673a20 *)0xf;
  uStack_20 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_30 = (VFX_Parameter__vftable_673a20 *)((uint)local_30 & 0xffffff00);
  pcVar2 = "lblHeadElectricalValue";
  do {
    pcVar4 = pcVar2;
    pcVar2 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_34,"lblHeadElectricalValue",(uint)(pcVar4 + -0x651fac));
  uStack_c._0_1_ = 3;
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)&local_34);
  uStack_c = (void *)((uint)uStack_c._1_3_ << 8);
  if ((VFX_Parameter__vftable_673a20 *)0xf < uStack_1c) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  uStack_1c = (VFX_Parameter__vftable_673a20 *)0xf;
  uStack_20 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_30 = (VFX_Parameter__vftable_673a20 *)((uint)local_30 & 0xffffff00);
  FUN_004a1a30((cls_0x50db20 *)&local_50,&DAT_00650668,(char)local_70);
  (**(code **)(*piVar3 + 300))(&local_50);
  uStack_20 = (VFX_Parameter__vftable_673a20 *)0xf;
  uStack_24 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_34 = (VFX_Parameter__vftable_673a20 *)((uint)local_34 & 0xffffff00);
  pcVar2 = "lblHeadEMPValue";
  do {
    pcVar4 = pcVar2;
    pcVar2 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&pVStack_38,"lblHeadEMPValue",(uint)(pcVar4 + -0x651f9c));
  local_10._0_1_ = 4;
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)&pVStack_38);
  local_10 = (VFX_Parameter__vftable_673a20 *)((uint)local_10._1_3_ << 8);
  if ((VFX_Parameter__vftable_673a20 *)0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
    _free(local_34);
  }
  uStack_20 = (VFX_Parameter__vftable_673a20 *)0xf;
  uStack_24 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_34 = (VFX_Parameter__vftable_673a20 *)((uint)local_34 & 0xffffff00);
  FUN_004a1a30((cls_0x50db20 *)&local_54,&DAT_00650668,(char)local_70);
  (**(code **)(*piVar3 + 300))(&local_54);
  uStack_24 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_28 = (VFX_Parameter__vftable_673a20 *)0x0;
  pVStack_38 = (VFX_Parameter__vftable_673a20 *)((uint)pVStack_38 & 0xffffff00);
  pcVar2 = "lblHeadHeatValue";
  do {
    pcVar4 = pcVar2;
    pcVar2 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&pVStack_3c,"lblHeadHeatValue",(uint)(pcVar4 + -0x651f88));
  local_14._0_1_ = 5;
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)&pVStack_3c);
  local_14 = (VFX_Parameter__vftable_673a20 *)((uint)local_14._1_3_ << 8);
  if ((VFX_Parameter__vftable_673a20 *)0xf < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pVStack_38);
  }
  uStack_24 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_28 = (VFX_Parameter__vftable_673a20 *)0x0;
  pVStack_38 = (VFX_Parameter__vftable_673a20 *)((uint)pVStack_38 & 0xffffff00);
  FUN_004a1a30((cls_0x50db20 *)&local_58,&DAT_00650668,(char)local_70);
  (**(code **)(*piVar3 + 300))(&local_58);
  local_28 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_2c = (VFX_Parameter__vftable_673a20 *)0x0;
  pVStack_3c = (VFX_Parameter__vftable_673a20 *)((uint)pVStack_3c & 0xffffff00);
  pcVar2 = "lblHeadNormalValue";
  do {
    pcVar4 = pcVar2;
    pcVar2 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&pVStack_40,"lblHeadNormalValue",(uint)(pcVar4 + -0x651f74));
  local_18._0_1_ = 6;
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)&pVStack_40);
  local_18 = (VFX_Parameter__vftable_673a20 *)((uint)local_18._1_3_ << 8);
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(pVStack_3c);
  }
  local_28 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_2c = (VFX_Parameter__vftable_673a20 *)0x0;
  pVStack_3c = (VFX_Parameter__vftable_673a20 *)((uint)pVStack_3c & 0xffffff00);
  FUN_004a1a30((cls_0x50db20 *)&local_5c,&DAT_00650668,uVar5);
  (**(code **)(*piVar3 + 300))(&local_5c);
  local_2c = (VFX_Parameter__vftable_673a20 *)0xf;
  local_30 = (VFX_Parameter__vftable_673a20 *)0x0;
  pVStack_40 = (VFX_Parameter__vftable_673a20 *)((uint)pVStack_40 & 0xffffff00);
  pcVar2 = "lblBodyBallisticValue";
  do {
    pcVar4 = pcVar2;
    pcVar2 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_44,"lblBodyBallisticValue",(uint)(pcVar4 + -0x651f5c));
  uStack_1c._0_1_ = 7;
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)&local_44);
  uStack_1c = (VFX_Parameter__vftable_673a20 *)((uint)uStack_1c._1_3_ << 8);
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(pVStack_40);
  }
  local_2c = (VFX_Parameter__vftable_673a20 *)0xf;
  local_30 = (VFX_Parameter__vftable_673a20 *)0x0;
  pVStack_40 = (VFX_Parameter__vftable_673a20 *)((uint)pVStack_40 & 0xffffff00);
  FUN_004a1a30((cls_0x50db20 *)&local_60,&DAT_00650668,(char)local_74);
  uVar5 = SUB41(&local_60,0);
  (**(code **)(*piVar3 + 300))();
  local_30 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_34 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_44 = (VFX_Parameter__vftable_673a20 *)((uint)local_44 & 0xffffff00);
  pcVar2 = "lblBodyBiologicalValue";
  do {
    pcVar4 = pcVar2;
    pcVar2 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_48,"lblBodyBiologicalValue",(uint)(pcVar4 + -0x651f44));
  uStack_20._0_1_ = 8;
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)&local_48);
  uStack_20 = (VFX_Parameter__vftable_673a20 *)((uint)uStack_20._1_3_ << 8);
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    _free(local_44);
  }
  local_30 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_34 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_44 = (VFX_Parameter__vftable_673a20 *)((uint)local_44 & 0xffffff00);
  FUN_004a1a30((cls_0x50db20 *)&local_64,&DAT_00650668,(char)local_74);
  (**(code **)(*piVar3 + 300))(&local_64);
  local_34 = (VFX_Parameter__vftable_673a20 *)0xf;
  pVStack_38 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_48 = (VFX_Parameter__vftable_673a20 *)((uint)local_48 & 0xffffff00);
  pcVar2 = "lblBodyElectricalValue";
  do {
    pcVar4 = pcVar2;
    pcVar2 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_4c,"lblBodyElectricalValue",(uint)(pcVar4 + -0x651f2c));
  uStack_24._0_1_ = 9;
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)&local_4c);
  uStack_24 = (VFX_Parameter__vftable_673a20 *)((uint)uStack_24._1_3_ << 8);
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    _free(local_48);
  }
  local_34 = (VFX_Parameter__vftable_673a20 *)0xf;
  pVStack_38 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_48 = (VFX_Parameter__vftable_673a20 *)((uint)local_48 & 0xffffff00);
  FUN_004a1a30((cls_0x50db20 *)&local_68,&DAT_00650668,(char)local_74);
  (**(code **)(*piVar3 + 300))(&local_68);
  pVStack_38 = (VFX_Parameter__vftable_673a20 *)0xf;
  pVStack_3c = (VFX_Parameter__vftable_673a20 *)0x0;
  local_4c = (VFX_Parameter__vftable_673a20 *)((uint)local_4c & 0xffffff00);
  pcVar2 = "lblBodyEMPValue";
  do {
    pcVar4 = pcVar2;
    pcVar2 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_50,"lblBodyEMPValue",(uint)(pcVar4 + -0x651f1c));
  local_28._0_1_ = 10;
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)&local_50);
  local_28 = (VFX_Parameter__vftable_673a20 *)((uint)local_28._1_3_ << 8);
  if ((VFX_Parameter__vftable_673a20 *)0xf < pVStack_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  pVStack_38 = (VFX_Parameter__vftable_673a20 *)0xf;
  pVStack_3c = (VFX_Parameter__vftable_673a20 *)0x0;
  local_4c = (VFX_Parameter__vftable_673a20 *)((uint)local_4c & 0xffffff00);
  FUN_004a1a30((cls_0x50db20 *)&local_6c,&DAT_00650668,(char)local_74);
  (**(code **)(*piVar3 + 300))(&local_6c);
  pVStack_3c = (VFX_Parameter__vftable_673a20 *)0xf;
  pVStack_40 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_50 = (VFX_Parameter__vftable_673a20 *)((uint)local_50 & 0xffffff00);
  pcVar2 = "lblBodyHeatValue";
  do {
    pcVar4 = pcVar2;
    pcVar2 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_54,"lblBodyHeatValue",(uint)(pcVar4 + -0x651f08));
  local_2c._0_1_ = 0xb;
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)&local_54);
  local_2c = (VFX_Parameter__vftable_673a20 *)((uint)local_2c._1_3_ << 8);
  if ((VFX_Parameter__vftable_673a20 *)0xf < pVStack_3c) {
                    /* WARNING: Subroutine does not return */
    _free(local_50);
  }
  pVStack_3c = (VFX_Parameter__vftable_673a20 *)0xf;
  pVStack_40 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_50 = (VFX_Parameter__vftable_673a20 *)((uint)local_50 & 0xffffff00);
  FUN_004a1a30((cls_0x50db20 *)&local_70,&DAT_00650668,(char)local_74);
  (**(code **)(*piVar3 + 300))(&local_70);
  pVStack_40 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_44 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_54 = (VFX_Parameter__vftable_673a20 *)((uint)local_54 & 0xffffff00);
  pcVar2 = "lblBodyNormalValue";
  do {
    pcVar4 = pcVar2;
    pcVar2 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_58,"lblBodyNormalValue",(uint)(pcVar4 + -0x651ef4));
  local_30._0_1_ = 0xc;
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)&local_58);
  local_30 = (VFX_Parameter__vftable_673a20 *)((uint)local_30._1_3_ << 8);
  if ((VFX_Parameter__vftable_673a20 *)0xf < pVStack_40) {
                    /* WARNING: Subroutine does not return */
    _free(local_54);
  }
  pVStack_40 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_44 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_54 = (VFX_Parameter__vftable_673a20 *)((uint)local_54 & 0xffffff00);
  FUN_004a1a30((cls_0x50db20 *)&local_74,&DAT_00650668,uVar5);
  (**(code **)(*piVar3 + 300))(&local_74);
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free(local_74);
  }
  ExceptionList = pVStack_3c;
  FUN_00616e15((uint)pVStack_40 ^ (uint)local_30);
  return;
}



void __thiscall cls_0x424a70::meth_0x428250(cls_0x424a70 *this,int param_1)

{
  char cVar1;
  dword dVar2;
  ModelInstance *this_00;
  bool bVar3;
  bool bVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  _String_base *p_Var8;
  char *pcVar9;
  int *piVar10;
  undefined4 ***pppuVar11;
  undefined4 *puVar12;
  undefined *puVar13;
  undefined4 ***pppuVar14;
  uint unaff_retaddr;
  undefined4 ***local_60 [4];
  dword local_50;
  uint local_4c;
  _String_base local_48 [4];
  void *local_44;
  dword local_34;
  uint local_30;
  undefined local_2c [4];
  void *local_28;
  dword local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062cc06;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  iVar6 = Gregorian::Get_mbr_0x2c((Gregorian *)this->mbr_0x38);
  this->mbr_0xec = iVar6 + param_1;
  meth_0x425020(this);
  dVar2 = this->mbr_0x4;
  iVar6 = *(int *)(*(int *)(dVar2 + 4) + 4);
  iVar7 = dVar2 + iVar6;
  if (*(int *)(dVar2 + 0x164 + iVar6) == 0) {
    if (*(uint *)(iVar7 + 0x234) < 0x10) {
      puVar12 = (undefined4 *)(iVar7 + 0x220);
    }
    else {
      puVar12 = *(undefined4 **)(iVar7 + 0x220);
    }
    Entity::meth_0x54dc50((Entity *)(iVar7 + 4),puVar12,1);
  }
  this_00 = *(ModelInstance **)(*(int *)(*(int *)(this->mbr_0x4 + 4) + 4) + 0x164 + this->mbr_0x4);
  if (this_00 != (ModelInstance *)0x0) {
    if ((int)this->mbr_0xec < 0) {
      local_30 = 0xf;
      local_34 = 0;
      local_44 = (void *)((uint)local_44 & 0xffffff00);
      pcVar5 = "";
      do {
        pcVar9 = pcVar5;
        pcVar5 = pcVar9 + 1;
      } while (*pcVar9 != '\0');
      ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_48,"",(uint)(pcVar9 + -0x64d7d8));
      p_Var8 = local_48;
      local_4 = 1;
      bVar4 = false;
      bVar3 = true;
    }
    else {
      p_Var8 = (_String_base *)
               ModelInstance::meth_0x566fb0
                         (this_00,local_2c,(undefined4 *)0x0,this->mbr_0xec,(char *)0x0);
      local_4 = 0;
      bVar4 = true;
      bVar3 = false;
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = (undefined4 ***)((uint)local_60[0] & 0xffffff00);
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&stack0xffffff9c,p_Var8,0,0xffffffff);
    if (bVar3) {
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        _free(local_44);
      }
      local_30 = 0xf;
      local_34 = 0;
      local_44 = (void *)((uint)local_44 & 0xffffff00);
    }
    local_4 = 3;
    if (bVar4) {
      if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
        _free(local_28);
      }
      local_14 = 0xf;
      local_18 = 0;
      local_28 = (void *)((uint)local_28 & 0xffffff00);
    }
    dVar2 = this->mbr_0x4;
    iVar6 = 0;
    piVar10 = &DAT_006f2b34;
    do {
      if (*piVar10 == *(int *)(dVar2 + 200)) {
        if (*(int *)(dVar2 + 0xd0) == 1) {
          puVar13 = (&PTR_s_PCFemale_CRT_006f2b3c)[iVar6 * 4];
        }
        else {
          puVar13 = (&PTR_s_Default_PC_CRT_006f2b40)[iVar6 * 4];
        }
        if (puVar13 != (undefined *)0x0) {
          pppuVar14 = local_60[0];
          if (local_4c < 0x10) {
            pppuVar14 = local_60;
          }
          if (pppuVar14 == (undefined4 ***)0x0) {
            pppuVar14 = (undefined4 ***)&DAT_0064d7d8;
          }
          pppuVar11 = pppuVar14;
          do {
            cVar1 = *(char *)pppuVar11;
            pppuVar11 = (undefined4 ***)((int)pppuVar11 + 1);
          } while (cVar1 != '\0');
          ::cls_0x50db20::meth_0x401bd0
                    ((cls_0x50db20 *)(*(int *)(*(int *)(dVar2 + 4) + 4) + dVar2 + 0x238),
                     (char *)pppuVar14,(int)pppuVar11 - ((int)pppuVar14 + 1));
          pppuVar14 = local_60[0];
          if (local_4c < 0x10) {
            pppuVar14 = local_60;
          }
          ModelInstance::SetSocketModel(this_00,0,pppuVar14);
        }
        break;
      }
      piVar10 = piVar10 + 4;
      iVar6 = iVar6 + 1;
    } while ((int)piVar10 < 0x6f2b64);
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      _free(local_60[0]);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall cls_0x424a70::meth_0x4284b0(cls_0x424a70 *this,int param_1)

{
  dword dVar1;
  ModelInstance *this_00;
  int iVar2;
  uint uVar3;
  undefined4 ****ppppuVar4;
  uint unaff_retaddr;
  undefined local_2c [4];
  undefined4 ****appppuStack_28 [5];
  uint uStack_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0062cac8;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  iVar2 = Gregorian::Get_mbr_0x2c((Gregorian *)this->mbr_0x3c);
  this->mbr_0xf0 = iVar2 + param_1;
  meth_0x425040(this);
  dVar1 = this->mbr_0x4;
  if ((dVar1 != 0) &&
     (this_00 = *(ModelInstance **)(*(int *)(*(int *)(dVar1 + 4) + 4) + 0x164 + dVar1),
     this_00 != (ModelInstance *)0x0)) {
    uVar3 = meth_0x424d40(this);
    ModelInstance::meth_0x426540
              (this_00,local_2c,uVar3,*(int *)(this->mbr_0xfc + this->mbr_0xf0 * 4));
    uStack_4 = 0;
    ppppuVar4 = appppuStack_28[0];
    if (uStack_14 < 0x10) {
      ppppuVar4 = appppuStack_28;
    }
    (*this_00->vftptr_0x0->virt_meth_0x565810_4)
              (this_00,2,*(uint *)(this->mbr_0xfc + this->mbr_0xf0 * 4),ppppuVar4);
    ModelInstance::meth_0x564280(this_00,0);
    ModelInstance::meth_0x564340(this_00,0xf0f0f0);
    ModelInstance::meth_0x5642e0(this_00,1);
    if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
      _free(appppuStack_28[0]);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall cls_0x424a70::meth_0x4285d0(cls_0x424a70 *this,int param_1)

{
  dword dVar1;
  ModelInstance *this_00;
  int iVar2;
  uint uVar3;
  undefined4 ****ppppuVar4;
  uint unaff_retaddr;
  undefined local_2c [4];
  undefined4 ****appppuStack_28 [5];
  uint uStack_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0062cac8;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  iVar2 = Gregorian::Get_mbr_0x2c((Gregorian *)this->mbr_0x40);
  this->mbr_0xf4 = iVar2 + param_1;
  meth_0x425090(this);
  dVar1 = this->mbr_0x4;
  if ((dVar1 != 0) &&
     (this_00 = *(ModelInstance **)(*(int *)(*(int *)(dVar1 + 4) + 4) + 0x164 + dVar1),
     this_00 != (ModelInstance *)0x0)) {
    uVar3 = meth_0x424d50(this);
    ModelInstance::meth_0x426540
              (this_00,local_2c,uVar3,*(int *)(this->mbr_0x10c + this->mbr_0xf4 * 4));
    uStack_4 = 0;
    ppppuVar4 = appppuStack_28[0];
    if (uStack_14 < 0x10) {
      ppppuVar4 = appppuStack_28;
    }
    (*this_00->vftptr_0x0->virt_meth_0x565810_4)
              (this_00,3,*(uint *)(this->mbr_0x10c + this->mbr_0xf4 * 4),ppppuVar4);
    ModelInstance::meth_0x564280(this_00,0);
    ModelInstance::meth_0x564340(this_00,0xf0f0f0);
    ModelInstance::meth_0x5642e0(this_00,1);
    if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
      _free(appppuStack_28[0]);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall cls_0x424a70::meth_0x4286f0(cls_0x424a70 *this,int param_1)

{
  dword dVar1;
  ModelInstance *this_00;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int extraout_EDX;
  uint unaff_retaddr;
  undefined local_2c [4];
  undefined4 ****appppuStack_28 [5];
  uint uStack_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0062cac8;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  iVar3 = Gregorian::Get_mbr_0x2c((Gregorian *)this->mbr_0x44);
  this->mbr_0x118 = iVar3 + param_1;
  meth_0x4250e0(this);
  if ((((-1 < (int)this->mbr_0x118) && ((int)this->mbr_0x118 < 10)) &&
      (dVar1 = this->mbr_0x4, dVar1 != 0)) &&
     (this_00 = *(ModelInstance **)(*(int *)(*(int *)(dVar1 + 4) + 4) + 0x164 + dVar1),
     this_00 != (ModelInstance *)0x0)) {
    uVar4 = meth_0x424d60(this);
    uVar2 = (&DAT_006f29b8)[extraout_EDX * 2];
    ModelInstance::meth_0x426540(this_00,local_2c,uVar4,uVar2);
    uStack_4 = 0;
    if (uStack_14 < 0x10) {
      appppuStack_28[0] = appppuStack_28;
    }
    (*this_00->vftptr_0x0->virt_meth_0x565810_4)(this_00,4,uVar2,appppuStack_28[0]);
    ModelInstance::meth_0x564280(this_00,0);
    ModelInstance::meth_0x564340(this_00,0xf0f0f0);
    ModelInstance::meth_0x5642e0(this_00,1);
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_2c);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall
cls_0x424a70::meth_0x428b60(cls_0x424a70 *this,undefined4 param_1,undefined4 param_2,uint param_3)

{
  dword dVar1;
  ModelInstance *this_00;
  char *pcVar2;
  undefined3 uVar3;
  undefined3 uVar4;
  char *pcVar5;
  int iVar6;
  _String_base *p_Var7;
  cls_0x50db20 *pcVar8;
  uint uVar9;
  uint unaff_retaddr;
  int iVar10;
  _String_base a_Stack_9c [4];
  void *local_98;
  dword local_88;
  dword local_84;
  undefined local_80 [32];
  void *local_60;
  dword local_50;
  uint local_4c;
  cls_0x4d8d70 local_48;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined local_4;
  undefined3 uStack_3;
  
  local_4 = 0xff;
  uStack_3 = 0xffffff;
  puStack_8 = &LAB_0062ccd3;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  dVar1 = this->mbr_0x4;
  if ((dVar1 != 0) &&
     (this_00 = *(ModelInstance **)(*(int *)(*(int *)(dVar1 + 4) + 4) + 0x164 + dVar1),
     this_00 != (ModelInstance *)0x0)) {
    pcVar2 = "";
    do {
      pcVar5 = pcVar2;
      pcVar2 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    ExceptionList = &local_c;
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)(dVar1 + 0x47c),"",(uint)(pcVar5 + -0x64d7d8));
    pcVar2 = "";
    do {
      pcVar5 = pcVar2;
      pcVar2 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)(this->mbr_0x4 + 0x498),"",(uint)(pcVar5 + -0x64d7d8));
    pcVar2 = "";
    do {
      pcVar5 = pcVar2;
      pcVar2 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)(this->mbr_0x4 + 0x4b4),"",(uint)(pcVar5 + -0x64d7d8));
    pcVar2 = "";
    do {
      pcVar5 = pcVar2;
      pcVar2 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)(this->mbr_0x4 + 0x4d0),"",(uint)(pcVar5 + -0x64d7d8));
    pcVar2 = "";
    do {
      pcVar5 = pcVar2;
      pcVar2 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)(this->mbr_0x4 + 0x4ec),"",(uint)(pcVar5 + -0x64d7d8));
    pcVar2 = "";
    do {
      pcVar5 = pcVar2;
      pcVar2 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)(this->mbr_0x4 + 0x508),"",(uint)(pcVar5 + -0x64d7d8));
    pcVar2 = "";
    do {
      pcVar5 = pcVar2;
      pcVar2 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)(this->mbr_0x4 + 0x524),"",(uint)(pcVar5 + -0x64d7d8));
    pcVar2 = "";
    do {
      pcVar5 = pcVar2;
      pcVar2 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)(this->mbr_0x4 + 0x540),"",(uint)(pcVar5 + -0x64d7d8));
    local_4c = 0xf;
    local_50 = 0;
    local_60 = (void *)((uint)local_60 & 0xffffff00);
    local_84 = 0xf;
    local_88 = 0;
    local_98 = (void *)((uint)local_98 & 0xffffff00);
    uStack_3 = 0;
    uVar4 = uStack_3;
    local_4 = 1;
    uStack_3 = 0;
    uVar3 = uVar4;
    if ((-1 < (int)this->mbr_0x120) && (uVar3 = uStack_3, (int)this->mbr_0x120 < 6)) {
      iVar10 = *(int *)(this->mbr_0xfc + this->mbr_0xf0 * 4);
      if (-1 < iVar10) {
        iVar6 = FUN_00583d60(DAT_0070c528,(cls_0x50db20 *)local_80,(undefined4 *)0x2,iVar10);
        local_4 = 2;
        p_Var7 = (_String_base *)
                 FUN_00583a60(DAT_0070c528,(cls_0x50db20 *)&local_48,(undefined4 *)0x2);
        local_4 = 3;
        pcVar8 = FUN_00425d70((cls_0x50db20 *)&local_48.mbr_0x1c,p_Var7,iVar6);
        local_4 = 4;
        ::cls_0x50db20::meth_0x401b20
                  ((cls_0x50db20 *)(local_80 + 0x1c),(_String_base *)pcVar8,0,0xffffffff);
        cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)&local_48.mbr_0x1c);
        cls_0x4d8d70::meth_0x4b2dd0(&local_48);
        local_4 = 1;
        cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_80);
        uVar9 = meth_0x424d40(this);
        p_Var7 = (_String_base *)ModelInstance::meth_0x426540(this_00,local_80,uVar9,iVar10);
        local_4 = 5;
        ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)a_Stack_9c,p_Var7,0,0xffffffff);
        local_4 = 1;
        cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_80);
        ::cls_0x50db20::meth_0x401b20
                  ((cls_0x50db20 *)(this->mbr_0x4 + 0x47c),(_String_base *)(local_80 + 0x1c),0,
                   0xffffffff);
        ::cls_0x50db20::meth_0x401b20
                  ((cls_0x50db20 *)(this->mbr_0x4 + 0x498),a_Stack_9c,0,0xffffffff);
        uVar4 = uStack_3;
      }
      uStack_3 = uVar4;
      iVar10 = *(int *)(this->mbr_0x10c + this->mbr_0xf4 * 4);
      uVar3 = uStack_3;
      if (-1 < iVar10) {
        iVar6 = FUN_00583d60(DAT_0070c528,(cls_0x50db20 *)&local_48.mbr_0x1c,(undefined4 *)0x3,
                             iVar10);
        local_4 = 6;
        p_Var7 = (_String_base *)
                 FUN_00583a60(DAT_0070c528,(cls_0x50db20 *)&local_48,(undefined4 *)0x3);
        local_4 = 7;
        pcVar8 = FUN_00425d70((cls_0x50db20 *)local_80,p_Var7,iVar6);
        local_4 = 8;
        ::cls_0x50db20::meth_0x401b20
                  ((cls_0x50db20 *)(local_80 + 0x1c),(_String_base *)pcVar8,0,0xffffffff);
        cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_80);
        cls_0x4d8d70::meth_0x4b2dd0(&local_48);
        local_4 = 1;
        cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)&local_48.mbr_0x1c);
        uVar9 = meth_0x424d50(this);
        p_Var7 = (_String_base *)ModelInstance::meth_0x426540(this_00,local_80,uVar9,iVar10);
        local_4 = 9;
        ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)a_Stack_9c,p_Var7,0,0xffffffff);
        local_4 = 1;
        cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_80);
        ::cls_0x50db20::meth_0x401b20
                  ((cls_0x50db20 *)(this->mbr_0x4 + 0x4b4),(_String_base *)(local_80 + 0x1c),0,
                   0xffffffff);
        ::cls_0x50db20::meth_0x401b20
                  ((cls_0x50db20 *)(this->mbr_0x4 + 0x4d0),a_Stack_9c,0,0xffffffff);
        uVar3 = uStack_3;
      }
    }
    uStack_3 = uVar3;
    if ((((*(int *)(this->mbr_0x4 + 0xd0) == 0) && (dVar1 = this->mbr_0x118, -1 < (int)dVar1)) &&
        ((int)dVar1 < 10)) && (iVar10 = (&DAT_006f29b8)[dVar1 * 2], -1 < iVar10)) {
      iVar6 = FUN_00583d60(DAT_0070c528,(cls_0x50db20 *)&local_48.mbr_0x1c,(undefined4 *)0x4,iVar10)
      ;
      local_4 = 10;
      p_Var7 = (_String_base *)
               FUN_00583a60(DAT_0070c528,(cls_0x50db20 *)&local_48,(undefined4 *)0x4);
      local_4 = 0xb;
      pcVar8 = FUN_00425d70((cls_0x50db20 *)local_80,p_Var7,iVar6);
      local_4 = 0xc;
      ::cls_0x50db20::meth_0x401b20
                ((cls_0x50db20 *)(local_80 + 0x1c),(_String_base *)pcVar8,0,0xffffffff);
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_80);
      cls_0x4d8d70::meth_0x4b2dd0(&local_48);
      local_4 = 1;
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)&local_48.mbr_0x1c);
      uVar9 = meth_0x424d60(this);
      p_Var7 = (_String_base *)ModelInstance::meth_0x426540(this_00,local_80,uVar9,iVar10);
      local_4 = 0xd;
      ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)a_Stack_9c,p_Var7,0,0xffffffff);
      local_4 = 1;
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_80);
      ::cls_0x50db20::meth_0x401b20
                ((cls_0x50db20 *)(this->mbr_0x4 + 0x4ec),(_String_base *)(local_80 + 0x1c),0,
                 0xffffffff);
      ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)(this->mbr_0x4 + 0x508),a_Stack_9c,0,0xffffffff)
      ;
    }
    if (((*(int *)(this->mbr_0x4 + 0xd0) == 0) && (dVar1 = this->mbr_0x11c, -1 < (int)dVar1)) &&
       (((int)dVar1 < 8 && (iVar10 = (&DAT_006f2a08)[dVar1 * 2], -1 < iVar10)))) {
      iVar6 = FUN_00583d60(DAT_0070c528,(cls_0x50db20 *)&local_48.mbr_0x1c,(undefined4 *)0x5,iVar10)
      ;
      local_4 = 0xe;
      p_Var7 = (_String_base *)
               FUN_00583a60(DAT_0070c528,(cls_0x50db20 *)&local_48,(undefined4 *)0x5);
      local_4 = 0xf;
      pcVar8 = FUN_00425d70((cls_0x50db20 *)local_80,p_Var7,iVar6);
      local_4 = 0x10;
      ::cls_0x50db20::meth_0x401b20
                ((cls_0x50db20 *)(local_80 + 0x1c),(_String_base *)pcVar8,0,0xffffffff);
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_80);
      cls_0x4d8d70::meth_0x4b2dd0(&local_48);
      local_4 = 1;
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)&local_48.mbr_0x1c);
      uVar9 = meth_0x424d70(this);
      p_Var7 = (_String_base *)ModelInstance::meth_0x426540(this_00,local_80,uVar9,iVar10);
      local_4 = 0x11;
      ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)a_Stack_9c,p_Var7,0,0xffffffff);
      local_4 = 1;
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_80);
      ::cls_0x50db20::meth_0x401b20
                ((cls_0x50db20 *)(this->mbr_0x4 + 0x524),(_String_base *)(local_80 + 0x1c),0,
                 0xffffffff);
      ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)(this->mbr_0x4 + 0x540),a_Stack_9c,0,0xffffffff)
      ;
    }
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_98);
    }
    local_84 = 0xf;
    local_88 = 0;
    local_98 = (void *)((uint)local_98 & 0xffffff00);
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      _free(local_60);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall cls_0x424a70::meth_0x429900(cls_0x424a70 *this,int param_1,int param_2)

{
  dword dVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  dword *pdVar5;
  void *pvVar6;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  uint unaff_retaddr;
  uint in_stack_ffffffd4;
  undefined4 ***apppuStack_28 [5];
  uint uStack_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0062cac8;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  if (param_1 == 1) {
    if (param_2 == 3) {
      ExceptionList = &local_c;
      meth_0x424a70(this);
      dVar1 = DAT_0070bd90->mbr_0x2c;
      FUN_00460d60();
      piVar2 = *(int **)(*(int *)(dVar1 + 0xa0) + 4);
      CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar2 + 4) + (int)piVar2),0)
      ;
      cls_0x4b28a0::meth_0x4b4f00
                ((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,*(int *)(*piVar2 + 4) + (int)piVar2);
    }
  }
  else if ((param_1 == 2) && (param_2 == 3)) {
    if (this->mbr_0x68 < 0x10) {
      pdVar5 = &this->mbr_0x54;
    }
    else {
      pdVar5 = (dword *)this->mbr_0x54;
    }
    ExceptionList = &local_c;
    cVar3 = ResourceSystem::FileDelete(DAT_00707da8,(int *)pdVar5);
    if (cVar3 == '\0') {
      FUN_00441b30((void *)this->mbr_0x8,0x21,0,0);
    }
    else {
      if (this->mbr_0x68 < 0x10) {
        cVar3 = (char)this + 'T';
      }
      else {
        cVar3 = (char)this->mbr_0x54;
      }
      pvVar6 = (void *)ResourceSystem::FileStreamOpen(DAT_00707da8,cVar3,0);
      if (pvVar6 == (void *)0x0) {
        FUN_00441b30((void *)this->mbr_0x8,0x20,0,0);
      }
      else {
        meth_0x428b60(this,unaff_EDI,unaff_ESI,in_stack_ffffffd4);
        (**(code **)(*(int *)(*(int *)(*(int *)(this->mbr_0x4 + 4) + 4) + 4 + this->mbr_0x4) + 0xa0)
        )(pvVar6);
        cls_0x49c610::meth_0x49b1d0(DAT_00707da8,pvVar6,'\0');
        ::cls_0x50db20::cls_0x50db20
                  ((cls_0x50db20 *)&stack0xffffffd4,(_String_base *)(this->mbr_0x4 + 0x804));
        uStack_4 = 0;
        bVar4 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
        if (bVar4) {
          if (uStack_14 < 0x10) {
            apppuStack_28[0] = apppuStack_28;
          }
          FUN_005565b0((void *)DAT_0070bd90->mbr_0x18,apppuStack_28[0]);
        }
        meth_0x424a70(this);
        FUN_00580d10(*(void **)(DAT_0070bd90->mbr_0x2c + 0x7c),(undefined4 *)"RequestNewGame");
        cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)&stack0xffffffd4);
      }
    }
  }
  ExceptionList = local_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}



void __thiscall cls_0x424a70::meth_0x429ab0(cls_0x424a70 *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined extraout_DL;
  
  uVar1 = FUN_0040a0e0((void *)this->mbr_0x4,(int)param_1);
  if ((char)uVar1 != '\0') {
    FUN_0040a390((void *)this->mbr_0x4,param_1);
    meth_0x427480(this,(int)param_1);
    return;
  }
  iVar2 = FUN_00409ca0((int)(void *)this->mbr_0x4);
  if (1 < iVar2) {
    FUN_00441b30((void *)this->mbr_0x8,0xaf,1,0);
    meth_0x427480(this,(int)param_1);
    return;
  }
  FUN_0040c8f0(this->mbr_0x4,extraout_DL,(char)param_1);
  meth_0x427480(this,(int)param_1);
  return;
}



void __thiscall cls_0x424a70::meth_0x429b20(cls_0x424a70 *this)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    meth_0x427480(this,iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return;
}



undefined4 __thiscall cls_0x424a70::meth_0x429dd0(cls_0x424a70 *this)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = meth_0x424c60(this);
  if (iVar1 < 1) {
    iVar1 = cls_0x409820::Get_mbr_0x270((cls_0x409820 *)this->mbr_0x4);
    if (2 < iVar1) {
      return CONCAT31((int3)((uint)iVar1 >> 8),1);
    }
  }
  DAT_00707790 = 0;
  DAT_00707794 = this;
  uVar2 = FUN_00441b30((void *)this->mbr_0x8,0x1e,1,&LAB_00429db0);
  return uVar2 & 0xffffff00;
}



void __thiscall cls_0x424a70::meth_0x429e20(cls_0x424a70 *this,undefined4 param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  LPCSTR pCVar4;
  void *pvVar5;
  undefined4 *****pppppuVar6;
  char *pcVar7;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  uint unaff_EDI;
  uint unaff_retaddr;
  undefined local_80 [4];
  LPCSTR local_7c;
  dword local_6c;
  uint local_68;
  undefined auStack_64 [4];
  undefined4 *****apppppuStack_60 [4];
  dword dStack_50;
  dword dStack_4c;
  _String_base a_Stack_48 [4];
  undefined4 *****apppppuStack_44 [4];
  dword dStack_34;
  uint uStack_30;
  _String_base a_Stack_2c [4];
  void *pvStack_28;
  dword dStack_18;
  dword dStack_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined local_4;
  undefined3 uStack_3;
  
  local_4 = 0xff;
  uStack_3 = 0xffffff;
  puStack_8 = &LAB_0062cd90;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  if (this->mbr_0x4 == 0) goto LAB_0042a165;
  ExceptionList = &local_c;
  pcVar3 = get_some_directory_path();
  local_68 = 0xf;
  local_6c = 0;
  local_7c = (LPCSTR)((uint)local_7c & 0xffffff00);
  pcVar7 = pcVar3;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_80,pcVar3,(int)pcVar7 - (int)(pcVar3 + 1));
  local_4 = 0;
  uStack_3 = 0;
  pCVar4 = local_7c;
  if (local_68 < 0x10) {
    pCVar4 = local_80 + 4;
  }
  if (pCVar4[local_6c] != '\\') {
    ::cls_0x50db20::meth_0x425bd0((cls_0x50db20 *)local_80,1);
  }
  pcVar7 = "Characters";
  do {
    pcVar3 = pcVar7;
    pcVar7 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  cls_0x4d8d70::meth_0x4257d0
            ((cls_0x4d8d70 *)local_80,(undefined4 *)"Characters",(uint)(pcVar3 + -0x652020));
  pCVar4 = local_7c;
  if (local_68 < 0x10) {
    pCVar4 = local_80 + 4;
  }
  cVar1 = FUN_004c56b0(pCVar4);
  if (cVar1 == '\0') {
    pcVar7 = local_7c;
    if (local_68 < 0x10) {
      pcVar7 = local_80 + 4;
    }
    cVar1 = FUN_004c5750(pcVar7);
    if (cVar1 != '\0') goto LAB_00429f22;
  }
  else {
LAB_00429f22:
    dStack_4c = 0xf;
    dStack_50 = 0;
    apppppuStack_60[0] = (undefined4 *****)((uint)apppppuStack_60[0] & 0xffffff00);
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)(local_80 + 0x1c),(_String_base *)(this->mbr_0x4 + 0x804),0,
               0xffffffff);
    local_4 = 1;
    ::cls_0x50db20::meth_0x425bd0((cls_0x50db20 *)local_80,1);
    cls_0x4d8d70::meth_0x4256e0((cls_0x4d8d70 *)local_80,(int)(local_80 + 0x1c),0,0xffffffff);
    pcVar7 = ".CRT";
    do {
      pcVar3 = pcVar7;
      pcVar7 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    cls_0x4d8d70::meth_0x4257d0
              ((cls_0x4d8d70 *)local_80,(undefined4 *)&DAT_00652018,(uint)(pcVar3 + -0x652018));
    pCVar4 = local_7c;
    if (local_68 < 0x10) {
      pCVar4 = local_80 + 4;
    }
    cVar1 = FUN_004c5590(pCVar4);
    if (cVar1 == '\0') {
      pCVar4 = local_7c;
      if (local_68 < 0x10) {
        pCVar4 = local_80 + 4;
      }
      pvVar5 = (void *)ResourceSystem::FileStreamOpen(DAT_00707da8,(char)pCVar4,0);
      if (pvVar5 != (void *)0x0) {
        meth_0x428b60(this,unaff_ESI,unaff_EBP,unaff_EDI);
        (**(code **)(*(int *)(*(int *)(*(int *)(this->mbr_0x4 + 4) + 4) + 4 + this->mbr_0x4) + 0xa0)
        )(pvVar5);
        cls_0x49c610::meth_0x49b1d0(DAT_00707da8,pvVar5,'\0');
      }
      bVar2 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
      if (bVar2) {
        pppppuVar6 = apppppuStack_60[0];
        if (dStack_4c < 0x10) {
          pppppuVar6 = apppppuStack_60;
        }
        FUN_005565b0((void *)DAT_0070bd90->mbr_0x18,pppppuVar6);
      }
      if (0xf < dStack_4c) {
                    /* WARNING: Subroutine does not return */
        _free(apppppuStack_60[0]);
      }
      dStack_4c = 0xf;
      dStack_50 = 0;
      apppppuStack_60[0] = (undefined4 *****)((uint)apppppuStack_60[0] & 0xffffff00);
      if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
        _free(local_7c);
      }
      goto LAB_0042a165;
    }
    DAT_00707790 = 2;
    uStack_30 = 0xf;
    dStack_34 = 0;
    apppppuStack_44[0] = (undefined4 *****)((uint)apppppuStack_44[0] & 0xffffff00);
    dStack_14 = 0xf;
    dStack_18 = 0;
    pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
    local_4 = 3;
    DAT_00707794 = this;
    FUN_0056c280(0x28,a_Stack_48);
    pCVar4 = local_7c;
    if (local_68 < 0x10) {
      pCVar4 = local_80 + 4;
    }
    pppppuVar6 = apppppuStack_44[0];
    if (uStack_30 < 0x10) {
      pppppuVar6 = apppppuStack_44;
    }
    FUN_004a1a30((cls_0x50db20 *)a_Stack_2c,(byte *)pppppuVar6,(char)pCVar4);
    FUN_00441c00((void *)this->mbr_0x8,a_Stack_2c,2,&LAB_00429db0);
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&this->mbr_0x50,(_String_base *)local_80,0,0xffffffff);
    if (0xf < dStack_14) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28);
    }
    dStack_14 = 0xf;
    dStack_18 = 0;
    pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
    if (0xf < uStack_30) {
                    /* WARNING: Subroutine does not return */
      _free(apppppuStack_44[0]);
    }
    uStack_30 = 0xf;
    dStack_34 = 0;
    apppppuStack_44[0] = (undefined4 *****)((uint)apppppuStack_44[0] & 0xffffff00);
    if (0xf < dStack_4c) {
                    /* WARNING: Subroutine does not return */
      _free(apppppuStack_60[0]);
    }
    dStack_4c = 0xf;
    dStack_50 = 0;
    apppppuStack_60[0] = (undefined4 *****)((uint)apppppuStack_60[0] & 0xffffff00);
  }
  if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
    _free(local_7c);
  }
LAB_0042a165:
  ExceptionList = local_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}



void __thiscall cls_0x424a70::meth_0x42a190(cls_0x424a70 *this)

{
  dword dVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 unaff_ESI;
  uint unaff_retaddr;
  
  uVar3 = meth_0x429dd0(this);
  if ((char)uVar3 != '\0') {
    dVar1 = this->mbr_0x4;
    if (*(uint *)(dVar1 + 0x81c) < 0x10) {
      puVar4 = (undefined4 *)(dVar1 + 0x808);
    }
    else {
      puVar4 = *(undefined4 **)(dVar1 + 0x808);
    }
    iVar5 = cls_0x4c5ac0::meth_0x4c6130((cls_0x4c5ac0 *)&DAT_0070c2d8,puVar4);
    *(int *)(this->mbr_0x4 + 8) = iVar5;
    cVar2 = meth_0x429e20(this,unaff_ESI,unaff_retaddr);
    if (cVar2 != '\0') {
      meth_0x424a70(this);
      FUN_00580d10(*(void **)(*(int *)(DAT_0070bd90 + 0x2c) + 0x7c),(undefined4 *)"RequestNewGame");
    }
  }
  return;
}



void __thiscall cls_0x424a70::meth_0x42a200(cls_0x424a70 *this)

{
  int iVar1;
  int *piVar2;
  
  if (this->mbr_0x4 != 0) {
    DAT_00707790 = 1;
    DAT_00707794 = this;
    FUN_00441b30((void *)this->mbr_0x8,0x22,2,&LAB_00429db0);
    return;
  }
  meth_0x424a70(this);
  iVar1 = *(int *)(DAT_0070bd90 + 0x2c);
  FUN_00460d60();
  piVar2 = *(int **)(*(int *)(iVar1 + 0xa0) + 4);
  CLoadMapInterface::meth_0x495220((CLoadMapInterface *)(*(int *)(*piVar2 + 4) + (int)piVar2),0);
  cls_0x4b28a0::meth_0x4b4f00
            ((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,*(int *)(*piVar2 + 4) + (int)piVar2);
  return;
}



void __thiscall cls_0x424a70::meth_0x42c6d0(cls_0x424a70 *this)

{
  ModelInstance *this_00;
  _String_base *p_Var1;
  int iVar2;
  int iVar3;
  uint unaff_retaddr;
  int local_54;
  cls_0x424a70 *local_50;
  int local_4c;
  undefined local_48 [4];
  void *local_44;
  dword local_34;
  uint local_30;
  void *local_28;
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062d0e0;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  this_00 = *(ModelInstance **)(*(int *)(*(int *)(this->mbr_0x4 + 4) + 4) + 0x164 + this->mbr_0x4);
  local_50 = this;
  if ((void *)this->mbr_0xfc != (void *)0x0) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0xfc);
  }
  ExceptionList = &local_c;
  this->mbr_0xfc = 0;
  this->mbr_0x100 = 0;
  this->mbr_0x104 = 0;
  this->mbr_0xf0 = 1;
  local_4c = cls_0x563a00::meth_0x563a00((cls_0x563a00 *)this_00->mbr_0x4,2);
  local_54 = 0;
  if (0 < local_4c) {
    do {
      iVar3 = local_54;
      ModelInstance::meth_0x5648d0(this_00,local_48,2,local_54);
      local_4 = 0;
      if (local_34 != 0) {
        p_Var1 = (_String_base *)
                 FUN_00583d60(DAT_0070c528,(cls_0x50db20 *)&stack0xffffffd4,(undefined4 *)0x2,iVar3)
        ;
        local_4._0_1_ = 1;
        ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_48,p_Var1,0,0xffffffff);
        local_4 = (uint)local_4._1_3_ << 8;
        if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
          _free(local_28);
        }
        local_14 = 0xf;
        local_18 = 0;
        local_28 = (void *)((uint)local_28 & 0xffffff00);
        cls_0x40cc80::meth_0x42a270((cls_0x40cc80 *)&this->mbr_0xf8,&local_54);
        iVar3 = local_54;
        if (*(int *)(this_00->mbr_0x14 + 8) == local_54) {
          if (this->mbr_0xfc == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = (int)(this->mbr_0x100 - this->mbr_0xfc) >> 2;
          }
          local_50->mbr_0xf0 = iVar2 - 1;
        }
      }
      local_4 = 0xffffffff;
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        _free(local_44);
      }
      local_54 = iVar3 + 1;
      local_30 = 0xf;
      local_34 = 0;
      local_44 = (void *)((uint)local_44 & 0xffffff00);
    } while (local_54 < local_4c);
  }
  ExceptionList = local_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}



void __thiscall cls_0x424a70::meth_0x42c860(cls_0x424a70 *this)

{
  ModelInstance *this_00;
  _String_base *p_Var1;
  int iVar2;
  int iVar3;
  uint unaff_retaddr;
  int local_54;
  cls_0x424a70 *local_50;
  int local_4c;
  undefined local_48 [4];
  void *local_44;
  dword local_34;
  uint local_30;
  void *local_28;
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062d0e0;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  this_00 = *(ModelInstance **)(*(int *)(*(int *)(this->mbr_0x4 + 4) + 4) + 0x164 + this->mbr_0x4);
  local_50 = this;
  if ((void *)this->mbr_0x10c != (void *)0x0) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x10c);
  }
  ExceptionList = &local_c;
  this->mbr_0x10c = 0;
  this->mbr_0x110 = 0;
  this->mbr_0x114 = 0;
  this->mbr_0xf4 = 0;
  local_54 = -1;
  cls_0x40cc80::meth_0x42a270((cls_0x40cc80 *)&this->mbr_0x108,&local_54);
  local_4c = cls_0x563a00::meth_0x563a00((cls_0x563a00 *)this_00->mbr_0x4,3);
  local_54 = 0;
  if (0 < local_4c) {
    do {
      iVar3 = local_54;
      ModelInstance::meth_0x5648d0(this_00,local_48,3,local_54);
      local_4 = 0;
      if (local_34 != 0) {
        p_Var1 = (_String_base *)
                 FUN_00583d60(DAT_0070c528,(cls_0x50db20 *)&stack0xffffffd4,(undefined4 *)0x3,iVar3)
        ;
        local_4._0_1_ = 1;
        ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_48,p_Var1,0,0xffffffff);
        local_4 = (uint)local_4._1_3_ << 8;
        if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
          _free(local_28);
        }
        local_14 = 0xf;
        local_18 = 0;
        local_28 = (void *)((uint)local_28 & 0xffffff00);
        cls_0x40cc80::meth_0x42a270((cls_0x40cc80 *)&this->mbr_0x108,&local_54);
        iVar3 = local_54;
        if (*(int *)(this_00->mbr_0x14 + 0xc) == local_54) {
          if (this->mbr_0x10c == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = (int)(this->mbr_0x110 - this->mbr_0x10c) >> 2;
          }
          local_50->mbr_0xf4 = iVar2 - 1;
        }
      }
      local_4 = 0xffffffff;
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        _free(local_44);
      }
      local_54 = iVar3 + 1;
      local_30 = 0xf;
      local_34 = 0;
      local_44 = (void *)((uint)local_44 & 0xffffff00);
    } while (local_54 < local_4c);
  }
  ExceptionList = local_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}



void __thiscall cls_0x424a70::meth_0x42cdb0(cls_0x424a70 *this)

{
  char cVar1;
  Gregorian *this_00;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  _String_base local_b0 [4];
  void *local_ac;
  dword local_9c;
  dword local_98;
  VFX_Parameter__vftable_673a20 *local_94;
  undefined local_90 [4];
  void *local_8c;
  dword local_7c;
  uint local_78;
  undefined local_74 [4];
  void *local_70;
  dword local_60;
  uint local_5c;
  char *local_58 [12];
  undefined local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062d181;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  this_00 = (Gregorian *)this->mbr_0x34;
  ExceptionList = &local_c;
  Gregorian::meth_0x42a770(this_00);
  local_58[0] = "btnAppearance11";
  local_58[1] = "lblAppearance11";
  local_58[2] = "btnAppearance12";
  local_58[3] = "lblAppearance12";
  local_58[4] = "btnAppearance13";
  local_58[5] = "lblAppearance13";
  local_58[6] = "btnAppearance14";
  local_58[7] = "lblAppearance14";
  local_58[8] = "btnAppearance15";
  local_58[9] = "lblAppearance15";
  local_58[10] = "btnAppearance16";
  local_58[11] = "lblAppearance16";
  Gregorian::meth_0x42a740(this_00,6);
  iVar6 = 0;
  do {
    pcVar2 = ((char **)((int)register0x00000010 + -0x54))[iVar6 * 2 + -1];
    local_5c = 0xf;
    local_60 = 0;
    local_70 = (void *)((uint)local_70 & 0xffffff00);
    pcVar3 = pcVar2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_74,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
    local_4 = 0;
    local_94 = (VFX_Parameter__vftable_673a20 *)
               CLoadMapInterface::meth_0x495740
                         ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                          (int)local_74);
    local_4 = 0xffffffff;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      _free(local_70);
    }
    pcVar2 = ((char **)((int)register0x00000010 + -0x54))[iVar6 * 2];
    local_5c = 0xf;
    local_60 = 0;
    local_70 = (void *)((uint)local_70 & 0xffffff00);
    local_98 = 0xf;
    local_9c = 0;
    local_ac = (void *)((uint)local_ac & 0xffffff00);
    pcVar3 = pcVar2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_b0,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
    local_4 = 1;
    uVar4 = CLoadMapInterface::meth_0x495740
                      ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                       (int)local_b0);
    local_4 = 0xffffffff;
    if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
      _free(local_ac);
    }
    local_98 = 0xf;
    local_9c = 0;
    local_ac = (void *)((uint)local_ac & 0xffffff00);
    Gregorian::meth_0x425200(this_00,iVar6,local_94,uVar4);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 6);
  iVar6 = 0;
  do {
    uVar4 = (&DAT_006f2858)[iVar6];
    local_98 = 0xf;
    local_9c = 0;
    local_ac = (void *)((uint)local_ac & 0xffffff00);
    pcVar2 = "";
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_b0,"",(uint)(pcVar3 + -0x64d7d8));
    local_4 = 2;
    Gregorian::meth_0x42ccf0(this_00,uVar4,iVar6,uVar4,0xffffffff,local_b0);
    local_4 = 0xffffffff;
    if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
      _free(local_ac);
    }
    iVar6 = iVar6 + 1;
    local_98 = 0xf;
    local_9c = 0;
    local_ac = (void *)((uint)local_ac & 0xffffff00);
  } while (iVar6 < 4);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = "btnAppearanceDown1";
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_28,"btnAppearanceDown1",(uint)(pcVar3 + -0x6528b4));
  local_4 = 3;
  local_78 = 0xf;
  local_7c = 0;
  local_8c = (void *)((uint)local_8c & 0xffffff00);
  pcVar2 = "btnAppearanceUp1";
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_90,"btnAppearanceUp1",(uint)(pcVar3 + -0x6528a0));
  local_4 = CONCAT31(local_4._1_3_,4);
  uVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                     (int)local_28);
  uVar5 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                     (int)local_90);
  Gregorian::meth_0x4ab6c0(this_00,uVar5,uVar4);
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c);
  }
  local_78 = 0xf;
  local_7c = 0;
  local_8c = (void *)((uint)local_8c & 0xffffff00);
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x424a70::meth_0x42d130(cls_0x424a70 *this)

{
  char cVar1;
  Gregorian *this_00;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  _String_base local_ac [4];
  void *local_a8;
  dword local_98;
  dword local_94;
  undefined local_90 [4];
  void *local_8c;
  dword local_7c;
  uint local_78;
  undefined local_74 [4];
  void *local_70;
  dword local_60;
  uint local_5c;
  char *local_58 [12];
  undefined local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062d1c1;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  this_00 = (Gregorian *)this->mbr_0x38;
  ExceptionList = &local_c;
  Gregorian::meth_0x42a770(this_00);
  local_58[0] = "btnAppearance21";
  local_58[1] = "lblAppearance21";
  local_58[2] = "btnAppearance22";
  local_58[3] = "lblAppearance22";
  local_58[4] = "btnAppearance23";
  local_58[5] = "lblAppearance23";
  local_58[6] = "btnAppearance24";
  local_58[7] = "lblAppearance24";
  local_58[8] = "btnAppearance25";
  local_58[9] = "lblAppearance25";
  local_58[10] = "btnAppearance26";
  local_58[11] = "lblAppearance26";
  Gregorian::meth_0x42a740(this_00,6);
  iVar6 = 0;
  do {
    pcVar2 = ((char **)((int)register0x00000010 + -0x54))[iVar6 * 2 + -1];
    local_5c = 0xf;
    local_60 = 0;
    local_70 = (void *)((uint)local_70 & 0xffffff00);
    pcVar3 = pcVar2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_74,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
    local_4 = 0;
    uVar4 = CLoadMapInterface::meth_0x495740
                      ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                       (int)local_74);
    local_4 = 0xffffffff;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      _free(local_70);
    }
    pcVar2 = ((char **)((int)register0x00000010 + -0x54))[iVar6 * 2];
    local_5c = 0xf;
    local_94 = 0xf;
    local_60 = 0;
    local_70 = (void *)((uint)local_70 & 0xffffff00);
    local_98 = 0;
    local_a8 = (void *)((uint)local_a8 & 0xffffff00);
    pcVar3 = pcVar2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_ac,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
    local_4 = 1;
    uVar5 = CLoadMapInterface::meth_0x495740
                      ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                       (int)local_ac);
    local_4 = 0xffffffff;
    if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
      _free(local_a8);
    }
    local_94 = 0xf;
    local_98 = 0;
    local_a8 = (void *)((uint)local_a8 & 0xffffff00);
    Gregorian::meth_0x425200(this_00,iVar6,uVar4,uVar5);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 6);
  puVar7 = &DAT_006f286c;
  do {
    uVar4 = puVar7[-1];
    uVar5 = *puVar7;
    local_94 = 0xf;
    local_98 = 0;
    local_a8 = (void *)((uint)local_a8 & 0xffffff00);
    pcVar2 = "";
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_ac,"",(uint)(pcVar3 + -0x64d7d8));
    local_4 = 2;
    Gregorian::meth_0x42ccf0(this_00,uVar5,uVar4,uVar5,0xffffffff,local_ac);
    local_4 = 0xffffffff;
    if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
      _free(local_a8);
    }
    puVar7 = puVar7 + 2;
    local_94 = 0xf;
    local_98 = 0;
    local_a8 = (void *)((uint)local_a8 & 0xffffff00);
  } while ((int)puVar7 < 0x6f28fc);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = "btnAppearanceDown2";
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_28,"btnAppearanceDown2",(uint)(pcVar3 + -0x65293c));
  local_4 = 3;
  local_78 = 0xf;
  local_7c = 0;
  local_8c = (void *)((uint)local_8c & 0xffffff00);
  pcVar2 = "btnAppearanceUp2";
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_90,"btnAppearanceUp2",(uint)(pcVar3 + -0x652928));
  local_4 = CONCAT31(local_4._1_3_,4);
  uVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                     (int)local_28);
  uVar5 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                     (int)local_90);
  Gregorian::meth_0x4ab6c0(this_00,uVar5,uVar4);
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c);
  }
  local_78 = 0xf;
  local_7c = 0;
  local_8c = (void *)((uint)local_8c & 0xffffff00);
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x424a70::meth_0x42d4c0(cls_0x424a70 *this)

{
  char cVar1;
  Gregorian *this_00;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int local_b8;
  int local_b0;
  _String_base local_ac [4];
  void *local_a8;
  dword local_98;
  dword local_94;
  undefined local_90 [4];
  void *local_8c;
  dword local_7c;
  uint local_78;
  undefined local_74 [4];
  void *local_70;
  dword local_60;
  uint local_5c;
  char *local_58 [12];
  undefined local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062d201;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  this_00 = (Gregorian *)this->mbr_0x3c;
  ExceptionList = &local_c;
  Gregorian::meth_0x42a770(this_00);
  local_58[0] = "btnAppearance31";
  local_58[1] = "lblAppearance31";
  local_58[2] = "btnAppearance32";
  local_58[3] = "lblAppearance32";
  local_58[4] = "btnAppearance33";
  local_58[5] = "lblAppearance33";
  local_58[6] = "btnAppearance34";
  local_58[7] = "lblAppearance34";
  local_58[8] = "btnAppearance35";
  local_58[9] = "lblAppearance35";
  local_58[10] = "btnAppearance36";
  local_58[11] = "lblAppearance36";
  Gregorian::meth_0x42a740(this_00,6);
  iVar6 = 0;
  do {
    pcVar2 = ((char **)((int)register0x00000010 + -0x54))[iVar6 * 2 + -1];
    local_78 = 0xf;
    local_7c = 0;
    local_8c = (void *)((uint)local_8c & 0xffffff00);
    pcVar3 = pcVar2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_90,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
    local_4 = 0;
    uVar4 = CLoadMapInterface::meth_0x495740
                      ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                       (int)local_90);
    local_4 = 0xffffffff;
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
    pcVar2 = ((char **)((int)register0x00000010 + -0x54))[iVar6 * 2];
    local_78 = 0xf;
    local_7c = 0;
    local_8c = (void *)((uint)local_8c & 0xffffff00);
    local_94 = 0xf;
    local_98 = 0;
    local_a8 = (void *)((uint)local_a8 & 0xffffff00);
    pcVar3 = pcVar2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_ac,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
    local_4 = 1;
    uVar5 = CLoadMapInterface::meth_0x495740
                      ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                       (int)local_ac);
    local_4 = 0xffffffff;
    if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
      _free(local_a8);
    }
    local_94 = 0xf;
    local_98 = 0;
    local_a8 = (void *)((uint)local_a8 & 0xffffff00);
    Gregorian::meth_0x425200(this_00,iVar6,uVar4,uVar5);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 6);
  if (this->mbr_0xfc == 0) {
    local_b8 = 0;
  }
  else {
    local_b8 = (int)(this->mbr_0x100 - this->mbr_0xfc) >> 2;
  }
  local_b0 = 0;
  if (0 < local_b8) {
    do {
      iVar6 = *(int *)(this->mbr_0xfc + local_b0 * 4);
      uVar4 = FUN_00424d00(iVar6);
      local_94 = 0xf;
      local_98 = 0;
      local_a8 = (void *)((uint)local_a8 & 0xffffff00);
      pcVar2 = "";
      do {
        pcVar3 = pcVar2;
        pcVar2 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_ac,"",(uint)(pcVar3 + -0x64d7d8));
      local_4 = 2;
      Gregorian::meth_0x42ccf0(this_00,uVar4,iVar6,uVar4,0xffffffff,local_ac);
      local_4 = 0xffffffff;
      if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
        _free(local_a8);
      }
      local_b0 = local_b0 + 1;
      local_94 = 0xf;
      local_98 = 0;
      local_a8 = (void *)((uint)local_a8 & 0xffffff00);
    } while (local_b0 < local_b8);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = "btnAppearanceDown3";
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_28,"btnAppearanceDown3",(uint)(pcVar3 + -0x6529c4));
  local_4 = 3;
  local_5c = 0xf;
  local_60 = 0;
  local_70 = (void *)((uint)local_70 & 0xffffff00);
  pcVar2 = "btnAppearanceUp3";
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_74,"btnAppearanceUp3",(uint)(pcVar3 + -0x6529b0));
  local_4 = CONCAT31(local_4._1_3_,4);
  uVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                     (int)local_28);
  uVar5 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                     (int)local_74);
  Gregorian::meth_0x4ab6c0(this_00,uVar5,uVar4);
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    _free(local_70);
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70 = (void *)((uint)local_70 & 0xffffff00);
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x424a70::meth_0x42d880(cls_0x424a70 *this)

{
  char cVar1;
  Gregorian *this_00;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int local_b8;
  int local_b0;
  _String_base local_ac [4];
  void *local_a8;
  dword local_98;
  dword local_94;
  undefined local_90 [4];
  void *local_8c;
  dword local_7c;
  uint local_78;
  undefined local_74 [4];
  void *local_70;
  dword local_60;
  uint local_5c;
  char *local_58 [12];
  undefined local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062d201;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  this_00 = (Gregorian *)this->mbr_0x40;
  ExceptionList = &local_c;
  Gregorian::meth_0x42a770(this_00);
  local_58[0] = "btnAppearance41";
  local_58[1] = "lblAppearance41";
  local_58[2] = "btnAppearance42";
  local_58[3] = "lblAppearance42";
  local_58[4] = "btnAppearance43";
  local_58[5] = "lblAppearance43";
  local_58[6] = "btnAppearance44";
  local_58[7] = "lblAppearance44";
  local_58[8] = "btnAppearance45";
  local_58[9] = "lblAppearance45";
  local_58[10] = "btnAppearance46";
  local_58[11] = "lblAppearance46";
  Gregorian::meth_0x42a740(this_00,6);
  iVar6 = 0;
  do {
    pcVar2 = ((char **)((int)register0x00000010 + -0x54))[iVar6 * 2 + -1];
    local_78 = 0xf;
    local_7c = 0;
    local_8c = (void *)((uint)local_8c & 0xffffff00);
    pcVar3 = pcVar2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_90,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
    local_4 = 0;
    uVar4 = CLoadMapInterface::meth_0x495740
                      ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                       (int)local_90);
    local_4 = 0xffffffff;
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
    pcVar2 = ((char **)((int)register0x00000010 + -0x54))[iVar6 * 2];
    local_78 = 0xf;
    local_7c = 0;
    local_8c = (void *)((uint)local_8c & 0xffffff00);
    local_94 = 0xf;
    local_98 = 0;
    local_a8 = (void *)((uint)local_a8 & 0xffffff00);
    pcVar3 = pcVar2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_ac,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
    local_4 = 1;
    uVar5 = CLoadMapInterface::meth_0x495740
                      ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                       (int)local_ac);
    local_4 = 0xffffffff;
    if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
      _free(local_a8);
    }
    local_94 = 0xf;
    local_98 = 0;
    local_a8 = (void *)((uint)local_a8 & 0xffffff00);
    Gregorian::meth_0x425200(this_00,iVar6,uVar4,uVar5);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 6);
  if (this->mbr_0x10c == 0) {
    local_b8 = 0;
  }
  else {
    local_b8 = (int)(this->mbr_0x110 - this->mbr_0x10c) >> 2;
  }
  local_b0 = 0;
  if (0 < local_b8) {
    do {
      iVar6 = *(int *)(this->mbr_0x10c + local_b0 * 4);
      uVar4 = FUN_00424d20(iVar6);
      local_94 = 0xf;
      local_98 = 0;
      local_a8 = (void *)((uint)local_a8 & 0xffffff00);
      pcVar2 = "";
      do {
        pcVar3 = pcVar2;
        pcVar2 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_ac,"",(uint)(pcVar3 + -0x64d7d8));
      local_4 = 2;
      Gregorian::meth_0x42ccf0(this_00,uVar4,iVar6,uVar4,0xffffffff,local_ac);
      local_4 = 0xffffffff;
      if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
        _free(local_a8);
      }
      local_b0 = local_b0 + 1;
      local_94 = 0xf;
      local_98 = 0;
      local_a8 = (void *)((uint)local_a8 & 0xffffff00);
    } while (local_b0 < local_b8);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = "btnAppearanceDown4";
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_28,"btnAppearanceDown4",(uint)(pcVar3 + -0x652a4c));
  local_4 = 3;
  local_5c = 0xf;
  local_60 = 0;
  local_70 = (void *)((uint)local_70 & 0xffffff00);
  pcVar2 = "btnAppearanceUp4";
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_74,"btnAppearanceUp4",(uint)(pcVar3 + -0x652a38));
  local_4 = CONCAT31(local_4._1_3_,4);
  uVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                     (int)local_28);
  uVar5 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                     (int)local_74);
  Gregorian::meth_0x4ab6c0(this_00,uVar5,uVar4);
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    _free(local_70);
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70 = (void *)((uint)local_70 & 0xffffff00);
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x424a70::meth_0x42dc40(cls_0x424a70 *this)

{
  char cVar1;
  Gregorian *this_00;
  char *pcVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Gregorian *unaff_EBX;
  undefined4 *puVar7;
  int iVar8;
  _String_base a_Stack_b0 [4];
  void *pvStack_ac;
  dword dStack_9c;
  dword dStack_98;
  undefined auStack_94 [4];
  void *local_90;
  void *local_8c;
  dword dStack_80;
  dword local_7c;
  VFX_Parameter__vftable_673a20 *local_78;
  VFX_Parameter__vftable_673a20 *pVStack_74;
  dword dStack_64;
  uint uStack_60;
  char *apcStack_5c [12];
  undefined auStack_2c [4];
  void *pvStack_28;
  dword dStack_18;
  uint uStack_14;
  VFX_Parameter__vftable_673a20 *pVStack_10;
  void *pvStack_c;
  undefined4 uStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  uStack_8 = &LAB_0062d24c;
  pvStack_c = ExceptionList;
  this_00 = (Gregorian *)this->mbr_0x44;
  ExceptionList = &pvStack_c;
  Gregorian::meth_0x42a770(this_00);
  local_78 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_7c = 0;
  local_8c = (void *)((uint)local_8c & 0xffffff00);
  pcVar2 = "lblAppearanceHeading5";
  do {
    pcVar4 = pcVar2;
    pcVar2 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_90,"lblAppearanceHeading5",(uint)(pcVar4 + -0x65241c));
  local_4 = 0;
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)&local_90);
  local_4 = 0xffffffff;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c);
  }
  local_78 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_7c = 0;
  local_8c = (void *)((uint)local_8c & 0xffffff00);
  (**(code **)(*piVar3 + 0x54))(*(int *)(this->mbr_0x4 + 0xd0) != 0);
  if (*(int *)(this->mbr_0x4 + 0xd0) == 0) {
    apcStack_5c[0] = "btnAppearance51";
    apcStack_5c[1] = "lblAppearance51";
    apcStack_5c[2] = "btnAppearance52";
    apcStack_5c[3] = "lblAppearance52";
    apcStack_5c[4] = "btnAppearance53";
    apcStack_5c[5] = "lblAppearance53";
    apcStack_5c[6] = "btnAppearance54";
    apcStack_5c[7] = "lblAppearance54";
    apcStack_5c[8] = "btnAppearance55";
    apcStack_5c[9] = "lblAppearance55";
    apcStack_5c[10] = "btnAppearance56";
    apcStack_5c[11] = "lblAppearance56";
    Gregorian::meth_0x42a740(this_00,6);
    iVar8 = 0;
    do {
      pcVar2 = ((char **)((int)register0x00000010 + -0x58))[iVar8 * 2 + -1];
      local_7c = 0xf;
      dStack_80 = 0;
      local_90 = (void *)((uint)local_90 & 0xffffff00);
      pcVar4 = pcVar2;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)auStack_94,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
      uStack_8 = (undefined *)0x1;
      uVar5 = CLoadMapInterface::meth_0x495740
                        ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                         (int)auStack_94);
      uStack_8 = (undefined *)0xffffffff;
      if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
      pcVar2 = ((char **)((int)register0x00000010 + -0x58))[iVar8 * 2];
      local_7c = 0xf;
      dStack_80 = 0;
      local_90 = (void *)((uint)local_90 & 0xffffff00);
      dStack_98 = 0xf;
      dStack_9c = 0;
      pvStack_ac = (void *)((uint)pvStack_ac & 0xffffff00);
      pcVar4 = pcVar2;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)a_Stack_b0,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
      uStack_8 = (undefined *)0x2;
      uVar6 = CLoadMapInterface::meth_0x495740
                        ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                         (int)a_Stack_b0);
      uStack_8 = (undefined *)0xffffffff;
      if (0xf < dStack_98) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_ac);
      }
      dStack_98 = 0xf;
      dStack_9c = 0;
      pvStack_ac = (void *)((uint)pvStack_ac & 0xffffff00);
      Gregorian::meth_0x425200(unaff_EBX,iVar8,uVar5,uVar6);
      iVar8 = iVar8 + 1;
    } while (iVar8 < 6);
    puVar7 = &DAT_006f29bc;
    do {
      uVar5 = puVar7[-1];
      uVar6 = *puVar7;
      dStack_98 = 0xf;
      dStack_9c = 0;
      pvStack_ac = (void *)((uint)pvStack_ac & 0xffffff00);
      pcVar2 = "";
      do {
        pcVar4 = pcVar2;
        pcVar2 = pcVar4 + 1;
      } while (*pcVar4 != '\0');
      ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_b0,"",(uint)(pcVar4 + -0x64d7d8));
      uStack_8 = (undefined *)0x3;
      Gregorian::meth_0x42ccf0(unaff_EBX,uVar6,uVar5,uVar6,0xffffffff,a_Stack_b0);
      uStack_8 = (undefined *)0xffffffff;
      if (0xf < dStack_98) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_ac);
      }
      puVar7 = puVar7 + 2;
      dStack_98 = 0xf;
      dStack_9c = 0;
      pvStack_ac = (void *)((uint)pvStack_ac & 0xffffff00);
    } while ((int)puVar7 < 0x6f2a0c);
    uStack_14 = 0xf;
    dStack_18 = 0;
    pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
    pcVar2 = "btnAppearanceDown5";
    do {
      pcVar4 = pcVar2;
      pcVar2 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)auStack_2c,"btnAppearanceDown5",(uint)(pcVar4 + -0x652ad4));
    uStack_8 = (undefined *)0x4;
    uStack_60 = 0xf;
    dStack_64 = 0;
    pVStack_74 = (VFX_Parameter__vftable_673a20 *)((uint)pVStack_74 & 0xffffff00);
    pcVar2 = "btnAppearanceUp5";
    do {
      pcVar4 = pcVar2;
      pcVar2 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&local_78,"btnAppearanceUp5",(uint)(pcVar4 + -0x652ac0));
    uStack_8 = (undefined *)CONCAT31(uStack_8._1_3_,5);
    uVar5 = CLoadMapInterface::meth_0x495740
                      ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                       (int)auStack_2c);
    uVar6 = CLoadMapInterface::meth_0x495740
                      ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                       (int)&local_78);
    Gregorian::meth_0x4ab6c0(unaff_EBX,uVar6,uVar5);
    if (0xf < uStack_60) {
                    /* WARNING: Subroutine does not return */
      _free(pVStack_74);
    }
    uStack_60 = 0xf;
    dStack_64 = 0;
    pVStack_74 = (VFX_Parameter__vftable_673a20 *)((uint)pVStack_74 & 0xffffff00);
    if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28);
    }
  }
  ExceptionList = pVStack_10;
  return;
}



void __thiscall cls_0x424a70::meth_0x42e070(cls_0x424a70 *this)

{
  char cVar1;
  Gregorian *this_00;
  char *pcVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Gregorian *unaff_EBX;
  undefined4 *puVar7;
  int iVar8;
  _String_base a_Stack_b0 [4];
  void *pvStack_ac;
  dword dStack_9c;
  dword dStack_98;
  undefined auStack_94 [4];
  void *local_90;
  void *local_8c;
  dword dStack_80;
  dword local_7c;
  VFX_Parameter__vftable_673a20 *local_78;
  VFX_Parameter__vftable_673a20 *pVStack_74;
  dword dStack_64;
  uint uStack_60;
  char *apcStack_5c [12];
  undefined auStack_2c [4];
  void *pvStack_28;
  dword dStack_18;
  uint uStack_14;
  VFX_Parameter__vftable_673a20 *pVStack_10;
  void *pvStack_c;
  undefined4 uStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  uStack_8 = &LAB_0062d24c;
  pvStack_c = ExceptionList;
  this_00 = (Gregorian *)this->mbr_0x48;
  ExceptionList = &pvStack_c;
  Gregorian::meth_0x42a770(this_00);
  local_78 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_7c = 0;
  local_8c = (void *)((uint)local_8c & 0xffffff00);
  pcVar2 = "lblAppearanceHeading6";
  do {
    pcVar4 = pcVar2;
    pcVar2 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_90,"lblAppearanceHeading6",(uint)(pcVar4 + -0x652404));
  local_4 = 0;
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)&local_90);
  local_4 = 0xffffffff;
  if ((VFX_Parameter__vftable_673a20 *)0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c);
  }
  local_78 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_7c = 0;
  local_8c = (void *)((uint)local_8c & 0xffffff00);
  (**(code **)(*piVar3 + 0x54))(*(int *)(this->mbr_0x4 + 0xd0) != 0);
  if (*(int *)(this->mbr_0x4 + 0xd0) == 0) {
    apcStack_5c[0] = "btnAppearance61";
    apcStack_5c[1] = "lblAppearance61";
    apcStack_5c[2] = "btnAppearance62";
    apcStack_5c[3] = "lblAppearance62";
    apcStack_5c[4] = "btnAppearance63";
    apcStack_5c[5] = "lblAppearance63";
    apcStack_5c[6] = "btnAppearance64";
    apcStack_5c[7] = "lblAppearance64";
    apcStack_5c[8] = "btnAppearance65";
    apcStack_5c[9] = "lblAppearance65";
    apcStack_5c[10] = "btnAppearance66";
    apcStack_5c[11] = "lblAppearance66";
    Gregorian::meth_0x42a740(this_00,6);
    iVar8 = 0;
    do {
      pcVar2 = ((char **)((int)register0x00000010 + -0x58))[iVar8 * 2 + -1];
      local_7c = 0xf;
      dStack_80 = 0;
      local_90 = (void *)((uint)local_90 & 0xffffff00);
      pcVar4 = pcVar2;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)auStack_94,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
      uStack_8 = (undefined *)0x1;
      uVar5 = CLoadMapInterface::meth_0x495740
                        ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                         (int)auStack_94);
      uStack_8 = (undefined *)0xffffffff;
      if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
      pcVar2 = ((char **)((int)register0x00000010 + -0x58))[iVar8 * 2];
      local_7c = 0xf;
      dStack_80 = 0;
      local_90 = (void *)((uint)local_90 & 0xffffff00);
      dStack_98 = 0xf;
      dStack_9c = 0;
      pvStack_ac = (void *)((uint)pvStack_ac & 0xffffff00);
      pcVar4 = pcVar2;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)a_Stack_b0,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
      uStack_8 = (undefined *)0x2;
      uVar6 = CLoadMapInterface::meth_0x495740
                        ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                         (int)a_Stack_b0);
      uStack_8 = (undefined *)0xffffffff;
      if (0xf < dStack_98) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_ac);
      }
      dStack_98 = 0xf;
      dStack_9c = 0;
      pvStack_ac = (void *)((uint)pvStack_ac & 0xffffff00);
      Gregorian::meth_0x425200(unaff_EBX,iVar8,uVar5,uVar6);
      iVar8 = iVar8 + 1;
    } while (iVar8 < 6);
    puVar7 = &DAT_006f2a0c;
    do {
      uVar5 = puVar7[-1];
      uVar6 = *puVar7;
      dStack_98 = 0xf;
      dStack_9c = 0;
      pvStack_ac = (void *)((uint)pvStack_ac & 0xffffff00);
      pcVar2 = "";
      do {
        pcVar4 = pcVar2;
        pcVar2 = pcVar4 + 1;
      } while (*pcVar4 != '\0');
      ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_b0,"",(uint)(pcVar4 + -0x64d7d8));
      uStack_8 = (undefined *)0x3;
      Gregorian::meth_0x42ccf0(unaff_EBX,uVar6,uVar5,uVar6,0xffffffff,a_Stack_b0);
      uStack_8 = (undefined *)0xffffffff;
      if (0xf < dStack_98) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_ac);
      }
      puVar7 = puVar7 + 2;
      dStack_98 = 0xf;
      dStack_9c = 0;
      pvStack_ac = (void *)((uint)pvStack_ac & 0xffffff00);
    } while ((int)puVar7 < 0x6f2a4c);
    uStack_14 = 0xf;
    dStack_18 = 0;
    pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
    pcVar2 = "btnAppearanceDown6";
    do {
      pcVar4 = pcVar2;
      pcVar2 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)auStack_2c,"btnAppearanceDown6",(uint)(pcVar4 + -0x652b5c));
    uStack_8 = (undefined *)0x4;
    uStack_60 = 0xf;
    dStack_64 = 0;
    pVStack_74 = (VFX_Parameter__vftable_673a20 *)((uint)pVStack_74 & 0xffffff00);
    pcVar2 = "btnAppearanceUp6";
    do {
      pcVar4 = pcVar2;
      pcVar2 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&local_78,"btnAppearanceUp6",(uint)(pcVar4 + -0x652b48));
    uStack_8 = (undefined *)CONCAT31(uStack_8._1_3_,5);
    uVar5 = CLoadMapInterface::meth_0x495740
                      ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                       (int)auStack_2c);
    uVar6 = CLoadMapInterface::meth_0x495740
                      ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                       (int)&local_78);
    Gregorian::meth_0x4ab6c0(unaff_EBX,uVar6,uVar5);
    if (0xf < uStack_60) {
                    /* WARNING: Subroutine does not return */
      _free(pVStack_74);
    }
    uStack_60 = 0xf;
    dStack_64 = 0;
    pVStack_74 = (VFX_Parameter__vftable_673a20 *)((uint)pVStack_74 & 0xffffff00);
    if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28);
    }
  }
  ExceptionList = pVStack_10;
  return;
}



void __thiscall cls_0x424a70::meth_0x42e4a0(cls_0x424a70 *this)

{
  char cVar1;
  Gregorian *this_00;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  _String_base local_ac [4];
  void *local_a8;
  dword local_98;
  dword local_94;
  undefined local_90 [4];
  void *local_8c;
  dword local_7c;
  uint local_78;
  undefined local_74 [4];
  void *local_70;
  dword local_60;
  uint local_5c;
  char *local_58 [12];
  undefined local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062d1c1;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  this_00 = (Gregorian *)this->mbr_0x4c;
  ExceptionList = &local_c;
  Gregorian::meth_0x42a770(this_00);
  local_58[0] = "btnAppearance71";
  local_58[1] = "lblAppearance71";
  local_58[2] = "btnAppearance72";
  local_58[3] = "lblAppearance72";
  local_58[4] = "btnAppearance73";
  local_58[5] = "lblAppearance73";
  local_58[6] = "btnAppearance74";
  local_58[7] = "lblAppearance74";
  local_58[8] = "btnAppearance75";
  local_58[9] = "lblAppearance75";
  local_58[10] = "btnAppearance76";
  local_58[11] = "lblAppearance76";
  Gregorian::meth_0x42a740(this_00,6);
  iVar6 = 0;
  do {
    pcVar2 = ((char **)((int)register0x00000010 + -0x54))[iVar6 * 2 + -1];
    local_5c = 0xf;
    local_60 = 0;
    local_70 = (void *)((uint)local_70 & 0xffffff00);
    pcVar3 = pcVar2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_74,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
    local_4 = 0;
    uVar4 = CLoadMapInterface::meth_0x495740
                      ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                       (int)local_74);
    local_4 = 0xffffffff;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      _free(local_70);
    }
    pcVar2 = ((char **)((int)register0x00000010 + -0x54))[iVar6 * 2];
    local_5c = 0xf;
    local_94 = 0xf;
    local_60 = 0;
    local_70 = (void *)((uint)local_70 & 0xffffff00);
    local_98 = 0;
    local_a8 = (void *)((uint)local_a8 & 0xffffff00);
    pcVar3 = pcVar2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_ac,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
    local_4 = 1;
    uVar5 = CLoadMapInterface::meth_0x495740
                      ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                       (int)local_ac);
    local_4 = 0xffffffff;
    if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
      _free(local_a8);
    }
    local_94 = 0xf;
    local_98 = 0;
    local_a8 = (void *)((uint)local_a8 & 0xffffff00);
    Gregorian::meth_0x425200(this_00,iVar6,uVar4,uVar5);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 6);
  puVar7 = &DAT_006f2a4c;
  do {
    uVar4 = puVar7[-1];
    uVar5 = *puVar7;
    local_94 = 0xf;
    local_98 = 0;
    local_a8 = (void *)((uint)local_a8 & 0xffffff00);
    pcVar2 = "";
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_ac,"",(uint)(pcVar3 + -0x64d7d8));
    local_4 = 2;
    Gregorian::meth_0x42ccf0(this_00,uVar5,uVar4,uVar5,0xffffffff,local_ac);
    local_4 = 0xffffffff;
    if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
      _free(local_a8);
    }
    puVar7 = puVar7 + 2;
    local_94 = 0xf;
    local_98 = 0;
    local_a8 = (void *)((uint)local_a8 & 0xffffff00);
  } while ((int)puVar7 < 0x6f2a9c);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = "btnAppearanceDown7";
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_28,"btnAppearanceDown7",(uint)(pcVar3 + -0x652be4));
  local_4 = 3;
  local_78 = 0xf;
  local_7c = 0;
  local_8c = (void *)((uint)local_8c & 0xffffff00);
  pcVar2 = "btnAppearanceUp7";
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_90,"btnAppearanceUp7",(uint)(pcVar3 + -0x652bd0));
  local_4 = CONCAT31(local_4._1_3_,4);
  uVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                     (int)local_28);
  uVar5 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                     (int)local_90);
  Gregorian::meth_0x4ab6c0(this_00,uVar5,uVar4);
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c);
  }
  local_78 = 0xf;
  local_7c = 0;
  local_8c = (void *)((uint)local_8c & 0xffffff00);
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return;
}



/* WARNING: Type propagation algorithm not settling */

void __thiscall cls_0x424a70::meth_0x42e870(cls_0x424a70 *this,int param_1,char param_2)

{
  char cVar1;
  undefined4 *puVar2;
  dword dVar3;
  ModelInstance *pMVar4;
  char *pcVar5;
  int **ppiVar6;
  int *piVar7;
  GamePlayer *pGVar8;
  _String_base *p_Var9;
  char *pcVar10;
  undefined4 *******pppppppuVar11;
  dword dVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined4 *******pppppppuVar16;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  undefined4 unaff_ESI;
  VFX_Parameter__vftable_673a20 **ppVVar17;
  undefined **ppuVar18;
  int **ppiVar19;
  char unaff_DI;
  VFX_Parameter__vftable_673a20 **ppVVar20;
  undefined4 *puVar21;
  uint unaff_retaddr;
  undefined auStack_b8 [4];
  undefined4 *******apppppppuStack_b4 [4];
  undefined4 uStack_a4;
  uint uStack_a0;
  ModelInstance *local_9c;
  int *local_98;
  int local_94;
  uint local_90;
  undefined local_8c [16];
  undefined4 *******apppppppuStack_7c [4];
  undefined4 uStack_6c;
  uint uStack_68;
  _String_base a_Stack_64 [4];
  void *pvStack_60;
  dword dStack_50;
  uint uStack_4c;
  VFX_Parameter__vftable_673a20 *local_48;
  dword local_44;
  dword local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  dword local_30;
  _String_base local_2c [4];
  undefined local_28;
  dword local_18;
  dword local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062d357;
  pvStack_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  local_90 = 0;
  local_14 = 0xf;
  local_18 = 0;
  local_28 = 0;
  pcVar5 = "None";
  do {
    pcVar10 = pcVar5;
    pcVar5 = pcVar10 + 1;
  } while (*pcVar10 != '\0');
  ExceptionList = &pvStack_c;
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_2c,"None",(uint)(pcVar10 + -0x652c58));
  local_4 = 0;
  local_98 = (int *)0x15;
  local_94 = 0;
  local_48 = (VFX_Parameter__vftable_673a20 *)0x5;
  local_44 = 5;
  local_40 = 5;
  local_3c = 5;
  local_38 = 5;
  local_34 = 5;
  local_30 = 5;
  ppiVar6 = (int **)FUN_0056e0b0();
  local_8c._8_4_ = 0;
  local_4._0_1_ = 1;
  local_8c._4_4_ = ppiVar6;
  if (this->mbr_0x4 != 0) {
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)local_2c,(_String_base *)(this->mbr_0x4 + 0x804),0,0xffffffff);
    dVar12 = this->mbr_0x4;
    local_98 = *(int **)(dVar12 + 0xcc);
    local_94 = *(int *)(dVar12 + 0xd0);
    ppVVar17 = (VFX_Parameter__vftable_673a20 **)(dVar12 + 0xa0);
    ppVVar20 = &local_48;
    for (iVar15 = 7; iVar15 != 0; iVar15 = iVar15 + -1) {
      *ppVVar20 = *ppVVar17;
      ppVVar17 = ppVVar17 + 1;
      ppVVar20 = ppVVar20 + 1;
    }
    if (local_8c != (undefined *)(dVar12 + 0x268)) {
      puVar2 = *(undefined4 **)(dVar12 + 0x26c);
      if (puVar2 == (undefined4 *)0x0) {
        puVar21 = (undefined4 *)0x0;
      }
      else {
        puVar21 = (undefined4 *)*puVar2;
      }
      if (ppiVar6 == (int **)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = *ppiVar6;
      }
      GUI::Interface::meth_0x4b9d60((Interface *)local_8c,(int **)&local_9c,piVar7,(int *)ppiVar6);
      ppiVar6 = (int **)local_8c._4_4_;
      if ((int **)local_8c._4_4_ != (int **)0x0) {
        ppiVar6 = *(int ***)local_8c._4_4_;
      }
      GUI::Interface::meth_0x429c70((Interface *)local_8c,(int)ppiVar6,puVar21,puVar2);
    }
  }
  piVar7 = &DAT_006f2b34;
  iVar15 = 0;
LAB_0042ea00:
  if (*piVar7 != param_1) goto code_r0x0042ea08;
  if (local_94 == 1) {
    ppuVar18 = (undefined **)(&PTR_s_PCFemale_CRT_006f2b3c)[iVar15 * 4];
  }
  else {
    ppuVar18 = (undefined **)(&PTR_s_Default_PC_CRT_006f2b40)[iVar15 * 4];
  }
  if (ppuVar18 != (undefined **)0x0) {
    if ((undefined **)this->mbr_0xb4 != ppuVar18) {
      dVar12 = this->mbr_0x4;
      this->mbr_0xb4 = (dword)ppuVar18;
      if (dVar12 != 0) {
        (***(code ***)(*(int *)(*(int *)(dVar12 + 4) + 4) + 4 + dVar12))(1);
        this->mbr_0x4 = 0;
      }
      local_9c = (ModelInstance *)operator_new(0xbfc);
      local_4._0_1_ = 2;
      if (local_9c == (ModelInstance *)0x0) {
        pGVar8 = (GamePlayer *)0x0;
      }
      else {
        pGVar8 = GamePlayer::GamePlayer((GamePlayer *)local_9c,1);
      }
      this->mbr_0x4 = (dword)pGVar8;
      local_4._0_1_ = 1;
      net::critical_section::meth_0x551880
                ((critical_section *)
                 ((int)&(pGVar8->GameCreature).GameEntity.mbr_0x4 +
                 *(int *)((pGVar8->GameCreature).GameEntity.mbr_0x4 + 4)),ppuVar18,0,0,unaff_DI,
                 unaff_ESI);
      pcVar5 = "";
      do {
        pcVar10 = pcVar5;
        pcVar5 = pcVar10 + 1;
      } while (*pcVar10 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)(*(int *)(*(int *)(this->mbr_0x4 + 4) + 4) + this->mbr_0x4 + 0x2a4)
                 ,"",(uint)(pcVar10 + -0x64d7d8));
    }
    dVar12 = this->mbr_0xec;
    local_9c = *(ModelInstance **)
                (&DAT_006f2834 + ((uint)(local_94 == 1) * 4 + 1 + iVar15 * 9 + this->mbr_0xe8) * 4);
    dVar3 = this->mbr_0x4;
    iVar15 = *(int *)(*(int *)(dVar3 + 4) + 4);
    if (*(int *)(iVar15 + 0x164 + dVar3) == 0) {
      Entity::meth_0x54dc50((Entity *)(iVar15 + dVar3 + 4),&local_9c->vftptr_0x0,1);
      local_9c = *(ModelInstance **)
                  (*(int *)(*(int *)(this->mbr_0x4 + 4) + 4) + 0x164 + this->mbr_0x4);
      if (local_9c != (ModelInstance *)0x0) {
        if ((int)dVar12 < 0) {
          uStack_4c = 0xf;
          dStack_50 = 0;
          pvStack_60 = (void *)((uint)pvStack_60 & 0xffffff00);
          pcVar5 = "";
          do {
            pcVar10 = pcVar5;
            pcVar5 = pcVar10 + 1;
          } while (*pcVar10 != '\0');
          ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_64,"",(uint)(pcVar10 + -0x64d7d8));
          p_Var9 = a_Stack_64;
          local_4 = 4;
          uVar13 = 2;
        }
        else {
          p_Var9 = (_String_base *)
                   ModelInstance::meth_0x566fb0
                             (local_9c,auStack_b8,(undefined4 *)0x0,dVar12,(char *)0x0);
          local_4._0_1_ = 3;
          uVar13 = 1;
        }
        uStack_68 = 0xf;
        uStack_6c._0_1_ = 0;
        uStack_6c._1_3_ = 0;
        apppppppuStack_7c[0] = (undefined4 *******)((uint)apppppppuStack_7c[0] & 0xffffff00);
        local_90 = uVar13;
        ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)(local_8c + 0xc),p_Var9,0,0xffffffff);
        if ((uVar13 & 2) != 0) {
          uVar13 = uVar13 & 0xfffffffd;
          if (0xf < uStack_4c) {
                    /* WARNING: Subroutine does not return */
            _free(pvStack_60);
          }
          uStack_4c = 0xf;
          dStack_50 = 0;
          pvStack_60 = (void *)((uint)pvStack_60 & 0xffffff00);
        }
        local_4 = 6;
        if ((uVar13 & 1) != 0) {
          if (0xf < uStack_a0) {
                    /* WARNING: Subroutine does not return */
            _free(apppppppuStack_b4[0]);
          }
          uStack_a0 = 0xf;
          uStack_a4 = 0;
          apppppppuStack_b4[0] = (undefined4 *******)((uint)apppppppuStack_b4[0] & 0xffffff00);
        }
        pppppppuVar16 = apppppppuStack_7c[0];
        if (uStack_68 < 0x10) {
          pppppppuVar16 = apppppppuStack_7c;
        }
        if (pppppppuVar16 == (undefined4 *******)0x0) {
          pppppppuVar16 = (undefined4 *******)&DAT_0064d7d8;
        }
        pppppppuVar11 = pppppppuVar16;
        do {
          cVar1 = *(char *)pppppppuVar11;
          pppppppuVar11 = (undefined4 *******)((int)pppppppuVar11 + 1);
        } while (cVar1 != '\0');
        ::cls_0x50db20::meth_0x401bd0
                  ((cls_0x50db20 *)
                   (*(int *)(*(int *)(this->mbr_0x4 + 4) + 4) + this->mbr_0x4 + 0x238),
                   (char *)pppppppuVar16,(int)pppppppuVar11 - ((int)pppppppuVar16 + 1));
        pppppppuVar16 = apppppppuStack_7c[0];
        if (uStack_68 < 0x10) {
          pppppppuVar16 = apppppppuStack_7c;
        }
        ModelInstance::SetSocketModel(local_9c,0,pppppppuVar16);
        goto LAB_0042eebb;
      }
    }
    else {
      pMVar4 = *(ModelInstance **)(*(int *)(*(int *)(dVar3 + 4) + 4) + 0x164 + dVar3);
      if (((int)dVar12 < 0) || (pMVar4 == (ModelInstance *)0x0)) {
        uStack_4c = 0xf;
        dStack_50 = 0;
        pvStack_60 = (void *)((uint)pvStack_60 & 0xffffff00);
        pcVar5 = "";
        do {
          pcVar10 = pcVar5;
          pcVar5 = pcVar10 + 1;
        } while (*pcVar10 != '\0');
        ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_64,"",(uint)(pcVar10 + -0x64d7d8));
        p_Var9 = a_Stack_64;
        local_4 = 9;
        uVar13 = 8;
      }
      else {
        p_Var9 = (_String_base *)
                 ModelInstance::meth_0x566fb0
                           (pMVar4,auStack_b8,(undefined4 *)0x0,dVar12,(char *)0x0);
        local_4._0_1_ = 8;
        uVar13 = 4;
      }
      uStack_68 = 0xf;
      uStack_6c._0_1_ = 0;
      uStack_6c._1_3_ = 0;
      apppppppuStack_7c[0] = (undefined4 *******)((uint)apppppppuStack_7c[0] & 0xffffff00);
      local_90 = uVar13;
      ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)(local_8c + 0xc),p_Var9,0,0xffffffff);
      if ((uVar13 & 8) != 0) {
        uVar13 = uVar13 & 0xfffffff7;
        if (0xf < uStack_4c) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_60);
        }
        uStack_4c = 0xf;
        dStack_50 = 0;
        pvStack_60 = (void *)((uint)pvStack_60 & 0xffffff00);
      }
      local_4 = 0xb;
      if ((uVar13 & 4) != 0) {
        if (0xf < uStack_a0) {
                    /* WARNING: Subroutine does not return */
          _free(apppppppuStack_b4[0]);
        }
        uStack_a0 = 0xf;
        uStack_a4 = 0;
        apppppppuStack_b4[0] = (undefined4 *******)((uint)apppppppuStack_b4[0] & 0xffffff00);
      }
      pppppppuVar16 = apppppppuStack_7c[0];
      if (uStack_68 < 0x10) {
        pppppppuVar16 = apppppppuStack_7c;
      }
      if (pppppppuVar16 == (undefined4 *******)0x0) {
        pppppppuVar16 = (undefined4 *******)&DAT_0064d7d8;
      }
      pppppppuVar11 = pppppppuVar16;
      do {
        cVar1 = *(char *)pppppppuVar11;
        pppppppuVar11 = (undefined4 *******)((int)pppppppuVar11 + 1);
      } while (cVar1 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)(*(int *)(*(int *)(this->mbr_0x4 + 4) + 4) + this->mbr_0x4 + 0x238)
                 ,(char *)pppppppuVar16,(int)pppppppuVar11 - ((int)pppppppuVar16 + 1));
      Entity::meth_0x54dc50
                ((Entity *)(*(int *)(*(int *)(this->mbr_0x4 + 4) + 4) + 4 + this->mbr_0x4),
                 &local_9c->vftptr_0x0,1);
LAB_0042eebb:
      local_4._0_1_ = 1;
      if (0xf < uStack_68) {
                    /* WARNING: Subroutine does not return */
        _free(apppppppuStack_7c[0]);
      }
    }
    (**(code **)(*(int *)(*(int *)(*(int *)(this->mbr_0x4 + 4) + 4) + 4 + this->mbr_0x4) + 0xe0))();
    Entity::meth_0x548d80
              ((Entity *)(*(int *)(*(int *)(this->mbr_0x4 + 4) + 4) + 4 + this->mbr_0x4),-1,
               0xffffffff);
    Entity::meth_0x548d80
              ((Entity *)(*(int *)(*(int *)(this->mbr_0x4 + 4) + 4) + 4 + this->mbr_0x4),0x1a0,0);
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)(this->mbr_0x4 + 0x804),local_2c,0,0xffffffff);
    *(int **)(this->mbr_0x4 + 0xcc) = local_98;
    *(int *)(this->mbr_0x4 + 0xd0) = local_94;
    *(int *)(this->mbr_0x4 + 200) = param_1;
    iVar15 = 0;
    do {
      meth_0x427040(this,iVar15,(int)(&local_48)[iVar15]);
      iVar15 = iVar15 + 1;
    } while (iVar15 < 7);
    ppiVar6 = *(int ***)(this->mbr_0x4 + 0x26c);
    if (ppiVar6 == (int **)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = *ppiVar6;
    }
    GUI::Interface::meth_0x4b9d60
              ((Interface *)(this->mbr_0x4 + 0x268),&local_98,piVar7,(int *)ppiVar6);
    ppiVar6 = (int **)local_8c._4_4_;
    if ((int **)local_8c._4_4_ == (int **)0x0) {
      ppiVar19 = (int **)0x0;
    }
    else {
      ppiVar19 = *(int ***)local_8c._4_4_;
    }
    for (; ppiVar19 != ppiVar6; ppiVar19 = (int **)*ppiVar19) {
      cls_0x409820::meth_0x40c890((cls_0x409820 *)this->mbr_0x4,(int)ppiVar19[2]);
    }
    goto LAB_0042ea37;
  }
  goto LAB_0042ea13;
code_r0x0042ea08:
  piVar7 = piVar7 + 4;
  iVar15 = iVar15 + 1;
  if (0x6f2b63 < (int)piVar7) goto LAB_0042ea13;
  goto LAB_0042ea00;
LAB_0042ea13:
  dVar12 = this->mbr_0x4;
  if (dVar12 != 0) {
    (***(code ***)(*(int *)(*(int *)(dVar12 + 4) + 4) + 4 + dVar12))(1);
    this->mbr_0x4 = 0;
  }
  this->mbr_0xb4 = 0;
  ppiVar6 = (int **)local_8c._4_4_;
LAB_0042ea37:
  dVar12 = this->mbr_0xf0;
  dVar3 = this->mbr_0xf4;
  meth_0x42c6d0(this);
  meth_0x42c860(this);
  this->mbr_0xf0 = dVar12;
  this->mbr_0xf4 = dVar3;
  if (this->mbr_0x4 == 0) goto LAB_0042f520;
  *(int *)(this->mbr_0x4 + 200) = param_1;
  pMVar4 = *(ModelInstance **)(*(int *)(*(int *)(this->mbr_0x4 + 4) + 4) + 0x164 + this->mbr_0x4);
  if (pMVar4 == (ModelInstance *)0x0) goto LAB_0042f520;
  if (param_2 == '\0') {
    if (-1 < (int)this->mbr_0xf0) {
      if (this->mbr_0xfc == 0) {
        iVar15 = 0;
      }
      else {
        iVar15 = (int)(this->mbr_0x100 - this->mbr_0xfc) >> 2;
      }
      if ((int)this->mbr_0xf0 < iVar15) {
        uVar13 = meth_0x424d40(this);
        ModelInstance::meth_0x426540
                  (pMVar4,auStack_b8,uVar13,*(int *)(this->mbr_0xfc + extraout_EDX_03 * 4));
        local_4._0_1_ = 0x11;
        pppppppuVar16 = apppppppuStack_b4[0];
        if (uStack_a0 < 0x10) {
          pppppppuVar16 = apppppppuStack_b4;
        }
        (*pMVar4->vftptr_0x0->virt_meth_0x565810_4)
                  (pMVar4,2,*(uint *)(this->mbr_0xfc + this->mbr_0xf0 * 4),pppppppuVar16);
        local_4._0_1_ = 1;
        if (0xf < uStack_a0) {
                    /* WARNING: Subroutine does not return */
          _free(apppppppuStack_b4[0]);
        }
      }
    }
    if (-1 < (int)this->mbr_0xf4) {
      if (this->mbr_0x10c == 0) {
        iVar15 = 0;
      }
      else {
        iVar15 = (int)(this->mbr_0x110 - this->mbr_0x10c) >> 2;
      }
      if ((int)this->mbr_0xf4 < iVar15) {
        uVar13 = meth_0x424d40(this);
        ModelInstance::meth_0x426540
                  (pMVar4,auStack_b8,uVar13,*(int *)(this->mbr_0x10c + extraout_EDX_04 * 4));
        local_4._0_1_ = 0x12;
        pppppppuVar16 = apppppppuStack_b4[0];
        if (uStack_a0 < 0x10) {
          pppppppuVar16 = apppppppuStack_b4;
        }
        (*pMVar4->vftptr_0x0->virt_meth_0x565810_4)
                  (pMVar4,3,*(uint *)(this->mbr_0x10c + this->mbr_0xf4 * 4),pppppppuVar16);
        local_4._0_1_ = 1;
        if (0xf < uStack_a0) {
                    /* WARNING: Subroutine does not return */
          _free(apppppppuStack_b4[0]);
        }
      }
    }
    if (((*(int *)(this->mbr_0x4 + 0xd0) == 0) && (-1 < (int)this->mbr_0x118)) &&
       (this->mbr_0x118 < 10)) {
      uVar14 = meth_0x424d60(this);
      uVar13 = (&DAT_006f29b8)[extraout_EDX_05 * 2];
      ModelInstance::meth_0x426540(pMVar4,auStack_b8,uVar14,uVar13);
      local_4._0_1_ = 0x13;
      pppppppuVar16 = apppppppuStack_b4[0];
      if (uStack_a0 < 0x10) {
        pppppppuVar16 = apppppppuStack_b4;
      }
      (*pMVar4->vftptr_0x0->virt_meth_0x565810_4)(pMVar4,4,uVar13,pppppppuVar16);
      local_4._0_1_ = 1;
      if (0xf < uStack_a0) {
                    /* WARNING: Subroutine does not return */
        _free(apppppppuStack_b4[0]);
      }
    }
    if (((*(int *)(this->mbr_0x4 + 0xd0) == 0) && (-1 < (int)this->mbr_0x11c)) &&
       (this->mbr_0x11c < 8)) {
      uVar14 = meth_0x424d70(this);
      uVar13 = (&DAT_006f2a08)[extraout_EDX_06 * 2];
      ModelInstance::meth_0x426540(pMVar4,auStack_b8,uVar14,uVar13);
      local_4._0_1_ = 0x14;
      pppppppuVar16 = apppppppuStack_b4[0];
      if (uStack_a0 < 0x10) {
        pppppppuVar16 = apppppppuStack_b4;
      }
      (*pMVar4->vftptr_0x0->virt_meth_0x565810_4)(pMVar4,5,uVar13,pppppppuVar16);
      goto LAB_0042f4e3;
    }
  }
  else {
    this->mbr_0xf0 = 1;
    if (this->mbr_0xfc == 0) {
      iVar15 = 0;
    }
    else {
      iVar15 = (int)(this->mbr_0x100 - this->mbr_0xfc) >> 2;
    }
    dVar12 = 0;
    if (0 < iVar15) {
      do {
        if (*(int *)(this->mbr_0xfc + dVar12 * 4) == *(int *)(pMVar4->mbr_0x14 + 8)) {
          this->mbr_0xf0 = dVar12;
          break;
        }
        dVar12 = dVar12 + 1;
      } while ((int)dVar12 < iVar15);
    }
    this->mbr_0xf4 = 0;
    if (this->mbr_0x10c == 0) {
      iVar15 = 0;
    }
    else {
      iVar15 = (int)(this->mbr_0x110 - this->mbr_0x10c) >> 2;
    }
    dVar12 = 0;
    if (0 < iVar15) {
      do {
        if (*(int *)(this->mbr_0x10c + dVar12 * 4) == *(int *)(pMVar4->mbr_0x14 + 0xc)) {
          this->mbr_0xf4 = dVar12;
          break;
        }
        dVar12 = dVar12 + 1;
      } while ((int)dVar12 < iVar15);
    }
    this->mbr_0x118 = 0;
    dVar12 = 0;
    do {
      if ((&DAT_006f29b8)[dVar12 * 2] == *(int *)(pMVar4->mbr_0x14 + 0x10)) {
        this->mbr_0x118 = dVar12;
        break;
      }
      dVar12 = dVar12 + 1;
    } while ((int)dVar12 < 10);
    this->mbr_0x11c = 0;
    dVar12 = 0;
    do {
      if ((&DAT_006f2a08)[dVar12 * 2] == *(int *)(pMVar4->mbr_0x14 + 0x14)) {
        this->mbr_0x11c = dVar12;
        break;
      }
      dVar12 = dVar12 + 1;
    } while ((int)dVar12 < 8);
    if (-1 < (int)this->mbr_0xf0) {
      if (this->mbr_0xfc == 0) {
        iVar15 = 0;
      }
      else {
        iVar15 = (int)(this->mbr_0x100 - this->mbr_0xfc) >> 2;
      }
      if ((int)this->mbr_0xf0 < iVar15) {
        uVar13 = meth_0x424d40(this);
        ModelInstance::meth_0x426540
                  (pMVar4,auStack_b8,uVar13,*(int *)(this->mbr_0xfc + extraout_EDX * 4));
        local_4._0_1_ = 0xd;
        pppppppuVar16 = apppppppuStack_b4[0];
        if (uStack_a0 < 0x10) {
          pppppppuVar16 = apppppppuStack_b4;
        }
        ModelInstance::SetSocketModel(pMVar4,2,pppppppuVar16);
        local_4._0_1_ = 1;
        if (0xf < uStack_a0) {
                    /* WARNING: Subroutine does not return */
          _free(apppppppuStack_b4[0]);
        }
      }
    }
    if (-1 < (int)this->mbr_0xf4) {
      if (this->mbr_0x10c == 0) {
        iVar15 = 0;
      }
      else {
        iVar15 = (int)(this->mbr_0x110 - this->mbr_0x10c) >> 2;
      }
      if ((int)this->mbr_0xf4 < iVar15) {
        uVar13 = meth_0x424d40(this);
        ModelInstance::meth_0x426540
                  (pMVar4,auStack_b8,uVar13,*(int *)(this->mbr_0x10c + extraout_EDX_00 * 4));
        local_4._0_1_ = 0xe;
        pppppppuVar16 = apppppppuStack_b4[0];
        if (uStack_a0 < 0x10) {
          pppppppuVar16 = apppppppuStack_b4;
        }
        ModelInstance::SetSocketModel(pMVar4,3,pppppppuVar16);
        local_4._0_1_ = 1;
        if (0xf < uStack_a0) {
                    /* WARNING: Subroutine does not return */
          _free(apppppppuStack_b4[0]);
        }
      }
    }
    if (((*(int *)(this->mbr_0x4 + 0xd0) == 0) && (-1 < (int)this->mbr_0x118)) &&
       (this->mbr_0x118 < 10)) {
      uVar13 = meth_0x424d60(this);
      ModelInstance::meth_0x426540(pMVar4,auStack_b8,uVar13,(&DAT_006f29b8)[extraout_EDX_01 * 2]);
      local_4._0_1_ = 0xf;
      pppppppuVar16 = apppppppuStack_b4[0];
      if (uStack_a0 < 0x10) {
        pppppppuVar16 = apppppppuStack_b4;
      }
      ModelInstance::SetSocketModel(pMVar4,4,pppppppuVar16);
      local_4._0_1_ = 1;
      if (0xf < uStack_a0) {
                    /* WARNING: Subroutine does not return */
        _free(apppppppuStack_b4[0]);
      }
    }
    if (((*(int *)(this->mbr_0x4 + 0xd0) == 0) && (-1 < (int)this->mbr_0x11c)) &&
       (this->mbr_0x11c < 8)) {
      uVar13 = meth_0x424d70(this);
      ModelInstance::meth_0x426540(pMVar4,auStack_b8,uVar13,(&DAT_006f2a08)[extraout_EDX_02 * 2]);
      local_4._0_1_ = 0x10;
      pppppppuVar16 = apppppppuStack_b4[0];
      if (uStack_a0 < 0x10) {
        pppppppuVar16 = apppppppuStack_b4;
      }
      ModelInstance::SetSocketModel(pMVar4,5,pppppppuVar16);
LAB_0042f4e3:
      local_4._0_1_ = 1;
      if (0xf < uStack_a0) {
                    /* WARNING: Subroutine does not return */
        _free(apppppppuStack_b4[0]);
      }
    }
  }
  ModelInstance::meth_0x564280(pMVar4,0);
  ModelInstance::meth_0x564340(pMVar4,0xf0f0f0);
  ModelInstance::meth_0x5642e0(pMVar4,1);
  ppiVar6 = (int **)local_8c._4_4_;
LAB_0042f520:
  if (ppiVar6 == (int **)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = *ppiVar6;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)local_8c,&local_98,piVar7,(int *)ppiVar6);
                    /* WARNING: Subroutine does not return */
  _free((void *)local_8c._4_4_);
}



void __thiscall cls_0x424a70::meth_0x42f5a0(cls_0x424a70 *this)

{
  undefined4 unaff_ESI;
  
  if (this->mbr_0x4 != 0) {
    meth_0x426c20(this,this->mbr_0x4 + 0x804);
    meth_0x426ce0(this,(char)*(undefined4 *)(this->mbr_0x4 + 0xcc),unaff_ESI);
    meth_0x426e40(this,*(int *)(this->mbr_0x4 + 0xd0));
    CounterControl::meth_0x4313b0
              ((CounterControl *)this->mbr_0x10,*(int *)(this->mbr_0x4 + 0x760),2);
    CounterControl::meth_0x4313b0
              ((CounterControl *)this->mbr_0x14,*(int *)(this->mbr_0x4 + 0x764),2);
    CounterControl::meth_0x4313b0
              ((CounterControl *)this->mbr_0x18,*(int *)(this->mbr_0x4 + 0x768),2);
    CounterControl::meth_0x4313b0
              ((CounterControl *)this->mbr_0x1c,*(int *)(this->mbr_0x4 + 0x76c),2);
    CounterControl::meth_0x4313b0
              ((CounterControl *)this->mbr_0x20,*(int *)(this->mbr_0x4 + 0x770),2);
    CounterControl::meth_0x4313b0
              ((CounterControl *)this->mbr_0x24,*(int *)(this->mbr_0x4 + 0x774),2);
    CounterControl::meth_0x4313b0
              ((CounterControl *)this->mbr_0x28,*(int *)(this->mbr_0x4 + 0x778),2);
    meth_0x424ca0(this,'\x01');
    meth_0x425bb0(this);
    meth_0x424cd0(this,'\x01');
    meth_0x429b20(this);
    meth_0x427560(this);
    meth_0x427910(this);
    meth_0x427a40(this);
    meth_0x42c6d0(this);
    meth_0x42c860(this);
    meth_0x42cdb0(this);
    meth_0x42d130(this);
    meth_0x42d4c0(this);
    meth_0x42d880(this);
    meth_0x42dc40(this);
    meth_0x42e070(this);
    meth_0x42e4a0(this);
    meth_0x425000(this);
    meth_0x425020(this);
    meth_0x425040(this);
    meth_0x425090(this);
    meth_0x4250e0(this);
    meth_0x425100(this);
    meth_0x425120(this);
    return;
  }
  return;
}



void __thiscall cls_0x424a70::meth_0x42f710(cls_0x424a70 *this)

{
  meth_0x42e870(this,0,'\0');
  meth_0x42d4c0(this);
  meth_0x42d880(this);
  meth_0x42dc40(this);
  meth_0x42e070(this);
  return;
}



void __thiscall cls_0x424a70::meth_0x42f740(cls_0x424a70 *this,int param_1)

{
  int iVar1;
  
  iVar1 = Gregorian::Get_mbr_0x2c((Gregorian *)this->mbr_0x34);
  this->mbr_0xe8 = iVar1 + param_1;
  meth_0x425000(this);
  meth_0x42e870(this,0,'\0');
  return;
}



void __thiscall cls_0x424a70::meth_0x42f9e0(cls_0x424a70 *this)

{
  dword dVar1;
  char *pcVar2;
  DWORD DVar3;
  int *piVar4;
  char *pcVar5;
  uint unaff_EBX;
  uint unaff_ESI;
  void *pvStack_44;
  void *pvStack_40;
  dword dStack_3c;
  dword dStack_38;
  VFX_Parameter__vftable_673a20 *pVStack_34;
  VFX_Parameter__vftable_673a20 *pVStack_30;
  VFX_Parameter__vftable_673a20 *pVStack_2c;
  dword dStack_20;
  uint uStack_1c;
  VFX_Parameter__vftable_673a20 *pVStack_18;
  dword dStack_10;
  void *pvStack_c;
  undefined *puStack_8;
  dword dStack_4;
  
  dStack_4 = 0xffffffff;
  puStack_8 = &LAB_0062d398;
  pvStack_c = ExceptionList;
  dVar1 = this->mbr_0x4;
  ExceptionList = &pvStack_c;
  if (dVar1 != 0) {
    ExceptionList = &pvStack_c;
    (***(code ***)(*(int *)(*(int *)(dVar1 + 4) + 4) + 4 + dVar1))(1);
    this->mbr_0x4 = 0;
  }
  this->mbr_0xb4 = 0;
  this->mbr_0xc0 = 0x40490fdb;
  this->mbr_0xc4 = 0x41200000;
  this->mbr_0xc8 = 0x41d00000;
  DVar3 = timeGetTime();
  this->mbr_0xcc = DVar3;
  this->mbr_0xd8 = 0;
  this->mbr_0xdc = 0;
  this->mbr_0xe0 = 0;
  this->mbr_0xe8 = 0;
  this->mbr_0xec = 0xc;
  this->mbr_0xf0 = 1;
  this->mbr_0xf4 = 0;
  this->mbr_0x118 = 0;
  this->mbr_0x11c = 0;
  this->mbr_0x120 = 0;
  pVStack_2c = (VFX_Parameter__vftable_673a20 *)0xf;
  pVStack_30 = (VFX_Parameter__vftable_673a20 *)0x0;
  pvStack_40 = (void *)((uint)pvStack_40 & 0xffffff00);
  pcVar2 = "winThresholds";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&pvStack_44,"winThresholds",(uint)(pcVar5 + -0x652c90));
  dStack_4 = 0;
  piVar4 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)&pvStack_44);
  dStack_4 = 0xffffffff;
  if ((VFX_Parameter__vftable_673a20 *)0xf < pVStack_2c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_40);
  }
  pVStack_2c = (VFX_Parameter__vftable_673a20 *)0xf;
  pVStack_30 = (VFX_Parameter__vftable_673a20 *)0x0;
  pvStack_40 = (void *)((uint)pvStack_40 & 0xffffff00);
  (**(code **)(*piVar4 + 0x54))(1);
  pVStack_30 = (VFX_Parameter__vftable_673a20 *)0xf;
  pVStack_34 = (VFX_Parameter__vftable_673a20 *)0x0;
  pvStack_44 = (void *)((uint)pvStack_44 & 0xffffff00);
  pcVar2 = "winStats";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&stack0xffffffb8,"winStats",(uint)(pcVar5 + -0x652c84));
  puStack_8 = (undefined *)0x1;
  piVar4 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                             (int)&stack0xffffffb8);
  puStack_8 = (undefined *)0xffffffff;
  if ((VFX_Parameter__vftable_673a20 *)0xf < pVStack_30) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_44);
  }
  pVStack_30 = (VFX_Parameter__vftable_673a20 *)0xf;
  pVStack_34 = (VFX_Parameter__vftable_673a20 *)0x0;
  pvStack_44 = (void *)((uint)pvStack_44 & 0xffffff00);
  (**(code **)(*piVar4 + 0x54))(0);
  pVStack_34 = (VFX_Parameter__vftable_673a20 *)0xf;
  dStack_38 = 0;
  pcVar2 = "winModel";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&stack0xffffffb4,"winModel",(uint)(pcVar5 + -0x652724));
  pvStack_c = (void *)0x2;
  piVar4 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                             (int)&stack0xffffffb4);
  pvStack_c = (void *)0xffffffff;
  if ((VFX_Parameter__vftable_673a20 *)0xf < pVStack_34) {
                    /* WARNING: Subroutine does not return */
    _free((void *)(unaff_EBX & 0xffffff00));
  }
  pVStack_34 = (VFX_Parameter__vftable_673a20 *)0xf;
  dStack_38 = 0;
  (**(code **)(*piVar4 + 0x54))(0);
  dStack_38 = 0xf;
  dStack_3c = 0;
  pcVar2 = "btnStats";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&stack0xffffffb0,"btnStats",(uint)(pcVar5 + -0x652c78));
  dStack_10 = 3;
  piVar4 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                             (int)&stack0xffffffb0);
  dStack_10 = 0xffffffff;
  if (0xf < dStack_38) {
                    /* WARNING: Subroutine does not return */
    _free((void *)(unaff_ESI & 0xffffff00));
  }
  dStack_38 = 0xf;
  dStack_3c = 0;
  (**(code **)(*piVar4 + 0xc4))();
  uStack_1c = 0xf;
  dStack_20 = 0;
  pVStack_30 = (VFX_Parameter__vftable_673a20 *)((uint)pVStack_30 & 0xffffff00);
  pcVar2 = "btnThresholds";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&pVStack_34,"btnThresholds",(uint)(pcVar5 + -0x652c68));
  dStack_10 = 4;
  piVar4 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)&pVStack_34);
  dStack_10 = 0xffffffff;
  if (0xf < uStack_1c) {
                    /* WARNING: Subroutine does not return */
    _free(pVStack_30);
  }
  uStack_1c = 0xf;
  dStack_20 = 0;
  pVStack_30 = (VFX_Parameter__vftable_673a20 *)((uint)pVStack_30 & 0xffffff00);
  (**(code **)(*piVar4 + 0xc4))();
  this->mbr_0xd0 = 1;
  meth_0x42e870(this,0,'\x01');
  meth_0x42f5a0(this);
  meth_0x4271a0(this,(int *)0x0);
  CLoadMapInterface::meth_0x495220
            ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),0);
  meth_0x424be0(this);
  ExceptionList = pVStack_18;
  return;
}



void __thiscall
cls_0x424a70::meth_0x42fd60
          (cls_0x424a70 *this,int param_1,uint param_2,void *param_3,uint param_4,undefined4 param_5
          ,uint param_6)

{
  switch(param_1) {
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
    meth_0x42f740(this,param_1 + -0xb);
    return;
  default:
    return;
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
    meth_0x428250(this,param_1 + -0x15);
    return;
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
    meth_0x4284b0(this,param_1 + -0x1f);
    return;
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
    meth_0x4285d0(this,param_1 + -0x29);
    return;
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
    meth_0x4286f0(this,param_1 + -0x33);
    return;
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
    FUN_00428800(this,param_1 + -0x3d);
    return;
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
    FUN_00428910(this,param_1 + -0x47);
    return;
  }
}


