// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.27.14/$.uno#6'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.TextControl.h>
#include <Fuse.DrawContext.h>
#include <Fuse.iOS.Blitter.h>
#include <Fuse.iOS.TextLayout.h>
#include <Fuse.iOS.TextRenderer.h>
#include <Fuse.IViewport.h>
#include <Fuse.Node.h>
#include <iOS.CoreGraphics.CGBitmapInfo.h>
#include <iOS.CoreGraphics.CGColorSpaceRef.h>
#include <iOS.CoreGraphics.CGContextRef.h>
#include <iOS.CoreGraphics.CGPoint.h>
#include <iOS.CoreGraphics.CGRect.h>
#include <iOS.CoreGraphics.Functions.h>
#include <iOS.Foundation._NSRange.h>
#include <iOS.UIKit.Functions.h>
#include <iOS.UIKit.NSLayoutManager.h>
#include <iOS.UIKit.NSTextContainer.h>
#include <OpenGL.GL.h>
#include <OpenGL.GLPixelFormat.h>
#include <OpenGL.GLPixelType.h>
#include <OpenGL.GLTextureHandle.h>
#include <OpenGL.GLTextureTarget.h>
#include <UIKit/NSAttributedString.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IntPtr.h>
#include <Uno.Math.h>
#include <Uno.String.h>
#include <Uno.ULong.h>
#include <Fuse.LayoutParams.h>
#include <Uno.Rect.h>
static uString* STRINGS[1];
static uType* TYPES[15];

namespace g{
namespace Fuse{
namespace iOS{

// internal sealed extern class TextRenderer :1200
// {
// static TextRenderer() :1200
static void TextRenderer__cctor__fn(uType* __type)
{
    TextRenderer::_colorSpace_ = ::g::iOS::CoreGraphics::Functions::CGColorSpaceCreateDeviceRGB();
}

TextRenderer_type* TextRenderer_typeof()
{
    static uSStrong<TextRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TextRenderer);
    options.TypeSize = sizeof(TextRenderer_type);
    type = (TextRenderer_type*)uClassType::New("Fuse.iOS.TextRenderer", options);
    type->fp_cctor_ = TextRenderer__cctor__fn;
    type->interface0.fp_GetContentSize = (void(*)(uObject*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))TextRenderer__GetContentSize_fn;
    type->interface0.fp_Draw = (void(*)(uObject*, ::g::Fuse::DrawContext*, ::g::Fuse::Node*))TextRenderer__Draw_fn;
    type->interface0.fp_Arrange = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Uno::Float2*))TextRenderer__Arrange_fn;
    type->interface0.fp_Invalidate = (void(*)(uObject*))TextRenderer__Invalidate_fn;
    type->interface0.fp_GetRenderBounds = (void(*)(uObject*, ::g::Uno::Rect*))TextRenderer__GetRenderBounds_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))TextRenderer__SoftDispose_fn;
    ::STRINGS[0] = uString::Const("Failed to create CGBitmapContext");
    ::TYPES[0] = ::g::Fuse::Controls::Graphics::ITextRenderer_typeof();
    ::TYPES[1] = ::g::Uno::Rect_typeof();
    ::TYPES[2] = ::g::Fuse::iOS::TextLayout_typeof();
    ::TYPES[3] = ::g::Uno::Int2_typeof();
    ::TYPES[4] = ::g::Uno::Graphics::Texture2D_typeof();
    ::TYPES[5] = ::g::Fuse::IViewport_typeof();
    ::TYPES[6] = ::g::Fuse::Node_typeof();
    ::TYPES[7] = ::g::Uno::IntPtr_typeof();
    ::TYPES[8] = ::g::Uno::ULong_typeof();
    ::TYPES[9] = ::g::Uno::Double_typeof();
    ::TYPES[10] = ::g::Uno::Float_typeof();
    ::TYPES[11] = ::g::Uno::Float2_typeof();
    ::TYPES[12] = ::g::OpenGL::GLTextureHandle_typeof();
    ::TYPES[13] = ::g::Fuse::iOS::Blitter_typeof();
    ::TYPES[14] = ::g::Fuse::LayoutParams_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Graphics::ITextRenderer_typeof(), offsetof(TextRenderer_type, interface0));
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::iOS::TextRenderer, _arrangePosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::iOS::TextRenderer, _arrangeSize), 0,
        ::g::Fuse::Controls::TextControl_typeof(), offsetof(::g::Fuse::iOS::TextRenderer, _control), 0,
        ::g::Fuse::iOS::TextLayout_typeof(), offsetof(::g::Fuse::iOS::TextRenderer, _measureLayout), 0,
        ::g::Fuse::iOS::TextLayout_typeof(), offsetof(::g::Fuse::iOS::TextRenderer, _textLayout), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(::g::Fuse::iOS::TextRenderer, _texture), 0,
        ::g::iOS::CoreGraphics::CGColorSpaceRef_typeof(), (uintptr_t)&::g::Fuse::iOS::TextRenderer::_colorSpace_, uFieldFlagsStatic);
    return type;
}

