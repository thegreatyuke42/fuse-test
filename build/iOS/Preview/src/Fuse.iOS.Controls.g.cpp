// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Behavior.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.RangeControl.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextEdit.h>
#include <Fuse.Controls.TextInputActionStyle.h>
#include <Fuse.Controls.TextInputHint.h>
#include <Fuse.Controls.ToggleControl.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.StretchDirection.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.StretchSizing.h>
#include <Fuse.Elements.TextAlignment.h>
#include <Fuse.Elements.TextWrapping.h>
#include <Fuse.FastMatrix.h>
#include <Fuse.Font.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Input.FocusGainedArgs.h>
#include <Fuse.Input.FocusGainedHandler.h>
#include <Fuse.Input.FocusLostArgs.h>
#include <Fuse.Input.FocusLostHandler.h>
#include <Fuse.Internal.SizingContainer.h>
#include <Fuse.InvalidateLayoutReason.h>
#include <Fuse.iOS.ControlEvent.h>
#include <Fuse.iOS.Controls.Button.h>
#include <Fuse.iOS.Controls.Circle.h>
#include <Fuse.iOS.Controls.Control-1.h>
#include <Fuse.iOS.Controls.ControlProperties.h>
#include <Fuse.iOS.Controls.Element.h>
#include <Fuse.iOS.Controls.FuseMapView.h>
#include <Fuse.iOS.Controls.Image.h>
#include <Fuse.iOS.Controls.ImageCache.h>
#include <Fuse.iOS.Controls.ITextInputImpl.h>
#include <Fuse.iOS.Controls.MapViewController.h>
#include <Fuse.iOS.Controls.MultilineTextInput.h>
#include <Fuse.iOS.Controls.Rectangle.h>
#include <Fuse.iOS.Controls.Shape-1.h>
#include <Fuse.iOS.Controls.SingleLineTextInput.h>
#include <Fuse.iOS.Controls.Slider.h>
#include <Fuse.iOS.Controls.Switch.h>
#include <Fuse.iOS.Controls.TextBlock.h>
#include <Fuse.iOS.Controls.TextInput.h>
#include <Fuse.iOS.Controls.ViewContainer.h>
#include <Fuse.iOS.Controls.WebView.h>
#include <Fuse.iOS.Controls.WKWebViewHelpers.h>
#include <Fuse.iOS.FontCache.h>
#include <Fuse.iOS.iOSBindingView.h>
#include <Fuse.iOS.iOSExtensions.h>
#include <Fuse.iOS.iOSInterop.h>
#include <Fuse.iOS.NativeViews.LeafNativeView.h>
#include <Fuse.iOS.NativeViews.NativeView.h>
#include <Fuse.iOS.NSAttributedStringConstants.h>
#include <Fuse.iOS.Transform.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Node.h>
#include <Fuse.NodeBounds.h>
#include <Fuse.NodeEvent-2.h>
#include <Fuse.Resources.FileImageSource.h>
#include <Fuse.Resources.HttpImageSource.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.StyleProperty-2.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <iOS.CoreGraphics.CGColorRef.h>
#include <iOS.CoreGraphics.CGPathRef.h>
#include <iOS.CoreGraphics.CGPoint.h>
#include <iOS.CoreGraphics.CGRect.h>
#include <iOS.CoreGraphics.CGSize.h>
#include <iOS.CoreImage.CIImage.h>
#include <iOS.Foundation._NSRange.h>
#include <iOS.Foundation.INSCopying.h>
#include <iOS.Foundation.NSAttributedString.h>
#include <iOS.Foundation.NSDictionary.h>
#include <iOS.Foundation.NSError.h>
#include <iOS.Foundation.NSObject.h>
#include <iOS.Foundation.NSString.h>
#include <iOS.Foundation.NSURL.h>
#include <iOS.Foundation.NSURLCache.h>
#include <iOS.Foundation.NSURLRequest.h>
#include <iOS.QuartzCore.CALayer.h>
#include <iOS.QuartzCore.CAShapeLayer.h>
#include <iOS.UIKit.IUITextInput.h>
#include <iOS.UIKit.NSLineBreakMode.h>
#include <iOS.UIKit.NSTextAlignment.h>
#include <iOS.UIKit.NSTextAttachment.h>
#include <iOS.UIKit.UIBezierPath.h>
#include <iOS.UIKit.UIButton.h>
#include <iOS.UIKit.UIButtonType.h>
#include <iOS.UIKit.UIColor.h>
#include <iOS.UIKit.UIControl.h>
#include <iOS.UIKit.UIControlEvents.h>
#include <iOS.UIKit.UIControlState.h>
#include <iOS.UIKit.UIEdgeInsets.h>
#include <iOS.UIKit.UIFont.h>
#include <iOS.UIKit.UIImage.h>
#include <iOS.UIKit.UIImageView.h>
#include <iOS.UIKit.UIKeyboardType.h>
#include <iOS.UIKit.UILabel.h>
#include <iOS.UIKit.UIResponder.h>
#include <iOS.UIKit.UIReturnKeyType.h>
#include <iOS.UIKit.UIScrollView.h>
#include <iOS.UIKit.UISlider.h>
#include <iOS.UIKit.UISwitch.h>
#include <iOS.UIKit.UITextBorderStyle.h>
#include <iOS.UIKit.UITextField.h>
#include <iOS.UIKit.UITextView.h>
#include <iOS.UIKit.UIView.h>
#include <iOS.WebKit.WKNavigation.h>
#include <iOS.WebKit.WKWebView.h>
#include <ObjC.Bindings.Object.h>
#include <ObjC.ID.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Int.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Platform2.Application.h>
#include <Uno.Rect.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[10];
static uType* TYPES[96];

namespace g{
namespace Fuse{
namespace iOS{
namespace Controls{

// /usr/local/share/uno/Packages/Fuse.iOS/0.27.14/Controls/$.uno
// -------------------------------------------------------------

// public sealed extern class Button :59
// {
// static Button() :59
static void Button__cctor_1_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret3;
    ::g::Fuse::StyleProperty1* ret4;
    ::g::Fuse::StyleProperty1* ret5;
    ::g::Fuse::StyleProperty1* ret6;
    Button::NormalColorProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[0/*Fuse.StyleProperty<Fuse.iOS.Controls.Button, float4>*/], uCRef(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f)), uDelegate::New(::TYPES[1/*Uno.Action<Fuse.iOS.Controls.Button>*/], (void*)Button__OnButtonPropertyChanged_fn), &ret3), ret3);
    Button::HighlightedColorProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[0/*Fuse.StyleProperty<Fuse.iOS.Controls.Button, float4>*/], uCRef(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f)), uDelegate::New(::TYPES[1/*Uno.Action<Fuse.iOS.Controls.Button>*/], (void*)Button__OnButtonPropertyChanged_fn), &ret4), ret4);
    Button::DisabledColorProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[0/*Fuse.StyleProperty<Fuse.iOS.Controls.Button, float4>*/], uCRef(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f)), uDelegate::New(::TYPES[1/*Uno.Action<Fuse.iOS.Controls.Button>*/], (void*)Button__OnButtonPropertyChanged_fn), &ret5), ret5);
    Button::SelectedColorProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[0/*Fuse.StyleProperty<Fuse.iOS.Controls.Button, float4>*/], uCRef(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f)), uDelegate::New(::TYPES[1/*Uno.Action<Fuse.iOS.Controls.Button>*/], (void*)Button__OnButtonPropertyChanged_fn), &ret6), ret6);
}

//  ~Button() :138
static void Button__Finalize_fn(Button* __this)
{
    uStackFrame __("Fuse.iOS.Controls.Button", "Finalize()");

    if (::g::ObjC::ID::op_Inequality(::g::ObjC::Bindings::Object::op_Implicit(__this->_clickedEvent), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
        uPtr(__this->_clickedEvent)->Dispose();
}

::g::Fuse::iOS::Controls::Control_type* Button_typeof()
{
    static uSStrong< ::g::Fuse::iOS::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 64;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Button);
    options.TypeSize = sizeof(::g::Fuse::iOS::Controls::Control_type);
    type = (::g::Fuse::iOS::Controls::Control_type*)uClassType::New("Fuse.iOS.Controls.Button", options);
    type->SetBase(::g::Fuse::iOS::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Button_typeof()));
    type->fp_ctor_ = (void*)Button__New1_fn;
    type->fp_cctor_ = Button__cctor_1_fn;
    type->fp_Finalize = (void(*)(uObject*))Button__Finalize_fn;
    type->fp_Attach = (void(*)(::g::Fuse::iOS::Controls::Control*))Button__Attach_fn;
    type->fp_CreateInternal = (void(*)(::g::Fuse::iOS::Controls::Element*, ::g::iOS::UIKit::UIView**))Button__CreateInternal_fn;
    type->fp_Detach = (void(*)(::g::Fuse::iOS::Controls::Control*))Button__Detach_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseIChildObjectget_ParentObject_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::STRINGS[0] = uString::Const("");
    ::TYPES[0] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Button_typeof(), ::g::Uno::Float4_typeof());
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(Button_typeof());
    ::TYPES[2] = ::g::ObjC::Bindings::Object_typeof();
    ::TYPES[3] = ::g::Fuse::Controls::Button_typeof();
    ::TYPES[4] = ::g::Fuse::iOS::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Button_typeof());
    ::TYPES[5] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[6] = ::g::iOS::UIKit::UIControl_typeof();
    ::TYPES[7] = ::g::Uno::Action2_typeof()->MakeType(::g::iOS::Foundation::NSObject_typeof(), ::g::iOS::Foundation::NSObject_typeof());
    ::TYPES[8] = ::g::iOS::UIKit::UIView_typeof();
    ::TYPES[9] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::String_typeof());
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::iOS::Controls::Control_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::iOS::Controls::Control_type, interface1));
    type->SetFields(58,
        ::g::iOS::UIKit::UIButton_typeof(), offsetof(::g::Fuse::iOS::Controls::Button, _button), 0,
        ::g::Fuse::iOS::ControlEvent_typeof(), offsetof(::g::Fuse::iOS::Controls::Button, _clickedEvent), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Button_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::iOS::Controls::Button::DisabledColorProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Button_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::iOS::Controls::Button::HighlightedColorProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Button_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::iOS::Controls::Button::NormalColorProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Button_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::iOS::Controls::Button::SelectedColorProperty_, uFieldFlagsStatic);
    type->Reflection.SetFields(4,
        new uField("DisabledColorProperty", 60),
        new uField("HighlightedColorProperty", 61),
        new uField("NormalColorProperty", 62),
        new uField("SelectedColorProperty", 63));
    type->Reflection.SetFunctions(9,
        new uFunction("get_DisabledColor", NULL, (void*)Button__get_DisabledColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_DisabledColor", NULL, (void*)Button__set_DisabledColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_HighlightedColor", NULL, (void*)Button__get_HighlightedColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_HighlightedColor", NULL, (void*)Button__set_HighlightedColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction(".ctor", NULL, (void*)Button__New1_fn, 0, true, Button_typeof(), 0),
        new uFunction("get_NormalColor", NULL, (void*)Button__get_NormalColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_NormalColor", NULL, (void*)Button__set_NormalColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_SelectedColor", NULL, (void*)Button__get_SelectedColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_SelectedColor", NULL, (void*)Button__set_SelectedColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()));
    return type;
}

// public generated Button() :59
void Button__ctor_3_fn(Button* __this)
{
    __this->ctor_3();
}

// protected override sealed void Attach() :144
void Button__Attach_fn(Button* __this)
{
    uStackFrame __("Fuse.iOS.Controls.Button", "Attach()");
    __this->Create();
    uPtr((::g::Fuse::Controls::Button*)__this->SemanticControl())->add_TextChanged(uDelegate::New(::TYPES[5/*Uno.UX.ValueChangedHandler<string>*/], (void*)Button__OnTextChanged_fn, __this));
    __this->NormalText(uPtr((::g::Fuse::Controls::Button*)__this->SemanticControl())->Text());
}

// internal override sealed iOS.UIKit.UIView CreateInternal() :123
void Button__CreateInternal_fn(Button* __this, ::g::iOS::UIKit::UIView** __retval)
{
    uStackFrame __("Fuse.iOS.Controls.Button", "CreateInternal()");

    if (::g::ObjC::ID::op_Equality(::g::ObjC::Bindings::Object::op_Implicit(__this->_button), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
    {
        __this->_button = ::g::iOS::UIKit::UIButton::New12(::g::iOS::UIKit::UIButton::_buttonWithType(1));
        __this->_clickedEvent = ::g::Fuse::iOS::ControlEvent::AddHandler(__this->_button, uDelegate::New(::TYPES[7/*Uno.Action<iOS.Foundation.NSObject, iOS.Foundation.NSObject>*/], (void*)Button__OnClicked_fn, __this), 64);
    }

    return *__retval = __this->_button, void();
}

// protected override sealed void Detach() :151
void Button__Detach_fn(Button* __this)
{
    uStackFrame __("Fuse.iOS.Controls.Button", "Detach()");
    uPtr((::g::Fuse::Controls::Button*)__this->SemanticControl())->remove_TextChanged(uDelegate::New(::TYPES[5/*Uno.UX.ValueChangedHandler<string>*/], (void*)Button__OnTextChanged_fn, __this));
}

// public float4 get_DisabledColor() :75
void Button__get_DisabledColor_fn(Button* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->DisabledColor();
}

// public void set_DisabledColor(float4 value) :76
void Button__set_DisabledColor_fn(Button* __this, ::g::Uno::Float4* value)
{
    __this->DisabledColor(*value);
}

// public float4 get_HighlightedColor() :69
void Button__get_HighlightedColor_fn(Button* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->HighlightedColor();
}

// public void set_HighlightedColor(float4 value) :70
void Button__set_HighlightedColor_fn(Button* __this, ::g::Uno::Float4* value)
{
    __this->HighlightedColor(*value);
}

// public generated Button New() :59
void Button__New1_fn(Button** __retval)
{
    *__retval = Button::New1();
}

// public float4 get_NormalColor() :63
void Button__get_NormalColor_fn(Button* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->NormalColor();
}

// public void set_NormalColor(float4 value) :64
void Button__set_NormalColor_fn(Button* __this, ::g::Uno::Float4* value)
{
    __this->NormalColor(*value);
}

// private void set_NormalText(string value) :164
void Button__set_NormalText_fn(Button* __this, uString* value)
{
    __this->NormalText(value);
}

// protected static void OnButtonPropertyChanged(Fuse.iOS.Controls.Button t) :106
void Button__OnButtonPropertyChanged_fn(Button* t)
{
    Button::OnButtonPropertyChanged(t);
}

// private void OnClicked(iOS.Foundation.NSObject sender, iOS.Foundation.NSObject theEvent) :156
void Button__OnClicked_fn(Button* __this, ::g::iOS::Foundation::NSObject* sender, ::g::iOS::Foundation::NSObject* theEvent)
{
    __this->OnClicked(sender, theEvent);
}

// private void OnTextChanged(object sender, Uno.UX.ValueChangedArgs<string> args) :167
void Button__OnTextChanged_fn(Button* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnTextChanged(sender, args);
}

// public float4 get_SelectedColor() :81
void Button__get_SelectedColor_fn(Button* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->SelectedColor();
}

// public void set_SelectedColor(float4 value) :82
void Button__set_SelectedColor_fn(Button* __this, ::g::Uno::Float4* value)
{
    __this->SelectedColor(*value);
}

uSStrong< ::g::Fuse::StyleProperty1*> Button::DisabledColorProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Button::HighlightedColorProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Button::NormalColorProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Button::SelectedColorProperty_;

// public generated Button() [instance] :59
void Button::ctor_3()
{
    uStackFrame __("Fuse.iOS.Controls.Button", ".ctor()");
    ctor_2();
}

// public float4 get_DisabledColor() [instance] :75
::g::Uno::Float4 Button::DisabledColor()
{
    uStackFrame __("Fuse.iOS.Controls.Button", "get_DisabledColor()");
    ::g::Uno::Float4 ret12;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Button::DisabledColorProperty()), this, &ret12), ret12);
}

// public void set_DisabledColor(float4 value) [instance] :76
void Button::DisabledColor(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.iOS.Controls.Button", "set_DisabledColor(float4)");
    bool ret13;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Button::DisabledColorProperty()), this, uCRef(value), &ret13);
}

// public float4 get_HighlightedColor() [instance] :69
::g::Uno::Float4 Button::HighlightedColor()
{
    uStackFrame __("Fuse.iOS.Controls.Button", "get_HighlightedColor()");
    ::g::Uno::Float4 ret14;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Button::HighlightedColorProperty()), this, &ret14), ret14);
}

// public void set_HighlightedColor(float4 value) [instance] :70
void Button::HighlightedColor(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.iOS.Controls.Button", "set_HighlightedColor(float4)");
    bool ret15;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Button::HighlightedColorProperty()), this, uCRef(value), &ret15);
}

// public float4 get_NormalColor() [instance] :63
::g::Uno::Float4 Button::NormalColor()
{
    uStackFrame __("Fuse.iOS.Controls.Button", "get_NormalColor()");
    ::g::Uno::Float4 ret16;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Button::NormalColorProperty()), this, &ret16), ret16);
}

// public void set_NormalColor(float4 value) [instance] :64
void Button::NormalColor(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.iOS.Controls.Button", "set_NormalColor(float4)");
    bool ret17;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Button::NormalColorProperty()), this, uCRef(value), &ret17);
}

// private void set_NormalText(string value) [instance] :164
void Button::NormalText(uString* value)
{
    uStackFrame __("Fuse.iOS.Controls.Button", "set_NormalText(string)");
    uPtr(_button)->setTitleForState(value, 0);
}

// private void OnClicked(iOS.Foundation.NSObject sender, iOS.Foundation.NSObject theEvent) [instance] :156
void Button::OnClicked(::g::iOS::Foundation::NSObject* sender, ::g::iOS::Foundation::NSObject* theEvent)
{
}

// private void OnTextChanged(object sender, Uno.UX.ValueChangedArgs<string> args) [instance] :167
void Button::OnTextChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    uStackFrame __("Fuse.iOS.Controls.Button", "OnTextChanged(object,Uno.UX.ValueChangedArgs<string>)");
    uString* ind1;
    uString* ret11;

    if ((args == NULL) || (uPtr(args)->Origin() == this))
        return;

    NormalText((ind1 = (::g::Uno::UX::ValueChangedArgs__get_Value_fn(uPtr(args), &ret11), ret11), (ind1 != NULL) ? ind1 : ::STRINGS[0/*""*/]));
    InvalidateLayout(2);
}

// public float4 get_SelectedColor() [instance] :81
::g::Uno::Float4 Button::SelectedColor()
{
    uStackFrame __("Fuse.iOS.Controls.Button", "get_SelectedColor()");
    ::g::Uno::Float4 ret18;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Button::SelectedColorProperty()), this, &ret18), ret18);
}

// public void set_SelectedColor(float4 value) [instance] :82
void Button::SelectedColor(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.iOS.Controls.Button", "set_SelectedColor(float4)");
    bool ret19;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Button::SelectedColorProperty()), this, uCRef(value), &ret19);
}

// public generated Button New() [static] :59
Button* Button::New1()
{
    Button* obj2 = (Button*)uNew(Button_typeof());
    obj2->ctor_3();
    return obj2;
}

// protected static void OnButtonPropertyChanged(Fuse.iOS.Controls.Button t) [static] :106
void Button::OnButtonPropertyChanged(Button* t)
{
    uStackFrame __("Fuse.iOS.Controls.Button", "OnButtonPropertyChanged(Fuse.iOS.Controls.Button)");
    Button_typeof()->Init();
    bool ret7;
    bool ret8;
    bool ret9;
    bool ret10;
    uPtr(t)->Create();

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(Button::NormalColorProperty()), t, &ret7), ret7))
        uPtr(t->_button)->setTitleColorForState(::g::Fuse::iOS::iOSExtensions::ToUIColor(t->NormalColor()), 0);

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(Button::HighlightedColorProperty()), t, &ret8), ret8))
        uPtr(t->_button)->setTitleColorForState(::g::Fuse::iOS::iOSExtensions::ToUIColor(t->HighlightedColor()), 1);

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(Button::DisabledColorProperty()), t, &ret9), ret9))
        uPtr(t->_button)->setTitleColorForState(::g::Fuse::iOS::iOSExtensions::ToUIColor(t->DisabledColor()), 2);

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(Button::SelectedColorProperty()), t, &ret10), ret10))
        uPtr(t->_button)->setTitleColorForState(::g::Fuse::iOS::iOSExtensions::ToUIColor(t->SelectedColor()), 4);
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.27.14/Controls/$.uno#1
// ---------------------------------------------------------------

// public sealed extern class Circle :197
// {
::g::Fuse::iOS::Controls::Shape_type* Circle_typeof()
{
    static uSStrong< ::g::Fuse::iOS::Controls::Shape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 60;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Circle);
    options.TypeSize = sizeof(::g::Fuse::iOS::Controls::Shape_type);
    type = (::g::Fuse::iOS::Controls::Shape_type*)uClassType::New("Fuse.iOS.Controls.Circle", options);
    type->SetBase(::g::Fuse::iOS::Controls::Shape_typeof()->MakeType(::g::Fuse::Controls::Circle_typeof()));
    type->fp_ctor_ = (void*)Circle__New1_fn;
    type->fp_CreatePath = (void(*)(::g::Fuse::iOS::Controls::Shape*, ::g::iOS::UIKit::UIBezierPath**))Circle__CreatePath_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseIChildObjectget_ParentObject_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[10] = ::g::Uno::Float2_typeof();
    ::TYPES[11] = ::g::Fuse::iOS::Controls::Element_typeof();
    ::TYPES[12] = ::g::Fuse::Controls::Circle_typeof();
    ::TYPES[13] = ::g::Fuse::iOS::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Circle_typeof());
    ::TYPES[14] = ::g::Uno::Double_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::iOS::Controls::Shape_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::iOS::Controls::Shape_type, interface1));
    type->SetFields(60);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Circle__New1_fn, 0, true, Circle_typeof(), 0));
    return type;
}

// public generated Circle() :197
void Circle__ctor_4_fn(Circle* __this)
{
    __this->ctor_4();
}

// protected override sealed iOS.UIKit.UIBezierPath CreatePath() :199
void Circle__CreatePath_fn(Circle* __this, ::g::iOS::UIKit::UIBezierPath** __retval)
{
    uStackFrame __("Fuse.iOS.Controls.Circle", "CreatePath()");
    float mn = ::g::Uno::Math::Min1(__this->ActualSize().X, __this->ActualSize().Y) / 2.0f;
    bool angle = uPtr((::g::Fuse::Controls::Circle*)__this->SemanticControl())->UseAngle();
    float start = angle ? uPtr((::g::Fuse::Controls::Circle*)__this->SemanticControl())->StartAngle() : 0.0f;
    float end = angle ? uPtr((::g::Fuse::Controls::Circle*)__this->SemanticControl())->EffectiveEndAngle() : 6.28318548f;
    ::g::iOS::UIKit::UIBezierPath* path = ::g::iOS::UIKit::UIBezierPath::New5();
    path->init();
    float sx = ::g::Uno::Math::Cos1(start) * mn;
    float sy = ::g::Uno::Math::Sin1(start) * mn;

    if (angle)
    {
        uPtr(path)->moveToPoint(::g::Fuse::iOS::iOSExtensions::ToCGPoint(::g::Uno::Float2__op_Addition2(__this->Position(), ::g::Uno::Float2__op_Division1(__this->ActualSize(), 2.0f))));
        path->addLineToPoint(::g::Fuse::iOS::iOSExtensions::ToCGPoint(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2(__this->Position(), ::g::Uno::Float2__op_Division1(__this->ActualSize(), 2.0f)), ::g::Uno::Float2__New2(sx, sy))));
        path->addArcWithCenterRadiusStartAngleEndAngleClockwise(::g::Fuse::iOS::iOSExtensions::ToCGPoint(::g::Uno::Float2__op_Division1(__this->ActualSize(), 2.0f)), (double)mn, (double)start, (double)end, true);
        path->addLineToPoint(::g::Fuse::iOS::iOSExtensions::ToCGPoint(::g::Uno::Float2__op_Addition2(__this->Position(), ::g::Uno::Float2__op_Division1(__this->ActualSize(), 2.0f))));
    }
    else
    {
        uPtr(path)->moveToPoint(::g::Fuse::iOS::iOSExtensions::ToCGPoint(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2(__this->Position(), ::g::Uno::Float2__op_Division1(__this->ActualSize(), 2.0f)), ::g::Uno::Float2__New2(sx, sy))));
        path->addArcWithCenterRadiusStartAngleEndAngleClockwise(::g::Fuse::iOS::iOSExtensions::ToCGPoint(::g::Uno::Float2__op_Division1(__this->ActualSize(), 2.0f)), (double)mn, (double)start, (double)end, true);
    }

    path->closePath();
    return *__retval = path, void();
}

// public generated Circle New() :197
void Circle__New1_fn(Circle** __retval)
{
    *__retval = Circle::New1();
}

// public generated Circle() [instance] :197
void Circle::ctor_4()
{
    uStackFrame __("Fuse.iOS.Controls.Circle", ".ctor()");
    ctor_3();
}

// public generated Circle New() [static] :197
Circle* Circle::New1()
{
    Circle* obj1 = (Circle*)uNew(Circle_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.27.14/Controls/$.uno#2
// ---------------------------------------------------------------

// public abstract extern class Control<T> :243
// {
Control_type* Control_typeof()
{
    static uSStrong<Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 58;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Control);
    options.TypeSize = sizeof(Control_type);
    type = (Control_type*)uClassType::New("Fuse.iOS.Controls.Control`1", options);
    type->SetBase(::g::Fuse::iOS::Controls::Element_typeof());
    type->fp_Create = (void(*)(::g::Fuse::iOS::Controls::Element*, ::g::iOS::UIKit::UIView**))Control__Create_fn;
    type->fp_OnGotFocus = Control__OnGotFocus_fn;
    type->fp_OnLostFocus = Control__OnLostFocus_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Control__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Control__OnUnrooted_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseIChildObjectget_ParentObject_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::STRINGS[1] = uString::Const(" must be rooted in the subtree of a ");
    ::TYPES[2] = ::g::ObjC::Bindings::Object_typeof();
    ::TYPES[15] = ::g::Fuse::Node_typeof();
    ::TYPES[16] = uObject_typeof();
    ::TYPES[17] = ::g::Fuse::Input::Focus_typeof();
    ::TYPES[18] = ::g::Fuse::Input::FocusGainedHandler_typeof();
    ::TYPES[19] = ::g::Fuse::Input::FocusLostHandler_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(Control_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(Control_type, interface1));
    type->SetFields(56,
        type->T(0), offsetof(::g::Fuse::iOS::Controls::Control, _semanticControl), 0,
        ::g::iOS::UIKit::UIView_typeof(), offsetof(::g::Fuse::iOS::Controls::Control, _view), 0);
    return type;
}

// protected generated Control() :243
void Control__ctor_2_fn(Control* __this)
{
    __this->ctor_2();
}

// internal override sealed iOS.UIKit.UIView Create() :286
void Control__Create_fn(Control* __this, ::g::iOS::UIKit::UIView** __retval)
{
    uStackFrame __("Fuse.iOS.Controls.Control`1", "Create()");

    if (::g::ObjC::ID::op_Inequality(::g::ObjC::Bindings::Object::op_Implicit(__this->_view), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
        return *__retval = __this->_view, void();

    __this->_view = __this->CreateInternal();
    return *__retval = __this->_view, void();
}

// private T FindSemanticControl() :245
void Control__FindSemanticControl_fn(Control* __this, ::g::Fuse::Controls::Control** __retval)
{
    *__retval = __this->FindSemanticControl();
}

// protected virtual void OnGotFocus() :301
void Control__OnGotFocus_fn(Control* __this)
{
    uStackFrame __("Fuse.iOS.Controls.Control`1", "OnGotFocus()");

    if (::g::ObjC::ID::op_Inequality(::g::ObjC::Bindings::Object::op_Implicit(__this->_view), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
        uPtr(__this->_view)->becomeFirstResponder();
}

// private void OnGotFocus(object s, object a) :297
void Control__OnGotFocus1_fn(Control* __this, uObject* s, uObject* a)
{
    __this->OnGotFocus1(s, a);
}

// protected virtual void OnLostFocus() :307
void Control__OnLostFocus_fn(Control* __this)
{
    uStackFrame __("Fuse.iOS.Controls.Control`1", "OnLostFocus()");

    if (::g::ObjC::ID::op_Inequality(::g::ObjC::Bindings::Object::op_Implicit(__this->_view), ::g::ObjC::Bindings::Object::op_Implicit(NULL)) && uPtr(__this->_view)->isFirstResponder())
        uPtr(__this->_view)->resignFirstResponder();
}

// private void OnLostFocus(object s, object a) :299
void Control__OnLostFocus1_fn(Control* __this, uObject* s, uObject* a)
{
    __this->OnLostFocus1(s, a);
}

// protected override sealed void OnRooted() :259
void Control__OnRooted_fn(Control* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(Control_typeof())->T(0),
    };
    uStackFrame __("Fuse.iOS.Controls.Control`1", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_semanticControl = __this->FindSemanticControl();

    if (__this->_semanticControl == NULL)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(__this, ::STRINGS[1/*" must be ro...*/]), __types[0])));

    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this, uDelegate::New(::TYPES[18/*Fuse.Input.FocusGainedHandler*/], (void*)Control__OnGotFocus1_fn, __this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this, uDelegate::New(::TYPES[19/*Fuse.Input.FocusLostHandler*/], (void*)Control__OnLostFocus1_fn, __this));
    __this->Attach();
}

// protected override sealed void OnUnrooted() :273
void Control__OnUnrooted_fn(Control* __this)
{
    uStackFrame __("Fuse.iOS.Controls.Control`1", "OnUnrooted()");
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this, uDelegate::New(::TYPES[18/*Fuse.Input.FocusGainedHandler*/], (void*)Control__OnGotFocus1_fn, __this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this, uDelegate::New(::TYPES[19/*Fuse.Input.FocusLostHandler*/], (void*)Control__OnLostFocus1_fn, __this));
    __this->Detach();
    __this->_semanticControl = NULL;
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// protected T get_SemanticControl() :257
void Control__get_SemanticControl_fn(Control* __this, ::g::Fuse::Controls::Control** __retval)
{
    *__retval = __this->SemanticControl();
}

// protected generated Control() [instance] :243
void Control::ctor_2()
{
    uStackFrame __("Fuse.iOS.Controls.Control`1", ".ctor()");
    ctor_1();
}

// private T FindSemanticControl() [instance] :245
::g::Fuse::Controls::Control* Control::FindSemanticControl()
{
    uType* __types[] = {
        __type->GetBase(Control_typeof())->T(0),
    };
    uStackFrame __("Fuse.iOS.Controls.Control`1", "FindSemanticControl()");
    ::g::Fuse::Node* p = this;

    while (p != NULL)
    {
        if (uIs(p, __types[0]))
            return uCast< ::g::Fuse::Controls::Control*>(p, __types[0]);

        p = uPtr(p)->Parent();
    }

    return NULL;
}

// private void OnGotFocus(object s, object a) [instance] :297
void Control::OnGotFocus1(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.iOS.Controls.Control`1", "OnGotFocus(object,object)");
    OnGotFocus();
}

// private void OnLostFocus(object s, object a) [instance] :299
void Control::OnLostFocus1(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.iOS.Controls.Control`1", "OnLostFocus(object,object)");
    OnLostFocus();
}

// protected T get_SemanticControl() [instance] :257
::g::Fuse::Controls::Control* Control::SemanticControl()
{
    uStackFrame __("Fuse.iOS.Controls.Control`1", "get_SemanticControl()");
    return _semanticControl;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.27.14/Controls/$.uno#2
// ---------------------------------------------------------------

// public static class ControlProperties :315
// {
// static ControlProperties() :315
static void ControlProperties__cctor__fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret1;
    ControlProperties::TintColorProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[20/*Fuse.StyleProperty<Fuse.Controls.Control, float4>*/], uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f)), uDelegate::New(::TYPES[21/*Uno.Action<Fuse.Controls.Control>*/], (void*)ControlProperties__OnTintColorChanged_fn), &ret1), ret1);
}

