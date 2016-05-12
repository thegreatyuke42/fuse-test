// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Behavior.h>
#include <Fuse.DataContextChangedHandler.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.NameRegistry.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.Binding.h>
#include <Fuse.Reactive.CascadingPathSubscription.BindAttempt.h>
#include <Fuse.Reactive.CascadingPathSubscription.h>
#include <Fuse.Reactive.Case.h>
#include <Fuse.Reactive.Console.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.DataToResourceBinding-1.h>
#include <Fuse.Reactive.DebugLog.h>
#include <Fuse.Reactive.Dispatcher.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.FuseJS.Builtins.h>
#include <Fuse.Reactive.InternalPathSubscription.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Reactive.JavaScript.CallClosure.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.Match.h>
#include <Fuse.Reactive.Observable.h>
#include <Fuse.Reactive.ObservableSubscription.h>
#include <Fuse.Reactive.ScriptEventArgs.h>
#include <Fuse.Reactive.ScriptObjectSerializer.h>
#include <Fuse.Reactive.Select.h>
#include <Fuse.Reactive.ThreadWorker.h>
#include <Fuse.Reactive.WhileCount.h>
#include <Fuse.Reactive.WhileEmpty.h>
#include <Fuse.Resources.ResourceRegistry.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.ExecutionThread.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.IEventSerializer.h>
#include <Fuse.Scripting.IScriptEvent.h>
#include <Fuse.Scripting.JavaScriptCore.Context.h>
#include <Fuse.Scripting.Marshal.h>
#include <Fuse.Scripting.Module.h>
#include <Fuse.Scripting.ModuleResult.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptMethod.h>
#include <Fuse.Scripting.ScriptModule.h>
#include <Fuse.Triggers.WhileFailed.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Application.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.HashSet-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Int3.h>
#include <Uno.Int4.h>
#include <Uno.Object.h>
#include <Uno.Platform.Window.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Threading.ConcurrentQueue-1.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.IDispatcherExtensions.h>
#include <Uno.Threading.LockGuard.h>
#include <Uno.Threading.Mutex.h>
#include <Uno.Threading.Thread.h>
#include <Uno.Type.h>
#include <Uno.UInt.h>
#include <Uno.UX.Factory.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.NameTableEntry.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[61];
static uType* TYPES[97];

namespace g{
namespace Fuse{
namespace Reactive{

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/$.uno#11
// ------------------------------------------------------------

// private sealed class CascadingPathSubscription.BindAttempt :1635
// {
uType* CascadingPathSubscription__BindAttempt_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(CascadingPathSubscription__BindAttempt);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.CascadingPathSubscription.BindAttempt", options);
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[1] = ::g::Fuse::Reactive::CascadingPathSubscription_typeof();
    ::TYPES[2] = ::g::Fuse::Node_typeof();
    ::TYPES[3] = ::g::Fuse::DataContextChangedHandler_typeof();
    ::TYPES[4] = ::g::Fuse::Reactive::Dispatcher_typeof();
    ::TYPES[5] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Fuse::Reactive::CascadingPathSubscription_typeof(), offsetof(::g::Fuse::Reactive::CascadingPathSubscription__BindAttempt, _cps), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Reactive::CascadingPathSubscription__BindAttempt, _cur), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Reactive::CascadingPathSubscription__BindAttempt, _dcChangeds), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::CascadingPathSubscription__BindAttempt, _isDisposed), 0,
        ::g::Fuse::Reactive::InternalPathSubscription_typeof(), offsetof(::g::Fuse::Reactive::CascadingPathSubscription__BindAttempt, _ps), 0);
    return type;
}

// public BindAttempt(Fuse.Reactive.CascadingPathSubscription cps) :1642
void CascadingPathSubscription__BindAttempt__ctor__fn(CascadingPathSubscription__BindAttempt* __this, ::g::Fuse::Reactive::CascadingPathSubscription* cps)
{
    __this->ctor_(cps);
}

// public void Dispose() :1693
void CascadingPathSubscription__BindAttempt__Dispose_fn(CascadingPathSubscription__BindAttempt* __this)
{
    __this->Dispose();
}

// private void Fail() :1662
void CascadingPathSubscription__BindAttempt__Fail_fn(CascadingPathSubscription__BindAttempt* __this)
{
    __this->Fail();
}

// public BindAttempt New(Fuse.Reactive.CascadingPathSubscription cps) :1642
void CascadingPathSubscription__BindAttempt__New1_fn(::g::Fuse::Reactive::CascadingPathSubscription* cps, CascadingPathSubscription__BindAttempt** __retval)
{
    *__retval = CascadingPathSubscription__BindAttempt::New1(cps);
}

// private void OnDataContextChanged(object sender, Uno.EventArgs args) :1685
void CascadingPathSubscription__BindAttempt__OnDataContextChanged_fn(CascadingPathSubscription__BindAttempt* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnDataContextChanged(sender, args);
}

// private void TryBind() :1649
void CascadingPathSubscription__BindAttempt__TryBind_fn(CascadingPathSubscription__BindAttempt* __this)
{
    __this->TryBind();
}

// public BindAttempt(Fuse.Reactive.CascadingPathSubscription cps) [instance] :1642
void CascadingPathSubscription__BindAttempt::ctor_(::g::Fuse::Reactive::CascadingPathSubscription* cps)
{
    uStackFrame __("Fuse.Reactive.CascadingPathSubscription.BindAttempt", ".ctor(Fuse.Reactive.CascadingPathSubscription)");
    _dcChangeds = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Fuse.Node>*/]));
    _cps = cps;
    _cur = uPtr(cps)->_n;
    TryBind();
}

// public void Dispose() [instance] :1693
void CascadingPathSubscription__BindAttempt::Dispose()
{
    uStackFrame __("Fuse.Reactive.CascadingPathSubscription.BindAttempt", "Dispose()");
    ::g::Fuse::Node* ret2;

    if (_isDisposed)
        return;

    _isDisposed = true;

    if (_ps != NULL)
    {
        uPtr(_ps)->Dispose();
        _ps = NULL;
    }

    for (int i = 0; i < uPtr(_dcChangeds)->Count(); i++)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_dcChangeds), uCRef<int>(i), &ret2), ret2))->remove_DataContextChanged(uDelegate::New(::TYPES[3/*Fuse.DataContextChangedHandler*/], (void*)CascadingPathSubscription__BindAttempt__OnDataContextChanged_fn, this));
}

// private void Fail() [instance] :1662
void CascadingPathSubscription__BindAttempt::Fail()
{
    uStackFrame __("Fuse.Reactive.CascadingPathSubscription.BindAttempt", "Fail()");

    if (_isDisposed)
        return;

    if (_ps != NULL)
    {
        uPtr(_ps)->Dispose();
        _ps = NULL;
    }

    uObject* curdc = uPtr(_cur)->DataContext();

    while (_cur != NULL)
    {
        uObject* dc = uPtr(_cur)->DataContext();

        if ((dc != NULL) && (dc != curdc))
        {
            TryBind();
            return;
        }

        _cur = uPtr(_cur)->Parent();
    }
}

// private void OnDataContextChanged(object sender, Uno.EventArgs args) [instance] :1685
void CascadingPathSubscription__BindAttempt::OnDataContextChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Reactive.CascadingPathSubscription.BindAttempt", "OnDataContextChanged(object,Uno.EventArgs)");

    if (_isDisposed)
        return;

    uPtr(::g::Fuse::Reactive::Dispatcher::UIThread())->Invoke(uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)::g::Fuse::Reactive::CascadingPathSubscription__RestartBinding_fn, uPtr(_cps)));
}

// private void TryBind() [instance] :1649
void CascadingPathSubscription__BindAttempt::TryBind()
{
    uStackFrame __("Fuse.Reactive.CascadingPathSubscription.BindAttempt", "TryBind()");
    uObject* dc = uPtr(_cur)->DataContext();
    ::g::Uno::Collections::List__Add_fn(uPtr(_dcChangeds), _cur);
    uPtr(_cur)->add_DataContextChanged(uDelegate::New(::TYPES[3/*Fuse.DataContextChangedHandler*/], (void*)CascadingPathSubscription__BindAttempt__OnDataContextChanged_fn, this));

    if (dc != NULL)
    {
        _ps = ::g::Fuse::Reactive::InternalPathSubscription::New2(uPtr(_cps)->_b, uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)CascadingPathSubscription__BindAttempt__Fail_fn, this));
        uPtr(_ps)->Init(uPtr(_cur)->DataContext(), uPtr(_cps)->_path);
    }
}

// public BindAttempt New(Fuse.Reactive.CascadingPathSubscription cps) [static] :1642
CascadingPathSubscription__BindAttempt* CascadingPathSubscription__BindAttempt::New1(::g::Fuse::Reactive::CascadingPathSubscription* cps)
{
    CascadingPathSubscription__BindAttempt* obj1 = (CascadingPathSubscription__BindAttempt*)uNew(CascadingPathSubscription__BindAttempt_typeof());
    obj1->ctor_(cps);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/$.uno
// ---------------------------------------------------------

// public abstract class Binding :8
// {
Binding_type* Binding_typeof()
{
    static uSStrong<Binding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Binding);
    options.TypeSize = sizeof(Binding_type);
    type = (Binding_type*)uClassType::New("Fuse.Reactive.Binding", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Binding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Binding__OnUnrooted_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    ::TYPES[6] = ::g::Uno::IDisposable_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(Binding_type, interface0));
    type->SetFields(3,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::Binding, _pathSubscription), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::Binding, _Key), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Key", NULL, (void*)Binding__get_Key_fn, 0, false, ::g::Uno::String_typeof(), 0));
    return type;
}

// protected Binding(string key) :15
void Binding__ctor_1_fn(Binding* __this, uString* key)
{
    __this->ctor_1(key);
}

// public generated string get_Key() :11
void Binding__get_Key_fn(Binding* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :11
void Binding__set_Key_fn(Binding* __this, uString* value)
{
    __this->Key(value);
}

// protected Fuse.Node get_Node() :13
void Binding__get_Node_fn(Binding* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Node();
}

// protected override void OnRooted(Fuse.Node n) :22
void Binding__OnRooted_fn(Binding* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Reactive.Binding", "OnRooted(Fuse.Node)");
    ::g::Fuse::Behavior__OnRooted_fn(__this, n);
    __this->_pathSubscription = (uObject*)::g::Fuse::Reactive::CascadingPathSubscription::New1(__this, __this->Node(), __this->Key());
}

// protected override void OnUnrooted(Fuse.Node n) :28
void Binding__OnUnrooted_fn(Binding* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Reactive.Binding", "OnUnrooted(Fuse.Node)");
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_pathSubscription), ::TYPES[6/*Uno.IDisposable*/]));
    __this->_pathSubscription = NULL;
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, n);
}

// protected Binding(string key) [instance] :15
void Binding::ctor_1(uString* key)
{
    uStackFrame __("Fuse.Reactive.Binding", ".ctor(string)");
    ctor_();
    Key(key);
}

// public generated string get_Key() [instance] :11
uString* Binding::Key()
{
    uStackFrame __("Fuse.Reactive.Binding", "get_Key()");
    return _Key;
}

// private generated void set_Key(string value) [instance] :11
void Binding::Key(uString* value)
{
    uStackFrame __("Fuse.Reactive.Binding", "set_Key(string)");
    _Key = value;
}

// protected Fuse.Node get_Node() [instance] :13
::g::Fuse::Node* Binding::Node()
{
    uStackFrame __("Fuse.Reactive.Binding", "get_Node()");
    return ParentNode();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/$.uno#7
// -----------------------------------------------------------

// private sealed class JavaScript.CallClosure :1086
// {
uType* JavaScript__CallClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(JavaScript__CallClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.JavaScript.CallClosure", options);
    type->SetFields(0,
        uObject_typeof()->Array(), offsetof(::g::Fuse::Reactive::JavaScript__CallClosure, _args), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::JavaScript__CallClosure, _obj), 0,
        ::g::Fuse::Scripting::ScriptMethod_typeof(), offsetof(::g::Fuse::Reactive::JavaScript__CallClosure, _sm), 0);
    return type;
}

// public CallClosure(Fuse.Scripting.ScriptMethod sm, object obj, object[] args) :1092
void JavaScript__CallClosure__ctor__fn(JavaScript__CallClosure* __this, ::g::Fuse::Scripting::ScriptMethod* sm, uObject* obj, uArray* args)
{
    __this->ctor_(sm, obj, args);
}

// public CallClosure New(Fuse.Scripting.ScriptMethod sm, object obj, object[] args) :1092
void JavaScript__CallClosure__New1_fn(::g::Fuse::Scripting::ScriptMethod* sm, uObject* obj, uArray* args, JavaScript__CallClosure** __retval)
{
    *__retval = JavaScript__CallClosure::New1(sm, obj, args);
}

// public void Run() :1099
void JavaScript__CallClosure__Run_fn(JavaScript__CallClosure* __this)
{
    __this->Run();
}

// public CallClosure(Fuse.Scripting.ScriptMethod sm, object obj, object[] args) [instance] :1092
void JavaScript__CallClosure::ctor_(::g::Fuse::Scripting::ScriptMethod* sm, uObject* obj, uArray* args)
{
    uStackFrame __("Fuse.Reactive.JavaScript.CallClosure", ".ctor(Fuse.Scripting.ScriptMethod,object,object[])");
    _sm = sm;
    _obj = obj;
    _args = args;
}

// public void Run() [instance] :1099
void JavaScript__CallClosure::Run()
{
    uStackFrame __("Fuse.Reactive.JavaScript.CallClosure", "Run()");
    uPtr(_sm)->Call(_obj, _args);
}

// public CallClosure New(Fuse.Scripting.ScriptMethod sm, object obj, object[] args) [static] :1092
JavaScript__CallClosure* JavaScript__CallClosure::New1(::g::Fuse::Scripting::ScriptMethod* sm, uObject* obj, uArray* args)
{
    JavaScript__CallClosure* obj1 = (JavaScript__CallClosure*)uNew(JavaScript__CallClosure_typeof());
    obj1->ctor_(sm, obj, args);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/$.uno#11
// ------------------------------------------------------------

// internal sealed class CascadingPathSubscription :1607
// {
CascadingPathSubscription_type* CascadingPathSubscription_typeof()
{
    static uSStrong<CascadingPathSubscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CascadingPathSubscription);
    options.TypeSize = sizeof(CascadingPathSubscription_type);
    type = (CascadingPathSubscription_type*)uClassType::New("Fuse.Reactive.CascadingPathSubscription", options);
    type->interface0.fp_Dispose = (void(*)(uObject*))CascadingPathSubscription__Dispose_fn;
    ::TYPES[4] = ::g::Fuse::Reactive::Dispatcher_typeof();
    ::TYPES[5] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(CascadingPathSubscription_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::Binding_typeof(), offsetof(::g::Fuse::Reactive::CascadingPathSubscription, _b), 0,
        CascadingPathSubscription__BindAttempt_typeof(), offsetof(::g::Fuse::Reactive::CascadingPathSubscription, _bindAttempt), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Reactive::CascadingPathSubscription, _n), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::CascadingPathSubscription, _path), 0);
    return type;
}

// public CascadingPathSubscription(Fuse.Reactive.Binding b, Fuse.Node n, string path) :1615
void CascadingPathSubscription__ctor__fn(CascadingPathSubscription* __this, ::g::Fuse::Reactive::Binding* b, ::g::Fuse::Node* n, uString* path)
{
    __this->ctor_(b, n, path);
}

// public void Dispose() :1710
void CascadingPathSubscription__Dispose_fn(CascadingPathSubscription* __this)
{
    __this->Dispose();
}

// public CascadingPathSubscription New(Fuse.Reactive.Binding b, Fuse.Node n, string path) :1615
void CascadingPathSubscription__New1_fn(::g::Fuse::Reactive::Binding* b, ::g::Fuse::Node* n, uString* path, CascadingPathSubscription** __retval)
{
    *__retval = CascadingPathSubscription::New1(b, n, path);
}

// private void RestartBinding() :1624
void CascadingPathSubscription__RestartBinding_fn(CascadingPathSubscription* __this)
{
    __this->RestartBinding();
}

// public CascadingPathSubscription(Fuse.Reactive.Binding b, Fuse.Node n, string path) [instance] :1615
void CascadingPathSubscription::ctor_(::g::Fuse::Reactive::Binding* b, ::g::Fuse::Node* n, uString* path)
{
    uStackFrame __("Fuse.Reactive.CascadingPathSubscription", ".ctor(Fuse.Reactive.Binding,Fuse.Node,string)");
    _n = n;
    _b = b;
    _path = path;
    uPtr(::g::Fuse::Reactive::Dispatcher::UIThread())->Invoke(uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)CascadingPathSubscription__RestartBinding_fn, this));
}

// public void Dispose() [instance] :1710
void CascadingPathSubscription::Dispose()
{
    uStackFrame __("Fuse.Reactive.CascadingPathSubscription", "Dispose()");

    if (_bindAttempt != NULL)
    {
        uPtr(_bindAttempt)->Dispose();
        _bindAttempt = NULL;
    }
}

// private void RestartBinding() [instance] :1624
void CascadingPathSubscription::RestartBinding()
{
    uStackFrame __("Fuse.Reactive.CascadingPathSubscription", "RestartBinding()");

    if (_bindAttempt != NULL)
    {
        uPtr(_bindAttempt)->Dispose();
        _bindAttempt = NULL;
    }

    _bindAttempt = CascadingPathSubscription__BindAttempt::New1(this);
}

// public CascadingPathSubscription New(Fuse.Reactive.Binding b, Fuse.Node n, string path) [static] :1615
CascadingPathSubscription* CascadingPathSubscription::New1(::g::Fuse::Reactive::Binding* b, ::g::Fuse::Node* n, uString* path)
{
    CascadingPathSubscription* obj1 = (CascadingPathSubscription*)uNew(CascadingPathSubscription_typeof());
    obj1->ctor_(b, n, path);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/$.uno#8
// -----------------------------------------------------------

// public sealed class Case :1362
// {
uType* Case_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Case);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.Case", options);
    type->fp_ctor_ = (void*)Case__New1_fn;
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[9] = uObject_typeof();
    ::TYPES[10] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Factory_typeof());
    ::TYPES[11] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Uno::UX::Factory_typeof());
    ::TYPES[12] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Factory_typeof());
    ::TYPES[13] = ::g::Uno::Double_typeof();
    ::TYPES[14] = ::g::Uno::String_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Factory_typeof()), offsetof(::g::Fuse::Reactive::Case, _factories), 0,
        ::g::Fuse::Reactive::Match_typeof(), offsetof(::g::Fuse::Reactive::Case, _match), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Case, _value), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Case, _IsDefault), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("get_Bool", NULL, (void*)Case__get_Bool_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Bool", NULL, (void*)Case__set_Bool_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Factories", NULL, (void*)Case__get_Factories_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Factory_typeof()), 0),
        new uFunction("get_IsDefault", NULL, (void*)Case__get_IsDefault_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsDefault", NULL, (void*)Case__set_IsDefault_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)Case__New1_fn, 0, true, Case_typeof(), 0),
        new uFunction("get_Number", NULL, (void*)Case__get_Number_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Number", NULL, (void*)Case__set_Number_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_String", NULL, (void*)Case__get_String_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_String", NULL, (void*)Case__set_String_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Value", NULL, (void*)Case__get_Value_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)Case__set_Value_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()));
    return type;
}

// public generated Case() :1362
void Case__ctor__fn(Case* __this)
{
    __this->ctor_();
}

// public bool get_Bool() :1395
void Case__get_Bool_fn(Case* __this, bool* __retval)
{
    *__retval = __this->Bool();
}

// public void set_Bool(bool value) :1396
void Case__set_Bool_fn(Case* __this, bool* value)
{
    __this->Bool(*value);
}

// public Uno.Collections.IList<Uno.UX.Factory> get_Factories() :1411
void Case__get_Factories_fn(Case* __this, uObject** __retval)
{
    *__retval = __this->Factories();
}

// private void Invalidate() :1422
void Case__Invalidate_fn(Case* __this)
{
    __this->Invalidate();
}

// public generated bool get_IsDefault() :1401
void Case__get_IsDefault_fn(Case* __this, bool* __retval)
{
    *__retval = __this->IsDefault();
}

// public generated void set_IsDefault(bool value) :1402
void Case__set_IsDefault_fn(Case* __this, bool* value)
{
    __this->IsDefault(*value);
}

// public generated Case New() :1362
void Case__New1_fn(Case** __retval)
{
    *__retval = Case::New1();
}

// public double get_Number() :1389
void Case__get_Number_fn(Case* __this, double* __retval)
{
    *__retval = __this->Number();
}

// public void set_Number(double value) :1390
void Case__set_Number_fn(Case* __this, double* value)
{
    __this->Number(*value);
}

// private void OnFactoriesChanged(Uno.UX.Factory f) :1417
void Case__OnFactoriesChanged_fn(Case* __this, ::g::Uno::UX::Factory* f)
{
    __this->OnFactoriesChanged(f);
}

// public string get_String() :1383
void Case__get_String_fn(Case* __this, uString** __retval)
{
    *__retval = __this->String();
}

// public void set_String(string value) :1384
void Case__set_String_fn(Case* __this, uString* value)
{
    __this->String(value);
}

// public object get_Value() :1370
void Case__get_Value_fn(Case* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(object value) :1371
void Case__set_Value_fn(Case* __this, uObject* value)
{
    __this->Value(value);
}

// public generated Case() [instance] :1362
void Case::ctor_()
{
}

// public bool get_Bool() [instance] :1395
bool Case::Bool()
{
    uStackFrame __("Fuse.Reactive.Case", "get_Bool()");
    return uIs(_value, ::TYPES[8/*bool*/]) ? uUnbox<bool>(::TYPES[8/*bool*/], _value) : false;
}

// public void set_Bool(bool value) [instance] :1396
void Case::Bool(bool value)
{
    uStackFrame __("Fuse.Reactive.Case", "set_Bool(bool)");
    Value(uBox(::TYPES[8/*bool*/], value));
}

// public Uno.Collections.IList<Uno.UX.Factory> get_Factories() [instance] :1411
uObject* Case::Factories()
{
    uStackFrame __("Fuse.Reactive.Case", "get_Factories()");
    uObject* ind1 = _factories;
    return (ind1 != NULL) ? ind1 : (uObject*)(_factories = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[11/*Uno.Collections.ObservableList<Uno.UX.Factory>*/], uDelegate::New(::TYPES[12/*Uno.Action<Uno.UX.Factory>*/], (void*)Case__OnFactoriesChanged_fn, this), uDelegate::New(::TYPES[12/*Uno.Action<Uno.UX.Factory>*/], (void*)Case__OnFactoriesChanged_fn, this))));
}

// private void Invalidate() [instance] :1422
void Case::Invalidate()
{
    uStackFrame __("Fuse.Reactive.Case", "Invalidate()");

    if (_match != NULL)
        uPtr(_match)->Invalidate();
}

// public generated bool get_IsDefault() [instance] :1401
bool Case::IsDefault()
{
    uStackFrame __("Fuse.Reactive.Case", "get_IsDefault()");
    return _IsDefault;
}

// public generated void set_IsDefault(bool value) [instance] :1402
void Case::IsDefault(bool value)
{
    uStackFrame __("Fuse.Reactive.Case", "set_IsDefault(bool)");
    _IsDefault = value;
}

// public double get_Number() [instance] :1389
double Case::Number()
{
    uStackFrame __("Fuse.Reactive.Case", "get_Number()");
    return uIs(_value, ::TYPES[13/*double*/]) ? uUnbox<double>(::TYPES[13/*double*/], _value) : 0.0;
}

// public void set_Number(double value) [instance] :1390
void Case::Number(double value)
{
    uStackFrame __("Fuse.Reactive.Case", "set_Number(double)");
    Value(uBox(::TYPES[13/*double*/], value));
}

// private void OnFactoriesChanged(Uno.UX.Factory f) [instance] :1417
void Case::OnFactoriesChanged(::g::Uno::UX::Factory* f)
{
    uStackFrame __("Fuse.Reactive.Case", "OnFactoriesChanged(Uno.UX.Factory)");
    Invalidate();
}

// public string get_String() [instance] :1383
uString* Case::String()
{
    uStackFrame __("Fuse.Reactive.Case", "get_String()");
    return uAs<uString*>(_value, ::TYPES[14/*string*/]);
}

// public void set_String(string value) [instance] :1384
void Case::String(uString* value)
{
    uStackFrame __("Fuse.Reactive.Case", "set_String(string)");
    Value(value);
}

// public object get_Value() [instance] :1370
uObject* Case::Value()
{
    uStackFrame __("Fuse.Reactive.Case", "get_Value()");
    return _value;
}

// public void set_Value(object value) [instance] :1371
void Case::Value(uObject* value)
{
    uStackFrame __("Fuse.Reactive.Case", "set_Value(object)");

    if (_value != value)
    {
        _value = value;
        Invalidate();
    }
}

