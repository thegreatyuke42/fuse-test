// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.27.20/Source/Uno/IO/$.uno#2'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace IO{struct Bundle;}}}
namespace g{namespace Uno{namespace IO{struct BundleFile;}}}

namespace g{
namespace Uno{
namespace IO{

// public sealed class Bundle :778
// {
uType* Bundle_typeof();
void Bundle__ctor__fn(Bundle* __this, uString* packageName);
void Bundle__get_AllFiles_fn(uObject** __retval);
void Bundle__get_Bundles_fn(uObject** __retval);
void Bundle__add_Created_fn(Bundle* __this, uDelegate* value);
void Bundle__remove_Created_fn(Bundle* __this, uDelegate* value);
void Bundle__CreateFile_fn(Bundle* __this, uString* path, uArray* bytes, ::g::Uno::IO::BundleFile** __retval);
void Bundle__get_Files_fn(Bundle* __this, uObject** __retval);
void Bundle__Get_fn(uString* package, Bundle** __retval);
void Bundle__GetFile_fn(Bundle* __this, uString* filename, ::g::Uno::IO::BundleFile** __retval);
void Bundle__New1_fn(uString* packageName, Bundle** __retval);
void Bundle__ToString_fn(Bundle* __this, uString** __retval);

struct Bundle : uObject
{
    static uSStrong< ::g::Uno::Collections::List*> _allFiles_;
    static uSStrong< ::g::Uno::Collections::List*>& _allFiles() { return Bundle_typeof()->Init(), _allFiles_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _bundles_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _bundles() { return Bundle_typeof()->Init(), _bundles_; }
    uStrong< ::g::Uno::Collections::List*> _files;
    uStrong<uString*> _packageName;
    uStrong<uDelegate*> Created1;

    void ctor_(uString* packageName);
    void add_Created(uDelegate* value);
    void remove_Created(uDelegate* value);
    ::g::Uno::IO::BundleFile* CreateFile(uString* path, uArray* bytes);
    uObject* Files();
    ::g::Uno::IO::BundleFile* GetFile(uString* filename);
    static Bundle* Get(uString* package);
    static Bundle* New1(uString* packageName);
    static uObject* AllFiles();
    static uObject* Bundles();
};
// }

}}} // ::g::Uno::IO