uClassType* ControlProperties_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.Controls.ControlProperties", options);
    type->fp_cctor_ = ControlProperties__cctor__fn;
    ::TYPES[20] = ::g::Fuse::StyleProperty1_typeof()->MakeType(::g::Fuse::Controls::Control_typeof(), ::g::Uno::Float4_typeof());
    ::TYPES[21] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Controls::Control_typeof());
    ::TYPES[15] = ::g::Fuse::Node_typeof();
    type->SetFields(0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(::g::Fuse::Controls::Control_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::iOS::Controls::ControlProperties::TintColorProperty_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("TintColorProperty", 0));
    type->Reflection.SetFunctions(3,
        new uFunction("GetTintColor", NULL, (void*)ControlProperties__GetTintColor_fn, 0, true, ::g::Uno::Float4_typeof(), 1, ::g::Fuse::Controls::Control_typeof()),
        new uFunction("ResetTintColor", NULL, (void*)ControlProperties__ResetTintColor_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Controls::Control_typeof()),
        new uFunction("SetTintColor", NULL, (void*)ControlProperties__SetTintColor_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Controls::Control_typeof(), ::g::Uno::Float4_typeof()));
    return type;
}

// public static float4 GetTintColor(Fuse.Controls.Control p) :323
void ControlProperties__GetTintColor_fn(::g::Fuse::Controls::Control* p, ::g::Uno::Float4* __retval)
{
    *__retval = ControlProperties::GetTintColor(p);
}

// private static void OnTintColorChanged(Fuse.Controls.Control panel) :327
void ControlProperties__OnTintColorChanged_fn(::g::Fuse::Controls::Control* panel)
{
    ControlProperties::OnTintColorChanged(panel);
}

// public static void ResetTintColor(Fuse.Controls.Control p) :325
void ControlProperties__ResetTintColor_fn(::g::Fuse::Controls::Control* p)
{
    ControlProperties::ResetTintColor(p);
}

// public static void SetTintColor(Fuse.Controls.Control p, float4 value) :321
void ControlProperties__SetTintColor_fn(::g::Fuse::Controls::Control* p, ::g::Uno::Float4* value)
{
    ControlProperties::SetTintColor(p, *value);
}

uSStrong< ::g::Fuse::StyleProperty1*> ControlProperties::TintColorProperty_;

// public static float4 GetTintColor(Fuse.Controls.Control p) [static] :323
::g::Uno::Float4 ControlProperties::GetTintColor(::g::Fuse::Controls::Control* p)
{
    uStackFrame __("Fuse.iOS.Controls.ControlProperties", "GetTintColor(Fuse.Controls.Control)");
    ControlProperties_typeof()->Init();
    ::g::Uno::Float4 ret2;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(ControlProperties::TintColorProperty()), p, &ret2), ret2);
}

// private static void OnTintColorChanged(Fuse.Controls.Control panel) [static] :327
void ControlProperties::OnTintColorChanged(::g::Fuse::Controls::Control* panel)
{
    uStackFrame __("Fuse.iOS.Controls.ControlProperties", "OnTintColorChanged(Fuse.Controls.Control)");
    ControlProperties_typeof()->Init();
    ::g::Fuse::iOS::NativeViews::NativeView* nv = ::g::Fuse::iOS::NativeViews::NativeView::GetFrom(panel);

    if (nv != NULL)
        uPtr(nv)->OnTintColorChanged();
}

// public static void ResetTintColor(Fuse.Controls.Control p) [static] :325
void ControlProperties::ResetTintColor(::g::Fuse::Controls::Control* p)
{
    uStackFrame __("Fuse.iOS.Controls.ControlProperties", "ResetTintColor(Fuse.Controls.Control)");
    ControlProperties_typeof()->Init();
    bool ret3;
    ::g::Fuse::StyleProperty1__Reset_fn(uPtr(ControlProperties::TintColorProperty()), p, &ret3);
}

// public static void SetTintColor(Fuse.Controls.Control p, float4 value) [static] :321
void ControlProperties::SetTintColor(::g::Fuse::Controls::Control* p, ::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.iOS.Controls.ControlProperties", "SetTintColor(Fuse.Controls.Control,float4)");
    ControlProperties_typeof()->Init();
    bool ret4;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(ControlProperties::TintColorProperty()), p, uCRef(value), &ret4);
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.27.14/Controls/$.uno#3
// ---------------------------------------------------------------

// public abstract extern class Element :353
// {
Element_type* Element_typeof()
{
    static uSStrong<Element_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 56;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Element);
    options.TypeSize = sizeof(Element_type);
    type = (Element_type*)uClassType::New("Fuse.iOS.Controls.Element", options);
    type->SetBase(::g::Fuse::Node_typeof());
    type->fp_Create = Element__Create_fn;
    type->fp_GetMarginSize = (void(*)(::g::Fuse::Node*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))Element__GetMarginSize_fn;
    type->fp_get_HitTestLocalBounds = (void(*)(::g::Fuse::Node*, ::g::Fuse::NodeBounds**))Element__get_HitTestLocalBounds_fn;
    type->fp_get_LocalRenderBounds = (void(*)(::g::Fuse::Node*, ::g::Uno::Rect*))Element__get_LocalRenderBounds_fn;
    type->fp_OnArrangeMarginBox = (void(*)(::g::Fuse::Node*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))Element__OnArrangeMarginBox_fn;
    type->fp_OnHitTest = (void(*)(::g::Fuse::Node*, ::g::Fuse::HitTestContext*))Element__OnHitTest_fn;
    type->fp_PrependImplicitTransform = (void(*)(::g::Fuse::Node*, ::g::Fuse::FastMatrix*))Element__PrependImplicitTransform_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseIChildObjectget_ParentObject_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[15] = ::g::Fuse::Node_typeof();
    ::TYPES[22] = ::g::Fuse::Behavior_typeof();
    ::TYPES[23] = ::g::Fuse::iOS::NativeViews::NativeView_typeof();
    ::TYPES[24] = ::g::Uno::Bool_typeof();
    ::TYPES[10] = ::g::Uno::Float2_typeof();
    ::TYPES[25] = ::g::Fuse::LayoutParams_typeof();
    ::TYPES[26] = ::g::Uno::Action_typeof();
    ::TYPES[27] = ::g::Fuse::HitTestContext_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(Element_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(Element_type, interface1));
    type->SetFields(54,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::iOS::Controls::Element, _ActualSize), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::iOS::Controls::Element, _Position), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("IsPointInside", NULL, (void*)Element__IsPointInside_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Float2_typeof()));
    return type;
}

// public Element() :355
void Element__ctor_1_fn(Element* __this)
{
    __this->ctor_1();
}

// internal generated float2 get_ActualSize() :377
void Element__get_ActualSize_fn(Element* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ActualSize();
}

// protected generated void set_ActualSize(float2 value) :377
void Element__set_ActualSize_fn(Element* __this, ::g::Uno::Float2* value)
{
    __this->ActualSize(*value);
}

// internal virtual iOS.UIKit.UIView Create() :365
void Element__Create_fn(Element* __this, ::g::iOS::UIKit::UIView** __retval)
{
    uStackFrame __("Fuse.iOS.Controls.Element", "Create()");
    return *__retval = __this->CreateInternal(), void();
}

// public override float2 GetMarginSize(Fuse.LayoutParams lp) :372
void Element__GetMarginSize_fn(Element* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.iOS.Controls.Element", "GetMarginSize(Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    return *__retval = ::g::Fuse::iOS::iOSBindingView::GetContentSize(uPtr(__this->NativeView())->Handle(), lp_), void();
}

// protected override sealed Fuse.NodeBounds get_HitTestLocalBounds() :425
void Element__get_HitTestLocalBounds_fn(Element* __this, ::g::Fuse::NodeBounds** __retval)
{
    uStackFrame __("Fuse.iOS.Controls.Element", "get_HitTestLocalBounds()");
    return *__retval = ::g::Fuse::NodeBounds::Rect(::g::Uno::Float2__New1(0.0f), __this->ActualSize()), void();
}

// public bool IsPointInside(float2 localPoint) :407
void Element__IsPointInside_fn(Element* __this, ::g::Uno::Float2* localPoint, bool* __retval)
{
    *__retval = __this->IsPointInside(*localPoint);
}

// public override sealed Uno.Rect get_LocalRenderBounds() :414
void Element__get_LocalRenderBounds_fn(Element* __this, ::g::Uno::Rect* __retval)
{
    uStackFrame __("Fuse.iOS.Controls.Element", "get_LocalRenderBounds()");
    return *__retval = ::g::Uno::Rect__New2(::g::Uno::Float2__New1(0.0f), __this->ActualSize()), void();
}

// internal Fuse.iOS.NativeViews.NativeView get_NativeView() :362
void Element__get_NativeView_fn(Element* __this, ::g::Fuse::iOS::NativeViews::NativeView** __retval)
{
    *__retval = __this->NativeView();
}

// protected override float2 OnArrangeMarginBox(float2 position, Fuse.LayoutParams lp) :381
void Element__OnArrangeMarginBox_fn(Element* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.iOS.Controls.Element", "OnArrangeMarginBox(float2,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float2 position_ = *position;
    ::g::Uno::Float2 sz = lp_.Size();

    if (!lp_.HasSize())
    {
        ::g::Uno::Float2 rsz = __this->GetMarginSize(lp_);

        if (!lp_.HasX())
            sz.X = rsz.X;

        if (!lp_.HasY())
            sz.Y = rsz.Y;
    }

    __this->ActualSize(sz);
    __this->Position(position_);
    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[26/*Uno.Action*/], (void*)::g::Fuse::iOS::NativeViews::NativeView__NotifyNewTransform_fn, uPtr(__this->NativeView())), -1);
    return *__retval = __this->ActualSize(), void();
}

// protected override sealed void OnHitTest(Fuse.HitTestContext htc) :417
void Element__OnHitTest_fn(Element* __this, ::g::Fuse::HitTestContext* htc)
{
    uStackFrame __("Fuse.iOS.Controls.Element", "OnHitTest(Fuse.HitTestContext)");

    if (__this->IsPointInside(uPtr(htc)->LocalPoint()))
        uPtr(htc)->Hit(__this);
}

// internal generated float2 get_Position() :379
void Element__get_Position_fn(Element* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Position();
}

// protected generated void set_Position(float2 value) :379
void Element__set_Position_fn(Element* __this, ::g::Uno::Float2* value)
{
    __this->Position(*value);
}

// protected override sealed void PrependImplicitTransform(Fuse.FastMatrix m) :402
void Element__PrependImplicitTransform_fn(Element* __this, ::g::Fuse::FastMatrix* m)
{
    uStackFrame __("Fuse.iOS.Controls.Element", "PrependImplicitTransform(Fuse.FastMatrix)");
    uPtr(m)->PrependTranslation1(::g::Uno::Float3__New4(__this->Position(), 0.0f));
}

// public Element() [instance] :355
void Element::ctor_1()
{
    uStackFrame __("Fuse.iOS.Controls.Element", ".ctor()");
    ctor_();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[22/*Fuse.Behavior*/])), ::g::Fuse::iOS::NativeViews::LeafNativeView::New1());
}

// internal generated float2 get_ActualSize() [instance] :377
::g::Uno::Float2 Element::ActualSize()
{
    uStackFrame __("Fuse.iOS.Controls.Element", "get_ActualSize()");
    return _ActualSize;
}

// protected generated void set_ActualSize(float2 value) [instance] :377
void Element::ActualSize(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.iOS.Controls.Element", "set_ActualSize(float2)");
    _ActualSize = value;
}

// public bool IsPointInside(float2 localPoint) [instance] :407
bool Element::IsPointInside(::g::Uno::Float2 localPoint)
{
    uStackFrame __("Fuse.iOS.Controls.Element", "IsPointInside(float2)");
    return !((((localPoint.X < 0.0f) || (localPoint.Y < 0.0f)) || (localPoint.X > ActualSize().X)) || (localPoint.Y > ActualSize().Y));
}

// internal Fuse.iOS.NativeViews.NativeView get_NativeView() [instance] :362
::g::Fuse::iOS::NativeViews::NativeView* Element::NativeView()
{
    uStackFrame __("Fuse.iOS.Controls.Element", "get_NativeView()");
    return ::g::Fuse::iOS::NativeViews::NativeView::GetFrom(this);
}

// internal generated float2 get_Position() [instance] :379
::g::Uno::Float2 Element::Position()
{
    uStackFrame __("Fuse.iOS.Controls.Element", "get_Position()");
    return _Position;
}

// protected generated void set_Position(float2 value) [instance] :379
void Element::Position(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.iOS.Controls.Element", "set_Position(float2)");
    _Position = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.27.14/Controls/MapView/$.uno
// ---------------------------------------------------------------------

// internal sealed extern class FuseMapView :22
// {
::g::iOS::UIKit::UIView_type* FuseMapView_typeof()
{
    static uSStrong< ::g::iOS::UIKit::UIView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(FuseMapView);
    options.TypeSize = sizeof(::g::iOS::UIKit::UIView_type);
    type = (::g::iOS::UIKit::UIView_type*)uClassType::New("Fuse.iOS.Controls.FuseMapView", options);
    type->SetBase(::g::iOS::MapKit::MKMapView_typeof());
    type->fp_ctor_ = (void*)FuseMapView__New11_fn;
    type->interface1.fp_convertPointToCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGPoint*, uObject*, ::g::iOS::CoreGraphics::CGPoint*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertPointToCoordinateSpace_fn;
    type->interface1.fp_convertPointFromCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGPoint*, uObject*, ::g::iOS::CoreGraphics::CGPoint*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertPointFromCoordinateSpace_fn;
    type->interface1.fp_convertRectToCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*, uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertRectToCoordinateSpace_fn;
    type->interface1.fp_convertRectFromCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*, uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertRectFromCoordinateSpace_fn;
    type->interface1.fp_bounds = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__bounds_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::UIKit::UIView_type, interface0),
        ::g::iOS::UIKit::IUICoordinateSpace_typeof(), offsetof(::g::iOS::UIKit::UIView_type, interface1));
    type->SetFields(1);
    return type;
}

// public FuseMapView() :24
void FuseMapView__ctor_10_fn(FuseMapView* __this)
{
    __this->ctor_10();
}

// public FuseMapView New() :24
void FuseMapView__New11_fn(FuseMapView** __retval)
{
    *__retval = FuseMapView::New11();
}

// public FuseMapView() [instance] :24
void FuseMapView::ctor_10()
{
    uStackFrame __("Fuse.iOS.Controls.FuseMapView", ".ctor()");
    ctor_8();
}

// public FuseMapView New() [static] :24
FuseMapView* FuseMapView::New11()
{
    FuseMapView* obj1 = (FuseMapView*)uNew(FuseMapView_typeof());
    obj1->ctor_10();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.27.14/Controls/$.uno#4
// ---------------------------------------------------------------

// public sealed extern class Image :473
// {
::g::Fuse::iOS::Controls::Control_type* Image_typeof()
{
    static uSStrong< ::g::Fuse::iOS::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 61;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Image);
    options.TypeSize = sizeof(::g::Fuse::iOS::Controls::Control_type);
    type = (::g::Fuse::iOS::Controls::Control_type*)uClassType::New("Fuse.iOS.Controls.Image", options);
    type->SetBase(::g::Fuse::iOS::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Image_typeof()));
    type->fp_ctor_ = (void*)Image__New1_fn;
    type->fp_Attach = (void(*)(::g::Fuse::iOS::Controls::Control*))Image__Attach_fn;
    type->fp_CreateInternal = (void(*)(::g::Fuse::iOS::Controls::Element*, ::g::iOS::UIKit::UIView**))Image__CreateInternal_fn;
    type->fp_Detach = (void(*)(::g::Fuse::iOS::Controls::Control*))Image__Detach_fn;
    type->fp_GetMarginSize = (void(*)(::g::Fuse::Node*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))Image__GetMarginSize_fn;
    type->fp_OnArrangeMarginBox = (void(*)(::g::Fuse::Node*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))Image__OnArrangeMarginBox_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseIChildObjectget_ParentObject_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[28] = ::g::Fuse::Controls::Image_typeof();
    ::TYPES[29] = ::g::Fuse::iOS::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Image_typeof());
    ::TYPES[30] = ::g::Uno::EventHandler_typeof();
    ::TYPES[2] = ::g::ObjC::Bindings::Object_typeof();
    ::TYPES[8] = ::g::iOS::UIKit::UIView_typeof();
    ::TYPES[31] = ::g::Fuse::Internal::SizingContainer_typeof();
    ::TYPES[32] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[15] = ::g::Fuse::Node_typeof();
    ::TYPES[33] = ::g::iOS::UIKit::UIImageView_typeof();
    ::TYPES[34] = ::g::iOS::UIKit::UIImage_typeof();
    ::TYPES[35] = ::g::Uno::Float_typeof();
    ::TYPES[36] = ::g::iOS::CoreGraphics::CGSize_typeof();
    ::TYPES[25] = ::g::Fuse::LayoutParams_typeof();
    ::TYPES[37] = ::g::iOS::QuartzCore::CALayer_typeof();
    ::TYPES[14] = ::g::Uno::Double_typeof();
    ::TYPES[10] = ::g::Uno::Float2_typeof();
    ::TYPES[38] = ::g::Uno::Float4_typeof();
    ::TYPES[11] = ::g::Fuse::iOS::Controls::Element_typeof();
    ::TYPES[26] = ::g::Uno::Action_typeof();
    ::TYPES[39] = ::g::Fuse::Resources::FileImageSource_typeof();
    ::TYPES[40] = ::g::Fuse::Resources::HttpImageSource_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::iOS::Controls::Control_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::iOS::Controls::Control_type, interface1));
    type->SetFields(58,
        ::g::iOS::UIKit::UIControl_typeof(), offsetof(::g::Fuse::iOS::Controls::Image, _imageContainer), 0,
        ::g::iOS::UIKit::UIImageView_typeof(), offsetof(::g::Fuse::iOS::Controls::Image, _imageView), 0,
        ::g::Fuse::Internal::SizingContainer_typeof(), offsetof(::g::Fuse::iOS::Controls::Image, _sizing), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Image__New1_fn, 0, true, Image_typeof(), 0));
    return type;
}

// public generated Image() :473
void Image__ctor_3_fn(Image* __this)
{
    __this->ctor_3();
}

// protected override sealed void Attach() :499
void Image__Attach_fn(Image* __this)
{
    uStackFrame __("Fuse.iOS.Controls.Image", "Attach()");
    __this->Create();
    uPtr((::g::Fuse::Controls::Image*)__this->SemanticControl())->add_ParamChanged(uDelegate::New(::TYPES[30/*Uno.EventHandler*/], (void*)Image__OnParamChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Image*)__this->SemanticControl())->add_SourceChanged(uDelegate::New(::TYPES[30/*Uno.EventHandler*/], (void*)Image__OnSourceChanged_fn, __this));
    __this->OnParamChanged(NULL, NULL);
    __this->OnSourceChanged(NULL, NULL);
}

// internal override sealed iOS.UIKit.UIView CreateInternal() :482
void Image__CreateInternal_fn(Image* __this, ::g::iOS::UIKit::UIView** __retval)
{
    uStackFrame __("Fuse.iOS.Controls.Image", "CreateInternal()");

    if (::g::ObjC::ID::op_Equality(::g::ObjC::Bindings::Object::op_Implicit(__this->_imageView), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
    {
        __this->_imageView = ::g::iOS::UIKit::UIImageView::New9();
        uPtr(__this->_imageView)->init();
        __this->_imageContainer = ::g::iOS::UIKit::UIControl::New9();
        uPtr(__this->_imageContainer)->init();
        uPtr(__this->_imageContainer)->AutoresizesSubviews(false);
        uPtr(__this->_imageContainer)->setTranslatesAutoresizingMaskIntoConstraints(false);
        uPtr(__this->_imageContainer)->addSubview(__this->_imageView);
        uPtr(__this->_imageContainer)->ClipsToBounds(true);
    }

    return *__retval = __this->_imageContainer, void();
}

// protected override sealed void Detach() :508
void Image__Detach_fn(Image* __this)
{
    uStackFrame __("Fuse.iOS.Controls.Image", "Detach()");
    uPtr((::g::Fuse::Controls::Image*)__this->SemanticControl())->remove_ParamChanged(uDelegate::New(::TYPES[30/*Uno.EventHandler*/], (void*)Image__OnParamChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Image*)__this->SemanticControl())->remove_SourceChanged(uDelegate::New(::TYPES[30/*Uno.EventHandler*/], (void*)Image__OnSourceChanged_fn, __this));
}

// public override sealed float2 GetMarginSize(Fuse.LayoutParams lp) :565
void Image__GetMarginSize_fn(Image* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.iOS.Controls.Image", "GetMarginSize(Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    uPtr(__this->_sizing)->padding = uPtr((::g::Fuse::Controls::Image*)__this->SemanticControl())->Padding();
    uPtr(__this->_sizing)->snapToPixels = uPtr((::g::Fuse::Controls::Image*)__this->SemanticControl())->SnapToPixels();
    uPtr(__this->_sizing)->absoluteZoom = uPtr((::g::Fuse::Controls::Image*)__this->SemanticControl())->AbsoluteZoom();
    ::g::Uno::Float2 measuredSize = __this->GetSize();
    ::g::Uno::Float2 marginSize = uPtr(__this->_sizing)->ExpandFillSize(measuredSize, lp_);
    return *__retval = marginSize, void();
}

// private float2 GetSize() :555
void Image__GetSize_fn(Image* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetSize();
}

// private void Invalidate() :550
void Image__Invalidate_fn(Image* __this)
{
    __this->Invalidate();
}

// public generated Image New() :473
void Image__New1_fn(Image** __retval)
{
    *__retval = Image::New1();
}

// protected override sealed float2 OnArrangeMarginBox(float2 position, Fuse.LayoutParams lp) :577
void Image__OnArrangeMarginBox_fn(Image* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.iOS.Controls.Image", "OnArrangeMarginBox(float2,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    uPtr(__this->_sizing)->padding = uPtr((::g::Fuse::Controls::Image*)__this->SemanticControl())->Padding();
    uPtr(__this->_sizing)->snapToPixels = uPtr((::g::Fuse::Controls::Image*)__this->SemanticControl())->SnapToPixels();
    uPtr(__this->_sizing)->absoluteZoom = uPtr((::g::Fuse::Controls::Image*)__this->SemanticControl())->AbsoluteZoom();
    ::g::Uno::Float2 contentDesiredSize = __this->GetSize();
    ::g::Uno::Float2 scale = uPtr(__this->_sizing)->CalcScale(lp_.Size(), contentDesiredSize);
    ::g::Uno::Float2 origin = uPtr(__this->_sizing)->CalcOrigin(lp_.Size(), ::g::Uno::Float2__op_Multiply2(contentDesiredSize, scale));
    ::g::Uno::Float2 drawOrigin = origin;
    ::g::Uno::Float2 drawSize = ::g::Uno::Float2__op_Multiply2(contentDesiredSize, scale);
    ::g::Uno::Float4 uvClip = uPtr(__this->_sizing)->CalcClip(lp_.Size(), &drawOrigin, &drawSize);
    ::g::Fuse::iOS::Transform::ApplyIdentity(__this->_imageView);
    uPtr(uPtr(__this->_imageView)->Layer())->AnchorPoint(::g::iOS::CoreGraphics::CGPoint__New1(0.0, 0.0));
    uPtr(uPtr(__this->_imageView)->Layer())->Position(::g::iOS::CoreGraphics::CGPoint__New1(0.0, 0.0));
    uPtr(uPtr(__this->_imageView)->Layer())->Bounds(::g::iOS::CoreGraphics::CGRect__New1(::g::iOS::CoreGraphics::CGPoint__New1(0.0, 0.0), ::g::iOS::CoreGraphics::CGSize__New1((double)contentDesiredSize.X, (double)contentDesiredSize.Y)));
    ::g::Uno::Float2 transformOrigin = ::g::Uno::Float2__op_Subtraction2(origin, drawOrigin);
    ::g::Fuse::iOS::Transform::Apply(__this->_imageView, ::g::Uno::Matrix::Compose(::g::Uno::Float3__New4(scale, 0.0f), ::g::Uno::Float4__Identity(), ::g::Uno::Float3__New4(transformOrigin, 0.0f)));
    uPtr(__this->_imageView)->setNeedsDisplay();
    __this->Position(drawOrigin);
    __this->ActualSize(drawSize);
    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[26/*Uno.Action*/], (void*)::g::Fuse::iOS::NativeViews::NativeView__NotifyNewTransform_fn, uPtr(__this->NativeView())), -1);
    return *__retval = drawSize, void();
}

// private void OnParamChanged(object sender, Uno.EventArgs args) :514
void Image__OnParamChanged_fn(Image* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnParamChanged(sender, args);
}

// private void OnSourceChanged(object sender, Uno.EventArgs args) :525
void Image__OnSourceChanged_fn(Image* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnSourceChanged(sender, args);
}

// public generated Image() [instance] :473
void Image::ctor_3()
{
    uStackFrame __("Fuse.iOS.Controls.Image", ".ctor()");
    _sizing = ::g::Fuse::Internal::SizingContainer::New1();
    ctor_2();
}

// private float2 GetSize() [instance] :555
::g::Uno::Float2 Image::GetSize()
{
    uStackFrame __("Fuse.iOS.Controls.Image", "GetSize()");

    if (::g::ObjC::ID::op_Inequality(::g::ObjC::Bindings::Object::op_Implicit(_imageView), ::g::ObjC::Bindings::Object::op_Implicit(NULL)) && ::g::ObjC::ID::op_Inequality(::g::ObjC::Bindings::Object::op_Implicit(uPtr(_imageView)->Image()), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
    {
        ::g::iOS::CoreGraphics::CGSize size = uPtr(uPtr(_imageView)->Image())->Size();
        return ::g::Uno::Float2__New2((float)size.Width, (float)size.Height);
    }

    return ::g::Uno::Float2__New1(0.0f);
}

// private void Invalidate() [instance] :550
void Image::Invalidate()
{
    uStackFrame __("Fuse.iOS.Controls.Image", "Invalidate()");
    uPtr((::g::Fuse::Controls::Image*)SemanticControl())->InvalidateLayout(2);
}

// private void OnParamChanged(object sender, Uno.EventArgs args) [instance] :514
void Image::OnParamChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.iOS.Controls.Image", "OnParamChanged(object,Uno.EventArgs)");

    if (((uPtr(_sizing)->SetStretchMode(uPtr((::g::Fuse::Controls::Image*)SemanticControl())->StretchMode()) || uPtr(_sizing)->SetStretchDirection(uPtr((::g::Fuse::Controls::Image*)SemanticControl())->StretchDirection())) || uPtr(_sizing)->SetStretchSizing(uPtr((::g::Fuse::Controls::Image*)SemanticControl())->StretchSizing())) || uPtr(_sizing)->SetAlignment(uPtr((::g::Fuse::Controls::Image*)SemanticControl())->ContentAlignment()))
        Invalidate();
}

// private void OnSourceChanged(object sender, Uno.EventArgs args) [instance] :525
void Image::OnSourceChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.iOS.Controls.Image", "OnSourceChanged(object,Uno.EventArgs)");

    if (uPtr((::g::Fuse::Controls::Image*)SemanticControl())->Source() == NULL)
        return;

    ::g::Fuse::Resources::FileImageSource* fs = uAs< ::g::Fuse::Resources::FileImageSource*>(uPtr((::g::Fuse::Controls::Image*)SemanticControl())->Source(), ::TYPES[39/*Fuse.Resources.FileImageSource*/]);

    if (fs != NULL)
    {
        uPtr(_imageView)->Image(::g::Fuse::iOS::Controls::ImageCache::GetImage(uPtr(fs)->File()));
        uPtr(_imageView)->setNeedsDisplay();
        uPtr((::g::Fuse::Controls::Image*)SemanticControl())->InvalidateLayout(2);
    }

    ::g::Fuse::Resources::HttpImageSource* http = uAs< ::g::Fuse::Resources::HttpImageSource*>(uPtr((::g::Fuse::Controls::Image*)SemanticControl())->Source(), ::TYPES[40/*Fuse.Resources.HttpImageSource*/]);

    if (http != NULL)
    {
        ::g::iOS::Foundation::NSURL* nsurl = ::g::iOS::Foundation::NSURL::New5();
        nsurl->initWithString(uPtr(http)->Url());
        uPtr(_imageView)->Image(::g::iOS::UIKit::UIImage::_imageWithCIImage(::g::iOS::CoreImage::CIImage::_imageWithContentsOfURL(nsurl)));
        uPtr(_imageView)->setNeedsDisplay();
        uPtr((::g::Fuse::Controls::Image*)SemanticControl())->InvalidateLayout(2);
    }
}

// public generated Image New() [static] :473
Image* Image::New1()
{
    Image* obj1 = (Image*)uNew(Image_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.27.14/Controls/$.uno#4
// ---------------------------------------------------------------

// internal static extern class ImageCache :452
// {
// static ImageCache() :452
static void ImageCache__cctor__fn(uType* __type)
{
    ImageCache::_cache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[41/*Uno.Collections.Dictionary<Uno.UX.FileSource, iOS.UIKit.UIImage>*/]));
}

uClassType* ImageCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.Controls.ImageCache", options);
    type->fp_cctor_ = ImageCache__cctor__fn;
    ::STRINGS[2] = uString::Const("/tempImage");
    ::TYPES[41] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), ::g::iOS::UIKit::UIImage_typeof());
    ::TYPES[24] = ::g::Uno::Bool_typeof();
    ::TYPES[16] = uObject_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), ::g::iOS::UIKit::UIImage_typeof()), (uintptr_t)&::g::Fuse::iOS::Controls::ImageCache::_cache_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::iOS::Controls::ImageCache::_tempCount_, uFieldFlagsStatic);
    return type;
}

