// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.27.14/Actions/$.uno#10'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public abstract interface ICollapse :533
// {
uInterfaceType* ICollapse_typeof();

struct ICollapse
{
    void(*fp_Collapse)(uObject*);
    static void Collapse(const uInterface& __this) { __this.VTable<ICollapse>()->fp_Collapse(__this); }
};
// }

}}}} // ::g::Fuse::Triggers::Actions
