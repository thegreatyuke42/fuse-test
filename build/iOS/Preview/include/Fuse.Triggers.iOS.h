// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.27.14/$.uno#5'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Triggers.Trigger.h>
namespace g{namespace Fuse{namespace Triggers{struct iOS;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class iOS :266
// {
::g::Fuse::Triggers::Trigger_type* iOS_typeof();
void iOS__ctor_2_fn(iOS* __this);
void iOS__New1_fn(iOS** __retval);
void iOS__OnRooted_fn(iOS* __this, ::g::Fuse::Node* parentNode);
void iOS__OnUnrooted_fn(iOS* __this, ::g::Fuse::Node* parentNode);

struct iOS : ::g::Fuse::Triggers::Trigger
{
    void ctor_2();
    static iOS* New1();
};
// }

}}} // ::g::Fuse::Triggers
