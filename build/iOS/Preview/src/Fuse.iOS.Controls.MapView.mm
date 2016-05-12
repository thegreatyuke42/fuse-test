// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.27.14/Controls/MapView/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Controls/MapView/MapViewDelegate.h>
#include <Fuse.Controls.MapMarker.h>
#include <Fuse.Controls.MapStyle.h>
#include <Fuse.iOS.Controls.FuseMapView.h>
#include <Fuse.iOS.Controls.MapView.h>
#include <Fuse.iOS.Controls.MapViewController.h>
#include <Fuse.iOS.iOSBindingView.h>
#include <iOS.CoreLocation.CLLocationCoordinate2D.h>
#include <iOS.MapKit.MKMapCamera.h>
#include <iOS.MapKit.MKMapType.h>
#include <iOS.MapKit.MKMapView.h>
#include <iOS.UIKit.UIView.h>
#include <iOS.UIKit.UIViewController.h>
#include <ObjC.Bindings.Object.h>
#include <ObjC.ID.h>
#include <ObjC.Object.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-3.h>
#include <Uno.Bool.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
#include <Fuse.LayoutParams.h>
#include <Uno.Float2.h>
static uType* TYPES[17];

namespace g{
namespace Fuse{
namespace iOS{
namespace Controls{

// public sealed extern class MapView :57
// {
MapView_type* MapView_typeof()
{
    static uSStrong<MapView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 70;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(MapView);
    options.TypeSize = sizeof(MapView_type);
    type = (MapView_type*)uClassType::New("Fuse.iOS.Controls.MapView", options);
    type->SetBase(::g::Fuse::iOS::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::MapView_typeof()));
    type->fp_ctor_ = (void*)MapView__New1_fn;
    type->fp_Attach = (void(*)(::g::Fuse::iOS::Controls::Control*))MapView__Attach_fn;
    type->fp_CreateInternal = (void(*)(::g::Fuse::iOS::Controls::Element*, ::g::iOS::UIKit::UIView**))MapView__CreateInternal_fn;
    type->fp_Detach = (void(*)(::g::Fuse::iOS::Controls::Control*))MapView__Detach_fn;
    type->fp_GetMarginSize = (void(*)(::g::Fuse::Node*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))MapView__GetMarginSize_fn;
    type->interface2.fp_SetLocation = (void(*)(uObject*, double*, double*))MapView__SetLocation_fn;
    type->interface2.fp_MoveTo = (void(*)(uObject*, double*, double*, double*, double*, double*, double*))MapView__MoveTo_fn;
    type->interface2.fp_UpdateMarkers = (void(*)(uObject*))MapView__UpdateMarkers_fn;
    type->interface2.fp_HandleMarkerTapped = (void(*)(uObject*, uString*))MapView__HandleMarkerTapped_fn;
    type->interface2.fp_HandleTapped = (void(*)(uObject*, double*, double*))MapView__HandleTapped_fn;
    type->interface2.fp_HandleLongPress = (void(*)(uObject*, double*, double*))MapView__HandleLongPress_fn;
    type->interface2.fp_get_Markers = (void(*)(uObject*, uObject**))MapView__get_Markers_fn;
    type->interface2.fp_get_Latitude = (void(*)(uObject*, double*))MapView__get_Latitude_fn;
    type->interface2.fp_set_Latitude = (void(*)(uObject*, double*))MapView__set_Latitude_fn;
    type->interface2.fp_get_Longitude = (void(*)(uObject*, double*))MapView__get_Longitude_fn;
    type->interface2.fp_set_Longitude = (void(*)(uObject*, double*))MapView__set_Longitude_fn;
    type->interface2.fp_get_Bearing = (void(*)(uObject*, double*))MapView__get_Bearing_fn;
    type->interface2.fp_set_Bearing = (void(*)(uObject*, double*))MapView__set_Bearing_fn;
    type->interface2.fp_get_Tilt = (void(*)(uObject*, double*))MapView__get_Tilt_fn;
    type->interface2.fp_set_Tilt = (void(*)(uObject*, double*))MapView__set_Tilt_fn;
    type->interface2.fp_get_Zoom = (void(*)(uObject*, double*))MapView__get_Zoom_fn;
    type->interface2.fp_set_Zoom = (void(*)(uObject*, double*))MapView__set_Zoom_fn;
    type->interface2.fp_get_ZoomMin = (void(*)(uObject*, double*))MapView__get_ZoomMin_fn;
    type->interface2.fp_set_ZoomMin = (void(*)(uObject*, double*))MapView__set_ZoomMin_fn;
    type->interface2.fp_get_ZoomMax = (void(*)(uObject*, double*))MapView__get_ZoomMax_fn;
    type->interface2.fp_set_ZoomMax = (void(*)(uObject*, double*))MapView__set_ZoomMax_fn;
    type->interface2.fp_get_Style = (void(*)(uObject*, int*))MapView__get_Style_fn;
    type->interface2.fp_set_Style = (void(*)(uObject*, int*))MapView__set_Style_fn;
    type->interface2.fp_get_ShowMyLocation = (void(*)(uObject*, bool*))MapView__get_ShowMyLocation_fn;
    type->interface2.fp_set_ShowMyLocation = (void(*)(uObject*, bool*))MapView__set_ShowMyLocation_fn;
    type->interface2.fp_get_ShowMyLocationButton = (void(*)(uObject*, bool*))MapView__get_ShowMyLocationButton_fn;
    type->interface2.fp_set_ShowMyLocationButton = (void(*)(uObject*, bool*))MapView__set_ShowMyLocationButton_fn;
    type->interface2.fp_get_ShowCompass = (void(*)(uObject*, bool*))MapView__get_ShowCompass_fn;
    type->interface2.fp_set_ShowCompass = (void(*)(uObject*, bool*))MapView__set_ShowCompass_fn;
    type->interface2.fp_get_AllowZoom = (void(*)(uObject*, bool*))MapView__get_AllowZoom_fn;
    type->interface2.fp_set_AllowZoom = (void(*)(uObject*, bool*))MapView__set_AllowZoom_fn;
    type->interface2.fp_get_AllowTilt = (void(*)(uObject*, bool*))MapView__get_AllowTilt_fn;
    type->interface2.fp_set_AllowTilt = (void(*)(uObject*, bool*))MapView__set_AllowTilt_fn;
    type->interface2.fp_get_AllowRotate = (void(*)(uObject*, bool*))MapView__get_AllowRotate_fn;
    type->interface2.fp_set_AllowRotate = (void(*)(uObject*, bool*))MapView__set_AllowRotate_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseIChildObjectget_ParentObject_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[0] = ::g::Fuse::Controls::MapView_typeof();
    ::TYPES[1] = ::g::Fuse::iOS::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::MapView_typeof());
    ::TYPES[2] = ::g::Fuse::Controls::IMapView_typeof();
    ::TYPES[3] = ::g::ObjC::Bindings::Object_typeof();
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[5] = ::g::Fuse::iOS::Controls::FuseMapView_typeof();
    ::TYPES[6] = ::g::iOS::UIKit::UIViewController_typeof();
    ::TYPES[7] = ::g::ObjC::Object_typeof();
    ::TYPES[8] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[9] = ::g::Uno::Action3_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof());
    ::TYPES[10] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[11] = ::g::iOS::UIKit::UIView_typeof();
    ::TYPES[12] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Controls::MapMarker_typeof());
    ::TYPES[13] = ::g::Fuse::Controls::MapMarker_typeof();
    ::TYPES[14] = ::g::iOS::MapKit::MKMapView_typeof();
    ::TYPES[15] = ::g::iOS::MapKit::MKMapCamera_typeof();
    ::TYPES[16] = ::g::iOS::CoreLocation::CLLocationCoordinate2D_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(MapView_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(MapView_type, interface1),
        ::g::Fuse::Controls::IMapView_typeof(), offsetof(MapView_type, interface2));
    type->SetFields(58,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::iOS::Controls::MapView, _bearingValue), 0,
        ::g::Fuse::iOS::Controls::MapViewController_typeof(), offsetof(::g::Fuse::iOS::Controls::MapView, _container), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::iOS::Controls::MapView, _latInternal), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::iOS::Controls::MapView, _lngInternal), 0,
        ::g::Fuse::Controls::MapStyle_typeof(), offsetof(::g::Fuse::iOS::Controls::MapView, _mapStyle), 0,
        ::g::Fuse::iOS::Controls::FuseMapView_typeof(), offsetof(::g::Fuse::iOS::Controls::MapView, _mapView), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::iOS::Controls::MapView, _tiltValue), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::iOS::Controls::MapView, _zoomValue), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::iOS::Controls::MapView, _ShowCompass), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::iOS::Controls::MapView, _ShowMyLocationButton), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::iOS::Controls::MapView, _ZoomMax), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::iOS::Controls::MapView, _ZoomMin), 0);
    type->Reflection.SetFunctions(36,
        new uFunction("get_AllowRotate", NULL, (void*)MapView__get_AllowRotate_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_AllowRotate", NULL, (void*)MapView__set_AllowRotate_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_AllowTilt", NULL, (void*)MapView__get_AllowTilt_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_AllowTilt", NULL, (void*)MapView__set_AllowTilt_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_AllowZoom", NULL, (void*)MapView__get_AllowZoom_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_AllowZoom", NULL, (void*)MapView__set_AllowZoom_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Bearing", NULL, (void*)MapView__get_Bearing_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Bearing", NULL, (void*)MapView__set_Bearing_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("HandleLongPress", NULL, (void*)MapView__HandleLongPress_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("HandleMarkerTapped", NULL, (void*)MapView__HandleMarkerTapped_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("HandleTapped", NULL, (void*)MapView__HandleTapped_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("get_Latitude", NULL, (void*)MapView__get_Latitude_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Latitude", NULL, (void*)MapView__set_Latitude_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Longitude", NULL, (void*)MapView__get_Longitude_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Longitude", NULL, (void*)MapView__set_Longitude_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Markers", NULL, (void*)MapView__get_Markers_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Controls::MapMarker_typeof()), 0),
        new uFunction("MoveTo", NULL, (void*)MapView__MoveTo_fn, 0, false, uVoid_typeof(), 6, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction(".ctor", NULL, (void*)MapView__New1_fn, 0, true, MapView_typeof(), 0),
        new uFunction("SetLocation", NULL, (void*)MapView__SetLocation_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("get_ShowCompass", NULL, (void*)MapView__get_ShowCompass_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ShowCompass", NULL, (void*)MapView__set_ShowCompass_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_ShowMyLocation", NULL, (void*)MapView__get_ShowMyLocation_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ShowMyLocation", NULL, (void*)MapView__set_ShowMyLocation_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_ShowMyLocationButton", NULL, (void*)MapView__get_ShowMyLocationButton_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ShowMyLocationButton", NULL, (void*)MapView__set_ShowMyLocationButton_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Style", NULL, (void*)MapView__get_Style_fn, 0, false, ::g::Fuse::Controls::MapStyle_typeof(), 0),
        new uFunction("set_Style", NULL, (void*)MapView__set_Style_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::MapStyle_typeof()),
        new uFunction("get_Tilt", NULL, (void*)MapView__get_Tilt_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Tilt", NULL, (void*)MapView__set_Tilt_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("UpdateMarkers", NULL, (void*)MapView__UpdateMarkers_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Zoom", NULL, (void*)MapView__get_Zoom_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Zoom", NULL, (void*)MapView__set_Zoom_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_ZoomMax", NULL, (void*)MapView__get_ZoomMax_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_ZoomMax", NULL, (void*)MapView__set_ZoomMax_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_ZoomMin", NULL, (void*)MapView__get_ZoomMin_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_ZoomMin", NULL, (void*)MapView__set_ZoomMin_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
    return type;
}

// public generated MapView() :57
void MapView__ctor_3_fn(MapView* __this)
{
    __this->ctor_3();
}

// private int AddMarker(string label, double lat, double lng) :174
void MapView__AddMarker_fn(MapView* __this, uString* label, double* lat, double* lng, int* __retval)
{
    *__retval = __this->AddMarker(label, *lat, *lng);
}

// public bool get_AllowRotate() :354
void MapView__get_AllowRotate_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->AllowRotate();
}

// public void set_AllowRotate(bool value) :355
void MapView__set_AllowRotate_fn(MapView* __this, bool* value)
{
    __this->AllowRotate(*value);
}

// public bool get_AllowTilt() :348
void MapView__get_AllowTilt_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->AllowTilt();
}

// public void set_AllowTilt(bool value) :349
void MapView__set_AllowTilt_fn(MapView* __this, bool* value)
{
    __this->AllowTilt(*value);
}

// public bool get_AllowZoom() :342
void MapView__get_AllowZoom_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->AllowZoom();
}

// public void set_AllowZoom(bool value) :343
void MapView__set_AllowZoom_fn(MapView* __this, bool* value)
{
    __this->AllowZoom(*value);
}

// protected override sealed void Attach() :160
void MapView__Attach_fn(MapView* __this)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "Attach()");
    __this->Create();
    uPtr((::g::Fuse::Controls::MapView*)__this->SemanticControl())->MapViewClient((uObject*)__this);
}

