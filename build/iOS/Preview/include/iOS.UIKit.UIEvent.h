// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.27.2/class/$.uno#848'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.Foundation.NSObject.h>
#include <ObjC.Object.h>
#include <objc/objc.h>
namespace g{namespace iOS{namespace Foundation{struct NSSet;}}}
namespace g{namespace iOS{namespace UIKit{struct UIEvent;}}}
namespace g{namespace iOS{namespace UIKit{struct UIView;}}}

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class UIEvent :75021
// {
::g::iOS::Foundation::NSObject_type* UIEvent_typeof();
void UIEvent__ctor_5_fn(UIEvent* __this, ::id* __id1);
void UIEvent__New6_fn(::id* __id1, UIEvent** __retval);
void UIEvent__touchesForView_fn(UIEvent* __this, ::g::iOS::UIKit::UIView* view_, ::g::iOS::Foundation::NSSet** __retval);

struct UIEvent : ::g::iOS::Foundation::NSObject
{
    void ctor_5(::id __id1);
    ::g::iOS::Foundation::NSSet* touchesForView(::g::iOS::UIKit::UIView* view_);
    static UIEvent* New6(::id __id1);
};
// }

}}} // ::g::iOS::UIKit
