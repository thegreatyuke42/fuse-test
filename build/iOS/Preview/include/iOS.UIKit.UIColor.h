// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.27.2/class/$.uno#835'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.Foundation.INSCopying.h>
#include <iOS.Foundation.NSObject.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace UIKit{struct UIColor;}}}

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class UIColor :73587
// {
struct UIColor_type : ::g::iOS::Foundation::NSObject_type
{
    ::g::iOS::Foundation::INSCopying interface1;
};

UIColor_type* UIColor_typeof();
void UIColor__ctor_4_fn(UIColor* __this);
void UIColor___clearColor_fn(UIColor** __retval);
void UIColor___lightGrayColor_fn(UIColor** __retval);
void UIColor__cgColor_fn(UIColor* __this, app::CGColorRef** __retval);
void UIColor__get_CGColor_fn(UIColor* __this, app::CGColorRef** __retval);
void UIColor__initWithRedGreenBlueAlpha_fn(UIColor* __this, double* red_, double* green_, double* blue_, double* alpha_);
void UIColor__New5_fn(UIColor** __retval);

struct UIColor : ::g::iOS::Foundation::NSObject
{
    void ctor_4();
    app::CGColorRef* cgColor();
    app::CGColorRef* CGColor();
    void initWithRedGreenBlueAlpha(double red_, double green_, double blue_, double alpha_);
    static UIColor* _clearColor();
    static UIColor* _lightGrayColor();
    static UIColor* New5();
};
// }

}}} // ::g::iOS::UIKit
