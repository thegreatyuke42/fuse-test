// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.14/MapView/$.uno#1'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.IMapView.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct FallbackMapViewClient;}}}
namespace g{namespace Fuse{namespace Controls{struct MapMarker;}}}

namespace g{
namespace Fuse{
namespace Controls{

// internal sealed class FallbackMapViewClient :636
// {
struct FallbackMapViewClient_type : uType
{
    ::g::Fuse::Controls::IMapView interface0;
};

FallbackMapViewClient_type* FallbackMapViewClient_typeof();
void FallbackMapViewClient__ctor__fn(FallbackMapViewClient* __this, uObject* markers);
void FallbackMapViewClient__get_AllowRotate_fn(FallbackMapViewClient* __this, bool* __retval);
void FallbackMapViewClient__set_AllowRotate_fn(FallbackMapViewClient* __this, bool* value);
void FallbackMapViewClient__get_AllowTilt_fn(FallbackMapViewClient* __this, bool* __retval);
void FallbackMapViewClient__set_AllowTilt_fn(FallbackMapViewClient* __this, bool* value);
void FallbackMapViewClient__get_AllowZoom_fn(FallbackMapViewClient* __this, bool* __retval);
void FallbackMapViewClient__set_AllowZoom_fn(FallbackMapViewClient* __this, bool* value);
void FallbackMapViewClient__get_Bearing_fn(FallbackMapViewClient* __this, double* __retval);
void FallbackMapViewClient__set_Bearing_fn(FallbackMapViewClient* __this, double* value);
void FallbackMapViewClient__HandleLongPress_fn(FallbackMapViewClient* __this, double* lat, double* lng);
void FallbackMapViewClient__HandleMarkerTapped_fn(FallbackMapViewClient* __this, uString* label);
void FallbackMapViewClient__HandleTapped_fn(FallbackMapViewClient* __this, double* lat, double* lng);
void FallbackMapViewClient__get_Latitude_fn(FallbackMapViewClient* __this, double* __retval);
void FallbackMapViewClient__set_Latitude_fn(FallbackMapViewClient* __this, double* value);
void FallbackMapViewClient__get_Longitude_fn(FallbackMapViewClient* __this, double* __retval);
void FallbackMapViewClient__set_Longitude_fn(FallbackMapViewClient* __this, double* value);
void FallbackMapViewClient__get_Markers_fn(FallbackMapViewClient* __this, uObject** __retval);
void FallbackMapViewClient__MoveTo_fn(FallbackMapViewClient* __this, double* latitude, double* longitude, double* zoomlevel, double* tilt, double* orientation, double* duration);
void FallbackMapViewClient__New1_fn(uObject* markers, FallbackMapViewClient** __retval);
void FallbackMapViewClient__SetLocation_fn(FallbackMapViewClient* __this, double* latitude, double* longitude);
void FallbackMapViewClient__get_ShowCompass_fn(FallbackMapViewClient* __this, bool* __retval);
void FallbackMapViewClient__set_ShowCompass_fn(FallbackMapViewClient* __this, bool* value);
void FallbackMapViewClient__get_ShowMyLocation_fn(FallbackMapViewClient* __this, bool* __retval);
void FallbackMapViewClient__set_ShowMyLocation_fn(FallbackMapViewClient* __this, bool* value);
void FallbackMapViewClient__get_ShowMyLocationButton_fn(FallbackMapViewClient* __this, bool* __retval);
void FallbackMapViewClient__set_ShowMyLocationButton_fn(FallbackMapViewClient* __this, bool* value);
void FallbackMapViewClient__get_Style_fn(FallbackMapViewClient* __this, int* __retval);
void FallbackMapViewClient__set_Style_fn(FallbackMapViewClient* __this, int* value);
void FallbackMapViewClient__get_Tilt_fn(FallbackMapViewClient* __this, double* __retval);
void FallbackMapViewClient__set_Tilt_fn(FallbackMapViewClient* __this, double* value);
void FallbackMapViewClient__UpdateMarkers_fn(FallbackMapViewClient* __this);
void FallbackMapViewClient__get_Zoom_fn(FallbackMapViewClient* __this, double* __retval);
void FallbackMapViewClient__set_Zoom_fn(FallbackMapViewClient* __this, double* value);
void FallbackMapViewClient__get_ZoomMax_fn(FallbackMapViewClient* __this, double* __retval);
void FallbackMapViewClient__set_ZoomMax_fn(FallbackMapViewClient* __this, double* value);
void FallbackMapViewClient__get_ZoomMin_fn(FallbackMapViewClient* __this, double* __retval);
void FallbackMapViewClient__set_ZoomMin_fn(FallbackMapViewClient* __this, double* value);

struct FallbackMapViewClient : uObject
{
    uStrong<uObject*> _markers;
    bool _AllowRotate;
    bool _AllowTilt;
    bool _AllowZoom;
    double _Bearing;
    double _Latitude;
    double _Longitude;
    bool _ShowCompass;
    bool _ShowMyLocation;
    bool _ShowMyLocationButton;
    int _Style;
    double _Tilt;
    double _Zoom;
    double _ZoomMax;
    double _ZoomMin;

    void ctor_(uObject* markers);
    bool AllowRotate();
    void AllowRotate(bool value);
    bool AllowTilt();
    void AllowTilt(bool value);
    bool AllowZoom();
    void AllowZoom(bool value);
    double Bearing();
    void Bearing(double value);
    void HandleLongPress(double lat, double lng);
    void HandleMarkerTapped(uString* label);
    void HandleTapped(double lat, double lng);
    double Latitude();
    void Latitude(double value);
    double Longitude();
    void Longitude(double value);
    uObject* Markers();
    void MoveTo(double latitude, double longitude, double zoomlevel, double tilt, double orientation, double duration);
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
    static FallbackMapViewClient* New1(uObject* markers);
};
// }

}}} // ::g::Fuse::Controls
