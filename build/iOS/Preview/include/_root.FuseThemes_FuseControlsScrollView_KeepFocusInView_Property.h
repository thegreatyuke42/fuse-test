// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Themes/0.27.14/.uno/$.uno#1'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollView;}}}
namespace g{struct FuseThemes_FuseControlsScrollView_KeepFocusInView_Property;}

namespace g{

// internal sealed class FuseThemes_FuseControlsScrollView_KeepFocusInView_Property :118
// {
::g::Uno::UX::Property_type* FuseThemes_FuseControlsScrollView_KeepFocusInView_Property_typeof();
void FuseThemes_FuseControlsScrollView_KeepFocusInView_Property__ctor_1_fn(FuseThemes_FuseControlsScrollView_KeepFocusInView_Property* __this, ::g::Fuse::Controls::ScrollView* obj);
void FuseThemes_FuseControlsScrollView_KeepFocusInView_Property__New1_fn(::g::Fuse::Controls::ScrollView* obj, FuseThemes_FuseControlsScrollView_KeepFocusInView_Property** __retval);
void FuseThemes_FuseControlsScrollView_KeepFocusInView_Property__OnGet_fn(FuseThemes_FuseControlsScrollView_KeepFocusInView_Property* __this, bool* __retval);
void FuseThemes_FuseControlsScrollView_KeepFocusInView_Property__OnSet_fn(FuseThemes_FuseControlsScrollView_KeepFocusInView_Property* __this, bool* v, uObject* origin);

struct FuseThemes_FuseControlsScrollView_KeepFocusInView_Property : ::g::Uno::UX::Property
{
    uStrong< ::g::Fuse::Controls::ScrollView*> _obj;

    void ctor_1(::g::Fuse::Controls::ScrollView* obj);
    static FuseThemes_FuseControlsScrollView_KeepFocusInView_Property* New1(::g::Fuse::Controls::ScrollView* obj);
};
// }

} // ::g
