// This file was generated based on '/Users/JK2Designs/Desktop/Mods4Minecraft/build/iOS/Preview/cache/Mods4Minecraft.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Button;}}}
namespace g{struct Mods4Minecraft_FuseControlsButton_IsEnabled_Property;}

namespace g{

// internal sealed class Mods4Minecraft_FuseControlsButton_IsEnabled_Property :17
// {
::g::Uno::UX::Property_type* Mods4Minecraft_FuseControlsButton_IsEnabled_Property_typeof();
void Mods4Minecraft_FuseControlsButton_IsEnabled_Property__ctor_1_fn(Mods4Minecraft_FuseControlsButton_IsEnabled_Property* __this, ::g::Fuse::Controls::Button* obj);
void Mods4Minecraft_FuseControlsButton_IsEnabled_Property__New1_fn(::g::Fuse::Controls::Button* obj, Mods4Minecraft_FuseControlsButton_IsEnabled_Property** __retval);
void Mods4Minecraft_FuseControlsButton_IsEnabled_Property__OnGet_fn(Mods4Minecraft_FuseControlsButton_IsEnabled_Property* __this, bool* __retval);
void Mods4Minecraft_FuseControlsButton_IsEnabled_Property__OnSet_fn(Mods4Minecraft_FuseControlsButton_IsEnabled_Property* __this, bool* v, uObject* origin);

struct Mods4Minecraft_FuseControlsButton_IsEnabled_Property : ::g::Uno::UX::Property
{
    uStrong< ::g::Fuse::Controls::Button*> _obj;

    void ctor_1(::g::Fuse::Controls::Button* obj);
    static Mods4Minecraft_FuseControlsButton_IsEnabled_Property* New1(::g::Fuse::Controls::Button* obj);
};
// }

} // ::g
