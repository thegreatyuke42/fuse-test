// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseControls_bundle.h>
#include <_root.FuseElements_bundle.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Internal.ElementDraw.h>
#include <Fuse.Elements.Internal.Scale9Rectangle.h>
#include <Fuse.IViewport.h>
#include <Fuse.Node.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Matrix.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.UShort.h>
static uType* TYPES[12];

namespace g{
namespace Fuse{
namespace Elements{
namespace Internal{

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/Drawing/$.uno#1
// -------------------------------------------------------------------

// internal sealed class ElementDraw :180
// {
// static ElementDraw() :180
static void ElementDraw__cctor__fn(uType* __type)
{
    ElementDraw::Impl_ = ElementDraw::New1();
}

uType* ElementDraw_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ElementDraw);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.Internal.ElementDraw", options);
    type->fp_ctor_ = (void*)ElementDraw__New1_fn;
    type->fp_cctor_ = ElementDraw__cctor__fn;
    ::TYPES[0] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Float_typeof();
    ::TYPES[2] = ::g::Uno::Float2_typeof();
    ::TYPES[3] = ::g::FuseControls_bundle_typeof();
    ::TYPES[4] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[5] = ::g::Fuse::DrawContext_typeof();
    ::TYPES[6] = ::g::Fuse::IViewport_typeof();
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Elements::Internal::ElementDraw, _draw_b1f11b73), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Elements::Internal::ElementDraw, Rectangle_LocalTransform_b1f11b73_3_8_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Elements::Internal::ElementDraw, Rectangle_LocalTransform_b1f11b73_3_8_3), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Elements::Internal::ElementDraw, Rectangle_VertexData_b1f11b73_6_2_1), 0,
        ElementDraw_typeof(), (uintptr_t)&::g::Fuse::Elements::Internal::ElementDraw::Impl_, uFieldFlagsStatic);
    return type;
}

// public generated ElementDraw() :180
void ElementDraw__ctor__fn(ElementDraw* __this)
{
    __this->ctor_();
}

// private generated void init_DrawCalls() :180
void ElementDraw__init_DrawCalls_fn(ElementDraw* __this)
{
    __this->init_DrawCalls();
}

// public generated ElementDraw New() :180
void ElementDraw__New1_fn(ElementDraw** __retval)
{
    *__retval = ElementDraw::New1();
}

// public void Rectangle(Fuse.DrawContext dc, Fuse.Elements.Element element, float2 offset, float2 size, float4 color) :184
void ElementDraw__Rectangle_fn(ElementDraw* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* offset, ::g::Uno::Float2* size, ::g::Uno::Float4* color)
{
    __this->Rectangle(dc, element, *offset, *size, *color);
}

uSStrong<ElementDraw*> ElementDraw::Impl_;

// public generated ElementDraw() [instance] :180
void ElementDraw::ctor_()
{
    uStackFrame __("Fuse.Elements.Internal.ElementDraw", ".ctor()");
    init_DrawCalls();
}

// private generated void init_DrawCalls() [instance] :180
void ElementDraw::init_DrawCalls()
{
    uStackFrame __("Fuse.Elements.Internal.ElementDraw", "init_DrawCalls()");
    Rectangle_VertexData_b1f11b73_6_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(uArray::Init< ::g::Uno::Float2>(::TYPES[0/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f))), 0);
    Rectangle_LocalTransform_b1f11b73_3_8_2 = ::g::Uno::Matrix::Translation(-::g::Uno::Float2__New1(0.0f).X, -::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    Rectangle_LocalTransform_b1f11b73_3_8_3 = ::g::Uno::Matrix::RotationZ(0.0f);
    _draw_b1f11b73 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControls_bundle::SolidRectangleafb52826());
}

