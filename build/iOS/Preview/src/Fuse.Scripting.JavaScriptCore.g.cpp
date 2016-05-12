// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.External.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.JavaScriptCore.Array.h>
#include <Fuse.Scripting.JavaScriptCore.Context.h>
#include <Fuse.Scripting.JavaScriptCore.Function.h>
#include <Fuse.Scripting.JavaScriptCore.Marshaller.CallbackExceptionHandler.h>
#include <Fuse.Scripting.JavaScriptCore.Marshaller.h>
#include <Fuse.Scripting.JavaScriptCore.Object.h>
#include <Fuse.Scripting.Object.h>
#include <ObjC.Object.h>
#include <Uno.ArgumentException.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Func-3.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uString* STRINGS[7];
static uType* TYPES[16];

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScriptCore{

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.27.14/$.uno
// -------------------------------------------------------------------------

// internal sealed extern class Array :7
// {
::g::Fuse::Scripting::Array_type* Array_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Array_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Array);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Array_type);
    type = (::g::Fuse::Scripting::Array_type*)uClassType::New("Fuse.Scripting.JavaScriptCore.Array", options);
    type->SetBase(::g::Fuse::Scripting::Array_typeof());
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Array*, ::g::Fuse::Scripting::Array*, bool*))Array__Equals2_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Array__GetHashCode_fn;
    type->fp_get_Item = (void(*)(::g::Fuse::Scripting::Array*, int*, uObject**))Array__get_Item_fn;
    type->fp_set_Item = (void(*)(::g::Fuse::Scripting::Array*, int*, uObject*))Array__set_Item_fn;
    type->fp_get_Length = (void(*)(::g::Fuse::Scripting::Array*, int*))Array__get_Length_fn;
    ::STRINGS[0] = uString::Const("length");
    ::STRINGS[1] = uString::Const("Array.Length was not a number");
    ::TYPES[0] = uObject_typeof();
    ::TYPES[1] = ::g::Uno::Int_typeof();
    ::TYPES[2] = ::g::Uno::Double_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::JavaScriptCore::Marshaller_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Array, _marshaller), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Array, _value), 0);
    return type;
}

// internal Array(Fuse.Scripting.JavaScriptCore.Marshaller marshaller, ObjC.Object array) :12
void Array__ctor_1_fn(Array* __this, ::g::Fuse::Scripting::JavaScriptCore::Marshaller* marshaller, uObject* array)
{
    __this->ctor_1(marshaller, array);
}

// public override sealed bool Equals(Fuse.Scripting.Array a) :41
void Array__Equals2_fn(Array* __this, ::g::Fuse::Scripting::Array* a, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Array", "Equals(Fuse.Scripting.Array)");
    Array* jsa = uCast<Array*>(a, Array_typeof());
    return *__retval = ::g::Uno::Object::Equals(uPtr(__this->_value), uPtr(jsa)->_value), void();
}

// public override sealed int GetHashCode() :47
void Array__GetHashCode_fn(Array* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Array", "GetHashCode()");
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->_value)), void();
}

// public override sealed object get_Item(int index) :20
void Array__get_Item_fn(Array* __this, int* index, uObject** __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Array", "get_Item(int)");
    int index_ = *index;
    return *__retval = uPtr(__this->_marshaller)->Wrap(::g::Fuse::Scripting::JavaScriptCore::Context::ValueAtIndex(__this->_value, index_)), void();
}

// public override sealed void set_Item(int index, object value) :24
void Array__set_Item_fn(Array* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Array", "set_Item(int,object)");
    int index_ = *index;
    ::g::Fuse::Scripting::JavaScriptCore::Context::SetValueAtIndex(__this->_value, uPtr(__this->_marshaller)->Unwrap(value), index_);
}

