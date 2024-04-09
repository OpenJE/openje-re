#include "../include/Gfx_RS_Expand.h"

Gfx_RS_Expand * __thiscall Gfx_RS_Expand::~Gfx_RS_Expand(Gfx_RS_Expand *this)

{
  Gfx_RS_Expand *pGVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00637218;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->Gfx_RenderStyle).vftptr_0x0 =
       (Gfx_RenderStyle__vftable_67c558 *)&Gfx_RS_Expand__vftable_67c594_0067c594;
  local_4 = 0;
  pGVar1 = (Gfx_RS_Expand *)virt_meth_0x540af0(this);
  (this->Gfx_RenderStyle).vftptr_0x0 = &Gfx_RenderStyle__vftable_67c558_0067c558;
  ExceptionList = local_c;
  return pGVar1;
}



undefined4 * __thiscall Gfx_RS_Expand::virt_meth_0x536490(Gfx_RS_Expand *this,byte param_1)

{
  ~Gfx_RS_Expand(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}



Gfx_RS_Expand * __thiscall Gfx_RS_Expand::Gfx_RS_Expand(Gfx_RS_Expand *this)

{
  (this->Gfx_RenderStyle).vftptr_0x0 =
       (Gfx_RenderStyle__vftable_67c558 *)&Gfx_RS_Expand__vftable_67c594_0067c594;
  return this;
}



void __thiscall Gfx_RS_Expand::virt_meth_0x540af0(Gfx_RS_Expand *this)

{
  if (((DAT_0070bce8 != 0) && (DAT_0070bce8 = DAT_0070bce8 + -1, DAT_0070bce8 == 0)) &&
     (DAT_0070bcec != (int *)0x0)) {
    (**(code **)(*DAT_0070bcec + 8))(DAT_0070bcec);
    DAT_0070bcec = (int *)0x0;
  }
  return;
}



int __thiscall Gfx_RS_Expand::SetMaterial(Gfx_RS_Expand *this)

{
  cls_0x55dc80 *this_00;
  undefined uVar1;
  int *piVar2;
  undefined unaff_SI;
  undefined4 unaff_EDI;
  int iVar3;
  undefined *puVar4;
  undefined auStack_c [12];
  
  this_00 = DAT_0070b200;
  iVar3 = -0x7789f794;
  if (DAT_0070bcec == (int *)0x0) {
    FUN_00497120((byte *)"Gfx_RS_Expand::SetMaterial() failed - not created yet.");
    return -0x7789f794;
  }
  uVar1 = (**(code **)(*DAT_00707ce4 + 0x1b8))();
  piVar2 = (int *)cls_0x55dc80::meth_0x51f160(this_00,uVar1,unaff_SI);
  if (piVar2 == (int *)0x0) {
    cls_0x490060::meth_0x503390((cls_0x490060 *)&DAT_007082f8,(int *)0x0,0);
    FUN_00497120((byte *)"Gfx_RS_Expand::SetMaterial - Cannot find Silhouette Edge Texture!\n");
  }
  else {
    (**(code **)(*piVar2 + 4))();
  }
  if (DAT_0070bcfd != '\0') {
    puVar4 = auStack_c;
    iVar3 = (**(code **)(*DAT_0070bcec + 0x20))(DAT_0070bcec,DAT_0070bcf8);
    if (-1 < iVar3) {
      DAT_0070bcf8 = puVar4;
      DAT_0070bcfd = 0;
      DAT_0070bd00 = unaff_EDI;
      return iVar3;
    }
    handle_fatal_error("Gfx_RS_Expand::SetMaterial - Failed to find valid technique (%x)\n");
  }
  return iVar3;
}


#include "../include/Gfx_RS_Expand.h"