// public void Rectangle(Fuse.DrawContext dc, Fuse.Elements.Element element, float2 offset, float2 size, float4 color) [instance] :184
void ElementDraw::Rectangle(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2 offset, ::g::Uno::Float2 size, ::g::Uno::Float4 color)
{
    uStackFrame __("Fuse.Elements.Internal.ElementDraw", "Rectangle(Fuse.DrawContext,Fuse.Elements.Element,float2,float2,float4)");
    ::g::Uno::Float4x4 LocalTransform_b1f11b73_3_8_4 = ::g::Uno::Matrix::Mul10(Rectangle_LocalTransform_b1f11b73_3_8_2, ::g::Uno::Matrix::Scaling1(size.X, size.Y, 1.0f), Rectangle_LocalTransform_b1f11b73_3_8_3, ::g::Uno::Matrix::Translation(offset.X, offset.Y, 0.0f));
    _draw_b1f11b73.BlendEnabled(true);
    _draw_b1f11b73.DepthTestEnabled(false);
    _draw_b1f11b73.CullFace(uPtr(dc)->CullFace());
    _draw_b1f11b73.BlendSrcRgb(2);
    _draw_b1f11b73.BlendDstRgb(3);
    _draw_b1f11b73.BlendDstAlpha(3);
    _draw_b1f11b73.Use();
    _draw_b1f11b73.Attrib1(0, 2, Rectangle_VertexData_b1f11b73_6_2_1, 8, 0);
    _draw_b1f11b73.Uniform12(1, ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[6/*Fuse.IViewport*/])));
    _draw_b1f11b73.Uniform10(2, color);
    _draw_b1f11b73.Uniform12(3, (element != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_b1f11b73_3_8_4, uPtr(element)->WorldTransform()) : LocalTransform_b1f11b73_3_8_4);
    _draw_b1f11b73.DrawArrays(6);
}

// public generated ElementDraw New() [static] :180
ElementDraw* ElementDraw::New1()
{
    ElementDraw* obj1 = (ElementDraw*)uNew(ElementDraw_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/Drawing/$.uno#2
// -------------------------------------------------------------------

// internal sealed class Scale9Rectangle :205
// {
// static Scale9Rectangle() :205
static void Scale9Rectangle__cctor__fn(uType* __type)
{
    Scale9Rectangle::Impl_ = Scale9Rectangle::New1();
}

uType* Scale9Rectangle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(Scale9Rectangle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.Internal.Scale9Rectangle", options);
    type->fp_ctor_ = (void*)Scale9Rectangle__New1_fn;
    type->fp_cctor_ = Scale9Rectangle__cctor__fn;
    ::TYPES[4] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[8] = ::g::Uno::Float4_typeof();
    ::TYPES[2] = ::g::Uno::Float2_typeof();
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[6] = ::g::Fuse::IViewport_typeof();
    ::TYPES[5] = ::g::Fuse::DrawContext_typeof();
    ::TYPES[9] = ::g::Uno::UShort_typeof()->Array();
    ::TYPES[10] = ::g::Uno::Float3_typeof()->Array();
    ::TYPES[11] = ::g::FuseElements_bundle_typeof();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Elements::Internal::Scale9Rectangle, _draw_d7134d74), 0,
        ::g::Uno::UShort_typeof()->Array(), offsetof(::g::Fuse::Elements::Internal::Scale9Rectangle, Draw_indices_d7134d74_1_2_13), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(::g::Fuse::Elements::Internal::Scale9Rectangle, Draw_xv_d7134d74_1_3_2), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Elements::Internal::Scale9Rectangle, Draw_xv_d7134d74_1_3_3), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Elements::Internal::Scale9Rectangle, Draw_yv_d7134d74_1_4_6), 0,
        Scale9Rectangle_typeof(), (uintptr_t)&::g::Fuse::Elements::Internal::Scale9Rectangle::Impl_, uFieldFlagsStatic);
    return type;
}

// public generated Scale9Rectangle() :205
void Scale9Rectangle__ctor__fn(Scale9Rectangle* __this)
{
    __this->ctor_();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Node element, float2 size, float2 scaleTextureSize, texture2D tex, float4 color, float4 margin) :209
void Scale9Rectangle__Draw_fn(Scale9Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Node* element, ::g::Uno::Float2* size, ::g::Uno::Float2* scaleTextureSize, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Float4* color, ::g::Uno::Float4* margin)
{
    __this->Draw(dc, element, *size, *scaleTextureSize, tex, *color, *margin);
}

// private generated void init_DrawCalls() :205
void Scale9Rectangle__init_DrawCalls_fn(Scale9Rectangle* __this)
{
    __this->init_DrawCalls();
}

// public generated Scale9Rectangle New() :205
void Scale9Rectangle__New1_fn(Scale9Rectangle** __retval)
{
    *__retval = Scale9Rectangle::New1();
}

uSStrong<Scale9Rectangle*> Scale9Rectangle::Impl_;

