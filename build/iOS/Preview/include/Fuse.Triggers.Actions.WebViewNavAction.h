// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.14/WebView/$.uno#3'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct WebViewNavAction;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// internal abstract class WebViewNavAction :177
// {
struct WebViewNavAction_type : ::g::Fuse::Triggers::Actions::TriggerAction_type
{
    void(*fp_Execute)(::g::Fuse::Triggers::Actions::WebViewNavAction*, uObject*);
};

WebViewNavAction_type* WebViewNavAction_typeof();
void WebViewNavAction__ctor_1_fn(WebViewNavAction* __this);
void WebViewNavAction__Perform_fn(WebViewNavAction* __this, ::g::Fuse::Node* target);

struct WebViewNavAction : ::g::Fuse::Triggers::Actions::TriggerAction
{
    void ctor_1();
    void Execute(uObject* webview) { (((WebViewNavAction_type*)__type)->fp_Execute)(this, webview); }
};
// }

}}}} // ::g::Fuse::Triggers::Actions
