// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#51'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct TranslationModes;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{

// public static class TranslationModes :7254
// {
uClassType* TranslationModes_typeof();
void TranslationModes__RelativeToSize_fn(::g::Uno::Float3* v, ::g::Fuse::Node* node, ::g::Uno::Float3* __retval);

struct TranslationModes : uObject
{
    static uSStrong<uObject*> Local_;
    static uSStrong<uObject*>& Local() { return TranslationModes_typeof()->Init(), Local_; }
    static uSStrong<uObject*> ParentSize_;
    static uSStrong<uObject*>& ParentSize() { return TranslationModes_typeof()->Init(), ParentSize_; }
    static uSStrong<uObject*> Size_;
    static uSStrong<uObject*>& Size() { return TranslationModes_typeof()->Init(), Size_; }

    static ::g::Uno::Float3 RelativeToSize(::g::Uno::Float3 v, ::g::Fuse::Node* node);
};
// }

}} // ::g::Fuse
