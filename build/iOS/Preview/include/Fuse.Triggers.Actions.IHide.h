// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.27.14/Actions/$.uno#10'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public abstract interface IHide :520
// {
uInterfaceType* IHide_typeof();

struct IHide
{
    void(*fp_Hide)(uObject*);
    static void Hide(const uInterface& __this) { __this.VTable<IHide>()->fp_Hide(__this); }
};
// }

}}}} // ::g::Fuse::Triggers::Actions
