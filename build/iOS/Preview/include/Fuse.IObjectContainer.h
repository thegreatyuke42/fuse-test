// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#13'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// public abstract interface IObjectContainer :1833
// {
uInterfaceType* IObjectContainer_typeof();

struct IObjectContainer
{
    void(*fp_Add)(uObject*, uObject*);
    void(*fp_BeginRemove)(uObject*, uObject*);
    void(*fp_Insert)(uObject*, int*, uObject*);
    void(*fp_Remove)(uObject*, uObject*);
    static void Add(const uInterface& __this, uObject* obj) { __this.VTable<IObjectContainer>()->fp_Add(__this, obj); }
    static void BeginRemove(const uInterface& __this, uObject* obj) { __this.VTable<IObjectContainer>()->fp_BeginRemove(__this, obj); }
    static void Insert(const uInterface& __this, int index, uObject* obj) { __this.VTable<IObjectContainer>()->fp_Insert(__this, &index, obj); }
    static void Remove(const uInterface& __this, uObject* obj) { __this.VTable<IObjectContainer>()->fp_Remove(__this, obj); }
};
// }

}} // ::g::Fuse
