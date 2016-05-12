// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.IChildObject.h>
namespace g{namespace Fuse{struct AlternateRoot;}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{

// public sealed class AlternateRoot :10
// {
::g::Fuse::Behavior_type* AlternateRoot_typeof();
void AlternateRoot__ctor_1_fn(AlternateRoot* __this);
void AlternateRoot__Add_fn(AlternateRoot* __this);
void AlternateRoot__get_IsEnabled_fn(AlternateRoot* __this, bool* __retval);
void AlternateRoot__set_IsEnabled_fn(AlternateRoot* __this, bool* value);
void AlternateRoot__New1_fn(AlternateRoot** __retval);
void AlternateRoot__get_Node_fn(AlternateRoot* __this, ::g::Fuse::Node** __retval);
void AlternateRoot__set_Node_fn(AlternateRoot* __this, ::g::Fuse::Node* value);
void AlternateRoot__OnRooted_fn(AlternateRoot* __this, ::g::Fuse::Node* parentNode);
void AlternateRoot__OnUnrooted_fn(AlternateRoot* __this, ::g::Fuse::Node* parentNode);
void AlternateRoot__get_ParentNode1_fn(AlternateRoot* __this, ::g::Fuse::Node** __retval);
void AlternateRoot__set_ParentNode1_fn(AlternateRoot* __this, ::g::Fuse::Node* value);
void AlternateRoot__get_PreserveContext_fn(AlternateRoot* __this, bool* __retval);
void AlternateRoot__set_PreserveContext_fn(AlternateRoot* __this, bool* value);
void AlternateRoot__Remove_fn(AlternateRoot* __this);

struct AlternateRoot : ::g::Fuse::Behavior
{
    bool _isEnabled;
    uStrong< ::g::Fuse::Node*> _node;
    uStrong< ::g::Fuse::Node*> _parentNode;
    bool _preserveContext;

    void ctor_1();
    void Add();
    bool IsEnabled();
    void IsEnabled(bool value);
    ::g::Fuse::Node* Node();
    void Node(::g::Fuse::Node* value);
    ::g::Fuse::Node* ParentNode1();
    void ParentNode1(::g::Fuse::Node* value);
    bool PreserveContext();
    void PreserveContext(bool value);
    void Remove();
    static AlternateRoot* New1();
};
// }

}} // ::g::Fuse
