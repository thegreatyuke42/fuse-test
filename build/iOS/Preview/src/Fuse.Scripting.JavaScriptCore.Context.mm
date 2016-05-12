// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.27.14/$.uno#1'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Scripting.JavaScriptCore.Context.h>
#include <Fuse.Scripting.JavaScriptCore.Marshaller.h>
#include <Fuse.Scripting.JavaScriptCore.Object.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ScriptException.h>
#include <Implementation/External.h>
#include <JavaScriptCore/JavaScriptCore.h>
#include <ObjC.Object.h>
#include <Uno.Action-2.h>
#include <Uno.ArgumentException.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Func-3.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Threading.IDispatcher.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[9];
static uType* TYPES[6];

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScriptCore{

// public sealed extern class Context :145
// {
::g::Fuse::Scripting::Context_type* Context_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Context_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Context);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Context_type);
    type = (::g::Fuse::Scripting::Context_type*)uClassType::New("Fuse.Scripting.JavaScriptCore.Context", options);
    type->SetBase(::g::Fuse::Scripting::Context_typeof());
    type->fp_Dispose = (void(*)(::g::Fuse::Scripting::Context*))Context__Dispose_fn;
    type->fp_Evaluate = (void(*)(::g::Fuse::Scripting::Context*, uString*, uString*, uObject**))Context__Evaluate_fn;
    type->fp_get_GlobalObject = (void(*)(::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::Object**))Context__get_GlobalObject_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Context__Dispose_fn;
    ::STRINGS[0] = uString::Const("Context.Evaluate.fileName");
    ::STRINGS[1] = uString::Const("Context.Evaluate.code");
    ::STRINGS[2] = uString::Const("name");
    ::STRINGS[3] = uString::Const("message");
    ::STRINGS[4] = uString::Const("fileName");
    ::STRINGS[5] = uString::Const("sourceURL");
    ::STRINGS[6] = uString::Const("line");
    ::STRINGS[7] = uString::Const("lineNumber");
    ::STRINGS[8] = uString::Const("stack");
    ::TYPES[0] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[1] = ::g::Uno::Action2_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::ObjC::Object_typeof());
    ::TYPES[2] = ::g::Fuse::Scripting::JavaScriptCore::Object_typeof();
    ::TYPES[3] = ::g::Uno::String_typeof();
    ::TYPES[4] = ::g::Uno::Double_typeof();
    ::TYPES[5] = ::g::Uno::Int_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::Context_type, interface0));
    type->SetFields(2,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Context, _context), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Context, _global), 0,
        ::g::Fuse::Scripting::JavaScriptCore::Marshaller_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Context, _marshaller), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("GetExternalObject", NULL, (void*)Context__GetExternalObject_fn, 0, true, uObject_typeof(), 1, ::g::ObjC::Object_typeof()),
        new uFunction("IsExternal", NULL, (void*)Context__IsExternal_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::ObjC::Object_typeof()),
        new uFunction(".ctor", NULL, (void*)Context__New1_fn, 0, true, Context_typeof(), 1, ::g::Uno::Threading::IDispatcher_typeof()));
    return type;
}

// public Context(Uno.Threading.IDispatcher ownerThread) :151
void Context__ctor_1_fn(Context* __this, uObject* ownerThread)
{
    __this->ctor_1(ownerThread);
}

// internal static ObjC.Object CallWithArguments(ObjC.Object jsValue, ObjC.Object[] args) :288
void Context__CallWithArguments_fn(uObject* jsValue, uArray* args, uObject** __retval)
{
    *__retval = Context::CallWithArguments(jsValue, args);
}

// internal static ObjC.Object ConstructWithArguments(ObjC.Object jsValue, ObjC.Object[] args) :294
void Context__ConstructWithArguments_fn(uObject* jsValue, uArray* args, uObject** __retval)
{
    *__retval = Context::ConstructWithArguments(jsValue, args);
}

// private static ObjC.Object CreateContext() :221
void Context__CreateContext_fn(uObject** __retval)
{
    *__retval = Context::CreateContext();
}

// public override sealed void Dispose() :207
void Context__Dispose_fn(Context* __this)
{
}

// public override sealed object Evaluate(string fileName, string code) :192
void Context__Evaluate_fn(Context* __this, uString* fileName, uString* code, uObject** __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "Evaluate(string,string)");

    if (::g::Uno::String::op_Equality(fileName, NULL))
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[0/*"Context.Eva...*/]));

    if (::g::Uno::String::op_Equality(code, NULL))
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[1/*"Context.Eva...*/]));

    return *__retval = uPtr(__this->_marshaller)->Wrap(Context::EvaluateWithFilePath(__this->_context, code, fileName)), void();
}

