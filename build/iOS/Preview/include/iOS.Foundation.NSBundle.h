// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.27.2/class/$.uno#487'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.Foundation.NSObject.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace Foundation{struct NSBundle;}}}

namespace g{
namespace iOS{
namespace Foundation{

// public sealed extern class NSBundle :36145
// {
::g::iOS::Foundation::NSObject_type* NSBundle_typeof();
void NSBundle___mainBundle_fn(NSBundle** __retval);
void NSBundle__pathForResourceOfType_fn(NSBundle* __this, uString* name_, uString* ext_, uString** __retval);

struct NSBundle : ::g::iOS::Foundation::NSObject
{
    uString* pathForResourceOfType(uString* name_, uString* ext_);
    static NSBundle* _mainBundle();
};
// }

}}} // ::g::iOS::Foundation
