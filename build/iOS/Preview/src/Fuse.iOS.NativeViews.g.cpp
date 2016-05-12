// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseiOS_bundle.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.ScrollPositionChangedArgs.h>
#include <Fuse.Controls.ScrollPositionChangedHandler.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.iOS.Controls.ControlProperties.h>
#include <Fuse.iOS.Controls.Element.h>
#include <Fuse.iOS.InputDispatch.h>
#include <Fuse.iOS.iOSExtensions.h>
#include <Fuse.iOS.NativeViews.ContentControl.h>
#include <Fuse.iOS.NativeViews.GenericNativeView.h>
#include <Fuse.iOS.NativeViews.GraphicsView.h>
#include <Fuse.iOS.NativeViews.LeafNativeView.h>
#include <Fuse.iOS.NativeViews.NativeView.h>
#include <Fuse.iOS.NativeViews.NativeViewBlitter.h>
#include <Fuse.iOS.NativeViews.NativeViewHost.ViewHost.h>
#include <Fuse.iOS.NativeViews.ParentControl.h>
#include <Fuse.iOS.NativeViews.ParentNativeView-1.h>
#include <Fuse.iOS.NativeViews.ScrollView.h>
#include <Fuse.iOS.RootView.h>
#include <Fuse.iOS.Transform.h>
#include <Fuse.IViewport.h>
#include <Fuse.Node.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.RootViewport.h>
#include <Fuse.StyleProperty-2.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <iOS.CoreGraphics.CGPoint.h>
#include <iOS.CoreGraphics.CGRect.h>
#include <iOS.CoreGraphics.CGSize.h>
#include <iOS.Foundation.NSObject.h>
#include <iOS.GLKit.GLKView.h>
#include <iOS.GLKit.GLKViewDrawableDepthFormat.h>
#include <iOS.OpenGLES.EAGLContext.h>
#include <iOS.UIKit.UIColor.h>
#include <iOS.UIKit.UIControl.h>
#include <iOS.UIKit.UIScrollView.h>
#include <iOS.UIKit.UIView.h>
#include <ObjC.Bindings.Object.h>
#include <ObjC.ID.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
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
#include <Uno.Recti.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
static uString* STRINGS[1];
static uType* TYPES[37];

namespace g{
namespace Fuse{
namespace iOS{
namespace NativeViews{

// /usr/local/share/uno/Packages/Fuse.iOS/0.27.14/NativeViews/$.uno
// ----------------------------------------------------------------

// internal sealed extern class ContentControl :18
// {
::g::Fuse::iOS::NativeViews::ParentNativeView_type* ContentControl_typeof()
{
    static uSStrong< ::g::Fuse::iOS::NativeViews::ParentNativeView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ContentControl);
    options.TypeSize = sizeof(::g::Fuse::iOS::NativeViews::ParentNativeView_type);
    type = (::g::Fuse::iOS::NativeViews::ParentNativeView_type*)uClassType::New("Fuse.iOS.NativeViews.ContentControl", options);
    type->SetBase(::g::Fuse::iOS::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::ContentControl_typeof()));
    type->fp_ctor_ = (void*)ContentControl__New1_fn;
    type->fp_Create = (void(*)(::g::Fuse::iOS::NativeViews::NativeView*, ::g::iOS::UIKit::UIView**))ContentControl__Create_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    ::TYPES[0] = ::g::iOS::UIKit::UIView_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::iOS::NativeViews::ParentNativeView_type, interface0));
    type->SetFields(7,
        ::g::iOS::UIKit::UIControl_typeof(), offsetof(::g::Fuse::iOS::NativeViews::ContentControl, _group), 0);
    return type;
}

// public generated ContentControl() :18
void ContentControl__ctor_3_fn(ContentControl* __this)
{
    __this->ctor_3();
}

// internal override sealed iOS.UIKit.UIView Create() :22
void ContentControl__Create_fn(ContentControl* __this, ::g::iOS::UIKit::UIView** __retval)
{
    uStackFrame __("Fuse.iOS.NativeViews.ContentControl", "Create()");
    __this->_group = ::g::iOS::UIKit::UIControl::New9();
    uPtr(__this->_group)->init();
    uPtr(__this->_group)->MultipleTouchEnabled(true);
    uPtr(__this->_group)->ClipsToBounds(false);
    uPtr(__this->_group)->Opaque(false);
    uPtr(__this->_group)->setTranslatesAutoresizingMaskIntoConstraints(false);
    return *__retval = __this->_group, void();
}

// public generated ContentControl New() :18
void ContentControl__New1_fn(ContentControl** __retval)
{
    *__retval = ContentControl::New1();
}

// public generated ContentControl() [instance] :18
void ContentControl::ctor_3()
{
    uStackFrame __("Fuse.iOS.NativeViews.ContentControl", ".ctor()");
    ctor_2();
}

// public generated ContentControl New() [static] :18
ContentControl* ContentControl::New1()
{
    ContentControl* obj1 = (ContentControl*)uNew(ContentControl_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.27.14/NativeViews/$.uno#1
// ------------------------------------------------------------------

// internal sealed extern class GenericNativeView :46
// {
::g::Fuse::iOS::NativeViews::NativeView_type* GenericNativeView_typeof()
{
    static uSStrong< ::g::Fuse::iOS::NativeViews::NativeView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GenericNativeView);
    options.TypeSize = sizeof(::g::Fuse::iOS::NativeViews::NativeView_type);
    type = (::g::Fuse::iOS::NativeViews::NativeView_type*)uClassType::New("Fuse.iOS.NativeViews.GenericNativeView", options);
    type->SetBase(::g::Fuse::iOS::NativeViews::NativeView_typeof());
    type->fp_ctor_ = (void*)GenericNativeView__New1_fn;
    type->fp_Create = (void(*)(::g::Fuse::iOS::NativeViews::NativeView*, ::g::iOS::UIKit::UIView**))GenericNativeView__Create_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::iOS::NativeViews::NativeView*, ::g::Uno::Float2*))GenericNativeView__get_Size_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    ::TYPES[1] = ::g::Fuse::iOS::NativeViews::NativeView_typeof();
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::iOS::NativeViews::NativeView_type, interface0));
    type->SetFields(7);
    return type;
}

// public generated GenericNativeView() :46
void GenericNativeView__ctor_2_fn(GenericNativeView* __this)
{
    __this->ctor_2();
}

// internal override sealed iOS.UIKit.UIView Create() :48
void GenericNativeView__Create_fn(GenericNativeView* __this, ::g::iOS::UIKit::UIView** __retval)
{
    uStackFrame __("Fuse.iOS.NativeViews.GenericNativeView", "Create()");
    ::g::iOS::UIKit::UIView* v = ::g::iOS::UIKit::UIView::New7();
    v->init();
    return *__retval = v, void();
}

// public generated GenericNativeView New() :46
void GenericNativeView__New1_fn(GenericNativeView** __retval)
{
    *__retval = GenericNativeView::New1();
}

// protected override sealed float2 get_Size() :55
void GenericNativeView__get_Size_fn(GenericNativeView* __this, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.iOS.NativeViews.GenericNativeView", "get_Size()");
    return *__retval = (__this->FuseControl() != NULL) ? uPtr(__this->FuseControl())->ActualSize() : ::g::Uno::Float2__New1(0.0f), void();
}

// public generated GenericNativeView() [instance] :46
void GenericNativeView::ctor_2()
{
    uStackFrame __("Fuse.iOS.NativeViews.GenericNativeView", ".ctor()");
    ctor_1();
}

// public generated GenericNativeView New() [static] :46
GenericNativeView* GenericNativeView::New1()
{
    GenericNativeView* obj1 = (GenericNativeView*)uNew(GenericNativeView_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.27.14/NativeViews/$.uno#2
// ------------------------------------------------------------------

// public sealed extern class GraphicsView :84
// {
::g::Fuse::iOS::NativeViews::ParentNativeView_type* GraphicsView_typeof()
{
    static uSStrong< ::g::Fuse::iOS::NativeViews::ParentNativeView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GraphicsView);
    options.TypeSize = sizeof(::g::Fuse::iOS::NativeViews::ParentNativeView_type);
    type = (::g::Fuse::iOS::NativeViews::ParentNativeView_type*)uClassType::New("Fuse.iOS.NativeViews.GraphicsView", options);
    type->SetBase(::g::Fuse::iOS::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::GraphicsView_typeof()));
    type->fp_ctor_ = (void*)GraphicsView__New1_fn;
    type->fp_Attach = (void(*)(::g::Fuse::iOS::NativeViews::ParentNativeView*))GraphicsView__Attach_fn;
    type->fp_ChildRooted = (void(*)(::g::Fuse::iOS::NativeViews::NativeView*, ::g::Fuse::iOS::NativeViews::NativeView*))GraphicsView__ChildRooted_fn;
    type->fp_ChildUnrooted = (void(*)(::g::Fuse::iOS::NativeViews::NativeView*, ::g::Fuse::iOS::NativeViews::NativeView*))GraphicsView__ChildUnrooted_fn;
    type->fp_Create = (void(*)(::g::Fuse::iOS::NativeViews::NativeView*, ::g::iOS::UIKit::UIView**))GraphicsView__Create_fn;
    type->fp_Detach = (void(*)(::g::Fuse::iOS::NativeViews::ParentNativeView*))GraphicsView__Detach_fn;
    type->fp_get_HitTestHandle = (void(*)(::g::Fuse::iOS::NativeViews::NativeView*, ::g::iOS::UIKit::UIView**))GraphicsView__get_HitTestHandle_fn;
    type->fp_OnUpdateTransform = (void(*)(::g::Fuse::iOS::NativeViews::NativeView*))GraphicsView__OnUpdateTransform_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    ::TYPES[3] = ::g::Fuse::IViewport_typeof();
    ::TYPES[4] = ::g::Fuse::iOS::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::GraphicsView_typeof());
    ::TYPES[5] = ::g::Fuse::Controls::GraphicsView_typeof();
    ::TYPES[6] = ::g::Uno::EventHandler_typeof();
    ::TYPES[1] = ::g::Fuse::iOS::NativeViews::NativeView_typeof();
    ::TYPES[7] = ::g::ObjC::Bindings::Object_typeof();
    ::TYPES[8] = ::g::iOS::GLKit::GLKView_typeof();
    ::TYPES[0] = ::g::iOS::UIKit::UIView_typeof();
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[9] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::iOS::NativeViews::ParentNativeView_type, interface0));
    type->SetFields(7,
        ::g::iOS::UIKit::UIView_typeof(), offsetof(::g::Fuse::iOS::NativeViews::GraphicsView, _container), 0,
        ::g::Fuse::DrawContext_typeof(), offsetof(::g::Fuse::iOS::NativeViews::GraphicsView, _dc), 0,
        ::g::iOS::GLKit::GLKView_typeof(), offsetof(::g::Fuse::iOS::NativeViews::GraphicsView, _glkView), 0,
        ::g::iOS::UIKit::UIControl_typeof(), offsetof(::g::Fuse::iOS::NativeViews::GraphicsView, _hitSurface), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GraphicsView__New1_fn, 0, true, GraphicsView_typeof(), 0));
    return type;
}

