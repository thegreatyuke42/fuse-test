// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.14/$.uno#60'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IChildObject.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Controls{struct WrapPanel;}}}
namespace g{namespace Fuse{namespace Layouts{struct WrapLayout;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class WrapPanel :6707
// {
::g::Fuse::Controls::ParentControl_type* WrapPanel_typeof();
void WrapPanel__ctor_5_fn(WrapPanel* __this);
void WrapPanel__get_FlowDirection_fn(WrapPanel* __this, int* __retval);
void WrapPanel__set_FlowDirection_fn(WrapPanel* __this, int* value);
void WrapPanel__get_ID_fn(WrapPanel* __this, uString** __retval);
void WrapPanel__set_ID_fn(WrapPanel* __this, uString* value);
void WrapPanel__get_ItemHeight_fn(WrapPanel* __this, float* __retval);
void WrapPanel__set_ItemHeight_fn(WrapPanel* __this, float* value);
void WrapPanel__get_ItemWidth_fn(WrapPanel* __this, float* __retval);
void WrapPanel__set_ItemWidth_fn(WrapPanel* __this, float* value);
void WrapPanel__New3_fn(WrapPanel** __retval);
void WrapPanel__get_Orientation_fn(WrapPanel* __this, int* __retval);
void WrapPanel__set_Orientation_fn(WrapPanel* __this, int* value);

struct WrapPanel : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Layouts::WrapLayout*> _wrapLayout;

    void ctor_5();
    int FlowDirection();
    void FlowDirection(int value);
    uString* ID();
    void ID(uString* value);
    float ItemHeight();
    void ItemHeight(float value);
    float ItemWidth();
    void ItemWidth(float value);
    int Orientation();
    void Orientation(int value);
    static WrapPanel* New3();
};
// }

}}} // ::g::Fuse::Controls
