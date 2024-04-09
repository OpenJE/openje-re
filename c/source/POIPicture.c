#include "../include/POIPicture.h"

POIPicture * __thiscall POIPicture::POIPicture(POIPicture *this)

{
  GUI::Picture::Picture(&this->Picture,2);
  *(undefined4 *)&(this->Picture).Window.Base.field_0xd2c = 0;
  (this->Picture).Window.Base.mbr_0xd30 = 0;
  (this->Picture).Window.Base.mbr_0xd34 = 0;
  this->mbr_0xd38 = 0;
  (this->Picture).Window.Base.vftptr_0x0 =
       (Base__vftable_66e41c *)&POIPicture__vftable_65d00c_0065d00c;
  *(undefined ***)&(this->Picture).Window.Base.field_0x18 = &PTR_virt_meth_0x4589c0_0065d004;
  return this;
}



POIPicture * __thiscall POIPicture::~POIPicture(POIPicture *this)

{
  POIPicture *pPVar1;
  
  (this->Picture).Window.Base.vftptr_0x0 =
       (Base__vftable_66e41c *)&POIPicture__vftable_65d00c_0065d00c;
  *(undefined ***)&(this->Picture).Window.Base.field_0x18 = &PTR_virt_meth_0x4589c0_0065d004;
  pPVar1 = (POIPicture *)GUI::Picture::~Picture(&this->Picture);
  return pPVar1;
}



int * __thiscall POIPicture::virt_meth_0x4589e0(POIPicture *this,byte param_1)

{
  ~POIPicture(this);
  if ((param_1 & 1) != 0) {
    FUN_004a7540((int *)this);
  }
  return (int *)this;
}


#include "../include/POIPicture.h"
