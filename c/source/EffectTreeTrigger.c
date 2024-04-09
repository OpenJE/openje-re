#include "../include/EffectTreeTrigger.h"

void __thiscall EffectTreeTrigger::virt_meth_0x5aa750(EffectTreeTrigger *this,int **param_1)

{
  int iVar1;
  dword *pdVar2;
  GameActionEquip *extraout_ECX;
  GameActionEquip *extraout_ECX_00;
  GameActionEquip *this_00;
  int **ppiVar3;
  byte bVar4;
  undefined4 unaff_EDI;
  EffectTreeTrigger *local_4;
  
  bVar4 = (byte)unaff_EDI;
  if ((int **)this->mbr_0x80 <= param_1) {
    (this->Trigger).mbr_0x24 = 1;
    return;
  }
  param_1 = *(int ***)(int **)this->mbr_0x6c;
  this_00 = (GameActionEquip *)this;
  local_4 = this;
  if (param_1 != (int **)this->mbr_0x6c) {
    do {
      iVar1 = GameActionEquip::meth_0x54be10(this_00);
      if ((iVar1 == 0) || (*(dword *)(iVar1 + 0x1ec) != this->mbr_0x2c)) {
        pdVar2 = (dword *)cls_0x55dc80::meth_0x52f220
                                    ((cls_0x55dc80 *)&this->mbr_0x68,(int **)&local_4);
        ppiVar3 = (int **)*pdVar2;
        this_00 = extraout_ECX_00;
      }
      else {
        cls_0x55bd50::meth_0x55bd50((cls_0x55bd50 *)&param_1);
        this_00 = extraout_ECX;
        ppiVar3 = param_1;
      }
      bVar4 = (byte)unaff_EDI;
    } while (ppiVar3 != (int **)this->mbr_0x6c);
  }
  if (this->mbr_0x74 != 0) {
    (*(this->Trigger).vftptr_0x0[1].virt_meth_0x5b1960_0)(&this->Trigger,bVar4);
    this->mbr_0x74 = 0;
  }
  return;
}



