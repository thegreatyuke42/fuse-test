// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.BoolChangedArgs.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.CodeModule.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.DoubleChangedArgs.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.ExecutionThread.h>
#include <Fuse.Scripting.External.h>
#include <Fuse.Scripting.FactoryClosure-1.h>
#include <Fuse.Scripting.FileModule.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.IEventSerializer.h>
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.IScriptEvent.h>
#include <Fuse.Scripting.JSCallback.ActionClosure.h>
#include <Fuse.Scripting.JSCallback.ActionClosure-1.h>
#include <Fuse.Scripting.JSCallback.ActionClosure-2.h>
#include <Fuse.Scripting.JSCallback.FuncClosure-1.h>
#include <Fuse.Scripting.JSCallback.FuncClosure-2.h>
#include <Fuse.Scripting.JSCallback.FuncClosure-3.h>
#include <Fuse.Scripting.JSCallback.h>
#include <Fuse.Scripting.JSCallback.NumberConverter.h>
#include <Fuse.Scripting.JSFileSource.h>
#include <Fuse.Scripting.Marshal.h>
#include <Fuse.Scripting.Module.h>
#include <Fuse.Scripting.ModuleResult.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeEvent.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeFunction.NativeFunctionClosure.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Fuse.Scripting.NativePromise-2.ContextClosure.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.NativePromise-2.PromiseClosure.h>
#include <Fuse.Scripting.NativeProperty-2.h>
#include <Fuse.Scripting.NodeCallback.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ResultConverter-2.h>
#include <Fuse.Scripting.ResultFactory-1.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptException.h>
#include <Fuse.Scripting.ScriptMethod.h>
#include <Fuse.Scripting.ScriptMethod-1.h>
#include <Fuse.Scripting.ScriptModule.h>
#include <Fuse.Scripting.ScriptModule.RequireContext.h>
#include <Fuse.Scripting.StringChangedArgs.h>
#include <Fuse.Scripting.Value.h>
#include <Fuse.Scripting.ValueConverter-2.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.ArgumentException.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.Queue-1.h>
#include <Uno.Color.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.Enum.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Func-1.h>
#include <Uno.Func-2.h>
#include <Uno.Func-3.h>
#include <Uno.Int.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.File.h>
#include <Uno.IO.Path.h>
#include <Uno.IO.Stream.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.Short.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Threading.ConcurrentDictionary-2.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.IDispatcherExtensions.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.Threading.Thread.h>
#include <Uno.Type.h>
#include <Uno.UInt.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
static uString* STRINGS[50];
static uType* TYPES[79];

namespace g{
namespace Fuse{
namespace Scripting{

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#12
// -------------------------------------------------------------

// private sealed class JSCallback.ActionClosure :1365
// {
uType* JSCallback__ActionClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(JSCallback__ActionClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JSCallback.ActionClosure", options);
    ::TYPES[0] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Scripting::JSCallback__ActionClosure, _action), 0);
    return type;
}

// public ActionClosure(Uno.Action action) :1369
void JSCallback__ActionClosure__ctor__fn(JSCallback__ActionClosure* __this, uDelegate* action)
{
    __this->ctor_(action);
}

// public ActionClosure New(Uno.Action action) :1369
void JSCallback__ActionClosure__New1_fn(uDelegate* action, JSCallback__ActionClosure** __retval)
{
    *__retval = JSCallback__ActionClosure::New1(action);
}

// public object Run(object[] args) :1374
void JSCallback__ActionClosure__Run_fn(JSCallback__ActionClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public ActionClosure(Uno.Action action) [instance] :1369
void JSCallback__ActionClosure::ctor_(uDelegate* action)
{
    uStackFrame __("Fuse.Scripting.JSCallback.ActionClosure", ".ctor(Uno.Action)");
    _action = action;
}

// public object Run(object[] args) [instance] :1374
uObject* JSCallback__ActionClosure::Run(uArray* args)
{
    uStackFrame __("Fuse.Scripting.JSCallback.ActionClosure", "Run(object[])");
    uPtr(_action)->InvokeVoid();
    return NULL;
}

// public ActionClosure New(Uno.Action action) [static] :1369
JSCallback__ActionClosure* JSCallback__ActionClosure::New1(uDelegate* action)
{
    JSCallback__ActionClosure* obj1 = (JSCallback__ActionClosure*)uNew(JSCallback__ActionClosure_typeof());
    obj1->ctor_(action);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#12
// -------------------------------------------------------------

// private sealed class JSCallback.ActionClosure<T> :1381
// {
uType* JSCallback__ActionClosure1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(JSCallback__ActionClosure1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JSCallback.ActionClosure`1", options);
    ::STRINGS[0] = uString::Const("First argument should be of type ");
    ::STRINGS[1] = uString::Const(" value was ");
    ::TYPES[1] = ::g::Fuse::Scripting::JSCallback_typeof();
    ::TYPES[2] = ::g::Uno::Action1_typeof();
    ::TYPES[3] = uObject_typeof();
    type->SetPrecalc(
        ::TYPES[1/*Fuse.Scripting.JSCallback*/]->MakeMethod(1, type->T(0)),
        ::TYPES[2/*Uno.Action`1*/]->MakeType(type->T(0)));
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Scripting::JSCallback__ActionClosure1, _action), 0);
    return type;
}

// public ActionClosure(Uno.Action<T> action) :1385
void JSCallback__ActionClosure1__ctor__fn(JSCallback__ActionClosure1* __this, uDelegate* action)
{
    __this->ctor_(action);
}

// public ActionClosure New(Uno.Action<T> action) :1385
void JSCallback__ActionClosure1__New1_fn(uType* __type, uDelegate* action, JSCallback__ActionClosure1** __retval)
{
    *__retval = JSCallback__ActionClosure1::New1(__type, action);
}

// public object Run(object[] args) :1390
void JSCallback__ActionClosure1__Run_fn(JSCallback__ActionClosure1* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public ActionClosure(Uno.Action<T> action) [instance] :1385
void JSCallback__ActionClosure1::ctor_(uDelegate* action)
{
    uStackFrame __("Fuse.Scripting.JSCallback.ActionClosure`1", ".ctor(Uno.Action<T>)");
    _action = action;
}

// public object Run(object[] args) [instance] :1390
uObject* JSCallback__ActionClosure1::Run(uArray* args)
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(0/*Fuse.Scripting.JSCallback.GetArg<T>*/),
        __type->Precalced(1/*Uno.Action<T>*/),
    };
    uStackFrame __("Fuse.Scripting.JSCallback.ActionClosure`1", "Run(object[])");
    uT arg(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret2;
    arg = uT(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if ((::g::Fuse::Scripting::JSCallback__GetArg_fn(__types[1], args, &arg, uCRef<int>(0), &ret2), ret2))
        uPtr(_action)->InvokeVoid(arg);
    else
        U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[0/*"First argum...*/], __types[0]), ::STRINGS[1/*" value was "*/]), uPtr(args)->Strong<uObject*>(0))));

    return NULL;
}

// public ActionClosure New(Uno.Action<T> action) [static] :1385
JSCallback__ActionClosure1* JSCallback__ActionClosure1::New1(uType* __type, uDelegate* action)
{
    JSCallback__ActionClosure1* obj1 = (JSCallback__ActionClosure1*)uNew(__type);
    obj1->ctor_(action);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#12
// -------------------------------------------------------------

// private sealed class JSCallback.ActionClosure<T1, T2> :1402
// {
uType* JSCallback__ActionClosure2_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 2;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(JSCallback__ActionClosure2);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JSCallback.ActionClosure`2", options);
    ::STRINGS[0] = uString::Const("First argument should be of type ");
    ::TYPES[1] = ::g::Fuse::Scripting::JSCallback_typeof();
    ::TYPES[4] = ::g::Uno::Action2_typeof();
    ::TYPES[3] = uObject_typeof();
    type->SetPrecalc(
        ::TYPES[1/*Fuse.Scripting.JSCallback*/]->MakeMethod(1, type->T(0)),
        ::TYPES[1/*Fuse.Scripting.JSCallback*/]->MakeMethod(1, type->T(1)),
        ::TYPES[4/*Uno.Action`2*/]->MakeType(type->T(0), type->T(1)));
    type->SetFields(0,
        ::g::Uno::Action2_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Fuse::Scripting::JSCallback__ActionClosure2, _action), 0);
    return type;
}

// public ActionClosure(Uno.Action<T1, T2> action) :1406
void JSCallback__ActionClosure2__ctor__fn(JSCallback__ActionClosure2* __this, uDelegate* action)
{
    __this->ctor_(action);
}

// public ActionClosure New(Uno.Action<T1, T2> action) :1406
void JSCallback__ActionClosure2__New1_fn(uType* __type, uDelegate* action, JSCallback__ActionClosure2** __retval)
{
    *__retval = JSCallback__ActionClosure2::New1(__type, action);
}

// public object Run(object[] args) :1411
void JSCallback__ActionClosure2__Run_fn(JSCallback__ActionClosure2* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public ActionClosure(Uno.Action<T1, T2> action) [instance] :1406
void JSCallback__ActionClosure2::ctor_(uDelegate* action)
{
    uStackFrame __("Fuse.Scripting.JSCallback.ActionClosure`2", ".ctor(Uno.Action<T1, T2>)");
    _action = action;
}

// public object Run(object[] args) [instance] :1411
uObject* JSCallback__ActionClosure2::Run(uArray* args)
{
    uType* __types[] = {
        __type->T(0),
        __type->T(1),
        __type->Precalced(0/*Fuse.Scripting.JSCallback.GetArg<T1>*/),
        __type->Precalced(1/*Fuse.Scripting.JSCallback.GetArg<T2>*/),
        __type->Precalced(2/*Uno.Action<T1, T2>*/),
    };
    uStackFrame __("Fuse.Scripting.JSCallback.ActionClosure`2", "Run(object[])");
    uT arg(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT arg1(__types[1], U_ALLOCA(__types[1]->ValueSize));
    bool ret2;
    bool ret3;
    arg = uT(__types[0], U_ALLOCA(__types[0]->ValueSize));
    arg1 = uT(__types[1], U_ALLOCA(__types[1]->ValueSize));

    if ((::g::Fuse::Scripting::JSCallback__GetArg_fn(__types[2], args, &arg, uCRef<int>(0), &ret2), ret2) && (::g::Fuse::Scripting::JSCallback__GetArg_fn(__types[3], args, &arg1, uCRef<int>(1), &ret3), ret3))
        uPtr(_action)->Invoke(2, (void*)arg, (void*)arg1);
    else
        U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition1(::STRINGS[0/*"First argum...*/], __types[0])));

    return NULL;
}

// public ActionClosure New(Uno.Action<T1, T2> action) [static] :1406
JSCallback__ActionClosure2* JSCallback__ActionClosure2::New1(uType* __type, uDelegate* action)
{
    JSCallback__ActionClosure2* obj1 = (JSCallback__ActionClosure2*)uNew(__type);
    obj1->ctor_(action);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#11
// -------------------------------------------------------------

// public abstract class Array :1243
// {
Array_type* Array_typeof()
{
    static uSStrong<Array_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Array);
    options.TypeSize = sizeof(Array_type);
    type = (Array_type*)uClassType::New("Fuse.Scripting.Array", options);
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Array__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Array__GetHashCode_fn;
    type->Reflection.SetFunctions(4,
        new uFunction("Equals", NULL, NULL, offsetof(Array_type, fp_Equals2), false, ::g::Uno::Bool_typeof(), 1, Array_typeof()),
        new uFunction("get_Item", NULL, NULL, offsetof(Array_type, fp_get_Item), false, uObject_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("set_Item", NULL, NULL, offsetof(Array_type, fp_set_Item), false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), uObject_typeof()),
        new uFunction("get_Length", NULL, NULL, offsetof(Array_type, fp_get_Length), false, ::g::Uno::Int_typeof(), 0));
    return type;
}

// protected generated Array() :1243
void Array__ctor__fn(Array* __this)
{
    __this->ctor_();
}

// public override sealed bool Equals(object o) :1249
void Array__Equals_fn(Array* __this, uObject* o, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.Array", "Equals(object)");
    Array* a = uAs<Array*>(o, Array_typeof());
    return *__retval = (a != NULL) && __this->Equals2(a), void();
}

// public override int GetHashCode() :1255
void Array__GetHashCode_fn(Array* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.Array", "GetHashCode()");
    int ret1;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(__this, &ret1), ret1), void();
}

// protected generated Array() [instance] :1243
void Array::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/Scripting/$.uno
// --------------------------------------------------------------

// public sealed class BoolChangedArgs :43
// {
BoolChangedArgs_type* BoolChangedArgs_typeof()
{
    static uSStrong<BoolChangedArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BoolChangedArgs);
    options.TypeSize = sizeof(BoolChangedArgs_type);
    type = (BoolChangedArgs_type*)uClassType::New("Fuse.Scripting.BoolChangedArgs", options);
    type->SetBase(::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))BoolChangedArgs__FuseScriptingIScriptEventSerialize_fn;
    ::STRINGS[2] = uString::Const("value");
    ::TYPES[5] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Bool_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(BoolChangedArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)BoolChangedArgs__New4_fn, 0, true, BoolChangedArgs_typeof(), 2, ::g::Uno::Bool_typeof(), uObject_typeof()));
    return type;
}

// public BoolChangedArgs(bool value, object origin) :45
void BoolChangedArgs__ctor_3_fn(BoolChangedArgs* __this, bool* value, uObject* origin)
{
    __this->ctor_3(*value, origin);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :49
void BoolChangedArgs__FuseScriptingIScriptEventSerialize_fn(BoolChangedArgs* __this, uObject* s)
{
    uStackFrame __("Fuse.Scripting.BoolChangedArgs", "Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer)");
    bool ret2;
    ::g::Fuse::Scripting::IEventSerializer::AddBool(uInterface(uPtr(s), ::g::Fuse::Scripting::IEventSerializer_typeof()), ::STRINGS[2/*"value"*/], (::g::Uno::UX::ValueChangedArgs__get_Value_fn(__this, &ret2), ret2));
}

// public BoolChangedArgs New(bool value, object origin) :45
void BoolChangedArgs__New4_fn(bool* value, uObject* origin, BoolChangedArgs** __retval)
{
    *__retval = BoolChangedArgs::New4(*value, origin);
}

// public BoolChangedArgs(bool value, object origin) [instance] :45
void BoolChangedArgs::ctor_3(bool value, uObject* origin)
{
    uStackFrame __("Fuse.Scripting.BoolChangedArgs", ".ctor(bool,object)");
    ::g::Uno::UX::ValueChangedArgs__ctor_1_fn(this, uCRef(value), origin);
}

// public BoolChangedArgs New(bool value, object origin) [static] :45
BoolChangedArgs* BoolChangedArgs::New4(bool value, uObject* origin)
{
    BoolChangedArgs* obj1 = (BoolChangedArgs*)uNew(BoolChangedArgs_typeof());
    obj1->ctor_3(value, origin);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#11
// -------------------------------------------------------------

// public delegate object Callback(object[] args) :1321
uDelegateType* Callback_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.Callback", 1, 0);
    type->SetSignature(uObject_typeof(),
        uObject_typeof()->Array());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#3
// ------------------------------------------------------------

// public sealed class CodeModule :503
// {
::g::Fuse::Scripting::Module_type* CodeModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Module_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CodeModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Module_type);
    type = (::g::Fuse::Scripting::Module_type*)uClassType::New("Fuse.Scripting.CodeModule", options);
    type->SetBase(::g::Fuse::Scripting::ScriptModule_typeof());
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    ::TYPES[6] = ::g::Fuse::Scripting::ScriptModule_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::Module_type, interface0));
    type->SetFields(7);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)CodeModule__New2_fn, 0, true, CodeModule_typeof(), 4, ::g::Uno::IO::Bundle_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Int_typeof()));
    return type;
}

// public CodeModule(Uno.IO.Bundle bundle, string fileName, string code, int lineNumberOffset) :505
void CodeModule__ctor_2_fn(CodeModule* __this, ::g::Uno::IO::Bundle* bundle, uString* fileName, uString* code, int* lineNumberOffset)
{
    __this->ctor_2(bundle, fileName, code, *lineNumberOffset);
}

// public CodeModule New(Uno.IO.Bundle bundle, string fileName, string code, int lineNumberOffset) :505
void CodeModule__New2_fn(::g::Uno::IO::Bundle* bundle, uString* fileName, uString* code, int* lineNumberOffset, CodeModule** __retval)
{
    *__retval = CodeModule::New2(bundle, fileName, code, *lineNumberOffset);
}

// public CodeModule(Uno.IO.Bundle bundle, string fileName, string code, int lineNumberOffset) [instance] :505
void CodeModule::ctor_2(::g::Uno::IO::Bundle* bundle, uString* fileName, uString* code, int lineNumberOffset)
{
    uStackFrame __("Fuse.Scripting.CodeModule", ".ctor(Uno.IO.Bundle,string,string,int)");
    ctor_1(NULL, NULL);
    Bundle(bundle);
    FileName(fileName);
    Code(code);
    LineNumberOffset(lineNumberOffset);
}

// public CodeModule New(Uno.IO.Bundle bundle, string fileName, string code, int lineNumberOffset) [static] :505
CodeModule* CodeModule::New2(::g::Uno::IO::Bundle* bundle, uString* fileName, uString* code, int lineNumberOffset)
{
    CodeModule* obj1 = (CodeModule*)uNew(CodeModule_typeof());
    obj1->ctor_2(bundle, fileName, code, lineNumberOffset);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno
// ----------------------------------------------------------

// public abstract class Context :90
// {
Context_type* Context_typeof()
{
    static uSStrong<Context_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Context);
    options.TypeSize = sizeof(Context_type);
    type = (Context_type*)uClassType::New("Fuse.Scripting.Context", options);
    ::STRINGS[3] = uString::Const("(no file)");
    ::STRINGS[4] = uString::Const("new Array(");
    ::STRINGS[5] = uString::Const(")");
    ::STRINGS[6] = uString::Const("new Object()");
    ::STRINGS[7] = uString::Const("Object.create");
    ::STRINGS[8] = uString::Const("");
    ::STRINGS[9] = uString::Const("(function(obj, name, getCallback, setCallback, e, c) { Object.defineProperty(obj, name, { get: getCallback, set: setCallback, enumerable: e, configurable: c }); })");
    ::STRINGS[10] = uString::Const("(function(obj, name, value, e, c) { Object.defineProperty(obj, name, { value: value, enumerable: e, configurable: c }); })");
    ::TYPES[7] = ::g::Uno::Threading::ConcurrentDictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Scripting::ModuleResult_typeof());
    ::TYPES[8] = ::g::Fuse::Scripting::ModuleResult_typeof();
    ::TYPES[9] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[10] = uObject_typeof()->Array();
    ::TYPES[11] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[12] = ::g::Fuse::Scripting::Function_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Context_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::ConcurrentDictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Scripting::ModuleResult_typeof()), offsetof(::g::Fuse::Scripting::Context, _moduleResults), 0,
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(::g::Fuse::Scripting::Context, Dispatcher), 0);
    type->Reflection.SetFields(1,
        new uField("Dispatcher", 1));
    type->Reflection.SetFunctions(8,
        new uFunction("Dispose", NULL, NULL, offsetof(Context_type, fp_Dispose), false, uVoid_typeof(), 0),
        new uFunction("Evaluate", NULL, NULL, offsetof(Context_type, fp_Evaluate), false, uObject_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("get_GlobalObject", NULL, NULL, offsetof(Context_type, fp_get_GlobalObject), false, ::g::Fuse::Scripting::Object_typeof(), 0),
        new uFunction("NewArray", NULL, (void*)Context__NewArray_fn, 0, false, ::g::Fuse::Scripting::Array_typeof(), 1, uObject_typeof()->Array()),
        new uFunction("NewObject", NULL, (void*)Context__NewObject_fn, 0, false, ::g::Fuse::Scripting::Object_typeof(), 0),
        new uFunction("ObjectCreate", NULL, (void*)Context__ObjectCreate_fn, 0, false, ::g::Fuse::Scripting::Object_typeof(), 1, uObject_typeof()->Array()),
        new uFunction("ObjectDefineProperty", NULL, (void*)Context__ObjectDefineProperty_fn, 0, false, uVoid_typeof(), 6, ::g::Fuse::Scripting::Object_typeof(), ::g::Uno::String_typeof(), ::g::Fuse::Scripting::Callback_typeof(), ::g::Fuse::Scripting::Callback_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("ObjectDefineProperty", NULL, (void*)Context__ObjectDefineProperty1_fn, 0, false, uVoid_typeof(), 5, ::g::Fuse::Scripting::Object_typeof(), ::g::Uno::String_typeof(), uObject_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()));
    return type;
}

// protected Context(Uno.Threading.IDispatcher ownerThread) :136
void Context__ctor__fn(Context* __this, uObject* ownerThread)
{
    __this->ctor_(ownerThread);
}

// internal void DeleteGlobalModuleResult(Fuse.Scripting.ModuleResult mr) :109
void Context__DeleteGlobalModuleResult_fn(Context* __this, ::g::Fuse::Scripting::ModuleResult* mr)
{
    __this->DeleteGlobalModuleResult(mr);
}

// public Fuse.Scripting.Array NewArray(object[] values) :167
void Context__NewArray_fn(Context* __this, uArray* values, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->NewArray(values);
}

// public Fuse.Scripting.Object NewObject() :162
void Context__NewObject_fn(Context* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->NewObject();
}

// public Fuse.Scripting.Object ObjectCreate(object[] args) :153
void Context__ObjectCreate_fn(Context* __this, uArray* args, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->ObjectCreate(args);
}

// public void ObjectDefineProperty(Fuse.Scripting.Object obj, string name, Fuse.Scripting.Callback getProperty, Fuse.Scripting.Callback setProperty, [bool enumerable], [bool configurable]) :141
void Context__ObjectDefineProperty_fn(Context* __this, ::g::Fuse::Scripting::Object* obj, uString* name, uDelegate* getProperty, uDelegate* setProperty, bool* enumerable, bool* configurable)
{
    __this->ObjectDefineProperty(obj, name, getProperty, setProperty, *enumerable, *configurable);
}

// public void ObjectDefineProperty(Fuse.Scripting.Object obj, string name, object value, [bool enumerable], [bool configurable]) :147
void Context__ObjectDefineProperty1_fn(Context* __this, ::g::Fuse::Scripting::Object* obj, uString* name, uObject* value, bool* enumerable, bool* configurable)
{
    __this->ObjectDefineProperty1(obj, name, value, *enumerable, *configurable);
}

// internal void RegisterGlobalModuleResult(Fuse.Scripting.ModuleResult result) :94
void Context__RegisterGlobalModuleResult_fn(Context* __this, ::g::Fuse::Scripting::ModuleResult* result)
{
    __this->RegisterGlobalModuleResult(result);
}

// internal Fuse.Scripting.ModuleResult TryGetGlobalModuleResult(string id) :101
void Context__TryGetGlobalModuleResult_fn(Context* __this, uString* id, ::g::Fuse::Scripting::ModuleResult** __retval)
{
    *__retval = __this->TryGetGlobalModuleResult(id);
}

// protected Context(Uno.Threading.IDispatcher ownerThread) [instance] :136
void Context::ctor_(uObject* ownerThread)
{
    uStackFrame __("Fuse.Scripting.Context", ".ctor(Uno.Threading.IDispatcher)");
    _moduleResults = ((::g::Uno::Threading::ConcurrentDictionary*)::g::Uno::Threading::ConcurrentDictionary::New1(::TYPES[7/*Uno.Threading.ConcurrentDictionary<string, Fuse.Scripting.ModuleResult>*/]));
    Dispatcher = ownerThread;
}

// internal void DeleteGlobalModuleResult(Fuse.Scripting.ModuleResult mr) [instance] :109
void Context::DeleteGlobalModuleResult(::g::Fuse::Scripting::ModuleResult* mr)
{
    uStackFrame __("Fuse.Scripting.Context", "DeleteGlobalModuleResult(Fuse.Scripting.ModuleResult)");
    bool ret1;
    bool ret2;

    if (::g::Uno::String::op_Equality(uPtr(mr)->Id, NULL))
        return;

    if ((::g::Uno::Threading::ConcurrentDictionary__ContainsKey_fn(uPtr(_moduleResults), uPtr(mr)->Id, &ret1), ret1))
        ::g::Uno::Threading::ConcurrentDictionary__Remove_fn(uPtr(_moduleResults), uPtr(mr)->Id, &ret2);
}

// public Fuse.Scripting.Array NewArray(object[] values) [instance] :167
::g::Fuse::Scripting::Array* Context::NewArray(uArray* values)
{
    uStackFrame __("Fuse.Scripting.Context", "NewArray(object[])");
    ::g::Fuse::Scripting::Array* a = uCast< ::g::Fuse::Scripting::Array*>(Evaluate(::STRINGS[3/*"(no file)"*/], ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[4/*"new Array("*/], uBox<int>(::TYPES[35/*int*/], uPtr(values)->Length())), ::STRINGS[5/*")"*/])), ::TYPES[9/*Fuse.Scripting.Array*/]);

    for (int i = 0; i < values->Length(); i++)
        uPtr(a)->Item(i, values->Strong<uObject*>(i));

    return a;
}

// public Fuse.Scripting.Object NewObject() [instance] :162
::g::Fuse::Scripting::Object* Context::NewObject()
{
    uStackFrame __("Fuse.Scripting.Context", "NewObject()");
    return uCast< ::g::Fuse::Scripting::Object*>(Evaluate(::STRINGS[3/*"(no file)"*/], ::STRINGS[6/*"new Object()"*/]), ::TYPES[11/*Fuse.Scripting.Object*/]);
}

// public Fuse.Scripting.Object ObjectCreate(object[] args) [instance] :153
::g::Fuse::Scripting::Object* Context::ObjectCreate(uArray* args)
{
    uStackFrame __("Fuse.Scripting.Context", "ObjectCreate(object[])");
    ::g::Fuse::Scripting::Function* objectCreate = uAs< ::g::Fuse::Scripting::Function*>(Evaluate(::STRINGS[3/*"(no file)"*/], ::STRINGS[7/*"Object.create"*/]), ::TYPES[12/*Fuse.Scripting.Function*/]);

    if (objectCreate != NULL)
        return uAs< ::g::Fuse::Scripting::Object*>(uPtr(objectCreate)->Call(args), ::TYPES[11/*Fuse.Scripting.Object*/]);

    return NULL;
}

