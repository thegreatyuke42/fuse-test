// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.27.14/Triggers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Float2.h>
#include <Uno.Float4x4.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct PreplacementArgs;}}}
namespace g{namespace Fuse{namespace Triggers{struct LayoutAnimation;}}}
namespace g{namespace Fuse{namespace Triggers{struct LayoutTransitionedArgs;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PlacedArgs;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class LayoutAnimation :161
// {
::g::Fuse::Triggers::Trigger_type* LayoutAnimation_typeof();
void LayoutAnimation__ctor_2_fn(LayoutAnimation* __this);
void LayoutAnimation__New1_fn(LayoutAnimation** __retval);
void LayoutAnimation__OnPlaced_fn(LayoutAnimation* __this, uObject* sender, ::g::Fuse::PlacedArgs* args);
void LayoutAnimation__OnPreplacement_fn(LayoutAnimation* __this, uObject* sender, ::g::Fuse::Elements::PreplacementArgs* args);
void LayoutAnimation__OnRooted_fn(LayoutAnimation* __this, ::g::Fuse::Node* parentNode);
void LayoutAnimation__OnTransitioned_fn(LayoutAnimation* __this, uObject* sender, ::g::Fuse::Triggers::LayoutTransitionedArgs* args);
void LayoutAnimation__OnUnrooted_fn(LayoutAnimation* __this, ::g::Fuse::Node* parentNode);
void LayoutAnimation__get_Type_fn(LayoutAnimation* __this, int* __retval);
void LayoutAnimation__set_Type_fn(LayoutAnimation* __this, int* value);

struct LayoutAnimation : ::g::Fuse::Triggers::Trigger
{
    uStrong< ::g::Fuse::Elements::Element*> _element;
    int _frameTrans;
    int _hasOld;
    ::g::Uno::Float4x4 _oldLocal;
    uStrong< ::g::Fuse::Node*> _oldParent;
    ::g::Uno::Float2 _oldPosition;
    ::g::Uno::Float2 _oldSize;
    ::g::Uno::Float4x4 _oldWorld;
    int _type;

    void ctor_2();
    void OnPlaced(uObject* sender, ::g::Fuse::PlacedArgs* args);
    void OnPreplacement(uObject* sender, ::g::Fuse::Elements::PreplacementArgs* args);
    void OnTransitioned(uObject* sender, ::g::Fuse::Triggers::LayoutTransitionedArgs* args);
    int Type();
    void Type(int value);
    static LayoutAnimation* New1();
};
// }

}}} // ::g::Fuse::Triggers