// private static ObjC.Object EvaluateWithFilePath(ObjC.Object context, string code, string filePath) :251
void Context__EvaluateWithFilePath_fn(uObject* context, uString* code, uString* filePath, uObject** __retval)
{
    *__retval = Context::EvaluateWithFilePath(context, code, filePath);
}

// public static object GetExternalObject(ObjC.Object o) :239
void Context__GetExternalObject_fn(uObject* o, uObject** __retval)
{
    *__retval = Context::GetExternalObject(o);
}

// internal static ObjC.Object GetGlobalObject(ObjC.Object context) :227
void Context__GetGlobalObject_fn(uObject* context, uObject** __retval)
{
    *__retval = Context::GetGlobalObject(context);
}

// internal static string[] GetKeys(ObjC.Object jsValue) :300
void Context__GetKeys_fn(uObject* jsValue, uArray** __retval)
{
    *__retval = Context::GetKeys(jsValue);
}

// public override sealed Fuse.Scripting.Object get_GlobalObject() :201
void Context__get_GlobalObject_fn(Context* __this, ::g::Fuse::Scripting::Object** __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "get_GlobalObject()");
    return *__retval = __this->_global, void();
}

// internal static bool HasProperty(ObjC.Object jsValue, string property) :326
void Context__HasProperty_fn(uObject* jsValue, uString* property, bool* __retval)
{
    *__retval = Context::HasProperty(jsValue, property);
}

// internal static ObjC.Object InvokeMethodWithArguments(ObjC.Object jsValue, string method, ObjC.Object[] args) :320
void Context__InvokeMethodWithArguments_fn(uObject* jsValue, uString* method, uArray* args, uObject** __retval)
{
    *__retval = Context::InvokeMethodWithArguments(jsValue, method, args);
}

// internal static bool IsBoolean(ObjC.Object jsValue) :336
void Context__IsBoolean_fn(uObject* jsValue, bool* __retval)
{
    *__retval = Context::IsBoolean(jsValue);
}

// public static bool IsExternal(ObjC.Object o) :245
void Context__IsExternal_fn(uObject* o, bool* __retval)
{
    *__retval = Context::IsExternal(o);
}

// internal static bool IsInstanceOf(ObjC.Object jsValue1, ObjC.Object jsValue2) :314
void Context__IsInstanceOf_fn(uObject* jsValue1, uObject* jsValue2, bool* __retval)
{
    *__retval = Context::IsInstanceOf(jsValue1, jsValue2);
}

// internal static bool IsNull(ObjC.Object jsValue) :342
void Context__IsNull_fn(uObject* jsValue, bool* __retval)
{
    *__retval = Context::IsNull(jsValue);
}

// internal static bool IsNumber(ObjC.Object jsValue) :332
void Context__IsNumber_fn(uObject* jsValue, bool* __retval)
{
    *__retval = Context::IsNumber(jsValue);
}

// internal static bool IsObject(ObjC.Object jsValue) :338
void Context__IsObject_fn(uObject* jsValue, bool* __retval)
{
    *__retval = Context::IsObject(jsValue);
}

// internal static bool IsString(ObjC.Object jsValue) :334
void Context__IsString_fn(uObject* jsValue, bool* __retval)
{
    *__retval = Context::IsString(jsValue);
}

// internal static bool IsUndefined(ObjC.Object jsValue) :344
void Context__IsUndefined_fn(uObject* jsValue, bool* __retval)
{
    *__retval = Context::IsUndefined(jsValue);
}

// public Context New(Uno.Threading.IDispatcher ownerThread) :151
void Context__New1_fn(uObject* ownerThread, Context** __retval)
{
    *__retval = Context::New1(ownerThread);
}

// internal static ObjC.Object NewExternal(object o) :233
void Context__NewExternal_fn(uObject* o, uObject** __retval)
{
    *__retval = Context::NewExternal(o);
}

// private static void OnException(ObjC.Object context, ObjC.Object value) :159
void Context__OnException_fn(uObject* context, uObject* value)
{
    Context::OnException(context, value);
}

// internal static void SetException(ObjC.Object context, string message) :363
void Context__SetException_fn(uObject* context, uString* message)
{
    Context::SetException(context, message);
}

// private static void SetExceptionHandler(ObjC.Object context, Uno.Action<ObjC.Object, ObjC.Object> handler) :213
void Context__SetExceptionHandler_fn(uObject* context, uDelegate* handler)
{
    Context::SetExceptionHandler(context, handler);
}

