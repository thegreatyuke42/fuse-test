// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.27.20/Source/Uno/IO/$.uno#6'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace IO{struct File;}}}
namespace g{namespace Uno{namespace IO{struct Stream;}}}

namespace g{
namespace Uno{
namespace IO{

// public static class File :1229
// {
uClassType* File_typeof();
void File__Delete_fn(uString* filename);
void File__Exists_fn(uString* filename, bool* __retval);
void File__Open_fn(uString* filename, int* filemode, ::g::Uno::IO::Stream** __retval);
void File__OpenRead_fn(uString* filename, ::g::Uno::IO::Stream** __retval);
void File__ReadAllBytes_fn(uString* filename, uArray** __retval);
void File__ReadAllText_fn(uString* filename, uString** __retval);
void File__WriteAllBytes_fn(uString* filename, uArray* bytes);
void File__WriteAllText_fn(uString* filename, uString* text);

struct File : uObject
{
    static void Delete(uString* filename);
    static bool Exists(uString* filename);
    static ::g::Uno::IO::Stream* Open(uString* filename, int filemode);
    static ::g::Uno::IO::Stream* OpenRead(uString* filename);
    static uArray* ReadAllBytes(uString* filename);
    static uString* ReadAllText(uString* filename);
    static void WriteAllBytes(uString* filename, uArray* bytes);
    static void WriteAllText(uString* filename, uString* text);
};
// }

}}} // ::g::Uno::IO
