#include "../include/GameInventory.h"

void __thiscall GameInventory::meth_0x4693c0(GameInventory *this,int param_1)

{
  (&this->mbr_0x14)[param_1] = 0;
  return;
}



void __thiscall GameInventory::meth_0x4693d0(GameInventory *this,int param_1)

{
  if ((cls_0x616328 *)(&this->mbr_0x14)[param_1] != (cls_0x616328 *)0x0) {
    FUN_006165e0((cls_0x616328 *)(&this->mbr_0x14)[param_1],0,&Entity::RTTI_Type_Descriptor,
                 &GameItem::RTTI_Type_Descriptor,0);
  }
  return;
}



void __thiscall GameInventory::virt_meth_0x469410(GameInventory *this,int *param_1)

{
  (*(this->Inventory).vftptr_0x0[1].virt_meth_0x560100_4)(&this->Inventory,(int)param_1);
  Inventory::virt_meth_0x55fd10(&this->Inventory);
  return;
}



void __thiscall GameInventory::virt_meth_0x469550(GameInventory *this,int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  cls_0x4d8d70 *this_00;
  int *piVar4;
  GameActionEquip *this_01;
  int **_Memory;
  int *piVar5;
  
  if ((undefined4 *)this->mbr_0x44 == (undefined4 *)0x0) {
    _Memory = (int **)0x0;
  }
  else {
    _Memory = *(int ***)(undefined4 *)this->mbr_0x44;
  }
  if (_Memory != (int **)this->mbr_0x44) {
    do {
      if (_Memory[4] == (int *)param_1[0x77]) {
        if (_Memory != (int **)this->mbr_0x44) {
          *_Memory[1] = (int)*_Memory;
          (*_Memory)[1] = (int)_Memory[1];
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        break;
      }
      _Memory = (int **)*_Memory;
    } while (_Memory != (int **)this->mbr_0x44);
  }
  iVar2 = FUN_006165e0((cls_0x616328 *)param_1,0,&Entity::RTTI_Type_Descriptor,
                       &GameItem::RTTI_Type_Descriptor,0);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0xa0) == 5)) {
    if (DAT_0070bd98 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
    }
    piVar4 = (int *)(**(code **)(*piVar4 + 0x68))();
    iVar2 = *piVar4;
    iVar3 = GameActionEquip::meth_0x54be10(this_01);
    cVar1 = (**(code **)(iVar2 + 0xc))(iVar3);
    if (cVar1 == '\x01') {
      if (DAT_0070bd98 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
      }
      piVar5 = param_1 + 0x70;
      this_00 = (cls_0x4d8d70 *)(**(code **)(*piVar4 + 0xac))();
      cls_0x4d8d70::meth_0x5a00f0(this_00,piVar5);
      return;
    }
  }
  (*(this->Inventory).vftptr_0x0[1].virt_meth_0x560100_4)(&this->Inventory,(int)param_1);
  Inventory::virt_meth_0x55fee0(&this->Inventory,param_1);
  iVar2 = FUN_006165e0((cls_0x616328 *)param_1,0,&Entity::RTTI_Type_Descriptor,
                       &GameEntity::RTTI_Type_Descriptor,0);
  this->mbr_0x2c = this->mbr_0x2c - *(int *)(iVar2 + 0x1c);
  return;
}



void __thiscall GameInventory::meth_0x469f90(GameInventory *this,void *param_1)

