// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseEffects_bundle.h>
#include <_root.FuseEntities_bundle.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Entities.Filters.Blitter.h>
#include <Fuse.Entities.Filters.Blur.h>
#include <Fuse.Entities.Filters.FindEdges.h>
#include <Fuse.FramebufferPool.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.RenderTarget.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.UShort.h>
static uType* TYPES[13];

namespace g{
namespace Fuse{
namespace Entities{
namespace Filters{

// /usr/local/share/uno/Packages/Fuse.Entities/0.27.14/Filters/$.uno
// -----------------------------------------------------------------

// internal sealed class Blitter :123
// {
uType* Blitter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Blitter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Entities.Filters.Blitter", options);
    type->fp_ctor_ = (void*)Blitter__New1_fn;
    ::TYPES[0] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[1] = ::g::Uno::UShort_typeof()->Array();
    ::TYPES[2] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[3] = ::g::FuseEffects_bundle_typeof();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Entities::Filters::Blitter, _draw_5f2d2bfe), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(::g::Fuse::Entities::Filters::Blitter, Blit_VertexData_5f2d2bfe_2_5_2), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Entities::Filters::Blitter, Blit_VertexData_5f2d2bfe_2_5_3), 0,
        Blitter_typeof(), (uintptr_t)&::g::Fuse::Entities::Filters::Blitter::_instance_, uFieldFlagsStatic);
    return type;
}

// public generated Blitter() :123
void Blitter__ctor__fn(Blitter* __this)
{
    __this->ctor_();
}

// public void Blit(texture2D tex, bool blend) :131
void Blitter__Blit_fn(Blitter* __this, ::g::Uno::Graphics::Texture2D* tex, bool* blend)
{
    __this->Blit(tex, *blend);
}

// private generated void init_DrawCalls() :123
void Blitter__init_DrawCalls_fn(Blitter* __this)
{
    __this->init_DrawCalls();
}

// public static Fuse.Entities.Filters.Blitter get_Instance() :128
void Blitter__get_Instance_fn(Blitter** __retval)
{
    *__retval = Blitter::Instance();
}

// public generated Blitter New() :123
void Blitter__New1_fn(Blitter** __retval)
{
    *__retval = Blitter::New1();
}

uSStrong<Blitter*> Blitter::_instance_;

// public generated Blitter() [instance] :123
void Blitter::ctor_()
{
    uStackFrame __("Fuse.Entities.Filters.Blitter", ".ctor()");
    init_DrawCalls();
}

// public void Blit(texture2D tex, bool blend) [instance] :131
void Blitter::Blit(::g::Uno::Graphics::Texture2D* tex, bool blend)
{
    uStackFrame __("Fuse.Entities.Filters.Blitter", "Blit(texture2D,bool)");
    _draw_5f2d2bfe.BlendEnabled(blend);
    _draw_5f2d2bfe.DepthTestEnabled(false);
    _draw_5f2d2bfe.CullFace(0);
    _draw_5f2d2bfe.Use();
    _draw_5f2d2bfe.Attrib1(0, 2, Blit_VertexData_5f2d2bfe_2_5_3, 8, 0);
    _draw_5f2d2bfe.Sampler2(1, tex);
    _draw_5f2d2bfe.Draw(6, 2, Blit_VertexData_5f2d2bfe_2_5_2);
}

// private generated void init_DrawCalls() [instance] :123
void Blitter::init_DrawCalls()
{
    uStackFrame __("Fuse.Entities.Filters.Blitter", "init_DrawCalls()");
    Blit_VertexData_5f2d2bfe_2_5_2 = ::g::Uno::Graphics::IndexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer9(uArray::Init<int>(::TYPES[1/*ushort[]*/], 6, 0, 1, 2, 2, 3, 0)), 0);
    Blit_VertexData_5f2d2bfe_2_5_3 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(uArray::Init< ::g::Uno::Float2>(::TYPES[2/*float2[]*/], 4, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f))), 0);
    _draw_5f2d2bfe = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseEffects_bundle::EffectHelpers19f0dc38());
}

// public generated Blitter New() [static] :123
Blitter* Blitter::New1()
{
    Blitter* obj2 = (Blitter*)uNew(Blitter_typeof());
    obj2->ctor_();
    return obj2;
}