// public override sealed int get_Length() :32
void Array__get_Length_fn(Array* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Array", "get_Length()");
    uObject* len = uPtr(__this->_marshaller)->Wrap(::g::Fuse::Scripting::JavaScriptCore::Context::ValueForProperty(__this->_value, ::STRINGS[0/*"length"*/]));

    if (uIs(len, ::TYPES[1/*int*/]))
        return *__retval = uUnbox<int>(::TYPES[1/*int*/], len), void();

    if (uIs(len, ::TYPES[2/*double*/]))
        return *__retval = (int)uUnbox<double>(::TYPES[2/*double*/], len), void();

    U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"Array.Lengt...*/]));
}

// internal Array New(Fuse.Scripting.JavaScriptCore.Marshaller marshaller, ObjC.Object array) :12
void Array__New1_fn(::g::Fuse::Scripting::JavaScriptCore::Marshaller* marshaller, uObject* array, Array** __retval)
{
    *__retval = Array::New1(marshaller, array);
}

// internal Array(Fuse.Scripting.JavaScriptCore.Marshaller marshaller, ObjC.Object array) [instance] :12
void Array::ctor_1(::g::Fuse::Scripting::JavaScriptCore::Marshaller* marshaller, uObject* array)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Array", ".ctor(Fuse.Scripting.JavaScriptCore.Marshaller,ObjC.Object)");
    ctor_();
    _marshaller = marshaller;
    _value = array;
}

// internal Array New(Fuse.Scripting.JavaScriptCore.Marshaller marshaller, ObjC.Object array) [static] :12
Array* Array::New1(::g::Fuse::Scripting::JavaScriptCore::Marshaller* marshaller, uObject* array)
{
    Array* obj1 = (Array*)uNew(Array_typeof());
    obj1->ctor_1(marshaller, array);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.27.14/$.uno#1
// ---------------------------------------------------------------------------

// private sealed extern class Marshaller.CallbackExceptionHandler :118
// {
uType* Marshaller__CallbackExceptionHandler_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Marshaller__CallbackExceptionHandler);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JavaScriptCore.Marshaller.CallbackExceptionHandler", options);
    ::TYPES[3] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[4] = ::g::Uno::Exception_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::Callback_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Marshaller__CallbackExceptionHandler, _callback), 0);
    return type;
}

// public CallbackExceptionHandler(Fuse.Scripting.Callback callback) :122
void Marshaller__CallbackExceptionHandler__ctor__fn(Marshaller__CallbackExceptionHandler* __this, uDelegate* callback)
{
    __this->ctor_(callback);
}

// public object Call(ObjC.Object context, object[] args) :127
void Marshaller__CallbackExceptionHandler__Call_fn(Marshaller__CallbackExceptionHandler* __this, uObject* context, uArray* args, uObject** __retval)
{
    *__retval = __this->Call(context, args);
}

// public CallbackExceptionHandler New(Fuse.Scripting.Callback callback) :122
void Marshaller__CallbackExceptionHandler__New1_fn(uDelegate* callback, Marshaller__CallbackExceptionHandler** __retval)
{
    *__retval = Marshaller__CallbackExceptionHandler::New1(callback);
}

// public CallbackExceptionHandler(Fuse.Scripting.Callback callback) [instance] :122
void Marshaller__CallbackExceptionHandler::ctor_(uDelegate* callback)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Marshaller.CallbackExceptionHandler", ".ctor(Fuse.Scripting.Callback)");
    _callback = callback;
}

// public object Call(ObjC.Object context, object[] args) [instance] :127
uObject* Marshaller__CallbackExceptionHandler::Call(uObject* context, uArray* args)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Marshaller.CallbackExceptionHandler", "Call(ObjC.Object,object[])");

    try
    {
        return uPtr(_callback)->Invoke(1, args);
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::g::Fuse::Scripting::Error_typeof()))
        {
            ::g::Fuse::Scripting::Error* e = (::g::Fuse::Scripting::Error*)__t.Exception;
            ::g::Fuse::Scripting::JavaScriptCore::Context::SetException(context, uPtr(e)->Message());
        }
        else throw __t;
    }

    return NULL;
}

