// This file was generated based on '/Users/JK2Designs/Desktop/Mods4Minecraft/build/iOS/Preview/cache/Mods4Minecraft.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Mods4Minecraft_FuseControlsButton_IsEnabled_Property.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Node.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// internal sealed class Mods4Minecraft_FuseControlsButton_IsEnabled_Property :17
// {
::g::Uno::UX::Property_type* Mods4Minecraft_FuseControlsButton_IsEnabled_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Mods4Minecraft_FuseControlsButton_IsEnabled_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("Mods4Minecraft_FuseControlsButton_IsEnabled_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))Mods4Minecraft_FuseControlsButton_IsEnabled_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))Mods4Minecraft_FuseControlsButton_IsEnabled_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::Button_typeof(), offsetof(::g::Mods4Minecraft_FuseControlsButton_IsEnabled_Property, _obj), 0);
    return type;
}

// public Mods4Minecraft_FuseControlsButton_IsEnabled_Property(Fuse.Controls.Button obj) :20
void Mods4Minecraft_FuseControlsButton_IsEnabled_Property__ctor_1_fn(Mods4Minecraft_FuseControlsButton_IsEnabled_Property* __this, ::g::Fuse::Controls::Button* obj)
{
    __this->ctor_1(obj);
}

// public Mods4Minecraft_FuseControlsButton_IsEnabled_Property New(Fuse.Controls.Button obj) :20
void Mods4Minecraft_FuseControlsButton_IsEnabled_Property__New1_fn(::g::Fuse::Controls::Button* obj, Mods4Minecraft_FuseControlsButton_IsEnabled_Property** __retval)
{
    *__retval = Mods4Minecraft_FuseControlsButton_IsEnabled_Property::New1(obj);
}

// protected override sealed bool OnGet() :21
void Mods4Minecraft_FuseControlsButton_IsEnabled_Property__OnGet_fn(Mods4Minecraft_FuseControlsButton_IsEnabled_Property* __this, bool* __retval)
{
    uStackFrame __("Mods4Minecraft_FuseControlsButton_IsEnabled_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->IsEnabled(), void();
}

// protected override sealed void OnSet(bool v, object origin) :22
void Mods4Minecraft_FuseControlsButton_IsEnabled_Property__OnSet_fn(Mods4Minecraft_FuseControlsButton_IsEnabled_Property* __this, bool* v, uObject* origin)
{
    uStackFrame __("Mods4Minecraft_FuseControlsButton_IsEnabled_Property", "OnSet(bool,object)");
    bool v_ = *v;
    uPtr(__this->_obj)->IsEnabled(v_);
}

// public Mods4Minecraft_FuseControlsButton_IsEnabled_Property(Fuse.Controls.Button obj) [instance] :20
void Mods4Minecraft_FuseControlsButton_IsEnabled_Property::ctor_1(::g::Fuse::Controls::Button* obj)
{
    uStackFrame __("Mods4Minecraft_FuseControlsButton_IsEnabled_Property", ".ctor(Fuse.Controls.Button)");
    ctor_();
    _obj = obj;
}

// public Mods4Minecraft_FuseControlsButton_IsEnabled_Property New(Fuse.Controls.Button obj) [static] :20
Mods4Minecraft_FuseControlsButton_IsEnabled_Property* Mods4Minecraft_FuseControlsButton_IsEnabled_Property::New1(::g::Fuse::Controls::Button* obj)
{
    Mods4Minecraft_FuseControlsButton_IsEnabled_Property* obj1 = (Mods4Minecraft_FuseControlsButton_IsEnabled_Property*)uNew(Mods4Minecraft_FuseControlsButton_IsEnabled_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
