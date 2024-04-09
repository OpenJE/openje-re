#include "../include/Gfx_CubeTex.h"

void __thiscall Gfx_CubeTex::meth_0x5389a0(Gfx_CubeTex *this,undefined4 param_1,int *param_2)

{
  int *piVar1;
  int **ppiVar2;
  int iVar3;
  uint unaff_retaddr;
  uint in_stack_0000001c;
  char acStack_110 [256];
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006372d8;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  piVar1 = (int *)this->mbr_0x34;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (piVar1 != (int *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x34 = 0;
  }
  ppiVar2 = (int **)param_2;
  if (in_stack_0000001c < 0x10) {
    ppiVar2 = &param_2;
  }
  iVar3 = FUN_005cfc42(DAT_00708300,(LPCWSTR)ppiVar2);
  if (iVar3 < 0) {
    FUN_00497120((byte *)0x67cd68);
    FUN_005d03e1(iVar3,acStack_110,0x100);
    FUN_00497120((byte *)"DXErr: %s\n");
  }
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  ExceptionList = pvStack_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



Gfx_CubeTex * __thiscall Gfx_CubeTex::Gfx_CubeTex(Gfx_CubeTex *this)

{
  Gfx_Texture::Gfx_Texture(&this->Gfx_Texture,1);
  (this->Gfx_Texture).vftptr_0x0 =
       (Gfx_Texture__vftable_677370 *)&Gfx_CubeTex__vftable_67cd9c_0067cd9c;
  this->mbr_0x34 = 0;
  return this;
}



Gfx_CubeTex * __thiscall Gfx_CubeTex::~Gfx_CubeTex(Gfx_CubeTex *this)

{
  int *piVar1;
  Gfx_CubeTex *pGVar2;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006372f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->Gfx_Texture).vftptr_0x0 =
       (Gfx_Texture__vftable_677370 *)&Gfx_CubeTex__vftable_67cd9c_0067cd9c;
  piVar1 = (int *)this->mbr_0x34;
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    this->mbr_0x34 = 0;
  }
  local_4 = 0xffffffff;
  pGVar2 = (Gfx_CubeTex *)Gfx_Texture::meth_0x51f280(&this->Gfx_Texture);
  ExceptionList = pvStack_c;
  return pGVar2;
}



undefined4 * __thiscall Gfx_CubeTex::virt_meth_0x538b50(Gfx_CubeTex *this,byte param_1)

{
  ~Gfx_CubeTex(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}


#include "../include/Gfx_CubeTex.h"
