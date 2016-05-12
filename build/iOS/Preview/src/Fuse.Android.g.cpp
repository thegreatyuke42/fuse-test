// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseAndroid_bundle.h>
#include <Fuse.Android.Blitter.h>
#include <Fuse.Android.Controls.PlainTextEdit.h>
#include <Fuse.Android.Helpers.h>
#include <Fuse.Android.NativeEditFactory.h>
#include <Fuse.Android.NativeStyle.h>
#include <Fuse.Android.NativeTemplate.h>
#include <Fuse.Android.StatusBarConfig.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Byte4.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
static uType* TYPES[10];

namespace g{
namespace Fuse{
namespace Android{

// /usr/local/share/uno/Packages/Fuse.Android/0.27.14/$.uno#8
// ----------------------------------------------------------

// internal sealed class Blitter :1283
// {
// static Blitter() :1283
static void Blitter__cctor__fn(uType* __type)
{
    Blitter::Singleton_ = Blitter::New1();
}

uType* Blitter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Blitter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.Blitter", options);
    type->fp_ctor_ = (void*)Blitter__New1_fn;
    type->fp_cctor_ = Blitter__cctor__fn;
    ::TYPES[0] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[1] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[2] = ::g::FuseAndroid_bundle_typeof();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Android::Blitter, _draw_3ffdfb2d), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Android::Blitter, Blit_v_3ffdfb2d_1_7_1), 0,
        ::g::Uno::Float2_typeof()->Array(), offsetof(::g::Fuse::Android::Blitter, Blit_verts_3ffdfb2d_1_6_5), 0,
        Blitter_typeof(), (uintptr_t)&::g::Fuse::Android::Blitter::Singleton_, uFieldFlagsStatic);
    return type;
}

// public generated Blitter() :1283
void Blitter__ctor__fn(Blitter* __this)
{
    __this->ctor_();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) :1287
void Blitter__Blit_fn(Blitter* __this, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2* pos, ::g::Uno::Float2* size, ::g::Uno::Float4x4* localToClipTransform)
{
    __this->Blit(vt, *pos, *size, *localToClipTransform);
}

// private generated void init_DrawCalls() :1283
void Blitter__init_DrawCalls_fn(Blitter* __this)
{
    __this->init_DrawCalls();
}

// public generated Blitter New() :1283
void Blitter__New1_fn(Blitter** __retval)
{
    *__retval = Blitter::New1();
}

uSStrong<Blitter*> Blitter::Singleton_;

// public generated Blitter() [instance] :1283
void Blitter::ctor_()
{
    uStackFrame __("Fuse.Android.Blitter", ".ctor()");
    init_DrawCalls();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) [instance] :1287
void Blitter::Blit(::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2 pos, ::g::Uno::Float2 size, ::g::Uno::Float4x4 localToClipTransform)
{
    uStackFrame __("Fuse.Android.Blitter", "Blit(texture2D,float2,float2,float4x4)");
    _draw_3ffdfb2d.BlendEnabled(true);
    _draw_3ffdfb2d.CullFace(0);
    _draw_3ffdfb2d.BlendSrcAlpha(7);
    _draw_3ffdfb2d.BlendDstRgb(3);
    _draw_3ffdfb2d.Use();
    _draw_3ffdfb2d.Attrib1(0, 2, Blit_v_3ffdfb2d_1_7_1, 8, 0);
    _draw_3ffdfb2d.Uniform2(1, size);
    _draw_3ffdfb2d.Uniform2(2, pos);
    _draw_3ffdfb2d.Uniform12(3, localToClipTransform);
    _draw_3ffdfb2d.Sampler2(4, vt);
    _draw_3ffdfb2d.DrawArrays(uPtr(Blit_verts_3ffdfb2d_1_6_5)->Length());
}

// private generated void init_DrawCalls() [instance] :1283
void Blitter::init_DrawCalls()
{
    uStackFrame __("Fuse.Android.Blitter", "init_DrawCalls()");
    uArray* verts_3ffdfb2d_1_6_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[1/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f));
    Blit_v_3ffdfb2d_1_7_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(verts_3ffdfb2d_1_6_0), 0);
    Blit_verts_3ffdfb2d_1_6_5 = verts_3ffdfb2d_1_6_0;
    _draw_3ffdfb2d = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseAndroid_bundle::Blitter4fbe5e04());
}

