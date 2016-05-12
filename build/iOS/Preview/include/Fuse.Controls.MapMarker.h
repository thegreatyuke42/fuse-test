// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.14/MapView/$.uno#1'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IChildObject.h>
#include <Fuse.IDataContext.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Controls{struct MapMarker;}}}
namespace g{namespace Fuse{struct DrawContext;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class MapMarker :195
// {
::g::Fuse::Elements::Element_type* MapMarker_typeof();
void MapMarker__ctor_2_fn(MapMarker* __this);
void MapMarker__get_Label_fn(MapMarker* __this, uString** __retval);
void MapMarker__set_Label_fn(MapMarker* __this, uString* value);
void MapMarker__get_Latitude_fn(MapMarker* __this, double* __retval);
void MapMarker__set_Latitude_fn(MapMarker* __this, double* value);
void MapMarker__get_Longitude_fn(MapMarker* __this, double* __retval);
void MapMarker__set_Longitude_fn(MapMarker* __this, double* value);
void MapMarker__MarkDirty_fn(MapMarker* __this);
void MapMarker__New1_fn(MapMarker** __retval);
void MapMarker__OnDraw_fn(MapMarker* __this, ::g::Fuse::DrawContext* context);
void MapMarker__OnRooted_fn(MapMarker* __this);
void MapMarker__OnUnrooted_fn(MapMarker* __this);

struct MapMarker : ::g::Fuse::Elements::Element
{
    uStrong<uString*> _label;
    double _latitude;
    double _longitude;

    void ctor_2();
    uString* Label();
    void Label(uString* value);
    double Latitude();
    void Latitude(double value);
    double Longitude();
    void Longitude(double value);
    void MarkDirty();
    static MapMarker* New1();
};
// }

}}} // ::g::Fuse::Controls
