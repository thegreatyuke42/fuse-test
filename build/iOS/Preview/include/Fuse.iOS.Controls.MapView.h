// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.27.14/Controls/MapView/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.IMapView.h>
#include <Fuse.Controls.MapView.h>
#include <Fuse.IChildObject.h>
#include <Fuse.IDataContext.h>
#include <Fuse.iOS.Controls.Control-1.h>
namespace g{namespace Fuse{namespace Controls{struct MapMarker;}}}
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct FuseMapView;}}}}
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct MapView;}}}}
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct MapViewController;}}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace iOS{namespace UIKit{struct UIView;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace iOS{
namespace Controls{

// public sealed extern class MapView :57
// {
struct MapView_type : ::g::Fuse::iOS::Controls::Control_type
{
    ::g::Fuse::Controls::IMapView interface2;
};

MapView_type* MapView_typeof();
void MapView__ctor_3_fn(MapView* __this);
void MapView__AddMarker_fn(MapView* __this, uString* label, double* lat, double* lng, int* __retval);
void MapView__get_AllowRotate_fn(MapView* __this, bool* __retval);
void MapView__set_AllowRotate_fn(MapView* __this, bool* value);
void MapView__get_AllowTilt_fn(MapView* __this, bool* __retval);
void MapView__set_AllowTilt_fn(MapView* __this, bool* value);
void MapView__get_AllowZoom_fn(MapView* __this, bool* __retval);
void MapView__set_AllowZoom_fn(MapView* __this, bool* value);
void MapView__Attach_fn(MapView* __this);
void MapView__get_Bearing_fn(MapView* __this, double* __retval);
void MapView__set_Bearing_fn(MapView* __this, double* value);
void MapView__ClearMarkers_fn(MapView* __this);
void MapView__Configure_fn(MapView* __this, uObject* mapView, uDelegate* onMapMove, uDelegate* onMapTouch, uDelegate* onMarkerTouch);
void MapView__CreateInternal_fn(MapView* __this, ::g::iOS::UIKit::UIView** __retval);
void MapView__Detach_fn(MapView* __this);
void MapView__DisposeDelegate_fn(MapView* __this);
void MapView__GetMarginSize_fn(MapView* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void MapView__HandleLongPress_fn(MapView* __this, double* lat, double* lng);
void MapView__HandleMarkerTapped_fn(MapView* __this, uString* label);
void MapView__HandleTapped_fn(MapView* __this, double* lat, double* lng);
void MapView__get_Latitude_fn(MapView* __this, double* __retval);
void MapView__set_Latitude_fn(MapView* __this, double* value);
void MapView__get_Longitude_fn(MapView* __this, double* __retval);
void MapView__set_Longitude_fn(MapView* __this, double* value);
void MapView__get_Markers_fn(MapView* __this, uObject** __retval);
void MapView__MoveTo_fn(MapView* __this, double* latitude, double* longitude, double* zoomlevel, double* tilt, double* orientation, double* duration);
void MapView__New1_fn(MapView** __retval);
void MapView__OnCameraMoved_fn(MapView* __this, bool* animated);
void MapView__OnMapTouch_fn(MapView* __this, int* type, double* lat, double* lng);
void MapView__onReady_fn(MapView* __this);
void MapView__SetLocation_fn(MapView* __this, double* latitude, double* longitude);
void MapView__get_ShowCompass_fn(MapView* __this, bool* __retval);
void MapView__set_ShowCompass_fn(MapView* __this, bool* value);
void MapView__get_ShowMyLocation_fn(MapView* __this, bool* __retval);
void MapView__set_ShowMyLocation_fn(MapView* __this, bool* value);
void MapView__get_ShowMyLocationButton_fn(MapView* __this, bool* __retval);
void MapView__set_ShowMyLocationButton_fn(MapView* __this, bool* value);
void MapView__get_Style_fn(MapView* __this, int* __retval);
void MapView__set_Style_fn(MapView* __this, int* value);
void MapView__get_Tilt_fn(MapView* __this, double* __retval);
void MapView__set_Tilt_fn(MapView* __this, double* value);
void MapView__UpdateMarkers_fn(MapView* __this);
void MapView__get_Zoom_fn(MapView* __this, double* __retval);
void MapView__set_Zoom_fn(MapView* __this, double* value);
void MapView__get_ZoomMax_fn(MapView* __this, double* __retval);
void MapView__set_ZoomMax_fn(MapView* __this, double* value);
void MapView__get_ZoomMin_fn(MapView* __this, double* __retval);
void MapView__set_ZoomMin_fn(MapView* __this, double* value);

struct MapView : ::g::Fuse::iOS::Controls::Control
{
    double _bearingValue;
    uStrong< ::g::Fuse::iOS::Controls::MapViewController*> _container;
    double _latInternal;
    double _lngInternal;
    int _mapStyle;
    uStrong< ::g::Fuse::iOS::Controls::FuseMapView*> _mapView;
    double _tiltValue;
    double _zoomValue;
    bool _ShowCompass;
    bool _ShowMyLocationButton;
    double _ZoomMax;
    double _ZoomMin;

    void ctor_3();
    int AddMarker(uString* label, double lat, double lng);
    bool AllowRotate();
    void AllowRotate(bool value);
    bool AllowTilt();
    void AllowTilt(bool value);
    bool AllowZoom();
    void AllowZoom(bool value);
    double Bearing();
    void Bearing(double value);
    void ClearMarkers();
    void Configure(uObject* mapView, uDelegate* onMapMove, uDelegate* onMapTouch, uDelegate* onMarkerTouch);
    void DisposeDelegate();
    void HandleLongPress(double lat, double lng);
    void HandleMarkerTapped(uString* label);
    void HandleTapped(double lat, double lng);
    double Latitude();
    void Latitude(double value);
    double Longitude();
    void Longitude(double value);
    uObject* Markers();
    void MoveTo(double latitude, double longitude, double zoomlevel, double tilt, double orientation, double duration);
    void OnCameraMoved(bool animated);
    void OnMapTouch(int type, double lat, double lng);
    void onReady();
    void SetLocation(double latitude, double longitude);
    bool ShowCompass();
    void ShowCompass(bool value);
    bool ShowMyLocation();
    void ShowMyLocation(bool value);
    bool ShowMyLocationButton();
    void ShowMyLocationButton(bool value);
    int Style();
    void Style(int value);
    double Tilt();
    void Tilt(double value);
    void UpdateMarkers();
    double Zoom();
    void Zoom(double value);
    double ZoomMax();
    void ZoomMax(double value);
    double ZoomMin();
    void ZoomMin(double value);
    static MapView* New1();
};
// }

}}}} // ::g::Fuse::iOS::Controls
