// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.27.2/class/$.uno#529'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE NSFileManager
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::Foundation::NSFileManager*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::Foundation::NSFileManager_typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSFileManager.h>

namespace g{
namespace iOS{
namespace Foundation{

// public sealed extern class NSFileManager :41184
// {
::g::iOS::Foundation::NSObject_type* NSFileManager_typeof()
{
    static uSStrong< ::g::iOS::Foundation::NSObject_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NSFileManager);
    options.TypeSize = sizeof(::g::iOS::Foundation::NSObject_type);
    type = (::g::iOS::Foundation::NSObject_type*)uClassType::New("iOS.Foundation.NSFileManager", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::Foundation::NSObject_type, interface0));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}
// }

}}} // ::g::iOS::Foundation