// public generated Case New() [static] :1362
Case* Case::New1()
{
    Case* obj2 = (Case*)uNew(Case_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/FuseJS/$.uno#1
// ------------------------------------------------------------------

// internal static class Console :99
// {
uClassType* Console_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.Console", options);
    ::STRINGS[0] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/FuseJS/$.uno#1");
    ::STRINGS[1] = uString::Const("[Function]");
    ::STRINGS[2] = uString::Const("[object]");
    ::STRINGS[3] = uString::Const("[array]");
    ::STRINGS[4] = uString::Const(" - ");
    ::STRINGS[5] = uString::Const("log");
    ::STRINGS[6] = uString::Const("dir");
    ::STRINGS[7] = uString::Const("console");
    ::STRINGS[8] = uString::Const("null");
    ::TYPES[15] = uObject_typeof()->Array();
    ::TYPES[16] = ::g::Uno::Int_typeof();
    ::TYPES[17] = ::g::Uno::Float_typeof();
    ::TYPES[13] = ::g::Uno::Double_typeof();
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[14] = ::g::Uno::String_typeof();
    ::TYPES[18] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[19] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[20] = ::g::Uno::String_typeof()->Array();
    ::TYPES[21] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[9] = uObject_typeof();
    ::TYPES[22] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[23] = ::g::Fuse::Scripting::Context_typeof();
    return type;
}

// private static object Dir(object[] args) :119
void Console__Dir_fn(uArray* args, uObject** __retval)
{
    *__retval = Console::Dir(args);
}

// private static void Dir(Uno.Text.StringBuilder builder, object obj, [int indent]) :132
void Console__Dir1_fn(::g::Uno::Text::StringBuilder* builder, uObject* obj, int* indent)
{
    Console::Dir1(builder, obj, *indent);
}

// private static void Indent(Uno.Text.StringBuilder builder, int indent) :192
void Console__Indent_fn(::g::Uno::Text::StringBuilder* builder, int* indent)
{
    Console::Indent(builder, *indent);
}

// public static void Init(Fuse.Scripting.Context c) :101
void Console__Init_fn(::g::Fuse::Scripting::Context* c)
{
    Console::Init(c);
}

// private static object Log(object[] args) :109
void Console__Log_fn(uArray* args, uObject** __retval)
{
    *__retval = Console::Log(args);
}

// private static object Dir(object[] args) [static] :119
uObject* Console::Dir(uArray* args)
{
    uStackFrame __("Fuse.Reactive.Console", "Dir(object[])");
    ::g::Uno::Text::StringBuilder* builder = ::g::Uno::Text::StringBuilder::New1();

    for (int i = 0; i < uPtr(args)->Length(); i++)
        Console::Dir1(builder, uPtr(args)->Strong<uObject*>(i), 0);

    ::g::Uno::Diagnostics::Debug::Log5(builder->ToString(), 1, ::STRINGS[0/*"/usr/local/...*/], 128);
    return NULL;
}

// private static void Dir(Uno.Text.StringBuilder builder, object obj, [int indent]) [static] :132
void Console::Dir1(::g::Uno::Text::StringBuilder* builder, uObject* obj, int indent)
{
    uStackFrame __("Fuse.Reactive.Console", "Dir(Uno.Text.StringBuilder,object,[int])");
    uArray* array1;
    int index2;
    int length3;

    if ((((uIs(obj, ::TYPES[16/*int*/]) || uIs(obj, ::TYPES[17/*float*/])) || uIs(obj, ::TYPES[13/*double*/])) || uIs(obj, ::TYPES[8/*bool*/])) || uIs(obj, ::TYPES[14/*string*/]))
    {
        Console::Indent(builder, indent);
        uPtr(builder)->AppendLine(::g::Uno::Object::ToString(uPtr(obj)));
        return;
    }

    if (uIs(obj, ::TYPES[18/*Fuse.Scripting.Function*/]))
    {
        Console::Indent(builder, indent);
        uPtr(builder)->AppendLine(::STRINGS[1/*"[Function]"*/]);
        return;
    }

    if (uIs(obj, ::TYPES[19/*Fuse.Scripting.Object*/]))
    {
        if (indent >= 1)
        {
            Console::Indent(builder, indent);
            uPtr(builder)->AppendLine(::STRINGS[2/*"[object]"*/]);
        }
        else
        {
            ::g::Fuse::Scripting::Object* o = uCast< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[19/*Fuse.Scripting.Object*/]);

            for (array1 = uPtr(o)->Keys(), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
            {
                uString* k = uPtr(array1)->Strong<uString*>(index2);
                Console::Indent(builder, indent);
                uPtr(builder)->AppendLine(k);
                Console::Dir1(builder, uPtr(o)->Item(k), indent + 1);
            }
        }

        return;
    }

    if (uIs(obj, ::TYPES[21/*Fuse.Scripting.Array*/]))
    {
        if (indent >= 1)
        {
            Console::Indent(builder, indent);
            uPtr(builder)->AppendLine(::STRINGS[3/*"[array]"*/]);
        }
        else
        {
            ::g::Fuse::Scripting::Array* a = uCast< ::g::Fuse::Scripting::Array*>(obj, ::TYPES[21/*Fuse.Scripting.Array*/]);

            for (int i = 0; i < uPtr(a)->Length(); i++)
                Console::Dir1(builder, uPtr(a)->Item(i), indent);
        }

        return;
    }
}

// private static void Indent(Uno.Text.StringBuilder builder, int indent) [static] :192
void Console::Indent(::g::Uno::Text::StringBuilder* builder, int indent)
{
    uStackFrame __("Fuse.Reactive.Console", "Indent(Uno.Text.StringBuilder,int)");

    for (int i = 0; i < indent; i++)
        uPtr(builder)->Append1(::STRINGS[4/*" - "*/]);
}

// public static void Init(Fuse.Scripting.Context c) [static] :101
void Console::Init(::g::Fuse::Scripting::Context* c)
{
    uStackFrame __("Fuse.Reactive.Console", "Init(Fuse.Scripting.Context)");
    ::g::Fuse::Scripting::Object* console = uPtr(c)->NewObject();
    uPtr(console)->Item(::STRINGS[5/*"log"*/], uDelegate::New(::TYPES[22/*Fuse.Scripting.Callback*/], (void*)Console__Log_fn));
    console->Item(::STRINGS[6/*"dir"*/], uDelegate::New(::TYPES[22/*Fuse.Scripting.Callback*/], (void*)Console__Dir_fn));
    uPtr(c->GlobalObject())->Item(::STRINGS[7/*"console"*/], console);
}

// private static object Log(object[] args) [static] :109
uObject* Console::Log(uArray* args)
{
    uStackFrame __("Fuse.Reactive.Console", "Log(object[])");

    for (int i = 0; i < uPtr(args)->Length(); i++)
        ::g::Uno::Diagnostics::Debug::Log5((uPtr(args)->Strong<uObject*>(i) != NULL) ? (uString*)::g::Uno::Object::ToString(uPtr(uPtr(args)->Strong<uObject*>(i))) : ::STRINGS[8/*"null"*/], 1, ::STRINGS[0/*"/usr/local/...*/], 113);

    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/$.uno#1
// -----------------------------------------------------------

// public class DataBinding<T> :49
// {
DataBinding_type* DataBinding_typeof()
{
    static uSStrong<DataBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 4;
    options.ObjectSize = sizeof(DataBinding);
    options.TypeSize = sizeof(DataBinding_type);
    type = (DataBinding_type*)uClassType::New("Fuse.Reactive.DataBinding`1", options);
    type->SetBase(::g::Fuse::Reactive::Binding_typeof());
    type->fp_NewValue = (void(*)(::g::Fuse::Reactive::Binding*, uObject*))DataBinding__NewValue_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))DataBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))DataBinding__OnUnrooted_fn;
    type->fp_PushValue = DataBinding__PushValue_fn;
    type->interface1.fp_OnSet = (void(*)(uObject*, uObject*))DataBinding__FuseReactiveIObserverOnSet_fn;
    type->interface1.fp_OnAdd = (void(*)(uObject*, uObject*))DataBinding__FuseReactiveIObserverOnAdd_fn;
    type->interface1.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))DataBinding__FuseReactiveIObserverOnNewAt_fn;
    type->interface1.fp_OnFailed = (void(*)(uObject*, uString*))DataBinding__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::Array*))DataBinding__FuseReactiveIObserverOnNewAll_fn;
    type->interface1.fp_OnRemove = (void(*)(uObject*, uObject*, int*))DataBinding__FuseReactiveIObserverOnRemove_fn;
    type->interface1.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))DataBinding__FuseReactiveIObserverOnInsertAt_fn;
    type->interface2.fp_OnNameChanged = (void(*)(uObject*, uObject*, uString*))DataBinding__FuseINameListenerOnNameChanged_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    ::STRINGS[9] = uString::Const("Not handled: OnAdd");
    ::STRINGS[10] = uString::Const("Not handled: OnFailed");
    ::STRINGS[11] = uString::Const("Not handled: OnInsertAt");
    ::STRINGS[12] = uString::Const("Not handled: OnNewAll");
    ::STRINGS[13] = uString::Const("Not handled: OnNewAt");
    ::STRINGS[14] = uString::Const("Not handled: OnRemoveAt");
    ::STRINGS[15] = uString::Const("Warning: Data binding failed. The string '");
    ::STRINGS[16] = uString::Const("' is not a valid ");
    ::STRINGS[17] = uString::Const(" value");
    ::STRINGS[18] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/$.uno#1");
    ::TYPES[21] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[24] = ::g::Fuse::Reactive::Observable_typeof();
    ::TYPES[25] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[26] = ::g::Uno::UX::Property_typeof();
    ::TYPES[27] = ::g::Uno::UX::ValueChangedHandler_typeof();
    ::TYPES[28] = ::g::Fuse::INameListener_typeof();
    ::TYPES[29] = ::g::Uno::UX::ValueChangedArgs_typeof();
    ::TYPES[9] = uObject_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[14] = ::g::Uno::String_typeof();
    ::TYPES[30] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    ::TYPES[31] = ::g::Uno::Type_typeof();
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[32] = ::g::Fuse::Scripting::Marshal_typeof();
    type->SetPrecalc(
        ::TYPES[26/*Uno.UX.Property`1*/]->MakeType(type->T(0)),
        ::TYPES[27/*Uno.UX.ValueChangedHandler`1*/]->MakeType(type->T(0)),
        ::TYPES[29/*Uno.UX.ValueChangedArgs`1*/]->MakeType(type->T(0)),
        ::TYPES[32/*Fuse.Scripting.Marshal*/]->MakeMethod(1, type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(DataBinding_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(DataBinding_type, interface1),
        ::g::Fuse::INameListener_typeof(), offsetof(DataBinding_type, interface2));
    type->SetFields(5,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::DataBinding, _currentValue), 0,
        ::g::Fuse::Reactive::ObservableSubscription_typeof(), offsetof(::g::Fuse::Reactive::DataBinding, _subscription), 0,
        ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Reactive::DataBinding, _Target), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", type, (void*)DataBinding__New1_fn, 0, true, type, 2, ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), ::g::Uno::String_typeof()),
        new uFunction("get_Target", NULL, (void*)DataBinding__get_Target_fn, 0, false, ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), 0));
    return type;
}

// public DataBinding(Uno.UX.Property<T> target, string key) :55
void DataBinding__ctor_2_fn(DataBinding* __this, ::g::Uno::UX::Property* target, uString* key)
{
    __this->ctor_2(target, key);
}

// private bool Acceptor(object obj) :215
void DataBinding__Acceptor_fn(DataBinding* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->Acceptor(obj);
}

// private void Fuse.INameListener.OnNameChanged(object obj, string name) :116
void DataBinding__FuseINameListenerOnNameChanged_fn(DataBinding* __this, uObject* obj, uString* name)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.INameListener.OnNameChanged(object,string)");
    __this->PushValue(__this->_currentValue);
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :65
void DataBinding__FuseReactiveIObserverOnAdd_fn(DataBinding* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnAdd(object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[9/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :75
void DataBinding__FuseReactiveIObserverOnFailed_fn(DataBinding* __this, uString* message)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnFailed(string)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[10/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :91
void DataBinding__FuseReactiveIObserverOnInsertAt_fn(DataBinding* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[11/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.Scripting.Array values) :80
void DataBinding__FuseReactiveIObserverOnNewAll_fn(DataBinding* __this, ::g::Fuse::Scripting::Array* values)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnNewAll(Fuse.Scripting.Array)");

    if (uPtr(values)->Length() > 0)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[12/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :70
void DataBinding__FuseReactiveIObserverOnNewAt_fn(DataBinding* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnNewAt(int,object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[13/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnRemove(object value, int index) :86
void DataBinding__FuseReactiveIObserverOnRemove_fn(DataBinding* __this, uObject* value, int* index)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnRemove(object,int)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[14/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :60
void DataBinding__FuseReactiveIObserverOnSet_fn(DataBinding* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Reactive.IObserver.OnSet(object)");
    __this->PushValue(newValue);
}

// public DataBinding New(Uno.UX.Property<T> target, string key) :55
void DataBinding__New1_fn(uType* __type, ::g::Uno::UX::Property* target, uString* key, DataBinding** __retval)
{
    *__retval = DataBinding::New1(__type, target, key);
}

// internal override sealed void NewValue(object value) :131
void DataBinding__NewValue_fn(DataBinding* __this, uObject* value)
{
    uType* __types[] = {
        __this->__type->GetBase(DataBinding_typeof())->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "NewValue(object)");

    if (uIs(value, __types[0]))
        __this->PushValue(value);
    else if (uIs(value, ::TYPES[24/*Fuse.Reactive.Observable*/]))
    {
        if (__this->_subscription != NULL)
        {
            uPtr(__this->_subscription)->Dispose();
            __this->_subscription = NULL;
        }

        ::g::Fuse::Reactive::Observable* obs = uCast< ::g::Fuse::Reactive::Observable*>(value, ::TYPES[24/*Fuse.Reactive.Observable*/]);
        __this->_subscription = uPtr(obs)->Subscribe((uObject*)__this);
    }
    else
        __this->PushValue(value);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :96
void DataBinding__OnRooted_fn(DataBinding* __this, ::g::Fuse::Node* parentNode)
{
    uType* __types[] = {
        __this->__type->GetBase(DataBinding_typeof())->Precalced(0/*Uno.UX.Property<T>*/),
        __this->__type->GetBase(DataBinding_typeof())->T(0),
        __this->__type->GetBase(DataBinding_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "OnRooted(Fuse.Node)");
    ::g::Fuse::Reactive::Binding__OnRooted_fn(__this, parentNode);
    uPtr(__this->Target())->add_ValueChanged(uDelegate::New(__types[2], (void*)DataBinding__OnValueChanged_fn, __this));
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :102
void DataBinding__OnUnrooted_fn(DataBinding* __this, ::g::Fuse::Node* parentNode)
{
    uType* __types[] = {
        __this->__type->GetBase(DataBinding_typeof())->Precalced(0/*Uno.UX.Property<T>*/),
        __this->__type->GetBase(DataBinding_typeof())->T(0),
        __this->__type->GetBase(DataBinding_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "OnUnrooted(Fuse.Node)");
    ::g::Fuse::NameRegistry::RemoveListener((uObject*)__this);
    uPtr(__this->Target())->remove_ValueChanged(uDelegate::New(__types[2], (void*)DataBinding__OnValueChanged_fn, __this));

    if (__this->_subscription != NULL)
    {
        uPtr(__this->_subscription)->Dispose();
        __this->_subscription = NULL;
    }

    ::g::Fuse::Reactive::Binding__OnUnrooted_fn(__this, parentNode);
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<T> args) :121
void DataBinding__OnValueChanged_fn(DataBinding* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnValueChanged(sender, args);
}

// protected virtual void PushValue(object newValue) :160
void DataBinding__PushValue_fn(DataBinding* __this, uObject* newValue)
{
    uType* __types[] = {
        __this->__type->GetBase(DataBinding_typeof())->T(0),
        __this->__type->GetBase(DataBinding_typeof())->Precalced(3/*Fuse.Scripting.Marshal.TryConvertTo<T>*/),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "PushValue(object)");
    uT value(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret3;

    if (__this->ParentNode() == NULL)
        return;

    __this->_currentValue = newValue;

    if (uIs(newValue, __types[0]))
    {
        ::g::Fuse::NameRegistry::RemoveListener((uObject*)__this);
        ::g::Uno::UX::Property__SetRestState_fn(uPtr(__this->Target()), uUnboxAny(__types[0], newValue), __this);
        return;
    }

    uString* name = uAs<uString*>(newValue, ::TYPES[14/*string*/]);

    if (::g::Uno::String::op_Inequality(name, NULL) && (__this->ParentNode() != NULL))
    {
        ::g::Fuse::NameRegistry::AddListener(name, (uObject*)__this);
        ::g::Fuse::Node* k = uPtr(__this->ParentNode())->FindNodeByName(uCast<uString*>(newValue, ::TYPES[14/*string*/]));

        if (uIs(k, __types[0]))
        {
            ::g::Uno::UX::Property__SetRestState_fn(uPtr(__this->Target()), uUnboxAny(__types[0], k), __this);
            return;
        }
        else
        {
            uObject* candidate = uPtr(__this->ParentNode())->FindObjectByName(uCast<uString*>(newValue, ::TYPES[14/*string*/]), uDelegate::New(::TYPES[30/*Uno.Predicate<object>*/], (void*)DataBinding__Acceptor_fn, __this));

            if (uIs(candidate, __types[0]))
            {
                ::g::Uno::UX::Property__SetRestState_fn(uPtr(__this->Target()), uUnboxAny(__types[0], candidate), __this);
                return;
            }
        }

        if (::g::Uno::Type::IsClass(uPtr(__types[0])) && !::g::Fuse::Scripting::Marshal::CanConvertClass(__types[0]))
            return;
    }

    ;

    if ((::g::Fuse::Scripting::Marshal__TryConvertTo_fn(__types[1], newValue, &value, &ret3), ret3))
        ::g::Uno::UX::Property__SetRestState_fn(uPtr(__this->Target()), value, __this);
    else
        ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[15/*"Warning: Da...*/], newValue), ::STRINGS[16/*"' is not a ...*/]), __types[0]), ::STRINGS[17/*" value"*/]), 1, ::STRINGS[18/*"/usr/local/...*/], 211);
}

// public generated Uno.UX.Property<T> get_Target() :52
void DataBinding__get_Target_fn(DataBinding* __this, ::g::Uno::UX::Property** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :52
void DataBinding__set_Target_fn(DataBinding* __this, ::g::Uno::UX::Property* value)
{
    __this->Target(value);
}

// public DataBinding(Uno.UX.Property<T> target, string key) [instance] :55
void DataBinding::ctor_2(::g::Uno::UX::Property* target, uString* key)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", ".ctor(Uno.UX.Property<T>,string)");
    ctor_1(key);
    Target(target);
}

// private bool Acceptor(object obj) [instance] :215
bool DataBinding::Acceptor(uObject* obj)
{
    uType* __types[] = {
        __type->GetBase(DataBinding_typeof())->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Acceptor(object)");
    return uIs(obj, __types[0]);
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<T> args) [instance] :121
void DataBinding::OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    uType* __types[] = {
        __type->GetBase(DataBinding_typeof())->T(0),
        __type->GetBase(DataBinding_typeof())->Precalced(2/*Uno.UX.ValueChangedArgs<T>*/),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "OnValueChanged(object,Uno.UX.ValueChangedArgs<T>)");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    if ((_subscription != NULL) && (uPtr(args)->Origin() != this))
        uPtr(_subscription)->SetExclusive(uBoxPtr(__types[0], (::g::Uno::UX::ValueChangedArgs__get_Value_fn(uPtr(args), &ret2), ret2)));
}

// public generated Uno.UX.Property<T> get_Target() [instance] :52
::g::Uno::UX::Property* DataBinding::Target()
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "get_Target()");
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :52
void DataBinding::Target(::g::Uno::UX::Property* value)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "set_Target(Uno.UX.Property<T>)");
    _Target = value;
}

// public DataBinding New(Uno.UX.Property<T> target, string key) [static] :55
DataBinding* DataBinding::New1(uType* __type, ::g::Uno::UX::Property* target, uString* key)
{
    DataBinding* obj1 = (DataBinding*)uNew(__type);
    obj1->ctor_2(target, key);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/$.uno#1
// -----------------------------------------------------------

// public sealed class DataToResourceBinding<T> :223
// {
::g::Fuse::Reactive::DataBinding_type* DataToResourceBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::DataBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(DataToResourceBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::DataBinding_type);
    type = (::g::Fuse::Reactive::DataBinding_type*)uClassType::New("Fuse.Reactive.DataToResourceBinding`1", options);
    type->SetBase(::g::Fuse::Reactive::DataBinding_typeof()->MakeType(type->T(0)));
    type->fp_PushValue = (void(*)(::g::Fuse::Reactive::DataBinding*, uObject*))DataToResourceBinding__PushValue_fn;
    type->interface1.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnSet_fn;
    type->interface1.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnAdd_fn;
    type->interface1.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnNewAt_fn;
    type->interface1.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::Array*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnNewAll_fn;
    type->interface1.fp_OnRemove = (void(*)(uObject*, uObject*, int*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnRemove_fn;
    type->interface1.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnInsertAt_fn;
    type->interface2.fp_OnNameChanged = (void(*)(uObject*, uObject*, uString*))::g::Fuse::Reactive::DataBinding__FuseINameListenerOnNameChanged_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[30] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    ::TYPES[33] = ::g::Fuse::Reactive::DataBinding_typeof();
    ::TYPES[9] = uObject_typeof();
    ::TYPES[14] = ::g::Uno::String_typeof();
    ::TYPES[5] = ::g::Uno::Action_typeof();
    type->SetPrecalc(
        ::TYPES[33/*Fuse.Reactive.DataBinding`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface1),
        ::g::Fuse::INameListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface2));
    type->SetFields(8,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::DataToResourceBinding, _key), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", type, (void*)DataToResourceBinding__New2_fn, 0, true, type, 2, ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), ::g::Uno::String_typeof()));
    return type;
}

// public DataToResourceBinding(Uno.UX.Property<T> target, string key) :226
void DataToResourceBinding__ctor_3_fn(DataToResourceBinding* __this, ::g::Uno::UX::Property* target, uString* key)
{
    __this->ctor_3(target, key);
}

// private bool AcceptFunction(object obj) :258
void DataToResourceBinding__AcceptFunction_fn(DataToResourceBinding* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->AcceptFunction(obj);
}

// public DataToResourceBinding New(Uno.UX.Property<T> target, string key) :226
void DataToResourceBinding__New2_fn(uType* __type, ::g::Uno::UX::Property* target, uString* key, DataToResourceBinding** __retval)
{
    *__retval = DataToResourceBinding::New2(__type, target, key);
}

// private void OnChanged() :247
void DataToResourceBinding__OnChanged_fn(DataToResourceBinding* __this)
{
    __this->OnChanged();
}

// protected override sealed void PushValue(object value) :233
void DataToResourceBinding__PushValue_fn(DataToResourceBinding* __this, uObject* value)
{
    uStackFrame __("Fuse.Reactive.DataToResourceBinding`1", "PushValue(object)");
    uString* key = uAs<uString*>(value, ::TYPES[14/*string*/]);

    if (::g::Uno::String::op_Equality(key, NULL))
        return;

    if (::g::Uno::String::op_Inequality(__this->_key, NULL))
        ::g::Fuse::Resources::ResourceRegistry::RemoveResourceChangedHandler(__this->_key, uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)DataToResourceBinding__OnChanged_fn, __this));

    __this->_key = key;
    ::g::Fuse::Resources::ResourceRegistry::AddResourceChangedHandler(__this->_key, uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)DataToResourceBinding__OnChanged_fn, __this));
    __this->OnChanged();
}

// public DataToResourceBinding(Uno.UX.Property<T> target, string key) [instance] :226
void DataToResourceBinding::ctor_3(::g::Uno::UX::Property* target, uString* key)
{
    uStackFrame __("Fuse.Reactive.DataToResourceBinding`1", ".ctor(Uno.UX.Property<T>,string)");
    ctor_2(target, key);
}

// private bool AcceptFunction(object obj) [instance] :258
bool DataToResourceBinding::AcceptFunction(uObject* obj)
{
    uType* __types[] = {
        __type->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataToResourceBinding`1", "AcceptFunction(object)");
    return uIs(obj, __types[0]);
}

// private void OnChanged() [instance] :247
void DataToResourceBinding::OnChanged()
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Reactive.DataBinding<T>*/),
        __type->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataToResourceBinding`1", "OnChanged()");

    if (::g::Uno::String::op_Equality(_key, NULL))
        return;

    if (ParentNode() == NULL)
        return;

    uObject* v;

    if (uPtr(ParentNode())->TryGetResource(_key, uDelegate::New(::TYPES[30/*Uno.Predicate<object>*/], (void*)DataToResourceBinding__AcceptFunction_fn, this), &v))
        ::g::Uno::UX::Property__SetRestState_fn(uPtr((::g::Uno::UX::Property*)Target()), uUnboxAny(__types[1], v), this);
}

// public DataToResourceBinding New(Uno.UX.Property<T> target, string key) [static] :226
DataToResourceBinding* DataToResourceBinding::New2(uType* __type, ::g::Uno::UX::Property* target, uString* key)
{
    DataToResourceBinding* obj1 = (DataToResourceBinding*)uNew(__type);
    obj1->ctor_3(target, key);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/FuseJS/$.uno#1
// ------------------------------------------------------------------

// internal static class DebugLog :81
// {
uClassType* DebugLog_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.DebugLog", options);
    ::STRINGS[19] = uString::Const("debug_log");
    ::STRINGS[8] = uString::Const("null");
    ::STRINGS[0] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/FuseJS/$.uno#1");
    ::TYPES[19] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[23] = ::g::Fuse::Scripting::Context_typeof();
    ::TYPES[9] = uObject_typeof();
    ::TYPES[22] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[15] = uObject_typeof()->Array();
    return type;
}

// public static void Init(Fuse.Scripting.Context c) :83
void DebugLog__Init_fn(::g::Fuse::Scripting::Context* c)
{
    DebugLog::Init(c);
}

// private static object Log(object[] args) :88
void DebugLog__Log_fn(uArray* args, uObject** __retval)
{
    *__retval = DebugLog::Log(args);
}

// public static void Init(Fuse.Scripting.Context c) [static] :83
void DebugLog::Init(::g::Fuse::Scripting::Context* c)
{
    uStackFrame __("Fuse.Reactive.DebugLog", "Init(Fuse.Scripting.Context)");
    uPtr(uPtr(c)->GlobalObject())->Item(::STRINGS[19/*"debug_log"*/], uDelegate::New(::TYPES[22/*Fuse.Scripting.Callback*/], (void*)DebugLog__Log_fn));
}

// private static object Log(object[] args) [static] :88
uObject* DebugLog::Log(uArray* args)
{
    uStackFrame __("Fuse.Reactive.DebugLog", "Log(object[])");

    for (int i = 0; i < uPtr(args)->Length(); i++)
        ::g::Uno::Diagnostics::Debug::Log5((uPtr(args)->Strong<uObject*>(i) != NULL) ? (uString*)::g::Uno::Object::ToString(uPtr(uPtr(args)->Strong<uObject*>(i))) : ::STRINGS[8/*"null"*/], 1, ::STRINGS[0/*"/usr/local/...*/], 92);

    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/$.uno#2
// -----------------------------------------------------------

// public sealed class Dispatcher :274
// {
Dispatcher_type* Dispatcher_typeof()
{
    static uSStrong<Dispatcher_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Dispatcher);
    options.TypeSize = sizeof(Dispatcher_type);
    type = (Dispatcher_type*)uClassType::New("Fuse.Reactive.Dispatcher", options);
    type->fp_ctor_ = (void*)Dispatcher__New1_fn;
    type->interface0.fp_Invoke = (void(*)(uObject*, uDelegate*))Dispatcher__Invoke_fn;
    ::TYPES[34] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Action_typeof());
    ::TYPES[5] = ::g::Uno::Action_typeof();
    ::TYPES[35] = ::g::Uno::Threading::Thread_typeof();
    ::TYPES[36] = ::g::Fuse::Reactive::ThreadWorker_typeof();
    ::TYPES[37] = ::g::Fuse::Reactive::JavaScript_typeof();
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    type->SetInterfaces(
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(Dispatcher_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Action_typeof()), offsetof(::g::Fuse::Reactive::Dispatcher, _actions), 0,
        ::g::Uno::Threading::Thread_typeof(), offsetof(::g::Fuse::Reactive::Dispatcher, _dispatcherThread), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Dispatcher, _hasPauseLock), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Dispatcher, _isUpdating), 0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Fuse::Reactive::Dispatcher, _isUpdatingMutex), 0,
        Dispatcher_typeof(), (uintptr_t)&::g::Fuse::Reactive::Dispatcher::_uiThread_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("Invoke", NULL, (void*)Dispatcher__Invoke_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action_typeof()),
        new uFunction(".ctor", NULL, (void*)Dispatcher__New1_fn, 0, true, Dispatcher_typeof(), 0),
        new uFunction("get_UIThread", NULL, (void*)Dispatcher__get_UIThread_fn, 0, true, Dispatcher_typeof(), 0));
    return type;
}

// public Dispatcher() :279
void Dispatcher__ctor__fn(Dispatcher* __this)
{
    __this->ctor_();
}

// public void Invoke(Uno.Action action) :344
void Dispatcher__Invoke_fn(Dispatcher* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// private bool get_IsUpdating() :288
void Dispatcher__get_IsUpdating_fn(Dispatcher* __this, bool* __retval)
{
    *__retval = __this->IsUpdating();
}

// private void set_IsUpdating(bool value) :295
void Dispatcher__set_IsUpdating_fn(Dispatcher* __this, bool* value)
{
    __this->IsUpdating(*value);
}

// public Dispatcher New() :279
void Dispatcher__New1_fn(Dispatcher** __retval)
{
    *__retval = Dispatcher::New1();
}

// private void Run() :305
void Dispatcher__Run_fn(Dispatcher* __this)
{
    __this->Run();
}

// public static Fuse.Reactive.Dispatcher get_UIThread() :352
void Dispatcher__get_UIThread_fn(Dispatcher** __retval)
{
    *__retval = Dispatcher::UIThread();
}

uSStrong<Dispatcher*> Dispatcher::_uiThread_;

// public Dispatcher() [instance] :279
void Dispatcher::ctor_()
{
    uStackFrame __("Fuse.Reactive.Dispatcher", ".ctor()");
    _actions = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[34/*Uno.Threading.ConcurrentQueue<Uno.Action>*/]));
    _isUpdatingMutex = ::g::Uno::Threading::Mutex::Create();
    ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)Dispatcher__Run_fn, this), 0);
}

