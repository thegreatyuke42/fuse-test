// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.27.20/Source/Uno/Exceptions/$.uno#13'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{struct OverflowException;}}

namespace g{
namespace Uno{

// public sealed class OverflowException :316
// {
::g::Uno::Exception_type* OverflowException_typeof();
void OverflowException__ctor_3_fn(OverflowException* __this, uString* message);
void OverflowException__New4_fn(uString* message, OverflowException** __retval);

struct OverflowException : ::g::Uno::Exception
{
    void ctor_3(uString* message);
    static OverflowException* New4(uString* message);
};
// }

}} // ::g::Uno