void __thiscall EffectTreeTrigger::ReevaluateEntities(EffectTreeTrigger *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  Map *this_00;
  cls_0x4027e0 *this_01;
  GameActionEquip *this_02;
  GameActionEquip *extraout_ECX;
  int *piVar6;
  uint *puVar7;
  Map *unaff_ESI;
  Map *pMStack_b0;
  undefined local_ac [20];
  cls_0x616328 *local_98;
  dword local_94;
  dword local_90;
  void *pvStack_c;
  undefined *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b229;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  cls_0x5726c0::cls_0x5726c0((cls_0x5726c0 *)local_ac,(undefined *)&(this->Trigger).mbr_0x18);
  local_ac._12_4_ = (((ActionEquip *)local_ac._4_4_)->Action).vftptr_0x0;
  local_4 = 0;
  this_02 = (GameActionEquip *)local_ac._4_4_;
  if (local_ac._12_4_ != local_ac._4_4_) {
    do {
      uVar4 = GameActionEquip::meth_0x54be10(this_02);
      meth_0x5b16d0(this,uVar4);
      cls_0x405850::meth_0x405850((cls_0x405850 *)(local_ac + 0xc));
      this_02 = extraout_ECX;
    } while (local_ac._12_4_ != local_ac._4_4_);
  }
  if ((this->mbr_0x78 == 0) &&
     (cVar3 = (*(this->Trigger).vftptr_0x0[1].virt_meth_0x56e3f0_4)(this), cVar3 == '\0')) {
    FUN_00497120((byte *)
                 "EffectTreeTrigger::ReevaluateEntities() - Unable to create OCTREE_Shape.\n");
  }
  else {
    local_94 = this->mbr_0x34;
    local_90 = this->mbr_0x38;
    local_98 = (cls_0x616328 *)this->mbr_0x30;
    iVar5 = (**(code **)(*(int *)this->mbr_0x78 + 4))();
    if (iVar5 != 0) {
      FUN_00497120((byte *)
                   "EffectTreeTrigger::ReevaluateEntities() Error: OCTREE_Shape::Move() Failed.");
      local_4 = 0xffffffff;
      GUI::Interface::meth_0x570740
                ((Interface *)local_ac,(int **)&pMStack_b0,
                 (int **)(((ActionEquip *)local_ac._4_4_)->Action).vftptr_0x0,(int **)local_ac._4_4_
                );
      goto LAB_005aab1d;
    }
    if (this->mbr_0x2c != 0) {
      if (DAT_0070bd98 == 0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
      }
      this_00 = (Map *)(**(code **)(*piVar6 + 0x54))();
      pMStack_b0 = this_00;
      if (this_00 != (Map *)0x0) {
        piVar6 = Map::GetOctree(this_00);
        iVar5 = (**(code **)(*piVar6 + 0x9c))();
        if (iVar5 == 0) {
          this_01 = (cls_0x4027e0 *)operator_new(0x10);
          if (this_01 == (cls_0x4027e0 *)0x0) {
            this_01 = (cls_0x4027e0 *)0x0;
          }
          else {
            this_01->mbr_0x4 = 0;
            this_01->mbr_0x8 = 0;
            this_01->mbr_0xc = 0;
          }
          local_4 = local_4 & 0xffffff00;
          iVar5 = (**(code **)(*(int *)this->mbr_0x78 + 0x18))();
          while (iVar5 == 0) {
            iVar5 = 0;
            do {
              if ((&local_98)[iVar5] == (cls_0x616328 *)0x0) break;
              local_ac._0_4_ =
                   FUN_006165e0((&local_98)[iVar5],0,&DynamicObject::RTTI_Type_Descriptor,
                                &Entity::RTTI_Type_Descriptor,0);
              if ((local_ac._0_4_ != 0) && (*(char *)(local_ac._0_4_ + 0x3a0) != '\0')) {
                cls_0x4027e0::meth_0x402eb0(this_01,(undefined4 *)local_ac);
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < 0x20);
            this_00 = unaff_ESI;
            if ((GameActionEquip *)local_ac._4_4_ == (GameActionEquip *)0x0) break;
            iVar5 = (**(code **)(*(int *)this->mbr_0x78 + 0x18))();
          }
          piVar6 = Map::GetOctree(this_00);
          (**(code **)(*piVar6 + 0xa0))();
          puVar1 = (undefined4 *)this_01->mbr_0x4;
          if ((puVar1 == (undefined4 *)0x0) ||
             (puVar2 = (undefined4 *)this_01->mbr_0x8, (int)puVar2 - (int)puVar1 >> 2 == 0)) {
            if ((void *)this_01->mbr_0x4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              _free((void *)this_01->mbr_0x4);
            }
            this_01->mbr_0x4 = 0;
            this_01->mbr_0x8 = 0;
            this_01->mbr_0xc = 0;
                    /* WARNING: Subroutine does not return */
            _free(this_01);
          }
          DAT_0070c740 = &this->mbr_0x30;
          FUN_00559560(puVar1,puVar2,(int)puVar2 - (int)puVar1 >> 2,&LAB_005aa450);
          puVar7 = (uint *)this_01->mbr_0x4;
          if (this->mbr_0x7c == 0) {
            if (puVar7 != (uint *)this_01->mbr_0x8) {
              do {
                meth_0x5b16d0(this,*puVar7);
                puVar7 = puVar7 + 1;
              } while (puVar7 != (uint *)this_01->mbr_0x8);
            }
          }
          else if (puVar7 != (uint *)this_01->mbr_0x8) {
            do {
              GUI::Interface::meth_0x56ec50
                        ((Interface *)&(this->Trigger).mbr_0x18,(int *)&pMStack_b0,
                         (uint *)&stack0xffffff40);
              if (pMStack_b0 == (Map *)(this->Trigger).mbr_0x1c) {
                (*((this->Trigger).vftptr_0x0)->virt_meth_0x5b1750_28)(this);
                (*((this->Trigger).vftptr_0x0)->virt_meth_0x6162e5_12)();
              }
              puVar7 = puVar7 + 1;
            } while (puVar7 != (uint *)this_01->mbr_0x8);
          }
          if ((void *)this_01->mbr_0x4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            _free((void *)this_01->mbr_0x4);
          }
          this_01->mbr_0x4 = 0;
          this_01->mbr_0x8 = 0;
          this_01->mbr_0xc = 0;
                    /* WARNING: Subroutine does not return */
          _free(this_01);
        }
        FUN_00497120((byte *)
                     "EffectTreeTrigger::ReevaluateEntities() Error: OCTREE::ApplyShape() Failed.");
        local_4 = 0xffffffff;
        GUI::Interface::meth_0x570740
                  ((Interface *)local_ac,(int **)&pMStack_b0,
                   (int **)(((ActionEquip *)local_ac._4_4_)->Action).vftptr_0x0,
                   (int **)local_ac._4_4_);
        goto LAB_005aab1d;
      }
    }
  }
  local_4 = 0xffffffff;
  GUI::Interface::meth_0x570740
            ((Interface *)local_ac,(int **)&pMStack_b0,
             (int **)(((ActionEquip *)local_ac._4_4_)->Action).vftptr_0x0,(int **)local_ac._4_4_);
LAB_005aab1d:
                    /* WARNING: Subroutine does not return */
  _free((void *)local_ac._4_4_);
}



EffectTreeTrigger * __thiscall EffectTreeTrigger::~EffectTreeTrigger(EffectTreeTrigger *this)

{
  char cVar1;
  int *piVar2;
  dword dVar3;
  uint uVar4;
  int **ppiVar5;
  int iVar6;
  cls_0x54aa90 *this_00;
  int **ppiVar7;
  GameActionEquip *extraout_ECX;
  GameActionEquip *extraout_ECX_00;
  GameActionEquip *extraout_ECX_01;
  GameActionEquip *extraout_ECX_02;
  GameActionEquip *extraout_ECX_03;
  undefined3 uVar8;
  GameActionEquip *this_01;
  undefined extraout_DL;
  int **ppiVar9;
  int *piVar10;
  EffectTreeTrigger *local_14;
  int *piStack_10;
  void *pvStack_c;
  undefined4 uStack_8;
  undefined4 local_4;
  
  uStack_8 = &LAB_0063b269;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->Trigger).vftptr_0x0 =
       (Trigger__vftable_6a8c4c *)&EffectTreeTrigger__vftable_6a7218_006a7218;
  local_4 = 3;
  local_14 = this;
  if ((critical_section *)this->mbr_0x58 != (critical_section *)0x0) {
    net::critical_section::meth_0x551b60((critical_section *)this->mbr_0x58);
  }
  this_01 = (GameActionEquip *)this->mbr_0x78;
  if (this_01 != (GameActionEquip *)0x0) {
    (*((this_01->ActionEquip).Action.vftptr_0x0)->virt_deldtor_0x4010e0_0)(this_01);
    this->mbr_0x78 = 0;
    this_01 = extraout_ECX;
  }
  if ((this->mbr_0x54 != 0) &&
     (iVar6 = GameActionEquip::meth_0x54be10(this_01), this_01 = extraout_ECX_00, iVar6 != 0)) {
    FUN_0054bdf0(iVar6,extraout_DL,(char)this);
    this_01 = extraout_ECX_01;
  }
  ppiVar9 = *(int ***)(int **)this->mbr_0x6c;
  if (ppiVar9 != (int **)this->mbr_0x6c) {
    do {
      this_00 = (cls_0x54aa90 *)GameActionEquip::meth_0x54be10(this_01);
      if (this_00 == (cls_0x54aa90 *)0x0) {
        cls_0x55dc80::meth_0x52f220((cls_0x55dc80 *)&this->mbr_0x68,&piStack_10);
        this_01 = extraout_ECX_02;
      }
      else {
        piVar2 = ppiVar9[5];
        if ((piVar2 != (int *)0x0) && (piVar10 = (int *)*piVar2, piVar10 != piVar2)) {
          do {
            cls_0x54aa90::meth_0x54aa90(this_00,piVar10[2]);
            piVar10 = (int *)*piVar10;
          } while (piVar10 != ppiVar9[5]);
        }
        cls_0x55dc80::meth_0x52f220((cls_0x55dc80 *)&this->mbr_0x68,&piStack_10);
        this_01 = extraout_ECX_03;
      }
      if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
        ppiVar7 = (int **)ppiVar9[2];
        uVar8 = (undefined3)((uint)this_01 >> 8);
        if (*(char *)((int)ppiVar7 + 0x1d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar7 + 0x1d);
          this_01 = (GameActionEquip *)CONCAT31(uVar8,cVar1);
          ppiVar9 = ppiVar7;
          ppiVar7 = (int **)*ppiVar7;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar7 + 0x1d);
            this_01 = (GameActionEquip *)CONCAT31((int3)((uint)this_01 >> 8),cVar1);
            ppiVar9 = ppiVar7;
            ppiVar7 = (int **)*ppiVar7;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar9[1] + 0x1d);
          this_01 = (GameActionEquip *)CONCAT31(uVar8,cVar1);
          ppiVar5 = (int **)ppiVar9[1];
          ppiVar7 = ppiVar9;
          while ((ppiVar9 = ppiVar5, cVar1 == '\0' && (ppiVar7 == (int **)ppiVar9[2]))) {
            cVar1 = *(char *)((int)ppiVar9[1] + 0x1d);
            this_01 = (GameActionEquip *)CONCAT31((int3)((uint)this_01 >> 8),cVar1);
            ppiVar5 = (int **)ppiVar9[1];
            ppiVar7 = ppiVar9;
          }
        }
      }
    } while (ppiVar9 != (int **)this->mbr_0x6c);
  }
  dVar3 = this->mbr_0x64;
  while( true ) {
    if (dVar3 == 0) {
      uVar4 = (uint)uStack_8 >> 8;
      uStack_8 = (undefined *)CONCAT31((int3)uVar4,2);
      cls_0x55dc80::meth_0x52f590
                ((cls_0x55dc80 *)&this->mbr_0x68,(int **)&local_14,*(int ***)(int **)this->mbr_0x6c,
                 (int **)this->mbr_0x6c);
                    /* WARNING: Subroutine does not return */
      _free((void *)this->mbr_0x6c);
    }
    if ((int *)this->mbr_0x60 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)this->mbr_0x60;
    }
    ppiVar9 = (int **)this->mbr_0x60;
    if (ppiVar9 == (int **)0x0) {
      ppiVar7 = (int **)0x0;
    }
    else {
      ppiVar7 = (int **)*ppiVar9;
    }
    if (ppiVar7 != ppiVar9) break;
    GameActionEquip::meth_0x55a570(*(GameActionEquip **)(iVar6 + 8));
    dVar3 = this->mbr_0x64;
  }
  *ppiVar7[1] = (int)*ppiVar7;
  (*ppiVar7)[1] = (int)ppiVar7[1];
                    /* WARNING: Subroutine does not return */
  _free(ppiVar7);
}



