// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.27.2/class/$.uno#639'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.Foundation.NSObject.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace Foundation{struct NSURLCache;}}}

namespace g{
namespace iOS{
namespace Foundation{

// public sealed extern class NSURLCache :52765
// {
::g::iOS::Foundation::NSObject_type* NSURLCache_typeof();
void NSURLCache___sharedURLCache_fn(NSURLCache** __retval);
void NSURLCache__removeAllCachedResponses_fn(NSURLCache* __this);

struct NSURLCache : ::g::iOS::Foundation::NSObject
{
    void removeAllCachedResponses();
    static NSURLCache* _sharedURLCache();
};
// }

}}} // ::g::iOS::Foundation
