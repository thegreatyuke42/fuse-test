// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.14/WebView/$.uno#3'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.WebViewNavAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct StopLoading;}}}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class StopLoading :198
// {
::g::Fuse::Triggers::Actions::WebViewNavAction_type* StopLoading_typeof();
void StopLoading__ctor_2_fn(StopLoading* __this);
void StopLoading__Execute_fn(StopLoading* __this, uObject* webview);
void StopLoading__New1_fn(StopLoading** __retval);

struct StopLoading : ::g::Fuse::Triggers::Actions::WebViewNavAction
{
    void ctor_2();
    static StopLoading* New1();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
