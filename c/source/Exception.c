#include "../include/Exception.h"

Exception * __thiscall Common::Exception::~Exception(Exception *this)

{
  Exception *in_EAX;
  
  this->vftptr_0x0 = &Exception__vftable_64787c_0064787c;
  return in_EAX;
}



Exception * __thiscall Common::Exception::Exception(Exception *this)

{
  int in_stack_00000004;
  
  this->vftptr_0x0 = &Exception__vftable_64787c_0064787c;
  this->mbr_0x4 = *(dword *)(in_stack_00000004 + 4);
  return this;
}


#include "../include/Exception.h"
#include "../include/exception.h"

exception * __thiscall net::exception::~exception(exception *this)

{
  exception *in_EAX;
  
  this->vftptr_0x0 = &exception__vftable_664798_00664798;
  return in_EAX;
}



undefined4 * __thiscall net::socket::exception::virt_meth_0x45f220(exception *this,byte param_1)

{
  net::exception::~exception(&this->exception);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



exception * __thiscall net::connection::exception::exception(exception *this,dword param_1)

{
  (this->exception).mbr_0x4 = param_1;
  (this->exception).vftptr_0x0 = (exception__vftable_664798 *)&exception__vftable_6a76bc_006a76bc;
  return this;
}



exception * __thiscall net::address::exception::exception(exception *this,dword param_1)

{
  (this->exception).mbr_0x4 = param_1;
  (this->exception).vftptr_0x0 = (exception__vftable_664798 *)&exception__vftable_6a7848_006a7848;
  return this;
}



exception * __thiscall net::socket::exception::exception(exception *this,dword param_1)

{
  (this->exception).mbr_0x4 = param_1;
  (this->exception).vftptr_0x0 = (exception__vftable_664798 *)&exception__vftable_6ad138_006ad138;
  return this;
}



/* Library Function - Single Match
    public: __thiscall exception::exception(void)
   
   Library: Visual Studio 2003 Release */

exception * __thiscall exception::exception(exception *this)

{
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->vftptr_0x0 = &exception__vftable_6cb018_006cb018;
  return this;
}



/* Library Function - Single Match
    public: __thiscall exception::exception(char const * const &)
   
   Library: Visual Studio 2003 Release */

exception * __thiscall exception::exception(exception *this,char **param_1)

{
  size_t sVar1;
  uint *puVar2;
  
  this->vftptr_0x0 = &exception__vftable_6cb018_006cb018;
  sVar1 = _strlen(*param_1);
  puVar2 = (uint *)_malloc(sVar1 + 1);
  this->mbr_0x4 = (dword)puVar2;
  if (puVar2 != (uint *)0x0) {
    FUN_0061f590(puVar2,(uint *)*param_1);
  }
  this->mbr_0x8 = 1;
  return this;
}



/* Library Function - Single Match
    public: __thiscall exception::exception(class exception const &)
   
   Library: Visual Studio 2003 Release */

exception * __thiscall exception::exception(exception *this,exception *param_1)

{
  dword dVar1;
  size_t sVar2;
  uint *puVar3;
  
  this->vftptr_0x0 = &exception__vftable_6cb018_006cb018;
  dVar1 = param_1->mbr_0x8;
  this->mbr_0x8 = dVar1;
  if (dVar1 == 0) {
    this->mbr_0x4 = param_1->mbr_0x4;
  }
  else {
    sVar2 = _strlen((char *)param_1->mbr_0x4);
    puVar3 = (uint *)_malloc(sVar2 + 1);
    this->mbr_0x4 = (dword)puVar3;
    if (puVar3 != (uint *)0x0) {
      FUN_0061f590(puVar3,(uint *)param_1->mbr_0x4);
    }
  }
  return this;
}



void __thiscall exception::meth_0x616baa(exception *this)

{
  this->vftptr_0x0 = &exception__vftable_6cb018_006cb018;
  if (this->mbr_0x8 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x4);
  }
  return;
}



undefined4 * __thiscall exception::virt_meth_0x616c75(exception *this,byte param_1)

