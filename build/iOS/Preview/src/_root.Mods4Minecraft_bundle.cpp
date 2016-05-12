// This file was generated based on '/Users/JK2Designs/Desktop/Mods4Minecraft/Mods4Minecraft.unoproj'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Mods4Minecraft_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[2];

namespace g{

// public static generated class Mods4Minecraft_bundle :0
// {
// static Mods4Minecraft_bundle() :0
static void Mods4Minecraft_bundle__cctor__fn(uType* __type)
{
    Mods4Minecraft_bundle::test4c543b10_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Mods4Minecr...*/]))->GetFile(::STRINGS[1/*"test-9e0d24...*/]);
}

uClassType* Mods4Minecraft_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Mods4Minecraft_bundle", options);
    type->fp_cctor_ = Mods4Minecraft_bundle__cctor__fn;
    ::STRINGS[0] = uString::Const("Mods4Minecraft");
    ::STRINGS[1] = uString::Const("test-9e0d2481.mp4");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::Mods4Minecraft_bundle::test4c543b10_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("test4c543b10", 0));
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> Mods4Minecraft_bundle::test4c543b10_;
// }

} // ::g
