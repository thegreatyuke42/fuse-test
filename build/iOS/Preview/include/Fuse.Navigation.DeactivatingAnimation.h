// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.27.14/$.uno#4'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Navigation.NavigationAnimation.h>
namespace g{namespace Fuse{namespace Navigation{struct DeactivatingAnimation;}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationArgs;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class DeactivatingAnimation :612
// {
::g::Fuse::Navigation::NavigationAnimation_type* DeactivatingAnimation_typeof();
void DeactivatingAnimation__ctor_3_fn(DeactivatingAnimation* __this);
void DeactivatingAnimation__ForceUpdate_fn(DeactivatingAnimation* __this);
void DeactivatingAnimation__New1_fn(DeactivatingAnimation** __retval);
void DeactivatingAnimation__OnNavigationStateChanged_fn(DeactivatingAnimation* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state);

struct DeactivatingAnimation : ::g::Fuse::Navigation::NavigationAnimation
{
    void ctor_3();
    static DeactivatingAnimation* New1();
};
// }

}}} // ::g::Fuse::Navigation
