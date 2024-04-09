#include "../include/GameEffect.h"

GameEffect * __thiscall GameEffect::~GameEffect(GameEffect *this)

{
  GameEffect *pGVar1;
  
  (this->Effect).vftptr_0x0 = (Effect__vftable_693c8c *)&GameEffect__vftable_66535c_0066535c;
  pGVar1 = (GameEffect *)Effect::~Effect(&this->Effect);
  return pGVar1;
}



void * __thiscall GameEffect::virt_meth_0x4624f0(GameEffect *this,int param_1)

{
  Effect::virt_meth_0x55ac10(&this->Effect,param_1);
  this->mbr_0x48 = *(dword *)(param_1 + 0x48);
  this->mbr_0x4c = *(dword *)(param_1 + 0x4c);
  this->mbr_0x50 = *(dword *)(param_1 + 0x50);
  this->mbr_0x54 = *(dword *)(param_1 + 0x54);
  this->mbr_0x58 = *(dword *)(param_1 + 0x58);
  this->mbr_0x5c = *(dword *)(param_1 + 0x5c);
  this->mbr_0x60 = *(dword *)(param_1 + 0x60);
  this->mbr_0x64 = *(dword *)(param_1 + 100);
  this->mbr_0x68 = *(dword *)(param_1 + 0x68);
  this->mbr_0x6c = *(dword *)(param_1 + 0x6c);
  this->mbr_0x70 = *(dword *)(param_1 + 0x70);
  this->mbr_0x74 = *(dword *)(param_1 + 0x74);
  this->mbr_0x78 = *(dword *)(param_1 + 0x78);
  this->mbr_0x7c = *(dword *)(param_1 + 0x7c);
  this->mbr_0x80 = *(dword *)(param_1 + 0x80);
  this->mbr_0x84 = *(dword *)(param_1 + 0x84);
  this->mbr_0x88 = *(dword *)(param_1 + 0x88);
  this->mbr_0x8c = *(dword *)(param_1 + 0x8c);
  this->mbr_0x90 = *(dword *)(param_1 + 0x90);
  this->mbr_0x94 = *(dword *)(param_1 + 0x94);
  this->mbr_0x98 = *(dword *)(param_1 + 0x98);
  return this;
}



undefined4 __thiscall GameEffect::virt_meth_0x462620(GameEffect *this)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  dword dVar5;
  Exception__vftable_64787c *local_8;
  char *local_4;
  
  bVar1 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (!bVar1) {
    local_8 = &Exception__vftable_64787c_0064787c;
    local_4 = "Invalid attempt to retrieve world server instance.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_006d8834);
  }
  if (DAT_0070bd98 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = DAT_0070bd98 + 4;
  }
  piVar3 = (int *)(**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x74))();
  iVar2 = *(int *)(*(int *)(*(int *)(this->mbr_0x48 + 4) + 4) + 0x2a0 + this->mbr_0x48);
  iVar4 = (**(code **)(*piVar3 + 0xc))();
  dVar5 = iVar4 + iVar2;
  this->mbr_0x90 = dVar5;
  return CONCAT31((int3)(dVar5 >> 8),1);
}



uint __thiscall GameEffect::virt_meth_0x4626a0(GameEffect *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  if ((this->Effect).mbr_0xa == 0) {
    meth_0x55ae10(this);
  }
  uVar4 = this->mbr_0x68;
  if (uVar4 != 1) {
    if (uVar4 == 0) {
      iVar1 = FUN_00401150();
      piVar2 = (int *)(**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 4) + 4 + iVar1) + 0x74))
                                ();
      iVar1 = *(int *)(*(int *)(*(int *)(this->mbr_0x48 + 4) + 4) + 0x2a0 + this->mbr_0x48);
      iVar3 = (**(code **)(*piVar2 + 0xc))();
      uVar4 = (iVar3 + iVar1) - this->mbr_0x90;
      if (this->mbr_0x94 <= uVar4) goto LAB_004626fc;
    }
    return CONCAT31((int3)(uVar4 >> 8),1);
  }