// public void Invoke(Uno.Action action) [instance] :344
void Dispatcher::Invoke(uDelegate* action)
{
    uStackFrame __("Fuse.Reactive.Dispatcher", "Invoke(Uno.Action)");
    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_actions), action);
}

// private bool get_IsUpdating() [instance] :288
bool Dispatcher::IsUpdating()
{
    uStackFrame __("Fuse.Reactive.Dispatcher", "get_IsUpdating()");
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(_isUpdatingMutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[6/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return _isUpdating;
    }
}

// private void set_IsUpdating(bool value) [instance] :295
void Dispatcher::IsUpdating(bool value)
{
    uStackFrame __("Fuse.Reactive.Dispatcher", "set_IsUpdating(bool)");
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(_isUpdatingMutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[6/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        _isUpdating = value;
    }
}

// private void Run() [instance] :305
void Dispatcher::Run()
{
    uStackFrame __("Fuse.Reactive.Dispatcher", "Run()");
    bool ret3;

    if (_dispatcherThread == NULL)
        _dispatcherThread = ::g::Uno::Threading::Thread::CurrentThread();

    if (uPtr(_actions)->Count() == 0)
        return;

    if (uPtr(::g::Fuse::Reactive::JavaScript::Worker())->IsJavaScriptVMReady() && uPtr(uPtr(::g::Fuse::Reactive::JavaScript::Worker())->CanExecuteJavaScript)->TryLock())
    {
        {
            const auto __finally_fun = [&]()
            {
                IsUpdating(false);
                uPtr(uPtr(::g::Fuse::Reactive::JavaScript::Worker())->CanExecuteJavaScript)->Unlock();

                if (_hasPauseLock)
                {
                    uPtr(uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Pause)->Unlock();
                    _hasPauseLock = false;
                }
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);
            IsUpdating(true);
            uDelegate* a;

            while ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_actions), (void**)(&a), &ret3), ret3))
                uPtr(a)->InvokeVoid();
        }
    }
    else if (!_hasPauseLock)
    {
        uPtr(uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Pause)->Lock();
        _hasPauseLock = true;
    }
}

// public Dispatcher New() [static] :279
Dispatcher* Dispatcher::New1()
{
    Dispatcher* obj2 = (Dispatcher*)uNew(Dispatcher_typeof());
    obj2->ctor_();
    return obj2;
}

// public static Fuse.Reactive.Dispatcher get_UIThread() [static] :352
Dispatcher* Dispatcher::UIThread()
{
    uStackFrame __("Fuse.Reactive.Dispatcher", "get_UIThread()");
    Dispatcher* ind1 = Dispatcher::_uiThread();
    return (ind1 != NULL) ? ind1 : (Dispatcher*)(Dispatcher::_uiThread() = Dispatcher::New1());
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/$.uno#3
// -----------------------------------------------------------

// public sealed class Each :371
// {
Each_type* Each_typeof()
{
    static uSStrong<Each_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Each);
    options.TypeSize = sizeof(Each_type);
    type = (Each_type*)uClassType::New("Fuse.Reactive.Each", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_ctor_ = (void*)Each__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Each__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Each__OnUnrooted_fn;
    type->interface1.fp_OnSet = (void(*)(uObject*, uObject*))Each__FuseReactiveIObserverOnSet_fn;
    type->interface1.fp_OnFailed = (void(*)(uObject*, uString*))Each__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnAdd = (void(*)(uObject*, uObject*))Each__FuseReactiveIObserverOnAdd_fn;
    type->interface1.fp_OnRemove = (void(*)(uObject*, uObject*, int*))Each__FuseReactiveIObserverOnRemove_fn;
    type->interface1.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))Each__FuseReactiveIObserverOnInsertAt_fn;
    type->interface1.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))Each__FuseReactiveIObserverOnNewAt_fn;
    type->interface1.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::Array*))Each__FuseReactiveIObserverOnNewAll_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    ::TYPES[38] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::IDataContext_typeof()));
    ::TYPES[39] = ::g::Fuse::IDataContext_typeof();
    ::TYPES[21] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[40] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::IDataContext_typeof());
    ::TYPES[9] = uObject_typeof();
    ::TYPES[19] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[14] = ::g::Uno::String_typeof();
    ::TYPES[41] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::IDataContext_typeof());
    ::TYPES[42] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::UX::Factory_typeof());
    ::TYPES[43] = ::g::Uno::UX::Factory_typeof();
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[15] = uObject_typeof()->Array();
    ::TYPES[24] = ::g::Fuse::Reactive::Observable_typeof();
    ::TYPES[6] = ::g::Uno::IDisposable_typeof();
    ::TYPES[25] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[44] = ::g::Fuse::IObjectContainer_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[45] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::IDataContext_typeof()));
    ::TYPES[2] = ::g::Fuse::Node_typeof();
    ::TYPES[10] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Factory_typeof());
    ::TYPES[11] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Uno::UX::Factory_typeof());
    ::TYPES[12] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Factory_typeof());
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(Each_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(Each_type, interface1));
    type->SetFields(3,
        ::g::Fuse::IObjectContainer_typeof(), offsetof(::g::Fuse::Reactive::Each, _container), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Each, _count), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::IDataContext_typeof())), offsetof(::g::Fuse::Reactive::Each, _elements), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Factory_typeof()), offsetof(::g::Fuse::Reactive::Each, _factories), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Each, _items), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::Each, _matchKey), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::Each, _subscription), 0);
    type->Reflection.SetFunctions(8,
        new uFunction("get_Count", NULL, (void*)Each__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Count", NULL, (void*)Each__set_Count_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_Factories", NULL, (void*)Each__get_Factories_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Factory_typeof()), 0),
        new uFunction("get_Items", NULL, (void*)Each__get_Items_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Items", NULL, (void*)Each__set_Items_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("get_MatchKey", NULL, (void*)Each__get_MatchKey_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_MatchKey", NULL, (void*)Each__set_MatchKey_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)Each__New1_fn, 0, true, Each_typeof(), 0));
    return type;
}

// public generated Each() :371
void Each__ctor_1_fn(Each* __this)
{
    __this->ctor_1();
}

// private void AddFactory(Uno.UX.Factory f, object dataContext, Uno.Collections.List<Fuse.IDataContext> newElements) :693
void Each__AddFactory_fn(Each* __this, ::g::Uno::UX::Factory* f, uObject* dataContext, ::g::Uno::Collections::List* newElements)
{
    __this->AddFactory(f, dataContext, newElements);
}

// private void AddNew(object dataContext) :650
void Each__AddNew_fn(Each* __this, uObject* dataContext)
{
    __this->AddNew(dataContext);
}

// public int get_Count() :433
void Each__get_Count_fn(Each* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public void set_Count(int value) :437
void Each__set_Count_fn(Each* __this, int* value)
{
    __this->Count(*value);
}

// public Uno.Collections.IList<Uno.UX.Factory> get_Factories() :378
void Each__get_Factories_fn(Each* __this, uObject** __retval)
{
    *__retval = __this->Factories();
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :528
void Each__FuseReactiveIObserverOnAdd_fn(Each* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnAdd(object)");

    if (__this->_container == NULL)
        return;

    __this->AddNew(addedValue);
    __this->SetValid();
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :521
void Each__FuseReactiveIObserverOnFailed_fn(Each* __this, uString* message)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnFailed(string)");

    if (__this->_container == NULL)
        return;

    __this->RemoveAll();
    __this->SetFailed(message);
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :547
void Each__FuseReactiveIObserverOnInsertAt_fn(Each* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    int index_ = *index;

    if (__this->_container == NULL)
        return;

    __this->InsertNew(index_, value);
    __this->SetValid();
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.Scripting.Array values) :566
void Each__FuseReactiveIObserverOnNewAll_fn(Each* __this, ::g::Fuse::Scripting::Array* values)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnNewAll(Fuse.Scripting.Array)");

    if (__this->_container == NULL)
        return;

    __this->RemoveAll();

    for (int i = 0; i < uPtr(values)->Length(); i++)
        __this->AddNew(::g::Fuse::Reactive::ThreadWorker::Wrap(uPtr(values)->Item(i)));

    __this->SetValid();
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :555
void Each__FuseReactiveIObserverOnNewAt_fn(Each* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnNewAt(int,object)");
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret12;
    ::g::Uno::Collections::List* ret13;
    int index_ = *index;

    if (__this->_container == NULL)
        return;

    for (::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_elements), uCRef<int>(index_), &ret13), ret13)), &ret12), ret12); enum2.MoveNext(::TYPES[40/*Uno.Collections.List<Fuse.IDataContext>.Enumerator*/]); )
    {
        uObject* e = enum2.Current(::TYPES[40/*Uno.Collections.List<Fuse.IDataContext>.Enumerator*/]);
        ::g::Fuse::IDataContext::DataContext(uInterface(uPtr(e), ::TYPES[39/*Fuse.IDataContext*/]), value);
    }

    __this->SetValid();
}

// private void Fuse.Reactive.IObserver.OnRemove(object value, int index) :535
void Each__FuseReactiveIObserverOnRemove_fn(Each* __this, uObject* value, int* index)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnRemove(object,int)");
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret14;
    ::g::Uno::Collections::List* ret15;
    int index_ = *index;

    if (__this->_container == NULL)
        return;

    for (::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_elements), uCRef<int>(index_), &ret15), ret15)), &ret14), ret14); enum1.MoveNext(::TYPES[40/*Uno.Collections.List<Fuse.IDataContext>.Enumerator*/]); )
    {
        uObject* c = enum1.Current(::TYPES[40/*Uno.Collections.List<Fuse.IDataContext>.Enumerator*/]);
        ::g::Fuse::IObjectContainer::BeginRemove(uInterface(uPtr(__this->_container), ::TYPES[44/*Fuse.IObjectContainer*/]), c);
    }

    uPtr(__this->_elements)->RemoveAt(index_);
    __this->SetValid();
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :512
void Each__FuseReactiveIObserverOnSet_fn(Each* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.Each", "Fuse.Reactive.IObserver.OnSet(object)");

    if (__this->_container == NULL)
        return;

    __this->RemoveAll();
    __this->AddNew(newValue);
    __this->SetValid();
}

// private string GetMatchKey(object dataContext) :637
void Each__GetMatchKey_fn(Each* __this, uObject* dataContext, uString** __retval)
{
    *__retval = __this->GetMatchKey(dataContext);
}

// private void InsertNew(int index, object dataContext) :655
void Each__InsertNew_fn(Each* __this, int* index, uObject* dataContext)
{
    __this->InsertNew(*index, dataContext);
}

// private bool IsUnchanged(object[] newDcs) :602
void Each__IsUnchanged_fn(Each* __this, uArray* newDcs, bool* __retval)
{
    *__retval = __this->IsUnchanged(newDcs);
}

// public object get_Items() :419
void Each__get_Items_fn(Each* __this, uObject** __retval)
{
    *__retval = __this->Items();
}

// public void set_Items(object value) :420
void Each__set_Items_fn(Each* __this, uObject* value)
{
    __this->Items(value);
}

// public string get_MatchKey() :626
void Each__get_MatchKey_fn(Each* __this, uString** __retval)
{
    *__retval = __this->MatchKey();
}

// public void set_MatchKey(string value) :627
void Each__set_MatchKey_fn(Each* __this, uString* value)
{
    __this->MatchKey(value);
}

// public generated Each New() :371
void Each__New1_fn(Each** __retval)
{
    *__retval = Each::New1();
}

// private void OnFactoriesChanged(Uno.UX.Factory factory) :385
void Each__OnFactoriesChanged_fn(Each* __this, ::g::Uno::UX::Factory* factory)
{
    __this->OnFactoriesChanged(factory);
}

// private void OnItemsChanged() :447
void Each__OnItemsChanged_fn(Each* __this)
{
    __this->OnItemsChanged();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :393
void Each__OnRooted_fn(Each* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Reactive.Each", "OnRooted(Fuse.Node)");
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    __this->_container = uAs<uObject*>(__this->ParentNode(), ::TYPES[44/*Fuse.IObjectContainer*/]);
    __this->OnItemsChanged();
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :400
void Each__OnUnrooted_fn(Each* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Reactive.Each", "OnUnrooted(Fuse.Node)");

    if (__this->_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_subscription), ::TYPES[6/*Uno.IDisposable*/]));
        __this->_subscription = NULL;
    }

    __this->RemoveAll();
    __this->_container = NULL;
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// private void RemoveAll() :590
void Each__RemoveAll_fn(Each* __this)
{
    __this->RemoveAll();
}

// private void ReplaceAll(object[] dcs) :580
void Each__ReplaceAll_fn(Each* __this, uArray* dcs)
{
    __this->ReplaceAll(dcs);
}

// private void Repopulate() :465
void Each__Repopulate_fn(Each* __this)
{
    __this->Repopulate();
}

// private void SetFailed(string message) :501
void Each__SetFailed_fn(Each* __this, uString* message)
{
    __this->SetFailed(message);
}

// private void SetValid() :492
void Each__SetValid_fn(Each* __this)
{
    __this->SetValid();
}

// public generated Each() [instance] :371
void Each::ctor_1()
{
    uStackFrame __("Fuse.Reactive.Each", ".ctor()");
    _elements = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[38/*Uno.Collections.List<Uno.Collections.List<Fuse.IDataContext>>*/]));
    ctor_();
}

// private void AddFactory(Uno.UX.Factory f, object dataContext, Uno.Collections.List<Fuse.IDataContext> newElements) [instance] :693
void Each::AddFactory(::g::Uno::UX::Factory* f, uObject* dataContext, ::g::Uno::Collections::List* newElements)
{
    uStackFrame __("Fuse.Reactive.Each", "AddFactory(Uno.UX.Factory,object,Uno.Collections.List<Fuse.IDataContext>)");
    uObject* elm = uAs<uObject*>(uPtr(f)->New1(), ::TYPES[39/*Fuse.IDataContext*/]);

    if (elm != NULL)
    {
        if (dataContext != NULL)
            ::g::Fuse::IDataContext::DataContext(uInterface(uPtr(elm), ::TYPES[39/*Fuse.IDataContext*/]), dataContext);

        ::g::Uno::Collections::List__Add_fn(uPtr(newElements), elm);
    }
}

// private void AddNew(object dataContext) [instance] :650
void Each::AddNew(uObject* dataContext)
{
    uStackFrame __("Fuse.Reactive.Each", "AddNew(object)");
    InsertNew(uPtr(_elements)->Count(), dataContext);
}

// public int get_Count() [instance] :433
int Each::Count()
{
    uStackFrame __("Fuse.Reactive.Each", "get_Count()");
    return _count;
}

// public void set_Count(int value) [instance] :437
void Each::Count(int value)
{
    uStackFrame __("Fuse.Reactive.Each", "set_Count(int)");

    if (_count != value)
    {
        _count = value;
        OnItemsChanged();
    }
}

// public Uno.Collections.IList<Uno.UX.Factory> get_Factories() [instance] :378
uObject* Each::Factories()
{
    uStackFrame __("Fuse.Reactive.Each", "get_Factories()");
    uObject* ind10 = _factories;
    return (ind10 != NULL) ? ind10 : (uObject*)(_factories = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[11/*Uno.Collections.ObservableList<Uno.UX.Factory>*/], uDelegate::New(::TYPES[12/*Uno.Action<Uno.UX.Factory>*/], (void*)Each__OnFactoriesChanged_fn, this), uDelegate::New(::TYPES[12/*Uno.Action<Uno.UX.Factory>*/], (void*)Each__OnFactoriesChanged_fn, this))));
}

// private string GetMatchKey(object dataContext) [instance] :637
uString* Each::GetMatchKey(uObject* dataContext)
{
    uStackFrame __("Fuse.Reactive.Each", "GetMatchKey(object)");
    ::g::Fuse::Scripting::Object* so = uAs< ::g::Fuse::Scripting::Object*>(dataContext, ::TYPES[19/*Fuse.Scripting.Object*/]);

    if ((so != NULL) && ::g::Uno::String::op_Inequality(_matchKey, NULL))
    {
        if (uPtr(so)->ContainsKey(_matchKey))
            return uAs<uString*>(uPtr(so)->Item(_matchKey), ::TYPES[14/*string*/]);
    }

    return NULL;
}

// private void InsertNew(int index, object dataContext) [instance] :655
void Each::InsertNew(int index, uObject* dataContext)
{
    uStackFrame __("Fuse.Reactive.Each", "InsertNew(int,object)");
    ::g::Uno::UX::Factory* ret16;
    ::g::Uno::Collections::List* ret17;
    uObject* ret18;
    ::g::Uno::Collections::List* newElements = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[41/*Uno.Collections.List<Fuse.IDataContext>*/]);
    bool anyMatched = false;
    ::g::Uno::UX::Factory* defaultCase = NULL;
    uString* key = GetMatchKey(dataContext);

    for (uObject* enum9 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Factories()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[43/*Uno.UX.Factory*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum9), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Uno::UX::Factory* f = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum9), ::TYPES[42/*Uno.Collections.IEnumerator<Uno.UX.Factory>*/]), &ret16), ret16);

        if (uPtr(f)->IsDefaultCase())
            defaultCase = f;

        if (::g::Uno::String::op_Inequality(key, NULL) && ::g::Uno::String::op_Inequality(uPtr(f)->Case(), key))
            continue;

        anyMatched = true;
        AddFactory(f, dataContext, newElements);
    }

    if (!anyMatched && (defaultCase != NULL))
        AddFactory(defaultCase, dataContext, newElements);

    int childIndex = 0;

    for (int i = 0; i < index; ++i)
        childIndex = childIndex + uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_elements), uCRef<int>(i), &ret17), ret17))->Count();

    for (int i1 = 0; i1 < newElements->Count(); ++i1)
        ::g::Fuse::IObjectContainer::Insert(uInterface(uPtr(_container), ::TYPES[44/*Fuse.IObjectContainer*/]), childIndex + i1, (::g::Uno::Collections::List__get_Item_fn(uPtr(newElements), uCRef<int>(i1), &ret18), ret18));

    ::g::Uno::Collections::List__Insert_fn(uPtr(_elements), uCRef<int>(index), newElements);
}

// private bool IsUnchanged(object[] newDcs) [instance] :602
bool Each::IsUnchanged(uArray* newDcs)
{
    uStackFrame __("Fuse.Reactive.Each", "IsUnchanged(object[])");
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret19;
    ::g::Uno::Collections::List* ret20;

    if (newDcs == NULL)
    {
        if (uPtr(_elements)->Count() == 0)
            return true;
        else
            return false;
    }

    if (uPtr(newDcs)->Length() != uPtr(_elements)->Count())
        return false;

    for (int i = 0; i < uPtr(newDcs)->Length(); i++)

        for (::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum8 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_elements), uCRef<int>(i), &ret20), ret20)), &ret19), ret19); enum8.MoveNext(::TYPES[40/*Uno.Collections.List<Fuse.IDataContext>.Enumerator*/]); )
        {
            uObject* e = enum8.Current(::TYPES[40/*Uno.Collections.List<Fuse.IDataContext>.Enumerator*/]);

            if (!::g::Uno::Object::Equals(uPtr(uPtr(newDcs)->Strong<uObject*>(i)), ::g::Fuse::IDataContext::DataContext(uInterface(uPtr(e), ::TYPES[39/*Fuse.IDataContext*/]))))
                return false;
        }

    return true;
}

// public object get_Items() [instance] :419
uObject* Each::Items()
{
    uStackFrame __("Fuse.Reactive.Each", "get_Items()");
    return _items;
}

// public void set_Items(object value) [instance] :420
void Each::Items(uObject* value)
{
    uStackFrame __("Fuse.Reactive.Each", "set_Items(object)");

    if (_items != value)
    {
        _items = value;
        OnItemsChanged();
    }
}

