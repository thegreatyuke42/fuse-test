// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Physics/0.27.14/$.uno#3'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Physics.ForceFieldTrigger.h>
namespace g{namespace Fuse{namespace Physics{struct Body;}}}
namespace g{namespace Fuse{namespace Physics{struct ForceFieldEventTrigger;}}}

namespace g{
namespace Fuse{
namespace Physics{

// public abstract class ForceFieldEventTrigger :384
// {
::g::Fuse::Physics::ForceFieldTrigger_type* ForceFieldEventTrigger_typeof();
void ForceFieldEventTrigger__ctor_3_fn(ForceFieldEventTrigger* __this);
void ForceFieldEventTrigger__add_Handler_fn(ForceFieldEventTrigger* __this, uDelegate* value);
void ForceFieldEventTrigger__remove_Handler_fn(ForceFieldEventTrigger* __this, uDelegate* value);
void ForceFieldEventTrigger__OnTriggered_fn(ForceFieldEventTrigger* __this, ::g::Fuse::Physics::Body* body);

struct ForceFieldEventTrigger : ::g::Fuse::Physics::ForceFieldTrigger
{
    uStrong<uDelegate*> Handler1;

    void ctor_3();
    void add_Handler(uDelegate* value);
    void remove_Handler(uDelegate* value);
    void OnTriggered(::g::Fuse::Physics::Body* body);
};
// }

}}} // ::g::Fuse::Physics
