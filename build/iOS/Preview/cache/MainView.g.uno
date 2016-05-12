public partial class MainView: Fuse.App
{
    public partial class Template: Uno.UX.Template<Fuse.Controls.Text>
    {
        internal readonly MainView __parent;
        public Template(MainView parent)
        {
            __parent = parent;
        }
        static Template()
        {
        }
        protected override void OnApply(Fuse.Controls.Text self)
        {
            Fuse.Controls.TextControl.TextColorProperty.SetStyle(self, float4(1f, 1f, 1f, 1f));
        }
    }
    public partial class Template1: Uno.UX.Template<Fuse.Controls.TextInput>
    {
        internal readonly MainView __parent;
        public Template1(MainView parent)
        {
            __parent = parent;
        }
        static Template1()
        {
        }
        protected override void OnApply(Fuse.Controls.TextInput self)
        {
            Fuse.Controls.TextEdit.CaretColorProperty.SetStyle(self, float4(1f, 1f, 1f, 1f));
            Fuse.Controls.TextEdit.PlaceholderColorProperty.SetStyle(self, float4(1f, 1f, 1f, 0.5019608f));
            Fuse.Controls.TextControl.TextColorProperty.SetStyle(self, float4(1f, 1f, 1f, 1f));
        }
    }
    Mods4Minecraft_FuseControlsTextInput_Value_Property temp_Value_inst;
    Mods4Minecraft_FuseControlsTextInput_Value_Property temp1_Value_inst;
    Mods4Minecraft_FuseControlsTextInput_Value_Property temp2_Value_inst;
    Mods4Minecraft_FuseControlsButton_IsEnabled_Property temp3_IsEnabled_inst;
    Mods4Minecraft_FuseControlsTextInput_Value_Property temp4_Value_inst;
    Mods4Minecraft_FuseControlsTextInput_Value_Property temp5_Value_inst;
    Mods4Minecraft_FuseControlsButton_IsEnabled_Property temp6_IsEnabled_inst;
    Mods4Minecraft_FuseControlsPageControl_Active_Property temp7_Active_inst;
    internal Fuse.Controls.Page page3;
    internal Fuse.Reactive.EventBinding temp_eb0;
    internal Fuse.Controls.Page page1;
    internal Fuse.Reactive.EventBinding temp_eb1;
    internal Fuse.Reactive.EventBinding temp_eb2;
    internal Fuse.Controls.Page page2;
    internal Fuse.Reactive.EventBinding temp_eb3;
    global::Uno.UX.NameTable __g_nametable;
    static global::Uno.UX.NameTableEntry[] __g_static_nametable = new global::Uno.UX.NameTableEntry[] {
        new global::Uno.UX.NameTableEntry("page3", "Fuse.Controls.Page", Fuse.Controls.Control.ScriptClass),
        new global::Uno.UX.NameTableEntry("page1", "Fuse.Controls.Page", Fuse.Controls.Control.ScriptClass),
        new global::Uno.UX.NameTableEntry("page2", "Fuse.Controls.Page", Fuse.Controls.Control.ScriptClass)
    };
    static MainView()
    {
    }
    public MainView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp8 = float4(0.5333334f, 0.4117647f, 0.8980392f, 1f);
        var temp9 = float4(0.3921569f, 0.2784314f, 0.7019608f, 1f);
        var temp10 = float4(0.3921569f, 0.2784314f, 0.5764706f, 1f);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new Fuse.Controls.TextInput();
        temp_Value_inst = new Mods4Minecraft_FuseControlsTextInput_Value_Property(temp);
        var temp1 = new Fuse.Controls.TextInput();
        temp1_Value_inst = new Mods4Minecraft_FuseControlsTextInput_Value_Property(temp1);
        var temp2 = new Fuse.Controls.TextInput();
        temp2_Value_inst = new Mods4Minecraft_FuseControlsTextInput_Value_Property(temp2);
        var temp3 = new Fuse.Controls.Button();
        temp3_IsEnabled_inst = new Mods4Minecraft_FuseControlsButton_IsEnabled_Property(temp3);
        var temp4 = new Fuse.Controls.TextInput();
        temp4_Value_inst = new Mods4Minecraft_FuseControlsTextInput_Value_Property(temp4);
        var temp5 = new Fuse.Controls.TextInput();
        temp5_Value_inst = new Mods4Minecraft_FuseControlsTextInput_Value_Property(temp5);
        var temp6 = new Fuse.Controls.Button();
        temp6_IsEnabled_inst = new Mods4Minecraft_FuseControlsButton_IsEnabled_Property(temp6);
        var temp7 = new Fuse.Controls.PageControl();
        temp7_Active_inst = new Mods4Minecraft_FuseControlsPageControl_Active_Property(temp7);
        var temp11 = new Fuse.iOS.StatusBarConfig();
        var temp12 = new Fuse.Controls.DockPanel();
        var temp13 = new Fuse.Style();
        var temp14 = new Template(this) { Cascade = true, AffectSubtypes = true };
        var temp15 = new Template1(this) { Cascade = true, AffectSubtypes = true };
        var temp16 = new Uno.UX.Resource("C600", temp8);
        var temp17 = new Uno.UX.Resource("C700", temp9);
        var temp18 = new Uno.UX.Resource("CFillFore", temp10);
        var temp19 = new Fuse.Controls.StatusBarBackground();
        var temp20 = new Fuse.Controls.BottomBarBackground();
        var temp21 = new Fuse.Controls.Video();
        var temp22 = new Fuse.Effects.Blur();
        var temp23 = new Fuse.Reactive.JavaScript(__g_nametable);
        page3 = new Fuse.Controls.Page();
        var temp24 = new Fuse.Controls.Grid();
        var temp25 = new Fuse.Controls.StackPanel();
        var temp26 = new Fuse.Controls.Text();
        var temp27 = new Fuse.Controls.StackPanel();
        var temp28 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "email");
        var temp29 = new Fuse.Reactive.DataBinding<string>(temp1_Value_inst, "signupUsername");
        var temp30 = new Fuse.Reactive.DataBinding<string>(temp2_Value_inst, "signupPassword");
        var temp31 = new Fuse.Reactive.DataBinding<bool>(temp3_IsEnabled_inst, "areSignupCredentialsValid");
        var temp32 = new Fuse.Controls.Button();
        temp_eb0 = new Fuse.Reactive.EventBinding("goToPage1");
        page1 = new Fuse.Controls.Page();
        var temp33 = new Fuse.Controls.Grid();
        var temp34 = new Fuse.Controls.StackPanel();
        var temp35 = new Fuse.Controls.Text();
        var temp36 = new Fuse.Controls.Text();
        var temp37 = new Fuse.Controls.StackPanel();
        var temp38 = new Fuse.Controls.Button();
        temp_eb1 = new Fuse.Reactive.EventBinding("goToPage3");
        var temp39 = new Fuse.Controls.Button();
        temp_eb2 = new Fuse.Reactive.EventBinding("goToPage2");
        page2 = new Fuse.Controls.Page();
        var temp40 = new Fuse.Controls.Grid();
        var temp41 = new Fuse.Controls.StackPanel();
        var temp42 = new Fuse.Controls.Text();
        var temp43 = new Fuse.Controls.StackPanel();
        var temp44 = new Fuse.Reactive.DataBinding<string>(temp4_Value_inst, "loginUsername");
        var temp45 = new Fuse.Reactive.DataBinding<string>(temp5_Value_inst, "loginPassword");
        var temp46 = new Fuse.Reactive.DataBinding<bool>(temp6_IsEnabled_inst, "areLoginCredentialsValid");
        var temp47 = new Fuse.Controls.Button();
        temp_eb3 = new Fuse.Reactive.EventBinding("goToPage1");
        var temp48 = new Fuse.Reactive.DataBinding<Fuse.Node>(temp7_Active_inst, "currentPage");
        this.ClearColor = float4(0.1254902f, 0.04705882f, 0.3137255f, 1f);
        temp11.Style = Uno.Platform.iOS.StatusBarStyle.Light;
        temp12.Children.Add(temp19);
        temp12.Children.Add(temp20);
        temp12.Children.Add(temp21);
        temp12.Children.Add(temp7);
        temp12.Behaviors.Add(temp23);
        temp12.Resources.Add(temp16);
        temp12.Resources.Add(temp17);
        temp12.Resources.Add(temp18);
        temp12.Styles.Add(temp13);
        temp13.Templates.Add(temp14);
        temp13.Templates.Add(temp15);
        global::Fuse.Controls.DockPanel.SetDock(temp19, Fuse.Layouts.Dock.Top);
        global::Fuse.Controls.DockPanel.SetDock(temp20, Fuse.Layouts.Dock.Bottom);
        temp21.IsLooping = true;
        temp21.AutoPlay = true;
        temp21.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
        temp21.Opacity = 0.3f;
        temp21.Layer = Fuse.Layer.Background;
        temp21.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../Assets/test.mp4"));
        temp21.Effects.Add(temp22);
        temp22.Radius = 4.9f;
        temp23.Code = "var Observable = require(\"FuseJS/Observable\");\n\n\t\t\tvar email = Observable(\"\");\n\t\t\tvar loginUsername = Observable(\"\");\n\t\t\tvar loginPassword = Observable(\"\");\n\t\t\tvar signupUsername = Observable(\"\");\n\t\t\tvar signupPassword = Observable(\"\");\n\t\t\tvar currentPage = Observable(\"page1\");\n\n\t\t\tfunction goToPage1(){\n\t\t\t\tcurrentPage.value=\"page1\";\n\t\t\t}\n\n\t\t\tfunction goToPage2(){\n\t\t\t\tcurrentPage.value=\"page2\";\n\t\t\t}\n\n\t\t\tfunction goToPage3(){\n\t\t\t\tcurrentPage.value=\"page3\";\n\t\t\t}\n\n\t\t\tvar areLoginCredentialsValid = Observable(function() {\n\t\t\t\treturn loginUsername.value != \"\" && loginPassword.value != \"\";\n\t\t\t});\n\n\t\t\tvar areSignupCredentialsValid = Observable(function() {\n\t\t\t\treturn signupUsername.value != \"\" && signupPassword.value != \"\" && email.value != \"\" && signupPassword.value.length >= 6;\n\t\t\t});\n\n\t\t\tmodule.exports = {\n\t\t\t\tloginUsername: loginUsername,\n\t\t\t\tloginPassword: loginPassword,\n\t\t\t\tsignupUsername: signupUsername,\n\t\t\t\tsignupPassword: signupPassword,\n\t\t\t\tcurrentPage: currentPage,\n\t\t\t\temail: email,\n\n\t\t\t\tareLoginCredentialsValid: areLoginCredentialsValid,\n\t\t\t\tareSignupCredentialsValid: areSignupCredentialsValid,\n\t\t\t\tgoToPage1: goToPage1,\n\t\t\t\tgoToPage2: goToPage2,\n\t\t\t\tgoToPage3: goToPage3\n\t\t\t};";
        temp23.LineNumber = 22;
        temp23.FileName = "MainView.ux";
        temp7.Interaction = Fuse.Controls.PageControlInteraction.None;
        temp7.Children.Add(page3);
        temp7.Children.Add(page1);
        temp7.Children.Add(page2);
        temp7.Behaviors.Add(temp48);
        page3.Name = "page3";
        page3.Children.Add(temp24);
        temp24.Rows = "1*,1*";
        temp24.Children.Add(temp25);
        temp24.Children.Add(temp27);
        temp25.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp25.Children.Add(temp26);
        temp26.Value = "Sign Up";
        temp26.FontSize = 35f;
        temp26.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp27.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp27.Margin = float4(50f, 0f, 50f, 0f);
        temp27.Children.Add(temp);
        temp27.Children.Add(temp1);
        temp27.Children.Add(temp2);
        temp27.Children.Add(temp3);
        temp27.Children.Add(temp32);
        temp.PlaceholderText = "email";
        temp.Behaviors.Add(temp28);
        temp1.PlaceholderText = "username";
        temp1.Behaviors.Add(temp29);
        temp2.IsPassword = true;
        temp2.PlaceholderText = "password";
        temp2.Behaviors.Add(temp30);
        temp3.Text = "Sign Up";
        temp3.Behaviors.Add(temp31);
        temp32.Text = "Go Back";
        global::Fuse.Gestures.Clicked.AddHandler(temp32, temp_eb0.OnEvent);
        temp32.Behaviors.Add(temp_eb0);
        page1.Name = "page1";
        page1.Children.Add(temp33);
        temp33.Rows = "1*,1*";
        temp33.Children.Add(temp34);
        temp33.Children.Add(temp37);
        temp34.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp34.Children.Add(temp35);
        temp34.Children.Add(temp36);
        temp35.Value = "MODS";
        temp35.FontSize = 50f;
        temp35.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp36.Value = "4 Minecraft";
        temp36.FontSize = 15f;
        temp36.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp36.Opacity = 0.75f;
        temp37.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp37.Margin = float4(50f, 0f, 50f, 0f);
        temp37.Children.Add(temp38);
        temp37.Children.Add(temp39);
        temp38.Text = "Sign Up";
        global::Fuse.Gestures.Clicked.AddHandler(temp38, temp_eb1.OnEvent);
        temp38.Behaviors.Add(temp_eb1);
        temp39.Text = "Log in";
        global::Fuse.Gestures.Clicked.AddHandler(temp39, temp_eb2.OnEvent);
        temp39.Behaviors.Add(temp_eb2);
        page2.Name = "page2";
        page2.Children.Add(temp40);
        temp40.Rows = "1*,1*";
        temp40.Children.Add(temp41);
        temp40.Children.Add(temp43);
        temp41.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp41.Children.Add(temp42);
        temp42.Value = "Log In";
        temp42.FontSize = 35f;
        temp42.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp43.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp43.Margin = float4(50f, 0f, 50f, 0f);
        temp43.Children.Add(temp4);
        temp43.Children.Add(temp5);
        temp43.Children.Add(temp6);
        temp43.Children.Add(temp47);
        temp4.PlaceholderText = "username";
        temp4.Behaviors.Add(temp44);
        temp5.IsPassword = true;
        temp5.PlaceholderText = "password";
        temp5.Behaviors.Add(temp45);
        temp6.Text = "Log in";
        temp6.Behaviors.Add(temp46);
        temp47.Text = "Go Back";
        global::Fuse.Gestures.Clicked.AddHandler(temp47, temp_eb3.OnEvent);
        temp47.Behaviors.Add(temp_eb3);
        __g_nametable.Objects.Add(page3);
        __g_nametable.Objects.Add(page1);
        __g_nametable.Objects.Add(page2);
        this.RootNode = temp12;
        this.Theme = Fuse.BasicTheme.BasicTheme.Singleton;
        this.Behaviors.Add(temp11);
    }
}