// public double get_Bearing() :277
void MapView__get_Bearing_fn(MapView* __this, double* __retval)
{
    *__retval = __this->Bearing();
}

// public void set_Bearing(double value) :281
void MapView__set_Bearing_fn(MapView* __this, double* value)
{
    __this->Bearing(*value);
}

// private void ClearMarkers() :190
void MapView__ClearMarkers_fn(MapView* __this)
{
    __this->ClearMarkers();
}

// private void Configure(ObjC.Object mapView, Uno.Action<bool> onMapMove, Uno.Action<int, double, double> onMapTouch, Uno.Action<string> onMarkerTouch) :96
void MapView__Configure_fn(MapView* __this, uObject* mapView, uDelegate* onMapMove, uDelegate* onMapTouch, uDelegate* onMarkerTouch)
{
    __this->Configure(mapView, onMapMove, onMapTouch, onMarkerTouch);
}

// internal override sealed iOS.UIKit.UIView CreateInternal() :63
void MapView__CreateInternal_fn(MapView* __this, ::g::iOS::UIKit::UIView** __retval)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "CreateInternal()");

    if (::g::ObjC::ID::op_Equality(::g::ObjC::Bindings::Object::op_Implicit(__this->_mapView), ::g::ObjC::Bindings::Object::op_Implicit(NULL)))
    {
        __this->_container = ::g::Fuse::iOS::Controls::MapViewController::New9(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)MapView__onReady_fn, __this));
        __this->_mapView = uCast< ::g::Fuse::iOS::Controls::FuseMapView*>(uPtr(__this->_container)->View(), ::TYPES[5/*Fuse.iOS.Controls.FuseMapView*/]);
        __this->Configure((uObject*)__this->_mapView, uDelegate::New(::TYPES[8/*Uno.Action<bool>*/], (void*)MapView__OnCameraMoved_fn, __this), uDelegate::New(::TYPES[9/*Uno.Action<int, double, double>*/], (void*)MapView__OnMapTouch_fn, __this), uDelegate::New(::TYPES[10/*Uno.Action<string>*/], (void*)MapView__HandleMarkerTapped_fn, __this));
    }

    return *__retval = __this->_mapView, void();
}