// public static iOS.UIKit.UIImage GetImage(Uno.UX.FileSource fileSource) :458
void ImageCache__GetImage_fn(::g::Uno::UX::FileSource* fileSource, ::g::iOS::UIKit::UIImage** __retval)
{
    *__retval = ImageCache::GetImage(fileSource);
}

uSStrong< ::g::Uno::Collections::Dictionary*> ImageCache::_cache_;
int ImageCache::_tempCount_;

// public static iOS.UIKit.UIImage GetImage(Uno.UX.FileSource fileSource) [static] :458
::g::iOS::UIKit::UIImage* ImageCache::GetImage(::g::Uno::UX::FileSource* fileSource)
{
    uStackFrame __("Fuse.iOS.Controls.ImageCache", "GetImage(Uno.UX.FileSource)");
    ImageCache_typeof()->Init();
    bool ret1;
    ::g::iOS::UIKit::UIImage* ret2;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(ImageCache::_cache()), fileSource, &ret1), ret1))
    {
        uArray* data = uPtr(fileSource)->ReadAllBytes();
        uString* path = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::IO::Directory::GetUserDirectory(1), ::STRINGS[2/*"/tempImage"*/]), uBox<int>(::TYPES[51/*int*/], ImageCache::_tempCount()++));
        ::g::Uno::IO::File::WriteAllBytes(path, data);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ImageCache::_cache()), fileSource, ::g::iOS::UIKit::UIImage::_imageWithContentsOfFile(path));
    }

    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(ImageCache::_cache()), fileSource, &ret2), ret2);
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.27.14/Controls/$.uno#10
// ----------------------------------------------------------------

// internal abstract extern interface ITextInputImpl :1372
// {
uInterfaceType* ITextInputImpl_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.iOS.Controls.ITextInputImpl", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.27.14/Controls/MapView/$.uno
// ---------------------------------------------------------------------

// internal sealed extern class MapViewController :30
// {
::g::iOS::UIKit::UIViewController_type* MapViewController_typeof()
{
    static uSStrong< ::g::iOS::UIKit::UIViewController_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(MapViewController);
    options.TypeSize = sizeof(::g::iOS::UIKit::UIViewController_type);
    type = (::g::iOS::UIKit::UIViewController_type*)uClassType::New("Fuse.iOS.Controls.MapViewController", options);
    type->SetBase(::g::iOS::UIKit::UIViewController_typeof());
    type->fp_loadView = (void(*)(::g::iOS::UIKit::UIViewController*))MapViewController__loadView_fn;
    type->fp_viewDidAppear = (void(*)(::g::iOS::UIKit::UIViewController*, bool*))MapViewController__viewDidAppear_fn;
    type->interface1.fp_preferredContentSizeDidChangeForChildContentContainer = (void(*)(uObject*, uObject*))::g::iOS::UIKit::UIViewController__iOSUIKitIUIContentContainerpreferredContentSizeDidChangeForChildContentContainer_fn;
    type->interface1.fp_systemLayoutFittingSizeDidChangeForChildContentContainer = (void(*)(uObject*, uObject*))::g::iOS::UIKit::UIViewController__iOSUIKitIUIContentContainersystemLayoutFittingSizeDidChangeForChildContentContainer_fn;
    type->interface1.fp_sizeForChildContentContainerWithParentContainerSize = (void(*)(uObject*, uObject*, ::g::iOS::CoreGraphics::CGSize*, ::g::iOS::CoreGraphics::CGSize*))::g::iOS::UIKit::UIViewController__iOSUIKitIUIContentContainersizeForChildContentContainerWithParentContainerSize_fn;
    type->interface1.fp_viewWillTransitionToSizeWithTransitionCoordinator = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGSize*, uObject*))::g::iOS::UIKit::UIViewController__iOSUIKitIUIContentContainerviewWillTransitionToSizeWithTransitionCoordinator_fn;
    type->interface1.fp_willTransitionToTraitCollectionWithTransitionCoordinator = (void(*)(uObject*, ::g::iOS::UIKit::UITraitCollection*, uObject*))::g::iOS::UIKit::UIViewController__iOSUIKitIUIContentContainerwillTransitionToTraitCollectionWithTransitionCoordinator_fn;
    type->interface1.fp_preferredContentSize = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGSize*))::g::iOS::UIKit::UIViewController__preferredContentSize_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    ::TYPES[42] = ::g::iOS::UIKit::UIViewController_typeof();
    ::TYPES[8] = ::g::iOS::UIKit::UIView_typeof();
    ::TYPES[43] = ::g::Uno::Delegate_typeof();
    ::TYPES[26] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::UIKit::UIViewController_type, interface0),
        ::g::iOS::UIKit::IUIContentContainer_typeof(), offsetof(::g::iOS::UIKit::UIViewController_type, interface1));
    type->SetFields(1,
        ::g::Fuse::iOS::Controls::FuseMapView_typeof(), offsetof(::g::Fuse::iOS::Controls::MapViewController, _map), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::iOS::Controls::MapViewController, _onMapAppeared), 0);
    return type;
}

// public MapViewController(Uno.Action onMapAppeared) :35
void MapViewController__ctor_8_fn(MapViewController* __this, uDelegate* onMapAppeared)
{
    __this->ctor_8(onMapAppeared);
}

// public override sealed void loadView() :41
void MapViewController__loadView_fn(MapViewController* __this)
{
    uStackFrame __("Fuse.iOS.Controls.MapViewController", "loadView()");
    __this->_map = ::g::Fuse::iOS::Controls::FuseMapView::New11();
    uPtr(__this->_map)->init();
    __this->View(__this->_map);
}

// public MapViewController New(Uno.Action onMapAppeared) :35
void MapViewController__New9_fn(uDelegate* onMapAppeared, MapViewController** __retval)
{
    *__retval = MapViewController::New9(onMapAppeared);
}

// public override sealed void viewDidAppear(bool animated) :48
void MapViewController__viewDidAppear_fn(MapViewController* __this, bool* animated)
{
    uStackFrame __("Fuse.iOS.Controls.MapViewController", "viewDidAppear(bool)");

    if (::g::Uno::Delegate::op_Inequality(__this->_onMapAppeared, NULL))
        uPtr(__this->_onMapAppeared)->InvokeVoid();
}

// public MapViewController(Uno.Action onMapAppeared) [instance] :35
void MapViewController::ctor_8(uDelegate* onMapAppeared)
{
    uStackFrame __("Fuse.iOS.Controls.MapViewController", ".ctor(Uno.Action)");
    ctor_6();
    init();
    _onMapAppeared = onMapAppeared;
}

// public MapViewController New(Uno.Action onMapAppeared) [static] :35
MapViewController* MapViewController::New9(uDelegate* onMapAppeared)
{
    MapViewController* obj1 = (MapViewController*)uNew(MapViewController_typeof());
    obj1->ctor_8(onMapAppeared);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.27.14/Controls/$.uno#10
// ----------------------------------------------------------------

// internal sealed extern class MultilineTextInput :1506
// {
MultilineTextInput_type* MultilineTextInput_typeof()
{
    static uSStrong<MultilineTextInput_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(MultilineTextInput);
    options.TypeSize = sizeof(MultilineTextInput_type);
    type = (MultilineTextInput_type*)uClassType::New("Fuse.iOS.Controls.MultilineTextInput", options);
    type->fp_ctor_ = (void*)MultilineTextInput__New1_fn;
    type->interface1.fp_textViewDidChange = (void(*)(uObject*, ::g::iOS::UIKit::UITextView*))MultilineTextInput__iOSUIKitIUITextViewDelegatetextViewDidChange_fn;
    type->interface1.fp_scrollViewDidScroll = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))MultilineTextInput__iOSUIKitIUITextViewDelegatescrollViewDidScroll_fn;
    type->interface1.fp_scrollViewDidZoom = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))MultilineTextInput__iOSUIKitIUITextViewDelegatescrollViewDidZoom_fn;
    type->interface1.fp_scrollViewWillBeginDragging = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))MultilineTextInput__iOSUIKitIUITextViewDelegatescrollViewWillBeginDragging_fn;
    type->interface1.fp_scrollViewDidEndDraggingWillDecelerate = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*, bool*))MultilineTextInput__iOSUIKitIUITextViewDelegatescrollViewDidEndDraggingWillDecelerate_fn;
    type->interface1.fp_scrollViewWillBeginDecelerating = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))MultilineTextInput__iOSUIKitIUITextViewDelegatescrollViewWillBeginDecelerating_fn;
    type->interface1.fp_scrollViewDidEndDecelerating = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))MultilineTextInput__iOSUIKitIUITextViewDelegatescrollViewDidEndDecelerating_fn;
    type->interface1.fp_scrollViewDidEndScrollingAnimation = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))MultilineTextInput__iOSUIKitIUITextViewDelegatescrollViewDidEndScrollingAnimation_fn;
    type->interface1.fp_viewForZoomingInScrollView = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*, ::g::iOS::UIKit::UIView**))MultilineTextInput__iOSUIKitIUITextViewDelegateviewForZoomingInScrollView_fn;
    type->interface1.fp_scrollViewWillBeginZoomingWithView = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*, ::g::iOS::UIKit::UIView*))MultilineTextInput__iOSUIKitIUITextViewDelegatescrollViewWillBeginZoomingWithView_fn;
    type->interface1.fp_scrollViewDidEndZoomingWithViewAtScale = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*, ::g::iOS::UIKit::UIView*, double*))MultilineTextInput__iOSUIKitIUITextViewDelegatescrollViewDidEndZoomingWithViewAtScale_fn;
    type->interface1.fp_scrollViewShouldScrollToTop = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*, bool*))MultilineTextInput__iOSUIKitIUITextViewDelegatescrollViewShouldScrollToTop_fn;
    type->interface1.fp_scrollViewDidScrollToTop = (void(*)(uObject*, ::g::iOS::UIKit::UIScrollView*))MultilineTextInput__iOSUIKitIUITextViewDelegatescrollViewDidScrollToTop_fn;
    type->interface1.fp_textViewShouldBeginEditing = (void(*)(uObject*, ::g::iOS::UIKit::UITextView*, bool*))MultilineTextInput__iOSUIKitIUITextViewDelegatetextViewShouldBeginEditing_fn;
    type->interface1.fp_textViewShouldEndEditing = (void(*)(uObject*, ::g::iOS::UIKit::UITextView*, bool*))MultilineTextInput__iOSUIKitIUITextViewDelegatetextViewShouldEndEditing_fn;
    type->interface1.fp_textViewDidBeginEditing = (void(*)(uObject*, ::g::iOS::UIKit::UITextView*))MultilineTextInput__iOSUIKitIUITextViewDelegatetextViewDidBeginEditing_fn;
    type->interface1.fp_textViewDidEndEditing = (void(*)(uObject*, ::g::iOS::UIKit::UITextView*))MultilineTextInput__iOSUIKitIUITextViewDelegatetextViewDidEndEditing_fn;
    type->interface1.fp_textViewShouldChangeTextInRangeReplacementText = (void(*)(uObject*, ::g::iOS::UIKit::UITextView*, ::g::iOS::Foundation::_NSRange*, uString*, bool*))MultilineTextInput__iOSUIKitIUITextViewDelegatetextViewShouldChangeTextInRangeReplacementText_fn;
    type->interface1.fp_textViewDidChangeSelection = (void(*)(uObject*, ::g::iOS::UIKit::UITextView*))MultilineTextInput__iOSUIKitIUITextViewDelegatetextViewDidChangeSelection_fn;
    type->interface1.fp_textViewShouldInteractWithURLInRange = (void(*)(uObject*, ::g::iOS::UIKit::UITextView*, ::g::iOS::Foundation::NSURL*, ::g::iOS::Foundation::_NSRange*, bool*))MultilineTextInput__iOSUIKitIUITextViewDelegatetextViewShouldInteractWithURLInRange_fn;
    type->interface1.fp_textViewShouldInteractWithTextAttachmentInRange = (void(*)(uObject*, ::g::iOS::UIKit::UITextView*, ::g::iOS::UIKit::NSTextAttachment*, ::g::iOS::Foundation::_NSRange*, bool*))MultilineTextInput__iOSUIKitIUITextViewDelegatetextViewShouldInteractWithTextAttachmentInRange_fn;
    type->interface0.fp_get_LineCount = (void(*)(uObject*, int*))MultilineTextInput__FuseiOSControlsITextInputImplget_LineCount_fn;
    type->interface0.fp_get_Frame = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*))MultilineTextInput__FuseiOSControlsITextInputImplget_Frame_fn;
    type->interface0.fp_set_Frame = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*))MultilineTextInput__FuseiOSControlsITextInputImplset_Frame_fn;
    type->interface0.fp_get_View = (void(*)(uObject*, ::g::iOS::UIKit::UIView**))MultilineTextInput__FuseiOSControlsITextInputImplget_View_fn;
    type->interface0.fp_get_SemanticControl = (void(*)(uObject*, ::g::Fuse::Controls::TextEdit**))MultilineTextInput__FuseiOSControlsITextInputImplget_SemanticControl_fn;
    type->interface0.fp_set_SemanticControl = (void(*)(uObject*, ::g::Fuse::Controls::TextEdit*))MultilineTextInput__FuseiOSControlsITextInputImplset_SemanticControl_fn;
    type->interface0.fp_get_IUITextInput = (void(*)(uObject*, uObject**))MultilineTextInput__FuseiOSControlsITextInputImplget_IUITextInput_fn;
    type->interface0.fp_set_TextColor = (void(*)(uObject*, ::g::iOS::UIKit::UIColor*))MultilineTextInput__FuseiOSControlsITextInputImplset_TextColor_fn;
    type->interface0.fp_set_CaretColor = (void(*)(uObject*, ::g::iOS::UIKit::UIColor*))MultilineTextInput__FuseiOSControlsITextInputImplset_CaretColor_fn;
    type->interface0.fp_set_TextAlignment = (void(*)(uObject*, int*))MultilineTextInput__FuseiOSControlsITextInputImplset_TextAlignment_fn;
    type->interface0.fp_get_Font = (void(*)(uObject*, ::g::iOS::UIKit::UIFont**))MultilineTextInput__FuseiOSControlsITextInputImplget_Font_fn;
    type->interface0.fp_set_Font = (void(*)(uObject*, ::g::iOS::UIKit::UIFont*))MultilineTextInput__FuseiOSControlsITextInputImplset_Font_fn;
    type->interface0.fp_get_Text = (void(*)(uObject*, uString**))MultilineTextInput__FuseiOSControlsITextInputImplget_Text_fn;
    type->interface0.fp_set_Text = (void(*)(uObject*, uString*))MultilineTextInput__FuseiOSControlsITextInputImplset_Text_fn;
    type->interface0.fp_set_PlaceholderText = (void(*)(uObject*, uString*))MultilineTextInput__FuseiOSControlsITextInputImplset_PlaceholderText_fn;
    type->interface0.fp_set_PlaceholderColor = (void(*)(uObject*, ::g::iOS::UIKit::UIColor*))MultilineTextInput__FuseiOSControlsITextInputImplset_PlaceholderColor_fn;
    type->interface0.fp_add_TextChanged = (void(*)(uObject*, uDelegate*))MultilineTextInput__add_TextChanged_fn;
    type->interface0.fp_remove_TextChanged = (void(*)(uObject*, uDelegate*))MultilineTextInput__remove_TextChanged_fn;
    ::STRINGS[0] = uString::Const("");
    ::TYPES[24] = ::g::Uno::Bool_typeof();
    ::TYPES[43] = ::g::Uno::Delegate_typeof();
    ::TYPES[30] = ::g::Uno::EventHandler_typeof();
    ::TYPES[16] = uObject_typeof();
    ::TYPES[44] = ::g::Uno::EventArgs_typeof();
    ::TYPES[45] = ::g::iOS::UIKit::UITextView_typeof();
    ::TYPES[46] = ::g::iOS::UIKit::UILabel_typeof();
    ::TYPES[8] = ::g::iOS::UIKit::UIView_typeof();
    ::TYPES[47] = ::g::iOS::UIKit::UIScrollView_typeof();
    ::TYPES[48] = ::g::iOS::UIKit::IUITextInput_typeof();
    ::TYPES[36] = ::g::iOS::CoreGraphics::CGSize_typeof();
    ::TYPES[49] = ::g::iOS::CoreGraphics::CGRect_typeof();
    ::TYPES[50] = ::g::iOS::UIKit::UIEdgeInsets_typeof();
    ::TYPES[51] = ::g::Uno::Int_typeof();
    ::TYPES[52] = ::g::iOS::UIKit::UIFont_typeof();
    ::TYPES[2] = ::g::ObjC::Bindings::Object_typeof();
    ::TYPES[53] = ::g::iOS::UIKit::IUITextViewDelegate_typeof();
    type->SetInterfaces(
        ::g::Fuse::iOS::Controls::ITextInputImpl_typeof(), offsetof(MultilineTextInput_type, interface0),
        ::g::iOS::UIKit::IUITextViewDelegate_typeof(), offsetof(MultilineTextInput_type, interface1),
        ::g::iOS::UIKit::IUIScrollViewDelegate_typeof(), offsetof(MultilineTextInput_type, interface2));
    type->SetFields(0,
        ::g::iOS::UIKit::UILabel_typeof(), offsetof(::g::Fuse::iOS::Controls::MultilineTextInput, _placeholderLabel), 0,
        ::g::iOS::UIKit::UITextView_typeof(), offsetof(::g::Fuse::iOS::Controls::MultilineTextInput, _textView), 0,
        ::g::Fuse::Controls::TextEdit_typeof(), offsetof(::g::Fuse::iOS::Controls::MultilineTextInput, _SemanticControl), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::iOS::Controls::MultilineTextInput, TextChanged1), 0);
    return type;
}

// public generated MultilineTextInput() :1506
void MultilineTextInput__ctor__fn(MultilineTextInput* __this)
{
    __this->ctor_();
}

// private void Fuse.iOS.Controls.ITextInputImpl.set_CaretColor(iOS.UIKit.UIColor value) :1600
void MultilineTextInput__FuseiOSControlsITextInputImplset_CaretColor_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIColor* value)
{
    uStackFrame __("Fuse.iOS.Controls.MultilineTextInput", "Fuse.iOS.Controls.ITextInputImpl.set_CaretColor(iOS.UIKit.UIColor)");
    uPtr(__this->TextView())->TintColor(value);
}

// private iOS.UIKit.UIFont Fuse.iOS.Controls.ITextInputImpl.get_Font() :1614
void MultilineTextInput__FuseiOSControlsITextInputImplget_Font_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIFont** __retval)
{
    uStackFrame __("Fuse.iOS.Controls.MultilineTextInput", "Fuse.iOS.Controls.ITextInputImpl.get_Font()");
    return *__retval = uPtr(__this->TextView())->Font(), void();
}

// private void Fuse.iOS.Controls.ITextInputImpl.set_Font(iOS.UIKit.UIFont value) :1615
void MultilineTextInput__FuseiOSControlsITextInputImplset_Font_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIFont* value)
{
    uStackFrame __("Fuse.iOS.Controls.MultilineTextInput", "Fuse.iOS.Controls.ITextInputImpl.set_Font(iOS.UIKit.UIFont)");
    uPtr(__this->TextView())->Font(value);
    uPtr(__this->_placeholderLabel)->Font(value);
}

// private iOS.CoreGraphics.CGRect Fuse.iOS.Controls.ITextInputImpl.get_Frame() :1566
void MultilineTextInput__FuseiOSControlsITextInputImplget_Frame_fn(MultilineTextInput* __this, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    uStackFrame __("Fuse.iOS.Controls.MultilineTextInput", "Fuse.iOS.Controls.ITextInputImpl.get_Frame()");
    return *__retval = uPtr(__this->TextView())->Frame(), void();
}

// private void Fuse.iOS.Controls.ITextInputImpl.set_Frame(iOS.CoreGraphics.CGRect value) :1567
void MultilineTextInput__FuseiOSControlsITextInputImplset_Frame_fn(MultilineTextInput* __this, ::g::iOS::CoreGraphics::CGRect* value)
{
    uStackFrame __("Fuse.iOS.Controls.MultilineTextInput", "Fuse.iOS.Controls.ITextInputImpl.set_Frame(iOS.CoreGraphics.CGRect)");
    ::g::iOS::CoreGraphics::CGRect value_ = *value;
    int lineCount = __this->LineCount();

    if (lineCount == 1)
        uPtr(__this->TextView())->ScrollEnabled(false);

    uPtr(__this->TextView())->Frame(value_);

    if (lineCount == 1)
        uPtr(__this->TextView())->ScrollEnabled(true);
}

// private iOS.UIKit.IUITextInput Fuse.iOS.Controls.ITextInputImpl.get_IUITextInput() :1590
void MultilineTextInput__FuseiOSControlsITextInputImplget_IUITextInput_fn(MultilineTextInput* __this, uObject** __retval)
{
    uStackFrame __("Fuse.iOS.Controls.MultilineTextInput", "Fuse.iOS.Controls.ITextInputImpl.get_IUITextInput()");
    return *__retval = (uObject*)__this->TextView(), void();
}

// private int Fuse.iOS.Controls.ITextInputImpl.get_LineCount() :1552
void MultilineTextInput__FuseiOSControlsITextInputImplget_LineCount_fn(MultilineTextInput* __this, int* __retval)
{
    uStackFrame __("Fuse.iOS.Controls.MultilineTextInput", "Fuse.iOS.Controls.ITextInputImpl.get_LineCount()");
    return *__retval = __this->LineCount(), void();
}

// private void Fuse.iOS.Controls.ITextInputImpl.set_PlaceholderColor(iOS.UIKit.UIColor value) :1644
void MultilineTextInput__FuseiOSControlsITextInputImplset_PlaceholderColor_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIColor* value)
{
    uStackFrame __("Fuse.iOS.Controls.MultilineTextInput", "Fuse.iOS.Controls.ITextInputImpl.set_PlaceholderColor(iOS.UIKit.UIColor)");
    uPtr(__this->_placeholderLabel)->TextColor(value);
}

// private void Fuse.iOS.Controls.ITextInputImpl.set_PlaceholderText(string value) :1635
void MultilineTextInput__FuseiOSControlsITextInputImplset_PlaceholderText_fn(MultilineTextInput* __this, uString* value)
{
    uStackFrame __("Fuse.iOS.Controls.MultilineTextInput", "Fuse.iOS.Controls.ITextInputImpl.set_PlaceholderText(string)");
    uPtr(__this->_placeholderLabel)->Text((value != NULL) ? value : ::STRINGS[0/*""*/]);
    __this->UpdatePlaceholder();
}

// private generated Fuse.Controls.TextEdit Fuse.iOS.Controls.ITextInputImpl.get_SemanticControl() :1586
void MultilineTextInput__FuseiOSControlsITextInputImplget_SemanticControl_fn(MultilineTextInput* __this, ::g::Fuse::Controls::TextEdit** __retval)
{
    uStackFrame __("Fuse.iOS.Controls.MultilineTextInput", "Fuse.iOS.Controls.ITextInputImpl.get_SemanticControl()");
    return *__retval = __this->_SemanticControl, void();
}

// private generated void Fuse.iOS.Controls.ITextInputImpl.set_SemanticControl(Fuse.Controls.TextEdit value) :1586
void MultilineTextInput__FuseiOSControlsITextInputImplset_SemanticControl_fn(MultilineTextInput* __this, ::g::Fuse::Controls::TextEdit* value)
{
    uStackFrame __("Fuse.iOS.Controls.MultilineTextInput", "Fuse.iOS.Controls.ITextInputImpl.set_SemanticControl(Fuse.Controls.TextEdit)");
    __this->_SemanticControl = value;
}

// private string Fuse.iOS.Controls.ITextInputImpl.get_Text() :1624
void MultilineTextInput__FuseiOSControlsITextInputImplget_Text_fn(MultilineTextInput* __this, uString** __retval)
{
    uStackFrame __("Fuse.iOS.Controls.MultilineTextInput", "Fuse.iOS.Controls.ITextInputImpl.get_Text()");
    uString* ind1 = uPtr(__this->TextView())->Text();
    return *__retval = (ind1 != NULL) ? ind1 : ::STRINGS[0/*""*/], void();
}

// private void Fuse.iOS.Controls.ITextInputImpl.set_Text(string value) :1625
void MultilineTextInput__FuseiOSControlsITextInputImplset_Text_fn(MultilineTextInput* __this, uString* value)
{
    uStackFrame __("Fuse.iOS.Controls.MultilineTextInput", "Fuse.iOS.Controls.ITextInputImpl.set_Text(string)");
    uPtr(__this->TextView())->ScrollEnabled(false);
    uPtr(__this->TextView())->Text((value != NULL) ? value : ::STRINGS[0/*""*/]);
    uPtr(__this->TextView())->ScrollEnabled(true);
}

// private void Fuse.iOS.Controls.ITextInputImpl.set_TextAlignment(iOS.UIKit.NSTextAlignment value) :1605
void MultilineTextInput__FuseiOSControlsITextInputImplset_TextAlignment_fn(MultilineTextInput* __this, int* value)
{
    uStackFrame __("Fuse.iOS.Controls.MultilineTextInput", "Fuse.iOS.Controls.ITextInputImpl.set_TextAlignment(iOS.UIKit.NSTextAlignment)");
    int value_ = *value;
    uPtr(__this->TextView())->TextAlignment(value_);
    uPtr(__this->_placeholderLabel)->TextAlignment(value_);
}

// private void Fuse.iOS.Controls.ITextInputImpl.set_TextColor(iOS.UIKit.UIColor value) :1595
void MultilineTextInput__FuseiOSControlsITextInputImplset_TextColor_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIColor* value)
{
    uStackFrame __("Fuse.iOS.Controls.MultilineTextInput", "Fuse.iOS.Controls.ITextInputImpl.set_TextColor(iOS.UIKit.UIColor)");
    uPtr(__this->TextView())->TextColor(value);
}