// public generated GraphicsView() :84
void GraphicsView__ctor_3_fn(GraphicsView* __this)
{
    __this->ctor_3();
}

// protected override sealed void Attach() :124
void GraphicsView__Attach_fn(GraphicsView* __this)
{
    uStackFrame __("Fuse.iOS.NativeViews.GraphicsView", "Attach()");
    __this->Create();
    __this->_dc = ::g::Fuse::DrawContext::New1((uObject*)((::g::Fuse::Controls::GraphicsView*)__this->Control()));
    uPtr((::g::Fuse::Controls::GraphicsView*)__this->Control())->add_Redraw(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)GraphicsView__DrawFrame_fn, __this));
}

// protected override sealed void ChildRooted(Fuse.iOS.NativeViews.NativeView child) :138
void GraphicsView__ChildRooted_fn(GraphicsView* __this, ::g::Fuse::iOS::NativeViews::NativeView* child)
{
    uStackFrame __("Fuse.iOS.NativeViews.GraphicsView", "ChildRooted(Fuse.iOS.NativeViews.NativeView)");
    uPtr(__this->_hitSurface)->addSubview(uPtr(child)->Handle());
}

// protected override sealed void ChildUnrooted(Fuse.iOS.NativeViews.NativeView child) :143
void GraphicsView__ChildUnrooted_fn(GraphicsView* __this, ::g::Fuse::iOS::NativeViews::NativeView* child)
{
    uStackFrame __("Fuse.iOS.NativeViews.GraphicsView", "ChildUnrooted(Fuse.iOS.NativeViews.NativeView)");
    uPtr(uPtr(child)->Handle())->removeFromSuperview();
}

// internal override sealed iOS.UIKit.UIView Create() :93
void GraphicsView__Create_fn(GraphicsView* __this, ::g::iOS::UIKit::UIView** __retval)
{
    uStackFrame __("Fuse.iOS.NativeViews.GraphicsView", "Create()");

    if (::g::ObjC::ID::op_Equality(::g::ObjC::Bindings::Object::op_Implicit(__this->_glkView), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
    {
        __this->_glkView = ::g::iOS::GLKit::GLKView::New9();
        uPtr(__this->_glkView)->init();
        uPtr(__this->_glkView)->EnableSetNeedsDisplay(true);
        uPtr(__this->_glkView)->BackgroundColor(::g::Fuse::iOS::iOSExtensions::ToUIColor(::g::Uno::Float4__New1(0.0f)));
        uPtr(__this->_glkView)->DrawableDepthFormat(1);
        __this->_hitSurface = ::g::iOS::UIKit::UIControl::New9();
        uPtr(__this->_hitSurface)->init();
        uPtr(__this->_hitSurface)->MultipleTouchEnabled(true);
        uPtr(__this->_hitSurface)->BackgroundColor(::g::Fuse::iOS::iOSExtensions::ToUIColor(::g::Uno::Float4__New1(0.0f)));
        uPtr(__this->_hitSurface)->Opaque(false);
        __this->_container = ::g::iOS::UIKit::UIView::New7();
        uPtr(__this->_container)->init();
        uPtr(__this->_container)->BackgroundColor(::g::Fuse::iOS::iOSExtensions::ToUIColor(::g::Uno::Float4__New1(0.0f)));
        uPtr(__this->_container)->addSubview(__this->_glkView);
        uPtr(__this->_container)->addSubview(__this->_hitSurface);
        uPtr(__this->_container)->bringSubviewToFront(__this->_hitSurface);
    }

    return *__retval = __this->_container, void();
}

// protected override sealed void Detach() :131
void GraphicsView__Detach_fn(GraphicsView* __this)
{
    uStackFrame __("Fuse.iOS.NativeViews.GraphicsView", "Detach()");
    uPtr((::g::Fuse::Controls::GraphicsView*)__this->Control())->remove_Redraw(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)GraphicsView__DrawFrame_fn, __this));
    uPtr(__this->_glkView)->deleteDrawable();
    __this->_dc = NULL;
}

// private void DrawFrame(object sender, Uno.EventArgs args) :165
void GraphicsView__DrawFrame_fn(GraphicsView* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->DrawFrame(sender, args);
}

// internal static Fuse.iOS.NativeViews.GraphicsView Find(Fuse.Node node) :207
void GraphicsView__Find_fn(::g::Fuse::Node* node, GraphicsView** __retval)
{
    *__retval = GraphicsView::Find(node);
}

// internal override sealed iOS.UIKit.UIView get_HitTestHandle() :121
void GraphicsView__get_HitTestHandle_fn(GraphicsView* __this, ::g::iOS::UIKit::UIView** __retval)
{
    uStackFrame __("Fuse.iOS.NativeViews.GraphicsView", "get_HitTestHandle()");
    return *__retval = __this->_hitSurface, void();
}

// public generated GraphicsView New() :84
void GraphicsView__New1_fn(GraphicsView** __retval)
{
    *__retval = GraphicsView::New1();
}

// protected override sealed void OnUpdateTransform() :148
void GraphicsView__OnUpdateTransform_fn(GraphicsView* __this)
{
    uStackFrame __("Fuse.iOS.NativeViews.GraphicsView", "OnUpdateTransform()");
    ::g::Fuse::iOS::Transform::ApplyIdentity(__this->Handle());
    ::g::Fuse::iOS::Transform::SetAnchor(__this->Handle());
    ::g::Fuse::iOS::Transform::SetAnchor(__this->_glkView);
    ::g::Fuse::iOS::Transform::SetAnchor(__this->_hitSurface);
    ::g::Fuse::iOS::Transform::SetSize(__this->Handle(), __this->Size());
    ::g::Fuse::iOS::Transform::SetSize(__this->_glkView, __this->Size());
    ::g::Fuse::iOS::Transform::SetSize(__this->_hitSurface, __this->Size());
    ::g::Fuse::iOS::Transform::Apply(__this->Handle(), uPtr(__this->Node())->LocalTransform());
    uPtr(__this->Handle())->Hidden(false);
}

// public generated GraphicsView() [instance] :84
void GraphicsView::ctor_3()
{
    uStackFrame __("Fuse.iOS.NativeViews.GraphicsView", ".ctor()");
    ctor_2();
}

// private void DrawFrame(object sender, Uno.EventArgs args) [instance] :165
void GraphicsView::DrawFrame(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.iOS.NativeViews.GraphicsView", "DrawFrame(object,Uno.EventArgs)");

    if (::g::ObjC::ID::op_Equality(::g::ObjC::Bindings::Object::op_Implicit(_glkView), ::g::ObjC::Bindings::Object::op_Implicit(NULL)) || (((::g::Fuse::Controls::GraphicsView*)Control()) == NULL))
        return;

    uPtr(_glkView)->setContext(::g::iOS::OpenGLES::EAGLContext::_currentContext());
    uPtr(_glkView)->bindDrawable();
    ::g::Uno::Float2 size = uPtr((::g::Fuse::Controls::GraphicsView*)Control())->ActualSize();
    float density = ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(uPtr((::g::Fuse::Controls::GraphicsView*)Control())->Viewport()), ::TYPES[3/*Fuse.IViewport*/]));
    int width = uPtr(_glkView)->drawableWidth();
    int height = uPtr(_glkView)->drawableHeight();

    if ((width < 1) || (height < 1))
        return;

    uPtr(_dc)->CaptureRootbuffer();
    uPtr(_dc)->PushViewport((uObject*)((::g::Fuse::Controls::GraphicsView*)Control()));
    uPtr(_dc)->PushScissor(::g::Uno::Recti__New1(0, 0, width, height));
    uPtr(_dc)->Clear(uPtr((::g::Fuse::Controls::GraphicsView*)Control())->Color(), 1.0f);
    double startTime;
    uPtr((::g::Fuse::Controls::GraphicsView*)Control())->Draw(_dc);
    uPtr(_dc)->PopScissor();
    uPtr(_dc)->PopViewport();
    uPtr(_dc)->ReleaseRootbuffer();
    uPtr(_glkView)->display();
}

// internal static Fuse.iOS.NativeViews.GraphicsView Find(Fuse.Node node) [static] :207
GraphicsView* GraphicsView::Find(::g::Fuse::Node* node)
{
    uStackFrame __("Fuse.iOS.NativeViews.GraphicsView", "Find(Fuse.Node)");
    GraphicsView* ind1;
    return (node != NULL) ? (ind1 = uAs<GraphicsView*>(::g::Fuse::iOS::NativeViews::NativeView::GetFrom(node), GraphicsView_typeof()), (ind1 != NULL) ? ind1 : (GraphicsView*)GraphicsView::Find(uPtr(node)->Parent())) : NULL;
}

