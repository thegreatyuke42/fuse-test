// This file was generated based on '/usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.14/.uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Switch.h>
#include <Uno.UX.ITemplate.h>
#include <Uno.UX.Template-1.h>
namespace g{namespace Fuse{namespace BasicTheme{struct BasicStyle;}}}
namespace g{namespace Fuse{namespace BasicTheme{struct BasicStyle__Template2;}}}
namespace g{struct FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property;}
namespace g{struct FuseBasicTheme_FuseDrawingSolidColor_Color_Property;}
namespace g{struct FuseBasicTheme_FuseDrawingStroke_Width_Property;}
namespace g{struct FuseBasicTheme_FuseEffectsDropShadow_Color_Property;}

namespace g{
namespace Fuse{
namespace BasicTheme{

// public partial sealed class BasicStyle.Template2 :103
// {
::g::Uno::UX::Template_type* BasicStyle__Template2_typeof();
void BasicStyle__Template2__ctor_1_fn(BasicStyle__Template2* __this, ::g::Fuse::BasicTheme::BasicStyle* parent);
void BasicStyle__Template2__New1_fn(::g::Fuse::BasicTheme::BasicStyle* parent, BasicStyle__Template2** __retval);
void BasicStyle__Template2__OnApply_fn(BasicStyle__Template2* __this, ::g::Fuse::Controls::Switch* self);

struct BasicStyle__Template2 : ::g::Uno::UX::Template
{
    uStrong< ::g::Fuse::BasicTheme::BasicStyle*> __parent1;
    uStrong< ::g::FuseBasicTheme_FuseDrawingStroke_Width_Property*> _switchStroke_Width_inst;
    uStrong< ::g::FuseBasicTheme_FuseDrawingSolidColor_Color_Property*> _switchStrokeColor_Color_inst;
    uStrong< ::g::FuseBasicTheme_FuseDrawingSolidColor_Color_Property*> _switchThumbColor_Color_inst;
    uStrong< ::g::FuseBasicTheme_FuseDrawingStroke_Width_Property*> _switchThumbStroke_Width_inst;
    uStrong< ::g::FuseBasicTheme_FuseEffectsDropShadow_Color_Property*> switchShadow_Color_inst;
    uStrong< ::g::FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property*> temp_Value_inst;
    uStrong< ::g::FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property*> temp1_Value_inst;

    void ctor_1(::g::Fuse::BasicTheme::BasicStyle* parent);
    static BasicStyle__Template2* New1(::g::Fuse::BasicTheme::BasicStyle* parent);
};
// }

}}} // ::g::Fuse::BasicTheme