// internal static void SetValueAtIndex(ObjC.Object array, ObjC.Object value, int index) :276
void Context__SetValueAtIndex_fn(uObject* array, uObject* value, int* index)
{
    Context::SetValueAtIndex(array, value, *index);
}

// internal static void SetValueForProperty(ObjC.Object jsValue, ObjC.Object value, string property) :282
void Context__SetValueForProperty_fn(uObject* jsValue, uObject* value, uString* property)
{
    Context::SetValueForProperty(jsValue, value, property);
}

// internal static bool ToBool(ObjC.Object jsValue) :350
void Context__ToBool_fn(uObject* jsValue, bool* __retval)
{
    *__retval = Context::ToBool(jsValue);
}

// internal static double ToDouble(ObjC.Object jsValue) :346
void Context__ToDouble_fn(uObject* jsValue, double* __retval)
{
    *__retval = Context::ToDouble(jsValue);
}

// internal static string ToString(ObjC.Object jsValue) :348
void Context__ToString1_fn(uObject* jsValue, uString** __retval)
{
    *__retval = Context::ToString1(jsValue);
}

// internal static ObjC.Object ValueAtIndex(ObjC.Object array, int index) :270
void Context__ValueAtIndex_fn(uObject* array, int* index, uObject** __retval)
{
    *__retval = Context::ValueAtIndex(array, *index);
}

// internal static ObjC.Object ValueForProperty(ObjC.Object jsValue, string property) :264
void Context__ValueForProperty_fn(uObject* jsValue, uString* property, uObject** __retval)
{
    *__retval = Context::ValueForProperty(jsValue, property);
}

// internal static ObjC.Object ValueWithBoolInContext(bool b, ObjC.Object context) :360
void Context__ValueWithBoolInContext_fn(bool* b, uObject* context, uObject** __retval)
{
    *__retval = Context::ValueWithBoolInContext(*b, context);
}

// internal static ObjC.Object ValueWithCallbackInContext(Uno.Func<ObjC.Object, object[], object> callback, ObjC.Object context) :371
void Context__ValueWithCallbackInContext_fn(uDelegate* callback, uObject* context, uObject** __retval)
{
    *__retval = Context::ValueWithCallbackInContext(callback, context);
}

// internal static ObjC.Object ValueWithDoubleInContext(double d, ObjC.Object context) :356
void Context__ValueWithDoubleInContext_fn(double* d, uObject* context, uObject** __retval)
{
    *__retval = Context::ValueWithDoubleInContext(*d, context);
}

// internal static ObjC.Object ValueWithIntInContext(int i, ObjC.Object context) :354
void Context__ValueWithIntInContext_fn(int* i, uObject* context, uObject** __retval)
{
    *__retval = Context::ValueWithIntInContext(*i, context);
}

// internal static ObjC.Object ValueWithNullInContext(ObjC.Object context) :352
void Context__ValueWithNullInContext_fn(uObject* context, uObject** __retval)
{
    *__retval = Context::ValueWithNullInContext(context);
}

// internal static ObjC.Object ValueWithStringInContext(string s, ObjC.Object context) :358
void Context__ValueWithStringInContext_fn(uString* s, uObject* context, uObject** __retval)
{
    *__retval = Context::ValueWithStringInContext(s, context);
}

// public Context(Uno.Threading.IDispatcher ownerThread) [instance] :151
void Context::ctor_1(uObject* ownerThread)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", ".ctor(Uno.Threading.IDispatcher)");
    ctor_(ownerThread);
    _context = Context::CreateContext();
    _marshaller = ::g::Fuse::Scripting::JavaScriptCore::Marshaller::New1(_context);
    _global = ::g::Fuse::Scripting::JavaScriptCore::Object::New1(_marshaller, Context::GetGlobalObject(_context));
    Context::SetExceptionHandler(_context, uDelegate::New(::TYPES[1/*Uno.Action<ObjC.Object, ObjC.Object>*/], (void*)Context__OnException_fn));
}

// internal static ObjC.Object CallWithArguments(ObjC.Object jsValue, ObjC.Object[] args) [static] :288
uObject* Context::CallWithArguments(uObject* jsValue, uArray* args)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "CallWithArguments(ObjC.Object,ObjC.Object[])");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (::id jsValue, id<UnoArray> args) -> ::id
        {
            return [(JSValue*)jsValue callWithArguments: [args copyArray]];
        } (::g::ObjC::Helpers::GetHandle(jsValue), [::StrongUnoArray strongUnoArrayWithUnoArray: args getAt: ^ id (::uArray* arr, int i) { return ::g::ObjC::Helpers::GetHandle(arr->Strong<uObject*>(i)); } setAt: ^ (::uArray* arr, int i, id obj) { arr->Strong<uObject*>(i) = ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1(obj); }]));
        
    }
    
}