// public generated GraphicsView New() [static] :84
GraphicsView* GraphicsView::New1()
{
    GraphicsView* obj2 = (GraphicsView*)uNew(GraphicsView_typeof());
    obj2->ctor_3();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.27.14/NativeViews/$.uno#3
// ------------------------------------------------------------------

// internal sealed extern class LeafNativeView :225
// {
::g::Fuse::iOS::NativeViews::NativeView_type* LeafNativeView_typeof()
{
    static uSStrong< ::g::Fuse::iOS::NativeViews::NativeView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LeafNativeView);
    options.TypeSize = sizeof(::g::Fuse::iOS::NativeViews::NativeView_type);
    type = (::g::Fuse::iOS::NativeViews::NativeView_type*)uClassType::New("Fuse.iOS.NativeViews.LeafNativeView", options);
    type->SetBase(::g::Fuse::iOS::NativeViews::NativeView_typeof());
    type->fp_ctor_ = (void*)LeafNativeView__New1_fn;
    type->fp_Create = (void(*)(::g::Fuse::iOS::NativeViews::NativeView*, ::g::iOS::UIKit::UIView**))LeafNativeView__Create_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::iOS::NativeViews::NativeView*, ::g::Uno::Float2*))LeafNativeView__get_Size_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    ::TYPES[10] = ::g::Fuse::iOS::Controls::Element_typeof();
    ::TYPES[1] = ::g::Fuse::iOS::NativeViews::NativeView_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::iOS::NativeViews::NativeView_type, interface0));
    type->SetFields(7);
    return type;
}

// public generated LeafNativeView() :225
void LeafNativeView__ctor_2_fn(LeafNativeView* __this)
{
    __this->ctor_2();
}

// internal override sealed iOS.UIKit.UIView Create() :229
void LeafNativeView__Create_fn(LeafNativeView* __this, ::g::iOS::UIKit::UIView** __retval)
{
    uStackFrame __("Fuse.iOS.NativeViews.LeafNativeView", "Create()");
    return *__retval = uPtr(__this->LeafElement())->Create(), void();
}

// private Fuse.iOS.Controls.Element get_LeafElement() :227
void LeafNativeView__get_LeafElement_fn(LeafNativeView* __this, ::g::Fuse::iOS::Controls::Element** __retval)
{
    *__retval = __this->LeafElement();
}

// public generated LeafNativeView New() :225
void LeafNativeView__New1_fn(LeafNativeView** __retval)
{
    *__retval = LeafNativeView::New1();
}

// protected override sealed float2 get_Size() :234
void LeafNativeView__get_Size_fn(LeafNativeView* __this, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.iOS.NativeViews.LeafNativeView", "get_Size()");
    return *__retval = uPtr(__this->LeafElement())->ActualSize(), void();
}

// public generated LeafNativeView() [instance] :225
void LeafNativeView::ctor_2()
{
    uStackFrame __("Fuse.iOS.NativeViews.LeafNativeView", ".ctor()");
    ctor_1();
}

// private Fuse.iOS.Controls.Element get_LeafElement() [instance] :227
::g::Fuse::iOS::Controls::Element* LeafNativeView::LeafElement()
{
    uStackFrame __("Fuse.iOS.NativeViews.LeafNativeView", "get_LeafElement()");
    return uAs< ::g::Fuse::iOS::Controls::Element*>(Node(), ::TYPES[10/*Fuse.iOS.Controls.Element*/]);
}

// public generated LeafNativeView New() [static] :225
LeafNativeView* LeafNativeView::New1()
{
    LeafNativeView* obj1 = (LeafNativeView*)uNew(LeafNativeView_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.27.14/NativeViews/$.uno#4
// ------------------------------------------------------------------

// public abstract extern class NativeView :261
// {
// static NativeView() :261
static void NativeView__cctor__fn(uType* __type)
{
    NativeView::_viewHandle_ = ::g::Fuse::Properties::CreateHandle();
    NativeView::_viewMap_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[11/*Uno.Collections.Dictionary<iOS.UIKit.UIView, Fuse.Node>*/]));
}

NativeView_type* NativeView_typeof()
{
    static uSStrong<NativeView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeView);
    options.TypeSize = sizeof(NativeView_type);
    type = (NativeView_type*)uClassType::New("Fuse.iOS.NativeViews.NativeView", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_cctor_ = NativeView__cctor__fn;
    type->fp_ChildRooted = NativeView__ChildRooted_fn;
    type->fp_ChildUnrooted = NativeView__ChildUnrooted_fn;
    type->fp_get_HitTestHandle = NativeView__get_HitTestHandle_fn;
    type->fp_NotifyNewSize = NativeView__NotifyNewSize_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))NativeView__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))NativeView__OnUnrooted_fn;
    type->fp_OnUpdateTransform = NativeView__OnUpdateTransform_fn;
    type->fp_get_Parent = NativeView__get_Parent_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    ::STRINGS[0] = uString::Const(" must have a native parent view. Theme provides no native view for parent type ");
    ::TYPES[11] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::iOS::UIKit::UIView_typeof(), ::g::Fuse::Node_typeof());
    ::TYPES[12] = ::g::Fuse::Controls::ScrollView_typeof();
    ::TYPES[9] = ::g::Fuse::Node_typeof();
    ::TYPES[13] = ::g::Uno::Float4x4_typeof();
    ::TYPES[14] = ::g::Uno::Float2_typeof();
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[15] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[6] = ::g::Uno::EventHandler_typeof();
    ::TYPES[16] = ::g::Fuse::Controls::Control_typeof();
    ::TYPES[17] = ::g::Uno::Bool_typeof();
    ::TYPES[18] = ::g::Uno::Action_typeof();
    ::TYPES[19] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[20] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[0] = ::g::iOS::UIKit::UIView_typeof();
    ::TYPES[21] = ::g::Uno::Double_typeof();
    ::TYPES[22] = ::g::Fuse::Behavior_typeof();
    ::TYPES[23] = ::g::Fuse::iOS::Controls::ControlProperties_typeof();
    ::TYPES[24] = ::g::Fuse::RootViewport_typeof();
    ::TYPES[25] = uObject_typeof();
    ::TYPES[7] = ::g::ObjC::Bindings::Object_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(NativeView_type, interface0));
    type->SetFields(3,
        ::g::Fuse::Controls::Control_typeof(), offsetof(::g::Fuse::iOS::NativeViews::NativeView, _fuseControl), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::iOS::NativeViews::NativeView, _node), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::iOS::NativeViews::NativeView, _updatingTransform), 0,
        ::g::iOS::UIKit::UIView_typeof(), offsetof(::g::Fuse::iOS::NativeViews::NativeView, _view), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::iOS::NativeViews::NativeView::_viewHandle_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::iOS::UIKit::UIView_typeof(), ::g::Fuse::Node_typeof()), (uintptr_t)&::g::Fuse::iOS::NativeViews::NativeView::_viewMap_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("GetFrom", NULL, (void*)NativeView__GetFrom_fn, 0, true, NativeView_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("GetFrom", NULL, (void*)NativeView__GetFrom1_fn, 0, true, ::g::Fuse::Node_typeof(), 1, ::g::iOS::UIKit::UIView_typeof()),
        new uFunction("get_Parent", NULL, NULL, offsetof(NativeView_type, fp_get_Parent), false, NativeView_typeof(), 0));
    return type;
}

// protected generated NativeView() :261
void NativeView__ctor_1_fn(NativeView* __this)
{
    __this->ctor_1();
}

// protected virtual void ChildRooted(Fuse.iOS.NativeViews.NativeView child) :491
void NativeView__ChildRooted_fn(NativeView* __this, NativeView* child)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "ChildRooted(Fuse.iOS.NativeViews.NativeView)");
    uPtr(__this->Handle())->addSubview(uPtr(child)->Handle());
}

// protected virtual void ChildUnrooted(Fuse.iOS.NativeViews.NativeView child) :496
void NativeView__ChildUnrooted_fn(NativeView* __this, NativeView* child)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "ChildUnrooted(Fuse.iOS.NativeViews.NativeView)");
    uPtr(uPtr(child)->Handle())->removeFromSuperview();
}

// protected void CompensateForScrollView(float4x4& t) :522
void NativeView__CompensateForScrollView_fn(NativeView* __this, ::g::Uno::Float4x4* t)
{
    __this->CompensateForScrollView(t);
}

// internal Fuse.Controls.Control get_FuseControl() :315
void NativeView__get_FuseControl_fn(NativeView* __this, ::g::Fuse::Controls::Control** __retval)
{
    *__retval = __this->FuseControl();
}

// public static Fuse.iOS.NativeViews.NativeView GetFrom(Fuse.Node n) :264
void NativeView__GetFrom_fn(::g::Fuse::Node* n, NativeView** __retval)
{
    *__retval = NativeView::GetFrom(n);
}

// public static Fuse.Node GetFrom(iOS.UIKit.UIView view) :276
void NativeView__GetFrom1_fn(::g::iOS::UIKit::UIView* view, ::g::Fuse::Node** __retval)
{
    *__retval = NativeView::GetFrom1(view);
}

// internal iOS.UIKit.UIView get_Handle() :319
void NativeView__get_Handle_fn(NativeView* __this, ::g::iOS::UIKit::UIView** __retval)
{
    *__retval = __this->Handle();
}

// private void set_Handle(iOS.UIKit.UIView value) :320
void NativeView__set_Handle_fn(NativeView* __this, ::g::iOS::UIKit::UIView* value)
{
    __this->Handle(value);
}

// internal virtual iOS.UIKit.UIView get_HitTestHandle() :325
void NativeView__get_HitTestHandle_fn(NativeView* __this, ::g::iOS::UIKit::UIView** __retval)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "get_HitTestHandle()");
    return *__retval = __this->Handle(), void();
}

// private void HookEvents() :432
void NativeView__HookEvents_fn(NativeView* __this)
{
    __this->HookEvents();
}

// private void HookFuseControlEvents() :358
void NativeView__HookFuseControlEvents_fn(NativeView* __this)
{
    __this->HookFuseControlEvents();
}

// internal bool get_IsFuseControl() :314
void NativeView__get_IsFuseControl_fn(NativeView* __this, bool* __retval)
{
    *__retval = __this->IsFuseControl();
}