// public void ObjectDefineProperty(Fuse.Scripting.Object obj, string name, Fuse.Scripting.Callback getProperty, Fuse.Scripting.Callback setProperty, [bool enumerable], [bool configurable]) [instance] :141
void Context::ObjectDefineProperty(::g::Fuse::Scripting::Object* obj, uString* name, uDelegate* getProperty, uDelegate* setProperty, bool enumerable, bool configurable)
{
    uStackFrame __("Fuse.Scripting.Context", "ObjectDefineProperty(Fuse.Scripting.Object,string,Fuse.Scripting.Callback,Fuse.Scripting.Callback,[bool],[bool])");
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(Evaluate(::STRINGS[8/*""*/], ::STRINGS[9/*"(function(o...*/]), ::TYPES[12/*Fuse.Scripting.Function*/]);
    uPtr(func)->Call(uArray::Init<uObject*>(::TYPES[10/*object[]*/], 6, obj, name, getProperty, setProperty, uBox(::TYPES[31/*bool*/], enumerable), uBox(::TYPES[31/*bool*/], configurable)));
}

// public void ObjectDefineProperty(Fuse.Scripting.Object obj, string name, object value, [bool enumerable], [bool configurable]) [instance] :147
void Context::ObjectDefineProperty1(::g::Fuse::Scripting::Object* obj, uString* name, uObject* value, bool enumerable, bool configurable)
{
    uStackFrame __("Fuse.Scripting.Context", "ObjectDefineProperty(Fuse.Scripting.Object,string,object,[bool],[bool])");
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(Evaluate(::STRINGS[8/*""*/], ::STRINGS[10/*"(function(o...*/]), ::TYPES[12/*Fuse.Scripting.Function*/]);
    uPtr(func)->Call(uArray::Init<uObject*>(::TYPES[10/*object[]*/], 5, obj, name, value, uBox(::TYPES[31/*bool*/], enumerable), uBox(::TYPES[31/*bool*/], configurable)));
}

// internal void RegisterGlobalModuleResult(Fuse.Scripting.ModuleResult result) [instance] :94
void Context::RegisterGlobalModuleResult(::g::Fuse::Scripting::ModuleResult* result)
{
    uStackFrame __("Fuse.Scripting.Context", "RegisterGlobalModuleResult(Fuse.Scripting.ModuleResult)");

    if (::g::Uno::String::op_Equality(uPtr(result)->Id, NULL))
        return;

    ::g::Uno::Threading::ConcurrentDictionary__Add_fn(uPtr(_moduleResults), uPtr(result)->Id, result);
}

// internal Fuse.Scripting.ModuleResult TryGetGlobalModuleResult(string id) [instance] :101
::g::Fuse::Scripting::ModuleResult* Context::TryGetGlobalModuleResult(uString* id)
{
    uStackFrame __("Fuse.Scripting.Context", "TryGetGlobalModuleResult(string)");
    bool ret3;
    ::g::Fuse::Scripting::ModuleResult* ret4;

    if (::g::Uno::String::op_Equality(id, NULL))
        return NULL;

    if ((::g::Uno::Threading::ConcurrentDictionary__ContainsKey_fn(uPtr(_moduleResults), id, &ret3), ret3))
        return (::g::Uno::Threading::ConcurrentDictionary__get_Item_fn(uPtr(_moduleResults), id, &ret4), ret4);

    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#6
// ------------------------------------------------------------

// private sealed class NativePromise<T, TJSResult>.ContextClosure :887
// {
uType* NativePromise__ContextClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 2;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(NativePromise__ContextClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.NativePromise`2.ContextClosure", options);
    ::STRINGS[11] = uString::Const("Promise");
    ::TYPES[12] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[11] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[13] = ::g::Fuse::Scripting::Context_typeof();
    ::TYPES[14] = ::g::Fuse::Scripting::FutureFactory_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[10] = uObject_typeof()->Array();
    ::TYPES[15] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[16] = ::g::Fuse::Scripting::NativePromise__PromiseClosure_typeof();
    type->SetPrecalc(
        ::TYPES[14/*Fuse.Scripting.FutureFactory`1*/]->MakeType(type->T(0)),
        ::TYPES[16/*Fuse.Scripting.NativePromise`2.PromiseClosure*/]->MakeType(type->T(0), type->T(1)));
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Scripting::NativePromise__ContextClosure, _c), 0,
        ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Fuse::Scripting::NativePromise__ContextClosure, _converter), 0,
        ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Scripting::NativePromise__ContextClosure, _factory), 0);
    return type;
}

// public ContextClosure(Fuse.Scripting.Context c, Fuse.Scripting.FutureFactory<T> factory, Fuse.Scripting.ResultConverter<T, TJSResult> converter) :892
void NativePromise__ContextClosure__ctor__fn(NativePromise__ContextClosure* __this, ::g::Fuse::Scripting::Context* c, uDelegate* factory, uDelegate* converter)
{
    __this->ctor_(c, factory, converter);
}

// internal object CreatePromise(object[] args) :898
void NativePromise__ContextClosure__CreatePromise_fn(NativePromise__ContextClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->CreatePromise(args);
}

// public ContextClosure New(Fuse.Scripting.Context c, Fuse.Scripting.FutureFactory<T> factory, Fuse.Scripting.ResultConverter<T, TJSResult> converter) :892
void NativePromise__ContextClosure__New1_fn(uType* __type, ::g::Fuse::Scripting::Context* c, uDelegate* factory, uDelegate* converter, NativePromise__ContextClosure** __retval)
{
    *__retval = NativePromise__ContextClosure::New1(__type, c, factory, converter);
}

// public ContextClosure(Fuse.Scripting.Context c, Fuse.Scripting.FutureFactory<T> factory, Fuse.Scripting.ResultConverter<T, TJSResult> converter) [instance] :892
void NativePromise__ContextClosure::ctor_(::g::Fuse::Scripting::Context* c, uDelegate* factory, uDelegate* converter)
{
    uStackFrame __("Fuse.Scripting.NativePromise`2.ContextClosure", ".ctor(Fuse.Scripting.Context,Fuse.Scripting.FutureFactory<T>,Fuse.Scripting.ResultConverter<T, TJSResult>)");
    _c = c;
    _factory = factory;
    _converter = converter;
}

// internal object CreatePromise(object[] args) [instance] :898
uObject* NativePromise__ContextClosure::CreatePromise(uArray* args)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Scripting.FutureFactory<T>*/),
        __type->T(0),
        __type->Precalced(1/*Fuse.Scripting.NativePromise<T, TJSResult>.PromiseClosure*/),
        __type->T(1),
    };
    uStackFrame __("Fuse.Scripting.NativePromise`2.ContextClosure", "CreatePromise(object[])");
    ::g::Fuse::Scripting::Function* promise = uCast< ::g::Fuse::Scripting::Function*>(uPtr(uPtr(_c)->GlobalObject())->Item(::STRINGS[11/*"Promise"*/]), ::TYPES[12/*Fuse.Scripting.Function*/]);
    ::g::Uno::Threading::Future1* future = (::g::Uno::Threading::Future1*)uPtr(_factory)->Invoke(1, args);
    return uPtr(promise)->Construct(uArray::Init<uObject*>(::TYPES[10/*object[]*/], 1, uDelegate::New(::TYPES[15/*Fuse.Scripting.Callback*/], (void*)::g::Fuse::Scripting::NativePromise__PromiseClosure__Run_fn, ::g::Fuse::Scripting::NativePromise__PromiseClosure::New1(__types[2], _c, future, _converter))));
}

// public ContextClosure New(Fuse.Scripting.Context c, Fuse.Scripting.FutureFactory<T> factory, Fuse.Scripting.ResultConverter<T, TJSResult> converter) [static] :892
NativePromise__ContextClosure* NativePromise__ContextClosure::New1(uType* __type, ::g::Fuse::Scripting::Context* c, uDelegate* factory, uDelegate* converter)
{
    NativePromise__ContextClosure* obj1 = (NativePromise__ContextClosure*)uNew(__type);
    obj1->ctor_(c, factory, converter);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/Scripting/$.uno
// --------------------------------------------------------------

// public sealed class DoubleChangedArgs :31
// {
DoubleChangedArgs_type* DoubleChangedArgs_typeof()
{
    static uSStrong<DoubleChangedArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DoubleChangedArgs);
    options.TypeSize = sizeof(DoubleChangedArgs_type);
    type = (DoubleChangedArgs_type*)uClassType::New("Fuse.Scripting.DoubleChangedArgs", options);
    type->SetBase(::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Double_typeof()));
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))DoubleChangedArgs__FuseScriptingIScriptEventSerialize_fn;
    ::STRINGS[2] = uString::Const("value");
    ::TYPES[17] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Double_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(DoubleChangedArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DoubleChangedArgs__New4_fn, 0, true, DoubleChangedArgs_typeof(), 2, ::g::Uno::Double_typeof(), uObject_typeof()));
    return type;
}

// public DoubleChangedArgs(double value, object origin) :33
void DoubleChangedArgs__ctor_3_fn(DoubleChangedArgs* __this, double* value, uObject* origin)
{
    __this->ctor_3(*value, origin);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :37
void DoubleChangedArgs__FuseScriptingIScriptEventSerialize_fn(DoubleChangedArgs* __this, uObject* s)
{
    uStackFrame __("Fuse.Scripting.DoubleChangedArgs", "Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer)");
    double ret2;
    ::g::Fuse::Scripting::IEventSerializer::AddDouble(uInterface(uPtr(s), ::g::Fuse::Scripting::IEventSerializer_typeof()), ::STRINGS[2/*"value"*/], (::g::Uno::UX::ValueChangedArgs__get_Value_fn(__this, &ret2), ret2));
}

// public DoubleChangedArgs New(double value, object origin) :33
void DoubleChangedArgs__New4_fn(double* value, uObject* origin, DoubleChangedArgs** __retval)
{
    *__retval = DoubleChangedArgs::New4(*value, origin);
}

// public DoubleChangedArgs(double value, object origin) [instance] :33
void DoubleChangedArgs::ctor_3(double value, uObject* origin)
{
    uStackFrame __("Fuse.Scripting.DoubleChangedArgs", ".ctor(double,object)");
    ::g::Uno::UX::ValueChangedArgs__ctor_1_fn(this, uCRef(value), origin);
}

// public DoubleChangedArgs New(double value, object origin) [static] :33
DoubleChangedArgs* DoubleChangedArgs::New4(double value, uObject* origin)
{
    DoubleChangedArgs* obj1 = (DoubleChangedArgs*)uNew(DoubleChangedArgs_typeof());
    obj1->ctor_3(value, origin);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#11
// -------------------------------------------------------------

// public sealed class Error :1226
// {
::g::Uno::Exception_type* Error_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Error);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Fuse.Scripting.Error", options);
    type->SetBase(::g::Uno::Exception_typeof());
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Error__New4_fn, 0, true, Error_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}

// public Error(string message) :1228
void Error__ctor_3_fn(Error* __this, uString* message)
{
    __this->ctor_3(message);
}

// public Error New(string message) :1228
void Error__New4_fn(uString* message, Error** __retval)
{
    *__retval = Error::New4(message);
}

// public Error(string message) [instance] :1228
void Error::ctor_3(uString* message)
{
    ctor_1(message);
}

// public Error New(string message) [static] :1228
Error* Error::New4(uString* message)
{
    Error* obj1 = (Error*)uNew(Error_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/Scripting/$.uno#1
// ----------------------------------------------------------------

// public enum ExecutionThread :63
uEnumType* ExecutionThread_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Scripting.ExecutionThread", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Any", 0LL,
        "JavaScript", 1LL,
        "MainThread", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#11
// -------------------------------------------------------------

// public sealed class External :1300
// {
uType* External_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(External);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.External", options);
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))External__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))External__GetHashCode_fn;
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Scripting::External, Object), 0);
    type->Reflection.SetFields(1,
        new uField("Object", 0));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)External__New1_fn, 0, true, External_typeof(), 1, uObject_typeof()));
    return type;
}

// public External(object o) :1304
void External__ctor__fn(External* __this, uObject* o)
{
    __this->ctor_(o);
}

// public override sealed bool Equals(object o) :1309
void External__Equals_fn(External* __this, uObject* o, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.External", "Equals(object)");
    External* that = uAs<External*>(o, External_typeof());
    return *__retval = (that != NULL) && ::g::Uno::Object::Equals(uPtr(__this->Object), uPtr(that)->Object), void();
}

// public override sealed int GetHashCode() :1315
void External__GetHashCode_fn(External* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.External", "GetHashCode()");
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->Object)), void();
}

// public External New(object o) :1304
void External__New1_fn(uObject* o, External** __retval)
{
    *__retval = External::New1(o);
}

// public External(object o) [instance] :1304
void External::ctor_(uObject* o)
{
    uStackFrame __("Fuse.Scripting.External", ".ctor(object)");
    Object = o;
}

// public External New(object o) [static] :1304
External* External::New1(uObject* o)
{
    External* obj1 = (External*)uNew(External_typeof());
    obj1->ctor_(o);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#6
// ------------------------------------------------------------

// internal sealed class FactoryClosure<T> :826
// {
uType* FactoryClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(FactoryClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.FactoryClosure`1", options);
    ::TYPES[18] = ::g::Fuse::Scripting::ResultFactory_typeof();
    type->SetPrecalc(
        ::TYPES[18/*Fuse.Scripting.ResultFactory`1*/]->MakeType(type->T(0)));
    type->SetFields(0,
        uObject_typeof()->Array(), offsetof(::g::Fuse::Scripting::FactoryClosure, _args), 0,
        ::g::Fuse::Scripting::ResultFactory_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Scripting::FactoryClosure, _factory), 0,
        ::g::Uno::Threading::Promise_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Scripting::FactoryClosure, _promise), 0);
    return type;
}

// public FactoryClosure(Fuse.Scripting.ResultFactory<T> factory, object[] args, Uno.Threading.Promise<T> promise) :832
void FactoryClosure__ctor__fn(FactoryClosure* __this, uDelegate* factory, uArray* args, ::g::Uno::Threading::Promise* promise)
{
    __this->ctor_(factory, args, promise);
}

// public FactoryClosure New(Fuse.Scripting.ResultFactory<T> factory, object[] args, Uno.Threading.Promise<T> promise) :832
void FactoryClosure__New1_fn(uType* __type, uDelegate* factory, uArray* args, ::g::Uno::Threading::Promise* promise, FactoryClosure** __retval)
{
    *__retval = FactoryClosure::New1(__type, factory, args, promise);
}

// public void Run() :839
void FactoryClosure__Run_fn(FactoryClosure* __this)
{
    __this->Run();
}

// public FactoryClosure(Fuse.Scripting.ResultFactory<T> factory, object[] args, Uno.Threading.Promise<T> promise) [instance] :832
void FactoryClosure::ctor_(uDelegate* factory, uArray* args, ::g::Uno::Threading::Promise* promise)
{
    uStackFrame __("Fuse.Scripting.FactoryClosure`1", ".ctor(Fuse.Scripting.ResultFactory<T>,object[],Uno.Threading.Promise<T>)");
    _factory = factory;
    _args = args;
    _promise = promise;
}

// public void Run() [instance] :839
void FactoryClosure::Run()
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(0/*Fuse.Scripting.ResultFactory<T>*/),
    };
    uStackFrame __("Fuse.Scripting.FactoryClosure`1", "Run()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT res(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    res = uT(__types[0], U_ALLOCA(__types[0]->ValueSize));

    try
    {
        res = (uPtr(_factory)->Invoke(&ret2, 1, (uArray*)_args), ret2);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        uPtr(_promise)->Reject(e);
        return;
    }

    ::g::Uno::Threading::Promise__Resolve_fn(uPtr(_promise), res);
}

// public FactoryClosure New(Fuse.Scripting.ResultFactory<T> factory, object[] args, Uno.Threading.Promise<T> promise) [static] :832
FactoryClosure* FactoryClosure::New1(uType* __type, uDelegate* factory, uArray* args, ::g::Uno::Threading::Promise* promise)
{
    FactoryClosure* obj1 = (FactoryClosure*)uNew(__type);
    obj1->ctor_(factory, args, promise);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#3
// ------------------------------------------------------------

// public sealed class FileModule :514
// {
::g::Fuse::Scripting::Module_type* FileModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Module_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FileModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Module_type);
    type = (::g::Fuse::Scripting::Module_type*)uClassType::New("Fuse.Scripting.FileModule", options);
    type->SetBase(::g::Fuse::Scripting::ScriptModule_typeof());
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    ::TYPES[6] = ::g::Fuse::Scripting::ScriptModule_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::Module_type, interface0));
    type->SetFields(7);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FileModule__New2_fn, 0, true, FileModule_typeof(), 1, ::g::Uno::UX::FileSource_typeof()));
    return type;
}

// public FileModule(Uno.UX.FileSource fs) :516
void FileModule__ctor_2_fn(FileModule* __this, ::g::Uno::UX::FileSource* fs)
{
    __this->ctor_2(fs);
}

// public FileModule New(Uno.UX.FileSource fs) :516
void FileModule__New2_fn(::g::Uno::UX::FileSource* fs, FileModule** __retval)
{
    *__retval = FileModule::New2(fs);
}

// public FileModule(Uno.UX.FileSource fs) [instance] :516
void FileModule::ctor_2(::g::Uno::UX::FileSource* fs)
{
    uStackFrame __("Fuse.Scripting.FileModule", ".ctor(Uno.UX.FileSource)");
    ctor_1(NULL, NULL);
    File(fs);
}

// public FileModule New(Uno.UX.FileSource fs) [static] :516
FileModule* FileModule::New2(::g::Uno::UX::FileSource* fs)
{
    FileModule* obj1 = (FileModule*)uNew(FileModule_typeof());
    obj1->ctor_2(fs);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#12
// -------------------------------------------------------------

// private sealed class JSCallback.FuncClosure<TResult> :1424
// {
uType* JSCallback__FuncClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(JSCallback__FuncClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JSCallback.FuncClosure`1", options);
    ::TYPES[3] = uObject_typeof();
    ::TYPES[19] = ::g::Uno::Func_typeof();
    type->SetPrecalc(
        ::TYPES[19/*Uno.Func`1*/]->MakeType(type->T(0)));
    type->SetFields(0,
        ::g::Uno::Func_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Scripting::JSCallback__FuncClosure, _method), 0);
    return type;
}

// public FuncClosure(Uno.Func<TResult> method) :1428
void JSCallback__FuncClosure__ctor__fn(JSCallback__FuncClosure* __this, uDelegate* method)
{
    __this->ctor_(method);
}

// public FuncClosure New(Uno.Func<TResult> method) :1428
void JSCallback__FuncClosure__New1_fn(uType* __type, uDelegate* method, JSCallback__FuncClosure** __retval)
{
    *__retval = JSCallback__FuncClosure::New1(__type, method);
}

// public object Run(object[] args) :1433
void JSCallback__FuncClosure__Run_fn(JSCallback__FuncClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public FuncClosure(Uno.Func<TResult> method) [instance] :1428
void JSCallback__FuncClosure::ctor_(uDelegate* method)
{
    uStackFrame __("Fuse.Scripting.JSCallback.FuncClosure`1", ".ctor(Uno.Func<TResult>)");
    _method = method;
}

// public object Run(object[] args) [instance] :1433
uObject* JSCallback__FuncClosure::Run(uArray* args)
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(0/*Uno.Func<TResult>*/),
    };
    uStackFrame __("Fuse.Scripting.JSCallback.FuncClosure`1", "Run(object[])");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return uBoxPtr(__types[0], (uPtr(_method)->Invoke(&ret2), ret2));
}

// public FuncClosure New(Uno.Func<TResult> method) [static] :1428
JSCallback__FuncClosure* JSCallback__FuncClosure::New1(uType* __type, uDelegate* method)
{
    JSCallback__FuncClosure* obj1 = (JSCallback__FuncClosure*)uNew(__type);
    obj1->ctor_(method);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#12
// -------------------------------------------------------------

// private sealed class JSCallback.FuncClosure<TArg, TResult> :1439
// {
uType* JSCallback__FuncClosure1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 2;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(JSCallback__FuncClosure1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JSCallback.FuncClosure`2", options);
    ::STRINGS[0] = uString::Const("First argument should be of type ");
    ::TYPES[1] = ::g::Fuse::Scripting::JSCallback_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[20] = ::g::Uno::Func1_typeof();
    type->SetPrecalc(
        ::TYPES[1/*Fuse.Scripting.JSCallback*/]->MakeMethod(1, type->T(0)),
        ::TYPES[20/*Uno.Func`2*/]->MakeType(type->T(0), type->T(1)));
    type->SetFields(0,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Fuse::Scripting::JSCallback__FuncClosure1, _method), 0);
    return type;
}

// public FuncClosure(Uno.Func<TArg, TResult> method) :1443
void JSCallback__FuncClosure1__ctor__fn(JSCallback__FuncClosure1* __this, uDelegate* method)
{
    __this->ctor_(method);
}

// public FuncClosure New(Uno.Func<TArg, TResult> method) :1443
void JSCallback__FuncClosure1__New1_fn(uType* __type, uDelegate* method, JSCallback__FuncClosure1** __retval)
{
    *__retval = JSCallback__FuncClosure1::New1(__type, method);
}

// public object Run(object[] args) :1448
void JSCallback__FuncClosure1__Run_fn(JSCallback__FuncClosure1* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public FuncClosure(Uno.Func<TArg, TResult> method) [instance] :1443
void JSCallback__FuncClosure1::ctor_(uDelegate* method)
{
    uStackFrame __("Fuse.Scripting.JSCallback.FuncClosure`2", ".ctor(Uno.Func<TArg, TResult>)");
    _method = method;
}

// public object Run(object[] args) [instance] :1448
uObject* JSCallback__FuncClosure1::Run(uArray* args)
{
    uType* __types[] = {
        __type->T(1),
        __type->T(0),
        __type->Precalced(0/*Fuse.Scripting.JSCallback.GetArg<TArg>*/),
        __type->Precalced(1/*Uno.Func<TArg, TResult>*/),
    };
    uStackFrame __("Fuse.Scripting.JSCallback.FuncClosure`2", "Run(object[])");
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT arg(__types[1], U_ALLOCA(__types[1]->ValueSize));
    bool ret2;
    ;
    arg = uT(__types[1], U_ALLOCA(__types[1]->ValueSize));

    if ((::g::Fuse::Scripting::JSCallback__GetArg_fn(__types[2], args, &arg, uCRef<int>(0), &ret2), ret2))
        return uBoxPtr(__types[0], (uPtr(_method)->Invoke(&ret3, 1, (void*)arg), ret3));

    U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition1(::STRINGS[0/*"First argum...*/], __types[1])));
}

// public FuncClosure New(Uno.Func<TArg, TResult> method) [static] :1443
JSCallback__FuncClosure1* JSCallback__FuncClosure1::New1(uType* __type, uDelegate* method)
{
    JSCallback__FuncClosure1* obj1 = (JSCallback__FuncClosure1*)uNew(__type);
    obj1->ctor_(method);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#12
// -------------------------------------------------------------

// private sealed class JSCallback.FuncClosure<TArg, TArg1, TResult> :1458
// {
uType* JSCallback__FuncClosure2_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 3;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(JSCallback__FuncClosure2);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JSCallback.FuncClosure`3", options);
    ::STRINGS[0] = uString::Const("First argument should be of type ");
    ::TYPES[1] = ::g::Fuse::Scripting::JSCallback_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[21] = ::g::Uno::Func2_typeof();
    type->SetPrecalc(
        ::TYPES[1/*Fuse.Scripting.JSCallback*/]->MakeMethod(1, type->T(0)),
        ::TYPES[1/*Fuse.Scripting.JSCallback*/]->MakeMethod(1, type->T(1)),
        ::TYPES[21/*Uno.Func`3*/]->MakeType(type->T(0), type->T(1), type->T(2)));
    type->SetFields(0,
        ::g::Uno::Func2_typeof()->MakeType(type->T(0), type->T(1), type->T(2)), offsetof(::g::Fuse::Scripting::JSCallback__FuncClosure2, _method), 0);
    return type;
}

// public FuncClosure(Uno.Func<TArg, TArg1, TResult> method) :1462
void JSCallback__FuncClosure2__ctor__fn(JSCallback__FuncClosure2* __this, uDelegate* method)
{
    __this->ctor_(method);
}

// public FuncClosure New(Uno.Func<TArg, TArg1, TResult> method) :1462
void JSCallback__FuncClosure2__New1_fn(uType* __type, uDelegate* method, JSCallback__FuncClosure2** __retval)
{
    *__retval = JSCallback__FuncClosure2::New1(__type, method);
}

// public object Run(object[] args) :1467
void JSCallback__FuncClosure2__Run_fn(JSCallback__FuncClosure2* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public FuncClosure(Uno.Func<TArg, TArg1, TResult> method) [instance] :1462
void JSCallback__FuncClosure2::ctor_(uDelegate* method)
{
    uStackFrame __("Fuse.Scripting.JSCallback.FuncClosure`3", ".ctor(Uno.Func<TArg, TArg1, TResult>)");
    _method = method;
}

// public object Run(object[] args) [instance] :1467
uObject* JSCallback__FuncClosure2::Run(uArray* args)
{
    uType* __types[] = {
        __type->T(2),
        __type->T(0),
        __type->T(1),
        __type->Precalced(0/*Fuse.Scripting.JSCallback.GetArg<TArg>*/),
        __type->Precalced(1/*Fuse.Scripting.JSCallback.GetArg<TArg1>*/),
        __type->Precalced(2/*Uno.Func<TArg, TArg1, TResult>*/),
    };
    uStackFrame __("Fuse.Scripting.JSCallback.FuncClosure`3", "Run(object[])");
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT arg(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT arg1(__types[2], U_ALLOCA(__types[2]->ValueSize));
    bool ret2;
    bool ret3;
    ;
    arg = uT(__types[1], U_ALLOCA(__types[1]->ValueSize));
    arg1 = uT(__types[2], U_ALLOCA(__types[2]->ValueSize));

    if ((::g::Fuse::Scripting::JSCallback__GetArg_fn(__types[3], args, &arg, uCRef<int>(0), &ret2), ret2) && (::g::Fuse::Scripting::JSCallback__GetArg_fn(__types[4], args, &arg1, uCRef<int>(1), &ret3), ret3))
        return uBoxPtr(__types[0], (uPtr(_method)->Invoke(&ret4, 2, (void*)arg, (void*)arg1), ret4));

    U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition1(::STRINGS[0/*"First argum...*/], __types[1])));
}