// protected override sealed void Detach() :166
void MapView__Detach_fn(MapView* __this)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "Detach()");
    __this->DisposeDelegate();
    uPtr((::g::Fuse::Controls::MapView*)__this->SemanticControl())->MapViewClient(NULL);
}

// private void DisposeDelegate() :114
void MapView__DisposeDelegate_fn(MapView* __this)
{
    __this->DisposeDelegate();
}

// public override sealed float2 GetMarginSize(Fuse.LayoutParams lp) :89
void MapView__GetMarginSize_fn(MapView* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "GetMarginSize(Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    return *__retval = ::g::Fuse::iOS::iOSBindingView::GetContentSize(__this->_mapView, lp_), void();
}

// public void HandleLongPress(double lat, double lng) :149
void MapView__HandleLongPress_fn(MapView* __this, double* lat, double* lng)
{
    __this->HandleLongPress(*lat, *lng);
}

// public void HandleMarkerTapped(string label) :196
void MapView__HandleMarkerTapped_fn(MapView* __this, uString* label)
{
    __this->HandleMarkerTapped(label);
}

// public void HandleTapped(double lat, double lng) :144
void MapView__HandleTapped_fn(MapView* __this, double* lat, double* lng)
{
    __this->HandleTapped(*lat, *lng);
}

