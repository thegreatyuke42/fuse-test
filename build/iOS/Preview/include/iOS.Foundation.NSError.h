// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.27.2/class/$.uno#516'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.Foundation.INSCopying.h>
#include <iOS.Foundation.NSObject.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace Foundation{struct NSError;}}}

namespace g{
namespace iOS{
namespace Foundation{

// public sealed extern class NSError :39962
// {
struct NSError_type : ::g::iOS::Foundation::NSObject_type
{
    ::g::iOS::Foundation::INSCopying interface1;
};

NSError_type* NSError_typeof();
void NSError__code_fn(NSError* __this, int* __retval);
void NSError__get_Code_fn(NSError* __this, int* __retval);

struct NSError : ::g::iOS::Foundation::NSObject
{
    int code();
    int Code();
};
// }

}}} // ::g::iOS::Foundation
