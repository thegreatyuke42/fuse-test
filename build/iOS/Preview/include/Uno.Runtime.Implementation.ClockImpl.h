// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.27.20/Source/Uno/Runtime/Implementation/$.uno#3'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{struct ClockImpl;}}}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{

// internal static class ClockImpl :484
// {
uClassType* ClockImpl_typeof();
void ClockImpl__GetSeconds_fn(double* __retval);
void ClockImpl__GetTicks_fn(int64_t* __retval);
void ClockImpl__GetTimezoneOffset_fn(int* year, int* month, int* day, int* __retval);

struct ClockImpl : uObject
{
    static double GetSeconds();
    static int64_t GetTicks();
    static int GetTimezoneOffset(int year, int month, int day);
};
// }

}}}} // ::g::Uno::Runtime::Implementation
