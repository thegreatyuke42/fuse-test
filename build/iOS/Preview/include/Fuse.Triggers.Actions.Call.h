// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Launcher/0.27.14/$.uno#1'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Call;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class Call :206
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Call_typeof();
void Call__ctor_1_fn(Call* __this);
void Call__New1_fn(Call** __retval);
void Call__get_Number_fn(Call* __this, uString** __retval);
void Call__set_Number_fn(Call* __this, uString* value);
void Call__Perform_fn(Call* __this, ::g::Fuse::Node* target);

struct Call : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong<uString*> _Number;

    void ctor_1();
    uString* Number();
    void Number(uString* value);
    static Call* New1();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
