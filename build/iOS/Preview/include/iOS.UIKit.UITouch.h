// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.27.2/class/$.uno#939'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.Foundation.NSObject.h>
#include <ObjC.Object.h>
#include <objc/objc.h>
namespace g{namespace iOS{namespace CoreGraphics{struct CGPoint;}}}
namespace g{namespace iOS{namespace UIKit{struct UITouch;}}}
namespace g{namespace iOS{namespace UIKit{struct UIView;}}}

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class UITouch :86207
// {
::g::iOS::Foundation::NSObject_type* UITouch_typeof();
void UITouch__ctor_5_fn(UITouch* __this, ::id* __id1);
void UITouch__locationInView_fn(UITouch* __this, ::g::iOS::UIKit::UIView* view_, ::g::iOS::CoreGraphics::CGPoint* __retval);
void UITouch__New6_fn(::id* __id1, UITouch** __retval);
void UITouch__phase_fn(UITouch* __this, int* __retval);
void UITouch__get_Phase_fn(UITouch* __this, int* __retval);
void UITouch__timestamp_fn(UITouch* __this, double* __retval);
void UITouch__get_Timestamp_fn(UITouch* __this, double* __retval);

struct UITouch : ::g::iOS::Foundation::NSObject
{
    void ctor_5(::id __id1);
    ::g::iOS::CoreGraphics::CGPoint locationInView(::g::iOS::UIKit::UIView* view_);
    int phase();
    int Phase();
    double timestamp();
    double Timestamp();
    static UITouch* New6(::id __id1);
};
// }

}}} // ::g::iOS::UIKit
