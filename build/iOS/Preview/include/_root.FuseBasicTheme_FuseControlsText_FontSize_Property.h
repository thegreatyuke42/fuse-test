// This file was generated based on '/usr/local/share/uno/Packages/Fuse.BasicTheme/0.27.14/.uno/$.uno#2'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Text;}}}
namespace g{struct FuseBasicTheme_FuseControlsText_FontSize_Property;}

namespace g{

// internal sealed class FuseBasicTheme_FuseControlsText_FontSize_Property :768
// {
::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsText_FontSize_Property_typeof();
void FuseBasicTheme_FuseControlsText_FontSize_Property__ctor_1_fn(FuseBasicTheme_FuseControlsText_FontSize_Property* __this, ::g::Fuse::Controls::Text* obj);
void FuseBasicTheme_FuseControlsText_FontSize_Property__New1_fn(::g::Fuse::Controls::Text* obj, FuseBasicTheme_FuseControlsText_FontSize_Property** __retval);
void FuseBasicTheme_FuseControlsText_FontSize_Property__OnGet_fn(FuseBasicTheme_FuseControlsText_FontSize_Property* __this, float* __retval);
void FuseBasicTheme_FuseControlsText_FontSize_Property__OnSet_fn(FuseBasicTheme_FuseControlsText_FontSize_Property* __this, float* v, uObject* origin);

struct FuseBasicTheme_FuseControlsText_FontSize_Property : ::g::Uno::UX::Property
{
    uStrong< ::g::Fuse::Controls::Text*> _obj;

    void ctor_1(::g::Fuse::Controls::Text* obj);
    static FuseBasicTheme_FuseControlsText_FontSize_Property* New1(::g::Fuse::Controls::Text* obj);
};
// }

} // ::g
