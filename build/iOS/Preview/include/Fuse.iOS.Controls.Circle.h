// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.27.14/Controls/$.uno#1'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Circle.h>
#include <Fuse.IChildObject.h>
#include <Fuse.IDataContext.h>
#include <Fuse.iOS.Controls.Shape-1.h>
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct Circle;}}}}
namespace g{namespace iOS{namespace UIKit{struct UIBezierPath;}}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Controls{

// public sealed extern class Circle :197
// {
::g::Fuse::iOS::Controls::Shape_type* Circle_typeof();
void Circle__ctor_4_fn(Circle* __this);
void Circle__CreatePath_fn(Circle* __this, ::g::iOS::UIKit::UIBezierPath** __retval);
void Circle__New1_fn(Circle** __retval);

struct Circle : ::g::Fuse::iOS::Controls::Shape
{
    void ctor_4();
    static Circle* New1();
};
// }

}}}} // ::g::Fuse::iOS::Controls
