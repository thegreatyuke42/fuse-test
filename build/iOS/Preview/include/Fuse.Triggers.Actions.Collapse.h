// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.27.14/Actions/$.uno#10'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Collapse;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class Collapse :538
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Collapse_typeof();
void Collapse__ctor_1_fn(Collapse* __this);
void Collapse__New1_fn(Collapse** __retval);
void Collapse__Perform_fn(Collapse* __this, ::g::Fuse::Node* target);

struct Collapse : ::g::Fuse::Triggers::Actions::TriggerAction
{
    void ctor_1();
    static Collapse* New1();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
