// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Node.h>
#include <Fuse.Vibration.Vibrate.h>
#include <Fuse.Vibration.Vibration.h>
#include <iOS.AudioToolbox.Functions.h>
#include <Uno.Double.h>
#include <Uno.UInt.h>

namespace g{
namespace Fuse{
namespace Vibration{

// /usr/local/share/uno/Packages/Fuse.Vibration/0.27.14/$.uno#1
// ------------------------------------------------------------

// public sealed class Vibrate :46
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Vibrate_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Vibrate);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Vibration.Vibrate", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_ctor_ = (void*)Vibrate__New1_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Vibrate__Perform_fn;
    type->SetFields(7,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Vibration::Vibrate, _Duration), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Duration", NULL, (void*)Vibrate__get_Duration_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Duration", NULL, (void*)Vibrate__set_Duration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction(".ctor", NULL, (void*)Vibrate__New1_fn, 0, true, Vibrate_typeof(), 0));
    return type;
}

// public generated Vibrate() :46
void Vibrate__ctor_1_fn(Vibrate* __this)
{
    __this->ctor_1();
}

// public generated double get_Duration() :48
void Vibrate__get_Duration_fn(Vibrate* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public generated void set_Duration(double value) :48
void Vibrate__set_Duration_fn(Vibrate* __this, double* value)
{
    __this->Duration(*value);
}

// public generated Vibrate New() :46
void Vibrate__New1_fn(Vibrate** __retval)
{
    *__retval = Vibrate::New1();
}

// protected override sealed void Perform(Fuse.Node target) :50
void Vibrate__Perform_fn(Vibrate* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Vibration.Vibrate", "Perform(Fuse.Node)");
    ::g::Fuse::Vibration::Vibration::Vibrate(__this->Duration());
}

// public generated Vibrate() [instance] :46
void Vibrate::ctor_1()
{
    uStackFrame __("Fuse.Vibration.Vibrate", ".ctor()");
    ctor_();
}

// public generated double get_Duration() [instance] :48
double Vibrate::Duration()
{
    uStackFrame __("Fuse.Vibration.Vibrate", "get_Duration()");
    return _Duration;
}

// public generated void set_Duration(double value) [instance] :48
void Vibrate::Duration(double value)
{
    uStackFrame __("Fuse.Vibration.Vibrate", "set_Duration(double)");
    _Duration = value;
}

// public generated Vibrate New() [static] :46
Vibrate* Vibrate::New1()
{
    Vibrate* obj1 = (Vibrate*)uNew(Vibrate_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Vibration/0.27.14/$.uno
// ----------------------------------------------------------

// public static class Vibration :13
// {
uClassType* Vibration_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Vibration.Vibration", options);
    type->Reflection.SetFunctions(1,
        new uFunction("Vibrate", NULL, (void*)Vibration__Vibrate_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
    return type;
}

// public static void Vibrate(double seconds) :15
void Vibration__Vibrate_fn(double* seconds)
{
    Vibration::Vibrate(*seconds);
}

// public static void Vibrate(double seconds) [static] :15
void Vibration::Vibrate(double seconds)
{
    uStackFrame __("Fuse.Vibration.Vibration", "Vibrate(double)");
    ::g::iOS::AudioToolbox::Functions::AudioServicesPlayAlertSound(4095U);
}
// }

}}} // ::g::Fuse::Vibration
