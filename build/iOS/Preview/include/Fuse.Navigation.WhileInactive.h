// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.27.14/$.uno#13'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Navigation.WhileNavigationTrigger.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileInactive;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class WhileInactive :2368
// {
::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInactive_typeof();
void WhileInactive__ctor_4_fn(WhileInactive* __this);
void WhileInactive__ForceUpdate_fn(WhileInactive* __this);
void WhileInactive__New1_fn(WhileInactive** __retval);
void WhileInactive__OnNavigationStateChanged_fn(WhileInactive* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state);

struct WhileInactive : ::g::Fuse::Navigation::WhileNavigationTrigger
{
    void ctor_4();
    static WhileInactive* New1();
};
// }

}}} // ::g::Fuse::Navigation