EffectTreeTrigger * __thiscall EffectTreeTrigger::EffectTreeTrigger(EffectTreeTrigger *this)

{
  dword dVar1;
  undefined local_11;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b29e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Trigger::Trigger(&this->Trigger);
  (this->Trigger).vftptr_0x0 =
       (Trigger__vftable_6a8c4c *)&EffectTreeTrigger__vftable_6a7218_006a7218;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x3c = (dword)&Polygon__vftable_6a0174_006a0174;
  this->mbr_0x44 = 0;
  this->mbr_0x48 = 0;
  this->mbr_0x4c = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  dVar1 = FUN_0056e0b0();
  this->mbr_0x60 = dVar1;
  this->mbr_0x64 = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined *)&this->mbr_0x68 = local_11;
  dVar1 = FUN_0057c2e0();
  this->mbr_0x6c = dVar1;
  *(undefined *)(dVar1 + 0x1d) = 1;
  *(dword *)(this->mbr_0x6c + 4) = this->mbr_0x6c;
  *(dword *)this->mbr_0x6c = this->mbr_0x6c;
  *(dword *)(this->mbr_0x6c + 8) = this->mbr_0x6c;
  this->mbr_0x70 = 0;
  this->mbr_0x50 = 0;
  this->mbr_0x54 = 0;
  this->mbr_0x58 = 0;
  this->mbr_0x78 = 0;
  this->mbr_0x7c = 0;
  this->mbr_0x80 = 0;
  this->mbr_0x84 = 0xffffffff;
  this->mbr_0x74 = 1;
  ExceptionList = local_c;
  return this;
}



