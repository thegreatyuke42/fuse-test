// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.14/$.uno#55'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.ParentControl.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IChildObject.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Uno.Bool.h>
namespace g{namespace Fuse{namespace Controls{struct ToggleControl;}}}
namespace g{namespace Fuse{struct StyleProperty1;}}

namespace g{
namespace Fuse{
namespace Controls{

// public class ToggleControl :5931
// {
struct ToggleControl_type : ::g::Fuse::Controls::ParentControl_type
{
    ::g::Fuse::Triggers::IValue interface9;
};

ToggleControl_type* ToggleControl_typeof();
void ToggleControl__ctor_4_fn(ToggleControl* __this);
void ToggleControl__GetValue_fn(ToggleControl* s, bool* __retval);
void ToggleControl__New2_fn(ToggleControl** __retval);
void ToggleControl__OnValueChanged_fn(ToggleControl* __this, bool* value, uObject* origin);
void ToggleControl__SetValue_fn(ToggleControl* __this, bool* value, uObject* origin);
void ToggleControl__SetValue1_fn(ToggleControl* s, bool* value);
void ToggleControl__get_Value_fn(ToggleControl* __this, bool* __retval);
void ToggleControl__set_Value_fn(ToggleControl* __this, bool* value);
void ToggleControl__add_ValueChanged_fn(ToggleControl* __this, uDelegate* value);
void ToggleControl__remove_ValueChanged_fn(ToggleControl* __this, uDelegate* value);

struct ToggleControl : ::g::Fuse::Controls::ParentControl
{
    bool _value;
    static uSStrong< ::g::Fuse::StyleProperty1*> ValueProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& ValueProperty() { return ToggleControl_typeof()->Init(), ValueProperty_; }
    uStrong<uDelegate*> ValueChanged1;

    void ctor_4();
    void OnValueChanged(bool value, uObject* origin);
    void SetValue(bool value, uObject* origin);
    bool Value();
    void Value(bool value);
    void add_ValueChanged(uDelegate* value);
    void remove_ValueChanged(uDelegate* value);
    static bool GetValue(ToggleControl* s);
    static ToggleControl* New2();
    static void SetValue1(ToggleControl* s, bool value);
};
// }

}}} // ::g::Fuse::Controls