// public string get_MatchKey() [instance] :626
uString* Each::MatchKey()
{
    uStackFrame __("Fuse.Reactive.Each", "get_MatchKey()");
    return _matchKey;
}

// public void set_MatchKey(string value) [instance] :627
void Each::MatchKey(uString* value)
{
    uStackFrame __("Fuse.Reactive.Each", "set_MatchKey(string)");

    if (::g::Uno::String::op_Inequality(_matchKey, value))
    {
        _matchKey = value;
        OnItemsChanged();
    }
}

// private void OnFactoriesChanged(Uno.UX.Factory factory) [instance] :385
void Each::OnFactoriesChanged(::g::Uno::UX::Factory* factory)
{
    uStackFrame __("Fuse.Reactive.Each", "OnFactoriesChanged(Uno.UX.Factory)");

    if (_container == NULL)
        return;

    Repopulate();
}

// private void OnItemsChanged() [instance] :447
void Each::OnItemsChanged()
{
    uStackFrame __("Fuse.Reactive.Each", "OnItemsChanged()");

    if (_container == NULL)
        return;

    ::g::Fuse::Reactive::Observable* obs = uAs< ::g::Fuse::Reactive::Observable*>(_items, ::TYPES[24/*Fuse.Reactive.Observable*/]);

    if (obs != NULL)
    {
        if (_subscription != NULL)
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[6/*Uno.IDisposable*/]));

        _subscription = (uObject*)uPtr(obs)->Subscribe((uObject*)this);
    }
    else
        Repopulate();
}

// private void RemoveAll() [instance] :590
void Each::RemoveAll()
{
    uStackFrame __("Fuse.Reactive.Each", "RemoveAll()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Collections::List*> > ret21;
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret22;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Collections::List*> > enum6 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret21), ret21); enum6.MoveNext(::TYPES[45/*Uno.Collections.List<Uno.Collections.List<Fuse.IDataContext>>.Enumerator*/]); )
    {
        ::g::Uno::Collections::List* es = enum6.Current(::TYPES[45/*Uno.Collections.List<Uno.Collections.List<Fuse.IDataContext>>.Enumerator*/]);

        for (::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum7 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(es), &ret22), ret22); enum7.MoveNext(::TYPES[40/*Uno.Collections.List<Fuse.IDataContext>.Enumerator*/]); )
        {
            uObject* e = enum7.Current(::TYPES[40/*Uno.Collections.List<Fuse.IDataContext>.Enumerator*/]);
            ::g::Fuse::IObjectContainer::BeginRemove(uInterface(uPtr(_container), ::TYPES[44/*Fuse.IObjectContainer*/]), e);
        }
    }

    uPtr(_elements)->Clear();
}

// private void ReplaceAll(object[] dcs) [instance] :580
void Each::ReplaceAll(uArray* dcs)
{
    uStackFrame __("Fuse.Reactive.Each", "ReplaceAll(object[])");
    uArray* array3;
    int index4;
    int length5;

    if (IsUnchanged(dcs))
        return;

    RemoveAll();

    if (dcs != NULL)

        for (array3 = dcs, index4 = 0, length5 = uPtr(array3)->Length(); index4 < length5; ++index4)
        {
            uObject* d = uPtr(array3)->Strong<uObject*>(index4);
            AddNew(d);
        }
}

// private void Repopulate() [instance] :465
void Each::Repopulate()
{
    uStackFrame __("Fuse.Reactive.Each", "Repopulate()");
    uArray* e = uAs<uArray*>(_items, ::TYPES[15/*object[]*/]);
    ::g::Fuse::Scripting::Array* a = uAs< ::g::Fuse::Scripting::Array*>(_items, ::TYPES[21/*Fuse.Scripting.Array*/]);

    if (e != NULL)
    {
        ReplaceAll(e);
        return;
    }
    else if (a != NULL)
    {
        RemoveAll();

        for (int i = 0; i < uPtr(a)->Length(); i++)
            AddNew(::g::Fuse::Reactive::ThreadWorker::Wrap(uPtr(a)->Item(i)));
    }
    else
    {
        RemoveAll();

        for (int i1 = 0; i1 < Count(); i1++)
            AddNew(NULL);
    }
}

// private void SetFailed(string message) [instance] :501
void Each::SetFailed(uString* message)
{
    uStackFrame __("Fuse.Reactive.Each", "SetFailed(string)");
    ::g::Fuse::Node* n = uAs< ::g::Fuse::Node*>(_container, ::TYPES[2/*Fuse.Node*/]);

    if (n != NULL)
        ::g::Fuse::Triggers::WhileFailed::SetState(n, true, message);
}

// private void SetValid() [instance] :492
void Each::SetValid()
{
    uStackFrame __("Fuse.Reactive.Each", "SetValid()");
    ::g::Fuse::Node* n = uAs< ::g::Fuse::Node*>(_container, ::TYPES[2/*Fuse.Node*/]);

    if (n != NULL)
        ::g::Fuse::Triggers::WhileFailed::SetState(n, false, NULL);
}

// public generated Each New() [static] :371
Each* Each::New1()
{
    Each* obj11 = (Each*)uNew(Each_typeof());
    obj11->ctor_1();
    return obj11;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/$.uno#4
// -----------------------------------------------------------

// public sealed class EventBinding :719
// {
::g::Fuse::Reactive::Binding_type* EventBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Binding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(EventBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Binding_type);
    type = (::g::Fuse::Reactive::Binding_type*)uClassType::New("Fuse.Reactive.EventBinding", options);
    type->SetBase(::g::Fuse::Reactive::Binding_typeof());
    type->fp_NewValue = (void(*)(::g::Fuse::Reactive::Binding*, uObject*))EventBinding__NewValue_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    ::STRINGS[20] = uString::Const("data");
    ::STRINGS[21] = uString::Const("sender");
    ::TYPES[2] = ::g::Fuse::Node_typeof();
    ::TYPES[46] = ::g::Fuse::Reactive::ScriptEventArgs_typeof();
    ::TYPES[36] = ::g::Fuse::Reactive::ThreadWorker_typeof();
    ::TYPES[37] = ::g::Fuse::Reactive::JavaScript_typeof();
    ::TYPES[19] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[9] = uObject_typeof();
    ::TYPES[47] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    ::TYPES[15] = uObject_typeof()->Array();
    ::TYPES[18] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[48] = ::g::Fuse::Scripting::IScriptEvent_typeof();
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[49] = ::g::Fuse::Reactive::Binding_typeof();
    ::TYPES[50] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(2, ::g::Fuse::Scripting::Function_typeof(), ::g::Fuse::Reactive::ScriptEventArgs_typeof());
    ::TYPES[51] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[52] = ::g::Uno::Action2_typeof()->MakeType(::g::Fuse::Scripting::Function_typeof(), ::g::Fuse::Reactive::ScriptEventArgs_typeof());
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::Reactive::Binding_type, interface0));
    type->SetFields(5,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::EventBinding, _function), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)EventBinding__New1_fn, 0, true, EventBinding_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("OnEvent", NULL, (void*)EventBinding__OnEvent_fn, 0, false, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::EventArgs_typeof()));
    return type;
}

// public EventBinding(string key) :722
void EventBinding__ctor_2_fn(EventBinding* __this, uString* key)
{
    __this->ctor_2(key);
}

// private static void CallFunction(Fuse.Scripting.Function function, Fuse.Reactive.ScriptEventArgs args) :746
void EventBinding__CallFunction_fn(::g::Fuse::Scripting::Function* function, ::g::Fuse::Reactive::ScriptEventArgs* args)
{
    EventBinding::CallFunction(function, args);
}

// public EventBinding New(string key) :722
void EventBinding__New1_fn(uString* key, EventBinding** __retval)
{
    *__retval = EventBinding::New1(key);
}

// internal override sealed void NewValue(object obj) :729
void EventBinding__NewValue_fn(EventBinding* __this, uObject* obj)
{
    uStackFrame __("Fuse.Reactive.EventBinding", "NewValue(object)");
    __this->_function = uAs< ::g::Fuse::Scripting::Function*>(obj, ::TYPES[18/*Fuse.Scripting.Function*/]);
}

// public void OnEvent(object sender, Uno.EventArgs args) :734
void EventBinding__OnEvent_fn(EventBinding* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnEvent(sender, args);
}

// public EventBinding(string key) [instance] :722
void EventBinding::ctor_2(uString* key)
{
    uStackFrame __("Fuse.Reactive.EventBinding", ".ctor(string)");
    ctor_1(key);
}

// public void OnEvent(object sender, Uno.EventArgs args) [instance] :734
void EventBinding::OnEvent(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Reactive.EventBinding", "OnEvent(object,Uno.EventArgs)");
    uObject* se = uAs<uObject*>(args, ::TYPES[48/*Fuse.Scripting.IScriptEvent*/]);

    if (!IsRooted())
        return;

    if (_function != NULL)
    {
        ::g::Fuse::Reactive::ScriptEventArgs* sea = ::g::Fuse::Reactive::ScriptEventArgs::New2(ParentNode(), Key(), se);
        ::g::Uno::Threading::IDispatcherExtensions__Invoke2_fn(::TYPES[50/*Uno.Threading.IDispatcherExtensions.Invoke2<Fuse.Scripting.Function, Fuse.Reactive.ScriptEventArgs>*/], (uObject*)::g::Fuse::Reactive::JavaScript::Worker(), uDelegate::New(::TYPES[52/*Uno.Action<Fuse.Scripting.Function, Fuse.Reactive.ScriptEventArgs>*/], (void*)EventBinding__CallFunction_fn), _function, sea);
    }
}

// private static void CallFunction(Fuse.Scripting.Function function, Fuse.Reactive.ScriptEventArgs args) [static] :746
void EventBinding::CallFunction(::g::Fuse::Scripting::Function* function, ::g::Fuse::Reactive::ScriptEventArgs* args)
{
    uStackFrame __("Fuse.Reactive.EventBinding", "CallFunction(Fuse.Scripting.Function,Fuse.Reactive.ScriptEventArgs)");
    uObject* dc = uPtr(uPtr(args)->Sender)->DataContext();
    ::g::Fuse::Scripting::Object* obj = uPtr(uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Context())->NewObject();
    uPtr(obj)->Item(::STRINGS[20/*"data"*/], ::g::Fuse::Reactive::ThreadWorker::Unwrap(dc));

    if (::g::Uno::String::op_Inequality(uPtr(args->Sender)->Name(), NULL))
        obj->Item(::STRINGS[21/*"sender"*/], uPtr(args->Sender)->Name());

    if (args->Args != NULL)
        ::g::Fuse::Scripting::IScriptEvent::Serialize(uInterface(uPtr(args->Args), ::TYPES[48/*Fuse.Scripting.IScriptEvent*/]), (uObject*)::g::Fuse::Reactive::ScriptObjectSerializer::New1(obj));

    uPtr(function)->Call(uArray::Init<uObject*>(::TYPES[15/*object[]*/], 1, obj));
}

// public EventBinding New(string key) [static] :722
EventBinding* EventBinding::New1(uString* key)
{
    EventBinding* obj1 = (EventBinding*)uNew(EventBinding_typeof());
    obj1->ctor_2(key);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/$.uno#11
// ------------------------------------------------------------

// internal sealed class InternalPathSubscription :1720
// {
InternalPathSubscription_type* InternalPathSubscription_typeof()
{
    static uSStrong<InternalPathSubscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(InternalPathSubscription);
    options.TypeSize = sizeof(InternalPathSubscription_type);
    type = (InternalPathSubscription_type*)uClassType::New("Fuse.Reactive.InternalPathSubscription", options);
    type->interface0.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::Array*))InternalPathSubscription__OnNewAll_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))InternalPathSubscription__OnNewAt_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))InternalPathSubscription__OnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))InternalPathSubscription__OnAdd_fn;
    type->interface0.fp_OnRemove = (void(*)(uObject*, uObject*, int*))InternalPathSubscription__OnRemove_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))InternalPathSubscription__OnInsertAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))InternalPathSubscription__OnFailed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))InternalPathSubscription__Dispose_fn;
    ::STRINGS[22] = uString::Const(".");
    ::STRINGS[23] = uString::Const("Cannot access disposed PathSubscription");
    ::STRINGS[24] = uString::Const("Data binding to '");
    ::STRINGS[25] = uString::Const("': expected single value, got array");
    ::STRINGS[26] = uString::Const("': expected single value, got array of length ");
    ::TYPES[14] = ::g::Uno::String_typeof();
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[19] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[6] = ::g::Uno::IDisposable_typeof();
    ::TYPES[5] = ::g::Uno::Action_typeof();
    ::TYPES[24] = ::g::Fuse::Reactive::Observable_typeof();
    ::TYPES[25] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[21] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[9] = uObject_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(InternalPathSubscription_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(InternalPathSubscription_type, interface1));
    type->SetFields(0,
        ::g::Fuse::Reactive::Binding_typeof(), offsetof(::g::Fuse::Reactive::InternalPathSubscription, _b), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Reactive::InternalPathSubscription, _failCallback), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::InternalPathSubscription, _isDisposed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::InternalPathSubscription, _isInnerLink), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::InternalPathSubscription, _key), 0,
        InternalPathSubscription_typeof(), offsetof(::g::Fuse::Reactive::InternalPathSubscription, _next), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::InternalPathSubscription, _subscription), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::InternalPathSubscription, _unhandledPath), 0);
    return type;
}

// private InternalPathSubscription(Fuse.Reactive.Binding b, string path, Uno.Action failCallback) :1742
void InternalPathSubscription__ctor__fn(InternalPathSubscription* __this, ::g::Fuse::Reactive::Binding* b, uString* path, uDelegate* failCallback)
{
    __this->ctor_(b, path, failCallback);
}

// public InternalPathSubscription(Fuse.Reactive.Binding b, Uno.Action failCallback) :1728
void InternalPathSubscription__ctor_1_fn(InternalPathSubscription* __this, ::g::Fuse::Reactive::Binding* b, uDelegate* failCallback)
{
    __this->ctor_1(b, failCallback);
}

// private static string CombineKeyAndPath(string key, string path) :1806
void InternalPathSubscription__CombineKeyAndPath_fn(uString* key, uString* path, uString** __retval)
{
    *__retval = InternalPathSubscription::CombineKeyAndPath(key, path);
}

// public void Dispose() :1884
void InternalPathSubscription__Dispose_fn(InternalPathSubscription* __this)
{
    __this->Dispose();
}

// private void HandleNewDataContext(object val) :1751
void InternalPathSubscription__HandleNewDataContext_fn(InternalPathSubscription* __this, uObject* val)
{
    __this->HandleNewDataContext(val);
}

// private void HandleObject(Fuse.Scripting.Object obj) :1757
void InternalPathSubscription__HandleObject_fn(InternalPathSubscription* __this, ::g::Fuse::Scripting::Object* obj)
{
    __this->HandleObject(obj);
}

// private void HandlePath(object dc, string path) :1775
void InternalPathSubscription__HandlePath_fn(InternalPathSubscription* __this, uObject* dc, uString* path)
{
    __this->HandlePath(dc, path);
}

// public void Init(object dc, string path) :1734
void InternalPathSubscription__Init_fn(InternalPathSubscription* __this, uObject* dc, uString* path)
{
    __this->Init(dc, path);
}

// private InternalPathSubscription New(Fuse.Reactive.Binding b, string path, Uno.Action failCallback) :1742
void InternalPathSubscription__New1_fn(::g::Fuse::Reactive::Binding* b, uString* path, uDelegate* failCallback, InternalPathSubscription** __retval)
{
    *__retval = InternalPathSubscription::New1(b, path, failCallback);
}

// public InternalPathSubscription New(Fuse.Reactive.Binding b, Uno.Action failCallback) :1728
void InternalPathSubscription__New2_fn(::g::Fuse::Reactive::Binding* b, uDelegate* failCallback, InternalPathSubscription** __retval)
{
    *__retval = InternalPathSubscription::New2(b, failCallback);
}

// public void OnAdd(object addedValue) :1839
void InternalPathSubscription__OnAdd_fn(InternalPathSubscription* __this, uObject* addedValue)
{
    __this->OnAdd(addedValue);
}

// public void OnFailed(string message) :1826
void InternalPathSubscription__OnFailed_fn(InternalPathSubscription* __this, uString* message)
{
    __this->OnFailed(message);
}

// public void OnInsertAt(int index, object value) :1853
void InternalPathSubscription__OnInsertAt_fn(InternalPathSubscription* __this, int* index, uObject* value)
{
    __this->OnInsertAt(*index, value);
}

// public void OnNewAll(Fuse.Scripting.Array values) :1812
void InternalPathSubscription__OnNewAll_fn(InternalPathSubscription* __this, ::g::Fuse::Scripting::Array* values)
{
    __this->OnNewAll(values);
}

// public void OnNewAt(int index, object newValue) :1820
void InternalPathSubscription__OnNewAt_fn(InternalPathSubscription* __this, int* index, uObject* newValue)
{
    __this->OnNewAt(*index, newValue);
}

// public void OnRemove(object value, int index) :1846
void InternalPathSubscription__OnRemove_fn(InternalPathSubscription* __this, uObject* value, int* index)
{
    __this->OnRemove(value, *index);
}

// public void OnSet(object value) :1832
void InternalPathSubscription__OnSet_fn(InternalPathSubscription* __this, uObject* value)
{
    __this->OnSet(value);
}

// private static string TakeKeyFromPath(string& path) :1861
void InternalPathSubscription__TakeKeyFromPath_fn(uString** path, uString** __retval)
{
    *__retval = InternalPathSubscription::TakeKeyFromPath(path);
}

// private InternalPathSubscription(Fuse.Reactive.Binding b, string path, Uno.Action failCallback) [instance] :1742
void InternalPathSubscription::ctor_(::g::Fuse::Reactive::Binding* b, uString* path, uDelegate* failCallback)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", ".ctor(Fuse.Reactive.Binding,string,Uno.Action)");
    _b = b;
    _key = InternalPathSubscription::TakeKeyFromPath(&path);
    _unhandledPath = path;
    _isInnerLink = true;
    _failCallback = failCallback;
}

// public InternalPathSubscription(Fuse.Reactive.Binding b, Uno.Action failCallback) [instance] :1728
void InternalPathSubscription::ctor_1(::g::Fuse::Reactive::Binding* b, uDelegate* failCallback)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", ".ctor(Fuse.Reactive.Binding,Uno.Action)");
    _b = b;
    _failCallback = failCallback;
}

// public void Dispose() [instance] :1884
void InternalPathSubscription::Dispose()
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "Dispose()");

    if (_isDisposed)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[23/*"Cannot acce...*/]));

    _isDisposed = true;

    if (_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[6/*Uno.IDisposable*/]));
        _subscription = NULL;
    }

    if (_next != NULL)
    {
        uPtr(_next)->Dispose();
        _next = NULL;
    }

    _b = NULL;
}

// private void HandleNewDataContext(object val) [instance] :1751
void InternalPathSubscription::HandleNewDataContext(uObject* val)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "HandleNewDataContext(object)");

    if (!_isInnerLink)
        U_THROW(::g::Uno::Exception::New1());

    HandlePath(val, _unhandledPath);
}

// private void HandleObject(Fuse.Scripting.Object obj) [instance] :1757
void InternalPathSubscription::HandleObject(::g::Fuse::Scripting::Object* obj)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "HandleObject(Fuse.Scripting.Object)");

    if (_next == NULL)
        return;

    if (uPtr(obj)->ContainsKey(_key))
    {
        uObject* val = ::g::Fuse::Reactive::ThreadWorker::Wrap(uPtr(obj)->Item(_key));
        uPtr(_next)->HandleNewDataContext(val);
        uObject* disp = uAs<uObject*>(val, ::TYPES[6/*Uno.IDisposable*/]);

        if (disp != NULL)
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(disp), ::TYPES[6/*Uno.IDisposable*/]));
    }
    else
        uPtr(_failCallback)->InvokeVoid();
}

// private void HandlePath(object dc, string path) [instance] :1775
void InternalPathSubscription::HandlePath(uObject* dc, uString* path)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "HandlePath(object,string)");

    if (::g::Uno::String::op_Equality(_key, NULL))
        uPtr(_b)->NewValue(dc);
    else
    {
        if (_next != NULL)
            uPtr(_next)->Dispose();

        _next = NULL;
        ::g::Fuse::Reactive::Observable* obs = uAs< ::g::Fuse::Reactive::Observable*>(dc, ::TYPES[24/*Fuse.Reactive.Observable*/]);

        if (obs != NULL)
        {
            _next = InternalPathSubscription::New1(_b, InternalPathSubscription::CombineKeyAndPath(_key, path), _failCallback);

            if (_subscription != NULL)
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[6/*Uno.IDisposable*/]));

            _subscription = (uObject*)uPtr(obs)->Subscribe((uObject*)this);
        }
        else if (uIs(dc, ::TYPES[19/*Fuse.Scripting.Object*/]))
        {
            _next = InternalPathSubscription::New1(_b, path, _failCallback);
            HandleObject(uCast< ::g::Fuse::Scripting::Object*>(dc, ::TYPES[19/*Fuse.Scripting.Object*/]));
        }
        else
        {
            uPtr(_failCallback)->InvokeVoid();
            _next = NULL;
        }
    }
}

// public void Init(object dc, string path) [instance] :1734
void InternalPathSubscription::Init(uObject* dc, uString* path)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "Init(object,string)");
    _key = InternalPathSubscription::TakeKeyFromPath(&path);
    HandlePath(dc, path);
}

// public void OnAdd(object addedValue) [instance] :1839
void InternalPathSubscription::OnAdd(uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "OnAdd(object)");

    if (_isDisposed)
        return;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[24/*"Data bindin...*/], _key), ::STRINGS[25/*"': expected...*/])));
}

// public void OnFailed(string message) [instance] :1826
void InternalPathSubscription::OnFailed(uString* message)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "OnFailed(string)");

    if (_isDisposed)
        return;
}

// public void OnInsertAt(int index, object value) [instance] :1853
void InternalPathSubscription::OnInsertAt(int index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "OnInsertAt(int,object)");

    if (_isDisposed)
        return;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[24/*"Data bindin...*/], _key), ::STRINGS[25/*"': expected...*/])));
}

// public void OnNewAll(Fuse.Scripting.Array values) [instance] :1812
void InternalPathSubscription::OnNewAll(::g::Fuse::Scripting::Array* values)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "OnNewAll(Fuse.Scripting.Array)");

    if (_isDisposed)
        return;

    if (uPtr(values)->Length() > 0)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[24/*"Data bindin...*/], _key), ::STRINGS[26/*"': expected...*/]), uBox<int>(::TYPES[16/*int*/], uPtr(values)->Length()))));
}

// public void OnNewAt(int index, object newValue) [instance] :1820
void InternalPathSubscription::OnNewAt(int index, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "OnNewAt(int,object)");

    if (_isDisposed)
        return;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[24/*"Data bindin...*/], _key), ::STRINGS[25/*"': expected...*/])));
}

// public void OnRemove(object value, int index) [instance] :1846
void InternalPathSubscription::OnRemove(uObject* value, int index)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "OnRemove(object,int)");

    if (_isDisposed)
        return;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[24/*"Data bindin...*/], _key), ::STRINGS[25/*"': expected...*/])));
}

// public void OnSet(object value) [instance] :1832
void InternalPathSubscription::OnSet(uObject* value)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "OnSet(object)");

    if (_isDisposed)
        return;

    uPtr(_next)->HandleNewDataContext(value);
}

// private static string CombineKeyAndPath(string key, string path) [static] :1806
uString* InternalPathSubscription::CombineKeyAndPath(uString* key, uString* path)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "CombineKeyAndPath(string,string)");

    if (::g::Uno::String::op_Inequality(path, NULL) && (uPtr(path)->Length() > 0))
        return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(key, ::STRINGS[22/*"."*/]), path);
    else
        return key;
}

// private InternalPathSubscription New(Fuse.Reactive.Binding b, string path, Uno.Action failCallback) [static] :1742
InternalPathSubscription* InternalPathSubscription::New1(::g::Fuse::Reactive::Binding* b, uString* path, uDelegate* failCallback)
{
    InternalPathSubscription* obj2 = (InternalPathSubscription*)uNew(InternalPathSubscription_typeof());
    obj2->ctor_(b, path, failCallback);
    return obj2;
}

// public InternalPathSubscription New(Fuse.Reactive.Binding b, Uno.Action failCallback) [static] :1728
InternalPathSubscription* InternalPathSubscription::New2(::g::Fuse::Reactive::Binding* b, uDelegate* failCallback)
{
    InternalPathSubscription* obj1 = (InternalPathSubscription*)uNew(InternalPathSubscription_typeof());
    obj1->ctor_1(b, failCallback);
    return obj1;
}

