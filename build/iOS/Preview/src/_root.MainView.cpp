// This file was generated based on '/Users/JK2Designs/Desktop/Mods4Minecraft/build/iOS/Preview/cache/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.h>
#include <_root.MainView.Template.h>
#include <_root.MainView.Template1.h>
#include <_root.Mods4Minecraft_bundle.h>
#include <_root.Mods4Minecraft_FuseControlsButton_IsEnabled_Property.h>
#include <_root.Mods4Minecraft_FuseControlsPageControl_Active_Property.h>
#include <_root.Mods4Minecraft_FuseControlsTextInput_Value_Property.h>
#include <Fuse.AppBase.h>
#include <Fuse.BasicTheme.BasicTheme.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.BottomBarBackground.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.PageControlInteraction.h>
#include <Fuse.Controls.ParentControl.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusBarBackground.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextEdit.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.Video.h>
#include <Fuse.Effects.Blur.h>
#include <Fuse.Effects.Effect.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Style.h>
#include <Fuse.Theme.h>
#include <Uno.Application.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.Platform.iOS.StatusBarStyle.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.ITemplate.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.NameTableEntry.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Template-1.h>
static uString* STRINGS[29];
static uType* TYPES[35];

namespace g{

// public partial sealed class MainView :1
// {
// static MainView() :56
static void MainView__cctor__fn(uType* __type)
{
    MainView::__g_static_nametable1_ = uArray::Init< ::g::Uno::UX::NameTableEntry*>(::TYPES[0/*Uno.UX.NameTableEntry[]*/], 3, (::g::Uno::UX::NameTableEntry*)::g::Uno::UX::NameTableEntry::New1(::STRINGS[0/*"page3"*/], ::STRINGS[1/*"Fuse.Contro...*/], uArray::Init<uObject*>(::TYPES[1/*object[]*/], 1, (::g::Fuse::Scripting::ScriptClass*)::g::Fuse::Controls::Control::ScriptClass2())), (::g::Uno::UX::NameTableEntry*)::g::Uno::UX::NameTableEntry::New1(::STRINGS[2/*"page1"*/], ::STRINGS[1/*"Fuse.Contro...*/], uArray::Init<uObject*>(::TYPES[1/*object[]*/], 1, (::g::Fuse::Scripting::ScriptClass*)::g::Fuse::Controls::Control::ScriptClass2())), (::g::Uno::UX::NameTableEntry*)::g::Uno::UX::NameTableEntry::New1(::STRINGS[3/*"page2"*/], ::STRINGS[1/*"Fuse.Contro...*/], uArray::Init<uObject*>(::TYPES[1/*object[]*/], 1, (::g::Fuse::Scripting::ScriptClass*)::g::Fuse::Controls::Control::ScriptClass2())));
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 33;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->SetBase(::g::Fuse::App_typeof());
    type->fp_ctor_ = (void*)MainView__New2_fn;
    type->fp_cctor_ = MainView__cctor__fn;
    ::STRINGS[0] = uString::Const("page3");
    ::STRINGS[1] = uString::Const("Fuse.Controls.Page");
    ::STRINGS[2] = uString::Const("page1");
    ::STRINGS[3] = uString::Const("page2");
    ::STRINGS[4] = uString::Const("C600");
    ::STRINGS[5] = uString::Const("C700");
    ::STRINGS[6] = uString::Const("CFillFore");
    ::STRINGS[7] = uString::Const("email");
    ::STRINGS[8] = uString::Const("signupUsername");
    ::STRINGS[9] = uString::Const("signupPassword");
    ::STRINGS[10] = uString::Const("areSignupCredentialsValid");
    ::STRINGS[11] = uString::Const("goToPage1");
    ::STRINGS[12] = uString::Const("goToPage3");
    ::STRINGS[13] = uString::Const("goToPage2");
    ::STRINGS[14] = uString::Const("loginUsername");
    ::STRINGS[15] = uString::Const("loginPassword");
    ::STRINGS[16] = uString::Const("areLoginCredentialsValid");
    ::STRINGS[17] = uString::Const("currentPage");
    ::STRINGS[18] = uString::Const("var Observable = require(\"FuseJS/Observable\");\n"
        "\n"
        "\t\t\tvar email = Observable(\"\");\n"
        "\t\t\tvar loginUsername = Observable(\"\");\n"
        "\t\t\tvar loginPassword = Observable(\"\");\n"
        "\t\t\tvar signupUsername = Observable(\"\");\n"
        "\t\t\tvar signupPassword = Observable(\"\");\n"
        "\t\t\tvar currentPage = Observable(\"page1\");\n"
        "\n"
        "\t\t\tfunction goToPage1(){\n"
        "\t\t\t\tcurrentPage.value=\"page1\";\n"
        "\t\t\t}\n"
        "\n"
        "\t\t\tfunction goToPage2(){\n"
        "\t\t\t\tcurrentPage.value=\"page2\";\n"
        "\t\t\t}\n"
        "\n"
        "\t\t\tfunction goToPage3(){\n"
        "\t\t\t\tcurrentPage.value=\"page3\";\n"
        "\t\t\t}\n"
        "\n"
        "\t\t\tvar areLoginCredentialsValid = Observable(function() {\n"
        "\t\t\t\treturn loginUsername.value != \"\" && loginPassword.value != \"\";\n"
        "\t\t\t});\n"
        "\n"
        "\t\t\tvar areSignupCredentialsValid = Observable(function() {\n"
        "\t\t\t\treturn signupUsername.value != \"\" && signupPassword.value != \"\" && email.value != \"\" && signupPassword.value.length >= 6;\n"
        "\t\t\t});\n"
        "\n"
        "\t\t\tmodule.exports = {\n"
        "\t\t\t\tloginUsername: loginUsername,\n"
        "\t\t\t\tloginPassword: loginPassword,\n"
        "\t\t\t\tsignupUsername: signupUsername,\n"
        "\t\t\t\tsignupPassword: signupPassword,\n"
        "\t\t\t\tcurrentPage: currentPage,\n"
        "\t\t\t\temail: email,\n"
        "\n"
        "\t\t\t\tareLoginCredentialsValid: areLoginCredentialsValid,\n"
        "\t\t\t\tareSignupCredentialsValid: areSignupCredentialsValid,\n"
        "\t\t\t\tgoToPage1: goToPage1,\n"
        "\t\t\t\tgoToPage2: goToPage2,\n"
        "\t\t\t\tgoToPage3: goToPage3\n"
        "\t\t\t};");
    ::STRINGS[19] = uString::Const("MainView.ux");
    ::STRINGS[20] = uString::Const("1*,1*");
    ::STRINGS[21] = uString::Const("Sign Up");
    ::STRINGS[22] = uString::Const("username");
    ::STRINGS[23] = uString::Const("password");
    ::STRINGS[24] = uString::Const("Go Back");
    ::STRINGS[25] = uString::Const("MODS");
    ::STRINGS[26] = uString::Const("4 Minecraft");
    ::STRINGS[27] = uString::Const("Log in");
    ::STRINGS[28] = uString::Const("Log In");
    ::TYPES[0] = ::g::Uno::UX::NameTableEntry_typeof()->Array();
    ::TYPES[1] = uObject_typeof()->Array();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[3] = ::g::Fuse::Controls::Control_typeof();
    ::TYPES[4] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Text_typeof());
    ::TYPES[5] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::TextInput_typeof());
    ::TYPES[6] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[7] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[8] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[9] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[10] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[11] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[12] = ::g::Uno::Application_typeof();
    ::TYPES[13] = ::g::Fuse::iOS::StatusBarConfig_typeof();
    ::TYPES[14] = ::g::Fuse::Controls::ParentControl_typeof();
    ::TYPES[15] = ::g::Fuse::Node_typeof();
    ::TYPES[16] = ::g::Fuse::Behavior_typeof();
    ::TYPES[17] = ::g::Fuse::Style_typeof();
    ::TYPES[18] = ::g::Uno::UX::ITemplate_typeof();
    ::TYPES[19] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[20] = ::g::Fuse::Controls::Video_typeof();
    ::TYPES[21] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[22] = ::g::Mods4Minecraft_bundle_typeof();
    ::TYPES[23] = ::g::Fuse::Effects::Effect_typeof();
    ::TYPES[24] = ::g::Fuse::Effects::Blur_typeof();
    ::TYPES[25] = ::g::Fuse::Reactive::JavaScript_typeof();
    ::TYPES[26] = ::g::Fuse::Controls::PageControl_typeof();
    ::TYPES[27] = ::g::Fuse::Controls::Grid_typeof();
    ::TYPES[28] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[29] = ::g::Fuse::Controls::TextEdit_typeof();
    ::TYPES[30] = ::g::Fuse::Controls::Button_typeof();
    ::TYPES[31] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[32] = ::g::Uno::UX::NameTable_typeof();
    ::TYPES[33] = ::g::Fuse::AppBase_typeof();
    ::TYPES[34] = ::g::Fuse::BasicTheme::BasicTheme_typeof();
    type->SetFields(16,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MainView, __g_nametable1), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, page1), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, page2), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, page3), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb0), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb2), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb3), 0,
        ::g::Mods4Minecraft_FuseControlsTextInput_Value_Property_typeof(), offsetof(::g::MainView, temp_Value_inst), 0,
        ::g::Mods4Minecraft_FuseControlsTextInput_Value_Property_typeof(), offsetof(::g::MainView, temp1_Value_inst), 0,
        ::g::Mods4Minecraft_FuseControlsTextInput_Value_Property_typeof(), offsetof(::g::MainView, temp2_Value_inst), 0,
        ::g::Mods4Minecraft_FuseControlsButton_IsEnabled_Property_typeof(), offsetof(::g::MainView, temp3_IsEnabled_inst), 0,
        ::g::Mods4Minecraft_FuseControlsTextInput_Value_Property_typeof(), offsetof(::g::MainView, temp4_Value_inst), 0,
        ::g::Mods4Minecraft_FuseControlsTextInput_Value_Property_typeof(), offsetof(::g::MainView, temp5_Value_inst), 0,
        ::g::Mods4Minecraft_FuseControlsButton_IsEnabled_Property_typeof(), offsetof(::g::MainView, temp6_IsEnabled_inst), 0,
        ::g::Mods4Minecraft_FuseControlsPageControl_Active_Property_typeof(), offsetof(::g::MainView, temp7_Active_inst), 0,
        ::g::Uno::UX::NameTableEntry_typeof()->Array(), (uintptr_t)&::g::MainView::__g_static_nametable1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__New2_fn, 0, true, MainView_typeof(), 0));
    return type;
}

