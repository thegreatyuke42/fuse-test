public partial class MainView: Fuse.App
{
    Mods4Minecraft_FuseControlsTextInput_Value_Property temp_Value_inst;
    Mods4Minecraft_FuseControlsTextInput_Value_Property temp1_Value_inst;
    Mods4Minecraft_FuseControlsButton_IsEnabled_Property temp2_IsEnabled_inst;
    global::Uno.UX.NameTable __g_nametable;
    static global::Uno.UX.NameTableEntry[] __g_static_nametable = new global::Uno.UX.NameTableEntry[] {
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
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new Fuse.Controls.TextInput();
        temp_Value_inst = new Mods4Minecraft_FuseControlsTextInput_Value_Property(temp);
        var temp1 = new Fuse.Controls.TextInput();
        temp1_Value_inst = new Mods4Minecraft_FuseControlsTextInput_Value_Property(temp1);
        var temp2 = new Fuse.Controls.Button();
        temp2_IsEnabled_inst = new Mods4Minecraft_FuseControlsButton_IsEnabled_Property(temp2);
        var temp3 = new Fuse.iOS.StatusBarConfig();
        var temp4 = new Fuse.Controls.DockPanel();
        var temp5 = new Fuse.Controls.StatusBarBackground();
        var temp6 = new Fuse.Controls.BottomBarBackground();
        var temp7 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp8 = new Fuse.Controls.Grid();
        var temp9 = new Fuse.Controls.StackPanel();
        var temp10 = new Fuse.Controls.Text();
        var temp11 = new Fuse.Controls.Text();
        var temp12 = new Fuse.Controls.StackPanel();
        var temp13 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "username");
        var temp14 = new Fuse.Reactive.DataBinding<string>(temp1_Value_inst, "password");
        var temp15 = new Fuse.Reactive.DataBinding<bool>(temp2_IsEnabled_inst, "areCredentialsValid");
        temp3.Style = Uno.Platform.iOS.StatusBarStyle.Light;
        temp4.Children.Add(temp5);
        temp4.Children.Add(temp6);
        temp4.Children.Add(temp8);
        temp4.Behaviors.Add(temp7);
        global::Fuse.Controls.DockPanel.SetDock(temp5, Fuse.Layouts.Dock.Top);
        global::Fuse.Controls.DockPanel.SetDock(temp6, Fuse.Layouts.Dock.Bottom);
        temp7.Code = "var Observable = require(\"FuseJS/Observable\");\n\n\t\t\tvar username = Observable(\"\");\n\t\t\tvar password = Observable(\"\");\n\n\t\t\tvar areCredentialsValid = Observable(function() {\n\t\t\t\treturn username.value != \"\" && password.value != \"\";\n\t\t\t});\n\n\t\t\tmodule.exports = {\n\t\t\t\tusername: username,\n\t\t\t\tpassword: password,\n\n\t\t\t\tareCredentialsValid: areCredentialsValid\n\t\t\t};";
        temp7.LineNumber = 8;
        temp7.FileName = "MainView.ux";
        temp8.Rows = "1*,1*";
        temp8.Children.Add(temp9);
        temp8.Children.Add(temp12);
        temp9.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp9.Children.Add(temp10);
        temp9.Children.Add(temp11);
        temp10.Value = "Mods";
        temp10.FontSize = 50f;
        temp10.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp11.Value = "For Minecraft";
        temp11.FontSize = 40f;
        temp11.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp11.Opacity = 0.75f;
        temp12.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp12.Margin = float4(50f, 0f, 50f, 0f);
        temp12.Children.Add(temp);
        temp12.Children.Add(temp1);
        temp12.Children.Add(temp2);
        temp.PlaceholderText = "username";
        temp.Behaviors.Add(temp13);
        temp1.IsPassword = true;
        temp1.PlaceholderText = "password";
        temp1.Behaviors.Add(temp14);
        temp2.Text = "Log in";
        temp2.Behaviors.Add(temp15);
        this.RootNode = temp4;
        this.Theme = Fuse.BasicTheme.BasicTheme.Singleton;
        this.Behaviors.Add(temp3);
    }
}
