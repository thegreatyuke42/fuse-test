// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.14/$.uno#52'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.ParentControl.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IChildObject.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Uno.String.h>
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Fuse{struct StyleProperty1;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Controls{

// public abstract class TextControl :5428
// {
struct TextControl_type : ::g::Fuse::Controls::ParentControl_type
{
    ::g::Fuse::Triggers::IValue interface9;
    void(*fp_OnTextLayoutPropertyChanged)(::g::Fuse::Controls::TextControl*);
    void(*fp_OnTextRenderPropertyChanged)(::g::Fuse::Controls::TextControl*);
    void(*fp_OnValueChanged)(::g::Fuse::Controls::TextControl*, uString*, uObject*);
    void(*fp_get_RenderColor)(::g::Fuse::Controls::TextControl*, ::g::Uno::Float4*);
    void(*fp_get_RenderValue)(::g::Fuse::Controls::TextControl*, uString**);
};

TextControl_type* TextControl_typeof();
void TextControl__ctor_4_fn(TextControl* __this);
void TextControl__EnforceMaxLength_fn(TextControl* __this, uString** v, bool* __retval);
void TextControl__get_Font_fn(TextControl* __this, ::g::Fuse::Font** __retval);
void TextControl__set_Font_fn(TextControl* __this, ::g::Fuse::Font* value);
void TextControl__get_FontSize_fn(TextControl* __this, float* __retval);
void TextControl__set_FontSize_fn(TextControl* __this, float* value);
void TextControl__GetValue_fn(TextControl* t, uString** __retval);
void TextControl__get_LineSpacing_fn(TextControl* __this, float* __retval);
void TextControl__set_LineSpacing_fn(TextControl* __this, float* value);
void TextControl__get_MaxLength_fn(TextControl* __this, int* __retval);
void TextControl__set_MaxLength_fn(TextControl* __this, int* value);
void TextControl__OnTextLayoutPropertyChanged_fn(TextControl* __this);
void TextControl__OnTextLayoutPropertyChanged1_fn(TextControl* t);
void TextControl__OnTextRenderPropertyChanged_fn(TextControl* __this);
void TextControl__OnTextRenderPropertyChanged1_fn(TextControl* t);
void TextControl__OnValueChanged_fn(TextControl* __this, uString* newString, uObject* origin);
void TextControl__get_RenderColor_fn(TextControl* __this, ::g::Uno::Float4* __retval);
void TextControl__get_RenderValue_fn(TextControl* __this, uString** __retval);
void TextControl__SetValue_fn(TextControl* t, uString* value);
void TextControl__SetValue1_fn(TextControl* __this, uString* value, uObject* origin);
void TextControl__get_TextAlignment_fn(TextControl* __this, int* __retval);
void TextControl__set_TextAlignment_fn(TextControl* __this, int* value);
void TextControl__get_TextColor_fn(TextControl* __this, ::g::Uno::Float4* __retval);
void TextControl__set_TextColor_fn(TextControl* __this, ::g::Uno::Float4* value);
void TextControl__add_TextLayoutPropertyChanged_fn(TextControl* __this, uDelegate* value);
void TextControl__remove_TextLayoutPropertyChanged_fn(TextControl* __this, uDelegate* value);
void TextControl__add_TextRenderPropertyChanged_fn(TextControl* __this, uDelegate* value);
void TextControl__remove_TextRenderPropertyChanged_fn(TextControl* __this, uDelegate* value);
void TextControl__get_TextTruncation_fn(TextControl* __this, int* __retval);
void TextControl__set_TextTruncation_fn(TextControl* __this, int* value);
void TextControl__get_TextWrapping_fn(TextControl* __this, int* __retval);
void TextControl__set_TextWrapping_fn(TextControl* __this, int* value);
void TextControl__get_Value_fn(TextControl* __this, uString** __retval);
void TextControl__set_Value_fn(TextControl* __this, uString* value);
void TextControl__add_ValueChanged_fn(TextControl* __this, uDelegate* value);
void TextControl__remove_ValueChanged_fn(TextControl* __this, uDelegate* value);

struct TextControl : ::g::Fuse::Controls::ParentControl
{
    int _maxLength;
    uStrong<uString*> _value;
    static uSStrong< ::g::Fuse::StyleProperty1*> FontProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& FontProperty() { return TextControl_typeof()->Init(), FontProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> FontSizeProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& FontSizeProperty() { return TextControl_typeof()->Init(), FontSizeProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> LineSpacingProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& LineSpacingProperty() { return TextControl_typeof()->Init(), LineSpacingProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> TextAlignmentProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& TextAlignmentProperty() { return TextControl_typeof()->Init(), TextAlignmentProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> TextColorProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& TextColorProperty() { return TextControl_typeof()->Init(), TextColorProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> TextTruncationProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& TextTruncationProperty() { return TextControl_typeof()->Init(), TextTruncationProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> TextWrappingProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& TextWrappingProperty() { return TextControl_typeof()->Init(), TextWrappingProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> ValueProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& ValueProperty() { return TextControl_typeof()->Init(), ValueProperty_; }
    uStrong<uDelegate*> TextLayoutPropertyChanged1;
    uStrong<uDelegate*> TextRenderPropertyChanged1;
    uStrong<uDelegate*> ValueChanged1;

    void ctor_4();
    bool EnforceMaxLength(uString** v);
    ::g::Fuse::Font* Font();
    void Font(::g::Fuse::Font* value);
    float FontSize();
    void FontSize(float value);
    float LineSpacing();
    void LineSpacing(float value);
    int MaxLength();
    void MaxLength(int value);
    void OnTextLayoutPropertyChanged() { (((TextControl_type*)__type)->fp_OnTextLayoutPropertyChanged)(this); }
    void OnTextRenderPropertyChanged() { (((TextControl_type*)__type)->fp_OnTextRenderPropertyChanged)(this); }
    void OnValueChanged(uString* newString, uObject* origin) { (((TextControl_type*)__type)->fp_OnValueChanged)(this, newString, origin); }
    ::g::Uno::Float4 RenderColor();
    uString* RenderValue() { uString* __retval; return (((TextControl_type*)__type)->fp_get_RenderValue)(this, &__retval), __retval; }
    void SetValue1(uString* value, uObject* origin);
    int TextAlignment();
    void TextAlignment(int value);
    ::g::Uno::Float4 TextColor();
    void TextColor(::g::Uno::Float4 value);
    void add_TextLayoutPropertyChanged(uDelegate* value);
    void remove_TextLayoutPropertyChanged(uDelegate* value);
    void add_TextRenderPropertyChanged(uDelegate* value);
    void remove_TextRenderPropertyChanged(uDelegate* value);
    int TextTruncation();
    void TextTruncation(int value);
    int TextWrapping();
    void TextWrapping(int value);
    uString* Value();
    void Value(uString* value);
    void add_ValueChanged(uDelegate* value);
    void remove_ValueChanged(uDelegate* value);
    static uString* GetValue(TextControl* t);
    static void OnTextLayoutPropertyChanged(TextControl* __this) { TextControl__OnTextLayoutPropertyChanged_fn(__this); }
    static void OnTextLayoutPropertyChanged1(TextControl* t);
    static void OnTextRenderPropertyChanged(TextControl* __this) { TextControl__OnTextRenderPropertyChanged_fn(__this); }
    static void OnTextRenderPropertyChanged1(TextControl* t);
    static void OnValueChanged(TextControl* __this, uString* newString, uObject* origin) { TextControl__OnValueChanged_fn(__this, newString, origin); }
    static void SetValue(TextControl* t, uString* value);
    static ::g::Uno::Float4 RenderColor(TextControl* __this);
    static uString* RenderValue(TextControl* __this) { uString* __retval; return TextControl__get_RenderValue_fn(__this, &__retval), __retval; }
};

}}} // ::g::Fuse::Controls

#include <Uno.Float4.h>

namespace g{
namespace Fuse{
namespace Controls{

inline ::g::Uno::Float4 TextControl::RenderColor() { ::g::Uno::Float4 __retval; return (((TextControl_type*)__type)->fp_get_RenderColor)(this, &__retval), __retval; }
inline ::g::Uno::Float4 TextControl::RenderColor(TextControl* __this) { ::g::Uno::Float4 __retval; return TextControl__get_RenderColor_fn(__this, &__retval), __retval; }
// }

}}} // ::g::Fuse::Controls