// internal static ObjC.Object ConstructWithArguments(ObjC.Object jsValue, ObjC.Object[] args) [static] :294
uObject* Context::ConstructWithArguments(uObject* jsValue, uArray* args)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "ConstructWithArguments(ObjC.Object,ObjC.Object[])");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (::id jsValue, id<UnoArray> args) -> ::id
        {
            return [(JSValue*)jsValue constructWithArguments: [args copyArray]];
        } (::g::ObjC::Helpers::GetHandle(jsValue), [::StrongUnoArray strongUnoArrayWithUnoArray: args getAt: ^ id (::uArray* arr, int i) { return ::g::ObjC::Helpers::GetHandle(arr->Strong<uObject*>(i)); } setAt: ^ (::uArray* arr, int i, id obj) { arr->Strong<uObject*>(i) = ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1(obj); }]));
        
    }
    
}

// private static ObjC.Object CreateContext() [static] :221
uObject* Context::CreateContext()
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "CreateContext()");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] () -> ::id
        {
            return [[[JSContext alloc] init] autorelease];
        } ());
        
    }
    
}

// private static ObjC.Object EvaluateWithFilePath(ObjC.Object context, string code, string filePath) [static] :251
uObject* Context::EvaluateWithFilePath(uObject* context, uString* code, uString* filePath)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "EvaluateWithFilePath(ObjC.Object,string,string)");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (::id context, ::NSString* code, ::NSString* filePath) -> ::id
        {
            if (NSFoundationVersionNumber <= NSFoundationVersionNumber_iOS_7_1)
            {
            	return [(JSContext*)context evaluateScript: code];
            }
            else
            {
            	return [(JSContext*)context evaluateScript: code withSourceURL: [NSURL URLWithString: filePath]];
            }
        } (::g::ObjC::Helpers::GetHandle(context), ::uObjC::NativeString(code), ::uObjC::NativeString(filePath)));
        
    }
    
}

// public static object GetExternalObject(ObjC.Object o) [static] :239
uObject* Context::GetExternalObject(uObject* o)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "GetExternalObject(ObjC.Object)");
    @autoreleasepool
    {
        return ([] (::id o) -> id<UnoObject>
        {
            return [(ExternalUnoObject*)[(JSValue*)o toObject] object];
        } (::g::ObjC::Helpers::GetHandle(o))).unoObject;
        
    }
    
}

// internal static ObjC.Object GetGlobalObject(ObjC.Object context) [static] :227
uObject* Context::GetGlobalObject(uObject* context)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "GetGlobalObject(ObjC.Object)");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (::id context) -> ::id
        {
            return [(JSContext*)context globalObject];
        } (::g::ObjC::Helpers::GetHandle(context)));
        
    }
    
}

// internal static string[] GetKeys(ObjC.Object jsValue) [static] :300
uArray* Context::GetKeys(uObject* jsValue)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "GetKeys(ObjC.Object)");
    @autoreleasepool
    {
        return uCast<uArray*>(([] (::id jsValue) -> id<UnoArray>
        {
            NSDictionary* dict = [(JSValue*)jsValue toDictionary];
            int index = 0;
            id<UnoArray> res = [&]() -> id<UnoArray> { ::uAutoReleasePool __autoReleasePool; return [::StrongUnoArray strongUnoArrayWithUnoArray: uArray::New(::g::Uno::String_typeof()->Array(), (int)[dict count]) getAt: ^ id (::uArray* arr, int i) { return (::id)::uObjC::NativeString(arr->Strong<uString*>(i)); } setAt: ^ (::uArray* arr, int i, id obj) { arr->Strong<uString*>(i) = ::uObjC::UnoString((::NSString*)obj); }]; }();
            for (NSString* key in dict)
            {
            	uCast<uArray*>((res).unoArray, ::g::Uno::String_typeof()->Array())->Strong<uString*>(index) = ::uObjC::UnoString(key);
            	++index;
            }
            return res;
        } (::g::ObjC::Helpers::GetHandle(jsValue))).unoArray, ::g::Uno::String_typeof()->Array());
        
    }
    
}

// internal static bool HasProperty(ObjC.Object jsValue, string property) [static] :326
bool Context::HasProperty(uObject* jsValue, uString* property)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "HasProperty(ObjC.Object,string)");
    @autoreleasepool
    {
        return [] (::id jsValue, ::NSString* property) -> bool
        {
            return [(JSValue*)jsValue hasProperty: property];
        } (::g::ObjC::Helpers::GetHandle(jsValue), ::uObjC::NativeString(property));
        
    }
    
}