// public FuncClosure New(Uno.Func<TArg, TArg1, TResult> method) [static] :1462
JSCallback__FuncClosure2* JSCallback__FuncClosure2::New1(uType* __type, uDelegate* method)
{
    JSCallback__FuncClosure2* obj1 = (JSCallback__FuncClosure2*)uNew(__type);
    obj1->ctor_(method);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#11
// -------------------------------------------------------------

// public abstract class Function :1282
// {
Function_type* Function_typeof()
{
    static uSStrong<Function_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Function);
    options.TypeSize = sizeof(Function_type);
    type = (Function_type*)uClassType::New("Fuse.Scripting.Function", options);
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Function__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Function__GetHashCode_fn;
    type->Reflection.SetFunctions(3,
        new uFunction("Call", NULL, NULL, offsetof(Function_type, fp_Call), false, uObject_typeof(), 1, uObject_typeof()->Array()),
        new uFunction("Construct", NULL, NULL, offsetof(Function_type, fp_Construct), false, ::g::Fuse::Scripting::Object_typeof(), 1, uObject_typeof()->Array()),
        new uFunction("Equals", NULL, NULL, offsetof(Function_type, fp_Equals2), false, ::g::Uno::Bool_typeof(), 1, Function_typeof()));
    return type;
}

// protected generated Function() :1282
void Function__ctor__fn(Function* __this)
{
    __this->ctor_();
}

// public override sealed bool Equals(object o) :1288
void Function__Equals_fn(Function* __this, uObject* o, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.Function", "Equals(object)");
    Function* a = uAs<Function*>(o, Function_typeof());
    return *__retval = (a != NULL) && __this->Equals2(a), void();
}

// public override int GetHashCode() :1294
void Function__GetHashCode_fn(Function* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.Function", "GetHashCode()");
    int ret1;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(__this, &ret1), ret1), void();
}

// protected generated Function() [instance] :1282
void Function::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#6
// ------------------------------------------------------------

// public delegate Uno.Threading.Future<T> FutureFactory<T>(object[] args) :823
uDelegateType* FutureFactory_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.FutureFactory`1", 1, 1);
    type->SetSignature(::g::Uno::Threading::Future1_typeof()->MakeType(type->T(0)),
        uObject_typeof()->Array());
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.27.14/Scripting/$.uno
// --------------------------------------------------------------

// public abstract interface IEventSerializer :7
// {
uInterfaceType* IEventSerializer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.IEventSerializer", 0, 0);
    type->Reflection.SetFunctions(5,
        new uFunction("AddBool", NULL, NULL, offsetof(IEventSerializer, fp_AddBool), false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("AddDouble", NULL, NULL, offsetof(IEventSerializer, fp_AddDouble), false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("AddInt", NULL, NULL, offsetof(IEventSerializer, fp_AddInt), false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("AddObject", NULL, NULL, offsetof(IEventSerializer, fp_AddObject), false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), uObject_typeof()),
        new uFunction("AddString", NULL, NULL, offsetof(IEventSerializer, fp_AddString), false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#1
// ------------------------------------------------------------

// public abstract interface IModuleProvider :192
// {
uInterfaceType* IModuleProvider_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.IModuleProvider", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("GetModule", NULL, NULL, offsetof(IModuleProvider, fp_GetModule), false, ::g::Fuse::Scripting::Module_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/Scripting/$.uno
// --------------------------------------------------------------

// public abstract interface IScriptEvent :16
// {
uInterfaceType* IScriptEvent_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.IScriptEvent", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Serialize", NULL, NULL, offsetof(IScriptEvent, fp_Serialize), false, uVoid_typeof(), 1, ::g::Fuse::Scripting::IEventSerializer_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#12
// -------------------------------------------------------------

// public static class JSCallback :1333
// {
uClassType* JSCallback_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.JSCallback", options);
    ::TYPES[15] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[22] = JSCallback__ActionClosure1_typeof();
    ::TYPES[23] = JSCallback__ActionClosure2_typeof();
    ::TYPES[24] = JSCallback__FuncClosure_typeof();
    ::TYPES[25] = JSCallback__FuncClosure1_typeof();
    ::TYPES[26] = JSCallback__FuncClosure2_typeof();
    ::TYPES[10] = uObject_typeof()->Array();
    ::TYPES[27] = JSCallback__NumberConverter_typeof();
    type->Reflection.SetFunctions(6,
        new uFunction("FromAction", NULL, (void*)JSCallback__FromAction_fn, 0, true, ::g::Fuse::Scripting::Callback_typeof(), 1, ::g::Uno::Action_typeof()),
        new uFunction("FromAction`1", type, (void*)JSCallback__FromAction1_fn, 0, true, ::g::Fuse::Scripting::Callback_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(type->U(0))),
        new uFunction("FromAction`2", type, (void*)JSCallback__FromAction2_fn, 0, true, ::g::Fuse::Scripting::Callback_typeof(), 1, ::g::Uno::Action2_typeof()->MakeType(type->U(0), type->U(1))),
        new uFunction("FromFunc`1", type, (void*)JSCallback__FromFunc_fn, 0, true, ::g::Fuse::Scripting::Callback_typeof(), 1, ::g::Uno::Func_typeof()->MakeType(type->U(0))),
        new uFunction("FromFunc`2", type, (void*)JSCallback__FromFunc1_fn, 0, true, ::g::Fuse::Scripting::Callback_typeof(), 1, ::g::Uno::Func1_typeof()->MakeType(type->U(0), type->U(1))),
        new uFunction("FromFunc`3", type, (void*)JSCallback__FromFunc2_fn, 0, true, ::g::Fuse::Scripting::Callback_typeof(), 1, ::g::Uno::Func2_typeof()->MakeType(type->U(0), type->U(1), type->U(2))));
    return type;
}

// public static Fuse.Scripting.Callback FromAction(Uno.Action action) :1335
void JSCallback__FromAction_fn(uDelegate* action, uDelegate** __retval)
{
    *__retval = JSCallback::FromAction(action);
}

// public static Fuse.Scripting.Callback FromAction<T>(Uno.Action<T> action) :1340
void JSCallback__FromAction1_fn(uType* __type, uDelegate* action, uDelegate** __retval)
{
    *__retval = JSCallback::FromAction1(__type, action);
}

// public static Fuse.Scripting.Callback FromAction<T1, T2>(Uno.Action<T1, T2> action) :1345
void JSCallback__FromAction2_fn(uType* __type, uDelegate* action, uDelegate** __retval)
{
    *__retval = JSCallback::FromAction2(__type, action);
}

// public static Fuse.Scripting.Callback FromFunc<TResult>(Uno.Func<TResult> func) :1350
void JSCallback__FromFunc_fn(uType* __type, uDelegate* func, uDelegate** __retval)
{
    *__retval = JSCallback::FromFunc(__type, func);
}

// public static Fuse.Scripting.Callback FromFunc<T, TResult>(Uno.Func<T, TResult> func) :1355
void JSCallback__FromFunc1_fn(uType* __type, uDelegate* func, uDelegate** __retval)
{
    *__retval = JSCallback::FromFunc1(__type, func);
}

// public static Fuse.Scripting.Callback FromFunc<T1, T2, TResult>(Uno.Func<T1, T2, TResult> func) :1360
void JSCallback__FromFunc2_fn(uType* __type, uDelegate* func, uDelegate** __retval)
{
    *__retval = JSCallback::FromFunc2(__type, func);
}

// private static bool GetArg<T>(object[] args, T& arg, int index) :1478
void JSCallback__GetArg_fn(uType* __type, uArray* args, uTRef arg, int* index, bool* __retval)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[27/*Fuse.Scripting.JSCallback.NumberConverter*/]->MakeMethod(1, __type->U(0)),
    };
    uStackFrame __("Fuse.Scripting.JSCallback", "GetArg`1(object[],T&,int)");
    int index_ = *index;
    bool ret1;
    arg.Default(__types[0]);

    if (uPtr(args)->Length() > index_)
    {
        if ((JSCallback__NumberConverter__TryConvert_fn(__types[1], uPtr(args)->Strong<uObject*>(index_), arg, &ret1), ret1))
            return *__retval = true, void();
    }

    return *__retval = false, void();
}

// public static Fuse.Scripting.Callback FromAction(Uno.Action action) [static] :1335
uDelegate* JSCallback::FromAction(uDelegate* action)
{
    uStackFrame __("Fuse.Scripting.JSCallback", "FromAction(Uno.Action)");
    return uDelegate::New(::TYPES[15/*Fuse.Scripting.Callback*/], (void*)JSCallback__ActionClosure__Run_fn, JSCallback__ActionClosure::New1(action));
}

// public static Fuse.Scripting.Callback FromAction<T>(Uno.Action<T> action) [static] :1340
uDelegate* JSCallback::FromAction1(uType* __type, uDelegate* action)
{
    uType* __types[] = {
        ::TYPES[22/*Fuse.Scripting.JSCallback.ActionClosure`1*/]->MakeType(__type->U(0)),
        __type->U(0),
    };
    uStackFrame __("Fuse.Scripting.JSCallback", "FromAction`1(Uno.Action<T>)");
    return uDelegate::New(::TYPES[15/*Fuse.Scripting.Callback*/], (void*)JSCallback__ActionClosure1__Run_fn, (JSCallback__ActionClosure1*)JSCallback__ActionClosure1::New1(__types[0], action));
}

// public static Fuse.Scripting.Callback FromAction<T1, T2>(Uno.Action<T1, T2> action) [static] :1345
uDelegate* JSCallback::FromAction2(uType* __type, uDelegate* action)
{
    uType* __types[] = {
        ::TYPES[23/*Fuse.Scripting.JSCallback.ActionClosure`2*/]->MakeType(__type->U(0), __type->U(1)),
        __type->U(0),
        __type->U(1),
    };
    uStackFrame __("Fuse.Scripting.JSCallback", "FromAction`2(Uno.Action<T1, T2>)");
    return uDelegate::New(::TYPES[15/*Fuse.Scripting.Callback*/], (void*)JSCallback__ActionClosure2__Run_fn, (JSCallback__ActionClosure2*)JSCallback__ActionClosure2::New1(__types[0], action));
}

// public static Fuse.Scripting.Callback FromFunc<TResult>(Uno.Func<TResult> func) [static] :1350
uDelegate* JSCallback::FromFunc(uType* __type, uDelegate* func)
{
    uType* __types[] = {
        ::TYPES[24/*Fuse.Scripting.JSCallback.FuncClosure`1*/]->MakeType(__type->U(0)),
        __type->U(0),
    };
    uStackFrame __("Fuse.Scripting.JSCallback", "FromFunc`1(Uno.Func<TResult>)");
    return uDelegate::New(::TYPES[15/*Fuse.Scripting.Callback*/], (void*)JSCallback__FuncClosure__Run_fn, (JSCallback__FuncClosure*)JSCallback__FuncClosure::New1(__types[0], func));
}

// public static Fuse.Scripting.Callback FromFunc<T, TResult>(Uno.Func<T, TResult> func) [static] :1355
uDelegate* JSCallback::FromFunc1(uType* __type, uDelegate* func)
{
    uType* __types[] = {
        ::TYPES[25/*Fuse.Scripting.JSCallback.FuncClosure`2*/]->MakeType(__type->U(0), __type->U(1)),
        __type->U(0),
        __type->U(1),
    };
    uStackFrame __("Fuse.Scripting.JSCallback", "FromFunc`2(Uno.Func<T, TResult>)");
    return uDelegate::New(::TYPES[15/*Fuse.Scripting.Callback*/], (void*)JSCallback__FuncClosure1__Run_fn, (JSCallback__FuncClosure1*)JSCallback__FuncClosure1::New1(__types[0], func));
}

// public static Fuse.Scripting.Callback FromFunc<T1, T2, TResult>(Uno.Func<T1, T2, TResult> func) [static] :1360
uDelegate* JSCallback::FromFunc2(uType* __type, uDelegate* func)
{
    uType* __types[] = {
        ::TYPES[26/*Fuse.Scripting.JSCallback.FuncClosure`3*/]->MakeType(__type->U(0), __type->U(1), __type->U(2)),
        __type->U(0),
        __type->U(1),
        __type->U(2),
    };
    uStackFrame __("Fuse.Scripting.JSCallback", "FromFunc`3(Uno.Func<T1, T2, TResult>)");
    return uDelegate::New(::TYPES[15/*Fuse.Scripting.Callback*/], (void*)JSCallback__FuncClosure2__Run_fn, (JSCallback__FuncClosure2*)JSCallback__FuncClosure2::New1(__types[0], func));
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#4
// ------------------------------------------------------------

// internal sealed class JSFileSource :533
// {
::g::Uno::UX::FileSource_type* JSFileSource_typeof()
{
    static uSStrong< ::g::Uno::UX::FileSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(JSFileSource);
    options.TypeSize = sizeof(::g::Uno::UX::FileSource_type);
    type = (::g::Uno::UX::FileSource_type*)uClassType::New("Fuse.Scripting.JSFileSource", options);
    type->SetBase(::g::Uno::UX::FileSource_typeof());
    type->fp_OpenRead = (void(*)(::g::Uno::UX::FileSource*, ::g::Uno::IO::Stream**))JSFileSource__OpenRead_fn;
    type->SetFields(2,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Scripting::JSFileSource, _path), 0);
    return type;
}

// public JSFileSource(string path) :537
void JSFileSource__ctor_1_fn(JSFileSource* __this, uString* path)
{
    __this->ctor_1(path);
}

// public JSFileSource New(string path) :537
void JSFileSource__New1_fn(uString* path, JSFileSource** __retval)
{
    *__retval = JSFileSource::New1(path);
}

// public override sealed Uno.IO.Stream OpenRead() :542
void JSFileSource__OpenRead_fn(JSFileSource* __this, ::g::Uno::IO::Stream** __retval)
{
    uStackFrame __("Fuse.Scripting.JSFileSource", "OpenRead()");
    return *__retval = ::g::Uno::IO::File::OpenRead(__this->_path), void();
}

// public JSFileSource(string path) [instance] :537
void JSFileSource::ctor_1(uString* path)
{
    uStackFrame __("Fuse.Scripting.JSFileSource", ".ctor(string)");
    ctor_(path);
    _path = path;
}

// public JSFileSource New(string path) [static] :537
JSFileSource* JSFileSource::New1(uString* path)
{
    JSFileSource* obj1 = (JSFileSource*)uNew(JSFileSource_typeof());
    obj1->ctor_1(path);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#4
// ------------------------------------------------------------

// public static class Marshal :548
// {
// static Marshal() :548
static void Marshal__cctor__fn(uType* __type)
{
    Marshal::_convertibleClasses_ = uArray::Init<uType*>(::TYPES[28/*Uno.Type[]*/], 2, ::TYPES[29/*Fuse.Drawing.Brush*/], ::TYPES[30/*Uno.UX.FileSource*/]);
}

uClassType* Marshal_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.Marshal", options);
    type->fp_cctor_ = Marshal__cctor__fn;
    ::STRINGS[12] = uString::Const("Unable to convert ");
    ::STRINGS[13] = uString::Const(" to bool");
    ::STRINGS[14] = uString::Const("Expected number was ");
    ::STRINGS[15] = uString::Const("/usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#4");
    ::STRINGS[16] = uString::Const("path");
    ::STRINGS[17] = uString::Const(" to a FileSource");
    ::STRINGS[18] = uString::Const("#");
    ::STRINGS[19] = uString::Const(" to float4");
    ::STRINGS[20] = uString::Const("%");
    ::STRINGS[21] = uString::Const("px");
    ::STRINGS[22] = uString::Const("pt");
    ::STRINGS[23] = uString::Const("Unable to parse size value: ");
    ::STRINGS[24] = uString::Const("Unable to parse size vector: ");
    ::STRINGS[25] = uString::Const("Unable to convert '");
    ::STRINGS[26] = uString::Const("' to type ");
    ::TYPES[28] = ::g::Uno::Type_typeof()->Array();
    ::TYPES[29] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[30] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[31] = ::g::Uno::Bool_typeof();
    ::TYPES[32] = ::g::Uno::String_typeof();
    ::TYPES[33] = ::g::Uno::Double_typeof();
    ::TYPES[34] = ::g::Uno::Float_typeof();
    ::TYPES[35] = ::g::Uno::Int_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[36] = ::g::Uno::IO::Bundle_typeof();
    ::TYPES[37] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof());
    ::TYPES[38] = ::g::Uno::IO::BundleFile_typeof();
    ::TYPES[11] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[9] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[39] = ::g::Uno::UX::Size_typeof();
    ::TYPES[40] = ::g::Uno::UX::Size2_typeof();
    ::TYPES[41] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[42] = ::g::Uno::String_typeof()->Array();
    ::TYPES[43] = ::g::Uno::Float4_typeof();
    ::TYPES[44] = ::g::Uno::Float3_typeof();
    ::TYPES[45] = ::g::Uno::Float2_typeof();
    ::TYPES[46] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::Type_typeof()->Array(), (uintptr_t)&::g::Fuse::Scripting::Marshal::_convertibleClasses_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(13,
        new uFunction("CanConvertClass", NULL, (void*)Marshal__CanConvertClass_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Type_typeof()),
        new uFunction("ToBool", NULL, (void*)Marshal__ToBool_fn, 0, true, ::g::Uno::Bool_typeof(), 1, uObject_typeof()),
        new uFunction("ToBrush", NULL, (void*)Marshal__ToBrush_fn, 0, true, ::g::Fuse::Drawing::Brush_typeof(), 1, uObject_typeof()),
        new uFunction("ToDouble", NULL, (void*)Marshal__ToDouble_fn, 0, true, ::g::Uno::Double_typeof(), 1, uObject_typeof()),
        new uFunction("ToFileSource", NULL, (void*)Marshal__ToFileSource_fn, 0, true, ::g::Uno::UX::FileSource_typeof(), 1, uObject_typeof()),
        new uFunction("ToFloat", NULL, (void*)Marshal__ToFloat_fn, 0, true, ::g::Uno::Float_typeof(), 1, uObject_typeof()),
        new uFunction("ToFloat4", NULL, (void*)Marshal__ToFloat4_fn, 0, true, ::g::Uno::Float4_typeof(), 1, ::g::Fuse::Scripting::Array_typeof()),
        new uFunction("ToFloat4", NULL, (void*)Marshal__ToFloat41_fn, 0, true, ::g::Uno::Float4_typeof(), 1, uObject_typeof()),
        new uFunction("ToInt", NULL, (void*)Marshal__ToInt_fn, 0, true, ::g::Uno::Int_typeof(), 1, uObject_typeof()),
        new uFunction("ToSize", NULL, (void*)Marshal__ToSize_fn, 0, true, ::g::Uno::UX::Size_typeof(), 1, uObject_typeof()),
        new uFunction("ToSize2", NULL, (void*)Marshal__ToSize2_fn, 0, true, ::g::Uno::UX::Size2_typeof(), 1, uObject_typeof()),
        new uFunction("ToType`1", type, (void*)Marshal__ToType_fn, 0, true, type->U(0), 1, uObject_typeof()),
        new uFunction("TryConvertTo`1", type, (void*)Marshal__TryConvertTo_fn, 0, true, ::g::Uno::Bool_typeof(), 2, uObject_typeof(), type->U(0)->ByRef()));
    return type;
}

// public static bool CanConvertClass(Uno.Type t) :737
void Marshal__CanConvertClass_fn(uType* t, bool* __retval)
{
    *__retval = Marshal::CanConvertClass(t);
}

// public static bool ToBool(object obj) :680
void Marshal__ToBool_fn(uObject* obj, bool* __retval)
{
    *__retval = Marshal::ToBool(obj);
}

// public static Fuse.Drawing.Brush ToBrush(object o) :673
void Marshal__ToBrush_fn(uObject* o, ::g::Fuse::Drawing::Brush** __retval)
{
    *__retval = Marshal::ToBrush(o);
}

// public static double ToDouble(object o) :550
void Marshal__ToDouble_fn(uObject* o, double* __retval)
{
    *__retval = Marshal::ToDouble(o);
}

// public static Uno.UX.FileSource ToFileSource(object obj) :567
void Marshal__ToFileSource_fn(uObject* obj, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = Marshal::ToFileSource(obj);
}

// public static float ToFloat(object o) :592
void Marshal__ToFloat_fn(uObject* o, float* __retval)
{
    *__retval = Marshal::ToFloat(o);
}

// public static float4 ToFloat4(Fuse.Scripting.Array values) :646
void Marshal__ToFloat4_fn(::g::Fuse::Scripting::Array* values, ::g::Uno::Float4* __retval)
{
    *__retval = Marshal::ToFloat4(values);
}

// public static float4 ToFloat4(object o) :656
void Marshal__ToFloat41_fn(uObject* o, ::g::Uno::Float4* __retval)
{
    *__retval = Marshal::ToFloat41(o);
}

// public static int ToInt(object o) :587
void Marshal__ToInt_fn(uObject* o, int* __retval)
{
    *__retval = Marshal::ToInt(o);
}

// public static Uno.UX.Size ToSize(object o) :597
void Marshal__ToSize_fn(uObject* o, ::g::Uno::UX::Size* __retval)
{
    *__retval = Marshal::ToSize(o);
}

// public static Uno.UX.Size2 ToSize2(object o) :616
void Marshal__ToSize2_fn(uObject* o, ::g::Uno::UX::Size2* __retval)
{
    *__retval = Marshal::ToSize2(o);
}

// public static T ToType<T>(object o) :719
void Marshal__ToType_fn(uType* __type, uObject* o, uTRef __retval)
{
    uType* __types[] = {
        __type->U(0),
        Marshal_typeof()->MakeMethod(1, __type->U(0)),
    };
    uStackFrame __("Fuse.Scripting.Marshal", "ToType`1(object)");
    Marshal_typeof()->Init();
    uT value(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret5;
    ;

    if ((Marshal__TryConvertTo_fn(__types[1], o, &value, &ret5), ret5))
        return __retval.Store(value), void();
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[25/*"Unable to c...*/], o), ::STRINGS[26/*"' to type "*/]), __types[0])));
}

// public static bool TryConvertTo<T>(object o, T& value) :696
void Marshal__TryConvertTo_fn(uType* __type, uObject* o, uTRef value, bool* __retval)
{
    uType* __types[] = {
        __type->U(0),
    };
    uStackFrame __("Fuse.Scripting.Marshal", "TryConvertTo`1(object,T&)");
    Marshal_typeof()->Init();
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    uType* t = __types[0];

    if (o == NULL)
    {
        value.Default(__types[0]);
        return *__retval = true, void();
    }
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[31/*bool*/]))
    {
        value.Store(__types[0], uUnboxAny(__types[0], uBox(::TYPES[31/*bool*/], Marshal::ToBool(o))));
        return *__retval = true, void();
    }
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[34/*float*/]))
    {
        value.Store(__types[0], uUnboxAny(__types[0], uBox(::TYPES[34/*float*/], Marshal::ToFloat(o))));
        return *__retval = true, void();
    }
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[33/*double*/]))
    {
        value.Store(__types[0], uUnboxAny(__types[0], uBox(::TYPES[33/*double*/], Marshal::ToDouble(o))));
        return *__retval = true, void();
    }
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[35/*int*/]))
    {
        value.Store(__types[0], uUnboxAny(__types[0], uBox<int>(::TYPES[35/*int*/], Marshal::ToInt(o))));
        return *__retval = true, void();
    }
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[32/*string*/]))
    {
        value.Store(__types[0], uUnboxAny(__types[0], ::g::Uno::Object::ToString(uPtr(o))));
        return *__retval = true, void();
    }
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[43/*float4*/]))
    {
        value.Store(__types[0], uUnboxAny(__types[0], uBox(::TYPES[43/*float4*/], Marshal::ToFloat41(o))));
        return *__retval = true, void();
    }
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[44/*float3*/]))
    {
        value.Store(__types[0], uUnboxAny(__types[0], uBox(::TYPES[44/*float3*/], (ind2 = Marshal::ToFloat41(o), ::g::Uno::Float3__New2(ind2.X, ind2.Y, ind2.Z)))));
        return *__retval = true, void();
    }
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[45/*float2*/]))
    {
        value.Store(__types[0], uUnboxAny(__types[0], uBox(::TYPES[45/*float2*/], (ind3 = Marshal::ToFloat41(o), ::g::Uno::Float2__New2(ind3.X, ind3.Y)))));
        return *__retval = true, void();
    }
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[39/*Uno.UX.Size*/]))
    {
        value.Store(__types[0], uUnboxAny(__types[0], uBox(::TYPES[39/*Uno.UX.Size*/], Marshal::ToSize(o))));
        return *__retval = true, void();
    }
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[40/*Uno.UX.Size2*/]))
    {
        value.Store(__types[0], uUnboxAny(__types[0], uBox(::TYPES[40/*Uno.UX.Size2*/], Marshal::ToSize2(o))));
        return *__retval = true, void();
    }
    else if (::g::Uno::Type::IsEnum(uPtr(t)) && uIs(o, ::TYPES[32/*string*/]))
    {
        value.Store(__types[0], uUnboxAny(__types[0], ::g::Uno::Enum::Parse(t, uCast<uString*>(o, ::TYPES[32/*string*/]))));
        return *__retval = true, void();
    }
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[29/*Fuse.Drawing.Brush*/]))
    {
        value.Store(__types[0], uUnboxAny(__types[0], Marshal::ToBrush(o)));
        return *__retval = true, void();
    }
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[30/*Uno.UX.FileSource*/]))
    {
        value.Store(__types[0], uUnboxAny(__types[0], Marshal::ToFileSource(o)));
        return *__retval = true, void();
    }

    value.Default(__types[0]);
    return *__retval = false, void();
}

uSStrong<uArray*> Marshal::_convertibleClasses_;