// private iOS.UIKit.UIView Fuse.iOS.Controls.ITextInputImpl.get_View() :1583
void MultilineTextInput__FuseiOSControlsITextInputImplget_View_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIView** __retval)
{
    uStackFrame __("Fuse.iOS.Controls.MultilineTextInput", "Fuse.iOS.Controls.ITextInputImpl.get_View()");
    return *__retval = __this->TextView(), void();
}

// private void iOS.UIKit.IUITextViewDelegate.scrollViewDidEndDecelerating(iOS.UIKit.UIScrollView scrollView) :1688
void MultilineTextInput__iOSUIKitIUITextViewDelegatescrollViewDidEndDecelerating_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIScrollView* scrollView)
{
}

// private void iOS.UIKit.IUITextViewDelegate.scrollViewDidEndDraggingWillDecelerate(iOS.UIKit.UIScrollView scrollView, bool decelerate) :1684
void MultilineTextInput__iOSUIKitIUITextViewDelegatescrollViewDidEndDraggingWillDecelerate_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIScrollView* scrollView, bool* decelerate)
{
}

// private void iOS.UIKit.IUITextViewDelegate.scrollViewDidEndScrollingAnimation(iOS.UIKit.UIScrollView scrollView) :1690
void MultilineTextInput__iOSUIKitIUITextViewDelegatescrollViewDidEndScrollingAnimation_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIScrollView* scrollView)
{
}

// private void iOS.UIKit.IUITextViewDelegate.scrollViewDidEndZoomingWithViewAtScale(iOS.UIKit.UIScrollView scrollView, iOS.UIKit.UIView view, double scale) :1696
void MultilineTextInput__iOSUIKitIUITextViewDelegatescrollViewDidEndZoomingWithViewAtScale_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIScrollView* scrollView, ::g::iOS::UIKit::UIView* view, double* scale)
{
}

// private void iOS.UIKit.IUITextViewDelegate.scrollViewDidScroll(iOS.UIKit.UIScrollView scrollView) :1672
void MultilineTextInput__iOSUIKitIUITextViewDelegatescrollViewDidScroll_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIScrollView* scrollView)
{
    uStackFrame __("Fuse.iOS.Controls.MultilineTextInput", "iOS.UIKit.IUITextViewDelegate.scrollViewDidScroll(iOS.UIKit.UIScrollView)");

    if (!__this->IsScrollable())
        uPtr(scrollView)->setContentOffsetAnimated(::g::iOS::CoreGraphics::CGPoint__New1(0.0, 0.0), false);
}

// private void iOS.UIKit.IUITextViewDelegate.scrollViewDidScrollToTop(iOS.UIKit.UIScrollView scrollView) :1700
void MultilineTextInput__iOSUIKitIUITextViewDelegatescrollViewDidScrollToTop_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIScrollView* scrollView)
{
}

// private void iOS.UIKit.IUITextViewDelegate.scrollViewDidZoom(iOS.UIKit.UIScrollView scrollView) :1680
void MultilineTextInput__iOSUIKitIUITextViewDelegatescrollViewDidZoom_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIScrollView* scrollView)
{
}

// private bool iOS.UIKit.IUITextViewDelegate.scrollViewShouldScrollToTop(iOS.UIKit.UIScrollView scrollView) :1698
void MultilineTextInput__iOSUIKitIUITextViewDelegatescrollViewShouldScrollToTop_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIScrollView* scrollView, bool* __retval)
{
    uStackFrame __("Fuse.iOS.Controls.MultilineTextInput", "iOS.UIKit.IUITextViewDelegate.scrollViewShouldScrollToTop(iOS.UIKit.UIScrollView)");
    return *__retval = true, void();
}

// private void iOS.UIKit.IUITextViewDelegate.scrollViewWillBeginDecelerating(iOS.UIKit.UIScrollView scrollView) :1686
void MultilineTextInput__iOSUIKitIUITextViewDelegatescrollViewWillBeginDecelerating_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIScrollView* scrollView)
{
}

// private void iOS.UIKit.IUITextViewDelegate.scrollViewWillBeginDragging(iOS.UIKit.UIScrollView scrollView) :1682
void MultilineTextInput__iOSUIKitIUITextViewDelegatescrollViewWillBeginDragging_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIScrollView* scrollView)
{
}

// private void iOS.UIKit.IUITextViewDelegate.scrollViewWillBeginZoomingWithView(iOS.UIKit.UIScrollView scrollView, iOS.UIKit.UIView view) :1694
void MultilineTextInput__iOSUIKitIUITextViewDelegatescrollViewWillBeginZoomingWithView_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIScrollView* scrollView, ::g::iOS::UIKit::UIView* view)
{
}

// private void iOS.UIKit.IUITextViewDelegate.textViewDidBeginEditing(iOS.UIKit.UITextView textView) :1706
void MultilineTextInput__iOSUIKitIUITextViewDelegatetextViewDidBeginEditing_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UITextView* textView)
{
}

// private void iOS.UIKit.IUITextViewDelegate.textViewDidChange(iOS.UIKit.UITextView textView) :1664
void MultilineTextInput__iOSUIKitIUITextViewDelegatetextViewDidChange_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UITextView* textView)
{
    uStackFrame __("Fuse.iOS.Controls.MultilineTextInput", "iOS.UIKit.IUITextViewDelegate.textViewDidChange(iOS.UIKit.UITextView)");
    __this->UpdatePlaceholder();

    if (::g::Uno::Delegate::op_Inequality(__this->TextChanged1, NULL))
        uPtr(__this->TextChanged1)->Invoke(2, __this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void iOS.UIKit.IUITextViewDelegate.textViewDidChangeSelection(iOS.UIKit.UITextView textView) :1712
void MultilineTextInput__iOSUIKitIUITextViewDelegatetextViewDidChangeSelection_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UITextView* textView)
{
}

// private void iOS.UIKit.IUITextViewDelegate.textViewDidEndEditing(iOS.UIKit.UITextView textView) :1708
void MultilineTextInput__iOSUIKitIUITextViewDelegatetextViewDidEndEditing_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UITextView* textView)
{
}

// private bool iOS.UIKit.IUITextViewDelegate.textViewShouldBeginEditing(iOS.UIKit.UITextView textView) :1702
void MultilineTextInput__iOSUIKitIUITextViewDelegatetextViewShouldBeginEditing_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UITextView* textView, bool* __retval)
{
    uStackFrame __("Fuse.iOS.Controls.MultilineTextInput", "iOS.UIKit.IUITextViewDelegate.textViewShouldBeginEditing(iOS.UIKit.UITextView)");
    return *__retval = true, void();
}

// private bool iOS.UIKit.IUITextViewDelegate.textViewShouldChangeTextInRangeReplacementText(iOS.UIKit.UITextView textView, iOS.Foundation._NSRange range, string text) :1710
void MultilineTextInput__iOSUIKitIUITextViewDelegatetextViewShouldChangeTextInRangeReplacementText_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UITextView* textView, ::g::iOS::Foundation::_NSRange* range, uString* text, bool* __retval)
{
    uStackFrame __("Fuse.iOS.Controls.MultilineTextInput", "iOS.UIKit.IUITextViewDelegate.textViewShouldChangeTextInRangeReplacementText(iOS.UIKit.UITextView,iOS.Foundation._NSRange,string)");
    return *__retval = true, void();
}

// private bool iOS.UIKit.IUITextViewDelegate.textViewShouldEndEditing(iOS.UIKit.UITextView textView) :1704
void MultilineTextInput__iOSUIKitIUITextViewDelegatetextViewShouldEndEditing_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UITextView* textView, bool* __retval)
{
    uStackFrame __("Fuse.iOS.Controls.MultilineTextInput", "iOS.UIKit.IUITextViewDelegate.textViewShouldEndEditing(iOS.UIKit.UITextView)");
    return *__retval = true, void();
}

// private bool iOS.UIKit.IUITextViewDelegate.textViewShouldInteractWithTextAttachmentInRange(iOS.UIKit.UITextView textView, iOS.UIKit.NSTextAttachment textAttachment, iOS.Foundation._NSRange characterRange) :1716
void MultilineTextInput__iOSUIKitIUITextViewDelegatetextViewShouldInteractWithTextAttachmentInRange_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UITextView* textView, ::g::iOS::UIKit::NSTextAttachment* textAttachment, ::g::iOS::Foundation::_NSRange* characterRange, bool* __retval)
{
    uStackFrame __("Fuse.iOS.Controls.MultilineTextInput", "iOS.UIKit.IUITextViewDelegate.textViewShouldInteractWithTextAttachmentInRange(iOS.UIKit.UITextView,iOS.UIKit.NSTextAttachment,iOS.Foundation._NSRange)");
    return *__retval = true, void();
}

// private bool iOS.UIKit.IUITextViewDelegate.textViewShouldInteractWithURLInRange(iOS.UIKit.UITextView textView, iOS.Foundation.NSURL URL, iOS.Foundation._NSRange characterRange) :1714
void MultilineTextInput__iOSUIKitIUITextViewDelegatetextViewShouldInteractWithURLInRange_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UITextView* textView, ::g::iOS::Foundation::NSURL* URL, ::g::iOS::Foundation::_NSRange* characterRange, bool* __retval)
{
    uStackFrame __("Fuse.iOS.Controls.MultilineTextInput", "iOS.UIKit.IUITextViewDelegate.textViewShouldInteractWithURLInRange(iOS.UIKit.UITextView,iOS.Foundation.NSURL,iOS.Foundation._NSRange)");
    return *__retval = true, void();
}

// private iOS.UIKit.UIView iOS.UIKit.IUITextViewDelegate.viewForZoomingInScrollView(iOS.UIKit.UIScrollView scrollView) :1692
void MultilineTextInput__iOSUIKitIUITextViewDelegateviewForZoomingInScrollView_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UIScrollView* scrollView, ::g::iOS::UIKit::UIView** __retval)
{
    uStackFrame __("Fuse.iOS.Controls.MultilineTextInput", "iOS.UIKit.IUITextViewDelegate.viewForZoomingInScrollView(iOS.UIKit.UIScrollView)");
    return *__retval = NULL, void();
}

// private bool get_IsScrollable() :1556
void MultilineTextInput__get_IsScrollable_fn(MultilineTextInput* __this, bool* __retval)
{
    *__retval = __this->IsScrollable();
}

// private int get_LineCount() :1540
void MultilineTextInput__get_LineCount_fn(MultilineTextInput* __this, int* __retval)
{
    *__retval = __this->LineCount();
}

// public generated MultilineTextInput New() :1506
void MultilineTextInput__New1_fn(MultilineTextInput** __retval)
{
    *__retval = MultilineTextInput::New1();
}

// public generated void add_TextChanged(Uno.EventHandler value) :1650
void MultilineTextInput__add_TextChanged_fn(MultilineTextInput* __this, uDelegate* value)
{
    __this->add_TextChanged(value);
}

// public generated void remove_TextChanged(Uno.EventHandler value) :1650
void MultilineTextInput__remove_TextChanged_fn(MultilineTextInput* __this, uDelegate* value)
{
    __this->remove_TextChanged(value);
}

// private iOS.UIKit.UITextView get_TextView() :1513
void MultilineTextInput__get_TextView_fn(MultilineTextInput* __this, ::g::iOS::UIKit::UITextView** __retval)
{
    *__retval = __this->TextView();
}

// private void UpdatePlaceholder() :1652
void MultilineTextInput__UpdatePlaceholder_fn(MultilineTextInput* __this)
{
    __this->UpdatePlaceholder();
}

// public generated MultilineTextInput() [instance] :1506
void MultilineTextInput::ctor_()
{
}

// private bool get_IsScrollable() [instance] :1556
bool MultilineTextInput::IsScrollable()
{
    uStackFrame __("Fuse.iOS.Controls.MultilineTextInput", "get_IsScrollable()");
    double frameHeight = ::g::Uno::Math::Ceil(uPtr(TextView())->Frame().Size.Height);
    double contentHeight = ::g::Uno::Math::Ceil(uPtr(TextView())->ContentSize().Height);
    return frameHeight < contentHeight;
}

// private int get_LineCount() [instance] :1540
int MultilineTextInput::LineCount()
{
    uStackFrame __("Fuse.iOS.Controls.MultilineTextInput", "get_LineCount()");
    double height = (uPtr(TextView())->ContentSize().Height - uPtr(TextView())->TextContainerInset().Top) - uPtr(TextView())->TextContainerInset().Bottom;
    int lineCount = (int)(height / uPtr(uPtr(TextView())->Font())->LineHeight());
    return (lineCount > 0) ? lineCount : 1;
}

// public generated void add_TextChanged(Uno.EventHandler value) [instance] :1650
void MultilineTextInput::add_TextChanged(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.MultilineTextInput", "add_TextChanged(Uno.EventHandler)");
    TextChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(TextChanged1, value), ::TYPES[30/*Uno.EventHandler*/]);
}

// public generated void remove_TextChanged(Uno.EventHandler value) [instance] :1650
void MultilineTextInput::remove_TextChanged(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.MultilineTextInput", "remove_TextChanged(Uno.EventHandler)");
    TextChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(TextChanged1, value), ::TYPES[30/*Uno.EventHandler*/]);
}

// private iOS.UIKit.UITextView get_TextView() [instance] :1513
::g::iOS::UIKit::UITextView* MultilineTextInput::TextView()
{
    uStackFrame __("Fuse.iOS.Controls.MultilineTextInput", "get_TextView()");

    if (::g::ObjC::ID::op_Equality(::g::ObjC::Bindings::Object::op_Implicit(_textView), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
    {
        _textView = ::g::iOS::UIKit::UITextView::New11();
        uPtr(_textView)->init();
        uPtr(_textView)->BackgroundColor(::g::Fuse::iOS::iOSExtensions::ToUIColor(::g::Uno::Float4__New1(0.0f)));
        uPtr(_textView)->ClipsToBounds(true);
        uPtr(_textView)->Opaque(false);
        uPtr(_textView)->TextContainerInset(::g::iOS::UIKit::UIEdgeInsets__New1(0.0, -4.0, 0.0, 0.0));
        uPtr(_textView)->Delegate1((uObject*)this);
        _placeholderLabel = ::g::iOS::UIKit::UILabel::New9();
        uPtr(_placeholderLabel)->init();
        uPtr(_placeholderLabel)->LineBreakMode(0);
        uPtr(_placeholderLabel)->NumberOfLines(0);
        uPtr(_placeholderLabel)->BackgroundColor(::g::iOS::UIKit::UIColor::_clearColor());
        uPtr(_placeholderLabel)->TextColor(::g::iOS::UIKit::UIColor::_lightGrayColor());
        uPtr(_placeholderLabel)->Alpha(1.0);
        uPtr(_textView)->addSubview(_placeholderLabel);
    }

    return _textView;
}

// private void UpdatePlaceholder() [instance] :1652
void MultilineTextInput::UpdatePlaceholder()
{
    uStackFrame __("Fuse.iOS.Controls.MultilineTextInput", "UpdatePlaceholder()");

    if (::g::Uno::String::IsNullOrEmpty(uPtr(TextView())->Text()) && !::g::Uno::String::IsNullOrEmpty(uPtr(_placeholderLabel)->Text()))
    {
        uPtr(_placeholderLabel)->sizeToFit();
        uPtr(_placeholderLabel)->Alpha(1.0);
    }
    else
        uPtr(_placeholderLabel)->Alpha(0.0);
}

// public generated MultilineTextInput New() [static] :1506
MultilineTextInput* MultilineTextInput::New1()
{
    MultilineTextInput* obj2 = (MultilineTextInput*)uNew(MultilineTextInput_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.27.14/Controls/$.uno#5
// ---------------------------------------------------------------

// public sealed extern class Rectangle :662
// {
::g::Fuse::iOS::Controls::Shape_type* Rectangle_typeof()
{
    static uSStrong< ::g::Fuse::iOS::Controls::Shape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 60;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Rectangle);
    options.TypeSize = sizeof(::g::Fuse::iOS::Controls::Shape_type);
    type = (::g::Fuse::iOS::Controls::Shape_type*)uClassType::New("Fuse.iOS.Controls.Rectangle", options);
    type->SetBase(::g::Fuse::iOS::Controls::Shape_typeof()->MakeType(::g::Fuse::Controls::Rectangle_typeof()));
    type->fp_ctor_ = (void*)Rectangle__New1_fn;
    type->fp_CreatePath = (void(*)(::g::Fuse::iOS::Controls::Shape*, ::g::iOS::UIKit::UIBezierPath**))Rectangle__CreatePath_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseIChildObjectget_ParentObject_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[11] = ::g::Fuse::iOS::Controls::Element_typeof();
    ::TYPES[14] = ::g::Uno::Double_typeof();
    ::TYPES[54] = ::g::Fuse::Controls::Rectangle_typeof();
    ::TYPES[55] = ::g::Fuse::iOS::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Rectangle_typeof());
    ::TYPES[10] = ::g::Uno::Float2_typeof();
    ::TYPES[38] = ::g::Uno::Float4_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::iOS::Controls::Shape_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::iOS::Controls::Shape_type, interface1));
    type->SetFields(60);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Rectangle__New1_fn, 0, true, Rectangle_typeof(), 0));
    return type;
}

// public generated Rectangle() :662
void Rectangle__ctor_4_fn(Rectangle* __this)
{
    __this->ctor_4();
}

// private void AddArcWithCenter(iOS.UIKit.UIBezierPath path, float2 center, float radius, float startAngle, float endAngle) :696
void Rectangle__AddArcWithCenter_fn(Rectangle* __this, ::g::iOS::UIKit::UIBezierPath* path, ::g::Uno::Float2* center, float* radius, float* startAngle, float* endAngle)
{
    __this->AddArcWithCenter(path, *center, *radius, *startAngle, *endAngle);
}

// private void AddLineToPoint(iOS.UIKit.UIBezierPath path, float2 point) :691
void Rectangle__AddLineToPoint_fn(Rectangle* __this, ::g::iOS::UIKit::UIBezierPath* path, ::g::Uno::Float2* point)
{
    __this->AddLineToPoint(path, *point);
}

// protected override sealed iOS.UIKit.UIBezierPath CreatePath() :664
void Rectangle__CreatePath_fn(Rectangle* __this, ::g::iOS::UIKit::UIBezierPath** __retval)
{
    uStackFrame __("Fuse.iOS.Controls.Rectangle", "CreatePath()");
    ::g::Uno::Float4 cr = uPtr((::g::Fuse::Controls::Rectangle*)__this->SemanticControl())->CornerRadius();
    float mn = ::g::Uno::Math::Min1(__this->ActualSize().X, __this->ActualSize().Y) / 2.0f;

    for (int i = 0; i < 4; ++i)
        cr.Item(i, ::g::Uno::Math::Min1(mn, cr.Item(i)));

    ::g::iOS::UIKit::UIBezierPath* path = ::g::iOS::UIKit::UIBezierPath::New5();
    path->init();
    path->moveToPoint(::g::Fuse::iOS::iOSExtensions::ToCGPoint(::g::Uno::Float2__New2(__this->Position().X + cr.Item(0), __this->Position().Y)));
    __this->AddLineToPoint(path, ::g::Uno::Float2__New2(__this->ActualSize().X - cr.Item(1), 0.0f));
    __this->AddArcWithCenter(path, ::g::Uno::Float2__New2(__this->ActualSize().X - cr.Item(1), cr.Item(1)), cr.Item(1), -1.57079637f, 0.0f);
    __this->AddLineToPoint(path, ::g::Uno::Float2__New2(__this->ActualSize().X, __this->ActualSize().Y - cr.Item(2)));
    __this->AddArcWithCenter(path, ::g::Uno::Float2__New2(__this->ActualSize().X - cr.Item(2), __this->ActualSize().Y - cr.Item(2)), cr.Item(2), 0.0f, 1.57079637f);
    __this->AddLineToPoint(path, ::g::Uno::Float2__New2(cr.Item(3), __this->ActualSize().Y));
    __this->AddArcWithCenter(path, ::g::Uno::Float2__New2(cr.Item(3), __this->ActualSize().Y - cr.Item(3)), cr.Item(3), 1.57079637f, 3.14159274f);
    __this->AddLineToPoint(path, ::g::Uno::Float2__New2(0.0f, cr.Item(0)));
    __this->AddArcWithCenter(path, ::g::Uno::Float2__New2(cr.Item(0), cr.Item(0)), cr.Item(0), -3.14159274f, -1.57079637f);
    path->closePath();
    return *__retval = path, void();
}

// public generated Rectangle New() :662
void Rectangle__New1_fn(Rectangle** __retval)
{
    *__retval = Rectangle::New1();
}

// public generated Rectangle() [instance] :662
void Rectangle::ctor_4()
{
    uStackFrame __("Fuse.iOS.Controls.Rectangle", ".ctor()");
    ctor_3();
}

// private void AddArcWithCenter(iOS.UIKit.UIBezierPath path, float2 center, float radius, float startAngle, float endAngle) [instance] :696
void Rectangle::AddArcWithCenter(::g::iOS::UIKit::UIBezierPath* path, ::g::Uno::Float2 center, float radius, float startAngle, float endAngle)
{
    uStackFrame __("Fuse.iOS.Controls.Rectangle", "AddArcWithCenter(iOS.UIKit.UIBezierPath,float2,float,float,float)");
    uPtr(path)->addArcWithCenterRadiusStartAngleEndAngleClockwise(::g::Fuse::iOS::iOSExtensions::ToCGPoint(::g::Uno::Float2__op_Addition2(Position(), center)), (double)radius, (double)startAngle, (double)endAngle, true);
}

// private void AddLineToPoint(iOS.UIKit.UIBezierPath path, float2 point) [instance] :691
void Rectangle::AddLineToPoint(::g::iOS::UIKit::UIBezierPath* path, ::g::Uno::Float2 point)
{
    uStackFrame __("Fuse.iOS.Controls.Rectangle", "AddLineToPoint(iOS.UIKit.UIBezierPath,float2)");
    uPtr(path)->addLineToPoint(::g::Fuse::iOS::iOSExtensions::ToCGPoint(::g::Uno::Float2__op_Addition2(Position(), point)));
}

// public generated Rectangle New() [static] :662
Rectangle* Rectangle::New1()
{
    Rectangle* obj1 = (Rectangle*)uNew(Rectangle_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.27.14/Controls/$.uno#6
// ---------------------------------------------------------------

// public abstract extern class Shape<T> :725
// {
Shape_type* Shape_typeof()
{
    static uSStrong<Shape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 60;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(Shape);
    options.TypeSize = sizeof(Shape_type);
    type = (Shape_type*)uClassType::New("Fuse.iOS.Controls.Shape`1", options);
    type->SetBase(::g::Fuse::iOS::Controls::Control_typeof()->MakeType(type->T(0)));
    type->fp_Attach = (void(*)(::g::Fuse::iOS::Controls::Control*))Shape__Attach_fn;
    type->fp_CreateInternal = (void(*)(::g::Fuse::iOS::Controls::Element*, ::g::iOS::UIKit::UIView**))Shape__CreateInternal_fn;
    type->fp_Detach = (void(*)(::g::Fuse::iOS::Controls::Control*))Shape__Detach_fn;
    type->fp_OnArrangeMarginBox = (void(*)(::g::Fuse::Node*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))Shape__OnArrangeMarginBox_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseIChildObjectget_ParentObject_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::STRINGS[3] = uString::Const("shape brush");
    ::STRINGS[4] = uString::Const("/usr/local/share/uno/Packages/Fuse.iOS/0.27.14/Controls/$.uno#6");
    ::STRINGS[5] = uString::Const("SetLayerBrush");
    ::TYPES[56] = ::g::Fuse::Controls::Shape_typeof();
    ::TYPES[57] = ::g::Fuse::iOS::Controls::Control_typeof();
    ::TYPES[26] = ::g::Uno::Action_typeof();
    ::TYPES[2] = ::g::ObjC::Bindings::Object_typeof();
    ::TYPES[8] = ::g::iOS::UIKit::UIView_typeof();
    ::TYPES[58] = ::g::Uno::Collections::List_typeof()->MakeType(::g::iOS::QuartzCore::CAShapeLayer_typeof());
    ::TYPES[37] = ::g::iOS::QuartzCore::CALayer_typeof();
    ::TYPES[59] = ::g::iOS::UIKit::UIBezierPath_typeof();
    ::TYPES[60] = ::g::Fuse::Drawing::Stroke_typeof();
    ::TYPES[14] = ::g::Uno::Double_typeof();
    ::TYPES[61] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[62] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[16] = uObject_typeof();
    ::TYPES[63] = ::g::iOS::UIKit::UIColor_typeof();
    type->SetPrecalc(
        ::TYPES[57/*Fuse.iOS.Controls.Control`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(Shape_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(Shape_type, interface1));
    type->SetFields(58,
        ::g::iOS::UIKit::UIControl_typeof(), offsetof(::g::Fuse::iOS::Controls::Shape, _control), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::iOS::QuartzCore::CAShapeLayer_typeof()), offsetof(::g::Fuse::iOS::Controls::Shape, _layers), 0);
    return type;
}

// protected generated Shape() :725
void Shape__ctor_3_fn(Shape* __this)
{
    __this->ctor_3();
}

// protected override sealed void Attach() :758
void Shape__Attach_fn(Shape* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(Shape_typeof())->Precalced(0/*Fuse.iOS.Controls.Control<T>*/),
        __this->__type->GetBase(Shape_typeof())->T(0),
    };
    uStackFrame __("Fuse.iOS.Controls.Shape`1", "Attach()");
    __this->Create();
    uPtr((::g::Fuse::Controls::Shape*)__this->SemanticControl())->add_ShapeChanged(uDelegate::New(::TYPES[26/*Uno.Action*/], (void*)Shape__OnShapeChanged_fn, __this));
    __this->OnShapeChanged();
}

// internal override sealed iOS.UIKit.UIView CreateInternal() :729
void Shape__CreateInternal_fn(Shape* __this, ::g::iOS::UIKit::UIView** __retval)
{
    uStackFrame __("Fuse.iOS.Controls.Shape`1", "CreateInternal()");

    if (::g::ObjC::ID::op_Equality(::g::ObjC::Bindings::Object::op_Implicit(__this->_control), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
    {
        __this->_control = ::g::iOS::UIKit::UIControl::New9();
        uPtr(__this->_control)->init();
        uPtr(__this->_control)->MultipleTouchEnabled(true);
        uPtr(__this->_control)->Opaque(false);
    }

    return *__retval = __this->_control, void();
}

// protected override sealed void Detach() :765
void Shape__Detach_fn(Shape* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(Shape_typeof())->Precalced(0/*Fuse.iOS.Controls.Control<T>*/),
        __this->__type->GetBase(Shape_typeof())->T(0),
    };
    uStackFrame __("Fuse.iOS.Controls.Shape`1", "Detach()");
    ::g::iOS::QuartzCore::CAShapeLayer* ret1;
    uPtr((::g::Fuse::Controls::Shape*)__this->SemanticControl())->remove_ShapeChanged(uDelegate::New(::TYPES[26/*Uno.Action*/], (void*)Shape__OnShapeChanged_fn, __this));

    if (__this->_layers != NULL)
    {
        for (int i = 0; i < uPtr(__this->_layers)->Count(); ++i)
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_layers), uCRef<int>(i), &ret1), ret1))->removeFromSuperlayer();

        __this->_layers = NULL;
    }
}

// private iOS.QuartzCore.CAShapeLayer GetSubLayer(int index) :784
void Shape__GetSubLayer_fn(Shape* __this, int* index, ::g::iOS::QuartzCore::CAShapeLayer** __retval)
{
    *__retval = __this->GetSubLayer(*index);
}

// protected override sealed float2 OnArrangeMarginBox(float2 position, Fuse.LayoutParams lp) :776
void Shape__OnArrangeMarginBox_fn(Shape* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.iOS.Controls.Shape`1", "OnArrangeMarginBox(float2,Fuse.LayoutParams)");
    ::g::Uno::Float2 ret3;
    ::g::Uno::Float2 position_ = *position;
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float2 r = (::g::Fuse::iOS::Controls::Element__OnArrangeMarginBox_fn(__this, uCRef(position_), uCRef(lp_), &ret3), ret3);
    __this->OnShapeChanged();
    return *__retval = r, void();
}

// private void OnShapeChanged() :800
void Shape__OnShapeChanged_fn(Shape* __this)
{
    __this->OnShapeChanged();
}

// private void SetLayerBrush(iOS.QuartzCore.CAShapeLayer layer, Fuse.Drawing.Brush brush, bool line) :835
void Shape__SetLayerBrush_fn(Shape* __this, ::g::iOS::QuartzCore::CAShapeLayer* layer, ::g::Fuse::Drawing::Brush* brush, bool* line)
{
    __this->SetLayerBrush(layer, brush, *line);
}

// protected generated Shape() [instance] :725
void Shape::ctor_3()
{
    uStackFrame __("Fuse.iOS.Controls.Shape`1", ".ctor()");
    ctor_2();
}