{
  undefined uVar1;
  ModelInstance *this_00;
  int *piVar2;
  char cVar3;
  void *this_01;
  void *pvVar4;
  void *pvVar5;
  cls_0x50db20 *pcVar6;
  undefined4 *****pppppuVar7;
  GameActionEquip *this_02;
  int iVar8;
  void *unaff_retaddr;
  ushort uVar9;
  char cStack_144;
  char cStack_143;
  char cStack_142;
  char cStack_141;
  undefined4 *****apppppuStack_138 [4];
  dword dStack_128;
  dword dStack_124;
  cls_0x616328 *pcStack_120;
  void *pvStack_118;
  dword dStack_108;
  dword dStack_104;
  void *pvStack_fc;
  undefined4 uStack_ec;
  uint uStack_e8;
  int iStack_e4;
  void *pvStack_e0;
  uint uStack_cc;
  uint auStack_b0 [13];
  uint auStack_7c [13];
  uint auStack_48 [13];
  uint uStack_14;
  void *local_10;
  void *pvStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  uStack_8 = &LAB_0063064d;
  pvStack_c = ExceptionList;
  local_10 = (void *)(DAT_007062c0 ^ (uint)unaff_retaddr);
  ExceptionList = &pvStack_c;
  Entity::meth_0x54b2d0((Entity *)(*(int *)(*(int *)((int)param_1 + 4) + 4) + 4 + (int)param_1));
  (**(code **)(*(int *)(*(int *)(*(int *)((int)param_1 + 4) + 4) + 4 + (int)param_1) + 0x3c))(0);
  uStack_e8 = 0xf;
  uStack_ec = 0;
  pvStack_fc = (void *)((uint)pvStack_fc & 0xffffff00);
  uStack_8 = (undefined *)0x0;
  pcStack_120 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(this_02);
  if (pcStack_120 == (cls_0x616328 *)0x0) {
    if (0xf < uStack_e8) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_fc);
    }
    goto LAB_0046a68e;
  }
  this_00 = (ModelInstance *)pcStack_120[0x58].mbr_0x0;
  if (this_00 == (ModelInstance *)0x0) {
    if (uStack_e8 < 0x10) goto LAB_0046a68e;
    goto LAB_0046a685;
  }
  this_01 = (void *)FUN_006165e0(pcStack_120,0,&Entity::RTTI_Type_Descriptor,
                                 &GameCreature::RTTI_Type_Descriptor,0);
  cStack_144 = *(char *)((int)param_1 + 0xed);
  cStack_142 = *(char *)((int)param_1 + 0xee);
  cStack_141 = *(char *)((int)param_1 + 0xec);
  cVar3 = *(char *)((int)param_1 + 0xef);
  uVar1 = *(undefined *)((int)param_1 + 0xf0);
  cStack_143 = *(char *)((int)param_1 + 0x2c8);
  uVar9 = CONCAT11(cVar3,uVar1);
  iVar8 = (uint)uVar9 << 0x10;
  if (param_1 == (void *)0x0) {
    pvVar4 = (void *)meth_0x4693d0(this,1);
    pvVar5 = (void *)meth_0x4693d0(this,2);
    FUN_00469900(&iStack_e4,unaff_retaddr,this_00);
    FUN_00469900(auStack_7c,pvVar4,this_00);
    FUN_00469900(auStack_48,pvVar5,this_00);
    FUN_00469a90(auStack_b0,this_01,this_00);
    if (pvVar4 != (void *)0x0) {
      if (cStack_141 != '\0') {
        cStack_141 = *(char *)((int)pvVar4 + 0xec) == '\0';
      }
      if (cStack_144 != '\0') {
        cStack_144 = *(char *)((int)pvVar4 + 0xed) == '\0';
      }
      if (cStack_142 != '\0') {
        cStack_142 = *(char *)((int)pvVar4 + 0xee) == '\0';
      }
      if (cVar3 != '\0') {
        iVar8 = (uint)CONCAT11(*(char *)((int)pvVar4 + 0xef) == '\0',uVar1) << 0x10;
      }
      if ((char)((uint)iVar8 >> 0x10) != '\0') {
        iVar8 = (uint)CONCAT11((char)((uint)iVar8 >> 0x18),*(char *)((int)pvVar4 + 0xf0) == '\0') <<
                0x10;
      }
      if (cStack_143 != '\0') {
        cStack_143 = *(char *)((int)pvVar4 + 0x2c8) == '\0';
      }
    }
    uVar9 = (ushort)((uint)iVar8 >> 0x10);
    if (pvVar5 != (void *)0x0) {
      if (cStack_141 != '\0') {
        cStack_141 = *(char *)((int)pvVar5 + 0xec) == '\0';
      }
      if (cStack_144 != '\0') {
        cStack_144 = *(char *)((int)pvVar5 + 0xed) == '\0';
      }
      if (cStack_142 != '\0') {
        cStack_142 = *(char *)((int)pvVar5 + 0xee) == '\0';
      }
      if ((char)((uint)iVar8 >> 0x18) != '\0') {
        uVar9 = (ushort)(CONCAT13(*(char *)((int)pvVar5 + 0xef) == '\0',(int3)iVar8) >> 0x10);
      }
      if ((char)uVar9 != '\0') {
        uVar9 = CONCAT11((char)(uVar9 >> 8),*(char *)((int)pvVar5 + 0xf0) == '\0');
      }
      if (cStack_143 != '\0') {
        cVar3 = *(char *)((int)pvVar5 + 0x2c8);
LAB_0046a34b:
        cStack_143 = cVar3 == '\0';
      }
    }
  }
  else if (((int)param_1 < 1) || (3 < (int)param_1)) {
    FUN_00469900(&iStack_e4,param_1,this_00);
    FUN_00469900(auStack_7c,(void *)0x0,this_00);
    FUN_00469900(auStack_48,(void *)0x0,this_00);
    FUN_00469a90(auStack_b0,this_01,this_00);
  }
  else {
    pvVar4 = (void *)meth_0x4693d0(this,0);
    FUN_00469900(&iStack_e4,param_1,this_00);
    FUN_00469900(auStack_7c,pvVar4,this_00);
    FUN_00469900(auStack_48,(void *)0x0,this_00);
    FUN_00469a90(auStack_b0,this_01,this_00);
    if (pvVar4 != (void *)0x0) {
      if (cStack_141 != '\0') {
        cStack_141 = *(char *)((int)pvVar4 + 0xec) == '\0';
      }
      if (cStack_144 != '\0') {
        cStack_144 = *(char *)((int)pvVar4 + 0xed) == '\0';
      }
      if (cStack_142 != '\0') {
        cStack_142 = *(char *)((int)pvVar4 + 0xee) == '\0';
      }
      if (cVar3 != '\0') {
        uVar9 = CONCAT11(*(char *)((int)pvVar4 + 0xef) == '\0',uVar1);
      }
      if ((char)uVar9 != '\0') {
        uVar9 = CONCAT11((char)(uVar9 >> 8),*(char *)((int)pvVar4 + 0xf0) == '\0');
      }
      if (cStack_143 != '\0') {
        cVar3 = *(char *)((int)pvVar4 + 0x2c8);
        goto LAB_0046a34b;
      }
    }
  }
  iVar8 = 0;
  do {
    if ((&iStack_e4)[iVar8] != -1) {
      if (auStack_7c[iVar8] == 0xffffffff) {
        if (auStack_48[iVar8] == 0xffffffff) {
          if (auStack_b0[iVar8] == 0xffffffff) {
            ModelInstance::meth_0x563cb0(this_00,iVar8);
          }
          else {
            (*this_00->vftptr_0x0->virt_meth_0x565810_4)
                      (this_00,iVar8,auStack_b0[iVar8],(undefined4 *)0x0);
          }
        }
        else {
          (*this_00->vftptr_0x0->virt_meth_0x565810_4)
                    (this_00,iVar8,auStack_48[iVar8],(undefined4 *)0x0);
        }
      }
      else {
        (*this_00->vftptr_0x0->virt_meth_0x565810_4)
                  (this_00,iVar8,auStack_7c[iVar8],(undefined4 *)0x0);
      }
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0xd);
  dStack_124 = 0xf;
  dStack_128 = 0;
  apppppuStack_138[0] = (undefined4 *****)((uint)apppppuStack_138[0] & 0xffffff00);
  uStack_8._0_1_ = 1;
  if (this_01 != (void *)0x0) {
    if ((cStack_141 != '\0') && (auStack_b0[2] != 0xffffffff)) {
      pcVar6 = FUN_00469810(this_01,(cls_0x50db20 *)&iStack_e4,2);
      uStack_8._0_1_ = 2;
      ::cls_0x50db20::meth_0x401b20
                ((cls_0x50db20 *)&stack0xfffffec4,(_String_base *)pcVar6,0,0xffffffff);
      uStack_8._0_1_ = 1;
      if (0xf < uStack_cc) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_e0);
      }
      pppppuVar7 = apppppuStack_138[0];
      if (dStack_124 < 0x10) {
        pppppuVar7 = apppppuStack_138;
      }
      (*this_00->vftptr_0x0->virt_meth_0x565810_4)(this_00,2,auStack_b0[2],pppppuVar7);
    }
    if ((cStack_144 != '\0') && (auStack_b0[5] != 0xffffffff)) {
      pcVar6 = FUN_00469810(this_01,(cls_0x50db20 *)&iStack_e4,5);
      uStack_8._0_1_ = 3;
      ::cls_0x50db20::meth_0x401b20
                ((cls_0x50db20 *)&stack0xfffffec4,(_String_base *)pcVar6,0,0xffffffff);
      uStack_8._0_1_ = 1;
      if (0xf < uStack_cc) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_e0);
      }
      pppppuVar7 = apppppuStack_138[0];
      if (dStack_124 < 0x10) {
        pppppuVar7 = apppppuStack_138;
      }
      (*this_00->vftptr_0x0->virt_meth_0x565810_4)(this_00,5,auStack_b0[5],pppppuVar7);
    }
    if ((cStack_142 != '\0') && (auStack_b0[4] != 0xffffffff)) {
      pcVar6 = FUN_00469810(this_01,(cls_0x50db20 *)&iStack_e4,4);
      uStack_8._0_1_ = 4;
      ::cls_0x50db20::meth_0x401b20
                ((cls_0x50db20 *)&stack0xfffffec4,(_String_base *)pcVar6,0,0xffffffff);
      uStack_8._0_1_ = 1;
      if (0xf < uStack_cc) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_e0);
      }
      pppppuVar7 = apppppuStack_138[0];
      if (dStack_124 < 0x10) {
        pppppuVar7 = apppppuStack_138;
      }
      (*this_00->vftptr_0x0->virt_meth_0x565810_4)(this_00,4,auStack_b0[4],pppppuVar7);
    }
    if (((char)uVar9 != '\0') && (auStack_b0[3] != 0xffffffff)) {
      pcVar6 = FUN_00469810(this_01,(cls_0x50db20 *)&iStack_e4,3);
      uStack_8._0_1_ = 5;
      ::cls_0x50db20::meth_0x401b20
                ((cls_0x50db20 *)&stack0xfffffec4,(_String_base *)pcVar6,0,0xffffffff);
      uStack_8._0_1_ = 1;
      if (0xf < uStack_cc) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_e0);
      }
      pppppuVar7 = apppppuStack_138[0];
      if (dStack_124 < 0x10) {
        pppppuVar7 = apppppuStack_138;
      }
      (*this_00->vftptr_0x0->virt_meth_0x565810_4)(this_00,3,auStack_b0[3],pppppuVar7);
    }
    if (((char)(uVar9 >> 8) != '\0') && (auStack_b0[6] != 0xffffffff)) {
      (*this_00->vftptr_0x0->virt_meth_0x565810_4)(this_00,6,auStack_b0[6],(undefined4 *)0x0);
    }
    if ((cStack_143 != '\0') && (auStack_b0[12] != 0xffffffff)) {
      (*this_00->vftptr_0x0->virt_meth_0x565810_4)(this_00,0xc,auStack_b0[12],(undefined4 *)0x0);
    }
  }
  dStack_104 = 0xf;
  dStack_108 = 0;
  pvStack_118 = (void *)((uint)pvStack_118 & 0xffffff00);
  uStack_8 = (undefined *)CONCAT31(uStack_8._1_3_,6);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&stack0xfffffee4,(_String_base *)((int)unaff_retaddr + 0x378),0,
             0xffffffff);
  if (((dStack_108 != 0) && ((void *)pcStack_120[0x58].mbr_0x0 != (void *)0x0)) &&
     (piVar2 = *(int **)(*(int *)(*(int *)((int)unaff_retaddr + 4) + 4) + 0x164 + (int)unaff_retaddr
                        ), piVar2 != (int *)0x0)) {
    FUN_00564400((void *)pcStack_120[0x58].mbr_0x0,piVar2);
  }
  if (0xf < dStack_104) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_118);
  }
  dStack_104 = 0xf;
  dStack_108 = 0;
  pvStack_118 = (void *)((uint)pvStack_118 & 0xffffff00);
  if (0xf < dStack_124) {
                    /* WARNING: Subroutine does not return */
    _free(apppppuStack_138[0]);
  }
  dStack_124 = 0xf;
  dStack_128 = 0;
  apppppuStack_138[0] = (undefined4 *****)((uint)apppppuStack_138[0] & 0xffffff00);
  if (0xf < uStack_e8) {
LAB_0046a685:
                    /* WARNING: Subroutine does not return */
    _free(pvStack_fc);
  }
