// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.27.2/interface/wrapper/$.uno#81'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE NSCopying
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::Foundation::INSCopying_typeof()

#include <Foundation/Foundation.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.Interop.INSCopying.h>

namespace g{
namespace iOS{
namespace Foundation{
namespace Interop{

// public sealed extern class INSCopying :3085
// {
INSCopying_type* INSCopying_typeof()
{
    static uSStrong<INSCopying_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(INSCopying);
    options.TypeSize = sizeof(INSCopying_type);
    type = (INSCopying_type*)uClassType::New("iOS.Foundation.Interop.INSCopying", options);
    type->SetBase(::g::ObjC::Bindings::Object_typeof());
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(INSCopying_type, interface0),
        ::g::iOS::Foundation::INSCopying_typeof(), offsetof(INSCopying_type, interface1));
    type->SetFields(1);

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}
// }

}}}} // ::g::iOS::Foundation::Interop