// internal static void MapView(iOS.UIKit.UIView view, Fuse.Node node) :284
void NativeView__MapView_fn(::g::iOS::UIKit::UIView* view, ::g::Fuse::Node* node)
{
    NativeView::MapView(view, node);
}

// internal Fuse.Node get_Node() :300
void NativeView__get_Node_fn(NativeView* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Node();
}

// private void set_Node(Fuse.Node value) :301
void NativeView__set_Node_fn(NativeView* __this, ::g::Fuse::Node* value)
{
    __this->Node(value);
}

// internal virtual void NotifyNewSize(Fuse.iOS.NativeViews.NativeView child) :559
void NativeView__NotifyNewSize_fn(NativeView* __this, NativeView* child)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "NotifyNewSize(Fuse.iOS.NativeViews.NativeView)");
    ::g::Fuse::iOS::Transform::SetSize(uPtr(child)->Handle(), uPtr(child)->Size());
}

// internal void NotifyNewTransform() :503
void NativeView__NotifyNewTransform_fn(NativeView* __this)
{
    __this->NotifyNewTransform();
}

// internal void OnBackgroundChanged(object s, object a) :381
void NativeView__OnBackgroundChanged_fn(NativeView* __this, uObject* s, uObject* a)
{
    __this->OnBackgroundChanged(s, a);
}

// private void OnIsContextEnabledChanged(object s, object a) :465
void NativeView__OnIsContextEnabledChanged_fn(NativeView* __this, uObject* s, uObject* a)
{
    __this->OnIsContextEnabledChanged(s, a);
}

// private void OnIsVisibleChanged(object s, object a) :470
void NativeView__OnIsVisibleChanged_fn(NativeView* __this, uObject* s, uObject* a)
{
    __this->OnIsVisibleChanged(s, a);
}

// private void OnPlaced(object sender, Uno.EventArgs args) :512
void NativeView__OnPlaced_fn(NativeView* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnPlaced(sender, args);
}

// private void OnPropertyChanged(object sender, Uno.EventArgs args) :484
void NativeView__OnPropertyChanged_fn(NativeView* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnPropertyChanged(sender, args);
}

// protected override void OnRooted(Fuse.Node parentNode) :339
void NativeView__OnRooted_fn(NativeView* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "OnRooted(Fuse.Node)");
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    __this->Node(__this->ParentNode());
    __this->Handle(__this->Create());
    NativeView::MapView(__this->Handle(), __this->Node());
    uPtr(__this->Handle())->Hidden(true);
    __this->HookEvents();
    __this->RootNativeView();
    __this->NotifyNewTransform();

    if (__this->IsFuseControl())
        __this->HookFuseControlEvents();
}

// internal void OnTintColorChanged() :372
void NativeView__OnTintColorChanged_fn(NativeView* __this)
{
    __this->OnTintColorChanged();
}

// private void OnTransformsChanged(object sender, Uno.EventArgs args) :517
void NativeView__OnTransformsChanged_fn(NativeView* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnTransformsChanged(sender, args);
}

// protected override void OnUnrooted(Fuse.Node parentNode) :395
void NativeView__OnUnrooted_fn(NativeView* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "OnUnrooted(Fuse.Node)");
    __this->UnhookEvents();
    __this->_updatingTransform = false;
    __this->UnrootNativeView();

    if (__this->IsFuseControl())
        __this->UnhookFuseControlEvents();

    NativeView::UnmapView(__this->Handle());
    __this->Node(NULL);
    __this->Handle(NULL);
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// protected virtual void OnUpdateTransform() :542
void NativeView__OnUpdateTransform_fn(NativeView* __this)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "OnUpdateTransform()");
    ::g::Fuse::iOS::Transform::ApplyIdentity(__this->Handle());
    ::g::Fuse::iOS::Transform::SetAnchor(__this->Handle());

    if (__this->Parent() != NULL)
        uPtr(__this->Parent())->NotifyNewSize(__this);
    else
        ::g::Fuse::iOS::Transform::SetSize(__this->Handle(), __this->Size());

    ::g::Uno::Float4x4 transform = uPtr(__this->Node())->LocalTransform();
    __this->CompensateForScrollView(&transform);
    ::g::Fuse::iOS::Transform::Apply(__this->Handle(), transform);
    uPtr(__this->Handle())->Hidden(!uPtr(__this->Node())->IsVisible());
}

// public virtual Fuse.iOS.NativeViews.NativeView get_Parent() :330
void NativeView__get_Parent_fn(NativeView* __this, NativeView** __retval)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "get_Parent()");
    return *__retval = (__this->Node() != NULL) ? (NativeView*)NativeView::GetFrom(uPtr(__this->Node())->Parent()) : NULL, void();
}

// private void RootNativeView() :411
void NativeView__RootNativeView_fn(NativeView* __this)
{
    __this->RootNativeView();
}

// private void UnhookEvents() :450
void NativeView__UnhookEvents_fn(NativeView* __this)
{
    __this->UnhookEvents();
}

// private void UnhookFuseControlEvents() :367
void NativeView__UnhookFuseControlEvents_fn(NativeView* __this)
{
    __this->UnhookFuseControlEvents();
}

// internal static void UnmapView(iOS.UIKit.UIView view) :289
void NativeView__UnmapView_fn(::g::iOS::UIKit::UIView* view)
{
    NativeView::UnmapView(view);
}

// private void UnrootNativeView() :423
void NativeView__UnrootNativeView_fn(NativeView* __this)
{
    __this->UnrootNativeView();
}

// private void UpdateTransform() :532
void NativeView__UpdateTransform_fn(NativeView* __this)
{
    __this->UpdateTransform();
}

uSStrong< ::g::Fuse::PropertyHandle*> NativeView::_viewHandle_;
uSStrong< ::g::Uno::Collections::Dictionary*> NativeView::_viewMap_;

// protected generated NativeView() [instance] :261
void NativeView::ctor_1()
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", ".ctor()");
    ctor_();
}

// protected void CompensateForScrollView(float4x4& t) [instance] :522
void NativeView::CompensateForScrollView(::g::Uno::Float4x4* t)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "CompensateForScrollView(float4x4&)");
    ::g::Fuse::Controls::ScrollView* sv = uAs< ::g::Fuse::Controls::ScrollView*>(uPtr(Node())->Parent(), ::TYPES[12/*Fuse.Controls.ScrollView*/]);

    if (sv != NULL)
    {
        (*t).M41 = ((*t).M41 + uPtr(sv)->ScrollPosition().X);
        (*t).M42 = ((*t).M42 + sv->ScrollPosition().Y);
    }
}

// internal Fuse.Controls.Control get_FuseControl() [instance] :315
::g::Fuse::Controls::Control* NativeView::FuseControl()
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "get_FuseControl()");
    return _fuseControl;
}

// internal iOS.UIKit.UIView get_Handle() [instance] :319
::g::iOS::UIKit::UIView* NativeView::Handle()
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "get_Handle()");
    return _view;
}

// private void set_Handle(iOS.UIKit.UIView value) [instance] :320
void NativeView::Handle(::g::iOS::UIKit::UIView* value)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "set_Handle(iOS.UIKit.UIView)");
    _view = value;
}

// private void HookEvents() [instance] :432
void NativeView::HookEvents()
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "HookEvents()");
    ::g::Fuse::iOS::InputDispatch::AddListener(this);

    if (uIs(Node(), ::TYPES[2/*Fuse.Elements.Element*/]))
    {
        uPtr(uCast< ::g::Fuse::Elements::Element*>(Node(), ::TYPES[2/*Fuse.Elements.Element*/]))->add_Placed(uDelegate::New(::TYPES[15/*Fuse.PlacedHandler*/], (void*)NativeView__OnPlaced_fn, this));
        uPtr(uCast< ::g::Fuse::Elements::Element*>(Node(), ::TYPES[2/*Fuse.Elements.Element*/]))->add_PropertyChanged(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)NativeView__OnPropertyChanged_fn, this));
        OnPropertyChanged(NULL, NULL);
    }

    uPtr(Node())->add_IsContextEnabledChanged(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)NativeView__OnIsContextEnabledChanged_fn, this));
    uPtr(Node())->add_IsVisibleChanged(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)NativeView__OnIsVisibleChanged_fn, this));
    uPtr(Node())->add_TransformsChanged(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)NativeView__OnTransformsChanged_fn, this));
    OnIsContextEnabledChanged(NULL, NULL);
}

// private void HookFuseControlEvents() [instance] :358
void NativeView::HookFuseControlEvents()
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "HookFuseControlEvents()");
    uPtr(FuseControl())->add_ControlRenderPropertyChanged(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)NativeView__OnBackgroundChanged_fn, this));
    OnBackgroundChanged(NULL, NULL);
    OnTintColorChanged();
}

// internal bool get_IsFuseControl() [instance] :314
bool NativeView::IsFuseControl()
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "get_IsFuseControl()");
    return _fuseControl != NULL;
}

// internal Fuse.Node get_Node() [instance] :300
::g::Fuse::Node* NativeView::Node()
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "get_Node()");
    return _node;
}

// private void set_Node(Fuse.Node value) [instance] :301
void NativeView::Node(::g::Fuse::Node* value)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "set_Node(Fuse.Node)");

    if (_node != NULL)
        uPtr(uPtr(_node)->Properties())->Clear(NativeView::_viewHandle());

    _node = value;
    _fuseControl = uAs< ::g::Fuse::Controls::Control*>(value, ::TYPES[16/*Fuse.Controls.Control*/]);

    if (_node != NULL)
        uPtr(uPtr(_node)->Properties())->Set(NativeView::_viewHandle(), this);
}

// internal void NotifyNewTransform() [instance] :503
void NativeView::NotifyNewTransform()
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "NotifyNewTransform()");

    if (!_updatingTransform)
    {
        ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)NativeView__UpdateTransform_fn, this), 2);
        _updatingTransform = true;
    }
}