LAB_0046a68e:
  ExceptionList = local_10;
  FUN_00616e15(uStack_14 ^ uStack_4);
  return;
}



void __thiscall
GameInventory::meth_0x46a6c0(GameInventory *this,int *param_1,int **param_2,int *param_3)

{
  int **ppiVar1;
  int **ppiVar2;
  char cVar3;
  int *_Str1;
  int iVar4;
  Inventory__vftable_6956a4 *pIVar5;
  int *piVar6;
  int *_Str2;
  cls_0x401b00 *this_00;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  ppiVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630558;
  local_c = ExceptionList;
  ppiVar1 = (int **)param_2[1];
  if (ppiVar1 == (int **)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = *ppiVar1;
  }
  ExceptionList = &local_c;
  GUI::Interface::meth_0x4b9d60((Interface *)param_2,(int **)&param_2,piVar6,(int *)ppiVar1);
  this_00 = (cls_0x401b00 *)param_3;
  ppiVar1 = (int **)param_3[1];
  if (ppiVar1 == (int **)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)param_3,(int **)&param_2,piVar6,(int *)ppiVar1);
  piVar6 = param_1;
  param_2 = (int **)(this->Inventory).mbr_0xc;
  if (param_2 != (int **)0x0) {
    param_2 = (int **)*param_2;
  }
  if (param_2 != (int **)(this->Inventory).mbr_0xc) {
    do {
      param_3 = param_2[2];
      if ((uint)piVar6[6] < 0x10) {
        _Str2 = piVar6 + 1;
      }
      else {
        _Str2 = (int *)piVar6[1];
      }
      if ((uint)param_3[0x69] < 0x10) {
        _Str1 = param_3 + 100;
      }
      else {
        _Str1 = (int *)param_3[100];
      }
      iVar4 = __stricmp((char *)_Str1,(char *)_Str2);
      if (iVar4 == 0) {
        FUN_0056e0b0();
        local_4 = 0;
        cVar3 = (*((this->Inventory).vftptr_0x0)->virt_meth_0x436230_40)(&this->Inventory);
        if (cVar3 == '\0') {
          piVar6 = *(int **)((int)this_00 + 4);
          iVar4 = FUN_00433760(piVar6,piVar6[1],&param_1);
        }
        else {
          piVar6 = ppiVar2[1];
          iVar4 = FUN_00433760(piVar6,piVar6[1],&param_1);
          this_00 = (cls_0x401b00 *)ppiVar2;
        }
        cls_0x401b00::meth_0x401dd0(this_00,1);
        piVar6[1] = iVar4;
        **(int **)(iVar4 + 4) = iVar4;
        local_c = (void *)0xffffffff;
        if (this == (GameInventory *)0x0) {
          pIVar5 = (Inventory__vftable_6956a4 *)0x0;
        }
        else {
          pIVar5 = (this->Inventory).vftptr_0x0;
        }
        GUI::Interface::meth_0x4b9d60
                  ((Interface *)&stack0xffffffe0,&param_1,(int *)pIVar5,(int *)this);
                    /* WARNING: Subroutine does not return */
        _free(this);
      }
      param_2 = (int **)*param_2;
    } while (param_2 != (int **)(this->Inventory).mbr_0xc);
  }
  ExceptionList = local_c;
  return;
}



