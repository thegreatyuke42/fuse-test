// This file was generated based on '/Users/JK2Designs/Desktop/Mods4Minecraft/build/iOS/Preview/cache/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.App.h>
namespace g{namespace Fuse{namespace Controls{struct Page;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct NameTableEntry;}}}
namespace g{struct MainView;}
namespace g{struct Mods4Minecraft_FuseControlsButton_IsEnabled_Property;}
namespace g{struct Mods4Minecraft_FuseControlsPageControl_Active_Property;}
namespace g{struct Mods4Minecraft_FuseControlsTextInput_Value_Property;}

namespace g{

// public partial sealed class MainView :1
// {
::g::Fuse::AppBase_type* MainView_typeof();
void MainView__ctor_3_fn(MainView* __this);
void MainView__InitializeUX_fn(MainView* __this);
void MainView__New2_fn(MainView** __retval);

struct MainView : ::g::Fuse::App
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return MainView_typeof()->Init(), __g_static_nametable1_; }
    uStrong< ::g::Fuse::Controls::Page*> page1;
    uStrong< ::g::Fuse::Controls::Page*> page2;
    uStrong< ::g::Fuse::Controls::Page*> page3;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb0;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb1;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb2;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb3;
    uStrong< ::g::Mods4Minecraft_FuseControlsTextInput_Value_Property*> temp_Value_inst;
    uStrong< ::g::Mods4Minecraft_FuseControlsTextInput_Value_Property*> temp1_Value_inst;
    uStrong< ::g::Mods4Minecraft_FuseControlsTextInput_Value_Property*> temp2_Value_inst;
    uStrong< ::g::Mods4Minecraft_FuseControlsButton_IsEnabled_Property*> temp3_IsEnabled_inst;
    uStrong< ::g::Mods4Minecraft_FuseControlsTextInput_Value_Property*> temp4_Value_inst;
    uStrong< ::g::Mods4Minecraft_FuseControlsTextInput_Value_Property*> temp5_Value_inst;
    uStrong< ::g::Mods4Minecraft_FuseControlsButton_IsEnabled_Property*> temp6_IsEnabled_inst;
    uStrong< ::g::Mods4Minecraft_FuseControlsPageControl_Active_Property*> temp7_Active_inst;

    void ctor_3();
    void InitializeUX();
    static MainView* New2();
};
// }

} // ::g