// internal void OnBackgroundChanged(object s, object a) [instance] :381
void NativeView::OnBackgroundChanged(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "OnBackgroundChanged(object,object)");
    bool ret2;

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Controls::Control::BackgroundProperty()), FuseControl(), &ret2), ret2))
    {
        ::g::Fuse::Drawing::Brush* background = uPtr(FuseControl())->Background();

        if (uIs(background, ::TYPES[19/*Fuse.Drawing.SolidColor*/]))
            uPtr(_view)->setBackgroundColor(::g::Fuse::iOS::iOSExtensions::ToUIColor(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(background, ::TYPES[19/*Fuse.Drawing.SolidColor*/]))->Color()));

        if (uIs(background, ::TYPES[20/*Fuse.Drawing.StaticSolidColor*/]))
            uPtr(_view)->setBackgroundColor(::g::Fuse::iOS::iOSExtensions::ToUIColor(uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(background, ::TYPES[20/*Fuse.Drawing.StaticSolidColor*/]))->Color()));
    }
}

// private void OnIsContextEnabledChanged(object s, object a) [instance] :465
void NativeView::OnIsContextEnabledChanged(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "OnIsContextEnabledChanged(object,object)");
    uPtr(HitTestHandle())->UserInteractionEnabled(uPtr(Node())->IsContextEnabled());
}

// private void OnIsVisibleChanged(object s, object a) [instance] :470
void NativeView::OnIsVisibleChanged(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "OnIsVisibleChanged(object,object)");

    if (!uPtr(Node())->IsVisible())
        uPtr(Handle())->Hidden(true);
    else if (uPtr(Handle())->Hidden())
        NotifyNewTransform();
}

// private void OnPlaced(object sender, Uno.EventArgs args) [instance] :512
void NativeView::OnPlaced(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "OnPlaced(object,Uno.EventArgs)");
    NotifyNewTransform();
}

// private void OnPropertyChanged(object sender, Uno.EventArgs args) [instance] :484
void NativeView::OnPropertyChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "OnPropertyChanged(object,Uno.EventArgs)");
    ::g::Fuse::Elements::Element* elm = uCast< ::g::Fuse::Elements::Element*>(Node(), ::TYPES[2/*Fuse.Elements.Element*/]);
    uPtr(Handle())->Alpha((double)uPtr(elm)->Opacity());
    uPtr(Handle())->ClipsToBounds(elm->ClipToBounds());
}

// internal void OnTintColorChanged() [instance] :372
void NativeView::OnTintColorChanged()
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "OnTintColorChanged()");
    bool ret3;
    ::g::Uno::Float4 ret4;

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::iOS::Controls::ControlProperties::TintColorProperty()), FuseControl(), &ret3), ret3))
    {
        ::g::Uno::Float4 v = (::g::Fuse::StyleProperty1__Get_fn(uPtr(::g::Fuse::iOS::Controls::ControlProperties::TintColorProperty()), FuseControl(), &ret4), ret4);
        uPtr(Handle())->setTintColor(::g::Fuse::iOS::iOSExtensions::ToUIColor(v));
    }
}

// private void OnTransformsChanged(object sender, Uno.EventArgs args) [instance] :517
void NativeView::OnTransformsChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "OnTransformsChanged(object,Uno.EventArgs)");
    NotifyNewTransform();
}

// private void RootNativeView() [instance] :411
void NativeView::RootNativeView()
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "RootNativeView()");

    if (uIs(uPtr(Node())->Parent(), ::TYPES[24/*Fuse.RootViewport*/]))
        ::g::Fuse::iOS::RootView::SetRoot(Handle());
    else if (Parent() == NULL)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(Node(), ::STRINGS[0/*" must have ...*/]), uPtr(Node())->Parent())));
    else
        uPtr(Parent())->ChildRooted(this);
}

// private void UnhookEvents() [instance] :450
void NativeView::UnhookEvents()
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "UnhookEvents()");
    ::g::Fuse::iOS::InputDispatch::RemoveListener(this);

    if (uIs(Node(), ::TYPES[2/*Fuse.Elements.Element*/]))
    {
        uPtr(uCast< ::g::Fuse::Elements::Element*>(Node(), ::TYPES[2/*Fuse.Elements.Element*/]))->remove_Placed(uDelegate::New(::TYPES[15/*Fuse.PlacedHandler*/], (void*)NativeView__OnPlaced_fn, this));
        uPtr(uCast< ::g::Fuse::Elements::Element*>(Node(), ::TYPES[2/*Fuse.Elements.Element*/]))->remove_PropertyChanged(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)NativeView__OnPropertyChanged_fn, this));
    }

    uPtr(Node())->remove_IsContextEnabledChanged(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)NativeView__OnIsContextEnabledChanged_fn, this));
    uPtr(Node())->remove_IsVisibleChanged(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)NativeView__OnIsVisibleChanged_fn, this));
    uPtr(Node())->remove_TransformsChanged(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)NativeView__OnTransformsChanged_fn, this));
}

// private void UnhookFuseControlEvents() [instance] :367
void NativeView::UnhookFuseControlEvents()
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "UnhookFuseControlEvents()");
    uPtr(FuseControl())->remove_ControlRenderPropertyChanged(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)NativeView__OnBackgroundChanged_fn, this));
}

// private void UnrootNativeView() [instance] :423
void NativeView::UnrootNativeView()
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "UnrootNativeView()");

    if (uIs(uPtr(Node())->Parent(), ::TYPES[24/*Fuse.RootViewport*/]))
        ::g::Fuse::iOS::RootView::ClearRoot(Handle());
    else if (Parent() != NULL)
        uPtr(Parent())->ChildUnrooted(this);
}

// private void UpdateTransform() [instance] :532
void NativeView::UpdateTransform()
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "UpdateTransform()");

    if (!_updatingTransform)
        return;

    _updatingTransform = false;

    if ((Node() == NULL) || ::g::ObjC::ID::op_Equality(::g::ObjC::Bindings::Object::op_Implicit(Handle()), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
        return;

    OnUpdateTransform();
}

// public static Fuse.iOS.NativeViews.NativeView GetFrom(Fuse.Node n) [static] :264
NativeView* NativeView::GetFrom(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "GetFrom(Fuse.Node)");
    NativeView_typeof()->Init();
    return (n != NULL) ? uAs<NativeView*>(uPtr(uPtr(n)->Properties())->Get(NativeView::_viewHandle()), NativeView_typeof()) : NULL;
}

// public static Fuse.Node GetFrom(iOS.UIKit.UIView view) [static] :276
::g::Fuse::Node* NativeView::GetFrom1(::g::iOS::UIKit::UIView* view)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "GetFrom(iOS.UIKit.UIView)");
    NativeView_typeof()->Init();
    bool ret1;
    ::g::Fuse::Node* o;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(NativeView::_viewMap()), view, (void**)(&o), &ret1), ret1))
        return o;

    return NULL;
}

// internal static void MapView(iOS.UIKit.UIView view, Fuse.Node node) [static] :284
void NativeView::MapView(::g::iOS::UIKit::UIView* view, ::g::Fuse::Node* node)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "MapView(iOS.UIKit.UIView,Fuse.Node)");
    NativeView_typeof()->Init();
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(NativeView::_viewMap()), view, node);
}

// internal static void UnmapView(iOS.UIKit.UIView view) [static] :289
void NativeView::UnmapView(::g::iOS::UIKit::UIView* view)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeView", "UnmapView(iOS.UIKit.UIView)");
    NativeView_typeof()->Init();
    bool ret5;
    ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(NativeView::_viewMap()), view, &ret5);
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.27.14/NativeViews/$.uno#5
// ------------------------------------------------------------------

// internal sealed class NativeViewBlitter :777
// {
// static NativeViewBlitter() :777
static void NativeViewBlitter__cctor__fn(uType* __type)
{
    NativeViewBlitter::Singleton_ = NativeViewBlitter::New1();
}

uType* NativeViewBlitter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(NativeViewBlitter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.iOS.NativeViews.NativeViewBlitter", options);
    type->fp_ctor_ = (void*)NativeViewBlitter__New1_fn;
    type->fp_cctor_ = NativeViewBlitter__cctor__fn;
    ::TYPES[26] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[27] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[28] = ::g::FuseiOS_bundle_typeof();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::iOS::NativeViews::NativeViewBlitter, _draw_ff643782), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::iOS::NativeViews::NativeViewBlitter, Blit_v_ff643782_1_7_1), 0,
        ::g::Uno::Float2_typeof()->Array(), offsetof(::g::Fuse::iOS::NativeViews::NativeViewBlitter, Blit_verts_ff643782_1_6_5), 0,
        NativeViewBlitter_typeof(), (uintptr_t)&::g::Fuse::iOS::NativeViews::NativeViewBlitter::Singleton_, uFieldFlagsStatic);
    return type;
}

// public generated NativeViewBlitter() :777
void NativeViewBlitter__ctor__fn(NativeViewBlitter* __this)
{
    __this->ctor_();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) :781
void NativeViewBlitter__Blit_fn(NativeViewBlitter* __this, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2* pos, ::g::Uno::Float2* size, ::g::Uno::Float4x4* localToClipTransform)
{
    __this->Blit(vt, *pos, *size, *localToClipTransform);
}

// private generated void init_DrawCalls() :777
void NativeViewBlitter__init_DrawCalls_fn(NativeViewBlitter* __this)
{
    __this->init_DrawCalls();
}

// public generated NativeViewBlitter New() :777
void NativeViewBlitter__New1_fn(NativeViewBlitter** __retval)
{
    *__retval = NativeViewBlitter::New1();
}

uSStrong<NativeViewBlitter*> NativeViewBlitter::Singleton_;

// public generated NativeViewBlitter() [instance] :777
void NativeViewBlitter::ctor_()
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeViewBlitter", ".ctor()");
    init_DrawCalls();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) [instance] :781
