// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.27.14/$.uno#23'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Triggers.Trigger.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileTrigger;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract class WhileTrigger :2003
// {
::g::Fuse::Triggers::Trigger_type* WhileTrigger_typeof();
void WhileTrigger__ctor_2_fn(WhileTrigger* __this);
void WhileTrigger__BypassSetActive_fn(WhileTrigger* __this, bool* on);
void WhileTrigger__get_Invert_fn(WhileTrigger* __this, bool* __retval);
void WhileTrigger__set_Invert_fn(WhileTrigger* __this, bool* value);
void WhileTrigger__OnRooted_fn(WhileTrigger* __this, ::g::Fuse::Node* parentNode);
void WhileTrigger__SetActive_fn(WhileTrigger* __this, bool* on);

struct WhileTrigger : ::g::Fuse::Triggers::Trigger
{
    int _rootFrame;
    bool _Invert;

    void ctor_2();
    void BypassSetActive(bool on);
    bool Invert();
    void Invert(bool value);
    void SetActive(bool on);
};
// }

}}} // ::g::Fuse::Triggers
