// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.27.14/NativeViews/$.uno#5'.
// WARNING: Changes might be lost if you edit this file directly.

#include <CoreGraphics/CoreGraphics.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.iOS.NativeViews.GraphicsView.h>
#include <Fuse.iOS.NativeViews.NativeView.h>
#include <Fuse.iOS.NativeViews.NativeViewBlitter.h>
#include <Fuse.iOS.NativeViews.NativeViewHost.h>
#include <Fuse.iOS.NativeViews.NativeViewHost.ViewHost.h>
#include <Fuse.iOS.Transform.h>
#include <Fuse.IViewport.h>
#include <Fuse.Node.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <GLKit/GLKit.h>
#include <iOS.Foundation.NSObject.h>
#include <iOS.UIKit.UIControl.h>
#include <iOS.UIKit.UIView.h>
#include <ObjC.Object.h>
#include <OpenGL.GL.h>
#include <OpenGL.GLTextureHandle.h>
#include <OpenGL.GLTextureTarget.h>
#include <OpenGLES/EAGL.h>
#include <UIKit/UIKit.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Float.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <uObjC.Foreign.h>
static uType* TYPES[16];

namespace g{
namespace Fuse{
namespace iOS{
namespace NativeViews{

// internal sealed extern class NativeViewHost :588
// {
::g::Fuse::iOS::NativeViews::ParentNativeView_type* NativeViewHost_typeof()
{
    static uSStrong< ::g::Fuse::iOS::NativeViews::ParentNativeView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeViewHost);
    options.TypeSize = sizeof(::g::Fuse::iOS::NativeViews::ParentNativeView_type);
    type = (::g::Fuse::iOS::NativeViews::ParentNativeView_type*)uClassType::New("Fuse.iOS.NativeViews.NativeViewHost", options);
    type->SetBase(::g::Fuse::iOS::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::NativeViewHost_typeof()));
    type->fp_ctor_ = (void*)NativeViewHost__New1_fn;
    type->fp_Create = (void(*)(::g::Fuse::iOS::NativeViews::NativeView*, ::g::iOS::UIKit::UIView**))NativeViewHost__Create_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))NativeViewHost__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))NativeViewHost__OnUnrooted_fn;
    type->fp_OnUpdateTransform = (void(*)(::g::Fuse::iOS::NativeViews::NativeView*))NativeViewHost__OnUpdateTransform_fn;
    type->fp_get_Parent = (void(*)(::g::Fuse::iOS::NativeViews::NativeView*, ::g::Fuse::iOS::NativeViews::NativeView**))NativeViewHost__get_Parent_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    ::TYPES[0] = ::g::OpenGL::GLTextureHandle_typeof();
    ::TYPES[1] = ::g::iOS::UIKit::UIControl_typeof();
    ::TYPES[2] = ::g::Uno::Action_typeof();
    ::TYPES[3] = ::g::iOS::UIKit::UIView_typeof();
    ::TYPES[4] = ::g::Fuse::iOS::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::NativeViewHost_typeof());
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    ::TYPES[6] = ::g::Fuse::Controls::NativeViewHost_typeof();
    ::TYPES[7] = ::g::Fuse::IViewport_typeof();
    ::TYPES[8] = ::g::Fuse::Node_typeof();
    ::TYPES[9] = ::g::Fuse::iOS::NativeViews::NativeView_typeof();
    ::TYPES[10] = ::g::ObjC::Object_typeof();
    ::TYPES[11] = ::g::Uno::Int2_typeof();
    ::TYPES[12] = ::g::Fuse::iOS::NativeViews::NativeViewBlitter_typeof();
    ::TYPES[13] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[14] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Fuse::DrawContext_typeof());
    ::TYPES[15] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::iOS::NativeViews::ParentNativeView_type, interface0));
    type->SetFields(7,
        ::g::iOS::UIKit::UIControl_typeof(), offsetof(::g::Fuse::iOS::NativeViews::NativeViewHost, _group), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::iOS::NativeViews::NativeViewHost, _sizeCache), 0,
        ::g::OpenGL::GLTextureHandle_typeof(), offsetof(::g::Fuse::iOS::NativeViews::NativeViewHost, _textureHandle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::iOS::NativeViews::NativeViewHost, _visualValid), 0);
    return type;
}

// public generated NativeViewHost() :588
void NativeViewHost__ctor_3_fn(NativeViewHost* __this)
{
    __this->ctor_3();
}

// internal override sealed iOS.UIKit.UIView Create() :613
void NativeViewHost__Create_fn(NativeViewHost* __this, ::g::iOS::UIKit::UIView** __retval)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeViewHost", "Create()");
    __this->_group = NativeViewHost__ViewHost::New11(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)NativeViewHost__Invalidate_fn, __this));
    uPtr(__this->_group)->init();
    uPtr(__this->_group)->MultipleTouchEnabled(true);
    uPtr(__this->_group)->ClipsToBounds(false);
    uPtr(__this->_group)->Opaque(false);
    uPtr(__this->_group)->setTranslatesAutoresizingMaskIntoConstraints(false);
    return *__retval = __this->_group, void();
}