// public generated Blitter New() [static] :1283
Blitter* Blitter::New1()
{
    Blitter* obj1 = (Blitter*)uNew(Blitter_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.14/$.uno#3
// ----------------------------------------------------------

// internal static class Helpers :243
// {
uClassType* Helpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Android.Helpers", options);
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[4] = ::g::Uno::Float4_typeof();
    return type;
}

// public static int EncodeColor(float4 c) :245
void Helpers__EncodeColor_fn(::g::Uno::Float4* c, int* __retval)
{
    *__retval = Helpers::EncodeColor(*c);
}

// public static int EncodeColor(float4 c) [static] :245
int Helpers::EncodeColor(::g::Uno::Float4 c)
{
    uStackFrame __("Fuse.Android.Helpers", "EncodeColor(float4)");
    int r = ::g::Uno::Math::Clamp8((int)(c.X * 255.0f), 0, 255);
    int g = ::g::Uno::Math::Clamp8((int)(c.Y * 255.0f), 0, 255);
    int b = ::g::Uno::Math::Clamp8((int)(c.Z * 255.0f), 0, 255);
    int a = ::g::Uno::Math::Clamp8((int)(c.W * 255.0f), 0, 255);
    return (((a << 24) | (r << 16)) | (g << 8)) | b;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.14/$.uno#5
// ----------------------------------------------------------

// public partial sealed class NativeEditFactory :509
// {
::g::Uno::UX::Factory_type* NativeEditFactory_typeof()
{
    static uSStrong< ::g::Uno::UX::Factory_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NativeEditFactory);
    options.TypeSize = sizeof(::g::Uno::UX::Factory_type);
    type = (::g::Uno::UX::Factory_type*)uClassType::New("Fuse.Android.NativeEditFactory", options);
    type->SetBase(::g::Uno::UX::Factory_typeof());
    type->fp_ctor_ = (void*)NativeEditFactory__New2_fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Factory*, uObject**))NativeEditFactory__New1_fn;
    ::TYPES[5] = uObject_typeof();
    type->SetFields(2,
        NativeEditFactory_typeof(), (uintptr_t)&::g::Fuse::Android::NativeEditFactory::_instance_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Instance", NULL, (void*)NativeEditFactory__get_Instance_fn, 0, true, NativeEditFactory_typeof(), 0));
    return type;
}

// private NativeEditFactory() :523
void NativeEditFactory__ctor_1_fn(NativeEditFactory* __this)
{
    __this->ctor_1();
}

// public static Fuse.Android.NativeEditFactory get_Instance() :514
void NativeEditFactory__get_Instance_fn(NativeEditFactory** __retval)
{
    *__retval = NativeEditFactory::Instance();
}

// public override sealed object New() :524
void NativeEditFactory__New1_fn(NativeEditFactory* __this, uObject** __retval)
{
    uStackFrame __("Fuse.Android.NativeEditFactory", "New()");
    return *__retval = ::g::Fuse::Android::Controls::PlainTextEdit::New3(), void();
}

// private NativeEditFactory New() :523
void NativeEditFactory__New2_fn(NativeEditFactory** __retval)
{
    *__retval = NativeEditFactory::New2();
}

uSStrong<NativeEditFactory*> NativeEditFactory::_instance_;

// private NativeEditFactory() [instance] :523
void NativeEditFactory::ctor_1()
{
    uStackFrame __("Fuse.Android.NativeEditFactory", ".ctor()");
    ctor_(NULL, false);
}

// private NativeEditFactory New() [static] :523
NativeEditFactory* NativeEditFactory::New2()
{
    NativeEditFactory* obj1 = (NativeEditFactory*)uNew(NativeEditFactory_typeof());
    obj1->ctor_1();
    return obj1;
}

// public static Fuse.Android.NativeEditFactory get_Instance() [static] :514
NativeEditFactory* NativeEditFactory::Instance()
{
    uStackFrame __("Fuse.Android.NativeEditFactory", "get_Instance()");

    if (NativeEditFactory::_instance() == NULL)
        NativeEditFactory::_instance() = NativeEditFactory::New2();

    return NativeEditFactory::_instance();
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.14/.uno/$.uno
// -------------------------------------------------------------

// public partial sealed class NativeStyle :5
// {
// static NativeStyle() :7
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
    type = (::g::Fuse::Style_type*)uClassType::New("Fuse.Android.NativeStyle", options);
    type->SetBase(::g::Fuse::Style_typeof());
    type->fp_ctor_ = (void*)NativeStyle__New2_fn;
    type->fp_cctor_ = NativeStyle__cctor__fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Style__Apply_fn;
    ::TYPES[6] = ::g::Fuse::Style_typeof();
    ::TYPES[7] = ::g::Uno::UX::ITemplate_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Fuse::Style_type, interface0));
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NativeStyle__New2_fn, 0, true, NativeStyle_typeof(), 0));
    return type;
}

// public NativeStyle() :10
void NativeStyle__ctor_1_fn(NativeStyle* __this)
{
    __this->ctor_1();
}

// private void InitializeUX() :14
void NativeStyle__InitializeUX_fn(NativeStyle* __this)
{
    __this->InitializeUX();
}