// internal static ObjC.Object InvokeMethodWithArguments(ObjC.Object jsValue, string method, ObjC.Object[] args) [static] :320
uObject* Context::InvokeMethodWithArguments(uObject* jsValue, uString* method, uArray* args)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "InvokeMethodWithArguments(ObjC.Object,string,ObjC.Object[])");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (::id jsValue, ::NSString* method, id<UnoArray> args) -> ::id
        {
            return [(JSValue*)jsValue invokeMethod: method withArguments: [args copyArray]];
        } (::g::ObjC::Helpers::GetHandle(jsValue), ::uObjC::NativeString(method), [::StrongUnoArray strongUnoArrayWithUnoArray: args getAt: ^ id (::uArray* arr, int i) { return ::g::ObjC::Helpers::GetHandle(arr->Strong<uObject*>(i)); } setAt: ^ (::uArray* arr, int i, id obj) { arr->Strong<uObject*>(i) = ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1(obj); }]));
        
    }
    
}

// internal static bool IsBoolean(ObjC.Object jsValue) [static] :336
bool Context::IsBoolean(uObject* jsValue)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "IsBoolean(ObjC.Object)");
    @autoreleasepool
    {
        return [] (::id jsValue) -> bool
        {
            return [(JSValue*)jsValue isBoolean];
        } (::g::ObjC::Helpers::GetHandle(jsValue));
        
    }
    
}

// public static bool IsExternal(ObjC.Object o) [static] :245
bool Context::IsExternal(uObject* o)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "IsExternal(ObjC.Object)");
    @autoreleasepool
    {
        return [] (::id o) -> bool
        {
            return [[(JSValue*)o toObject] isKindOfClass: [ExternalUnoObject class]];
        } (::g::ObjC::Helpers::GetHandle(o));
        
    }
    
}

// internal static bool IsInstanceOf(ObjC.Object jsValue1, ObjC.Object jsValue2) [static] :314
bool Context::IsInstanceOf(uObject* jsValue1, uObject* jsValue2)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "IsInstanceOf(ObjC.Object,ObjC.Object)");
    @autoreleasepool
    {
        return [] (::id jsValue1, ::id jsValue2) -> bool
        {
            return [(JSValue*)jsValue1 isInstanceOf: (JSValue*)jsValue2];
        } (::g::ObjC::Helpers::GetHandle(jsValue1), ::g::ObjC::Helpers::GetHandle(jsValue2));
        
    }
    
}

// internal static bool IsNull(ObjC.Object jsValue) [static] :342
bool Context::IsNull(uObject* jsValue)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "IsNull(ObjC.Object)");
    @autoreleasepool
    {
        return [] (::id jsValue) -> bool
        {
            return [(JSValue*)jsValue isNull];
        } (::g::ObjC::Helpers::GetHandle(jsValue));
        
    }
    
}

// internal static bool IsNumber(ObjC.Object jsValue) [static] :332
bool Context::IsNumber(uObject* jsValue)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "IsNumber(ObjC.Object)");
    @autoreleasepool
    {
        return [] (::id jsValue) -> bool
        {
            return [(JSValue*)jsValue isNumber];
        } (::g::ObjC::Helpers::GetHandle(jsValue));
        
    }
    
}

// internal static bool IsObject(ObjC.Object jsValue) [static] :338
bool Context::IsObject(uObject* jsValue)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "IsObject(ObjC.Object)");
    @autoreleasepool
    {
        return [] (::id jsValue) -> bool
        {
            return [(JSValue*)jsValue isObject];
        } (::g::ObjC::Helpers::GetHandle(jsValue));
        
    }
    
}

// internal static bool IsString(ObjC.Object jsValue) [static] :334
bool Context::IsString(uObject* jsValue)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "IsString(ObjC.Object)");
    @autoreleasepool
    {
        return [] (::id jsValue) -> bool
        {
            return [(JSValue*)jsValue isString];
        } (::g::ObjC::Helpers::GetHandle(jsValue));
        
    }
    
}

// internal static bool IsUndefined(ObjC.Object jsValue) [static] :344
bool Context::IsUndefined(uObject* jsValue)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "IsUndefined(ObjC.Object)");
    @autoreleasepool
    {
        return [] (::id jsValue) -> bool
        {
            return [(JSValue*)jsValue isUndefined];
        } (::g::ObjC::Helpers::GetHandle(jsValue));
        
    }
    
}

// public Context New(Uno.Threading.IDispatcher ownerThread) [static] :151
Context* Context::New1(uObject* ownerThread)
{
    Context* obj6 = (Context*)uNew(Context_typeof());
    obj6->ctor_1(ownerThread);
    return obj6;
}