// private iOS.QuartzCore.CAShapeLayer GetSubLayer(int index) [instance] :784
::g::iOS::QuartzCore::CAShapeLayer* Shape::GetSubLayer(int index)
{
    uStackFrame __("Fuse.iOS.Controls.Shape`1", "GetSubLayer(int)");
    ::g::iOS::QuartzCore::CAShapeLayer* ret2;

    if (_layers == NULL)
        _layers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[58/*Uno.Collections.List<iOS.QuartzCore.CAShapeLayer>*/]));

    while (index >= uPtr(_layers)->Count())
    {
        ::g::iOS::QuartzCore::CAShapeLayer* layer = ::g::iOS::QuartzCore::CAShapeLayer::New7();
        layer->init();
        ::g::Uno::Collections::List__Add_fn(uPtr(_layers), layer);
        uPtr(uPtr(_control)->Layer())->addSublayer(layer);
    }

    return (::g::Uno::Collections::List__get_Item_fn(uPtr(_layers), uCRef<int>(index), &ret2), ret2);
}

// private void OnShapeChanged() [instance] :800
void Shape::OnShapeChanged()
{
    uType* __types[] = {
        __type->GetBase(Shape_typeof())->Precalced(0/*Fuse.iOS.Controls.Control<T>*/),
        __type->GetBase(Shape_typeof())->T(0),
    };
    uStackFrame __("Fuse.iOS.Controls.Shape`1", "OnShapeChanged()");
    ::g::iOS::QuartzCore::CAShapeLayer* ret4;

    if (::g::ObjC::ID::op_Equality(::g::ObjC::Bindings::Object::op_Implicit(_control), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
        return;

    int layerIndex = 0;

    if (uPtr((::g::Fuse::Controls::Shape*)SemanticControl())->HasFills())
    {
        ::g::iOS::QuartzCore::CAShapeLayer* layer = GetSubLayer(layerIndex++);
        SetLayerBrush(layer, uPtr((::g::Fuse::Controls::Shape*)SemanticControl())->Fill(), false);
        uPtr(layer)->setPath(uPtr(CreatePath())->CGPath());
        layer->setStrokeColor(nil);
    }

    if (uPtr((::g::Fuse::Controls::Shape*)SemanticControl())->HasStrokes())
    {
        ::g::Fuse::Drawing::Stroke* stroke = uPtr((::g::Fuse::Controls::Shape*)SemanticControl())->Stroke();
        ::g::iOS::QuartzCore::CAShapeLayer* layer1 = GetSubLayer(layerIndex++);
        SetLayerBrush(layer1, uPtr(stroke)->Brush(), true);
        uPtr(layer1)->setPath(uPtr(CreatePath())->CGPath());
        layer1->setFillColor(nil);
        layer1->setLineWidth((double)stroke->Width());
    }

    if (_layers != NULL)

        while (uPtr(_layers)->Count() > layerIndex)
        {
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_layers), uCRef<int>(layerIndex), &ret4), ret4))->removeFromSuperlayer();
            uPtr(_layers)->RemoveAt(layerIndex);
        }
}

// private void SetLayerBrush(iOS.QuartzCore.CAShapeLayer layer, Fuse.Drawing.Brush brush, bool line) [instance] :835
void Shape::SetLayerBrush(::g::iOS::QuartzCore::CAShapeLayer* layer, ::g::Fuse::Drawing::Brush* brush, bool line)
{
    uStackFrame __("Fuse.iOS.Controls.Shape`1", "SetLayerBrush(iOS.QuartzCore.CAShapeLayer,Fuse.Drawing.Brush,bool)");
    ::g::Uno::Float4 color;

    if (uIs(brush, ::TYPES[61/*Fuse.Drawing.SolidColor*/]))
        color = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[61/*Fuse.Drawing.SolidColor*/]))->Color();
    else if (uIs(brush, ::TYPES[62/*Fuse.Drawing.StaticSolidColor*/]))
        color = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[62/*Fuse.Drawing.StaticSolidColor*/]))->Color();
    else
    {
        ::g::Fuse::Diagnostics::Unsupported(::STRINGS[3/*"shape brush"*/], brush, ::STRINGS[4/*"/usr/local/...*/], 844, ::STRINGS[5/*"SetLayerBrush"*/]);
        return;
    }

    if (line)
        uPtr(layer)->setStrokeColor(uPtr(::g::Fuse::iOS::iOSExtensions::ToUIColor(color))->CGColor());
    else
        layer->setFillColor(uPtr(::g::Fuse::iOS::iOSExtensions::ToUIColor(color))->CGColor());
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.27.14/Controls/$.uno#10
// ----------------------------------------------------------------

// internal sealed extern class SingleLineTextInput :1389
// {
SingleLineTextInput_type* SingleLineTextInput_typeof()
{
    static uSStrong<SingleLineTextInput_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(SingleLineTextInput);
    options.TypeSize = sizeof(SingleLineTextInput_type);
    type = (SingleLineTextInput_type*)uClassType::New("Fuse.iOS.Controls.SingleLineTextInput", options);
    type->fp_ctor_ = (void*)SingleLineTextInput__New1_fn;
    type->interface1.fp_textFieldShouldBeginEditing = (void(*)(uObject*, ::g::iOS::UIKit::UITextField*, bool*))SingleLineTextInput__iOSUIKitIUITextFieldDelegatetextFieldShouldBeginEditing_fn;
    type->interface1.fp_textFieldShouldEndEditing = (void(*)(uObject*, ::g::iOS::UIKit::UITextField*, bool*))SingleLineTextInput__iOSUIKitIUITextFieldDelegatetextFieldShouldEndEditing_fn;
    type->interface1.fp_textFieldDidBeginEditing = (void(*)(uObject*, ::g::iOS::UIKit::UITextField*))SingleLineTextInput__iOSUIKitIUITextFieldDelegatetextFieldDidBeginEditing_fn;
    type->interface1.fp_textFieldDidEndEditing = (void(*)(uObject*, ::g::iOS::UIKit::UITextField*))SingleLineTextInput__iOSUIKitIUITextFieldDelegatetextFieldDidEndEditing_fn;
    type->interface1.fp_textFieldShouldChangeCharactersInRangeReplacementString = (void(*)(uObject*, ::g::iOS::UIKit::UITextField*, ::g::iOS::Foundation::_NSRange*, uString*, bool*))SingleLineTextInput__iOSUIKitIUITextFieldDelegatetextFieldShouldChangeCharactersInRangeReplacementString_fn;
    type->interface1.fp_textFieldShouldClear = (void(*)(uObject*, ::g::iOS::UIKit::UITextField*, bool*))SingleLineTextInput__iOSUIKitIUITextFieldDelegatetextFieldShouldClear_fn;
    type->interface1.fp_textFieldShouldReturn = (void(*)(uObject*, ::g::iOS::UIKit::UITextField*, bool*))SingleLineTextInput__iOSUIKitIUITextFieldDelegatetextFieldShouldReturn_fn;
    type->interface0.fp_get_Frame = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*))SingleLineTextInput__FuseiOSControlsITextInputImplget_Frame_fn;
    type->interface0.fp_set_Frame = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*))SingleLineTextInput__FuseiOSControlsITextInputImplset_Frame_fn;
    type->interface0.fp_get_LineCount = (void(*)(uObject*, int*))SingleLineTextInput__FuseiOSControlsITextInputImplget_LineCount_fn;
    type->interface0.fp_get_View = (void(*)(uObject*, ::g::iOS::UIKit::UIView**))SingleLineTextInput__FuseiOSControlsITextInputImplget_View_fn;
    type->interface0.fp_get_SemanticControl = (void(*)(uObject*, ::g::Fuse::Controls::TextEdit**))SingleLineTextInput__FuseiOSControlsITextInputImplget_SemanticControl_fn;
    type->interface0.fp_set_SemanticControl = (void(*)(uObject*, ::g::Fuse::Controls::TextEdit*))SingleLineTextInput__FuseiOSControlsITextInputImplset_SemanticControl_fn;
    type->interface0.fp_get_IUITextInput = (void(*)(uObject*, uObject**))SingleLineTextInput__FuseiOSControlsITextInputImplget_IUITextInput_fn;
    type->interface0.fp_set_TextColor = (void(*)(uObject*, ::g::iOS::UIKit::UIColor*))SingleLineTextInput__FuseiOSControlsITextInputImplset_TextColor_fn;
    type->interface0.fp_set_CaretColor = (void(*)(uObject*, ::g::iOS::UIKit::UIColor*))SingleLineTextInput__FuseiOSControlsITextInputImplset_CaretColor_fn;
    type->interface0.fp_set_TextAlignment = (void(*)(uObject*, int*))SingleLineTextInput__FuseiOSControlsITextInputImplset_TextAlignment_fn;
    type->interface0.fp_get_Font = (void(*)(uObject*, ::g::iOS::UIKit::UIFont**))SingleLineTextInput__FuseiOSControlsITextInputImplget_Font_fn;
    type->interface0.fp_set_Font = (void(*)(uObject*, ::g::iOS::UIKit::UIFont*))SingleLineTextInput__FuseiOSControlsITextInputImplset_Font_fn;
    type->interface0.fp_get_Text = (void(*)(uObject*, uString**))SingleLineTextInput__FuseiOSControlsITextInputImplget_Text_fn;
    type->interface0.fp_set_Text = (void(*)(uObject*, uString*))SingleLineTextInput__FuseiOSControlsITextInputImplset_Text_fn;
    type->interface0.fp_set_PlaceholderText = (void(*)(uObject*, uString*))SingleLineTextInput__FuseiOSControlsITextInputImplset_PlaceholderText_fn;
    type->interface0.fp_set_PlaceholderColor = (void(*)(uObject*, ::g::iOS::UIKit::UIColor*))SingleLineTextInput__FuseiOSControlsITextInputImplset_PlaceholderColor_fn;
    type->interface0.fp_add_TextChanged = (void(*)(uObject*, uDelegate*))SingleLineTextInput__add_TextChanged_fn;
    type->interface0.fp_remove_TextChanged = (void(*)(uObject*, uDelegate*))SingleLineTextInput__remove_TextChanged_fn;
    ::STRINGS[0] = uString::Const("");
    ::TYPES[64] = ::g::Fuse::iOS::Controls::ITextInputImpl_typeof();
    ::TYPES[24] = ::g::Uno::Bool_typeof();
    ::TYPES[43] = ::g::Uno::Delegate_typeof();
    ::TYPES[30] = ::g::Uno::EventHandler_typeof();
    ::TYPES[16] = uObject_typeof();
    ::TYPES[44] = ::g::Uno::EventArgs_typeof();
    ::TYPES[8] = ::g::iOS::UIKit::UIView_typeof();
    ::TYPES[65] = ::g::iOS::UIKit::UITextField_typeof();
    ::TYPES[48] = ::g::iOS::UIKit::IUITextInput_typeof();
    ::TYPES[66] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::iOS::Foundation::INSCopying_typeof(), ::g::ObjC::ID_typeof());
    ::TYPES[67] = ::g::iOS::Foundation::INSCopying_typeof();
    ::TYPES[68] = ::g::Fuse::iOS::NSAttributedStringConstants_typeof();
    ::TYPES[2] = ::g::ObjC::Bindings::Object_typeof();
    ::TYPES[69] = ::g::iOS::UIKit::IUITextFieldDelegate_typeof();
    ::TYPES[6] = ::g::iOS::UIKit::UIControl_typeof();
    ::TYPES[7] = ::g::Uno::Action2_typeof()->MakeType(::g::iOS::Foundation::NSObject_typeof(), ::g::iOS::Foundation::NSObject_typeof());
    type->SetInterfaces(
        ::g::Fuse::iOS::Controls::ITextInputImpl_typeof(), offsetof(SingleLineTextInput_type, interface0),
        ::g::iOS::UIKit::IUITextFieldDelegate_typeof(), offsetof(SingleLineTextInput_type, interface1));
    type->SetFields(0,
        ::g::Fuse::iOS::ControlEvent_typeof(), offsetof(::g::Fuse::iOS::Controls::SingleLineTextInput, _textEditEvent), 0,
        ::g::iOS::UIKit::UITextField_typeof(), offsetof(::g::Fuse::iOS::Controls::SingleLineTextInput, _textField), 0,
        ::g::Fuse::Controls::TextEdit_typeof(), offsetof(::g::Fuse::iOS::Controls::SingleLineTextInput, _SemanticControl), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::iOS::Controls::SingleLineTextInput, TextChanged1), 0);
    return type;
}

// public generated SingleLineTextInput() :1389
void SingleLineTextInput__ctor__fn(SingleLineTextInput* __this)
{
    __this->ctor_();
}

// private void Fuse.iOS.Controls.ITextInputImpl.set_CaretColor(iOS.UIKit.UIColor value) :1449
void SingleLineTextInput__FuseiOSControlsITextInputImplset_CaretColor_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UIColor* value)
{
    uStackFrame __("Fuse.iOS.Controls.SingleLineTextInput", "Fuse.iOS.Controls.ITextInputImpl.set_CaretColor(iOS.UIKit.UIColor)");
    uPtr(__this->TextField())->TintColor(value);
}

// private iOS.UIKit.UIFont Fuse.iOS.Controls.ITextInputImpl.get_Font() :1459
void SingleLineTextInput__FuseiOSControlsITextInputImplget_Font_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UIFont** __retval)
{
    uStackFrame __("Fuse.iOS.Controls.SingleLineTextInput", "Fuse.iOS.Controls.ITextInputImpl.get_Font()");
    return *__retval = uPtr(__this->TextField())->Font(), void();
}

// private void Fuse.iOS.Controls.ITextInputImpl.set_Font(iOS.UIKit.UIFont value) :1460
void SingleLineTextInput__FuseiOSControlsITextInputImplset_Font_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UIFont* value)
{
    uStackFrame __("Fuse.iOS.Controls.SingleLineTextInput", "Fuse.iOS.Controls.ITextInputImpl.set_Font(iOS.UIKit.UIFont)");
    uPtr(__this->TextField())->Font(value);
}

// private iOS.CoreGraphics.CGRect Fuse.iOS.Controls.ITextInputImpl.get_Frame() :1421
void SingleLineTextInput__FuseiOSControlsITextInputImplget_Frame_fn(SingleLineTextInput* __this, ::g::iOS::CoreGraphics::CGRect* __retval)
{
    uStackFrame __("Fuse.iOS.Controls.SingleLineTextInput", "Fuse.iOS.Controls.ITextInputImpl.get_Frame()");
    return *__retval = uPtr(__this->TextField())->Frame(), void();
}

// private void Fuse.iOS.Controls.ITextInputImpl.set_Frame(iOS.CoreGraphics.CGRect value) :1422
void SingleLineTextInput__FuseiOSControlsITextInputImplset_Frame_fn(SingleLineTextInput* __this, ::g::iOS::CoreGraphics::CGRect* value)
{
    uStackFrame __("Fuse.iOS.Controls.SingleLineTextInput", "Fuse.iOS.Controls.ITextInputImpl.set_Frame(iOS.CoreGraphics.CGRect)");
    ::g::iOS::CoreGraphics::CGRect value_ = *value;
    uPtr(__this->TextField())->Frame(value_);
}

// private iOS.UIKit.IUITextInput Fuse.iOS.Controls.ITextInputImpl.get_IUITextInput() :1439
void SingleLineTextInput__FuseiOSControlsITextInputImplget_IUITextInput_fn(SingleLineTextInput* __this, uObject** __retval)
{
    uStackFrame __("Fuse.iOS.Controls.SingleLineTextInput", "Fuse.iOS.Controls.ITextInputImpl.get_IUITextInput()");
    return *__retval = (uObject*)__this->TextField(), void();
}

// private int Fuse.iOS.Controls.ITextInputImpl.get_LineCount() :1427
void SingleLineTextInput__FuseiOSControlsITextInputImplget_LineCount_fn(SingleLineTextInput* __this, int* __retval)
{
    uStackFrame __("Fuse.iOS.Controls.SingleLineTextInput", "Fuse.iOS.Controls.ITextInputImpl.get_LineCount()");
    return *__retval = 1, void();
}

// private void Fuse.iOS.Controls.ITextInputImpl.set_PlaceholderColor(iOS.UIKit.UIColor value) :1476
void SingleLineTextInput__FuseiOSControlsITextInputImplset_PlaceholderColor_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UIColor* value)
{
    uStackFrame __("Fuse.iOS.Controls.SingleLineTextInput", "Fuse.iOS.Controls.ITextInputImpl.set_PlaceholderColor(iOS.UIKit.UIColor)");
    ::g::Uno::Collections::Dictionary* collection1;
    ::g::iOS::Foundation::NSDictionary* attributes = ::g::Fuse::iOS::iOSInterop::ToNSDictionary((collection1 = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[66/*Uno.Collections.Dictionary<iOS.Foundation.INSCopying, ObjC.ID>*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), (uObject*)::g::Fuse::iOS::NSAttributedStringConstants::NSForegroundColorAttributeName(), uCRef(::g::ObjC::Bindings::Object::op_Implicit(value))), collection1));
    ::g::iOS::Foundation::NSAttributedString* attributedPlaceholder = ::g::iOS::Foundation::NSAttributedString::New5();
    attributedPlaceholder->initWithStringAttributes(uPtr(__this->TextField())->Placeholder(), attributes);
    uPtr(__this->TextField())->AttributedPlaceholder(attributedPlaceholder);
}

// private void Fuse.iOS.Controls.ITextInputImpl.set_PlaceholderText(string value) :1471
void SingleLineTextInput__FuseiOSControlsITextInputImplset_PlaceholderText_fn(SingleLineTextInput* __this, uString* value)
{
    uStackFrame __("Fuse.iOS.Controls.SingleLineTextInput", "Fuse.iOS.Controls.ITextInputImpl.set_PlaceholderText(string)");
    uPtr(__this->TextField())->Placeholder((value != NULL) ? value : ::STRINGS[0/*""*/]);
}

// private generated Fuse.Controls.TextEdit Fuse.iOS.Controls.ITextInputImpl.get_SemanticControl() :1435
void SingleLineTextInput__FuseiOSControlsITextInputImplget_SemanticControl_fn(SingleLineTextInput* __this, ::g::Fuse::Controls::TextEdit** __retval)
{
    uStackFrame __("Fuse.iOS.Controls.SingleLineTextInput", "Fuse.iOS.Controls.ITextInputImpl.get_SemanticControl()");
    return *__retval = __this->_SemanticControl, void();
}

// private generated void Fuse.iOS.Controls.ITextInputImpl.set_SemanticControl(Fuse.Controls.TextEdit value) :1435
void SingleLineTextInput__FuseiOSControlsITextInputImplset_SemanticControl_fn(SingleLineTextInput* __this, ::g::Fuse::Controls::TextEdit* value)
{
    uStackFrame __("Fuse.iOS.Controls.SingleLineTextInput", "Fuse.iOS.Controls.ITextInputImpl.set_SemanticControl(Fuse.Controls.TextEdit)");
    __this->_SemanticControl = value;
}

// private string Fuse.iOS.Controls.ITextInputImpl.get_Text() :1465
void SingleLineTextInput__FuseiOSControlsITextInputImplget_Text_fn(SingleLineTextInput* __this, uString** __retval)
{
    uStackFrame __("Fuse.iOS.Controls.SingleLineTextInput", "Fuse.iOS.Controls.ITextInputImpl.get_Text()");
    uString* ind2 = uPtr(__this->TextField())->Text();
    return *__retval = (ind2 != NULL) ? ind2 : ::STRINGS[0/*""*/], void();
}

// private void Fuse.iOS.Controls.ITextInputImpl.set_Text(string value) :1466
void SingleLineTextInput__FuseiOSControlsITextInputImplset_Text_fn(SingleLineTextInput* __this, uString* value)
{
    uStackFrame __("Fuse.iOS.Controls.SingleLineTextInput", "Fuse.iOS.Controls.ITextInputImpl.set_Text(string)");
    uPtr(__this->TextField())->Text((value != NULL) ? value : ::STRINGS[0/*""*/]);
}

// private void Fuse.iOS.Controls.ITextInputImpl.set_TextAlignment(iOS.UIKit.NSTextAlignment value) :1454
void SingleLineTextInput__FuseiOSControlsITextInputImplset_TextAlignment_fn(SingleLineTextInput* __this, int* value)
{
    uStackFrame __("Fuse.iOS.Controls.SingleLineTextInput", "Fuse.iOS.Controls.ITextInputImpl.set_TextAlignment(iOS.UIKit.NSTextAlignment)");
    int value_ = *value;
    uPtr(__this->TextField())->TextAlignment(value_);
}

// private void Fuse.iOS.Controls.ITextInputImpl.set_TextColor(iOS.UIKit.UIColor value) :1444
void SingleLineTextInput__FuseiOSControlsITextInputImplset_TextColor_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UIColor* value)
{
    uStackFrame __("Fuse.iOS.Controls.SingleLineTextInput", "Fuse.iOS.Controls.ITextInputImpl.set_TextColor(iOS.UIKit.UIColor)");
    uPtr(__this->TextField())->TextColor(value);
}

// private iOS.UIKit.UIView Fuse.iOS.Controls.ITextInputImpl.get_View() :1432
void SingleLineTextInput__FuseiOSControlsITextInputImplget_View_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UIView** __retval)
{
    uStackFrame __("Fuse.iOS.Controls.SingleLineTextInput", "Fuse.iOS.Controls.ITextInputImpl.get_View()");
    return *__retval = __this->TextField(), void();
}

// private void iOS.UIKit.IUITextFieldDelegate.textFieldDidBeginEditing(iOS.UIKit.UITextField textView) :1493
void SingleLineTextInput__iOSUIKitIUITextFieldDelegatetextFieldDidBeginEditing_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UITextField* textView)
{
}

// private void iOS.UIKit.IUITextFieldDelegate.textFieldDidEndEditing(iOS.UIKit.UITextField textView) :1494
void SingleLineTextInput__iOSUIKitIUITextFieldDelegatetextFieldDidEndEditing_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UITextField* textView)
{
}

// private bool iOS.UIKit.IUITextFieldDelegate.textFieldShouldBeginEditing(iOS.UIKit.UITextField textView) :1491
void SingleLineTextInput__iOSUIKitIUITextFieldDelegatetextFieldShouldBeginEditing_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UITextField* textView, bool* __retval)
{
    uStackFrame __("Fuse.iOS.Controls.SingleLineTextInput", "iOS.UIKit.IUITextFieldDelegate.textFieldShouldBeginEditing(iOS.UIKit.UITextField)");
    return *__retval = true, void();
}

// private bool iOS.UIKit.IUITextFieldDelegate.textFieldShouldChangeCharactersInRangeReplacementString(iOS.UIKit.UITextField textView, iOS.Foundation._NSRange range, string text) :1496
void SingleLineTextInput__iOSUIKitIUITextFieldDelegatetextFieldShouldChangeCharactersInRangeReplacementString_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UITextField* textView, ::g::iOS::Foundation::_NSRange* range, uString* text, bool* __retval)
{
    uStackFrame __("Fuse.iOS.Controls.SingleLineTextInput", "iOS.UIKit.IUITextFieldDelegate.textFieldShouldChangeCharactersInRangeReplacementString(iOS.UIKit.UITextField,iOS.Foundation._NSRange,string)");
    return *__retval = true, void();
}

// private bool iOS.UIKit.IUITextFieldDelegate.textFieldShouldClear(iOS.UIKit.UITextField textView) :1497
void SingleLineTextInput__iOSUIKitIUITextFieldDelegatetextFieldShouldClear_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UITextField* textView, bool* __retval)
{
    uStackFrame __("Fuse.iOS.Controls.SingleLineTextInput", "iOS.UIKit.IUITextFieldDelegate.textFieldShouldClear(iOS.UIKit.UITextField)");
    return *__retval = true, void();
}

// private bool iOS.UIKit.IUITextFieldDelegate.textFieldShouldEndEditing(iOS.UIKit.UITextField textView) :1492
void SingleLineTextInput__iOSUIKitIUITextFieldDelegatetextFieldShouldEndEditing_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UITextField* textView, bool* __retval)
{
    uStackFrame __("Fuse.iOS.Controls.SingleLineTextInput", "iOS.UIKit.IUITextFieldDelegate.textFieldShouldEndEditing(iOS.UIKit.UITextField)");
    return *__retval = true, void();
}

// private bool iOS.UIKit.IUITextFieldDelegate.textFieldShouldReturn(iOS.UIKit.UITextField textView) :1499
void SingleLineTextInput__iOSUIKitIUITextFieldDelegatetextFieldShouldReturn_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UITextField* textView, bool* __retval)
{
    uStackFrame __("Fuse.iOS.Controls.SingleLineTextInput", "iOS.UIKit.IUITextFieldDelegate.textFieldShouldReturn(iOS.UIKit.UITextField)");
    bool q = uPtr(::g::Fuse::iOS::Controls::ITextInputImpl::SemanticControl(uInterface(uPtr(uAs<uObject*>(__this, ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/])), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/])))->OnAction();
    return *__retval = !q, void();
}

// public generated SingleLineTextInput New() :1389
void SingleLineTextInput__New1_fn(SingleLineTextInput** __retval)
{
    *__retval = SingleLineTextInput::New1();
}

// private void OnTextEdit(iOS.Foundation.NSObject sender, iOS.Foundation.NSObject theEvent) :1413
void SingleLineTextInput__OnTextEdit_fn(SingleLineTextInput* __this, ::g::iOS::Foundation::NSObject* sender, ::g::iOS::Foundation::NSObject* theEvent)
{
    __this->OnTextEdit(sender, theEvent);
}

// public generated void add_TextChanged(Uno.EventHandler value) :1489
void SingleLineTextInput__add_TextChanged_fn(SingleLineTextInput* __this, uDelegate* value)
{
    __this->add_TextChanged(value);
}

// public generated void remove_TextChanged(Uno.EventHandler value) :1489
void SingleLineTextInput__remove_TextChanged_fn(SingleLineTextInput* __this, uDelegate* value)
{
    __this->remove_TextChanged(value);
}

// private iOS.UIKit.UITextField get_TextField() :1395
void SingleLineTextInput__get_TextField_fn(SingleLineTextInput* __this, ::g::iOS::UIKit::UITextField** __retval)
{
    *__retval = __this->TextField();
}

// public generated SingleLineTextInput() [instance] :1389
void SingleLineTextInput::ctor_()
{
}

// private void OnTextEdit(iOS.Foundation.NSObject sender, iOS.Foundation.NSObject theEvent) [instance] :1413
void SingleLineTextInput::OnTextEdit(::g::iOS::Foundation::NSObject* sender, ::g::iOS::Foundation::NSObject* theEvent)
{
    uStackFrame __("Fuse.iOS.Controls.SingleLineTextInput", "OnTextEdit(iOS.Foundation.NSObject,iOS.Foundation.NSObject)");

    if (::g::Uno::Delegate::op_Inequality(TextChanged1, NULL))
        uPtr(TextChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public generated void add_TextChanged(Uno.EventHandler value) [instance] :1489
void SingleLineTextInput::add_TextChanged(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.SingleLineTextInput", "add_TextChanged(Uno.EventHandler)");
    TextChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(TextChanged1, value), ::TYPES[30/*Uno.EventHandler*/]);
}

// public generated void remove_TextChanged(Uno.EventHandler value) [instance] :1489
void SingleLineTextInput::remove_TextChanged(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.SingleLineTextInput", "remove_TextChanged(Uno.EventHandler)");
    TextChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(TextChanged1, value), ::TYPES[30/*Uno.EventHandler*/]);
}

