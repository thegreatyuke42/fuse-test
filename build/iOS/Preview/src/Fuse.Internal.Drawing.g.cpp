// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseControls_bundle.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.BlendMode.h>
#include <Fuse.Drawing.BlendModeHelpers.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.DynamicBrush.h>
#include <Fuse.Drawing.ImageFill.DrawParams.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Internal.Drawing.SolidRectangle.h>
#include <Fuse.IViewport.h>
#include <Fuse.Node.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.Vector.h>
static uType* TYPES[17];

namespace g{
namespace Fuse{
namespace Internal{
namespace Drawing{

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.14/$.uno#5
// -----------------------------------------------------------

// internal sealed class SolidRectangle :492
// {
// static SolidRectangle() :492
static void SolidRectangle__cctor__fn(uType* __type)
{
    SolidRectangle::Impl_ = SolidRectangle::New1();
}

uType* SolidRectangle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.ObjectSize = sizeof(SolidRectangle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Internal.Drawing.SolidRectangle", options);
    type->fp_ctor_ = (void*)SolidRectangle__New1_fn;
    type->fp_cctor_ = SolidRectangle__cctor__fn;
    ::TYPES[0] = ::g::Fuse::Drawing::ImageFill_typeof();
    ::TYPES[1] = ::g::Uno::Float2_typeof();
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[3] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[4] = ::g::Fuse::DrawContext_typeof();
    ::TYPES[5] = ::g::Fuse::Drawing::DynamicBrush_typeof();
    ::TYPES[6] = ::g::Fuse::IViewport_typeof();
    ::TYPES[7] = ::g::Fuse::Drawing::ImageFill__DrawParams_typeof();
    ::TYPES[8] = ::g::Uno::Float4_typeof();
    ::TYPES[9] = ::g::Fuse::Node_typeof();
    ::TYPES[10] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[11] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[12] = ::g::Uno::Graphics::Framebuffer_typeof();
    ::TYPES[13] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[14] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[15] = ::g::Uno::Float_typeof();
    ::TYPES[16] = ::g::FuseControls_bundle_typeof();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, _draw_66c7544), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, _draw_66ce9a3), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, _draw_66d5e02), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_BlendDstAlpha_66dd261_11_7_13), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_BlendDstRgb_66dd261_11_5_12), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_BlendSrcAlpha_66dd261_11_6_11), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_BlendSrcRgb_66dd261_11_4_10), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_LocalTransform_66c7544_4_8_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_LocalTransform_66c7544_4_8_3), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_LocalTransform_66c7544_4_8_4), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_VertexData_66c7544_7_2_1), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_VertexData_66ce9a3_7_2_1), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_VertexData_66d5e02_7_2_1), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_VertexData_66dd261_7_2_1), 0,
        SolidRectangle_typeof(), (uintptr_t)&::g::Fuse::Internal::Drawing::SolidRectangle::Impl_, uFieldFlagsStatic);
    return type;
}

// public generated SolidRectangle() :492
void SolidRectangle__ctor__fn(SolidRectangle* __this)
{
    __this->ctor_();
}

// public void DrawElement(Fuse.DrawContext dc, Fuse.Elements.Element element, Fuse.Drawing.Brush brush, float opacity) :496
void SolidRectangle__DrawElement_fn(SolidRectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* element, ::g::Fuse::Drawing::Brush* brush, float* opacity)
{
    __this->DrawElement(dc, element, brush, *opacity);
}

// private generated void init_DrawCalls() :492
void SolidRectangle__init_DrawCalls_fn(SolidRectangle* __this)
{
    __this->init_DrawCalls();
}

// public generated SolidRectangle New() :492
void SolidRectangle__New1_fn(SolidRectangle** __retval)
{
    *__retval = SolidRectangle::New1();
}

uSStrong<SolidRectangle*> SolidRectangle::Impl_;

// public generated SolidRectangle() [instance] :492
void SolidRectangle::ctor_()
{
    uStackFrame __("Fuse.Internal.Drawing.SolidRectangle", ".ctor()");
    init_DrawCalls();
}

