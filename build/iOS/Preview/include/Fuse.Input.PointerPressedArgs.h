// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.27.14/Input/$.uno#6'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Scripting.IScriptEvent.h>
namespace g{namespace Fuse{namespace Input{struct PointerEventData;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Input{

// public sealed class PointerPressedArgs :767
// {
::g::Fuse::NodeEventArgs_type* PointerPressedArgs_typeof();
void PointerPressedArgs__ctor_3_fn(PointerPressedArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node);
void PointerPressedArgs__New3_fn(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node, PointerPressedArgs** __retval);

struct PointerPressedArgs : ::g::Fuse::Input::PointerEventArgs
{
    void ctor_3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node);
    static PointerPressedArgs* New3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node);
};
// }

}}} // ::g::Fuse::Input
