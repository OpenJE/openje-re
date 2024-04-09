#include "../include/GameJournal.h"

GameJournal * __thiscall GameJournal::GameJournal(GameJournal *this)

{
  int **ppiVar1;
  int *piVar2;
  GameJournal *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630798;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  Journal::Journal(&this->Journal);
  local_4 = 0;
  (this->Journal).vftptr_0x0 = (Journal__vftable_6a2a50 *)&GameJournal__vftable_666c7c_00666c7c;
  ppiVar1 = (int **)FUN_0056e0b0();
  this->mbr_0x14 = (dword)ppiVar1;
  this->mbr_0x18 = 0;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->mbr_0x10,(int **)&local_10,piVar2,(int *)ppiVar1);
  ExceptionList = local_c;
  return this;
}



void __thiscall GameJournal::meth_0x46c480(GameJournal *this)

{
  undefined4 *puVar1;
  int **ppiVar2;
  int **ppiVar3;
  int *piVar4;
  GameJournal *pGStack_4;
  
  puVar1 = (undefined4 *)(this->Journal).mbr_0x8;
  if (puVar1 == (undefined4 *)0x0) {
    ppiVar2 = (int **)0x0;
  }
  else {
    ppiVar2 = (int **)*puVar1;
  }
  pGStack_4 = this;
  if (ppiVar2 != (int **)(this->Journal).mbr_0x8) {
    do {
      puVar1 = (undefined4 *)
               FUN_006165e0((cls_0x616328 *)ppiVar2[2],0,&JournalEntry::RTTI_Type_Descriptor,
                            &TaskEntry::RTTI_Type_Descriptor,0);
      if (puVar1 == (undefined4 *)0x0) {
        ppiVar3 = (int **)*ppiVar2;
      }
      else {
        ppiVar3 = (int **)*ppiVar2;
        if (ppiVar2 != (int **)(this->Journal).mbr_0x8) {
          *ppiVar2[1] = (int)ppiVar3;
          (*ppiVar2)[1] = (int)ppiVar2[1];
                    /* WARNING: Subroutine does not return */
          _free(ppiVar2);
        }
        (**(code **)*puVar1)(1);
      }
      ppiVar2 = ppiVar3;
    } while (ppiVar3 != (int **)(this->Journal).mbr_0x8);
  }
  if ((int **)this->mbr_0x14 == (int **)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *(int **)this->mbr_0x14;
  }
  if (piVar4 != (int *)this->mbr_0x14) {
    do {
      if ((undefined4 *)piVar4[2] != (undefined4 *)0x0) {
        (***(code ***)(undefined4 *)piVar4[2])(1);
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)this->mbr_0x14);
  }
  ppiVar2 = (int **)this->mbr_0x14;
  if (ppiVar2 == (int **)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *ppiVar2;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->mbr_0x10,(int **)&pGStack_4,piVar4,(int *)ppiVar2);
  StoreManager::virt_meth_0x5a1ff0((StoreManager *)this);
  return;
}



GameJournal * __thiscall GameJournal::~GameJournal(GameJournal *this)

{
  int **ppiVar1;
  int *piVar2;
  GameJournal *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006307c3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->Journal).vftptr_0x0 = (Journal__vftable_6a2a50 *)&GameJournal__vftable_666c7c_00666c7c;
  local_4 = 1;
  local_10 = this;
  meth_0x46c480(this);
  ppiVar1 = (int **)this->mbr_0x14;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->mbr_0x10,(int **)&local_10,piVar2,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x14);
}



void __thiscall GameJournal::virt_meth_0x46c5e0(GameJournal *this)

{
  meth_0x46c480(this);
  Journal::virt_meth_0x5a05c0(&this->Journal);
  return;
}



int * __thiscall GameJournal::virt_meth_0x46c5f0(GameJournal *this,byte param_1)

{
  ~GameJournal(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}


#include "../include/GameJournal.h"
