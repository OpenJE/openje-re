#include "../include/cls_0x5b7c10.h"

cls_0x5b7c10 * __thiscall
cls_0x5b7c10::cls_0x5b7c10(cls_0x5b7c10 *this,_String_base *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  dword dVar3;
  char *pcVar4;
  int iStack_28;
  void *pvStack_24;
  dword dStack_14;
  void *pvStack_10;
  VFX_Parameter__vftable_673a20 *pVStack_c;
  undefined *puStack_8;
  dword dStack_4;
  
  dStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063bc12;
  pVStack_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  ExceptionList = &pVStack_c;
  if (param_2 != 0) {
    ExceptionList = &pVStack_c;
    this->mbr_0x0 = (dword)&DAT_006acbf0;
    CEngineInterface::CEngineInterface(&this->CEngineInterface,param_1);
    dStack_4 = 0;
  }
  *(CTextEditInterface__vftable_6acbb0 **)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)) =
       &CTextEditInterface__vftable_6acbb0_006acbb0;
  iVar1 = *(int *)(this->mbr_0x0 + 4);
  *(int *)(iVar1 + -4 + (int)this) = iVar1 + -0x18;
  pvStack_10 = (void *)0xf;
  dStack_14 = 0;
  pvStack_24 = (void *)((uint)pvStack_24 & 0xffffff00);
  pcVar2 = "AddNote.INT";
  do {
    pcVar4 = pcVar2;
    pcVar2 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&iStack_28,"AddNote.INT",(uint)(pcVar4 + -0x6acbe4))
  ;
  dStack_4 = 1;
  CLoadMapInterface::meth_0x495b50
            ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),&iStack_28);
  dStack_4 = dStack_4 & 0xffffff00;
  if (0xf < pvStack_10) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_24);
  }
  pvStack_10 = (void *)0xf;
  dStack_14 = 0;
  pvStack_24 = (void *)((uint)pvStack_24 & 0xffffff00);
  pcVar2 = "AddNoteWin";
  do {
    pcVar4 = pcVar2;
    pcVar2 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&iStack_28,"AddNoteWin",(uint)(pcVar4 + -0x6acbd8));
  dStack_4 = 2;
  dVar3 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                     (int)&iStack_28);
  this->mbr_0x4 = dVar3;
  dStack_4 = dStack_4 & 0xffffff00;
  if (0xf < pvStack_10) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_24);
  }
  pvStack_10 = (void *)0xf;
  dStack_14 = 0;
  pvStack_24 = (void *)((uint)pvStack_24 & 0xffffff00);
  pcVar2 = "NoteEditText";
  do {
    pcVar4 = pcVar2;
    pcVar2 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&iStack_28,"NoteEditText",(uint)(pcVar4 + -0x6acbc8));
  dStack_4 = 3;
  dVar3 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                     (int)&iStack_28);
  this->mbr_0x8 = dVar3;
  dStack_4 = dStack_4 & 0xffffff00;
  if ((void *)0xf < pvStack_10) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_24);
  }
  (**(code **)(*(int *)this->mbr_0x8 + 0x180))(1);
  this->mbr_0x10 = 0;
  this->mbr_0xc = 1;
  ExceptionList = pvStack_10;
  return this;
}


