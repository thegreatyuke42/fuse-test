// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.27.14/$.uno#12'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Triggers.Trigger.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationStateArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileNavigating;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class WhileNavigating :2255
// {
::g::Fuse::Triggers::Trigger_type* WhileNavigating_typeof();
void WhileNavigating__ctor_2_fn(WhileNavigating* __this);
void WhileNavigating__New1_fn(WhileNavigating** __retval);
void WhileNavigating__OnRooted_fn(WhileNavigating* __this, ::g::Fuse::Node* parentNode);
void WhileNavigating__OnStateChange_fn(WhileNavigating* __this, uObject* s, ::g::Fuse::Navigation::NavigationStateArgs* args);
void WhileNavigating__OnUnrooted_fn(WhileNavigating* __this, ::g::Fuse::Node* parentNode);

struct WhileNavigating : ::g::Fuse::Triggers::Trigger
{
    void ctor_2();
    void OnStateChange(uObject* s, ::g::Fuse::Navigation::NavigationStateArgs* args);
    static WhileNavigating* New1();
};
// }

}}} // ::g::Fuse::Navigation
