// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.27.14/$.uno#8'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Navigation.StructuredNavigation.h>
namespace g{namespace Fuse{namespace Navigation{struct HierarchicalNavigation;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class HierarchicalNavigation :1686
// {
::g::Fuse::Navigation::Navigation_type* HierarchicalNavigation_typeof();
void HierarchicalNavigation__ctor_3_fn(HierarchicalNavigation* __this);
void HierarchicalNavigation__New1_fn(HierarchicalNavigation** __retval);
void HierarchicalNavigation__get_ReuseExistingNode_fn(HierarchicalNavigation* __this, bool* __retval);
void HierarchicalNavigation__set_ReuseExistingNode_fn(HierarchicalNavigation* __this, bool* value);

struct HierarchicalNavigation : ::g::Fuse::Navigation::StructuredNavigation
{
    void ctor_3();
    bool ReuseExistingNode();
    void ReuseExistingNode(bool value);
    static HierarchicalNavigation* New1();
};
// }

}}} // ::g::Fuse::Navigation
