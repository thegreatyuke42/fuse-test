// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.27.14/$.uno#1'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Triggers.WhileEnabledDisabledTrigger.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileDisabled;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileDisabled :64
// {
::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type* WhileDisabled_typeof();
void WhileDisabled__ctor_4_fn(WhileDisabled* __this);
void WhileDisabled__get_IsActive_fn(WhileDisabled* __this, bool* __retval);
void WhileDisabled__New1_fn(WhileDisabled** __retval);

struct WhileDisabled : ::g::Fuse::Triggers::WhileEnabledDisabledTrigger
{
    void ctor_4();
    static WhileDisabled* New1();
};
// }

}}} // ::g::Fuse::Triggers