// public MainView() :59
void MainView__ctor_3_fn(MainView* __this)
{
    __this->ctor_3();
}

// private void InitializeUX() :63
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :59
void MainView__New2_fn(MainView** __retval)
{
    *__retval = MainView::New2();
}

uSStrong<uArray*> MainView::__g_static_nametable1_;

// public MainView() [instance] :59
void MainView::ctor_3()
{
    uStackFrame __("MainView", ".ctor()");
    ctor_2();
    InitializeUX();
}

// private void InitializeUX() [instance] :63
void MainView::InitializeUX()
{
    uStackFrame __("MainView", "InitializeUX()");
    MainView__Template* collection1;
    MainView__Template1* collection2;
    ::g::Uno::Float4 temp8 = ::g::Uno::Float4__New2(0.5333334f, 0.4117647f, 0.8980392f, 1.0f);
    ::g::Uno::Float4 temp9 = ::g::Uno::Float4__New2(0.3921569f, 0.2784314f, 0.7019608f, 1.0f);
    ::g::Uno::Float4 temp10 = ::g::Uno::Float4__New2(0.3921569f, 0.2784314f, 0.5764706f, 1.0f);
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MainView::__g_static_nametable1());
    ::g::Fuse::Controls::TextInput* temp = ::g::Fuse::Controls::TextInput::New3();
    temp_Value_inst = ::g::Mods4Minecraft_FuseControlsTextInput_Value_Property::New1(temp);
    ::g::Fuse::Controls::TextInput* temp1 = ::g::Fuse::Controls::TextInput::New3();
    temp1_Value_inst = ::g::Mods4Minecraft_FuseControlsTextInput_Value_Property::New1(temp1);
    ::g::Fuse::Controls::TextInput* temp2 = ::g::Fuse::Controls::TextInput::New3();
    temp2_Value_inst = ::g::Mods4Minecraft_FuseControlsTextInput_Value_Property::New1(temp2);
    ::g::Fuse::Controls::Button* temp3 = ::g::Fuse::Controls::Button::New2();
    temp3_IsEnabled_inst = ::g::Mods4Minecraft_FuseControlsButton_IsEnabled_Property::New1(temp3);
    ::g::Fuse::Controls::TextInput* temp4 = ::g::Fuse::Controls::TextInput::New3();
    temp4_Value_inst = ::g::Mods4Minecraft_FuseControlsTextInput_Value_Property::New1(temp4);
    ::g::Fuse::Controls::TextInput* temp5 = ::g::Fuse::Controls::TextInput::New3();
    temp5_Value_inst = ::g::Mods4Minecraft_FuseControlsTextInput_Value_Property::New1(temp5);
    ::g::Fuse::Controls::Button* temp6 = ::g::Fuse::Controls::Button::New2();
    temp6_IsEnabled_inst = ::g::Mods4Minecraft_FuseControlsButton_IsEnabled_Property::New1(temp6);
    ::g::Fuse::Controls::PageControl* temp7 = ::g::Fuse::Controls::PageControl::New3();
    temp7_Active_inst = ::g::Mods4Minecraft_FuseControlsPageControl_Active_Property::New1(temp7);
    ::g::Fuse::iOS::StatusBarConfig* temp11 = ::g::Fuse::iOS::StatusBarConfig::New1();
    ::g::Fuse::Controls::DockPanel* temp12 = ::g::Fuse::Controls::DockPanel::New3();
    ::g::Fuse::Style* temp13 = ::g::Fuse::Style::New1();
    collection1 = MainView__Template::New1(this);
    uPtr(collection1)->Cascade(true);
    true;
    uPtr(collection1)->AffectSubtypes(true);
    true;
    MainView__Template* temp14 = collection1;
    collection2 = MainView__Template1::New1(this);
    uPtr(collection2)->Cascade(true);
    true;
    uPtr(collection2)->AffectSubtypes(true);
    true;
    MainView__Template1* temp15 = collection2;
    ::g::Uno::UX::Resource* temp16 = ::g::Uno::UX::Resource::New1(::STRINGS[4/*"C600"*/], uBox(::g::Uno::Float4_typeof(), temp8));
    ::g::Uno::UX::Resource* temp17 = ::g::Uno::UX::Resource::New1(::STRINGS[5/*"C700"*/], uBox(::g::Uno::Float4_typeof(), temp9));
    ::g::Uno::UX::Resource* temp18 = ::g::Uno::UX::Resource::New1(::STRINGS[6/*"CFillFore"*/], uBox(::g::Uno::Float4_typeof(), temp10));
    ::g::Fuse::Controls::StatusBarBackground* temp19 = ::g::Fuse::Controls::StatusBarBackground::New2();
    ::g::Fuse::Controls::BottomBarBackground* temp20 = ::g::Fuse::Controls::BottomBarBackground::New2();
    ::g::Fuse::Controls::Video* temp21 = ::g::Fuse::Controls::Video::New2();
    ::g::Fuse::Effects::Blur* temp22 = ::g::Fuse::Effects::Blur::New1();
    ::g::Fuse::Reactive::JavaScript* temp23 = ::g::Fuse::Reactive::JavaScript::New1(__g_nametable1);
    page3 = ::g::Fuse::Controls::Page::New3();
    ::g::Fuse::Controls::Grid* temp24 = ::g::Fuse::Controls::Grid::New3();
    ::g::Fuse::Controls::StackPanel* temp25 = ::g::Fuse::Controls::StackPanel::New3();
    ::g::Fuse::Controls::Text* temp26 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Controls::StackPanel* temp27 = ::g::Fuse::Controls::StackPanel::New3();
    ::g::Fuse::Reactive::DataBinding* temp28 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[6/*Fuse.Reactive.DataBinding<string>*/], temp_Value_inst, ::STRINGS[7/*"email"*/]);
    ::g::Fuse::Reactive::DataBinding* temp29 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[6/*Fuse.Reactive.DataBinding<string>*/], temp1_Value_inst, ::STRINGS[8/*"signupUsern...*/]);
    ::g::Fuse::Reactive::DataBinding* temp30 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[6/*Fuse.Reactive.DataBinding<string>*/], temp2_Value_inst, ::STRINGS[9/*"signupPassw...*/]);
    ::g::Fuse::Reactive::DataBinding* temp31 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[8/*Fuse.Reactive.DataBinding<bool>*/], temp3_IsEnabled_inst, ::STRINGS[10/*"areSignupCr...*/]);
    ::g::Fuse::Controls::Button* temp32 = ::g::Fuse::Controls::Button::New2();
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[11/*"goToPage1"*/]);
    page1 = ::g::Fuse::Controls::Page::New3();
    ::g::Fuse::Controls::Grid* temp33 = ::g::Fuse::Controls::Grid::New3();
    ::g::Fuse::Controls::StackPanel* temp34 = ::g::Fuse::Controls::StackPanel::New3();
    ::g::Fuse::Controls::Text* temp35 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Controls::Text* temp36 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Controls::StackPanel* temp37 = ::g::Fuse::Controls::StackPanel::New3();
    ::g::Fuse::Controls::Button* temp38 = ::g::Fuse::Controls::Button::New2();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[12/*"goToPage3"*/]);
    ::g::Fuse::Controls::Button* temp39 = ::g::Fuse::Controls::Button::New2();
    temp_eb2 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[13/*"goToPage2"*/]);
    page2 = ::g::Fuse::Controls::Page::New3();
    ::g::Fuse::Controls::Grid* temp40 = ::g::Fuse::Controls::Grid::New3();
    ::g::Fuse::Controls::StackPanel* temp41 = ::g::Fuse::Controls::StackPanel::New3();
    ::g::Fuse::Controls::Text* temp42 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Controls::StackPanel* temp43 = ::g::Fuse::Controls::StackPanel::New3();
    ::g::Fuse::Reactive::DataBinding* temp44 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[6/*Fuse.Reactive.DataBinding<string>*/], temp4_Value_inst, ::STRINGS[14/*"loginUsername"*/]);
    ::g::Fuse::Reactive::DataBinding* temp45 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[6/*Fuse.Reactive.DataBinding<string>*/], temp5_Value_inst, ::STRINGS[15/*"loginPassword"*/]);
    ::g::Fuse::Reactive::DataBinding* temp46 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[8/*Fuse.Reactive.DataBinding<bool>*/], temp6_IsEnabled_inst, ::STRINGS[16/*"areLoginCre...*/]);
    ::g::Fuse::Controls::Button* temp47 = ::g::Fuse::Controls::Button::New2();
    temp_eb3 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[11/*"goToPage1"*/]);
    ::g::Fuse::Reactive::DataBinding* temp48 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[10/*Fuse.Reactive.DataBinding<Fuse.Node>*/], temp7_Active_inst, ::STRINGS[17/*"currentPage"*/]);
    ClearColor(::g::Uno::Float4__New2(0.1254902f, 0.04705882f, 0.3137255f, 1.0f));
    temp11->Style(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Node*/])), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Node*/])), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Node*/])), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Node*/])), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[16/*Fuse.Behavior*/])), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Resources()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof())), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Resources()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof())), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Resources()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof())), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Styles()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[17/*Fuse.Style*/])), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Uno.UX.ITemplate*/])), (uObject*)temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Uno.UX.ITemplate*/])), (uObject*)temp15);
    ::g::Fuse::Controls::DockPanel::SetDock(temp19, 2);
    ::g::Fuse::Controls::DockPanel::SetDock(temp20, 3);
    temp21->IsLooping(true);
    temp21->AutoPlay(true);
    temp21->StretchMode(6);
    temp21->Opacity(0.3f);
    temp21->Layer(0);
    temp21->File(::g::Uno::UX::BundleFileSource::New1(::g::Mods4Minecraft_bundle::test4c543b10()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Effects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[23/*Fuse.Effects.Effect*/])), temp22);
    temp22->Radius(4.9f);
    temp23->Code(::STRINGS[18/*"var Observa...*/]);
    temp23->LineNumber(22);
    temp23->FileName(::STRINGS[19/*"MainView.ux"*/]);
    temp7->Interaction(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Node*/])), page3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Node*/])), page1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Node*/])), page2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[16/*Fuse.Behavior*/])), temp48);
    uPtr(page3)->Name(::STRINGS[0/*"page3"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page3)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Node*/])), temp24);
    temp24->Rows(::STRINGS[20/*"1*,1*"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Node*/])), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Node*/])), temp27);
    temp25->Alignment(8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Node*/])), temp26);
    temp26->Value(::STRINGS[21/*"Sign Up"*/]);
    temp26->FontSize(35.0f);
    temp26->Alignment(2);
    temp27->Alignment(8);
    temp27->Margin(::g::Uno::Float4__New2(50.0f, 0.0f, 50.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Node*/])), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Node*/])), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Node*/])), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Node*/])), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Node*/])), temp32);
    temp->PlaceholderText(::STRINGS[7/*"email"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[16/*Fuse.Behavior*/])), temp28);
    temp1->PlaceholderText(::STRINGS[22/*"username"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[16/*Fuse.Behavior*/])), temp29);
    temp2->IsPassword(true);
    temp2->PlaceholderText(::STRINGS[23/*"password"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[16/*Fuse.Behavior*/])), temp30);
    temp3->Text(::STRINGS[21/*"Sign Up"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[16/*Fuse.Behavior*/])), temp31);
    temp32->Text(::STRINGS[24/*"Go Back"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp32, uDelegate::New(::TYPES[31/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[16/*Fuse.Behavior*/])), temp_eb0);
    uPtr(page1)->Name(::STRINGS[2/*"page1"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page1)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Node*/])), temp33);
    temp33->Rows(::STRINGS[20/*"1*,1*"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Node*/])), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Node*/])), temp37);
    temp34->Alignment(8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Node*/])), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Node*/])), temp36);
    temp35->Value(::STRINGS[25/*"MODS"*/]);
    temp35->FontSize(50.0f);
    temp35->Alignment(2);
    temp36->Value(::STRINGS[26/*"4 Minecraft"*/]);
    temp36->FontSize(15.0f);
    temp36->Alignment(2);
    temp36->Opacity(0.75f);
    temp37->Alignment(8);
    temp37->Margin(::g::Uno::Float4__New2(50.0f, 0.0f, 50.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Node*/])), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Node*/])), temp39);
    temp38->Text(::STRINGS[21/*"Sign Up"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp38, uDelegate::New(::TYPES[31/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[16/*Fuse.Behavior*/])), temp_eb1);
    temp39->Text(::STRINGS[27/*"Log in"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp39, uDelegate::New(::TYPES[31/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb2)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[16/*Fuse.Behavior*/])), temp_eb2);
    uPtr(page2)->Name(::STRINGS[3/*"page2"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page2)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Node*/])), temp40);
    temp40->Rows(::STRINGS[20/*"1*,1*"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Node*/])), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Node*/])), temp43);
    temp41->Alignment(8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Node*/])), temp42);
    temp42->Value(::STRINGS[28/*"Log In"*/]);
    temp42->FontSize(35.0f);
    temp42->Alignment(2);
    temp43->Alignment(8);
    temp43->Margin(::g::Uno::Float4__New2(50.0f, 0.0f, 50.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Node*/])), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Node*/])), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Node*/])), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Node*/])), temp47);
    temp4->PlaceholderText(::STRINGS[22/*"username"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[16/*Fuse.Behavior*/])), temp44);
    temp5->IsPassword(true);
    temp5->PlaceholderText(::STRINGS[23/*"password"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[16/*Fuse.Behavior*/])), temp45);
    temp6->Text(::STRINGS[27/*"Log in"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[16/*Fuse.Behavior*/])), temp46);
    temp47->Text(::STRINGS[24/*"Go Back"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp47, uDelegate::New(::TYPES[31/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb3)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[16/*Fuse.Behavior*/])), temp_eb3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[2/*object*/])), page3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[2/*object*/])), page1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[2/*object*/])), page2);
    RootNode(temp12);
    Theme(::g::Fuse::BasicTheme::BasicTheme::Singleton1());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[16/*Fuse.Behavior*/])), temp11);
}

// public MainView New() [static] :59
MainView* MainView::New2()
{
    MainView* obj3 = (MainView*)uNew(MainView_typeof());
    obj3->ctor_3();
    return obj3;
}
// }

} // ::g
