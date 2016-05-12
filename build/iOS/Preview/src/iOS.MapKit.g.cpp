// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <iOS.MapKit.MKAnnotationViewDragState.h>
#include <iOS.MapKit.MKCoordinateRegion.h>
#include <iOS.MapKit.MKCoordinateSpan.h>
#include <iOS.MapKit.MKMapPoint.h>
#include <iOS.MapKit.MKMapRect.h>
#include <iOS.MapKit.MKMapSize.h>
#include <iOS.MapKit.MKMapType.h>
#include <iOS.MapKit.MKOverlayLevel.h>
#include <iOS.MapKit.MKUserTrackingMode.h>
#include <Uno.Double.h>

namespace g{
namespace iOS{
namespace MapKit{

// /usr/local/share/uno/Packages/Experimental.iOS/0.27.2/enum/$.uno#247
// --------------------------------------------------------------------

// public enum MKAnnotationViewDragState :5022
uEnumType* MKAnnotationViewDragState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.MapKit.MKAnnotationViewDragState", ::g::Uno::UInt_typeof(), 5);
    type->SetLiterals(
        "MKAnnotationViewDragStateNone", 0LL,
        "MKAnnotationViewDragStateStarting", 1LL,
        "MKAnnotationViewDragStateDragging", 2LL,
        "MKAnnotationViewDragStateCanceling", 3LL,
        "MKAnnotationViewDragStateEnding", 4LL);
    return type;
}

// /usr/local/share/uno/Packages/Experimental.iOS/0.27.2/struct/$.uno#126
// ----------------------------------------------------------------------

// public extern struct MKCoordinateRegion :3209
// {
uStructType* MKCoordinateRegion_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(MKCoordinateRegion);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("iOS.MapKit.MKCoordinateRegion", options);
    type->SetFields(0,
        ::g::iOS::CoreLocation::CLLocationCoordinate2D_typeof(), offsetof(::g::iOS::MapKit::MKCoordinateRegion, Center), 0,
        ::g::iOS::MapKit::MKCoordinateSpan_typeof(), offsetof(::g::iOS::MapKit::MKCoordinateRegion, Span), 0);
    type->Reflection.SetFields(2,
        new uField("Center", 0),
        new uField("Span", 1));
    return type;
}
// }

// /usr/local/share/uno/Packages/Experimental.iOS/0.27.2/struct/$.uno#127
// ----------------------------------------------------------------------

// public extern struct MKCoordinateSpan :3231
// {
uStructType* MKCoordinateSpan_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(MKCoordinateSpan);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("iOS.MapKit.MKCoordinateSpan", options);
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::iOS::MapKit::MKCoordinateSpan, LatitudeDelta), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::iOS::MapKit::MKCoordinateSpan, LongitudeDelta), 0);
    type->Reflection.SetFields(2,
        new uField("LatitudeDelta", 0),
        new uField("LongitudeDelta", 1));
    return type;
}
// }

// /usr/local/share/uno/Packages/Experimental.iOS/0.27.2/struct/$.uno#128
// ----------------------------------------------------------------------

// public extern struct MKMapPoint :3253
// {
uStructType* MKMapPoint_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(MKMapPoint);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("iOS.MapKit.MKMapPoint", options);
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::iOS::MapKit::MKMapPoint, X), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::iOS::MapKit::MKMapPoint, Y), 0);
    type->Reflection.SetFields(2,
        new uField("X", 0),
        new uField("Y", 1));
    return type;
}
// }

// /usr/local/share/uno/Packages/Experimental.iOS/0.27.2/struct/$.uno#129
// ----------------------------------------------------------------------

// public extern struct MKMapRect :3275
// {
uStructType* MKMapRect_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(MKMapRect);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("iOS.MapKit.MKMapRect", options);
    type->SetFields(0,
        ::g::iOS::MapKit::MKMapPoint_typeof(), offsetof(::g::iOS::MapKit::MKMapRect, Origin), 0,
        ::g::iOS::MapKit::MKMapSize_typeof(), offsetof(::g::iOS::MapKit::MKMapRect, Size), 0);
    type->Reflection.SetFields(2,
        new uField("Origin", 0),
        new uField("Size", 1));
    return type;
}
// }

// /usr/local/share/uno/Packages/Experimental.iOS/0.27.2/struct/$.uno#130
// ----------------------------------------------------------------------

// public extern struct MKMapSize :3297
// {
uStructType* MKMapSize_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(MKMapSize);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("iOS.MapKit.MKMapSize", options);
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::iOS::MapKit::MKMapSize, Width), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::iOS::MapKit::MKMapSize, Height), 0);
    type->Reflection.SetFields(2,
        new uField("Height", 1),
        new uField("Width", 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/Experimental.iOS/0.27.2/enum/$.uno#252
// --------------------------------------------------------------------

// public enum MKMapType :5107
uEnumType* MKMapType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.MapKit.MKMapType", ::g::Uno::UInt_typeof(), 3);
    type->SetLiterals(
        "MKMapTypeStandard", 0LL,
        "MKMapTypeSatellite", 1LL,
        "MKMapTypeHybrid", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Experimental.iOS/0.27.2/enum/$.uno#253
// --------------------------------------------------------------------

// public enum MKOverlayLevel :5123
uEnumType* MKOverlayLevel_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.MapKit.MKOverlayLevel", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "MKOverlayLevelAboveRoads", 0LL,
        "MKOverlayLevelAboveLabels", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Experimental.iOS/0.27.2/enum/$.uno#255
// --------------------------------------------------------------------

// public enum MKUserTrackingMode :5154
uEnumType* MKUserTrackingMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("iOS.MapKit.MKUserTrackingMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "MKUserTrackingModeNone", 0LL,
        "MKUserTrackingModeFollow", 1LL,
        "MKUserTrackingModeFollowWithHeading", 2LL);
    return type;
}

}}} // ::g::iOS::MapKit