// private static string TakeKeyFromPath(string& path) [static] :1861
uString* InternalPathSubscription::TakeKeyFromPath(uString** path)
{
    uStackFrame __("Fuse.Reactive.InternalPathSubscription", "TakeKeyFromPath(string&)");

    if (::g::Uno::String::op_Equality(*path, NULL))
        return NULL;

    uString* key = *path;
    int p = ::g::Uno::String::IndexOf(uPtr(key), '.', 0);

    if (p != -1)
    {
        key = ::g::Uno::String::Substring1(uPtr(key), 0, p);
        *path = ::g::Uno::String::Substring1(uPtr(*path), p + 1, (uPtr(*path)->Length() - p) - 1);
    }
    else
        *path = NULL;

    if (::g::Uno::String::op_Equality(key, NULL) || (uPtr(key)->Length() == 0))
        return NULL;
    else
        return key;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/$.uno#5
// -----------------------------------------------------------

// public abstract interface IObserver :805
// {
uInterfaceType* IObserver_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IObserver", 0, 0);
    type->Reflection.SetFunctions(7,
        new uFunction("OnAdd", NULL, NULL, offsetof(IObserver, fp_OnAdd), false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("OnFailed", NULL, NULL, offsetof(IObserver, fp_OnFailed), false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("OnInsertAt", NULL, NULL, offsetof(IObserver, fp_OnInsertAt), false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), uObject_typeof()),
        new uFunction("OnNewAll", NULL, NULL, offsetof(IObserver, fp_OnNewAll), false, uVoid_typeof(), 1, ::g::Fuse::Scripting::Array_typeof()),
        new uFunction("OnNewAt", NULL, NULL, offsetof(IObserver, fp_OnNewAt), false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), uObject_typeof()),
        new uFunction("OnRemove", NULL, NULL, offsetof(IObserver, fp_OnRemove), false, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("OnSet", NULL, NULL, offsetof(IObserver, fp_OnSet), false, uVoid_typeof(), 1, uObject_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/$.uno#6
// -----------------------------------------------------------

// public partial sealed class JavaScript :829
// {
// static JavaScript() :829
static void JavaScript__cctor__fn(uType* __type)
{
    JavaScript::_resetHookMutex_ = ::g::Uno::Threading::Mutex::Create();
    JavaScript::_registeredClasses_ = ((::g::Uno::Collections::HashSet*)::g::Uno::Collections::HashSet::New1(::TYPES[53/*Uno.Collections.HashSet<string>*/]));
    JavaScript::_emptyArgs_ = uArray::New(::TYPES[15/*object[]*/], 0);
}

JavaScript_type* JavaScript_typeof()
{
    static uSStrong<JavaScript_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(JavaScript);
    options.TypeSize = sizeof(JavaScript_type);
    type = (JavaScript_type*)uClassType::New("Fuse.Reactive.JavaScript", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_cctor_ = JavaScript__cctor__fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))JavaScript__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))JavaScript__OnUnrooted_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))JavaScript__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    ::STRINGS[27] = uString::Const("var ");
    ::STRINGS[28] = uString::Const(" = new __uxTypes['");
    ::STRINGS[29] = uString::Const("'](module, ");
    ::STRINGS[30] = uString::Const(");");
    ::STRINGS[31] = uString::Const("module");
    ::STRINGS[32] = uString::Const("index");
    ::STRINGS[33] = uString::Const("exports");
    ::STRINGS[34] = uString::Const("Cannot require() a rooted module");
    ::STRINGS[35] = uString::Const("if (typeof __uxTypes === 'undefined') { __uxTypes = {}; }");
    ::STRINGS[36] = uString::Const("__uxTypes['");
    ::STRINGS[37] = uString::Const("']");
    ::STRINGS[38] = uString::Const(" = function(module, index) { this.module = module; this.index = index; } ");
    ::STRINGS[39] = uString::Const(".prototype.");
    ::STRINGS[40] = uString::Const(" = function() { return this.module.callMethod(this.index, ");
    ::STRINGS[41] = uString::Const(", Array.prototype.slice.call(arguments)); }");
    ::STRINGS[42] = uString::Const("(class ");
    ::STRINGS[43] = uString::Const(")");
    ::TYPES[53] = ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[15] = uObject_typeof()->Array();
    ::TYPES[22] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[54] = ::g::Uno::UX::NameTable_typeof();
    ::TYPES[55] = ::g::Uno::UX::NameTableEntry_typeof()->Array();
    ::TYPES[56] = ::g::Uno::UX::NameTableEntry_typeof();
    ::TYPES[57] = ::g::Fuse::Scripting::ScriptClass_typeof();
    ::TYPES[9] = uObject_typeof();
    ::TYPES[16] = ::g::Uno::Int_typeof();
    ::TYPES[58] = ::g::Fuse::Scripting::ScriptMethod_typeof();
    ::TYPES[5] = ::g::Uno::Action_typeof();
    ::TYPES[21] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[19] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[59] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(1, uObject_typeof());
    ::TYPES[60] = ::g::Fuse::UpdateManager_typeof();
    ::TYPES[61] = ::g::Uno::Action1_typeof()->MakeType(uObject_typeof());
    ::TYPES[62] = ::g::Fuse::Scripting::ModuleResult_typeof();
    ::TYPES[36] = ::g::Fuse::Reactive::ThreadWorker_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[63] = ::g::Fuse::Scripting::Module_typeof();
    ::TYPES[64] = ::g::Uno::Collections::IList_typeof()->MakeType(uObject_typeof());
    ::TYPES[2] = ::g::Fuse::Node_typeof();
    ::TYPES[65] = ::g::Fuse::Scripting::ScriptMethod_typeof()->Array();
    ::TYPES[66] = ::g::Fuse::Scripting::ScriptModule_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(JavaScript_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(JavaScript_type, interface1));
    type->SetFields(3,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _evaluatingDataContext), 0,
        ::g::Fuse::Scripting::ModuleResult_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _moduleResult), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _nameTable), 0,
        ::g::Fuse::Scripting::ScriptModule_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _scriptModule), 0,
        uObject_typeof()->Array(), (uintptr_t)&::g::Fuse::Reactive::JavaScript::_emptyArgs_, uFieldFlagsStatic,
        ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::Reactive::JavaScript::_registeredClasses_, uFieldFlagsStatic,
        ::g::Uno::Threading::Mutex_typeof(), (uintptr_t)&::g::Fuse::Reactive::JavaScript::_resetHookMutex_, uFieldFlagsStatic,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), (uintptr_t)&::g::Fuse::Reactive::JavaScript::_worker_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(9,
        new uFunction("get_Code", NULL, (void*)JavaScript__get_Code_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Code", NULL, (void*)JavaScript__set_Code_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_File", NULL, (void*)JavaScript__get_File_fn, 0, false, ::g::Uno::UX::FileSource_typeof(), 0),
        new uFunction("set_File", NULL, (void*)JavaScript__set_File_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::FileSource_typeof()),
        new uFunction("get_FileName", NULL, (void*)JavaScript__get_FileName_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_FileName", NULL, (void*)JavaScript__set_FileName_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_LineNumber", NULL, (void*)JavaScript__get_LineNumber_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_LineNumber", NULL, (void*)JavaScript__set_LineNumber_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)JavaScript__New1_fn, 0, true, JavaScript_typeof(), 1, ::g::Uno::UX::NameTable_typeof()));
    return type;
}

// public JavaScript(Uno.UX.NameTable nameTable) :967
void JavaScript__ctor_1_fn(JavaScript* __this, ::g::Uno::UX::NameTable* nameTable)
{
    __this->ctor_1(nameTable);
}

// private string BuildObjectPredeclareString() :1016
void JavaScript__BuildObjectPredeclareString_fn(JavaScript* __this, uString** __retval)
{
    *__retval = __this->BuildObjectPredeclareString();
}

// private object CallMethod(object[] args) :1041
void JavaScript__CallMethod_fn(JavaScript* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->CallMethod(args);
}

// public string get_Code() :918
void JavaScript__get_Code_fn(JavaScript* __this, uString** __retval)
{
    *__retval = __this->Code();
}

// public void set_Code(string value) :919
void JavaScript__set_Code_fn(JavaScript* __this, uString* value)
{
    __this->Code(value);
}

// private object[] CopyArgs(Fuse.Scripting.Array r) :1062
void JavaScript__CopyArgs_fn(JavaScript* __this, ::g::Fuse::Scripting::Array* r, uArray** __retval)
{
    *__retval = __this->CopyArgs(r);
}

// private void DispatchEvaluate() :864
void JavaScript__DispatchEvaluate_fn(JavaScript* __this)
{
    __this->DispatchEvaluate();
}

// private void EvaluateDataContext() :873
void JavaScript__EvaluateDataContext_fn(JavaScript* __this)
{
    __this->EvaluateDataContext();
}

// private object EvaluateExports() :882
void JavaScript__EvaluateExports_fn(JavaScript* __this, uObject** __retval)
{
    *__retval = __this->EvaluateExports();
}

// private Fuse.Scripting.ModuleResult EvaluateModule() :887
void JavaScript__EvaluateModule_fn(JavaScript* __this, ::g::Fuse::Scripting::ModuleResult** __retval)
{
    *__retval = __this->EvaluateModule();
}

// public Uno.UX.FileSource get_File() :937
void JavaScript__get_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :938
void JavaScript__set_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public string get_FileName() :944
void JavaScript__get_FileName_fn(JavaScript* __this, uString** __retval)
{
    *__retval = __this->FileName();
}

// public void set_FileName(string value) :945
void JavaScript__set_FileName_fn(JavaScript* __this, uString* value)
{
    __this->FileName(value);
}

// private Fuse.Scripting.Module Fuse.Scripting.IModuleProvider.GetModule() :852
void JavaScript__FuseScriptingIModuleProviderGetModule_fn(JavaScript* __this, ::g::Fuse::Scripting::Module** __retval)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "Fuse.Scripting.IModuleProvider.GetModule()");

    if (__this->IsRooted())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[34/*"Cannot requ...*/]));

    return *__retval = __this->_scriptModule, void();
}

// private Fuse.Scripting.ScriptClass GetScriptClass(Uno.UX.NameTableEntry e) :1134
void JavaScript__GetScriptClass_fn(JavaScript* __this, ::g::Uno::UX::NameTableEntry* e, ::g::Fuse::Scripting::ScriptClass** __retval)
{
    *__retval = __this->GetScriptClass(e);
}

// public int get_LineNumber() :931
void JavaScript__get_LineNumber_fn(JavaScript* __this, int* __retval)
{
    *__retval = __this->LineNumber();
}

// public void set_LineNumber(int value) :932
void JavaScript__set_LineNumber_fn(JavaScript* __this, int* value)
{
    __this->LineNumber(*value);
}

// private void LookUp(int& objIndex, object& obj, Uno.UX.NameTable& nt) :1117
void JavaScript__LookUp_fn(JavaScript* __this, int* objIndex, uObject** obj, ::g::Uno::UX::NameTable** nt)
{
    __this->LookUp(objIndex, obj, nt);
}

// private void LookUp(int objIndex, int methodIndex, object& obj, Fuse.Scripting.ScriptMethod& sm) :1108
void JavaScript__LookUp1_fn(JavaScript* __this, int* objIndex, int* methodIndex, uObject** obj, ::g::Fuse::Scripting::ScriptMethod** sm)
{
    __this->LookUp1(*objIndex, *methodIndex, obj, sm);
}

// public JavaScript New(Uno.UX.NameTable nameTable) :967
void JavaScript__New1_fn(::g::Uno::UX::NameTable* nameTable, JavaScript** __retval)
{
    *__retval = JavaScript::New1(nameTable);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :836
void JavaScript__OnRooted_fn(JavaScript* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "OnRooted(Fuse.Node)");
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);

    if (JavaScript::_worker() == NULL)
        JavaScript::_worker() = ::g::Fuse::Reactive::ThreadWorker::New1();

    __this->DispatchEvaluate();
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :846
void JavaScript__OnUnrooted_fn(JavaScript* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "OnUnrooted(Fuse.Node)");
    uPtr(__this->ParentNode())->DataContext(NULL);
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// private static void RegisterClass(Fuse.Scripting.Context ctx, string name, Fuse.Scripting.ScriptClass cl) :994
void JavaScript__RegisterClass_fn(::g::Fuse::Scripting::Context* ctx, uString* name, ::g::Fuse::Scripting::ScriptClass* cl)
{
    JavaScript::RegisterClass(ctx, name, cl);
}

// private static void RegisterRequiredClasses(Fuse.Scripting.Context ctx, Uno.UX.NameTable nt) :975
void JavaScript__RegisterRequiredClasses_fn(::g::Fuse::Scripting::Context* ctx, ::g::Uno::UX::NameTable* nt)
{
    JavaScript::RegisterRequiredClasses(ctx, nt);
}

// private void SetParentDataContext(object dataContext) :907
void JavaScript__SetParentDataContext_fn(JavaScript* __this, uObject* dataContext)
{
    __this->SetParentDataContext(dataContext);
}

// internal static Fuse.Reactive.ThreadWorker get_Worker() :832
void JavaScript__get_Worker_fn(::g::Fuse::Reactive::ThreadWorker** __retval)
{
    *__retval = JavaScript::Worker();
}

uSStrong<uArray*> JavaScript::_emptyArgs_;
uSStrong< ::g::Uno::Collections::HashSet*> JavaScript::_registeredClasses_;
uSStrong< ::g::Uno::Threading::Mutex*> JavaScript::_resetHookMutex_;
uSStrong< ::g::Fuse::Reactive::ThreadWorker*> JavaScript::_worker_;

// public JavaScript(Uno.UX.NameTable nameTable) [instance] :967
void JavaScript::ctor_1(::g::Uno::UX::NameTable* nameTable)
{
    uStackFrame __("Fuse.Reactive.JavaScript", ".ctor(Uno.UX.NameTable)");
    ctor_();
    _nameTable = nameTable;
    _scriptModule = ::g::Fuse::Scripting::ScriptModule::New1(BuildObjectPredeclareString(), uDelegate::New(::TYPES[22/*Fuse.Scripting.Callback*/], (void*)JavaScript__CallMethod_fn, this));
}

// private string BuildObjectPredeclareString() [instance] :1016
uString* JavaScript::BuildObjectPredeclareString()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "BuildObjectPredeclareString()");
    uArray* array7;
    int index8;
    int length9;
    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();
    int c = 0;
    ::g::Uno::UX::NameTable* nt = _nameTable;

    while (nt != NULL)
    {
        for (array7 = uPtr(nt)->Entries, index8 = 0, length9 = uPtr(array7)->Length(); index8 < length9; ++index8)
        {
            ::g::Uno::UX::NameTableEntry* e = uPtr(array7)->Strong< ::g::Uno::UX::NameTableEntry*>(index8);
            int k = c;

            for (int i = 0; i < uPtr(uPtr(e)->Metadata)->Length(); i++)
            {
                if (uIs(uPtr(uPtr(e)->Metadata)->Strong<uObject*>(i), ::TYPES[57/*Fuse.Scripting.ScriptClass*/]))
                {
                    uPtr(sb)->Append1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[27/*"var "*/], uPtr(e)->Name), ::STRINGS[28/*" = new __ux...*/]), uPtr(e)->TypeName), ::STRINGS[29/*"'](module, "*/]), uBox<int>(::TYPES[16/*int*/], c)), ::STRINGS[30/*");"*/]));
                    c++;
                }

                if (c > k)
                    break;
            }
        }

        nt = uPtr(nt)->ParentTable;
    }

    return sb->ToString();
}

// private object CallMethod(object[] args) [instance] :1041
uObject* JavaScript::CallMethod(uArray* args)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "CallMethod(object[])");
    int objectId = ::g::Fuse::Scripting::Marshal::ToInt(uPtr(args)->Strong<uObject*>(0));
    int methodId = ::g::Fuse::Scripting::Marshal::ToInt(args->Strong<uObject*>(1));
    uObject* obj;
    ::g::Fuse::Scripting::ScriptMethod* sm;
    LookUp1(objectId, methodId, &obj, &sm);

    if (uPtr(sm)->Thread == 2)
    {
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)JavaScript__CallClosure__Run_fn, JavaScript__CallClosure::New1(sm, obj, CopyArgs(uAs< ::g::Fuse::Scripting::Array*>(uPtr(args)->Strong<uObject*>(2), ::TYPES[21/*Fuse.Scripting.Array*/])))));
        return NULL;
    }
    else
        return uPtr(sm)->Call(obj, CopyArgs(uAs< ::g::Fuse::Scripting::Array*>(uPtr(args)->Strong<uObject*>(2), ::TYPES[21/*Fuse.Scripting.Array*/])));
}

// public string get_Code() [instance] :918
uString* JavaScript::Code()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_Code()");
    return uPtr(_scriptModule)->Code();
}

// public void set_Code(string value) [instance] :919
void JavaScript::Code(uString* value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "set_Code(string)");

    if (::g::Uno::String::op_Inequality(uPtr(_scriptModule)->Code(), value))
        uPtr(_scriptModule)->Code(value);
}

// private object[] CopyArgs(Fuse.Scripting.Array r) [instance] :1062
uArray* JavaScript::CopyArgs(::g::Fuse::Scripting::Array* r)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "CopyArgs(Fuse.Scripting.Array)");
    uArray* a = uArray::New(::TYPES[15/*object[]*/], uPtr(r)->Length());

    for (int i = 0; i < r->Length(); i++)
    {
        uPtr(a)->Strong<uObject*>(i) = uPtr(r)->Item(i);
        ::g::Fuse::Scripting::Object* o = uAs< ::g::Fuse::Scripting::Object*>(r->Item(i), ::TYPES[19/*Fuse.Scripting.Object*/]);

        if (o != NULL)
        {
            if (!uPtr(o)->ContainsKey(::STRINGS[31/*"module"*/]))
                continue;

            if (!uPtr(o)->ContainsKey(::STRINGS[32/*"index"*/]))
                continue;

            int index = ::g::Fuse::Scripting::Marshal::ToInt(uPtr(o)->Item(::STRINGS[32/*"index"*/]));
            uObject* obj;
            ::g::Uno::UX::NameTable* nt;
            LookUp(&index, &obj, &nt);
            uPtr(a)->Strong<uObject*>(i) = obj;
        }
    }

    return a;
}

// private void DispatchEvaluate() [instance] :864
void JavaScript::DispatchEvaluate()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "DispatchEvaluate()");

    if (!_evaluatingDataContext)
    {
        _evaluatingDataContext = true;
        uPtr(JavaScript::_worker())->Invoke(uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)JavaScript__EvaluateDataContext_fn, this));
    }
}

// private void EvaluateDataContext() [instance] :873
void JavaScript::EvaluateDataContext()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "EvaluateDataContext()");
    _evaluatingDataContext = false;
    uObject* dataContext = ::g::Fuse::Reactive::ThreadWorker::Wrap(EvaluateExports());
    ::g::Uno::Threading::IDispatcherExtensions__Invoke1_fn(::TYPES[59/*Uno.Threading.IDispatcherExtensions.Invoke1<object>*/], ::g::Fuse::UpdateManager::Dispatcher(), uDelegate::New(::TYPES[61/*Uno.Action<object>*/], (void*)JavaScript__SetParentDataContext_fn, this), dataContext);
}

// private object EvaluateExports() [instance] :882
uObject* JavaScript::EvaluateExports()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "EvaluateExports()");
    return uPtr(uPtr(EvaluateModule())->Object)->Item(::STRINGS[33/*"exports"*/]);
}

// private Fuse.Scripting.ModuleResult EvaluateModule() [instance] :887
::g::Fuse::Scripting::ModuleResult* JavaScript::EvaluateModule()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "EvaluateModule()");
    JavaScript::RegisterRequiredClasses(uPtr(JavaScript::_worker())->Context(), _nameTable);
    uString* globalId = ::g::Uno::UX::Resource::GetGlobalKey(this);

    {
        const auto __finally_fun = [&]()
        {
            uPtr(JavaScript::_resetHookMutex())->Unlock();
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        uPtr(JavaScript::_resetHookMutex())->Lock();
        _moduleResult = uPtr(_scriptModule)->Evaluate1(uPtr(JavaScript::_worker())->Context(), globalId);
        uPtr(_moduleResult)->AddDependency(uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)JavaScript__DispatchEvaluate_fn, this));
    }

    return _moduleResult;
}

// public Uno.UX.FileSource get_File() [instance] :937
::g::Uno::UX::FileSource* JavaScript::File()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_File()");
    return uPtr(_scriptModule)->File();
}

// public void set_File(Uno.UX.FileSource value) [instance] :938
void JavaScript::File(::g::Uno::UX::FileSource* value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "set_File(Uno.UX.FileSource)");
    uPtr(_scriptModule)->File(value);
}

// public string get_FileName() [instance] :944
uString* JavaScript::FileName()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_FileName()");
    return uPtr(_scriptModule)->FileName();
}

// public void set_FileName(string value) [instance] :945
void JavaScript::FileName(uString* value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "set_FileName(string)");
    uPtr(_scriptModule)->FileName(value);
}

// private Fuse.Scripting.ScriptClass GetScriptClass(Uno.UX.NameTableEntry e) [instance] :1134
::g::Fuse::Scripting::ScriptClass* JavaScript::GetScriptClass(::g::Uno::UX::NameTableEntry* e)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "GetScriptClass(Uno.UX.NameTableEntry)");

    for (int i = 0; i < uPtr(uPtr(e)->Metadata)->Length(); i++)
        if (uIs(uPtr(uPtr(e)->Metadata)->Strong<uObject*>(i), ::TYPES[57/*Fuse.Scripting.ScriptClass*/]))
            return uCast< ::g::Fuse::Scripting::ScriptClass*>(uPtr(uPtr(e)->Metadata)->Strong<uObject*>(i), ::TYPES[57/*Fuse.Scripting.ScriptClass*/]);

    U_THROW(::g::Uno::Exception::New1());
}

// public int get_LineNumber() [instance] :931
int JavaScript::LineNumber()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_LineNumber()");
    return uPtr(_scriptModule)->LineNumberOffset();
}

// public void set_LineNumber(int value) [instance] :932
void JavaScript::LineNumber(int value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "set_LineNumber(int)");
    uPtr(_scriptModule)->LineNumberOffset(value);
}

// private void LookUp(int& objIndex, object& obj, Uno.UX.NameTable& nt) [instance] :1117
void JavaScript::LookUp(int* objIndex, uObject** obj, ::g::Uno::UX::NameTable** nt)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "LookUp(int&,object&,Uno.UX.NameTable&)");
    uObject* ret11;
    *obj = NULL;
    *nt = _nameTable;

    while (*nt != NULL)
    {
        if (*objIndex < uPtr(uPtr(*nt)->Entries)->Length())
        {
            *obj = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(*nt)->Objects()), ::TYPES[64/*Uno.Collections.IList<object>*/]), uCRef<int>(*objIndex), &ret11), ret11);
            break;
        }

        *objIndex = *objIndex - uPtr(uPtr(*nt)->Entries)->Length();
        *nt = uPtr(*nt)->ParentTable;
    }
}

// private void LookUp(int objIndex, int methodIndex, object& obj, Fuse.Scripting.ScriptMethod& sm) [instance] :1108
void JavaScript::LookUp1(int objIndex, int methodIndex, uObject** obj, ::g::Fuse::Scripting::ScriptMethod** sm)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "LookUp(int,int,object&,Fuse.Scripting.ScriptMethod&)");
    ::g::Uno::UX::NameTable* nt;
    LookUp(&objIndex, obj, &nt);
    ::g::Fuse::Scripting::ScriptClass* sc = GetScriptClass(uPtr(uPtr(nt)->Entries)->Strong< ::g::Uno::UX::NameTableEntry*>(objIndex));
    *sm = uPtr(uPtr(sc)->CallTable)->Strong< ::g::Fuse::Scripting::ScriptMethod*>(methodIndex);
}

// private void SetParentDataContext(object dataContext) [instance] :907
void JavaScript::SetParentDataContext(uObject* dataContext)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "SetParentDataContext(object)");

    if (IsRooted())
        uPtr(ParentNode())->DataContext(dataContext);
}

// public JavaScript New(Uno.UX.NameTable nameTable) [static] :967
JavaScript* JavaScript::New1(::g::Uno::UX::NameTable* nameTable)
{
    JavaScript* obj10 = (JavaScript*)uNew(JavaScript_typeof());
    obj10->ctor_1(nameTable);
    return obj10;
}

// private static void RegisterClass(Fuse.Scripting.Context ctx, string name, Fuse.Scripting.ScriptClass cl) [static] :994
void JavaScript::RegisterClass(::g::Fuse::Scripting::Context* ctx, uString* name, ::g::Fuse::Scripting::ScriptClass* cl)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "RegisterClass(Fuse.Scripting.Context,string,Fuse.Scripting.ScriptClass)");
    JavaScript_typeof()->Init();
    bool ret12;
    bool ret13;

    if ((::g::Uno::Collections::HashSet__Contains_fn(uPtr(JavaScript::_registeredClasses()), name, &ret12), ret12))
        return;

    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();
    sb->AppendLine(::STRINGS[35/*"if (typeof ...*/]);
    uString* jsName = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[36/*"__uxTypes['"*/], name), ::STRINGS[37/*"']"*/]);
    sb->AppendLine(::g::Uno::String::op_Addition2(jsName, ::STRINGS[38/*" = function...*/]));

    for (int i = 0; i < uPtr(uPtr(cl)->CallTable)->Length(); i++)
        uPtr(sb)->AppendLine(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(jsName, ::STRINGS[39/*".prototype."*/]), uPtr(uPtr(uPtr(cl)->CallTable)->Strong< ::g::Fuse::Scripting::ScriptMethod*>(i))->Name), ::STRINGS[40/*" = function...*/]), uBox<int>(::TYPES[16/*int*/], i)), ::STRINGS[41/*", Array.pro...*/]));

    uPtr(ctx)->Evaluate(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[42/*"(class "*/], name), ::STRINGS[43/*")"*/]), sb->ToString());
    ::g::Uno::Collections::HashSet__Add_fn(uPtr(JavaScript::_registeredClasses()), name, &ret13);
}