// internal static ObjC.Object NewExternal(object o) [static] :233
uObject* Context::NewExternal(uObject* o)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "NewExternal(object)");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (id<UnoObject> o) -> ::id
        {
            return [[[ExternalUnoObject alloc] initWithObject: o] autorelease];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: o]));
        
    }
    
}

// private static void OnException(ObjC.Object context, ObjC.Object value) [static] :159
void Context::OnException(uObject* context, uObject* value)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "OnException(ObjC.Object,ObjC.Object)");
    uString* ind1;
    uString* ind2;
    uString* ind3;
    uString* ind4;
    uString* ind5;
    uString* name = NULL;
    uString* message = NULL;
    uString* file = NULL;
    int lineNumber = -1;
    uString* stack = NULL;
    uObject* wrapped = ::g::Fuse::Scripting::JavaScriptCore::Marshaller::New1(context)->Wrap(value);

    if (uIs(wrapped, ::TYPES[2/*Fuse.Scripting.JavaScriptCore.Object*/]))
    {
        ::g::Fuse::Scripting::JavaScriptCore::Object* o = uCast< ::g::Fuse::Scripting::JavaScriptCore::Object*>(wrapped, ::TYPES[2/*Fuse.Scripting.JavaScriptCore.Object*/]);
        name = (ind1 = uAs<uString*>(uPtr(o)->Item(::STRINGS[2/*"name"*/]), ::TYPES[3/*string*/]), (ind1 != NULL) ? ind1 : name);
        message = (ind2 = uAs<uString*>(o->Item(::STRINGS[3/*"message"*/]), ::TYPES[3/*string*/]), (ind2 != NULL) ? ind2 : message);
        file = (ind3 = (ind4 = uAs<uString*>(o->Item(::STRINGS[4/*"fileName"*/]), ::TYPES[3/*string*/]), (ind4 != NULL) ? ind4 : uAs<uString*>(o->Item(::STRINGS[5/*"sourceURL"*/]), ::TYPES[3/*string*/])), (ind3 != NULL) ? ind3 : file);
        uObject* l1 = o->Item(::STRINGS[6/*"line"*/]);
        uObject* l2 = o->Item(::STRINGS[7/*"lineNumber"*/]);
        lineNumber = uIs(l1, ::TYPES[4/*double*/]) ? (int)uUnbox<double>(::TYPES[4/*double*/], l1) : uIs(l2, ::TYPES[4/*double*/]) ? (int)uUnbox<double>(::TYPES[4/*double*/], l2) : uIs(l1, ::TYPES[5/*int*/]) ? uUnbox<int>(::TYPES[5/*int*/], l1) : uIs(l2, ::TYPES[5/*int*/]) ? uUnbox<int>(::TYPES[5/*int*/], l2) : lineNumber;
        stack = (ind5 = uAs<uString*>(o->Item(::STRINGS[8/*"stack"*/]), ::TYPES[3/*string*/]), (ind5 != NULL) ? ind5 : stack);
    }
    else
        message = (wrapped != NULL) ? (uString*)::g::Uno::Object::ToString(uPtr(wrapped)) : message;

    U_THROW(::g::Fuse::Scripting::ScriptException::New4(name, message, file, lineNumber, NULL, stack));
}

// internal static void SetException(ObjC.Object context, string message) [static] :363
void Context::SetException(uObject* context, uString* message)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "SetException(ObjC.Object,string)");
    @autoreleasepool
    {
        [] (::id context, ::NSString* message) -> void
        {
            JSContext* jsContext = (JSContext*)context;
            [jsContext setException: [JSValue valueWithNewErrorFromMessage: message inContext: jsContext]];
        } (::g::ObjC::Helpers::GetHandle(context), ::uObjC::NativeString(message));
        
    }
    
}

// private static void SetExceptionHandler(ObjC.Object context, Uno.Action<ObjC.Object, ObjC.Object> handler) [static] :213
void Context::SetExceptionHandler(uObject* context, uDelegate* handler)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "SetExceptionHandler(ObjC.Object,Uno.Action<ObjC.Object, ObjC.Object>)");
    @autoreleasepool
    {
        [] (::id context, ::uObjC::Function<void, ::id, ::id> handler) -> void
        {
            [(JSContext*)context setExceptionHandler: ^ (JSContext* context, JSValue* value) {
            	handler(context, value);
            }];
        } (::g::ObjC::Helpers::GetHandle(context), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::id, ::id>
        {
            return [[^ void (::id arg1, ::id arg2)
            {
                ::uAutoReleasePool __autoReleasePool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->Invoke(2, ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1(arg1), ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1(arg2));
                
            } copy] autorelease];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: handler]));
        
    }
    
}

