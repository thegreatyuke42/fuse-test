// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/FuseJS/$.uno#17'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct UserEvents;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// public sealed class UserEvents :1219
// {
uType* UserEvents_typeof();
void UserEvents__ctor__fn(UserEvents* __this);
void UserEvents__CreateModule_fn(::g::Fuse::Scripting::NativeModule** __retval);
void UserEvents__New1_fn(UserEvents** __retval);
void UserEvents__Raise_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);

struct UserEvents : uObject
{
    void ctor_();
    static ::g::Fuse::Scripting::NativeModule* CreateModule();
    static UserEvents* New1();
    static uObject* Raise(::g::Fuse::Scripting::Context* context, uArray* args);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
