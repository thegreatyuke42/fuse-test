// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.27.14/$.uno#5'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Triggers.Trigger.h>
namespace g{namespace Fuse{namespace Triggers{struct Android;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class Android :287
// {
::g::Fuse::Triggers::Trigger_type* Android_typeof();
void Android__ctor_2_fn(Android* __this);
void Android__New1_fn(Android** __retval);
void Android__OnRooted_fn(Android* __this, ::g::Fuse::Node* parentNode);
void Android__OnUnrooted_fn(Android* __this, ::g::Fuse::Node* parentNode);

struct Android : ::g::Fuse::Triggers::Trigger
{
    void ctor_2();
    static Android* New1();
};
// }

}}} // ::g::Fuse::Triggers
