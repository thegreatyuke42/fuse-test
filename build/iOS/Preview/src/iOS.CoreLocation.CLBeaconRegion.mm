// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.27.2/class/$.uno#234'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE CLBeaconRegion
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::CoreLocation::CLBeaconRegion*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::CoreLocation::CLBeaconRegion_typeof()

#include <CoreLocation/CoreLocation.h>
#include <uObjC.Wrapper.h>
#include <iOS.CoreLocation.CLBeaconRegion.h>

namespace g{
namespace iOS{
namespace CoreLocation{

// public sealed extern class CLBeaconRegion :18988
// {
::g::iOS::CoreLocation::CLRegion_type* CLBeaconRegion_typeof()
{
    static uSStrong< ::g::iOS::CoreLocation::CLRegion_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(CLBeaconRegion);
    options.TypeSize = sizeof(::g::iOS::CoreLocation::CLRegion_type);
    type = (::g::iOS::CoreLocation::CLRegion_type*)uClassType::New("iOS.CoreLocation.CLBeaconRegion", options);
    type->SetBase(::g::iOS::CoreLocation::CLRegion_typeof());
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::CoreLocation::CLRegion_type, interface0),
        ::g::iOS::Foundation::INSCopying_typeof(), offsetof(::g::iOS::CoreLocation::CLRegion_type, interface1));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}
// }

}}} // ::g::iOS::CoreLocation
