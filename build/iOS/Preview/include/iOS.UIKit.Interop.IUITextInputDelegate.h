// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.27.2/interface/wrapper/$.uno#198'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.UIKit.IUITextInputDelegate.h>
#include <ObjC.Bindings.Object.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace UIKit{namespace Interop{struct IUITextInputDelegate;}}}}

namespace g{
namespace iOS{
namespace UIKit{
namespace Interop{

// public sealed extern class IUITextInputDelegate :8283
// {
struct IUITextInputDelegate_type : ::g::ObjC::Bindings::Object_type
{
    ::g::iOS::UIKit::IUITextInputDelegate interface1;
};

IUITextInputDelegate_type* IUITextInputDelegate_typeof();
void IUITextInputDelegate__selectionDidChange_fn(IUITextInputDelegate* __this, uObject* textInput_);
void IUITextInputDelegate__selectionWillChange_fn(IUITextInputDelegate* __this, uObject* textInput_);
void IUITextInputDelegate__textDidChange_fn(IUITextInputDelegate* __this, uObject* textInput_);
void IUITextInputDelegate__textWillChange_fn(IUITextInputDelegate* __this, uObject* textInput_);

struct IUITextInputDelegate : ::g::ObjC::Bindings::Object
{
    void selectionDidChange(uObject* textInput_);
    void selectionWillChange(uObject* textInput_);
    void textDidChange(uObject* textInput_);
    void textWillChange(uObject* textInput_);
};
// }

}}}} // ::g::iOS::UIKit::Interop
