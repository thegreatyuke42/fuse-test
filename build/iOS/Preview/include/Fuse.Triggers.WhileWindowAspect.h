// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.27.14/$.uno#26'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Triggers.WindowSizeTrigger.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileWindowAspect;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract class WhileWindowAspect :2273
// {
::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowAspect_typeof();
void WhileWindowAspect__ctor_4_fn(WhileWindowAspect* __this);
void WhileWindowAspect__get_Aspect_fn(WhileWindowAspect* __this, float* __retval);

struct WhileWindowAspect : ::g::Fuse::Triggers::WindowSizeTrigger
{
    void ctor_4();
    float Aspect();
};
// }

}}} // ::g::Fuse::Triggers