// public static bool CanConvertClass(Uno.Type t) [static] :737
bool Marshal::CanConvertClass(uType* t)
{
    uStackFrame __("Fuse.Scripting.Marshal", "CanConvertClass(Uno.Type)");
    Marshal_typeof()->Init();

    for (int i = 0; i < uPtr(Marshal::_convertibleClasses())->Length(); i++)
        if (::g::Uno::Type::op_Equality(t, uPtr(Marshal::_convertibleClasses())->Strong<uType*>(i)) || ::g::Uno::Type::IsSubclassOf(uPtr(t), uPtr(Marshal::_convertibleClasses())->Strong<uType*>(i)))
            return true;

    return false;
}

// public static bool ToBool(object obj) [static] :680
bool Marshal::ToBool(uObject* obj)
{
    uStackFrame __("Fuse.Scripting.Marshal", "ToBool(object)");
    Marshal_typeof()->Init();

    if (uIs(obj, ::TYPES[31/*bool*/]))
        return uUnbox<bool>(::TYPES[31/*bool*/], obj);
    else if (uIs(obj, ::TYPES[32/*string*/]))
        return ::g::Uno::Bool::Parse(uCast<uString*>(obj, ::TYPES[32/*string*/]));
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[12/*"Unable to c...*/], obj), ::STRINGS[13/*" to bool"*/])));
}

// public static Fuse.Drawing.Brush ToBrush(object o) [static] :673
::g::Fuse::Drawing::Brush* Marshal::ToBrush(uObject* o)
{
    uStackFrame __("Fuse.Scripting.Marshal", "ToBrush(object)");
    Marshal_typeof()->Init();
    ::g::Fuse::Drawing::SolidColor* b = ::g::Fuse::Drawing::SolidColor::New1();
    b->SetColor(Marshal::ToFloat41(o));
    return b;
}

// public static double ToDouble(object o) [static] :550
double Marshal::ToDouble(uObject* o)
{
    uStackFrame __("Fuse.Scripting.Marshal", "ToDouble(object)");
    Marshal_typeof()->Init();

    if (uIs(o, ::TYPES[33/*double*/]))
        return uUnbox<double>(::TYPES[33/*double*/], o);
    else if (uIs(o, ::TYPES[34/*float*/]))
        return (double)uUnbox<float>(::TYPES[34/*float*/], o);
    else if (uIs(o, ::TYPES[35/*int*/]))
        return (double)uUnbox<int>(::TYPES[35/*int*/], o);
    else if (o == NULL)
        return 0.0;
    else if (uIs(o, ::TYPES[32/*string*/]))
        return ::g::Uno::Double::Parse(uCast<uString*>(o, ::TYPES[32/*string*/]));
    else
    {
        ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition1(::STRINGS[14/*"Expected nu...*/], ::g::Uno::Object::GetType(uPtr(o))), 1, ::STRINGS[15/*"/usr/local/...*/], 562);
        return 0.0;
    }
}

// public static Uno.UX.FileSource ToFileSource(object obj) [static] :567
::g::Uno::UX::FileSource* Marshal::ToFileSource(uObject* obj)
{
    uStackFrame __("Fuse.Scripting.Marshal", "ToFileSource(object)");
    Marshal_typeof()->Init();
    ::g::Uno::IO::BundleFile* ret4;

    if (uIs(obj, ::TYPES[32/*string*/]))
    {
        uString* path = uCast<uString*>(obj, ::TYPES[32/*string*/]);

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(::g::Uno::IO::Bundle::AllFiles()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[38/*Uno.IO.BundleFile*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Uno::IO::BundleFile* f = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[37/*Uno.Collections.IEnumerator<Uno.IO.BundleFile>*/]), &ret4), ret4);

            if (::g::Uno::String::op_Equality(uPtr(f)->SourcePath(), path))
                return ::g::Uno::UX::BundleFileSource::New1(f);
        }

        return ::g::Fuse::Scripting::JSFileSource::New1(uCast<uString*>(obj, ::TYPES[32/*string*/]));
    }
    else if (uIs(obj, ::TYPES[11/*Fuse.Scripting.Object*/]))
        return ::g::Fuse::Scripting::JSFileSource::New1(uAs<uString*>(uPtr(uCast< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[11/*Fuse.Scripting.Object*/]))->Item(::STRINGS[16/*"path"*/]), ::TYPES[32/*string*/]));
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[12/*"Unable to c...*/], ::g::Uno::Object::GetType(uPtr(obj))), ::STRINGS[17/*" to a FileS...*/])));
}

// public static float ToFloat(object o) [static] :592
float Marshal::ToFloat(uObject* o)
{
    uStackFrame __("Fuse.Scripting.Marshal", "ToFloat(object)");
    Marshal_typeof()->Init();
    return (float)Marshal::ToDouble(o);
}

// public static float4 ToFloat4(Fuse.Scripting.Array values) [static] :646
::g::Uno::Float4 Marshal::ToFloat4(::g::Fuse::Scripting::Array* values)
{
    uStackFrame __("Fuse.Scripting.Marshal", "ToFloat4(Fuse.Scripting.Array)");
    Marshal_typeof()->Init();
    float r = (uPtr(values)->Length() > 0) ? Marshal::ToFloat(uPtr(values)->Item(0)) : 0.0f;
    float g = (values->Length() > 1) ? Marshal::ToFloat(values->Item(1)) : r;
    float b = (values->Length() > 2) ? Marshal::ToFloat(values->Item(2)) : r;
    float a = (values->Length() > 3) ? Marshal::ToFloat(values->Item(3)) : 1.0f;
    return ::g::Uno::Float4__New2(r, g, b, a);
}

// public static float4 ToFloat4(object o) [static] :656
::g::Uno::Float4 Marshal::ToFloat41(uObject* o)
{
    uStackFrame __("Fuse.Scripting.Marshal", "ToFloat4(object)");
    Marshal_typeof()->Init();
    ::g::Fuse::Scripting::Array* aa = uAs< ::g::Fuse::Scripting::Array*>(o, ::TYPES[9/*Fuse.Scripting.Array*/]);

    if (aa != NULL)
        return Marshal::ToFloat4(aa);

    if (uIs(o, ::TYPES[32/*string*/]))
    {
        uString* s = uCast<uString*>(o, ::TYPES[32/*string*/]);

        if (::g::Uno::String::StartsWith(uPtr(s), ::STRINGS[18/*"#"*/]))
            return ::g::Uno::Color::FromHex(s);
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[12/*"Unable to c...*/], o), ::STRINGS[19/*" to float4"*/])));
}

// public static int ToInt(object o) [static] :587
int Marshal::ToInt(uObject* o)
{
    uStackFrame __("Fuse.Scripting.Marshal", "ToInt(object)");
    Marshal_typeof()->Init();
    return (int)Marshal::ToDouble(o);
}

// public static Uno.UX.Size ToSize(object o) [static] :597
::g::Uno::UX::Size Marshal::ToSize(uObject* o)
{
    uStackFrame __("Fuse.Scripting.Marshal", "ToSize(object)");
    Marshal_typeof()->Init();

    if (uIs(o, ::TYPES[39/*Uno.UX.Size*/]))
        return uUnbox< ::g::Uno::UX::Size>(::TYPES[39/*Uno.UX.Size*/], o);

    if (uIs(o, ::TYPES[32/*string*/]))
    {
        uString* s = uCast<uString*>(o, ::TYPES[32/*string*/]);

        if (::g::Uno::String::IsNullOrEmpty(s))
            return ::g::Uno::UX::Size__Unspecified();
        else if (::g::Uno::String::EndsWith(uPtr(s), ::STRINGS[20/*"%"*/]))
            return ::g::Uno::UX::Size__Percent(::g::Uno::Float::Parse(::g::Uno::String::Substring1(uPtr(s), 0, uPtr(s)->Length() - 1)));
        else if (::g::Uno::String::EndsWith(uPtr(s), ::STRINGS[21/*"px"*/]))
            return ::g::Uno::UX::Size__Pixels(::g::Uno::Float::Parse(::g::Uno::String::Substring1(uPtr(s), 0, uPtr(s)->Length() - 2)));
        else if (::g::Uno::String::EndsWith(uPtr(s), ::STRINGS[22/*"pt"*/]))
            return ::g::Uno::UX::Size__Points(::g::Uno::Float::Parse(::g::Uno::String::Substring1(uPtr(s), 0, uPtr(s)->Length() - 2)));
        else
            return ::g::Uno::UX::Size__Points(::g::Uno::Float::Parse(s));
    }
    else
        return ::g::Uno::UX::Size__Points((float)Marshal::ToDouble(o));

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[23/*"Unable to p...*/], o)));
}

// public static Uno.UX.Size2 ToSize2(object o) [static] :616
::g::Uno::UX::Size2 Marshal::ToSize2(uObject* o)
{
    uStackFrame __("Fuse.Scripting.Marshal", "ToSize2(object)");
    Marshal_typeof()->Init();

    if (uIs(o, ::TYPES[40/*Uno.UX.Size2*/]))
        return uUnbox< ::g::Uno::UX::Size2>(::TYPES[40/*Uno.UX.Size2*/], o);

    if (uIs(o, ::TYPES[32/*string*/]))
    {
        uString* s = uCast<uString*>(o, ::TYPES[32/*string*/]);

        if (::g::Uno::String::IsNullOrEmpty(s))
            return ::g::Uno::UX::Size2__Unspecified();

        uArray* parts = ::g::Uno::String::Split(uPtr(s), uArray::Init<int>(::TYPES[41/*char[]*/], 1, ','));

        if (uPtr(parts)->Length() == 1)
        {
            ::g::Uno::UX::Size m = Marshal::ToSize(::g::Uno::String::Trim(uPtr(uPtr(parts)->Strong<uString*>(0))));
            return ::g::Uno::UX::Size2__New1(m, m);
        }

        if (uPtr(parts)->Length() == 2)
        {
            ::g::Uno::UX::Size x = Marshal::ToSize(::g::Uno::String::Trim(uPtr(uPtr(parts)->Strong<uString*>(0))));
            ::g::Uno::UX::Size y = Marshal::ToSize(::g::Uno::String::Trim(uPtr(parts->Strong<uString*>(1))));
            return ::g::Uno::UX::Size2__New1(x, y);
        }
    }

    if (uIs(o, ::TYPES[9/*Fuse.Scripting.Array*/]))
    {
        ::g::Fuse::Scripting::Array* a = uCast< ::g::Fuse::Scripting::Array*>(o, ::TYPES[9/*Fuse.Scripting.Array*/]);
        return ::g::Uno::UX::Size2__New1(Marshal::ToSize(uPtr(a)->Item(0)), Marshal::ToSize(uPtr(a)->Item(1)));
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[24/*"Unable to p...*/], o)));
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#2
// ------------------------------------------------------------

// public abstract class Module :462
// {
Module_type* Module_typeof()
{
    static uSStrong<Module_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Module);
    options.TypeSize = sizeof(Module_type);
    type = (Module_type*)uClassType::New("Fuse.Scripting.Module", options);
    type->interface0.fp_Dispose = (void(*)(uObject*))Module__Dispose_fn;
    ::STRINGS[27] = uString::Const("exports");
    ::STRINGS[28] = uString::Const("id");
    ::TYPES[11] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[8] = ::g::Fuse::Scripting::ModuleResult_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Module_type, interface0));
    type->Reflection.SetFunctions(4,
        new uFunction("Dispose", NULL, (void*)Module__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Evaluate", NULL, NULL, offsetof(Module_type, fp_Evaluate), false, uVoid_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), ::g::Fuse::Scripting::ModuleResult_typeof()),
        new uFunction("Evaluate", NULL, (void*)Module__Evaluate1_fn, 0, false, ::g::Fuse::Scripting::ModuleResult_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), ::g::Uno::String_typeof()),
        new uFunction("EvaluateExports", NULL, (void*)Module__EvaluateExports_fn, 0, false, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), ::g::Uno::String_typeof()));
    return type;
}

// protected generated Module() :462
void Module__ctor__fn(Module* __this)
{
    __this->ctor_();
}

// public void Dispose() :489
void Module__Dispose_fn(Module* __this)
{
    __this->Dispose();
}

// public Fuse.Scripting.ModuleResult Evaluate(Fuse.Scripting.Context c, string id) :470
void Module__Evaluate1_fn(Module* __this, ::g::Fuse::Scripting::Context* c, uString* id, ::g::Fuse::Scripting::ModuleResult** __retval)
{
    *__retval = __this->Evaluate1(c, id);
}

// public object EvaluateExports(Fuse.Scripting.Context c, string id) :464
void Module__EvaluateExports_fn(Module* __this, ::g::Fuse::Scripting::Context* c, uString* id, uObject** __retval)
{
    *__retval = __this->EvaluateExports(c, id);
}

// protected generated Module() [instance] :462
void Module::ctor_()
{
}

// public void Dispose() [instance] :489
void Module::Dispose()
{
}

// public Fuse.Scripting.ModuleResult Evaluate(Fuse.Scripting.Context c, string id) [instance] :470
::g::Fuse::Scripting::ModuleResult* Module::Evaluate1(::g::Fuse::Scripting::Context* c, uString* id)
{
    uStackFrame __("Fuse.Scripting.Module", "Evaluate(Fuse.Scripting.Context,string)");
    ::g::Fuse::Scripting::ModuleResult* mr = uPtr(c)->TryGetGlobalModuleResult(id);

    if (mr != NULL)
        return mr;

    ::g::Fuse::Scripting::Object* module = c->NewObject();
    uPtr(module)->Item(::STRINGS[27/*"exports"*/], c->NewObject());
    ::g::Fuse::Scripting::ModuleResult* result = ::g::Fuse::Scripting::ModuleResult::New1(c, id, this, module);

    if (::g::Uno::String::op_Inequality(id, NULL))
        c->RegisterGlobalModuleResult(result);

    Evaluate(c, result);

    if (::g::Uno::String::op_Inequality(id, NULL))
        module->Item(::STRINGS[28/*"id"*/], id);

    return result;
}

// public object EvaluateExports(Fuse.Scripting.Context c, string id) [instance] :464
uObject* Module::EvaluateExports(::g::Fuse::Scripting::Context* c, uString* id)
{
    uStackFrame __("Fuse.Scripting.Module", "EvaluateExports(Fuse.Scripting.Context,string)");
    uObject* r = uPtr(uPtr(Evaluate1(c, id))->Object)->Item(::STRINGS[27/*"exports"*/]);
    return r;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno
// ----------------------------------------------------------

// public sealed class ModuleResult :12
// {
uType* ModuleResult_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(ModuleResult);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ModuleResult", options);
    ::STRINGS[27] = uString::Const("exports");
    ::TYPES[47] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof());
    ::TYPES[48] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[6] = ::g::Fuse::Scripting::ScriptModule_typeof();
    ::TYPES[30] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[49] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof());
    ::TYPES[50] = ::g::Uno::Action_typeof()->Array();
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[11] = ::g::Fuse::Scripting::Object_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Scripting::ModuleResult, _globalKeyListening), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof()), offsetof(::g::Fuse::Scripting::ModuleResult, _invalidateCallbacks), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Scripting::ModuleResult, Context), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Scripting::ModuleResult, Id), 0,
        ::g::Fuse::Scripting::Module_typeof(), offsetof(::g::Fuse::Scripting::ModuleResult, Module), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Scripting::ModuleResult, Object), 0);
    type->Reflection.SetFields(4,
        new uField("Context", 2),
        new uField("Id", 3),
        new uField("Module", 4),
        new uField("Object", 5));
    type->Reflection.SetFunctions(3,
        new uFunction("AddDependency", NULL, (void*)ModuleResult__AddDependency_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action_typeof()),
        new uFunction("get_Exports", NULL, (void*)ModuleResult__get_Exports_fn, 0, false, uObject_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)ModuleResult__New1_fn, 0, true, ModuleResult_typeof(), 4, ::g::Fuse::Scripting::Context_typeof(), ::g::Uno::String_typeof(), ::g::Fuse::Scripting::Module_typeof(), ::g::Fuse::Scripting::Object_typeof()));
    return type;
}

// public ModuleResult(Fuse.Scripting.Context context, string id, Fuse.Scripting.Module mod, Fuse.Scripting.Object obj) :22
void ModuleResult__ctor__fn(ModuleResult* __this, ::g::Fuse::Scripting::Context* context, uString* id, ::g::Fuse::Scripting::Module* mod, ::g::Fuse::Scripting::Object* obj)
{
    __this->ctor_(context, id, mod, obj);
}

// public void AddDependency(Uno.Action invalidateCallback) :52
void ModuleResult__AddDependency_fn(ModuleResult* __this, uDelegate* invalidateCallback)
{
    __this->AddDependency(invalidateCallback);
}

// public object get_Exports() :18
void ModuleResult__get_Exports_fn(ModuleResult* __this, uObject** __retval)
{
    *__retval = __this->Exports();
}

// internal void Invalidate() :69
void ModuleResult__Invalidate_fn(ModuleResult* __this)
{
    __this->Invalidate();
}

// public ModuleResult New(Fuse.Scripting.Context context, string id, Fuse.Scripting.Module mod, Fuse.Scripting.Object obj) :22
void ModuleResult__New1_fn(::g::Fuse::Scripting::Context* context, uString* id, ::g::Fuse::Scripting::Module* mod, ::g::Fuse::Scripting::Object* obj, ModuleResult** __retval)
{
    *__retval = ModuleResult::New1(context, id, mod, obj);
}

// private void OnDataChanged(object sender, Uno.EventArgs args) :57
void ModuleResult__OnDataChanged_fn(ModuleResult* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnDataChanged(sender, args);
}

// private void OnGlobalKeyChanged(string key) :45
void ModuleResult__OnGlobalKeyChanged_fn(ModuleResult* __this, uString* key)
{
    __this->OnGlobalKeyChanged(key);
}

// public ModuleResult(Fuse.Scripting.Context context, string id, Fuse.Scripting.Module mod, Fuse.Scripting.Object obj) [instance] :22
void ModuleResult::ctor_(::g::Fuse::Scripting::Context* context, uString* id, ::g::Fuse::Scripting::Module* mod, ::g::Fuse::Scripting::Object* obj)
{
    uStackFrame __("Fuse.Scripting.ModuleResult", ".ctor(Fuse.Scripting.Context,string,Fuse.Scripting.Module,Fuse.Scripting.Object)");
    _invalidateCallbacks = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[47/*Uno.Collections.List<Uno.Action>*/]));
    Context = context;
    Module = mod;
    Object = obj;
    Id = id;

    if (::g::Uno::String::op_Inequality(Id, NULL))
    {
        _globalKeyListening = true;
        ::g::Uno::UX::Resource::AddGlobalKeyListener(uDelegate::New(::TYPES[48/*Uno.Action<string>*/], (void*)ModuleResult__OnGlobalKeyChanged_fn, this));
    }

    ::g::Fuse::Scripting::ScriptModule* sm = uAs< ::g::Fuse::Scripting::ScriptModule*>(Module, ::TYPES[6/*Fuse.Scripting.ScriptModule*/]);

    if ((sm != NULL) && (uPtr(sm)->File() != NULL))
        uPtr(uPtr(sm)->File())->add_DataChanged(uDelegate::New(::TYPES[49/*Uno.EventHandler<Uno.EventArgs>*/], (void*)ModuleResult__OnDataChanged_fn, this));
}

// public void AddDependency(Uno.Action invalidateCallback) [instance] :52
void ModuleResult::AddDependency(uDelegate* invalidateCallback)
{
    uStackFrame __("Fuse.Scripting.ModuleResult", "AddDependency(Uno.Action)");
    ::g::Uno::Collections::List__Add_fn(uPtr(_invalidateCallbacks), invalidateCallback);
}

// public object get_Exports() [instance] :18
uObject* ModuleResult::Exports()
{
    uStackFrame __("Fuse.Scripting.ModuleResult", "get_Exports()");
    return uPtr(Object)->Item(::STRINGS[27/*"exports"*/]);
}

// internal void Invalidate() [instance] :69
void ModuleResult::Invalidate()
{
    uStackFrame __("Fuse.Scripting.ModuleResult", "Invalidate()");

    if (_globalKeyListening)
    {
        ::g::Uno::UX::Resource::RemoveGlobalKeyListener(uDelegate::New(::TYPES[48/*Uno.Action<string>*/], (void*)ModuleResult__OnGlobalKeyChanged_fn, this));
        _globalKeyListening = false;
    }

    if (::g::Uno::String::op_Inequality(Id, NULL))
        uPtr(Context)->DeleteGlobalModuleResult(this);

    uArray* callbacks = (uArray*)uPtr(_invalidateCallbacks)->ToArray();
    uPtr(_invalidateCallbacks)->Clear();

    for (int index2 = 0, length3 = uPtr(callbacks)->Length(); index2 < length3; ++index2)
    {
        uDelegate* c = uPtr(callbacks)->Strong<uDelegate*>(index2);
        uPtr(c)->InvokeVoid();
    }
}

// private void OnDataChanged(object sender, Uno.EventArgs args) [instance] :57
void ModuleResult::OnDataChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Scripting.ModuleResult", "OnDataChanged(object,Uno.EventArgs)");
    ::g::Fuse::Scripting::ScriptModule* sm = uAs< ::g::Fuse::Scripting::ScriptModule*>(Module, ::TYPES[6/*Fuse.Scripting.ScriptModule*/]);

    if ((sm != NULL) && (uPtr(sm)->File() != NULL))
        uPtr(uPtr(sm)->File())->remove_DataChanged(uDelegate::New(::TYPES[49/*Uno.EventHandler<Uno.EventArgs>*/], (void*)ModuleResult__OnDataChanged_fn, this));

    Invalidate();
}

// private void OnGlobalKeyChanged(string key) [instance] :45
void ModuleResult::OnGlobalKeyChanged(uString* key)
{
    uStackFrame __("Fuse.Scripting.ModuleResult", "OnGlobalKeyChanged(string)");

    if (::g::Uno::String::op_Equality(key, Id))
        Invalidate();
}

// public ModuleResult New(Fuse.Scripting.Context context, string id, Fuse.Scripting.Module mod, Fuse.Scripting.Object obj) [static] :22
ModuleResult* ModuleResult::New1(::g::Fuse::Scripting::Context* context, uString* id, ::g::Fuse::Scripting::Module* mod, ::g::Fuse::Scripting::Object* obj)
{
    ModuleResult* obj4 = (ModuleResult*)uNew(ModuleResult_typeof());
    obj4->ctor_(context, id, mod, obj);
    return obj4;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#8
// ------------------------------------------------------------

// public delegate object NativeCallback(Fuse.Scripting.Context c, object[] args) :1002
uDelegateType* NativeCallback_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.NativeCallback", 2, 0);
    type->SetSignature(uObject_typeof(),
        ::g::Fuse::Scripting::Context_typeof(),
        uObject_typeof()->Array());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#9
// ------------------------------------------------------------

// public sealed class NativeEvent :1046
// {
::g::Fuse::Scripting::NativeProperty_type* NativeEvent_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.ObjectSize = sizeof(NativeEvent);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeProperty_type);
    type = (::g::Fuse::Scripting::NativeProperty_type*)uClassType::New("Fuse.Scripting.NativeEvent", options);
    type->SetBase(::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Fuse::Scripting::Function_typeof(), ::g::Fuse::Scripting::Function_typeof()));
    type->fp_GetProperty = (void(*)(::g::Fuse::Scripting::NativeProperty*, uTRef))NativeEvent__GetProperty_fn;
    type->fp_SetProperty1 = (void(*)(::g::Fuse::Scripting::NativeProperty*, void*))NativeEvent__SetProperty1_fn;
    ::TYPES[51] = ::g::Uno::Collections::Queue_typeof()->MakeType(uObject_typeof()->Array());
    ::TYPES[52] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(2, uObject_typeof()->Array(), uObject_typeof());
    ::TYPES[13] = ::g::Fuse::Scripting::Context_typeof();
    ::TYPES[53] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[54] = ::g::Uno::Func1_typeof()->MakeType(uObject_typeof()->Array(), uObject_typeof());
    type->SetFields(8,
        ::g::Uno::Collections::Queue_typeof()->MakeType(uObject_typeof()->Array()), offsetof(::g::Fuse::Scripting::NativeEvent, _eventArgsQueue), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Scripting::NativeEvent, _jsFunction), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Scripting::NativeEvent, _queueEventsBeforeEvaluation), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)NativeEvent__New4_fn, 0, true, NativeEvent_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("RaiseAsync", NULL, (void*)NativeEvent__RaiseAsync_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()->Array()));
    return type;
}

// public NativeEvent(string name, [bool queueEventsBeforeHandlerIsSet]) :1052
void NativeEvent__ctor_4_fn(NativeEvent* __this, uString* name, bool* queueEventsBeforeHandlerIsSet)
{
    __this->ctor_4(name, *queueEventsBeforeHandlerIsSet);
}

// private void DispatchQueue() :1069
void NativeEvent__DispatchQueue_fn(NativeEvent* __this)
{
    __this->DispatchQueue();
}

// protected override sealed Fuse.Scripting.Function GetProperty() :1064
void NativeEvent__GetProperty_fn(NativeEvent* __this, ::g::Fuse::Scripting::Function** __retval)
{
    uStackFrame __("Fuse.Scripting.NativeEvent", "GetProperty()");
    return *__retval = __this->_jsFunction, void();
}

// public NativeEvent New(string name, [bool queueEventsBeforeHandlerIsSet]) :1052
void NativeEvent__New4_fn(uString* name, bool* queueEventsBeforeHandlerIsSet, NativeEvent** __retval)
{
    *__retval = NativeEvent::New4(name, *queueEventsBeforeHandlerIsSet);
}

// public void RaiseAsync(object[] args) :1075
void NativeEvent__RaiseAsync_fn(NativeEvent* __this, uArray* args)
{
    __this->RaiseAsync(args);
}

// protected override sealed void SetProperty(Fuse.Scripting.Function function) :1058
void NativeEvent__SetProperty1_fn(NativeEvent* __this, ::g::Fuse::Scripting::Function* function)
{
    uStackFrame __("Fuse.Scripting.NativeEvent", "SetProperty(Fuse.Scripting.Function)");
    __this->_jsFunction = function;
    __this->DispatchQueue();
}

// public NativeEvent(string name, [bool queueEventsBeforeHandlerIsSet]) [instance] :1052
void NativeEvent::ctor_4(uString* name, bool queueEventsBeforeHandlerIsSet)
{
    uStackFrame __("Fuse.Scripting.NativeEvent", ".ctor(string,[bool])");
    ctor_1(name);
    _eventArgsQueue = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(::TYPES[51/*Uno.Collections.Queue<object[]>*/]));
    _queueEventsBeforeEvaluation = queueEventsBeforeHandlerIsSet;
}

