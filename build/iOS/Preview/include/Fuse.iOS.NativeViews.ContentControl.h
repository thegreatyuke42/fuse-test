// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.27.14/NativeViews/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.ContentControl.h>
#include <Fuse.IChildObject.h>
#include <Fuse.iOS.NativeViews.ParentNativeView-1.h>
namespace g{namespace Fuse{namespace iOS{namespace NativeViews{struct ContentControl;}}}}
namespace g{namespace iOS{namespace UIKit{struct UIControl;}}}
namespace g{namespace iOS{namespace UIKit{struct UIView;}}}

namespace g{
namespace Fuse{
namespace iOS{
namespace NativeViews{

// internal sealed extern class ContentControl :18
// {
::g::Fuse::iOS::NativeViews::ParentNativeView_type* ContentControl_typeof();
void ContentControl__ctor_3_fn(ContentControl* __this);
void ContentControl__Create_fn(ContentControl* __this, ::g::iOS::UIKit::UIView** __retval);
void ContentControl__New1_fn(ContentControl** __retval);

struct ContentControl : ::g::Fuse::iOS::NativeViews::ParentNativeView
{
    uStrong< ::g::iOS::UIKit::UIControl*> _group;

    void ctor_3();
    static ContentControl* New1();
};
// }

}}}} // ::g::Fuse::iOS::NativeViews
