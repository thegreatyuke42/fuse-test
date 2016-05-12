// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.AppBase.h>
#include <Fuse.Controls.FallbackTextEdit.TextEditVisual.h>
#include <Fuse.Controls.PlainTextEdit.h>
#include <Fuse.Desktop.DesktopRootViewport.h>
#include <Fuse.Desktop.NativeStyle.h>
#include <Fuse.Desktop.NativeStyle.Template.Factory.h>
#include <Fuse.Desktop.NativeStyle.Template.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventData.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerWheelMovedArgs.h>
#include <Fuse.KeyboardBootstrapper.h>
#include <Fuse.Node.h>
#include <Fuse.NodeEventArgs.h>
#include <Fuse.StyleProperty-2.h>
#include <Fuse.Time.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Double.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.KeyEventArgs.h>
#include <Uno.Platform.PointerEventArgs.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.Platform.TextInputEventArgs.h>
#include <Uno.Platform.WheelDeltaMode.h>
#include <Uno.Platform.Window.h>
#include <Uno.String.h>
#include <Uno.UX.Factory.h>
#include <Uno.UX.Template-1.h>
static uType* TYPES[16];

namespace g{
namespace Fuse{
namespace Desktop{

// /usr/local/share/uno/Packages/Fuse.Desktop/0.27.14/$.uno#1
// ----------------------------------------------------------

// internal sealed class DesktopRootViewport :73
// {
::g::Fuse::RootViewport_type* DesktopRootViewport_typeof()
{
    static uSStrong< ::g::Fuse::RootViewport_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 66;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(DesktopRootViewport);
    options.TypeSize = sizeof(::g::Fuse::RootViewport_type);
    type = (::g::Fuse::RootViewport_type*)uClassType::New("Fuse.Desktop.DesktopRootViewport", options);
    type->SetBase(::g::Fuse::RootViewport_typeof());
    type->fp_OnInvalidateVisual = (void(*)(::g::Fuse::Node*))DesktopRootViewport__OnInvalidateVisual_fn;
    type->interface2.fp_PointToWorldRay = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Uno::Geometry::Ray*))::g::Fuse::RootViewport__PointToWorldRay_fn;
    type->interface2.fp_get_PixelsPerPoint = (void(*)(uObject*, float*))::g::Fuse::RootViewport__get_PixelsPerPoint_fn;
    type->interface2.fp_get_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::RootViewport__get_Size_fn;
    type->interface2.fp_get_PixelSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::RootViewport__get_PixelSize_fn;
    type->interface2.fp_get_ProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::RootViewport__get_ProjectionTransform_fn;
    type->interface2.fp_get_ProjectionTransformInverse = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::RootViewport__get_ProjectionTransformInverse_fn;
    type->interface2.fp_get_ViewProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::RootViewport__get_ViewProjectionTransform_fn;
    type->interface2.fp_get_ViewProjectionTransformInverse = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::RootViewport__get_ViewProjectionTransformInverse_fn;
    type->interface2.fp_get_ViewTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::RootViewport__get_ViewTransform_fn;
    type->interface2.fp_get_ViewTransformInverse = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::RootViewport__get_ViewTransformInverse_fn;
    type->interface2.fp_get_ViewOrigin = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::RootViewport__get_ViewOrigin_fn;
    type->interface2.fp_get_ViewRange = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::RootViewport__get_ViewRange_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseIChildObjectget_ParentObject_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[0] = ::g::Uno::Platform::Window_typeof();
    ::TYPES[1] = ::g::Fuse::RootViewport_typeof();
    ::TYPES[2] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::PointerEventArgs_typeof());
    ::TYPES[3] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof());
    ::TYPES[4] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::TextInputEventArgs_typeof());
    ::TYPES[5] = ::g::Fuse::IViewport_typeof();
    ::TYPES[6] = ::g::Uno::Platform::PointerEventArgs_typeof();
    ::TYPES[7] = ::g::Fuse::NodeEventArgs_typeof();
    ::TYPES[8] = ::g::Fuse::Input::PointerEventData_typeof();
    ::TYPES[9] = ::g::Fuse::Time_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::RootViewport_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::RootViewport_type, interface1),
        ::g::Fuse::IViewport_typeof(), offsetof(::g::Fuse::RootViewport_type, interface2));
    type->SetFields(64,
        ::g::Fuse::DrawContext_typeof(), offsetof(::g::Fuse::Desktop::DesktopRootViewport, _dc), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Desktop::DesktopRootViewport, _dirty), 0);
    return type;
}