void __thiscall GameInventory::meth_0x46b100(GameInventory *this,uint param_1)

{
  cls_0x55dc80 *this_00;
  int **ppiVar1;
  cls_0x54aa90 *this_01;
  GameActionEquip *extraout_ECX;
  GameActionEquip *extraout_ECX_00;
  GameActionEquip *extraout_ECX_01;
  GameActionEquip *this_02;
  int *piVar2;
  int **_Memory;
  int iVar3;
  dword local_8;
  cls_0x55dc80 *local_4;
  
  param_1 = *(uint *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x1e0 + param_1);
  this_00 = (cls_0x55dc80 *)&this->mbr_0x34;
  local_4 = this_00;
  cls_0x55dc80::meth_0x51f080(this_00,(int *)&local_8,&param_1);
  if (local_8 != this->mbr_0x38) {
    iVar3 = *(int *)(local_8 + 0x18);
    this_02 = extraout_ECX;
    while (iVar3 != 0) {
      if (*(int **)(local_8 + 0x14) == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = **(int **)(local_8 + 0x14);
      }
      this_01 = (cls_0x54aa90 *)GameActionEquip::meth_0x54be10(this_02);
      this_02 = extraout_ECX_00;
      if (this_01 != (cls_0x54aa90 *)0x0) {
        if (*(int ***)(iVar3 + 0x10) == (int **)0x0) {
          piVar2 = (int *)0x0;
        }
        else {
          piVar2 = **(int ***)(iVar3 + 0x10);
        }
        if (piVar2 != *(int **)(iVar3 + 0x10)) {
          do {
            cls_0x54aa90::meth_0x54aa90(this_01,piVar2[2]);
            piVar2 = (int *)*piVar2;
            this_02 = extraout_ECX_01;
          } while (piVar2 != (int *)*(int *)(iVar3 + 0x10));
        }
      }
      ppiVar1 = *(int ***)(local_8 + 0x14);
      if (ppiVar1 == (int **)0x0) {
        _Memory = (int **)0x0;
      }
      else {
        _Memory = (int **)*ppiVar1;
      }
      if (_Memory != ppiVar1) {
        *_Memory[1] = (int)*_Memory;
        *(int **)((int)*_Memory + 4) = _Memory[1];
        FUN_00469790((int *)_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      this_00 = local_4;
      iVar3 = *(int *)(local_8 + 0x18);
    }
    cls_0x55dc80::meth_0x46add0(this_00,(int **)&param_1);
  }
  return;
}



GameInventory * __thiscall GameInventory::~GameInventory(GameInventory *this)

{
  int **ppiVar1;
  int *piVar2;
  int *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006306ee;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->Inventory).vftptr_0x0 =
       (Inventory__vftable_6956a4 *)&GameInventory__vftable_666754_00666754;
  ppiVar1 = (int **)(this->Inventory).mbr_0xc;
  local_4 = 2;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  if (piVar2 != (int *)(this->Inventory).mbr_0xc) {
    do {
      virt_meth_0x469410(this,(int *)piVar2[2]);
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)(this->Inventory).mbr_0xc);
  }
  ppiVar1 = (int **)this->mbr_0x44;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0x40,&local_10,piVar2,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x44);
}



