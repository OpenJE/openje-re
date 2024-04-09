#include "../include/GameDialogueWindow.h"

GameDialogueWindow * __thiscall
GameDialogueWindow::GameDialogueWindow
          (GameDialogueWindow *this,undefined param_1,undefined param_2,int param_3)

{
  DialogueWindow::DialogueWindow(&this->DialogueWindow,param_1,param_2,param_3);
  (this->DialogueWindow).Window.Base.vftptr_0x0 =
       (Base__vftable_66e41c *)&GameDialogueWindow__vftable_65575c_0065575c;
  *(undefined ***)&(this->DialogueWindow).Window.Base.field_0x18 = &PTR_virt_meth_0x437fd0_00655754;
  return this;
}



int * __thiscall GameDialogueWindow::virt_meth_0x438050(GameDialogueWindow *this,byte param_1)

{
  DialogueWindow::~DialogueWindow(&this->DialogueWindow);
  if ((param_1 & 1) != 0) {
    FUN_004a7540((int *)this);
  }
  return (int *)this;
}


#include "../include/GameDialogueWindow.h"