// private void DispatchQueue() [instance] :1069
void NativeEvent::DispatchQueue()
{
    uStackFrame __("Fuse.Scripting.NativeEvent", "DispatchQueue()");
    uArray* ret2;

    while ((uPtr(_eventArgsQueue)->Count() > 0) && (_jsFunction != NULL))
        ::g::Uno::Threading::IDispatcherExtensions__Invoke11_fn(::TYPES[52/*Uno.Threading.IDispatcherExtensions.Invoke1<object[], object>*/], uPtr(Context())->Dispatcher, uDelegate::New(::TYPES[54/*Uno.Func<object[], object>*/], uPtr(_jsFunction), offsetof(::g::Fuse::Scripting::Function_type, fp_Call)), (::g::Uno::Collections::Queue__Dequeue_fn(uPtr(_eventArgsQueue), &ret2), ret2));
}

// public void RaiseAsync(object[] args) [instance] :1075
void NativeEvent::RaiseAsync(uArray* args)
{
    uStackFrame __("Fuse.Scripting.NativeEvent", "RaiseAsync(object[])");

    if ((Context() != NULL) || _queueEventsBeforeEvaluation)
        ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(_eventArgsQueue), args);

    DispatchQueue();
}

// public NativeEvent New(string name, [bool queueEventsBeforeHandlerIsSet]) [static] :1052
NativeEvent* NativeEvent::New4(uString* name, bool queueEventsBeforeHandlerIsSet)
{
    NativeEvent* obj1 = (NativeEvent*)uNew(NativeEvent_typeof());
    obj1->ctor_4(name, queueEventsBeforeHandlerIsSet);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#8
// ------------------------------------------------------------

// public sealed class NativeFunction :1004
// {
::g::Fuse::Scripting::NativeMember_type* NativeFunction_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeMember_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(NativeFunction);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeMember_type);
    type = (::g::Fuse::Scripting::NativeMember_type*)uClassType::New("Fuse.Scripting.NativeFunction", options);
    type->SetBase(::g::Fuse::Scripting::NativeMember_typeof());
    type->fp_CreateObject = (void(*)(::g::Fuse::Scripting::NativeMember*, uObject**))NativeFunction__CreateObject_fn;
    ::TYPES[3] = uObject_typeof();
    ::TYPES[15] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[53] = ::g::Fuse::Scripting::NativeMember_typeof();
    type->SetFields(3,
        ::g::Fuse::Scripting::NativeCallback_typeof(), offsetof(::g::Fuse::Scripting::NativeFunction, _nativeCallback), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NativeFunction__New1_fn, 0, true, NativeFunction_typeof(), 2, ::g::Uno::String_typeof(), ::g::Fuse::Scripting::NativeCallback_typeof()));
    return type;
}

// public NativeFunction(string name, Fuse.Scripting.NativeCallback callback) :1013
void NativeFunction__ctor_1_fn(NativeFunction* __this, uString* name, uDelegate* callback)
{
    __this->ctor_1(name, callback);
}

// protected override sealed object CreateObject() :1008
void NativeFunction__CreateObject_fn(NativeFunction* __this, uObject** __retval)
{
    uStackFrame __("Fuse.Scripting.NativeFunction", "CreateObject()");
    return *__retval = uDelegate::New(::TYPES[15/*Fuse.Scripting.Callback*/], (void*)NativeFunction__NativeFunctionClosure__Callback_fn, NativeFunction__NativeFunctionClosure::New1(__this->_nativeCallback, __this->Context())), void();
}

// public NativeFunction New(string name, Fuse.Scripting.NativeCallback callback) :1013
void NativeFunction__New1_fn(uString* name, uDelegate* callback, NativeFunction** __retval)
{
    *__retval = NativeFunction::New1(name, callback);
}

// public NativeFunction(string name, Fuse.Scripting.NativeCallback callback) [instance] :1013
void NativeFunction::ctor_1(uString* name, uDelegate* callback)
{
    uStackFrame __("Fuse.Scripting.NativeFunction", ".ctor(string,Fuse.Scripting.NativeCallback)");
    ctor_(name);
    _nativeCallback = callback;
}

// public NativeFunction New(string name, Fuse.Scripting.NativeCallback callback) [static] :1013
NativeFunction* NativeFunction::New1(uString* name, uDelegate* callback)
{
    NativeFunction* obj1 = (NativeFunction*)uNew(NativeFunction_typeof());
    obj1->ctor_1(name, callback);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#8
// ------------------------------------------------------------

// private sealed class NativeFunction.NativeFunctionClosure :1018
// {
uType* NativeFunction__NativeFunctionClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(NativeFunction__NativeFunctionClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.NativeFunction.NativeFunctionClosure", options);
    ::TYPES[55] = ::g::Fuse::Scripting::NativeCallback_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::NativeCallback_typeof(), offsetof(::g::Fuse::Scripting::NativeFunction__NativeFunctionClosure, _callback), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Scripting::NativeFunction__NativeFunctionClosure, _context), 0);
    return type;
}

// public NativeFunctionClosure(Fuse.Scripting.NativeCallback callback, Fuse.Scripting.Context context) :1023
void NativeFunction__NativeFunctionClosure__ctor__fn(NativeFunction__NativeFunctionClosure* __this, uDelegate* callback, ::g::Fuse::Scripting::Context* context)
{
    __this->ctor_(callback, context);
}

// public object Callback(object[] args) :1029
void NativeFunction__NativeFunctionClosure__Callback_fn(NativeFunction__NativeFunctionClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Callback(args);
}

// public NativeFunctionClosure New(Fuse.Scripting.NativeCallback callback, Fuse.Scripting.Context context) :1023
void NativeFunction__NativeFunctionClosure__New1_fn(uDelegate* callback, ::g::Fuse::Scripting::Context* context, NativeFunction__NativeFunctionClosure** __retval)
{
    *__retval = NativeFunction__NativeFunctionClosure::New1(callback, context);
}

// public NativeFunctionClosure(Fuse.Scripting.NativeCallback callback, Fuse.Scripting.Context context) [instance] :1023
void NativeFunction__NativeFunctionClosure::ctor_(uDelegate* callback, ::g::Fuse::Scripting::Context* context)
{
    uStackFrame __("Fuse.Scripting.NativeFunction.NativeFunctionClosure", ".ctor(Fuse.Scripting.NativeCallback,Fuse.Scripting.Context)");
    _context = context;
    _callback = callback;
}

// public object Callback(object[] args) [instance] :1029
uObject* NativeFunction__NativeFunctionClosure::Callback(uArray* args)
{
    uStackFrame __("Fuse.Scripting.NativeFunction.NativeFunctionClosure", "Callback(object[])");
    return uPtr(_callback)->Invoke(2, (::g::Fuse::Scripting::Context*)_context, args);
}

// public NativeFunctionClosure New(Fuse.Scripting.NativeCallback callback, Fuse.Scripting.Context context) [static] :1023
NativeFunction__NativeFunctionClosure* NativeFunction__NativeFunctionClosure::New1(uDelegate* callback, ::g::Fuse::Scripting::Context* context)
{
    NativeFunction__NativeFunctionClosure* obj1 = (NativeFunction__NativeFunctionClosure*)uNew(NativeFunction__NativeFunctionClosure_typeof());
    obj1->ctor_(callback, context);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#7
// ------------------------------------------------------------

// public abstract class NativeMember :974
// {
NativeMember_type* NativeMember_typeof()
{
    static uSStrong<NativeMember_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NativeMember);
    options.TypeSize = sizeof(NativeMember_type);
    type = (NativeMember_type*)uClassType::New("Fuse.Scripting.NativeMember", options);
    ::TYPES[11] = ::g::Fuse::Scripting::Object_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Scripting::NativeMember, _Context), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Scripting::NativeMember, _ModuleObject), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Scripting::NativeMember, _Name), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Context", NULL, (void*)NativeMember__get_Context_fn, 0, false, ::g::Fuse::Scripting::Context_typeof(), 0));
    return type;
}

// protected internal NativeMember(string name) :979
void NativeMember__ctor__fn(NativeMember* __this, uString* name)
{
    __this->ctor_(name);
}

// public generated Fuse.Scripting.Context get_Context() :977
void NativeMember__get_Context_fn(NativeMember* __this, ::g::Fuse::Scripting::Context** __retval)
{
    *__retval = __this->Context();
}

// private generated void set_Context(Fuse.Scripting.Context value) :977
void NativeMember__set_Context_fn(NativeMember* __this, ::g::Fuse::Scripting::Context* value)
{
    __this->Context(value);
}

// internal void Create(Fuse.Scripting.Object obj, Fuse.Scripting.Context context) :981
void NativeMember__Create_fn(NativeMember* __this, ::g::Fuse::Scripting::Object* obj, ::g::Fuse::Scripting::Context* context)
{
    __this->Create(obj, context);
}

// protected generated Fuse.Scripting.Object get_ModuleObject() :978
void NativeMember__get_ModuleObject_fn(NativeMember* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->ModuleObject();
}

// private generated void set_ModuleObject(Fuse.Scripting.Object value) :978
void NativeMember__set_ModuleObject_fn(NativeMember* __this, ::g::Fuse::Scripting::Object* value)
{
    __this->ModuleObject(value);
}

// protected generated string get_Name() :976
void NativeMember__get_Name_fn(NativeMember* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :976
void NativeMember__set_Name_fn(NativeMember* __this, uString* value)
{
    __this->Name(value);
}

// protected internal NativeMember(string name) [instance] :979
void NativeMember::ctor_(uString* name)
{
    uStackFrame __("Fuse.Scripting.NativeMember", ".ctor(string)");
    Name(name);
}

// public generated Fuse.Scripting.Context get_Context() [instance] :977
::g::Fuse::Scripting::Context* NativeMember::Context()
{
    uStackFrame __("Fuse.Scripting.NativeMember", "get_Context()");
    return _Context;
}

// private generated void set_Context(Fuse.Scripting.Context value) [instance] :977
void NativeMember::Context(::g::Fuse::Scripting::Context* value)
{
    uStackFrame __("Fuse.Scripting.NativeMember", "set_Context(Fuse.Scripting.Context)");
    _Context = value;
}

// internal void Create(Fuse.Scripting.Object obj, Fuse.Scripting.Context context) [instance] :981
void NativeMember::Create(::g::Fuse::Scripting::Object* obj, ::g::Fuse::Scripting::Context* context)
{
    uStackFrame __("Fuse.Scripting.NativeMember", "Create(Fuse.Scripting.Object,Fuse.Scripting.Context)");
    ModuleObject(obj);
    Context(context);
    uObject* member = CreateObject();

    if (member != NULL)
        uPtr(ModuleObject())->Item(Name(), member);
}

// protected generated Fuse.Scripting.Object get_ModuleObject() [instance] :978
::g::Fuse::Scripting::Object* NativeMember::ModuleObject()
{
    uStackFrame __("Fuse.Scripting.NativeMember", "get_ModuleObject()");
    return _ModuleObject;
}

// private generated void set_ModuleObject(Fuse.Scripting.Object value) [instance] :978
void NativeMember::ModuleObject(::g::Fuse::Scripting::Object* value)
{
    uStackFrame __("Fuse.Scripting.NativeMember", "set_ModuleObject(Fuse.Scripting.Object)");
    _ModuleObject = value;
}

// protected generated string get_Name() [instance] :976
uString* NativeMember::Name()
{
    uStackFrame __("Fuse.Scripting.NativeMember", "get_Name()");
    return _Name;
}

// private generated void set_Name(string value) [instance] :976
void NativeMember::Name(uString* value)
{
    uStackFrame __("Fuse.Scripting.NativeMember", "set_Name(string)");
    _Name = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#5
// ------------------------------------------------------------

// public class NativeModule :756
// {
NativeModule_type* NativeModule_typeof()
{
    static uSStrong<NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NativeModule);
    options.TypeSize = sizeof(NativeModule_type);
    type = (NativeModule_type*)uClassType::New("Fuse.Scripting.NativeModule", options);
    type->SetBase(::g::Fuse::Scripting::Module_typeof());
    type->fp_Evaluate = (void(*)(::g::Fuse::Scripting::Module*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::ModuleResult*))NativeModule__Evaluate_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    ::STRINGS[29] = uString::Const("NativeModule(): Cannot add more members after first use");
    ::STRINGS[27] = uString::Const("exports");
    ::TYPES[56] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Scripting::NativeMember_typeof());
    ::TYPES[57] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[8] = ::g::Fuse::Scripting::ModuleResult_typeof();
    ::TYPES[11] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[58] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Scripting::NativeMember_typeof());
    ::TYPES[59] = ::g::Uno::Delegate_typeof();
    ::TYPES[60] = ::g::Uno::EventHandler_typeof();
    ::TYPES[61] = ::g::Uno::EventArgs_typeof();
    ::TYPES[62] = ::g::Fuse::Scripting::Module_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(NativeModule_type, interface1));
    type->SetFields(0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Scripting::NativeModule, _evaluated), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Scripting::NativeModule, _isEvaluated), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Scripting::NativeMember_typeof()), offsetof(::g::Fuse::Scripting::NativeModule, _members), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("add_Evaluated", NULL, (void*)NativeModule__add_Evaluated_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_Evaluated", NULL, (void*)NativeModule__remove_Evaluated_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction(".ctor", NULL, (void*)NativeModule__New1_fn, 0, true, NativeModule_typeof(), 1, ::g::Fuse::Scripting::NativeMember_typeof()->Array()));
    return type;
}

// public NativeModule(Fuse.Scripting.NativeMember[] members) :760
void NativeModule__ctor_1_fn(NativeModule* __this, uArray* members)
{
    __this->ctor_1(members);
}

// protected void AddMember(Fuse.Scripting.NativeMember member) :786
void NativeModule__AddMember_fn(NativeModule* __this, ::g::Fuse::Scripting::NativeMember* member)
{
    __this->AddMember(member);
}

// public override sealed void Evaluate(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result) :793
void NativeModule__Evaluate_fn(NativeModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result)
{
    uStackFrame __("Fuse.Scripting.NativeModule", "Evaluate(Fuse.Scripting.Context,Fuse.Scripting.ModuleResult)");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Scripting::NativeMember*> > ret6;
    ::g::Fuse::Scripting::Object* module = uPtr(result)->Object;
    ::g::Fuse::Scripting::Object* obj = uAs< ::g::Fuse::Scripting::Object*>(uPtr(module)->Item(::STRINGS[27/*"exports"*/]), ::TYPES[11/*Fuse.Scripting.Object*/]);

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Scripting::NativeMember*> > enum4 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(__this->_members), &ret6), ret6); enum4.MoveNext(::TYPES[58/*Uno.Collections.List<Fuse.Scripting.NativeMember>.Enumerator*/]); )
    {
        ::g::Fuse::Scripting::NativeMember* m = enum4.Current(::TYPES[58/*Uno.Collections.List<Fuse.Scripting.NativeMember>.Enumerator*/]);
        uPtr(m)->Create(obj, c);
    }

    __this->_isEvaluated = true;
    uDelegate* handler = __this->_evaluated;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
    {
        uPtr(handler)->Invoke(2, NULL, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
        __this->_evaluated = NULL;
    }
}

// public void add_Evaluated(Uno.EventHandler value) :774
void NativeModule__add_Evaluated_fn(NativeModule* __this, uDelegate* value)
{
    __this->add_Evaluated(value);
}

// public void remove_Evaluated(Uno.EventHandler value) :781
void NativeModule__remove_Evaluated_fn(NativeModule* __this, uDelegate* value)
{
    __this->remove_Evaluated(value);
}

// private Fuse.Scripting.Module Fuse.Scripting.IModuleProvider.GetModule() :766
void NativeModule__FuseScriptingIModuleProviderGetModule_fn(NativeModule* __this, ::g::Fuse::Scripting::Module** __retval)
{
    uStackFrame __("Fuse.Scripting.NativeModule", "Fuse.Scripting.IModuleProvider.GetModule()");
    return *__retval = __this, void();
}

// public NativeModule New(Fuse.Scripting.NativeMember[] members) :760
void NativeModule__New1_fn(uArray* members, NativeModule** __retval)
{
    *__retval = NativeModule::New1(members);
}

// public NativeModule(Fuse.Scripting.NativeMember[] members) [instance] :760
void NativeModule::ctor_1(uArray* members)
{
    uStackFrame __("Fuse.Scripting.NativeModule", ".ctor(Fuse.Scripting.NativeMember[])");
    uArray* array1;
    int index2;
    int length3;
    _members = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[56/*Uno.Collections.List<Fuse.Scripting.NativeMember>*/]));
    ctor_();

    for (array1 = members, index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        ::g::Fuse::Scripting::NativeMember* m = uPtr(array1)->Strong< ::g::Fuse::Scripting::NativeMember*>(index2);
        AddMember(m);
    }
}

// protected void AddMember(Fuse.Scripting.NativeMember member) [instance] :786
void NativeModule::AddMember(::g::Fuse::Scripting::NativeMember* member)
{
    uStackFrame __("Fuse.Scripting.NativeModule", "AddMember(Fuse.Scripting.NativeMember)");

    if (_isEvaluated)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[29/*"NativeModul...*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr(_members), member);
}

// public void add_Evaluated(Uno.EventHandler value) [instance] :774
void NativeModule::add_Evaluated(uDelegate* value)
{
    uStackFrame __("Fuse.Scripting.NativeModule", "add_Evaluated(Uno.EventHandler)");

    if (_isEvaluated)
        uPtr(value)->Invoke(2, NULL, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
    else
        _evaluated = uCast<uDelegate*>(::g::Uno::Delegate::Combine(_evaluated, value), ::TYPES[60/*Uno.EventHandler*/]);
}

// public void remove_Evaluated(Uno.EventHandler value) [instance] :781
void NativeModule::remove_Evaluated(uDelegate* value)
{
    uStackFrame __("Fuse.Scripting.NativeModule", "remove_Evaluated(Uno.EventHandler)");
    _evaluated = uCast<uDelegate*>(::g::Uno::Delegate::Remove(_evaluated, value), ::TYPES[60/*Uno.EventHandler*/]);
}

// public NativeModule New(Fuse.Scripting.NativeMember[] members) [static] :760
NativeModule* NativeModule::New1(uArray* members)
{
    NativeModule* obj5 = (NativeModule*)uNew(NativeModule_typeof());
    obj5->ctor_1(members);
    return obj5;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#6
// ------------------------------------------------------------

// public sealed class NativePromise<T, TJSResult> :856
// {
::g::Fuse::Scripting::NativeMember_type* NativePromise_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeMember_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.GenericCount = 2;
    options.PrecalcCount = 5;
    options.ObjectSize = sizeof(NativePromise);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeMember_type);
    type = (::g::Fuse::Scripting::NativeMember_type*)uClassType::New("Fuse.Scripting.NativePromise`2", options);
    type->SetBase(::g::Fuse::Scripting::NativeMember_typeof());
    type->fp_CreateObject = (void(*)(::g::Fuse::Scripting::NativeMember*, uObject**))NativePromise__CreateObject_fn;
    ::TYPES[14] = ::g::Fuse::Scripting::FutureFactory_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[15] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[63] = NativePromise__ContextClosure_typeof();
    ::TYPES[53] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[64] = ::g::Uno::Threading::Promise_typeof();
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[65] = ::g::Fuse::Scripting::FactoryClosure_typeof();
    ::TYPES[66] = ::g::Uno::Threading::Future1_typeof();
    type->SetPrecalc(
        ::TYPES[14/*Fuse.Scripting.FutureFactory`1*/]->MakeType(type->T(0)),
        ::TYPES[63/*Fuse.Scripting.NativePromise`2.ContextClosure*/]->MakeType(type->T(0), type->T(1)),
        ::TYPES[64/*Uno.Threading.Promise`1*/]->MakeType(type->T(0)),
        ::TYPES[65/*Fuse.Scripting.FactoryClosure`1*/]->MakeType(type->T(0)),
        ::TYPES[66/*Uno.Threading.Future`1*/]->MakeType(type->T(0)));
    type->SetFields(3,
        ::g::Fuse::Scripting::ResultFactory_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Scripting::NativePromise, _func), 0,
        ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Scripting::NativePromise, _futureFactory), 0,
        ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Fuse::Scripting::NativePromise, _resultConverter), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", type, (void*)NativePromise__New1_fn, 0, true, type, 3, ::g::Uno::String_typeof(), ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(type->T(0)), ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(type->T(0), type->T(1))),
        new uFunction(".ctor", type, (void*)NativePromise__New2_fn, 0, true, type, 3, ::g::Uno::String_typeof(), ::g::Fuse::Scripting::ResultFactory_typeof()->MakeType(type->T(0)), ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(type->T(0), type->T(1))));
    return type;
}

// public NativePromise(string name, Fuse.Scripting.FutureFactory<T> futureFactory, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) :876
void NativePromise__ctor_1_fn(NativePromise* __this, uString* name, uDelegate* futureFactory, uDelegate* resultConverter)
{
    __this->ctor_1(name, futureFactory, resultConverter);
}

// public NativePromise(string name, Fuse.Scripting.ResultFactory<T> func, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) :862
void NativePromise__ctor_2_fn(NativePromise* __this, uString* name, uDelegate* func, uDelegate* resultConverter)
{
    __this->ctor_2(name, func, resultConverter);
}

// protected override sealed object CreateObject() :882
void NativePromise__CreateObject_fn(NativePromise* __this, uObject** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Fuse.Scripting.NativePromise<T, TJSResult>.ContextClosure*/),
        __this->__type->T(0),
        __this->__type->T(1),
    };
    uStackFrame __("Fuse.Scripting.NativePromise`2", "CreateObject()");
    return *__retval = uDelegate::New(::TYPES[15/*Fuse.Scripting.Callback*/], (void*)NativePromise__ContextClosure__CreatePromise_fn, NativePromise__ContextClosure::New1(__types[0], __this->Context(), __this->_futureFactory, __this->_resultConverter)), void();
}

// private Uno.Threading.Future<T> Factory(object[] args) :869
void NativePromise__Factory_fn(NativePromise* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Factory(args);
}

// public NativePromise New(string name, Fuse.Scripting.FutureFactory<T> futureFactory, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) :876
void NativePromise__New1_fn(uType* __type, uString* name, uDelegate* futureFactory, uDelegate* resultConverter, NativePromise** __retval)
{
    *__retval = NativePromise::New1(__type, name, futureFactory, resultConverter);
}

// public NativePromise New(string name, Fuse.Scripting.ResultFactory<T> func, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) :862
void NativePromise__New2_fn(uType* __type, uString* name, uDelegate* func, uDelegate* resultConverter, NativePromise** __retval)
{
    *__retval = NativePromise::New2(__type, name, func, resultConverter);
}

// public NativePromise(string name, Fuse.Scripting.FutureFactory<T> futureFactory, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) [instance] :876
void NativePromise::ctor_1(uString* name, uDelegate* futureFactory, uDelegate* resultConverter)
{
    uStackFrame __("Fuse.Scripting.NativePromise`2", ".ctor(string,Fuse.Scripting.FutureFactory<T>,[Fuse.Scripting.ResultConverter<T, TJSResult>])");
    ctor_(name);
    _futureFactory = futureFactory;
    _resultConverter = resultConverter;
}

// public NativePromise(string name, Fuse.Scripting.ResultFactory<T> func, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) [instance] :862
void NativePromise::ctor_2(uString* name, uDelegate* func, uDelegate* resultConverter)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Scripting.FutureFactory<T>*/),
        __type->T(0),
    };
    uStackFrame __("Fuse.Scripting.NativePromise`2", ".ctor(string,Fuse.Scripting.ResultFactory<T>,[Fuse.Scripting.ResultConverter<T, TJSResult>])");
    ctor_(name);
    _func = func;
    _futureFactory = uDelegate::New(__types[0], (void*)NativePromise__Factory_fn, this);
    _resultConverter = resultConverter;
}

// private Uno.Threading.Future<T> Factory(object[] args) [instance] :869
::g::Uno::Threading::Future1* NativePromise::Factory(uArray* args)
{
    uType* __types[] = {
        __type->Precalced(2/*Uno.Threading.Promise<T>*/),
        __type->T(0),
        __type->Precalced(3/*Fuse.Scripting.FactoryClosure<T>*/),
        __type->Precalced(4/*Uno.Threading.Future<T>*/),
    };
    uStackFrame __("Fuse.Scripting.NativePromise`2", "Factory(object[])");
    ::g::Uno::Threading::Promise* future = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(__types[0]);
    uPtr(::g::Uno::Threading::Thread::Create(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)::g::Fuse::Scripting::FactoryClosure__Run_fn, (::g::Fuse::Scripting::FactoryClosure*)::g::Fuse::Scripting::FactoryClosure::New1(__types[2], _func, args, future))))->Start();
    return future;
}

// public NativePromise New(string name, Fuse.Scripting.FutureFactory<T> futureFactory, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) [static] :876
NativePromise* NativePromise::New1(uType* __type, uString* name, uDelegate* futureFactory, uDelegate* resultConverter)
{
    NativePromise* obj2 = (NativePromise*)uNew(__type);
    obj2->ctor_1(name, futureFactory, resultConverter);
    return obj2;
}