// public static Fuse.Entities.Filters.Blitter get_Instance() [static] :128
Blitter* Blitter::Instance()
{
    uStackFrame __("Fuse.Entities.Filters.Blitter", "get_Instance()");
    Blitter* ind1 = Blitter::_instance();
    return (ind1 != NULL) ? ind1 : (Blitter*)(Blitter::_instance() = Blitter::New1());
}
// }

// /usr/local/share/uno/Packages/Fuse.Entities/0.27.14/Filters/$.uno
// -----------------------------------------------------------------

// public sealed class Blur :12
// {
::g::Fuse::Entities::RenderNode_type* Blur_typeof()
{
    static uSStrong< ::g::Fuse::Entities::RenderNode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 62;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Blur);
    options.TypeSize = sizeof(::g::Fuse::Entities::RenderNode_type);
    type = (::g::Fuse::Entities::RenderNode_type*)uClassType::New("Fuse.Entities.Filters.Blur", options);
    type->SetBase(::g::Fuse::Entities::RenderNode_typeof());
    type->fp_ctor_ = (void*)Blur__New2_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Entities::RenderNode*, ::g::Fuse::DrawContext*))Blur__OnDraw_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseIChildObjectget_ParentObject_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[0] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[4] = ::g::Uno::Float2_typeof();
    ::TYPES[5] = ::g::Uno::Float_typeof();
    ::TYPES[6] = ::g::Uno::Int2_typeof();
    ::TYPES[7] = ::g::Uno::Graphics::Texture2D_typeof();
    ::TYPES[1] = ::g::Uno::UShort_typeof()->Array();
    ::TYPES[2] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[8] = ::g::FuseEntities_bundle_typeof();
    ::TYPES[9] = ::g::Uno::Int_typeof();
    ::TYPES[10] = ::g::Fuse::DrawContext_typeof();
    ::TYPES[11] = ::g::Uno::Graphics::Framebuffer_typeof();
    ::TYPES[12] = ::g::Fuse::Entities::Filters::Blitter_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::Entities::RenderNode_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Entities::RenderNode_type, interface1));
    type->SetFields(55,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Entities::Filters::Blur, _draw_cd9d8ce5), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Entities::Filters::Blur, _passes), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Entities::Filters::Blur, _quality), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(::g::Fuse::Entities::Filters::Blur, DirectionalBlur_VertexData_cd9d8ce5_2_5_2), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Entities::Filters::Blur, DirectionalBlur_VertexData_cd9d8ce5_2_5_3), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Entities::Filters::Blur, _ClearColor), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Entities::Filters::Blur, _Glow), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("get_ClearColor", NULL, (void*)Blur__get_ClearColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_ClearColor", NULL, (void*)Blur__set_ClearColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_Glow", NULL, (void*)Blur__get_Glow_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Glow", NULL, (void*)Blur__set_Glow_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)Blur__New2_fn, 0, true, Blur_typeof(), 0),
        new uFunction("get_Passes", NULL, (void*)Blur__get_Passes_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Passes", NULL, (void*)Blur__set_Passes_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_Quality", NULL, (void*)Blur__get_Quality_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Quality", NULL, (void*)Blur__set_Quality_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}

// public Blur() :50
void Blur__ctor_2_fn(Blur* __this)
{
    __this->ctor_2();
}

// public generated float4 get_ClearColor() :48
void Blur__get_ClearColor_fn(Blur* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->ClearColor();
}

// public generated void set_ClearColor(float4 value) :48
void Blur__set_ClearColor_fn(Blur* __this, ::g::Uno::Float4* value)
{
    __this->ClearColor(*value);
}

// private void DirectionalBlur(texture2D tex, float2 dir) :99
void Blur__DirectionalBlur_fn(Blur* __this, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Float2* dir)
{
    __this->DirectionalBlur(tex, *dir);
}

// public generated bool get_Glow() :55
void Blur__get_Glow_fn(Blur* __this, bool* __retval)
{
    *__retval = __this->Glow();
}

// public generated void set_Glow(bool value) :55
void Blur__set_Glow_fn(Blur* __this, bool* value)
{
    __this->Glow(*value);
}

// private generated void init_DrawCalls() :12
void Blur__init_DrawCalls_fn(Blur* __this)
{
    __this->init_DrawCalls();
}

// public Blur New() :50
void Blur__New2_fn(Blur** __retval)
{
    *__retval = Blur::New2();
}

// protected override sealed void OnDraw(Fuse.DrawContext dc) :57
void Blur__OnDraw_fn(Blur* __this, ::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Entities.Filters.Blur", "OnDraw(Fuse.DrawContext)");
    int width = (int)(((float)uPtr(dc)->GLViewportPixelSize().X * __this->Quality()) / 100.0f);
    int height = (int)(((float)dc->GLViewportPixelSize().Y * __this->Quality()) / 100.0f);

    if (width < 1)
        width = 1;

    if (height < 1)
        height = 1;

    ::g::Uno::Graphics::Framebuffer* fb1 = ::g::Fuse::FramebufferPool::Lock(width, height, 3, true);
    ::g::Uno::Graphics::Framebuffer* fb2 = ::g::Fuse::FramebufferPool::Lock(width, height, 3, false);
    dc->PushRenderTarget1(uPtr(fb1)->RenderTarget());
    dc->Clear(__this->ClearColor(), 1.0f);
    ::g::Fuse::Entities::RenderNode__OnDraw_fn(__this, dc);
    dc->PopRenderTarget();

    for (int i = 1; i < __this->Passes(); i++)
    {
        uPtr(dc)->PushRenderTarget1(uPtr(fb2)->RenderTarget());
        dc->Clear(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.0f), 1.0f);
        __this->DirectionalBlur(uPtr(fb1)->ColorBuffer(), ::g::Uno::Float2__New2(0.5f, 0.0f));
        dc->PopRenderTarget();
        dc->PushRenderTarget1(fb1->RenderTarget());
        dc->Clear(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.0f), 1.0f);
        __this->DirectionalBlur(fb2->ColorBuffer(), ::g::Uno::Float2__New2(0.0f, 0.5f));
        dc->PopRenderTarget();
    }

    if (__this->Glow())
    {
        ::g::Fuse::Entities::RenderNode__OnDraw_fn(__this, dc);
        uPtr(dc)->Flush();
    }

    uPtr(::g::Fuse::Entities::Filters::Blitter::Instance())->Blit(fb1->ColorBuffer(), __this->Glow());
    ::g::Fuse::FramebufferPool::Release(fb1);
    ::g::Fuse::FramebufferPool::Release(fb2);
}

