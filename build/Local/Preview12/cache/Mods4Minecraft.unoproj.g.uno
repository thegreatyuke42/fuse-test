sealed class Mods4Minecraft_FuseControlsPageControl_Active_Property: Uno.UX.Property<Fuse.Node>
{
    Fuse.Controls.PageControl _obj;
    public Mods4Minecraft_FuseControlsPageControl_Active_Property(Fuse.Controls.PageControl obj) { _obj = obj;  }
    protected override Fuse.Node OnGet() { return _obj.Active; }
    protected override void OnSet(Fuse.Node v, object origin) { _obj.Active = v; }
}
sealed class Mods4Minecraft_FuseControlsTextInput_Value_Property: Uno.UX.Property<string>
{
    Fuse.Controls.TextInput _obj;
    public Mods4Minecraft_FuseControlsTextInput_Value_Property(Fuse.Controls.TextInput obj) { _obj = obj; obj.ValueChanged += this.OnValueChanged; }
    protected override string OnGet() { return _obj.Value; }
    protected override void OnSet(string v, object origin) { _obj.SetValue(v, origin); }
    protected override void OnAddListener(Uno.UX.ValueChangedHandler<string> listener) { _obj.ValueChanged += listener; }
    protected override void OnRemoveListener(Uno.UX.ValueChangedHandler<string> listener) { _obj.ValueChanged -= listener; }
}
sealed class Mods4Minecraft_FuseControlsButton_IsEnabled_Property: Uno.UX.Property<bool>
{
    Fuse.Controls.Button _obj;
    public Mods4Minecraft_FuseControlsButton_IsEnabled_Property(Fuse.Controls.Button obj) { _obj = obj;  }
    protected override bool OnGet() { return _obj.IsEnabled; }
    protected override void OnSet(bool v, object origin) { _obj.IsEnabled = v; }
}
