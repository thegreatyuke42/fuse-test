// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.27.14/Input/$.uno#8'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Input{struct TextEntered;}}}
namespace g{namespace Fuse{namespace Input{struct TextEnteredArgs;}}}
namespace g{namespace Fuse{namespace Input{struct TextService;}}}
namespace g{namespace Fuse{struct NodeEvent;}}

namespace g{
namespace Fuse{
namespace Input{

// public static class TextService :1456
// {
uClassType* TextService_typeof();
void TextService__RaiseTextEntered_fn(uString* text, bool* __retval);
void TextService__get_TextEntered_fn(::g::Fuse::NodeEvent** __retval);

struct TextService : uObject
{
    static uSStrong< ::g::Fuse::Input::TextEntered*> _textEntered_;
    static uSStrong< ::g::Fuse::Input::TextEntered*>& _textEntered() { return TextService_typeof()->Init(), _textEntered_; }

    static bool RaiseTextEntered(uString* text);
    static ::g::Fuse::NodeEvent* TextEntered();
};
// }

}}} // ::g::Fuse::Input
