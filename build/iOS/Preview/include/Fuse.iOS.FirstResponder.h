// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.27.14/FirstResponder/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <objc/objc.h>
#include <Uno.h>
namespace g{namespace Fuse{namespace iOS{struct FirstResponder;}}}
namespace g{namespace iOS{namespace UIKit{struct UIView;}}}

namespace g{
namespace Fuse{
namespace iOS{

// public static extern class FirstResponder :13
// {
uClassType* FirstResponder_typeof();
void FirstResponder__get_Current_fn(::g::iOS::UIKit::UIView** __retval);
void FirstResponder__GetCurrent_fn(::id* __retval);

struct FirstResponder : uObject
{
    static ::id GetCurrent();
    static ::g::iOS::UIKit::UIView* Current();
};
// }

}}} // ::g::Fuse::iOS