// private iOS.UIKit.UITextField get_TextField() [instance] :1395
::g::iOS::UIKit::UITextField* SingleLineTextInput::TextField()
{
    uStackFrame __("Fuse.iOS.Controls.SingleLineTextInput", "get_TextField()");

    if (::g::ObjC::ID::op_Equality(::g::ObjC::Bindings::Object::op_Implicit(_textField), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
    {
        _textField = ::g::iOS::UIKit::UITextField::New11();
        uPtr(_textField)->init();
        uPtr(_textField)->Opaque(false);
        uPtr(_textField)->BorderStyle(0);
        uPtr(_textField)->Delegate((uObject*)this);
        _textEditEvent = ::g::Fuse::iOS::ControlEvent::AddHandler(_textField, uDelegate::New(::TYPES[7/*Uno.Action<iOS.Foundation.NSObject, iOS.Foundation.NSObject>*/], (void*)SingleLineTextInput__OnTextEdit_fn, this), 983040);
    }

    return _textField;
}

// public generated SingleLineTextInput New() [static] :1389
SingleLineTextInput* SingleLineTextInput::New1()
{
    SingleLineTextInput* obj3 = (SingleLineTextInput*)uNew(SingleLineTextInput_typeof());
    obj3->ctor_();
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.27.14/Controls/$.uno#7
// ---------------------------------------------------------------

// public sealed extern class Slider :891
// {
//  ~Slider() :949
static void Slider__Finalize_fn(Slider* __this)
{
    uStackFrame __("Fuse.iOS.Controls.Slider", "Finalize()");

    if (::g::ObjC::ID::op_Inequality(::g::ObjC::Bindings::Object::op_Implicit(__this->_valueChangedEvent), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
        uPtr(__this->_valueChangedEvent)->Dispose();

    if (::g::ObjC::ID::op_Inequality(::g::ObjC::Bindings::Object::op_Implicit(__this->_sliderContainer), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
        uPtr(__this->_sliderContainer)->remove_FrameChanged(uDelegate::New(::TYPES[71/*Uno.EventHandler<iOS.CoreGraphics.CGRect>*/], (void*)Slider__OnFrameChanged_fn, __this));
}

::g::Fuse::iOS::Controls::Control_type* Slider_typeof()
{
    static uSStrong< ::g::Fuse::iOS::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 62;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Slider);
    options.TypeSize = sizeof(::g::Fuse::iOS::Controls::Control_type);
    type = (::g::Fuse::iOS::Controls::Control_type*)uClassType::New("Fuse.iOS.Controls.Slider", options);
    type->SetBase(::g::Fuse::iOS::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Slider_typeof()));
    type->fp_ctor_ = (void*)Slider__New1_fn;
    type->fp_Finalize = (void(*)(uObject*))Slider__Finalize_fn;
    type->fp_Attach = (void(*)(::g::Fuse::iOS::Controls::Control*))Slider__Attach_fn;
    type->fp_CreateInternal = (void(*)(::g::Fuse::iOS::Controls::Element*, ::g::iOS::UIKit::UIView**))Slider__CreateInternal_fn;
    type->fp_Detach = (void(*)(::g::Fuse::iOS::Controls::Control*))Slider__Detach_fn;
    type->fp_GetMarginSize = (void(*)(::g::Fuse::Node*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))Slider__GetMarginSize_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseIChildObjectget_ParentObject_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[2] = ::g::ObjC::Bindings::Object_typeof();
    ::TYPES[70] = ::g::Fuse::iOS::Controls::ViewContainer_typeof();
    ::TYPES[71] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::iOS::CoreGraphics::CGRect_typeof());
    ::TYPES[72] = ::g::Fuse::Controls::RangeControl_typeof();
    ::TYPES[73] = ::g::Fuse::iOS::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Slider_typeof());
    ::TYPES[74] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[75] = ::g::iOS::UIKit::UISlider_typeof();
    ::TYPES[8] = ::g::iOS::UIKit::UIView_typeof();
    ::TYPES[6] = ::g::iOS::UIKit::UIControl_typeof();
    ::TYPES[7] = ::g::Uno::Action2_typeof()->MakeType(::g::iOS::Foundation::NSObject_typeof(), ::g::iOS::Foundation::NSObject_typeof());
    ::TYPES[49] = ::g::iOS::CoreGraphics::CGRect_typeof();
    ::TYPES[14] = ::g::Uno::Double_typeof();
    ::TYPES[35] = ::g::Uno::Float_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::iOS::Controls::Control_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::iOS::Controls::Control_type, interface1));
    type->SetFields(58,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::iOS::Controls::Slider, _prevProgress), 0,
        ::g::iOS::UIKit::UISlider_typeof(), offsetof(::g::Fuse::iOS::Controls::Slider, _slider), 0,
        ::g::Fuse::iOS::Controls::ViewContainer_typeof(), offsetof(::g::Fuse::iOS::Controls::Slider, _sliderContainer), 0,
        ::g::Fuse::iOS::ControlEvent_typeof(), offsetof(::g::Fuse::iOS::Controls::Slider, _valueChangedEvent), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Slider__New1_fn, 0, true, Slider_typeof(), 0));
    return type;
}

// public generated Slider() :891
void Slider__ctor_3_fn(Slider* __this)
{
    __this->ctor_3();
}

// protected override sealed void Attach() :958
void Slider__Attach_fn(Slider* __this)
{
    uStackFrame __("Fuse.iOS.Controls.Slider", "Attach()");
    uPtr((::g::Fuse::Controls::Slider*)__this->SemanticControl())->add_ProgressChanged(uDelegate::New(::TYPES[74/*Uno.UX.ValueChangedHandler<double>*/], (void*)Slider__OnProgressChanged_fn, __this));
    __this->Create();
    __this->Progress(uPtr((::g::Fuse::Controls::Slider*)__this->SemanticControl())->Progress());
}

// internal override sealed iOS.UIKit.UIView CreateInternal() :898
void Slider__CreateInternal_fn(Slider* __this, ::g::iOS::UIKit::UIView** __retval)
{
    uStackFrame __("Fuse.iOS.Controls.Slider", "CreateInternal()");

    if (::g::ObjC::ID::op_Equality(::g::ObjC::Bindings::Object::op_Implicit(__this->_slider), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
    {
        __this->_slider = ::g::iOS::UIKit::UISlider::New11();
        uPtr(__this->_slider)->init();
        uPtr(__this->_slider)->MinimumValue(0.0f);
        uPtr(__this->_slider)->MaximumValue(100.0f);
        uPtr(__this->_slider)->Continuous(true);
        uPtr(__this->_slider)->ExclusiveTouch(true);
        __this->_valueChangedEvent = ::g::Fuse::iOS::ControlEvent::AddHandler(__this->_slider, uDelegate::New(::TYPES[7/*Uno.Action<iOS.Foundation.NSObject, iOS.Foundation.NSObject>*/], (void*)Slider__OnValueChanged_fn, __this), 4096);
        __this->_sliderContainer = ::g::Fuse::iOS::Controls::ViewContainer::New11();
        uPtr(__this->_sliderContainer)->init();
        uPtr(__this->_sliderContainer)->add_FrameChanged(uDelegate::New(::TYPES[71/*Uno.EventHandler<iOS.CoreGraphics.CGRect>*/], (void*)Slider__OnFrameChanged_fn, __this));
        uPtr(__this->_sliderContainer)->AutoresizesSubviews(true);
        uPtr(__this->_sliderContainer)->addSubview(__this->_slider);
    }

    return *__retval = __this->_sliderContainer, void();
}

// protected override sealed void Detach() :965
void Slider__Detach_fn(Slider* __this)
{
    uStackFrame __("Fuse.iOS.Controls.Slider", "Detach()");
    uPtr((::g::Fuse::Controls::Slider*)__this->SemanticControl())->remove_ProgressChanged(uDelegate::New(::TYPES[74/*Uno.UX.ValueChangedHandler<double>*/], (void*)Slider__OnProgressChanged_fn, __this));
}

// public override sealed float2 GetMarginSize(Fuse.LayoutParams lp) :930
void Slider__GetMarginSize_fn(Slider* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.iOS.Controls.Slider", "GetMarginSize(Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    return *__retval = ::g::Fuse::iOS::iOSBindingView::GetContentSize(__this->_slider, lp_), void();
}

// public generated Slider New() :891
void Slider__New1_fn(Slider** __retval)
{
    *__retval = Slider::New1();
}

// private void OnFrameChanged(object sender, iOS.CoreGraphics.CGRect frame) :925
void Slider__OnFrameChanged_fn(Slider* __this, uObject* sender, ::g::iOS::CoreGraphics::CGRect* frame)
{
    __this->OnFrameChanged(sender, *frame);
}

// private void OnProgressChanged(object sender, Uno.EventArgs args) :970
void Slider__OnProgressChanged_fn(Slider* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnProgressChanged(sender, args);
}

// private void OnValueChanged(iOS.Foundation.NSObject sender, iOS.Foundation.NSObject theEvent) :975
void Slider__OnValueChanged_fn(Slider* __this, ::g::iOS::Foundation::NSObject* sender, ::g::iOS::Foundation::NSObject* theEvent)
{
    __this->OnValueChanged(sender, theEvent);
}

// private double get_Progress() :938
void Slider__get_Progress_fn(Slider* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// private void set_Progress(double value) :939
void Slider__set_Progress_fn(Slider* __this, double* value)
{
    __this->Progress(*value);
}

// public generated Slider() [instance] :891
void Slider::ctor_3()
{
    uStackFrame __("Fuse.iOS.Controls.Slider", ".ctor()");
    ctor_2();
}

// private void OnFrameChanged(object sender, iOS.CoreGraphics.CGRect frame) [instance] :925
void Slider::OnFrameChanged(uObject* sender, ::g::iOS::CoreGraphics::CGRect frame)
{
    uStackFrame __("Fuse.iOS.Controls.Slider", "OnFrameChanged(object,iOS.CoreGraphics.CGRect)");
    uPtr(_slider)->Frame(::g::iOS::CoreGraphics::CGRect__New1(uPtr(_slider)->Frame().Origin, frame.Size));
}

// private void OnProgressChanged(object sender, Uno.EventArgs args) [instance] :970
void Slider::OnProgressChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.iOS.Controls.Slider", "OnProgressChanged(object,Uno.EventArgs)");
    Progress(uPtr((::g::Fuse::Controls::Slider*)SemanticControl())->Progress());
}

// private void OnValueChanged(iOS.Foundation.NSObject sender, iOS.Foundation.NSObject theEvent) [instance] :975
void Slider::OnValueChanged(::g::iOS::Foundation::NSObject* sender, ::g::iOS::Foundation::NSObject* theEvent)
{
    uStackFrame __("Fuse.iOS.Controls.Slider", "OnValueChanged(iOS.Foundation.NSObject,iOS.Foundation.NSObject)");
    uPtr((::g::Fuse::Controls::Slider*)SemanticControl())->Progress(Progress());
}

// private double get_Progress() [instance] :938
double Slider::Progress()
{
    uStackFrame __("Fuse.iOS.Controls.Slider", "get_Progress()");
    return (double)(uPtr(_slider)->Value() / 100.0f);
}

// private void set_Progress(double value) [instance] :939
void Slider::Progress(double value)
{
    uStackFrame __("Fuse.iOS.Controls.Slider", "set_Progress(double)");

    if (value != _prevProgress)
    {
        uPtr(_slider)->Value((float)value * 100.0f);
        _prevProgress = value;
    }
}

// public generated Slider New() [static] :891
Slider* Slider::New1()
{
    Slider* obj1 = (Slider*)uNew(Slider_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.27.14/Controls/$.uno#8
// ---------------------------------------------------------------

// public sealed extern class Switch :1004
// {
//  ~Switch() :1024
static void Switch__Finalize_fn(Switch* __this)
{
    uStackFrame __("Fuse.iOS.Controls.Switch", "Finalize()");

    if (::g::ObjC::ID::op_Inequality(::g::ObjC::Bindings::Object::op_Implicit(__this->_switch), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
        uPtr(__this->_toggled)->Dispose();
}

::g::Fuse::iOS::Controls::Control_type* Switch_typeof()
{
    static uSStrong< ::g::Fuse::iOS::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 60;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Switch);
    options.TypeSize = sizeof(::g::Fuse::iOS::Controls::Control_type);
    type = (::g::Fuse::iOS::Controls::Control_type*)uClassType::New("Fuse.iOS.Controls.Switch", options);
    type->SetBase(::g::Fuse::iOS::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Switch_typeof()));
    type->fp_ctor_ = (void*)Switch__New1_fn;
    type->fp_Finalize = (void(*)(uObject*))Switch__Finalize_fn;
    type->fp_Attach = (void(*)(::g::Fuse::iOS::Controls::Control*))Switch__Attach_fn;
    type->fp_CreateInternal = (void(*)(::g::Fuse::iOS::Controls::Element*, ::g::iOS::UIKit::UIView**))Switch__CreateInternal_fn;
    type->fp_Detach = (void(*)(::g::Fuse::iOS::Controls::Control*))Switch__Detach_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseIChildObjectget_ParentObject_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[2] = ::g::ObjC::Bindings::Object_typeof();
    ::TYPES[76] = ::g::Fuse::Controls::ToggleControl_typeof();
    ::TYPES[77] = ::g::Fuse::iOS::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Switch_typeof());
    ::TYPES[78] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[79] = ::g::iOS::UIKit::UISwitch_typeof();
    ::TYPES[6] = ::g::iOS::UIKit::UIControl_typeof();
    ::TYPES[7] = ::g::Uno::Action2_typeof()->MakeType(::g::iOS::Foundation::NSObject_typeof(), ::g::iOS::Foundation::NSObject_typeof());
    ::TYPES[8] = ::g::iOS::UIKit::UIView_typeof();
    ::TYPES[80] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Bool_typeof());
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::iOS::Controls::Control_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::iOS::Controls::Control_type, interface1));
    type->SetFields(58,
        ::g::iOS::UIKit::UISwitch_typeof(), offsetof(::g::Fuse::iOS::Controls::Switch, _switch), 0,
        ::g::Fuse::iOS::ControlEvent_typeof(), offsetof(::g::Fuse::iOS::Controls::Switch, _toggled), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Switch__New1_fn, 0, true, Switch_typeof(), 0));
    return type;
}

// public generated Switch() :1004
void Switch__ctor_3_fn(Switch* __this)
{
    __this->ctor_3();
}

// protected override sealed void Attach() :1035
void Switch__Attach_fn(Switch* __this)
{
    uStackFrame __("Fuse.iOS.Controls.Switch", "Attach()");
    uPtr((::g::Fuse::Controls::Switch*)__this->SemanticControl())->add_ValueChanged(uDelegate::New(::TYPES[78/*Uno.UX.ValueChangedHandler<bool>*/], (void*)Switch__OnValueChanged_fn, __this));
    __this->Create();
    uPtr(__this->_switch)->On(uPtr((::g::Fuse::Controls::Switch*)__this->SemanticControl())->Value());
}

// internal override sealed iOS.UIKit.UIView CreateInternal() :1009
void Switch__CreateInternal_fn(Switch* __this, ::g::iOS::UIKit::UIView** __retval)
{
    uStackFrame __("Fuse.iOS.Controls.Switch", "CreateInternal()");

    if (::g::ObjC::ID::op_Equality(::g::ObjC::Bindings::Object::op_Implicit(__this->_switch), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
    {
        __this->_switch = ::g::iOS::UIKit::UISwitch::New11();
        uPtr(__this->_switch)->init();
        __this->_toggled = ::g::Fuse::iOS::ControlEvent::AddHandler(__this->_switch, uDelegate::New(::TYPES[7/*Uno.Action<iOS.Foundation.NSObject, iOS.Foundation.NSObject>*/], (void*)Switch__OnToggled_fn, __this), 4096);
    }

    return *__retval = __this->_switch, void();
}

// protected override sealed void Detach() :1042
void Switch__Detach_fn(Switch* __this)
{
    uStackFrame __("Fuse.iOS.Controls.Switch", "Detach()");
    uPtr((::g::Fuse::Controls::Switch*)__this->SemanticControl())->remove_ValueChanged(uDelegate::New(::TYPES[78/*Uno.UX.ValueChangedHandler<bool>*/], (void*)Switch__OnValueChanged_fn, __this));
}

// public generated Switch New() :1004
void Switch__New1_fn(Switch** __retval)
{
    *__retval = Switch::New1();
}

// private void OnToggled(iOS.Foundation.NSObject sender, iOS.Foundation.NSObject theEvent) :1030
void Switch__OnToggled_fn(Switch* __this, ::g::iOS::Foundation::NSObject* sender, ::g::iOS::Foundation::NSObject* theEvent)
{
    __this->OnToggled(sender, theEvent);
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<bool> args) :1047
void Switch__OnValueChanged_fn(Switch* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnValueChanged(sender, args);
}

// public generated Switch() [instance] :1004
void Switch::ctor_3()
{
    uStackFrame __("Fuse.iOS.Controls.Switch", ".ctor()");
    ctor_2();
}

// private void OnToggled(iOS.Foundation.NSObject sender, iOS.Foundation.NSObject theEvent) [instance] :1030
void Switch::OnToggled(::g::iOS::Foundation::NSObject* sender, ::g::iOS::Foundation::NSObject* theEvent)
{
    uStackFrame __("Fuse.iOS.Controls.Switch", "OnToggled(iOS.Foundation.NSObject,iOS.Foundation.NSObject)");
    uPtr((::g::Fuse::Controls::Switch*)SemanticControl())->Value(uPtr(_switch)->On());
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<bool> args) [instance] :1047
void Switch::OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    uStackFrame __("Fuse.iOS.Controls.Switch", "OnValueChanged(object,Uno.UX.ValueChangedArgs<bool>)");
    bool ret2;
    uPtr(_switch)->On((::g::Uno::UX::ValueChangedArgs__get_Value_fn(uPtr(args), &ret2), ret2));
}

// public generated Switch New() [static] :1004
Switch* Switch::New1()
{
    Switch* obj1 = (Switch*)uNew(Switch_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.27.14/Controls/$.uno#9
// ---------------------------------------------------------------

// public sealed extern class TextBlock :1073
// {
::g::Fuse::iOS::Controls::Control_type* TextBlock_typeof()
{
    static uSStrong< ::g::Fuse::iOS::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 59;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TextBlock);
    options.TypeSize = sizeof(::g::Fuse::iOS::Controls::Control_type);
    type = (::g::Fuse::iOS::Controls::Control_type*)uClassType::New("Fuse.iOS.Controls.TextBlock", options);
    type->SetBase(::g::Fuse::iOS::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::TextBlock_typeof()));
    type->fp_ctor_ = (void*)TextBlock__New1_fn;
    type->fp_Attach = (void(*)(::g::Fuse::iOS::Controls::Control*))TextBlock__Attach_fn;
    type->fp_CreateInternal = (void(*)(::g::Fuse::iOS::Controls::Element*, ::g::iOS::UIKit::UIView**))TextBlock__CreateInternal_fn;
    type->fp_Detach = (void(*)(::g::Fuse::iOS::Controls::Control*))TextBlock__Detach_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseIChildObjectget_ParentObject_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::STRINGS[0] = uString::Const("");
    ::TYPES[81] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[82] = ::g::Fuse::iOS::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::TextBlock_typeof());
    ::TYPES[30] = ::g::Uno::EventHandler_typeof();
    ::TYPES[5] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[2] = ::g::ObjC::Bindings::Object_typeof();
    ::TYPES[8] = ::g::iOS::UIKit::UIView_typeof();
    ::TYPES[51] = ::g::Uno::Int_typeof();
    ::TYPES[46] = ::g::iOS::UIKit::UILabel_typeof();
    ::TYPES[83] = ::g::Fuse::Font_typeof();
    ::TYPES[52] = ::g::iOS::UIKit::UIFont_typeof();
    ::TYPES[9] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::String_typeof());
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::iOS::Controls::Control_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::iOS::Controls::Control_type, interface1));
    type->SetFields(58,
        ::g::iOS::UIKit::UILabel_typeof(), offsetof(::g::Fuse::iOS::Controls::TextBlock, _label), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TextBlock__New1_fn, 0, true, TextBlock_typeof(), 0));
    return type;
}

// public generated TextBlock() :1073
void TextBlock__ctor_3_fn(TextBlock* __this)
{
    __this->ctor_3();
}

// protected override sealed void Attach() :1088
void TextBlock__Attach_fn(TextBlock* __this)
{
    uStackFrame __("Fuse.iOS.Controls.TextBlock", "Attach()");
    __this->Create();
    uPtr((::g::Fuse::Controls::TextBlock*)__this->SemanticControl())->add_TextLayoutPropertyChanged(uDelegate::New(::TYPES[30/*Uno.EventHandler*/], (void*)TextBlock__OnTextLayoutPropertyChanged_fn, __this));
    uPtr((::g::Fuse::Controls::TextBlock*)__this->SemanticControl())->add_TextRenderPropertyChanged(uDelegate::New(::TYPES[30/*Uno.EventHandler*/], (void*)TextBlock__OnTextRenderPropertyChanged_fn, __this));
    uPtr((::g::Fuse::Controls::TextBlock*)__this->SemanticControl())->add_ValueChanged(uDelegate::New(::TYPES[5/*Uno.UX.ValueChangedHandler<string>*/], (void*)TextBlock__OnValueChanged_fn, __this));
    __this->OnTextLayoutPropertyChanged(NULL, NULL);
    __this->OnTextRenderPropertyChanged(NULL, NULL);
    __this->OnValueChanged(NULL, NULL);
}

// internal override sealed iOS.UIKit.UIView CreateInternal() :1078
void TextBlock__CreateInternal_fn(TextBlock* __this, ::g::iOS::UIKit::UIView** __retval)
{
    uStackFrame __("Fuse.iOS.Controls.TextBlock", "CreateInternal()");

    if (::g::ObjC::ID::op_Equality(::g::ObjC::Bindings::Object::op_Implicit(__this->_label), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
    {
        __this->_label = ::g::iOS::UIKit::UILabel::New9();
        uPtr(__this->_label)->init();
    }

    return *__retval = __this->_label, void();
}

// protected override sealed void Detach() :1099
void TextBlock__Detach_fn(TextBlock* __this)
{
    uStackFrame __("Fuse.iOS.Controls.TextBlock", "Detach()");
    uPtr((::g::Fuse::Controls::TextBlock*)__this->SemanticControl())->remove_TextLayoutPropertyChanged(uDelegate::New(::TYPES[30/*Uno.EventHandler*/], (void*)TextBlock__OnTextLayoutPropertyChanged_fn, __this));
    uPtr((::g::Fuse::Controls::TextBlock*)__this->SemanticControl())->remove_TextRenderPropertyChanged(uDelegate::New(::TYPES[30/*Uno.EventHandler*/], (void*)TextBlock__OnTextRenderPropertyChanged_fn, __this));
    uPtr((::g::Fuse::Controls::TextBlock*)__this->SemanticControl())->remove_ValueChanged(uDelegate::New(::TYPES[5/*Uno.UX.ValueChangedHandler<string>*/], (void*)TextBlock__OnValueChanged_fn, __this));
}

// public generated TextBlock New() :1073
void TextBlock__New1_fn(TextBlock** __retval)
{
    *__retval = TextBlock::New1();
}

// private void OnTextLayoutPropertyChanged(object sender, Uno.EventArgs args) :1106
void TextBlock__OnTextLayoutPropertyChanged_fn(TextBlock* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnTextLayoutPropertyChanged(sender, args);
}

// private void OnTextRenderPropertyChanged(object sender, Uno.EventArgs args) :1141
void TextBlock__OnTextRenderPropertyChanged_fn(TextBlock* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnTextRenderPropertyChanged(sender, args);
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<string> args) :1146
void TextBlock__OnValueChanged_fn(TextBlock* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnValueChanged(sender, args);
}

// public generated TextBlock() [instance] :1073
void TextBlock::ctor_3()
{
    uStackFrame __("Fuse.iOS.Controls.TextBlock", ".ctor()");
    ctor_2();
}

// private void OnTextLayoutPropertyChanged(object sender, Uno.EventArgs args) [instance] :1106
void TextBlock::OnTextLayoutPropertyChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.iOS.Controls.TextBlock", "OnTextLayoutPropertyChanged(object,Uno.EventArgs)");
    bool ret3;

    if (uPtr((::g::Fuse::Controls::TextBlock*)SemanticControl())->TextWrapping() == 0)
    {
        uPtr(_label)->LineBreakMode(4);
        uPtr(_label)->NumberOfLines(1);
    }
    else
    {
        uPtr(_label)->LineBreakMode(0);
        uPtr(_label)->NumberOfLines(0);
    }

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Controls::TextControl::FontProperty()), (::g::Fuse::Controls::TextBlock*)SemanticControl(), &ret3), ret3))
        uPtr(_label)->Font(::g::Fuse::iOS::FontCache::GetFontFromFile(uPtr(uPtr((::g::Fuse::Controls::TextBlock*)SemanticControl())->Font())->File(), uPtr((::g::Fuse::Controls::TextBlock*)SemanticControl())->FontSize()));
    else
        uPtr(_label)->Font(::g::Fuse::iOS::FontCache::GetDefaultFont(uPtr((::g::Fuse::Controls::TextBlock*)SemanticControl())->FontSize()));

    uPtr(_label)->Font(::g::Fuse::iOS::FontCache::CreateFontFromName(uPtr(uPtr(_label)->Font())->FontName(), uPtr((::g::Fuse::Controls::TextBlock*)SemanticControl())->FontSize()));

    switch (uPtr((::g::Fuse::Controls::TextBlock*)SemanticControl())->TextAlignment())
    {
        case 0:
        {
            uPtr(_label)->TextAlignment(0);
            break;
        }
        case 1:
        {
            uPtr(_label)->TextAlignment(1);
            break;
        }
        case 2:
        {
            uPtr(_label)->TextAlignment(2);
            break;
        }
    }

    InvalidateLayout(2);
}

// private void OnTextRenderPropertyChanged(object sender, Uno.EventArgs args) [instance] :1141
void TextBlock::OnTextRenderPropertyChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.iOS.Controls.TextBlock", "OnTextRenderPropertyChanged(object,Uno.EventArgs)");
    uPtr(_label)->TextColor(::g::Fuse::iOS::iOSExtensions::ToUIColor(uPtr((::g::Fuse::Controls::TextBlock*)SemanticControl())->TextColor()));
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<string> args) [instance] :1146
void TextBlock::OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    uStackFrame __("Fuse.iOS.Controls.TextBlock", "OnValueChanged(object,Uno.UX.ValueChangedArgs<string>)");
    uString* ind1;

    if ((args != NULL) && (uPtr(args)->Origin() == this))
        return;

    uPtr(_label)->Text((ind1 = uPtr((::g::Fuse::Controls::TextBlock*)SemanticControl())->Value(), (ind1 != NULL) ? ind1 : ::STRINGS[0/*""*/]));
    InvalidateLayout(2);
}

// public generated TextBlock New() [static] :1073
TextBlock* TextBlock::New1()
{
    TextBlock* obj2 = (TextBlock*)uNew(TextBlock_typeof());
    obj2->ctor_3();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.27.14/Controls/$.uno#10
// ----------------------------------------------------------------

// public sealed extern class TextInput :1178
// {
::g::Fuse::iOS::Controls::Control_type* TextInput_typeof()
{
    static uSStrong< ::g::Fuse::iOS::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 60;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TextInput);
    options.TypeSize = sizeof(::g::Fuse::iOS::Controls::Control_type);
    type = (::g::Fuse::iOS::Controls::Control_type*)uClassType::New("Fuse.iOS.Controls.TextInput", options);
    type->SetBase(::g::Fuse::iOS::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::TextEdit_typeof()));
    type->fp_ctor_ = (void*)TextInput__New1_fn;
    type->fp_Attach = (void(*)(::g::Fuse::iOS::Controls::Control*))TextInput__Attach_fn;
    type->fp_CreateInternal = (void(*)(::g::Fuse::iOS::Controls::Element*, ::g::iOS::UIKit::UIView**))TextInput__CreateInternal_fn;
    type->fp_Detach = (void(*)(::g::Fuse::iOS::Controls::Control*))TextInput__Detach_fn;
    type->fp_GetMarginSize = (void(*)(::g::Fuse::Node*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))TextInput__GetMarginSize_fn;
    type->fp_OnGotFocus = (void(*)(::g::Fuse::iOS::Controls::Control*))TextInput__OnGotFocus_fn;
    type->fp_OnLostFocus = (void(*)(::g::Fuse::iOS::Controls::Control*))TextInput__OnLostFocus_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseIChildObjectget_ParentObject_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[15] = ::g::Fuse::Node_typeof();
    ::TYPES[81] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[84] = ::g::Fuse::iOS::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::TextEdit_typeof());
    ::TYPES[30] = ::g::Uno::EventHandler_typeof();
    ::TYPES[5] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[2] = ::g::ObjC::Bindings::Object_typeof();
    ::TYPES[8] = ::g::iOS::UIKit::UIView_typeof();
    ::TYPES[70] = ::g::Fuse::iOS::Controls::ViewContainer_typeof();
    ::TYPES[71] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::iOS::CoreGraphics::CGRect_typeof());
    ::TYPES[85] = ::g::Fuse::Controls::TextEdit_typeof();
    ::TYPES[64] = ::g::Fuse::iOS::Controls::ITextInputImpl_typeof();
    ::TYPES[86] = ::g::Fuse::iOS::Controls::MultilineTextInput_typeof();
    ::TYPES[87] = ::g::Fuse::iOS::Controls::SingleLineTextInput_typeof();
    ::TYPES[49] = ::g::iOS::CoreGraphics::CGRect_typeof();
    ::TYPES[16] = uObject_typeof();
    ::TYPES[83] = ::g::Fuse::Font_typeof();
    ::TYPES[52] = ::g::iOS::UIKit::UIFont_typeof();
    ::TYPES[48] = ::g::iOS::UIKit::IUITextInput_typeof();
    ::TYPES[24] = ::g::Uno::Bool_typeof();
    ::TYPES[9] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::String_typeof());
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::iOS::Controls::Control_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::iOS::Controls::Control_type, interface1));
    type->SetFields(58,
        ::g::Fuse::iOS::Controls::ViewContainer_typeof(), offsetof(::g::Fuse::iOS::Controls::TextInput, _container), 0,
        ::g::Fuse::iOS::Controls::ITextInputImpl_typeof(), offsetof(::g::Fuse::iOS::Controls::TextInput, _textInputImpl), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TextInput__New1_fn, 0, true, TextInput_typeof(), 0));
    return type;
}

// public TextInput() :1241
void TextInput__ctor_3_fn(TextInput* __this)
{
    __this->ctor_3();
}

