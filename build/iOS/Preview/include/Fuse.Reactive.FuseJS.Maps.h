// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/FuseJS/$.uno#5'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Maps;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// public sealed class Maps :401
// {
uType* Maps_typeof();
void Maps__ctor__fn(Maps* __this);
void Maps__CreateModule_fn(::g::Fuse::Scripting::NativeModule** __retval);
void Maps__New1_fn(Maps** __retval);
void Maps__OpenAt_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Maps__SearchNear_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Maps__SearchNearby_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);

struct Maps : uObject
{
    void ctor_();
    static ::g::Fuse::Scripting::NativeModule* CreateModule();
    static Maps* New1();
    static uObject* OpenAt(::g::Fuse::Scripting::Context* context, uArray* args);
    static uObject* SearchNear(::g::Fuse::Scripting::Context* context, uArray* args);
    static uObject* SearchNearby(::g::Fuse::Scripting::Context* context, uArray* args);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
