// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.27.14/FirstResponder/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.iOS.FirstResponder.h>
#include <iOS.UIKit.UIView.h>
#include <ObjC.ID.h>
#include <UIResponder+FirstResponder.h>
#include <Uno.Bool.h>
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace iOS{

// public static extern class FirstResponder :13
// {
uClassType* FirstResponder_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.FirstResponder", options);
    ::TYPES[0] = ::g::ObjC::ID_typeof();
    type->Reflection.SetFunctions(2,
        new uFunction("get_Current", NULL, (void*)FirstResponder__get_Current_fn, 0, true, ::g::iOS::UIKit::UIView_typeof(), 0),
        new uFunction("GetCurrent", NULL, (void*)FirstResponder__GetCurrent_fn, 0, true, ::g::ObjC::ID_typeof(), 0));
    return type;
}

// public static iOS.UIKit.UIView get_Current() :17
void FirstResponder__get_Current_fn(::g::iOS::UIKit::UIView** __retval)
{
    *__retval = FirstResponder::Current();
}

// public static ObjC.ID GetCurrent() :28
void FirstResponder__GetCurrent_fn(::id* __retval)
{
    *__retval = FirstResponder::GetCurrent();
}

// public static ObjC.ID GetCurrent() [static] :28
::id FirstResponder::GetCurrent()
{
    uStackFrame __("Fuse.iOS.FirstResponder", "GetCurrent()");
    return [UIResponder currentFirstResponder];
}

// public static iOS.UIKit.UIView get_Current() [static] :17
::g::iOS::UIKit::UIView* FirstResponder::Current()
{
    uStackFrame __("Fuse.iOS.FirstResponder", "get_Current()");
    ::id current = FirstResponder::GetCurrent();

    if (::g::ObjC::ID::op_Inequality(current, ::g::ObjC::ID::Null()) && [current isKindOfClass: [UIView class]])
        return (::g::iOS::UIKit::UIView*)uObjC::Lifetime::GetUnoObject(current, ::g::iOS::UIKit::UIView_typeof());

    return NULL;
}
// }

}}} // ::g::Fuse::iOS
