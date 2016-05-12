// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Video.Graphics.iOS.Internal.VideoPlayer.h>
#include <Fuse.Video.Graphics.iOS.Internal.VideoPlayerImpl.h>
#include <OpenGL.GLTextureHandle.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Graphics.VideoTexture.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IntPtr.h>
#include <Uno.String.h>
#include <uObjC.h>
#include <VideoImpl.h>
static uString* STRINGS[1];
static uType* TYPES[7];

namespace g{
namespace Fuse{
namespace Video{
namespace Graphics{
namespace iOS{
namespace Internal{

// /usr/local/share/uno/Packages/Fuse.Video/0.27.14/iOS/Impl/$.uno
// ---------------------------------------------------------------

// internal sealed extern class VideoPlayer :13
// {
VideoPlayer_type* VideoPlayer_typeof()
{
    static uSStrong<VideoPlayer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(VideoPlayer);
    options.TypeSize = sizeof(VideoPlayer_type);
    type = (VideoPlayer_type*)uClassType::New("Fuse.Video.Graphics.iOS.Internal.VideoPlayer", options);
    type->interface0.fp_Play = (void(*)(uObject*))VideoPlayer__Play_fn;
    type->interface0.fp_Pause = (void(*)(uObject*))VideoPlayer__Pause_fn;
    type->interface0.fp_Update = (void(*)(uObject*))VideoPlayer__Update_fn;
    type->interface0.fp_get_VideoTexture = (void(*)(uObject*, ::g::Uno::Graphics::VideoTexture**))VideoPlayer__get_VideoTexture_fn;
    type->interface0.fp_get_Size = (void(*)(uObject*, ::g::Uno::Int2*))VideoPlayer__get_Size_fn;
    type->interface0.fp_get_Volume = (void(*)(uObject*, float*))VideoPlayer__get_Volume_fn;
    type->interface0.fp_set_Volume = (void(*)(uObject*, float*))VideoPlayer__set_Volume_fn;
    type->interface0.fp_get_Duration = (void(*)(uObject*, double*))VideoPlayer__get_Duration_fn;
    type->interface0.fp_get_Position = (void(*)(uObject*, double*))VideoPlayer__get_Position_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, double*))VideoPlayer__set_Position_fn;
    type->interface0.fp_add_FrameAvailable = (void(*)(uObject*, uDelegate*))VideoPlayer__add_FrameAvailable_fn;
    type->interface0.fp_remove_FrameAvailable = (void(*)(uObject*, uDelegate*))VideoPlayer__remove_FrameAvailable_fn;
    type->interface0.fp_add_ErrorOccurred = (void(*)(uObject*, uDelegate*))VideoPlayer__add_ErrorOccurred_fn;
    type->interface0.fp_remove_ErrorOccurred = (void(*)(uObject*, uDelegate*))VideoPlayer__remove_ErrorOccurred_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))VideoPlayer__Dispose_fn;
    ::STRINGS[0] = uString::Const("Unknown playback error");
    ::TYPES[0] = ::g::Uno::IntPtr_typeof();
    ::TYPES[1] = ::g::Uno::Action_typeof();
    ::TYPES[2] = ::g::Uno::Delegate_typeof();
    ::TYPES[3] = ::g::Uno::EventHandler_typeof();
    ::TYPES[4] = uObject_typeof();
    ::TYPES[5] = ::g::Uno::EventArgs_typeof();
    ::TYPES[6] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Exception_typeof());
    type->SetInterfaces(
        ::g::Fuse::Video::IVideoPlayer_typeof(), offsetof(VideoPlayer_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(VideoPlayer_type, interface1));
    type->SetFields(0,
        ::g::Uno::Graphics::VideoTexture_typeof(), offsetof(::g::Fuse::Video::Graphics::iOS::Internal::VideoPlayer, _currentTexture), 0,
        ::g::OpenGL::GLTextureHandle_typeof(), offsetof(::g::Fuse::Video::Graphics::iOS::Internal::VideoPlayer, _currentTextureHandle), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Video::Graphics::iOS::Internal::VideoPlayer, _handle), 0,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Exception_typeof()), offsetof(::g::Fuse::Video::Graphics::iOS::Internal::VideoPlayer, ErrorOccurred1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Video::Graphics::iOS::Internal::VideoPlayer, FrameAvailable1), 0);
    return type;
}

