// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/FuseJS/$.uno#9'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct InterApp;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeEvent;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// public sealed class InterApp :522
// {
uType* InterApp_typeof();
void InterApp__ctor__fn(InterApp* __this);
void InterApp__CreateModule_fn(::g::Fuse::Scripting::NativeModule** __retval);
void InterApp__LaunchUri_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void InterApp__New1_fn(InterApp** __retval);
void InterApp__OnJsInitialized_fn(uObject* sender, ::g::Uno::EventArgs* args);
void InterApp__OnReceivedUri_fn(uObject* sender, uString* uri);

struct InterApp : uObject
{
    static uSStrong< ::g::Uno::Collections::List*> _cachedUris_;
    static uSStrong< ::g::Uno::Collections::List*>& _cachedUris() { return InterApp_typeof()->Init(), _cachedUris_; }
    static bool _jsInitialized_;
    static bool& _jsInitialized() { return InterApp_typeof()->Init(), _jsInitialized_; }
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*> _onReceivedUri_;
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*>& _onReceivedUri() { return InterApp_typeof()->Init(), _onReceivedUri_; }

    void ctor_();
    static ::g::Fuse::Scripting::NativeModule* CreateModule();
    static uObject* LaunchUri(::g::Fuse::Scripting::Context* context, uArray* args);
    static InterApp* New1();
    static void OnJsInitialized(uObject* sender, ::g::Uno::EventArgs* args);
    static void OnReceivedUri(uObject* sender, uString* uri);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
