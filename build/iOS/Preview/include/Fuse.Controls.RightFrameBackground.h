// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.14/$.uno#43'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IChildObject.h>
#include <Fuse.IDataContext.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Controls{struct RightFrameBackground;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class RightFrameBackground :4097
// {
::g::Fuse::Controls::Control_type* RightFrameBackground_typeof();
void RightFrameBackground__ctor_3_fn(RightFrameBackground* __this);
void RightFrameBackground__GetContentSize_fn(RightFrameBackground* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void RightFrameBackground__New1_fn(RightFrameBackground** __retval);
void RightFrameBackground__OnRooted_fn(RightFrameBackground* __this);
void RightFrameBackground__OnUnrooted_fn(RightFrameBackground* __this);

struct RightFrameBackground : ::g::Fuse::Controls::Control
{
    void ctor_3();
    static RightFrameBackground* New1();
};
// }

}}} // ::g::Fuse::Controls
