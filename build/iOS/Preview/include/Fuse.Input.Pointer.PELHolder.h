// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.27.14/Input/$.uno#7'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Input{struct Pointer__PELHolder;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Input{

// private sealed class Pointer.PELHolder :1337
// {
uType* Pointer__PELHolder_typeof();
void Pointer__PELHolder__ctor__fn(Pointer__PELHolder* __this);
void Pointer__PELHolder__New1_fn(Pointer__PELHolder** __retval);

struct Pointer__PELHolder : uObject
{
    uStrong< ::g::Fuse::Node*> Node;
    int Status;

    void ctor_();
    static Pointer__PELHolder* New1();
};
// }

}}} // ::g::Fuse::Input