void NativeViewBlitter::Blit(::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2 pos, ::g::Uno::Float2 size, ::g::Uno::Float4x4 localToClipTransform)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeViewBlitter", "Blit(texture2D,float2,float2,float4x4)");
    _draw_ff643782.BlendEnabled(true);
    _draw_ff643782.CullFace(0);
    _draw_ff643782.BlendSrcAlpha(7);
    _draw_ff643782.BlendDstRgb(3);
    _draw_ff643782.Use();
    _draw_ff643782.Attrib1(0, 2, Blit_v_ff643782_1_7_1, 8, 0);
    _draw_ff643782.Uniform2(1, size);
    _draw_ff643782.Uniform2(2, pos);
    _draw_ff643782.Uniform12(3, localToClipTransform);
    _draw_ff643782.Sampler2(4, vt);
    _draw_ff643782.DrawArrays(uPtr(Blit_verts_ff643782_1_6_5)->Length());
}

// private generated void init_DrawCalls() [instance] :777
void NativeViewBlitter::init_DrawCalls()
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeViewBlitter", "init_DrawCalls()");
    uArray* verts_ff643782_1_6_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[27/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f));
    Blit_v_ff643782_1_7_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(verts_ff643782_1_6_0), 0);
    Blit_verts_ff643782_1_6_5 = verts_ff643782_1_6_0;
    _draw_ff643782 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseiOS_bundle::NativeViewBlitter6bc02b03());
}

// public generated NativeViewBlitter New() [static] :777
NativeViewBlitter* NativeViewBlitter::New1()
{
    NativeViewBlitter* obj1 = (NativeViewBlitter*)uNew(NativeViewBlitter_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.27.14/NativeViews/$.uno#6
// ------------------------------------------------------------------

// internal sealed extern class ParentControl :832
// {
::g::Fuse::iOS::NativeViews::ParentNativeView_type* ParentControl_typeof()
{
    static uSStrong< ::g::Fuse::iOS::NativeViews::ParentNativeView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ParentControl);
    options.TypeSize = sizeof(::g::Fuse::iOS::NativeViews::ParentNativeView_type);
    type = (::g::Fuse::iOS::NativeViews::ParentNativeView_type*)uClassType::New("Fuse.iOS.NativeViews.ParentControl", options);
    type->SetBase(::g::Fuse::iOS::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::ParentControl_typeof()));
    type->fp_ctor_ = (void*)ParentControl__New1_fn;
    type->fp_Attach = (void(*)(::g::Fuse::iOS::NativeViews::ParentNativeView*))ParentControl__Attach_fn;
    type->fp_ChildRooted = (void(*)(::g::Fuse::iOS::NativeViews::NativeView*, ::g::Fuse::iOS::NativeViews::NativeView*))ParentControl__ChildRooted_fn;
    type->fp_Create = (void(*)(::g::Fuse::iOS::NativeViews::NativeView*, ::g::iOS::UIKit::UIView**))ParentControl__Create_fn;
    type->fp_Detach = (void(*)(::g::Fuse::iOS::NativeViews::ParentNativeView*))ParentControl__Detach_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    ::TYPES[29] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[30] = ::g::Fuse::Controls::ParentControl_typeof();
    ::TYPES[31] = ::g::Fuse::iOS::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::ParentControl_typeof());
    ::TYPES[1] = ::g::Fuse::iOS::NativeViews::NativeView_typeof();
    ::TYPES[6] = ::g::Uno::EventHandler_typeof();
    ::TYPES[0] = ::g::iOS::UIKit::UIView_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::iOS::NativeViews::ParentNativeView_type, interface0));
    type->SetFields(7,
        ::g::iOS::UIKit::UIControl_typeof(), offsetof(::g::Fuse::iOS::NativeViews::ParentControl, _group), 0);
    return type;
}

// public generated ParentControl() :832
void ParentControl__ctor_3_fn(ParentControl* __this)
{
    __this->ctor_3();
}

// private void ApplyZOrder() :866
void ParentControl__ApplyZOrder_fn(ParentControl* __this)
{
    __this->ApplyZOrder();
}

// protected override sealed void Attach() :849
void ParentControl__Attach_fn(ParentControl* __this)
{
    uStackFrame __("Fuse.iOS.NativeViews.ParentControl", "Attach()");
    ::g::Fuse::iOS::NativeViews::ParentNativeView__Attach_fn(__this);
    uPtr((::g::Fuse::Controls::ParentControl*)__this->Control())->add_ZOrderChanged(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)ParentControl__OnZOrderChanged_fn, __this));
}

// protected override sealed void ChildRooted(Fuse.iOS.NativeViews.NativeView child) :876
void ParentControl__ChildRooted_fn(ParentControl* __this, ::g::Fuse::iOS::NativeViews::NativeView* child)
{
    uStackFrame __("Fuse.iOS.NativeViews.ParentControl", "ChildRooted(Fuse.iOS.NativeViews.NativeView)");
    ::g::Fuse::iOS::NativeViews::NativeView__ChildRooted_fn(__this, child);
    __this->ApplyZOrder();
}

// internal override sealed iOS.UIKit.UIView Create() :836
void ParentControl__Create_fn(ParentControl* __this, ::g::iOS::UIKit::UIView** __retval)
{
    uStackFrame __("Fuse.iOS.NativeViews.ParentControl", "Create()");
    __this->_group = ::g::iOS::UIKit::UIControl::New9();
    uPtr(__this->_group)->init();
    uPtr(__this->_group)->MultipleTouchEnabled(true);
    uPtr(__this->_group)->ClipsToBounds(false);
    uPtr(__this->_group)->Opaque(false);
    uPtr(__this->_group)->setTranslatesAutoresizingMaskIntoConstraints(false);
    return *__retval = __this->_group, void();
}

// protected override sealed void Detach() :855
void ParentControl__Detach_fn(ParentControl* __this)
{
    uStackFrame __("Fuse.iOS.NativeViews.ParentControl", "Detach()");
    uPtr((::g::Fuse::Controls::ParentControl*)__this->Control())->remove_ZOrderChanged(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)ParentControl__OnZOrderChanged_fn, __this));
    ::g::Fuse::iOS::NativeViews::ParentNativeView__Detach_fn(__this);
}

// public generated ParentControl New() :832
void ParentControl__New1_fn(ParentControl** __retval)
{
    *__retval = ParentControl::New1();
}

// private void OnZOrderChanged(object s, object a) :861
void ParentControl__OnZOrderChanged_fn(ParentControl* __this, uObject* s, uObject* a)
{
    __this->OnZOrderChanged(s, a);
}

// public generated ParentControl() [instance] :832
void ParentControl::ctor_3()
{
    uStackFrame __("Fuse.iOS.NativeViews.ParentControl", ".ctor()");
    ctor_2();
}

// private void ApplyZOrder() [instance] :866
void ParentControl::ApplyZOrder()
{
    uStackFrame __("Fuse.iOS.NativeViews.ParentControl", "ApplyZOrder()");

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr((::g::Fuse::Controls::ParentControl*)Control())->Children()), ::TYPES[29/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        ::g::Fuse::iOS::NativeViews::NativeView* child = ::g::Fuse::iOS::NativeViews::NativeView::GetFrom(uPtr((::g::Fuse::Controls::ParentControl*)Control())->GetZOrderChild(i));

        if (child != NULL)
            uPtr(_group)->bringSubviewToFront(uPtr(child)->Handle());
    }
}

// private void OnZOrderChanged(object s, object a) [instance] :861
void ParentControl::OnZOrderChanged(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.iOS.NativeViews.ParentControl", "OnZOrderChanged(object,object)");
    ApplyZOrder();
}

// public generated ParentControl New() [static] :832
ParentControl* ParentControl::New1()
{
    ParentControl* obj1 = (ParentControl*)uNew(ParentControl_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.27.14/NativeViews/$.uno#7
// ------------------------------------------------------------------

// internal abstract extern class ParentNativeView<T> :892
// {
ParentNativeView_type* ParentNativeView_typeof()
{
    static uSStrong<ParentNativeView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ParentNativeView);
    options.TypeSize = sizeof(ParentNativeView_type);
    type = (ParentNativeView_type*)uClassType::New("Fuse.iOS.NativeViews.ParentNativeView`1", options);
    type->SetBase(::g::Fuse::iOS::NativeViews::NativeView_typeof());
    type->fp_Attach = ParentNativeView__Attach_fn;
    type->fp_Detach = ParentNativeView__Detach_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))ParentNativeView__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))ParentNativeView__OnUnrooted_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::iOS::NativeViews::NativeView*, ::g::Uno::Float2*))ParentNativeView__get_Size_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    ::TYPES[1] = ::g::Fuse::iOS::NativeViews::NativeView_typeof();
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(ParentNativeView_type, interface0));
    type->SetFields(7);
    return type;
}

// protected generated ParentNativeView() :892
void ParentNativeView__ctor_2_fn(ParentNativeView* __this)
{
    __this->ctor_2();
}

// protected virtual void Attach() :908
void ParentNativeView__Attach_fn(ParentNativeView* __this)
{
}

// protected T get_Control() :894
void ParentNativeView__get_Control_fn(ParentNativeView* __this, ::g::Fuse::Controls::Control** __retval)
{
    *__retval = __this->Control();
}

// protected virtual void Detach() :909
void ParentNativeView__Detach_fn(ParentNativeView* __this)
{
}

// protected override void OnRooted(Fuse.Node parentNode) :896
void ParentNativeView__OnRooted_fn(ParentNativeView* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.iOS.NativeViews.ParentNativeView`1", "OnRooted(Fuse.Node)");
    ::g::Fuse::iOS::NativeViews::NativeView__OnRooted_fn(__this, parentNode);
    __this->Attach();
}

// protected override void OnUnrooted(Fuse.Node parentNode) :902
void ParentNativeView__OnUnrooted_fn(ParentNativeView* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.iOS.NativeViews.ParentNativeView`1", "OnUnrooted(Fuse.Node)");
    __this->Detach();
    ::g::Fuse::iOS::NativeViews::NativeView__OnUnrooted_fn(__this, parentNode);
}

// protected override sealed float2 get_Size() :911
void ParentNativeView__get_Size_fn(ParentNativeView* __this, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.iOS.NativeViews.ParentNativeView`1", "get_Size()");
    return *__retval = uPtr(__this->Control())->ActualSize(), void();
}

// protected generated ParentNativeView() [instance] :892
void ParentNativeView::ctor_2()
{
    uStackFrame __("Fuse.iOS.NativeViews.ParentNativeView`1", ".ctor()");
    ctor_1();
}

