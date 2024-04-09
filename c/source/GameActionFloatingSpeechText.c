#include "../include/GameActionFloatingSpeechText.h"

GameActionFloatingSpeechText * __thiscall
GameActionFloatingSpeechText::GameActionFloatingSpeechText(GameActionFloatingSpeechText *this)

{
  ActionFloatingSpeechText::ActionFloatingSpeechText(&this->ActionFloatingSpeechText);
  (this->ActionFloatingSpeechText).Action.vftptr_0x0 =
       (Action__vftable_647888 *)&GameActionFloatingSpeechText__vftable_648f04_00648f04;
  return this;
}



GameActionFloatingSpeechText * __thiscall
GameActionFloatingSpeechText::~GameActionFloatingSpeechText(GameActionFloatingSpeechText *this)

{
  Action *pAVar1;
  
  (this->ActionFloatingSpeechText).Action.vftptr_0x0 =
       (Action__vftable_647888 *)&GameActionFloatingSpeechText__vftable_648f04_00648f04;
  pAVar1 = Action::~Action((Action *)this);
  return (GameActionFloatingSpeechText *)pAVar1;
}



undefined4 * __thiscall
GameActionFloatingSpeechText::virt_meth_0x405280(GameActionFloatingSpeechText *this,byte param_1)

{
  ~GameActionFloatingSpeechText(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}


#include "../include/GameActionFloatingSpeechText.h"
