// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#47'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Style.h>
#include <Uno.UX.ITemplate.h>
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Theme;}}

namespace g{
namespace Fuse{

// public abstract class Theme :6781
// {
::g::Fuse::Style_type* Theme_typeof();
void Theme__ctor_1_fn(Theme* __this);
void Theme__ctor_2_fn(Theme* __this, ::g::Fuse::Node* rootMediator);

struct Theme : ::g::Fuse::Style
{
    uStrong< ::g::Fuse::Node*> RootMediator;

    void ctor_1();
    void ctor_2(::g::Fuse::Node* rootMediator);
};
// }

}} // ::g::Fuse
