// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Gestures/0.27.14/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Triggers.Trigger.h>
namespace g{namespace Fuse{namespace Gestures{struct Clicker;}}}
namespace g{namespace Fuse{namespace Gestures{struct ClickerTrigger;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public abstract class ClickerTrigger :13
// {
::g::Fuse::Triggers::Trigger_type* ClickerTrigger_typeof();
void ClickerTrigger__ctor_2_fn(ClickerTrigger* __this);
void ClickerTrigger__OnRooted_fn(ClickerTrigger* __this, ::g::Fuse::Node* parentNode);
void ClickerTrigger__OnUnrooted_fn(ClickerTrigger* __this, ::g::Fuse::Node* parentNode);

struct ClickerTrigger : ::g::Fuse::Triggers::Trigger
{
    uStrong< ::g::Fuse::Gestures::Clicker*> Clicker;

    void ctor_2();
};
// }

}}} // ::g::Fuse::Gestures
