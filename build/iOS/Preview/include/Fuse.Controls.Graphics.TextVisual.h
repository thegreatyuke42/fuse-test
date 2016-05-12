// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.14/Graphics/$.uno#4'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Graphics.ControlVisual-1.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.IChildObject.h>
#include <Fuse.IDataContext.h>
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct TextVisual;}}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Uno{namespace UX{struct ValueChangedArgs;}}}
namespace g{namespace Uno{struct EventArgs;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Graphics{

// public sealed class TextVisual :446
// {
::g::Fuse::Controls::Graphics::ControlVisual_type* TextVisual_typeof();
void TextVisual__ctor_3_fn(TextVisual* __this);
void TextVisual__Attach_fn(TextVisual* __this);
void TextVisual__Detach_fn(TextVisual* __this);
void TextVisual__GetMarginSize_fn(TextVisual* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void TextVisual__New1_fn(TextVisual** __retval);
void TextVisual__OnArrangeMarginBox_fn(TextVisual* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void TextVisual__OnDraw_fn(TextVisual* __this, ::g::Fuse::DrawContext* dc);
void TextVisual__OnHitTest_fn(TextVisual* __this, ::g::Fuse::HitTestContext* htc);
void TextVisual__OnTextLayoutPropertyChanged_fn(TextVisual* __this, uObject* sender, ::g::Uno::EventArgs* args);
void TextVisual__OnTextRenderPropertyChanged_fn(TextVisual* __this, uObject* sender, ::g::Uno::EventArgs* args);
void TextVisual__OnValueChanged_fn(TextVisual* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args);

struct TextVisual : ::g::Fuse::Controls::Graphics::ControlVisual
{
    uStrong<uObject*> _textRenderer;

    void ctor_3();
    void OnTextLayoutPropertyChanged(uObject* sender, ::g::Uno::EventArgs* args);
    void OnTextRenderPropertyChanged(uObject* sender, ::g::Uno::EventArgs* args);
    void OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args);
    static TextVisual* New1();
};
// }

}}}} // ::g::Fuse::Controls::Graphics
