// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Video/0.27.14/iOS/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Video.IVideoPlayer.h>
#include <Uno.IDisposable.h>
#include <Uno.Threading.Promise-1.h>
namespace g{namespace Fuse{namespace Video{namespace Graphics{namespace iOS{struct VideoLoader__VideoPromise;}}}}}

namespace g{
namespace Fuse{
namespace Video{
namespace Graphics{
namespace iOS{

// private sealed class VideoLoader.VideoPromise :20
// {
::g::Uno::Threading::Future_type* VideoLoader__VideoPromise_typeof();
void VideoLoader__VideoPromise__ctor_7_fn(VideoLoader__VideoPromise* __this, uString* url);
void VideoLoader__VideoPromise__Cancel_fn(VideoLoader__VideoPromise* __this, bool* shutdownGracefully);
void VideoLoader__VideoPromise__Dispose_fn(VideoLoader__VideoPromise* __this);
void VideoLoader__VideoPromise__DoDispose_fn(VideoLoader__VideoPromise* __this);
void VideoLoader__VideoPromise__New5_fn(uString* url, VideoLoader__VideoPromise** __retval);
void VideoLoader__VideoPromise__OnLoaded_fn(VideoLoader__VideoPromise* __this);
void VideoLoader__VideoPromise__OnLoadError_fn(VideoLoader__VideoPromise* __this);
void VideoLoader__VideoPromise__ScheduleDispose_fn(VideoLoader__VideoPromise* __this);

struct VideoLoader__VideoPromise : ::g::Uno::Threading::Promise
{
    bool _isCancelled;
    uStrong<uObject*> _player;
    bool _readyToDispose;

    void ctor_7(uString* url);
    void DoDispose();
    void OnLoaded();
    void OnLoadError();
    void ScheduleDispose();
    static VideoLoader__VideoPromise* New5(uString* url);
};
// }

}}}}} // ::g::Fuse::Video::Graphics::iOS