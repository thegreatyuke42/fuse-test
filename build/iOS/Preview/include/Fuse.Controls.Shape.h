// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.14/$.uno#46'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.IVisualDraw.h>
#include <Fuse.Controls.Primitive.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IChildObject.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Float4.h>
namespace g{namespace Fuse{namespace Controls{struct Shape;}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct NodeBounds;}}
namespace g{namespace Fuse{struct StyleProperty1;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Collections{struct ObservableList;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Controls{

// public interfacemodifiers class Shape :4668
// {
struct Shape_type : ::g::Fuse::Controls::Primitive_type
{
    void(*fp_DrawFill)(::g::Fuse::Controls::Shape*, ::g::Fuse::DrawContext*, ::g::Fuse::Drawing::Brush*);
    void(*fp_DrawStroke)(::g::Fuse::Controls::Shape*, ::g::Fuse::DrawContext*, ::g::Fuse::Drawing::Stroke*);
    void(*fp_PrepareDraw)(::g::Fuse::Controls::Shape*, ::g::Fuse::DrawContext*, ::g::Uno::Float2*);
};

Shape_type* Shape_typeof();
void Shape__ctor_5_fn(Shape* __this);
void Shape__AddStyleFill_fn(Shape* __this, ::g::Fuse::Drawing::Brush* b);
void Shape__AddStyleStroke_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* s);
void Shape__CalcRenderBounds_fn(Shape* __this, ::g::Uno::Rect* __retval);
void Shape__get_Center_fn(Shape* __this, ::g::Uno::Float2* __retval);
void Shape__get_Color_fn(Shape* __this, ::g::Uno::Float4* __retval);
void Shape__set_Color_fn(Shape* __this, ::g::Uno::Float4* value);
void Shape__add_ColorChanged_fn(Shape* __this, uDelegate* value);
void Shape__remove_ColorChanged_fn(Shape* __this, uDelegate* value);
void Shape__get_ContentSize_fn(Shape* __this, ::g::Uno::Float2* __retval);
void Shape__get_CurrentDrawCost_fn(Shape* __this, float* __retval);
void Shape__DrawFill_fn(Shape* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Brush* fill);
void Shape__DrawStroke_fn(Shape* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Stroke* stroke);
void Shape__DrawVisual_fn(Shape* __this, ::g::Fuse::DrawContext* dc);
void Shape__FastTrackDrawWithOpacity_fn(Shape* __this, ::g::Fuse::DrawContext* dc, bool* __retval);
void Shape__get_Fill_fn(Shape* __this, ::g::Fuse::Drawing::Brush** __retval);
void Shape__set_Fill_fn(Shape* __this, ::g::Fuse::Drawing::Brush* value);
void Shape__get_Fills_fn(Shape* __this, uObject** __retval);
void Shape__GetFill_fn(Shape* s, ::g::Fuse::Drawing::Brush** __retval);
void Shape__GetSmoothness_fn(Shape* s, float* __retval);
void Shape__GetStroke_fn(Shape* s, ::g::Fuse::Drawing::Stroke** __retval);
void Shape__get_HasFills_fn(Shape* __this, bool* __retval);
void Shape__get_HasStrokes_fn(Shape* __this, bool* __retval);
void Shape__get_HitTestLocalVisualBounds_fn(Shape* __this, ::g::Fuse::NodeBounds** __retval);
void Shape__OnColorChanged_fn(Shape* __this, ::g::Uno::Float4* value, uObject* origin);
void Shape__OnColorChanged1_fn(Shape* c);
void Shape__OnFillAdded_fn(Shape* __this, ::g::Fuse::Drawing::Brush* f);
void Shape__OnFillRemoved_fn(Shape* __this, ::g::Fuse::Drawing::Brush* f);
void Shape__OnResetStyle_fn(Shape* __this);
void Shape__OnRooted_fn(Shape* __this);
void Shape__OnShadingChanged_fn(Shape* __this);
void Shape__OnShapeChanged_fn(Shape* __this);
void Shape__OnShapeLayoutChanged_fn(Shape* __this);
void Shape__OnSmoothnessChanged_fn(Shape* s);
void Shape__OnStrokeAdded_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* s);
void Shape__OnStrokeChanged_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* s);
void Shape__OnStrokeRemoved_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* s);
void Shape__OnUnrooted_fn(Shape* __this);
void Shape__PrepareDraw_fn(Shape* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize);
void Shape__SetColor_fn(Shape* __this, ::g::Uno::Float4* value, uObject* origin);
void Shape__SetFill_fn(Shape* s, ::g::Fuse::Drawing::Brush* value);
void Shape__SetSmoothness_fn(Shape* s, float* value);
void Shape__SetStroke_fn(Shape* s, ::g::Fuse::Drawing::Stroke* value);
void Shape__add_ShapeChanged_fn(Shape* __this, uDelegate* value);
void Shape__remove_ShapeChanged_fn(Shape* __this, uDelegate* value);
void Shape__get_Smoothness_fn(Shape* __this, float* __retval);
void Shape__set_Smoothness_fn(Shape* __this, float* value);
void Shape__get_Stroke_fn(Shape* __this, ::g::Fuse::Drawing::Stroke** __retval);
void Shape__set_Stroke_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* value);
void Shape__get_Strokes_fn(Shape* __this, uObject** __retval);

