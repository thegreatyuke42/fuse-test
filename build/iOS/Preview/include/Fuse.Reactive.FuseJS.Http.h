// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/FuseJS/$.uno#18'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Http;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// internal sealed class Http :1269
// {
uType* Http_typeof();
void Http__ctor__fn(Http* __this, ::g::Fuse::Scripting::Context* context);
void Http__CreateClient_fn(Http* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Http__New1_fn(::g::Fuse::Scripting::Context* context, Http** __retval);

struct Http : uObject
{
    void ctor_(::g::Fuse::Scripting::Context* context);
    uObject* CreateClient(::g::Fuse::Scripting::Context* context, uArray* args);
    static Http* New1(::g::Fuse::Scripting::Context* context);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
