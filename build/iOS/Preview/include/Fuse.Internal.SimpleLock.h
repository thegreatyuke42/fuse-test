// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.27.14/Internal/$.uno#4'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct SimpleLock;}}}
namespace g{namespace Uno{namespace Threading{struct Mutex;}}}

namespace g{
namespace Fuse{
namespace Internal{

// internal sealed extern class SimpleLock :599
// {
uType* SimpleLock_typeof();
void SimpleLock__ctor__fn(SimpleLock* __this);
void SimpleLock__Lock_fn(SimpleLock* __this);
void SimpleLock__New1_fn(SimpleLock** __retval);
void SimpleLock__Unlock_fn(SimpleLock* __this);

struct SimpleLock : uObject
{
    uStrong< ::g::Uno::Threading::Mutex*> _mutex;

    void ctor_();
    void Lock();
    void Unlock();
    static SimpleLock* New1();
};
// }

}}} // ::g::Fuse::Internal
