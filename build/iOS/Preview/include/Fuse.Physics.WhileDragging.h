// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Physics/0.27.14/$.uno#1'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Triggers.Trigger.h>
namespace g{namespace Fuse{namespace Physics{struct WhileDragging;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Physics{

// public sealed class WhileDragging :276
// {
::g::Fuse::Triggers::Trigger_type* WhileDragging_typeof();
void WhileDragging__ctor_2_fn(WhileDragging* __this);
void WhileDragging__Begin_fn(::g::Fuse::Node* n);
void WhileDragging__End_fn(::g::Fuse::Node* n);
void WhileDragging__New1_fn(WhileDragging** __retval);

struct WhileDragging : ::g::Fuse::Triggers::Trigger
{
    void ctor_2();
    static void Begin(::g::Fuse::Node* n);
    static void End(::g::Fuse::Node* n);
    static WhileDragging* New1();
};
// }

}}} // ::g::Fuse::Physics