// protected T get_Control() [instance] :894
::g::Fuse::Controls::Control* ParentNativeView::Control()
{
    uType* __types[] = {
        __type->GetBase(ParentNativeView_typeof())->T(0),
    };
    uStackFrame __("Fuse.iOS.NativeViews.ParentNativeView`1", "get_Control()");
    return uAs< ::g::Fuse::Controls::Control*>(Node(), __types[0]);
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.27.14/NativeViews/$.uno#8
// ------------------------------------------------------------------

// public sealed extern class ScrollView :934
// {
ScrollView_type* ScrollView_typeof()
{
    static uSStrong<ScrollView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ScrollView);
    options.TypeSize = sizeof(ScrollView_type);
    type = (ScrollView_type*)uClassType::New("Fuse.iOS.NativeViews.ScrollView", options);
    type->SetBase(::g::Fuse::iOS::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::ScrollView_typeof()));
    type->fp_ctor_ = (void*)ScrollView__New1_fn;
    type->fp_Attach = (void(*)(::g::Fuse::iOS::NativeViews::ParentNativeView*))ScrollView__Attach_fn;
    type->fp_Create = (void(*)(::g::Fuse::iOS::NativeViews::NativeView*, ::g::iOS::UIKit::UIView**))ScrollView__Create_fn;
    type->fp_Detach = (void(*)(::g::Fuse::iOS::NativeViews::ParentNativeView*))ScrollView__Detach_fn;
    type->fp_NotifyNewSize = (void(*)(::g::Fuse::iOS::NativeViews::NativeView*, ::g::Fuse::iOS::NativeViews::NativeView*))ScrollView__NotifyNewSize_fn;
    type->interface1.fp_scrollViewDidScroll = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))ScrollView__iOSUIKitIUIScrollViewDelegatescrollViewDidScroll_fn;
    type->interface1.fp_scrollViewDidZoom = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))ScrollView__iOSUIKitIUIScrollViewDelegatescrollViewDidZoom_fn;
    type->interface1.fp_scrollViewWillBeginDragging = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))ScrollView__iOSUIKitIUIScrollViewDelegatescrollViewWillBeginDragging_fn;
    type->interface1.fp_scrollViewDidEndDraggingWillDecelerate = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*, bool*))ScrollView__iOSUIKitIUIScrollViewDelegatescrollViewDidEndDraggingWillDecelerate_fn;
    type->interface1.fp_scrollViewWillBeginDecelerating = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))ScrollView__iOSUIKitIUIScrollViewDelegatescrollViewWillBeginDecelerating_fn;
    type->interface1.fp_scrollViewDidEndDecelerating = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))ScrollView__iOSUIKitIUIScrollViewDelegatescrollViewDidEndDecelerating_fn;
    type->interface1.fp_scrollViewDidEndScrollingAnimation = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))ScrollView__iOSUIKitIUIScrollViewDelegatescrollViewDidEndScrollingAnimation_fn;
    type->interface1.fp_viewForZoomingInScrollView = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*, ::g::iOS::UIKit::UIView**))ScrollView__iOSUIKitIUIScrollViewDelegateviewForZoomingInScrollView_fn;
    type->interface1.fp_scrollViewWillBeginZoomingWithView = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*, ::g::iOS::UIKit::UIView*))ScrollView__iOSUIKitIUIScrollViewDelegatescrollViewWillBeginZoomingWithView_fn;
    type->interface1.fp_scrollViewDidEndZoomingWithViewAtScale = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*, ::g::iOS::UIKit::UIView*, double*))ScrollView__iOSUIKitIUIScrollViewDelegatescrollViewDidEndZoomingWithViewAtScale_fn;
    type->interface1.fp_scrollViewShouldScrollToTop = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*, bool*))ScrollView__iOSUIKitIUIScrollViewDelegatescrollViewShouldScrollToTop_fn;
    type->interface1.fp_scrollViewDidScrollToTop = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))ScrollView__iOSUIKitIUIScrollViewDelegatescrollViewDidScrollToTop_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    ::TYPES[12] = ::g::Fuse::Controls::ScrollView_typeof();
    ::TYPES[32] = ::g::Fuse::iOS::NativeViews::ParentNativeView_typeof()->MakeType(::g::Fuse::Controls::ScrollView_typeof());
    ::TYPES[33] = ::g::Fuse::Controls::ScrollPositionChangedHandler_typeof();
    ::TYPES[34] = ::g::iOS::UIKit::UIScrollView_typeof();
    ::TYPES[35] = ::g::iOS::UIKit::IUIScrollViewDelegate_typeof();
    ::TYPES[0] = ::g::iOS::UIKit::UIView_typeof();
    ::TYPES[25] = uObject_typeof();
    ::TYPES[1] = ::g::Fuse::iOS::NativeViews::NativeView_typeof();
    ::TYPES[36] = ::g::Fuse::Controls::ScrollPositionChangedArgs_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(ScrollView_type, interface0),
        ::g::iOS::UIKit::IUIScrollViewDelegate_typeof(), offsetof(ScrollView_type, interface1));
    type->SetFields(7,
        ::g::iOS::UIKit::UIScrollView_typeof(), offsetof(::g::Fuse::iOS::NativeViews::ScrollView, _scrollView), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ScrollView__New1_fn, 0, true, ScrollView_typeof(), 0));
    return type;
}

// public generated ScrollView() :934
void ScrollView__ctor_3_fn(ScrollView* __this)
{
    __this->ctor_3();
}

// protected override sealed void Attach() :950
void ScrollView__Attach_fn(ScrollView* __this)
{
    uStackFrame __("Fuse.iOS.NativeViews.ScrollView", "Attach()");
    uPtr((::g::Fuse::Controls::ScrollView*)__this->Control())->add_ScrollPositionChanged(uDelegate::New(::TYPES[33/*Fuse.Controls.ScrollPositionChangedHandler*/], (void*)ScrollView__OnScrollPositionChanged1_fn, __this));
    __this->OnScrollPositionChanged();
}

// internal override sealed iOS.UIKit.UIView Create() :939
void ScrollView__Create_fn(ScrollView* __this, ::g::iOS::UIKit::UIView** __retval)
{
    uStackFrame __("Fuse.iOS.NativeViews.ScrollView", "Create()");
    __this->_scrollView = ::g::iOS::UIKit::UIScrollView::New9();
    uPtr(__this->_scrollView)->init();
    uPtr(__this->_scrollView)->Delegate((uObject*)__this);
    uPtr(__this->_scrollView)->MultipleTouchEnabled(true);
    uPtr(__this->_scrollView)->Opaque(false);
    return *__retval = __this->_scrollView, void();
}

// protected override sealed void Detach() :956
void ScrollView__Detach_fn(ScrollView* __this)
{
    uStackFrame __("Fuse.iOS.NativeViews.ScrollView", "Detach()");
    uPtr((::g::Fuse::Controls::ScrollView*)__this->Control())->remove_ScrollPositionChanged(uDelegate::New(::TYPES[33/*Fuse.Controls.ScrollPositionChangedHandler*/], (void*)ScrollView__OnScrollPositionChanged1_fn, __this));
}

// private void iOS.UIKit.IUIScrollViewDelegate.scrollViewDidEndDecelerating(iOS.UIKit.UIScrollView scrollView) :1008
void ScrollView__iOSUIKitIUIScrollViewDelegatescrollViewDidEndDecelerating_fn(ScrollView* __this, ::g::iOS::UIKit::UIScrollView* scrollView)
{
}

// private void iOS.UIKit.IUIScrollViewDelegate.scrollViewDidEndDraggingWillDecelerate(iOS.UIKit.UIScrollView scrollView, bool decelerate) :998
void ScrollView__iOSUIKitIUIScrollViewDelegatescrollViewDidEndDraggingWillDecelerate_fn(ScrollView* __this, ::g::iOS::UIKit::UIScrollView* scrollView, bool* decelerate)
{
}

// private void iOS.UIKit.IUIScrollViewDelegate.scrollViewDidEndScrollingAnimation(iOS.UIKit.UIScrollView scrollView) :1013
void ScrollView__iOSUIKitIUIScrollViewDelegatescrollViewDidEndScrollingAnimation_fn(ScrollView* __this, ::g::iOS::UIKit::UIScrollView* scrollView)
{
}

// private void iOS.UIKit.IUIScrollViewDelegate.scrollViewDidEndZoomingWithViewAtScale(iOS.UIKit.UIScrollView scrollView, iOS.UIKit.UIView view, double scale) :1028
void ScrollView__iOSUIKitIUIScrollViewDelegatescrollViewDidEndZoomingWithViewAtScale_fn(ScrollView* __this, ::g::iOS::UIKit::UIScrollView* scrollView, ::g::iOS::UIKit::UIView* view, double* scale)
{
}

// private void iOS.UIKit.IUIScrollViewDelegate.scrollViewDidScroll(iOS.UIKit.UIScrollView scrollView) :983
void ScrollView__iOSUIKitIUIScrollViewDelegatescrollViewDidScroll_fn(ScrollView* __this, ::g::iOS::UIKit::UIScrollView* scrollView)
{
    uStackFrame __("Fuse.iOS.NativeViews.ScrollView", "iOS.UIKit.IUIScrollViewDelegate.scrollViewDidScroll(iOS.UIKit.UIScrollView)");
    uPtr((::g::Fuse::Controls::ScrollView*)__this->Control())->SetScrollPosition(::g::Fuse::iOS::iOSExtensions::ToFloat2(uPtr(scrollView)->ContentOffset()), __this);
}

// private void iOS.UIKit.IUIScrollViewDelegate.scrollViewDidScrollToTop(iOS.UIKit.UIScrollView scrollView) :1038
void ScrollView__iOSUIKitIUIScrollViewDelegatescrollViewDidScrollToTop_fn(ScrollView* __this, ::g::iOS::UIKit::UIScrollView* scrollView)
{
}

