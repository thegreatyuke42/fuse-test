// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.27.14/$.uno#10'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Navigation{struct BackForwardNavigationTriggerAction;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public abstract class BackForwardNavigationTriggerAction :2148
// {
struct BackForwardNavigationTriggerAction_type : ::g::Fuse::Triggers::Actions::TriggerAction_type
{
    void(*fp_Perform1)(::g::Fuse::Navigation::BackForwardNavigationTriggerAction*, uObject*, ::g::Fuse::Node*);
};

BackForwardNavigationTriggerAction_type* BackForwardNavigationTriggerAction_typeof();
void BackForwardNavigationTriggerAction__ctor_1_fn(BackForwardNavigationTriggerAction* __this);
void BackForwardNavigationTriggerAction__Perform_fn(BackForwardNavigationTriggerAction* __this, ::g::Fuse::Node* n);

struct BackForwardNavigationTriggerAction : ::g::Fuse::Triggers::Actions::TriggerAction
{
    void ctor_1();
    void Perform1(uObject* ctx, ::g::Fuse::Node* node) { (((BackForwardNavigationTriggerAction_type*)__type)->fp_Perform1)(this, ctx, node); }
};
// }

}}} // ::g::Fuse::Navigation
