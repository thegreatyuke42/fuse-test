// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <OpenGL.GL.h>
#include <OpenGL.GLBlendEquation.h>
#include <OpenGL.GLBlendingFactor.h>
#include <OpenGL.GLBufferHandle.h>
#include <OpenGL.GLBufferTarget.h>
#include <OpenGL.GLBufferUsage.h>
#include <OpenGL.GLClearBufferMask.h>
#include <OpenGL.GLCullFaceMode.h>
#include <OpenGL.GLDataType.h>
#include <OpenGL.GLDepthFunction.h>
#include <OpenGL.GLEnableCap.h>
#include <OpenGL.GLError.h>
#include <OpenGL.GLFramebufferAttachment.h>
#include <OpenGL.GLFramebufferHandle.h>
#include <OpenGL.GLFramebufferStatus.h>
#include <OpenGL.GLFramebufferTarget.h>
#include <OpenGL.GLFrontFaceDirection.h>
#include <OpenGL.GLIndexType.h>
#include <OpenGL.GLInteger4Name.h>
#include <OpenGL.GLIntegerName.h>
#include <OpenGL.GLPixelFormat.h>
#include <OpenGL.GLPixelType.h>
#include <OpenGL.GLPrimitiveType.h>
#include <OpenGL.GLProgramHandle.h>
#include <OpenGL.GLProgramParameter.h>
#include <OpenGL.GLRenderbufferHandle.h>
#include <OpenGL.GLRenderbufferStorage.h>
#include <OpenGL.GLRenderbufferTarget.h>
#include <OpenGL.GLShaderHandle.h>
#include <OpenGL.GLShaderParameter.h>
#include <OpenGL.GLShaderType.h>
#include <OpenGL.GLTextureHandle.h>
#include <OpenGL.GLTextureParameterName.h>
#include <OpenGL.GLTextureParameterValue.h>
#include <OpenGL.GLTextureTarget.h>
#include <OpenGL.GLTextureUnit.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float2x2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Int.h>
#include <Uno.Int4.h>
#include <Uno.IntPtr.h>
#include <Uno.String.h>
#include <Uno/Support.h>
#include <XliPlatform/GL.h>

