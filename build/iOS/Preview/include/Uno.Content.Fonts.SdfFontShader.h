// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.27.20/Source/Uno/Content/Fonts/$.uno#9'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Content.Fonts.TextShader.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Uno{namespace Content{namespace Fonts{struct SdfFontShader;}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct TextShaderData;}}}}

namespace g{
namespace Uno{
namespace Content{
namespace Fonts{

// public sealed class SdfFontShader :576
// {
::g::Uno::Content::Fonts::TextShader_type* SdfFontShader_typeof();
void SdfFontShader__ctor_1_fn(SdfFontShader* __this);
void SdfFontShader__Draw_fn(SdfFontShader* __this, ::g::Uno::Content::Fonts::TextShaderData* data);
void SdfFontShader__init_DrawCalls_fn(SdfFontShader* __this);
void SdfFontShader__New1_fn(SdfFontShader** __retval);

struct SdfFontShader : ::g::Uno::Content::Fonts::TextShader
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_a6403fca;

    void ctor_1();
    void init_DrawCalls();
    static SdfFontShader* New1();
};
// }

}}}} // ::g::Uno::Content::Fonts
