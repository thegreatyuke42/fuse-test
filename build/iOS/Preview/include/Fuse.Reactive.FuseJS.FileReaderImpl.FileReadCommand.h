// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/FuseJS/$.uno#16'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct FileReaderImpl__FileReadCommand;}}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// private sealed class FileReaderImpl.FileReadCommand :1150
// {
uType* FileReaderImpl__FileReadCommand_typeof();
void FileReaderImpl__FileReadCommand__ctor__fn(FileReaderImpl__FileReadCommand* __this, uString* path);
void FileReaderImpl__FileReadCommand__New1_fn(uString* path, FileReaderImpl__FileReadCommand** __retval);
void FileReaderImpl__FileReadCommand__ReadAsDataURL_fn(FileReaderImpl__FileReadCommand* __this, uString** __retval);
void FileReaderImpl__FileReadCommand__ReadAsText_fn(FileReaderImpl__FileReadCommand* __this, uString** __retval);

struct FileReaderImpl__FileReadCommand : uObject
{
    uStrong<uString*> _path;

    void ctor_(uString* path);
    uString* ReadAsDataURL();
    uString* ReadAsText();
    static FileReaderImpl__FileReadCommand* New1(uString* path);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
