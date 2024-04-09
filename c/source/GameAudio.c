#include "../include/GameAudio.h"

void __thiscall GameAudio::virt_meth_0x45e390(GameAudio *this)

{
  char *pcVar1;
  char *pcVar2;
  
  Audio::virt_meth_0x590b50(&this->Audio);
  pcVar1 = "FO3.gls";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&(this->Audio).mbr_0x4,"FO3.gls",(uint)(pcVar2 + -0x664358));
  pcVar1 = "F3.sco";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&(this->Audio).mbr_0x20,"F3.sco",(uint)(pcVar2 + -0x664350));
  return;
}



undefined4 * __thiscall GameAudio::virt_meth_0x45e670(GameAudio *this,byte param_1)

{
  ~GameAudio(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



GameAudio * __thiscall GameAudio::~GameAudio(GameAudio *this)

{
  Audio *pAVar1;
  
  (this->Audio).vftptr_0x0 = (Audio__vftable_69e2ec *)&GameAudio__vftable_6647e0_006647e0;
  pAVar1 = Audio::~Audio(&this->Audio);
  return (GameAudio *)pAVar1;
}


#include "../include/GameAudio.h"