// public int get_Passes() :35
void Blur__get_Passes_fn(Blur* __this, int* __retval)
{
    *__retval = __this->Passes();
}

// public void set_Passes(int value) :36
void Blur__set_Passes_fn(Blur* __this, int* value)
{
    __this->Passes(*value);
}

// public float get_Quality() :19
void Blur__get_Quality_fn(Blur* __this, float* __retval)
{
    *__retval = __this->Quality();
}

// public void set_Quality(float value) :20
void Blur__set_Quality_fn(Blur* __this, float* value)
{
    __this->Quality(*value);
}

// public Blur() [instance] :50
void Blur::ctor_2()
{
    uStackFrame __("Fuse.Entities.Filters.Blur", ".ctor()");
    _quality = 100.0f;
    _passes = 4;
    ctor_1();
    ClearColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    init_DrawCalls();
}

// public generated float4 get_ClearColor() [instance] :48
::g::Uno::Float4 Blur::ClearColor()
{
    uStackFrame __("Fuse.Entities.Filters.Blur", "get_ClearColor()");
    return _ClearColor;
}

// public generated void set_ClearColor(float4 value) [instance] :48
void Blur::ClearColor(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Entities.Filters.Blur", "set_ClearColor(float4)");
    _ClearColor = value;
}

// private void DirectionalBlur(texture2D tex, float2 dir) [instance] :99
void Blur::DirectionalBlur(::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Float2 dir)
{
    uStackFrame __("Fuse.Entities.Filters.Blur", "DirectionalBlur(texture2D,float2)");
    _draw_cd9d8ce5.DepthTestEnabled(false);
    _draw_cd9d8ce5.CullFace(0);
    _draw_cd9d8ce5.Use();
    _draw_cd9d8ce5.Attrib1(0, 2, DirectionalBlur_VertexData_cd9d8ce5_2_5_3, 8, 0);
    _draw_cd9d8ce5.Uniform2(1, ::g::Uno::Float2__New2(dir.X / (float)uPtr(tex)->Size().X, dir.Y / (float)uPtr(tex)->Size().Y));
    _draw_cd9d8ce5.Uniform2(2, ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__New2(dir.X / (float)tex->Size().X, dir.Y / (float)tex->Size().Y), 3.0f));
    _draw_cd9d8ce5.Sampler2(3, tex);
    _draw_cd9d8ce5.Draw(6, 2, DirectionalBlur_VertexData_cd9d8ce5_2_5_2);
}

