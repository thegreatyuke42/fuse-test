// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.14/.uno/$.uno#10'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct BackButton;}}}
namespace g{struct FuseControls_FuseControlsBackButton_IsEnabled_Property;}

namespace g{

// internal sealed class FuseControls_FuseControlsBackButton_IsEnabled_Property :298
// {
::g::Uno::UX::Property_type* FuseControls_FuseControlsBackButton_IsEnabled_Property_typeof();
void FuseControls_FuseControlsBackButton_IsEnabled_Property__ctor_1_fn(FuseControls_FuseControlsBackButton_IsEnabled_Property* __this, ::g::Fuse::Controls::BackButton* obj);
void FuseControls_FuseControlsBackButton_IsEnabled_Property__New1_fn(::g::Fuse::Controls::BackButton* obj, FuseControls_FuseControlsBackButton_IsEnabled_Property** __retval);
void FuseControls_FuseControlsBackButton_IsEnabled_Property__OnGet_fn(FuseControls_FuseControlsBackButton_IsEnabled_Property* __this, bool* __retval);
void FuseControls_FuseControlsBackButton_IsEnabled_Property__OnSet_fn(FuseControls_FuseControlsBackButton_IsEnabled_Property* __this, bool* v, uObject* origin);

struct FuseControls_FuseControlsBackButton_IsEnabled_Property : ::g::Uno::UX::Property
{
    uStrong< ::g::Fuse::Controls::BackButton*> _obj;

    void ctor_1(::g::Fuse::Controls::BackButton* obj);
    static FuseControls_FuseControlsBackButton_IsEnabled_Property* New1(::g::Fuse::Controls::BackButton* obj);
};
// }

} // ::g
