// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Android.NativeViews.ContentControl.h>
#include <Fuse.Android.NativeViews.GraphicsView.h>
#include <Fuse.Android.NativeViews.LeafNativeView.h>
#include <Fuse.Android.NativeViews.NativeView.h>
#include <Fuse.Android.NativeViews.NativeViewHost.h>
#include <Fuse.Android.NativeViews.ParentControl.h>
#include <Fuse.Android.NativeViews.ParentNativeView-1.h>
#include <Fuse.Android.NativeViews.ScrollView.h>
#include <Fuse.Android.NativeViews.SurfaceView.h>
#include <Fuse.Android.NativeViews.TextureView.h>
#include <Fuse.Node.h>

namespace g{
namespace Fuse{
namespace Android{
namespace NativeViews{

// /usr/local/share/uno/Packages/Fuse.Android/0.27.14/NativeViews/$.uno
// --------------------------------------------------------------------

// internal sealed extern class ContentControl :20
// {
::g::Fuse::Behavior_type* ContentControl_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ContentControl);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Android.NativeViews.ContentControl", options);
    type->SetBase(::g::Fuse::Android::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::ContentControl_typeof()));
    type->fp_ctor_ = (void*)ContentControl__New1_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::Behavior_type, interface0));
    type->SetFields(3);
    return type;
}

// public generated ContentControl() :20
void ContentControl__ctor_3_fn(ContentControl* __this)
{
    __this->ctor_3();
}

// public generated ContentControl New() :20
void ContentControl__New1_fn(ContentControl** __retval)
{
    *__retval = ContentControl::New1();
}

// public generated ContentControl() [instance] :20
void ContentControl::ctor_3()
{
    uStackFrame __("Fuse.Android.NativeViews.ContentControl", ".ctor()");
    ctor_2();
}

// public generated ContentControl New() [static] :20
ContentControl* ContentControl::New1()
{
    ContentControl* obj1 = (ContentControl*)uNew(ContentControl_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.14/NativeViews/$.uno#1
// ----------------------------------------------------------------------

// public extern class GraphicsView :73
// {
::g::Fuse::Behavior_type* GraphicsView_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GraphicsView);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Android.NativeViews.GraphicsView", options);
    type->SetBase(::g::Fuse::Android::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::GraphicsView_typeof()));
    type->fp_ctor_ = (void*)GraphicsView__New1_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::Behavior_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GraphicsView__New1_fn, 0, true, GraphicsView_typeof(), 0));
    return type;
}

// public generated GraphicsView() :73
void GraphicsView__ctor_3_fn(GraphicsView* __this)
{
    __this->ctor_3();
}

// public generated GraphicsView New() :73
void GraphicsView__New1_fn(GraphicsView** __retval)
{
    *__retval = GraphicsView::New1();
}

// public generated GraphicsView() [instance] :73
void GraphicsView::ctor_3()
{
    uStackFrame __("Fuse.Android.NativeViews.GraphicsView", ".ctor()");
    ctor_2();
}

// public generated GraphicsView New() [static] :73
GraphicsView* GraphicsView::New1()
{
    GraphicsView* obj1 = (GraphicsView*)uNew(GraphicsView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.14/NativeViews/$.uno#2
// ----------------------------------------------------------------------

// internal sealed extern class LeafNativeView :228
// {
::g::Fuse::Behavior_type* LeafNativeView_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LeafNativeView);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Android.NativeViews.LeafNativeView", options);
    type->SetBase(::g::Fuse::Android::NativeViews::NativeView_typeof());
    type->fp_ctor_ = (void*)LeafNativeView__New1_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::Behavior_type, interface0));
    type->SetFields(3);
    return type;
}

// public generated LeafNativeView() :228
void LeafNativeView__ctor_2_fn(LeafNativeView* __this)
{
    __this->ctor_2();
}

// public generated LeafNativeView New() :228
void LeafNativeView__New1_fn(LeafNativeView** __retval)
{
    *__retval = LeafNativeView::New1();
}

// public generated LeafNativeView() [instance] :228
void LeafNativeView::ctor_2()
{
    uStackFrame __("Fuse.Android.NativeViews.LeafNativeView", ".ctor()");
    ctor_1();
}

