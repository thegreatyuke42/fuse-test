// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/FuseJS/$.uno#6'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Phone;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// public sealed class Phone :446
// {
uType* Phone_typeof();
void Phone__ctor__fn(Phone* __this);
void Phone__Call_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Phone__CreateModule_fn(::g::Fuse::Scripting::NativeModule** __retval);
void Phone__New1_fn(Phone** __retval);

struct Phone : uObject
{
    void ctor_();
    static uObject* Call(::g::Fuse::Scripting::Context* context, uArray* args);
    static ::g::Fuse::Scripting::NativeModule* CreateModule();
    static Phone* New1();
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
