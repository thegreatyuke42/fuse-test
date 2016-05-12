// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.27.14/$.uno#26'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Triggers.WhileWindowAspect.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileWindowLandscape;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileWindowLandscape :2285
// {
::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowLandscape_typeof();
void WhileWindowLandscape__ctor_5_fn(WhileWindowLandscape* __this);
void WhileWindowLandscape__get_IsActive_fn(WhileWindowLandscape* __this, bool* __retval);
void WhileWindowLandscape__New1_fn(WhileWindowLandscape** __retval);

struct WhileWindowLandscape : ::g::Fuse::Triggers::WhileWindowAspect
{
    void ctor_5();
    static WhileWindowLandscape* New1();
};
// }

}}} // ::g::Fuse::Triggers
