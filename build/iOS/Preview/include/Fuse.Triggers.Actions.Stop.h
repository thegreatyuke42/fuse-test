// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.27.14/Actions/$.uno#5'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.PlaybackAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Stop;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class Stop :225
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Stop_typeof();
void Stop__ctor_2_fn(Stop* __this);
void Stop__New1_fn(Stop** __retval);
void Stop__Perform_fn(Stop* __this, ::g::Fuse::Node* target);

struct Stop : ::g::Fuse::Triggers::Actions::PlaybackAction
{
    void ctor_2();
    static Stop* New1();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
