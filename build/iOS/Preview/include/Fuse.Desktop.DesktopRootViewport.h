// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Desktop/0.27.14/$.uno#1'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IViewport.h>
#include <Fuse.RootViewport.h>
namespace g{namespace Fuse{namespace Desktop{struct DesktopRootViewport;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventData;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Platform{struct PointerEventArgs;}}}
namespace g{namespace Uno{namespace Platform{struct Window;}}}

namespace g{
namespace Fuse{
namespace Desktop{

// internal sealed class DesktopRootViewport :73
// {
::g::Fuse::RootViewport_type* DesktopRootViewport_typeof();
void DesktopRootViewport__ctor_2_fn(DesktopRootViewport* __this, ::g::Uno::Platform::Window* window);
void DesktopRootViewport__New2_fn(::g::Uno::Platform::Window* window, DesktopRootViewport** __retval);
void DesktopRootViewport__OnInvalidateVisual_fn(DesktopRootViewport* __this);
void DesktopRootViewport__OnPointerLeft_fn(DesktopRootViewport* __this, uObject* sender, ::g::Uno::Platform::PointerEventArgs* args);
void DesktopRootViewport__OnPointerMoved_fn(DesktopRootViewport* __this, uObject* sender, ::g::Uno::Platform::PointerEventArgs* args);
void DesktopRootViewport__OnPointerPressed_fn(DesktopRootViewport* __this, uObject* sender, ::g::Uno::Platform::PointerEventArgs* args);
void DesktopRootViewport__OnPointerReleased_fn(DesktopRootViewport* __this, uObject* sender, ::g::Uno::Platform::PointerEventArgs* args);
void DesktopRootViewport__OnPointerWheelChanged_fn(DesktopRootViewport* __this, uObject* sender, ::g::Uno::Platform::PointerEventArgs* args);
void DesktopRootViewport__TranslatePointerEvent_fn(DesktopRootViewport* __this, ::g::Uno::Platform::PointerEventArgs* args, ::g::Fuse::Input::PointerEventData** __retval);

struct DesktopRootViewport : ::g::Fuse::RootViewport
{
    uStrong< ::g::Fuse::DrawContext*> _dc;
    bool _dirty;

    void ctor_2(::g::Uno::Platform::Window* window);
    void OnPointerLeft(uObject* sender, ::g::Uno::Platform::PointerEventArgs* args);
    void OnPointerMoved(uObject* sender, ::g::Uno::Platform::PointerEventArgs* args);
    void OnPointerPressed(uObject* sender, ::g::Uno::Platform::PointerEventArgs* args);
    void OnPointerReleased(uObject* sender, ::g::Uno::Platform::PointerEventArgs* args);
    void OnPointerWheelChanged(uObject* sender, ::g::Uno::Platform::PointerEventArgs* args);
    ::g::Fuse::Input::PointerEventData* TranslatePointerEvent(::g::Uno::Platform::PointerEventArgs* args);
    static DesktopRootViewport* New2(::g::Uno::Platform::Window* window);
};
// }

}}} // ::g::Fuse::Desktop
