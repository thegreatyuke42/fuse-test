// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.27.14/$.uno#1'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScriptCore{struct Marshaller;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScriptCore{

// internal sealed extern class Marshaller :63
// {
uType* Marshaller_typeof();
void Marshaller__ctor__fn(Marshaller* __this, uObject* context);
void Marshaller__New1_fn(uObject* context, Marshaller** __retval);
void Marshaller__Unwrap_fn(Marshaller* __this, uObject* obj, uObject** __retval);
void Marshaller__Unwrap1_fn(Marshaller* __this, uArray* obj, uArray** __retval);
void Marshaller__Wrap_fn(Marshaller* __this, uObject* value, uObject** __retval);

struct Marshaller : uObject
{
    uStrong<uObject*> _arrayType;
    uStrong<uObject*> _context;
    uStrong<uObject*> _functionType;

    void ctor_(uObject* context);
    uObject* Unwrap(uObject* obj);
    uArray* Unwrap1(uArray* obj);
    uObject* Wrap(uObject* value);
    static Marshaller* New1(uObject* context);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScriptCore
