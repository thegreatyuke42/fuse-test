// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.27.2/class/$.uno#598'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.Foundation.INSCopying.h>
#include <iOS.Foundation.NSObject.h>
#include <ObjC.Object.h>
#include <objc/objc.h>
namespace g{namespace iOS{namespace UIKit{struct NSParagraphStyle;}}}

namespace g{
namespace iOS{
namespace UIKit{

// public extern class NSParagraphStyle :48278
// {
struct NSParagraphStyle_type : ::g::iOS::Foundation::NSObject_type
{
    ::g::iOS::Foundation::INSCopying interface1;
};

NSParagraphStyle_type* NSParagraphStyle_typeof();
void NSParagraphStyle__ctor_5_fn(NSParagraphStyle* __this, ::id* __id1);
void NSParagraphStyle___defaultParagraphStyle_fn(NSParagraphStyle** __retval);

struct NSParagraphStyle : ::g::iOS::Foundation::NSObject
{
    void ctor_5(::id __id1);
    static NSParagraphStyle* _defaultParagraphStyle();
};
// }

}}} // ::g::iOS::UIKit