// private void DeleteTexture() :666
void NativeViewHost__DeleteTexture_fn(NativeViewHost* __this)
{
    __this->DeleteTexture();
}

// private void Draw(ObjC.Object uiviewHandle, int textureName, int width, int height, float pointDensity) :716
void NativeViewHost__Draw_fn(NativeViewHost* __this, uObject* uiviewHandle, int* textureName, int* width, int* height, float* pointDensity)
{
    __this->Draw(uiviewHandle, *textureName, *width, *height, *pointDensity);
}

// private void Invalidate() :653
void NativeViewHost__Invalidate_fn(NativeViewHost* __this)
{
    __this->Invalidate();
}

// public generated NativeViewHost New() :588
void NativeViewHost__New1_fn(NativeViewHost** __retval)
{
    *__retval = NativeViewHost::New1();
}

// private void OnRedraw(object sender, Fuse.DrawContext dc) :678
void NativeViewHost__OnRedraw_fn(NativeViewHost* __this, uObject* sender, ::g::Fuse::DrawContext* dc)
{
    __this->OnRedraw(sender, dc);
}

// private void OnRenderToTextureChanged(object sender, Uno.EventArgs args) :659
void NativeViewHost__OnRenderToTextureChanged_fn(NativeViewHost* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnRenderToTextureChanged(sender, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :631
void NativeViewHost__OnRooted_fn(NativeViewHost* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeViewHost", "OnRooted(Fuse.Node)");
    ::g::Fuse::iOS::NativeViews::ParentNativeView__OnRooted_fn(__this, parentNode);
    ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)NativeViewHost__Update_fn, __this), 0);
    uPtr((::g::Fuse::Controls::NativeViewHost*)__this->Control())->add_Redraw(uDelegate::New(::TYPES[14/*Uno.EventHandler<Fuse.DrawContext>*/], (void*)NativeViewHost__OnRedraw_fn, __this));
    uPtr((::g::Fuse::Controls::NativeViewHost*)__this->Control())->add_RenderToTextureChanged(uDelegate::New(::TYPES[15/*Uno.EventHandler*/], (void*)NativeViewHost__OnRenderToTextureChanged_fn, __this));
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :639
void NativeViewHost__OnUnrooted_fn(NativeViewHost* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeViewHost", "OnUnrooted(Fuse.Node)");
    uPtr((::g::Fuse::Controls::NativeViewHost*)__this->Control())->remove_RenderToTextureChanged(uDelegate::New(::TYPES[15/*Uno.EventHandler*/], (void*)NativeViewHost__OnRenderToTextureChanged_fn, __this));
    uPtr((::g::Fuse::Controls::NativeViewHost*)__this->Control())->remove_Redraw(uDelegate::New(::TYPES[14/*Uno.EventHandler<Fuse.DrawContext>*/], (void*)NativeViewHost__OnRedraw_fn, __this));
    ::g::Fuse::UpdateManager::RemoveAction(uDelegate::New(::TYPES[2/*Uno.Action*/], (void*)NativeViewHost__Update_fn, __this), 0);
    ::g::Fuse::iOS::NativeViews::ParentNativeView__OnUnrooted_fn(__this, parentNode);
    __this->DeleteTexture();
}

// protected override sealed void OnUpdateTransform() :755
void NativeViewHost__OnUpdateTransform_fn(NativeViewHost* __this)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeViewHost", "OnUpdateTransform()");

    if (::g::Uno::Float2__op_Inequality(__this->_sizeCache, __this->Size()))
    {
        ::g::Fuse::iOS::Transform::ApplyIdentity(__this->Handle());
        ::g::Fuse::iOS::Transform::SetAnchor(__this->Handle());
        ::g::Fuse::iOS::Transform::SetSize(__this->Handle(), __this->Size());
        __this->_sizeCache = __this->Size();
    }

    ::g::Uno::Float4x4 parentInverse = ::g::Uno::Matrix::Invert2(uPtr(uPtr(__this->Parent())->Node())->LocalTransform());
    ::g::Uno::Float4x4 transform = ::g::Uno::Matrix::Mul8(parentInverse, uPtr(__this->Node())->WorldTransform());
    __this->CompensateForScrollView(&transform);
    ::g::Fuse::iOS::Transform::Apply(__this->Handle(), transform);
    uPtr(__this->Handle())->Hidden(uPtr((::g::Fuse::Controls::NativeViewHost*)__this->Control())->RenderToTexture());
}

// public override sealed Fuse.iOS.NativeViews.NativeView get_Parent() :628
void NativeViewHost__get_Parent_fn(NativeViewHost* __this, ::g::Fuse::iOS::NativeViews::NativeView** __retval)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeViewHost", "get_Parent()");
    return *__retval = (__this->Node() != NULL) ? (::g::Fuse::iOS::NativeViews::GraphicsView*)::g::Fuse::iOS::NativeViews::GraphicsView::Find(uPtr(__this->Node())->Parent()) : NULL, void();
}

// private void Update() :648
void NativeViewHost__Update_fn(NativeViewHost* __this)
{
    __this->Update();
}