// private void iOS.UIKit.IUIScrollViewDelegate.scrollViewDidZoom(iOS.UIKit.UIScrollView scrollView) :988
void ScrollView__iOSUIKitIUIScrollViewDelegatescrollViewDidZoom_fn(ScrollView* __this, ::g::iOS::UIKit::UIScrollView* scrollView)
{
}

// private bool iOS.UIKit.IUIScrollViewDelegate.scrollViewShouldScrollToTop(iOS.UIKit.UIScrollView scrollView) :1033
void ScrollView__iOSUIKitIUIScrollViewDelegatescrollViewShouldScrollToTop_fn(ScrollView* __this, ::g::iOS::UIKit::UIScrollView* scrollView, bool* __retval)
{
    uStackFrame __("Fuse.iOS.NativeViews.ScrollView", "iOS.UIKit.IUIScrollViewDelegate.scrollViewShouldScrollToTop(iOS.UIKit.UIScrollView)");
    return *__retval = true, void();
}

// private void iOS.UIKit.IUIScrollViewDelegate.scrollViewWillBeginDecelerating(iOS.UIKit.UIScrollView scrollView) :1003
void ScrollView__iOSUIKitIUIScrollViewDelegatescrollViewWillBeginDecelerating_fn(ScrollView* __this, ::g::iOS::UIKit::UIScrollView* scrollView)
{
}

// private void iOS.UIKit.IUIScrollViewDelegate.scrollViewWillBeginDragging(iOS.UIKit.UIScrollView scrollView) :993
void ScrollView__iOSUIKitIUIScrollViewDelegatescrollViewWillBeginDragging_fn(ScrollView* __this, ::g::iOS::UIKit::UIScrollView* scrollView)
{
}

// private void iOS.UIKit.IUIScrollViewDelegate.scrollViewWillBeginZoomingWithView(iOS.UIKit.UIScrollView scrollView, iOS.UIKit.UIView view) :1023
void ScrollView__iOSUIKitIUIScrollViewDelegatescrollViewWillBeginZoomingWithView_fn(ScrollView* __this, ::g::iOS::UIKit::UIScrollView* scrollView, ::g::iOS::UIKit::UIView* view)
{
}

// private iOS.UIKit.UIView iOS.UIKit.IUIScrollViewDelegate.viewForZoomingInScrollView(iOS.UIKit.UIScrollView scrollView) :1018
void ScrollView__iOSUIKitIUIScrollViewDelegateviewForZoomingInScrollView_fn(ScrollView* __this, ::g::iOS::UIKit::UIScrollView* scrollView, ::g::iOS::UIKit::UIView** __retval)
{
    uStackFrame __("Fuse.iOS.NativeViews.ScrollView", "iOS.UIKit.IUIScrollViewDelegate.viewForZoomingInScrollView(iOS.UIKit.UIScrollView)");
    return *__retval = NULL, void();
}

// public generated ScrollView New() :934
void ScrollView__New1_fn(ScrollView** __retval)
{
    *__retval = ScrollView::New1();
}

// internal override sealed void NotifyNewSize(Fuse.iOS.NativeViews.NativeView child) :972
void ScrollView__NotifyNewSize_fn(ScrollView* __this, ::g::Fuse::iOS::NativeViews::NativeView* child)
{
    uStackFrame __("Fuse.iOS.NativeViews.ScrollView", "NotifyNewSize(Fuse.iOS.NativeViews.NativeView)");
    ::g::Fuse::iOS::NativeViews::NativeView__NotifyNewSize_fn(__this, child);
    __this->UpdateContentSize(uPtr(child)->Size());
}

// private void OnScrollPositionChanged() :967
void ScrollView__OnScrollPositionChanged_fn(ScrollView* __this)
{
    __this->OnScrollPositionChanged();
}

// private void OnScrollPositionChanged(object sender, Fuse.Controls.ScrollPositionChangedArgs args) :961
void ScrollView__OnScrollPositionChanged1_fn(ScrollView* __this, uObject* sender, ::g::Fuse::Controls::ScrollPositionChangedArgs* args)
{
    __this->OnScrollPositionChanged1(sender, args);
}

// private void UpdateContentSize(float2 newContentSize) :978
void ScrollView__UpdateContentSize_fn(ScrollView* __this, ::g::Uno::Float2* newContentSize)
{
    __this->UpdateContentSize(*newContentSize);
}

// public generated ScrollView() [instance] :934
void ScrollView::ctor_3()
{
    uStackFrame __("Fuse.iOS.NativeViews.ScrollView", ".ctor()");
    ctor_2();
}

// private void OnScrollPositionChanged() [instance] :967
void ScrollView::OnScrollPositionChanged()
{
    uStackFrame __("Fuse.iOS.NativeViews.ScrollView", "OnScrollPositionChanged()");
    uPtr(_scrollView)->ContentOffset(::g::Fuse::iOS::iOSExtensions::ToCGPoint(uPtr((::g::Fuse::Controls::ScrollView*)Control())->ScrollPosition()));
}

// private void OnScrollPositionChanged(object sender, Fuse.Controls.ScrollPositionChangedArgs args) [instance] :961
void ScrollView::OnScrollPositionChanged1(uObject* sender, ::g::Fuse::Controls::ScrollPositionChangedArgs* args)
{
    uStackFrame __("Fuse.iOS.NativeViews.ScrollView", "OnScrollPositionChanged(object,Fuse.Controls.ScrollPositionChangedArgs)");

    if (uPtr(args)->Origin() == this)
        return;

    OnScrollPositionChanged();
}

// private void UpdateContentSize(float2 newContentSize) [instance] :978
void ScrollView::UpdateContentSize(::g::Uno::Float2 newContentSize)
{
    uStackFrame __("Fuse.iOS.NativeViews.ScrollView", "UpdateContentSize(float2)");
    uPtr(_scrollView)->ContentSize(::g::Fuse::iOS::iOSExtensions::ToCGSize(::g::Uno::Math::Max3(Size(), newContentSize)));
}

// public generated ScrollView New() [static] :934
ScrollView* ScrollView::New1()
{
    ScrollView* obj1 = (ScrollView*)uNew(ScrollView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.27.14/NativeViews/$.uno#5
// ------------------------------------------------------------------

// private sealed class NativeViewHost.ViewHost :593
// {
::g::iOS::UIKit::UIView_type* NativeViewHost__ViewHost_typeof()
{
    static uSStrong< ::g::iOS::UIKit::UIView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NativeViewHost__ViewHost);
    options.TypeSize = sizeof(::g::iOS::UIKit::UIView_type);
    type = (::g::iOS::UIKit::UIView_type*)uClassType::New("Fuse.iOS.NativeViews.NativeViewHost.ViewHost", options);
    type->SetBase(::g::iOS::UIKit::UIControl_typeof());
    type->fp_setNeedsDisplay = (void(*)(::g::iOS::UIKit::UIView*))NativeViewHost__ViewHost__setNeedsDisplay_fn;
    type->fp_setNeedsDisplayInRect = (void(*)(::g::iOS::UIKit::UIView*, ::g::iOS::CoreGraphics::CGRect*))NativeViewHost__ViewHost__setNeedsDisplayInRect_fn;
    type->interface1.fp_convertPointToCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGPoint*, uObject*, ::g::iOS::CoreGraphics::CGPoint*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertPointToCoordinateSpace_fn;
    type->interface1.fp_convertPointFromCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGPoint*, uObject*, ::g::iOS::CoreGraphics::CGPoint*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertPointFromCoordinateSpace_fn;
    type->interface1.fp_convertRectToCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*, uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertRectToCoordinateSpace_fn;
    type->interface1.fp_convertRectFromCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*, uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertRectFromCoordinateSpace_fn;
    type->interface1.fp_bounds = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__bounds_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    ::TYPES[18] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::UIKit::UIView_type, interface0),
        ::g::iOS::UIKit::IUICoordinateSpace_typeof(), offsetof(::g::iOS::UIKit::UIView_type, interface1));
    type->SetFields(1,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::iOS::NativeViews::NativeViewHost__ViewHost, _invalidate), 0);
    return type;
}

// public ViewHost(Uno.Action invalidate) :597
void NativeViewHost__ViewHost__ctor_10_fn(NativeViewHost__ViewHost* __this, uDelegate* invalidate)
{
    __this->ctor_10(invalidate);
}

// public ViewHost New(Uno.Action invalidate) :597
void NativeViewHost__ViewHost__New11_fn(uDelegate* invalidate, NativeViewHost__ViewHost** __retval)
{
    *__retval = NativeViewHost__ViewHost::New11(invalidate);
}

// public override sealed void setNeedsDisplay() :602
void NativeViewHost__ViewHost__setNeedsDisplay_fn(NativeViewHost__ViewHost* __this)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeViewHost.ViewHost", "setNeedsDisplay()");
    uPtr(__this->_invalidate)->InvokeVoid();
}

// public override sealed void setNeedsDisplayInRect(iOS.CoreGraphics.CGRect rect) :607
void NativeViewHost__ViewHost__setNeedsDisplayInRect_fn(NativeViewHost__ViewHost* __this, ::g::iOS::CoreGraphics::CGRect* rect)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeViewHost.ViewHost", "setNeedsDisplayInRect(iOS.CoreGraphics.CGRect)");
    uPtr(__this->_invalidate)->InvokeVoid();
}

// public ViewHost(Uno.Action invalidate) [instance] :597
void NativeViewHost__ViewHost::ctor_10(uDelegate* invalidate)
{
    uStackFrame __("Fuse.iOS.NativeViews.NativeViewHost.ViewHost", ".ctor(Uno.Action)");
    ctor_8();
    _invalidate = invalidate;
}

// public ViewHost New(Uno.Action invalidate) [static] :597
NativeViewHost__ViewHost* NativeViewHost__ViewHost::New11(uDelegate* invalidate)
{
    NativeViewHost__ViewHost* obj1 = (NativeViewHost__ViewHost*)uNew(NativeViewHost__ViewHost_typeof());
    obj1->ctor_10(invalidate);
    return obj1;
}
// }

}}}} // ::g::Fuse::iOS::NativeViews
