// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.27.14/$.uno#3'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.ITemplate.h>
namespace g{namespace Fuse{namespace Controls{struct ContentControl;}}}
namespace g{namespace Fuse{namespace Controls{struct Control;}}}
namespace g{namespace Fuse{namespace Controls{struct ParentControl;}}}
namespace g{namespace Fuse{namespace iOS{struct NativeTemplate;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace iOS{

// internal sealed class NativeTemplate :779
// {
struct NativeTemplate_type : uType
{
    ::g::Uno::UX::ITemplate interface0;
};

NativeTemplate_type* NativeTemplate_typeof();
void NativeTemplate__ctor__fn(NativeTemplate* __this);
void NativeTemplate__Apply_fn(NativeTemplate* __this, ::g::Fuse::Controls::ContentControl* contentControl, bool* __retval);
void NativeTemplate__Apply1_fn(NativeTemplate* __this, ::g::Fuse::Controls::Control* control, bool* __retval);
void NativeTemplate__Apply2_fn(NativeTemplate* __this, ::g::Fuse::Controls::ParentControl* parentControl, bool* __retval);
void NativeTemplate__Apply3_fn(NativeTemplate* __this, uObject* obj, bool* __retval);
void NativeTemplate__HaveGraphicsViewAncestor_fn(NativeTemplate* __this, ::g::Fuse::Node* node, bool* __retval);
void NativeTemplate__New1_fn(NativeTemplate** __retval);

struct NativeTemplate : uObject
{
    void ctor_();
    bool Apply(::g::Fuse::Controls::ContentControl* contentControl);
    bool Apply1(::g::Fuse::Controls::Control* control);
    bool Apply2(::g::Fuse::Controls::ParentControl* parentControl);
    bool Apply3(uObject* obj);
    bool HaveGraphicsViewAncestor(::g::Fuse::Node* node);
    static NativeTemplate* New1();
};
// }

}}} // ::g::Fuse::iOS