// public NativePromise New(string name, Fuse.Scripting.ResultFactory<T> func, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) [static] :862
NativePromise* NativePromise::New2(uType* __type, uString* name, uDelegate* func, uDelegate* resultConverter)
{
    NativePromise* obj1 = (NativePromise*)uNew(__type);
    obj1->ctor_2(name, func, resultConverter);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#10
// -------------------------------------------------------------

// public class NativeProperty<T, TJSValue> :1095
// {
NativeProperty_type* NativeProperty_typeof()
{
    static uSStrong<NativeProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.GenericCount = 2;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(NativeProperty);
    options.TypeSize = sizeof(NativeProperty_type);
    type = (NativeProperty_type*)uClassType::New("Fuse.Scripting.NativeProperty`2", options);
    type->SetBase(::g::Fuse::Scripting::NativeMember_typeof());
    type->fp_CreateObject = (void(*)(::g::Fuse::Scripting::NativeMember*, uObject**))NativeProperty__CreateObject_fn;
    type->fp_GetProperty = NativeProperty__GetProperty_fn;
    type->fp_SetProperty1 = NativeProperty__SetProperty1_fn;
    ::TYPES[53] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[15] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[59] = ::g::Uno::Delegate_typeof();
    ::TYPES[19] = ::g::Uno::Func_typeof();
    ::TYPES[67] = ::g::Fuse::Scripting::ValueConverter_typeof();
    ::TYPES[2] = ::g::Uno::Action1_typeof();
    ::TYPES[10] = uObject_typeof()->Array();
    type->SetPrecalc(
        ::TYPES[19/*Uno.Func`1*/]->MakeType(type->T(0)),
        ::TYPES[67/*Fuse.Scripting.ValueConverter`2*/]->MakeType(type->T(0), type->T(1)),
        ::TYPES[2/*Uno.Action`1*/]->MakeType(type->T(1)));
    type->SetFields(3,
        ::g::Uno::Func_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Scripting::NativeProperty, _getHandler), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Scripting::NativeProperty, _isReadonly), 0,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Action1_typeof()->MakeType(type->T(1)), offsetof(::g::Fuse::Scripting::NativeProperty, _setHandler), 0,
        ::g::Fuse::Scripting::ValueConverter_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Fuse::Scripting::NativeProperty, _valueConverter), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", type, (void*)NativeProperty__New1_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", type, (void*)NativeProperty__New2_fn, 0, true, type, 4, ::g::Uno::String_typeof(), ::g::Uno::Func_typeof()->MakeType(type->T(0)), ::g::Uno::Action1_typeof()->MakeType(type->T(1)), ::g::Fuse::Scripting::ValueConverter_typeof()->MakeType(type->T(0), type->T(1))),
        new uFunction(".ctor", type, (void*)NativeProperty__New3_fn, 0, true, type, 2, ::g::Uno::String_typeof(), type->T(1)));
    return type;
}

// public NativeProperty(string name) :1103
void NativeProperty__ctor_1_fn(NativeProperty* __this, uString* name)
{
    __this->ctor_1(name);
}

// public NativeProperty(string name, [Uno.Func<T> getHandler], [Uno.Action<TJSValue> setHandler], [Fuse.Scripting.ValueConverter<T, TJSValue> valueConverter]) :1112
void NativeProperty__ctor_2_fn(NativeProperty* __this, uString* name, uDelegate* getHandler, uDelegate* setHandler, uDelegate* valueConverter)
{
    __this->ctor_2(name, getHandler, setHandler, valueConverter);
}

// public NativeProperty(string name, TJSValue value) :1106
void NativeProperty__ctor_3_fn(NativeProperty* __this, uString* name, void* value)
{
    uType* __types[] = {
        __this->__type->GetBase(NativeProperty_typeof())->T(1),
    };
    uStackFrame __("Fuse.Scripting.NativeProperty`2", ".ctor(string,TJSValue)");
    __this->ctor_2(name, NULL, NULL, NULL);
    __this->_isReadonly = true;
    __this->_readonlyValue() = value;
}

// protected override sealed object CreateObject() :1120
void NativeProperty__CreateObject_fn(NativeProperty* __this, uObject** __retval)
{
    uStackFrame __("Fuse.Scripting.NativeProperty`2", "CreateObject()");

    if (__this->_isReadonly)
        uPtr(__this->Context())->ObjectDefineProperty1(__this->ModuleObject(), __this->Name(), uBoxPtr(__this->__type->GetBase(NativeProperty_typeof())->T(1), __this->_readonlyValue()), false, false);
    else
        uPtr(__this->Context())->ObjectDefineProperty(__this->ModuleObject(), __this->Name(), uDelegate::New(::TYPES[15/*Fuse.Scripting.Callback*/], (void*)NativeProperty__GetProperty1_fn, __this), uDelegate::New(::TYPES[15/*Fuse.Scripting.Callback*/], (void*)NativeProperty__SetProperty_fn, __this), false, false);

    return *__retval = NULL, void();
}

// protected virtual T GetProperty() :1150
void NativeProperty__GetProperty_fn(NativeProperty* __this, uTRef __retval)
{
    uStackFrame __("Fuse.Scripting.NativeProperty`2", "GetProperty()");
    return __retval.Store(__this->__type->GetBase(NativeProperty_typeof())->T(0), uT(__this->__type->GetBase(NativeProperty_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(NativeProperty_typeof())->T(0)->ValueSize))), void();
}

// private object GetProperty(object[] args) :1140
void NativeProperty__GetProperty1_fn(NativeProperty* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->GetProperty1(args);
}

// public NativeProperty New(string name) :1103
void NativeProperty__New1_fn(uType* __type, uString* name, NativeProperty** __retval)
{
    *__retval = NativeProperty::New1(__type, name);
}

// public NativeProperty New(string name, [Uno.Func<T> getHandler], [Uno.Action<TJSValue> setHandler], [Fuse.Scripting.ValueConverter<T, TJSValue> valueConverter]) :1112
void NativeProperty__New2_fn(uType* __type, uString* name, uDelegate* getHandler, uDelegate* setHandler, uDelegate* valueConverter, NativeProperty** __retval)
{
    *__retval = NativeProperty::New2(__type, name, getHandler, setHandler, valueConverter);
}

// public NativeProperty New(string name, TJSValue value) :1106
void NativeProperty__New3_fn(uType* __type, uString* name, void* value, NativeProperty** __retval)
{
    uType* __types[] = {
        __type->GetBase(NativeProperty_typeof())->T(1),
    };
    NativeProperty* obj2 = (NativeProperty*)uNew(__type);
    NativeProperty__ctor_3_fn(obj2, name, value);
    return *__retval = obj2, void();
}

// private object SetProperty(object[] args) :1130
void NativeProperty__SetProperty_fn(NativeProperty* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->SetProperty(args);
}

// protected virtual void SetProperty(TJSValue value) :1138
void NativeProperty__SetProperty1_fn(NativeProperty* __this, void* value)
{
    uType* __types[] = {
        __this->__type->GetBase(NativeProperty_typeof())->T(1),
    };
}

// public NativeProperty(string name) [instance] :1103
void NativeProperty::ctor_1(uString* name)
{
    uStackFrame __("Fuse.Scripting.NativeProperty`2", ".ctor(string)");
    ctor_2(name, NULL, NULL, NULL);
}

// public NativeProperty(string name, [Uno.Func<T> getHandler], [Uno.Action<TJSValue> setHandler], [Fuse.Scripting.ValueConverter<T, TJSValue> valueConverter]) [instance] :1112
void NativeProperty::ctor_2(uString* name, uDelegate* getHandler, uDelegate* setHandler, uDelegate* valueConverter)
{
    uStackFrame __("Fuse.Scripting.NativeProperty`2", ".ctor(string,[Uno.Func<T>],[Uno.Action<TJSValue>],[Fuse.Scripting.ValueConverter<T, TJSValue>])");
    ctor_(name);
    _setHandler = setHandler;
    _getHandler = getHandler;
    _valueConverter = valueConverter;
}

// private object GetProperty(object[] args) [instance] :1140
uObject* NativeProperty::GetProperty1(uArray* args)
{
    uType* __types[] = {
        __type->GetBase(NativeProperty_typeof())->T(1),
        __type->GetBase(NativeProperty_typeof())->T(0),
        __type->GetBase(NativeProperty_typeof())->Precalced(0/*Uno.Func<T>*/),
        __type->GetBase(NativeProperty_typeof())->Precalced(1/*Fuse.Scripting.ValueConverter<T, TJSValue>*/),
    };
    uStackFrame __("Fuse.Scripting.NativeProperty`2", "GetProperty(object[])");
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT ret6(__types[1], U_ALLOCA(__types[1]->ValueSize));
    ;
    ;
    ;

    if (::g::Uno::Delegate::op_Equality(_getHandler, NULL))
        _getHandler = uDelegate::New(__types[2], this, offsetof(NativeProperty_type, fp_GetProperty));

    if (::g::Uno::Delegate::op_Inequality(_valueConverter, NULL))
        return uBoxPtr(__types[0], (uPtr(_valueConverter)->Invoke(&ret4, 2, (::g::Fuse::Scripting::Context*)Context(), (uPtr(_getHandler)->Invoke(&ret5), (void*)ret5)), ret4));

    return uBoxPtr(__types[1], (uPtr(_getHandler)->Invoke(&ret6), ret6));
}

// private object SetProperty(object[] args) [instance] :1130
uObject* NativeProperty::SetProperty(uArray* args)
{
    uType* __types[] = {
        __type->GetBase(NativeProperty_typeof())->Precalced(2/*Uno.Action<TJSValue>*/),
        __type->GetBase(NativeProperty_typeof())->T(1),
    };
    uStackFrame __("Fuse.Scripting.NativeProperty`2", "SetProperty(object[])");

    if (::g::Uno::Delegate::op_Equality(_setHandler, NULL))
        _setHandler = uDelegate::New(__types[0], this, offsetof(NativeProperty_type, fp_SetProperty1));

    uPtr(_setHandler)->InvokeVoid(((uPtr(args)->Length() > 0) && uIs(uPtr(args)->Strong<uObject*>(0), __types[1])) ? (void*)uUnboxAny(__types[1], uPtr(args)->Strong<uObject*>(0)) : uT(__types[1], U_ALLOCA(__types[1]->ValueSize)));
    return NULL;
}

// public NativeProperty New(string name) [static] :1103
NativeProperty* NativeProperty::New1(uType* __type, uString* name)
{
    NativeProperty* obj1 = (NativeProperty*)uNew(__type);
    obj1->ctor_1(name);
    return obj1;
}

// public NativeProperty New(string name, [Uno.Func<T> getHandler], [Uno.Action<TJSValue> setHandler], [Fuse.Scripting.ValueConverter<T, TJSValue> valueConverter]) [static] :1112
NativeProperty* NativeProperty::New2(uType* __type, uString* name, uDelegate* getHandler, uDelegate* setHandler, uDelegate* valueConverter)
{
    NativeProperty* obj3 = (NativeProperty*)uNew(__type);
    obj3->ctor_2(name, getHandler, setHandler, valueConverter);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#11
// -------------------------------------------------------------

// public delegate object NodeCallback(Fuse.Node node, object[] args) :1323
uDelegateType* NodeCallback_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.NodeCallback", 2, 0);
    type->SetSignature(uObject_typeof(),
        ::g::Fuse::Node_typeof(),
        uObject_typeof()->Array());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#12
// -------------------------------------------------------------

// public static class JSCallback.NumberConverter :1489
// {
uClassType* JSCallback__NumberConverter_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.JSCallback.NumberConverter", options);
    ::TYPES[68] = ::g::Uno::Short_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[35] = ::g::Uno::Int_typeof();
    ::TYPES[69] = ::g::Uno::Long_typeof();
    ::TYPES[34] = ::g::Uno::Float_typeof();
    ::TYPES[33] = ::g::Uno::Double_typeof();
    type->Reflection.SetFunctions(3,
        new uFunction("Convert", NULL, (void*)JSCallback__NumberConverter__Convert5_fn, 0, true, uObject_typeof(), 2, ::g::Uno::Type_typeof(), uObject_typeof()),
        new uFunction("Convert`1", type, (void*)JSCallback__NumberConverter__Convert6_fn, 0, true, type->U(0), 1, uObject_typeof()),
        new uFunction("TryConvert`1", type, (void*)JSCallback__NumberConverter__TryConvert_fn, 0, true, ::g::Uno::Bool_typeof(), 2, uObject_typeof(), type->U(0)->ByRef()));
    return type;
}

// private static object Convert(double value, Uno.Type targetType) :1554
void JSCallback__NumberConverter__Convert_fn(double* value, uType* targetType, uObject** __retval)
{
    *__retval = JSCallback__NumberConverter::Convert(*value, targetType);
}

// private static object Convert(float value, Uno.Type targetType) :1545
void JSCallback__NumberConverter__Convert1_fn(float* value, uType* targetType, uObject** __retval)
{
    *__retval = JSCallback__NumberConverter::Convert1(*value, targetType);
}

// private static object Convert(int value, Uno.Type targetType) :1527
void JSCallback__NumberConverter__Convert2_fn(int* value, uType* targetType, uObject** __retval)
{
    *__retval = JSCallback__NumberConverter::Convert2(*value, targetType);
}

// private static object Convert(long value, Uno.Type targetType) :1536
void JSCallback__NumberConverter__Convert3_fn(int64_t* value, uType* targetType, uObject** __retval)
{
    *__retval = JSCallback__NumberConverter::Convert3(*value, targetType);
}

// private static object Convert(short value, Uno.Type targetType) :1518
void JSCallback__NumberConverter__Convert4_fn(int16_t* value, uType* targetType, uObject** __retval)
{
    *__retval = JSCallback__NumberConverter::Convert4(*value, targetType);
}

// public static object Convert(Uno.Type targetType, object value) :1508
void JSCallback__NumberConverter__Convert5_fn(uType* targetType, uObject* value, uObject** __retval)
{
    *__retval = JSCallback__NumberConverter::Convert5(targetType, value);
}

// public static TValue Convert<TValue>(object value) :1503
void JSCallback__NumberConverter__Convert6_fn(uType* __type, uObject* value, uTRef __retval)
{
    uType* __types[] = {
        __type->U(0),
    };
    uStackFrame __("Fuse.Scripting.JSCallback.NumberConverter", "Convert`1(object)");
    return __retval.Store(__types[0], uUnboxAny(__types[0], JSCallback__NumberConverter::Convert5(__types[0], value))), void();
}

// public static bool TryConvert<TValue>(object value, TValue& convertedValue) :1491
void JSCallback__NumberConverter__TryConvert_fn(uType* __type, uObject* value, uTRef convertedValue, bool* __retval)
{
    uType* __types[] = {
        __type->U(0),
        JSCallback__NumberConverter_typeof()->MakeMethod(1, __type->U(0)),
    };
    uStackFrame __("Fuse.Scripting.JSCallback.NumberConverter", "TryConvert`1(object,TValue&)");
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    convertedValue.Default(__types[0]);

    try
    {
        convertedValue.Store((JSCallback__NumberConverter__Convert6_fn(__types[1], value, &ret1), ret1));
        return *__retval = true, void();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* __exception1 = __t.Exception;
    }

    return *__retval = false, void();
}

// private static object Convert(double value, Uno.Type targetType) [static] :1554
uObject* JSCallback__NumberConverter::Convert(double value, uType* targetType)
{
    uStackFrame __("Fuse.Scripting.JSCallback.NumberConverter", "Convert(double,Uno.Type)");

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[68/*short*/]))
        return uBox<int16_t>(::TYPES[68/*short*/], (int16_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[35/*int*/]))
        return uBox<int>(::TYPES[35/*int*/], (int)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[69/*long*/]))
        return uBox<int64_t>(::TYPES[69/*long*/], (int64_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[34/*float*/]))
        return uBox(::TYPES[34/*float*/], (float)value);

    return uBox(::TYPES[33/*double*/], value);
}

// private static object Convert(float value, Uno.Type targetType) [static] :1545
uObject* JSCallback__NumberConverter::Convert1(float value, uType* targetType)
{
    uStackFrame __("Fuse.Scripting.JSCallback.NumberConverter", "Convert(float,Uno.Type)");

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[68/*short*/]))
        return uBox<int16_t>(::TYPES[68/*short*/], (int16_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[35/*int*/]))
        return uBox<int>(::TYPES[35/*int*/], (int)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[69/*long*/]))
        return uBox<int64_t>(::TYPES[69/*long*/], (int64_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[33/*double*/]))
        return uBox(::TYPES[33/*double*/], (double)value);

    return uBox(::TYPES[34/*float*/], value);
}

// private static object Convert(int value, Uno.Type targetType) [static] :1527
uObject* JSCallback__NumberConverter::Convert2(int value, uType* targetType)
{
    uStackFrame __("Fuse.Scripting.JSCallback.NumberConverter", "Convert(int,Uno.Type)");

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[68/*short*/]))
        return uBox<int16_t>(::TYPES[68/*short*/], (int16_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[69/*long*/]))
        return uBox<int64_t>(::TYPES[69/*long*/], (int64_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[34/*float*/]))
        return uBox(::TYPES[34/*float*/], (float)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[33/*double*/]))
        return uBox(::TYPES[33/*double*/], (double)value);

    return uBox<int>(::TYPES[35/*int*/], value);
}

// private static object Convert(long value, Uno.Type targetType) [static] :1536
uObject* JSCallback__NumberConverter::Convert3(int64_t value, uType* targetType)
{
    uStackFrame __("Fuse.Scripting.JSCallback.NumberConverter", "Convert(long,Uno.Type)");

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[68/*short*/]))
        return uBox<int16_t>(::TYPES[68/*short*/], (int16_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[35/*int*/]))
        return uBox<int>(::TYPES[35/*int*/], (int)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[34/*float*/]))
        return uBox(::TYPES[34/*float*/], (float)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[33/*double*/]))
        return uBox(::TYPES[33/*double*/], (double)value);

    return uBox<int64_t>(::TYPES[69/*long*/], value);
}

// private static object Convert(short value, Uno.Type targetType) [static] :1518
uObject* JSCallback__NumberConverter::Convert4(int16_t value, uType* targetType)
{
    uStackFrame __("Fuse.Scripting.JSCallback.NumberConverter", "Convert(short,Uno.Type)");

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[35/*int*/]))
        return uBox<int>(::TYPES[35/*int*/], (int)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[69/*long*/]))
        return uBox<int64_t>(::TYPES[69/*long*/], (int64_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[34/*float*/]))
        return uBox(::TYPES[34/*float*/], (float)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[33/*double*/]))
        return uBox(::TYPES[33/*double*/], (double)value);

    return uBox<int16_t>(::TYPES[68/*short*/], value);
}

// public static object Convert(Uno.Type targetType, object value) [static] :1508
uObject* JSCallback__NumberConverter::Convert5(uType* targetType, uObject* value)
{
    uStackFrame __("Fuse.Scripting.JSCallback.NumberConverter", "Convert(Uno.Type,object)");

    if (uIs(value, ::TYPES[68/*short*/]))
        return JSCallback__NumberConverter::Convert4(uUnbox<int16_t>(::TYPES[68/*short*/], value), targetType);

    if (uIs(value, ::TYPES[35/*int*/]))
        return JSCallback__NumberConverter::Convert2(uUnbox<int>(::TYPES[35/*int*/], value), targetType);

    if (uIs(value, ::TYPES[69/*long*/]))
        return JSCallback__NumberConverter::Convert3(uUnbox<int64_t>(::TYPES[69/*long*/], value), targetType);

    if (uIs(value, ::TYPES[34/*float*/]))
        return JSCallback__NumberConverter::Convert1(uUnbox<float>(::TYPES[34/*float*/], value), targetType);

    if (uIs(value, ::TYPES[33/*double*/]))
        return JSCallback__NumberConverter::Convert(uUnbox<double>(::TYPES[33/*double*/], value), targetType);

    return value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#11
// -------------------------------------------------------------

// public abstract class Object :1261
// {
Object_type* Object_typeof()
{
    static uSStrong<Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(Object_type);
    type = (Object_type*)uClassType::New("Fuse.Scripting.Object", options);
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Object__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Object__GetHashCode_fn;
    type->Reflection.SetFunctions(7,
        new uFunction("CallMethod", NULL, NULL, offsetof(Object_type, fp_CallMethod), false, uObject_typeof(), 2, ::g::Uno::String_typeof(), uObject_typeof()->Array()),
        new uFunction("ContainsKey", NULL, NULL, offsetof(Object_type, fp_ContainsKey), false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Equals", NULL, NULL, offsetof(Object_type, fp_Equals2), false, ::g::Uno::Bool_typeof(), 1, Object_typeof()),
        new uFunction("InstanceOf", NULL, NULL, offsetof(Object_type, fp_InstanceOf), false, ::g::Uno::Bool_typeof(), 1, ::g::Fuse::Scripting::Function_typeof()),
        new uFunction("get_Item", NULL, NULL, offsetof(Object_type, fp_get_Item), false, uObject_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("set_Item", NULL, NULL, offsetof(Object_type, fp_set_Item), false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), uObject_typeof()),
        new uFunction("get_Keys", NULL, NULL, offsetof(Object_type, fp_get_Keys), false, ::g::Uno::String_typeof()->Array(), 0));
    return type;
}

// protected generated Object() :1261
void Object__ctor__fn(Object* __this)
{
    __this->ctor_();
}

// public override sealed bool Equals(object o) :1270
void Object__Equals_fn(Object* __this, uObject* o, bool* __retval)
{
    uStackFrame __("Fuse.Scripting.Object", "Equals(object)");
    Object* a = uAs<Object*>(o, Object_typeof());
    return *__retval = (a != NULL) && __this->Equals2(a), void();
}

// public override int GetHashCode() :1276
void Object__GetHashCode_fn(Object* __this, int* __retval)
{
    uStackFrame __("Fuse.Scripting.Object", "GetHashCode()");
    int ret1;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(__this, &ret1), ret1), void();
}

// protected generated Object() [instance] :1261
void Object::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#6
// ------------------------------------------------------------

// private sealed class NativePromise<T, TJSResult>.PromiseClosure :906
// {
uType* NativePromise__PromiseClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.GenericCount = 2;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(NativePromise__PromiseClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.NativePromise`2.PromiseClosure", options);
    ::TYPES[10] = uObject_typeof()->Array();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[70] = ::g::Uno::Exception_typeof();
    ::TYPES[59] = ::g::Uno::Delegate_typeof();
    ::TYPES[71] = ::g::Fuse::Scripting::ResultConverter_typeof();
    ::TYPES[13] = ::g::Fuse::Scripting::Context_typeof();
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[12] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[2] = ::g::Uno::Action1_typeof();
    ::TYPES[72] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof());
    type->SetPrecalc(
        ::TYPES[71/*Fuse.Scripting.ResultConverter`2*/]->MakeType(type->T(0), type->T(1)),
        ::TYPES[2/*Uno.Action`1*/]->MakeType(type->T(0)));
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Scripting::NativePromise__PromiseClosure, _c), 0,
        ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Fuse::Scripting::NativePromise__PromiseClosure, _converter), 0,
        ::g::Uno::Threading::Future1_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Scripting::NativePromise__PromiseClosure, _promise), 0,
        ::g::Uno::Exception_typeof(), offsetof(::g::Fuse::Scripting::NativePromise__PromiseClosure, _reason), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Scripting::NativePromise__PromiseClosure, _reject), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Scripting::NativePromise__PromiseClosure, _resolve), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}

// public PromiseClosure(Fuse.Scripting.Context context, Uno.Threading.Future<T> promise, Fuse.Scripting.ResultConverter<T, TJSResult> converter) :916
void NativePromise__PromiseClosure__ctor__fn(NativePromise__PromiseClosure* __this, ::g::Fuse::Scripting::Context* context, ::g::Uno::Threading::Future1* promise, uDelegate* converter)
{
    __this->ctor_(context, promise, converter);
}

// private void InternalReject() :958
void NativePromise__PromiseClosure__InternalReject_fn(NativePromise__PromiseClosure* __this)
{
    __this->InternalReject();
}

// private void InternalResolve() :943
void NativePromise__PromiseClosure__InternalResolve_fn(NativePromise__PromiseClosure* __this)
{
    __this->InternalResolve();
}

// public PromiseClosure New(Fuse.Scripting.Context context, Uno.Threading.Future<T> promise, Fuse.Scripting.ResultConverter<T, TJSResult> converter) :916
void NativePromise__PromiseClosure__New1_fn(uType* __type, ::g::Fuse::Scripting::Context* context, ::g::Uno::Threading::Future1* promise, uDelegate* converter, NativePromise__PromiseClosure** __retval)
{
    *__retval = NativePromise__PromiseClosure::New1(__type, context, promise, converter);
}

// private void Reject(Uno.Exception reason) :951
void NativePromise__PromiseClosure__Reject_fn(NativePromise__PromiseClosure* __this, ::g::Uno::Exception* reason)
{
    __this->Reject(reason);
}

// private void Resolve(T result) :936
void NativePromise__PromiseClosure__Resolve_fn(NativePromise__PromiseClosure* __this, void* result)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Scripting.NativePromise`2.PromiseClosure", "Resolve(T)");
    __this->_result() = result;

    if (__this->_resolve != NULL)
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(uPtr(__this->_c)->Dispatcher), ::g::Uno::Threading::IDispatcher_typeof()), uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)NativePromise__PromiseClosure__InternalResolve_fn, __this));
}

// public object Run(object[] args) :923
void NativePromise__PromiseClosure__Run_fn(NativePromise__PromiseClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public PromiseClosure(Fuse.Scripting.Context context, Uno.Threading.Future<T> promise, Fuse.Scripting.ResultConverter<T, TJSResult> converter) [instance] :916
void NativePromise__PromiseClosure::ctor_(::g::Fuse::Scripting::Context* context, ::g::Uno::Threading::Future1* promise, uDelegate* converter)
{
    uStackFrame __("Fuse.Scripting.NativePromise`2.PromiseClosure", ".ctor(Fuse.Scripting.Context,Uno.Threading.Future<T>,Fuse.Scripting.ResultConverter<T, TJSResult>)");
    _c = context;
    _promise = promise;
    _converter = converter;
}

// private void InternalReject() [instance] :958
void NativePromise__PromiseClosure::InternalReject()
{
    uStackFrame __("Fuse.Scripting.NativePromise`2.PromiseClosure", "InternalReject()");
    uPtr(_reject)->Call(uArray::Init<uObject*>(::TYPES[10/*object[]*/], 1, (uString*)uPtr(_reason)->Message()));
}