// protected override sealed void Attach() :1246
void TextInput__Attach_fn(TextInput* __this)
{
    uStackFrame __("Fuse.iOS.Controls.TextInput", "Attach()");
    __this->Create();
    uPtr((::g::Fuse::Controls::TextEdit*)__this->SemanticControl())->add_TextLayoutPropertyChanged(uDelegate::New(::TYPES[30/*Uno.EventHandler*/], (void*)TextInput__OnTextLayoutPropertyChanged_fn, __this));
    uPtr((::g::Fuse::Controls::TextEdit*)__this->SemanticControl())->add_TextRenderPropertyChanged(uDelegate::New(::TYPES[30/*Uno.EventHandler*/], (void*)TextInput__OnTextRenderPropertyChanged_fn, __this));
    uPtr((::g::Fuse::Controls::TextEdit*)__this->SemanticControl())->add_ValueChanged(uDelegate::New(::TYPES[5/*Uno.UX.ValueChangedHandler<string>*/], (void*)TextInput__OnValueChanged_fn, __this));
    __this->UpdateProperties();
}

// internal override sealed iOS.UIKit.UIView CreateInternal() :1214
void TextInput__CreateInternal_fn(TextInput* __this, ::g::iOS::UIKit::UIView** __retval)
{
    uStackFrame __("Fuse.iOS.Controls.TextInput", "CreateInternal()");

    if (::g::ObjC::ID::op_Equality(::g::ObjC::Bindings::Object::op_Implicit(__this->_container), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
    {
        __this->_container = ::g::Fuse::iOS::Controls::ViewContainer::New11();
        uPtr(__this->_container)->init();
        uPtr(__this->_container)->Opaque(false);
        uPtr(__this->_container)->AutoresizesSubviews(true);
        uPtr(__this->_container)->add_FrameChanged(uDelegate::New(::TYPES[71/*Uno.EventHandler<iOS.CoreGraphics.CGRect>*/], (void*)TextInput__OnFrameChanged_fn, __this));
    }

    return *__retval = __this->_container, void();
}

// protected override sealed void Detach() :1262
void TextInput__Detach_fn(TextInput* __this)
{
    uStackFrame __("Fuse.iOS.Controls.TextInput", "Detach()");
    uPtr((::g::Fuse::Controls::TextEdit*)__this->SemanticControl())->remove_TextLayoutPropertyChanged(uDelegate::New(::TYPES[30/*Uno.EventHandler*/], (void*)TextInput__OnTextLayoutPropertyChanged_fn, __this));
    uPtr((::g::Fuse::Controls::TextEdit*)__this->SemanticControl())->remove_TextRenderPropertyChanged(uDelegate::New(::TYPES[30/*Uno.EventHandler*/], (void*)TextInput__OnTextRenderPropertyChanged_fn, __this));
    uPtr((::g::Fuse::Controls::TextEdit*)__this->SemanticControl())->remove_ValueChanged(uDelegate::New(::TYPES[5/*Uno.UX.ValueChangedHandler<string>*/], (void*)TextInput__OnValueChanged_fn, __this));
}

// private void EnsureTextInputImpl() :1281
void TextInput__EnsureTextInputImpl_fn(TextInput* __this)
{
    __this->EnsureTextInputImpl();
}

// public override sealed float2 GetMarginSize(Fuse.LayoutParams lp) :1235
void TextInput__GetMarginSize_fn(TextInput* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.iOS.Controls.TextInput", "GetMarginSize(Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    __this->EnsureTextInputImpl();
    return *__retval = ::g::Fuse::iOS::iOSBindingView::GetContentSize(::g::Fuse::iOS::Controls::ITextInputImpl::View(uInterface(uPtr(__this->TextInputImpl()), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/])), lp_), void();
}

// public TextInput New() :1241
void TextInput__New1_fn(TextInput** __retval)
{
    *__retval = TextInput::New1();
}

// private void OnFrameChanged(object sender, iOS.CoreGraphics.CGRect frame) :1227
void TextInput__OnFrameChanged_fn(TextInput* __this, uObject* sender, ::g::iOS::CoreGraphics::CGRect* frame)
{
    __this->OnFrameChanged(sender, *frame);
}

// protected override sealed void OnGotFocus() :1269
void TextInput__OnGotFocus_fn(TextInput* __this)
{
    uStackFrame __("Fuse.iOS.Controls.TextInput", "OnGotFocus()");

    if (__this->TextInputImpl() != NULL)
        uPtr(::g::Fuse::iOS::Controls::ITextInputImpl::View(uInterface(uPtr(__this->TextInputImpl()), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/])))->becomeFirstResponder();
}

// protected override sealed void OnLostFocus() :1275
void TextInput__OnLostFocus_fn(TextInput* __this)
{
    uStackFrame __("Fuse.iOS.Controls.TextInput", "OnLostFocus()");

    if ((__this->TextInputImpl() != NULL) && uPtr(::g::Fuse::iOS::Controls::ITextInputImpl::View(uInterface(uPtr(__this->TextInputImpl()), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/])))->isFirstResponder())
        uPtr(::g::Fuse::iOS::Controls::ITextInputImpl::View(uInterface(uPtr(__this->TextInputImpl()), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/])))->resignFirstResponder();
}

// private void OnTextChanged(object sender, Uno.EventArgs args) :1362
void TextInput__OnTextChanged_fn(TextInput* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnTextChanged(sender, args);
}

// private void OnTextLayoutPropertyChanged(object sender, Uno.EventArgs args) :1288
void TextInput__OnTextLayoutPropertyChanged_fn(TextInput* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnTextLayoutPropertyChanged(sender, args);
}

// private void OnTextRenderPropertyChanged(object sender, Uno.EventArgs args) :1340
void TextInput__OnTextRenderPropertyChanged_fn(TextInput* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnTextRenderPropertyChanged(sender, args);
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<string> args) :1354
void TextInput__OnValueChanged_fn(TextInput* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnValueChanged(sender, args);
}

// private iOS.UIKit.UIReturnKeyType get_ReturnKeyType() :1326
void TextInput__get_ReturnKeyType_fn(TextInput* __this, int* __retval)
{
    *__retval = __this->ReturnKeyType();
}

// private Fuse.iOS.Controls.ITextInputImpl get_TextInputImpl() :1183
void TextInput__get_TextInputImpl_fn(TextInput* __this, uObject** __retval)
{
    *__retval = __this->TextInputImpl();
}

// private void set_TextInputImpl(Fuse.iOS.Controls.ITextInputImpl value) :1184
void TextInput__set_TextInputImpl_fn(TextInput* __this, uObject* value)
{
    __this->TextInputImpl(value);
}

// private void UpdateProperties() :1255
void TextInput__UpdateProperties_fn(TextInput* __this)
{
    __this->UpdateProperties();
}

// public TextInput() [instance] :1241
void TextInput::ctor_3()
{
    uStackFrame __("Fuse.iOS.Controls.TextInput", ".ctor()");
    ctor_2();
    ::g::Fuse::Input::Focus::SetIsFocusable(this, true);
}

// private void EnsureTextInputImpl() [instance] :1281
void TextInput::EnsureTextInputImpl()
{
    uStackFrame __("Fuse.iOS.Controls.TextInput", "EnsureTextInputImpl()");
    ::g::Fuse::iOS::Controls::MultilineTextInput* ind1;
    ::g::Fuse::iOS::Controls::SingleLineTextInput* ind2;
    TextInputImpl(uPtr((::g::Fuse::Controls::TextEdit*)SemanticControl())->IsMultiline() ? (uObject*)(ind1 = uAs< ::g::Fuse::iOS::Controls::MultilineTextInput*>(TextInputImpl(), ::TYPES[86/*Fuse.iOS.Controls.MultilineTextInput*/]), ((ind1 != NULL) ? ind1 : (::g::Fuse::iOS::Controls::MultilineTextInput*)::g::Fuse::iOS::Controls::MultilineTextInput::New1())) : (uObject*)(ind2 = uAs< ::g::Fuse::iOS::Controls::SingleLineTextInput*>(TextInputImpl(), ::TYPES[87/*Fuse.iOS.Controls.SingleLineTextInput*/]), ((ind2 != NULL) ? ind2 : (::g::Fuse::iOS::Controls::SingleLineTextInput*)::g::Fuse::iOS::Controls::SingleLineTextInput::New1())));
}

// private void OnFrameChanged(object sender, iOS.CoreGraphics.CGRect frame) [instance] :1227
void TextInput::OnFrameChanged(uObject* sender, ::g::iOS::CoreGraphics::CGRect frame)
{
    uStackFrame __("Fuse.iOS.Controls.TextInput", "OnFrameChanged(object,iOS.CoreGraphics.CGRect)");

    if (TextInputImpl() != NULL)
        ::g::Fuse::iOS::Controls::ITextInputImpl::Frame(uInterface(uPtr(TextInputImpl()), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/]), ::g::iOS::CoreGraphics::CGRect__New1(::g::Fuse::iOS::Controls::ITextInputImpl::Frame(uInterface(uPtr(TextInputImpl()), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/])).Origin, frame.Size));
}

// private void OnTextChanged(object sender, Uno.EventArgs args) [instance] :1362
void TextInput::OnTextChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.iOS.Controls.TextInput", "OnTextChanged(object,Uno.EventArgs)");
    uPtr((::g::Fuse::Controls::TextEdit*)SemanticControl())->SetValue1(::g::Fuse::iOS::Controls::ITextInputImpl::Text(uInterface(uPtr(TextInputImpl()), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/])), this);
    InvalidateLayout(2);
    ::g::Fuse::UpdateManager::ForceLayoutUpdateNow();
}

// private void OnTextLayoutPropertyChanged(object sender, Uno.EventArgs args) [instance] :1288
void TextInput::OnTextLayoutPropertyChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.iOS.Controls.TextInput", "OnTextLayoutPropertyChanged(object,Uno.EventArgs)");
    bool ret4;
    EnsureTextInputImpl();

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Controls::TextControl::FontProperty()), (::g::Fuse::Controls::TextEdit*)SemanticControl(), &ret4), ret4))
        ::g::Fuse::iOS::Controls::ITextInputImpl::Font(uInterface(uPtr(TextInputImpl()), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/]), ::g::Fuse::iOS::FontCache::GetFontFromFile(uPtr(uPtr((::g::Fuse::Controls::TextEdit*)SemanticControl())->Font())->File(), uPtr((::g::Fuse::Controls::TextEdit*)SemanticControl())->FontSize()));
    else
        ::g::Fuse::iOS::Controls::ITextInputImpl::Font(uInterface(uPtr(TextInputImpl()), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/]), ::g::Fuse::iOS::FontCache::GetDefaultFont(uPtr((::g::Fuse::Controls::TextEdit*)SemanticControl())->FontSize()));

    ::g::Fuse::iOS::Controls::ITextInputImpl::Font(uInterface(uPtr(TextInputImpl()), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/]), ::g::Fuse::iOS::FontCache::CreateFontFromName(uPtr(::g::Fuse::iOS::Controls::ITextInputImpl::Font(uInterface(uPtr(TextInputImpl()), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/])))->FontName(), uPtr((::g::Fuse::Controls::TextEdit*)SemanticControl())->FontSize()));
    ::g::Fuse::iOS::Controls::ITextInputImpl::TextAlignment(uInterface(uPtr(TextInputImpl()), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/]), ::g::Fuse::iOS::iOSInterop::ToNSTextAlignment(uPtr((::g::Fuse::Controls::TextEdit*)SemanticControl())->TextAlignment()));
    ::g::iOS::UIKit::IUITextInput::setSecureTextEntry(uInterface(uPtr(::g::Fuse::iOS::Controls::ITextInputImpl::IUITextInput(uInterface(uPtr(TextInputImpl()), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/]))), ::TYPES[48/*iOS.UIKit.IUITextInput*/]), uPtr((::g::Fuse::Controls::TextEdit*)SemanticControl())->IsPassword());

    switch (uPtr((::g::Fuse::Controls::TextEdit*)SemanticControl())->InputHint())
    {
        case 0:
        {
            ::g::iOS::UIKit::IUITextInput::KeyboardType(uInterface(uPtr(::g::Fuse::iOS::Controls::ITextInputImpl::IUITextInput(uInterface(uPtr(TextInputImpl()), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/]))), ::TYPES[48/*iOS.UIKit.IUITextInput*/]), 0);
            break;
        }
        case 1:
        {
            ::g::iOS::UIKit::IUITextInput::KeyboardType(uInterface(uPtr(::g::Fuse::iOS::Controls::ITextInputImpl::IUITextInput(uInterface(uPtr(TextInputImpl()), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/]))), ::TYPES[48/*iOS.UIKit.IUITextInput*/]), 7);
            break;
        }
        case 2:
        {
            ::g::iOS::UIKit::IUITextInput::KeyboardType(uInterface(uPtr(::g::Fuse::iOS::Controls::ITextInputImpl::IUITextInput(uInterface(uPtr(TextInputImpl()), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/]))), ::TYPES[48/*iOS.UIKit.IUITextInput*/]), 3);
            break;
        }
        case 3:
        {
            ::g::iOS::UIKit::IUITextInput::KeyboardType(uInterface(uPtr(::g::Fuse::iOS::Controls::ITextInputImpl::IUITextInput(uInterface(uPtr(TextInputImpl()), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/]))), ::TYPES[48/*iOS.UIKit.IUITextInput*/]), 5);
            break;
        }
        case 4:
        {
            ::g::iOS::UIKit::IUITextInput::KeyboardType(uInterface(uPtr(::g::Fuse::iOS::Controls::ITextInputImpl::IUITextInput(uInterface(uPtr(TextInputImpl()), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/]))), ::TYPES[48/*iOS.UIKit.IUITextInput*/]), 4);
            break;
        }
        case 5:
        {
            ::g::iOS::UIKit::IUITextInput::KeyboardType(uInterface(uPtr(::g::Fuse::iOS::Controls::ITextInputImpl::IUITextInput(uInterface(uPtr(TextInputImpl()), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/]))), ::TYPES[48/*iOS.UIKit.IUITextInput*/]), 8);
            break;
        }
    }

    if (!uPtr((::g::Fuse::Controls::TextEdit*)SemanticControl())->IsMultiline())
        ::g::iOS::UIKit::IUITextInput::setReturnKeyType(uInterface(uPtr(::g::Fuse::iOS::Controls::ITextInputImpl::IUITextInput(uInterface(uPtr(TextInputImpl()), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/]))), ::TYPES[48/*iOS.UIKit.IUITextInput*/]), ReturnKeyType());
}

// private void OnTextRenderPropertyChanged(object sender, Uno.EventArgs args) [instance] :1340
void TextInput::OnTextRenderPropertyChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.iOS.Controls.TextInput", "OnTextRenderPropertyChanged(object,Uno.EventArgs)");
    bool ret5;
    bool ret6;
    bool ret7;
    ::g::Fuse::iOS::Controls::ITextInputImpl::TextColor(uInterface(uPtr(TextInputImpl()), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/]), ::g::Fuse::iOS::iOSExtensions::ToUIColor(uPtr((::g::Fuse::Controls::TextEdit*)SemanticControl())->TextColor()));

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Controls::TextEdit::CaretColorProperty()), (::g::Fuse::Controls::TextEdit*)SemanticControl(), &ret5), ret5))
        ::g::Fuse::iOS::Controls::ITextInputImpl::CaretColor(uInterface(uPtr(TextInputImpl()), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/]), ::g::Fuse::iOS::iOSExtensions::ToUIColor(uPtr((::g::Fuse::Controls::TextEdit*)SemanticControl())->CaretColor()));

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Controls::TextEdit::PlaceholderTextProperty()), (::g::Fuse::Controls::TextEdit*)SemanticControl(), &ret6), ret6))
        ::g::Fuse::iOS::Controls::ITextInputImpl::PlaceholderText(uInterface(uPtr(TextInputImpl()), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/]), uPtr((::g::Fuse::Controls::TextEdit*)SemanticControl())->PlaceholderText());

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Controls::TextEdit::PlaceholderColorProperty()), (::g::Fuse::Controls::TextEdit*)SemanticControl(), &ret7), ret7))
        ::g::Fuse::iOS::Controls::ITextInputImpl::PlaceholderColor(uInterface(uPtr(TextInputImpl()), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/]), ::g::Fuse::iOS::iOSExtensions::ToUIColor(uPtr((::g::Fuse::Controls::TextEdit*)SemanticControl())->PlaceholderColor()));
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<string> args) [instance] :1354
void TextInput::OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    uStackFrame __("Fuse.iOS.Controls.TextInput", "OnValueChanged(object,Uno.UX.ValueChangedArgs<string>)");

    if ((args != NULL) && (uPtr(args)->Origin() == this))
        return;

    ::g::Fuse::iOS::Controls::ITextInputImpl::Text(uInterface(uPtr(TextInputImpl()), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/]), uPtr((::g::Fuse::Controls::TextEdit*)SemanticControl())->Value());
}

// private iOS.UIKit.UIReturnKeyType get_ReturnKeyType() [instance] :1326
int TextInput::ReturnKeyType()
{
    uStackFrame __("Fuse.iOS.Controls.TextInput", "get_ReturnKeyType()");

    switch (uPtr((::g::Fuse::Controls::TextEdit*)SemanticControl())->ActionStyle())
    {
        case 1:
            return 9;
        case 2:
            return 4;
        case 3:
            return 1;
        case 4:
            return 6;
        case 5:
            return 7;
    }

    return 0;
}

// private Fuse.iOS.Controls.ITextInputImpl get_TextInputImpl() [instance] :1183
uObject* TextInput::TextInputImpl()
{
    uStackFrame __("Fuse.iOS.Controls.TextInput", "get_TextInputImpl()");
    return _textInputImpl;
}

// private void set_TextInputImpl(Fuse.iOS.Controls.ITextInputImpl value) [instance] :1184
void TextInput::TextInputImpl(uObject* value)
{
    uStackFrame __("Fuse.iOS.Controls.TextInput", "set_TextInputImpl(Fuse.iOS.Controls.ITextInputImpl)");

    if (_textInputImpl == value)
        return;

    if (_textInputImpl != NULL)
    {
        ::g::Fuse::iOS::NativeViews::NativeView::UnmapView(::g::Fuse::iOS::Controls::ITextInputImpl::View(uInterface(uPtr(_textInputImpl), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/])));
        ::g::Fuse::iOS::Controls::ITextInputImpl::remove_TextChanged(uInterface(uPtr(_textInputImpl), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/]), uDelegate::New(::TYPES[30/*Uno.EventHandler*/], (void*)TextInput__OnTextChanged_fn, this));
        uPtr(::g::Fuse::iOS::Controls::ITextInputImpl::View(uInterface(uPtr(_textInputImpl), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/])))->removeFromSuperview();
    }

    _textInputImpl = value;

    if (_textInputImpl != NULL)
    {
        ::g::Fuse::iOS::NativeViews::NativeView::MapView(::g::Fuse::iOS::Controls::ITextInputImpl::View(uInterface(uPtr(_textInputImpl), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/])), this);
        ::g::Fuse::iOS::Controls::ITextInputImpl::add_TextChanged(uInterface(uPtr(_textInputImpl), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/]), uDelegate::New(::TYPES[30/*Uno.EventHandler*/], (void*)TextInput__OnTextChanged_fn, this));
        ::g::Fuse::iOS::Controls::ITextInputImpl::Text(uInterface(uPtr(_textInputImpl), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/]), uPtr((::g::Fuse::Controls::TextEdit*)SemanticControl())->Value());
        uPtr(_container)->addSubview(::g::Fuse::iOS::Controls::ITextInputImpl::View(uInterface(uPtr(_textInputImpl), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/])));
        uPtr(::g::Fuse::iOS::Controls::ITextInputImpl::View(uInterface(uPtr(_textInputImpl), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/])))->sizeToFit();
        uPtr(::g::Fuse::iOS::Controls::ITextInputImpl::View(uInterface(uPtr(_textInputImpl), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/])))->setNeedsDisplay();
        ::g::Fuse::iOS::Controls::ITextInputImpl::SemanticControl(uInterface(uPtr(_textInputImpl), ::TYPES[64/*Fuse.iOS.Controls.ITextInputImpl*/]), (::g::Fuse::Controls::TextEdit*)SemanticControl());
        uPtr(_container)->setNeedsDisplay();
        UpdateProperties();
    }
}

// private void UpdateProperties() [instance] :1255
void TextInput::UpdateProperties()
{
    uStackFrame __("Fuse.iOS.Controls.TextInput", "UpdateProperties()");
    OnTextLayoutPropertyChanged(NULL, NULL);
    OnTextRenderPropertyChanged(NULL, NULL);
    OnValueChanged(NULL, NULL);
}

// public TextInput New() [static] :1241
TextInput* TextInput::New1()
{
    TextInput* obj3 = (TextInput*)uNew(TextInput_typeof());
    obj3->ctor_3();
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.27.14/Controls/$.uno#7
// ---------------------------------------------------------------

// internal sealed extern class ViewContainer :879
// {
::g::iOS::UIKit::UIView_type* ViewContainer_typeof()
{
    static uSStrong< ::g::iOS::UIKit::UIView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ViewContainer);
    options.TypeSize = sizeof(::g::iOS::UIKit::UIView_type);
    type = (::g::iOS::UIKit::UIView_type*)uClassType::New("Fuse.iOS.Controls.ViewContainer", options);
    type->SetBase(::g::iOS::UIKit::UIControl_typeof());
    type->fp_ctor_ = (void*)ViewContainer__New11_fn;
    type->fp_setFrame = (void(*)(::g::iOS::UIKit::UIView*, ::g::iOS::CoreGraphics::CGRect*))ViewContainer__setFrame_fn;
    type->interface1.fp_convertPointToCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGPoint*, uObject*, ::g::iOS::CoreGraphics::CGPoint*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertPointToCoordinateSpace_fn;
    type->interface1.fp_convertPointFromCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGPoint*, uObject*, ::g::iOS::CoreGraphics::CGPoint*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertPointFromCoordinateSpace_fn;
    type->interface1.fp_convertRectToCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*, uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertRectToCoordinateSpace_fn;
    type->interface1.fp_convertRectFromCoordinateSpace = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*, uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__iOSUIKitIUICoordinateSpaceconvertRectFromCoordinateSpace_fn;
    type->interface1.fp_bounds = (void(*)(uObject*, ::g::iOS::CoreGraphics::CGRect*))::g::iOS::UIKit::UIView__bounds_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    ::TYPES[43] = ::g::Uno::Delegate_typeof();
    ::TYPES[71] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::iOS::CoreGraphics::CGRect_typeof());
    ::TYPES[16] = uObject_typeof();
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(::g::iOS::UIKit::UIView_type, interface0),
        ::g::iOS::UIKit::IUICoordinateSpace_typeof(), offsetof(::g::iOS::UIKit::UIView_type, interface1));
    type->SetFields(1,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::iOS::CoreGraphics::CGRect_typeof()), offsetof(::g::Fuse::iOS::Controls::ViewContainer, FrameChanged1), 0);
    return type;
}

// public generated ViewContainer() :879
void ViewContainer__ctor_10_fn(ViewContainer* __this)
{
    __this->ctor_10();
}

// public generated void add_FrameChanged(Uno.EventHandler<iOS.CoreGraphics.CGRect> value) :881
void ViewContainer__add_FrameChanged_fn(ViewContainer* __this, uDelegate* value)
{
    __this->add_FrameChanged(value);
}

// public generated void remove_FrameChanged(Uno.EventHandler<iOS.CoreGraphics.CGRect> value) :881
void ViewContainer__remove_FrameChanged_fn(ViewContainer* __this, uDelegate* value)
{
    __this->remove_FrameChanged(value);
}

// public generated ViewContainer New() :879
void ViewContainer__New11_fn(ViewContainer** __retval)
{
    *__retval = ViewContainer::New11();
}

// public override sealed void setFrame(iOS.CoreGraphics.CGRect frame) :883
void ViewContainer__setFrame_fn(ViewContainer* __this, ::g::iOS::CoreGraphics::CGRect* frame1)
{
    uStackFrame __("Fuse.iOS.Controls.ViewContainer", "setFrame(iOS.CoreGraphics.CGRect)");
    ::g::iOS::CoreGraphics::CGRect frame1_ = *frame1;
    ::g::iOS::UIKit::UIView__setFrame_fn(__this, uCRef(frame1_));

    if (::g::Uno::Delegate::op_Inequality(__this->FrameChanged1, NULL))
        uPtr(__this->FrameChanged1)->Invoke(2, __this, uCRef(frame1_));
}

// public generated ViewContainer() [instance] :879
void ViewContainer::ctor_10()
{
    uStackFrame __("Fuse.iOS.Controls.ViewContainer", ".ctor()");
    ctor_8();
}

// public generated void add_FrameChanged(Uno.EventHandler<iOS.CoreGraphics.CGRect> value) [instance] :881
void ViewContainer::add_FrameChanged(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.ViewContainer", "add_FrameChanged(Uno.EventHandler<iOS.CoreGraphics.CGRect>)");
    FrameChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(FrameChanged1, value), ::TYPES[71/*Uno.EventHandler<iOS.CoreGraphics.CGRect>*/]);
}

// public generated void remove_FrameChanged(Uno.EventHandler<iOS.CoreGraphics.CGRect> value) [instance] :881
void ViewContainer::remove_FrameChanged(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.ViewContainer", "remove_FrameChanged(Uno.EventHandler<iOS.CoreGraphics.CGRect>)");
    FrameChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(FrameChanged1, value), ::TYPES[71/*Uno.EventHandler<iOS.CoreGraphics.CGRect>*/]);
}