// internal static void SetValueAtIndex(ObjC.Object array, ObjC.Object value, int index) [static] :276
void Context::SetValueAtIndex(uObject* array, uObject* value, int index)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "SetValueAtIndex(ObjC.Object,ObjC.Object,int)");
    @autoreleasepool
    {
        [] (::id array, ::id value, int index) -> void
        {
            [(JSValue*)array setValue: value atIndex: (NSUInteger)index];
        } (::g::ObjC::Helpers::GetHandle(array), ::g::ObjC::Helpers::GetHandle(value), index);
        
    }
    
}

// internal static void SetValueForProperty(ObjC.Object jsValue, ObjC.Object value, string property) [static] :282
void Context::SetValueForProperty(uObject* jsValue, uObject* value, uString* property)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "SetValueForProperty(ObjC.Object,ObjC.Object,string)");
    @autoreleasepool
    {
        [] (::id jsValue, ::id value, ::NSString* property) -> void
        {
            [(JSValue*)jsValue setValue: value forProperty: property];
        } (::g::ObjC::Helpers::GetHandle(jsValue), ::g::ObjC::Helpers::GetHandle(value), ::uObjC::NativeString(property));
        
    }
    
}

// internal static bool ToBool(ObjC.Object jsValue) [static] :350
bool Context::ToBool(uObject* jsValue)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "ToBool(ObjC.Object)");
    @autoreleasepool
    {
        return [] (::id jsValue) -> bool
        {
            return [(JSValue*)jsValue toBool];
        } (::g::ObjC::Helpers::GetHandle(jsValue));
        
    }
    
}

// internal static double ToDouble(ObjC.Object jsValue) [static] :346
double Context::ToDouble(uObject* jsValue)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "ToDouble(ObjC.Object)");
    @autoreleasepool
    {
        return [] (::id jsValue) -> double
        {
            return [(JSValue*)jsValue toDouble];
        } (::g::ObjC::Helpers::GetHandle(jsValue));
        
    }
    
}

// internal static string ToString(ObjC.Object jsValue) [static] :348
uString* Context::ToString1(uObject* jsValue)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "ToString(ObjC.Object)");
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (::id jsValue) -> ::NSString*
        {
            return [(JSValue*)jsValue toString];
        } (::g::ObjC::Helpers::GetHandle(jsValue)));
        
    }
    
}

// internal static ObjC.Object ValueAtIndex(ObjC.Object array, int index) [static] :270
uObject* Context::ValueAtIndex(uObject* array, int index)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "ValueAtIndex(ObjC.Object,int)");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (::id array, int index) -> ::id
        {
            return [(JSValue*)array valueAtIndex: index];
        } (::g::ObjC::Helpers::GetHandle(array), index));
        
    }
    
}

// internal static ObjC.Object ValueForProperty(ObjC.Object jsValue, string property) [static] :264
uObject* Context::ValueForProperty(uObject* jsValue, uString* property)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "ValueForProperty(ObjC.Object,string)");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (::id jsValue, ::NSString* property) -> ::id
        {
            return [(JSValue*)jsValue valueForProperty: property];
        } (::g::ObjC::Helpers::GetHandle(jsValue), ::uObjC::NativeString(property)));
        
    }
    
}

// internal static ObjC.Object ValueWithBoolInContext(bool b, ObjC.Object context) [static] :360
uObject* Context::ValueWithBoolInContext(bool b, uObject* context)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "ValueWithBoolInContext(bool,ObjC.Object)");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (bool b, ::id context) -> ::id
        {
            return [JSValue valueWithBool: b inContext: (JSContext*)context];
        } (b, ::g::ObjC::Helpers::GetHandle(context)));
        
    }
    
}

