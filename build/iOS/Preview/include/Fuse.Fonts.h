// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#9'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Fuse{struct Fonts;}}

namespace g{
namespace Fuse{

// public static class Fonts :1391
// {
uClassType* Fonts_typeof();
void Fonts__get_Fallback_fn(::g::Fuse::Font** __retval);

struct Fonts : uObject
{
    static uSStrong< ::g::Fuse::Font*> _fallback_;
    static uSStrong< ::g::Fuse::Font*>& _fallback() { return _fallback_; }

    static ::g::Fuse::Font* Fallback();
};
// }

}} // ::g::Fuse