namespace g{
namespace OpenGL{

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno
// -----------------------------------------------------------------

// public static extern class GL :12
// {
uClassType* GL_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("OpenGL.GL", options);
    type->Reflection.SetFunctions(75,
        new uFunction("ActiveTexture", NULL, (void*)GL__ActiveTexture_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLTextureUnit_typeof()),
        new uFunction("AttachShader", NULL, (void*)GL__AttachShader_fn, 0, true, uVoid_typeof(), 2, ::g::OpenGL::GLProgramHandle_typeof(), ::g::OpenGL::GLShaderHandle_typeof()),
        new uFunction("BindBuffer", NULL, (void*)GL__BindBuffer_fn, 0, true, uVoid_typeof(), 2, ::g::OpenGL::GLBufferTarget_typeof(), ::g::OpenGL::GLBufferHandle_typeof()),
        new uFunction("BindFramebuffer", NULL, (void*)GL__BindFramebuffer_fn, 0, true, uVoid_typeof(), 2, ::g::OpenGL::GLFramebufferTarget_typeof(), ::g::OpenGL::GLFramebufferHandle_typeof()),
        new uFunction("BindRenderbuffer", NULL, (void*)GL__BindRenderbuffer_fn, 0, true, uVoid_typeof(), 2, ::g::OpenGL::GLRenderbufferTarget_typeof(), ::g::OpenGL::GLRenderbufferHandle_typeof()),
        new uFunction("BindTexture", NULL, (void*)GL__BindTexture_fn, 0, true, uVoid_typeof(), 2, ::g::OpenGL::GLTextureTarget_typeof(), ::g::OpenGL::GLTextureHandle_typeof()),
        new uFunction("BlendFuncSeparate", NULL, (void*)GL__BlendFuncSeparate_fn, 0, true, uVoid_typeof(), 4, ::g::OpenGL::GLBlendingFactor_typeof(), ::g::OpenGL::GLBlendingFactor_typeof(), ::g::OpenGL::GLBlendingFactor_typeof(), ::g::OpenGL::GLBlendingFactor_typeof()),
        new uFunction("BufferData", NULL, (void*)GL__BufferData_fn, 0, true, uVoid_typeof(), 3, ::g::OpenGL::GLBufferTarget_typeof(), ::g::Uno::Int_typeof(), ::g::OpenGL::GLBufferUsage_typeof()),
        new uFunction("BufferData", NULL, (void*)GL__BufferData1_fn, 0, true, uVoid_typeof(), 3, ::g::OpenGL::GLBufferTarget_typeof(), ::g::Uno::Buffer_typeof(), ::g::OpenGL::GLBufferUsage_typeof()),
        new uFunction("BufferSubData", NULL, (void*)GL__BufferSubData_fn, 0, true, uVoid_typeof(), 3, ::g::OpenGL::GLBufferTarget_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Buffer_typeof()),
        new uFunction("CheckFramebufferStatus", NULL, (void*)GL__CheckFramebufferStatus_fn, 0, true, ::g::OpenGL::GLFramebufferStatus_typeof(), 1, ::g::OpenGL::GLFramebufferTarget_typeof()),
        new uFunction("Clear", NULL, (void*)GL__Clear_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLClearBufferMask_typeof()),
        new uFunction("ClearColor", NULL, (void*)GL__ClearColor_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("ClearDepth", NULL, (void*)GL__ClearDepth_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("ColorMask", NULL, (void*)GL__ColorMask_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("CompileShader", NULL, (void*)GL__CompileShader_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLShaderHandle_typeof()),
        new uFunction("CreateBuffer", NULL, (void*)GL__CreateBuffer_fn, 0, true, ::g::OpenGL::GLBufferHandle_typeof(), 0),
        new uFunction("CreateFramebuffer", NULL, (void*)GL__CreateFramebuffer_fn, 0, true, ::g::OpenGL::GLFramebufferHandle_typeof(), 0),
        new uFunction("CreateProgram", NULL, (void*)GL__CreateProgram_fn, 0, true, ::g::OpenGL::GLProgramHandle_typeof(), 0),
        new uFunction("CreateRenderbuffer", NULL, (void*)GL__CreateRenderbuffer_fn, 0, true, ::g::OpenGL::GLRenderbufferHandle_typeof(), 0),
        new uFunction("CreateShader", NULL, (void*)GL__CreateShader_fn, 0, true, ::g::OpenGL::GLShaderHandle_typeof(), 1, ::g::OpenGL::GLShaderType_typeof()),
        new uFunction("CreateTexture", NULL, (void*)GL__CreateTexture_fn, 0, true, ::g::OpenGL::GLTextureHandle_typeof(), 0),
        new uFunction("CullFace", NULL, (void*)GL__CullFace_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLCullFaceMode_typeof()),
        new uFunction("DeleteBuffer", NULL, (void*)GL__DeleteBuffer_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLBufferHandle_typeof()),
        new uFunction("DeleteFramebuffer", NULL, (void*)GL__DeleteFramebuffer_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLFramebufferHandle_typeof()),
        new uFunction("DeleteProgram", NULL, (void*)GL__DeleteProgram_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLProgramHandle_typeof()),
        new uFunction("DeleteRenderbuffer", NULL, (void*)GL__DeleteRenderbuffer_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLRenderbufferHandle_typeof()),
        new uFunction("DeleteShader", NULL, (void*)GL__DeleteShader_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLShaderHandle_typeof()),
        new uFunction("DeleteTexture", NULL, (void*)GL__DeleteTexture_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLTextureHandle_typeof()),
        new uFunction("DepthFunc", NULL, (void*)GL__DepthFunc_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLDepthFunction_typeof()),
        new uFunction("DepthMask", NULL, (void*)GL__DepthMask_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("DetachShader", NULL, (void*)GL__DetachShader_fn, 0, true, uVoid_typeof(), 2, ::g::OpenGL::GLProgramHandle_typeof(), ::g::OpenGL::GLShaderHandle_typeof()),
        new uFunction("Disable", NULL, (void*)GL__Disable_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLEnableCap_typeof()),
        new uFunction("DisableVertexAttribArray", NULL, (void*)GL__DisableVertexAttribArray_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("DrawArrays", NULL, (void*)GL__DrawArrays_fn, 0, true, uVoid_typeof(), 3, ::g::OpenGL::GLPrimitiveType_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("DrawElements", NULL, (void*)GL__DrawElements_fn, 0, true, uVoid_typeof(), 4, ::g::OpenGL::GLPrimitiveType_typeof(), ::g::Uno::Int_typeof(), ::g::OpenGL::GLIndexType_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Enable", NULL, (void*)GL__Enable_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLEnableCap_typeof()),
        new uFunction("EnableVertexAttribArray", NULL, (void*)GL__EnableVertexAttribArray_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("FramebufferRenderbuffer", NULL, (void*)GL__FramebufferRenderbuffer_fn, 0, true, uVoid_typeof(), 4, ::g::OpenGL::GLFramebufferTarget_typeof(), ::g::OpenGL::GLFramebufferAttachment_typeof(), ::g::OpenGL::GLRenderbufferTarget_typeof(), ::g::OpenGL::GLRenderbufferHandle_typeof()),
        new uFunction("FramebufferTexture2D", NULL, (void*)GL__FramebufferTexture2D_fn, 0, true, uVoid_typeof(), 5, ::g::OpenGL::GLFramebufferTarget_typeof(), ::g::OpenGL::GLFramebufferAttachment_typeof(), ::g::OpenGL::GLTextureTarget_typeof(), ::g::OpenGL::GLTextureHandle_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("FrontFace", NULL, (void*)GL__FrontFace_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLFrontFaceDirection_typeof()),
        new uFunction("GenerateMipmap", NULL, (void*)GL__GenerateMipmap_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLTextureTarget_typeof()),
        new uFunction("GetAttribLocation", NULL, (void*)GL__GetAttribLocation_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::OpenGL::GLProgramHandle_typeof(), ::g::Uno::String_typeof()),
        new uFunction("GetError", NULL, (void*)GL__GetError_fn, 0, true, ::g::OpenGL::GLError_typeof(), 0),
        new uFunction("GetFramebufferBinding", NULL, (void*)GL__GetFramebufferBinding_fn, 0, true, ::g::OpenGL::GLFramebufferHandle_typeof(), 0),
        new uFunction("GetInteger", NULL, (void*)GL__GetInteger_fn, 0, true, ::g::Uno::Int4_typeof(), 1, ::g::OpenGL::GLInteger4Name_typeof()),
        new uFunction("GetInteger", NULL, (void*)GL__GetInteger1_fn, 0, true, ::g::Uno::Int_typeof(), 1, ::g::OpenGL::GLIntegerName_typeof()),
        new uFunction("GetProgramInfoLog", NULL, (void*)GL__GetProgramInfoLog_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::OpenGL::GLProgramHandle_typeof()),
        new uFunction("GetProgramParameter", NULL, (void*)GL__GetProgramParameter_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::OpenGL::GLProgramHandle_typeof(), ::g::OpenGL::GLProgramParameter_typeof()),
        new uFunction("GetRenderbufferBinding", NULL, (void*)GL__GetRenderbufferBinding_fn, 0, true, ::g::OpenGL::GLRenderbufferHandle_typeof(), 0),
        new uFunction("GetShaderInfoLog", NULL, (void*)GL__GetShaderInfoLog_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::OpenGL::GLShaderHandle_typeof()),
        new uFunction("GetShaderParameter", NULL, (void*)GL__GetShaderParameter_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::OpenGL::GLShaderHandle_typeof(), ::g::OpenGL::GLShaderParameter_typeof()),
        new uFunction("GetUniformLocation", NULL, (void*)GL__GetUniformLocation_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::OpenGL::GLProgramHandle_typeof(), ::g::Uno::String_typeof()),
        new uFunction("LineWidth", NULL, (void*)GL__LineWidth_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("LinkProgram", NULL, (void*)GL__LinkProgram_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLProgramHandle_typeof()),
        new uFunction("RenderbufferStorage", NULL, (void*)GL__RenderbufferStorage_fn, 0, true, uVoid_typeof(), 4, ::g::OpenGL::GLRenderbufferTarget_typeof(), ::g::OpenGL::GLRenderbufferStorage_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Scissor", NULL, (void*)GL__Scissor_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("ShaderSource", NULL, (void*)GL__ShaderSource_fn, 0, true, uVoid_typeof(), 2, ::g::OpenGL::GLShaderHandle_typeof(), ::g::Uno::String_typeof()),
        new uFunction("TexImage2D", NULL, (void*)GL__TexImage2D_fn, 0, true, uVoid_typeof(), 9, ::g::OpenGL::GLTextureTarget_typeof(), ::g::Uno::Int_typeof(), ::g::OpenGL::GLPixelFormat_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::OpenGL::GLPixelFormat_typeof(), ::g::OpenGL::GLPixelType_typeof(), ::g::Uno::Buffer_typeof()),
        new uFunction("TexImage2D", NULL, (void*)GL__TexImage2D1_fn, 0, true, uVoid_typeof(), 9, ::g::OpenGL::GLTextureTarget_typeof(), ::g::Uno::Int_typeof(), ::g::OpenGL::GLPixelFormat_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::OpenGL::GLPixelFormat_typeof(), ::g::OpenGL::GLPixelType_typeof(), ::g::Uno::IntPtr_typeof()),
        new uFunction("TexParameter", NULL, (void*)GL__TexParameter_fn, 0, true, uVoid_typeof(), 3, ::g::OpenGL::GLTextureTarget_typeof(), ::g::OpenGL::GLTextureParameterName_typeof(), ::g::OpenGL::GLTextureParameterValue_typeof()),
        new uFunction("Uniform1", NULL, (void*)GL__Uniform1_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Uniform1", NULL, (void*)GL__Uniform11_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float_typeof()->Array()),
        new uFunction("Uniform1", NULL, (void*)GL__Uniform12_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Uniform2", NULL, (void*)GL__Uniform2_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("Uniform2", NULL, (void*)GL__Uniform21_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float2_typeof()->Array()),
        new uFunction("Uniform3", NULL, (void*)GL__Uniform3_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float3_typeof()),
        new uFunction("Uniform4", NULL, (void*)GL__Uniform4_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float4_typeof()),
        new uFunction("Uniform4", NULL, (void*)GL__Uniform41_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float4_typeof()->Array()),
        new uFunction("UniformMatrix2", NULL, (void*)GL__UniformMatrix2_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Float2x2_typeof()),
        new uFunction("UniformMatrix4", NULL, (void*)GL__UniformMatrix4_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Float4x4_typeof()),
        new uFunction("UniformMatrix4", NULL, (void*)GL__UniformMatrix41_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Float4x4_typeof()->Array()),
        new uFunction("UseProgram", NULL, (void*)GL__UseProgram_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLProgramHandle_typeof()),
        new uFunction("VertexAttribPointer", NULL, (void*)GL__VertexAttribPointer_fn, 0, true, uVoid_typeof(), 6, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::OpenGL::GLDataType_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Viewport", NULL, (void*)GL__Viewport_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()));
    return type;
}

// public static void ActiveTexture(OpenGL.GLTextureUnit texture) :850
void GL__ActiveTexture_fn(int* texture)
{
    GL::ActiveTexture(*texture);
}

// public static void AttachShader(OpenGL.GLProgramHandle program, OpenGL.GLShaderHandle shader) :1008
void GL__AttachShader_fn(uint32_t* program, uint32_t* shader)
{
    GL::AttachShader(*program, *shader);
}

// public static void BindBuffer(OpenGL.GLBufferTarget target, OpenGL.GLBufferHandle buffer) :497
void GL__BindBuffer_fn(int* target, uint32_t* buffer)
{
    GL::BindBuffer(*target, *buffer);
}

// public static void BindFramebuffer(OpenGL.GLFramebufferTarget target, OpenGL.GLFramebufferHandle fb) :614
void GL__BindFramebuffer_fn(int* target, uint32_t* fb)
{
    GL::BindFramebuffer(*target, *fb);
}

// public static void BindRenderbuffer(OpenGL.GLRenderbufferTarget target, OpenGL.GLRenderbufferHandle renderbuffer) :750
void GL__BindRenderbuffer_fn(int* target, uint32_t* renderbuffer)
{
    GL::BindRenderbuffer(*target, *renderbuffer);
}

// public static void BindTexture(OpenGL.GLTextureTarget target, OpenGL.GLTextureHandle texture) :868
void GL__BindTexture_fn(int* target, uint32_t* texture)
{
    GL::BindTexture(*target, *texture);
}

// public static void BlendFuncSeparate(OpenGL.GLBlendingFactor srcRGB, OpenGL.GLBlendingFactor dstRGB, OpenGL.GLBlendingFactor srcAlpha, OpenGL.GLBlendingFactor dstAlpha) :316
void GL__BlendFuncSeparate_fn(int* srcRGB, int* dstRGB, int* srcAlpha, int* dstAlpha)
{
    GL::BlendFuncSeparate(*srcRGB, *dstRGB, *srcAlpha, *dstAlpha);
}

// public static void BufferData(OpenGL.GLBufferTarget target, int sizeInBytes, OpenGL.GLBufferUsage usage) :516
void GL__BufferData_fn(int* target, int* sizeInBytes, int* usage)
{
    GL::BufferData(*target, *sizeInBytes, *usage);
}

// public static void BufferData(OpenGL.GLBufferTarget target, Uno.Buffer data, OpenGL.GLBufferUsage usage) :534
void GL__BufferData1_fn(int* target, ::g::Uno::Buffer* data, int* usage)
{
    GL::BufferData1(*target, data, *usage);
}

// public static void BufferSubData(OpenGL.GLBufferTarget target, int offset, Uno.Buffer data) :552
void GL__BufferSubData_fn(int* target, int* offset, ::g::Uno::Buffer* data)
{
    GL::BufferSubData(*target, *offset, data);
}

// public static OpenGL.GLFramebufferStatus CheckFramebufferStatus(OpenGL.GLFramebufferTarget target) :632
void GL__CheckFramebufferStatus_fn(int* target, int* __retval)
{
    *__retval = GL::CheckFramebufferStatus(*target);
}

// public static void Clear(OpenGL.GLClearBufferMask mask) :159
void GL__Clear_fn(int* mask)
{
    GL::Clear(*mask);
}

// public static void ClearColor(float red, float green, float blue, float alpha) :177
void GL__ClearColor_fn(float* red, float* green, float* blue, float* alpha)
{
    GL::ClearColor(*red, *green, *blue, *alpha);
}

// public static void ClearDepth(float depth) :195
void GL__ClearDepth_fn(float* depth)
{
    GL::ClearDepth(*depth);
}

// public static void ColorMask(bool red, bool green, bool blue, bool alpha) :218
void GL__ColorMask_fn(bool* red, bool* green, bool* blue, bool* alpha)
{
    GL::ColorMask(*red, *green, *blue, *alpha);
}

// public static void CompileShader(OpenGL.GLShaderHandle shader) :1044
void GL__CompileShader_fn(uint32_t* shader)
{
    GL::CompileShader(*shader);
}

// public static OpenGL.GLBufferHandle CreateBuffer() :570
void GL__CreateBuffer_fn(uint32_t* __retval)
{
    *__retval = GL::CreateBuffer();
}

// public static OpenGL.GLFramebufferHandle CreateFramebuffer() :650
void GL__CreateFramebuffer_fn(uint32_t* __retval)
{
    *__retval = GL::CreateFramebuffer();
}

// public static OpenGL.GLProgramHandle CreateProgram() :1062
void GL__CreateProgram_fn(uint32_t* __retval)
{
    *__retval = GL::CreateProgram();
}

// public static OpenGL.GLRenderbufferHandle CreateRenderbuffer() :768
void GL__CreateRenderbuffer_fn(uint32_t* __retval)
{
    *__retval = GL::CreateRenderbuffer();
}

// public static OpenGL.GLShaderHandle CreateShader(OpenGL.GLShaderType type) :1080
void GL__CreateShader_fn(int* type, uint32_t* __retval)
{
    *__retval = GL::CreateShader(*type);
}

// public static OpenGL.GLTextureHandle CreateTexture() :889
void GL__CreateTexture_fn(uint32_t* __retval)
{
    *__retval = GL::CreateTexture();
}

// public static void CullFace(OpenGL.GLCullFaceMode mode) :361
void GL__CullFace_fn(int* mode)
{
    GL::CullFace(*mode);
}

// public static void DeleteBuffer(OpenGL.GLBufferHandle buffer) :590
void GL__DeleteBuffer_fn(uint32_t* buffer)
{
    GL::DeleteBuffer(*buffer);
}

// public static void DeleteFramebuffer(OpenGL.GLFramebufferHandle fb) :670
void GL__DeleteFramebuffer_fn(uint32_t* fb)
{
    GL::DeleteFramebuffer(*fb);
}

// public static void DeleteProgram(OpenGL.GLProgramHandle program) :1098
void GL__DeleteProgram_fn(uint32_t* program)
{
    GL::DeleteProgram(*program);
}

// public static void DeleteRenderbuffer(OpenGL.GLRenderbufferHandle renderbuffer) :788
void GL__DeleteRenderbuffer_fn(uint32_t* renderbuffer)
{
    GL::DeleteRenderbuffer(*renderbuffer);
}

// public static void DeleteShader(OpenGL.GLShaderHandle shader) :1116
void GL__DeleteShader_fn(uint32_t* shader)
{
    GL::DeleteShader(*shader);
}

// public static void DeleteTexture(OpenGL.GLTextureHandle texture) :909
void GL__DeleteTexture_fn(uint32_t* texture)
{
    GL::DeleteTexture(*texture);
}

// public static void DepthFunc(OpenGL.GLDepthFunction func) :334
void GL__DepthFunc_fn(int* func)
{
    GL::DepthFunc(*func);
}

// public static void DepthMask(bool flag) :236
void GL__DepthMask_fn(bool* flag)
{
    GL::DepthMask(*flag);
}

// public static void DetachShader(OpenGL.GLProgramHandle program, OpenGL.GLShaderHandle shader) :1134
void GL__DetachShader_fn(uint32_t* program, uint32_t* shader)
{
    GL::DetachShader(*program, *shader);
}

// public static void Disable(OpenGL.GLEnableCap cap) :59
void GL__Disable_fn(int* cap)
{
    GL::Disable(*cap);
}

// public static void DisableVertexAttribArray(int index) :1368
void GL__DisableVertexAttribArray_fn(int* index)
{
    GL::DisableVertexAttribArray(*index);
}

// public static void DrawArrays(OpenGL.GLPrimitiveType mode, int first, int count) :1887
void GL__DrawArrays_fn(int* mode, int* first, int* count)
{
    GL::DrawArrays(*mode, *first, *count);
}

// public static void DrawElements(OpenGL.GLPrimitiveType mode, int count, OpenGL.GLIndexType type, int offset) :1905
void GL__DrawElements_fn(int* mode, int* count, int* type, int* offset)
{
    GL::DrawElements(*mode, *count, *type, *offset);
}

// public static void Enable(OpenGL.GLEnableCap cap) :77
void GL__Enable_fn(int* cap)
{
    GL::Enable(*cap);
}

// public static void EnableVertexAttribArray(int index) :1386
void GL__EnableVertexAttribArray_fn(int* index)
{
    GL::EnableVertexAttribArray(*index);
}

// public static void FramebufferRenderbuffer(OpenGL.GLFramebufferTarget target, OpenGL.GLFramebufferAttachment attachment, OpenGL.GLRenderbufferTarget renderbuffertarget, OpenGL.GLRenderbufferHandle renderbuffer) :706
void GL__FramebufferRenderbuffer_fn(int* target, int* attachment, int* renderbuffertarget, uint32_t* renderbuffer)
{
    GL::FramebufferRenderbuffer(*target, *attachment, *renderbuffertarget, *renderbuffer);
}

// public static void FramebufferTexture2D(OpenGL.GLFramebufferTarget target, OpenGL.GLFramebufferAttachment attachment, OpenGL.GLTextureTarget textarget, OpenGL.GLTextureHandle texture, int level) :688
void GL__FramebufferTexture2D_fn(int* target, int* attachment, int* textarget, uint32_t* texture, int* level)
{
    GL::FramebufferTexture2D(*target, *attachment, *textarget, *texture, *level);
}

// public static void FrontFace(OpenGL.GLFrontFaceDirection mode) :379
void GL__FrontFace_fn(int* mode)
{
    GL::FrontFace(*mode);
}

// public static void GenerateMipmap(OpenGL.GLTextureTarget target) :927
void GL__GenerateMipmap_fn(int* target)
{
    GL::GenerateMipmap(*target);
}

// public static int GetAttribLocation(OpenGL.GLProgramHandle program, string name) :1407
void GL__GetAttribLocation_fn(uint32_t* program, uString* name, int* __retval)
{
    *__retval = GL::GetAttribLocation(*program, name);
}

// public static OpenGL.GLError GetError() :97
void GL__GetError_fn(int* __retval)
{
    *__retval = GL::GetError();
}

// public static OpenGL.GLFramebufferHandle GetFramebufferBinding() :727
void GL__GetFramebufferBinding_fn(uint32_t* __retval)
{
    *__retval = GL::GetFramebufferBinding();
}

// public static int4 GetInteger(OpenGL.GLInteger4Name name) :36
void GL__GetInteger_fn(int* name, ::g::Uno::Int4* __retval)
{
    *__retval = GL::GetInteger(*name);
}

// public static int GetInteger(OpenGL.GLIntegerName name) :16
void GL__GetInteger1_fn(int* name, int* __retval)
{
    *__retval = GL::GetInteger1(*name);
}

// public static string GetProgramInfoLog(OpenGL.GLProgramHandle program) :1174
void GL__GetProgramInfoLog_fn(uint32_t* program, uString** __retval)
{
    *__retval = GL::GetProgramInfoLog(*program);
}

// public static int GetProgramParameter(OpenGL.GLProgramHandle program, OpenGL.GLProgramParameter pname) :1154
void GL__GetProgramParameter_fn(uint32_t* program, int* pname, int* __retval)
{
    *__retval = GL::GetProgramParameter(*program, *pname);
}

// public static OpenGL.GLRenderbufferHandle GetRenderbufferBinding() :827
void GL__GetRenderbufferBinding_fn(uint32_t* __retval)
{
    *__retval = GL::GetRenderbufferBinding();
}

// public static string GetShaderInfoLog(OpenGL.GLShaderHandle shader) :1216
void GL__GetShaderInfoLog_fn(uint32_t* shader, uString** __retval)
{
    *__retval = GL::GetShaderInfoLog(*shader);
}

// public static int GetShaderParameter(OpenGL.GLShaderHandle shader, OpenGL.GLShaderParameter pname) :1196
void GL__GetShaderParameter_fn(uint32_t* shader, int* pname, int* __retval)
{
    *__retval = GL::GetShaderParameter(*shader, *pname);
}

// public static int GetUniformLocation(OpenGL.GLProgramHandle program, string name) :1427
void GL__GetUniformLocation_fn(uint32_t* program, uString* name, int* __retval)
{
    *__retval = GL::GetUniformLocation(*program, name);
}

// public static void LineWidth(float width) :397
void GL__LineWidth_fn(float* width)
{
    GL::LineWidth(*width);
}

// public static void LinkProgram(OpenGL.GLProgramHandle program) :1242
void GL__LinkProgram_fn(uint32_t* program)
{
    GL::LinkProgram(*program);
}

// public static void RenderbufferStorage(OpenGL.GLRenderbufferTarget target, OpenGL.GLRenderbufferStorage internalFormat, int width, int height) :809
void GL__RenderbufferStorage_fn(int* target, int* internalFormat, int* width, int* height)
{
    GL::RenderbufferStorage(*target, *internalFormat, *width, *height);
}

// public static void Scissor(int x, int y, int width, int height) :458
void GL__Scissor_fn(int* x, int* y, int* width, int* height)
{
    GL::Scissor(*x, *y, *width, *height);
}

// public static void ShaderSource(OpenGL.GLShaderHandle shader, string source) :1260
void GL__ShaderSource_fn(uint32_t* shader, uString* source)
{
    GL::ShaderSource(*shader, source);
}

// public static void TexImage2D(OpenGL.GLTextureTarget target, int level, OpenGL.GLPixelFormat internalFormat, int width, int height, int border, OpenGL.GLPixelFormat format, OpenGL.GLPixelType type, Uno.Buffer data) :948
void GL__TexImage2D_fn(int* target, int* level, int* internalFormat, int* width, int* height, int* border, int* format, int* type, ::g::Uno::Buffer* data)
{
    GL::TexImage2D(*target, *level, *internalFormat, *width, *height, *border, *format, *type, data);
}

// public static void TexImage2D(OpenGL.GLTextureTarget target, int level, OpenGL.GLPixelFormat internalFormat, int width, int height, int border, OpenGL.GLPixelFormat format, OpenGL.GLPixelType type, Uno.IntPtr data) :966
void GL__TexImage2D1_fn(int* target, int* level, int* internalFormat, int* width, int* height, int* border, int* format, int* type, void** data)
{
    GL::TexImage2D1(*target, *level, *internalFormat, *width, *height, *border, *format, *type, *data);
}

// public static void TexParameter(OpenGL.GLTextureTarget target, OpenGL.GLTextureParameterName pname, OpenGL.GLTextureParameterValue param) :985
void GL__TexParameter_fn(int* target, int* pname, int* param)
{
    GL::TexParameter(*target, *pname, *param);
}

// public static void Uniform1(int location, float value) :1524
void GL__Uniform1_fn(int* location, float* value)
{
    GL::Uniform1(*location, *value);
}

// public static void Uniform1(int location, float[] value) :1733
void GL__Uniform11_fn(int* location, uArray* value)
{
    GL::Uniform11(*location, value);
}

// public static void Uniform1(int location, int value) :1448
void GL__Uniform12_fn(int* location, int* value)
{
    GL::Uniform12(*location, *value);
}

// public static void Uniform2(int location, float2 value) :1543
void GL__Uniform2_fn(int* location, ::g::Uno::Float2* value)
{
    GL::Uniform2(*location, *value);
}

// public static void Uniform2(int location, float2[] value) :1752
void GL__Uniform21_fn(int* location, uArray* value)
{
    GL::Uniform21(*location, value);
}

// public static void Uniform3(int location, float3 value) :1562
void GL__Uniform3_fn(int* location, ::g::Uno::Float3* value)
{
    GL::Uniform3(*location, *value);
}

// public static void Uniform4(int location, float4 value) :1581
void GL__Uniform4_fn(int* location, ::g::Uno::Float4* value)
{
    GL::Uniform4(*location, *value);
}

// public static void Uniform4(int location, float4[] value) :1790
void GL__Uniform41_fn(int* location, uArray* value)
{
    GL::Uniform41(*location, value);
}

// public static void UniformMatrix2(int location, bool transpose, float2x2 value) :1600
void GL__UniformMatrix2_fn(int* location, bool* transpose, ::g::Uno::Float2x2* value)
{
    GL::UniformMatrix2(*location, *transpose, *value);
}

// public static void UniformMatrix4(int location, bool transpose, float4x4 value) :1638
void GL__UniformMatrix4_fn(int* location, bool* transpose, ::g::Uno::Float4x4* value)
{
    GL::UniformMatrix4(*location, *transpose, *value);
}

// public static void UniformMatrix4(int location, bool transpose, float4x4[] value) :1847
void GL__UniformMatrix41_fn(int* location, bool* transpose, uArray* value)
{
    GL::UniformMatrix41(*location, *transpose, value);
}

// public static void UseProgram(OpenGL.GLProgramHandle program) :1296
void GL__UseProgram_fn(uint32_t* program)
{
    GL::UseProgram(*program);
}

// public static void VertexAttribPointer(int index, int size, OpenGL.GLDataType type, bool normalized, int stride, int offset) :1867
void GL__VertexAttribPointer_fn(int* index, int* size, int* type, bool* normalized, int* stride, int* offset)
{
    GL::VertexAttribPointer(*index, *size, *type, *normalized, *stride, *offset);
}

// public static void Viewport(int x, int y, int width, int height) :476
void GL__Viewport_fn(int* x, int* y, int* width, int* height)
{
    GL::Viewport(*x, *y, *width, *height);
}

// public static void ActiveTexture(OpenGL.GLTextureUnit texture) [static] :850
void GL::ActiveTexture(int texture)
{
    uStackFrame __("OpenGL.GL", "ActiveTexture(OpenGL.GLTextureUnit)");
    glActiveTexture(texture);
}

// public static void AttachShader(OpenGL.GLProgramHandle program, OpenGL.GLShaderHandle shader) [static] :1008
void GL::AttachShader(uint32_t program, uint32_t shader)
{
    uStackFrame __("OpenGL.GL", "AttachShader(OpenGL.GLProgramHandle,OpenGL.GLShaderHandle)");
    glAttachShader(program, shader);
}

// public static void BindBuffer(OpenGL.GLBufferTarget target, OpenGL.GLBufferHandle buffer) [static] :497
void GL::BindBuffer(int target, uint32_t buffer)
{
    uStackFrame __("OpenGL.GL", "BindBuffer(OpenGL.GLBufferTarget,OpenGL.GLBufferHandle)");
    glBindBuffer(target, buffer);
}

// public static void BindFramebuffer(OpenGL.GLFramebufferTarget target, OpenGL.GLFramebufferHandle fb) [static] :614
void GL::BindFramebuffer(int target, uint32_t fb)
{
    uStackFrame __("OpenGL.GL", "BindFramebuffer(OpenGL.GLFramebufferTarget,OpenGL.GLFramebufferHandle)");
    glBindFramebuffer(target, fb);
}

// public static void BindRenderbuffer(OpenGL.GLRenderbufferTarget target, OpenGL.GLRenderbufferHandle renderbuffer) [static] :750
void GL::BindRenderbuffer(int target, uint32_t renderbuffer)
{
    uStackFrame __("OpenGL.GL", "BindRenderbuffer(OpenGL.GLRenderbufferTarget,OpenGL.GLRenderbufferHandle)");
    glBindRenderbuffer(target, renderbuffer);
}

// public static void BindTexture(OpenGL.GLTextureTarget target, OpenGL.GLTextureHandle texture) [static] :868
void GL::BindTexture(int target, uint32_t texture)
{
    uStackFrame __("OpenGL.GL", "BindTexture(OpenGL.GLTextureTarget,OpenGL.GLTextureHandle)");
    glBindTexture(target, texture);
}

// public static void BlendFuncSeparate(OpenGL.GLBlendingFactor srcRGB, OpenGL.GLBlendingFactor dstRGB, OpenGL.GLBlendingFactor srcAlpha, OpenGL.GLBlendingFactor dstAlpha) [static] :316
void GL::BlendFuncSeparate(int srcRGB, int dstRGB, int srcAlpha, int dstAlpha)
{
    uStackFrame __("OpenGL.GL", "BlendFuncSeparate(OpenGL.GLBlendingFactor,OpenGL.GLBlendingFactor,OpenGL.GLBlendingFactor,OpenGL.GLBlendingFactor)");
    glBlendFuncSeparate(srcRGB, dstRGB, srcAlpha, dstAlpha);
}

// public static void BufferData(OpenGL.GLBufferTarget target, int sizeInBytes, OpenGL.GLBufferUsage usage) [static] :516
void GL::BufferData(int target, int sizeInBytes, int usage)
{
    uStackFrame __("OpenGL.GL", "BufferData(OpenGL.GLBufferTarget,int,OpenGL.GLBufferUsage)");
    glBufferData(target, sizeInBytes, NULL, usage);
}

// public static void BufferData(OpenGL.GLBufferTarget target, Uno.Buffer data, OpenGL.GLBufferUsage usage) [static] :534
void GL::BufferData1(int target, ::g::Uno::Buffer* data, int usage)
{
    uStackFrame __("OpenGL.GL", "BufferData(OpenGL.GLBufferTarget,Uno.Buffer,OpenGL.GLBufferUsage)");
    glBufferData(target, U_BUFFER_SIZE(data), U_BUFFER_PTR(data), usage);
}

// public static void BufferSubData(OpenGL.GLBufferTarget target, int offset, Uno.Buffer data) [static] :552
void GL::BufferSubData(int target, int offset, ::g::Uno::Buffer* data)
{
    uStackFrame __("OpenGL.GL", "BufferSubData(OpenGL.GLBufferTarget,int,Uno.Buffer)");
    glBufferSubData(target, offset, U_BUFFER_SIZE(data), U_BUFFER_PTR(data));
}

// public static OpenGL.GLFramebufferStatus CheckFramebufferStatus(OpenGL.GLFramebufferTarget target) [static] :632
int GL::CheckFramebufferStatus(int target)
{
    uStackFrame __("OpenGL.GL", "CheckFramebufferStatus(OpenGL.GLFramebufferTarget)");
    return glCheckFramebufferStatus(target);
}

// public static void Clear(OpenGL.GLClearBufferMask mask) [static] :159
void GL::Clear(int mask)
{
    uStackFrame __("OpenGL.GL", "Clear(OpenGL.GLClearBufferMask)");
    glClear(mask);
}

// public static void ClearColor(float red, float green, float blue, float alpha) [static] :177
void GL::ClearColor(float red, float green, float blue, float alpha)
{
    uStackFrame __("OpenGL.GL", "ClearColor(float,float,float,float)");
    glClearColor(red, green, blue, alpha);
}

// public static void ClearDepth(float depth) [static] :195
void GL::ClearDepth(float depth)
{
    uStackFrame __("OpenGL.GL", "ClearDepth(float)");
    #ifdef U_GL_DESKTOP
                    glClearDepth((double)depth);
    #else
                    glClearDepthf(depth);
    #endif
}

// public static void ColorMask(bool red, bool green, bool blue, bool alpha) [static] :218
void GL::ColorMask(bool red, bool green, bool blue, bool alpha)
{
    uStackFrame __("OpenGL.GL", "ColorMask(bool,bool,bool,bool)");
    glColorMask(red, green, blue, alpha);
}

// public static void CompileShader(OpenGL.GLShaderHandle shader) [static] :1044
void GL::CompileShader(uint32_t shader)
{
    uStackFrame __("OpenGL.GL", "CompileShader(OpenGL.GLShaderHandle)");
    glCompileShader(shader);
}

// public static OpenGL.GLBufferHandle CreateBuffer() [static] :570
uint32_t GL::CreateBuffer()
{
    uStackFrame __("OpenGL.GL", "CreateBuffer()");
    GLuint handle;
    glGenBuffers(1, &handle);
    return handle;
}

// public static OpenGL.GLFramebufferHandle CreateFramebuffer() [static] :650
uint32_t GL::CreateFramebuffer()
{
    uStackFrame __("OpenGL.GL", "CreateFramebuffer()");
    GLuint handle;
    glGenFramebuffers(1, &handle);
    return handle;
}

// public static OpenGL.GLProgramHandle CreateProgram() [static] :1062
uint32_t GL::CreateProgram()
{
    uStackFrame __("OpenGL.GL", "CreateProgram()");
    return glCreateProgram();
}

// public static OpenGL.GLRenderbufferHandle CreateRenderbuffer() [static] :768
uint32_t GL::CreateRenderbuffer()
{
    uStackFrame __("OpenGL.GL", "CreateRenderbuffer()");
    GLuint handle;
    glGenRenderbuffers(1, &handle);
    return handle;
}

// public static OpenGL.GLShaderHandle CreateShader(OpenGL.GLShaderType type) [static] :1080
uint32_t GL::CreateShader(int type)
{
    uStackFrame __("OpenGL.GL", "CreateShader(OpenGL.GLShaderType)");
    return glCreateShader(type);
}

// public static OpenGL.GLTextureHandle CreateTexture() [static] :889
uint32_t GL::CreateTexture()
{
    uStackFrame __("OpenGL.GL", "CreateTexture()");
    GLuint handle;
    glGenTextures(1, &handle);
    return handle;
}

// public static void CullFace(OpenGL.GLCullFaceMode mode) [static] :361
void GL::CullFace(int mode)
{
    uStackFrame __("OpenGL.GL", "CullFace(OpenGL.GLCullFaceMode)");
    glCullFace(mode);
}

// public static void DeleteBuffer(OpenGL.GLBufferHandle buffer) [static] :590
void GL::DeleteBuffer(uint32_t buffer)
{
    uStackFrame __("OpenGL.GL", "DeleteBuffer(OpenGL.GLBufferHandle)");
    glDeleteBuffers(1, &buffer);
}

// public static void DeleteFramebuffer(OpenGL.GLFramebufferHandle fb) [static] :670
void GL::DeleteFramebuffer(uint32_t fb)
{
    uStackFrame __("OpenGL.GL", "DeleteFramebuffer(OpenGL.GLFramebufferHandle)");
    glDeleteFramebuffers(1, &fb);
}

// public static void DeleteProgram(OpenGL.GLProgramHandle program) [static] :1098
void GL::DeleteProgram(uint32_t program)
{
    uStackFrame __("OpenGL.GL", "DeleteProgram(OpenGL.GLProgramHandle)");
    glDeleteProgram(program);
}

// public static void DeleteRenderbuffer(OpenGL.GLRenderbufferHandle renderbuffer) [static] :788
void GL::DeleteRenderbuffer(uint32_t renderbuffer)
{
    uStackFrame __("OpenGL.GL", "DeleteRenderbuffer(OpenGL.GLRenderbufferHandle)");
    glDeleteRenderbuffers(1, &renderbuffer);
}

// public static void DeleteShader(OpenGL.GLShaderHandle shader) [static] :1116
void GL::DeleteShader(uint32_t shader)
{
    uStackFrame __("OpenGL.GL", "DeleteShader(OpenGL.GLShaderHandle)");
    glDeleteShader(shader);
}

// public static void DeleteTexture(OpenGL.GLTextureHandle texture) [static] :909
void GL::DeleteTexture(uint32_t texture)
{
    uStackFrame __("OpenGL.GL", "DeleteTexture(OpenGL.GLTextureHandle)");
    glDeleteTextures(1, &texture);
}

// public static void DepthFunc(OpenGL.GLDepthFunction func) [static] :334
void GL::DepthFunc(int func)
{
    uStackFrame __("OpenGL.GL", "DepthFunc(OpenGL.GLDepthFunction)");
    glDepthFunc(func);
}

// public static void DepthMask(bool flag) [static] :236
void GL::DepthMask(bool flag)
{
    uStackFrame __("OpenGL.GL", "DepthMask(bool)");
    glDepthMask(flag);
}

// public static void DetachShader(OpenGL.GLProgramHandle program, OpenGL.GLShaderHandle shader) [static] :1134
void GL::DetachShader(uint32_t program, uint32_t shader)
{
    uStackFrame __("OpenGL.GL", "DetachShader(OpenGL.GLProgramHandle,OpenGL.GLShaderHandle)");
    glDetachShader(program, shader);
}

// public static void Disable(OpenGL.GLEnableCap cap) [static] :59
void GL::Disable(int cap)
{
    uStackFrame __("OpenGL.GL", "Disable(OpenGL.GLEnableCap)");
    glDisable(cap);
}

// public static void DisableVertexAttribArray(int index) [static] :1368
void GL::DisableVertexAttribArray(int index)
{
    uStackFrame __("OpenGL.GL", "DisableVertexAttribArray(int)");
    glDisableVertexAttribArray(index);
}

// public static void DrawArrays(OpenGL.GLPrimitiveType mode, int first, int count) [static] :1887
void GL::DrawArrays(int mode, int first, int count)
{
    uStackFrame __("OpenGL.GL", "DrawArrays(OpenGL.GLPrimitiveType,int,int)");
    glDrawArrays(mode, first, count);
}

// public static void DrawElements(OpenGL.GLPrimitiveType mode, int count, OpenGL.GLIndexType type, int offset) [static] :1905
void GL::DrawElements(int mode, int count, int type, int offset)
{
    uStackFrame __("OpenGL.GL", "DrawElements(OpenGL.GLPrimitiveType,int,OpenGL.GLIndexType,int)");
    glDrawElements(mode, count, type, (const GLvoid*)(size_t)offset);
}

// public static void Enable(OpenGL.GLEnableCap cap) [static] :77
void GL::Enable(int cap)
{
    uStackFrame __("OpenGL.GL", "Enable(OpenGL.GLEnableCap)");
    glEnable(cap);
}

// public static void EnableVertexAttribArray(int index) [static] :1386
void GL::EnableVertexAttribArray(int index)
{
    uStackFrame __("OpenGL.GL", "EnableVertexAttribArray(int)");
    glEnableVertexAttribArray(index);
}

// public static void FramebufferRenderbuffer(OpenGL.GLFramebufferTarget target, OpenGL.GLFramebufferAttachment attachment, OpenGL.GLRenderbufferTarget renderbuffertarget, OpenGL.GLRenderbufferHandle renderbuffer) [static] :706
void GL::FramebufferRenderbuffer(int target, int attachment, int renderbuffertarget, uint32_t renderbuffer)
{
    uStackFrame __("OpenGL.GL", "FramebufferRenderbuffer(OpenGL.GLFramebufferTarget,OpenGL.GLFramebufferAttachment,OpenGL.GLRenderbufferTarget,OpenGL.GLRenderbufferHandle)");
    glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

// public static void FramebufferTexture2D(OpenGL.GLFramebufferTarget target, OpenGL.GLFramebufferAttachment attachment, OpenGL.GLTextureTarget textarget, OpenGL.GLTextureHandle texture, int level) [static] :688
void GL::FramebufferTexture2D(int target, int attachment, int textarget, uint32_t texture, int level)
{
    uStackFrame __("OpenGL.GL", "FramebufferTexture2D(OpenGL.GLFramebufferTarget,OpenGL.GLFramebufferAttachment,OpenGL.GLTextureTarget,OpenGL.GLTextureHandle,int)");
    glFramebufferTexture2D(target, attachment, textarget, texture, level);
}

// public static void FrontFace(OpenGL.GLFrontFaceDirection mode) [static] :379
void GL::FrontFace(int mode)
{
    uStackFrame __("OpenGL.GL", "FrontFace(OpenGL.GLFrontFaceDirection)");
    glFrontFace(mode);
}

// public static void GenerateMipmap(OpenGL.GLTextureTarget target) [static] :927
void GL::GenerateMipmap(int target)
{
    uStackFrame __("OpenGL.GL", "GenerateMipmap(OpenGL.GLTextureTarget)");
    glGenerateMipmap(target);
}

// public static int GetAttribLocation(OpenGL.GLProgramHandle program, string name) [static] :1407
int GL::GetAttribLocation(uint32_t program, uString* name)
{
    uStackFrame __("OpenGL.GL", "GetAttribLocation(OpenGL.GLProgramHandle,string)");
    return glGetAttribLocation(program, uStringToXliString(name).Ptr());
}

// public static OpenGL.GLError GetError() [static] :97
int GL::GetError()
{
    uStackFrame __("OpenGL.GL", "GetError()");
    return glGetError();
}

// public static OpenGL.GLFramebufferHandle GetFramebufferBinding() [static] :727
uint32_t GL::GetFramebufferBinding()
{
    uStackFrame __("OpenGL.GL", "GetFramebufferBinding()");
    GLuint result;
    glGetIntegerv(GL_FRAMEBUFFER_BINDING, (GLint*)&result);
    return result;
}

// public static int4 GetInteger(OpenGL.GLInteger4Name name) [static] :36
::g::Uno::Int4 GL::GetInteger(int name)
{
    uStackFrame __("OpenGL.GL", "GetInteger(OpenGL.GLInteger4Name)");
    ::g::Uno::Int4 result;
    glGetIntegerv(name, (GLint*)&result);
    return result;
}

// public static int GetInteger(OpenGL.GLIntegerName name) [static] :16
int GL::GetInteger1(int name)
{
    uStackFrame __("OpenGL.GL", "GetInteger(OpenGL.GLIntegerName)");
    int result;
    glGetIntegerv(name, (GLint*)&result);
    return result;
}

// public static string GetProgramInfoLog(OpenGL.GLProgramHandle program) [static] :1174
uString* GL::GetProgramInfoLog(uint32_t program)
{
    uStackFrame __("OpenGL.GL", "GetProgramInfoLog(OpenGL.GLProgramHandle)");
    int len = 0;
    const int bufSize = 4096;
    char buf[bufSize];
    glGetProgramInfoLog(program, bufSize, &len, buf);
    return uString::Utf8(buf, len);
}

// public static int GetProgramParameter(OpenGL.GLProgramHandle program, OpenGL.GLProgramParameter pname) [static] :1154
int GL::GetProgramParameter(uint32_t program, int pname)
{
    uStackFrame __("OpenGL.GL", "GetProgramParameter(OpenGL.GLProgramHandle,OpenGL.GLProgramParameter)");
    GLint result;
    glGetProgramiv(program, pname, &result);
    return result;
}

// public static OpenGL.GLRenderbufferHandle GetRenderbufferBinding() [static] :827
uint32_t GL::GetRenderbufferBinding()
{
    uStackFrame __("OpenGL.GL", "GetRenderbufferBinding()");
    GLuint result;
    glGetIntegerv(GL_RENDERBUFFER_BINDING, (GLint*)&result);
    return result;
}

// public static string GetShaderInfoLog(OpenGL.GLShaderHandle shader) [static] :1216
uString* GL::GetShaderInfoLog(uint32_t shader)
{
    uStackFrame __("OpenGL.GL", "GetShaderInfoLog(OpenGL.GLShaderHandle)");
    int len = 0;
    const int bufSize = 4096;
    char buf[bufSize];
    glGetShaderInfoLog(shader, bufSize, &len, buf);
    return uString::Utf8(buf, len);
}

// public static int GetShaderParameter(OpenGL.GLShaderHandle shader, OpenGL.GLShaderParameter pname) [static] :1196
int GL::GetShaderParameter(uint32_t shader, int pname)
{
    uStackFrame __("OpenGL.GL", "GetShaderParameter(OpenGL.GLShaderHandle,OpenGL.GLShaderParameter)");
    GLint result;
    glGetShaderiv(shader, pname, &result);
    return result;
}

// public static int GetUniformLocation(OpenGL.GLProgramHandle program, string name) [static] :1427
int GL::GetUniformLocation(uint32_t program, uString* name)
{
    uStackFrame __("OpenGL.GL", "GetUniformLocation(OpenGL.GLProgramHandle,string)");
    return glGetUniformLocation(program, uStringToXliString(name).Ptr());
}

// public static void LineWidth(float width) [static] :397
void GL::LineWidth(float width)
{
    uStackFrame __("OpenGL.GL", "LineWidth(float)");
    glLineWidth(width);
}

// public static void LinkProgram(OpenGL.GLProgramHandle program) [static] :1242
void GL::LinkProgram(uint32_t program)
{
    uStackFrame __("OpenGL.GL", "LinkProgram(OpenGL.GLProgramHandle)");
    glLinkProgram(program);
}

// public static void RenderbufferStorage(OpenGL.GLRenderbufferTarget target, OpenGL.GLRenderbufferStorage internalFormat, int width, int height) [static] :809
void GL::RenderbufferStorage(int target, int internalFormat, int width, int height)
{
    uStackFrame __("OpenGL.GL", "RenderbufferStorage(OpenGL.GLRenderbufferTarget,OpenGL.GLRenderbufferStorage,int,int)");
    glRenderbufferStorage(target, internalFormat, width, height);
}

// public static void Scissor(int x, int y, int width, int height) [static] :458
void GL::Scissor(int x, int y, int width, int height)
{
    uStackFrame __("OpenGL.GL", "Scissor(int,int,int,int)");
    glScissor(x, y, width, height);
}

// public static void ShaderSource(OpenGL.GLShaderHandle shader, string source) [static] :1260
void GL::ShaderSource(uint32_t shader, uString* source)
{
    uStackFrame __("OpenGL.GL", "ShaderSource(OpenGL.GLShaderHandle,string)");
    uBase::String utf8 = uStringToXliString(source);
    
    const char* code[] =
    {
    #ifdef U_GL_DESKTOP
        "#version 120\n",
    #else
        "",
    #endif
        utf8.Ptr(),
    };
    
    GLint len[] =
    {
        (GLint)strlen(code[0]),
        utf8.Length(),
    };
    
    glShaderSource(shader, 2, code, len);
}

// public static void TexImage2D(OpenGL.GLTextureTarget target, int level, OpenGL.GLPixelFormat internalFormat, int width, int height, int border, OpenGL.GLPixelFormat format, OpenGL.GLPixelType type, Uno.Buffer data) [static] :948
void GL::TexImage2D(int target, int level, int internalFormat, int width, int height, int border, int format, int type, ::g::Uno::Buffer* data)
{
    uStackFrame __("OpenGL.GL", "TexImage2D(OpenGL.GLTextureTarget,int,OpenGL.GLPixelFormat,int,int,int,OpenGL.GLPixelFormat,OpenGL.GLPixelType,Uno.Buffer)");
    glTexImage2D(target, level, internalFormat, width, height, border, format, type, data ? U_BUFFER_PTR(data) : NULL);
}

// public static void TexImage2D(OpenGL.GLTextureTarget target, int level, OpenGL.GLPixelFormat internalFormat, int width, int height, int border, OpenGL.GLPixelFormat format, OpenGL.GLPixelType type, Uno.IntPtr data) [static] :966
void GL::TexImage2D1(int target, int level, int internalFormat, int width, int height, int border, int format, int type, void* data)
{
    uStackFrame __("OpenGL.GL", "TexImage2D(OpenGL.GLTextureTarget,int,OpenGL.GLPixelFormat,int,int,int,OpenGL.GLPixelFormat,OpenGL.GLPixelType,Uno.IntPtr)");
    glTexImage2D(target, level, internalFormat, width, height, border, format, type, data);
}

// public static void TexParameter(OpenGL.GLTextureTarget target, OpenGL.GLTextureParameterName pname, OpenGL.GLTextureParameterValue param) [static] :985
void GL::TexParameter(int target, int pname, int param)
{
    uStackFrame __("OpenGL.GL", "TexParameter(OpenGL.GLTextureTarget,OpenGL.GLTextureParameterName,OpenGL.GLTextureParameterValue)");
    glTexParameteri(target, pname, param);
}

// public static void Uniform1(int location, float value) [static] :1524
void GL::Uniform1(int location, float value)
{
    uStackFrame __("OpenGL.GL", "Uniform1(int,float)");
    glUniform1f(location, value);
}

// public static void Uniform1(int location, float[] value) [static] :1733
void GL::Uniform11(int location, uArray* value)
{
    uStackFrame __("OpenGL.GL", "Uniform1(int,float[])");
    glUniform1fv(location, value->Length(), (const GLfloat*)value->Ptr());
}

// public static void Uniform1(int location, int value) [static] :1448
void GL::Uniform12(int location, int value)
{
    uStackFrame __("OpenGL.GL", "Uniform1(int,int)");
    glUniform1i(location, value);
}

// public static void Uniform2(int location, float2 value) [static] :1543
void GL::Uniform2(int location, ::g::Uno::Float2 value)
{
    uStackFrame __("OpenGL.GL", "Uniform2(int,float2)");
    glUniform2fv(location, 1, (const GLfloat*)&value);
}

// public static void Uniform2(int location, float2[] value) [static] :1752
void GL::Uniform21(int location, uArray* value)
{
    uStackFrame __("OpenGL.GL", "Uniform2(int,float2[])");
    glUniform2fv(location, value->Length(), (const GLfloat*)value->Ptr());
}

// public static void Uniform3(int location, float3 value) [static] :1562
void GL::Uniform3(int location, ::g::Uno::Float3 value)
{
    uStackFrame __("OpenGL.GL", "Uniform3(int,float3)");
    glUniform3fv(location, 1, (const GLfloat*)&value);
}

// public static void Uniform4(int location, float4 value) [static] :1581
void GL::Uniform4(int location, ::g::Uno::Float4 value)
{
    uStackFrame __("OpenGL.GL", "Uniform4(int,float4)");
    glUniform4fv(location, 1, (const GLfloat*)&value);
}

// public static void Uniform4(int location, float4[] value) [static] :1790
void GL::Uniform41(int location, uArray* value)
{
    uStackFrame __("OpenGL.GL", "Uniform4(int,float4[])");
    glUniform4fv(location, value->Length(), (const GLfloat*)value->Ptr());
}

// public static void UniformMatrix2(int location, bool transpose, float2x2 value) [static] :1600
void GL::UniformMatrix2(int location, bool transpose, ::g::Uno::Float2x2 value)
{
    uStackFrame __("OpenGL.GL", "UniformMatrix2(int,bool,float2x2)");
    glUniformMatrix2fv(location, 1, transpose, (const GLfloat*)&value);
}

// public static void UniformMatrix4(int location, bool transpose, float4x4 value) [static] :1638
void GL::UniformMatrix4(int location, bool transpose, ::g::Uno::Float4x4 value)
{
    uStackFrame __("OpenGL.GL", "UniformMatrix4(int,bool,float4x4)");
    glUniformMatrix4fv(location, 1, transpose, (const GLfloat*)&value);
}

// public static void UniformMatrix4(int location, bool transpose, float4x4[] value) [static] :1847
void GL::UniformMatrix41(int location, bool transpose, uArray* value)
{
    uStackFrame __("OpenGL.GL", "UniformMatrix4(int,bool,float4x4[])");
    glUniformMatrix4fv(location, value->Length(), transpose, (const GLfloat*)value->Ptr());
}

// public static void UseProgram(OpenGL.GLProgramHandle program) [static] :1296
void GL::UseProgram(uint32_t program)
{
    uStackFrame __("OpenGL.GL", "UseProgram(OpenGL.GLProgramHandle)");
    glUseProgram(program);
}

// public static void VertexAttribPointer(int index, int size, OpenGL.GLDataType type, bool normalized, int stride, int offset) [static] :1867
void GL::VertexAttribPointer(int index, int size, int type, bool normalized, int stride, int offset)
{
    uStackFrame __("OpenGL.GL", "VertexAttribPointer(int,int,OpenGL.GLDataType,bool,int,int)");
    glVertexAttribPointer(index, size, type, normalized, stride, (const GLvoid*)(size_t)offset);
}

// public static void Viewport(int x, int y, int width, int height) [static] :476
void GL::Viewport(int x, int y, int width, int height)
{
    uStackFrame __("OpenGL.GL", "Viewport(int,int,int,int)");
    glViewport(x, y, width, height);
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#2
// -------------------------------------------------------------------

// public extern enum GLBlendEquation :2231
uEnumType* GLBlendEquation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLBlendEquation", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "FuncAdd", 32774LL,
        "FuncSubtract", 32778LL,
        "FuncReverseSubtract", 32779LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#2
// -------------------------------------------------------------------

// public extern enum GLBlendingFactor :2239
uEnumType* GLBlendingFactor_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLBlendingFactor", ::g::Uno::Int_typeof(), 11);
    type->SetLiterals(
        "Zero", 0LL,
        "One", 1LL,
        "SrcColor", 768LL,
        "OneMinusSrcColor", 769LL,
        "SrcAlpha", 770LL,
        "OneMinusSrcAlpha", 771LL,
        "DstAlpha", 772LL,
        "OneMinusDstAlpha", 773LL,
        "DstColor", 774LL,
        "OneMinusDstColor", 775LL,
        "SrcAlphaSaturate", 776LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#1
// -------------------------------------------------------------------

// public extern struct GLBufferHandle :1975
// {
uStructType* GLBufferHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(uint32_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("OpenGL.GLBufferHandle", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))GLBufferHandle__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))GLBufferHandle__GetHashCode_fn;
    type->SetFields(0,
        GLBufferHandle_typeof(), (uintptr_t)&::g::OpenGL::GLBufferHandle::Zero_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Zero", 0));
    return type;
}

// public override sealed bool Equals(object obj) :2006
void GLBufferHandle__Equals_fn(uint32_t* __this, uType* __type, uObject* obj, bool* __retval)
{
    uStackFrame __("OpenGL.GLBufferHandle", "Equals(object)");
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(GLBufferHandle_typeof(), *__this, U_ALLOCA(GLBufferHandle_typeof()->ObjectSize)), obj, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :2000
void GLBufferHandle__GetHashCode_fn(uint32_t* __this, uType* __type, int* __retval)
{
    uStackFrame __("OpenGL.GLBufferHandle", "GetHashCode()");
    int ret2;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(GLBufferHandle_typeof(), *__this, U_ALLOCA(GLBufferHandle_typeof()->ObjectSize)), &ret2), ret2), void();
}

uint32_t GLBufferHandle::Zero_;
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#2
// -------------------------------------------------------------------

// public extern enum GLBufferTarget :2053
uEnumType* GLBufferTarget_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLBufferTarget", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "ArrayBuffer", 34962LL,
        "ElementArrayBuffer", 34963LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#2
// -------------------------------------------------------------------

// public extern enum GLBufferUsage :2060
uEnumType* GLBufferUsage_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLBufferUsage", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "StreamDraw", 35040LL,
        "StaticDraw", 35044LL,
        "DynamicDraw", 35048LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#2
// -------------------------------------------------------------------

// public extern enum GLClearBufferMask :2296
uEnumType* GLClearBufferMask_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLClearBufferMask", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "DepthBufferBit", 256LL,
        "StencilBufferBit", 1024LL,
        "ColorBufferBit", 16384LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#2
// -------------------------------------------------------------------

// public extern enum GLCullFaceMode :2141
uEnumType* GLCullFaceMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLCullFaceMode", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "None", 0LL,
        "Front", 1028LL,
        "Back", 1029LL,
        "FrontAndBack", 1032LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#2
// -------------------------------------------------------------------

// public extern enum GLDataType :2169
uEnumType* GLDataType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLDataType", ::g::Uno::Int_typeof(), 7);
    type->SetLiterals(
        "Byte", 5120LL,
        "UnsignedByte", 5121LL,
        "Short", 5122LL,
        "UnsignedShort", 5123LL,
        "Int", 5124LL,
        "UnsignedInt", 5125LL,
        "Float", 5126LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#2
// -------------------------------------------------------------------

// public extern enum GLDepthFunction :2128
uEnumType* GLDepthFunction_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLDepthFunction", ::g::Uno::Int_typeof(), 8);
    type->SetLiterals(
        "Never", 512LL,
        "Less", 513LL,
        "Equal", 514LL,
        "Lequal", 515LL,
        "Greater", 516LL,
        "Notequal", 517LL,
        "Gequal", 518LL,
        "Always", 519LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#2
// -------------------------------------------------------------------

// public extern enum GLEnableCap :2119
uEnumType* GLEnableCap_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLEnableCap", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Blend", 3042LL,
        "DepthTest", 2929LL,
        "CullFace", 2884LL,
        "ScissorTest", 3089LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#2
// -------------------------------------------------------------------

// public extern enum GLError :2275
uEnumType* GLError_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLError", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "NoError", 0LL,
        "InvalidEnum", 1280LL,
        "InvalidValue", 1281LL,
        "InvalidOperation", 1282LL,
        "OutOfMemory", 1285LL,
        "InvalidFramebufferOperation", 1286LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#2
// -------------------------------------------------------------------

// public extern enum GLFramebufferAttachment :2255
uEnumType* GLFramebufferAttachment_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLFramebufferAttachment", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "ColorAttachment0", 36064LL,
        "DepthAttachment", 36096LL,
        "StencilAttachment", 36128LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#3
// -------------------------------------------------------------------

// public extern struct GLFramebufferHandle :2345
// {
uStructType* GLFramebufferHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(uint32_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("OpenGL.GLFramebufferHandle", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))GLFramebufferHandle__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))GLFramebufferHandle__GetHashCode_fn;
    type->SetFields(0,
        GLFramebufferHandle_typeof(), (uintptr_t)&::g::OpenGL::GLFramebufferHandle::Zero_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Zero", 0));
    return type;
}

// public override sealed bool Equals(object obj) :2376
void GLFramebufferHandle__Equals_fn(uint32_t* __this, uType* __type, uObject* obj, bool* __retval)
{
    uStackFrame __("OpenGL.GLFramebufferHandle", "Equals(object)");
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(GLFramebufferHandle_typeof(), *__this, U_ALLOCA(GLFramebufferHandle_typeof()->ObjectSize)), obj, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :2370
void GLFramebufferHandle__GetHashCode_fn(uint32_t* __this, uType* __type, int* __retval)
{
    uStackFrame __("OpenGL.GLFramebufferHandle", "GetHashCode()");
    int ret2;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(GLFramebufferHandle_typeof(), *__this, U_ALLOCA(GLFramebufferHandle_typeof()->ObjectSize)), &ret2), ret2), void();
}

// public static operator !=(OpenGL.GLFramebufferHandle left, OpenGL.GLFramebufferHandle right) :2354
void GLFramebufferHandle__op_Inequality_fn(uint32_t* left, uint32_t* right, bool* __retval)
{
    *__retval = GLFramebufferHandle::op_Inequality(*left, *right);
}

uint32_t GLFramebufferHandle::Zero_;

// public static operator !=(OpenGL.GLFramebufferHandle left, OpenGL.GLFramebufferHandle right) [static] :2354
bool GLFramebufferHandle::op_Inequality(uint32_t left, uint32_t right)
{
    uStackFrame __("OpenGL.GLFramebufferHandle", "!=(OpenGL.GLFramebufferHandle,OpenGL.GLFramebufferHandle)");
    return left != right;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#2
// -------------------------------------------------------------------

// public extern enum GLFramebufferStatus :2286
uEnumType* GLFramebufferStatus_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLFramebufferStatus", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "FramebufferComplete", 36053LL,
        "FramebufferIncompleteAttachment", 36054LL,
        "FramebufferIncompleteMissingAttachment", 36055LL,
        "FramebufferIncompleteDimensions", 36057LL,
        "FramebufferUnsupported", 36061LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#2
// -------------------------------------------------------------------

// public extern enum GLFramebufferTarget :2263
uEnumType* GLFramebufferTarget_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLFramebufferTarget", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "Framebuffer", 36160LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#2
// -------------------------------------------------------------------

// public extern enum GLFrontFaceDirection :2150
uEnumType* GLFrontFaceDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLFrontFaceDirection", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Cw", 2304LL,
        "Ccw", 2305LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#2
// -------------------------------------------------------------------

// public extern enum GLIndexType :2181
uEnumType* GLIndexType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLIndexType", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "UnsignedByte", 5121LL,
        "UnsignedShort", 5123LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#2
// -------------------------------------------------------------------

// public extern enum GLInteger4Name :2028
uEnumType* GLInteger4Name_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLInteger4Name", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "ScissorBox", 3088LL,
        "Viewport", 2978LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#2
// -------------------------------------------------------------------

// public extern enum GLIntegerName :2022
uEnumType* GLIntegerName_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLIntegerName", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "MaxTextureSize", 3379LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#2
// -------------------------------------------------------------------

// public extern enum GLPixelFormat :2188
uEnumType* GLPixelFormat_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLPixelFormat", ::g::Uno::Int_typeof(), 10);
    type->SetLiterals(
        "DepthComponent", 6402LL,
        "Alpha", 6406LL,
        "Bgr", 32992LL,
        "Bgra", 32993LL,
        "Red", 6403LL,
        "Rg", 33319LL,
        "Rgb", 6407LL,
        "Rgba", 6408LL,
        "Luminance", 6409LL,
        "LuminanceAlpha", 6410LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#2
// -------------------------------------------------------------------

// public extern enum GLPixelType :2203
uEnumType* GLPixelType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLPixelType", ::g::Uno::Int_typeof(), 10);
    type->SetLiterals(
        "Byte", 5120LL,
        "UnsignedByte", 5121LL,
        "Short", 5122LL,
        "UnsignedShort", 5123LL,
        "Int", 5124LL,
        "UnsignedInt", 5125LL,
        "Float", 5126LL,
        "UnsignedShort4444", 32819LL,
        "UnsignedShort5551", 32820LL,
        "UnsignedShort565", 33635LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#2
// -------------------------------------------------------------------

// public extern enum GLPrimitiveType :2157
uEnumType* GLPrimitiveType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLPrimitiveType", ::g::Uno::Int_typeof(), 7);
    type->SetLiterals(
        "Points", 0LL,
        "Lines", 1LL,
        "LineLoop", 2LL,
        "LineStrip", 3LL,
        "Triangles", 4LL,
        "TriangleStrip", 5LL,
        "TriangleFan", 6LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#4
// -------------------------------------------------------------------

// public extern struct GLProgramHandle :2396
// {
uStructType* GLProgramHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(uint32_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("OpenGL.GLProgramHandle", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))GLProgramHandle__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))GLProgramHandle__GetHashCode_fn;
    type->SetFields(0,
        GLProgramHandle_typeof(), (uintptr_t)&::g::OpenGL::GLProgramHandle::Zero_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Zero", 0));
    return type;
}

// public override sealed bool Equals(object obj) :2427
void GLProgramHandle__Equals_fn(uint32_t* __this, uType* __type, uObject* obj, bool* __retval)
{
    uStackFrame __("OpenGL.GLProgramHandle", "Equals(object)");
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(GLProgramHandle_typeof(), *__this, U_ALLOCA(GLProgramHandle_typeof()->ObjectSize)), obj, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :2421
void GLProgramHandle__GetHashCode_fn(uint32_t* __this, uType* __type, int* __retval)
{
    uStackFrame __("OpenGL.GLProgramHandle", "GetHashCode()");
    int ret2;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(GLProgramHandle_typeof(), *__this, U_ALLOCA(GLProgramHandle_typeof()->ObjectSize)), &ret2), ret2), void();
}

uint32_t GLProgramHandle::Zero_;
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#2
// -------------------------------------------------------------------

// public extern enum GLProgramParameter :2312
uEnumType* GLProgramParameter_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLProgramParameter", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "DeleteStatus", 35712LL,
        "LinkStatus", 35714LL,
        "AttachedShaders", 35717LL,
        "ActiveUniforms", 35718LL,
        "ActiveAttributes", 35721LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#5
// -------------------------------------------------------------------

// public extern struct GLRenderbufferHandle :2447
// {
uStructType* GLRenderbufferHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(uint32_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("OpenGL.GLRenderbufferHandle", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))GLRenderbufferHandle__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))GLRenderbufferHandle__GetHashCode_fn;
    type->SetFields(0,
        GLRenderbufferHandle_typeof(), (uintptr_t)&::g::OpenGL::GLRenderbufferHandle::Zero_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Zero", 0));
    return type;
}

// public override sealed bool Equals(object obj) :2478
void GLRenderbufferHandle__Equals_fn(uint32_t* __this, uType* __type, uObject* obj, bool* __retval)
{
    uStackFrame __("OpenGL.GLRenderbufferHandle", "Equals(object)");
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(GLRenderbufferHandle_typeof(), *__this, U_ALLOCA(GLRenderbufferHandle_typeof()->ObjectSize)), obj, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :2472
void GLRenderbufferHandle__GetHashCode_fn(uint32_t* __this, uType* __type, int* __retval)
{
    uStackFrame __("OpenGL.GLRenderbufferHandle", "GetHashCode()");
    int ret2;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(GLRenderbufferHandle_typeof(), *__this, U_ALLOCA(GLRenderbufferHandle_typeof()->ObjectSize)), &ret2), ret2), void();
}

// public static operator !=(OpenGL.GLRenderbufferHandle left, OpenGL.GLRenderbufferHandle right) :2456
void GLRenderbufferHandle__op_Inequality_fn(uint32_t* left, uint32_t* right, bool* __retval)
{
    *__retval = GLRenderbufferHandle::op_Inequality(*left, *right);
}

uint32_t GLRenderbufferHandle::Zero_;

// public static operator !=(OpenGL.GLRenderbufferHandle left, OpenGL.GLRenderbufferHandle right) [static] :2456
bool GLRenderbufferHandle::op_Inequality(uint32_t left, uint32_t right)
{
    uStackFrame __("OpenGL.GLRenderbufferHandle", "!=(OpenGL.GLRenderbufferHandle,OpenGL.GLRenderbufferHandle)");
    return left != right;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#2
// -------------------------------------------------------------------

// public extern enum GLRenderbufferStorage :2225
uEnumType* GLRenderbufferStorage_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLRenderbufferStorage", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "DepthComponent16", 33189LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#2
// -------------------------------------------------------------------

// public extern enum GLRenderbufferTarget :2269
uEnumType* GLRenderbufferTarget_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLRenderbufferTarget", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "Renderbuffer", 36161LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#6
// -------------------------------------------------------------------

// public extern struct GLShaderHandle :2498
// {
uStructType* GLShaderHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(uint32_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("OpenGL.GLShaderHandle", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))GLShaderHandle__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))GLShaderHandle__GetHashCode_fn;
    type->SetFields(0,
        GLShaderHandle_typeof(), (uintptr_t)&::g::OpenGL::GLShaderHandle::Zero_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Zero", 0));
    return type;
}

// public override sealed bool Equals(object obj) :2529
void GLShaderHandle__Equals_fn(uint32_t* __this, uType* __type, uObject* obj, bool* __retval)
{
    uStackFrame __("OpenGL.GLShaderHandle", "Equals(object)");
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(GLShaderHandle_typeof(), *__this, U_ALLOCA(GLShaderHandle_typeof()->ObjectSize)), obj, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :2523
void GLShaderHandle__GetHashCode_fn(uint32_t* __this, uType* __type, int* __retval)
{
    uStackFrame __("OpenGL.GLShaderHandle", "GetHashCode()");
    int ret2;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(GLShaderHandle_typeof(), *__this, U_ALLOCA(GLShaderHandle_typeof()->ObjectSize)), &ret2), ret2), void();
}

uint32_t GLShaderHandle::Zero_;
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#2
// -------------------------------------------------------------------

// public extern enum GLShaderParameter :2304
uEnumType* GLShaderParameter_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLShaderParameter", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "ShaderType", 35663LL,
        "DeleteStatus", 35712LL,
        "CompileStatus", 35713LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#2
// -------------------------------------------------------------------

// public extern enum GLShaderType :2035
uEnumType* GLShaderType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLShaderType", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "FragmentShader", 35632LL,
        "VertexShader", 35633LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#8
// -------------------------------------------------------------------

// public extern struct GLTextureHandle :2573
// {
uStructType* GLTextureHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(uint32_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("OpenGL.GLTextureHandle", options);
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))GLTextureHandle__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))GLTextureHandle__GetHashCode_fn;
    type->SetFields(0,
        GLTextureHandle_typeof(), (uintptr_t)&::g::OpenGL::GLTextureHandle::Zero_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Zero", 0));
    return type;
}

// public override sealed bool Equals(object obj) :2604
void GLTextureHandle__Equals_fn(uint32_t* __this, uType* __type, uObject* obj, bool* __retval)
{
    uStackFrame __("OpenGL.GLTextureHandle", "Equals(object)");
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(GLTextureHandle_typeof(), *__this, U_ALLOCA(GLTextureHandle_typeof()->ObjectSize)), obj, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :2598
void GLTextureHandle__GetHashCode_fn(uint32_t* __this, uType* __type, int* __retval)
{
    uStackFrame __("OpenGL.GLTextureHandle", "GetHashCode()");
    int ret2;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(GLTextureHandle_typeof(), *__this, U_ALLOCA(GLTextureHandle_typeof()->ObjectSize)), &ret2), ret2), void();
}

// public static extern explicit operator int(OpenGL.GLTextureHandle handle) :2587
void GLTextureHandle__op_Explicit1_fn(uint32_t* handle, int* __retval)
{
    *__retval = GLTextureHandle::op_Explicit1(*handle);
}

// public static operator !=(OpenGL.GLTextureHandle left, OpenGL.GLTextureHandle right) :2582
void GLTextureHandle__op_Inequality_fn(uint32_t* left, uint32_t* right, bool* __retval)
{
    *__retval = GLTextureHandle::op_Inequality(*left, *right);
}

uint32_t GLTextureHandle::Zero_;

// public static extern explicit operator int(OpenGL.GLTextureHandle handle) [static] :2587
int GLTextureHandle::op_Explicit1(uint32_t handle)
{
    uStackFrame __("OpenGL.GLTextureHandle", "op_Explicit(OpenGL.GLTextureHandle)~int");
    return handle;
}

// public static operator !=(OpenGL.GLTextureHandle left, OpenGL.GLTextureHandle right) [static] :2582
bool GLTextureHandle::op_Inequality(uint32_t left, uint32_t right)
{
    uStackFrame __("OpenGL.GLTextureHandle", "!=(OpenGL.GLTextureHandle,OpenGL.GLTextureHandle)");
    return left != right;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#2
// -------------------------------------------------------------------

// public extern enum GLTextureParameterName :2095
uEnumType* GLTextureParameterName_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLTextureParameterName", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "WrapS", 10242LL,
        "WrapT", 10243LL,
        "MagFilter", 10240LL,
        "MinFilter", 10241LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#2
// -------------------------------------------------------------------

// public extern enum GLTextureParameterValue :2104
uEnumType* GLTextureParameterValue_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLTextureParameterValue", ::g::Uno::Int_typeof(), 8);
    type->SetLiterals(
        "Repeat", 10497LL,
        "ClampToEdge", 33071LL,
        "Nearest", 9728LL,
        "Linear", 9729LL,
        "NearestMipmapNearest", 9984LL,
        "LinearMipmapNearest", 9985LL,
        "NearestMipmapLinear", 9986LL,
        "LinearMipmapLinear", 9987LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#2
// -------------------------------------------------------------------

// public extern enum GLTextureTarget :2081
uEnumType* GLTextureTarget_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLTextureTarget", ::g::Uno::Int_typeof(), 9);
    type->SetLiterals(
        "Texture2D", 3553LL,
        "TextureCubeMap", 34067LL,
        "TextureCubeMapPositiveX", 34069LL,
        "TextureCubeMapNegativeX", 34070LL,
        "TextureCubeMapPositiveY", 34071LL,
        "TextureCubeMapNegativeY", 34072LL,
        "TextureCubeMapPositiveZ", 34073LL,
        "TextureCubeMapNegativeZ", 34074LL,
        "TextureExternalOES", 36197LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.27.20/Source/OpenGL/$.uno#2
// -------------------------------------------------------------------

// public extern enum GLTextureUnit :2068
uEnumType* GLTextureUnit_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLTextureUnit", ::g::Uno::Int_typeof(), 8);
    type->SetLiterals(
        "Texture0", 33984LL,
        "Texture1", 33985LL,
        "Texture2", 33986LL,
        "Texture3", 33987LL,
        "Texture4", 33988LL,
        "Texture5", 33989LL,
        "Texture6", 33990LL,
        "Texture7", 33991LL);
    return type;
}

}} // ::g::OpenGL
