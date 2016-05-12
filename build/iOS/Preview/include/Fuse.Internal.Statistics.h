// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.27.14/Internal/$.uno#5'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Internal{struct Statistics;}}}

namespace g{
namespace Fuse{
namespace Internal{

// public static class Statistics :614
// {
uClassType* Statistics_typeof();
void Statistics__ContinuousFilterAlpha_fn(double* elapsed, double* period, double* __retval);
void Statistics__ExponentialMovingAverage_fn(double* current, double* sample, double* elapsed, double* period, double* __retval);

struct Statistics : uObject
{
    static double ContinuousFilterAlpha(double elapsed, double period);
    static double ExponentialMovingAverage(double current, double sample, double elapsed, double period);
};
// }

}}} // ::g::Fuse::Internal
