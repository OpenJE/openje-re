#include "../include/TaskStatus.h"

TaskStatus * __thiscall TaskStatus::TaskStatus(TaskStatus *this)

{
  this->vftptr_0x0 = &TaskStatus__vftable_666c74_00666c74;
  this->mbr_0x4 = 0xffffffff;
  this->mbr_0x8 = 0xffffffff;
  this->mbr_0xc = 0;
  return this;
}



TaskStatus * __thiscall TaskStatus::~TaskStatus(TaskStatus *this)

{
  TaskStatus *in_EAX;
  
  this->vftptr_0x0 = &TaskStatus__vftable_666c74_00666c74;
  return in_EAX;
}



undefined4 * __thiscall TaskStatus::virt_meth_0x46c330(TaskStatus *this,byte param_1)

{
  ~TaskStatus(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}


#include "../include/TaskStatus.h"