// private void InternalResolve() [instance] :943
void NativePromise__PromiseClosure::InternalResolve()
{
    uType* __types[] = {
        __type->T(1),
        __type->Precalced(0/*Fuse.Scripting.ResultConverter<T, TJSResult>*/),
        __type->T(0),
    };
    uStackFrame __("Fuse.Scripting.NativePromise`2.PromiseClosure", "InternalResolve()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    if (::g::Uno::Delegate::op_Inequality(_converter, NULL))
        uPtr(_resolve)->Call(uArray::Init<uObject*>(::TYPES[10/*object[]*/], 1, uBoxPtr(__types[0], (uPtr(_converter)->Invoke(&ret2, 2, (::g::Fuse::Scripting::Context*)_c, (void*)_result()), ret2))));
    else
        uPtr(_resolve)->Call(uArray::Init<uObject*>(::TYPES[10/*object[]*/], 1, uBoxPtr(__types[2], _result())));
}

// private void Reject(Uno.Exception reason) [instance] :951
void NativePromise__PromiseClosure::Reject(::g::Uno::Exception* reason)
{
    uStackFrame __("Fuse.Scripting.NativePromise`2.PromiseClosure", "Reject(Uno.Exception)");
    _reason = reason;

    if (_reject != NULL)
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(uPtr(_c)->Dispatcher), ::g::Uno::Threading::IDispatcher_typeof()), uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)NativePromise__PromiseClosure__InternalReject_fn, this));
}

// public object Run(object[] args) [instance] :923
uObject* NativePromise__PromiseClosure::Run(uArray* args)
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Action<T>*/),
        __type->T(0),
    };
    uStackFrame __("Fuse.Scripting.NativePromise`2.PromiseClosure", "Run(object[])");

    if (uPtr(args)->Length() > 0)
        _resolve = uAs< ::g::Fuse::Scripting::Function*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[12/*Fuse.Scripting.Function*/]);

    if (args->Length() > 1)
        _reject = uAs< ::g::Fuse::Scripting::Function*>(args->Strong<uObject*>(1), ::TYPES[12/*Fuse.Scripting.Function*/]);

    uPtr(_promise)->Then1(uDelegate::New(__types[0], (void*)NativePromise__PromiseClosure__Resolve_fn, this), uDelegate::New(::TYPES[72/*Uno.Action<Uno.Exception>*/], (void*)NativePromise__PromiseClosure__Reject_fn, this));
    return NULL;
}

// public PromiseClosure New(Fuse.Scripting.Context context, Uno.Threading.Future<T> promise, Fuse.Scripting.ResultConverter<T, TJSResult> converter) [static] :916
NativePromise__PromiseClosure* NativePromise__PromiseClosure::New1(uType* __type, ::g::Fuse::Scripting::Context* context, ::g::Uno::Threading::Future1* promise, uDelegate* converter)
{
    NativePromise__PromiseClosure* obj1 = (NativePromise__PromiseClosure*)uNew(__type);
    obj1->ctor_(context, promise, converter);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#1
// ------------------------------------------------------------

// private sealed class ScriptModule.RequireContext :321
// {
uType* ScriptModule__RequireContext_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ScriptModule__RequireContext);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ScriptModule.RequireContext", options);
    ::STRINGS[30] = uString::Const("require(): accepts exactly one argument, ");
    ::STRINGS[31] = uString::Const(" provided");
    ::STRINGS[32] = uString::Const("require(): argument must be a string");
    ::STRINGS[33] = uString::Const("require(): module not found: ");
    ::STRINGS[27] = uString::Const("exports");
    ::TYPES[10] = uObject_typeof()->Array();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[32] = ::g::Uno::String_typeof();
    ::TYPES[0] = ::g::Uno::Action_typeof();
    ::TYPES[11] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[8] = ::g::Fuse::Scripting::ModuleResult_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Scripting::ScriptModule__RequireContext, _c), 0,
        ::g::Fuse::Scripting::ModuleResult_typeof(), offsetof(::g::Fuse::Scripting::ScriptModule__RequireContext, _dependant), 0,
        ::g::Fuse::Scripting::ScriptModule_typeof(), offsetof(::g::Fuse::Scripting::ScriptModule__RequireContext, _m), 0);
    return type;
}

// public RequireContext(Fuse.Scripting.Context c, Fuse.Scripting.ScriptModule m, Fuse.Scripting.ModuleResult dependant) :327
void ScriptModule__RequireContext__ctor__fn(ScriptModule__RequireContext* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ScriptModule* m, ::g::Fuse::Scripting::ModuleResult* dependant)
{
    __this->ctor_(c, m, dependant);
}

// public RequireContext New(Fuse.Scripting.Context c, Fuse.Scripting.ScriptModule m, Fuse.Scripting.ModuleResult dependant) :327
void ScriptModule__RequireContext__New1_fn(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ScriptModule* m, ::g::Fuse::Scripting::ModuleResult* dependant, ScriptModule__RequireContext** __retval)
{
    *__retval = ScriptModule__RequireContext::New1(c, m, dependant);
}

// public object Require(object[] args) :334
void ScriptModule__RequireContext__Require_fn(ScriptModule__RequireContext* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Require(args);
}

// public object Require(string id) :344
void ScriptModule__RequireContext__Require1_fn(ScriptModule__RequireContext* __this, uString* id, uObject** __retval)
{
    *__retval = __this->Require1(id);
}

// public RequireContext(Fuse.Scripting.Context c, Fuse.Scripting.ScriptModule m, Fuse.Scripting.ModuleResult dependant) [instance] :327
void ScriptModule__RequireContext::ctor_(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ScriptModule* m, ::g::Fuse::Scripting::ModuleResult* dependant)
{
    uStackFrame __("Fuse.Scripting.ScriptModule.RequireContext", ".ctor(Fuse.Scripting.Context,Fuse.Scripting.ScriptModule,Fuse.Scripting.ModuleResult)");
    _c = c;
    _m = m;
    _dependant = dependant;
}

// public object Require(object[] args) [instance] :334
uObject* ScriptModule__RequireContext::Require(uArray* args)
{
    uStackFrame __("Fuse.Scripting.ScriptModule.RequireContext", "Require(object[])");

    if (uPtr(args)->Length() != 1)
        U_THROW(::g::Fuse::Scripting::Error::New4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[30/*"require(): ...*/], uBox<int>(::TYPES[35/*int*/], uPtr(args)->Length())), ::STRINGS[31/*" provided"*/])));

    uString* id = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[32/*string*/]);

    if (::g::Uno::String::op_Equality(id, NULL))
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[32/*"require(): ...*/]));

    return Require1(id);
}

// public object Require(string id) [instance] :344
uObject* ScriptModule__RequireContext::Require1(uString* id)
{
    uStackFrame __("Fuse.Scripting.ScriptModule.RequireContext", "Require(string)");
    bool isFile;
    uString* path = uPtr(_m)->ComputePath(id, &isFile);
    ::g::Fuse::Scripting::ModuleResult* module = uPtr(_c)->TryGetGlobalModuleResult(path);

    if (module == NULL)
    {
        ::g::Fuse::Scripting::Module* mod = uPtr(_m)->TryResolve(path, isFile);

        if (mod == NULL)
            U_THROW(::g::Fuse::Scripting::Error::New4(::g::Uno::String::op_Addition2(::STRINGS[33/*"require(): ...*/], id)));

        module = uPtr(mod)->Evaluate1(_c, path);
    }

    uPtr(module)->AddDependency(uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)::g::Fuse::Scripting::ModuleResult__Invalidate_fn, uPtr(_dependant)));
    return uPtr(module->Object)->Item(::STRINGS[27/*"exports"*/]);
}

// public RequireContext New(Fuse.Scripting.Context c, Fuse.Scripting.ScriptModule m, Fuse.Scripting.ModuleResult dependant) [static] :327
ScriptModule__RequireContext* ScriptModule__RequireContext::New1(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ScriptModule* m, ::g::Fuse::Scripting::ModuleResult* dependant)
{
    ScriptModule__RequireContext* obj1 = (ScriptModule__RequireContext*)uNew(ScriptModule__RequireContext_typeof());
    obj1->ctor_(c, m, dependant);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#6
// ------------------------------------------------------------

// public delegate TJSResult ResultConverter<T, TJSResult>(Fuse.Scripting.Context context, T result) :824
uDelegateType* ResultConverter_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.ResultConverter`2", 2, 2);
    type->SetSignature(type->T(1),
        ::g::Fuse::Scripting::Context_typeof(),
        type->T(0));
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#6
// ------------------------------------------------------------

// public delegate T ResultFactory<T>(object[] args) :822
uDelegateType* ResultFactory_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.ResultFactory`1", 1, 1);
    type->SetSignature(type->T(0),
        uObject_typeof()->Array());
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.27.14/Scripting/$.uno#1
// ----------------------------------------------------------------

// public sealed class ScriptClass :113
// {
uType* ScriptClass_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ScriptClass);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ScriptClass", options);
    ::TYPES[73] = ::g::Fuse::Scripting::ScriptMethod_typeof()->Array();
    type->SetFields(0,
        ::g::Fuse::Scripting::ScriptMethod_typeof()->Array(), offsetof(::g::Fuse::Scripting::ScriptClass, _methods), 0,
        ::g::Fuse::Scripting::ScriptMethod_typeof()->Array(), offsetof(::g::Fuse::Scripting::ScriptClass, CallTable), 0,
        ScriptClass_typeof(), offsetof(::g::Fuse::Scripting::ScriptClass, SuperType), 0);
    type->Reflection.SetFields(2,
        new uField("CallTable", 1),
        new uField("SuperType", 2));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ScriptClass__New1_fn, 0, true, ScriptClass_typeof(), 2, ScriptClass_typeof(), ::g::Fuse::Scripting::ScriptMethod_typeof()->Array()));
    return type;
}

// public ScriptClass(Fuse.Scripting.ScriptClass superType, Fuse.Scripting.ScriptMethod[] methods) :126
void ScriptClass__ctor__fn(ScriptClass* __this, ScriptClass* superType, uArray* methods)
{
    __this->ctor_(superType, methods);
}

// private int CountMethods() :120
void ScriptClass__CountMethods_fn(ScriptClass* __this, int* __retval)
{
    *__retval = __this->CountMethods();
}

// public ScriptClass New(Fuse.Scripting.ScriptClass superType, Fuse.Scripting.ScriptMethod[] methods) :126
void ScriptClass__New1_fn(ScriptClass* superType, uArray* methods, ScriptClass** __retval)
{
    *__retval = ScriptClass::New1(superType, methods);
}

// public ScriptClass(Fuse.Scripting.ScriptClass superType, Fuse.Scripting.ScriptMethod[] methods) [instance] :126
void ScriptClass::ctor_(ScriptClass* superType, uArray* methods)
{
    uStackFrame __("Fuse.Scripting.ScriptClass", ".ctor(Fuse.Scripting.ScriptClass,Fuse.Scripting.ScriptMethod[])");
    SuperType = superType;
    _methods = methods;
    CallTable = uArray::New(::TYPES[73/*Fuse.Scripting.ScriptMethod[]*/], CountMethods());
    ScriptClass* t = this;
    int c = 0;

    while (t != NULL)
    {
        for (int i = 0; i < uPtr(uPtr(t)->_methods)->Length(); i++)
            uPtr(CallTable)->Strong< ::g::Fuse::Scripting::ScriptMethod*>(c++) = uPtr(uPtr(t)->_methods)->Strong< ::g::Fuse::Scripting::ScriptMethod*>(i);

        t = uPtr(t)->SuperType;
    }
}

// private int CountMethods() [instance] :120
int ScriptClass::CountMethods()
{
    uStackFrame __("Fuse.Scripting.ScriptClass", "CountMethods()");

    if (SuperType != NULL)
        return uPtr(_methods)->Length() + uPtr(SuperType)->CountMethods();

    return uPtr(_methods)->Length();
}

// public ScriptClass New(Fuse.Scripting.ScriptClass superType, Fuse.Scripting.ScriptMethod[] methods) [static] :126
ScriptClass* ScriptClass::New1(ScriptClass* superType, uArray* methods)
{
    ScriptClass* obj1 = (ScriptClass*)uNew(ScriptClass_typeof());
    obj1->ctor_(superType, methods);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#11
// -------------------------------------------------------------

// public sealed class ScriptException :1160
// {
::g::Uno::Exception_type* ScriptException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(ScriptException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Fuse.Scripting.ScriptException", options);
    type->SetBase(::g::Uno::Exception_typeof());
    type->fp_get_Message = (void(*)(::g::Uno::Exception*, uString**))ScriptException__get_Message_fn;
    ::STRINGS[34] = uString::Const("Name: ");
    ::STRINGS[35] = uString::Const("Error message: ");
    ::STRINGS[36] = uString::Const("File name: ");
    ::STRINGS[37] = uString::Const("Line number: ");
    ::STRINGS[38] = uString::Const("Source line: ");
    ::STRINGS[39] = uString::Const("JS stack trace: ");
    ::TYPES[31] = ::g::Uno::Bool_typeof();
    ::TYPES[35] = ::g::Uno::Int_typeof();
    type->SetFields(3,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Scripting::ScriptException, _ErrorMessage), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Scripting::ScriptException, _FileName), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Scripting::ScriptException, _JSStackTrace), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Scripting::ScriptException, _LineNumber), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Scripting::ScriptException, _Name), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Scripting::ScriptException, _SourceLine), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_ErrorMessage", NULL, (void*)ScriptException__get_ErrorMessage_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_FileName", NULL, (void*)ScriptException__get_FileName_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_JSStackTrace", NULL, (void*)ScriptException__get_JSStackTrace_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_LineNumber", NULL, (void*)ScriptException__get_LineNumber_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_Name", NULL, (void*)ScriptException__get_Name_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)ScriptException__New4_fn, 0, true, ScriptException_typeof(), 6, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("get_SourceLine", NULL, (void*)ScriptException__get_SourceLine_fn, 0, false, ::g::Uno::String_typeof(), 0));
    return type;
}

// public ScriptException(string name, string errorMessage, string fileName, int lineNumber, string sourceLine, string stackTrace) :1169
void ScriptException__ctor_3_fn(ScriptException* __this, uString* name, uString* errorMessage, uString* fileName, int* lineNumber, uString* sourceLine, uString* stackTrace)
{
    __this->ctor_3(name, errorMessage, fileName, *lineNumber, sourceLine, stackTrace);
}

// public generated string get_ErrorMessage() :1163
void ScriptException__get_ErrorMessage_fn(ScriptException* __this, uString** __retval)
{
    *__retval = __this->ErrorMessage();
}

// private generated void set_ErrorMessage(string value) :1163
void ScriptException__set_ErrorMessage_fn(ScriptException* __this, uString* value)
{
    __this->ErrorMessage(value);
}

// public generated string get_FileName() :1164
void ScriptException__get_FileName_fn(ScriptException* __this, uString** __retval)
{
    *__retval = __this->FileName();
}

// private generated void set_FileName(string value) :1164
void ScriptException__set_FileName_fn(ScriptException* __this, uString* value)
{
    __this->FileName(value);
}

// public generated string get_JSStackTrace() :1167
void ScriptException__get_JSStackTrace_fn(ScriptException* __this, uString** __retval)
{
    *__retval = __this->JSStackTrace();
}

// private generated void set_JSStackTrace(string value) :1167
void ScriptException__set_JSStackTrace_fn(ScriptException* __this, uString* value)
{
    __this->JSStackTrace(value);
}

// public generated int get_LineNumber() :1165
void ScriptException__get_LineNumber_fn(ScriptException* __this, int* __retval)
{
    *__retval = __this->LineNumber();
}

// private generated void set_LineNumber(int value) :1165
void ScriptException__set_LineNumber_fn(ScriptException* __this, int* value)
{
    __this->LineNumber(*value);
}

// public override sealed string get_Message() :1187
void ScriptException__get_Message_fn(ScriptException* __this, uString** __retval)
{
    uStackFrame __("Fuse.Scripting.ScriptException", "get_Message()");
    ::g::Uno::Text::StringBuilder* stringBuilder = ::g::Uno::Text::StringBuilder::New1();

    if (!::g::Uno::String::IsNullOrEmpty(__this->Name()))
    {
        uPtr(stringBuilder)->Append1(::STRINGS[34/*"Name: "*/]);
        stringBuilder->AppendLine(__this->Name());
    }

    if (!::g::Uno::String::IsNullOrEmpty(__this->ErrorMessage()))
    {
        uPtr(stringBuilder)->Append1(::STRINGS[35/*"Error messa...*/]);
        stringBuilder->AppendLine(__this->ErrorMessage());
    }

    if (!::g::Uno::String::IsNullOrEmpty(__this->FileName()))
    {
        uPtr(stringBuilder)->Append1(::STRINGS[36/*"File name: "*/]);
        stringBuilder->AppendLine(__this->FileName());
    }

    if (__this->LineNumber() >= 0)
    {
        uPtr(stringBuilder)->Append1(::STRINGS[37/*"Line number: "*/]);
        stringBuilder->AppendLine(::g::Uno::Int::ToString(__this->LineNumber(), ::TYPES[35/*int*/]));
    }

    if (!::g::Uno::String::IsNullOrEmpty(__this->SourceLine()))
    {
        uPtr(stringBuilder)->Append1(::STRINGS[38/*"Source line: "*/]);
        stringBuilder->AppendLine(__this->SourceLine());
    }

    if (!::g::Uno::String::IsNullOrEmpty(__this->JSStackTrace()))
    {
        uPtr(stringBuilder)->Append1(::STRINGS[39/*"JS stack tr...*/]);
        stringBuilder->AppendLine(__this->JSStackTrace());
    }

    return *__retval = stringBuilder->ToString(), void();
}

// public generated string get_Name() :1162
void ScriptException__get_Name_fn(ScriptException* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :1162
void ScriptException__set_Name_fn(ScriptException* __this, uString* value)
{
    __this->Name(value);
}

// public ScriptException New(string name, string errorMessage, string fileName, int lineNumber, string sourceLine, string stackTrace) :1169
void ScriptException__New4_fn(uString* name, uString* errorMessage, uString* fileName, int* lineNumber, uString* sourceLine, uString* stackTrace, ScriptException** __retval)
{
    *__retval = ScriptException::New4(name, errorMessage, fileName, *lineNumber, sourceLine, stackTrace);
}

// public generated string get_SourceLine() :1166
void ScriptException__get_SourceLine_fn(ScriptException* __this, uString** __retval)
{
    *__retval = __this->SourceLine();
}

// private generated void set_SourceLine(string value) :1166
void ScriptException__set_SourceLine_fn(ScriptException* __this, uString* value)
{
    __this->SourceLine(value);
}

// public ScriptException(string name, string errorMessage, string fileName, int lineNumber, string sourceLine, string stackTrace) [instance] :1169
void ScriptException::ctor_3(uString* name, uString* errorMessage, uString* fileName, int lineNumber, uString* sourceLine, uString* stackTrace)
{
    ctor_();
    Name(name);
    ErrorMessage(errorMessage);
    FileName(fileName);
    LineNumber(lineNumber);
    SourceLine(sourceLine);
    JSStackTrace(stackTrace);
}

// public generated string get_ErrorMessage() [instance] :1163
uString* ScriptException::ErrorMessage()
{
    uStackFrame __("Fuse.Scripting.ScriptException", "get_ErrorMessage()");
    return _ErrorMessage;
}

// private generated void set_ErrorMessage(string value) [instance] :1163
void ScriptException::ErrorMessage(uString* value)
{
    uStackFrame __("Fuse.Scripting.ScriptException", "set_ErrorMessage(string)");
    _ErrorMessage = value;
}

// public generated string get_FileName() [instance] :1164
uString* ScriptException::FileName()
{
    uStackFrame __("Fuse.Scripting.ScriptException", "get_FileName()");
    return _FileName;
}

// private generated void set_FileName(string value) [instance] :1164
void ScriptException::FileName(uString* value)
{
    uStackFrame __("Fuse.Scripting.ScriptException", "set_FileName(string)");
    _FileName = value;
}

// public generated string get_JSStackTrace() [instance] :1167
uString* ScriptException::JSStackTrace()
{
    uStackFrame __("Fuse.Scripting.ScriptException", "get_JSStackTrace()");
    return _JSStackTrace;
}

// private generated void set_JSStackTrace(string value) [instance] :1167
void ScriptException::JSStackTrace(uString* value)
{
    uStackFrame __("Fuse.Scripting.ScriptException", "set_JSStackTrace(string)");
    _JSStackTrace = value;
}

// public generated int get_LineNumber() [instance] :1165
int ScriptException::LineNumber()
{
    uStackFrame __("Fuse.Scripting.ScriptException", "get_LineNumber()");
    return _LineNumber;
}

// private generated void set_LineNumber(int value) [instance] :1165
void ScriptException::LineNumber(int value)
{
    uStackFrame __("Fuse.Scripting.ScriptException", "set_LineNumber(int)");
    _LineNumber = value;
}

// public generated string get_Name() [instance] :1162
uString* ScriptException::Name()
{
    uStackFrame __("Fuse.Scripting.ScriptException", "get_Name()");
    return _Name;
}

// private generated void set_Name(string value) [instance] :1162
void ScriptException::Name(uString* value)
{
    uStackFrame __("Fuse.Scripting.ScriptException", "set_Name(string)");
    _Name = value;
}

// public generated string get_SourceLine() [instance] :1166
uString* ScriptException::SourceLine()
{
    uStackFrame __("Fuse.Scripting.ScriptException", "get_SourceLine()");
    return _SourceLine;
}

// private generated void set_SourceLine(string value) [instance] :1166
void ScriptException::SourceLine(uString* value)
{
    uStackFrame __("Fuse.Scripting.ScriptException", "set_SourceLine(string)");
    _SourceLine = value;
}

// public ScriptException New(string name, string errorMessage, string fileName, int lineNumber, string sourceLine, string stackTrace) [static] :1169
ScriptException* ScriptException::New4(uString* name, uString* errorMessage, uString* fileName, int lineNumber, uString* sourceLine, uString* stackTrace)
{
    ScriptException* obj1 = (ScriptException*)uNew(ScriptException_typeof());
    obj1->ctor_3(name, errorMessage, fileName, lineNumber, sourceLine, stackTrace);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/Scripting/$.uno#1
// ----------------------------------------------------------------

// public abstract class ScriptMethod :70
// {
ScriptMethod_type* ScriptMethod_typeof()
{
    static uSStrong<ScriptMethod_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ScriptMethod);
    options.TypeSize = sizeof(ScriptMethod_type);
    type = (ScriptMethod_type*)uClassType::New("Fuse.Scripting.ScriptMethod", options);
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Scripting::ScriptMethod, Name), 0,
        ::g::Fuse::Scripting::ExecutionThread_typeof(), offsetof(::g::Fuse::Scripting::ScriptMethod, Thread), 0);
    type->Reflection.SetFields(2,
        new uField("Name", 0),
        new uField("Thread", 1));
    type->Reflection.SetFunctions(1,
        new uFunction("Call", NULL, NULL, offsetof(ScriptMethod_type, fp_Call), false, uObject_typeof(), 2, uObject_typeof(), uObject_typeof()->Array()));
    return type;
}

// public ScriptMethod(string name, Fuse.Scripting.ExecutionThread thread) :75
void ScriptMethod__ctor__fn(ScriptMethod* __this, uString* name, int* thread)
{
    __this->ctor_(name, *thread);
}

// public ScriptMethod(string name, Fuse.Scripting.ExecutionThread thread) [instance] :75
void ScriptMethod::ctor_(uString* name, int thread)
{
    uStackFrame __("Fuse.Scripting.ScriptMethod", ".ctor(string,Fuse.Scripting.ExecutionThread)");
    Name = name;
    Thread = thread;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/Scripting/$.uno#1
// ----------------------------------------------------------------

// public sealed class ScriptMethod<T> :84
// {
::g::Fuse::Scripting::ScriptMethod_type* ScriptMethod1_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::ScriptMethod_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(ScriptMethod1);
    options.TypeSize = sizeof(::g::Fuse::Scripting::ScriptMethod_type);
    type = (::g::Fuse::Scripting::ScriptMethod_type*)uClassType::New("Fuse.Scripting.ScriptMethod`1", options);
    type->SetBase(::g::Fuse::Scripting::ScriptMethod_typeof());
    type->fp_Call = (void(*)(::g::Fuse::Scripting::ScriptMethod*, uObject*, uArray*, uObject**))ScriptMethod1__Call_fn;
    ::TYPES[59] = ::g::Uno::Delegate_typeof();
    ::TYPES[4] = ::g::Uno::Action2_typeof();
    ::TYPES[10] = uObject_typeof()->Array();
    ::TYPES[21] = ::g::Uno::Func2_typeof();
    ::TYPES[3] = uObject_typeof();
    type->SetPrecalc(
        ::TYPES[4/*Uno.Action`2*/]->MakeType(type->T(0), ::TYPES[10/*object[]*/]),
        ::TYPES[21/*Uno.Func`3*/]->MakeType(type->T(0), ::TYPES[10/*object[]*/], ::TYPES[3/*object*/]));
    type->SetFields(2,
        ::g::Uno::Func2_typeof()->MakeType(type->T(0), uObject_typeof()->Array(), uObject_typeof()), offsetof(::g::Fuse::Scripting::ScriptMethod1, _method), 0,
        ::g::Uno::Action2_typeof()->MakeType(type->T(0), uObject_typeof()->Array()), offsetof(::g::Fuse::Scripting::ScriptMethod1, _voidMethod), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", type, (void*)ScriptMethod1__New1_fn, 0, true, type, 3, ::g::Uno::String_typeof(), ::g::Uno::Action2_typeof()->MakeType(type->T(0), uObject_typeof()->Array()), ::g::Fuse::Scripting::ExecutionThread_typeof()),
        new uFunction(".ctor", type, (void*)ScriptMethod1__New2_fn, 0, true, type, 3, ::g::Uno::String_typeof(), ::g::Uno::Func2_typeof()->MakeType(type->T(0), uObject_typeof()->Array(), uObject_typeof()), ::g::Fuse::Scripting::ExecutionThread_typeof()));
    return type;
}

// public ScriptMethod(string name, Uno.Action<T, object[]> method, Fuse.Scripting.ExecutionThread thread) :94
void ScriptMethod1__ctor_1_fn(ScriptMethod1* __this, uString* name, uDelegate* method, int* thread)
{
    __this->ctor_1(name, method, *thread);
}

// public ScriptMethod(string name, Uno.Func<T, object[], object> method, Fuse.Scripting.ExecutionThread thread) :89
void ScriptMethod1__ctor_2_fn(ScriptMethod1* __this, uString* name, uDelegate* method, int* thread)
{
    __this->ctor_2(name, method, *thread);
}