// private static void RegisterRequiredClasses(Fuse.Scripting.Context ctx, Uno.UX.NameTable nt) [static] :975
void JavaScript::RegisterRequiredClasses(::g::Fuse::Scripting::Context* ctx, ::g::Uno::UX::NameTable* nt)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "RegisterRequiredClasses(Fuse.Scripting.Context,Uno.UX.NameTable)");
    JavaScript_typeof()->Init();
    uArray* array1;
    int index2;
    int length3;
    uArray* array4;
    int index5;
    int length6;

    while (nt != NULL)
    {
        for (array1 = uPtr(nt)->Entries, index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
        {
            ::g::Uno::UX::NameTableEntry* e = uPtr(array1)->Strong< ::g::Uno::UX::NameTableEntry*>(index2);

            for (array4 = uPtr(e)->Metadata, index5 = 0, length6 = uPtr(array4)->Length(); index5 < length6; ++index5)
            {
                uObject* s = uPtr(array4)->Strong<uObject*>(index5);
                ::g::Fuse::Scripting::ScriptClass* sc = uAs< ::g::Fuse::Scripting::ScriptClass*>(s, ::TYPES[57/*Fuse.Scripting.ScriptClass*/]);

                if (sc != NULL)
                    JavaScript::RegisterClass(ctx, uPtr(e)->TypeName, sc);
            }
        }

        nt = uPtr(nt)->ParentTable;
    }
}

// internal static Fuse.Reactive.ThreadWorker get_Worker() [static] :832
::g::Fuse::Reactive::ThreadWorker* JavaScript::Worker()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_Worker()");
    JavaScript_typeof()->Init();
    return JavaScript::_worker();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/$.uno#8
// -----------------------------------------------------------

// public sealed class Match :1153
// {
Match_type* Match_typeof()
{
    static uSStrong<Match_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Match);
    options.TypeSize = sizeof(Match_type);
    type = (Match_type*)uClassType::New("Fuse.Reactive.Match", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_ctor_ = (void*)Match__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Match__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Match__OnUnrooted_fn;
    type->interface1.fp_OnSet = (void(*)(uObject*, uObject*))Match__FuseReactiveIObserverOnSet_fn;
    type->interface1.fp_OnAdd = (void(*)(uObject*, uObject*))Match__FuseReactiveIObserverOnAdd_fn;
    type->interface1.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))Match__FuseReactiveIObserverOnNewAt_fn;
    type->interface1.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))Match__FuseReactiveIObserverOnInsertAt_fn;
    type->interface1.fp_OnFailed = (void(*)(uObject*, uString*))Match__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::Array*))Match__FuseReactiveIObserverOnNewAll_fn;
    type->interface1.fp_OnRemove = (void(*)(uObject*, uObject*, int*))Match__FuseReactiveIObserverOnRemove_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    ::STRINGS[9] = uString::Const("Not handled: OnAdd");
    ::STRINGS[44] = uString::Const("Not handled: InsertAt");
    ::STRINGS[45] = uString::Const("<Match> can not be used on lists (received OnNewAll)");
    ::STRINGS[13] = uString::Const("Not handled: OnNewAt");
    ::STRINGS[46] = uString::Const("Case already has a Match");
    ::STRINGS[47] = uString::Const("Match can only be used on IObjectContainer (e.g. Panel)");
    ::STRINGS[48] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/$.uno#8");
    ::TYPES[41] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::IDataContext_typeof());
    ::TYPES[67] = ::g::Fuse::Reactive::Case_typeof();
    ::TYPES[42] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::UX::Factory_typeof());
    ::TYPES[39] = ::g::Fuse::IDataContext_typeof();
    ::TYPES[9] = uObject_typeof();
    ::TYPES[21] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[44] = ::g::Fuse::IObjectContainer_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[40] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::IDataContext_typeof());
    ::TYPES[68] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof());
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[69] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof());
    ::TYPES[70] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof());
    ::TYPES[71] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof());
    ::TYPES[16] = ::g::Uno::Int_typeof();
    ::TYPES[13] = ::g::Uno::Double_typeof();
    ::TYPES[14] = ::g::Uno::String_typeof();
    ::TYPES[24] = ::g::Fuse::Reactive::Observable_typeof();
    ::TYPES[25] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(Match_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(Match_type, interface1));
    type->SetFields(3,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof()), offsetof(::g::Fuse::Reactive::Match, _cases), 0,
        ::g::Fuse::IObjectContainer_typeof(), offsetof(::g::Fuse::Reactive::Match, _container), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::IDataContext_typeof()), offsetof(::g::Fuse::Reactive::Match, _elements), 0,
        ::g::Fuse::Reactive::Case_typeof(), offsetof(::g::Fuse::Reactive::Match, _oldCase), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Match, _realValue), 0,
        ::g::Fuse::Reactive::ObservableSubscription_typeof(), offsetof(::g::Fuse::Reactive::Match, _subscription), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Match, _value), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("get_Bool", NULL, (void*)Match__get_Bool_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Bool", NULL, (void*)Match__set_Bool_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Cases", NULL, (void*)Match__get_Cases_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof()), 0),
        new uFunction("get_Integer", NULL, (void*)Match__get_Integer_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Integer", NULL, (void*)Match__set_Integer_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)Match__New1_fn, 0, true, Match_typeof(), 0),
        new uFunction("get_Number", NULL, (void*)Match__get_Number_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Number", NULL, (void*)Match__set_Number_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_String", NULL, (void*)Match__get_String_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_String", NULL, (void*)Match__set_String_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Value", NULL, (void*)Match__get_Value_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)Match__set_Value_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()));
    return type;
}

// public generated Match() :1153
void Match__ctor_1_fn(Match* __this)
{
    __this->ctor_1();
}

// private void AddElements(Fuse.Reactive.Case c) :1342
void Match__AddElements_fn(Match* __this, ::g::Fuse::Reactive::Case* c)
{
    __this->AddElements(c);
}

// public bool get_Bool() :1277
void Match__get_Bool_fn(Match* __this, bool* __retval)
{
    *__retval = __this->Bool();
}

// public void set_Bool(bool value) :1278
void Match__set_Bool_fn(Match* __this, bool* value)
{
    __this->Bool(*value);
}

// public Uno.Collections.IList<Fuse.Reactive.Case> get_Cases() :1160
void Match__get_Cases_fn(Match* __this, uObject** __retval)
{
    *__retval = __this->Cases();
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :1185
void Match__FuseReactiveIObserverOnAdd_fn(Match* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnAdd(object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[9/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :1200
void Match__FuseReactiveIObserverOnFailed_fn(Match* __this, uString* message)
{
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :1195
void Match__FuseReactiveIObserverOnInsertAt_fn(Match* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[44/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.Scripting.Array values) :1205
void Match__FuseReactiveIObserverOnNewAll_fn(Match* __this, ::g::Fuse::Scripting::Array* values)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnNewAll(Fuse.Scripting.Array)");

    if (uPtr(values)->Length() == 0)
    {
        __this->_realValue = NULL;
        __this->Invalidate();
        return;
    }

    U_THROW(::g::Uno::Exception::New2(::STRINGS[45/*"<Match> can...*/]));
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :1190
void Match__FuseReactiveIObserverOnNewAt_fn(Match* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnNewAt(int,object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[13/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnRemove(object value, int index) :1217
void Match__FuseReactiveIObserverOnRemove_fn(Match* __this, uObject* value, int* index)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnRemove(object,int)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[45/*"<Match> can...*/]));
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :1179
void Match__FuseReactiveIObserverOnSet_fn(Match* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnSet(object)");
    __this->_realValue = newValue;
    __this->Invalidate();
}

// public int get_Integer() :1271
void Match__get_Integer_fn(Match* __this, int* __retval)
{
    *__retval = __this->Integer();
}

// public void set_Integer(int value) :1272
void Match__set_Integer_fn(Match* __this, int* value)
{
    __this->Integer(*value);
}

// internal void Invalidate() :1308
void Match__Invalidate_fn(Match* __this)
{
    __this->Invalidate();
}

// public generated Match New() :1153
void Match__New1_fn(Match** __retval)
{
    *__retval = Match::New1();
}

// public double get_Number() :1265
void Match__get_Number_fn(Match* __this, double* __retval)
{
    *__retval = __this->Number();
}

// public void set_Number(double value) :1266
void Match__set_Number_fn(Match* __this, double* value)
{
    __this->Number(*value);
}

// private void OnCaseAdded(Fuse.Reactive.Case c) :1166
void Match__OnCaseAdded_fn(Match* __this, ::g::Fuse::Reactive::Case* c)
{
    __this->OnCaseAdded(c);
}

// private void OnCaseRemoved(Fuse.Reactive.Case c) :1173
void Match__OnCaseRemoved_fn(Match* __this, ::g::Fuse::Reactive::Case* c)
{
    __this->OnCaseRemoved(c);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1283
void Match__OnRooted_fn(Match* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Reactive.Match", "OnRooted(Fuse.Node)");
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    __this->_container = uAs<uObject*>(__this->ParentNode(), ::TYPES[44/*Fuse.IObjectContainer*/]);

    if (__this->_container == NULL)
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[47/*"Match can o...*/], 1, ::STRINGS[48/*"/usr/local/...*/], 1290);

    __this->Invalidate();
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :1296
void Match__OnUnrooted_fn(Match* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Reactive.Match", "OnUnrooted(Fuse.Node)");
    __this->RemoveElements();
    __this->_container = NULL;
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// private void RemoveElements() :1332
void Match__RemoveElements_fn(Match* __this)
{
    __this->RemoveElements();
}

// private Fuse.Reactive.Case SelectCase() :1321
void Match__SelectCase_fn(Match* __this, ::g::Fuse::Reactive::Case** __retval)
{
    *__retval = __this->SelectCase();
}

// public string get_String() :1259
void Match__get_String_fn(Match* __this, uString** __retval)
{
    *__retval = __this->String();
}

// public void set_String(string value) :1260
void Match__set_String_fn(Match* __this, uString* value)
{
    __this->String(value);
}

// public object get_Value() :1228
void Match__get_Value_fn(Match* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(object value) :1229
void Match__set_Value_fn(Match* __this, uObject* value)
{
    __this->Value(value);
}

// public generated Match() [instance] :1153
void Match::ctor_1()
{
    uStackFrame __("Fuse.Reactive.Match", ".ctor()");
    _elements = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[41/*Uno.Collections.List<Fuse.IDataContext>*/]));
    ctor_();
}

// private void AddElements(Fuse.Reactive.Case c) [instance] :1342
void Match::AddElements(::g::Fuse::Reactive::Case* c)
{
    uStackFrame __("Fuse.Reactive.Match", "AddElements(Fuse.Reactive.Case)");
    ::g::Uno::UX::Factory* ret6;

    if (c != NULL)

        for (uObject* enum3 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(c)->Factories()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[43/*Uno.UX.Factory*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum3), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Uno::UX::Factory* f = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum3), ::TYPES[42/*Uno.Collections.IEnumerator<Uno.UX.Factory>*/]), &ret6), ret6);
            uObject* elm = uAs<uObject*>(uPtr(f)->New1(), ::TYPES[39/*Fuse.IDataContext*/]);

            if (elm != NULL)
            {
                ::g::Fuse::IObjectContainer::Add(uInterface(uPtr(_container), ::TYPES[44/*Fuse.IObjectContainer*/]), elm);
                ::g::Uno::Collections::List__Add_fn(uPtr(_elements), elm);
            }
        }

    _oldCase = c;
}

// public bool get_Bool() [instance] :1277
bool Match::Bool()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Bool()");
    return uIs(Value(), ::TYPES[8/*bool*/]) ? uUnbox<bool>(::TYPES[8/*bool*/], Value()) : false;
}

// public void set_Bool(bool value) [instance] :1278
void Match::Bool(bool value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_Bool(bool)");
    Value(uBox(::TYPES[8/*bool*/], value));
}

// public Uno.Collections.IList<Fuse.Reactive.Case> get_Cases() [instance] :1160
uObject* Match::Cases()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Cases()");
    uObject* ind4 = _cases;
    return (ind4 != NULL) ? ind4 : (uObject*)(_cases = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[70/*Uno.Collections.ObservableList<Fuse.Reactive.Case>*/], uDelegate::New(::TYPES[71/*Uno.Action<Fuse.Reactive.Case>*/], (void*)Match__OnCaseAdded_fn, this), uDelegate::New(::TYPES[71/*Uno.Action<Fuse.Reactive.Case>*/], (void*)Match__OnCaseRemoved_fn, this))));
}

// public int get_Integer() [instance] :1271
int Match::Integer()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Integer()");
    return uIs(Value(), ::TYPES[16/*int*/]) ? uUnbox<int>(::TYPES[16/*int*/], Value()) : 0;
}

// public void set_Integer(int value) [instance] :1272
void Match::Integer(int value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_Integer(int)");
    Value(uBox<int>(::TYPES[16/*int*/], value));
}

// internal void Invalidate() [instance] :1308
void Match::Invalidate()
{
    uStackFrame __("Fuse.Reactive.Match", "Invalidate()");

    if (_container == NULL)
        return;

    ::g::Fuse::Reactive::Case* newCase = SelectCase();

    if (newCase != _oldCase)
    {
        RemoveElements();
        AddElements(newCase);
    }
}

// public double get_Number() [instance] :1265
double Match::Number()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Number()");
    return uIs(Value(), ::TYPES[13/*double*/]) ? uUnbox<double>(::TYPES[13/*double*/], Value()) : 0.0;
}

// public void set_Number(double value) [instance] :1266
void Match::Number(double value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_Number(double)");
    Value(uBox(::TYPES[13/*double*/], value));
}

// private void OnCaseAdded(Fuse.Reactive.Case c) [instance] :1166
void Match::OnCaseAdded(::g::Fuse::Reactive::Case* c)
{
    uStackFrame __("Fuse.Reactive.Match", "OnCaseAdded(Fuse.Reactive.Case)");

    if (uPtr(c)->_match != NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[46/*"Case alread...*/]));

    uPtr(c)->_match = this;
    Invalidate();
}

// private void OnCaseRemoved(Fuse.Reactive.Case c) [instance] :1173
void Match::OnCaseRemoved(::g::Fuse::Reactive::Case* c)
{
    uStackFrame __("Fuse.Reactive.Match", "OnCaseRemoved(Fuse.Reactive.Case)");
    uPtr(c)->_match = NULL;
    Invalidate();
}

// private void RemoveElements() [instance] :1332
void Match::RemoveElements()
{
    uStackFrame __("Fuse.Reactive.Match", "RemoveElements()");
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret7;
    _oldCase = NULL;

    for (::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret7), ret7); enum2.MoveNext(::TYPES[40/*Uno.Collections.List<Fuse.IDataContext>.Enumerator*/]); )
    {
        uObject* e = enum2.Current(::TYPES[40/*Uno.Collections.List<Fuse.IDataContext>.Enumerator*/]);
        ::g::Fuse::IObjectContainer::BeginRemove(uInterface(uPtr(_container), ::TYPES[44/*Fuse.IObjectContainer*/]), e);
    }

    uPtr(_elements)->Clear();
}

// private Fuse.Reactive.Case SelectCase() [instance] :1321
::g::Fuse::Reactive::Case* Match::SelectCase()
{
    uStackFrame __("Fuse.Reactive.Match", "SelectCase()");
    ::g::Fuse::Reactive::Case* ret8;
    ::g::Fuse::Reactive::Case* def = NULL;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_cases), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[67/*Fuse.Reactive.Case*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Reactive::Case* c = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[68/*Uno.Collections.IEnumerator<Fuse.Reactive.Case>*/]), &ret8), ret8);

        if (::g::Uno::Object::Equals(uPtr(uPtr(c)->Value()), _realValue))
            return c;

        if (uPtr(c)->IsDefault())
            def = c;
    }

    return def;
}

// public string get_String() [instance] :1259
uString* Match::String()
{
    uStackFrame __("Fuse.Reactive.Match", "get_String()");
    return uAs<uString*>(Value(), ::TYPES[14/*string*/]);
}

// public void set_String(string value) [instance] :1260
void Match::String(uString* value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_String(string)");
    Value(value);
}

// public object get_Value() [instance] :1228
uObject* Match::Value()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Value()");
    return _value;
}

// public void set_Value(object value) [instance] :1229
void Match::Value(uObject* value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_Value(object)");

    if (_value != value)
    {
        _value = value;

        if (_subscription != NULL)
        {
            uPtr(_subscription)->Dispose();
            _subscription = NULL;
        }

        if (uIs(_value, ::TYPES[24/*Fuse.Reactive.Observable*/]))
        {
            ::g::Fuse::Reactive::Observable* obs = uCast< ::g::Fuse::Reactive::Observable*>(_value, ::TYPES[24/*Fuse.Reactive.Observable*/]);
            _subscription = uPtr(obs)->Subscribe((uObject*)this);
        }
        else
            _realValue = _value;

        Invalidate();
    }
}

// public generated Match New() [static] :1153
Match* Match::New1()
{
    Match* obj5 = (Match*)uNew(Match_typeof());
    obj5->ctor_1();
    return obj5;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/$.uno#10
// ------------------------------------------------------------

// internal sealed class Observable :1497
// {
uType* Observable_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Observable);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.Observable", options);
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Observable__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Observable__GetHashCode_fn;
    ::STRINGS[49] = uString::Const("_values");
    ::TYPES[21] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[19] = ::g::Fuse::Scripting::Object_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::Observable, Object), 0);
    return type;
}

// public Observable(Fuse.Scripting.Object obj) :1501
void Observable__ctor__fn(Observable* __this, ::g::Fuse::Scripting::Object* obj)
{
    __this->ctor_(obj);
}

// public override sealed bool Equals(object obj) :1513
void Observable__Equals_fn(Observable* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Fuse.Reactive.Observable", "Equals(object)");
    Observable* obs = uAs<Observable*>(obj, Observable_typeof());

    if (obs == NULL)
        return *__retval = false, void();

    return *__retval = uPtr(__this->Object)->Equals2(uPtr(obs)->Object), void();
}

// public override sealed int GetHashCode() :1520
void Observable__GetHashCode_fn(Observable* __this, int* __retval)
{
    uStackFrame __("Fuse.Reactive.Observable", "GetHashCode()");
    return *__retval = uPtr(__this->Object)->GetHashCode(), void();
}

// public Observable New(Fuse.Scripting.Object obj) :1501
void Observable__New1_fn(::g::Fuse::Scripting::Object* obj, Observable** __retval)
{
    *__retval = Observable::New1(obj);
}

// public Fuse.Reactive.ObservableSubscription Subscribe(Fuse.Reactive.IObserver observer) :1508
void Observable__Subscribe_fn(Observable* __this, uObject* observer, ::g::Fuse::Reactive::ObservableSubscription** __retval)
{
    *__retval = __this->Subscribe(observer);
}

// public Fuse.Scripting.Array get_Values() :1506
void Observable__get_Values_fn(Observable* __this, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->Values();
}

// public Observable(Fuse.Scripting.Object obj) [instance] :1501
void Observable::ctor_(::g::Fuse::Scripting::Object* obj)
{
    uStackFrame __("Fuse.Reactive.Observable", ".ctor(Fuse.Scripting.Object)");
    Object = obj;
}

// public Fuse.Reactive.ObservableSubscription Subscribe(Fuse.Reactive.IObserver observer) [instance] :1508
::g::Fuse::Reactive::ObservableSubscription* Observable::Subscribe(uObject* observer)
{
    uStackFrame __("Fuse.Reactive.Observable", "Subscribe(Fuse.Reactive.IObserver)");
    return ::g::Fuse::Reactive::ObservableSubscription::New1(Object, observer);
}

// public Fuse.Scripting.Array get_Values() [instance] :1506
::g::Fuse::Scripting::Array* Observable::Values()
{
    uStackFrame __("Fuse.Reactive.Observable", "get_Values()");
    return uAs< ::g::Fuse::Scripting::Array*>(uPtr(Object)->Item(::STRINGS[49/*"_values"*/]), ::TYPES[21/*Fuse.Scripting.Array*/]);
}

// public Observable New(Fuse.Scripting.Object obj) [static] :1501
Observable* Observable::New1(::g::Fuse::Scripting::Object* obj)
{
    Observable* obj1 = (Observable*)uNew(Observable_typeof());
    obj1->ctor_(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/$.uno#10
// ------------------------------------------------------------

// internal sealed class ObservableSubscription :1526
// {
ObservableSubscription_type* ObservableSubscription_typeof()
{
    static uSStrong<ObservableSubscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ObservableSubscription);
    options.TypeSize = sizeof(ObservableSubscription_type);
    type = (ObservableSubscription_type*)uClassType::New("Fuse.Reactive.ObservableSubscription", options);
    type->interface0.fp_Dispose = (void(*)(uObject*))ObservableSubscription__Dispose_fn;
    ::STRINGS[50] = uString::Const("dispose");
    ::STRINGS[51] = uString::Const("set");
    ::STRINGS[52] = uString::Const("newAt");
    ::STRINGS[53] = uString::Const("newAll");
    ::STRINGS[54] = uString::Const("add");
    ::STRINGS[55] = uString::Const("remove");
    ::STRINGS[56] = uString::Const("insertAt");
    ::STRINGS[57] = uString::Const("failed");
    ::STRINGS[58] = uString::Const("Unhandled observable operation: ");
    ::STRINGS[59] = uString::Const("setExclusive");
    ::TYPES[4] = ::g::Fuse::Reactive::Dispatcher_typeof();
    ::TYPES[5] = ::g::Uno::Action_typeof();
    ::TYPES[72] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(2, ::g::Uno::String_typeof(), uObject_typeof()->Array());
    ::TYPES[51] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[37] = ::g::Fuse::Reactive::JavaScript_typeof();
    ::TYPES[73] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof()->Array());
    ::TYPES[15] = uObject_typeof()->Array();
    ::TYPES[14] = ::g::Uno::String_typeof();
    ::TYPES[59] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(1, uObject_typeof());
    ::TYPES[61] = ::g::Uno::Action1_typeof()->MakeType(uObject_typeof());
    ::TYPES[74] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(2, ::g::Uno::Int_typeof(), uObject_typeof());
    ::TYPES[75] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Int_typeof(), uObject_typeof());
    ::TYPES[76] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(1, ::g::Fuse::Scripting::Array_typeof());
    ::TYPES[77] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::Array_typeof());
    ::TYPES[21] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[78] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(2, uObject_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[79] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[80] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(1, ::g::Uno::String_typeof());
    ::TYPES[81] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[19] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[82] = ::g::Fuse::Reactive::FuseJS::Builtins_typeof();
    ::TYPES[36] = ::g::Fuse::Reactive::ThreadWorker_typeof();
    ::TYPES[9] = uObject_typeof();
    ::TYPES[22] = ::g::Fuse::Scripting::Callback_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ObservableSubscription_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::ObservableSubscription, _disposed), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::ObservableSubscription, _observable), 0,
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::ObservableSubscription, _observer), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::ObservableSubscription, _subscriberProxy), 0);
    return type;
}

// public ObservableSubscription(Fuse.Scripting.Object obj, Fuse.Reactive.IObserver observer) :1534
void ObservableSubscription__ctor__fn(ObservableSubscription* __this, ::g::Fuse::Scripting::Object* obj, uObject* observer)
{
    __this->ctor_(obj, observer);
}

// private void CallProxyMethod(string method, object[] args) :1557
void ObservableSubscription__CallProxyMethod_fn(ObservableSubscription* __this, uString* method, uArray* args)
{
    __this->CallProxyMethod(method, args);
}

// public void Dispose() :1588
void ObservableSubscription__Dispose_fn(ObservableSubscription* __this)
{
    __this->Dispose();
}

// public ObservableSubscription New(Fuse.Scripting.Object obj, Fuse.Reactive.IObserver observer) :1534
void ObservableSubscription__New1_fn(::g::Fuse::Scripting::Object* obj, uObject* observer, ObservableSubscription** __retval)
{
    *__retval = ObservableSubscription::New1(obj, observer);
}

// private object ObserveChange(object[] args) :1568
void ObservableSubscription__ObserveChange_fn(ObservableSubscription* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->ObserveChange(args);
}

// public void SetExclusive(object newValue) :1563
void ObservableSubscription__SetExclusive_fn(ObservableSubscription* __this, uObject* newValue)
{
    __this->SetExclusive(newValue);
}

// private void Subscribe() :1541
void ObservableSubscription__Subscribe_fn(ObservableSubscription* __this)
{
    __this->Subscribe();
}

// private void TryCallProxyMethod(string method, object[] args) :1548
void ObservableSubscription__TryCallProxyMethod_fn(ObservableSubscription* __this, uString* method, uArray* args)
{
    __this->TryCallProxyMethod(method, args);
}

