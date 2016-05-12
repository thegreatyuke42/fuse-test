// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.27.2/class/$.uno#318'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE GLKView
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::GLKit::GLKView*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::GLKit::GLKView_typeof()

#include <GLKit/GLKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.GLKit.GLKView.h>
#include <iOS.GLKit.GLKViewDrawableDepthFormat.h>
#include <iOS.OpenGLES.EAGLContext.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>

namespace g{
namespace iOS{
namespace GLKit{

// public sealed extern class GLKView :24989
// {
::g::iOS::UIKit::UIView_type* GLKView_typeof()
{
    static uSStrong< ::g::iOS::UIKit::UIView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(GLKView);
    options.TypeSize = sizeof(::g::iOS::UIKit::UIView_type);
    type = (::g::iOS::UIKit::UIView_type*)uClassType::New("iOS.GLKit.GLKView", options);
    type->SetBase(::g::iOS::UIKit::UIView_typeof());
    type->fp_ctor_ = (void*)GLKView__New9_fn;
    type->interface1.fp_convertPointToCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGPoint*, uObject*, ::g::iOS::CoreGraphics::CGPoint*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertPointToCoordinateSpace_fn;
    type->interface1.fp_convertPointFromCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGPoint*, uObject*, ::g::iOS::CoreGraphics::CGPoint*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertPointFromCoordinateSpace_fn;
    type->interface1.fp_convertRectToCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*, uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertRectToCoordinateSpace_fn;
    type->interface1.fp_convertRectFromCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*, uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertRectFromCoordinateSpace_fn;
    type->interface1.fp_bounds = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__bounds_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::UIKit::UIView_type, interface0),
        ::g::iOS::UIKit::IUICoordinateSpace_typeof(), offsetof(::g::iOS::UIKit::UIView_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(15,
        new uFunction("bindDrawable", NULL, (void*)GLKView__bindDrawable_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("deleteDrawable", NULL, (void*)GLKView__deleteDrawable_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("display", NULL, (void*)GLKView__display_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("drawableDepthFormat", NULL, (void*)GLKView__drawableDepthFormat_fn, 0, false, ::g::iOS::GLKit::GLKViewDrawableDepthFormat_typeof(), 0),
        new uFunction("get_DrawableDepthFormat", NULL, (void*)GLKView__get_DrawableDepthFormat_fn, 0, false, ::g::iOS::GLKit::GLKViewDrawableDepthFormat_typeof(), 0),
        new uFunction("set_DrawableDepthFormat", NULL, (void*)GLKView__set_DrawableDepthFormat_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::GLKit::GLKViewDrawableDepthFormat_typeof()),
        new uFunction("drawableHeight", NULL, (void*)GLKView__drawableHeight_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("drawableWidth", NULL, (void*)GLKView__drawableWidth_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("enableSetNeedsDisplay", NULL, (void*)GLKView__enableSetNeedsDisplay_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_EnableSetNeedsDisplay", NULL, (void*)GLKView__get_EnableSetNeedsDisplay_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_EnableSetNeedsDisplay", NULL, (void*)GLKView__set_EnableSetNeedsDisplay_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)GLKView__New9_fn, 0, true, GLKView_typeof(), 0),
        new uFunction("setContext", NULL, (void*)GLKView__setContext_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::OpenGLES::EAGLContext_typeof()),
        new uFunction("setDrawableDepthFormat", NULL, (void*)GLKView__setDrawableDepthFormat_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::GLKit::GLKViewDrawableDepthFormat_typeof()),
        new uFunction("setEnableSetNeedsDisplay", NULL, (void*)GLKView__setEnableSetNeedsDisplay_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public GLKView() :24992
void GLKView__ctor_8_fn(GLKView* __this)
{
    __this->ctor_8();
}

// public extern void bindDrawable() :25060
void GLKView__bindDrawable_fn(GLKView* __this)
{
    __this->bindDrawable();
}

// public extern void deleteDrawable() :25063
void GLKView__deleteDrawable_fn(GLKView* __this)
{
    __this->deleteDrawable();
}

// public extern void display() :25066
void GLKView__display_fn(GLKView* __this)
{
    __this->display();
}

// public extern iOS.GLKit.GLKViewDrawableDepthFormat drawableDepthFormat() :25093
void GLKView__drawableDepthFormat_fn(GLKView* __this, int* __retval)
{
    *__retval = __this->drawableDepthFormat();
}

// public iOS.GLKit.GLKViewDrawableDepthFormat get_DrawableDepthFormat() :25029
void GLKView__get_DrawableDepthFormat_fn(GLKView* __this, int* __retval)
{
    *__retval = __this->DrawableDepthFormat();
}

// public void set_DrawableDepthFormat(iOS.GLKit.GLKViewDrawableDepthFormat value) :25030
void GLKView__set_DrawableDepthFormat_fn(GLKView* __this, int* value)
{
    __this->DrawableDepthFormat(*value);
}

// public extern int drawableHeight() :25084
void GLKView__drawableHeight_fn(GLKView* __this, int* __retval)
{
    *__retval = __this->drawableHeight();
}

// public extern int drawableWidth() :25081
void GLKView__drawableWidth_fn(GLKView* __this, int* __retval)
{
    *__retval = __this->drawableWidth();
}

// public extern bool enableSetNeedsDisplay() :25114
void GLKView__enableSetNeedsDisplay_fn(GLKView* __this, bool* __retval)
{
    *__retval = __this->enableSetNeedsDisplay();
}

// public bool get_EnableSetNeedsDisplay() :25052
void GLKView__get_EnableSetNeedsDisplay_fn(GLKView* __this, bool* __retval)
{
    *__retval = __this->EnableSetNeedsDisplay();
}

// public void set_EnableSetNeedsDisplay(bool value) :25053
void GLKView__set_EnableSetNeedsDisplay_fn(GLKView* __this, bool* value)
{
    __this->EnableSetNeedsDisplay(*value);
}

// public GLKView New() :24992
void GLKView__New9_fn(GLKView** __retval)
{
    *__retval = GLKView::New9();
}

// public extern void setContext(iOS.OpenGLES.EAGLContext context) :25078
void GLKView__setContext_fn(GLKView* __this, ::g::iOS::OpenGLES::EAGLContext* context_)
{
    __this->setContext(context_);
}

// public extern void setDrawableDepthFormat(iOS.GLKit.GLKViewDrawableDepthFormat drawableDepthFormat) :25096
void GLKView__setDrawableDepthFormat_fn(GLKView* __this, int* drawableDepthFormat_)
{
    __this->setDrawableDepthFormat(*drawableDepthFormat_);
}

// public extern void setEnableSetNeedsDisplay(bool enableSetNeedsDisplay) :25117
void GLKView__setEnableSetNeedsDisplay_fn(GLKView* __this, bool* enableSetNeedsDisplay_)
{
    __this->setEnableSetNeedsDisplay(*enableSetNeedsDisplay_);
}

// public GLKView() [instance] :24992
void GLKView::ctor_8()
{
    uStackFrame __("iOS.GLKit.GLKView", ".ctor()");
    ctor_6();
}

// public extern void bindDrawable() [instance] :25060
void GLKView::bindDrawable()
{
    uStackFrame __("iOS.GLKit.GLKView", "bindDrawable()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(bindDrawable));
}

// public extern void deleteDrawable() [instance] :25063
void GLKView::deleteDrawable()
{
    uStackFrame __("iOS.GLKit.GLKView", "deleteDrawable()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(deleteDrawable));
}

// public extern void display() [instance] :25066
void GLKView::display()
{
    uStackFrame __("iOS.GLKit.GLKView", "display()");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(display));
}

// public extern iOS.GLKit.GLKViewDrawableDepthFormat drawableDepthFormat() [instance] :25093
int GLKView::drawableDepthFormat()
{
    uStackFrame __("iOS.GLKit.GLKView", "drawableDepthFormat()");
    ::GLKViewDrawableDepthFormat __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::GLKViewDrawableDepthFormat, @selector(drawableDepthFormat));
    return int(__return);
}

// public iOS.GLKit.GLKViewDrawableDepthFormat get_DrawableDepthFormat() [instance] :25029
int GLKView::DrawableDepthFormat()
{
    uStackFrame __("iOS.GLKit.GLKView", "get_DrawableDepthFormat()");
    return drawableDepthFormat();
}

// public void set_DrawableDepthFormat(iOS.GLKit.GLKViewDrawableDepthFormat value) [instance] :25030
void GLKView::DrawableDepthFormat(int value)
{
    uStackFrame __("iOS.GLKit.GLKView", "set_DrawableDepthFormat(iOS.GLKit.GLKViewDrawableDepthFormat)");
    setDrawableDepthFormat(value);
}

// public extern int drawableHeight() [instance] :25084
int GLKView::drawableHeight()
{
    uStackFrame __("iOS.GLKit.GLKView", "drawableHeight()");
    long __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, long, @selector(drawableHeight));
    return (int)__return;
}

// public extern int drawableWidth() [instance] :25081
int GLKView::drawableWidth()
{
    uStackFrame __("iOS.GLKit.GLKView", "drawableWidth()");
    long __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, long, @selector(drawableWidth));
    return (int)__return;
}

// public extern bool enableSetNeedsDisplay() [instance] :25114
bool GLKView::enableSetNeedsDisplay()
{
    uStackFrame __("iOS.GLKit.GLKView", "enableSetNeedsDisplay()");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(enableSetNeedsDisplay));
    return (bool)__return;
}

// public bool get_EnableSetNeedsDisplay() [instance] :25052
bool GLKView::EnableSetNeedsDisplay()
{
    uStackFrame __("iOS.GLKit.GLKView", "get_EnableSetNeedsDisplay()");
    return enableSetNeedsDisplay();
}

// public void set_EnableSetNeedsDisplay(bool value) [instance] :25053
void GLKView::EnableSetNeedsDisplay(bool value)
{
    uStackFrame __("iOS.GLKit.GLKView", "set_EnableSetNeedsDisplay(bool)");
    setEnableSetNeedsDisplay(value);
}

// public extern void setContext(iOS.OpenGLES.EAGLContext context) [instance] :25078
void GLKView::setContext(::g::iOS::OpenGLES::EAGLContext* context_)
{
    uStackFrame __("iOS.GLKit.GLKView", "setContext(iOS.OpenGLES.EAGLContext)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setContext:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)context_));
}

// public extern void setDrawableDepthFormat(iOS.GLKit.GLKViewDrawableDepthFormat drawableDepthFormat) [instance] :25096
void GLKView::setDrawableDepthFormat(int drawableDepthFormat_)
{
    uStackFrame __("iOS.GLKit.GLKView", "setDrawableDepthFormat(iOS.GLKit.GLKViewDrawableDepthFormat)");
    int drawableDepthFormat__ = drawableDepthFormat_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setDrawableDepthFormat:),
        ::GLKViewDrawableDepthFormat(drawableDepthFormat__));
}

// public extern void setEnableSetNeedsDisplay(bool enableSetNeedsDisplay) [instance] :25117
void GLKView::setEnableSetNeedsDisplay(bool enableSetNeedsDisplay_)
{
    uStackFrame __("iOS.GLKit.GLKView", "setEnableSetNeedsDisplay(bool)");
    bool enableSetNeedsDisplay__ = enableSetNeedsDisplay_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setEnableSetNeedsDisplay:),
        (BOOL)enableSetNeedsDisplay__);
}

// public GLKView New() [static] :24992
GLKView* GLKView::New9()
{
    GLKView* obj1 = (GLKView*)uNew(GLKView_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

}}} // ::g::iOS::GLKit
