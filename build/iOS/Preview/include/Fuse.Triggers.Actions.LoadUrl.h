// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.14/WebView/$.uno#3'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.WebViewNavAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct LoadUrl;}}}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class LoadUrl :206
// {
::g::Fuse::Triggers::Actions::WebViewNavAction_type* LoadUrl_typeof();
void LoadUrl__ctor_2_fn(LoadUrl* __this);
void LoadUrl__Execute_fn(LoadUrl* __this, uObject* webview);
void LoadUrl__New1_fn(LoadUrl** __retval);
void LoadUrl__get_Url_fn(LoadUrl* __this, uString** __retval);
void LoadUrl__set_Url_fn(LoadUrl* __this, uString* value);

struct LoadUrl : ::g::Fuse::Triggers::Actions::WebViewNavAction
{
    uStrong<uString*> _Url;

    void ctor_2();
    uString* Url();
    void Url(uString* value);
    static LoadUrl* New1();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
