// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.14/$.uno#10'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.IVisualDraw.h>
#include <Fuse.Controls.PathShape.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IChildObject.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Controls{struct Ellipse;}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometryRenderer;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class Ellipse :741
// {
::g::Fuse::Controls::PathShape_type* Ellipse_typeof();
void Ellipse__ctor_7_fn(Ellipse* __this);
void Ellipse__New4_fn(Ellipse** __retval);
void Ellipse__UpdatePath_fn(Ellipse* __this, ::g::Fuse::Drawing::PathGeometryRenderer* renderer);

struct Ellipse : ::g::Fuse::Controls::PathShape
{
    ::g::Uno::Float2 _cachedCenter;
    ::g::Uno::Float2 _cachedRadius;

    void ctor_7();
    static Ellipse* New4();
};
// }

}}} // ::g::Fuse::Controls
