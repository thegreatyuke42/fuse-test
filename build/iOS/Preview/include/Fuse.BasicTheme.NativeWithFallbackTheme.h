// This file was generated based on '/usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.14/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace BasicTheme{struct NativeWithFallbackTheme;}}}
namespace g{namespace Fuse{struct Theme;}}

namespace g{
namespace Fuse{
namespace BasicTheme{

// public sealed class NativeWithFallbackTheme :31
// {
uType* NativeWithFallbackTheme_typeof();
void NativeWithFallbackTheme__ctor__fn(NativeWithFallbackTheme* __this);
void NativeWithFallbackTheme__New1_fn(NativeWithFallbackTheme** __retval);
void NativeWithFallbackTheme__get_Singleton_fn(::g::Fuse::Theme** __retval);

struct NativeWithFallbackTheme : uObject
{
    void ctor_();
    static NativeWithFallbackTheme* New1();
    static ::g::Fuse::Theme* Singleton();
};
// }

}}} // ::g::Fuse::BasicTheme
