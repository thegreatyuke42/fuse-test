// This file was generated based on '/Users/JK2Designs/Desktop/Mods4Minecraft/build/iOS/Preview/cache/Mods4Minecraft.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Mods4Minecraft_FuseControlsPageControl_Active_Property.h>
#include <Fuse.Controls.PageControl.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// internal sealed class Mods4Minecraft_FuseControlsPageControl_Active_Property :1
// {
::g::Uno::UX::Property_type* Mods4Minecraft_FuseControlsPageControl_Active_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Mods4Minecraft_FuseControlsPageControl_Active_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("Mods4Minecraft_FuseControlsPageControl_Active_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Fuse::Node_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))Mods4Minecraft_FuseControlsPageControl_Active_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))Mods4Minecraft_FuseControlsPageControl_Active_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Controls::PageControl_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::Mods4Minecraft_FuseControlsPageControl_Active_Property, _obj), 0);
    return type;
}

// public Mods4Minecraft_FuseControlsPageControl_Active_Property(Fuse.Controls.PageControl obj) :4
void Mods4Minecraft_FuseControlsPageControl_Active_Property__ctor_1_fn(Mods4Minecraft_FuseControlsPageControl_Active_Property* __this, ::g::Fuse::Controls::PageControl* obj)
{
    __this->ctor_1(obj);
}

// public Mods4Minecraft_FuseControlsPageControl_Active_Property New(Fuse.Controls.PageControl obj) :4
void Mods4Minecraft_FuseControlsPageControl_Active_Property__New1_fn(::g::Fuse::Controls::PageControl* obj, Mods4Minecraft_FuseControlsPageControl_Active_Property** __retval)
{
    *__retval = Mods4Minecraft_FuseControlsPageControl_Active_Property::New1(obj);
}

// protected override sealed Fuse.Node OnGet() :5
void Mods4Minecraft_FuseControlsPageControl_Active_Property__OnGet_fn(Mods4Minecraft_FuseControlsPageControl_Active_Property* __this, ::g::Fuse::Node** __retval)
{
    uStackFrame __("Mods4Minecraft_FuseControlsPageControl_Active_Property", "OnGet()");
    return *__retval = uPtr(__this->_obj)->Active(), void();
}

// protected override sealed void OnSet(Fuse.Node v, object origin) :6
void Mods4Minecraft_FuseControlsPageControl_Active_Property__OnSet_fn(Mods4Minecraft_FuseControlsPageControl_Active_Property* __this, ::g::Fuse::Node* v, uObject* origin)
{
    uStackFrame __("Mods4Minecraft_FuseControlsPageControl_Active_Property", "OnSet(Fuse.Node,object)");
    uPtr(__this->_obj)->Active(v);
}

// public Mods4Minecraft_FuseControlsPageControl_Active_Property(Fuse.Controls.PageControl obj) [instance] :4
void Mods4Minecraft_FuseControlsPageControl_Active_Property::ctor_1(::g::Fuse::Controls::PageControl* obj)
{
    uStackFrame __("Mods4Minecraft_FuseControlsPageControl_Active_Property", ".ctor(Fuse.Controls.PageControl)");
    ctor_();
    _obj = obj;
}

// public Mods4Minecraft_FuseControlsPageControl_Active_Property New(Fuse.Controls.PageControl obj) [static] :4
Mods4Minecraft_FuseControlsPageControl_Active_Property* Mods4Minecraft_FuseControlsPageControl_Active_Property::New1(::g::Fuse::Controls::PageControl* obj)
{
    Mods4Minecraft_FuseControlsPageControl_Active_Property* obj1 = (Mods4Minecraft_FuseControlsPageControl_Active_Property*)uNew(Mods4Minecraft_FuseControlsPageControl_Active_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