// public generated ViewContainer New() [static] :879
ViewContainer* ViewContainer::New11()
{
    ViewContainer* obj1 = (ViewContainer*)uNew(ViewContainer_typeof());
    obj1->ctor_10();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.27.14/Controls/$.uno#11
// ----------------------------------------------------------------

// public sealed extern class WebView :1760
// {
//  ~WebView() :1780
static void WebView__Finalize_fn(WebView* __this)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "Finalize()");

    if (::g::ObjC::ID::op_Inequality(::g::ObjC::Bindings::Object::op_Implicit(__this->_iOSWebView), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
        ::g::Uno::Platform2::Application::remove_ReceivedLowMemoryWarning(uDelegate::New(::TYPES[30/*Uno.EventHandler*/], (void*)WebView__OnLowMemory_fn, __this));
}

WebView_type* WebView_typeof()
{
    static uSStrong<WebView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 67;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(WebView);
    options.TypeSize = sizeof(WebView_type);
    type = (WebView_type*)uClassType::New("Fuse.iOS.Controls.WebView", options);
    type->SetBase(::g::Fuse::iOS::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::WebView_typeof()));
    type->fp_ctor_ = (void*)WebView__New1_fn;
    type->fp_Finalize = (void(*)(uObject*))WebView__Finalize_fn;
    type->fp_Attach = (void(*)(::g::Fuse::iOS::Controls::Control*))WebView__Attach_fn;
    type->fp_CreateInternal = (void(*)(::g::Fuse::iOS::Controls::Element*, ::g::iOS::UIKit::UIView**))WebView__CreateInternal_fn;
    type->fp_Detach = (void(*)(::g::Fuse::iOS::Controls::Control*))WebView__Detach_fn;
    type->interface2.fp_Eval1 = (void(*)(uObject*, uString*, uDelegate*))WebView__Eval1_fn;
    type->interface2.fp_Eval = (void(*)(uObject*, uString*))WebView__Eval_fn;
    type->interface2.fp_LoadHtml = (void(*)(uObject*, uString*))WebView__LoadHtml_fn;
    type->interface2.fp_LoadHtml1 = (void(*)(uObject*, uString*, uString*))WebView__LoadHtml1_fn;
    type->interface2.fp_LoadUrl = (void(*)(uObject*, uString*))WebView__LoadUrl_fn;
    type->interface2.fp_Stop = (void(*)(uObject*))WebView__Stop_fn;
    type->interface2.fp_Reload = (void(*)(uObject*))WebView__Reload_fn;
    type->interface2.fp_get_BaseUrl = (void(*)(uObject*, uString**))WebView__get_BaseUrl_fn;
    type->interface2.fp_set_BaseUrl = (void(*)(uObject*, uString*))WebView__set_BaseUrl_fn;
    type->interface2.fp_get_Url = (void(*)(uObject*, uString**))WebView__get_Url_fn;
    type->interface2.fp_set_Url = (void(*)(uObject*, uString*))WebView__set_Url_fn;
    type->interface2.fp_get_DocumentTitle = (void(*)(uObject*, uString**))WebView__get_DocumentTitle_fn;
    type->interface2.fp_get_File = (void(*)(uObject*, ::g::Uno::UX::FileSource**))WebView__get_File_fn;
    type->interface2.fp_set_File = (void(*)(uObject*, ::g::Uno::UX::FileSource*))WebView__set_File_fn;
    type->interface2.fp_add_PageLoaded = (void(*)(uObject*, uDelegate*))WebView__add_PageLoaded_fn;
    type->interface2.fp_remove_PageLoaded = (void(*)(uObject*, uDelegate*))WebView__remove_PageLoaded_fn;
    type->interface2.fp_add_BeginLoading = (void(*)(uObject*, uDelegate*))WebView__add_BeginLoading_fn;
    type->interface2.fp_remove_BeginLoading = (void(*)(uObject*, uDelegate*))WebView__remove_BeginLoading_fn;
    type->interface2.fp_add_UrlChanged = (void(*)(uObject*, uDelegate*))WebView__add_UrlChanged_fn;
    type->interface2.fp_remove_UrlChanged = (void(*)(uObject*, uDelegate*))WebView__remove_UrlChanged_fn;
    type->interface3.fp_webViewDidStartProvisionalNavigation = (void(*)(uObject*, ::g::iOS::WebKit::WKWebView*, ::g::iOS::WebKit::WKNavigation*))WebView__webViewDidStartProvisionalNavigation_fn;
    type->interface3.fp_webViewDidReceiveServerRedirectForProvisionalNavigation = (void(*)(uObject*, ::g::iOS::WebKit::WKWebView*, ::g::iOS::WebKit::WKNavigation*))WebView__webViewDidReceiveServerRedirectForProvisionalNavigation_fn;
    type->interface3.fp_webViewDidFailProvisionalNavigationWithError = (void(*)(uObject*, ::g::iOS::WebKit::WKWebView*, ::g::iOS::WebKit::WKNavigation*, ::g::iOS::Foundation::NSError*))WebView__webViewDidFailProvisionalNavigationWithError_fn;
    type->interface3.fp_webViewDidCommitNavigation = (void(*)(uObject*, ::g::iOS::WebKit::WKWebView*, ::g::iOS::WebKit::WKNavigation*))WebView__webViewDidCommitNavigation_fn;
    type->interface3.fp_webViewDidFinishNavigation = (void(*)(uObject*, ::g::iOS::WebKit::WKWebView*, ::g::iOS::WebKit::WKNavigation*))WebView__webViewDidFinishNavigation_fn;
    type->interface3.fp_webViewDidFailNavigationWithError = (void(*)(uObject*, ::g::iOS::WebKit::WKWebView*, ::g::iOS::WebKit::WKNavigation*, ::g::iOS::Foundation::NSError*))WebView__webViewDidFailNavigationWithError_fn;
    type->interface4.fp_get_Progress = (void(*)(uObject*, double*))WebView__get_Progress_fn;
    type->interface4.fp_add_ProgressChanged = (void(*)(uObject*, uDelegate*))WebView__add_ProgressChanged_fn;
    type->interface4.fp_remove_ProgressChanged = (void(*)(uObject*, uDelegate*))WebView__remove_ProgressChanged_fn;
    type->interface5.fp_GoForward = (void(*)(uObject*))WebView__GoForward_fn;
    type->interface5.fp_GoBack = (void(*)(uObject*))WebView__GoBack_fn;
    type->interface5.fp_get_CanGoBack = (void(*)(uObject*, bool*))WebView__get_CanGoBack_fn;
    type->interface5.fp_get_CanGoForward = (void(*)(uObject*, bool*))WebView__get_CanGoForward_fn;
    type->interface6.fp_get_Source = (void(*)(uObject*, uString**))WebView__get_Source_fn;
    type->interface6.fp_set_Source = (void(*)(uObject*, uString*))WebView__set_Source_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseIChildObjectget_ParentObject_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[6] = uString::Const("about:blank");
    ::STRINGS[7] = uString::Const("low mem in WebView");
    ::STRINGS[8] = uString::Const("/usr/local/share/uno/Packages/Fuse.iOS/0.27.14/Controls/$.uno#11");
    ::STRINGS[9] = uString::Const("freeing mem in WebView");
    ::TYPES[2] = ::g::ObjC::Bindings::Object_typeof();
    ::TYPES[88] = ::g::Uno::Platform2::Application_typeof();
    ::TYPES[30] = ::g::Uno::EventHandler_typeof();
    ::TYPES[89] = ::g::Fuse::Controls::WebView_typeof();
    ::TYPES[90] = ::g::Fuse::iOS::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::WebView_typeof());
    ::TYPES[91] = ::g::Fuse::Controls::IWebView_typeof();
    ::TYPES[92] = ::g::iOS::WebKit::IWKNavigationDelegate_typeof();
    ::TYPES[8] = ::g::iOS::UIKit::UIView_typeof();
    ::TYPES[43] = ::g::Uno::Delegate_typeof();
    ::TYPES[74] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[16] = uObject_typeof();
    ::TYPES[93] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[24] = ::g::Uno::Bool_typeof();
    ::TYPES[94] = ::g::iOS::WebKit::WKWebView_typeof();
    ::TYPES[26] = ::g::Uno::Action_typeof();
    ::TYPES[44] = ::g::Uno::EventArgs_typeof();
    ::TYPES[95] = ::g::iOS::Foundation::NSURL_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(WebView_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(WebView_type, interface1),
        ::g::Fuse::Controls::IWebView_typeof(), offsetof(WebView_type, interface2),
        ::g::iOS::WebKit::IWKNavigationDelegate_typeof(), offsetof(WebView_type, interface3),
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(WebView_type, interface4),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(WebView_type, interface5),
        ::g::Fuse::Controls::ISourceReceiver_typeof(), offsetof(WebView_type, interface6));
    type->SetFields(58,
        ::g::Uno::UX::FileSource_typeof(), offsetof(::g::Fuse::iOS::Controls::WebView, _file), 0,
        ::g::iOS::WebKit::WKWebView_typeof(), offsetof(::g::Fuse::iOS::Controls::WebView, _iOSWebView), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::iOS::Controls::WebView, _isUpdating), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::iOS::Controls::WebView, _source), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::iOS::Controls::WebView, _BaseUrl), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::iOS::Controls::WebView, BeginLoading1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::iOS::Controls::WebView, PageLoaded1), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof()), offsetof(::g::Fuse::iOS::Controls::WebView, ProgressChanged1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::iOS::Controls::WebView, UrlChanged1), 0);
    type->Reflection.SetFunctions(36,
        new uFunction("get_BaseUrl", NULL, (void*)WebView__get_BaseUrl_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_BaseUrl", NULL, (void*)WebView__set_BaseUrl_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("add_BeginLoading", NULL, (void*)WebView__add_BeginLoading_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_BeginLoading", NULL, (void*)WebView__remove_BeginLoading_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_CanGoBack", NULL, (void*)WebView__get_CanGoBack_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanGoForward", NULL, (void*)WebView__get_CanGoForward_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_DocumentTitle", NULL, (void*)WebView__get_DocumentTitle_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("Eval", NULL, (void*)WebView__Eval_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Eval", NULL, (void*)WebView__Eval1_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof())),
        new uFunction("get_File", NULL, (void*)WebView__get_File_fn, 0, false, ::g::Uno::UX::FileSource_typeof(), 0),
        new uFunction("set_File", NULL, (void*)WebView__set_File_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::FileSource_typeof()),
        new uFunction("GoBack", NULL, (void*)WebView__GoBack_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("GoForward", NULL, (void*)WebView__GoForward_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("LoadHtml", NULL, (void*)WebView__LoadHtml_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("LoadHtml", NULL, (void*)WebView__LoadHtml1_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("LoadUrl", NULL, (void*)WebView__LoadUrl_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)WebView__New1_fn, 0, true, WebView_typeof(), 0),
        new uFunction("add_PageLoaded", NULL, (void*)WebView__add_PageLoaded_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_PageLoaded", NULL, (void*)WebView__remove_PageLoaded_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_Progress", NULL, (void*)WebView__get_Progress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("add_ProgressChanged", NULL, (void*)WebView__add_ProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof())),
        new uFunction("remove_ProgressChanged", NULL, (void*)WebView__remove_ProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof())),
        new uFunction("Reload", NULL, (void*)WebView__Reload_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Source", NULL, (void*)WebView__get_Source_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Source", NULL, (void*)WebView__set_Source_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Stop", NULL, (void*)WebView__Stop_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Url", NULL, (void*)WebView__get_Url_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Url", NULL, (void*)WebView__set_Url_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("add_UrlChanged", NULL, (void*)WebView__add_UrlChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_UrlChanged", NULL, (void*)WebView__remove_UrlChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("webViewDidCommitNavigation", NULL, (void*)WebView__webViewDidCommitNavigation_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::WebKit::WKWebView_typeof(), ::g::iOS::WebKit::WKNavigation_typeof()),
        new uFunction("webViewDidFailNavigationWithError", NULL, (void*)WebView__webViewDidFailNavigationWithError_fn, 0, false, uVoid_typeof(), 3, ::g::iOS::WebKit::WKWebView_typeof(), ::g::iOS::WebKit::WKNavigation_typeof(), ::g::iOS::Foundation::NSError_typeof()),
        new uFunction("webViewDidFailProvisionalNavigationWithError", NULL, (void*)WebView__webViewDidFailProvisionalNavigationWithError_fn, 0, false, uVoid_typeof(), 3, ::g::iOS::WebKit::WKWebView_typeof(), ::g::iOS::WebKit::WKNavigation_typeof(), ::g::iOS::Foundation::NSError_typeof()),
        new uFunction("webViewDidFinishNavigation", NULL, (void*)WebView__webViewDidFinishNavigation_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::WebKit::WKWebView_typeof(), ::g::iOS::WebKit::WKNavigation_typeof()),
        new uFunction("webViewDidReceiveServerRedirectForProvisionalNavigation", NULL, (void*)WebView__webViewDidReceiveServerRedirectForProvisionalNavigation_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::WebKit::WKWebView_typeof(), ::g::iOS::WebKit::WKNavigation_typeof()),
        new uFunction("webViewDidStartProvisionalNavigation", NULL, (void*)WebView__webViewDidStartProvisionalNavigation_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::WebKit::WKWebView_typeof(), ::g::iOS::WebKit::WKNavigation_typeof()));
    return type;
}

// public generated WebView() :1760
void WebView__ctor_3_fn(WebView* __this)
{
    __this->ctor_3();
}

// protected override sealed void Attach() :1797
void WebView__Attach_fn(WebView* __this)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "Attach()");
    __this->Create();
    uPtr((::g::Fuse::Controls::WebView*)__this->SemanticControl())->WebViewClient((uObject*)__this);
}

// public generated string get_BaseUrl() :1809
void WebView__get_BaseUrl_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->BaseUrl();
}

// public generated void set_BaseUrl(string value) :1809
void WebView__set_BaseUrl_fn(WebView* __this, uString* value)
{
    __this->BaseUrl(value);
}

// public generated void add_BeginLoading(Uno.EventHandler value) :1922
void WebView__add_BeginLoading_fn(WebView* __this, uDelegate* value)
{
    __this->add_BeginLoading(value);
}

// public generated void remove_BeginLoading(Uno.EventHandler value) :1922
void WebView__remove_BeginLoading_fn(WebView* __this, uDelegate* value)
{
    __this->remove_BeginLoading(value);
}

// public bool get_CanGoBack() :1894
void WebView__get_CanGoBack_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->CanGoBack();
}

// public bool get_CanGoForward() :1896
void WebView__get_CanGoForward_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->CanGoForward();
}

// internal override sealed iOS.UIKit.UIView CreateInternal() :1768
void WebView__CreateInternal_fn(WebView* __this, ::g::iOS::UIKit::UIView** __retval)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "CreateInternal()");

    if (::g::ObjC::ID::op_Equality(::g::ObjC::Bindings::Object::op_Implicit(__this->_iOSWebView), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
    {
        __this->_iOSWebView = ::g::iOS::WebKit::WKWebView::New9();
        uPtr(__this->_iOSWebView)->init();
        uPtr(__this->_iOSWebView)->setNavigationDelegate((uObject*)__this);
        ::g::Uno::Platform2::Application::add_ReceivedLowMemoryWarning(uDelegate::New(::TYPES[30/*Uno.EventHandler*/], (void*)WebView__OnLowMemory_fn, __this));
    }

    return *__retval = __this->_iOSWebView, void();
}

// protected override sealed void Detach() :1804
void WebView__Detach_fn(WebView* __this)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "Detach()");
    uPtr((::g::Fuse::Controls::WebView*)__this->SemanticControl())->WebViewClient(NULL);
}

// public string get_DocumentTitle() :1892
void WebView__get_DocumentTitle_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->DocumentTitle();
}

// public void Eval(string js) :1853
void WebView__Eval_fn(WebView* __this, uString* js)
{
    __this->Eval(js);
}

// public void Eval(string js, Uno.Action<string> onResult) :1858
void WebView__Eval1_fn(WebView* __this, uString* js, uDelegate* onResult)
{
    __this->Eval1(js, onResult);
}

// public Uno.UX.FileSource get_File() :1866
void WebView__get_File_fn(WebView* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :1867
void WebView__set_File_fn(WebView* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public void GoBack() :1898
void WebView__GoBack_fn(WebView* __this)
{
    __this->GoBack();
}

// public void GoForward() :1900
void WebView__GoForward_fn(WebView* __this)
{
    __this->GoForward();
}

// private void LoadFile(Uno.UX.FileSource file) :1880
void WebView__LoadFile_fn(WebView* __this, ::g::Uno::UX::FileSource* file)
{
    __this->LoadFile(file);
}

// public void LoadHtml(string html) :1818
void WebView__LoadHtml_fn(WebView* __this, uString* html)
{
    __this->LoadHtml(html);
}

// public void LoadHtml(string html, string baseUrl) :1824
void WebView__LoadHtml1_fn(WebView* __this, uString* html, uString* baseUrl)
{
    __this->LoadHtml1(html, baseUrl);
}

// private void LoadHTML(string html) :1875
void WebView__LoadHTML_fn(WebView* __this, uString* html)
{
    __this->LoadHTML(html);
}

// public void LoadUrl(string url) :1906
void WebView__LoadUrl_fn(WebView* __this, uString* url)
{
    __this->LoadUrl(url);
}

// public generated WebView New() :1760
void WebView__New1_fn(WebView** __retval)
{
    *__retval = WebView::New1();
}

// private void OnLowMemory(object sender, Uno.EventArgs args) :1786
void WebView__OnLowMemory_fn(WebView* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnLowMemory(sender, args);
}

// private void OnProgressChanged() :1927
void WebView__OnProgressChanged_fn(WebView* __this)
{
    __this->OnProgressChanged();
}

// private void OnUpdate() :1843
void WebView__OnUpdate_fn(WebView* __this)
{
    __this->OnUpdate();
}

// public generated void add_PageLoaded(Uno.EventHandler value) :1923
void WebView__add_PageLoaded_fn(WebView* __this, uDelegate* value)
{
    __this->add_PageLoaded(value);
}

// public generated void remove_PageLoaded(Uno.EventHandler value) :1923
void WebView__remove_PageLoaded_fn(WebView* __this, uDelegate* value)
{
    __this->remove_PageLoaded(value);
}

// public double get_Progress() :1918
void WebView__get_Progress_fn(WebView* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :1925
void WebView__add_ProgressChanged_fn(WebView* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :1925
void WebView__remove_ProgressChanged_fn(WebView* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// public void Reload() :1902
void WebView__Reload_fn(WebView* __this)
{
    __this->Reload();
}

// public string get_Source() :1814
void WebView__get_Source_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(string value) :1815
void WebView__set_Source_fn(WebView* __this, uString* value)
{
    __this->Source(value);
}

// private void StartProgressUpdate() :1837
void WebView__StartProgressUpdate_fn(WebView* __this)
{
    __this->StartProgressUpdate();
}

// public void Stop() :1904
void WebView__Stop_fn(WebView* __this)
{
    __this->Stop();
}

// public string get_Url() :1832
void WebView__get_Url_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public void set_Url(string value) :1833
void WebView__set_Url_fn(WebView* __this, uString* value)
{
    __this->Url(value);
}

// public generated void add_UrlChanged(Uno.EventHandler value) :1924
void WebView__add_UrlChanged_fn(WebView* __this, uDelegate* value)
{
    __this->add_UrlChanged(value);
}

// public generated void remove_UrlChanged(Uno.EventHandler value) :1924
void WebView__remove_UrlChanged_fn(WebView* __this, uDelegate* value)
{
    __this->remove_UrlChanged(value);
}

// public void webViewDidCommitNavigation(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation) :1949
void WebView__webViewDidCommitNavigation_fn(WebView* __this, ::g::iOS::WebKit::WKWebView* webView, ::g::iOS::WebKit::WKNavigation* navigation)
{
    __this->webViewDidCommitNavigation(webView, navigation);
}

// public void webViewDidFailNavigationWithError(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation, iOS.Foundation.NSError error) :1964
void WebView__webViewDidFailNavigationWithError_fn(WebView* __this, ::g::iOS::WebKit::WKWebView* webView, ::g::iOS::WebKit::WKNavigation* navigation, ::g::iOS::Foundation::NSError* error)
{
    __this->webViewDidFailNavigationWithError(webView, navigation, error);
}

// public void webViewDidFailProvisionalNavigationWithError(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation, iOS.Foundation.NSError error) :1945
void WebView__webViewDidFailProvisionalNavigationWithError_fn(WebView* __this, ::g::iOS::WebKit::WKWebView* webView, ::g::iOS::WebKit::WKNavigation* navigation, ::g::iOS::Foundation::NSError* error)
{
    __this->webViewDidFailProvisionalNavigationWithError(webView, navigation, error);
}

// public void webViewDidFinishNavigation(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation) :1955
void WebView__webViewDidFinishNavigation_fn(WebView* __this, ::g::iOS::WebKit::WKWebView* webView, ::g::iOS::WebKit::WKNavigation* navigation)
{
    __this->webViewDidFinishNavigation(webView, navigation);
}

// public void webViewDidReceiveServerRedirectForProvisionalNavigation(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation) :1941
void WebView__webViewDidReceiveServerRedirectForProvisionalNavigation_fn(WebView* __this, ::g::iOS::WebKit::WKWebView* webView, ::g::iOS::WebKit::WKNavigation* navigation)
{
    __this->webViewDidReceiveServerRedirectForProvisionalNavigation(webView, navigation);
}

// public void webViewDidStartProvisionalNavigation(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation) :1936
void WebView__webViewDidStartProvisionalNavigation_fn(WebView* __this, ::g::iOS::WebKit::WKWebView* webView, ::g::iOS::WebKit::WKNavigation* navigation)
{
    __this->webViewDidStartProvisionalNavigation(webView, navigation);
}

// public generated WebView() [instance] :1760
void WebView::ctor_3()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", ".ctor()");
    ctor_2();
}

// public generated string get_BaseUrl() [instance] :1809
uString* WebView::BaseUrl()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "get_BaseUrl()");
    return _BaseUrl;
}

// public generated void set_BaseUrl(string value) [instance] :1809
void WebView::BaseUrl(uString* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "set_BaseUrl(string)");
    _BaseUrl = value;
}

// public generated void add_BeginLoading(Uno.EventHandler value) [instance] :1922
void WebView::add_BeginLoading(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "add_BeginLoading(Uno.EventHandler)");
    BeginLoading1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(BeginLoading1, value), ::TYPES[30/*Uno.EventHandler*/]);
}

// public generated void remove_BeginLoading(Uno.EventHandler value) [instance] :1922
void WebView::remove_BeginLoading(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "remove_BeginLoading(Uno.EventHandler)");
    BeginLoading1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(BeginLoading1, value), ::TYPES[30/*Uno.EventHandler*/]);
}

// public bool get_CanGoBack() [instance] :1894
bool WebView::CanGoBack()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "get_CanGoBack()");
    return uPtr(_iOSWebView)->CanGoBack();
}

// public bool get_CanGoForward() [instance] :1896
bool WebView::CanGoForward()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "get_CanGoForward()");
    return uPtr(_iOSWebView)->CanGoForward();
}

// public string get_DocumentTitle() [instance] :1892
uString* WebView::DocumentTitle()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "get_DocumentTitle()");
    return uPtr(_iOSWebView)->Title();
}

// public void Eval(string js) [instance] :1853
void WebView::Eval(uString* js)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "Eval(string)");
    ::g::Fuse::iOS::Controls::WKWebViewHelpers::EvalOnWebView(_iOSWebView, js);
}

// public void Eval(string js, Uno.Action<string> onResult) [instance] :1858
void WebView::Eval1(uString* js, uDelegate* onResult)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "Eval(string,Uno.Action<string>)");
    ::g::Fuse::iOS::Controls::WKWebViewHelpers::EvalOnWebView1(_iOSWebView, js, onResult);
}

// public Uno.UX.FileSource get_File() [instance] :1866
::g::Uno::UX::FileSource* WebView::File()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "get_File()");
    return _file;
}

// public void set_File(Uno.UX.FileSource value) [instance] :1867
void WebView::File(::g::Uno::UX::FileSource* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "set_File(Uno.UX.FileSource)");
    _file = value;

    if (_file != NULL)
        LoadFile(_file);
}

// public void GoBack() [instance] :1898
void WebView::GoBack()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "GoBack()");
    uPtr(_iOSWebView)->goBack();
}

// public void GoForward() [instance] :1900
void WebView::GoForward()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "GoForward()");
    uPtr(_iOSWebView)->goForward();
}

// private void LoadFile(Uno.UX.FileSource file) [instance] :1880
void WebView::LoadFile(::g::Uno::UX::FileSource* file)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "LoadFile(Uno.UX.FileSource)");
    uString* data = ::STRINGS[0/*""*/];

    {
        const auto __finally_fun = [&]()
        {
            LoadHTML(data);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        try
        {
            data = uPtr(file)->ReadAllText();
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;
            data = uPtr(e)->ToString();
        }
    }
}

// public void LoadHtml(string html) [instance] :1818
void WebView::LoadHtml(uString* html)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "LoadHtml(string)");
    LoadHtml1(html, ::STRINGS[0/*""*/]);
}

// public void LoadHtml(string html, string baseUrl) [instance] :1824
void WebView::LoadHtml1(uString* html, uString* baseUrl)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "LoadHtml(string,string)");
    ::g::Fuse::iOS::Controls::WKWebViewHelpers::LoadHtmlString(_iOSWebView, html, baseUrl);
}

// private void LoadHTML(string html) [instance] :1875
void WebView::LoadHTML(uString* html)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "LoadHTML(string)");
    uPtr(_iOSWebView)->loadHTMLStringBaseURL(html, NULL);
    StartProgressUpdate();
}

// public void LoadUrl(string url) [instance] :1906
void WebView::LoadUrl(uString* url)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "LoadUrl(string)");

    if (::g::Uno::String::op_Equality(url, NULL) || ::g::Uno::String::op_Equality(url, ::STRINGS[0/*""*/]))
        url = ::STRINGS[6/*"about:blank"*/];

    ::g::iOS::Foundation::NSURL* nsurl = ::g::iOS::Foundation::NSURL::New5();
    nsurl->initWithString(url);
    ::g::iOS::Foundation::NSURLRequest* request = ::g::iOS::Foundation::NSURLRequest::New5();
    request->initWithURL(nsurl);
    uPtr(_iOSWebView)->loadRequest(request);
}

// private void OnLowMemory(object sender, Uno.EventArgs args) [instance] :1786
void WebView::OnLowMemory(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "OnLowMemory(object,Uno.EventArgs)");
    ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[7/*"low mem in ...*/], 1, ::STRINGS[8/*"/usr/local/...*/], 1788);
    ::g::iOS::Foundation::NSURLCache* urlCache = ::g::iOS::Foundation::NSURLCache::_sharedURLCache();

    if (::g::ObjC::ID::op_Inequality(::g::ObjC::Bindings::Object::op_Implicit(urlCache), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[9/*"freeing mem...*/], 1, ::STRINGS[8/*"/usr/local/...*/], 1792);
        uPtr(urlCache)->removeAllCachedResponses();
    }
}

// private void OnProgressChanged() [instance] :1927
void WebView::OnProgressChanged()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "OnProgressChanged()");
    ::g::Uno::UX::ValueChangedArgs* ret2;

    if (::g::Uno::Delegate::op_Inequality(ProgressChanged1, NULL))
        uPtr(ProgressChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[93/*Uno.UX.ValueChangedArgs<double>*/], uCRef(Progress()), this, &ret2), ret2));
}

// private void OnUpdate() [instance] :1843
void WebView::OnUpdate()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "OnUpdate()");
    OnProgressChanged();

    if (!uPtr(_iOSWebView)->Loading())
    {
        _isUpdating = false;
        ::g::Fuse::UpdateManager::RemoveAction(uDelegate::New(::TYPES[26/*Uno.Action*/], (void*)WebView__OnUpdate_fn, this), 0);
    }
}

// public generated void add_PageLoaded(Uno.EventHandler value) [instance] :1923
void WebView::add_PageLoaded(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "add_PageLoaded(Uno.EventHandler)");
    PageLoaded1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PageLoaded1, value), ::TYPES[30/*Uno.EventHandler*/]);
}

// public generated void remove_PageLoaded(Uno.EventHandler value) [instance] :1923
void WebView::remove_PageLoaded(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "remove_PageLoaded(Uno.EventHandler)");
    PageLoaded1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PageLoaded1, value), ::TYPES[30/*Uno.EventHandler*/]);
}

// public double get_Progress() [instance] :1918
double WebView::Progress()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "get_Progress()");
    return uPtr(_iOSWebView)->EstimatedProgress();
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :1925
void WebView::add_ProgressChanged(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "add_ProgressChanged(Uno.UX.ValueChangedHandler<double>)");
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::TYPES[74/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :1925
void WebView::remove_ProgressChanged(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "remove_ProgressChanged(Uno.UX.ValueChangedHandler<double>)");
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::TYPES[74/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public void Reload() [instance] :1902
void WebView::Reload()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "Reload()");
    uPtr(_iOSWebView)->reload();
}

// public string get_Source() [instance] :1814
uString* WebView::Source()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "get_Source()");
    return _source;
}

// public void set_Source(string value) [instance] :1815
void WebView::Source(uString* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "set_Source(string)");
    LoadHtml(_source = value);
}

// private void StartProgressUpdate() [instance] :1837
void WebView::StartProgressUpdate()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "StartProgressUpdate()");

    if (!_isUpdating)
        ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[26/*Uno.Action*/], (void*)WebView__OnUpdate_fn, this), 0);
}

// public void Stop() [instance] :1904
void WebView::Stop()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "Stop()");
    uPtr(_iOSWebView)->stopLoading();
}

// public string get_Url() [instance] :1832
uString* WebView::Url()
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "get_Url()");
    return uPtr(uPtr(_iOSWebView)->URL())->AbsoluteString();
}

// public void set_Url(string value) [instance] :1833
void WebView::Url(uString* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "set_Url(string)");
    LoadUrl(value);
}

// public generated void add_UrlChanged(Uno.EventHandler value) [instance] :1924
void WebView::add_UrlChanged(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "add_UrlChanged(Uno.EventHandler)");
    UrlChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(UrlChanged1, value), ::TYPES[30/*Uno.EventHandler*/]);
}

// public generated void remove_UrlChanged(Uno.EventHandler value) [instance] :1924
void WebView::remove_UrlChanged(uDelegate* value)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "remove_UrlChanged(Uno.EventHandler)");
    UrlChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(UrlChanged1, value), ::TYPES[30/*Uno.EventHandler*/]);
}

// public void webViewDidCommitNavigation(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation) [instance] :1949
void WebView::webViewDidCommitNavigation(::g::iOS::WebKit::WKWebView* webView, ::g::iOS::WebKit::WKNavigation* navigation)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "webViewDidCommitNavigation(iOS.WebKit.WKWebView,iOS.WebKit.WKNavigation)");

    if (::g::Uno::Delegate::op_Inequality(BeginLoading1, NULL))
        uPtr(BeginLoading1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public void webViewDidFailNavigationWithError(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation, iOS.Foundation.NSError error) [instance] :1964
void WebView::webViewDidFailNavigationWithError(::g::iOS::WebKit::WKWebView* webView, ::g::iOS::WebKit::WKNavigation* navigation, ::g::iOS::Foundation::NSError* error)
{
}

// public void webViewDidFailProvisionalNavigationWithError(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation, iOS.Foundation.NSError error) [instance] :1945
void WebView::webViewDidFailProvisionalNavigationWithError(::g::iOS::WebKit::WKWebView* webView, ::g::iOS::WebKit::WKNavigation* navigation, ::g::iOS::Foundation::NSError* error)
{
}

// public void webViewDidFinishNavigation(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation) [instance] :1955
void WebView::webViewDidFinishNavigation(::g::iOS::WebKit::WKWebView* webView, ::g::iOS::WebKit::WKNavigation* navigation)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "webViewDidFinishNavigation(iOS.WebKit.WKWebView,iOS.WebKit.WKNavigation)");

    if (::g::Uno::Delegate::op_Inequality(UrlChanged1, NULL))
        uPtr(UrlChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());

    if (::g::Uno::Delegate::op_Inequality(PageLoaded1, NULL))
        uPtr(PageLoaded1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public void webViewDidReceiveServerRedirectForProvisionalNavigation(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation) [instance] :1941
void WebView::webViewDidReceiveServerRedirectForProvisionalNavigation(::g::iOS::WebKit::WKWebView* webView, ::g::iOS::WebKit::WKNavigation* navigation)
{
}

// public void webViewDidStartProvisionalNavigation(iOS.WebKit.WKWebView webView, iOS.WebKit.WKNavigation navigation) [instance] :1936
void WebView::webViewDidStartProvisionalNavigation(::g::iOS::WebKit::WKWebView* webView, ::g::iOS::WebKit::WKNavigation* navigation)
{
    uStackFrame __("Fuse.iOS.Controls.WebView", "webViewDidStartProvisionalNavigation(iOS.WebKit.WKWebView,iOS.WebKit.WKNavigation)");
    StartProgressUpdate();
}

// public generated WebView New() [static] :1760
WebView* WebView::New1()
{
    WebView* obj1 = (WebView*)uNew(WebView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

}}}} // ::g::Fuse::iOS::Controls