// public generated LeafNativeView New() [static] :228
LeafNativeView* LeafNativeView::New1()
{
    LeafNativeView* obj1 = (LeafNativeView*)uNew(LeafNativeView_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.14/NativeViews/$.uno#3
// ----------------------------------------------------------------------

// internal abstract extern class NativeView :267
// {
::g::Fuse::Behavior_type* NativeView_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeView);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Android.NativeViews.NativeView", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::Behavior_type, interface0));
    type->SetFields(3);
    return type;
}

// protected generated NativeView() :267
void NativeView__ctor_1_fn(NativeView* __this)
{
    __this->ctor_1();
}

// public static Fuse.Android.NativeViews.NativeView GetFrom(Fuse.Node node) :269
void NativeView__GetFrom_fn(::g::Fuse::Node* node, NativeView** __retval)
{
    *__retval = NativeView::GetFrom(node);
}

// protected generated NativeView() [instance] :267
void NativeView::ctor_1()
{
    uStackFrame __("Fuse.Android.NativeViews.NativeView", ".ctor()");
    ctor_();
}

// public static Fuse.Android.NativeViews.NativeView GetFrom(Fuse.Node node) [static] :269
NativeView* NativeView::GetFrom(::g::Fuse::Node* node)
{
    uStackFrame __("Fuse.Android.NativeViews.NativeView", "GetFrom(Fuse.Node)");
    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.14/NativeViews/$.uno#4
// ----------------------------------------------------------------------

// public sealed extern class NativeViewHost :574
// {
::g::Fuse::Behavior_type* NativeViewHost_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeViewHost);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Android.NativeViews.NativeViewHost", options);
    type->SetBase(::g::Fuse::Android::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::NativeViewHost_typeof()));
    type->fp_ctor_ = (void*)NativeViewHost__New1_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::Behavior_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NativeViewHost__New1_fn, 0, true, NativeViewHost_typeof(), 0));
    return type;
}

// public generated NativeViewHost() :574
void NativeViewHost__ctor_3_fn(NativeViewHost* __this)
{
    __this->ctor_3();
}

// public generated NativeViewHost New() :574
void NativeViewHost__New1_fn(NativeViewHost** __retval)
{
    *__retval = NativeViewHost::New1();
}

// public generated NativeViewHost() [instance] :574
void NativeViewHost::ctor_3()
{
    uStackFrame __("Fuse.Android.NativeViews.NativeViewHost", ".ctor()");
    ctor_2();
}

// public generated NativeViewHost New() [static] :574
NativeViewHost* NativeViewHost::New1()
{
    NativeViewHost* obj1 = (NativeViewHost*)uNew(NativeViewHost_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.14/NativeViews/$.uno#5
// ----------------------------------------------------------------------

// internal sealed extern class ParentControl :788
// {
::g::Fuse::Behavior_type* ParentControl_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ParentControl);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Android.NativeViews.ParentControl", options);
    type->SetBase(::g::Fuse::Android::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::ParentControl_typeof()));
    type->fp_ctor_ = (void*)ParentControl__New1_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::Behavior_type, interface0));
    type->SetFields(3);
    return type;
}

// public generated ParentControl() :788
void ParentControl__ctor_3_fn(ParentControl* __this)
{
    __this->ctor_3();
}

// public generated ParentControl New() :788
void ParentControl__New1_fn(ParentControl** __retval)
{
    *__retval = ParentControl::New1();
}

// public generated ParentControl() [instance] :788
void ParentControl::ctor_3()
{
    uStackFrame __("Fuse.Android.NativeViews.ParentControl", ".ctor()");
    ctor_2();
}