{
  meth_0x616baa(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}


#include "../include/exception.h"

exception * __thiscall net::exception::~exception(exception *this)

{
  exception *in_EAX;
  
  this->vftptr_0x0 = &exception__vftable_664798_00664798;
  return in_EAX;
}



undefined4 * __thiscall net::socket::exception::virt_meth_0x45f220(exception *this,byte param_1)

{
  net::exception::~exception(&this->exception);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



exception * __thiscall net::connection::exception::exception(exception *this,dword param_1)

{
  (this->exception).mbr_0x4 = param_1;
  (this->exception).vftptr_0x0 = (exception__vftable_664798 *)&exception__vftable_6a76bc_006a76bc;
  return this;
}



exception * __thiscall net::address::exception::exception(exception *this,dword param_1)

{
  (this->exception).mbr_0x4 = param_1;
  (this->exception).vftptr_0x0 = (exception__vftable_664798 *)&exception__vftable_6a7848_006a7848;
  return this;
}



exception * __thiscall net::socket::exception::exception(exception *this,dword param_1)

{
  (this->exception).mbr_0x4 = param_1;
  (this->exception).vftptr_0x0 = (exception__vftable_664798 *)&exception__vftable_6ad138_006ad138;
  return this;
}



/* Library Function - Single Match
    public: __thiscall exception::exception(void)
   
   Library: Visual Studio 2003 Release */

exception * __thiscall exception::exception(exception *this)

{
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->vftptr_0x0 = &exception__vftable_6cb018_006cb018;
  return this;
}



/* Library Function - Single Match
    public: __thiscall exception::exception(char const * const &)
   
   Library: Visual Studio 2003 Release */

exception * __thiscall exception::exception(exception *this,char **param_1)

{
  size_t sVar1;
  uint *puVar2;
  
  this->vftptr_0x0 = &exception__vftable_6cb018_006cb018;
  sVar1 = _strlen(*param_1);
  puVar2 = (uint *)_malloc(sVar1 + 1);
  this->mbr_0x4 = (dword)puVar2;
  if (puVar2 != (uint *)0x0) {
    FUN_0061f590(puVar2,(uint *)*param_1);
  }
  this->mbr_0x8 = 1;
  return this;
}



/* Library Function - Single Match
    public: __thiscall exception::exception(class exception const &)
   
   Library: Visual Studio 2003 Release */

exception * __thiscall exception::exception(exception *this,exception *param_1)

{
  dword dVar1;
  size_t sVar2;
  uint *puVar3;
  
  this->vftptr_0x0 = &exception__vftable_6cb018_006cb018;
  dVar1 = param_1->mbr_0x8;
  this->mbr_0x8 = dVar1;
  if (dVar1 == 0) {
    this->mbr_0x4 = param_1->mbr_0x4;
  }
  else {
    sVar2 = _strlen((char *)param_1->mbr_0x4);
    puVar3 = (uint *)_malloc(sVar2 + 1);
    this->mbr_0x4 = (dword)puVar3;
    if (puVar3 != (uint *)0x0) {
      FUN_0061f590(puVar3,(uint *)param_1->mbr_0x4);
    }
  }
  return this;
}



void __thiscall exception::meth_0x616baa(exception *this)

{
  this->vftptr_0x0 = &exception__vftable_6cb018_006cb018;
  if (this->mbr_0x8 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x4);
  }
  return;
}



undefined4 * __thiscall exception::virt_meth_0x616c75(exception *this,byte param_1)

{
  meth_0x616baa(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}


#include "../include/exception.h"

exception * __thiscall net::exception::~exception(exception *this)

{
  exception *in_EAX;
  
  this->vftptr_0x0 = &exception__vftable_664798_00664798;
  return in_EAX;
}



undefined4 * __thiscall net::socket::exception::virt_meth_0x45f220(exception *this,byte param_1)

{
  net::exception::~exception(&this->exception);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



exception * __thiscall net::connection::exception::exception(exception *this,dword param_1)

{
  (this->exception).mbr_0x4 = param_1;
  (this->exception).vftptr_0x0 = (exception__vftable_664798 *)&exception__vftable_6a76bc_006a76bc;
  return this;
}



exception * __thiscall net::address::exception::exception(exception *this,dword param_1)

{
  (this->exception).mbr_0x4 = param_1;
  (this->exception).vftptr_0x0 = (exception__vftable_664798 *)&exception__vftable_6a7848_006a7848;
  return this;
}



exception * __thiscall net::socket::exception::exception(exception *this,dword param_1)

{
  (this->exception).mbr_0x4 = param_1;
  (this->exception).vftptr_0x0 = (exception__vftable_664798 *)&exception__vftable_6ad138_006ad138;
  return this;
}



/* Library Function - Single Match
    public: __thiscall exception::exception(void)
   
   Library: Visual Studio 2003 Release */

exception * __thiscall exception::exception(exception *this)

{
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->vftptr_0x0 = &exception__vftable_6cb018_006cb018;
  return this;
}



/* Library Function - Single Match
    public: __thiscall exception::exception(char const * const &)
   
   Library: Visual Studio 2003 Release */

exception * __thiscall exception::exception(exception *this,char **param_1)

{
  size_t sVar1;
  uint *puVar2;
  
  this->vftptr_0x0 = &exception__vftable_6cb018_006cb018;
  sVar1 = _strlen(*param_1);
  puVar2 = (uint *)_malloc(sVar1 + 1);
  this->mbr_0x4 = (dword)puVar2;
  if (puVar2 != (uint *)0x0) {
    FUN_0061f590(puVar2,(uint *)*param_1);
  }
  this->mbr_0x8 = 1;
  return this;
}



/* Library Function - Single Match
    public: __thiscall exception::exception(class exception const &)
   
   Library: Visual Studio 2003 Release */

exception * __thiscall exception::exception(exception *this,exception *param_1)

{
  dword dVar1;
  size_t sVar2;
  uint *puVar3;
  
  this->vftptr_0x0 = &exception__vftable_6cb018_006cb018;
  dVar1 = param_1->mbr_0x8;
  this->mbr_0x8 = dVar1;
  if (dVar1 == 0) {
    this->mbr_0x4 = param_1->mbr_0x4;
  }
  else {
    sVar2 = _strlen((char *)param_1->mbr_0x4);
    puVar3 = (uint *)_malloc(sVar2 + 1);
    this->mbr_0x4 = (dword)puVar3;
    if (puVar3 != (uint *)0x0) {
      FUN_0061f590(puVar3,(uint *)param_1->mbr_0x4);
    }
  }
  return this;
}



void __thiscall exception::meth_0x616baa(exception *this)

{
  this->vftptr_0x0 = &exception__vftable_6cb018_006cb018;
  if (this->mbr_0x8 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x4);
  }
  return;
}



undefined4 * __thiscall exception::virt_meth_0x616c75(exception *this,byte param_1)

{
  meth_0x616baa(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}


#include "../include/exception.h"

exception * __thiscall net::exception::~exception(exception *this)

{
  exception *in_EAX;
  
  this->vftptr_0x0 = &exception__vftable_664798_00664798;
  return in_EAX;
}



undefined4 * __thiscall net::socket::exception::virt_meth_0x45f220(exception *this,byte param_1)

{
  net::exception::~exception(&this->exception);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



exception * __thiscall net::connection::exception::exception(exception *this,dword param_1)

{
  (this->exception).mbr_0x4 = param_1;
  (this->exception).vftptr_0x0 = (exception__vftable_664798 *)&exception__vftable_6a76bc_006a76bc;
  return this;
}



exception * __thiscall net::address::exception::exception(exception *this,dword param_1)

{
  (this->exception).mbr_0x4 = param_1;
  (this->exception).vftptr_0x0 = (exception__vftable_664798 *)&exception__vftable_6a7848_006a7848;
  return this;
}



exception * __thiscall net::socket::exception::exception(exception *this,dword param_1)

{
  (this->exception).mbr_0x4 = param_1;
  (this->exception).vftptr_0x0 = (exception__vftable_664798 *)&exception__vftable_6ad138_006ad138;
  return this;
}



/* Library Function - Single Match
    public: __thiscall exception::exception(void)
   
   Library: Visual Studio 2003 Release */

exception * __thiscall exception::exception(exception *this)

{
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->vftptr_0x0 = &exception__vftable_6cb018_006cb018;
  return this;
}



/* Library Function - Single Match
    public: __thiscall exception::exception(char const * const &)
   
   Library: Visual Studio 2003 Release */

exception * __thiscall exception::exception(exception *this,char **param_1)

{
  size_t sVar1;
  uint *puVar2;
  
  this->vftptr_0x0 = &exception__vftable_6cb018_006cb018;
  sVar1 = _strlen(*param_1);
  puVar2 = (uint *)_malloc(sVar1 + 1);
  this->mbr_0x4 = (dword)puVar2;
  if (puVar2 != (uint *)0x0) {
    FUN_0061f590(puVar2,(uint *)*param_1);
  }
  this->mbr_0x8 = 1;
  return this;
}



/* Library Function - Single Match
    public: __thiscall exception::exception(class exception const &)
   
   Library: Visual Studio 2003 Release */

exception * __thiscall exception::exception(exception *this,exception *param_1)

{
  dword dVar1;
  size_t sVar2;
  uint *puVar3;
  
  this->vftptr_0x0 = &exception__vftable_6cb018_006cb018;
  dVar1 = param_1->mbr_0x8;
  this->mbr_0x8 = dVar1;
  if (dVar1 == 0) {
    this->mbr_0x4 = param_1->mbr_0x4;
  }
  else {
    sVar2 = _strlen((char *)param_1->mbr_0x4);
    puVar3 = (uint *)_malloc(sVar2 + 1);
    this->mbr_0x4 = (dword)puVar3;
    if (puVar3 != (uint *)0x0) {
      FUN_0061f590(puVar3,(uint *)param_1->mbr_0x4);
    }
  }
  return this;
}



void __thiscall exception::meth_0x616baa(exception *this)

{
  this->vftptr_0x0 = &exception__vftable_6cb018_006cb018;
  if (this->mbr_0x8 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x4);
  }
  return;
}



undefined4 * __thiscall exception::virt_meth_0x616c75(exception *this,byte param_1)

{
  meth_0x616baa(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}


#include "../include/exception.h"

exception * __thiscall net::exception::~exception(exception *this)

{
  exception *in_EAX;
  
  this->vftptr_0x0 = &exception__vftable_664798_00664798;
  return in_EAX;
}



undefined4 * __thiscall net::socket::exception::virt_meth_0x45f220(exception *this,byte param_1)

{
  net::exception::~exception(&this->exception);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



exception * __thiscall net::connection::exception::exception(exception *this,dword param_1)

{
  (this->exception).mbr_0x4 = param_1;
  (this->exception).vftptr_0x0 = (exception__vftable_664798 *)&exception__vftable_6a76bc_006a76bc;
  return this;
}



exception * __thiscall net::address::exception::exception(exception *this,dword param_1)

{
  (this->exception).mbr_0x4 = param_1;
  (this->exception).vftptr_0x0 = (exception__vftable_664798 *)&exception__vftable_6a7848_006a7848;
  return this;
}



exception * __thiscall net::socket::exception::exception(exception *this,dword param_1)

{
  (this->exception).mbr_0x4 = param_1;
  (this->exception).vftptr_0x0 = (exception__vftable_664798 *)&exception__vftable_6ad138_006ad138;
  return this;
}



/* Library Function - Single Match
    public: __thiscall exception::exception(void)
   
   Library: Visual Studio 2003 Release */

exception * __thiscall exception::exception(exception *this)

{
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->vftptr_0x0 = &exception__vftable_6cb018_006cb018;
  return this;
}



/* Library Function - Single Match
    public: __thiscall exception::exception(char const * const &)
   
   Library: Visual Studio 2003 Release */

exception * __thiscall exception::exception(exception *this,char **param_1)

{
  size_t sVar1;
  uint *puVar2;
  
  this->vftptr_0x0 = &exception__vftable_6cb018_006cb018;
  sVar1 = _strlen(*param_1);
  puVar2 = (uint *)_malloc(sVar1 + 1);
  this->mbr_0x4 = (dword)puVar2;
  if (puVar2 != (uint *)0x0) {
    FUN_0061f590(puVar2,(uint *)*param_1);
  }
  this->mbr_0x8 = 1;
  return this;
}



/* Library Function - Single Match
    public: __thiscall exception::exception(class exception const &)
   
   Library: Visual Studio 2003 Release */

exception * __thiscall exception::exception(exception *this,exception *param_1)

{
  dword dVar1;
  size_t sVar2;
  uint *puVar3;
  
  this->vftptr_0x0 = &exception__vftable_6cb018_006cb018;
  dVar1 = param_1->mbr_0x8;
  this->mbr_0x8 = dVar1;
  if (dVar1 == 0) {
    this->mbr_0x4 = param_1->mbr_0x4;
  }
  else {
    sVar2 = _strlen((char *)param_1->mbr_0x4);
    puVar3 = (uint *)_malloc(sVar2 + 1);
    this->mbr_0x4 = (dword)puVar3;
    if (puVar3 != (uint *)0x0) {
      FUN_0061f590(puVar3,(uint *)param_1->mbr_0x4);
    }
  }
  return this;
}



void __thiscall exception::meth_0x616baa(exception *this)

{
  this->vftptr_0x0 = &exception__vftable_6cb018_006cb018;
  if (this->mbr_0x8 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x4);
  }
  return;
}



undefined4 * __thiscall exception::virt_meth_0x616c75(exception *this,byte param_1)

{
  meth_0x616baa(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}


#include "../include/exception.h"
#include "../include/exception.h"
#include "../include/exception.h"
#include "../include/exception.h"
#include "../include/exception.h"