// public generated Scale9Rectangle() [instance] :205
void Scale9Rectangle::ctor_()
{
    uStackFrame __("Fuse.Elements.Internal.Scale9Rectangle", ".ctor()");
    init_DrawCalls();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Node element, float2 size, float2 scaleTextureSize, texture2D tex, float4 color, float4 margin) [instance] :209
void Scale9Rectangle::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Node* element, ::g::Uno::Float2 size, ::g::Uno::Float2 scaleTextureSize, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Float4 color, ::g::Uno::Float4 margin)
{
    uStackFrame __("Fuse.Elements.Internal.Scale9Rectangle", "Draw(Fuse.DrawContext,Fuse.Node,float2,float2,texture2D,float4,float4)");
    _draw_d7134d74.BlendEnabled(true);
    _draw_d7134d74.DepthTestEnabled(false);
    _draw_d7134d74.CullFace(0);
    _draw_d7134d74.BlendSrcRgb(2);
    _draw_d7134d74.BlendDstRgb(3);
    _draw_d7134d74.BlendDstAlpha(3);
    _draw_d7134d74.Use();
    _draw_d7134d74.Attrib1(0, 3, Draw_xv_d7134d74_1_3_3, 12, 0);
    _draw_d7134d74.Attrib1(1, 3, Draw_yv_d7134d74_1_4_6, 12, 0);
    _draw_d7134d74.Uniform(2, margin.X);
    _draw_d7134d74.Uniform(3, size.X - margin.Z);
    _draw_d7134d74.Uniform(4, size.X);
    _draw_d7134d74.Uniform(5, margin.Y);
    _draw_d7134d74.Uniform(6, size.Y - margin.W);
    _draw_d7134d74.Uniform(7, size.Y);
    _draw_d7134d74.Uniform12(8, uPtr(element)->WorldTransform());
    _draw_d7134d74.Uniform12(9, ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(uPtr(dc)->Viewport()), ::TYPES[6/*Fuse.IViewport*/])));
    _draw_d7134d74.Uniform(10, scaleTextureSize.X - margin.Z);
    _draw_d7134d74.Uniform(11, scaleTextureSize.X);
    _draw_d7134d74.Uniform(12, scaleTextureSize.Y - margin.W);
    _draw_d7134d74.Uniform(13, scaleTextureSize.Y);
    _draw_d7134d74.Uniform2(14, scaleTextureSize);
    _draw_d7134d74.Uniform10(15, color);
    _draw_d7134d74.Sampler2(16, tex);
    _draw_d7134d74.Draw(uPtr(Draw_indices_d7134d74_1_2_13)->Length(), 2, Draw_xv_d7134d74_1_3_2);
}

// private generated void init_DrawCalls() [instance] :205
void Scale9Rectangle::init_DrawCalls()
{
    uStackFrame __("Fuse.Elements.Internal.Scale9Rectangle", "init_DrawCalls()");
    uArray* indices_d7134d74_1_2_1 = uArray::Init<int>(::TYPES[9/*ushort[]*/], 54, 0, 4, 5, 0, 5, 1, 1, 5, 6, 1, 6, 2, 2, 6, 7, 2, 7, 3, 4, 8, 9, 4, 9, 5, 5, 9, 10, 5, 10, 6, 6, 10, 11, 6, 11, 7, 8, 12, 13, 8, 13, 9, 9, 13, 14, 9, 14, 10, 10, 14, 15, 10, 15, 11);
    Draw_xv_d7134d74_1_3_2 = ::g::Uno::Graphics::IndexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer9(indices_d7134d74_1_2_1), 0);
    Draw_xv_d7134d74_1_3_3 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer4(uArray::Init< ::g::Uno::Float3>(::TYPES[10/*float3[]*/], 16, ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f))), 0);
    Draw_yv_d7134d74_1_4_6 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer4(uArray::Init< ::g::Uno::Float3>(::TYPES[10/*float3[]*/], 16, ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f))), 0);
    Draw_indices_d7134d74_1_2_13 = indices_d7134d74_1_2_1;
    _draw_d7134d74 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseElements_bundle::Scale9Rectangle3a507581());
}

// public generated Scale9Rectangle New() [static] :205
Scale9Rectangle* Scale9Rectangle::New1()
{
    Scale9Rectangle* obj1 = (Scale9Rectangle*)uNew(Scale9Rectangle_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}}} // ::g::Fuse::Elements::Internal
