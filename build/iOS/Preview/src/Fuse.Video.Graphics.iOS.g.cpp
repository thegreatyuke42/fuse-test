// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Video.Graphics.iOS.Internal.VideoPlayer.h>
#include <Fuse.Video.Graphics.iOS.VideoLoader.VideoPromise.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace Video{
namespace Graphics{
namespace iOS{

// /usr/local/share/uno/Packages/Fuse.Video/0.27.14/iOS/$.uno
// ----------------------------------------------------------

// private sealed class VideoLoader.VideoPromise :20
// {
::g::Uno::Threading::Future_type* VideoLoader__VideoPromise_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(VideoLoader__VideoPromise);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Fuse.Video.Graphics.iOS.VideoLoader.VideoPromise", options);
    type->SetBase(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::Video::IVideoPlayer_typeof()));
    type->fp_Cancel = (void(*)(::g::Uno::Threading::Future*, bool*))VideoLoader__VideoPromise__Cancel_fn;
    type->fp_Dispose = (void(*)(::g::Uno::Threading::Future*))VideoLoader__VideoPromise__Dispose_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))VideoLoader__VideoPromise__Dispose_fn;
    ::STRINGS[0] = uString::Const("Failed to load");
    ::TYPES[0] = ::g::Fuse::Video::IVideoPlayer_typeof();
    ::TYPES[1] = ::g::Uno::Action_typeof();
    ::TYPES[2] = ::g::Uno::Bool_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Video::Graphics::iOS::VideoLoader__VideoPromise, _isCancelled), 0,
        ::g::Fuse::Video::IVideoPlayer_typeof(), offsetof(::g::Fuse::Video::Graphics::iOS::VideoLoader__VideoPromise, _player), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Video::Graphics::iOS::VideoLoader__VideoPromise, _readyToDispose), 0);
    return type;
}

// public VideoPromise(string url) :24
void VideoLoader__VideoPromise__ctor_7_fn(VideoLoader__VideoPromise* __this, uString* url)
{
    __this->ctor_7(url);
}

// public override sealed void Cancel([bool shutdownGracefully]) :45
void VideoLoader__VideoPromise__Cancel_fn(VideoLoader__VideoPromise* __this, bool* shutdownGracefully)
{
    uStackFrame __("Fuse.Video.Graphics.iOS.VideoLoader.VideoPromise", "Cancel([bool])");
    __this->ScheduleDispose();
}

// public override sealed void Dispose() :68
void VideoLoader__VideoPromise__Dispose_fn(VideoLoader__VideoPromise* __this)
{
    uStackFrame __("Fuse.Video.Graphics.iOS.VideoLoader.VideoPromise", "Dispose()");
    ::g::Uno::Threading::Future1__Dispose_fn(__this);
    __this->ScheduleDispose();
}

// private void DoDispose() :59
void VideoLoader__VideoPromise__DoDispose_fn(VideoLoader__VideoPromise* __this)
{
    __this->DoDispose();
}

// public VideoPromise New(string url) :24
void VideoLoader__VideoPromise__New5_fn(uString* url, VideoLoader__VideoPromise** __retval)
{
    *__retval = VideoLoader__VideoPromise::New5(url);
}

// private void OnLoaded() :29
void VideoLoader__VideoPromise__OnLoaded_fn(VideoLoader__VideoPromise* __this)
{
    __this->OnLoaded();
}

// private void OnLoadError() :36
void VideoLoader__VideoPromise__OnLoadError_fn(VideoLoader__VideoPromise* __this)
{
    __this->OnLoadError();
}

// private void ScheduleDispose() :50
void VideoLoader__VideoPromise__ScheduleDispose_fn(VideoLoader__VideoPromise* __this)
{
    __this->ScheduleDispose();
}

// public VideoPromise(string url) [instance] :24
void VideoLoader__VideoPromise::ctor_7(uString* url)
{
    uStackFrame __("Fuse.Video.Graphics.iOS.VideoLoader.VideoPromise", ".ctor(string)");
    ctor_3();
    _player = (uObject*)::g::Fuse::Video::Graphics::iOS::Internal::VideoPlayer::New1(url, uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)VideoLoader__VideoPromise__OnLoaded_fn, this), uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)VideoLoader__VideoPromise__OnLoadError_fn, this));
}

// private void DoDispose() [instance] :59
void VideoLoader__VideoPromise::DoDispose()
{
    uStackFrame __("Fuse.Video.Graphics.iOS.VideoLoader.VideoPromise", "DoDispose()");

    if (_readyToDispose)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_player), ::g::Uno::IDisposable_typeof()));
        ::g::Fuse::UpdateManager::RemoveAction(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)VideoLoader__VideoPromise__DoDispose_fn, this), 0);
    }
}

// private void OnLoaded() [instance] :29
void VideoLoader__VideoPromise::OnLoaded()
{
    uStackFrame __("Fuse.Video.Graphics.iOS.VideoLoader.VideoPromise", "OnLoaded()");
    _readyToDispose = true;

    if (!_isCancelled)
        ::g::Uno::Threading::Promise__Resolve_fn(this, _player);
}

// private void OnLoadError() [instance] :36
void VideoLoader__VideoPromise::OnLoadError()
{
    uStackFrame __("Fuse.Video.Graphics.iOS.VideoLoader.VideoPromise", "OnLoadError()");
    _readyToDispose = true;

    if (!_isCancelled)
        Reject(::g::Uno::Exception::New2(::STRINGS[0/*"Failed to l...*/]));
}

// private void ScheduleDispose() [instance] :50
void VideoLoader__VideoPromise::ScheduleDispose()
{
    uStackFrame __("Fuse.Video.Graphics.iOS.VideoLoader.VideoPromise", "ScheduleDispose()");

    if (!_isCancelled)
    {
        _isCancelled = true;
        ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)VideoLoader__VideoPromise__DoDispose_fn, this), 0);
    }
}

// public VideoPromise New(string url) [static] :24
VideoLoader__VideoPromise* VideoLoader__VideoPromise::New5(uString* url)
{
    VideoLoader__VideoPromise* obj1 = (VideoLoader__VideoPromise*)uNew(VideoLoader__VideoPromise_typeof());
    obj1->ctor_7(url);
    return obj1;
}
// }

}}}}} // ::g::Fuse::Video::Graphics::iOS
