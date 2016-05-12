// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.27.2/class/$.uno#395'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.Foundation.INSCopying.h>
#include <iOS.Foundation.NSObject.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace MapKit{struct MKMapCamera;}}}

namespace g{
namespace iOS{
namespace MapKit{

// public sealed extern class MKMapCamera :29525
// {
struct MKMapCamera_type : ::g::iOS::Foundation::NSObject_type
{
    ::g::iOS::Foundation::INSCopying interface1;
};

MKMapCamera_type* MKMapCamera_typeof();
void MKMapCamera__altitude_fn(MKMapCamera* __this, double* __retval);
void MKMapCamera__get_Altitude_fn(MKMapCamera* __this, double* __retval);
void MKMapCamera__set_Altitude_fn(MKMapCamera* __this, double* value);
void MKMapCamera__heading_fn(MKMapCamera* __this, double* __retval);
void MKMapCamera__get_Heading_fn(MKMapCamera* __this, double* __retval);
void MKMapCamera__set_Heading_fn(MKMapCamera* __this, double* value);
void MKMapCamera__pitch_fn(MKMapCamera* __this, double* __retval);
void MKMapCamera__get_Pitch_fn(MKMapCamera* __this, double* __retval);
void MKMapCamera__set_Pitch_fn(MKMapCamera* __this, double* value);
void MKMapCamera__setAltitude_fn(MKMapCamera* __this, double* altitude_);
void MKMapCamera__setHeading_fn(MKMapCamera* __this, double* heading_);
void MKMapCamera__setPitch_fn(MKMapCamera* __this, double* pitch_);

struct MKMapCamera : ::g::iOS::Foundation::NSObject
{
    double altitude();
    double Altitude();
    void Altitude(double value);
    double heading();
    double Heading();
    void Heading(double value);
    double pitch();
    double Pitch();
    void Pitch(double value);
    void setAltitude(double altitude_);
    void setHeading(double heading_);
    void setPitch(double pitch_);
};
// }

}}} // ::g::iOS::MapKit