// public TextRenderer(Fuse.Controls.TextControl control) :1213
void TextRenderer__ctor__fn(TextRenderer* __this, ::g::Fuse::Controls::TextControl* control)
{
    __this->ctor_(control);
}

// public void Arrange(float2 position, float2 size) :1284
void TextRenderer__Arrange_fn(TextRenderer* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* size)
{
    __this->Arrange(*position, *size);
}

// public static Fuse.Controls.Graphics.ITextRenderer Create(Fuse.Controls.TextControl control) :1204
void TextRenderer__Create_fn(::g::Fuse::Controls::TextControl* control, uObject** __retval)
{
    *__retval = TextRenderer::Create(control);
}

// public void Draw(Fuse.DrawContext dc, Fuse.Node where) :1234
void TextRenderer__Draw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Node* where)
{
    __this->Draw(dc, where);
}

// public float2 GetContentSize(Fuse.LayoutParams lp) :1218
void TextRenderer__GetContentSize_fn(TextRenderer* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetContentSize(*lp);
}

// public Uno.Rect GetRenderBounds() :1314
void TextRenderer__GetRenderBounds_fn(TextRenderer* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->GetRenderBounds();
}

// public void Invalidate() :1292
void TextRenderer__Invalidate_fn(TextRenderer* __this)
{
    __this->Invalidate();
}

// private void InvalidateTexture() :1305
void TextRenderer__InvalidateTexture_fn(TextRenderer* __this)
{
    __this->InvalidateTexture();
}

// public TextRenderer New(Fuse.Controls.TextControl control) :1213
void TextRenderer__New1_fn(::g::Fuse::Controls::TextControl* control, TextRenderer** __retval)
{
    *__retval = TextRenderer::New1(control);
}

// public void SoftDispose() :1300
void TextRenderer__SoftDispose_fn(TextRenderer* __this)
{
    __this->SoftDispose();
}

app::CGColorSpaceRef* TextRenderer::_colorSpace_;

// public TextRenderer(Fuse.Controls.TextControl control) [instance] :1213
void TextRenderer::ctor_(::g::Fuse::Controls::TextControl* control)
{
    uStackFrame __("Fuse.iOS.TextRenderer", ".ctor(Fuse.Controls.TextControl)");
    _textLayout = ::g::Fuse::iOS::TextLayout::New1();
    _control = control;
}

// public void Arrange(float2 position, float2 size) [instance] :1284
void TextRenderer::Arrange(::g::Uno::Float2 position, ::g::Uno::Float2 size)
{
    uStackFrame __("Fuse.iOS.TextRenderer", "Arrange(float2,float2)");
    _arrangePosition = position;
    _arrangeSize = size;
    Invalidate();
    uPtr(_textLayout)->UpdateLayout(_control, size, false);
}

// public void Draw(Fuse.DrawContext dc, Fuse.Node where) [instance] :1234
void TextRenderer::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Node* where)
{
    uStackFrame __("Fuse.iOS.TextRenderer", "Draw(Fuse.DrawContext,Fuse.Node)");

    if (uPtr(_textLayout)->UpdateLayout(_control, _arrangeSize, false))
        InvalidateTexture();

    ::g::Uno::Int2 pixelSize = ::g::Uno::Int2__op_Explicit(::g::Uno::Math::Ceil2(uPtr(_textLayout)->PixelBounds.Size()));

    if ((((pixelSize.X < 1) || (pixelSize.Y < 1)) || (pixelSize.X > ::g::Uno::Graphics::Texture2D::MaxSize())) || (pixelSize.Y > ::g::Uno::Graphics::Texture2D::MaxSize()))
        return;

    ::g::Uno::Float2 pointSize = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(pixelSize), ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[5/*Fuse.IViewport*/])));

    if (_texture == NULL)
    {
        void* textureBuffer = malloc(pixelSize.X * pixelSize.Y * 4);

        if (::g::Uno::IntPtr::op_Equality(textureBuffer, ::g::Uno::IntPtr::Zero()))
            return;

        uint32_t flags = 8194;
        app::CGContextRef* imageContext = ::g::iOS::CoreGraphics::Functions::CGBitmapContextCreate(textureBuffer, (uint64_t)pixelSize.X, (uint64_t)pixelSize.Y, 8ULL, (uint64_t)(pixelSize.X * 4), TextRenderer::_colorSpace(), flags);

        if (::g::Uno::IntPtr::op_Equality(imageContext, ::g::Uno::IntPtr::Zero()))
            U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Failed to c...*/]));

        ::g::iOS::UIKit::Functions::UIGraphicsPushContext(imageContext);
        ::g::iOS::CoreGraphics::CGRect rect = ::g::iOS::CoreGraphics::Functions::CGRectMake(0.0, 0.0, (double)pixelSize.X, (double)pixelSize.Y);
        ::g::iOS::CoreGraphics::Functions::CGContextClearRect(imageContext, rect);
        ::g::iOS::Foundation::_NSRange glyphRange = uPtr(uPtr(_textLayout)->LayoutManager)->glyphRangeForTextContainer(uPtr(_textLayout)->TextContainer);
        ::g::iOS::CoreGraphics::CGPoint pos = ::g::iOS::CoreGraphics::Functions::CGPointMake((double)-uPtr(_textLayout)->PixelBounds.Position().X, (double)-uPtr(_textLayout)->PixelBounds.Position().Y);
        uPtr(uPtr(_textLayout)->LayoutManager)->drawGlyphsForGlyphRangeAtPoint(glyphRange, pos);
        ::g::iOS::UIKit::Functions::UIGraphicsPopContext();
        ::g::iOS::CoreGraphics::Functions::CGContextRelease(imageContext);
        uint32_t textureHandle = ::g::OpenGL::GL::CreateTexture();
        ::g::OpenGL::GL::BindTexture(3553, textureHandle);
        ::g::OpenGL::GL::TexImage2D1(3553, 0, 6408, pixelSize.X, pixelSize.Y, 0, 32993, 5121, textureBuffer);
        free(textureBuffer);
        textureBuffer = ::g::Uno::IntPtr::Zero();
        ::g::OpenGL::GL::BindTexture(3553, ::g::OpenGL::GLTextureHandle::Zero());
        _texture = ::g::Uno::Graphics::Texture2D::New2(textureHandle, pixelSize, 1, 3);
    }

    uPtr(::g::Fuse::iOS::Blitter::Singleton())->Blit(dc, where, _texture, ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Division1(uPtr(_textLayout)->PixelBounds.Position(), ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[5/*Fuse.IViewport*/]))), _arrangePosition), pointSize);
}

