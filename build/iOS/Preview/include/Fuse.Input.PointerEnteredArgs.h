// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.27.14/Input/$.uno#6'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Scripting.IScriptEvent.h>
namespace g{namespace Fuse{namespace Input{struct PointerEnteredArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventData;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Input{

// public sealed class PointerEnteredArgs :827
// {
::g::Fuse::NodeEventArgs_type* PointerEnteredArgs_typeof();
void PointerEnteredArgs__ctor_3_fn(PointerEnteredArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node);
void PointerEnteredArgs__New3_fn(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node, PointerEnteredArgs** __retval);

struct PointerEnteredArgs : ::g::Fuse::Input::PointerEventArgs
{
    void ctor_3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node);
    static PointerEnteredArgs* New3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node);
};
// }

}}} // ::g::Fuse::Input