// public override sealed object Call(object obj, object[] args) :99
void ScriptMethod1__Call_fn(ScriptMethod1* __this, uObject* obj, uArray* args, uObject** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Uno.Action<T, object[]>*/),
        __this->__type->T(0),
        __this->__type->Precalced(1/*Uno.Func<T, object[], object>*/),
    };
    uStackFrame __("Fuse.Scripting.ScriptMethod`1", "Call(object,object[])");

    if (::g::Uno::Delegate::op_Inequality(__this->_voidMethod, NULL))
    {
        uPtr(__this->_voidMethod)->Invoke(2, (void*)uUnboxAny(__types[1], obj), args);
        return *__retval = NULL, void();
    }
    else
        return *__retval = uPtr(__this->_method)->Invoke(2, (void*)uUnboxAny(__types[1], obj), args), void();
}

// public ScriptMethod New(string name, Uno.Action<T, object[]> method, Fuse.Scripting.ExecutionThread thread) :94
void ScriptMethod1__New1_fn(uType* __type, uString* name, uDelegate* method, int* thread, ScriptMethod1** __retval)
{
    *__retval = ScriptMethod1::New1(__type, name, method, *thread);
}

// public ScriptMethod New(string name, Uno.Func<T, object[], object> method, Fuse.Scripting.ExecutionThread thread) :89
void ScriptMethod1__New2_fn(uType* __type, uString* name, uDelegate* method, int* thread, ScriptMethod1** __retval)
{
    *__retval = ScriptMethod1::New2(__type, name, method, *thread);
}

// public ScriptMethod(string name, Uno.Action<T, object[]> method, Fuse.Scripting.ExecutionThread thread) [instance] :94
void ScriptMethod1::ctor_1(uString* name, uDelegate* method, int thread)
{
    uStackFrame __("Fuse.Scripting.ScriptMethod`1", ".ctor(string,Uno.Action<T, object[]>,Fuse.Scripting.ExecutionThread)");
    ctor_(name, thread);
    _voidMethod = method;
}

// public ScriptMethod(string name, Uno.Func<T, object[], object> method, Fuse.Scripting.ExecutionThread thread) [instance] :89
void ScriptMethod1::ctor_2(uString* name, uDelegate* method, int thread)
{
    uStackFrame __("Fuse.Scripting.ScriptMethod`1", ".ctor(string,Uno.Func<T, object[], object>,Fuse.Scripting.ExecutionThread)");
    ctor_(name, thread);
    _method = method;
}

// public ScriptMethod New(string name, Uno.Action<T, object[]> method, Fuse.Scripting.ExecutionThread thread) [static] :94
ScriptMethod1* ScriptMethod1::New1(uType* __type, uString* name, uDelegate* method, int thread)
{
    ScriptMethod1* obj2 = (ScriptMethod1*)uNew(__type);
    obj2->ctor_1(name, method, thread);
    return obj2;
}

// public ScriptMethod New(string name, Uno.Func<T, object[], object> method, Fuse.Scripting.ExecutionThread thread) [static] :89
ScriptMethod1* ScriptMethod1::New2(uType* __type, uString* name, uDelegate* method, int thread)
{
    ScriptMethod1* obj1 = (ScriptMethod1*)uNew(__type);
    obj1->ctor_2(name, method, thread);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#1
// ------------------------------------------------------------

// public class ScriptModule :197
// {
::g::Fuse::Scripting::Module_type* ScriptModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Module_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ScriptModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Module_type);
    type = (::g::Fuse::Scripting::Module_type*)uClassType::New("Fuse.Scripting.ScriptModule", options);
    type->SetBase(::g::Fuse::Scripting::Module_typeof());
    type->fp_Evaluate = (void(*)(::g::Fuse::Scripting::Module*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::ModuleResult*))ScriptModule__Evaluate_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    ::STRINGS[8] = uString::Const("");
    ::STRINGS[40] = uString::Const(".");
    ::STRINGS[41] = uString::Const("/");
    ::STRINGS[42] = uString::Const("..");
    ::STRINGS[43] = uString::Const("callMethod");
    ::STRINGS[44] = uString::Const("(function(module, exports, require) { ");
    ::STRINGS[45] = uString::Const(" (function() { ");
    ::STRINGS[46] = uString::Const("\n"
        " })() })");
    ::STRINGS[47] = uString::Const("Could not evaluate module '");
    ::STRINGS[48] = uString::Const("': JavaScript code contains errors");
    ::STRINGS[27] = uString::Const("exports");
    ::STRINGS[49] = uString::Const(".js");
    ::TYPES[74] = ::g::Fuse::Scripting::IModuleProvider_typeof();
    ::TYPES[41] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[42] = ::g::Uno::String_typeof()->Array();
    ::TYPES[32] = ::g::Uno::String_typeof();
    ::TYPES[8] = ::g::Fuse::Scripting::ModuleResult_typeof();
    ::TYPES[59] = ::g::Uno::Delegate_typeof();
    ::TYPES[11] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[12] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[10] = uObject_typeof()->Array();
    ::TYPES[15] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[36] = ::g::Uno::IO::Bundle_typeof();
    ::TYPES[37] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof());
    ::TYPES[38] = ::g::Uno::IO::BundleFile_typeof();
    ::TYPES[62] = ::g::Fuse::Scripting::Module_typeof();
    ::TYPES[30] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[31] = ::g::Uno::Bool_typeof();
    ::TYPES[75] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    ::TYPES[76] = ::g::Uno::UX::BundleFileSource_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::Module_type, interface0));
    type->SetFields(0,
        ::g::Uno::IO::Bundle_typeof(), offsetof(::g::Fuse::Scripting::ScriptModule, _bundle), 0,
        ::g::Fuse::Scripting::Callback_typeof(), offsetof(::g::Fuse::Scripting::ScriptModule, _callMethod), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Scripting::ScriptModule, _code), 0,
        ::g::Uno::UX::FileSource_typeof(), offsetof(::g::Fuse::Scripting::ScriptModule, _file), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Scripting::ScriptModule, _fileName), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Scripting::ScriptModule, _lineNumberOffset), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Scripting::ScriptModule, _predeclarations), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("get_Bundle", NULL, (void*)ScriptModule__get_Bundle_fn, 0, false, ::g::Uno::IO::Bundle_typeof(), 0),
        new uFunction("set_Bundle", NULL, (void*)ScriptModule__set_Bundle_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::IO::Bundle_typeof()),
        new uFunction("get_Code", NULL, (void*)ScriptModule__get_Code_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Code", NULL, (void*)ScriptModule__set_Code_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_File", NULL, (void*)ScriptModule__get_File_fn, 0, false, ::g::Uno::UX::FileSource_typeof(), 0),
        new uFunction("set_File", NULL, (void*)ScriptModule__set_File_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::FileSource_typeof()),
        new uFunction("get_FileName", NULL, (void*)ScriptModule__get_FileName_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_FileName", NULL, (void*)ScriptModule__set_FileName_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_LineNumberOffset", NULL, (void*)ScriptModule__get_LineNumberOffset_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_LineNumberOffset", NULL, (void*)ScriptModule__set_LineNumberOffset_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)ScriptModule__New1_fn, 0, true, ScriptModule_typeof(), 2, ::g::Uno::String_typeof(), ::g::Fuse::Scripting::Callback_typeof()));
    return type;
}

// public ScriptModule(string predeclarations, Fuse.Scripting.Callback callMethod) :202
void ScriptModule__ctor_1_fn(ScriptModule* __this, uString* predeclarations, uDelegate* callMethod)
{
    __this->ctor_1(predeclarations, callMethod);
}

// private bool Acceptor(object obj) :446
void ScriptModule__Acceptor_fn(ScriptModule* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->Acceptor(obj);
}

// public Uno.IO.Bundle get_Bundle() :223
void ScriptModule__get_Bundle_fn(ScriptModule* __this, ::g::Uno::IO::Bundle** __retval)
{
    *__retval = __this->Bundle();
}

// public void set_Bundle(Uno.IO.Bundle value) :228
void ScriptModule__set_Bundle_fn(ScriptModule* __this, ::g::Uno::IO::Bundle* value)
{
    __this->Bundle(value);
}

// public string get_Code() :240
void ScriptModule__get_Code_fn(ScriptModule* __this, uString** __retval)
{
    *__retval = __this->Code();
}

// public void set_Code(string value) :245
void ScriptModule__set_Code_fn(ScriptModule* __this, uString* value)
{
    __this->Code(value);
}

// private string ComputePath(string moduleId, bool& isFile) :388
void ScriptModule__ComputePath_fn(ScriptModule* __this, uString* moduleId, bool* isFile, uString** __retval)
{
    *__retval = __this->ComputePath(moduleId, isFile);
}

// private static string ComputePath(string sourcePath, string moduleId) :405
void ScriptModule__ComputePath1_fn(uString* sourcePath, uString* moduleId, uString** __retval)
{
    *__retval = ScriptModule::ComputePath1(sourcePath, moduleId);
}

// public override sealed void Evaluate(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result) :289
void ScriptModule__Evaluate_fn(ScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result)
{
    uStackFrame __("Fuse.Scripting.ScriptModule", "Evaluate(Fuse.Scripting.Context,Fuse.Scripting.ModuleResult)");
    ::g::Fuse::Scripting::Object* module = uPtr(result)->Object;

    if (::g::Uno::Delegate::op_Inequality(__this->_callMethod, NULL))
        uPtr(module)->Item(::STRINGS[43/*"callMethod"*/], __this->_callMethod);

    uArray* newlines = uArray::New(::TYPES[41/*char[]*/], __this->LineNumberOffset());

    for (int i = 0; i < __this->LineNumberOffset(); ++i)
        uPtr(newlines)->Item<uChar>(i) = 10;

    uString* wrappedCode = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[44/*"(function(m...*/], __this->_predeclarations), ::STRINGS[45/*" (function(...*/]), uString::CharArray(newlines)), __this->Code()), ::STRINGS[46/*"\n })() })"*/]);
    ::g::Fuse::Scripting::Function* moduleFunc = uCast< ::g::Fuse::Scripting::Function*>(uPtr(c)->Evaluate(__this->FileName(), wrappedCode), ::TYPES[12/*Fuse.Scripting.Function*/]);

    if (moduleFunc == NULL)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[47/*"Could not e...*/], __this->FileName()), ::STRINGS[48/*"': JavaScri...*/])));

    uPtr(moduleFunc)->Call(uArray::Init<uObject*>(::TYPES[10/*object[]*/], 3, module, (uObject*)module->Item(::STRINGS[27/*"exports"*/]), uDelegate::New(::TYPES[15/*Fuse.Scripting.Callback*/], (void*)ScriptModule__RequireContext__Require_fn, ScriptModule__RequireContext::New1(c, __this, result))));
}

// public Uno.UX.FileSource get_File() :211
void ScriptModule__get_File_fn(ScriptModule* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :212
void ScriptModule__set_File_fn(ScriptModule* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public string get_FileName() :257
void ScriptModule__get_FileName_fn(ScriptModule* __this, uString** __retval)
{
    *__retval = __this->FileName();
}

// public void set_FileName(string value) :262
void ScriptModule__set_FileName_fn(ScriptModule* __this, uString* value)
{
    __this->FileName(value);
}

// private string GetSourcePath() :315
void ScriptModule__GetSourcePath_fn(ScriptModule* __this, uString** __retval)
{
    *__retval = __this->GetSourcePath();
}

// private static bool IsPathEqual(string src, string path) :439
void ScriptModule__IsPathEqual_fn(uString* src, uString* path, bool* __retval)
{
    *__retval = ScriptModule::IsPathEqual(src, path);
}

// public int get_LineNumberOffset() :274
void ScriptModule__get_LineNumberOffset_fn(ScriptModule* __this, int* __retval)
{
    *__retval = __this->LineNumberOffset();
}

// public void set_LineNumberOffset(int value) :279
void ScriptModule__set_LineNumberOffset_fn(ScriptModule* __this, int* value)
{
    __this->LineNumberOffset(*value);
}

// private Uno.IO.BundleFile LookForFile(string path) :421
void ScriptModule__LookForFile_fn(ScriptModule* __this, uString* path, ::g::Uno::IO::BundleFile** __retval)
{
    *__retval = __this->LookForFile(path);
}

// public ScriptModule New(string predeclarations, Fuse.Scripting.Callback callMethod) :202
void ScriptModule__New1_fn(uString* predeclarations, uDelegate* callMethod, ScriptModule** __retval)
{
    *__retval = ScriptModule::New1(predeclarations, callMethod);
}

// private Fuse.Scripting.Module TryResolve(string path, bool isFile) :367
void ScriptModule__TryResolve_fn(ScriptModule* __this, uString* path, bool* isFile, ::g::Fuse::Scripting::Module** __retval)
{
    *__retval = __this->TryResolve(path, *isFile);
}

// public ScriptModule(string predeclarations, Fuse.Scripting.Callback callMethod) [instance] :202
void ScriptModule::ctor_1(uString* predeclarations, uDelegate* callMethod)
{
    uStackFrame __("Fuse.Scripting.ScriptModule", ".ctor(string,Fuse.Scripting.Callback)");
    ctor_();
    _predeclarations = ((predeclarations != NULL) ? predeclarations : ::STRINGS[8/*""*/]);
    _callMethod = callMethod;
}

// private bool Acceptor(object obj) [instance] :446
bool ScriptModule::Acceptor(uObject* obj)
{
    uStackFrame __("Fuse.Scripting.ScriptModule", "Acceptor(object)");
    return uIs(obj, ::TYPES[74/*Fuse.Scripting.IModuleProvider*/]);
}

// public Uno.IO.Bundle get_Bundle() [instance] :223
::g::Uno::IO::Bundle* ScriptModule::Bundle()
{
    uStackFrame __("Fuse.Scripting.ScriptModule", "get_Bundle()");
    ::g::Uno::UX::BundleFileSource* bfs = uAs< ::g::Uno::UX::BundleFileSource*>(File(), ::TYPES[76/*Uno.UX.BundleFileSource*/]);
    return (bfs != NULL) ? (::g::Uno::IO::Bundle*)uPtr(uPtr(bfs)->BundleFile)->Bundle() : (::g::Uno::IO::Bundle*)_bundle;
}

// public void set_Bundle(Uno.IO.Bundle value) [instance] :228
void ScriptModule::Bundle(::g::Uno::IO::Bundle* value)
{
    uStackFrame __("Fuse.Scripting.ScriptModule", "set_Bundle(Uno.IO.Bundle)");

    if (_bundle != value)
        _bundle = value;
}

// public string get_Code() [instance] :240
uString* ScriptModule::Code()
{
    uStackFrame __("Fuse.Scripting.ScriptModule", "get_Code()");

    if (File() != NULL)
        return uPtr(File())->ReadAllText();

    return _code;
}

// public void set_Code(string value) [instance] :245
void ScriptModule::Code(uString* value)
{
    uStackFrame __("Fuse.Scripting.ScriptModule", "set_Code(string)");

    if (::g::Uno::String::op_Inequality(_code, value))
        _code = value;
}

// private string ComputePath(string moduleId, bool& isFile) [instance] :388
uString* ScriptModule::ComputePath(uString* moduleId, bool* isFile)
{
    uStackFrame __("Fuse.Scripting.ScriptModule", "ComputePath(string,bool&)");

    if (::g::Uno::String::StartsWith(uPtr(moduleId), ::STRINGS[40/*"."*/]))
    {
        *isFile = true;
        return ScriptModule::ComputePath1(GetSourcePath(), moduleId);
    }
    else if (::g::Uno::String::StartsWith(uPtr(moduleId), ::STRINGS[41/*"/"*/]))
    {
        *isFile = true;
        return ScriptModule::ComputePath1(::STRINGS[8/*""*/], moduleId);
    }

    *isFile = false;
    return moduleId;
}

// public Uno.UX.FileSource get_File() [instance] :211
::g::Uno::UX::FileSource* ScriptModule::File()
{
    uStackFrame __("Fuse.Scripting.ScriptModule", "get_File()");
    return _file;
}

// public void set_File(Uno.UX.FileSource value) [instance] :212
void ScriptModule::File(::g::Uno::UX::FileSource* value)
{
    uStackFrame __("Fuse.Scripting.ScriptModule", "set_File(Uno.UX.FileSource)");
    _file = value;
}

// public string get_FileName() [instance] :257
uString* ScriptModule::FileName()
{
    uStackFrame __("Fuse.Scripting.ScriptModule", "get_FileName()");

    if (File() != NULL)
        return uPtr(_file)->Name;
    else
        return _fileName;
}

// public void set_FileName(string value) [instance] :262
void ScriptModule::FileName(uString* value)
{
    uStackFrame __("Fuse.Scripting.ScriptModule", "set_FileName(string)");

    if (::g::Uno::String::op_Inequality(_fileName, value))
        _fileName = value;
}

// private string GetSourcePath() [instance] :315
uString* ScriptModule::GetSourcePath()
{
    uStackFrame __("Fuse.Scripting.ScriptModule", "GetSourcePath()");

    if (::g::Uno::String::op_Inequality(FileName(), NULL))
        return ::g::Uno::String::Trim1(uPtr(::g::Uno::String::Replace(uPtr(::g::Uno::IO::Path::GetDirectoryName(FileName())), '\\', '/')), uArray::Init<int>(::TYPES[41/*char[]*/], 1, '/'));
    else
        return ::STRINGS[8/*""*/];
}

// public int get_LineNumberOffset() [instance] :274
int ScriptModule::LineNumberOffset()
{
    uStackFrame __("Fuse.Scripting.ScriptModule", "get_LineNumberOffset()");

    if (File() != NULL)
        return 0;

    return _lineNumberOffset;
}

// public void set_LineNumberOffset(int value) [instance] :279
void ScriptModule::LineNumberOffset(int value)
{
    uStackFrame __("Fuse.Scripting.ScriptModule", "set_LineNumberOffset(int)");

    if (_lineNumberOffset != value)
        _lineNumberOffset = value;
}

// private Uno.IO.BundleFile LookForFile(string path) [instance] :421
::g::Uno::IO::BundleFile* ScriptModule::LookForFile(uString* path)
{
    uStackFrame __("Fuse.Scripting.ScriptModule", "LookForFile(string)");
    ::g::Uno::IO::BundleFile* ret4;
    ::g::Uno::IO::BundleFile* ret5;

    if (Bundle() != NULL)

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(Bundle())->Files()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[38/*Uno.IO.BundleFile*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Uno::IO::BundleFile* f = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[37/*Uno.Collections.IEnumerator<Uno.IO.BundleFile>*/]), &ret4), ret4);

            if (ScriptModule::IsPathEqual(uPtr(f)->SourcePath(), path))
                return f;
        }

    for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(::g::Uno::IO::Bundle::AllFiles()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[38/*Uno.IO.BundleFile*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Uno::IO::BundleFile* f1 = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[37/*Uno.Collections.IEnumerator<Uno.IO.BundleFile>*/]), &ret5), ret5);

        if (ScriptModule::IsPathEqual(uPtr(f1)->SourcePath(), path))
            return f1;
    }

    return NULL;
}

// private Fuse.Scripting.Module TryResolve(string path, bool isFile) [instance] :367
::g::Fuse::Scripting::Module* ScriptModule::TryResolve(uString* path, bool isFile)
{
    uStackFrame __("Fuse.Scripting.ScriptModule", "TryResolve(string,bool)");
    ::g::Uno::IO::BundleFile* file = LookForFile(path);

    if (file != NULL)
        return ::g::Fuse::Scripting::FileModule::New2(::g::Uno::UX::BundleFileSource::New1(file));

    if (!isFile)
    {
        uObject* res;

        if (::g::Uno::UX::Resource::TryFindGlobal(path, uDelegate::New(::TYPES[75/*Uno.Predicate<object>*/], (void*)ScriptModule__Acceptor_fn, this), &res))
        {
            uObject* mp = (uObject*)res;
            return ::g::Fuse::Scripting::IModuleProvider::GetModule(uInterface(uPtr(mp), ::TYPES[74/*Fuse.Scripting.IModuleProvider*/]));
        }
    }

    return NULL;
}

// private static string ComputePath(string sourcePath, string moduleId) [static] :405
uString* ScriptModule::ComputePath1(uString* sourcePath, uString* moduleId)
{
    uStackFrame __("Fuse.Scripting.ScriptModule", "ComputePath(string,string)");
    uArray* parts = ::g::Uno::String::Split(uPtr(moduleId), uArray::Init<int>(::TYPES[41/*char[]*/], 1, '/'));

    for (int i = 0; i < uPtr(parts)->Length(); i++)
        if (::g::Uno::String::op_Equality(uPtr(parts)->Strong<uString*>(i), ::STRINGS[8/*""*/]))
            continue;
        else if (::g::Uno::String::op_Equality(uPtr(parts)->Strong<uString*>(i), ::STRINGS[40/*"."*/]))
            continue;
        else if (::g::Uno::String::op_Equality(uPtr(parts)->Strong<uString*>(i), ::STRINGS[42/*".."*/]))
            sourcePath = ::g::Uno::String::Replace(uPtr(::g::Uno::IO::Path::GetDirectoryName(sourcePath)), '\\', '/');
        else if (uPtr(sourcePath)->Length() > 0)
            sourcePath = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(sourcePath, ::STRINGS[41/*"/"*/]), uPtr(parts)->Strong<uString*>(i));
        else
            sourcePath = parts->Strong<uString*>(i);

    return sourcePath;
}

// private static bool IsPathEqual(string src, string path) [static] :439
bool ScriptModule::IsPathEqual(uString* src, uString* path)
{
    uStackFrame __("Fuse.Scripting.ScriptModule", "IsPathEqual(string,string)");

    if (::g::Uno::String::op_Equality(src, path))
        return true;

    if (::g::Uno::String::op_Equality(src, ::g::Uno::String::op_Addition2(path, ::STRINGS[49/*".js"*/])))
        return true;

    return false;
}

// public ScriptModule New(string predeclarations, Fuse.Scripting.Callback callMethod) [static] :202
ScriptModule* ScriptModule::New1(uString* predeclarations, uDelegate* callMethod)
{
    ScriptModule* obj3 = (ScriptModule*)uNew(ScriptModule_typeof());
    obj3->ctor_1(predeclarations, callMethod);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/Scripting/$.uno
// --------------------------------------------------------------

// public sealed class StringChangedArgs :21
// {
StringChangedArgs_type* StringChangedArgs_typeof()
{
    static uSStrong<StringChangedArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(StringChangedArgs);
    options.TypeSize = sizeof(StringChangedArgs_type);
    type = (StringChangedArgs_type*)uClassType::New("Fuse.Scripting.StringChangedArgs", options);
    type->SetBase(::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::String_typeof()));
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))StringChangedArgs__FuseScriptingIScriptEventSerialize_fn;
    ::STRINGS[2] = uString::Const("value");
    ::TYPES[77] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::String_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(StringChangedArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)StringChangedArgs__New4_fn, 0, true, StringChangedArgs_typeof(), 2, ::g::Uno::String_typeof(), uObject_typeof()));
    return type;
}

// public StringChangedArgs(string newValue, object origin) :23
void StringChangedArgs__ctor_3_fn(StringChangedArgs* __this, uString* newValue, uObject* origin)
{
    __this->ctor_3(newValue, origin);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :25
void StringChangedArgs__FuseScriptingIScriptEventSerialize_fn(StringChangedArgs* __this, uObject* s)
{
    uStackFrame __("Fuse.Scripting.StringChangedArgs", "Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer)");
    uString* ret2;
    ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::g::Fuse::Scripting::IEventSerializer_typeof()), ::STRINGS[2/*"value"*/], (::g::Uno::UX::ValueChangedArgs__get_Value_fn(__this, &ret2), ret2));
}

// public StringChangedArgs New(string newValue, object origin) :23
void StringChangedArgs__New4_fn(uString* newValue, uObject* origin, StringChangedArgs** __retval)
{
    *__retval = StringChangedArgs::New4(newValue, origin);
}

// public StringChangedArgs(string newValue, object origin) [instance] :23
void StringChangedArgs::ctor_3(uString* newValue, uObject* origin)
{
    uStackFrame __("Fuse.Scripting.StringChangedArgs", ".ctor(string,object)");
    ::g::Uno::UX::ValueChangedArgs__ctor_1_fn(this, newValue, origin);
}

// public StringChangedArgs New(string newValue, object origin) [static] :23
StringChangedArgs* StringChangedArgs::New4(uString* newValue, uObject* origin)
{
    StringChangedArgs* obj1 = (StringChangedArgs*)uNew(StringChangedArgs_typeof());
    obj1->ctor_3(newValue, origin);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#11
// -------------------------------------------------------------

// public static class Value :1231
// {
uClassType* Value_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.Value", options);
    ::TYPES[33] = ::g::Uno::Double_typeof();
    ::TYPES[34] = ::g::Uno::Float_typeof();
    ::TYPES[35] = ::g::Uno::Int_typeof();
    ::TYPES[78] = ::g::Uno::UInt_typeof();
    type->Reflection.SetFunctions(1,
        new uFunction("ToNumber", NULL, (void*)Value__ToNumber_fn, 0, true, ::g::Uno::Double_typeof(), 1, uObject_typeof()));
    return type;
}

// public static double ToNumber(object obj) :1233
void Value__ToNumber_fn(uObject* obj, double* __retval)
{
    *__retval = Value::ToNumber(obj);
}

// public static double ToNumber(object obj) [static] :1233
double Value::ToNumber(uObject* obj)
{
    uStackFrame __("Fuse.Scripting.Value", "ToNumber(object)");

    if (uIs(obj, ::TYPES[33/*double*/]))
        return uUnbox<double>(::TYPES[33/*double*/], obj);

    if (uIs(obj, ::TYPES[34/*float*/]))
        return (double)uUnbox<float>(::TYPES[34/*float*/], obj);

    if (uIs(obj, ::TYPES[35/*int*/]))
        return (double)uUnbox<int>(::TYPES[35/*int*/], obj);

    if (uIs(obj, ::TYPES[78/*uint*/]))
        return (double)uUnbox<uint32_t>(::TYPES[78/*uint*/], obj);

    return 0.0;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/0.27.14/$.uno#10
// -------------------------------------------------------------

// public delegate TJSValue ValueConverter<T, TJSValue>(Fuse.Scripting.Context context, T originalValue) :1093
uDelegateType* ValueConverter_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.ValueConverter`2", 2, 2);
    type->SetSignature(type->T(1),
        ::g::Fuse::Scripting::Context_typeof(),
        type->T(0));
    return type;
}

}}} // ::g::Fuse::Scripting