// public generated bool get_Glow() [instance] :55
bool Blur::Glow()
{
    uStackFrame __("Fuse.Entities.Filters.Blur", "get_Glow()");
    return _Glow;
}

// public generated void set_Glow(bool value) [instance] :55
void Blur::Glow(bool value)
{
    uStackFrame __("Fuse.Entities.Filters.Blur", "set_Glow(bool)");
    _Glow = value;
}

// private generated void init_DrawCalls() [instance] :12
void Blur::init_DrawCalls()
{
    uStackFrame __("Fuse.Entities.Filters.Blur", "init_DrawCalls()");
    DirectionalBlur_VertexData_cd9d8ce5_2_5_2 = ::g::Uno::Graphics::IndexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer9(uArray::Init<int>(::TYPES[1/*ushort[]*/], 6, 0, 1, 2, 2, 3, 0)), 0);
    DirectionalBlur_VertexData_cd9d8ce5_2_5_3 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(uArray::Init< ::g::Uno::Float2>(::TYPES[2/*float2[]*/], 4, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f))), 0);
    _draw_cd9d8ce5 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseEntities_bundle::Blur17c40e2b());
}

// public int get_Passes() [instance] :35
int Blur::Passes()
{
    uStackFrame __("Fuse.Entities.Filters.Blur", "get_Passes()");
    return _passes;
}

// public void set_Passes(int value) [instance] :36
void Blur::Passes(int value)
{
    uStackFrame __("Fuse.Entities.Filters.Blur", "set_Passes(int)");

    if (_passes != value)
    {
        _passes = value;

        if (_passes < 0)
            _passes = 0;

        if (_passes > 20)
            _passes = 20;
    }
}

// public float get_Quality() [instance] :19
float Blur::Quality()
{
    uStackFrame __("Fuse.Entities.Filters.Blur", "get_Quality()");
    return _quality;
}

// public void set_Quality(float value) [instance] :20
void Blur::Quality(float value)
{
    uStackFrame __("Fuse.Entities.Filters.Blur", "set_Quality(float)");

    if (_quality != value)
    {
        _quality = value;

        if (_quality < 1.0f)
            _quality = 1.0f;

        if (_quality > 100.0f)
            _quality = 100.0f;
    }
}