undefined4 * __thiscall EffectTreeTrigger::virt_meth_0x5aae20(EffectTreeTrigger *this,byte param_1)

{
  ~EffectTreeTrigger(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



void __thiscall EffectTreeTrigger::meth_0x5b16d0(EffectTreeTrigger *this,uint param_1)

{
  Trigger__vftable_6a8c4c *pTVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  EffectTreeTrigger *local_4;
  
  uVar2 = param_1;
  param_1 = *(uint *)(param_1 + 0x1dc);
  local_4 = this;
  GUI::Interface::meth_0x56ec50((Interface *)&(this->Trigger).mbr_0x18,(int *)&local_4,&param_1);
  pTVar1 = (this->Trigger).vftptr_0x0;
  iVar5 = uVar2 + 4;
  if (local_4 == (EffectTreeTrigger *)(this->Trigger).mbr_0x1c) {
    cVar3 = (*pTVar1->virt_meth_0x5b1520_24)(this);
    if (cVar3 != '\0') {
      uVar4 = uVar2;
      (*((this->Trigger).vftptr_0x0)->virt_meth_0x5b1750_28)(this);
      (*((this->Trigger).vftptr_0x0)->virt_meth_0x6162e5_12)(uVar2,uVar4,iVar5);
    }
  }
  else {
    cVar3 = (*pTVar1->virt_meth_0x5b1520_24)(this);
    if (cVar3 == '\0') {
      (*((this->Trigger).vftptr_0x0)->virt_meth_0x6162e5_16)(uVar2);
      (*((this->Trigger).vftptr_0x0)->virt_meth_0x5b1880_32)(this);
      return;
    }
  }
  return;
}


#include "../include/EffectTreeTrigger.h"