// public double get_Latitude() :243
void MapView__get_Latitude_fn(MapView* __this, double* __retval)
{
    *__retval = __this->Latitude();
}

// public void set_Latitude(double value) :248
void MapView__set_Latitude_fn(MapView* __this, double* value)
{
    __this->Latitude(*value);
}

// public double get_Longitude() :260
void MapView__get_Longitude_fn(MapView* __this, double* __retval)
{
    *__retval = __this->Longitude();
}

// public void set_Longitude(double value) :265
void MapView__set_Longitude_fn(MapView* __this, double* value)
{
    __this->Longitude(*value);
}

// public Uno.Collections.IList<Fuse.Controls.MapMarker> get_Markers() :211
void MapView__get_Markers_fn(MapView* __this, uObject** __retval)
{
    *__retval = __this->Markers();
}

// public void MoveTo(double latitude, double longitude, double zoomlevel, double tilt, double orientation, [double duration]) :312
void MapView__MoveTo_fn(MapView* __this, double* latitude, double* longitude, double* zoomlevel, double* tilt, double* orientation, double* duration)
{
    __this->MoveTo(*latitude, *longitude, *zoomlevel, *tilt, *orientation, *duration);
}

// public generated MapView New() :57
void MapView__New1_fn(MapView** __retval)
{
    *__retval = MapView::New1();
}