// public CallbackExceptionHandler New(Fuse.Scripting.Callback callback) [static] :122
Marshaller__CallbackExceptionHandler* Marshaller__CallbackExceptionHandler::New1(uDelegate* callback)
{
    Marshaller__CallbackExceptionHandler* obj1 = (Marshaller__CallbackExceptionHandler*)uNew(Marshaller__CallbackExceptionHandler_typeof());
    obj1->ctor_(callback);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.27.14/$.uno#2
// ---------------------------------------------------------------------------

// internal sealed extern class Function :404
// {
::g::Fuse::Scripting::Function_type* Function_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Function_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Function);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Function_type);
    type = (::g::Fuse::Scripting::Function_type*)uClassType::New("Fuse.Scripting.JavaScriptCore.Function", options);
    type->SetBase(::g::Fuse::Scripting::Function_typeof());
    type->fp_Call = (void(*)(::g::Fuse::Scripting::Function*, uArray*, uObject**))Function__Call_fn;
    type->fp_Construct = (void(*)(::g::Fuse::Scripting::Function*, uArray*, ::g::Fuse::Scripting::Object**))Function__Construct_fn;
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Function*, ::g::Fuse::Scripting::Function*, bool*))Function__Equals2_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Function__GetHashCode_fn;
    ::TYPES[5] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[0] = uObject_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::JavaScriptCore::Marshaller_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Function, _marshaller), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Function, _value), 0);
    return type;
}

// internal Function(Fuse.Scripting.JavaScriptCore.Marshaller marshaller, ObjC.Object function) :409
void Function__ctor_1_fn(Function* __this, ::g::Fuse::Scripting::JavaScriptCore::Marshaller* marshaller, uObject* function)
{
    __this->ctor_1(marshaller, function);
}

// public override sealed object Call(object[] args) :415
void Function__Call_fn(Function* __this, uArray* args, uObject** __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Function", "Call(object[])");
    return *__retval = uPtr(__this->_marshaller)->Wrap(::g::Fuse::Scripting::JavaScriptCore::Context::CallWithArguments(__this->_value, uPtr(__this->_marshaller)->Unwrap1(args))), void();
}

// public override sealed Fuse.Scripting.Object Construct(object[] args) :420
void Function__Construct_fn(Function* __this, uArray* args, ::g::Fuse::Scripting::Object** __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Function", "Construct(object[])");
    return *__retval = uCast< ::g::Fuse::Scripting::Object*>(uPtr(__this->_marshaller)->Wrap(::g::Fuse::Scripting::JavaScriptCore::Context::ConstructWithArguments(__this->_value, uPtr(__this->_marshaller)->Unwrap1(args))), ::TYPES[5/*Fuse.Scripting.Object*/]), void();
}

// public override sealed bool Equals(Fuse.Scripting.Function f) :425
void Function__Equals2_fn(Function* __this, ::g::Fuse::Scripting::Function* f, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Function", "Equals(Fuse.Scripting.Function)");
    return *__retval = uIs(f, Function_typeof()) && ::g::Uno::Object::Equals(uPtr(__this->_value), uPtr(uCast<Function*>(f, Function_typeof()))->_value), void();
}

// public override sealed int GetHashCode() :430
void Function__GetHashCode_fn(Function* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Function", "GetHashCode()");
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->_value)), void();
}

// internal Function New(Fuse.Scripting.JavaScriptCore.Marshaller marshaller, ObjC.Object function) :409
void Function__New1_fn(::g::Fuse::Scripting::JavaScriptCore::Marshaller* marshaller, uObject* function, Function** __retval)
{
    *__retval = Function::New1(marshaller, function);
}

// internal Function(Fuse.Scripting.JavaScriptCore.Marshaller marshaller, ObjC.Object function) [instance] :409
void Function::ctor_1(::g::Fuse::Scripting::JavaScriptCore::Marshaller* marshaller, uObject* function)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Function", ".ctor(Fuse.Scripting.JavaScriptCore.Marshaller,ObjC.Object)");
    ctor_();
    _marshaller = marshaller;
    _value = function;
}

