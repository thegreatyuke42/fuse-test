// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Gestures/0.27.14/$.uno#7'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Triggers.Trigger.h>
namespace g{namespace Fuse{namespace Gestures{namespace Internal{struct SwipeRegion;}}}}
namespace g{namespace Fuse{namespace Gestures{struct SwipeGesture;}}}
namespace g{namespace Fuse{namespace Gestures{struct SwipingAnimation;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class SwipingAnimation :863
// {
::g::Fuse::Triggers::Trigger_type* SwipingAnimation_typeof();
void SwipingAnimation__ctor_2_fn(SwipingAnimation* __this, ::g::Fuse::Gestures::SwipeGesture* source);
void SwipingAnimation__New1_fn(::g::Fuse::Gestures::SwipeGesture* source, SwipingAnimation** __retval);
void SwipingAnimation__OnProgressChanged1_fn(SwipingAnimation* __this, double* progress, uObject* origin);
void SwipingAnimation__OnRooted_fn(SwipingAnimation* __this, ::g::Fuse::Node* n);
void SwipingAnimation__OnUnrooted_fn(SwipingAnimation* __this, ::g::Fuse::Node* n);
void SwipingAnimation__get_Source_fn(SwipingAnimation* __this, ::g::Fuse::Gestures::SwipeGesture** __retval);
void SwipingAnimation__set_Source_fn(SwipingAnimation* __this, ::g::Fuse::Gestures::SwipeGesture* value);

struct SwipingAnimation : ::g::Fuse::Triggers::Trigger
{
    uStrong< ::g::Fuse::Gestures::Internal::SwipeRegion*> _region;
    uStrong< ::g::Fuse::Gestures::SwipeGesture*> _Source;

    void ctor_2(::g::Fuse::Gestures::SwipeGesture* source);
    void OnProgressChanged1(double progress, uObject* origin);
    ::g::Fuse::Gestures::SwipeGesture* Source();
    void Source(::g::Fuse::Gestures::SwipeGesture* value);
    static SwipingAnimation* New1(::g::Fuse::Gestures::SwipeGesture* source);
};
// }

}}} // ::g::Fuse::Gestures