LAB_004626fc:
  (this->Effect).mbr_0xb = 1;
  return uVar4 & 0xffffff00;
}



int __thiscall GameEffect::virt_meth_0x462710(GameEffect *this)

{
  dword dVar1;
  
  dVar1 = this->mbr_0x78;
  if (dVar1 == 0) {
    dVar1 = FUN_0048cd00(this->mbr_0x60,this->mbr_0x64);
  }
  return this->mbr_0x98 + dVar1;
}



undefined4 * __thiscall GameEffect::virt_meth_0x462930(GameEffect *this,byte param_1)

{
  ~GameEffect(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



void __thiscall GameEffect::meth_0x55ae10(GameEffect *this)

{
  GameEffect *this_00;
  GameActionEquip *this_01;
  char cVar1;
  int **ppiVar2;
  int *piVar3;
  undefined4 *puVar4;
  byte unaff_BP;
  int **ppiVar5;
  int *local_1c;
  GameEffect *local_18;
  int **local_14;
  int **local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637f68;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  ppiVar2 = (int **)FUN_0056e0b0();
  local_10 = (int **)0x0;
  local_4 = 0;
  local_14 = ppiVar2;
  if ((this->Effect).mbr_0xa == 0) {
    if ((this->Effect).mbr_0x24 != 0) {
      GUI::Interface::meth_0x4f6d40((Interface *)&local_18);
      ExceptionList = pvStack_c;
      return;
    }
    puVar4 = (*(this->Effect).vftptr_0x0[1].virt_meth_0x55b2e0_12)(&this->Effect,unaff_BP);
    if ((char)puVar4 != '\0') {
      (this->Effect).mbr_0xa = 1;
      ppiVar5 = (int **)(this->Effect).mbr_0x1c;
      if (ppiVar5 == (int **)0x0) {
        local_1c = (int *)0x0;
      }
      else {
        local_1c = *ppiVar5;
      }
      if (local_1c != (int *)(this->Effect).mbr_0x1c) {
        do {
          this_00 = (GameEffect *)local_1c[2];
          local_18 = this_00;
          meth_0x55ae10(this_00);
          cVar1 = (*((this_00->Effect).vftptr_0x0)->virt_meth_0x45c090_0)(this_00);
          if (cVar1 != '\0') {
            piVar3 = (int *)FUN_00433760(ppiVar2,ppiVar2[1],&local_18);
            FUN_00467d80(&local_14,1);
            ppiVar2[1] = piVar3;
            *(int **)piVar3[1] = piVar3;
            ppiVar2 = local_10;
          }
          local_1c = (int *)*local_1c;
        } while (local_1c != (int *)(this->Effect).mbr_0x1c);
      }
    }
    if (ppiVar2 == (int **)0x0) {
      ppiVar5 = (int **)0x0;
    }
    else {
      ppiVar5 = (int **)*ppiVar2;
    }
    for (; ppiVar5 != ppiVar2; ppiVar5 = (int **)*ppiVar5) {
      this_01 = (GameActionEquip *)ppiVar5[2];
      FUN_0055a590(this,(int *)this_01);
      GameActionEquip::meth_0x55a570(this_01);
    }
    if (ppiVar2 == (int **)0x0) {
      ppiVar5 = (int **)0x0;
    }
    else {
      ppiVar5 = (int **)*ppiVar2;
    }
    GUI::Interface::meth_0x4b9d60
              ((Interface *)&local_14,(int **)&local_18,(int *)ppiVar5,(int *)ppiVar2);
  }
  else {
    if (ppiVar2 == (int **)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = *ppiVar2;
    }
    GUI::Interface::meth_0x4b9d60((Interface *)&local_18,&local_1c,piVar3,(int *)ppiVar2);
    ppiVar5 = local_14;
  }
                    /* WARNING: Subroutine does not return */
  _free(ppiVar5);
}


#include "../include/GameEffect.h"
