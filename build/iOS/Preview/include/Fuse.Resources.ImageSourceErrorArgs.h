// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.27.14/Resources/$.uno#2'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Resources{struct ImageSourceErrorArgs;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Resources{

// public sealed class ImageSourceErrorArgs :387
// {
struct ImageSourceErrorArgs_type : uType
{
    ::g::Fuse::Scripting::IScriptEvent interface0;
};

ImageSourceErrorArgs_type* ImageSourceErrorArgs_typeof();
void ImageSourceErrorArgs__ctor_1_fn(ImageSourceErrorArgs* __this);
void ImageSourceErrorArgs__FuseScriptingIScriptEventSerialize_fn(ImageSourceErrorArgs* __this, uObject* s);
void ImageSourceErrorArgs__New2_fn(ImageSourceErrorArgs** __retval);

struct ImageSourceErrorArgs : ::g::Uno::EventArgs
{
    uStrong< ::g::Uno::Exception*> ExceptionCause;
    uStrong<uString*> Reason;

    void ctor_1();
    static ImageSourceErrorArgs* New2();
};
// }

}}} // ::g::Fuse::Resources
