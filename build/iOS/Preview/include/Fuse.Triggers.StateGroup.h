// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.27.14/$.uno#9'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.IChildObject.h>
namespace g{namespace Fuse{namespace Scripting{struct ScriptClass;}}}
namespace g{namespace Fuse{namespace Triggers{struct State;}}}
namespace g{namespace Fuse{namespace Triggers{struct StateGroup;}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public partial sealed class StateGroup :477
// {
::g::Fuse::Behavior_type* StateGroup_typeof();
void StateGroup__ctor_1_fn(StateGroup* __this);
void StateGroup__get_Active_fn(StateGroup* __this, ::g::Fuse::Triggers::State** __retval);
void StateGroup__set_Active_fn(StateGroup* __this, ::g::Fuse::Triggers::State* value);
void StateGroup__get_ActiveIndex_fn(StateGroup* __this, int* __retval);
void StateGroup__set_ActiveIndex_fn(StateGroup* __this, int* value);
void StateGroup__CheckAllDone_fn(StateGroup* __this);
void StateGroup__FindObjectByName_fn(StateGroup* __this, uString* name, uDelegate* acceptor, uObject** __retval);
void StateGroup__Goto_fn(StateGroup* __this, ::g::Fuse::Triggers::State* next);
void StateGroup__goto__fn(StateGroup* n, uArray* args);
void StateGroup__gotoName_fn(StateGroup* n, uString* name);
void StateGroup__gotoNext_fn(StateGroup* n, uArray* args);
void StateGroup__GotoNextState_fn(StateGroup* __this);
void StateGroup__New1_fn(StateGroup** __retval);
void StateGroup__OnPlaybackDone_fn(StateGroup* __this, ::g::Fuse::Triggers::Trigger* which);
void StateGroup__OnRooted_fn(StateGroup* __this, ::g::Fuse::Node* parentNode);
void StateGroup__OnUnrooted_fn(StateGroup* __this, ::g::Fuse::Node* parentNode);
void StateGroup__get_Rest_fn(StateGroup* __this, ::g::Fuse::Triggers::State** __retval);
void StateGroup__set_Rest_fn(StateGroup* __this, ::g::Fuse::Triggers::State* value);
void StateGroup__StateAcceptor_fn(uObject* o, bool* __retval);
void StateGroup__get_States_fn(StateGroup* __this, uObject** __retval);
void StateGroup__get_Transition_fn(StateGroup* __this, int* __retval);
void StateGroup__set_Transition_fn(StateGroup* __this, int* value);

struct StateGroup : ::g::Fuse::Behavior
{
    uStrong< ::g::Fuse::Triggers::State*> _active;
    uStrong< ::g::Fuse::Triggers::State*> _rest;
    uStrong<uObject*> _states;
    int _transition;
    static uSStrong< ::g::Fuse::Scripting::ScriptClass*> ScriptClass_;
    static uSStrong< ::g::Fuse::Scripting::ScriptClass*>& ScriptClass() { return StateGroup_typeof()->Init(), ScriptClass_; }

    void ctor_1();
    ::g::Fuse::Triggers::State* Active();
    void Active(::g::Fuse::Triggers::State* value);
    int ActiveIndex();
    void ActiveIndex(int value);
    void CheckAllDone();
    uObject* FindObjectByName(uString* name, uDelegate* acceptor);
    void Goto(::g::Fuse::Triggers::State* next);
    void GotoNextState();
    void OnPlaybackDone(::g::Fuse::Triggers::Trigger* which);
    ::g::Fuse::Triggers::State* Rest();
    void Rest(::g::Fuse::Triggers::State* value);
    uObject* States();
    int Transition();
    void Transition(int value);
    static void goto_(StateGroup* n, uArray* args);
    static void gotoName(StateGroup* n, uString* name);
    static void gotoNext(StateGroup* n, uArray* args);
    static StateGroup* New1();
    static bool StateAcceptor(uObject* o);
};
// }

}}} // ::g::Fuse::Triggers
