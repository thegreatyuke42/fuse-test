// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.27.2/interface/wrapper/$.uno#157'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.UIKit.IUICoordinateSpace.h>
#include <ObjC.Bindings.Object.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace CoreGraphics{struct CGPoint;}}}
namespace g{namespace iOS{namespace CoreGraphics{struct CGRect;}}}
namespace g{namespace iOS{namespace UIKit{namespace Interop{struct IUICoordinateSpace;}}}}

namespace g{
namespace iOS{
namespace UIKit{
namespace Interop{

// public sealed extern class IUICoordinateSpace :6093
// {
struct IUICoordinateSpace_type : ::g::ObjC::Bindings::Object_type
{
    ::g::iOS::UIKit::IUICoordinateSpace interface1;
};

IUICoordinateSpace_type* IUICoordinateSpace_typeof();
void IUICoordinateSpace__bounds_fn(IUICoordinateSpace* __this, ::g::iOS::CoreGraphics::CGRect* __retval);
void IUICoordinateSpace__convertPointFromCoordinateSpace_fn(IUICoordinateSpace* __this, ::g::iOS::CoreGraphics::CGPoint* point_, uObject* coordinateSpace_, ::g::iOS::CoreGraphics::CGPoint* __retval);
void IUICoordinateSpace__convertPointToCoordinateSpace_fn(IUICoordinateSpace* __this, ::g::iOS::CoreGraphics::CGPoint* point_, uObject* coordinateSpace_, ::g::iOS::CoreGraphics::CGPoint* __retval);
void IUICoordinateSpace__convertRectFromCoordinateSpace_fn(IUICoordinateSpace* __this, ::g::iOS::CoreGraphics::CGRect* rect_, uObject* coordinateSpace_, ::g::iOS::CoreGraphics::CGRect* __retval);
void IUICoordinateSpace__convertRectToCoordinateSpace_fn(IUICoordinateSpace* __this, ::g::iOS::CoreGraphics::CGRect* rect_, uObject* coordinateSpace_, ::g::iOS::CoreGraphics::CGRect* __retval);

struct IUICoordinateSpace : ::g::ObjC::Bindings::Object
{
    ::g::iOS::CoreGraphics::CGRect bounds();
    ::g::iOS::CoreGraphics::CGPoint convertPointFromCoordinateSpace(::g::iOS::CoreGraphics::CGPoint point_, uObject* coordinateSpace_);
    ::g::iOS::CoreGraphics::CGPoint convertPointToCoordinateSpace(::g::iOS::CoreGraphics::CGPoint point_, uObject* coordinateSpace_);
    ::g::iOS::CoreGraphics::CGRect convertRectFromCoordinateSpace(::g::iOS::CoreGraphics::CGRect rect_, uObject* coordinateSpace_);
    ::g::iOS::CoreGraphics::CGRect convertRectToCoordinateSpace(::g::iOS::CoreGraphics::CGRect rect_, uObject* coordinateSpace_);
};
// }

}}}} // ::g::iOS::UIKit::Interop