// public Blur New() [static] :50
Blur* Blur::New2()
{
    Blur* obj1 = (Blur*)uNew(Blur_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Entities/0.27.14/Filters/$.uno#1
// -------------------------------------------------------------------

// public sealed class FindEdges :157
// {
::g::Fuse::Entities::RenderNode_type* FindEdges_typeof()
{
    static uSStrong< ::g::Fuse::Entities::RenderNode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 65;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(FindEdges);
    options.TypeSize = sizeof(::g::Fuse::Entities::RenderNode_type);
    type = (::g::Fuse::Entities::RenderNode_type*)uClassType::New("Fuse.Entities.Filters.FindEdges", options);
    type->SetBase(::g::Fuse::Entities::RenderNode_typeof());
    type->fp_ctor_ = (void*)FindEdges__New2_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Entities::RenderNode*, ::g::Fuse::DrawContext*))FindEdges__OnDraw_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseIChildObjectget_ParentObject_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[1] = ::g::Uno::UShort_typeof()->Array();
    ::TYPES[2] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[8] = ::g::FuseEntities_bundle_typeof();
    ::TYPES[6] = ::g::Uno::Int2_typeof();
    ::TYPES[10] = ::g::Fuse::DrawContext_typeof();
    ::TYPES[11] = ::g::Uno::Graphics::Framebuffer_typeof();
    ::TYPES[0] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[4] = ::g::Uno::Float2_typeof();
    ::TYPES[5] = ::g::Uno::Float_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::Entities::RenderNode_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Entities::RenderNode_type, interface1));
    type->SetFields(55,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Entities::Filters::FindEdges, _draw_fe86b546), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(::g::Fuse::Entities::Filters::FindEdges, OnDraw_VertexData_fe86b546_7_5_2), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Entities::Filters::FindEdges, OnDraw_VertexData_fe86b546_7_5_3), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Entities::Filters::FindEdges, _BackgroundColor), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Entities::Filters::FindEdges, _BlendDst), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Entities::Filters::FindEdges, _BlendEnabled), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Entities::Filters::FindEdges, _BlendSrc), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Entities::Filters::FindEdges, _EdgeColor), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Entities::Filters::FindEdges, _Spread), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Entities::Filters::FindEdges, _Strength), 0);
    type->Reflection.SetFunctions(15,
        new uFunction("get_BackgroundColor", NULL, (void*)FindEdges__get_BackgroundColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_BackgroundColor", NULL, (void*)FindEdges__set_BackgroundColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_BlendDst", NULL, (void*)FindEdges__get_BlendDst_fn, 0, false, ::g::Uno::Graphics::BlendOperand_typeof(), 0),
        new uFunction("set_BlendDst", NULL, (void*)FindEdges__set_BlendDst_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Graphics::BlendOperand_typeof()),
        new uFunction("get_BlendEnabled", NULL, (void*)FindEdges__get_BlendEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_BlendEnabled", NULL, (void*)FindEdges__set_BlendEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_BlendSrc", NULL, (void*)FindEdges__get_BlendSrc_fn, 0, false, ::g::Uno::Graphics::BlendOperand_typeof(), 0),
        new uFunction("set_BlendSrc", NULL, (void*)FindEdges__set_BlendSrc_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Graphics::BlendOperand_typeof()),
        new uFunction("get_EdgeColor", NULL, (void*)FindEdges__get_EdgeColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_EdgeColor", NULL, (void*)FindEdges__set_EdgeColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction(".ctor", NULL, (void*)FindEdges__New2_fn, 0, true, FindEdges_typeof(), 0),
        new uFunction("get_Spread", NULL, (void*)FindEdges__get_Spread_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Spread", NULL, (void*)FindEdges__set_Spread_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Strength", NULL, (void*)FindEdges__get_Strength_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Strength", NULL, (void*)FindEdges__set_Strength_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}

// public FindEdges() :159
void FindEdges__ctor_2_fn(FindEdges* __this)
{
    __this->ctor_2();
}

// public generated float4 get_BackgroundColor() :174
void FindEdges__get_BackgroundColor_fn(FindEdges* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->BackgroundColor();
}

// public generated void set_BackgroundColor(float4 value) :174
void FindEdges__set_BackgroundColor_fn(FindEdges* __this, ::g::Uno::Float4* value)
{
    __this->BackgroundColor(*value);
}

// public generated Uno.Graphics.BlendOperand get_BlendDst() :181
void FindEdges__get_BlendDst_fn(FindEdges* __this, int* __retval)
{
    *__retval = __this->BlendDst();
}

// public generated void set_BlendDst(Uno.Graphics.BlendOperand value) :181
void FindEdges__set_BlendDst_fn(FindEdges* __this, int* value)
{
    __this->BlendDst(*value);
}

// public generated bool get_BlendEnabled() :179
void FindEdges__get_BlendEnabled_fn(FindEdges* __this, bool* __retval)
{
    *__retval = __this->BlendEnabled();
}

// public generated void set_BlendEnabled(bool value) :179
void FindEdges__set_BlendEnabled_fn(FindEdges* __this, bool* value)
{
    __this->BlendEnabled(*value);
}

// public generated Uno.Graphics.BlendOperand get_BlendSrc() :180
void FindEdges__get_BlendSrc_fn(FindEdges* __this, int* __retval)
{
    *__retval = __this->BlendSrc();
}

// public generated void set_BlendSrc(Uno.Graphics.BlendOperand value) :180
void FindEdges__set_BlendSrc_fn(FindEdges* __this, int* value)
{
    __this->BlendSrc(*value);
}

// public generated float4 get_EdgeColor() :177
void FindEdges__get_EdgeColor_fn(FindEdges* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->EdgeColor();
}

// public generated void set_EdgeColor(float4 value) :177
void FindEdges__set_EdgeColor_fn(FindEdges* __this, ::g::Uno::Float4* value)
{
    __this->EdgeColor(*value);
}

// private generated void init_DrawCalls() :157
void FindEdges__init_DrawCalls_fn(FindEdges* __this)
{
    __this->init_DrawCalls();
}

// public FindEdges New() :159
void FindEdges__New2_fn(FindEdges** __retval)
{
    *__retval = FindEdges::New2();
}

// protected override sealed void OnDraw(Fuse.DrawContext dc) :183
void FindEdges__OnDraw_fn(FindEdges* __this, ::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", "OnDraw(Fuse.DrawContext)");
    ::g::Uno::Graphics::Framebuffer* fb = ::g::Fuse::FramebufferPool::Lock(uPtr(dc)->GLViewportPixelSize().X, uPtr(dc)->GLViewportPixelSize().Y, 3, true);
    dc->PushRenderTarget1(uPtr(fb)->RenderTarget());
    dc->Clear(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.0f), 1.0f);
    ::g::Fuse::Entities::RenderNode__OnDraw_fn(__this, dc);
    dc->PopRenderTarget();

    if (__this->BlendEnabled())
    {
        ::g::Fuse::Entities::RenderNode__OnDraw_fn(__this, dc);
        uPtr(dc)->Flush();
    }

    __this->_draw_fe86b546.BlendEnabled(__this->BlendEnabled());
    __this->_draw_fe86b546.BlendSrcRgb(__this->BlendSrc());
    __this->_draw_fe86b546.BlendSrcAlpha(__this->BlendSrc());
    __this->_draw_fe86b546.BlendDstRgb(__this->BlendDst());
    __this->_draw_fe86b546.BlendDstAlpha(__this->BlendDst());
    __this->_draw_fe86b546.Use();
    __this->_draw_fe86b546.Attrib1(0, 2, __this->OnDraw_VertexData_fe86b546_7_5_3, 8, 0);
    __this->_draw_fe86b546.Uniform2(1, ::g::Uno::Float2__New2(::g::Uno::Float2__New2(__this->Spread() / (float)uPtr(fb)->Size().X, __this->Spread() / (float)uPtr(fb)->Size().Y).X, 0.0f));
    __this->_draw_fe86b546.Uniform2(2, ::g::Uno::Float2__New2(0.0f, ::g::Uno::Float2__New2(__this->Spread() / (float)fb->Size().X, __this->Spread() / (float)fb->Size().Y).Y));
    __this->_draw_fe86b546.Uniform2(3, ::g::Uno::Float2__New2(-::g::Uno::Float2__New2(__this->Spread() / (float)fb->Size().X, __this->Spread() / (float)fb->Size().Y).X, 0.0f));
    __this->_draw_fe86b546.Uniform2(4, ::g::Uno::Float2__New2(0.0f, -::g::Uno::Float2__New2(__this->Spread() / (float)fb->Size().X, __this->Spread() / (float)fb->Size().Y).Y));
    __this->_draw_fe86b546.Uniform(5, __this->Strength());
    __this->_draw_fe86b546.Uniform10(6, __this->BackgroundColor());
    __this->_draw_fe86b546.Uniform10(7, __this->EdgeColor());
    __this->_draw_fe86b546.Sampler2(8, fb->ColorBuffer());
    __this->_draw_fe86b546.Draw(6, 2, __this->OnDraw_VertexData_fe86b546_7_5_2);
    ::g::Fuse::FramebufferPool::Release(fb);
}

// public generated float get_Spread() :168
void FindEdges__get_Spread_fn(FindEdges* __this, float* __retval)
{
    *__retval = __this->Spread();
}

// public generated void set_Spread(float value) :168
void FindEdges__set_Spread_fn(FindEdges* __this, float* value)
{
    __this->Spread(*value);
}

// public generated float get_Strength() :171
void FindEdges__get_Strength_fn(FindEdges* __this, float* __retval)
{
    *__retval = __this->Strength();
}

// public generated void set_Strength(float value) :171
void FindEdges__set_Strength_fn(FindEdges* __this, float* value)
{
    __this->Strength(*value);
}

// public FindEdges() [instance] :159
void FindEdges::ctor_2()
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", ".ctor()");
    ctor_1();
    Spread(1.0f);
    Strength(0.25f);
    BackgroundColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    EdgeColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    init_DrawCalls();
}

// public generated float4 get_BackgroundColor() [instance] :174
::g::Uno::Float4 FindEdges::BackgroundColor()
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", "get_BackgroundColor()");
    return _BackgroundColor;
}

