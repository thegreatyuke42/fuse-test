#pragma once

#include <iOS.CoreGraphics.CGAffineTransform.h>
#include <iOS.CoreGraphics.CGPoint.h>
#include <iOS.CoreGraphics.CGRect.h>
#include <iOS.CoreGraphics.CGSize.h>
#include <iOS.CoreLocation.CLLocationCoordinate2D.h>
#include <iOS.Foundation._NSRange.h>
#include <iOS.MapKit.MKCoordinateRegion.h>
#include <iOS.MapKit.MKCoordinateSpan.h>
#include <iOS.MapKit.MKMapPoint.h>
#include <iOS.MapKit.MKMapRect.h>
#include <iOS.MapKit.MKMapSize.h>
#include <iOS.QuartzCore.CATransform3D.h>
#include <iOS.UIKit.UIEdgeInsets.h>

namespace uObjC { namespace Struct {

template <class Source, class Destination>
inline Destination ConvertEnum(Source src, Destination dst = Destination())
{
    return dst = Destination(src);
}


// Struct conversion functions -- Declarations
template <class Destination>
inline Destination FromUno__NSRange(::g::iOS::Foundation::_NSRange const &, Destination = Destination());
template <class Source>
inline ::g::iOS::Foundation::_NSRange ToUno__NSRange(Source const &, ::g::iOS::Foundation::_NSRange = ::g::iOS::Foundation::_NSRange());
template <class Destination>
inline Destination FromUno_CATransform3D(::g::iOS::QuartzCore::CATransform3D const &, Destination = Destination());
template <class Source>
inline ::g::iOS::QuartzCore::CATransform3D ToUno_CATransform3D(Source const &, ::g::iOS::QuartzCore::CATransform3D = ::g::iOS::QuartzCore::CATransform3D());
template <class Destination>
inline Destination FromUno_CGAffineTransform(::g::iOS::CoreGraphics::CGAffineTransform const &, Destination = Destination());
template <class Source>
inline ::g::iOS::CoreGraphics::CGAffineTransform ToUno_CGAffineTransform(Source const &, ::g::iOS::CoreGraphics::CGAffineTransform = ::g::iOS::CoreGraphics::CGAffineTransform());
template <class Destination>
inline Destination FromUno_CGPoint(::g::iOS::CoreGraphics::CGPoint const &, Destination = Destination());
template <class Source>
inline ::g::iOS::CoreGraphics::CGPoint ToUno_CGPoint(Source const &, ::g::iOS::CoreGraphics::CGPoint = ::g::iOS::CoreGraphics::CGPoint());
template <class Destination>
inline Destination FromUno_CGRect(::g::iOS::CoreGraphics::CGRect const &, Destination = Destination());
template <class Source>
inline ::g::iOS::CoreGraphics::CGRect ToUno_CGRect(Source const &, ::g::iOS::CoreGraphics::CGRect = ::g::iOS::CoreGraphics::CGRect());
template <class Destination>
inline Destination FromUno_CGSize(::g::iOS::CoreGraphics::CGSize const &, Destination = Destination());
template <class Source>
inline ::g::iOS::CoreGraphics::CGSize ToUno_CGSize(Source const &, ::g::iOS::CoreGraphics::CGSize = ::g::iOS::CoreGraphics::CGSize());
template <class Destination>
inline Destination FromUno_CLLocationCoordinate2D(::g::iOS::CoreLocation::CLLocationCoordinate2D const &, Destination = Destination());
template <class Source>
inline ::g::iOS::CoreLocation::CLLocationCoordinate2D ToUno_CLLocationCoordinate2D(Source const &, ::g::iOS::CoreLocation::CLLocationCoordinate2D = ::g::iOS::CoreLocation::CLLocationCoordinate2D());
template <class Destination>
inline Destination FromUno_MKCoordinateRegion(::g::iOS::MapKit::MKCoordinateRegion const &, Destination = Destination());
template <class Source>
inline ::g::iOS::MapKit::MKCoordinateRegion ToUno_MKCoordinateRegion(Source const &, ::g::iOS::MapKit::MKCoordinateRegion = ::g::iOS::MapKit::MKCoordinateRegion());
template <class Destination>
inline Destination FromUno_MKCoordinateSpan(::g::iOS::MapKit::MKCoordinateSpan const &, Destination = Destination());
template <class Source>
inline ::g::iOS::MapKit::MKCoordinateSpan ToUno_MKCoordinateSpan(Source const &, ::g::iOS::MapKit::MKCoordinateSpan = ::g::iOS::MapKit::MKCoordinateSpan());
template <class Destination>
inline Destination FromUno_MKMapPoint(::g::iOS::MapKit::MKMapPoint const &, Destination = Destination());
template <class Source>
inline ::g::iOS::MapKit::MKMapPoint ToUno_MKMapPoint(Source const &, ::g::iOS::MapKit::MKMapPoint = ::g::iOS::MapKit::MKMapPoint());
template <class Destination>
inline Destination FromUno_MKMapRect(::g::iOS::MapKit::MKMapRect const &, Destination = Destination());
template <class Source>
inline ::g::iOS::MapKit::MKMapRect ToUno_MKMapRect(Source const &, ::g::iOS::MapKit::MKMapRect = ::g::iOS::MapKit::MKMapRect());
template <class Destination>
inline Destination FromUno_MKMapSize(::g::iOS::MapKit::MKMapSize const &, Destination = Destination());
template <class Source>
inline ::g::iOS::MapKit::MKMapSize ToUno_MKMapSize(Source const &, ::g::iOS::MapKit::MKMapSize = ::g::iOS::MapKit::MKMapSize());
template <class Destination>
inline Destination FromUno_UIEdgeInsets(::g::iOS::UIKit::UIEdgeInsets const &, Destination = Destination());
template <class Source>
inline ::g::iOS::UIKit::UIEdgeInsets ToUno_UIEdgeInsets(Source const &, ::g::iOS::UIKit::UIEdgeInsets = ::g::iOS::UIKit::UIEdgeInsets());


// Struct conversion functions -- Definitions
// Converters for iOS.CoreGraphics.CGAffineTransform
template <class Destination>
inline Destination FromUno_CGAffineTransform(::g::iOS::CoreGraphics::CGAffineTransform const &src, Destination dst)
{
    dst.a = src.A;
    dst.b = src.B;
    dst.c = src.C;
    dst.d = src.D;
    dst.tx = src.Tx;
    dst.ty = src.Ty;

    return dst;
}
template <class Source>
inline ::g::iOS::CoreGraphics::CGAffineTransform ToUno_CGAffineTransform(Source const &src, ::g::iOS::CoreGraphics::CGAffineTransform dst)
{
    dst.A = src.a;
    dst.B = src.b;
    dst.C = src.c;
    dst.D = src.d;
    dst.Tx = src.tx;
    dst.Ty = src.ty;

    return dst;
}
// Converters for iOS.CoreGraphics.CGPoint
template <class Destination>
inline Destination FromUno_CGPoint(::g::iOS::CoreGraphics::CGPoint const &src, Destination dst)
{
    dst.x = src.X;
    dst.y = src.Y;

    return dst;
}
template <class Source>
inline ::g::iOS::CoreGraphics::CGPoint ToUno_CGPoint(Source const &src, ::g::iOS::CoreGraphics::CGPoint dst)
{
    dst.X = src.x;
    dst.Y = src.y;

    return dst;
}
// Converters for iOS.CoreGraphics.CGRect
template <class Destination>
inline Destination FromUno_CGRect(::g::iOS::CoreGraphics::CGRect const &src, Destination dst)
{
    dst.origin = FromUno_CGPoint(src.Origin, dst.origin);
    dst.size = FromUno_CGSize(src.Size, dst.size);

    return dst;
}
template <class Source>
inline ::g::iOS::CoreGraphics::CGRect ToUno_CGRect(Source const &src, ::g::iOS::CoreGraphics::CGRect dst)
{
    dst.Origin = ToUno_CGPoint(src.origin, dst.Origin);
    dst.Size = ToUno_CGSize(src.size, dst.Size);

    return dst;
}
// Converters for iOS.CoreGraphics.CGSize
template <class Destination>
inline Destination FromUno_CGSize(::g::iOS::CoreGraphics::CGSize const &src, Destination dst)
{
    dst.width = src.Width;
    dst.height = src.Height;

    return dst;
}
template <class Source>
inline ::g::iOS::CoreGraphics::CGSize ToUno_CGSize(Source const &src, ::g::iOS::CoreGraphics::CGSize dst)
{
    dst.Width = src.width;
    dst.Height = src.height;

    return dst;
}
// Converters for iOS.CoreLocation.CLLocationCoordinate2D
template <class Destination>
inline Destination FromUno_CLLocationCoordinate2D(::g::iOS::CoreLocation::CLLocationCoordinate2D const &src, Destination dst)
{
    dst.latitude = src.Latitude;
    dst.longitude = src.Longitude;

    return dst;
}
template <class Source>
inline ::g::iOS::CoreLocation::CLLocationCoordinate2D ToUno_CLLocationCoordinate2D(Source const &src, ::g::iOS::CoreLocation::CLLocationCoordinate2D dst)
{
    dst.Latitude = src.latitude;
    dst.Longitude = src.longitude;

    return dst;
}
// Converters for iOS.Foundation._NSRange
template <class Destination>
inline Destination FromUno__NSRange(::g::iOS::Foundation::_NSRange const &src, Destination dst)
{
    dst.location = src.Location;
    dst.length = src.Length;

    return dst;
}
template <class Source>
inline ::g::iOS::Foundation::_NSRange ToUno__NSRange(Source const &src, ::g::iOS::Foundation::_NSRange dst)
{
    dst.Location = src.location;
    dst.Length = src.length;

    return dst;
}
// Converters for iOS.MapKit.MKCoordinateRegion
template <class Destination>
inline Destination FromUno_MKCoordinateRegion(::g::iOS::MapKit::MKCoordinateRegion const &src, Destination dst)
{
    dst.center = FromUno_CLLocationCoordinate2D(src.Center, dst.center);
    dst.span = FromUno_MKCoordinateSpan(src.Span, dst.span);

    return dst;
}
template <class Source>
inline ::g::iOS::MapKit::MKCoordinateRegion ToUno_MKCoordinateRegion(Source const &src, ::g::iOS::MapKit::MKCoordinateRegion dst)
{
    dst.Center = ToUno_CLLocationCoordinate2D(src.center, dst.Center);
    dst.Span = ToUno_MKCoordinateSpan(src.span, dst.Span);

    return dst;
}
// Converters for iOS.MapKit.MKCoordinateSpan
template <class Destination>
inline Destination FromUno_MKCoordinateSpan(::g::iOS::MapKit::MKCoordinateSpan const &src, Destination dst)
{
    dst.latitudeDelta = src.LatitudeDelta;
    dst.longitudeDelta = src.LongitudeDelta;

    return dst;
}
template <class Source>
inline ::g::iOS::MapKit::MKCoordinateSpan ToUno_MKCoordinateSpan(Source const &src, ::g::iOS::MapKit::MKCoordinateSpan dst)
{
    dst.LatitudeDelta = src.latitudeDelta;
    dst.LongitudeDelta = src.longitudeDelta;

    return dst;
}
// Converters for iOS.MapKit.MKMapPoint
template <class Destination>
inline Destination FromUno_MKMapPoint(::g::iOS::MapKit::MKMapPoint const &src, Destination dst)
{
    dst.x = src.X;
    dst.y = src.Y;

    return dst;
}
template <class Source>
inline ::g::iOS::MapKit::MKMapPoint ToUno_MKMapPoint(Source const &src, ::g::iOS::MapKit::MKMapPoint dst)
{
    dst.X = src.x;
    dst.Y = src.y;

    return dst;
}
// Converters for iOS.MapKit.MKMapRect
template <class Destination>
inline Destination FromUno_MKMapRect(::g::iOS::MapKit::MKMapRect const &src, Destination dst)
{
    dst.origin = FromUno_MKMapPoint(src.Origin, dst.origin);
    dst.size = FromUno_MKMapSize(src.Size, dst.size);

    return dst;
}
template <class Source>
inline ::g::iOS::MapKit::MKMapRect ToUno_MKMapRect(Source const &src, ::g::iOS::MapKit::MKMapRect dst)
{
    dst.Origin = ToUno_MKMapPoint(src.origin, dst.Origin);
    dst.Size = ToUno_MKMapSize(src.size, dst.Size);

    return dst;
}
// Converters for iOS.MapKit.MKMapSize
template <class Destination>
inline Destination FromUno_MKMapSize(::g::iOS::MapKit::MKMapSize const &src, Destination dst)
{
    dst.width = src.Width;
    dst.height = src.Height;

    return dst;
}
template <class Source>
inline ::g::iOS::MapKit::MKMapSize ToUno_MKMapSize(Source const &src, ::g::iOS::MapKit::MKMapSize dst)
{
    dst.Width = src.width;
    dst.Height = src.height;

    return dst;
}
// Converters for iOS.QuartzCore.CATransform3D
template <class Destination>
inline Destination FromUno_CATransform3D(::g::iOS::QuartzCore::CATransform3D const &src, Destination dst)
{
    dst.m11 = src.M11;
    dst.m12 = src.M12;
    dst.m13 = src.M13;
    dst.m14 = src.M14;
    dst.m21 = src.M21;
    dst.m22 = src.M22;
    dst.m23 = src.M23;
    dst.m24 = src.M24;
    dst.m31 = src.M31;
    dst.m32 = src.M32;
    dst.m33 = src.M33;
    dst.m34 = src.M34;
    dst.m41 = src.M41;
    dst.m42 = src.M42;
    dst.m43 = src.M43;
    dst.m44 = src.M44;

    return dst;
}
template <class Source>
inline ::g::iOS::QuartzCore::CATransform3D ToUno_CATransform3D(Source const &src, ::g::iOS::QuartzCore::CATransform3D dst)
{
    dst.M11 = src.m11;
    dst.M12 = src.m12;
    dst.M13 = src.m13;
    dst.M14 = src.m14;
    dst.M21 = src.m21;
    dst.M22 = src.m22;
    dst.M23 = src.m23;
    dst.M24 = src.m24;
    dst.M31 = src.m31;
    dst.M32 = src.m32;
    dst.M33 = src.m33;
    dst.M34 = src.m34;
    dst.M41 = src.m41;
    dst.M42 = src.m42;
    dst.M43 = src.m43;
    dst.M44 = src.m44;

    return dst;
}
// Converters for iOS.UIKit.UIEdgeInsets
template <class Destination>
inline Destination FromUno_UIEdgeInsets(::g::iOS::UIKit::UIEdgeInsets const &src, Destination dst)
{
    dst.top = src.Top;
    dst.left = src.Left;
    dst.bottom = src.Bottom;
    dst.right = src.Right;

    return dst;
}
template <class Source>
inline ::g::iOS::UIKit::UIEdgeInsets ToUno_UIEdgeInsets(Source const &src, ::g::iOS::UIKit::UIEdgeInsets dst)
{
    dst.Top = src.top;
    dst.Left = src.left;
    dst.Bottom = src.bottom;
    dst.Right = src.right;

    return dst;
}

}} // namespace uObjC::Struct
