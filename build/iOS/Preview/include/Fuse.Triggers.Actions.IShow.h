// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.27.14/Actions/$.uno#10'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public abstract interface IShow :507
// {
uInterfaceType* IShow_typeof();

struct IShow
{
    void(*fp_Show)(uObject*);
    static void Show(const uInterface& __this) { __this.VTable<IShow>()->fp_Show(__this); }
};
// }

}}}} // ::g::Fuse::Triggers::Actions