// internal Function New(Fuse.Scripting.JavaScriptCore.Marshaller marshaller, ObjC.Object function) [static] :409
Function* Function::New1(::g::Fuse::Scripting::JavaScriptCore::Marshaller* marshaller, uObject* function)
{
    Function* obj1 = (Function*)uNew(Function_typeof());
    obj1->ctor_1(marshaller, function);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.27.14/$.uno#1
// ---------------------------------------------------------------------------

// internal sealed extern class Marshaller :63
// {
uType* Marshaller_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Marshaller);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JavaScriptCore.Marshaller", options);
    ::STRINGS[2] = uString::Const("Function");
    ::STRINGS[3] = uString::Const("Array");
    ::STRINGS[4] = uString::Const("Unhandled type in JavaScriptCore wrapper: ");
    ::STRINGS[5] = uString::Const("Unhandled JSValue in JavaScriptCore wrapper");
    ::TYPES[1] = ::g::Uno::Int_typeof();
    ::TYPES[2] = ::g::Uno::Double_typeof();
    ::TYPES[6] = ::g::Uno::Float_typeof();
    ::TYPES[7] = ::g::Uno::String_typeof();
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[9] = ::g::Fuse::Scripting::JavaScriptCore::Object_typeof();
    ::TYPES[10] = ::g::Fuse::Scripting::JavaScriptCore::Array_typeof();
    ::TYPES[11] = ::g::Fuse::Scripting::JavaScriptCore::Function_typeof();
    ::TYPES[12] = ::g::Fuse::Scripting::External_typeof();
    ::TYPES[3] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[13] = ::g::Uno::Func2_typeof()->MakeType(::g::ObjC::Object_typeof(), uObject_typeof()->Array(), uObject_typeof());
    ::TYPES[14] = ::g::ObjC::Object_typeof()->Array();
    ::TYPES[15] = uObject_typeof()->Array();
    ::TYPES[0] = uObject_typeof();
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Marshaller, _arrayType), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Marshaller, _context), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Marshaller, _functionType), 0);
    return type;
}

// public Marshaller(ObjC.Object context) :68
void Marshaller__ctor__fn(Marshaller* __this, uObject* context)
{
    __this->ctor_(context);
}

// public Marshaller New(ObjC.Object context) :68
void Marshaller__New1_fn(uObject* context, Marshaller** __retval)
{
    *__retval = Marshaller::New1(context);
}

// public ObjC.Object Unwrap(object obj) :92
void Marshaller__Unwrap_fn(Marshaller* __this, uObject* obj, uObject** __retval)
{
    *__retval = __this->Unwrap(obj);
}

// public ObjC.Object[] Unwrap(object[] obj) :108
void Marshaller__Unwrap1_fn(Marshaller* __this, uArray* obj, uArray** __retval)
{
    *__retval = __this->Unwrap1(obj);
}

// public object Wrap(ObjC.Object value) :76
void Marshaller__Wrap_fn(Marshaller* __this, uObject* value, uObject** __retval)
{
    *__retval = __this->Wrap(value);
}

// public Marshaller(ObjC.Object context) [instance] :68
void Marshaller::ctor_(uObject* context)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Marshaller", ".ctor(ObjC.Object)");
    _context = context;
    uObject* global = ::g::Fuse::Scripting::JavaScriptCore::Context::GetGlobalObject(_context);
    _functionType = ::g::Fuse::Scripting::JavaScriptCore::Context::ValueForProperty(global, ::STRINGS[2/*"Function"*/]);
    _arrayType = ::g::Fuse::Scripting::JavaScriptCore::Context::ValueForProperty(global, ::STRINGS[3/*"Array"*/]);
}

