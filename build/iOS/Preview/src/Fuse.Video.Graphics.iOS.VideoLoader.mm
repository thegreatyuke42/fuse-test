// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Video/0.27.14/iOS/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Video.Graphics.iOS.VideoLoader.h>
#include <Fuse.Video.Graphics.iOS.VideoLoader.VideoPromise.h>
#include <Fuse.Video.IVideoPlayer.h>
#include <Fuse.Video.VideoDiskCache.h>
#include <Uno.Bool.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[2];
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace Video{
namespace Graphics{
namespace iOS{

// internal sealed extern class VideoLoader :17
// {
uType* VideoLoader_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(VideoLoader);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Video.Graphics.iOS.VideoLoader", options);
    type->fp_ctor_ = (void*)VideoLoader__New1_fn;
    ::STRINGS[0] = uString::Const("data/");
    ::STRINGS[1] = uString::Const("file://");
    ::TYPES[0] = ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::Video::IVideoPlayer_typeof());
    ::TYPES[1] = ::g::Uno::IO::BundleFile_typeof();
    ::TYPES[2] = ::g::Uno::UX::BundleFileSource_typeof();
    return type;
}

// public generated VideoLoader() :17
void VideoLoader__ctor__fn(VideoLoader* __this)
{
    __this->ctor_();
}

// private static string GetBundleAbsolutePath(string bundlePath) :94
void VideoLoader__GetBundleAbsolutePath_fn(uString* bundlePath, uString** __retval)
{
    *__retval = VideoLoader::GetBundleAbsolutePath(bundlePath);
}

// public static Uno.Threading.Future<Fuse.Video.IVideoPlayer> Load(string url) :75
void VideoLoader__Load_fn(uString* url, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = VideoLoader::Load(url);
}

// private static Uno.Threading.Future<Fuse.Video.IVideoPlayer> Load(Uno.IO.BundleFile file) :88
void VideoLoader__Load1_fn(::g::Uno::IO::BundleFile* file, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = VideoLoader::Load1(file);
}

// public static Uno.Threading.Future<Fuse.Video.IVideoPlayer> Load(Uno.UX.FileSource fileSource) :80
void VideoLoader__Load2_fn(::g::Uno::UX::FileSource* fileSource, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = VideoLoader::Load2(fileSource);
}

// public generated VideoLoader New() :17
void VideoLoader__New1_fn(VideoLoader** __retval)
{
    *__retval = VideoLoader::New1();
}

// public generated VideoLoader() [instance] :17
void VideoLoader::ctor_()
{
}

// private static string GetBundleAbsolutePath(string bundlePath) [static] :94
uString* VideoLoader::GetBundleAbsolutePath(uString* bundlePath)
{
    uStackFrame __("Fuse.Video.Graphics.iOS.VideoLoader", "GetBundleAbsolutePath(string)");
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (::NSString* bundlePath) -> ::NSString*
        {
            return [[[NSBundle mainBundle] URLForResource:bundlePath withExtension:@""] absoluteString];
        } (::uObjC::NativeString(bundlePath)));
        
    }
    
}

// public static Uno.Threading.Future<Fuse.Video.IVideoPlayer> Load(string url) [static] :75
::g::Uno::Threading::Future1* VideoLoader::Load(uString* url)
{
    uStackFrame __("Fuse.Video.Graphics.iOS.VideoLoader", "Load(string)");
    return VideoLoader__VideoPromise::New5(url);
}

// private static Uno.Threading.Future<Fuse.Video.IVideoPlayer> Load(Uno.IO.BundleFile file) [static] :88
::g::Uno::Threading::Future1* VideoLoader::Load1(::g::Uno::IO::BundleFile* file)
{
    uStackFrame __("Fuse.Video.Graphics.iOS.VideoLoader", "Load(Uno.IO.BundleFile)");
    return VideoLoader::Load(VideoLoader::GetBundleAbsolutePath(::g::Uno::String::op_Addition2(::STRINGS[0/*"data/"*/], uPtr(file)->BundlePath())));
}

// public static Uno.Threading.Future<Fuse.Video.IVideoPlayer> Load(Uno.UX.FileSource fileSource) [static] :80
::g::Uno::Threading::Future1* VideoLoader::Load2(::g::Uno::UX::FileSource* fileSource)
{
    uStackFrame __("Fuse.Video.Graphics.iOS.VideoLoader", "Load(Uno.UX.FileSource)");

    if (uIs(fileSource, ::TYPES[2/*Uno.UX.BundleFileSource*/]))
        return VideoLoader::Load1(uPtr(uCast< ::g::Uno::UX::BundleFileSource*>(fileSource, ::TYPES[2/*Uno.UX.BundleFileSource*/]))->BundleFile);
    else
        return VideoLoader::Load(::g::Uno::String::op_Addition2(::STRINGS[1/*"file://"*/], ::g::Fuse::Video::VideoDiskCache::GetFilePath(fileSource)));
}

// public generated VideoLoader New() [static] :17
VideoLoader* VideoLoader::New1()
{
    VideoLoader* obj1 = (VideoLoader*)uNew(VideoLoader_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}}}} // ::g::Fuse::Video::Graphics::iOS
