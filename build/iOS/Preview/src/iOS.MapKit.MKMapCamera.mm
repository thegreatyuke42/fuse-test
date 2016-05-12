// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.27.2/class/$.uno#395'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE MKMapCamera
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::MapKit::MKMapCamera*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::MapKit::MKMapCamera_typeof()

#include <MapKit/MapKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.MapKit.MKMapCamera.h>
#include <Uno.Double.h>

namespace g{
namespace iOS{
namespace MapKit{

// public sealed extern class MKMapCamera :29525
// {
MKMapCamera_type* MKMapCamera_typeof()
{
    static uSStrong<MKMapCamera_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(MKMapCamera);
    options.TypeSize = sizeof(MKMapCamera_type);
    type = (MKMapCamera_type*)uClassType::New("iOS.MapKit.MKMapCamera", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(MKMapCamera_type, interface0),
        ::g::iOS::Foundation::INSCopying_typeof(), offsetof(MKMapCamera_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(12,
        new uFunction("altitude", NULL, (void*)MKMapCamera__altitude_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_Altitude", NULL, (void*)MKMapCamera__get_Altitude_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Altitude", NULL, (void*)MKMapCamera__set_Altitude_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("heading", NULL, (void*)MKMapCamera__heading_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_Heading", NULL, (void*)MKMapCamera__get_Heading_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Heading", NULL, (void*)MKMapCamera__set_Heading_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("pitch", NULL, (void*)MKMapCamera__pitch_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_Pitch", NULL, (void*)MKMapCamera__get_Pitch_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Pitch", NULL, (void*)MKMapCamera__set_Pitch_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("setAltitude", NULL, (void*)MKMapCamera__setAltitude_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("setHeading", NULL, (void*)MKMapCamera__setHeading_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("setPitch", NULL, (void*)MKMapCamera__setPitch_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public extern double altitude() :29584
void MKMapCamera__altitude_fn(MKMapCamera* __this, double* __retval)
{
    *__retval = __this->altitude();
}

// public double get_Altitude() :29555
void MKMapCamera__get_Altitude_fn(MKMapCamera* __this, double* __retval)
{
    *__retval = __this->Altitude();
}

// public void set_Altitude(double value) :29556
void MKMapCamera__set_Altitude_fn(MKMapCamera* __this, double* value)
{
    __this->Altitude(*value);
}

// public extern double heading() :29572
void MKMapCamera__heading_fn(MKMapCamera* __this, double* __retval)
{
    *__retval = __this->heading();
}

// public double get_Heading() :29543
void MKMapCamera__get_Heading_fn(MKMapCamera* __this, double* __retval)
{
    *__retval = __this->Heading();
}

// public void set_Heading(double value) :29544
void MKMapCamera__set_Heading_fn(MKMapCamera* __this, double* value)
{
    __this->Heading(*value);
}

// public extern double pitch() :29578
void MKMapCamera__pitch_fn(MKMapCamera* __this, double* __retval)
{
    *__retval = __this->pitch();
}

// public double get_Pitch() :29549
void MKMapCamera__get_Pitch_fn(MKMapCamera* __this, double* __retval)
{
    *__retval = __this->Pitch();
}

// public void set_Pitch(double value) :29550
void MKMapCamera__set_Pitch_fn(MKMapCamera* __this, double* value)
{
    __this->Pitch(*value);
}

// public extern void setAltitude(double altitude) :29587
void MKMapCamera__setAltitude_fn(MKMapCamera* __this, double* altitude_)
{
    __this->setAltitude(*altitude_);
}

// public extern void setHeading(double heading) :29575
void MKMapCamera__setHeading_fn(MKMapCamera* __this, double* heading_)
{
    __this->setHeading(*heading_);
}

// public extern void setPitch(double pitch) :29581
void MKMapCamera__setPitch_fn(MKMapCamera* __this, double* pitch_)
{
    __this->setPitch(*pitch_);
}

// public extern double altitude() [instance] :29584
double MKMapCamera::altitude()
{
    uStackFrame __("iOS.MapKit.MKMapCamera", "altitude()");
    double __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, double, @selector(altitude));
    return __return;
}

// public double get_Altitude() [instance] :29555
double MKMapCamera::Altitude()
{
    uStackFrame __("iOS.MapKit.MKMapCamera", "get_Altitude()");
    return altitude();
}

// public void set_Altitude(double value) [instance] :29556
void MKMapCamera::Altitude(double value)
{
    uStackFrame __("iOS.MapKit.MKMapCamera", "set_Altitude(double)");
    setAltitude(value);
}

// public extern double heading() [instance] :29572
double MKMapCamera::heading()
{
    uStackFrame __("iOS.MapKit.MKMapCamera", "heading()");
    double __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, double, @selector(heading));
    return __return;
}

// public double get_Heading() [instance] :29543
double MKMapCamera::Heading()
{
    uStackFrame __("iOS.MapKit.MKMapCamera", "get_Heading()");
    return heading();
}

// public void set_Heading(double value) [instance] :29544
void MKMapCamera::Heading(double value)
{
    uStackFrame __("iOS.MapKit.MKMapCamera", "set_Heading(double)");
    setHeading(value);
}

// public extern double pitch() [instance] :29578
double MKMapCamera::pitch()
{
    uStackFrame __("iOS.MapKit.MKMapCamera", "pitch()");
    CGFloat __return = uObjC_SEND_MESSAGE_TO_INSTANCE(this, CGFloat, @selector(pitch));
    return (double)__return;
}

// public double get_Pitch() [instance] :29549
double MKMapCamera::Pitch()
{
    uStackFrame __("iOS.MapKit.MKMapCamera", "get_Pitch()");
    return pitch();
}

// public void set_Pitch(double value) [instance] :29550
void MKMapCamera::Pitch(double value)
{
    uStackFrame __("iOS.MapKit.MKMapCamera", "set_Pitch(double)");
    setPitch(value);
}

// public extern void setAltitude(double altitude) [instance] :29587
void MKMapCamera::setAltitude(double altitude_)
{
    uStackFrame __("iOS.MapKit.MKMapCamera", "setAltitude(double)");
    double altitude__ = altitude_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setAltitude:),
        altitude__);
}

// public extern void setHeading(double heading) [instance] :29575
void MKMapCamera::setHeading(double heading_)
{
    uStackFrame __("iOS.MapKit.MKMapCamera", "setHeading(double)");
    double heading__ = heading_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setHeading:),
        heading__);
}

// public extern void setPitch(double pitch) [instance] :29581
void MKMapCamera::setPitch(double pitch_)
{
    uStackFrame __("iOS.MapKit.MKMapCamera", "setPitch(double)");
    double pitch__ = pitch_;
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(setPitch:),
        (CGFloat)pitch__);
}
// }

}}} // ::g::iOS::MapKit