GameInventory * __thiscall GameInventory::GameInventory(GameInventory *this)

{
  dword dVar1;
  int iVar2;
  dword *pdVar3;
  undefined local_11;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630733;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Inventory::Inventory(&this->Inventory);
  (this->Inventory).vftptr_0x0 =
       (Inventory__vftable_6956a4 *)&GameInventory__vftable_666754_00666754;
  local_4 = 0;
  *(undefined *)&this->mbr_0x34 = local_11;
  dVar1 = FUN_0057c2e0();
  this->mbr_0x38 = dVar1;
  *(undefined *)(dVar1 + 0x1d) = 1;
  *(dword *)(this->mbr_0x38 + 4) = this->mbr_0x38;
  *(dword *)this->mbr_0x38 = this->mbr_0x38;
  *(dword *)(this->mbr_0x38 + 8) = this->mbr_0x38;
  this->mbr_0x3c = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  dVar1 = FUN_00469530();
  this->mbr_0x44 = dVar1;
  this->mbr_0x48 = 0;
  pdVar3 = &this->mbr_0x14;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pdVar3 = 0;
    pdVar3 = pdVar3 + 1;
  }
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0xffffffff;
  ExceptionList = local_c;
  return this;
}



undefined4 * __thiscall GameInventory::virt_meth_0x46ba10(GameInventory *this,byte param_1)

