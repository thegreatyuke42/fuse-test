// This file was generated based on '/usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.14/.uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Button.h>
#include <Uno.UX.ITemplate.h>
#include <Uno.UX.Template-1.h>
namespace g{namespace Fuse{namespace BasicTheme{struct BasicStyle;}}}
namespace g{namespace Fuse{namespace BasicTheme{struct BasicStyle__Template4;}}}
namespace g{struct FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property;}
namespace g{struct FuseBasicTheme_FuseBasicThemeButtonText_Value_Property;}
namespace g{struct FuseBasicTheme_FuseControlsButton_Opacity_Property;}
namespace g{struct FuseBasicTheme_FuseControlsButton_Text_Property;}
namespace g{struct FuseBasicTheme_FuseDrawingSolidColor_Color_Property;}
namespace g{struct FuseBasicTheme_FuseEffectsDropShadow_Color_Property;}

namespace g{
namespace Fuse{
namespace BasicTheme{

// public partial sealed class BasicStyle.Template4 :359
// {
::g::Uno::UX::Template_type* BasicStyle__Template4_typeof();
void BasicStyle__Template4__ctor_1_fn(BasicStyle__Template4* __this, ::g::Fuse::BasicTheme::BasicStyle* parent);
void BasicStyle__Template4__New1_fn(::g::Fuse::BasicTheme::BasicStyle* parent, BasicStyle__Template4** __retval);
void BasicStyle__Template4__OnApply_fn(BasicStyle__Template4* __this, ::g::Fuse::Controls::Button* self);

struct BasicStyle__Template4 : ::g::Uno::UX::Template
{
    uStrong< ::g::Fuse::BasicTheme::BasicStyle*> __parent1;
    uStrong< ::g::FuseBasicTheme_FuseDrawingSolidColor_Color_Property*> _buttonBackground_Color_inst;
    uStrong< ::g::FuseBasicTheme_FuseControlsButton_Opacity_Property*> self_Opacity_inst;
    uStrong< ::g::FuseBasicTheme_FuseControlsButton_Text_Property*> self_Text_inst;
    uStrong< ::g::FuseBasicTheme_FuseBasicThemeButtonText_Value_Property*> temp_Value_inst;
    uStrong< ::g::FuseBasicTheme_FuseEffectsDropShadow_Color_Property*> temp1_Color_inst;
    uStrong< ::g::FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property*> temp2_Value_inst;
    uStrong< ::g::FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property*> temp3_Value_inst;

    void ctor_1(::g::Fuse::BasicTheme::BasicStyle* parent);
    static BasicStyle__Template4* New1(::g::Fuse::BasicTheme::BasicStyle* parent);
};
// }

}}} // ::g::Fuse::BasicTheme