// private void OnCameraMoved(bool animated) :154
void MapView__OnCameraMoved_fn(MapView* __this, bool* animated)
{
    __this->OnCameraMoved(*animated);
}

// private void OnMapTouch(int type, double lat, double lng) :123
void MapView__OnMapTouch_fn(MapView* __this, int* type, double* lat, double* lng)
{
    __this->OnMapTouch(*type, *lat, *lng);
}

// private void onReady() :75
void MapView__onReady_fn(MapView* __this)
{
    __this->onReady();
}

// public void SetLocation(double latitude, double longitude) :358
void MapView__SetLocation_fn(MapView* __this, double* latitude, double* longitude)
{
    __this->SetLocation(*latitude, *longitude);
}

// public generated bool get_ShowCompass() :336
void MapView__get_ShowCompass_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->ShowCompass();
}

// public generated void set_ShowCompass(bool value) :337
void MapView__set_ShowCompass_fn(MapView* __this, bool* value)
{
    __this->ShowCompass(*value);
}

// public bool get_ShowMyLocation() :322
void MapView__get_ShowMyLocation_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->ShowMyLocation();
}

// public void set_ShowMyLocation(bool value) :326
void MapView__set_ShowMyLocation_fn(MapView* __this, bool* value)
{
    __this->ShowMyLocation(*value);
}

// public generated bool get_ShowMyLocationButton() :331
void MapView__get_ShowMyLocationButton_fn(MapView* __this, bool* __retval)
{
    *__retval = __this->ShowMyLocationButton();
}

// public generated void set_ShowMyLocationButton(bool value) :331
void MapView__set_ShowMyLocationButton_fn(MapView* __this, bool* value)
{
    __this->ShowMyLocationButton(*value);
}

// public Fuse.Controls.MapStyle get_Style() :220
void MapView__get_Style_fn(MapView* __this, int* __retval)
{
    *__retval = __this->Style();
}

// public void set_Style(Fuse.Controls.MapStyle value) :223
void MapView__set_Style_fn(MapView* __this, int* value)
{
    __this->Style(*value);
}

// public double get_Tilt() :289
void MapView__get_Tilt_fn(MapView* __this, double* __retval)
{
    *__retval = __this->Tilt();
}

// public void set_Tilt(double value) :293
void MapView__set_Tilt_fn(MapView* __this, double* value)
{
    __this->Tilt(*value);
}

// public void UpdateMarkers() :201
void MapView__UpdateMarkers_fn(MapView* __this)
{
    __this->UpdateMarkers();
}

// public double get_Zoom() :301
void MapView__get_Zoom_fn(MapView* __this, double* __retval)
{
    *__retval = __this->Zoom();
}

// public void set_Zoom(double value) :305
void MapView__set_Zoom_fn(MapView* __this, double* value)
{
    __this->Zoom(*value);
}

// public generated double get_ZoomMax() :311
void MapView__get_ZoomMax_fn(MapView* __this, double* __retval)
{
    *__retval = __this->ZoomMax();
}

// public generated void set_ZoomMax(double value) :311
void MapView__set_ZoomMax_fn(MapView* __this, double* value)
{
    __this->ZoomMax(*value);
}

// public generated double get_ZoomMin() :310
void MapView__get_ZoomMin_fn(MapView* __this, double* __retval)
{
    *__retval = __this->ZoomMin();
}

// public generated void set_ZoomMin(double value) :310
void MapView__set_ZoomMin_fn(MapView* __this, double* value)
{
    __this->ZoomMin(*value);
}

// public generated MapView() [instance] :57
void MapView::ctor_3()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", ".ctor()");
    ctor_2();
}