// public ObservableSubscription(Fuse.Scripting.Object obj, Fuse.Reactive.IObserver observer) [instance] :1534
void ObservableSubscription::ctor_(::g::Fuse::Scripting::Object* obj, uObject* observer)
{
    uStackFrame __("Fuse.Reactive.ObservableSubscription", ".ctor(Fuse.Scripting.Object,Fuse.Reactive.IObserver)");
    _observable = obj;
    _observer = observer;
    uPtr(::g::Fuse::Reactive::Dispatcher::UIThread())->Invoke(uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)ObservableSubscription__Subscribe_fn, this));
}

// private void CallProxyMethod(string method, object[] args) [instance] :1557
void ObservableSubscription::CallProxyMethod(uString* method, uArray* args)
{
    uStackFrame __("Fuse.Reactive.ObservableSubscription", "CallProxyMethod(string,object[])");

    if (_disposed)
        return;

    uPtr(_subscriberProxy)->CallMethod(method, args);
}

// public void Dispose() [instance] :1588
void ObservableSubscription::Dispose()
{
    uStackFrame __("Fuse.Reactive.ObservableSubscription", "Dispose()");
    _disposed = true;
    ::g::Uno::Threading::IDispatcherExtensions__Invoke2_fn(::TYPES[72/*Uno.Threading.IDispatcherExtensions.Invoke2<string, object[]>*/], (uObject*)::g::Fuse::Reactive::JavaScript::Worker(), uDelegate::New(::TYPES[73/*Uno.Action<string, object[]>*/], (void*)ObservableSubscription__TryCallProxyMethod_fn, this), ::STRINGS[50/*"dispose"*/], uArray::Init<uObject*>(::TYPES[15/*object[]*/], 0));
    _observable = NULL;
    _observer = NULL;
    _subscriberProxy = NULL;
}

// private object ObserveChange(object[] args) [instance] :1568
uObject* ObservableSubscription::ObserveChange(uArray* args)
{
    uStackFrame __("Fuse.Reactive.ObservableSubscription", "ObserveChange(object[])");

    if (_disposed)
        return NULL;

    uString* op = uAs<uString*>(uPtr(args)->Strong<uObject*>(1), ::TYPES[14/*string*/]);
    uObject* arg = ::g::Fuse::Reactive::ThreadWorker::Wrap(args->Strong<uObject*>(2));

    if (::g::Uno::String::op_Equality(op, ::STRINGS[51/*"set"*/]))
        ::g::Uno::Threading::IDispatcherExtensions__Invoke1_fn(::TYPES[59/*Uno.Threading.IDispatcherExtensions.Invoke1<object>*/], (uObject*)::g::Fuse::Reactive::Dispatcher::UIThread(), uDelegate::New(::TYPES[61/*Uno.Action<object>*/], uInterface(uPtr(_observer), ::TYPES[25/*Fuse.Reactive.IObserver*/]), offsetof(::g::Fuse::Reactive::IObserver, fp_OnSet)), arg);
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[52/*"newAt"*/]))
        ::g::Uno::Threading::IDispatcherExtensions__Invoke2_fn(::TYPES[74/*Uno.Threading.IDispatcherExtensions.Invoke2<int, object>*/], (uObject*)::g::Fuse::Reactive::Dispatcher::UIThread(), uDelegate::New(::TYPES[75/*Uno.Action<int, object>*/], uInterface(uPtr(_observer), ::TYPES[25/*Fuse.Reactive.IObserver*/]), offsetof(::g::Fuse::Reactive::IObserver, fp_OnNewAt)), uCRef<int>(::g::Fuse::Scripting::Marshal::ToInt(arg)), ::g::Fuse::Reactive::ThreadWorker::Wrap(args->Strong<uObject*>(3)));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[53/*"newAll"*/]))
        ::g::Uno::Threading::IDispatcherExtensions__Invoke1_fn(::TYPES[76/*Uno.Threading.IDispatcherExtensions.Invoke1<Fuse.Scripting.Array>*/], (uObject*)::g::Fuse::Reactive::Dispatcher::UIThread(), uDelegate::New(::TYPES[77/*Uno.Action<Fuse.Scripting.Array>*/], uInterface(uPtr(_observer), ::TYPES[25/*Fuse.Reactive.IObserver*/]), offsetof(::g::Fuse::Reactive::IObserver, fp_OnNewAll)), uCast< ::g::Fuse::Scripting::Array*>(arg, ::TYPES[21/*Fuse.Scripting.Array*/]));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[54/*"add"*/]))
        ::g::Uno::Threading::IDispatcherExtensions__Invoke1_fn(::TYPES[59/*Uno.Threading.IDispatcherExtensions.Invoke1<object>*/], (uObject*)::g::Fuse::Reactive::Dispatcher::UIThread(), uDelegate::New(::TYPES[61/*Uno.Action<object>*/], uInterface(uPtr(_observer), ::TYPES[25/*Fuse.Reactive.IObserver*/]), offsetof(::g::Fuse::Reactive::IObserver, fp_OnAdd)), arg);
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[55/*"remove"*/]))
        ::g::Uno::Threading::IDispatcherExtensions__Invoke2_fn(::TYPES[78/*Uno.Threading.IDispatcherExtensions.Invoke2<object, int>*/], (uObject*)::g::Fuse::Reactive::Dispatcher::UIThread(), uDelegate::New(::TYPES[79/*Uno.Action<object, int>*/], uInterface(uPtr(_observer), ::TYPES[25/*Fuse.Reactive.IObserver*/]), offsetof(::g::Fuse::Reactive::IObserver, fp_OnRemove)), arg, uCRef<int>(::g::Fuse::Scripting::Marshal::ToInt(args->Strong<uObject*>(3))));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[56/*"insertAt"*/]))
        ::g::Uno::Threading::IDispatcherExtensions__Invoke2_fn(::TYPES[74/*Uno.Threading.IDispatcherExtensions.Invoke2<int, object>*/], (uObject*)::g::Fuse::Reactive::Dispatcher::UIThread(), uDelegate::New(::TYPES[75/*Uno.Action<int, object>*/], uInterface(uPtr(_observer), ::TYPES[25/*Fuse.Reactive.IObserver*/]), offsetof(::g::Fuse::Reactive::IObserver, fp_OnInsertAt)), uCRef<int>(::g::Fuse::Scripting::Marshal::ToInt(arg)), ::g::Fuse::Reactive::ThreadWorker::Wrap(args->Strong<uObject*>(3)));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[57/*"failed"*/]))
        ::g::Uno::Threading::IDispatcherExtensions__Invoke1_fn(::TYPES[80/*Uno.Threading.IDispatcherExtensions.Invoke1<string>*/], (uObject*)::g::Fuse::Reactive::Dispatcher::UIThread(), uDelegate::New(::TYPES[81/*Uno.Action<string>*/], uInterface(uPtr(_observer), ::TYPES[25/*Fuse.Reactive.IObserver*/]), offsetof(::g::Fuse::Reactive::IObserver, fp_OnFailed)), uCast<uString*>(args->Strong<uObject*>(2), ::TYPES[14/*string*/]));
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::STRINGS[58/*"Unhandled o...*/], op)));

    return NULL;
}

// public void SetExclusive(object newValue) [instance] :1563
void ObservableSubscription::SetExclusive(uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.ObservableSubscription", "SetExclusive(object)");
    ::g::Uno::Threading::IDispatcherExtensions__Invoke2_fn(::TYPES[72/*Uno.Threading.IDispatcherExtensions.Invoke2<string, object[]>*/], (uObject*)::g::Fuse::Reactive::JavaScript::Worker(), uDelegate::New(::TYPES[73/*Uno.Action<string, object[]>*/], (void*)ObservableSubscription__CallProxyMethod_fn, this), ::STRINGS[59/*"setExclusive"*/], uArray::Init<uObject*>(::TYPES[15/*object[]*/], 1, (uObject*)::g::Fuse::Reactive::ThreadWorker::Unwrap(newValue)));
}

// private void Subscribe() [instance] :1541
void ObservableSubscription::Subscribe()
{
    uStackFrame __("Fuse.Reactive.ObservableSubscription", "Subscribe()");

    if (_disposed)
        return;

    _subscriberProxy = uAs< ::g::Fuse::Scripting::Object*>(uPtr(uPtr(uPtr(::g::Fuse::Reactive::JavaScript::Worker())->FuseJS())->SubscriberProxy)->Call(uArray::Init<uObject*>(::TYPES[15/*object[]*/], 2, (::g::Fuse::Scripting::Object*)_observable, uDelegate::New(::TYPES[22/*Fuse.Scripting.Callback*/], (void*)ObservableSubscription__ObserveChange_fn, this))), ::TYPES[19/*Fuse.Scripting.Object*/]);
}

// private void TryCallProxyMethod(string method, object[] args) [instance] :1548
void ObservableSubscription::TryCallProxyMethod(uString* method, uArray* args)
{
    uStackFrame __("Fuse.Reactive.ObservableSubscription", "TryCallProxyMethod(string,object[])");

    if (_disposed)
        return;

    if (_subscriberProxy != NULL)
        uPtr(_subscriberProxy)->CallMethod(method, args);
}

// public ObservableSubscription New(Fuse.Scripting.Object obj, Fuse.Reactive.IObserver observer) [static] :1534
ObservableSubscription* ObservableSubscription::New1(::g::Fuse::Scripting::Object* obj, uObject* observer)
{
    ObservableSubscription* obj1 = (ObservableSubscription*)uNew(ObservableSubscription_typeof());
    obj1->ctor_(obj, observer);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/$.uno#12
// ------------------------------------------------------------

// internal sealed class ScriptEventArgs :1911
// {
uType* ScriptEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ScriptEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.ScriptEventArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::Reactive::ScriptEventArgs, Args), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::ScriptEventArgs, Name), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Reactive::ScriptEventArgs, Sender), 0);
    return type;
}

// public ScriptEventArgs(Fuse.Node sender, string name, Fuse.Scripting.IScriptEvent args) :1918
void ScriptEventArgs__ctor_1_fn(ScriptEventArgs* __this, ::g::Fuse::Node* sender, uString* name, uObject* args)
{
    __this->ctor_1(sender, name, args);
}

// public ScriptEventArgs New(Fuse.Node sender, string name, Fuse.Scripting.IScriptEvent args) :1918
void ScriptEventArgs__New2_fn(::g::Fuse::Node* sender, uString* name, uObject* args, ScriptEventArgs** __retval)
{
    *__retval = ScriptEventArgs::New2(sender, name, args);
}

// public ScriptEventArgs(Fuse.Node sender, string name, Fuse.Scripting.IScriptEvent args) [instance] :1918
void ScriptEventArgs::ctor_1(::g::Fuse::Node* sender, uString* name, uObject* args)
{
    uStackFrame __("Fuse.Reactive.ScriptEventArgs", ".ctor(Fuse.Node,string,Fuse.Scripting.IScriptEvent)");
    ctor_();
    Sender = sender;
    Name = name;
    Args = args;
}

// public ScriptEventArgs New(Fuse.Node sender, string name, Fuse.Scripting.IScriptEvent args) [static] :1918
ScriptEventArgs* ScriptEventArgs::New2(::g::Fuse::Node* sender, uString* name, uObject* args)
{
    ScriptEventArgs* obj1 = (ScriptEventArgs*)uNew(ScriptEventArgs_typeof());
    obj1->ctor_1(sender, name, args);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/$.uno#4
// -----------------------------------------------------------

// internal sealed class ScriptObjectSerializer :764
// {
ScriptObjectSerializer_type* ScriptObjectSerializer_typeof()
{
    static uSStrong<ScriptObjectSerializer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ScriptObjectSerializer);
    options.TypeSize = sizeof(ScriptObjectSerializer_type);
    type = (ScriptObjectSerializer_type*)uClassType::New("Fuse.Reactive.ScriptObjectSerializer", options);
    type->interface0.fp_AddString = (void(*)(uObject*, uString*, uString*))ScriptObjectSerializer__AddString_fn;
    type->interface0.fp_AddInt = (void(*)(uObject*, uString*, int*))ScriptObjectSerializer__AddInt_fn;
    type->interface0.fp_AddDouble = (void(*)(uObject*, uString*, double*))ScriptObjectSerializer__AddDouble_fn;
    type->interface0.fp_AddBool = (void(*)(uObject*, uString*, bool*))ScriptObjectSerializer__AddBool_fn;
    type->interface0.fp_AddObject = (void(*)(uObject*, uString*, uObject*))ScriptObjectSerializer__AddObject_fn;
    ::TYPES[19] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[9] = uObject_typeof();
    ::TYPES[13] = ::g::Uno::Double_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IEventSerializer_typeof(), offsetof(ScriptObjectSerializer_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::ScriptObjectSerializer, _obj), 0);
    return type;
}

// public ScriptObjectSerializer(Fuse.Scripting.Object obj) :768
void ScriptObjectSerializer__ctor__fn(ScriptObjectSerializer* __this, ::g::Fuse::Scripting::Object* obj)
{
    __this->ctor_(obj);
}

// public void AddBool(string key, bool value) :793
void ScriptObjectSerializer__AddBool_fn(ScriptObjectSerializer* __this, uString* key, bool* value)
{
    __this->AddBool(key, *value);
}

// public void AddDouble(string key, double value) :788
void ScriptObjectSerializer__AddDouble_fn(ScriptObjectSerializer* __this, uString* key, double* value)
{
    __this->AddDouble(key, *value);
}

// public void AddInt(string key, int value) :783
void ScriptObjectSerializer__AddInt_fn(ScriptObjectSerializer* __this, uString* key, int* value)
{
    __this->AddInt(key, *value);
}

// public void AddObject(string key, object value) :773
void ScriptObjectSerializer__AddObject_fn(ScriptObjectSerializer* __this, uString* key, uObject* value)
{
    __this->AddObject(key, value);
}

// public void AddString(string key, string value) :778
void ScriptObjectSerializer__AddString_fn(ScriptObjectSerializer* __this, uString* key, uString* value)
{
    __this->AddString(key, value);
}

// public ScriptObjectSerializer New(Fuse.Scripting.Object obj) :768
void ScriptObjectSerializer__New1_fn(::g::Fuse::Scripting::Object* obj, ScriptObjectSerializer** __retval)
{
    *__retval = ScriptObjectSerializer::New1(obj);
}

// public ScriptObjectSerializer(Fuse.Scripting.Object obj) [instance] :768
void ScriptObjectSerializer::ctor_(::g::Fuse::Scripting::Object* obj)
{
    uStackFrame __("Fuse.Reactive.ScriptObjectSerializer", ".ctor(Fuse.Scripting.Object)");
    _obj = obj;
}

// public void AddBool(string key, bool value) [instance] :793
void ScriptObjectSerializer::AddBool(uString* key, bool value)
{
    uStackFrame __("Fuse.Reactive.ScriptObjectSerializer", "AddBool(string,bool)");
    uPtr(_obj)->Item(key, uBox(::TYPES[8/*bool*/], value));
}

// public void AddDouble(string key, double value) [instance] :788
void ScriptObjectSerializer::AddDouble(uString* key, double value)
{
    uStackFrame __("Fuse.Reactive.ScriptObjectSerializer", "AddDouble(string,double)");
    uPtr(_obj)->Item(key, uBox(::TYPES[13/*double*/], value));
}

// public void AddInt(string key, int value) [instance] :783
void ScriptObjectSerializer::AddInt(uString* key, int value)
{
    uStackFrame __("Fuse.Reactive.ScriptObjectSerializer", "AddInt(string,int)");
    uPtr(_obj)->Item(key, uBox(::TYPES[13/*double*/], (double)value));
}

// public void AddObject(string key, object value) [instance] :773
void ScriptObjectSerializer::AddObject(uString* key, uObject* value)
{
    uStackFrame __("Fuse.Reactive.ScriptObjectSerializer", "AddObject(string,object)");
    uPtr(_obj)->Item(key, ::g::Fuse::Reactive::ThreadWorker::Unwrap(value));
}

// public void AddString(string key, string value) [instance] :778
void ScriptObjectSerializer::AddString(uString* key, uString* value)
{
    uStackFrame __("Fuse.Reactive.ScriptObjectSerializer", "AddString(string,string)");
    uPtr(_obj)->Item(key, value);
}

// public ScriptObjectSerializer New(Fuse.Scripting.Object obj) [static] :768
ScriptObjectSerializer* ScriptObjectSerializer::New1(::g::Fuse::Scripting::Object* obj)
{
    ScriptObjectSerializer* obj1 = (ScriptObjectSerializer*)uNew(ScriptObjectSerializer_typeof());
    obj1->ctor_(obj);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/$.uno#9
// -----------------------------------------------------------

// public sealed class Select :1435
// {
::g::Fuse::Triggers::Trigger_type* Select_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Select);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Reactive.Select", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)Select__New1_fn;
    type->fp_OnNodeAdded = (void(*)(::g::Fuse::Triggers::Trigger*, ::g::Fuse::Node*))Select__OnNodeAdded_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Select__OnRooted_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[83] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[84] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[2] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface0));
    type->SetFields(15,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Select, _data), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Data", NULL, (void*)Select__get_Data_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Data", NULL, (void*)Select__set_Data_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction(".ctor", NULL, (void*)Select__New1_fn, 0, true, Select_typeof(), 0));
    return type;
}

// public generated Select() :1435
void Select__ctor_2_fn(Select* __this)
{
    __this->ctor_2();
}

// public object get_Data() :1440
void Select__get_Data_fn(Select* __this, uObject** __retval)
{
    *__retval = __this->Data();
}

// public void set_Data(object value) :1441
void Select__set_Data_fn(Select* __this, uObject* value)
{
    __this->Data(value);
}

// private bool get_IsOn() :1469
void Select__get_IsOn_fn(Select* __this, bool* __retval)
{
    *__retval = __this->IsOn();
}

// public generated Select New() :1435
void Select__New1_fn(Select** __retval)
{
    *__retval = Select::New1();
}

// private void OnChanged() :1451
void Select__OnChanged_fn(Select* __this)
{
    __this->OnChanged();
}

// protected override sealed void OnNodeAdded(Fuse.Node n) :1479
void Select__OnNodeAdded_fn(Select* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Reactive.Select", "OnNodeAdded(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnNodeAdded_fn(__this, n);
    __this->OnChanged();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1471
void Select__OnRooted_fn(Select* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Reactive.Select", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, parentNode);
    __this->UpdateNodes();

    if (__this->IsOn())
        __this->BypassActivate();
}

// private void UpdateNodes() :1463
void Select__UpdateNodes_fn(Select* __this)
{
    __this->UpdateNodes();
}

// public generated Select() [instance] :1435
void Select::ctor_2()
{
    uStackFrame __("Fuse.Reactive.Select", ".ctor()");
    ctor_1();
}

// public object get_Data() [instance] :1440
uObject* Select::Data()
{
    uStackFrame __("Fuse.Reactive.Select", "get_Data()");
    return _data;
}

// public void set_Data(object value) [instance] :1441
void Select::Data(uObject* value)
{
    uStackFrame __("Fuse.Reactive.Select", "set_Data(object)");

    if (_data != value)
    {
        _data = value;
        OnChanged();
    }
}

// private bool get_IsOn() [instance] :1469
bool Select::IsOn()
{
    uStackFrame __("Fuse.Reactive.Select", "get_IsOn()");
    return _data != NULL;
}

// private void OnChanged() [instance] :1451
void Select::OnChanged()
{
    uStackFrame __("Fuse.Reactive.Select", "OnChanged()");
    UpdateNodes();

    if (IsRooted())
    {
        if (IsOn())
            Activate(NULL);
        else
            Deactivate();
    }
}

// private void UpdateNodes() [instance] :1463
void Select::UpdateNodes()
{
    uStackFrame __("Fuse.Reactive.Select", "UpdateNodes()");
    ::g::Fuse::Node* ret3;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Nodes()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[2/*Fuse.Node*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Node* n = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[84/*Uno.Collections.IEnumerator<Fuse.Node>*/]), &ret3), ret3);
        uPtr(n)->DataContext(_data);
    }
}

// public generated Select New() [static] :1435
Select* Select::New1()
{
    Select* obj2 = (Select*)uNew(Select_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/$.uno#13
// ------------------------------------------------------------

// internal sealed class ThreadWorker :1939
// {
ThreadWorker_type* ThreadWorker_typeof()
{
    static uSStrong<ThreadWorker_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ThreadWorker);
    options.TypeSize = sizeof(ThreadWorker_type);
    type = (ThreadWorker_type*)uClassType::New("Fuse.Reactive.ThreadWorker", options);
    type->fp_ctor_ = (void*)ThreadWorker__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ThreadWorker__Dispose_fn;
    type->interface1.fp_Invoke = (void(*)(uObject*, uDelegate*))ThreadWorker__Invoke_fn;
    ::STRINGS[60] = uString::Const("Could not create script context");
    ::TYPES[34] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Action_typeof());
    ::TYPES[85] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Exception_typeof());
    ::TYPES[86] = ::g::Uno::Platform::Window_typeof();
    ::TYPES[87] = ::g::Uno::Application_typeof();
    ::TYPES[88] = ::g::Uno::EventHandler_typeof();
    ::TYPES[5] = ::g::Uno::Action_typeof();
    ::TYPES[23] = ::g::Fuse::Scripting::Context_typeof();
    ::TYPES[51] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[15] = uObject_typeof()->Array();
    ::TYPES[9] = uObject_typeof();
    ::TYPES[13] = ::g::Uno::Double_typeof();
    ::TYPES[89] = ::g::Uno::Float2_typeof();
    ::TYPES[90] = ::g::Uno::Float3_typeof();
    ::TYPES[91] = ::g::Uno::Float4_typeof();
    ::TYPES[92] = ::g::Uno::Int2_typeof();
    ::TYPES[93] = ::g::Uno::Int3_typeof();
    ::TYPES[94] = ::g::Uno::Int4_typeof();
    ::TYPES[24] = ::g::Fuse::Reactive::Observable_typeof();
    ::TYPES[19] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[82] = ::g::Fuse::Reactive::FuseJS::Builtins_typeof();
    ::TYPES[37] = ::g::Fuse::Reactive::JavaScript_typeof();
    ::TYPES[17] = ::g::Uno::Float_typeof();
    ::TYPES[16] = ::g::Uno::Int_typeof();
    ::TYPES[95] = ::g::Uno::UInt_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ThreadWorker_type, interface0),
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(ThreadWorker_type, interface1));
    type->SetFields(0,
        ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Exception_typeof()), offsetof(::g::Fuse::Reactive::ThreadWorker, _exceptionQueue), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _isReady), 0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _isReadyMutex), 0,
        ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Action_typeof()), offsetof(::g::Fuse::Reactive::ThreadWorker, _queue), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _terminate), 0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, CanExecuteJavaScript), 0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, Pause), 0,
        ::g::Fuse::Scripting::Context_typeof(), (uintptr_t)&::g::Fuse::Reactive::ThreadWorker::_context_, uFieldFlagsStatic,
        ::g::Fuse::Reactive::FuseJS::Builtins_typeof(), (uintptr_t)&::g::Fuse::Reactive::ThreadWorker::_fuseJS_, uFieldFlagsStatic);
    return type;
}

// public ThreadWorker() :1983
void ThreadWorker__ctor__fn(ThreadWorker* __this)
{
    __this->ctor_();
}

// public void CheckAndThrow() :2099
void ThreadWorker__CheckAndThrow_fn(ThreadWorker* __this)
{
    __this->CheckAndThrow();
}

// public Fuse.Scripting.Context get_Context() :1970
void ThreadWorker__get_Context_fn(ThreadWorker* __this, ::g::Fuse::Scripting::Context** __retval)
{
    *__retval = __this->Context();
}

// internal static Fuse.Scripting.Context CreateContext(Uno.Threading.IDispatcher ownerThread) :1941
void ThreadWorker__CreateContext_fn(uObject* ownerThread, ::g::Fuse::Scripting::Context** __retval)
{
    *__retval = ThreadWorker::CreateContext(ownerThread);
}

// public void Dispose() :2005
void ThreadWorker__Dispose_fn(ThreadWorker* __this)
{
    __this->Dispose();
}

// public Fuse.Reactive.FuseJS.Builtins get_FuseJS() :1973
void ThreadWorker__get_FuseJS_fn(ThreadWorker* __this, ::g::Fuse::Reactive::FuseJS::Builtins** __retval)
{
    *__retval = __this->FuseJS();
}