// public generated ParentControl New() [static] :788
ParentControl* ParentControl::New1()
{
    ParentControl* obj1 = (ParentControl*)uNew(ParentControl_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.14/NativeViews/$.uno#6
// ----------------------------------------------------------------------

// internal abstract extern class ParentNativeView<T> :866
// {
::g::Fuse::Behavior_type* ParentNativeView_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ParentNativeView);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Android.NativeViews.ParentNativeView`1", options);
    type->SetBase(::g::Fuse::Android::NativeViews::NativeView_typeof());
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::Behavior_type, interface0));
    type->SetFields(3);
    return type;
}

// protected generated ParentNativeView() :866
void ParentNativeView__ctor_2_fn(ParentNativeView* __this)
{
    __this->ctor_2();
}

// protected generated ParentNativeView() [instance] :866
void ParentNativeView::ctor_2()
{
    uStackFrame __("Fuse.Android.NativeViews.ParentNativeView`1", ".ctor()");
    ctor_1();
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.14/NativeViews/$.uno#7
// ----------------------------------------------------------------------

// internal sealed extern class ScrollView :927
// {
::g::Fuse::Behavior_type* ScrollView_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ScrollView);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Android.NativeViews.ScrollView", options);
    type->SetBase(::g::Fuse::Android::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::ScrollView_typeof()));
    type->fp_ctor_ = (void*)ScrollView__New1_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::Behavior_type, interface0));
    type->SetFields(3);
    return type;
}

// public generated ScrollView() :927
void ScrollView__ctor_3_fn(ScrollView* __this)
{
    __this->ctor_3();
}

// public generated ScrollView New() :927
void ScrollView__New1_fn(ScrollView** __retval)
{
    *__retval = ScrollView::New1();
}

// public generated ScrollView() [instance] :927
void ScrollView::ctor_3()
{
    uStackFrame __("Fuse.Android.NativeViews.ScrollView", ".ctor()");
    ctor_2();
}

// public generated ScrollView New() [static] :927
ScrollView* ScrollView::New1()
{
    ScrollView* obj1 = (ScrollView*)uNew(ScrollView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.14/NativeViews/$.uno#8
// ----------------------------------------------------------------------

// public sealed extern class SurfaceView :1098
// {
::g::Fuse::Behavior_type* SurfaceView_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SurfaceView);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Android.NativeViews.SurfaceView", options);
    type->SetBase(::g::Fuse::Android::NativeViews::GraphicsView_typeof());
    type->fp_ctor_ = (void*)SurfaceView__New2_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::Behavior_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SurfaceView__New2_fn, 0, true, SurfaceView_typeof(), 0));
    return type;
}

// public generated SurfaceView() :1098
void SurfaceView__ctor_4_fn(SurfaceView* __this)
{
    __this->ctor_4();
}

// public generated SurfaceView New() :1098
void SurfaceView__New2_fn(SurfaceView** __retval)
{
    *__retval = SurfaceView::New2();
}

// public generated SurfaceView() [instance] :1098
void SurfaceView::ctor_4()
{
    uStackFrame __("Fuse.Android.NativeViews.SurfaceView", ".ctor()");
    ctor_3();
}

// public generated SurfaceView New() [static] :1098
SurfaceView* SurfaceView::New2()
{
    SurfaceView* obj1 = (SurfaceView*)uNew(SurfaceView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.14/NativeViews/$.uno#9
// ----------------------------------------------------------------------

// public sealed extern class TextureView :1159
// {
::g::Fuse::Behavior_type* TextureView_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TextureView);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Android.NativeViews.TextureView", options);
    type->SetBase(::g::Fuse::Android::NativeViews::GraphicsView_typeof());
    type->fp_ctor_ = (void*)TextureView__New2_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::Behavior_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TextureView__New2_fn, 0, true, TextureView_typeof(), 0));
    return type;
}

// public generated TextureView() :1159
void TextureView__ctor_4_fn(TextureView* __this)
{
    __this->ctor_4();
}

// public generated TextureView New() :1159
void TextureView__New2_fn(TextureView** __retval)
{
    *__retval = TextureView::New2();
}

// public generated TextureView() [instance] :1159
void TextureView::ctor_4()
{
    uStackFrame __("Fuse.Android.NativeViews.TextureView", ".ctor()");
    ctor_3();
}

// public generated TextureView New() [static] :1159
TextureView* TextureView::New2()
{
    TextureView* obj1 = (TextureView*)uNew(TextureView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

}}}} // ::g::Fuse::Android::NativeViews
