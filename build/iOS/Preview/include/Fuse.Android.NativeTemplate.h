// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Android/0.27.14/$.uno#5'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.ITemplate.h>
namespace g{namespace Fuse{namespace Android{struct NativeTemplate;}}}

namespace g{
namespace Fuse{
namespace Android{

// internal sealed class NativeTemplate :530
// {
struct NativeTemplate_type : uType
{
    ::g::Uno::UX::ITemplate interface0;
};

NativeTemplate_type* NativeTemplate_typeof();
void NativeTemplate__ctor__fn(NativeTemplate* __this);
void NativeTemplate__Apply_fn(NativeTemplate* __this, uObject* obj, bool* __retval);
void NativeTemplate__New1_fn(NativeTemplate** __retval);

struct NativeTemplate : uObject
{
    void ctor_();
    bool Apply(uObject* obj);
    static NativeTemplate* New1();
};
// }

}}} // ::g::Fuse::Android