// public VideoPlayer(string uri, Uno.Action onLoaded, Uno.Action onLoadError) :75
void VideoPlayer__ctor__fn(VideoPlayer* __this, uString* uri, uDelegate* onLoaded, uDelegate* onLoadError)
{
    __this->ctor_(uri, onLoaded, onLoadError);
}

// public void Dispose() :96
void VideoPlayer__Dispose_fn(VideoPlayer* __this)
{
    __this->Dispose();
}

// public double get_Duration() :39
void VideoPlayer__get_Duration_fn(VideoPlayer* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public generated void add_ErrorOccurred(Uno.EventHandler<Uno.Exception> value) :71
void VideoPlayer__add_ErrorOccurred_fn(VideoPlayer* __this, uDelegate* value)
{
    __this->add_ErrorOccurred(value);
}

// public generated void remove_ErrorOccurred(Uno.EventHandler<Uno.Exception> value) :71
void VideoPlayer__remove_ErrorOccurred_fn(VideoPlayer* __this, uDelegate* value)
{
    __this->remove_ErrorOccurred(value);
}

// public generated void add_FrameAvailable(Uno.EventHandler value) :70
void VideoPlayer__add_FrameAvailable_fn(VideoPlayer* __this, uDelegate* value)
{
    __this->add_FrameAvailable(value);
}

// public generated void remove_FrameAvailable(Uno.EventHandler value) :70
void VideoPlayer__remove_FrameAvailable_fn(VideoPlayer* __this, uDelegate* value)
{
    __this->remove_FrameAvailable(value);
}

// public VideoPlayer New(string uri, Uno.Action onLoaded, Uno.Action onLoadError) :75
void VideoPlayer__New1_fn(uString* uri, uDelegate* onLoaded, uDelegate* onLoadError, VideoPlayer** __retval)
{
    *__retval = VideoPlayer::New1(uri, onLoaded, onLoadError);
}

// private void OnFrameAvailable() :82
void VideoPlayer__OnFrameAvailable_fn(VideoPlayer* __this)
{
    __this->OnFrameAvailable();
}

// public void Pause() :53
void VideoPlayer__Pause_fn(VideoPlayer* __this)
{
    __this->Pause();
}

// public void Play() :48
void VideoPlayer__Play_fn(VideoPlayer* __this)
{
    __this->Play();
}

// private void PlayerErrorHandler() :89
void VideoPlayer__PlayerErrorHandler_fn(VideoPlayer* __this)
{
    __this->PlayerErrorHandler();
}

// public double get_Position() :44
void VideoPlayer__get_Position_fn(VideoPlayer* __this, double* __retval)
{
    *__retval = __this->Position();
}

// public void set_Position(double value) :45
void VideoPlayer__set_Position_fn(VideoPlayer* __this, double* value)
{
    __this->Position(*value);
}

// public int2 get_Size() :28
void VideoPlayer__get_Size_fn(VideoPlayer* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Size();
}

// private OpenGL.GLTextureHandle get_TextureHandle() :23
void VideoPlayer__get_TextureHandle_fn(VideoPlayer* __this, uint32_t* __retval)
{
    *__retval = __this->TextureHandle();
}

// public void Update() :59
void VideoPlayer__Update_fn(VideoPlayer* __this)
{
    __this->Update();
}

// public Uno.Graphics.VideoTexture get_VideoTexture() :18
void VideoPlayer__get_VideoTexture_fn(VideoPlayer* __this, ::g::Uno::Graphics::VideoTexture** __retval)
{
    *__retval = __this->VideoTexture();
}

// public float get_Volume() :33
void VideoPlayer__get_Volume_fn(VideoPlayer* __this, float* __retval)
{
    *__retval = __this->Volume();
}

// public void set_Volume(float value) :34
void VideoPlayer__set_Volume_fn(VideoPlayer* __this, float* value)
{
    __this->Volume(*value);
}

// public VideoPlayer(string uri, Uno.Action onLoaded, Uno.Action onLoadError) [instance] :75
void VideoPlayer::ctor_(uString* uri, uDelegate* onLoaded, uDelegate* onLoadError)
{
    uStackFrame __("Fuse.Video.Graphics.iOS.Internal.VideoPlayer", ".ctor(string,Uno.Action,Uno.Action)");
    _handle = ::g::Uno::IntPtr::Zero();
    _handle = ::g::Fuse::Video::Graphics::iOS::Internal::VideoPlayerImpl::AllocateVideoState();
    ::g::Fuse::Video::Graphics::iOS::Internal::VideoPlayerImpl::Initialize(_handle, uri, onLoaded, onLoadError);
    ::g::Fuse::Video::Graphics::iOS::Internal::VideoPlayerImpl::SetErrorHandler(_handle, uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)VideoPlayer__PlayerErrorHandler_fn, this));
}

