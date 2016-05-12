// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.27.14/$.uno#11'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Navigation.WhileHistoryTrigger.h>
namespace g{namespace Fuse{namespace Navigation{struct WhileCanGoBack;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class WhileCanGoBack :2235
// {
::g::Fuse::Navigation::WhileHistoryTrigger_type* WhileCanGoBack_typeof();
void WhileCanGoBack__ctor_4_fn(WhileCanGoBack* __this);
void WhileCanGoBack__get_IsOn_fn(WhileCanGoBack* __this, bool* __retval);
void WhileCanGoBack__New1_fn(WhileCanGoBack** __retval);

struct WhileCanGoBack : ::g::Fuse::Navigation::WhileHistoryTrigger
{
    void ctor_4();
    static WhileCanGoBack* New1();
};
// }

}}} // ::g::Fuse::Navigation
