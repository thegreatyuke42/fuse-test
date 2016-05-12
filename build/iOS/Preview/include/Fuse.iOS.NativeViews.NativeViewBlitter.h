// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.27.14/NativeViews/$.uno#5'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace iOS{namespace NativeViews{struct NativeViewBlitter;}}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace iOS{
namespace NativeViews{

// internal sealed class NativeViewBlitter :777
// {
uType* NativeViewBlitter_typeof();
void NativeViewBlitter__ctor__fn(NativeViewBlitter* __this);
void NativeViewBlitter__Blit_fn(NativeViewBlitter* __this, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2* pos, ::g::Uno::Float2* size, ::g::Uno::Float4x4* localToClipTransform);
void NativeViewBlitter__init_DrawCalls_fn(NativeViewBlitter* __this);
void NativeViewBlitter__New1_fn(NativeViewBlitter** __retval);

struct NativeViewBlitter : uObject
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_ff643782;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> Blit_v_ff643782_1_7_1;
    uStrong<uArray*> Blit_verts_ff643782_1_6_5;
    static uSStrong<NativeViewBlitter*> Singleton_;
    static uSStrong<NativeViewBlitter*>& Singleton() { return NativeViewBlitter_typeof()->Init(), Singleton_; }

    void ctor_();
    void Blit(::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2 pos, ::g::Uno::Float2 size, ::g::Uno::Float4x4 localToClipTransform);
    void init_DrawCalls();
    static NativeViewBlitter* New1();
};
// }

}}}} // ::g::Fuse::iOS::NativeViews