// public DesktopRootViewport(Uno.Platform.Window window) :77
void DesktopRootViewport__ctor_2_fn(DesktopRootViewport* __this, ::g::Uno::Platform::Window* window)
{
    __this->ctor_2(window);
}

// public DesktopRootViewport New(Uno.Platform.Window window) :77
void DesktopRootViewport__New2_fn(::g::Uno::Platform::Window* window, DesktopRootViewport** __retval)
{
    *__retval = DesktopRootViewport::New2(window);
}

// protected override sealed void OnInvalidateVisual() :135
void DesktopRootViewport__OnInvalidateVisual_fn(DesktopRootViewport* __this)
{
    uStackFrame __("Fuse.Desktop.DesktopRootViewport", "OnInvalidateVisual()");
    ::g::Fuse::Node__OnInvalidateVisual_fn(__this);
    __this->_dirty = true;
}

// private void OnPointerLeft(object sender, Uno.Platform.PointerEventArgs args) :193
void DesktopRootViewport__OnPointerLeft_fn(DesktopRootViewport* __this, uObject* sender, ::g::Uno::Platform::PointerEventArgs* args)
{
    __this->OnPointerLeft(sender, args);
}

// private void OnPointerMoved(object sender, Uno.Platform.PointerEventArgs args) :167
void DesktopRootViewport__OnPointerMoved_fn(DesktopRootViewport* __this, uObject* sender, ::g::Uno::Platform::PointerEventArgs* args)
{
    __this->OnPointerMoved(sender, args);
}

// private void OnPointerPressed(object sender, Uno.Platform.PointerEventArgs args) :141
void DesktopRootViewport__OnPointerPressed_fn(DesktopRootViewport* __this, uObject* sender, ::g::Uno::Platform::PointerEventArgs* args)
{
    __this->OnPointerPressed(sender, args);
}

// private void OnPointerReleased(object sender, Uno.Platform.PointerEventArgs args) :154
void DesktopRootViewport__OnPointerReleased_fn(DesktopRootViewport* __this, uObject* sender, ::g::Uno::Platform::PointerEventArgs* args)
{
    __this->OnPointerReleased(sender, args);
}

// private void OnPointerWheelChanged(object sender, Uno.Platform.PointerEventArgs args) :180
void DesktopRootViewport__OnPointerWheelChanged_fn(DesktopRootViewport* __this, uObject* sender, ::g::Uno::Platform::PointerEventArgs* args)
{
    __this->OnPointerWheelChanged(sender, args);
}

// private Fuse.Input.PointerEventData TranslatePointerEvent(Uno.Platform.PointerEventArgs args) :92
void DesktopRootViewport__TranslatePointerEvent_fn(DesktopRootViewport* __this, ::g::Uno::Platform::PointerEventArgs* args, ::g::Fuse::Input::PointerEventData** __retval)
{
    *__retval = __this->TranslatePointerEvent(args);
}

// public DesktopRootViewport(Uno.Platform.Window window) [instance] :77
void DesktopRootViewport::ctor_2(::g::Uno::Platform::Window* window)
{
    uStackFrame __("Fuse.Desktop.DesktopRootViewport", ".ctor(Uno.Platform.Window)");
    _dirty = true;
    ctor_1(window, 0.0f);
    uPtr(Window)->add_PointerPressed(uDelegate::New(::TYPES[2/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/], (void*)DesktopRootViewport__OnPointerPressed_fn, this));
    uPtr(Window)->add_PointerReleased(uDelegate::New(::TYPES[2/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/], (void*)DesktopRootViewport__OnPointerReleased_fn, this));
    uPtr(Window)->add_PointerMoved(uDelegate::New(::TYPES[2/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/], (void*)DesktopRootViewport__OnPointerMoved_fn, this));
    uPtr(Window)->add_PointerWheelChanged(uDelegate::New(::TYPES[2/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/], (void*)DesktopRootViewport__OnPointerWheelChanged_fn, this));
    uPtr(Window)->add_PointerLeft(uDelegate::New(::TYPES[2/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/], (void*)DesktopRootViewport__OnPointerLeft_fn, this));
    uPtr(Window)->add_KeyPressed(uDelegate::New(::TYPES[3/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/], (void*)::g::Fuse::KeyboardBootstrapper__OnKeyPressed_fn));
    uPtr(Window)->add_KeyReleased(uDelegate::New(::TYPES[3/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/], (void*)::g::Fuse::KeyboardBootstrapper__OnKeyReleased_fn));
    uPtr(Window)->add_TextInput(uDelegate::New(::TYPES[4/*Uno.EventHandler<Uno.Platform.TextInputEventArgs>*/], (void*)::g::Fuse::KeyboardBootstrapper__OnTextInput_fn));
    _dc = ::g::Fuse::DrawContext::New1((uObject*)this);
}

