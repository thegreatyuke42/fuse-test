// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.27.14/Internal/$.uno#1'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct ConcurrentCollection;}}}
namespace g{namespace Uno{namespace Collections{struct ConcurrentCollection__DeferLockImpl;}}}

namespace g{
namespace Uno{
namespace Collections{

// private sealed class ConcurrentCollection<T>.DeferLockImpl :370
// {
struct ConcurrentCollection__DeferLockImpl_type : uType
{
    ::g::Uno::IDisposable interface0;
};

ConcurrentCollection__DeferLockImpl_type* ConcurrentCollection__DeferLockImpl_typeof();
void ConcurrentCollection__DeferLockImpl__ctor__fn(ConcurrentCollection__DeferLockImpl* __this, ::g::Uno::Collections::ConcurrentCollection* c);
void ConcurrentCollection__DeferLockImpl__Dispose_fn(ConcurrentCollection__DeferLockImpl* __this);
void ConcurrentCollection__DeferLockImpl__New1_fn(uType* __type, ::g::Uno::Collections::ConcurrentCollection* c, ConcurrentCollection__DeferLockImpl** __retval);

struct ConcurrentCollection__DeferLockImpl : uObject
{
    uStrong< ::g::Uno::Collections::ConcurrentCollection*> _collection;

    void ctor_(::g::Uno::Collections::ConcurrentCollection* c);
    void Dispose();
    static ConcurrentCollection__DeferLockImpl* New1(uType* __type, ::g::Uno::Collections::ConcurrentCollection* c);
};
// }

}}} // ::g::Uno::Collections
