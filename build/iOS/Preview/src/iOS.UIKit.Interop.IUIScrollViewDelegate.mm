// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.27.2/interface/wrapper/$.uno#184'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UIScrollViewDelegate
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::IUIScrollViewDelegate_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.UIKit.Interop.IUIScrollViewDelegate.h>
#include <iOS.UIKit.UIScrollView.h>
#include <iOS.UIKit.UIView.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>

namespace g{
namespace iOS{
namespace UIKit{
namespace Interop{

// public sealed extern class IUIScrollViewDelegate :7166
// {
IUIScrollViewDelegate_type* IUIScrollViewDelegate_typeof()
{
    static uSStrong<IUIScrollViewDelegate_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(IUIScrollViewDelegate);
    options.TypeSize = sizeof(IUIScrollViewDelegate_type);
    type = (IUIScrollViewDelegate_type*)uClassType::New("iOS.UIKit.Interop.IUIScrollViewDelegate", options);
    type->SetBase(::g::ObjC::Bindings::Object_typeof());
    type->interface1.fp_scrollViewDidScroll = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))IUIScrollViewDelegate__scrollViewDidScroll_fn;
    type->interface1.fp_scrollViewDidZoom = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))IUIScrollViewDelegate__scrollViewDidZoom_fn;
    type->interface1.fp_scrollViewWillBeginDragging = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))IUIScrollViewDelegate__scrollViewWillBeginDragging_fn;
    type->interface1.fp_scrollViewDidEndDraggingWillDecelerate = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*, bool*))IUIScrollViewDelegate__scrollViewDidEndDraggingWillDecelerate_fn;
    type->interface1.fp_scrollViewWillBeginDecelerating = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))IUIScrollViewDelegate__scrollViewWillBeginDecelerating_fn;
    type->interface1.fp_scrollViewDidEndDecelerating = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))IUIScrollViewDelegate__scrollViewDidEndDecelerating_fn;
    type->interface1.fp_scrollViewDidEndScrollingAnimation = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))IUIScrollViewDelegate__scrollViewDidEndScrollingAnimation_fn;
    type->interface1.fp_viewForZoomingInScrollView = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*, ::g::iOS::UIKit::UIView**))IUIScrollViewDelegate__viewForZoomingInScrollView_fn;
    type->interface1.fp_scrollViewWillBeginZoomingWithView = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*, ::g::iOS::UIKit::UIView*))IUIScrollViewDelegate__scrollViewWillBeginZoomingWithView_fn;
    type->interface1.fp_scrollViewDidEndZoomingWithViewAtScale = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*, ::g::iOS::UIKit::UIView*, double*))IUIScrollViewDelegate__scrollViewDidEndZoomingWithViewAtScale_fn;
    type->interface1.fp_scrollViewShouldScrollToTop = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*, bool*))IUIScrollViewDelegate__scrollViewShouldScrollToTop_fn;
    type->interface1.fp_scrollViewDidScrollToTop = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))IUIScrollViewDelegate__scrollViewDidScrollToTop_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(IUIScrollViewDelegate_type, interface0),
        ::g::iOS::UIKit::IUIScrollViewDelegate_typeof(), offsetof(IUIScrollViewDelegate_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(12,
        new uFunction("scrollViewDidEndDecelerating", NULL, (void*)IUIScrollViewDelegate__scrollViewDidEndDecelerating_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIScrollView_typeof()),
        new uFunction("scrollViewDidEndDraggingWillDecelerate", NULL, (void*)IUIScrollViewDelegate__scrollViewDidEndDraggingWillDecelerate_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::UIKit::UIScrollView_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("scrollViewDidEndScrollingAnimation", NULL, (void*)IUIScrollViewDelegate__scrollViewDidEndScrollingAnimation_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIScrollView_typeof()),
        new uFunction("scrollViewDidEndZoomingWithViewAtScale", NULL, (void*)IUIScrollViewDelegate__scrollViewDidEndZoomingWithViewAtScale_fn, 0, false, uVoid_typeof(), 3, ::g::iOS::UIKit::UIScrollView_typeof(), ::g::iOS::UIKit::UIView_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("scrollViewDidScroll", NULL, (void*)IUIScrollViewDelegate__scrollViewDidScroll_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIScrollView_typeof()),
        new uFunction("scrollViewDidScrollToTop", NULL, (void*)IUIScrollViewDelegate__scrollViewDidScrollToTop_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIScrollView_typeof()),
        new uFunction("scrollViewDidZoom", NULL, (void*)IUIScrollViewDelegate__scrollViewDidZoom_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIScrollView_typeof()),
        new uFunction("scrollViewShouldScrollToTop", NULL, (void*)IUIScrollViewDelegate__scrollViewShouldScrollToTop_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::iOS::UIKit::UIScrollView_typeof()),
        new uFunction("scrollViewWillBeginDecelerating", NULL, (void*)IUIScrollViewDelegate__scrollViewWillBeginDecelerating_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIScrollView_typeof()),
        new uFunction("scrollViewWillBeginDragging", NULL, (void*)IUIScrollViewDelegate__scrollViewWillBeginDragging_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIScrollView_typeof()),
        new uFunction("scrollViewWillBeginZoomingWithView", NULL, (void*)IUIScrollViewDelegate__scrollViewWillBeginZoomingWithView_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::UIKit::UIScrollView_typeof(), ::g::iOS::UIKit::UIView_typeof()),
        new uFunction("viewForZoomingInScrollView", NULL, (void*)IUIScrollViewDelegate__viewForZoomingInScrollView_fn, 0, false, ::g::iOS::UIKit::UIView_typeof(), 1, ::g::iOS::UIKit::UIScrollView_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public extern void scrollViewDidEndDecelerating(iOS.UIKit.UIScrollView scrollView) :7190
void IUIScrollViewDelegate__scrollViewDidEndDecelerating_fn(IUIScrollViewDelegate* __this, ::g::iOS::UIKit::UIScrollView* scrollView_)
{
    __this->scrollViewDidEndDecelerating(scrollView_);
}

// public extern void scrollViewDidEndDraggingWillDecelerate(iOS.UIKit.UIScrollView scrollView, bool decelerate) :7184
void IUIScrollViewDelegate__scrollViewDidEndDraggingWillDecelerate_fn(IUIScrollViewDelegate* __this, ::g::iOS::UIKit::UIScrollView* scrollView_, bool* decelerate_)
{
    __this->scrollViewDidEndDraggingWillDecelerate(scrollView_, *decelerate_);
}

// public extern void scrollViewDidEndScrollingAnimation(iOS.UIKit.UIScrollView scrollView) :7193
void IUIScrollViewDelegate__scrollViewDidEndScrollingAnimation_fn(IUIScrollViewDelegate* __this, ::g::iOS::UIKit::UIScrollView* scrollView_)
{
    __this->scrollViewDidEndScrollingAnimation(scrollView_);
}

// public extern void scrollViewDidEndZoomingWithViewAtScale(iOS.UIKit.UIScrollView scrollView, iOS.UIKit.UIView view, double scale) :7202
void IUIScrollViewDelegate__scrollViewDidEndZoomingWithViewAtScale_fn(IUIScrollViewDelegate* __this, ::g::iOS::UIKit::UIScrollView* scrollView_, ::g::iOS::UIKit::UIView* view_, double* scale_)
{
    __this->scrollViewDidEndZoomingWithViewAtScale(scrollView_, view_, *scale_);
}

// public extern void scrollViewDidScroll(iOS.UIKit.UIScrollView scrollView) :7175
void IUIScrollViewDelegate__scrollViewDidScroll_fn(IUIScrollViewDelegate* __this, ::g::iOS::UIKit::UIScrollView* scrollView_)
{
    __this->scrollViewDidScroll(scrollView_);
}

// public extern void scrollViewDidScrollToTop(iOS.UIKit.UIScrollView scrollView) :7208
void IUIScrollViewDelegate__scrollViewDidScrollToTop_fn(IUIScrollViewDelegate* __this, ::g::iOS::UIKit::UIScrollView* scrollView_)
{
    __this->scrollViewDidScrollToTop(scrollView_);
}

// public extern void scrollViewDidZoom(iOS.UIKit.UIScrollView scrollView) :7178
void IUIScrollViewDelegate__scrollViewDidZoom_fn(IUIScrollViewDelegate* __this, ::g::iOS::UIKit::UIScrollView* scrollView_)
{
    __this->scrollViewDidZoom(scrollView_);
}

// public extern bool scrollViewShouldScrollToTop(iOS.UIKit.UIScrollView scrollView) :7205
void IUIScrollViewDelegate__scrollViewShouldScrollToTop_fn(IUIScrollViewDelegate* __this, ::g::iOS::UIKit::UIScrollView* scrollView_, bool* __retval)
{
    *__retval = __this->scrollViewShouldScrollToTop(scrollView_);
}

// public extern void scrollViewWillBeginDecelerating(iOS.UIKit.UIScrollView scrollView) :7187
void IUIScrollViewDelegate__scrollViewWillBeginDecelerating_fn(IUIScrollViewDelegate* __this, ::g::iOS::UIKit::UIScrollView* scrollView_)
{
    __this->scrollViewWillBeginDecelerating(scrollView_);
}

// public extern void scrollViewWillBeginDragging(iOS.UIKit.UIScrollView scrollView) :7181
void IUIScrollViewDelegate__scrollViewWillBeginDragging_fn(IUIScrollViewDelegate* __this, ::g::iOS::UIKit::UIScrollView* scrollView_)
{
    __this->scrollViewWillBeginDragging(scrollView_);
}

// public extern void scrollViewWillBeginZoomingWithView(iOS.UIKit.UIScrollView scrollView, iOS.UIKit.UIView view) :7199
void IUIScrollViewDelegate__scrollViewWillBeginZoomingWithView_fn(IUIScrollViewDelegate* __this, ::g::iOS::UIKit::UIScrollView* scrollView_, ::g::iOS::UIKit::UIView* view_)
{
    __this->scrollViewWillBeginZoomingWithView(scrollView_, view_);
}

// public extern iOS.UIKit.UIView viewForZoomingInScrollView(iOS.UIKit.UIScrollView scrollView) :7196
void IUIScrollViewDelegate__viewForZoomingInScrollView_fn(IUIScrollViewDelegate* __this, ::g::iOS::UIKit::UIScrollView* scrollView_, ::g::iOS::UIKit::UIView** __retval)
{
    *__retval = __this->viewForZoomingInScrollView(scrollView_);
}

// public extern void scrollViewDidEndDecelerating(iOS.UIKit.UIScrollView scrollView) [instance] :7190
void IUIScrollViewDelegate::scrollViewDidEndDecelerating(::g::iOS::UIKit::UIScrollView* scrollView_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIScrollViewDelegate", "scrollViewDidEndDecelerating(iOS.UIKit.UIScrollView)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(scrollViewDidEndDecelerating:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
}

// public extern void scrollViewDidEndDraggingWillDecelerate(iOS.UIKit.UIScrollView scrollView, bool decelerate) [instance] :7184
void IUIScrollViewDelegate::scrollViewDidEndDraggingWillDecelerate(::g::iOS::UIKit::UIScrollView* scrollView_, bool decelerate_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIScrollViewDelegate", "scrollViewDidEndDraggingWillDecelerate(iOS.UIKit.UIScrollView,bool)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(scrollViewDidEndDragging:willDecelerate:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_),
        (BOOL)decelerate_);
}

// public extern void scrollViewDidEndScrollingAnimation(iOS.UIKit.UIScrollView scrollView) [instance] :7193
void IUIScrollViewDelegate::scrollViewDidEndScrollingAnimation(::g::iOS::UIKit::UIScrollView* scrollView_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIScrollViewDelegate", "scrollViewDidEndScrollingAnimation(iOS.UIKit.UIScrollView)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(scrollViewDidEndScrollingAnimation:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
}

// public extern void scrollViewDidEndZoomingWithViewAtScale(iOS.UIKit.UIScrollView scrollView, iOS.UIKit.UIView view, double scale) [instance] :7202
void IUIScrollViewDelegate::scrollViewDidEndZoomingWithViewAtScale(::g::iOS::UIKit::UIScrollView* scrollView_, ::g::iOS::UIKit::UIView* view_, double scale_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIScrollViewDelegate", "scrollViewDidEndZoomingWithViewAtScale(iOS.UIKit.UIScrollView,iOS.UIKit.UIView,double)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(scrollViewDidEndZooming:withView:atScale:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_),
        (CGFloat)scale_);
}

// public extern void scrollViewDidScroll(iOS.UIKit.UIScrollView scrollView) [instance] :7175
void IUIScrollViewDelegate::scrollViewDidScroll(::g::iOS::UIKit::UIScrollView* scrollView_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIScrollViewDelegate", "scrollViewDidScroll(iOS.UIKit.UIScrollView)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(scrollViewDidScroll:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
}

// public extern void scrollViewDidScrollToTop(iOS.UIKit.UIScrollView scrollView) [instance] :7208
void IUIScrollViewDelegate::scrollViewDidScrollToTop(::g::iOS::UIKit::UIScrollView* scrollView_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIScrollViewDelegate", "scrollViewDidScrollToTop(iOS.UIKit.UIScrollView)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(scrollViewDidScrollToTop:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
}

// public extern void scrollViewDidZoom(iOS.UIKit.UIScrollView scrollView) [instance] :7178
void IUIScrollViewDelegate::scrollViewDidZoom(::g::iOS::UIKit::UIScrollView* scrollView_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIScrollViewDelegate", "scrollViewDidZoom(iOS.UIKit.UIScrollView)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(scrollViewDidZoom:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
}

// public extern bool scrollViewShouldScrollToTop(iOS.UIKit.UIScrollView scrollView) [instance] :7205
bool IUIScrollViewDelegate::scrollViewShouldScrollToTop(::g::iOS::UIKit::UIScrollView* scrollView_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIScrollViewDelegate", "scrollViewShouldScrollToTop(iOS.UIKit.UIScrollView)");
    BOOL __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, BOOL, @selector(scrollViewShouldScrollToTop:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
    return (bool)__return;
}

// public extern void scrollViewWillBeginDecelerating(iOS.UIKit.UIScrollView scrollView) [instance] :7187
void IUIScrollViewDelegate::scrollViewWillBeginDecelerating(::g::iOS::UIKit::UIScrollView* scrollView_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIScrollViewDelegate", "scrollViewWillBeginDecelerating(iOS.UIKit.UIScrollView)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(scrollViewWillBeginDecelerating:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
}

// public extern void scrollViewWillBeginDragging(iOS.UIKit.UIScrollView scrollView) [instance] :7181
void IUIScrollViewDelegate::scrollViewWillBeginDragging(::g::iOS::UIKit::UIScrollView* scrollView_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIScrollViewDelegate", "scrollViewWillBeginDragging(iOS.UIKit.UIScrollView)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(scrollViewWillBeginDragging:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
}

// public extern void scrollViewWillBeginZoomingWithView(iOS.UIKit.UIScrollView scrollView, iOS.UIKit.UIView view) [instance] :7199
void IUIScrollViewDelegate::scrollViewWillBeginZoomingWithView(::g::iOS::UIKit::UIScrollView* scrollView_, ::g::iOS::UIKit::UIView* view_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIScrollViewDelegate", "scrollViewWillBeginZoomingWithView(iOS.UIKit.UIScrollView,iOS.UIKit.UIView)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(scrollViewWillBeginZooming:withView:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)view_));
}

// public extern iOS.UIKit.UIView viewForZoomingInScrollView(iOS.UIKit.UIScrollView scrollView) [instance] :7196
::g::iOS::UIKit::UIView* IUIScrollViewDelegate::viewForZoomingInScrollView(::g::iOS::UIKit::UIScrollView* scrollView_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIScrollViewDelegate", "viewForZoomingInScrollView(iOS.UIKit.UIScrollView)");
    ::UIView* __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, ::UIView*, @selector(viewForZoomingInScrollView:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)scrollView_));
    return (::g::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(__return, ::g::iOS::UIKit::UIView_typeof());
}
// }

}}}} // ::g::iOS::UIKit::Interop
