// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.27.14/$.uno#16'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Uno.Bool.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileTrue;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileTrue :1581
// {
::g::Fuse::Triggers::WhileValue_type* WhileTrue_typeof();
void WhileTrue__ctor_5_fn(WhileTrue* __this);
void WhileTrue__get_IsOn_fn(WhileTrue* __this, bool* __retval);
void WhileTrue__New1_fn(WhileTrue** __retval);

struct WhileTrue : ::g::Fuse::Triggers::WhileBool
{
    void ctor_5();
    static WhileTrue* New1();
};
// }

}}} // ::g::Fuse::Triggers
