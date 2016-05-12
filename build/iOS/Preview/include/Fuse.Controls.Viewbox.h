// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.14/$.uno#58'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.ContentControl.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IChildObject.h>
#include <Fuse.IDataContext.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Controls{struct Viewbox;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Internal{struct SizingContainer;}}}
namespace g{namespace Fuse{struct FastMatrix;}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class Viewbox :6392
// {
::g::Fuse::Controls::ContentControl_type* Viewbox_typeof();
void Viewbox__ctor_4_fn(Viewbox* __this);
void Viewbox__ArrangePaddingBox_fn(Viewbox* __this, ::g::Fuse::LayoutParams* lp);
void Viewbox__get_Content1_fn(Viewbox* __this, ::g::Fuse::Elements::Element** __retval);
void Viewbox__set_Content1_fn(Viewbox* __this, ::g::Fuse::Elements::Element* value);
void Viewbox__GetContentSize_fn(Viewbox* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void Viewbox__GetNaturalContentSize_fn(Viewbox* __this, ::g::Uno::Float2* __retval);
void Viewbox__IsMarginBoxDependent_fn(Viewbox* __this, ::g::Fuse::Node* child, int* __retval);
void Viewbox__New2_fn(Viewbox** __retval);
void Viewbox__OnSizingChanged_fn(Viewbox* __this);
void Viewbox__PrependImplicitTransform_fn(Viewbox* __this, ::g::Fuse::FastMatrix* m);
void Viewbox__get_StretchDirection_fn(Viewbox* __this, int* __retval);
void Viewbox__set_StretchDirection_fn(Viewbox* __this, int* value);
void Viewbox__get_StretchMode_fn(Viewbox* __this, int* __retval);
void Viewbox__set_StretchMode_fn(Viewbox* __this, int* value);

struct Viewbox : ::g::Fuse::Controls::ContentControl
{
    ::g::Uno::Float2 _scale;
    uStrong< ::g::Fuse::Internal::SizingContainer*> sizing;

    void ctor_4();
    ::g::Fuse::Elements::Element* Content1();
    void Content1(::g::Fuse::Elements::Element* value);
    ::g::Uno::Float2 GetNaturalContentSize();
    void OnSizingChanged();
    int StretchDirection();
    void StretchDirection(int value);
    int StretchMode();
    void StretchMode(int value);
    static Viewbox* New2();
};
// }

}}} // ::g::Fuse::Controls
