// This file was generated based on '/usr/local/share/uno/Packages/Uno.Threading/0.27.20/$.uno#5'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct Mutex;}}}

namespace g{
namespace Uno{
namespace Threading{

// public abstract class Mutex :473
// {
struct Mutex_type : uType
{
    ::g::Uno::IDisposable interface0;
    void(*fp_Dispose)(::g::Uno::Threading::Mutex*);
    void(*fp_Lock)(::g::Uno::Threading::Mutex*);
    void(*fp_TryLock)(::g::Uno::Threading::Mutex*, bool*);
    void(*fp_Unlock)(::g::Uno::Threading::Mutex*);
};

Mutex_type* Mutex_typeof();
void Mutex__ctor__fn(Mutex* __this);
void Mutex__Create_fn(Mutex** __retval);

struct Mutex : uObject
{
    void ctor_();
    void Dispose() { (((Mutex_type*)__type)->fp_Dispose)(this); }
    void Lock() { (((Mutex_type*)__type)->fp_Lock)(this); }
    bool TryLock() { bool __retval; return (((Mutex_type*)__type)->fp_TryLock)(this, &__retval), __retval; }
    void Unlock() { (((Mutex_type*)__type)->fp_Unlock)(this); }
    static Mutex* Create();
};
// }

}}} // ::g::Uno::Threading