// internal static ObjC.Object ValueWithCallbackInContext(Uno.Func<ObjC.Object, object[], object> callback, ObjC.Object context) [static] :371
uObject* Context::ValueWithCallbackInContext(uDelegate* callback, uObject* context)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "ValueWithCallbackInContext(Uno.Func<ObjC.Object, object[], object>,ObjC.Object)");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (::uObjC::Function<id<UnoObject>, ::id, id<UnoArray>> callback, ::id context) -> ::id
        {
            JSValue* (^callbackBlock)() = [[^ JSValue* ()
            {
            	JSContext* innerContext = [JSContext currentContext];
            	NSArray* args = [JSContext currentArguments];
            	id<UnoObject> marshaller
            		= [&]() -> id<UnoObject> { ::uAutoReleasePool __autoReleasePool; return [::StrongUnoObject strongUnoObjectWithUnoObject: ::g::Fuse::Scripting::JavaScriptCore::Marshaller::New1(::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1(innerContext))]; }();
            	id<UnoArray> wrappedArgs = [&]() -> id<UnoArray> { ::uAutoReleasePool __autoReleasePool; return [::StrongUnoArray strongUnoArrayWithUnoArray: uArray::New(uObject_typeof()->Array(), (int)args.count) getAt: ^ id (::uArray* arr, int i) { return (::id)[::StrongUnoObject strongUnoObjectWithUnoObject: arr->Strong<uObject*>(i)]; } setAt: ^ (::uArray* arr, int i, id obj) { arr->Strong<uObject*>(i) = ((id<UnoObject>)obj).unoObject; }]; }();
            	{
            		int i = 0;
            		for (JSValue* arg in args)
            		{
            			id<UnoObject> wrappedArg =
            			    [&]() -> id<UnoObject> { ::uAutoReleasePool __autoReleasePool; return [::StrongUnoObject strongUnoObjectWithUnoObject: uCast<::g::Fuse::Scripting::JavaScriptCore::Marshaller*>((marshaller).unoObject, ::g::Fuse::Scripting::JavaScriptCore::Marshaller_typeof())->Wrap(::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1(arg))]; }();
            			uCast<uArray*>((wrappedArgs).unoArray, uObject_typeof()->Array())->Strong<uObject*>(i) = (wrappedArg).unoObject;
            			++i;
            		}
            	}
            
            	id<UnoObject> result = callback(innerContext, wrappedArgs);
            	return [&]() -> ::id { ::uAutoReleasePool __autoReleasePool; return ::g::ObjC::Helpers::GetHandle(uCast<::g::Fuse::Scripting::JavaScriptCore::Marshaller*>((marshaller).unoObject, ::g::Fuse::Scripting::JavaScriptCore::Marshaller_typeof())->Unwrap((result).unoObject)); }();
            } copy] autorelease];
            return [JSValue valueWithObject: callbackBlock inContext: context];
        } ([] (id<UnoObject> __delegateRef) -> ::uObjC::Function<id<UnoObject>, ::id, id<UnoArray>>
        {
            return [[^ id<UnoObject> (::id arg1, id<UnoArray> arg2)
            {
                ::uAutoReleasePool __autoReleasePool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                return [::StrongUnoObject strongUnoObjectWithUnoObject: __unoDelegate->Invoke(2, ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1(arg1), uCast<uArray*>((arg2).unoArray, uObject_typeof()->Array()))];
                
            } copy] autorelease];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: callback]), ::g::ObjC::Helpers::GetHandle(context)));
        
    }
    
}

// internal static ObjC.Object ValueWithDoubleInContext(double d, ObjC.Object context) [static] :356
uObject* Context::ValueWithDoubleInContext(double d, uObject* context)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "ValueWithDoubleInContext(double,ObjC.Object)");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (double d, ::id context) -> ::id
        {
            return [JSValue valueWithDouble: d inContext: (JSContext*)context];
        } (d, ::g::ObjC::Helpers::GetHandle(context)));
        
    }
    
}

// internal static ObjC.Object ValueWithIntInContext(int i, ObjC.Object context) [static] :354
uObject* Context::ValueWithIntInContext(int i, uObject* context)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "ValueWithIntInContext(int,ObjC.Object)");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (int i, ::id context) -> ::id
        {
            return [JSValue valueWithInt32: i inContext: (JSContext*)context];
        } (i, ::g::ObjC::Helpers::GetHandle(context)));
        
    }
    
}

// internal static ObjC.Object ValueWithNullInContext(ObjC.Object context) [static] :352
uObject* Context::ValueWithNullInContext(uObject* context)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "ValueWithNullInContext(ObjC.Object)");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (::id context) -> ::id
        {
            return [JSValue valueWithNullInContext: (JSContext*)context];
        } (::g::ObjC::Helpers::GetHandle(context)));
        
    }
    
}

// internal static ObjC.Object ValueWithStringInContext(string s, ObjC.Object context) [static] :358
uObject* Context::ValueWithStringInContext(uString* s, uObject* context)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Context", "ValueWithStringInContext(string,ObjC.Object)");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (::NSString* s, ::id context) -> ::id
        {
            return [JSValue valueWithObject: s inContext: (JSContext*)context];
        } (::uObjC::NativeString(s), ::g::ObjC::Helpers::GetHandle(context)));
        
    }
    
}
// }

}}}} // ::g::Fuse::Scripting::JavaScriptCore