// public NativeStyle New() :10
void NativeStyle__New2_fn(NativeStyle** __retval)
{
    *__retval = NativeStyle::New2();
}

// public NativeStyle() [instance] :10
void NativeStyle::ctor_1()
{
    uStackFrame __("Fuse.Android.NativeStyle", ".ctor()");
    ctor_();
    InitializeUX();
}

// private void InitializeUX() [instance] :14
void NativeStyle::InitializeUX()
{
    uStackFrame __("Fuse.Android.NativeStyle", "InitializeUX()");
    ::g::Fuse::Android::NativeTemplate* temp = ::g::Fuse::Android::NativeTemplate::New1();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Uno.UX.ITemplate*/])), (uObject*)temp);
}

// public NativeStyle New() [static] :10
NativeStyle* NativeStyle::New2()
{
    NativeStyle* obj1 = (NativeStyle*)uNew(NativeStyle_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.14/$.uno#5
// ----------------------------------------------------------

// internal sealed class NativeTemplate :530
// {
NativeTemplate_type* NativeTemplate_typeof()
{
    static uSStrong<NativeTemplate_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeTemplate);
    options.TypeSize = sizeof(NativeTemplate_type);
    type = (NativeTemplate_type*)uClassType::New("Fuse.Android.NativeTemplate", options);
    type->fp_ctor_ = (void*)NativeTemplate__New1_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))NativeTemplate__Apply_fn;
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(NativeTemplate_type, interface0));
    return type;
}

// public generated NativeTemplate() :530
void NativeTemplate__ctor__fn(NativeTemplate* __this)
{
    __this->ctor_();
}

// public extern bool Apply(object obj) :553
void NativeTemplate__Apply_fn(NativeTemplate* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->Apply(obj);
}

// public generated NativeTemplate New() :530
void NativeTemplate__New1_fn(NativeTemplate** __retval)
{
    *__retval = NativeTemplate::New1();
}

// public generated NativeTemplate() [instance] :530
void NativeTemplate::ctor_()
{
}

// public extern bool Apply(object obj) [instance] :553
bool NativeTemplate::Apply(uObject* obj)
{
    uStackFrame __("Fuse.Android.NativeTemplate", "Apply(object)");
    return true;
}

// public generated NativeTemplate New() [static] :530
NativeTemplate* NativeTemplate::New1()
{
    NativeTemplate* obj1 = (NativeTemplate*)uNew(NativeTemplate_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.14/$.uno#7
// ----------------------------------------------------------

// public sealed class StatusBarConfig :828
// {
::g::Fuse::Behavior_type* StatusBarConfig_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(StatusBarConfig);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Android.StatusBarConfig", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_ctor_ = (void*)StatusBarConfig__New1_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    ::TYPES[8] = ::g::Uno::Byte_typeof();
    ::TYPES[4] = ::g::Uno::Float4_typeof();
    ::TYPES[9] = ::g::Uno::Byte4_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::Behavior_type, interface0));
    type->SetFields(3,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Android::StatusBarConfig, _color), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::StatusBarConfig, _isNavigationBarVisible), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::StatusBarConfig, _isVisible), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Color", NULL, (void*)StatusBarConfig__get_Color_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Color", NULL, (void*)StatusBarConfig__set_Color_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_IsNavigationBarVisible", NULL, (void*)StatusBarConfig__get_IsNavigationBarVisible_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsNavigationBarVisible", NULL, (void*)StatusBarConfig__set_IsNavigationBarVisible_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_IsVisible", NULL, (void*)StatusBarConfig__get_IsVisible_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsVisible", NULL, (void*)StatusBarConfig__set_IsVisible_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)StatusBarConfig__New1_fn, 0, true, StatusBarConfig_typeof(), 0));
    return type;
}

// public generated StatusBarConfig() :828
void StatusBarConfig__ctor_1_fn(StatusBarConfig* __this)
{
    __this->ctor_1();
}