// private void OnPointerLeft(object sender, Uno.Platform.PointerEventArgs args) [instance] :193
void DesktopRootViewport::OnPointerLeft(uObject* sender, ::g::Uno::Platform::PointerEventArgs* args)
{
    uStackFrame __("Fuse.Desktop.DesktopRootViewport", "OnPointerLeft(object,Uno.Platform.PointerEventArgs)");

    try
    {
        if (Content() != NULL)
            ::g::Fuse::Input::Pointer::RaiseLeft(Content(), TranslatePointerEvent(args));
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private void OnPointerMoved(object sender, Uno.Platform.PointerEventArgs args) [instance] :167
void DesktopRootViewport::OnPointerMoved(uObject* sender, ::g::Uno::Platform::PointerEventArgs* args)
{
    uStackFrame __("Fuse.Desktop.DesktopRootViewport", "OnPointerMoved(object,Uno.Platform.PointerEventArgs)");

    try
    {
        if (Content() != NULL)
            uPtr(args)->Handled(uPtr(::g::Fuse::Input::Pointer::RaiseMoved(Content(), TranslatePointerEvent(args)))->IsHandled());
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private void OnPointerPressed(object sender, Uno.Platform.PointerEventArgs args) [instance] :141
void DesktopRootViewport::OnPointerPressed(uObject* sender, ::g::Uno::Platform::PointerEventArgs* args)
{
    uStackFrame __("Fuse.Desktop.DesktopRootViewport", "OnPointerPressed(object,Uno.Platform.PointerEventArgs)");

    try
    {
        if (Content() != NULL)
            uPtr(args)->Handled(uPtr(::g::Fuse::Input::Pointer::RaisePressed(Content(), TranslatePointerEvent(args)))->IsHandled());
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private void OnPointerReleased(object sender, Uno.Platform.PointerEventArgs args) [instance] :154
void DesktopRootViewport::OnPointerReleased(uObject* sender, ::g::Uno::Platform::PointerEventArgs* args)
{
    uStackFrame __("Fuse.Desktop.DesktopRootViewport", "OnPointerReleased(object,Uno.Platform.PointerEventArgs)");

    try
    {
        if (Content() != NULL)
            uPtr(args)->Handled(uPtr(::g::Fuse::Input::Pointer::RaiseReleased(Content(), TranslatePointerEvent(args)))->IsHandled());
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private void OnPointerWheelChanged(object sender, Uno.Platform.PointerEventArgs args) [instance] :180
void DesktopRootViewport::OnPointerWheelChanged(uObject* sender, ::g::Uno::Platform::PointerEventArgs* args)
{
    uStackFrame __("Fuse.Desktop.DesktopRootViewport", "OnPointerWheelChanged(object,Uno.Platform.PointerEventArgs)");

    try
    {
        if (Content() != NULL)
            uPtr(args)->Handled(uPtr(::g::Fuse::Input::Pointer::RaiseWheelMoved(Content(), TranslatePointerEvent(args)))->IsHandled());
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private Fuse.Input.PointerEventData TranslatePointerEvent(Uno.Platform.PointerEventArgs args) [instance] :92
::g::Fuse::Input::PointerEventData* DesktopRootViewport::TranslatePointerEvent(::g::Uno::Platform::PointerEventArgs* args)
{
    uStackFrame __("Fuse.Desktop.DesktopRootViewport", "TranslatePointerEvent(Uno.Platform.PointerEventArgs)");
    ::g::Fuse::Input::PointerEventData* collection1;
    collection1 = ::g::Fuse::Input::PointerEventData::New1();
    uPtr(collection1)->PointIndex = uPtr(args)->FingerId();
    uPtr(collection1)->WindowPoint = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply1(uPtr(args)->Position(), PixelsPerOSPoint()), PixelsPerPoint());
    uPtr(collection1)->WheelDelta = uPtr(args)->WheelDelta();
    uPtr(collection1)->WheelDeltaMode = uPtr(args)->WheelDeltaMode();
    uPtr(collection1)->IsPrimary = uPtr(args)->IsPrimary();
    uPtr(collection1)->PointerType = uPtr(args)->PointerType();
    uPtr(collection1)->Timestamp = (::g::Uno::Diagnostics::Clock::GetSeconds() - ::g::Fuse::Time::FrameTimeBase());
    return collection1;
}

// public DesktopRootViewport New(Uno.Platform.Window window) [static] :77
DesktopRootViewport* DesktopRootViewport::New2(::g::Uno::Platform::Window* window)
{
    DesktopRootViewport* obj2 = (DesktopRootViewport*)uNew(DesktopRootViewport_typeof());
    obj2->ctor_2(window);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Desktop/0.27.14/.uno/$.uno
// -------------------------------------------------------------

// public partial sealed class NativeStyle.Template.Factory :14
// {
// static Factory() :21
static void NativeStyle__Template__Factory__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Factory_type* NativeStyle__Template__Factory_typeof()
{
    static uSStrong< ::g::Uno::UX::Factory_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NativeStyle__Template__Factory);
    options.TypeSize = sizeof(::g::Uno::UX::Factory_type);
    type = (::g::Uno::UX::Factory_type*)uClassType::New("Fuse.Desktop.NativeStyle.Template.Factory", options);
    type->SetBase(::g::Uno::UX::Factory_typeof());
    type->fp_cctor_ = NativeStyle__Template__Factory__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Factory*, uObject**))NativeStyle__Template__Factory__New1_fn;
    ::TYPES[10] = uObject_typeof();
    type->SetFields(2,
        ::g::Fuse::Desktop::NativeStyle__Template_typeof(), offsetof(::g::Fuse::Desktop::NativeStyle__Template__Factory, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NativeStyle__Template__Factory__New2_fn, 0, true, NativeStyle__Template__Factory_typeof(), 1, ::g::Fuse::Desktop::NativeStyle__Template_typeof()));
    return type;
}

// public Factory(Fuse.Desktop.NativeStyle.Template parent) :17
void NativeStyle__Template__Factory__ctor_1_fn(NativeStyle__Template__Factory* __this, ::g::Fuse::Desktop::NativeStyle__Template* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :24
void NativeStyle__Template__Factory__New1_fn(NativeStyle__Template__Factory* __this, uObject** __retval)
{
    uStackFrame __("Fuse.Desktop.NativeStyle.Template.Factory", "New()");
    ::g::Fuse::Controls::FallbackTextEdit::TextEditVisual* self = ::g::Fuse::Controls::FallbackTextEdit::TextEditVisual::New1();
    return *__retval = self, void();
}

// public Factory New(Fuse.Desktop.NativeStyle.Template parent) :17
void NativeStyle__Template__Factory__New2_fn(::g::Fuse::Desktop::NativeStyle__Template* parent, NativeStyle__Template__Factory** __retval)
{
    *__retval = NativeStyle__Template__Factory::New2(parent);
}

// public Factory(Fuse.Desktop.NativeStyle.Template parent) [instance] :17
void NativeStyle__Template__Factory::ctor_1(::g::Fuse::Desktop::NativeStyle__Template* parent)
{
    uStackFrame __("Fuse.Desktop.NativeStyle.Template.Factory", ".ctor(Fuse.Desktop.NativeStyle.Template)");
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Factory New(Fuse.Desktop.NativeStyle.Template parent) [static] :17
NativeStyle__Template__Factory* NativeStyle__Template__Factory::New2(::g::Fuse::Desktop::NativeStyle__Template* parent)
{
    NativeStyle__Template__Factory* obj1 = (NativeStyle__Template__Factory*)uNew(NativeStyle__Template__Factory_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Desktop/0.27.14/.uno/$.uno
// -------------------------------------------------------------

// public partial sealed class NativeStyle :5
// {
// static NativeStyle() :39
static void NativeStyle__cctor__fn(uType* __type)
{
}

::g::Fuse::Style_type* NativeStyle_typeof()
{
    static uSStrong< ::g::Fuse::Style_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeStyle);
    options.TypeSize = sizeof(::g::Fuse::Style_type);
    type = (::g::Fuse::Style_type*)uClassType::New("Fuse.Desktop.NativeStyle", options);
    type->SetBase(::g::Fuse::Style_typeof());
    type->fp_ctor_ = (void*)NativeStyle__New2_fn;
    type->fp_cctor_ = NativeStyle__cctor__fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Style__Apply_fn;
    ::TYPES[11] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::PlainTextEdit_typeof());
    ::TYPES[12] = ::g::Fuse::Style_typeof();
    ::TYPES[13] = ::g::Uno::UX::ITemplate_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Fuse::Style_type, interface0));
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NativeStyle__New2_fn, 0, true, NativeStyle_typeof(), 0));
    return type;
}

// public NativeStyle() :42
void NativeStyle__ctor_1_fn(NativeStyle* __this)
{
    __this->ctor_1();
}

// private void InitializeUX() :46
void NativeStyle__InitializeUX_fn(NativeStyle* __this)
{
    __this->InitializeUX();
}

// public NativeStyle New() :42
void NativeStyle__New2_fn(NativeStyle** __retval)
{
    *__retval = NativeStyle::New2();
}

// public NativeStyle() [instance] :42
void NativeStyle::ctor_1()
{
    uStackFrame __("Fuse.Desktop.NativeStyle", ".ctor()");
    ctor_();
    InitializeUX();
}

// private void InitializeUX() [instance] :46
void NativeStyle::InitializeUX()
{
    uStackFrame __("Fuse.Desktop.NativeStyle", "InitializeUX()");
    NativeStyle__Template* collection1;
    collection1 = NativeStyle__Template::New1(this);
    uPtr(collection1)->Cascade(true);
    true;
    uPtr(collection1)->AffectSubtypes(true);
    true;
    NativeStyle__Template* temp = collection1;
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[13/*Uno.UX.ITemplate*/])), (uObject*)temp);
}

// public NativeStyle New() [static] :42
NativeStyle* NativeStyle::New2()
{
    NativeStyle* obj2 = (NativeStyle*)uNew(NativeStyle_typeof());
    obj2->ctor_1();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Desktop/0.27.14/.uno/$.uno
// -------------------------------------------------------------

// public partial sealed class NativeStyle.Template :7
// {
// static Template() :30
static void NativeStyle__Template__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* NativeStyle__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeStyle__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.Desktop.NativeStyle.Template", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::PlainTextEdit_typeof()));
    type->fp_cctor_ = NativeStyle__Template__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))NativeStyle__Template__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[14] = ::g::Fuse::Controls::PlainTextEdit_typeof();
    ::TYPES[15] = ::g::Uno::UX::Factory_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Desktop::NativeStyle_typeof(), offsetof(::g::Fuse::Desktop::NativeStyle__Template, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NativeStyle__Template__New1_fn, 0, true, NativeStyle__Template_typeof(), 1, ::g::Fuse::Desktop::NativeStyle_typeof()));
    return type;
}