// private int AddMarker(string label, double lat, double lng) [instance] :174
int MapView::AddMarker(uString* label, double lat, double lng)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "AddMarker(string,double,double)");
    @autoreleasepool
    {
        return [] (::NSString* label, double lat, double lng) -> int
        {
            id dg = [MapViewDelegate instance];
            return [dg addMarker:label latitude:lat longitude:lng];
        } (::uObjC::NativeString(label), lat, lng);
        
    }
    
}

// public bool get_AllowRotate() [instance] :354
bool MapView::AllowRotate()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "get_AllowRotate()");
    return uPtr(_mapView)->RotateEnabled();
}

// public void set_AllowRotate(bool value) [instance] :355
void MapView::AllowRotate(bool value)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "set_AllowRotate(bool)");
    uPtr(_mapView)->RotateEnabled(value);
}

// public bool get_AllowTilt() [instance] :348
bool MapView::AllowTilt()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "get_AllowTilt()");
    return uPtr(_mapView)->PitchEnabled();
}

// public void set_AllowTilt(bool value) [instance] :349
void MapView::AllowTilt(bool value)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "set_AllowTilt(bool)");
    uPtr(_mapView)->PitchEnabled(value);
}

// public bool get_AllowZoom() [instance] :342
bool MapView::AllowZoom()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "get_AllowZoom()");
    return uPtr(_mapView)->ZoomEnabled();
}

// public void set_AllowZoom(bool value) [instance] :343
void MapView::AllowZoom(bool value)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "set_AllowZoom(bool)");
    uPtr(_mapView)->ZoomEnabled(value);
}

// public double get_Bearing() [instance] :277
double MapView::Bearing()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "get_Bearing()");
    return uPtr(uPtr(_mapView)->Camera())->Heading();
}

// public void set_Bearing(double value) [instance] :281
void MapView::Bearing(double value)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "set_Bearing(double)");
    uPtr(uPtr(_mapView)->Camera())->Heading(_bearingValue = value);
}

// private void ClearMarkers() [instance] :190
void MapView::ClearMarkers()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "ClearMarkers()");
    @autoreleasepool
    {
        id dg = [MapViewDelegate instance];
        [dg clearMarkers];
    }
    
}

// private void Configure(ObjC.Object mapView, Uno.Action<bool> onMapMove, Uno.Action<int, double, double> onMapTouch, Uno.Action<string> onMarkerTouch) [instance] :96
void MapView::Configure(uObject* mapView, uDelegate* onMapMove, uDelegate* onMapTouch, uDelegate* onMarkerTouch)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "Configure(ObjC.Object,Uno.Action<bool>,Uno.Action<int, double, double>,Uno.Action<string>)");
    @autoreleasepool
    {
        [] (::id mapView, ::uObjC::Function<void, bool> onMapMove, ::uObjC::Function<void, int, double, double> onMapTouch, ::uObjC::Function<void, ::NSString*> onMarkerTouch) -> void
        {
            NSLog(@"Configure step");
            MKMapView* mv = mapView;
            mv.translatesAutoresizingMaskIntoConstraints = YES;
            
            id dg = [MapViewDelegate instance];
            [dg setAsDelegate:mv]; 
            [dg setMapMoveAction:onMapMove];
            [dg setMapTouchAction:onMapTouch];
            [dg setMarkerSelectAction:onMarkerTouch];
            
            mv.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
        } (::g::ObjC::Helpers::GetHandle(mapView), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, bool>
        {
            return [[^ void (bool arg)
            {
                ::uAutoReleasePool __autoReleasePool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(uCRef(arg));
                
            } copy] autorelease];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onMapMove]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, int, double, double>
        {
            return [[^ void (int arg1, double arg2, double arg3)
            {
                ::uAutoReleasePool __autoReleasePool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->Invoke(3, uCRef<int>(arg1), uCRef(arg2), uCRef(arg3));
                
            } copy] autorelease];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onMapTouch]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::NSString*>
        {
            return [[^ void (::NSString* arg)
            {
                ::uAutoReleasePool __autoReleasePool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::uObjC::UnoString(arg));
                
            } copy] autorelease];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onMarkerTouch]));
        
    }
    
}