// public void Dispose() [instance] :96
void VideoPlayer::Dispose()
{
    uStackFrame __("Fuse.Video.Graphics.iOS.Internal.VideoPlayer", "Dispose()");

    if (::g::Uno::IntPtr::op_Inequality(_handle, ::g::Uno::IntPtr::Zero()))
    {
        ::g::Fuse::Video::Graphics::iOS::Internal::VideoPlayerImpl::FreeVideoState(_handle);
        _handle = ::g::Uno::IntPtr::Zero();
    }
}

// public double get_Duration() [instance] :39
double VideoPlayer::Duration()
{
    uStackFrame __("Fuse.Video.Graphics.iOS.Internal.VideoPlayer", "get_Duration()");
    return ::g::Fuse::Video::Graphics::iOS::Internal::VideoPlayerImpl::GetDuration(_handle);
}

// public generated void add_ErrorOccurred(Uno.EventHandler<Uno.Exception> value) [instance] :71
void VideoPlayer::add_ErrorOccurred(uDelegate* value)
{
    uStackFrame __("Fuse.Video.Graphics.iOS.Internal.VideoPlayer", "add_ErrorOccurred(Uno.EventHandler<Uno.Exception>)");
    ErrorOccurred1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ErrorOccurred1, value), ::TYPES[6/*Uno.EventHandler<Uno.Exception>*/]);
}

// public generated void remove_ErrorOccurred(Uno.EventHandler<Uno.Exception> value) [instance] :71
void VideoPlayer::remove_ErrorOccurred(uDelegate* value)
{
    uStackFrame __("Fuse.Video.Graphics.iOS.Internal.VideoPlayer", "remove_ErrorOccurred(Uno.EventHandler<Uno.Exception>)");
    ErrorOccurred1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ErrorOccurred1, value), ::TYPES[6/*Uno.EventHandler<Uno.Exception>*/]);
}

