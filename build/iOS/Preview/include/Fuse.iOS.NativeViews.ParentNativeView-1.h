// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.27.14/NativeViews/$.uno#7'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.iOS.NativeViews.NativeView.h>
namespace g{namespace Fuse{namespace Controls{struct Control;}}}
namespace g{namespace Fuse{namespace iOS{namespace NativeViews{struct ParentNativeView;}}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace iOS{
namespace NativeViews{

// internal abstract extern class ParentNativeView<T> :892
// {
struct ParentNativeView_type : ::g::Fuse::iOS::NativeViews::NativeView_type
{
    void(*fp_Attach)(::g::Fuse::iOS::NativeViews::ParentNativeView*);
    void(*fp_Detach)(::g::Fuse::iOS::NativeViews::ParentNativeView*);
};

ParentNativeView_type* ParentNativeView_typeof();
void ParentNativeView__ctor_2_fn(ParentNativeView* __this);
void ParentNativeView__Attach_fn(ParentNativeView* __this);
void ParentNativeView__get_Control_fn(ParentNativeView* __this, ::g::Fuse::Controls::Control** __retval);
void ParentNativeView__Detach_fn(ParentNativeView* __this);
void ParentNativeView__OnRooted_fn(ParentNativeView* __this, ::g::Fuse::Node* parentNode);
void ParentNativeView__OnUnrooted_fn(ParentNativeView* __this, ::g::Fuse::Node* parentNode);
void ParentNativeView__get_Size_fn(ParentNativeView* __this, ::g::Uno::Float2* __retval);

struct ParentNativeView : ::g::Fuse::iOS::NativeViews::NativeView
{
    void ctor_2();
    void Attach() { (((ParentNativeView_type*)__type)->fp_Attach)(this); }
    ::g::Fuse::Controls::Control* Control();
    void Detach() { (((ParentNativeView_type*)__type)->fp_Detach)(this); }
    static void Attach(ParentNativeView* __this) { ParentNativeView__Attach_fn(__this); }
    static void Detach(ParentNativeView* __this) { ParentNativeView__Detach_fn(__this); }
};
// }

}}}} // ::g::Fuse::iOS::NativeViews
