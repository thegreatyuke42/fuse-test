// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.27.14/$.uno#14'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Triggers.Trigger.h>
namespace g{namespace Fuse{namespace Reactive{struct WhileCount;}}}
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Reactive{

// public class WhileCount :2181
// {
struct WhileCount_type : ::g::Fuse::Triggers::Trigger_type
{
    ::g::Fuse::Reactive::IObserver interface1;
};

WhileCount_type* WhileCount_typeof();
void WhileCount__ctor_2_fn(WhileCount* __this);
void WhileCount__Assess_fn(WhileCount* __this, int* count);
void WhileCount__get_EqualTo_fn(WhileCount* __this, int* __retval);
void WhileCount__set_EqualTo_fn(WhileCount* __this, int* value);
void WhileCount__FuseReactiveIObserverOnAdd_fn(WhileCount* __this, uObject* addedValue);
void WhileCount__FuseReactiveIObserverOnFailed_fn(WhileCount* __this, uString* message);
void WhileCount__FuseReactiveIObserverOnInsertAt_fn(WhileCount* __this, int* index, uObject* value);
void WhileCount__FuseReactiveIObserverOnNewAll_fn(WhileCount* __this, ::g::Fuse::Scripting::Array* values);
void WhileCount__FuseReactiveIObserverOnNewAt_fn(WhileCount* __this, int* index, uObject* value);
void WhileCount__FuseReactiveIObserverOnRemove_fn(WhileCount* __this, uObject* value, int* index);
void WhileCount__FuseReactiveIObserverOnSet_fn(WhileCount* __this, uObject* newValue);
void WhileCount__get_GreaterThan_fn(WhileCount* __this, int* __retval);
void WhileCount__set_GreaterThan_fn(WhileCount* __this, int* value);
void WhileCount__get_Items_fn(WhileCount* __this, uObject** __retval);
void WhileCount__set_Items_fn(WhileCount* __this, uObject* value);
void WhileCount__get_LessThan_fn(WhileCount* __this, int* __retval);
void WhileCount__set_LessThan_fn(WhileCount* __this, int* value);
void WhileCount__New1_fn(WhileCount** __retval);
void WhileCount__OnItemsChanged_fn(WhileCount* __this);
void WhileCount__OnRooted_fn(WhileCount* __this, ::g::Fuse::Node* parentNode);
void WhileCount__OnUnrooted_fn(WhileCount* __this, ::g::Fuse::Node* parentNode);
void WhileCount__Reassess_fn(WhileCount* __this);

struct WhileCount : ::g::Fuse::Triggers::Trigger
{
    bool _equalToMode;
    int _equalToValue;
    bool _greaterThanMode;
    int _greaterThanValue;
    bool _isRooting;
    uStrong<uObject*> _items;
    bool _lessThanMode;
    int _lessThanValue;
    int _oldCount;
    uStrong<uObject*> _subscription;

    void ctor_2();
    void Assess(int count);
    int EqualTo();
    void EqualTo(int value);
    int GreaterThan();
    void GreaterThan(int value);
    uObject* Items();
    void Items(uObject* value);
    int LessThan();
    void LessThan(int value);
    void OnItemsChanged();
    void Reassess();
    static WhileCount* New1();
};
// }

}}} // ::g::Fuse::Reactive
