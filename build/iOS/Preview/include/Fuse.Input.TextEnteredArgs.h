// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.27.14/Input/$.uno#8'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.NodeEventArgs.h>
#include <Fuse.Scripting.IScriptEvent.h>
namespace g{namespace Fuse{namespace Input{struct TextEnteredArgs;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Input{

// public sealed class TextEnteredArgs :1478
// {
::g::Fuse::NodeEventArgs_type* TextEnteredArgs_typeof();
void TextEnteredArgs__ctor_2_fn(TextEnteredArgs* __this, uString* text, ::g::Fuse::Node* node);
void TextEnteredArgs__New3_fn(uString* text, ::g::Fuse::Node* node, TextEnteredArgs** __retval);
void TextEnteredArgs__Serialize_fn(TextEnteredArgs* __this, uObject* s);
void TextEnteredArgs__get_Text_fn(TextEnteredArgs* __this, uString** __retval);
void TextEnteredArgs__set_Text_fn(TextEnteredArgs* __this, uString* value);

struct TextEnteredArgs : ::g::Fuse::NodeEventArgs
{
    uStrong<uString*> _Text;

    void ctor_2(uString* text, ::g::Fuse::Node* node);
    uString* Text();
    void Text(uString* value);
    static TextEnteredArgs* New3(uString* text, ::g::Fuse::Node* node);
};
// }

}}} // ::g::Fuse::Input