// public void DrawElement(Fuse.DrawContext dc, Fuse.Elements.Element element, Fuse.Drawing.Brush brush, float opacity) [instance] :496
void SolidRectangle::DrawElement(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* element, ::g::Fuse::Drawing::Brush* brush, float opacity)
{
    uStackFrame __("Fuse.Internal.Drawing.SolidRectangle", "DrawElement(Fuse.DrawContext,Fuse.Elements.Element,Fuse.Drawing.Brush,float)");
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float4 ind4;
    ::g::Uno::Float4 ind5;

    if (uIs(brush, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))
    {
        ::g::Uno::Float4x4 LocalTransform_66c7544_4_8_5 = ::g::Uno::Matrix::Mul10(DrawElement_LocalTransform_66c7544_4_8_2, ::g::Uno::Matrix::Scaling1(uPtr(element)->ActualSize().X, uPtr(element)->ActualSize().Y, 1.0f), DrawElement_LocalTransform_66c7544_4_8_3, DrawElement_LocalTransform_66c7544_4_8_4);
        ::g::Uno::Graphics::Texture2D* Texture_66c7544_13_6_9 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))->GetTexture();
        ::g::Fuse::Drawing::ImageFill__DrawParams DP_66c7544_13_5_12 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, element->ActualSize());
        _draw_66c7544.BlendEnabled(true);
        _draw_66c7544.DepthTestEnabled(false);
        _draw_66c7544.CullFace(uPtr(dc)->CullFace());
        _draw_66c7544.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
        _draw_66c7544.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
        _draw_66c7544.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
        _draw_66c7544.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
        _draw_66c7544.Const(0, Texture_66c7544_13_6_9 == NULL);
        _draw_66c7544.Use();
        _draw_66c7544.Attrib1(1, 2, DrawElement_VertexData_66c7544_7_2_1, 8, 0);
        _draw_66c7544.Uniform12(2, ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[6/*Fuse.IViewport*/])));
        _draw_66c7544.Uniform2(3, uPtr(element)->ActualSize());
        _draw_66c7544.Uniform2(4, DP_66c7544_13_5_12.Origin);
        _draw_66c7544.Uniform2(5, DP_66c7544_13_5_12.Size);
        _draw_66c7544.Uniform2(6, ::g::Uno::Float2__op_Subtraction2((ind1 = DP_66c7544_13_5_12.UVClip, ::g::Uno::Float2__New2(ind1.Z, ind1.W)), (ind2 = DP_66c7544_13_5_12.UVClip, ::g::Uno::Float2__New2(ind2.X, ind2.Y))));
        _draw_66c7544.Uniform2(7, (ind3 = DP_66c7544_13_5_12.UVClip, ::g::Uno::Float2__New2(ind3.X, ind3.Y)));
        _draw_66c7544.Uniform10(8, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))->Color());
        _draw_66c7544.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))->Opacity());
        _draw_66c7544.Uniform(10, opacity);
        _draw_66c7544.Uniform12(11, (element != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_66c7544_4_8_5, element->WorldTransform()) : LocalTransform_66c7544_4_8_5);
        _draw_66c7544.Sampler2(12, Texture_66c7544_13_6_9);
        _draw_66c7544.DrawArrays(6);
    }
    else if (uIs(brush, ::TYPES[10/*Fuse.Drawing.SolidColor*/]))
    {
        ::g::Uno::Float4x4 LocalTransform_66ce9a3_4_8_2 = ::g::Uno::Matrix::Mul10(DrawElement_LocalTransform_66c7544_4_8_2, ::g::Uno::Matrix::Scaling1(uPtr(element)->ActualSize().X, uPtr(element)->ActualSize().Y, 1.0f), DrawElement_LocalTransform_66c7544_4_8_3, DrawElement_LocalTransform_66c7544_4_8_4);
        _draw_66ce9a3.BlendEnabled(true);
        _draw_66ce9a3.DepthTestEnabled(false);
        _draw_66ce9a3.CullFace(uPtr(dc)->CullFace());
        _draw_66ce9a3.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[10/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
        _draw_66ce9a3.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[10/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
        _draw_66ce9a3.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[10/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
        _draw_66ce9a3.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[10/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
        _draw_66ce9a3.Use();
        _draw_66ce9a3.Attrib1(0, 2, DrawElement_VertexData_66ce9a3_7_2_1, 8, 0);
        _draw_66ce9a3.Uniform12(1, ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[6/*Fuse.IViewport*/])));
        _draw_66ce9a3.Uniform10(2, ::g::Uno::Float4__op_Multiply1(::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1(::g::Uno::Float3__op_Multiply1((ind4 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[10/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind4.X, ind4.Y, ind4.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[10/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[10/*Fuse.Drawing.SolidColor*/]))->Opacity()), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[10/*Fuse.Drawing.SolidColor*/]))->Color().W * uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[10/*Fuse.Drawing.SolidColor*/]))->Opacity()), opacity));
        _draw_66ce9a3.Uniform12(3, (element != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_66ce9a3_4_8_2, uPtr(element)->WorldTransform()) : LocalTransform_66ce9a3_4_8_2);
        _draw_66ce9a3.DrawArrays(6);
    }
    else if (uIs(brush, ::TYPES[11/*Fuse.Drawing.LinearGradient*/]))
    {
        ::g::Uno::Float4x4 LocalTransform_66d5e02_4_8_2 = ::g::Uno::Matrix::Mul10(DrawElement_LocalTransform_66c7544_4_8_2, ::g::Uno::Matrix::Scaling1(uPtr(element)->ActualSize().X, uPtr(element)->ActualSize().Y, 1.0f), DrawElement_LocalTransform_66c7544_4_8_3, DrawElement_LocalTransform_66c7544_4_8_4);
        ::g::Uno::Float2 angleSlope_66d5e02_13_18_8 = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[11/*Fuse.Drawing.LinearGradient*/]))->Angle()), ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[11/*Fuse.Drawing.LinearGradient*/]))->Angle()));
        float angleLen_66d5e02_13_17_9 = ::g::Uno::Math::Abs1(element->ActualSize().X * ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[11/*Fuse.Drawing.LinearGradient*/]))->Angle())) + ::g::Uno::Math::Abs1(element->ActualSize().Y * ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[11/*Fuse.Drawing.LinearGradient*/]))->Angle()));
        _draw_66d5e02.BlendEnabled(true);
        _draw_66d5e02.DepthTestEnabled(false);
        _draw_66d5e02.CullFace(uPtr(dc)->CullFace());
        _draw_66d5e02.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[11/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
        _draw_66d5e02.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[11/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
        _draw_66d5e02.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[11/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
        _draw_66d5e02.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[11/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
        _draw_66d5e02.Use();
        _draw_66d5e02.Attrib1(0, 2, DrawElement_VertexData_66d5e02_7_2_1, 8, 0);
        _draw_66d5e02.Uniform12(1, ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[6/*Fuse.IViewport*/])));
        _draw_66d5e02.Uniform2(2, uPtr(element)->ActualSize());
        _draw_66d5e02.Uniform2(3, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[11/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Division1(element->ActualSize(), 2.0f), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply1(angleSlope_66d5e02_13_18_8, angleLen_66d5e02_13_17_9), 2.0f)) : ::g::Uno::Float2__op_Multiply2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[11/*Fuse.Drawing.LinearGradient*/]))->StartPoint(), element->ActualSize()));
        _draw_66d5e02.Uniform2(4, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[11/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
        _draw_66d5e02.Uniform(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[11/*Fuse.Drawing.LinearGradient*/]))->Opacity());
        _draw_66d5e02.Uniform(6, opacity);
        _draw_66d5e02.Uniform12(7, (element != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_66d5e02_4_8_2, element->WorldTransform()) : LocalTransform_66d5e02_4_8_2);
        _draw_66d5e02.Uniform2(8, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[11/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleSlope_66d5e02_13_18_8 : ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[11/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[11/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), element->ActualSize())));
        _draw_66d5e02.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[11/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleLen_66d5e02_13_17_9 : ::g::Uno::Vector::Length(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[11/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[11/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), element->ActualSize())));
        _draw_66d5e02.Sampler2(10, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[11/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer());
        _draw_66d5e02.DrawArrays(6);
    }
    else if (uIs(brush, ::TYPES[13/*Fuse.Drawing.StaticSolidColor*/]))
    {
        ::g::Uno::Float4x4 LocalTransform_66dd261_4_8_2 = ::g::Uno::Matrix::Mul10(DrawElement_LocalTransform_66c7544_4_8_2, ::g::Uno::Matrix::Scaling1(uPtr(element)->ActualSize().X, uPtr(element)->ActualSize().Y, 1.0f), DrawElement_LocalTransform_66c7544_4_8_3, DrawElement_LocalTransform_66c7544_4_8_4);
        _draw_66ce9a3.BlendEnabled(true);
        _draw_66ce9a3.DepthTestEnabled(false);
        _draw_66ce9a3.CullFace(uPtr(dc)->CullFace());
        _draw_66ce9a3.BlendSrcRgb(DrawElement_BlendSrcRgb_66dd261_11_4_10);
        _draw_66ce9a3.BlendSrcAlpha(DrawElement_BlendSrcAlpha_66dd261_11_6_11);
        _draw_66ce9a3.BlendDstRgb(DrawElement_BlendDstRgb_66dd261_11_5_12);
        _draw_66ce9a3.BlendDstAlpha(DrawElement_BlendDstAlpha_66dd261_11_7_13);
        _draw_66ce9a3.Use();
        _draw_66ce9a3.Attrib1(0, 2, DrawElement_VertexData_66dd261_7_2_1, 8, 0);
        _draw_66ce9a3.Uniform12(1, ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[6/*Fuse.IViewport*/])));
        _draw_66ce9a3.Uniform10(2, ::g::Uno::Float4__op_Multiply1(::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind5 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[13/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind5.X, ind5.Y, ind5.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[13/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[13/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), opacity));
        _draw_66ce9a3.Uniform12(3, (element != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_66dd261_4_8_2, uPtr(element)->WorldTransform()) : LocalTransform_66dd261_4_8_2);
        _draw_66ce9a3.DrawArrays(6);
    }
}