// public generated void set_BackgroundColor(float4 value) [instance] :174
void FindEdges::BackgroundColor(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", "set_BackgroundColor(float4)");
    _BackgroundColor = value;
}

// public generated Uno.Graphics.BlendOperand get_BlendDst() [instance] :181
int FindEdges::BlendDst()
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", "get_BlendDst()");
    return _BlendDst;
}

// public generated void set_BlendDst(Uno.Graphics.BlendOperand value) [instance] :181
void FindEdges::BlendDst(int value)
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", "set_BlendDst(Uno.Graphics.BlendOperand)");
    _BlendDst = value;
}

// public generated bool get_BlendEnabled() [instance] :179
bool FindEdges::BlendEnabled()
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", "get_BlendEnabled()");
    return _BlendEnabled;
}

// public generated void set_BlendEnabled(bool value) [instance] :179
void FindEdges::BlendEnabled(bool value)
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", "set_BlendEnabled(bool)");
    _BlendEnabled = value;
}

// public generated Uno.Graphics.BlendOperand get_BlendSrc() [instance] :180
int FindEdges::BlendSrc()
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", "get_BlendSrc()");
    return _BlendSrc;
}

// public generated void set_BlendSrc(Uno.Graphics.BlendOperand value) [instance] :180
void FindEdges::BlendSrc(int value)
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", "set_BlendSrc(Uno.Graphics.BlendOperand)");
    _BlendSrc = value;
}

