// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.27.20/Source/Uno/UX/Attributes/$.uno#10'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Attribute.h>
namespace g{namespace Uno{namespace UX{struct UXGlobalResourceAttribute;}}}

namespace g{
namespace Uno{
namespace UX{

// public sealed class UXGlobalResourceAttribute :172
// {
uType* UXGlobalResourceAttribute_typeof();
void UXGlobalResourceAttribute__ctor_1_fn(UXGlobalResourceAttribute* __this);
void UXGlobalResourceAttribute__ctor_2_fn(UXGlobalResourceAttribute* __this, uString* alias);
void UXGlobalResourceAttribute__New1_fn(UXGlobalResourceAttribute** __retval);
void UXGlobalResourceAttribute__New2_fn(uString* alias, UXGlobalResourceAttribute** __retval);

struct UXGlobalResourceAttribute : ::g::Uno::Attribute
{
    uStrong<uString*> Alias;

    void ctor_1();
    void ctor_2(uString* alias);
    static UXGlobalResourceAttribute* New1();
    static UXGlobalResourceAttribute* New2(uString* alias);
};
// }

}}} // ::g::Uno::UX