// public ObjC.Object Unwrap(object obj) [instance] :92
uObject* Marshaller::Unwrap(uObject* obj)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Marshaller", "Unwrap(object)");

    if (obj == NULL)
        return ::g::Fuse::Scripting::JavaScriptCore::Context::ValueWithNullInContext(_context);

    if (uIs(obj, ::TYPES[1/*int*/]))
        return ::g::Fuse::Scripting::JavaScriptCore::Context::ValueWithIntInContext(uUnbox<int>(::TYPES[1/*int*/], obj), _context);

    if (uIs(obj, ::TYPES[2/*double*/]))
        return ::g::Fuse::Scripting::JavaScriptCore::Context::ValueWithDoubleInContext(uUnbox<double>(::TYPES[2/*double*/], obj), _context);

    if (uIs(obj, ::TYPES[6/*float*/]))
        return ::g::Fuse::Scripting::JavaScriptCore::Context::ValueWithDoubleInContext((double)uUnbox<float>(::TYPES[6/*float*/], obj), _context);

    if (uIs(obj, ::TYPES[7/*string*/]))
        return ::g::Fuse::Scripting::JavaScriptCore::Context::ValueWithStringInContext(uCast<uString*>(obj, ::TYPES[7/*string*/]), _context);

    if (uIs(obj, ::TYPES[8/*bool*/]))
        return ::g::Fuse::Scripting::JavaScriptCore::Context::ValueWithBoolInContext(uUnbox<bool>(::TYPES[8/*bool*/], obj), _context);

    if (uIs(obj, ::TYPES[9/*Fuse.Scripting.JavaScriptCore.Object*/]))
        return uPtr(uCast< ::g::Fuse::Scripting::JavaScriptCore::Object*>(obj, ::TYPES[9/*Fuse.Scripting.JavaScriptCore.Object*/]))->_value;

    if (uIs(obj, ::TYPES[10/*Fuse.Scripting.JavaScriptCore.Array*/]))
        return uPtr(uCast< ::g::Fuse::Scripting::JavaScriptCore::Array*>(obj, ::TYPES[10/*Fuse.Scripting.JavaScriptCore.Array*/]))->_value;

    if (uIs(obj, ::TYPES[11/*Fuse.Scripting.JavaScriptCore.Function*/]))
        return uPtr(uCast< ::g::Fuse::Scripting::JavaScriptCore::Function*>(obj, ::TYPES[11/*Fuse.Scripting.JavaScriptCore.Function*/]))->_value;

    if (uIs(obj, ::TYPES[12/*Fuse.Scripting.External*/]))
        return ::g::Fuse::Scripting::JavaScriptCore::Context::NewExternal(uPtr(uCast< ::g::Fuse::Scripting::External*>(obj, ::TYPES[12/*Fuse.Scripting.External*/]))->Object);

    if (uIs(obj, ::TYPES[3/*Fuse.Scripting.Callback*/]))
        return ::g::Fuse::Scripting::JavaScriptCore::Context::ValueWithCallbackInContext(uDelegate::New(::TYPES[13/*Uno.Func<ObjC.Object, object[], object>*/], (void*)Marshaller__CallbackExceptionHandler__Call_fn, Marshaller__CallbackExceptionHandler::New1(uCast<uDelegate*>(obj, ::TYPES[3/*Fuse.Scripting.Callback*/]))), _context);

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[4/*"Unhandled t...*/], obj)));
}

// public ObjC.Object[] Unwrap(object[] obj) [instance] :108
uArray* Marshaller::Unwrap1(uArray* obj)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Marshaller", "Unwrap(object[])");
    uArray* result = uArray::New(::TYPES[14/*ObjC.Object[]*/], uPtr(obj)->Length());

    for (int i = 0; i < obj->Length(); ++i)
        uPtr(result)->Strong<uObject*>(i) = Unwrap(uPtr(obj)->Strong<uObject*>(i));

    return result;
}

