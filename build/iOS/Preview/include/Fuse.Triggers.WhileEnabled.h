// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.27.14/$.uno#1'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Triggers.WhileEnabledDisabledTrigger.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileEnabled;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileEnabled :75
// {
::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type* WhileEnabled_typeof();
void WhileEnabled__ctor_4_fn(WhileEnabled* __this);
void WhileEnabled__get_IsActive_fn(WhileEnabled* __this, bool* __retval);
void WhileEnabled__New1_fn(WhileEnabled** __retval);

struct WhileEnabled : ::g::Fuse::Triggers::WhileEnabledDisabledTrigger
{
    void ctor_4();
    static WhileEnabled* New1();
};
// }

}}} // ::g::Fuse::Triggers