// private void DisposeDelegate() [instance] :114
void MapView::DisposeDelegate()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "DisposeDelegate()");
    @autoreleasepool
    {
        id dg = [MapViewDelegate instance];
        [dg clearMarkers];
        [dg setAsDelegate:nil]; 
        [dg setMapMoveAction:nil]; 
        [dg setMapTouchAction:nil];
    }
    
}

// public void HandleLongPress(double lat, double lng) [instance] :149
void MapView::HandleLongPress(double lat, double lng)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "HandleLongPress(double,double)");
    uPtr((::g::Fuse::Controls::MapView*)SemanticControl())->HandleLongPress(lat, lng);
}

// public void HandleMarkerTapped(string label) [instance] :196
void MapView::HandleMarkerTapped(uString* label)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "HandleMarkerTapped(string)");
    uPtr((::g::Fuse::Controls::MapView*)SemanticControl())->HandleMarkerTapped(label);
}

// public void HandleTapped(double lat, double lng) [instance] :144
void MapView::HandleTapped(double lat, double lng)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "HandleTapped(double,double)");
    uPtr((::g::Fuse::Controls::MapView*)SemanticControl())->HandleTapped(lat, lng);
}

// public double get_Latitude() [instance] :243
double MapView::Latitude()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "get_Latitude()");
    return ::g::Uno::Double::IsNaN(uPtr(_mapView)->CenterCoordinate().Latitude) ? _latInternal : uPtr(_mapView)->CenterCoordinate().Latitude;
}

// public void set_Latitude(double value) [instance] :248
void MapView::Latitude(double value)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "set_Latitude(double)");
    ::g::iOS::CoreLocation::CLLocationCoordinate2D cc = uPtr(_mapView)->CenterCoordinate();
    cc.Latitude = (_latInternal = value);
    cc.Longitude = _lngInternal;
    uPtr(_mapView)->setCenterCoordinate(cc);
}

// public double get_Longitude() [instance] :260
double MapView::Longitude()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "get_Longitude()");
    return ::g::Uno::Double::IsNaN(uPtr(_mapView)->CenterCoordinate().Longitude) ? _lngInternal : uPtr(_mapView)->CenterCoordinate().Longitude;
}

// public void set_Longitude(double value) [instance] :265
void MapView::Longitude(double value)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "set_Longitude(double)");
    ::g::iOS::CoreLocation::CLLocationCoordinate2D cc = uPtr(_mapView)->CenterCoordinate();
    cc.Longitude = (_lngInternal = value);
    cc.Latitude = _latInternal;
    uPtr(_mapView)->setCenterCoordinate(cc);
}

// public Uno.Collections.IList<Fuse.Controls.MapMarker> get_Markers() [instance] :211
uObject* MapView::Markers()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "get_Markers()");
    return uPtr((::g::Fuse::Controls::MapView*)SemanticControl())->Markers();
}

// public void MoveTo(double latitude, double longitude, double zoomlevel, double tilt, double orientation, [double duration]) [instance] :312
void MapView::MoveTo(double latitude, double longitude, double zoomlevel, double tilt, double orientation, double duration)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "MoveTo(double,double,double,double,double,[double])");
    Latitude(latitude);
    Longitude(longitude);
    Zoom(zoomlevel);
    Tilt(tilt);
    Bearing(orientation);
}

// private void OnCameraMoved(bool animated) [instance] :154
void MapView::OnCameraMoved(bool animated)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "OnCameraMoved(bool)");

    if (animated)
        uPtr((::g::Fuse::Controls::MapView*)SemanticControl())->OnMapInteractionEnd();
}

// private void OnMapTouch(int type, double lat, double lng) [instance] :123
void MapView::OnMapTouch(int type, double lat, double lng)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "OnMapTouch(int,double,double)");

    switch (type)
    {
        case 0:
        {
            uPtr((::g::Fuse::Controls::MapView*)SemanticControl())->OnMapInteractionStart();
            break;
        }
        case 1:
            break;
        case 2:
        {
            HandleTapped(lat, lng);
            break;
        }
        case 3:
        {
            HandleLongPress(lat, lng);
            break;
        }
        case 4:
        {
            uPtr((::g::Fuse::Controls::MapView*)SemanticControl())->OnMapInteractionEnd();
            break;
        }
    }
}

// private void onReady() [instance] :75
void MapView::onReady()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "onReady()");
    Latitude(_latInternal);
    Longitude(_lngInternal);
    Zoom(_zoomValue);
    Tilt(_tiltValue);
    Bearing(_bearingValue);
}

