// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.27.14/NativeViews/$.uno#5'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.UIKit.IUICoordinateSpace.h>
#include <iOS.UIKit.UIControl.h>
#include <ObjC.Object.h>
namespace g{namespace Fuse{namespace iOS{namespace NativeViews{struct NativeViewHost__ViewHost;}}}}
namespace g{namespace iOS{namespace CoreGraphics{struct CGRect;}}}

namespace g{
namespace Fuse{
namespace iOS{
namespace NativeViews{

// private sealed class NativeViewHost.ViewHost :593
// {
::g::iOS::UIKit::UIView_type* NativeViewHost__ViewHost_typeof();
void NativeViewHost__ViewHost__ctor_10_fn(NativeViewHost__ViewHost* __this, uDelegate* invalidate);
void NativeViewHost__ViewHost__New11_fn(uDelegate* invalidate, NativeViewHost__ViewHost** __retval);
void NativeViewHost__ViewHost__setNeedsDisplay_fn(NativeViewHost__ViewHost* __this);
void NativeViewHost__ViewHost__setNeedsDisplayInRect_fn(NativeViewHost__ViewHost* __this, ::g::iOS::CoreGraphics::CGRect* rect);

struct NativeViewHost__ViewHost : ::g::iOS::UIKit::UIControl
{
    uStrong<uDelegate*> _invalidate;

    void ctor_10(uDelegate* invalidate);
    static NativeViewHost__ViewHost* New11(uDelegate* invalidate);
};
// }

}}}} // ::g::Fuse::iOS::NativeViews