// public generated NativeViewHost() [instance] :588
void NativeViewHost::ctor_3()
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeViewHost", ".ctor()");
    _textureHandle = ::g::OpenGL::GLTextureHandle::Zero();
    ctor_2();
}

// private void DeleteTexture() [instance] :666
void NativeViewHost::DeleteTexture()
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeViewHost", "DeleteTexture()");

    if (::g::OpenGL::GLTextureHandle::op_Inequality(_textureHandle, ::g::OpenGL::GLTextureHandle::Zero()))
    {
        ::g::OpenGL::GL::DeleteTexture(_textureHandle);
        _textureHandle = ::g::OpenGL::GLTextureHandle::Zero();
    }
}

// private void Draw(ObjC.Object uiviewHandle, int textureName, int width, int height, float pointDensity) [instance] :716
void NativeViewHost::Draw(uObject* uiviewHandle, int textureName, int width, int height, float pointDensity)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeViewHost", "Draw(ObjC.Object,int,int,int,float)");
    @autoreleasepool
    {
        [] (::id uiviewHandle, int textureName, int width, int height, float pointDensity) -> void
        {
            ::UIView* view = (::UIView*)uiviewHandle;
            
            GLubyte* pixelBuffer = (GLubyte*)malloc(4 * width * height);
            CGColorSpaceRef colorSpace = CGColorSpaceCreateDeviceRGB();
            CGContextRef context = CGBitmapContextCreate(
            	pixelBuffer, 
            	width,
            	height, 
            	8,
            	4 * width, 
            	colorSpace, 
            	kCGImageAlphaPremultipliedLast | kCGBitmapByteOrder32Big);
            
            CGContextScaleCTM(context, (CGFloat)pointDensity, (CGFloat)pointDensity);
            
            CGColorSpaceRelease(colorSpace);
            
            UIGraphicsPushContext(context);
            [view drawViewHierarchyInRect:view.bounds afterScreenUpdates:YES];
            UIGraphicsPopContext();
            
            glTexImage2D(
            	GL_TEXTURE_2D,
            	0,
            	GL_RGBA,
            	width,
            	height,
            	0,
            	GL_RGBA,
            	GL_UNSIGNED_BYTE,
            	pixelBuffer);
            
            CGContextRelease(context);
            free(pixelBuffer);
        } (::g::ObjC::Helpers::GetHandle(uiviewHandle), textureName, width, height, pointDensity);
        
    }
    
}

// private void Invalidate() [instance] :653
void NativeViewHost::Invalidate()
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeViewHost", "Invalidate()");
    _visualValid = false;
    uPtr((::g::Fuse::Controls::NativeViewHost*)Control())->InvalidateVisual();
}

// private void OnRedraw(object sender, Fuse.DrawContext dc) [instance] :678
void NativeViewHost::OnRedraw(uObject* sender, ::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeViewHost", "OnRedraw(object,Fuse.DrawContext)");

    if (!uPtr((::g::Fuse::Controls::NativeViewHost*)Control())->RenderToTexture())
    {
        DeleteTexture();
        return;
    }

    float density = ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(uPtr((::g::Fuse::Controls::NativeViewHost*)Control())->Viewport()), ::TYPES[7/*Fuse.IViewport*/]));
    ::g::Uno::Int2 size = ::g::Uno::Int2__op_Explicit(::g::Uno::Float2__op_Multiply1(Size(), density));

    if (!_visualValid)
    {
        uPtr(Handle())->Hidden(false);
        DeleteTexture();
        _textureHandle = ::g::OpenGL::GL::CreateTexture();
        ::g::OpenGL::GL::BindTexture(3553, _textureHandle);
        Draw((uObject*)_group, ::g::OpenGL::GLTextureHandle::op_Explicit1(_textureHandle), size.X, size.Y, density);
        ::g::OpenGL::GL::BindTexture(3553, ::g::OpenGL::GLTextureHandle::Zero());
        _visualValid = true;
        uPtr(Handle())->Hidden(true);
    }

    uPtr(::g::Fuse::iOS::NativeViews::NativeViewBlitter::Singleton())->Blit(::g::Uno::Graphics::Texture2D::New2(_textureHandle, size, 1, 3), uPtr((::g::Fuse::Controls::NativeViewHost*)Control())->ActualPosition(), Size(), uPtr(dc)->GetLocalToClipTransform((::g::Fuse::Controls::NativeViewHost*)Control()));
}

// private void OnRenderToTextureChanged(object sender, Uno.EventArgs args) [instance] :659
void NativeViewHost::OnRenderToTextureChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeViewHost", "OnRenderToTextureChanged(object,Uno.EventArgs)");
    DeleteTexture();
    uPtr((::g::Fuse::Controls::NativeViewHost*)Control())->InvalidateVisual();
    _visualValid = false;
}

// private void Update() [instance] :648
void NativeViewHost::Update()
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeViewHost", "Update()");
    NotifyNewTransform();
}

// public generated NativeViewHost New() [static] :588
NativeViewHost* NativeViewHost::New1()
{
    NativeViewHost* obj1 = (NativeViewHost*)uNew(NativeViewHost_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

}}}} // ::g::Fuse::iOS::NativeViews
