// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.27.14/$.uno#1'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Context.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScriptCore{struct Context;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScriptCore{struct Marshaller;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScriptCore{

// public sealed extern class Context :145
// {
::g::Fuse::Scripting::Context_type* Context_typeof();
void Context__ctor_1_fn(Context* __this, uObject* ownerThread);
void Context__CallWithArguments_fn(uObject* jsValue, uArray* args, uObject** __retval);
void Context__ConstructWithArguments_fn(uObject* jsValue, uArray* args, uObject** __retval);
void Context__CreateContext_fn(uObject** __retval);
void Context__Dispose_fn(Context* __this);
void Context__Evaluate_fn(Context* __this, uString* fileName, uString* code, uObject** __retval);
void Context__EvaluateWithFilePath_fn(uObject* context, uString* code, uString* filePath, uObject** __retval);
void Context__GetExternalObject_fn(uObject* o, uObject** __retval);
void Context__GetGlobalObject_fn(uObject* context, uObject** __retval);
void Context__GetKeys_fn(uObject* jsValue, uArray** __retval);
void Context__get_GlobalObject_fn(Context* __this, ::g::Fuse::Scripting::Object** __retval);
void Context__HasProperty_fn(uObject* jsValue, uString* property, bool* __retval);
void Context__InvokeMethodWithArguments_fn(uObject* jsValue, uString* method, uArray* args, uObject** __retval);
void Context__IsBoolean_fn(uObject* jsValue, bool* __retval);
void Context__IsExternal_fn(uObject* o, bool* __retval);
void Context__IsInstanceOf_fn(uObject* jsValue1, uObject* jsValue2, bool* __retval);
void Context__IsNull_fn(uObject* jsValue, bool* __retval);
void Context__IsNumber_fn(uObject* jsValue, bool* __retval);
void Context__IsObject_fn(uObject* jsValue, bool* __retval);
void Context__IsString_fn(uObject* jsValue, bool* __retval);
void Context__IsUndefined_fn(uObject* jsValue, bool* __retval);
void Context__New1_fn(uObject* ownerThread, Context** __retval);
void Context__NewExternal_fn(uObject* o, uObject** __retval);
void Context__OnException_fn(uObject* context, uObject* value);
void Context__SetException_fn(uObject* context, uString* message);
void Context__SetExceptionHandler_fn(uObject* context, uDelegate* handler);
void Context__SetValueAtIndex_fn(uObject* array, uObject* value, int* index);
void Context__SetValueForProperty_fn(uObject* jsValue, uObject* value, uString* property);
void Context__ToBool_fn(uObject* jsValue, bool* __retval);
void Context__ToDouble_fn(uObject* jsValue, double* __retval);
void Context__ToString1_fn(uObject* jsValue, uString** __retval);
void Context__ValueAtIndex_fn(uObject* array, int* index, uObject** __retval);
void Context__ValueForProperty_fn(uObject* jsValue, uString* property, uObject** __retval);
void Context__ValueWithBoolInContext_fn(bool* b, uObject* context, uObject** __retval);
void Context__ValueWithCallbackInContext_fn(uDelegate* callback, uObject* context, uObject** __retval);
void Context__ValueWithDoubleInContext_fn(double* d, uObject* context, uObject** __retval);
void Context__ValueWithIntInContext_fn(int* i, uObject* context, uObject** __retval);
void Context__ValueWithNullInContext_fn(uObject* context, uObject** __retval);
void Context__ValueWithStringInContext_fn(uString* s, uObject* context, uObject** __retval);

struct Context : ::g::Fuse::Scripting::Context
{
    uStrong<uObject*> _context;
    uStrong< ::g::Fuse::Scripting::Object*> _global;
    uStrong< ::g::Fuse::Scripting::JavaScriptCore::Marshaller*> _marshaller;

    void ctor_1(uObject* ownerThread);
    static uObject* CallWithArguments(uObject* jsValue, uArray* args);
    static uObject* ConstructWithArguments(uObject* jsValue, uArray* args);
    static uObject* CreateContext();
    static uObject* EvaluateWithFilePath(uObject* context, uString* code, uString* filePath);
    static uObject* GetExternalObject(uObject* o);
    static uObject* GetGlobalObject(uObject* context);
    static uArray* GetKeys(uObject* jsValue);
    static bool HasProperty(uObject* jsValue, uString* property);
    static uObject* InvokeMethodWithArguments(uObject* jsValue, uString* method, uArray* args);
    static bool IsBoolean(uObject* jsValue);
    static bool IsExternal(uObject* o);
    static bool IsInstanceOf(uObject* jsValue1, uObject* jsValue2);
    static bool IsNull(uObject* jsValue);
    static bool IsNumber(uObject* jsValue);
    static bool IsObject(uObject* jsValue);
    static bool IsString(uObject* jsValue);
    static bool IsUndefined(uObject* jsValue);
    static Context* New1(uObject* ownerThread);
    static uObject* NewExternal(uObject* o);
    static void OnException(uObject* context, uObject* value);
    static void SetException(uObject* context, uString* message);
    static void SetExceptionHandler(uObject* context, uDelegate* handler);
    static void SetValueAtIndex(uObject* array, uObject* value, int index);
    static void SetValueForProperty(uObject* jsValue, uObject* value, uString* property);
    static bool ToBool(uObject* jsValue);
    static double ToDouble(uObject* jsValue);
    static uString* ToString1(uObject* jsValue);
    static uObject* ValueAtIndex(uObject* array, int index);
    static uObject* ValueForProperty(uObject* jsValue, uString* property);
    static uObject* ValueWithBoolInContext(bool b, uObject* context);
    static uObject* ValueWithCallbackInContext(uDelegate* callback, uObject* context);
    static uObject* ValueWithDoubleInContext(double d, uObject* context);
    static uObject* ValueWithIntInContext(int i, uObject* context);
    static uObject* ValueWithNullInContext(uObject* context);
    static uObject* ValueWithStringInContext(uString* s, uObject* context);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScriptCore
