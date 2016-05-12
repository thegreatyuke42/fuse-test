// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.14/$.uno#12'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.ContentControl.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IChildObject.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IViewport.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Float4.h>
namespace g{namespace Fuse{namespace Controls{struct GraphicsView;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct FrustumViewport;}}
namespace g{namespace Fuse{struct OrthographicFrustum;}}
namespace g{namespace Uno{namespace Geometry{struct Ray;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class GraphicsView :787
// {
struct GraphicsView_type : ::g::Fuse::Controls::ContentControl_type
{
    ::g::Fuse::IViewport interface7;
};

GraphicsView_type* GraphicsView_typeof();
void GraphicsView__ctor_4_fn(GraphicsView* __this);
void GraphicsView__get_Color_fn(GraphicsView* __this, ::g::Uno::Float4* __retval);
void GraphicsView__set_Color_fn(GraphicsView* __this, ::g::Uno::Float4* value);
void GraphicsView__Draw_fn(GraphicsView* __this, ::g::Fuse::DrawContext* dc);
void GraphicsView__DrawFrame_fn(GraphicsView* __this);
void GraphicsView__New2_fn(GraphicsView** __retval);
void GraphicsView__OnInvalidateVisual_fn(GraphicsView* __this);
void GraphicsView__get_PixelSize_fn(GraphicsView* __this, ::g::Uno::Float2* __retval);
void GraphicsView__get_PixelsPerPoint_fn(GraphicsView* __this, float* __retval);
void GraphicsView__PointToWorldRay_fn(GraphicsView* __this, ::g::Uno::Float2* pixelPos, ::g::Uno::Geometry::Ray* __retval);
void GraphicsView__get_ProjectionTransform_fn(GraphicsView* __this, ::g::Uno::Float4x4* __retval);
void GraphicsView__get_ProjectionTransformInverse_fn(GraphicsView* __this, ::g::Uno::Float4x4* __retval);
void GraphicsView__add_Redraw_fn(GraphicsView* __this, uDelegate* value);
void GraphicsView__remove_Redraw_fn(GraphicsView* __this, uDelegate* value);
void GraphicsView__get_Size_fn(GraphicsView* __this, ::g::Uno::Float2* __retval);
void GraphicsView__get_ViewOrigin_fn(GraphicsView* __this, ::g::Uno::Float3* __retval);
void GraphicsView__get_ViewProjectionTransform_fn(GraphicsView* __this, ::g::Uno::Float4x4* __retval);
void GraphicsView__get_ViewProjectionTransformInverse_fn(GraphicsView* __this, ::g::Uno::Float4x4* __retval);
void GraphicsView__get_ViewRange_fn(GraphicsView* __this, ::g::Uno::Float2* __retval);
void GraphicsView__get_ViewTransform_fn(GraphicsView* __this, ::g::Uno::Float4x4* __retval);
void GraphicsView__get_ViewTransformInverse_fn(GraphicsView* __this, ::g::Uno::Float4x4* __retval);

struct GraphicsView : ::g::Fuse::Controls::ContentControl
{
    ::g::Uno::Float4 _color;
    bool _frameScheduled;
    uStrong< ::g::Fuse::OrthographicFrustum*> _frustum;
    uStrong< ::g::Fuse::FrustumViewport*> _frustumViewport;
    uStrong<uDelegate*> Redraw1;

    void ctor_4();
    ::g::Uno::Float4 Color();
    void Color(::g::Uno::Float4 value);
    void DrawFrame();
    ::g::Uno::Float2 PixelSize();
    float PixelsPerPoint();
    ::g::Uno::Geometry::Ray PointToWorldRay(::g::Uno::Float2 pixelPos);
    ::g::Uno::Float4x4 ProjectionTransform();
    ::g::Uno::Float4x4 ProjectionTransformInverse();
    void add_Redraw(uDelegate* value);
    void remove_Redraw(uDelegate* value);
    ::g::Uno::Float2 Size();
    ::g::Uno::Float3 ViewOrigin();
    ::g::Uno::Float4x4 ViewProjectionTransform();
    ::g::Uno::Float4x4 ViewProjectionTransformInverse();
    ::g::Uno::Float2 ViewRange();
    ::g::Uno::Float4x4 ViewTransform();
    ::g::Uno::Float4x4 ViewTransformInverse();
    static GraphicsView* New2();
};
// }

}}} // ::g::Fuse::Controls
