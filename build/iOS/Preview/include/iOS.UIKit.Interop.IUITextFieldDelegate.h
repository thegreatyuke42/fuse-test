// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.27.2/interface/wrapper/$.uno#196'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.UIKit.IUITextFieldDelegate.h>
#include <ObjC.Bindings.Object.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace Foundation{struct _NSRange;}}}
namespace g{namespace iOS{namespace UIKit{namespace Interop{struct IUITextFieldDelegate;}}}}
namespace g{namespace iOS{namespace UIKit{struct UITextField;}}}

namespace g{
namespace iOS{
namespace UIKit{
namespace Interop{

// public sealed extern class IUITextFieldDelegate :7940
// {
struct IUITextFieldDelegate_type : ::g::ObjC::Bindings::Object_type
{
    ::g::iOS::UIKit::IUITextFieldDelegate interface1;
};

IUITextFieldDelegate_type* IUITextFieldDelegate_typeof();
void IUITextFieldDelegate__textFieldDidBeginEditing_fn(IUITextFieldDelegate* __this, ::g::iOS::UIKit::UITextField* textField_);
void IUITextFieldDelegate__textFieldDidEndEditing_fn(IUITextFieldDelegate* __this, ::g::iOS::UIKit::UITextField* textField_);
void IUITextFieldDelegate__textFieldShouldBeginEditing_fn(IUITextFieldDelegate* __this, ::g::iOS::UIKit::UITextField* textField_, bool* __retval);
void IUITextFieldDelegate__textFieldShouldChangeCharactersInRangeReplacementString_fn(IUITextFieldDelegate* __this, ::g::iOS::UIKit::UITextField* textField_, ::g::iOS::Foundation::_NSRange* range_, uString* string__, bool* __retval);
void IUITextFieldDelegate__textFieldShouldClear_fn(IUITextFieldDelegate* __this, ::g::iOS::UIKit::UITextField* textField_, bool* __retval);
void IUITextFieldDelegate__textFieldShouldEndEditing_fn(IUITextFieldDelegate* __this, ::g::iOS::UIKit::UITextField* textField_, bool* __retval);
void IUITextFieldDelegate__textFieldShouldReturn_fn(IUITextFieldDelegate* __this, ::g::iOS::UIKit::UITextField* textField_, bool* __retval);

struct IUITextFieldDelegate : ::g::ObjC::Bindings::Object
{
    void textFieldDidBeginEditing(::g::iOS::UIKit::UITextField* textField_);
    void textFieldDidEndEditing(::g::iOS::UIKit::UITextField* textField_);
    bool textFieldShouldBeginEditing(::g::iOS::UIKit::UITextField* textField_);
    bool textFieldShouldChangeCharactersInRangeReplacementString(::g::iOS::UIKit::UITextField* textField_, ::g::iOS::Foundation::_NSRange range_, uString* string__);
    bool textFieldShouldClear(::g::iOS::UIKit::UITextField* textField_);
    bool textFieldShouldEndEditing(::g::iOS::UIKit::UITextField* textField_);
    bool textFieldShouldReturn(::g::iOS::UIKit::UITextField* textField_);
};
// }

}}}} // ::g::iOS::UIKit::Interop
