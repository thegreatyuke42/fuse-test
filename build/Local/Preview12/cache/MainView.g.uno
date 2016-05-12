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
    Mods4Minecraft_FuseControlsPageControl_Active_Property temp3_Active_inst;
    internal Fuse.Controls.Page page1;
    internal Fuse.Reactive.EventBinding temp_eb0;
    internal Fuse.Controls.Page page2;
    global::Uno.UX.NameTable __g_nametable;
    static global::Uno.UX.NameTableEntry[] __g_static_nametable = new global::Uno.UX.NameTableEntry[] {
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
        var temp4 = float4(0.5333334f, 0.4117647f, 0.8980392f, 1f);
        var temp5 = float4(0.3921569f, 0.2784314f, 0.7019608f, 1f);
        var temp6 = float4(0.3921569f, 0.2784314f, 0.5764706f, 1f);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new Fuse.Controls.TextInput();
        temp_Value_inst = new Mods4Minecraft_FuseControlsTextInput_Value_Property(temp);
        var temp1 = new Fuse.Controls.TextInput();
        temp1_Value_inst = new Mods4Minecraft_FuseControlsTextInput_Value_Property(temp1);
        var temp2 = new Fuse.Controls.Button();
        temp2_IsEnabled_inst = new Mods4Minecraft_FuseControlsButton_IsEnabled_Property(temp2);
        var temp3 = new Fuse.Controls.PageControl();
        temp3_Active_inst = new Mods4Minecraft_FuseControlsPageControl_Active_Property(temp3);
        var temp7 = new Fuse.iOS.StatusBarConfig();
        var temp8 = new Fuse.Controls.DockPanel();
        var temp9 = new Fuse.Style();
        var temp10 = new Template(this) { Cascade = true, AffectSubtypes = true };
        var temp11 = new Template1(this) { Cascade = true, AffectSubtypes = true };
        var temp12 = new Uno.UX.Resource("C600", temp4);
        var temp13 = new Uno.UX.Resource("C700", temp5);
        var temp14 = new Uno.UX.Resource("CFillFore", temp6);
        var temp15 = new Fuse.Controls.StatusBarBackground();
        var temp16 = new Fuse.Controls.BottomBarBackground();
        var temp17 = new Fuse.Reactive.JavaScript(__g_nametable);
        page1 = new Fuse.Controls.Page();
        var temp18 = new Fuse.Controls.Grid();
        var temp19 = new Fuse.Controls.StackPanel();
        var temp20 = new Fuse.Controls.Text();
        var temp21 = new Fuse.Controls.Text();
        var temp22 = new Fuse.Controls.StackPanel();
        var temp23 = new Fuse.Controls.Button();
        var temp24 = new Fuse.Controls.Button();
        temp_eb0 = new Fuse.Reactive.EventBinding("goToPage2");
        page2 = new Fuse.Controls.Page();
        var temp25 = new Fuse.Controls.Grid();
        var temp26 = new Fuse.Controls.StackPanel();
        var temp27 = new Fuse.Controls.Text();
        var temp28 = new Fuse.Controls.StackPanel();
        var temp29 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "username");
        var temp30 = new Fuse.Reactive.DataBinding<string>(temp1_Value_inst, "password");
        var temp31 = new Fuse.Reactive.DataBinding<bool>(temp2_IsEnabled_inst, "areCredentialsValid");
        var temp32 = new Fuse.Reactive.DataBinding<Fuse.Node>(temp3_Active_inst, "currentPage");
        this.ClearColor = float4(0.1254902f, 0.04705882f, 0.3137255f, 1f);
        temp7.Style = Uno.Platform.iOS.StatusBarStyle.Light;
        temp8.Children.Add(temp15);
        temp8.Children.Add(temp16);
        temp8.Children.Add(temp3);
        temp8.Behaviors.Add(temp17);
        temp8.Resources.Add(temp12);
        temp8.Resources.Add(temp13);
        temp8.Resources.Add(temp14);
        temp8.Styles.Add(temp9);
        temp9.Templates.Add(temp10);
        temp9.Templates.Add(temp11);
        global::Fuse.Controls.DockPanel.SetDock(temp15, Fuse.Layouts.Dock.Top);
        global::Fuse.Controls.DockPanel.SetDock(temp16, Fuse.Layouts.Dock.Bottom);
        temp17.Code = "var Observable = require(\"FuseJS/Observable\");\n\n\t\t\tvar username = Observable(\"\");\n\t\t\tvar password = Observable(\"\");\n\t\t\tvar currentPage = Observable(\"page1\");\n\n\t\t\tfunction goToPage1(){\n\t\t\t\tcurrentPage.value=\"page1\";\n\t\t\t}\n\n\t\t\tfunction goToPage2(){\n\t\t\t\tcurrentPage.value=\"page2\";\n\t\t\t}\n\n\t\t\tvar areCredentialsValid = Observable(function() {\n\t\t\t\treturn username.value != \"\" && password.value != \"\";\n\t\t\t});\n\n\t\t\tmodule.exports = {\n\t\t\t\tusername: username,\n\t\t\t\tpassword: password,\n\n\t\t\t\tareCredentialsValid: areCredentialsValid,\n\t\t\t\tgoToPage1: goToPage1,\n\t\t\t\tgoToPage2: goToPage2\n\t\t\t};";
        temp17.LineNumber = 17;
        temp17.FileName = "MainView.ux";
        temp3.Children.Add(page1);
        temp3.Children.Add(page2);
        temp3.Behaviors.Add(temp32);
        page1.Name = "page1";
        page1.Children.Add(temp18);
        temp18.Rows = "1*,1*";
        temp18.Children.Add(temp19);
        temp18.Children.Add(temp22);
        temp19.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp19.Children.Add(temp20);
        temp19.Children.Add(temp21);
        temp20.Value = "MODS";
        temp20.FontSize = 50f;
        temp20.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp21.Value = "4 Minecraft";
        temp21.FontSize = 15f;
        temp21.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp21.Opacity = 0.75f;
        temp22.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp22.Margin = float4(50f, 0f, 50f, 0f);
        temp22.Children.Add(temp23);
        temp22.Children.Add(temp24);
        temp23.Text = "Sign Up";
        temp24.Text = "Log in";
        global::Fuse.Gestures.Clicked.AddHandler(temp24, temp_eb0.OnEvent);
        temp24.Behaviors.Add(temp_eb0);
        page2.Name = "page2";
        page2.Children.Add(temp25);
        temp25.Rows = "1*,1*";
        temp25.Children.Add(temp26);
        temp25.Children.Add(temp28);
        temp26.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp26.Children.Add(temp27);
        temp27.Value = "Log In";
        temp27.FontSize = 35f;
        temp27.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp28.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp28.Margin = float4(50f, 0f, 50f, 0f);
        temp28.Children.Add(temp);
        temp28.Children.Add(temp1);
        temp28.Children.Add(temp2);
        temp.PlaceholderText = "username";
        temp.Behaviors.Add(temp29);
        temp1.IsPassword = true;
        temp1.PlaceholderText = "password";
        temp1.Behaviors.Add(temp30);
        temp2.Text = "Log in";
        temp2.Behaviors.Add(temp31);
        __g_nametable.Objects.Add(page1);
        __g_nametable.Objects.Add(page2);
        this.RootNode = temp8;
        this.Theme = Fuse.BasicTheme.BasicTheme.Singleton;
        this.Behaviors.Add(temp7);
    }
}