// public Template(Fuse.Desktop.NativeStyle parent) :10
void NativeStyle__Template__ctor_1_fn(NativeStyle__Template* __this, ::g::Fuse::Desktop::NativeStyle* parent)
{
    __this->ctor_1(parent);
}

// public Template New(Fuse.Desktop.NativeStyle parent) :10
void NativeStyle__Template__New1_fn(::g::Fuse::Desktop::NativeStyle* parent, NativeStyle__Template** __retval)
{
    *__retval = NativeStyle__Template::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.PlainTextEdit self) :33
void NativeStyle__Template__OnApply_fn(NativeStyle__Template* __this, ::g::Fuse::Controls::PlainTextEdit* self)
{
    uStackFrame __("Fuse.Desktop.NativeStyle.Template", "OnApply(Fuse.Controls.PlainTextEdit)");
    bool ret2;
    NativeStyle__Template__Factory* temp = NativeStyle__Template__Factory::New2(__this);
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Controls::PlainTextEdit::NativeEditProperty()), self, temp, &ret2);
}

// public Template(Fuse.Desktop.NativeStyle parent) [instance] :10
void NativeStyle__Template::ctor_1(::g::Fuse::Desktop::NativeStyle* parent)
{
    uStackFrame __("Fuse.Desktop.NativeStyle.Template", ".ctor(Fuse.Desktop.NativeStyle)");
    ctor_();
    __parent1 = parent;
}

// public Template New(Fuse.Desktop.NativeStyle parent) [static] :10
NativeStyle__Template* NativeStyle__Template::New1(::g::Fuse::Desktop::NativeStyle* parent)
{
    NativeStyle__Template* obj1 = (NativeStyle__Template*)uNew(NativeStyle__Template_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

}}} // ::g::Fuse::Desktop