// public float4 get_Color() :834
void StatusBarConfig__get_Color_fn(StatusBarConfig* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :835
void StatusBarConfig__set_Color_fn(StatusBarConfig* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public bool get_IsNavigationBarVisible() :856
void StatusBarConfig__get_IsNavigationBarVisible_fn(StatusBarConfig* __this, bool* __retval)
{
    *__retval = __this->IsNavigationBarVisible();
}

// public void set_IsNavigationBarVisible(bool value) :857
void StatusBarConfig__set_IsNavigationBarVisible_fn(StatusBarConfig* __this, bool* value)
{
    __this->IsNavigationBarVisible(*value);
}

// public bool get_IsVisible() :845
void StatusBarConfig__get_IsVisible_fn(StatusBarConfig* __this, bool* __retval)
{
    *__retval = __this->IsVisible();
}

// public void set_IsVisible(bool value) :846
void StatusBarConfig__set_IsVisible_fn(StatusBarConfig* __this, bool* value)
{
    __this->IsVisible(*value);
}

// public generated StatusBarConfig New() :828
void StatusBarConfig__New1_fn(StatusBarConfig** __retval)
{
    *__retval = StatusBarConfig::New1();
}

// private extern void SetNavigationBarVisible(bool visible) :913
void StatusBarConfig__SetNavigationBarVisible_fn(StatusBarConfig* __this, bool* visible)
{
    __this->SetNavigationBarVisible(*visible);
}

// private void SetStatusBarColor(float4 color) :864
void StatusBarConfig__SetStatusBarColor_fn(StatusBarConfig* __this, ::g::Uno::Float4* color)
{
    __this->SetStatusBarColor(*color);
}

// private extern void SetStatusBarColor(int color) :882
void StatusBarConfig__SetStatusBarColor1_fn(StatusBarConfig* __this, int* color)
{
    __this->SetStatusBarColor1(*color);
}

// private extern void SetStatusBarVisible(bool visible) :893
void StatusBarConfig__SetStatusBarVisible_fn(StatusBarConfig* __this, bool* visible)
{
    __this->SetStatusBarVisible(*visible);
}

// public generated StatusBarConfig() [instance] :828
void StatusBarConfig::ctor_1()
{
    uStackFrame __("Fuse.Android.StatusBarConfig", ".ctor()");
    ctor_();
}

// public float4 get_Color() [instance] :834
::g::Uno::Float4 StatusBarConfig::Color()
{
    uStackFrame __("Fuse.Android.StatusBarConfig", "get_Color()");
    return _color;
}

// public void set_Color(float4 value) [instance] :835
void StatusBarConfig::Color(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Android.StatusBarConfig", "set_Color(float4)");
    _color = value;
    SetStatusBarColor(_color);
}

// public bool get_IsNavigationBarVisible() [instance] :856
bool StatusBarConfig::IsNavigationBarVisible()
{
    uStackFrame __("Fuse.Android.StatusBarConfig", "get_IsNavigationBarVisible()");
    return _isNavigationBarVisible;
}

// public void set_IsNavigationBarVisible(bool value) [instance] :857
void StatusBarConfig::IsNavigationBarVisible(bool value)
{
    uStackFrame __("Fuse.Android.StatusBarConfig", "set_IsNavigationBarVisible(bool)");
    _isNavigationBarVisible = value;
    SetNavigationBarVisible(_isNavigationBarVisible);
}

// public bool get_IsVisible() [instance] :845
bool StatusBarConfig::IsVisible()
{
    uStackFrame __("Fuse.Android.StatusBarConfig", "get_IsVisible()");
    return _isVisible;
}

// public void set_IsVisible(bool value) [instance] :846
void StatusBarConfig::IsVisible(bool value)
{
    uStackFrame __("Fuse.Android.StatusBarConfig", "set_IsVisible(bool)");
    _isVisible = value;
    SetStatusBarVisible(_isVisible);
}

// private extern void SetNavigationBarVisible(bool visible) [instance] :913
void StatusBarConfig::SetNavigationBarVisible(bool visible)
{
}

// private void SetStatusBarColor(float4 color) [instance] :864
void StatusBarConfig::SetStatusBarColor(::g::Uno::Float4 color)
{
    uStackFrame __("Fuse.Android.StatusBarConfig", "SetStatusBarColor(float4)");
    ::g::Uno::Byte4 c = ::g::Uno::Byte4__New2((uint8_t)::g::Uno::Math::Clamp1(color.X * 255.0f, 0.0f, 255.0f), (uint8_t)::g::Uno::Math::Clamp1(color.Y * 255.0f, 0.0f, 255.0f), (uint8_t)::g::Uno::Math::Clamp1(color.Z * 255.0f, 0.0f, 255.0f), (uint8_t)::g::Uno::Math::Clamp1(color.W * 255.0f, 0.0f, 255.0f));
    int androidColor = 0;
    androidColor = androidColor | (c.W << 24);
    androidColor = androidColor | (c.X << 16);
    androidColor = androidColor | (c.Y << 8);
    androidColor = androidColor | (int)c.Z;
    SetStatusBarColor1(androidColor);
}

// private extern void SetStatusBarColor(int color) [instance] :882
void StatusBarConfig::SetStatusBarColor1(int color)
{
}

// private extern void SetStatusBarVisible(bool visible) [instance] :893
void StatusBarConfig::SetStatusBarVisible(bool visible)
{
}

// public generated StatusBarConfig New() [static] :828
StatusBarConfig* StatusBarConfig::New1()
{
    StatusBarConfig* obj1 = (StatusBarConfig*)uNew(StatusBarConfig_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

}}} // ::g::Fuse::Android
