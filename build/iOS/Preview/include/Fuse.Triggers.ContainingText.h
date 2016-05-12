// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.14/Triggers/$.uno#1'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Triggers.WhileContainsText.h>
namespace g{namespace Fuse{namespace Triggers{struct ContainingText;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class ContainingText :94
// {
::g::Fuse::Triggers::Trigger_type* ContainingText_typeof();
void ContainingText__ctor_4_fn(ContainingText* __this);
void ContainingText__New2_fn(ContainingText** __retval);

struct ContainingText : ::g::Fuse::Triggers::WhileContainsText
{
    void ctor_4();
    static ContainingText* New2();
};
// }

}}} // ::g::Fuse::Triggers
