// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.27.14/$.uno#16'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Fuse.Triggers.WhileValue-1.h>
#include <Uno.Bool.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileBool;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract class WhileBool :1572
// {
::g::Fuse::Triggers::WhileValue_type* WhileBool_typeof();
void WhileBool__ctor_4_fn(WhileBool* __this);
void WhileBool__get_Value1_fn(WhileBool* __this, bool* __retval);
void WhileBool__set_Value1_fn(WhileBool* __this, bool* value);

struct WhileBool : ::g::Fuse::Triggers::WhileValue
{
    void ctor_4();
    bool Value1();
    void Value1(bool value);
};
// }

}}} // ::g::Fuse::Triggers