// public object Wrap(ObjC.Object value) [instance] :76
uObject* Marshaller::Wrap(uObject* value)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Marshaller", "Wrap(ObjC.Object)");

    if (::g::Fuse::Scripting::JavaScriptCore::Context::IsNumber(value))
        return uBox(::TYPES[2/*double*/], ::g::Fuse::Scripting::JavaScriptCore::Context::ToDouble(value));

    if (::g::Fuse::Scripting::JavaScriptCore::Context::IsString(value))
        return ::g::Fuse::Scripting::JavaScriptCore::Context::ToString1(value);

    if (::g::Fuse::Scripting::JavaScriptCore::Context::IsBoolean(value))
        return uBox(::TYPES[8/*bool*/], ::g::Fuse::Scripting::JavaScriptCore::Context::ToBool(value));

    if (::g::Fuse::Scripting::JavaScriptCore::Context::IsObject(value))
    {
        if (::g::Fuse::Scripting::JavaScriptCore::Context::IsExternal(value))
            return ::g::Fuse::Scripting::External::New1(::g::Fuse::Scripting::JavaScriptCore::Context::GetExternalObject(value));

        if (::g::Fuse::Scripting::JavaScriptCore::Context::IsInstanceOf(value, _functionType))
            return ::g::Fuse::Scripting::JavaScriptCore::Function::New1(this, value);

        if (::g::Fuse::Scripting::JavaScriptCore::Context::IsInstanceOf(value, _arrayType))
            return ::g::Fuse::Scripting::JavaScriptCore::Array::New1(this, value);

        return ::g::Fuse::Scripting::JavaScriptCore::Object::New1(this, value);
    }

    if (::g::Fuse::Scripting::JavaScriptCore::Context::IsUndefined(value) || ::g::Fuse::Scripting::JavaScriptCore::Context::IsNull(value))
        return NULL;

    U_THROW(::g::Uno::Exception::New2(::STRINGS[5/*"Unhandled J...*/]));
}

// public Marshaller New(ObjC.Object context) [static] :68
Marshaller* Marshaller::New1(uObject* context)
{
    Marshaller* obj1 = (Marshaller*)uNew(Marshaller_typeof());
    obj1->ctor_(context);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScriptCore/0.27.14/$.uno#3
// ---------------------------------------------------------------------------

// internal sealed extern class Object :444
// {
::g::Fuse::Scripting::Object_type* Object_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Object_type);
    type = (::g::Fuse::Scripting::Object_type*)uClassType::New("Fuse.Scripting.JavaScriptCore.Object", options);
    type->SetBase(::g::Fuse::Scripting::Object_typeof());
    type->fp_CallMethod = (void(*)(::g::Fuse::Scripting::Object*, uString*, uArray*, uObject**))Object__CallMethod_fn;
    type->fp_ContainsKey = (void(*)(::g::Fuse::Scripting::Object*, uString*, bool*))Object__ContainsKey_fn;
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Object*, ::g::Fuse::Scripting::Object*, bool*))Object__Equals2_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Object__GetHashCode_fn;
    type->fp_InstanceOf = (void(*)(::g::Fuse::Scripting::Object*, ::g::Fuse::Scripting::Function*, bool*))Object__InstanceOf_fn;
    type->fp_get_Item = (void(*)(::g::Fuse::Scripting::Object*, uString*, uObject**))Object__get_Item_fn;
    type->fp_set_Item = (void(*)(::g::Fuse::Scripting::Object*, uString*, uObject*))Object__set_Item_fn;
    type->fp_get_Keys = (void(*)(::g::Fuse::Scripting::Object*, uArray**))Object__get_Keys_fn;
    ::STRINGS[6] = uString::Const("Object.CallMethod.name");
    ::TYPES[0] = uObject_typeof();
    ::TYPES[11] = ::g::Fuse::Scripting::JavaScriptCore::Function_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::JavaScriptCore::Marshaller_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Object, _marshaller), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Scripting::JavaScriptCore::Object, _value), 0);
    return type;
}

// internal Object(Fuse.Scripting.JavaScriptCore.Marshaller marshaller, ObjC.Object value) :449
void Object__ctor_1_fn(Object* __this, ::g::Fuse::Scripting::JavaScriptCore::Marshaller* marshaller, uObject* value)
{
    __this->ctor_1(marshaller, value);
}

// public override sealed object CallMethod(string name, object[] args) :480
void Object__CallMethod_fn(Object* __this, uString* name, uArray* args, uObject** __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Object", "CallMethod(string,object[])");

    if (::g::Uno::String::op_Equality(name, NULL))
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[6/*"Object.Call...*/]));

    return *__retval = uPtr(__this->_marshaller)->Wrap(::g::Fuse::Scripting::JavaScriptCore::Context::InvokeMethodWithArguments(__this->_value, name, uPtr(__this->_marshaller)->Unwrap1(args))), void();
}

