// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/FuseJS/$.uno#7'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Email;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// public sealed class Email :471
// {
uType* Email_typeof();
void Email__ctor__fn(Email* __this);
void Email__Compose_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Email__CreateModule_fn(::g::Fuse::Scripting::NativeModule** __retval);
void Email__New1_fn(Email** __retval);

struct Email : uObject
{
    void ctor_();
    static uObject* Compose(::g::Fuse::Scripting::Context* context, uArray* args);
    static ::g::Fuse::Scripting::NativeModule* CreateModule();
    static Email* New1();
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
