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
    Mods4Minecraft_FuseControlsButton_IsEnabled_Property temp2_IsEnabled_inst;
    Mods4Minecraft_FuseControlsTextInput_Value_Property temp3_Value_inst;
    Mods4Minecraft_FuseControlsTextInput_Value_Property temp4_Value_inst;
    Mods4Minecraft_FuseControlsButton_IsEnabled_Property temp5_IsEnabled_inst;
    Mods4Minecraft_FuseControlsPageControl_Active_Property temp6_Active_inst;
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
        var temp7 = float4(0.5333334f, 0.4117647f, 0.8980392f, 1f);
        var temp8 = float4(0.3921569f, 0.2784314f, 0.7019608f, 1f);
        var temp9 = float4(0.3921569f, 0.2784314f, 0.5764706f, 1f);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new Fuse.Controls.TextInput();
        temp_Value_inst = new Mods4Minecraft_FuseControlsTextInput_Value_Property(temp);
        var temp1 = new Fuse.Controls.TextInput();
        temp1_Value_inst = new Mods4Minecraft_FuseControlsTextInput_Value_Property(temp1);
        var temp2 = new Fuse.Controls.Button();
        temp2_IsEnabled_inst = new Mods4Minecraft_FuseControlsButton_IsEnabled_Property(temp2);
        var temp3 = new Fuse.Controls.TextInput();
        temp3_Value_inst = new Mods4Minecraft_FuseControlsTextInput_Value_Property(temp3);
        var temp4 = new Fuse.Controls.TextInput();
        temp4_Value_inst = new Mods4Minecraft_FuseControlsTextInput_Value_Property(temp4);
        var temp5 = new Fuse.Controls.Button();
        temp5_IsEnabled_inst = new Mods4Minecraft_FuseControlsButton_IsEnabled_Property(temp5);
        var temp6 = new Fuse.Controls.PageControl();
        temp6_Active_inst = new Mods4Minecraft_FuseControlsPageControl_Active_Property(temp6);
        var temp10 = new Fuse.iOS.StatusBarConfig();
        var temp11 = new Fuse.Controls.DockPanel();
        var temp12 = new Fuse.Style();
        var temp13 = new Template(this) { Cascade = true, AffectSubtypes = true };
        var temp14 = new Template1(this) { Cascade = true, AffectSubtypes = true };
        var temp15 = new Uno.UX.Resource("C600", temp7);
        var temp16 = new Uno.UX.Resource("C700", temp8);
        var temp17 = new Uno.UX.Resource("CFillFore", temp9);
        var temp18 = new Fuse.Controls.StatusBarBackground();
        var temp19 = new Fuse.Controls.BottomBarBackground();
        var temp20 = new Fuse.Reactive.JavaScript(__g_nametable);
        page3 = new Fuse.Controls.Page();
        var temp21 = new Fuse.Controls.Grid();
        var temp22 = new Fuse.Controls.StackPanel();
        var temp23 = new Fuse.Controls.Text();
        var temp24 = new Fuse.Controls.StackPanel();
        var temp25 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "signupUsername");
        var temp26 = new Fuse.Reactive.DataBinding<string>(temp1_Value_inst, "signupPassword");
        var temp27 = new Fuse.Reactive.DataBinding<bool>(temp2_IsEnabled_inst, "areSignupCredentialsValid");
        var temp28 = new Fuse.Controls.Button();
        temp_eb0 = new Fuse.Reactive.EventBinding("goToPage1");
        page1 = new Fuse.Controls.Page();
        var temp29 = new Fuse.Controls.Grid();
        var temp30 = new Fuse.Controls.StackPanel();
        var temp31 = new Fuse.Controls.Text();
        var temp32 = new Fuse.Controls.Text();
        var temp33 = new Fuse.Controls.StackPanel();
        var temp34 = new Fuse.Controls.Button();
        temp_eb1 = new Fuse.Reactive.EventBinding("goToPage3");
        var temp35 = new Fuse.Controls.Button();
        temp_eb2 = new Fuse.Reactive.EventBinding("goToPage2");
        page2 = new Fuse.Controls.Page();
        var temp36 = new Fuse.Controls.Grid();
        var temp37 = new Fuse.Controls.StackPanel();
        var temp38 = new Fuse.Controls.Text();
        var temp39 = new Fuse.Controls.StackPanel();
        var temp40 = new Fuse.Reactive.DataBinding<string>(temp3_Value_inst, "loginUsername");
        var temp41 = new Fuse.Reactive.DataBinding<string>(temp4_Value_inst, "loginPassword");
        var temp42 = new Fuse.Reactive.DataBinding<bool>(temp5_IsEnabled_inst, "areLoginCredentialsValid");
        var temp43 = new Fuse.Controls.Button();
        temp_eb3 = new Fuse.Reactive.EventBinding("goToPage1");
        var temp44 = new Fuse.Reactive.DataBinding<Fuse.Node>(temp6_Active_inst, "currentPage");
        this.ClearColor = float4(0.1254902f, 0.04705882f, 0.3137255f, 1f);
        temp10.Style = Uno.Platform.iOS.StatusBarStyle.Light;
        temp11.Children.Add(temp18);
        temp11.Children.Add(temp19);
        temp11.Children.Add(temp6);
        temp11.Behaviors.Add(temp20);
        temp11.Resources.Add(temp15);
        temp11.Resources.Add(temp16);
        temp11.Resources.Add(temp17);
        temp11.Styles.Add(temp12);
        temp12.Templates.Add(temp13);
        temp12.Templates.Add(temp14);
        global::Fuse.Controls.DockPanel.SetDock(temp18, Fuse.Layouts.Dock.Top);
        global::Fuse.Controls.DockPanel.SetDock(temp19, Fuse.Layouts.Dock.Bottom);
        temp20.Code = "var Observable = require(\"FuseJS/Observable\");\n\n\t\t\tvar loginUsername = Observable(\"\");\n\t\t\tvar loginPassword = Observable(\"\");\n\t\t\tvar signupUsername = Observable(\"\");\n\t\t\tvar signupPassword = Observable(\"\");\n\t\t\tvar currentPage = Observable(\"page1\");\n\n\t\t\tfunction goToPage1(){\n\t\t\t\tcurrentPage.value=\"page1\";\n\t\t\t}\n\n\t\t\tfunction goToPage2(){\n\t\t\t\tcurrentPage.value=\"page2\";\n\t\t\t}\n\n\t\t\tfunction goToPage3(){\n\t\t\t\tcurrentPage.value=\"page3\";\n\t\t\t}\n\n\t\t\tvar areLoginCredentialsValid = Observable(function() {\n\t\t\t\treturn username.value != \"\" && password.value != \"\";\n\t\t\t});\n\n\t\t\tvar areSignupCredentialsValid = Observable(function() {\n\t\t\t\treturn username.value != \"\" && password.value != \"\";\n\t\t\t});\n\n\t\t\tmodule.exports = {\n\t\t\t\tloginUsername: loginUsername,\n\t\t\t\tloginPassword: loginPassword,\n\t\t\t\tsignupUsername: signupUsername,\n\t\t\t\tsignupPassword: signupPassword,\n\t\t\t\tcurrentPage: currentPage,\n\n\t\t\t\tareLoginCredentialsValid: areLoginCredentialsValid,\n\t\t\t\tareSignupCredentialsValid: areSignupCredentialsValid,\n\t\t\t\tgoToPage1: goToPage1,\n\t\t\t\tgoToPage2: goToPage2,\n\t\t\t\tgoToPage3: goToPage3\n\t\t\t};";
        temp20.LineNumber = 17;
        temp20.FileName = "MainView.ux";
        temp6.Children.Add(page3);
        temp6.Children.Add(page1);
        temp6.Children.Add(page2);
        temp6.Behaviors.Add(temp44);
        page3.Name = "page3";
        page3.Children.Add(temp21);
        temp21.Rows = "1*,1*";
        temp21.Children.Add(temp22);
        temp21.Children.Add(temp24);
        temp22.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp22.Children.Add(temp23);
        temp23.Value = "Sign Up";
        temp23.FontSize = 35f;
        temp23.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp24.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp24.Margin = float4(50f, 0f, 50f, 0f);
        temp24.Children.Add(temp);
        temp24.Children.Add(temp1);
        temp24.Children.Add(temp2);
        temp24.Children.Add(temp28);
        temp.PlaceholderText = "username";
        temp.Behaviors.Add(temp25);
        temp1.IsPassword = true;
        temp1.PlaceholderText = "password";
        temp1.Behaviors.Add(temp26);
        temp2.Text = "Sign Up";
        temp2.Behaviors.Add(temp27);
        temp28.Text = "Go Back";
        global::Fuse.Gestures.Clicked.AddHandler(temp28, temp_eb0.OnEvent);
        temp28.Behaviors.Add(temp_eb0);
        page1.Name = "page1";
        page1.Children.Add(temp29);
        temp29.Rows = "1*,1*";
        temp29.Children.Add(temp30);
        temp29.Children.Add(temp33);
        temp30.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp30.Children.Add(temp31);
        temp30.Children.Add(temp32);
        temp31.Value = "MODS";
        temp31.FontSize = 50f;
        temp31.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp32.Value = "4 Minecraft";
        temp32.FontSize = 15f;
        temp32.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp32.Opacity = 0.75f;
        temp33.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp33.Margin = float4(50f, 0f, 50f, 0f);
        temp33.Children.Add(temp34);
        temp33.Children.Add(temp35);
        temp34.Text = "Sign Up";
        global::Fuse.Gestures.Clicked.AddHandler(temp34, temp_eb1.OnEvent);
        temp34.Behaviors.Add(temp_eb1);
        temp35.Text = "Log in";
        global::Fuse.Gestures.Clicked.AddHandler(temp35, temp_eb2.OnEvent);
        temp35.Behaviors.Add(temp_eb2);
        page2.Name = "page2";
        page2.Children.Add(temp36);
        temp36.Rows = "1*,1*";
        temp36.Children.Add(temp37);
        temp36.Children.Add(temp39);
        temp37.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp37.Children.Add(temp38);
        temp38.Value = "Log In";
        temp38.FontSize = 35f;
        temp38.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp39.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp39.Margin = float4(50f, 0f, 50f, 0f);
        temp39.Children.Add(temp3);
        temp39.Children.Add(temp4);
        temp39.Children.Add(temp5);
        temp39.Children.Add(temp43);
        temp3.PlaceholderText = "username";
        temp3.Behaviors.Add(temp40);
        temp4.IsPassword = true;
        temp4.PlaceholderText = "password";
        temp4.Behaviors.Add(temp41);
        temp5.Text = "Log in";
        temp5.Behaviors.Add(temp42);
        temp43.Text = "Go Back";
        global::Fuse.Gestures.Clicked.AddHandler(temp43, temp_eb3.OnEvent);
        temp43.Behaviors.Add(temp_eb3);
        __g_nametable.Objects.Add(page3);
        __g_nametable.Objects.Add(page1);
        __g_nametable.Objects.Add(page2);
        this.RootNode = temp11;
        this.Theme = Fuse.BasicTheme.BasicTheme.Singleton;
        this.Behaviors.Add(temp10);
    }
}
