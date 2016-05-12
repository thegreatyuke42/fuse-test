// This file was generated based on '/Users/JK2Designs/Desktop/Mods4Minecraft/build/iOS/Preview/cache/Mods4Minecraft.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct TextInput;}}}
namespace g{struct Mods4Minecraft_FuseControlsTextInput_Value_Property;}

namespace g{

// internal sealed class Mods4Minecraft_FuseControlsTextInput_Value_Property :8
// {
::g::Uno::UX::Property_type* Mods4Minecraft_FuseControlsTextInput_Value_Property_typeof();
void Mods4Minecraft_FuseControlsTextInput_Value_Property__ctor_1_fn(Mods4Minecraft_FuseControlsTextInput_Value_Property* __this, ::g::Fuse::Controls::TextInput* obj);
void Mods4Minecraft_FuseControlsTextInput_Value_Property__New1_fn(::g::Fuse::Controls::TextInput* obj, Mods4Minecraft_FuseControlsTextInput_Value_Property** __retval);
void Mods4Minecraft_FuseControlsTextInput_Value_Property__OnAddListener_fn(Mods4Minecraft_FuseControlsTextInput_Value_Property* __this, uDelegate* listener);
void Mods4Minecraft_FuseControlsTextInput_Value_Property__OnGet_fn(Mods4Minecraft_FuseControlsTextInput_Value_Property* __this, uString** __retval);
void Mods4Minecraft_FuseControlsTextInput_Value_Property__OnRemoveListener_fn(Mods4Minecraft_FuseControlsTextInput_Value_Property* __this, uDelegate* listener);
void Mods4Minecraft_FuseControlsTextInput_Value_Property__OnSet_fn(Mods4Minecraft_FuseControlsTextInput_Value_Property* __this, uString* v, uObject* origin);

struct Mods4Minecraft_FuseControlsTextInput_Value_Property : ::g::Uno::UX::Property
{
    uStrong< ::g::Fuse::Controls::TextInput*> _obj;

    void ctor_1(::g::Fuse::Controls::TextInput* obj);
    static Mods4Minecraft_FuseControlsTextInput_Value_Property* New1(::g::Fuse::Controls::TextInput* obj);
};
// }

} // ::g
