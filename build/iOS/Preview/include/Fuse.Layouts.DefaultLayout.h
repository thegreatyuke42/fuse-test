// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.14/Layouts/$.uno#2'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Layouts.Layout.h>
namespace g{namespace Fuse{namespace Layouts{struct DefaultLayout;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Layouts{

// public sealed class DefaultLayout :365
// {
::g::Fuse::Layouts::Layout_type* DefaultLayout_typeof();
void DefaultLayout__ctor_1_fn(DefaultLayout* __this);
void DefaultLayout__ArrangePaddingBox_fn(DefaultLayout* __this, uObject* elements, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp);
void DefaultLayout__GetContentSize_fn(DefaultLayout* __this, uObject* elements, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void DefaultLayout__GetElementsSize_fn(DefaultLayout* __this, uObject* elements, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void DefaultLayout__IsMarginBoxDependent_fn(DefaultLayout* __this, ::g::Fuse::Node* child, int* __retval);
void DefaultLayout__New1_fn(DefaultLayout** __retval);

struct DefaultLayout : ::g::Fuse::Layouts::Layout
{
    void ctor_1();
    ::g::Uno::Float2 GetElementsSize(uObject* elements, ::g::Fuse::LayoutParams lp);
    static DefaultLayout* New1();
};
// }

}}} // ::g::Fuse::Layouts
