// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Entities/0.27.14/$.uno#12'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Entities{struct NodeExtensions;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Entities{

// public static class NodeExtensions :1680
// {
uClassType* NodeExtensions_typeof();
void NodeExtensions__IsInSubtreeOf_fn(::g::Fuse::Node* self, ::g::Fuse::Node* parent, bool* __retval);

struct NodeExtensions : uObject
{
    static bool IsInSubtreeOf(::g::Fuse::Node* self, ::g::Fuse::Node* parent);
};
// }

}}} // ::g::Fuse::Entities