{
  ~GameInventory(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



uint __thiscall GameInventory::Equip(GameInventory *this,int **param_1,int param_2,char param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined4 uVar4;
  Action__vftable_647888 *pAVar5;
  int **ppiVar6;
  cls_0x616328 *pcVar7;
  int *piVar8;
  uint uVar9;
  GameActionEquip *pGVar10;
  int iVar11;
  cls_0x616328 *pcVar12;
  GameEntity *this_00;
  GameActionEquip *extraout_ECX;
  GameActionEquip *extraout_ECX_00;
  GameActionEquip *pGVar13;
  GameActionEquip **extraout_EDX;
  int extraout_EDX_00;
  int unaff_EBP;
  int **ppiVar14;
  int unaff_retaddr;
  undefined auStack_38 [4];
  int **ppiStack_34;
  dword dStack_30;
  dword dStack_20;
  GameActionEquip *pGStack_1c;
  void *pvStack_14;
  undefined4 uStack_c;
  undefined *puStack_8;
  GameActionEquip *pGStack_4;
  
  ppiVar6 = param_1;
  pGStack_4 = (GameActionEquip *)0xffffffff;
  puStack_8 = &LAB_00630778;
  uStack_c = ExceptionList;
  auStack_38[0] = (HeapTracker)0x0;
  auStack_38._1_3_ = 0;
  if (param_1 != (int **)0x0) {
    ExceptionList = &uStack_c;
    dStack_20 = FUN_0056e0b0();
    pGStack_1c = (GameActionEquip *)0x0;
    pGStack_4 = (GameActionEquip *)0x0;
    cVar1 = (*((this->Inventory).vftptr_0x0)->virt_meth_0x436230_40)(&this->Inventory);
    if (cVar1 == '\0') {
      if (ppiVar6[0xb7] != (int *)(this->Inventory).mbr_0x4) {
        (*((this->Inventory).vftptr_0x0)->virt_meth_0x560100_4)(&this->Inventory,(int)ppiVar6);
      }
      piVar3 = (int *)FUN_006165e0((cls_0x616328 *)ppiVar6,0,&Entity::RTTI_Type_Descriptor,
                                   &GameItem::RTTI_Type_Descriptor,0);
      if (piVar3 != (int *)0x0) {
        cls_0x4112c0::cls_0x4112c0((cls_0x4112c0 *)(auStack_38 + 0x18),(int)(piVar3 + 0x2a));
        pGVar10 = pGStack_1c;
        uStack_c = (void *)CONCAT31(uStack_c._1_3_,1);
        if (pGStack_1c == (GameActionEquip *)0x0) {
          pGVar13 = (GameActionEquip *)0x0;
        }
        else {
          pGVar13 = (GameActionEquip *)(pGStack_1c->ActionEquip).Action.vftptr_0x0;
        }
        while( true ) {
          if (pGVar13 == pGVar10) {
            if (pGVar10 == (GameActionEquip *)0x0) {
              pAVar5 = (Action__vftable_647888 *)0x0;
            }
            else {
              pAVar5 = (pGVar10->ActionEquip).Action.vftptr_0x0;
            }
            GUI::Interface::meth_0x4b9d60
                      ((Interface *)(auStack_38 + 0x18),(int **)&param_1,(int *)pAVar5,
                       (int *)pGVar10);
                    /* WARNING: Subroutine does not return */
            _free(pGStack_1c);
          }
          if ((unaff_retaddr == 7) ||
             (uVar4 = FUN_00469430(unaff_retaddr,
                                   (int)*(virt_meth_0x6162e5 **)&(pGVar13->ActionEquip).field_0x8),
             (char)uVar4 != '\0')) break;
          pGVar13 = *extraout_EDX;
        }
        ppiVar6 = (int **)FUN_0056e0b0();
        pGStack_4 = (GameActionEquip *)0x0;
        dStack_30 = 0;
        uStack_c = (void *)CONCAT31(uStack_c._1_3_,2);
        if (pGVar10 != (GameActionEquip *)0x0) {
          pGStack_4 = (GameActionEquip *)(pGVar10->ActionEquip).Action.vftptr_0x0;
        }
        ppiStack_34 = ppiVar6;
        if (pGStack_4 != pGVar10) {
          do {
            iVar11 = *(int *)&(pGStack_4->ActionEquip).field_0x8;
            if (iVar11 == 2) {
              pcVar7 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(pGStack_4);
              FUN_006165e0(pcVar7,0,&Entity::RTTI_Type_Descriptor,&GameEntity::RTTI_Type_Descriptor,
                           0);
              if (((unaff_retaddr == 2) || (unaff_retaddr == 3)) || (unaff_retaddr == 7)) {
                piVar8 = (int *)FUN_00433760(ppiVar6,ppiVar6[1],(undefined4 *)&stack0x00000000);
                cls_0x401b00::meth_0x436410((cls_0x401b00 *)auStack_38,1);
                unaff_EBP = 0x1e;
                goto LAB_0046c082;
              }
            }
            else {
              uVar4 = FUN_00469430(unaff_retaddr,iVar11);
              if (((char)uVar4 == '\0') && (iVar11 = FUN_00469490(extraout_EDX_00), iVar11 == 7)) {
                if (ppiVar6 == (int **)0x0) {
                  piVar3 = (int *)0x0;
                }
                else {
                  piVar3 = *ppiVar6;
                }
                GUI::Interface::meth_0x4b9d60
                          ((Interface *)auStack_38,(int **)&param_1,piVar3,(int *)ppiVar6);
                    /* WARNING: Subroutine does not return */
                _free(ppiStack_34);
              }
              piVar8 = (int *)FUN_00433760(ppiVar6,ppiVar6[1],(undefined4 *)&stack0x00000000);
              cls_0x401b00::meth_0x436410((cls_0x401b00 *)auStack_38,1);
LAB_0046c082:
              ppiVar6[1] = piVar8;
              *(int **)piVar8[1] = piVar8;
              ppiVar6 = ppiStack_34;
            }
            pGStack_4 = (GameActionEquip *)(pGStack_4->ActionEquip).Action.vftptr_0x0;
          } while (pGStack_4 != pGStack_1c);
        }
        uVar9 = FUN_004694b0((int)auStack_38);
        pGVar10 = extraout_ECX;
        if (ppiVar6 == (int **)0x0) {
          ppiVar14 = (int **)0x0;
        }
        else {
          ppiVar14 = (int **)*ppiVar6;
        }
        for (; ppiVar14 != ppiVar6; ppiVar14 = (int **)*ppiVar14) {
          cls_0x469380::meth_0x469380
                    ((cls_0x469380 *)this,*(int *)(piVar3[1] + 4) + 4 + (int)piVar3,(int)ppiVar14[2]
                    );
          pGVar10 = extraout_ECX_00;
        }
        pcVar7 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(pGVar10);
        pGVar10 = (GameActionEquip *)
                  FUN_006165e0(pcVar7,0,&Entity::RTTI_Type_Descriptor,
                               &GameEntity::RTTI_Type_Descriptor,0);
        if (uVar9 == 2) {
          if ((pGVar10 != (GameActionEquip *)0x0) &&
             (iVar11 = GameActionEquip::Get_mbr_0x98(pGVar10), iVar11 != 2)) goto LAB_0046c1ee;
        }
        else if (((uVar9 == 3) && (pGVar10 != (GameActionEquip *)0x0)) &&
                (iVar11 = GameActionEquip::Get_mbr_0x98(pGVar10), iVar11 != 3)) goto LAB_0046c1ee;
        bVar2 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
        if ((bVar2) && ((char)param_1 != '\0')) {
          GameActionEquip::ApplyEquipEffects((GameActionEquip *)this,piVar3);
        }
        GameActionEquip::meth_0x469cf0((GameActionEquip *)this,piVar3,unaff_EBP,uVar9);
        pcVar12 = (cls_0x616328 *)
                  GameActionEquip::meth_0x54be10((GameActionEquip *)(this->Inventory).mbr_0x4);
        this_00 = (GameEntity *)
                  FUN_006165e0(pcVar12,0,&Entity::RTTI_Type_Descriptor,
                               &GameEntity::RTTI_Type_Descriptor,0);
        if (this_00 != (GameEntity *)0x0) {
          GameEntity::SetWeaponStance(this_00,0);
        }
LAB_0046c1ee:
        pGVar10 = (GameActionEquip *)
                  FUN_006165e0(pcVar7,0,&Entity::RTTI_Type_Descriptor,
                               &GameCreature::RTTI_Type_Descriptor,0);
        if (pGVar10 != (GameActionEquip *)0x0) {
          GameActionEquip::meth_0x40a670(pGVar10);
        }
        if (ppiVar6 == (int **)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = *ppiVar6;
        }
        GUI::Interface::meth_0x4b9d60
                  ((Interface *)auStack_38,(int **)&param_1,piVar3,(int *)ppiVar6);
                    /* WARNING: Subroutine does not return */
        _free(ppiStack_34);
      }
    }
    else {
      FUN_00497120((byte *)
                   "GameInventory::Equip() - Item that was already equipped trying to equip itself again.\n"
                  );
    }
    ExceptionList = (void *)GUI::Interface::meth_0x4f6d40((Interface *)(auStack_38 + 0xc));
  }
  uVar9 = (uint)ExceptionList & 0xffffff00;
  ExceptionList = pvStack_14;
  return uVar9;
}


#include "../include/GameInventory.h"