// public void SetLocation(double latitude, double longitude) [instance] :358
void MapView::SetLocation(double latitude, double longitude)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "SetLocation(double,double)");
    Latitude(latitude);
    Longitude(longitude);
}

// public generated bool get_ShowCompass() [instance] :336
bool MapView::ShowCompass()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "get_ShowCompass()");
    return _ShowCompass;
}

// public generated void set_ShowCompass(bool value) [instance] :337
void MapView::ShowCompass(bool value)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "set_ShowCompass(bool)");
    _ShowCompass = value;
}

// public bool get_ShowMyLocation() [instance] :322
bool MapView::ShowMyLocation()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "get_ShowMyLocation()");
    return uPtr(_mapView)->showsUserLocation();
}

// public void set_ShowMyLocation(bool value) [instance] :326
void MapView::ShowMyLocation(bool value)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "set_ShowMyLocation(bool)");
    uPtr(_mapView)->setShowsUserLocation(value);
}

// public generated bool get_ShowMyLocationButton() [instance] :331
bool MapView::ShowMyLocationButton()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "get_ShowMyLocationButton()");
    return _ShowMyLocationButton;
}

// public generated void set_ShowMyLocationButton(bool value) [instance] :331
void MapView::ShowMyLocationButton(bool value)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "set_ShowMyLocationButton(bool)");
    _ShowMyLocationButton = value;
}

// public Fuse.Controls.MapStyle get_Style() [instance] :220
int MapView::Style()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "get_Style()");
    return _mapStyle;
}

// public void set_Style(Fuse.Controls.MapStyle value) [instance] :223
void MapView::Style(int value)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "set_Style(Fuse.Controls.MapStyle)");
    _mapStyle = value;

    switch (_mapStyle)
    {
        case 1:
        {
            uPtr(_mapView)->MapType(1);
            break;
        }
        case 2:
        {
            uPtr(_mapView)->MapType(2);
            break;
        }
        default:
        {
            uPtr(_mapView)->MapType(0);
            break;
        }
    }
}

// public double get_Tilt() [instance] :289
double MapView::Tilt()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "get_Tilt()");
    return uPtr(uPtr(_mapView)->Camera())->Pitch();
}

// public void set_Tilt(double value) [instance] :293
void MapView::Tilt(double value)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "set_Tilt(double)");
    uPtr(uPtr(_mapView)->Camera())->Pitch(_tiltValue = value);
}

// public void UpdateMarkers() [instance] :201
void MapView::UpdateMarkers()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "UpdateMarkers()");
    ::g::Fuse::Controls::MapMarker* ret3;
    ClearMarkers();

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Markers()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[13/*Fuse.Controls.MapMarker*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Controls::MapMarker* m = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[12/*Uno.Collections.IEnumerator<Fuse.Controls.MapMarker>*/]), &ret3), ret3);
        AddMarker(uPtr(m)->Label(), uPtr(m)->Latitude(), uPtr(m)->Longitude());
    }
}

// public double get_Zoom() [instance] :301
double MapView::Zoom()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "get_Zoom()");
    return uPtr(uPtr(_mapView)->Camera())->Altitude();
}

// public void set_Zoom(double value) [instance] :305
void MapView::Zoom(double value)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "set_Zoom(double)");
    uPtr(uPtr(_mapView)->Camera())->Altitude(_zoomValue = value);
}

// public generated double get_ZoomMax() [instance] :311
double MapView::ZoomMax()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "get_ZoomMax()");
    return _ZoomMax;
}

// public generated void set_ZoomMax(double value) [instance] :311
void MapView::ZoomMax(double value)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "set_ZoomMax(double)");
    _ZoomMax = value;
}

// public generated double get_ZoomMin() [instance] :310
double MapView::ZoomMin()
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "get_ZoomMin()");
    return _ZoomMin;
}

// public generated void set_ZoomMin(double value) [instance] :310
void MapView::ZoomMin(double value)
{
    uStackFrame __("Fuse.iOS.Controls.MapView", "set_ZoomMin(double)");
    _ZoomMin = value;
}

// public generated MapView New() [static] :57
MapView* MapView::New1()
{
    MapView* obj2 = (MapView*)uNew(MapView_typeof());
    obj2->ctor_3();
    return obj2;
}
// }

}}}} // ::g::Fuse::iOS::Controls