// public generated void add_FrameAvailable(Uno.EventHandler value) [instance] :70
void VideoPlayer::add_FrameAvailable(uDelegate* value)
{
    uStackFrame __("Fuse.Video.Graphics.iOS.Internal.VideoPlayer", "add_FrameAvailable(Uno.EventHandler)");
    FrameAvailable1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(FrameAvailable1, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// public generated void remove_FrameAvailable(Uno.EventHandler value) [instance] :70
void VideoPlayer::remove_FrameAvailable(uDelegate* value)
{
    uStackFrame __("Fuse.Video.Graphics.iOS.Internal.VideoPlayer", "remove_FrameAvailable(Uno.EventHandler)");
    FrameAvailable1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(FrameAvailable1, value), ::TYPES[3/*Uno.EventHandler*/]);
}

// private void OnFrameAvailable() [instance] :82
void VideoPlayer::OnFrameAvailable()
{
    uStackFrame __("Fuse.Video.Graphics.iOS.Internal.VideoPlayer", "OnFrameAvailable()");
    uDelegate* handler = FrameAvailable1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public void Pause() [instance] :53
void VideoPlayer::Pause()
{
    uStackFrame __("Fuse.Video.Graphics.iOS.Internal.VideoPlayer", "Pause()");
    ::g::Fuse::Video::Graphics::iOS::Internal::VideoPlayerImpl::Pause(_handle);
}

// public void Play() [instance] :48
void VideoPlayer::Play()
{
    uStackFrame __("Fuse.Video.Graphics.iOS.Internal.VideoPlayer", "Play()");
    ::g::Fuse::Video::Graphics::iOS::Internal::VideoPlayerImpl::Play(_handle);
}

// private void PlayerErrorHandler() [instance] :89
void VideoPlayer::PlayerErrorHandler()
{
    uStackFrame __("Fuse.Video.Graphics.iOS.Internal.VideoPlayer", "PlayerErrorHandler()");
    uDelegate* handler = ErrorOccurred1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, this, (::g::Uno::Exception*)::g::Uno::Exception::New2(::STRINGS[0/*"Unknown pla...*/]));
}

// public double get_Position() [instance] :44
double VideoPlayer::Position()
{
    uStackFrame __("Fuse.Video.Graphics.iOS.Internal.VideoPlayer", "get_Position()");
    return ::g::Fuse::Video::Graphics::iOS::Internal::VideoPlayerImpl::GetPosition(_handle);
}

// public void set_Position(double value) [instance] :45
void VideoPlayer::Position(double value)
{
    uStackFrame __("Fuse.Video.Graphics.iOS.Internal.VideoPlayer", "set_Position(double)");
    ::g::Fuse::Video::Graphics::iOS::Internal::VideoPlayerImpl::SetPosition(_handle, value);
}

// public int2 get_Size() [instance] :28
::g::Uno::Int2 VideoPlayer::Size()
{
    uStackFrame __("Fuse.Video.Graphics.iOS.Internal.VideoPlayer", "get_Size()");
    return ::g::Uno::Int2__New2(::g::Fuse::Video::Graphics::iOS::Internal::VideoPlayerImpl::GetWidth(_handle), ::g::Fuse::Video::Graphics::iOS::Internal::VideoPlayerImpl::GetHeight(_handle));
}

// private OpenGL.GLTextureHandle get_TextureHandle() [instance] :23
uint32_t VideoPlayer::TextureHandle()
{
    uStackFrame __("Fuse.Video.Graphics.iOS.Internal.VideoPlayer", "get_TextureHandle()");
    return ::g::Fuse::Video::Graphics::iOS::Internal::VideoPlayerImpl::UpdateTexture(_handle);
}

// public void Update() [instance] :59
void VideoPlayer::Update()
{
    uStackFrame __("Fuse.Video.Graphics.iOS.Internal.VideoPlayer", "Update()");
    uint32_t textureHandle = TextureHandle();

    if (::g::OpenGL::GLTextureHandle::op_Inequality(textureHandle, _currentTextureHandle))
    {
        _currentTextureHandle = textureHandle;
        _currentTexture = ::g::Uno::Graphics::VideoTexture::New1(_currentTextureHandle);
        OnFrameAvailable();
    }
}

// public Uno.Graphics.VideoTexture get_VideoTexture() [instance] :18
::g::Uno::Graphics::VideoTexture* VideoPlayer::VideoTexture()
{
    uStackFrame __("Fuse.Video.Graphics.iOS.Internal.VideoPlayer", "get_VideoTexture()");
    return _currentTexture;
}

// public float get_Volume() [instance] :33
float VideoPlayer::Volume()
{
    uStackFrame __("Fuse.Video.Graphics.iOS.Internal.VideoPlayer", "get_Volume()");
    return ::g::Fuse::Video::Graphics::iOS::Internal::VideoPlayerImpl::GetVolume(_handle);
}

// public void set_Volume(float value) [instance] :34
void VideoPlayer::Volume(float value)
{
    uStackFrame __("Fuse.Video.Graphics.iOS.Internal.VideoPlayer", "set_Volume(float)");
    ::g::Fuse::Video::Graphics::iOS::Internal::VideoPlayerImpl::SetVolume(_handle, value);
}

// public VideoPlayer New(string uri, Uno.Action onLoaded, Uno.Action onLoadError) [static] :75
VideoPlayer* VideoPlayer::New1(uString* uri, uDelegate* onLoaded, uDelegate* onLoadError)
{
    VideoPlayer* obj1 = (VideoPlayer*)uNew(VideoPlayer_typeof());
    obj1->ctor_(uri, onLoaded, onLoadError);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Video/0.27.14/iOS/Impl/$.uno
// ---------------------------------------------------------------

// internal static extern class VideoPlayerImpl :109
// {
uClassType* VideoPlayerImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Video.Graphics.iOS.Internal.VideoPlayerImpl", options);
    return type;
}

// public static extern Uno.IntPtr AllocateVideoState() :113
void VideoPlayerImpl__AllocateVideoState_fn(void** __retval)
{
    *__retval = VideoPlayerImpl::AllocateVideoState();
}

// public static extern void FreeVideoState(Uno.IntPtr videoState) :116
void VideoPlayerImpl__FreeVideoState_fn(void** videoState_)
{
    VideoPlayerImpl::FreeVideoState(*videoState_);
}

// public static extern double GetDuration(Uno.IntPtr videoState) :122
void VideoPlayerImpl__GetDuration_fn(void** videoState_, double* __retval)
{
    *__retval = VideoPlayerImpl::GetDuration(*videoState_);
}

// public static extern int GetHeight(Uno.IntPtr videoState) :140
void VideoPlayerImpl__GetHeight_fn(void** videoState_, int* __retval)
{
    *__retval = VideoPlayerImpl::GetHeight(*videoState_);
}

// public static extern double GetPosition(Uno.IntPtr videoState) :125
void VideoPlayerImpl__GetPosition_fn(void** videoState_, double* __retval)
{
    *__retval = VideoPlayerImpl::GetPosition(*videoState_);
}

// public static extern float GetVolume(Uno.IntPtr videoState) :131
void VideoPlayerImpl__GetVolume_fn(void** videoState_, float* __retval)
{
    *__retval = VideoPlayerImpl::GetVolume(*videoState_);
}

// public static extern int GetWidth(Uno.IntPtr videoState) :137
void VideoPlayerImpl__GetWidth_fn(void** videoState_, int* __retval)
{
    *__retval = VideoPlayerImpl::GetWidth(*videoState_);
}

// public static extern void Initialize(Uno.IntPtr videoState, string uri, Uno.Action loadedCallback, Uno.Action errorCallback) :119
void VideoPlayerImpl__Initialize_fn(void** videoState_, uString* uri_, uDelegate* loadedCallback_, uDelegate* errorCallback_)
{
    VideoPlayerImpl::Initialize(*videoState_, uri_, loadedCallback_, errorCallback_);
}

// public static extern void Pause(Uno.IntPtr videoState) :146
void VideoPlayerImpl__Pause_fn(void** videoState_)
{
    VideoPlayerImpl::Pause(*videoState_);
}

// public static extern void Play(Uno.IntPtr videoState) :143
void VideoPlayerImpl__Play_fn(void** videoState_)
{
    VideoPlayerImpl::Play(*videoState_);
}

// public static extern void SetErrorHandler(Uno.IntPtr videoState, Uno.Action errorHandler) :152
void VideoPlayerImpl__SetErrorHandler_fn(void** videoState_, uDelegate* errorHandler_)
{
    VideoPlayerImpl::SetErrorHandler(*videoState_, errorHandler_);
}

// public static extern void SetPosition(Uno.IntPtr videoState, double position) :128
void VideoPlayerImpl__SetPosition_fn(void** videoState_, double* position_)
{
    VideoPlayerImpl::SetPosition(*videoState_, *position_);
}

// public static extern void SetVolume(Uno.IntPtr videoState, float volume) :134
void VideoPlayerImpl__SetVolume_fn(void** videoState_, float* volume_)
{
    VideoPlayerImpl::SetVolume(*videoState_, *volume_);
}

// public static extern OpenGL.GLTextureHandle UpdateTexture(Uno.IntPtr videoState) :149
void VideoPlayerImpl__UpdateTexture_fn(void** videoState_, uint32_t* __retval)
{
    *__retval = VideoPlayerImpl::UpdateTexture(*videoState_);
}

// public static extern Uno.IntPtr AllocateVideoState() [static] :113
void* VideoPlayerImpl::AllocateVideoState()
{
    uStackFrame __("Fuse.Video.Graphics.iOS.Internal.VideoPlayerImpl", "AllocateVideoState()");
    return ::FuseVideoImpl::allocateVideoState();
}

// public static extern void FreeVideoState(Uno.IntPtr videoState) [static] :116
void VideoPlayerImpl::FreeVideoState(void* videoState_)
{
    uStackFrame __("Fuse.Video.Graphics.iOS.Internal.VideoPlayerImpl", "FreeVideoState(Uno.IntPtr)");
    ::FuseVideoImpl::freeVideoState(videoState_);
}

// public static extern double GetDuration(Uno.IntPtr videoState) [static] :122
double VideoPlayerImpl::GetDuration(void* videoState_)
{
    uStackFrame __("Fuse.Video.Graphics.iOS.Internal.VideoPlayerImpl", "GetDuration(Uno.IntPtr)");
    return ::FuseVideoImpl::getDuration(videoState_);
}

// public static extern int GetHeight(Uno.IntPtr videoState) [static] :140
int VideoPlayerImpl::GetHeight(void* videoState_)
{
    uStackFrame __("Fuse.Video.Graphics.iOS.Internal.VideoPlayerImpl", "GetHeight(Uno.IntPtr)");
    return ::FuseVideoImpl::getHeight(videoState_);
}

// public static extern double GetPosition(Uno.IntPtr videoState) [static] :125
double VideoPlayerImpl::GetPosition(void* videoState_)
{
    uStackFrame __("Fuse.Video.Graphics.iOS.Internal.VideoPlayerImpl", "GetPosition(Uno.IntPtr)");
    return ::FuseVideoImpl::getPosition(videoState_);
}

// public static extern float GetVolume(Uno.IntPtr videoState) [static] :131
float VideoPlayerImpl::GetVolume(void* videoState_)
{
    uStackFrame __("Fuse.Video.Graphics.iOS.Internal.VideoPlayerImpl", "GetVolume(Uno.IntPtr)");
    return ::FuseVideoImpl::getVolume(videoState_);
}

// public static extern int GetWidth(Uno.IntPtr videoState) [static] :137
int VideoPlayerImpl::GetWidth(void* videoState_)
{
    uStackFrame __("Fuse.Video.Graphics.iOS.Internal.VideoPlayerImpl", "GetWidth(Uno.IntPtr)");
    return ::FuseVideoImpl::getWidth(videoState_);
}

// public static extern void Initialize(Uno.IntPtr videoState, string uri, Uno.Action loadedCallback, Uno.Action errorCallback) [static] :119
void VideoPlayerImpl::Initialize(void* videoState_, uString* uri_, uDelegate* loadedCallback_, uDelegate* errorCallback_)
{
    uStackFrame __("Fuse.Video.Graphics.iOS.Internal.VideoPlayerImpl", "Initialize(Uno.IntPtr,string,Uno.Action,Uno.Action)");
    ::FuseVideoImpl::initialize(videoState_, uObjC::NativeString(uri_), loadedCallback_, errorCallback_);
}

// public static extern void Pause(Uno.IntPtr videoState) [static] :146
void VideoPlayerImpl::Pause(void* videoState_)
{
    uStackFrame __("Fuse.Video.Graphics.iOS.Internal.VideoPlayerImpl", "Pause(Uno.IntPtr)");
    ::FuseVideoImpl::pause(videoState_);
}

// public static extern void Play(Uno.IntPtr videoState) [static] :143
void VideoPlayerImpl::Play(void* videoState_)
{
    uStackFrame __("Fuse.Video.Graphics.iOS.Internal.VideoPlayerImpl", "Play(Uno.IntPtr)");
    ::FuseVideoImpl::play(videoState_);
}

// public static extern void SetErrorHandler(Uno.IntPtr videoState, Uno.Action errorHandler) [static] :152
void VideoPlayerImpl::SetErrorHandler(void* videoState_, uDelegate* errorHandler_)
{
    uStackFrame __("Fuse.Video.Graphics.iOS.Internal.VideoPlayerImpl", "SetErrorHandler(Uno.IntPtr,Uno.Action)");
    ::FuseVideoImpl::setErrorHandler(videoState_, errorHandler_);
}

// public static extern void SetPosition(Uno.IntPtr videoState, double position) [static] :128
void VideoPlayerImpl::SetPosition(void* videoState_, double position_)
{
    uStackFrame __("Fuse.Video.Graphics.iOS.Internal.VideoPlayerImpl", "SetPosition(Uno.IntPtr,double)");
    ::FuseVideoImpl::setPosition(videoState_, position_);
}

// public static extern void SetVolume(Uno.IntPtr videoState, float volume) [static] :134
void VideoPlayerImpl::SetVolume(void* videoState_, float volume_)
{
    uStackFrame __("Fuse.Video.Graphics.iOS.Internal.VideoPlayerImpl", "SetVolume(Uno.IntPtr,float)");
    ::FuseVideoImpl::setVolume(videoState_, volume_);
}

// public static extern OpenGL.GLTextureHandle UpdateTexture(Uno.IntPtr videoState) [static] :149
uint32_t VideoPlayerImpl::UpdateTexture(void* videoState_)
{
    uStackFrame __("Fuse.Video.Graphics.iOS.Internal.VideoPlayerImpl", "UpdateTexture(Uno.IntPtr)");
    return ::FuseVideoImpl::updateTexture(videoState_);
}
// }

}}}}}} // ::g::Fuse::Video::Graphics::iOS::Internal