// private generated void init_DrawCalls() [instance] :492
void SolidRectangle::init_DrawCalls()
{
    uStackFrame __("Fuse.Internal.Drawing.SolidRectangle", "init_DrawCalls()");
    uArray* Vertices_66c7544_7_1_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[14/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f));
    DrawElement_VertexData_66c7544_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_66c7544_7_1_0), 0);
    DrawElement_LocalTransform_66c7544_4_8_2 = ::g::Uno::Matrix::Translation(-::g::Uno::Float2__New1(0.0f).X, -::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    DrawElement_LocalTransform_66c7544_4_8_3 = ::g::Uno::Matrix::RotationZ(0.0f);
    DrawElement_LocalTransform_66c7544_4_8_4 = ::g::Uno::Matrix::Translation(::g::Uno::Float2__New1(0.0f).X, ::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    DrawElement_VertexData_66ce9a3_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_66c7544_7_1_0), 0);
    DrawElement_VertexData_66d5e02_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_66c7544_7_1_0), 0);
    DrawElement_VertexData_66dd261_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_66c7544_7_1_0), 0);
    DrawElement_BlendSrcRgb_66dd261_11_4_10 = ::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(0);
    DrawElement_BlendSrcAlpha_66dd261_11_6_11 = ::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(0);
    DrawElement_BlendDstRgb_66dd261_11_5_12 = ::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(0);
    DrawElement_BlendDstAlpha_66dd261_11_7_13 = ::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(0);
    _draw_66c7544 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControls_bundle::SolidRectangleafb52825());
    _draw_66ce9a3 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControls_bundle::SolidRectangleafb52826());
    _draw_66d5e02 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControls_bundle::SolidRectangleafb52827());
}

// public generated SolidRectangle New() [static] :492
SolidRectangle* SolidRectangle::New1()
{
    SolidRectangle* obj6 = (SolidRectangle*)uNew(SolidRectangle_typeof());
    obj6->ctor_();
    return obj6;
}
// }

}}}} // ::g::Fuse::Internal::Drawing
