// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.27.20/Source/Uno/Time/Utilities/$.uno#1'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Time{struct Converter;}}}

namespace g{
namespace Uno{
namespace Time{

// internal static class Converter :53
// {
uClassType* Converter_typeof();
void Converter__TicksToDays_fn(int64_t* ticks, int* __retval);

struct Converter : uObject
{
    static int TicksToDays(int64_t ticks);
};
// }

}}} // ::g::Uno::Time