// public float2 GetContentSize(Fuse.LayoutParams lp) [instance] :1218
::g::Uno::Float2 TextRenderer::GetContentSize(::g::Fuse::LayoutParams lp)
{
    uStackFrame __("Fuse.iOS.TextRenderer", "GetContentSize(Fuse.LayoutParams)");

    if (_measureLayout == NULL)
        _measureLayout = ::g::Fuse::iOS::TextLayout::New1();

    ::g::Uno::Float2 size = ::g::Uno::Float2__New2(lp.HasX() ? lp.X() : FLT_INF, lp.HasY() ? lp.Y() : FLT_INF);

    if (lp.HasMaxX())
        size.X = ::g::Uno::Math::Min1(size.X, lp.MaxX());

    if (lp.HasMaxY())
        size.Y = ::g::Uno::Math::Min1(size.Y, lp.MaxY());

    uPtr(_measureLayout)->UpdateLayout(_control, size, true);
    return ::g::Uno::Float2__op_Division1(uPtr(_measureLayout)->PixelBounds.Size(), ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[5/*Fuse.IViewport*/])));
}

// public Uno.Rect GetRenderBounds() [instance] :1314
::g::Uno::Rect TextRenderer::GetRenderBounds()
{
    uStackFrame __("Fuse.iOS.TextRenderer", "GetRenderBounds()");
    uPtr(_textLayout)->UpdateLayout(_control, _arrangeSize, false);
    return ::g::Uno::Rect__Translate(::g::Uno::Rect__New2(::g::Uno::Float2__op_Division1(uPtr(_textLayout)->PixelBounds.Position(), ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[5/*Fuse.IViewport*/]))), ::g::Uno::Float2__op_Division1(uPtr(_textLayout)->PixelBounds.Size(), ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[5/*Fuse.IViewport*/])))), _arrangePosition);
}

// public void Invalidate() [instance] :1292
void TextRenderer::Invalidate()
{
    uStackFrame __("Fuse.iOS.TextRenderer", "Invalidate()");
    uPtr(_textLayout)->Invalidate();

    if (_measureLayout != NULL)
        uPtr(_measureLayout)->Invalidate();

    InvalidateTexture();
}

// private void InvalidateTexture() [instance] :1305
void TextRenderer::InvalidateTexture()
{
    uStackFrame __("Fuse.iOS.TextRenderer", "InvalidateTexture()");

    if (_texture != NULL)
    {
        uPtr(_texture)->Dispose();
        _texture = NULL;
    }
}

// public void SoftDispose() [instance] :1300
void TextRenderer::SoftDispose()
{
    uStackFrame __("Fuse.iOS.TextRenderer", "SoftDispose()");
    InvalidateTexture();
}

// public static Fuse.Controls.Graphics.ITextRenderer Create(Fuse.Controls.TextControl control) [static] :1204
uObject* TextRenderer::Create(::g::Fuse::Controls::TextControl* control)
{
    uStackFrame __("Fuse.iOS.TextRenderer", "Create(Fuse.Controls.TextControl)");
    TextRenderer_typeof()->Init();
    return (uObject*)TextRenderer::New1(control);
}

// public TextRenderer New(Fuse.Controls.TextControl control) [static] :1213
TextRenderer* TextRenderer::New1(::g::Fuse::Controls::TextControl* control)
{
    TextRenderer* obj1 = (TextRenderer*)uNew(TextRenderer_typeof());
    obj1->ctor_(control);
    return obj1;
}
// }

}}} // ::g::Fuse::iOS
