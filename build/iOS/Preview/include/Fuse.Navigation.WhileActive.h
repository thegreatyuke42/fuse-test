// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.27.14/$.uno#13'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Navigation.WhileNavigationTrigger.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileActive;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class WhileActive :2350
// {
::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileActive_typeof();
void WhileActive__ctor_4_fn(WhileActive* __this);
void WhileActive__ForceUpdate_fn(WhileActive* __this);
void WhileActive__InvertProgress_fn(WhileActive* __this, double* p, double* __retval);
void WhileActive__New1_fn(WhileActive** __retval);
void WhileActive__OnNavigationStateChanged_fn(WhileActive* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state);

struct WhileActive : ::g::Fuse::Navigation::WhileNavigationTrigger
{
    void ctor_4();
    double InvertProgress(double p);
    static WhileActive* New1();
};
// }

}}} // ::g::Fuse::Navigation