// public override sealed bool ContainsKey(string key) :486
void Object__ContainsKey_fn(Object* __this, uString* key, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Object", "ContainsKey(string)");
    return *__retval = ::g::Fuse::Scripting::JavaScriptCore::Context::HasProperty(__this->_value, key), void();
}

// public override sealed bool Equals(Fuse.Scripting.Object o) :491
void Object__Equals2_fn(Object* __this, ::g::Fuse::Scripting::Object* o, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Object", "Equals(Fuse.Scripting.Object)");
    return *__retval = uIs(o, Object_typeof()) && ::g::Uno::Object::Equals(uPtr(__this->_value), uPtr(uCast<Object*>(o, Object_typeof()))->_value), void();
}

// public override sealed int GetHashCode() :496
void Object__GetHashCode_fn(Object* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Object", "GetHashCode()");
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->_value)), void();
}

// public override sealed bool InstanceOf(Fuse.Scripting.Function type) :475
void Object__InstanceOf_fn(Object* __this, ::g::Fuse::Scripting::Function* type, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Object", "InstanceOf(Fuse.Scripting.Function)");
    return *__retval = uIs(type, ::TYPES[11/*Fuse.Scripting.JavaScriptCore.Function*/]) && ::g::Fuse::Scripting::JavaScriptCore::Context::IsInstanceOf(__this->_value, uPtr(uCast< ::g::Fuse::Scripting::JavaScriptCore::Function*>(type, ::TYPES[11/*Fuse.Scripting.JavaScriptCore.Function*/]))->_value), void();
}

// public override sealed object get_Item(string key) :457
void Object__get_Item_fn(Object* __this, uString* key, uObject** __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Object", "get_Item(string)");
    return *__retval = uPtr(__this->_marshaller)->Wrap(::g::Fuse::Scripting::JavaScriptCore::Context::ValueForProperty(__this->_value, key)), void();
}

// public override sealed void set_Item(string key, object value) :461
void Object__set_Item_fn(Object* __this, uString* key, uObject* value)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Object", "set_Item(string,object)");
    ::g::Fuse::Scripting::JavaScriptCore::Context::SetValueForProperty(__this->_value, uPtr(__this->_marshaller)->Unwrap(value), key);
}

// public override sealed string[] get_Keys() :469
void Object__get_Keys_fn(Object* __this, uArray** __retval)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Object", "get_Keys()");
    return *__retval = ::g::Fuse::Scripting::JavaScriptCore::Context::GetKeys(__this->_value), void();
}

// internal Object New(Fuse.Scripting.JavaScriptCore.Marshaller marshaller, ObjC.Object value) :449
void Object__New1_fn(::g::Fuse::Scripting::JavaScriptCore::Marshaller* marshaller, uObject* value, Object** __retval)
{
    *__retval = Object::New1(marshaller, value);
}

// internal Object(Fuse.Scripting.JavaScriptCore.Marshaller marshaller, ObjC.Object value) [instance] :449
void Object::ctor_1(::g::Fuse::Scripting::JavaScriptCore::Marshaller* marshaller, uObject* value)
{
    uStackFrame __("Fuse.Scripting.JavaScriptCore.Object", ".ctor(Fuse.Scripting.JavaScriptCore.Marshaller,ObjC.Object)");
    ctor_();
    _marshaller = marshaller;
    _value = value;
}

// internal Object New(Fuse.Scripting.JavaScriptCore.Marshaller marshaller, ObjC.Object value) [static] :449
Object* Object::New1(::g::Fuse::Scripting::JavaScriptCore::Marshaller* marshaller, uObject* value)
{
    Object* obj1 = (Object*)uNew(Object_typeof());
    obj1->ctor_1(marshaller, value);
    return obj1;
}
// }

}}}} // ::g::Fuse::Scripting::JavaScriptCore
