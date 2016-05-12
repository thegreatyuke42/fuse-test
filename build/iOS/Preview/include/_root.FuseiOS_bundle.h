// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.27.14/.uno/package'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{struct GLProgram;}}}}}}
namespace g{struct FuseiOS_bundle;}

namespace g{

// public static generated class FuseiOS_bundle :0
// {
uClassType* FuseiOS_bundle_typeof();

struct FuseiOS_bundle : uObject
{
    static uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> Blitter54b1ebd1_;
    static uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>& Blitter54b1ebd1() { return FuseiOS_bundle_typeof()->Init(), Blitter54b1ebd1_; }
    static uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> NativeViewBlitter6bc02b03_;
    static uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>& NativeViewBlitter6bc02b03() { return FuseiOS_bundle_typeof()->Init(), NativeViewBlitter6bc02b03_; }
};
// }

} // ::g