struct Shape : ::g::Fuse::Controls::Primitive
{
    uStrong< ::g::Uno::Collections::ObservableList*> _fills;
    float _smoothness;
    uStrong< ::g::Uno::Collections::ObservableList*> _strokes;
    uStrong< ::g::Uno::Collections::List*> _styleFills;
    uStrong< ::g::Uno::Collections::List*> _styleStrokes;
    static uSStrong< ::g::Fuse::StyleProperty1*> ColorProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& ColorProperty() { return Shape_typeof()->Init(), ColorProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> FillProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& FillProperty() { return Shape_typeof()->Init(), FillProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> SmoothnessProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& SmoothnessProperty() { return Shape_typeof()->Init(), SmoothnessProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> StrokeProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& StrokeProperty() { return Shape_typeof()->Init(), StrokeProperty_; }
    uStrong<uDelegate*> ColorChanged1;
    uStrong<uDelegate*> ShapeChanged1;

    void ctor_5();
    void AddStyleFill(::g::Fuse::Drawing::Brush* b);
    void AddStyleStroke(::g::Fuse::Drawing::Stroke* s);
    ::g::Uno::Float2 Center();
    ::g::Uno::Float4 Color();
    void Color(::g::Uno::Float4 value);
    void add_ColorChanged(uDelegate* value);
    void remove_ColorChanged(uDelegate* value);
    ::g::Uno::Float2 ContentSize();
    float CurrentDrawCost();
    void DrawFill(::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Brush* fill) { (((Shape_type*)__type)->fp_DrawFill)(this, dc, fill); }
    void DrawStroke(::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Stroke* stroke) { (((Shape_type*)__type)->fp_DrawStroke)(this, dc, stroke); }
    ::g::Fuse::Drawing::Brush* Fill();
    void Fill(::g::Fuse::Drawing::Brush* value);
    uObject* Fills();
    bool HasFills();
    bool HasStrokes();
    void OnColorChanged(::g::Uno::Float4 value, uObject* origin);
    void OnFillAdded(::g::Fuse::Drawing::Brush* f);
    void OnFillRemoved(::g::Fuse::Drawing::Brush* f);
    void OnShadingChanged();
    void OnShapeChanged();
    void OnShapeLayoutChanged();
    void OnStrokeAdded(::g::Fuse::Drawing::Stroke* s);
    void OnStrokeChanged(::g::Fuse::Drawing::Stroke* s);
    void OnStrokeRemoved(::g::Fuse::Drawing::Stroke* s);
    void PrepareDraw(::g::Fuse::DrawContext* dc, ::g::Uno::Float2 canvasSize);
    void SetColor(::g::Uno::Float4 value, uObject* origin);
    void add_ShapeChanged(uDelegate* value);
    void remove_ShapeChanged(uDelegate* value);
    float Smoothness();
    void Smoothness(float value);
    ::g::Fuse::Drawing::Stroke* Stroke();
    void Stroke(::g::Fuse::Drawing::Stroke* value);
    uObject* Strokes();
    static void DrawFill(Shape* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Brush* fill) { Shape__DrawFill_fn(__this, dc, fill); }
    static void DrawStroke(Shape* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Stroke* stroke) { Shape__DrawStroke_fn(__this, dc, stroke); }
    static ::g::Fuse::Drawing::Brush* GetFill(Shape* s);
    static float GetSmoothness(Shape* s);
    static ::g::Fuse::Drawing::Stroke* GetStroke(Shape* s);
    static void OnColorChanged1(Shape* c);
    static void OnSmoothnessChanged(Shape* s);
    static void PrepareDraw(Shape* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2 canvasSize);
    static void SetFill(Shape* s, ::g::Fuse::Drawing::Brush* value);
    static void SetSmoothness(Shape* s, float value);
    static void SetStroke(Shape* s, ::g::Fuse::Drawing::Stroke* value);
};

}}} // ::g::Fuse::Controls

#include <Uno.Float2.h>
#include <Uno.Rect.h>

namespace g{
namespace Fuse{
namespace Controls{

inline void Shape::PrepareDraw(::g::Fuse::DrawContext* dc, ::g::Uno::Float2 canvasSize) { (((Shape_type*)__type)->fp_PrepareDraw)(this, dc, &canvasSize); }
inline void Shape::PrepareDraw(Shape* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2 canvasSize) { Shape__PrepareDraw_fn(__this, dc, &canvasSize); }
// }

}}} // ::g::Fuse::Controls
