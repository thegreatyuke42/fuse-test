// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.27.14/$.uno#11'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Navigation.WhileHistoryTrigger.h>
namespace g{namespace Fuse{namespace Navigation{struct WhileCanGoForward;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class WhileCanGoForward :2240
// {
::g::Fuse::Navigation::WhileHistoryTrigger_type* WhileCanGoForward_typeof();
void WhileCanGoForward__ctor_4_fn(WhileCanGoForward* __this);
void WhileCanGoForward__get_IsOn_fn(WhileCanGoForward* __this, bool* __retval);
void WhileCanGoForward__New1_fn(WhileCanGoForward** __retval);

struct WhileCanGoForward : ::g::Fuse::Navigation::WhileHistoryTrigger
{
    void ctor_4();
    static WhileCanGoForward* New1();
};
// }

}}} // ::g::Fuse::Navigation
