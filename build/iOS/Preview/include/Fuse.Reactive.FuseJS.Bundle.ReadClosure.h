// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/FuseJS/$.uno#15'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Bundle__ReadClosure;}}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// private sealed class Bundle.ReadClosure :1122
// {
uType* Bundle__ReadClosure_typeof();
void Bundle__ReadClosure__ctor__fn(Bundle__ReadClosure* __this, uString* filename);
void Bundle__ReadClosure__Invoke_fn(Bundle__ReadClosure* __this, uString** __retval);
void Bundle__ReadClosure__New1_fn(uString* filename, Bundle__ReadClosure** __retval);

struct Bundle__ReadClosure : uObject
{
    uStrong<uString*> _filename;

    void ctor_(uString* filename);
    uString* Invoke();
    static Bundle__ReadClosure* New1(uString* filename);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
