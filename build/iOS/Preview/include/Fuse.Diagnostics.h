// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#4'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct Diagnostics;}}

namespace g{
namespace Fuse{

// public static class Diagnostics :558
// {
uClassType* Diagnostics_typeof();
void Diagnostics__Deprecated_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName);
void Diagnostics__Error_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName);
void Diagnostics__PerformanceWarning_fn(uString* msg, uString* filePath, int* lineNumber, uString* memberName);
void Diagnostics__Unsupported_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName);

struct Diagnostics : uObject
{
    static void Deprecated(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName);
    static void Error(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName);
    static void PerformanceWarning(uString* msg, uString* filePath, int lineNumber, uString* memberName);
    static void Unsupported(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName);
};
// }

}} // ::g::Fuse
