// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.27.14/$.uno#6'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4x4.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace iOS{struct Blitter;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace iOS{

// internal sealed class Blitter :1325
// {
uType* Blitter_typeof();
void Blitter__ctor__fn(Blitter* __this);
void Blitter__Blit_fn(Blitter* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Node* where, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2* pos, ::g::Uno::Float2* size);
void Blitter__init_DrawCalls_fn(Blitter* __this);
void Blitter__New1_fn(Blitter** __retval);

struct Blitter : uObject
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_72a07e40;
    ::g::Uno::Float4x4 Blit_LocalTransform_72a07e40_4_8_2;
    ::g::Uno::Float4x4 Blit_LocalTransform_72a07e40_4_8_3;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> Blit_VertexData_72a07e40_7_2_1;
    static uSStrong<Blitter*> Singleton_;
    static uSStrong<Blitter*>& Singleton() { return Blitter_typeof()->Init(), Singleton_; }

    void ctor_();
    void Blit(::g::Fuse::DrawContext* dc, ::g::Fuse::Node* where, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2 pos, ::g::Uno::Float2 size);
    void init_DrawCalls();
    static Blitter* New1();
};
// }

}}} // ::g::Fuse::iOS
