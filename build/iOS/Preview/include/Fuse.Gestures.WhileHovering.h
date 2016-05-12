// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Gestures/0.27.14/$.uno#12'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Triggers.Trigger.h>
namespace g{namespace Fuse{namespace Gestures{struct WhileHovering;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class WhileHovering :1514
// {
::g::Fuse::Triggers::Trigger_type* WhileHovering_typeof();
void WhileHovering__ctor_2_fn(WhileHovering* __this);
void WhileHovering__New1_fn(WhileHovering** __retval);
void WhileHovering__OnIsContextEnabledChanged_fn(WhileHovering* __this, uObject* s, uObject* a);
void WhileHovering__OnPointerEntered_fn(WhileHovering* __this, uObject* sender, uObject* args);
void WhileHovering__OnPointerLeft_fn(WhileHovering* __this, uObject* sender, uObject* args);
void WhileHovering__OnRooted_fn(WhileHovering* __this, ::g::Fuse::Node* parentNode);
void WhileHovering__OnUnrooted_fn(WhileHovering* __this, ::g::Fuse::Node* parentNode);

struct WhileHovering : ::g::Fuse::Triggers::Trigger
{
    void ctor_2();
    void OnIsContextEnabledChanged(uObject* s, uObject* a);
    void OnPointerEntered(uObject* sender, uObject* args);
    void OnPointerLeft(uObject* sender, uObject* args);
    static WhileHovering* New1();
};
// }

}}} // ::g::Fuse::Gestures
