#include "../include/Audio.h"

void __thiscall Audio::meth_0x5909e0(Audio *this)

{
  CMusic *this_00;
  
  s___AVCFloatingLabel___006ff2d8[21] = '\0';
  Sleep(500);
  this_00 = (CMusic *)this->mbr_0x40;
  if (this_00 != (CMusic *)0x0) {
    CMusic::~CMusic(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  FUN_0052aaa0();
  return;
}



Audio * __thiscall Audio::Audio(Audio *this)

{
  this->vftptr_0x0 = &Audio__vftable_69e2ec_0069e2ec;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0xf;
  *(undefined *)&this->mbr_0x8 = 0;
  this->mbr_0x38 = 0xf;
  this->mbr_0x34 = 0;
  *(undefined *)&this->mbr_0x24 = 0;
  this->mbr_0x3c = 0;
  this->mbr_0x3d = 0;
  this->mbr_0x3e = 0;
  this->mbr_0x40 = 0;
  this->mbr_0x44 = 1;
  this->mbr_0x48 = 100;
  return this;
}



void __thiscall Audio::virt_meth_0x590b50(Audio *this)

{
  dword *pdVar1;
  dword *pdVar2;
  Audio *local_4;
  
  pdVar1 = &this->mbr_0x8;
  pdVar2 = pdVar1;
  if (0xf < this->mbr_0x1c) {
    pdVar2 = (dword *)*pdVar1;
  }
  if (0xf < this->mbr_0x1c) {
    pdVar1 = (dword *)*pdVar1;
  }
  local_4 = this;
  cls_0x4d8d70::meth_0x49c7a0
            ((cls_0x4d8d70 *)&this->mbr_0x4,(int *)&local_4,(int)pdVar1,this->mbr_0x18 + (int)pdVar2
            );
  pdVar1 = &this->mbr_0x24;
  pdVar2 = pdVar1;
  if (0xf < this->mbr_0x38) {
    pdVar2 = (dword *)*pdVar1;
  }
  if (0xf < this->mbr_0x38) {
    pdVar1 = (dword *)*pdVar1;
  }
  cls_0x4d8d70::meth_0x49c7a0
            ((cls_0x4d8d70 *)&this->mbr_0x20,(int *)&local_4,(int)pdVar1,
             this->mbr_0x34 + (int)pdVar2);
  this->mbr_0x3c = 0;
  this->mbr_0x3d = 0;
  this->mbr_0x3e = 0;
  this->mbr_0x44 = 1;
  this->mbr_0x48 = 100;
  return;
}



void __thiscall Audio::virt_meth_0x591110(Audio *this)

{
  char cVar1;
  VFX_Parameter *this_00;
  cls_0x4dff90 *this_01;
  char *pcVar2;
  cls_0x50db20 *pcVar3;
  char *pcVar4;
  uint unaff_retaddr;
  int local_88;
  void *local_84;
  dword local_74;
  uint local_70;
  _String_base a_Stack_6c [4];
  void *pvStack_68;
  dword dStack_58;
  uint uStack_54;
  _String_base a_Stack_50 [4];
  void *pvStack_4c;
  dword dStack_3c;
  uint uStack_38;
  char acStack_34 [36];
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063a003;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  this_00 = (VFX_Parameter *)FUN_0056af30();
  local_70 = 0xf;
  local_74 = 0;
  local_84 = (void *)((uint)local_84 & 0xffffff00);
  pcVar4 = "Audio";
  do {
    pcVar2 = pcVar4;
    pcVar4 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_88,"Audio",(uint)(pcVar2 + -0x69e34c));
  local_4 = 0;
  this_01 = (cls_0x4dff90 *)VFX_Parameter::meth_0x4e0470(this_00,&local_88);
  local_4 = 0xffffffff;
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    _free(local_84);
  }
  local_70 = 0xf;
  uStack_54 = 0xf;
  local_74 = 0;
  local_84 = (void *)((uint)local_84 & 0xffffff00);
  dStack_58 = 0;
  pvStack_68 = (void *)((uint)pvStack_68 & 0xffffff00);
  pcVar4 = "DirectShow";
  do {
    pcVar2 = pcVar4;
    pcVar4 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_6c,"DirectShow",(uint)(pcVar2 + -0x69e324));
  local_4 = 1;
  pcVar2 = __itoa((uint)(this->mbr_0x3c != 0),acStack_34,10);
  pcVar3 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(this_01,a_Stack_6c);
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0(pcVar3,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_4 = 0xffffffff;
  if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_68);
  }
  uStack_54 = 0xf;
  dStack_58 = 0;
  pvStack_68 = (void *)((uint)pvStack_68 & 0xffffff00);
  pcVar4 = "DirectMusic";
  do {
    pcVar2 = pcVar4;
    pcVar4 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_6c,"DirectMusic",(uint)(pcVar2 + -0x69e318))
  ;
  local_4 = 2;
  pcVar2 = __itoa((uint)(this->mbr_0x3d != 0),acStack_34,10);
  pcVar3 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(this_01,a_Stack_6c);
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0(pcVar3,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_4 = 0xffffffff;
  if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_68);
  }
  uStack_54 = 0xf;
  dStack_58 = 0;
  pvStack_68 = (void *)((uint)pvStack_68 & 0xffffff00);
  pcVar4 = "CDAudio";
  do {
    pcVar2 = pcVar4;
    pcVar4 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_6c,"CDAudio",(uint)(pcVar2 + -0x69e310));
  local_4 = 3;
  pcVar2 = __itoa((uint)(this->mbr_0x3e != 0),acStack_34,10);
  pcVar3 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(this_01,a_Stack_6c);
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0(pcVar3,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_4 = 0xffffffff;
  if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_68);
  }
  uStack_54 = 0xf;
  dStack_58 = 0;
  pvStack_68 = (void *)((uint)pvStack_68 & 0xffffff00);
  pcVar4 = "Music";
  do {
    pcVar2 = pcVar4;
    pcVar4 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_6c,"Music",(uint)(pcVar2 + -0x69e308));
  local_4 = 4;
  pcVar2 = __itoa((uint)(this->mbr_0x44 != 0),acStack_34,10);
  pcVar3 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(this_01,a_Stack_6c);
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0(pcVar3,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_4 = 0xffffffff;
  if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_68);
  }
  uStack_38 = 0xf;
  dStack_3c = 0;
  pvStack_4c = (void *)((uint)pvStack_4c & 0xffffff00);
  pcVar4 = "MusicVolume";
  do {
    pcVar2 = pcVar4;
    pcVar4 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_50,"MusicVolume",(uint)(pcVar2 + -0x69e2fc))
  ;
  local_4 = 5;
  pcVar2 = __itoa(this->mbr_0x48,acStack_34,10);
  pcVar3 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(this_01,a_Stack_50);
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0(pcVar3,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  if (0xf < uStack_38) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_4c);
  }
  ExceptionList = pvStack_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



Audio * __thiscall Audio::~Audio(Audio *this)

{
  Audio *pAVar1;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063a026;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &Audio__vftable_69e2ec_0069e2ec;
  local_4 = 1;
  virt_meth_0x591110(this);
  pAVar1 = (Audio *)meth_0x5909e0(this);
  if (0xf < this->mbr_0x38) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x24);
  }
  this->mbr_0x38 = 0xf;
  this->mbr_0x34 = 0;
  *(undefined *)&this->mbr_0x24 = 0;
  if (0xf < this->mbr_0x1c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x8);
  }
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0xf;
  *(undefined *)&this->mbr_0x8 = 0;
  ExceptionList = pvStack_c;
  return pAVar1;
}



undefined4 * __thiscall Audio::virt_meth_0x5915b0(Audio *this,byte param_1)

{
  ~Audio(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}


#include "../include/Audio.h"