// public void Invoke(Uno.Action action) :2108
void ThreadWorker__Invoke_fn(ThreadWorker* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// internal bool get_IsJavaScriptVMReady() :1954
void ThreadWorker__get_IsJavaScriptVMReady_fn(ThreadWorker* __this, bool* __retval)
{
    *__retval = __this->IsJavaScriptVMReady();
}

// private void set_IsJavaScriptVMReady(bool value) :1961
void ThreadWorker__set_IsJavaScriptVMReady_fn(ThreadWorker* __this, bool* value)
{
    __this->IsJavaScriptVMReady(*value);
}

// public ThreadWorker New() :1983
void ThreadWorker__New1_fn(ThreadWorker** __retval)
{
    *__retval = ThreadWorker::New1();
}

// private void OnClosing(object sender, Uno.EventArgs args) :2000
void ThreadWorker__OnClosing_fn(ThreadWorker* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnClosing(sender, args);
}

// private void Run() :2011
void ThreadWorker__Run_fn(ThreadWorker* __this)
{
    __this->Run();
}

// private static Fuse.Scripting.Array ToArray(float2 v) :2139
void ThreadWorker__ToArray_fn(::g::Uno::Float2* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = ThreadWorker::ToArray(*v);
}

// private static Fuse.Scripting.Array ToArray(float3 v) :2144
void ThreadWorker__ToArray1_fn(::g::Uno::Float3* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = ThreadWorker::ToArray1(*v);
}

// private static Fuse.Scripting.Array ToArray(float4 v) :2149
void ThreadWorker__ToArray2_fn(::g::Uno::Float4* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = ThreadWorker::ToArray2(*v);
}

// private static Fuse.Scripting.Array ToArray(int2 v) :2154
void ThreadWorker__ToArray3_fn(::g::Uno::Int2* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = ThreadWorker::ToArray3(*v);
}

// private static Fuse.Scripting.Array ToArray(int3 v) :2159
void ThreadWorker__ToArray4_fn(::g::Uno::Int3* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = ThreadWorker::ToArray4(*v);
}

// private static Fuse.Scripting.Array ToArray(int4 v) :2164
void ThreadWorker__ToArray5_fn(::g::Uno::Int4* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = ThreadWorker::ToArray5(*v);
}

// public static object Unwrap(object dc) :2127
void ThreadWorker__Unwrap_fn(uObject* dc, uObject** __retval)
{
    *__retval = ThreadWorker::Unwrap(dc);
}

// public static object Wrap(object obj) :2113
void ThreadWorker__Wrap_fn(uObject* obj, uObject** __retval)
{
    *__retval = ThreadWorker::Wrap(obj);
}

uSStrong< ::g::Fuse::Scripting::Context*> ThreadWorker::_context_;
uSStrong< ::g::Fuse::Reactive::FuseJS::Builtins*> ThreadWorker::_fuseJS_;

// public ThreadWorker() [instance] :1983
void ThreadWorker::ctor_()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", ".ctor()");
    _isReadyMutex = ::g::Uno::Threading::Mutex::Create();
    CanExecuteJavaScript = ::g::Uno::Threading::Mutex::Create();
    Pause = ::g::Uno::Threading::Mutex::Create();
    _queue = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[34/*Uno.Threading.ConcurrentQueue<Uno.Action>*/]));
    _exceptionQueue = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[85/*Uno.Threading.ConcurrentQueue<Uno.Exception>*/]));
    uPtr(uPtr(::g::Uno::Application::Current())->Window())->add_Closed(uDelegate::New(::TYPES[88/*Uno.EventHandler*/], (void*)ThreadWorker__OnClosing_fn, this));
    ::g::Uno::Threading::Thread* thread = ::g::Uno::Threading::Thread::Create(uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)ThreadWorker__Run_fn, this));
    uPtr(thread)->Start();
}

// public void CheckAndThrow() [instance] :2099
void ThreadWorker::CheckAndThrow()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "CheckAndThrow()");
    bool ret2;
    ::g::Uno::Exception* e = NULL;

    if ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_exceptionQueue), (void**)(&e), &ret2), ret2))
        U_THROW(e);
}

// public Fuse.Scripting.Context get_Context() [instance] :1970
::g::Fuse::Scripting::Context* ThreadWorker::Context()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "get_Context()");
    return ThreadWorker::_context();
}

// public void Dispose() [instance] :2005
void ThreadWorker::Dispose()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Dispose()");
    uPtr(uPtr(::g::Uno::Application::Current())->Window())->remove_Closed(uDelegate::New(::TYPES[88/*Uno.EventHandler*/], (void*)ThreadWorker__OnClosing_fn, this));
    _terminate = true;
}

// public Fuse.Reactive.FuseJS.Builtins get_FuseJS() [instance] :1973
::g::Fuse::Reactive::FuseJS::Builtins* ThreadWorker::FuseJS()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "get_FuseJS()");
    return ThreadWorker::_fuseJS();
}

// public void Invoke(Uno.Action action) [instance] :2108
void ThreadWorker::Invoke(uDelegate* action)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Invoke(Uno.Action)");
    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_queue), action);
}

// internal bool get_IsJavaScriptVMReady() [instance] :1954
bool ThreadWorker::IsJavaScriptVMReady()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "get_IsJavaScriptVMReady()");
    uPtr(_isReadyMutex)->Lock();
    bool ready = _isReady;
    uPtr(_isReadyMutex)->Unlock();
    return ready;
}

// private void set_IsJavaScriptVMReady(bool value) [instance] :1961
void ThreadWorker::IsJavaScriptVMReady(bool value)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "set_IsJavaScriptVMReady(bool)");
    uPtr(_isReadyMutex)->Lock();
    _isReady = value;
    uPtr(_isReadyMutex)->Unlock();
}

// private void OnClosing(object sender, Uno.EventArgs args) [instance] :2000
void ThreadWorker::OnClosing(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "OnClosing(object,Uno.EventArgs)");
    Dispose();
}

// private void Run() [instance] :2011
void ThreadWorker::Run()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Run()");
    bool ret3;
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(CanExecuteJavaScript);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[6/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        if (ThreadWorker::_context() == NULL)
        {
            ThreadWorker::_context() = ThreadWorker::CreateContext((uObject*)this);

            if (ThreadWorker::_context() == NULL)
                U_THROW(::g::Uno::Exception::New2(::STRINGS[60/*"Could not c...*/]));

            ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)ThreadWorker__CheckAndThrow_fn, this), 0);
            ThreadWorker::_fuseJS() = ::g::Fuse::Reactive::FuseJS::Builtins::New1(ThreadWorker::_context());
        }
    }

    IsJavaScriptVMReady(true);
    double t = ::g::Uno::Diagnostics::Clock::GetSeconds();

    while (!_terminate)
    {
        uAutoReleasePool ____pool;
        bool didAnything = false;
        uObject* lg1 = ::g::Uno::Threading::LockGuard::Acquire(CanExecuteJavaScript);

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg1), ::TYPES[6/*Uno.IDisposable*/]));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);
            uDelegate* action;

            if ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_queue), (void**)(&action), &ret3), ret3))
            {
                try
                {
                    didAnything = true;
                    uPtr(action)->InvokeVoid();
                }
                catch (const uThrowable& __t)
                {
                    ::g::Uno::Exception* e = __t.Exception;
                    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_exceptionQueue), e);
                }
            }

            try
            {
                uPtr(ThreadWorker::_fuseJS())->UpdateModules(ThreadWorker::_context());
            }
            catch (const uThrowable& __t)
            {
                ::g::Uno::Exception* e1 = __t.Exception;
                ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_exceptionQueue), e1);
            }
        }

        double t2 = ::g::Uno::Diagnostics::Clock::GetSeconds();

        if (!didAnything || ((t2 - t) > 5.0))
        {
            ::g::Uno::Threading::Thread::Sleep(1);
            t = t2;
        }

        uObject* lg2 = ::g::Uno::Threading::LockGuard::Acquire(Pause);

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg2), ::TYPES[6/*Uno.IDisposable*/]));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        }
    }
}

// internal static Fuse.Scripting.Context CreateContext(Uno.Threading.IDispatcher ownerThread) [static] :1941
::g::Fuse::Scripting::Context* ThreadWorker::CreateContext(uObject* ownerThread)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "CreateContext(Uno.Threading.IDispatcher)");
    return ::g::Fuse::Scripting::JavaScriptCore::Context::New1(ownerThread);
}

// public ThreadWorker New() [static] :1983
ThreadWorker* ThreadWorker::New1()
{
    ThreadWorker* obj1 = (ThreadWorker*)uNew(ThreadWorker_typeof());
    obj1->ctor_();
    return obj1;
}

// private static Fuse.Scripting.Array ToArray(float2 v) [static] :2139
::g::Fuse::Scripting::Array* ThreadWorker::ToArray(::g::Uno::Float2 v)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "ToArray(float2)");
    return uPtr(ThreadWorker::_context())->NewArray(uArray::Init<uObject*>(::TYPES[15/*object[]*/], 2, uBox(::TYPES[13/*double*/], (double)v.X), uBox(::TYPES[13/*double*/], (double)v.Y)));
}

// private static Fuse.Scripting.Array ToArray(float3 v) [static] :2144
::g::Fuse::Scripting::Array* ThreadWorker::ToArray1(::g::Uno::Float3 v)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "ToArray(float3)");
    return uPtr(ThreadWorker::_context())->NewArray(uArray::Init<uObject*>(::TYPES[15/*object[]*/], 3, uBox(::TYPES[13/*double*/], (double)v.X), uBox(::TYPES[13/*double*/], (double)v.Y), uBox(::TYPES[13/*double*/], (double)v.Z)));
}

// private static Fuse.Scripting.Array ToArray(float4 v) [static] :2149
::g::Fuse::Scripting::Array* ThreadWorker::ToArray2(::g::Uno::Float4 v)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "ToArray(float4)");
    return uPtr(ThreadWorker::_context())->NewArray(uArray::Init<uObject*>(::TYPES[15/*object[]*/], 4, uBox(::TYPES[13/*double*/], (double)v.X), uBox(::TYPES[13/*double*/], (double)v.Y), uBox(::TYPES[13/*double*/], (double)v.Z), uBox(::TYPES[13/*double*/], (double)v.W)));
}

// private static Fuse.Scripting.Array ToArray(int2 v) [static] :2154
::g::Fuse::Scripting::Array* ThreadWorker::ToArray3(::g::Uno::Int2 v)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "ToArray(int2)");
    return uPtr(ThreadWorker::_context())->NewArray(uArray::Init<uObject*>(::TYPES[15/*object[]*/], 2, uBox(::TYPES[13/*double*/], (double)v.X), uBox(::TYPES[13/*double*/], (double)v.Y)));
}

// private static Fuse.Scripting.Array ToArray(int3 v) [static] :2159
::g::Fuse::Scripting::Array* ThreadWorker::ToArray4(::g::Uno::Int3 v)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "ToArray(int3)");
    return uPtr(ThreadWorker::_context())->NewArray(uArray::Init<uObject*>(::TYPES[15/*object[]*/], 3, uBox(::TYPES[13/*double*/], (double)v.X), uBox(::TYPES[13/*double*/], (double)v.Y), uBox(::TYPES[13/*double*/], (double)v.Z)));
}

// private static Fuse.Scripting.Array ToArray(int4 v) [static] :2164
::g::Fuse::Scripting::Array* ThreadWorker::ToArray5(::g::Uno::Int4 v)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "ToArray(int4)");
    return uPtr(ThreadWorker::_context())->NewArray(uArray::Init<uObject*>(::TYPES[15/*object[]*/], 4, uBox(::TYPES[13/*double*/], (double)v.X), uBox(::TYPES[13/*double*/], (double)v.Y), uBox(::TYPES[13/*double*/], (double)v.Z), uBox(::TYPES[13/*double*/], (double)v.W)));
}

// public static object Unwrap(object dc) [static] :2127
uObject* ThreadWorker::Unwrap(uObject* dc)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Unwrap(object)");

    if (uIs(dc, ::TYPES[24/*Fuse.Reactive.Observable*/]))
        return uPtr(uCast< ::g::Fuse::Reactive::Observable*>(dc, ::TYPES[24/*Fuse.Reactive.Observable*/]))->Object;
    else if (uIs(dc, ::TYPES[89/*float2*/]))
        return ThreadWorker::ToArray(uUnbox< ::g::Uno::Float2>(::TYPES[89/*float2*/], dc));
    else if (uIs(dc, ::TYPES[90/*float3*/]))
        return ThreadWorker::ToArray1(uUnbox< ::g::Uno::Float3>(::TYPES[90/*float3*/], dc));
    else if (uIs(dc, ::TYPES[91/*float4*/]))
        return ThreadWorker::ToArray2(uUnbox< ::g::Uno::Float4>(::TYPES[91/*float4*/], dc));
    else if (uIs(dc, ::TYPES[92/*int2*/]))
        return ThreadWorker::ToArray3(uUnbox< ::g::Uno::Int2>(::TYPES[92/*int2*/], dc));
    else if (uIs(dc, ::TYPES[93/*int3*/]))
        return ThreadWorker::ToArray4(uUnbox< ::g::Uno::Int3>(::TYPES[93/*int3*/], dc));
    else if (uIs(dc, ::TYPES[94/*int4*/]))
        return ThreadWorker::ToArray5(uUnbox< ::g::Uno::Int4>(::TYPES[94/*int4*/], dc));
    else
        return dc;
}

// public static object Wrap(object obj) [static] :2113
uObject* ThreadWorker::Wrap(uObject* obj)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Wrap(object)");

    if (uIs(obj, ::TYPES[19/*Fuse.Scripting.Object*/]))
    {
        ::g::Fuse::Scripting::Object* sobj = uCast< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[19/*Fuse.Scripting.Object*/]);

        if (uPtr(sobj)->InstanceOf(uPtr(uPtr(::g::Fuse::Reactive::JavaScript::Worker())->FuseJS())->Observable))
            return ::g::Fuse::Reactive::Observable::New1(sobj);
    }

    if (uIs(obj, ::TYPES[17/*float*/]))
        return uBox(::TYPES[13/*double*/], (double)uUnbox<float>(::TYPES[17/*float*/], obj));

    if (uIs(obj, ::TYPES[16/*int*/]))
        return uBox(::TYPES[13/*double*/], (double)uUnbox<int>(::TYPES[16/*int*/], obj));

    if (uIs(obj, ::TYPES[95/*uint*/]))
        return uBox(::TYPES[13/*double*/], (double)uUnbox<uint32_t>(::TYPES[95/*uint*/], obj));

    return obj;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/$.uno#14
// ------------------------------------------------------------

// public class WhileCount :2181
// {
WhileCount_type* WhileCount_typeof()
{
    static uSStrong<WhileCount_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 25;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WhileCount);
    options.TypeSize = sizeof(WhileCount_type);
    type = (WhileCount_type*)uClassType::New("Fuse.Reactive.WhileCount", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)WhileCount__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileCount__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileCount__OnUnrooted_fn;
    type->interface1.fp_OnSet = (void(*)(uObject*, uObject*))WhileCount__FuseReactiveIObserverOnSet_fn;
    type->interface1.fp_OnFailed = (void(*)(uObject*, uString*))WhileCount__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnAdd = (void(*)(uObject*, uObject*))WhileCount__FuseReactiveIObserverOnAdd_fn;
    type->interface1.fp_OnRemove = (void(*)(uObject*, uObject*, int*))WhileCount__FuseReactiveIObserverOnRemove_fn;
    type->interface1.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))WhileCount__FuseReactiveIObserverOnNewAt_fn;
    type->interface1.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))WhileCount__FuseReactiveIObserverOnInsertAt_fn;
    type->interface1.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::Array*))WhileCount__FuseReactiveIObserverOnNewAll_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    ::TYPES[21] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[24] = ::g::Fuse::Reactive::Observable_typeof();
    ::TYPES[6] = ::g::Uno::IDisposable_typeof();
    ::TYPES[25] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[15] = uObject_typeof()->Array();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(WhileCount_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(WhileCount_type, interface1));
    type->SetFields(15,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _equalToMode), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _equalToValue), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _greaterThanMode), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _greaterThanValue), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _isRooting), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _items), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _lessThanMode), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _lessThanValue), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _oldCount), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _subscription), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("get_EqualTo", NULL, (void*)WhileCount__get_EqualTo_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_EqualTo", NULL, (void*)WhileCount__set_EqualTo_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_GreaterThan", NULL, (void*)WhileCount__get_GreaterThan_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_GreaterThan", NULL, (void*)WhileCount__set_GreaterThan_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_Items", NULL, (void*)WhileCount__get_Items_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Items", NULL, (void*)WhileCount__set_Items_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("get_LessThan", NULL, (void*)WhileCount__get_LessThan_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_LessThan", NULL, (void*)WhileCount__set_LessThan_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)WhileCount__New1_fn, 0, true, WhileCount_typeof(), 0));
    return type;
}

// public generated WhileCount() :2181
void WhileCount__ctor_2_fn(WhileCount* __this)
{
    __this->ctor_2();
}

// private void Assess(int count) :2255
void WhileCount__Assess_fn(WhileCount* __this, int* count)
{
    __this->Assess(*count);
}

// public int get_EqualTo() :2300
void WhileCount__get_EqualTo_fn(WhileCount* __this, int* __retval)
{
    *__retval = __this->EqualTo();
}

// public void set_EqualTo(int value) :2301
void WhileCount__set_EqualTo_fn(WhileCount* __this, int* value)
{
    __this->EqualTo(*value);
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :2318
void WhileCount__FuseReactiveIObserverOnAdd_fn(WhileCount* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Reactive.IObserver.OnAdd(object)");
    __this->Assess(__this->_oldCount + 1);
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :2314
void WhileCount__FuseReactiveIObserverOnFailed_fn(WhileCount* __this, uString* message)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Reactive.IObserver.OnFailed(string)");
    __this->Assess(0);
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :2331
void WhileCount__FuseReactiveIObserverOnInsertAt_fn(WhileCount* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    __this->Assess(__this->_oldCount + 1);
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.Scripting.Array values) :2336
void WhileCount__FuseReactiveIObserverOnNewAll_fn(WhileCount* __this, ::g::Fuse::Scripting::Array* values)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Reactive.IObserver.OnNewAll(Fuse.Scripting.Array)");
    __this->Assess(uPtr(values)->Length());
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :2327
void WhileCount__FuseReactiveIObserverOnNewAt_fn(WhileCount* __this, int* index, uObject* value)
{
}

// private void Fuse.Reactive.IObserver.OnRemove(object value, int index) :2322
void WhileCount__FuseReactiveIObserverOnRemove_fn(WhileCount* __this, uObject* value, int* index)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Reactive.IObserver.OnRemove(object,int)");
    __this->Assess(__this->_oldCount - 1);
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :2310
void WhileCount__FuseReactiveIObserverOnSet_fn(WhileCount* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Reactive.IObserver.OnSet(object)");
    __this->Assess(1);
}

// public int get_GreaterThan() :2288
void WhileCount__get_GreaterThan_fn(WhileCount* __this, int* __retval)
{
    *__retval = __this->GreaterThan();
}

// public void set_GreaterThan(int value) :2289
void WhileCount__set_GreaterThan_fn(WhileCount* __this, int* value)
{
    __this->GreaterThan(*value);
}

// public object get_Items() :2208
void WhileCount__get_Items_fn(WhileCount* __this, uObject** __retval)
{
    *__retval = __this->Items();
}

// public void set_Items(object value) :2209
void WhileCount__set_Items_fn(WhileCount* __this, uObject* value)
{
    __this->Items(value);
}

// public int get_LessThan() :2276
void WhileCount__get_LessThan_fn(WhileCount* __this, int* __retval)
{
    *__retval = __this->LessThan();
}

// public void set_LessThan(int value) :2277
void WhileCount__set_LessThan_fn(WhileCount* __this, int* value)
{
    __this->LessThan(*value);
}

// public generated WhileCount New() :2181
void WhileCount__New1_fn(WhileCount** __retval)
{
    *__retval = WhileCount::New1();
}

// private void OnItemsChanged() :2219
void WhileCount__OnItemsChanged_fn(WhileCount* __this)
{
    __this->OnItemsChanged();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :2184
void WhileCount__OnRooted_fn(WhileCount* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "OnRooted(Fuse.Node)");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this, parentNode);
    __this->_isRooting = true;
    __this->OnItemsChanged();
    __this->_isRooting = false;
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :2192
void WhileCount__OnUnrooted_fn(WhileCount* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "OnUnrooted(Fuse.Node)");

    if (__this->_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_subscription), ::TYPES[6/*Uno.IDisposable*/]));
        __this->_subscription = NULL;
    }

    __this->Assess(0);
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// private void Reassess() :2233
void WhileCount__Reassess_fn(WhileCount* __this)
{
    __this->Reassess();
}

// public generated WhileCount() [instance] :2181
void WhileCount::ctor_2()
{
    uStackFrame __("Fuse.Reactive.WhileCount", ".ctor()");
    ctor_1();
}

// private void Assess(int count) [instance] :2255
void WhileCount::Assess(int count)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Assess(int)");
    _oldCount = count;

    if (((_equalToMode && (count == _equalToValue)) || (_lessThanMode && (count < _lessThanValue))) || (_greaterThanMode && (count > _greaterThanValue)))
    {
        if (_isRooting)
            BypassActivate();
        else
            Activate(NULL);
    }
    else
        Deactivate();
}

// public int get_EqualTo() [instance] :2300
int WhileCount::EqualTo()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "get_EqualTo()");
    return _equalToValue;
}

// public void set_EqualTo(int value) [instance] :2301
void WhileCount::EqualTo(int value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_EqualTo(int)");
    _equalToMode = true;
    _equalToValue = value;
}

// public int get_GreaterThan() [instance] :2288
int WhileCount::GreaterThan()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "get_GreaterThan()");
    return _greaterThanValue;
}

// public void set_GreaterThan(int value) [instance] :2289
void WhileCount::GreaterThan(int value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_GreaterThan(int)");
    _greaterThanMode = true;
    _greaterThanValue = value;
}

// public object get_Items() [instance] :2208
uObject* WhileCount::Items()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "get_Items()");
    return _items;
}

// public void set_Items(object value) [instance] :2209
void WhileCount::Items(uObject* value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_Items(object)");

    if (_items != value)
    {
        _items = value;
        OnItemsChanged();
    }
}

// public int get_LessThan() [instance] :2276
int WhileCount::LessThan()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "get_LessThan()");
    return _lessThanValue;
}

// public void set_LessThan(int value) [instance] :2277
void WhileCount::LessThan(int value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_LessThan(int)");
    _lessThanMode = true;
    _lessThanValue = value;
}

// private void OnItemsChanged() [instance] :2219
void WhileCount::OnItemsChanged()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "OnItemsChanged()");
    ::g::Fuse::Reactive::Observable* obs = uAs< ::g::Fuse::Reactive::Observable*>(_items, ::TYPES[24/*Fuse.Reactive.Observable*/]);

    if (obs != NULL)
    {
        if (_subscription != NULL)
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[6/*Uno.IDisposable*/]));

        _subscription = (uObject*)uPtr(obs)->Subscribe((uObject*)this);
    }
    else
        Reassess();
}

// private void Reassess() [instance] :2233
void WhileCount::Reassess()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Reassess()");
    uArray* e = uAs<uArray*>(_items, ::TYPES[15/*object[]*/]);

    if (e != NULL)
        Assess(uPtr(e)->Length());
    else
    {
        ::g::Fuse::Reactive::Observable* obs = uAs< ::g::Fuse::Reactive::Observable*>(_items, ::TYPES[24/*Fuse.Reactive.Observable*/]);
        ::g::Fuse::Scripting::Array* a = (obs != NULL) ? (::g::Fuse::Scripting::Array*)uPtr(obs)->Values() : uAs< ::g::Fuse::Scripting::Array*>(_items, ::TYPES[21/*Fuse.Scripting.Array*/]);

        if (a != NULL)
            Assess(uPtr(a)->Length());
    }
}

// public generated WhileCount New() [static] :2181
WhileCount* WhileCount::New1()
{
    WhileCount* obj1 = (WhileCount*)uNew(WhileCount_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/$.uno#15
// ------------------------------------------------------------

// public sealed class WhileEmpty :2353
// {
::g::Fuse::Reactive::WhileCount_type* WhileEmpty_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::WhileCount_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 25;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WhileEmpty);
    options.TypeSize = sizeof(::g::Fuse::Reactive::WhileCount_type);
    type = (::g::Fuse::Reactive::WhileCount_type*)uClassType::New("Fuse.Reactive.WhileEmpty", options);
    type->SetBase(::g::Fuse::Reactive::WhileCount_typeof());
    type->fp_ctor_ = (void*)WhileEmpty__New2_fn;
    type->interface1.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnSet_fn;
    type->interface1.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnAdd_fn;
    type->interface1.fp_OnRemove = (void(*)(uObject*, uObject*, int*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnRemove_fn;
    type->interface1.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnNewAt_fn;
    type->interface1.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnInsertAt_fn;
    type->interface1.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::Array*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnNewAll_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    ::TYPES[96] = ::g::Fuse::Reactive::WhileCount_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface1));
    type->SetFields(25);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileEmpty__New2_fn, 0, true, WhileEmpty_typeof(), 0));
    return type;
}

// public WhileEmpty() :2355
void WhileEmpty__ctor_3_fn(WhileEmpty* __this)
{
    __this->ctor_3();
}

// public WhileEmpty New() :2355
void WhileEmpty__New2_fn(WhileEmpty** __retval)
{
    *__retval = WhileEmpty::New2();
}

// public WhileEmpty() [instance] :2355
void WhileEmpty::ctor_3()
{
    uStackFrame __("Fuse.Reactive.WhileEmpty", ".ctor()");
    ctor_2();
    EqualTo(0);
}

// public WhileEmpty New() [static] :2355
WhileEmpty* WhileEmpty::New2()
{
    WhileEmpty* obj1 = (WhileEmpty*)uNew(WhileEmpty_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

}}} // ::g::Fuse::Reactive
