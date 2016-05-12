// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.27.14/Controls/MapView/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.UIKit.IUIContentContainer.h>
#include <iOS.UIKit.UIViewController.h>
#include <ObjC.Object.h>
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct FuseMapView;}}}}
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct MapViewController;}}}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Controls{

// internal sealed extern class MapViewController :30
// {
::g::iOS::UIKit::UIViewController_type* MapViewController_typeof();
void MapViewController__ctor_8_fn(MapViewController* __this, uDelegate* onMapAppeared);
void MapViewController__loadView_fn(MapViewController* __this);
void MapViewController__New9_fn(uDelegate* onMapAppeared, MapViewController** __retval);
void MapViewController__viewDidAppear_fn(MapViewController* __this, bool* animated);

struct MapViewController : ::g::iOS::UIKit::UIViewController
{
    uStrong< ::g::Fuse::iOS::Controls::FuseMapView*> _map;
    uStrong<uDelegate*> _onMapAppeared;

    void ctor_8(uDelegate* onMapAppeared);
    static MapViewController* New9(uDelegate* onMapAppeared);
};
// }

}}}} // ::g::Fuse::iOS::Controls
