// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.27.2/class/$.uno#849'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.Foundation.INSCopying.h>
#include <iOS.Foundation.NSObject.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace UIKit{struct UIFont;}}}

namespace g{
namespace iOS{
namespace UIKit{

// public sealed extern class UIFont :75079
// {
struct UIFont_type : ::g::iOS::Foundation::NSObject_type
{
    ::g::iOS::Foundation::INSCopying interface1;
};

UIFont_type* UIFont_typeof();
void UIFont___fontWithNameSize_fn(uString* fontName_, double* fontSize_, UIFont** __retval);
void UIFont___systemFontOfSize_fn(double* fontSize_, UIFont** __retval);
void UIFont__fontName_fn(UIFont* __this, uString** __retval);
void UIFont__get_FontName_fn(UIFont* __this, uString** __retval);
void UIFont__lineHeight_fn(UIFont* __this, double* __retval);
void UIFont__get_LineHeight_fn(UIFont* __this, double* __retval);

struct UIFont : ::g::iOS::Foundation::NSObject
{
    uString* fontName();
    uString* FontName();
    double lineHeight();
    double LineHeight();
    static UIFont* _fontWithNameSize(uString* fontName_, double fontSize_);
    static UIFont* _systemFontOfSize(double fontSize_);
};
// }

}}} // ::g::iOS::UIKit