// public generated float4 get_EdgeColor() [instance] :177
::g::Uno::Float4 FindEdges::EdgeColor()
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", "get_EdgeColor()");
    return _EdgeColor;
}

// public generated void set_EdgeColor(float4 value) [instance] :177
void FindEdges::EdgeColor(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", "set_EdgeColor(float4)");
    _EdgeColor = value;
}

// private generated void init_DrawCalls() [instance] :157
void FindEdges::init_DrawCalls()
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", "init_DrawCalls()");
    OnDraw_VertexData_fe86b546_7_5_2 = ::g::Uno::Graphics::IndexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer9(uArray::Init<int>(::TYPES[1/*ushort[]*/], 6, 0, 1, 2, 2, 3, 0)), 0);
    OnDraw_VertexData_fe86b546_7_5_3 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(uArray::Init< ::g::Uno::Float2>(::TYPES[2/*float2[]*/], 4, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f))), 0);
    _draw_fe86b546 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseEntities_bundle::FindEdges6e47be68());
}

// public generated float get_Spread() [instance] :168
float FindEdges::Spread()
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", "get_Spread()");
    return _Spread;
}

// public generated void set_Spread(float value) [instance] :168
void FindEdges::Spread(float value)
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", "set_Spread(float)");
    _Spread = value;
}

// public generated float get_Strength() [instance] :171
float FindEdges::Strength()
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", "get_Strength()");
    return _Strength;
}

// public generated void set_Strength(float value) [instance] :171
void FindEdges::Strength(float value)
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", "set_Strength(float)");
    _Strength = value;
}

// public FindEdges New() [static] :159
FindEdges* FindEdges::New2()
{
    FindEdges* obj1 = (FindEdges*)uNew(FindEdges_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

}}}} // ::g::Fuse::Entities::Filters
