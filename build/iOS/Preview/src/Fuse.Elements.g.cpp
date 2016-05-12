// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseControls_bundle.h>
#include <_root.FuseElements_bundle.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.CacheFramebuffer.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Effects.Effect.h>
#include <Fuse.Effects.EffectType.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.AlignmentHelpers.h>
#include <Fuse.Elements.AspectConstraint.h>
#include <Fuse.Elements.BoxPlacement.h>
#include <Fuse.Elements.BoxSizing.ConstraintFlags.h>
#include <Fuse.Elements.BoxSizing.h>
#include <Fuse.Elements.Cache.h>
#include <Fuse.Elements.CacheHelper.h>
#include <Fuse.Elements.CacheTile.h>
#include <Fuse.Elements.CachingMode.h>
#include <Fuse.Elements.DisplayHelpers.h>
#include <Fuse.Elements.Element.BoxSizingMode.h>
#include <Fuse.Elements.Element.GMSCacheItem.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.ElementAtlas.h>
#include <Fuse.Elements.ElementAtlasFramebuffer.h>
#include <Fuse.Elements.ElementAtlasFramebufferPool.h>
#include <Fuse.Elements.ElementAtlasFramebufferPoolEntry.h>
#include <Fuse.Elements.ElementAtlasFramebufferPoolImpl.h>
#include <Fuse.Elements.ElementBatch.h>
#include <Fuse.Elements.ElementBatchEntry.h>
#include <Fuse.Elements.ElementBatcher.h>
#include <Fuse.Elements.FillAspectBoxSizing.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Elements.IElementBatchDrawable.h>
#include <Fuse.Elements.InteractiveTransform.h>
#include <Fuse.Elements.ITransformOrigin.h>
#include <Fuse.Elements.LayoutMasterBoxSizing.h>
#include <Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData.h>
#include <Fuse.Elements.LayoutMasterMode.h>
#include <Fuse.Elements.LimitBoxSizing.h>
#include <Fuse.Elements.NoImplicitMaxBoxSizing.h>
#include <Fuse.Elements.PreplacementArgs.h>
#include <Fuse.Elements.PreplacementHandler.h>
#include <Fuse.Elements.SimpleAlignment.h>
#include <Fuse.Elements.SingleNodeDrawable.h>
#include <Fuse.Elements.StandardBoxSizing.h>
#include <Fuse.Elements.StretchDirection.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.StretchSizing.h>
#include <Fuse.Elements.TextAlignment.h>
#include <Fuse.Elements.TextureAtlas.h>
#include <Fuse.Elements.TextWrapping.h>
#include <Fuse.Elements.TransformOrigins.AnchorOrigin.h>
#include <Fuse.Elements.TransformOrigins.BoxCenter.h>
#include <Fuse.Elements.TransformOrigins.CenterOrigin.h>
#include <Fuse.Elements.TransformOrigins.h>
#include <Fuse.Elements.TransformOrigins.TopLeftOrigin.h>
#include <Fuse.Elements.TranslationModes.h>
#include <Fuse.Elements.TranslationModes.OffsetMode.h>
#include <Fuse.Elements.TranslationModes.PositionOffsetMode.h>
#include <Fuse.Elements.TranslationModes.RelativeResizeChangeMode.h>
#include <Fuse.Elements.TranslationModes.SizeFactorMode.h>
#include <Fuse.Elements.TranslationModes.TransformOriginOffsetMode.h>
#include <Fuse.Elements.Viewport.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.FastMatrix.h>
#include <Fuse.FixedViewport.h>
#include <Fuse.FramebufferPool.h>
#include <Fuse.FrustumViewport.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.IFrustum.h>
#include <Fuse.InvalidateLayoutReason.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.IViewport.h>
#include <Fuse.LayoutDependent.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Node.h>
#include <Fuse.NodeBounds.h>
#include <Fuse.OrthographicFrustum.h>
#include <Fuse.PerspectiveFrustum.h>
#include <Fuse.PlacedArgs.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Resources.DisposalManager.h>
#include <Fuse.RootViewport.h>
#include <Fuse.Scaling.h>
#include <Fuse.Scripting.ExecutionThread.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptMethod.h>
#include <Fuse.Scripting.ScriptMethod-1.h>
#include <Fuse.StyleProperty-2.h>
#include <Fuse.Transform.h>
#include <Fuse.TransformModeFlags.h>
#include <Fuse.Translation.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.LinkedList-1.h>
#include <Uno.Collections.LinkedListNode-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Func-2.h>
#include <Uno.Geometry.Ray.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.DeviceBuffer.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.FramebufferFlags.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.RenderTarget.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Platform2.Display.h>
#include <Uno.Rect.h>
#include <Uno.Recti.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.UShort.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
#include <Uno.UX.Unit.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
#include <Uno.Vector.h>
static uString* STRINGS[22];
static uType* TYPES[126];

namespace g{
namespace Fuse{
namespace Elements{

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#15
// ------------------------------------------------------------

// public enum Alignment :2020
uEnumType* Alignment_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.Alignment", ::g::Uno::Int_typeof(), 16);
    type->SetLiterals(
        "Default", 0LL,
        "Left", 1LL,
        "HorizontalCenter", 2LL,
        "Right", 3LL,
        "Top", 4LL,
        "VerticalCenter", 8LL,
        "Bottom", 12LL,
        "TopLeft", 5LL,
        "TopCenter", 6LL,
        "TopRight", 7LL,
        "CenterLeft", 9LL,
        "Center", 10LL,
        "CenterRight", 11LL,
        "BottomLeft", 13LL,
        "BottomCenter", 14LL,
        "BottomRight", 15LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#15
// ------------------------------------------------------------

// public static class AlignmentHelpers :2045
// {
uClassType* AlignmentHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Elements.AlignmentHelpers", options);
    ::TYPES[0] = ::g::Uno::Int_typeof();
    ::TYPES[1] = ::g::Fuse::Elements::Alignment_typeof();
    type->Reflection.SetFunctions(3,
        new uFunction("GetAnchor", NULL, (void*)AlignmentHelpers__GetAnchor_fn, 0, true, ::g::Uno::Float2_typeof(), 1, ::g::Fuse::Elements::Alignment_typeof()),
        new uFunction("GetHorizontalAlign", NULL, (void*)AlignmentHelpers__GetHorizontalAlign_fn, 0, true, ::g::Fuse::Elements::Alignment_typeof(), 1, ::g::Fuse::Elements::Alignment_typeof()),
        new uFunction("GetVerticalAlign", NULL, (void*)AlignmentHelpers__GetVerticalAlign_fn, 0, true, ::g::Fuse::Elements::Alignment_typeof(), 1, ::g::Fuse::Elements::Alignment_typeof()));
    return type;
}

// public static float2 GetAnchor(Fuse.Elements.Alignment a) :2056
void AlignmentHelpers__GetAnchor_fn(int* a, ::g::Uno::Float2* __retval)
{
    *__retval = AlignmentHelpers::GetAnchor(*a);
}

// public static Fuse.Elements.Alignment GetHorizontalAlign(Fuse.Elements.Alignment a) :2051
void AlignmentHelpers__GetHorizontalAlign_fn(int* a, int* __retval)
{
    *__retval = AlignmentHelpers::GetHorizontalAlign(*a);
}

// internal static Fuse.Elements.SimpleAlignment GetHorizontalSimpleAlign(Fuse.Elements.Alignment a) :2079
void AlignmentHelpers__GetHorizontalSimpleAlign_fn(int* a, int* __retval)
{
    *__retval = AlignmentHelpers::GetHorizontalSimpleAlign(*a);
}

// public static Fuse.Elements.Alignment GetVerticalAlign(Fuse.Elements.Alignment a) :2047
void AlignmentHelpers__GetVerticalAlign_fn(int* a, int* __retval)
{
    *__retval = AlignmentHelpers::GetVerticalAlign(*a);
}

// internal static Fuse.Elements.SimpleAlignment GetVerticalSimpleAlign(Fuse.Elements.Alignment a) :2069
void AlignmentHelpers__GetVerticalSimpleAlign_fn(int* a, int* __retval)
{
    *__retval = AlignmentHelpers::GetVerticalSimpleAlign(*a);
}

// public static float2 GetAnchor(Fuse.Elements.Alignment a) [static] :2056
::g::Uno::Float2 AlignmentHelpers::GetAnchor(int a)
{
    uStackFrame __("Fuse.Elements.AlignmentHelpers", "GetAnchor(Fuse.Elements.Alignment)");
    int h = AlignmentHelpers::GetHorizontalAlign(a);
    float x = (h == 1) ? 0.0f : (h == 3) ? 1.0f : 0.5f;
    int v = AlignmentHelpers::GetVerticalAlign(a);
    float y = (v == 4) ? 0.0f : (v == 12) ? 1.0f : 0.5f;
    return ::g::Uno::Float2__New2(x, y);
}

// public static Fuse.Elements.Alignment GetHorizontalAlign(Fuse.Elements.Alignment a) [static] :2051
int AlignmentHelpers::GetHorizontalAlign(int a)
{
    uStackFrame __("Fuse.Elements.AlignmentHelpers", "GetHorizontalAlign(Fuse.Elements.Alignment)");
    return a & 3;
}

// internal static Fuse.Elements.SimpleAlignment GetHorizontalSimpleAlign(Fuse.Elements.Alignment a) [static] :2079
int AlignmentHelpers::GetHorizontalSimpleAlign(int a)
{
    uStackFrame __("Fuse.Elements.AlignmentHelpers", "GetHorizontalSimpleAlign(Fuse.Elements.Alignment)");
    int raw = AlignmentHelpers::GetHorizontalAlign(a);

    if (raw == 3)
        return 2;

    if (raw == 2)
        return 1;

    return 0;
}

// public static Fuse.Elements.Alignment GetVerticalAlign(Fuse.Elements.Alignment a) [static] :2047
int AlignmentHelpers::GetVerticalAlign(int a)
{
    uStackFrame __("Fuse.Elements.AlignmentHelpers", "GetVerticalAlign(Fuse.Elements.Alignment)");
    return a & 12;
}

// internal static Fuse.Elements.SimpleAlignment GetVerticalSimpleAlign(Fuse.Elements.Alignment a) [static] :2069
int AlignmentHelpers::GetVerticalSimpleAlign(int a)
{
    uStackFrame __("Fuse.Elements.AlignmentHelpers", "GetVerticalSimpleAlign(Fuse.Elements.Alignment)");
    int raw = AlignmentHelpers::GetVerticalAlign(a);

    if (raw == 12)
        return 2;

    if (raw == 8)
        return 1;

    return 0;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#13
// ------------------------------------------------------------

// private sealed class TransformOrigins.AnchorOrigin :1807
// {
TransformOrigins__AnchorOrigin_type* TransformOrigins__AnchorOrigin_typeof()
{
    static uSStrong<TransformOrigins__AnchorOrigin_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TransformOrigins__AnchorOrigin);
    options.TypeSize = sizeof(TransformOrigins__AnchorOrigin_type);
    type = (TransformOrigins__AnchorOrigin_type*)uClassType::New("Fuse.Elements.TransformOrigins.AnchorOrigin", options);
    type->fp_ctor_ = (void*)TransformOrigins__AnchorOrigin__New1_fn;
    type->interface0.fp_GetOffset = (void(*)(uObject*, ::g::Fuse::Elements::Element*, ::g::Uno::Float3*))TransformOrigins__AnchorOrigin__GetOffset_fn;
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    type->SetInterfaces(
        ::g::Fuse::Elements::ITransformOrigin_typeof(), offsetof(TransformOrigins__AnchorOrigin_type, interface0));
    return type;
}

// public generated AnchorOrigin() :1807
void TransformOrigins__AnchorOrigin__ctor__fn(TransformOrigins__AnchorOrigin* __this)
{
    __this->ctor_();
}

// public float3 GetOffset(Fuse.Elements.Element elm) :1809
void TransformOrigins__AnchorOrigin__GetOffset_fn(TransformOrigins__AnchorOrigin* __this, ::g::Fuse::Elements::Element* elm, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetOffset(elm);
}

// public generated AnchorOrigin New() :1807
void TransformOrigins__AnchorOrigin__New1_fn(TransformOrigins__AnchorOrigin** __retval)
{
    *__retval = TransformOrigins__AnchorOrigin::New1();
}

// public generated AnchorOrigin() [instance] :1807
void TransformOrigins__AnchorOrigin::ctor_()
{
}

// public float3 GetOffset(Fuse.Elements.Element elm) [instance] :1809
::g::Uno::Float3 TransformOrigins__AnchorOrigin::GetOffset(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.TransformOrigins.AnchorOrigin", "GetOffset(Fuse.Elements.Element)");
    return ::g::Uno::Float3__New4(uPtr(elm)->ActualAnchor(), 0.0f);
}

// public generated AnchorOrigin New() [static] :1807
TransformOrigins__AnchorOrigin* TransformOrigins__AnchorOrigin::New1()
{
    TransformOrigins__AnchorOrigin* obj1 = (TransformOrigins__AnchorOrigin*)uNew(TransformOrigins__AnchorOrigin_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno
// ---------------------------------------------------------

// public enum AspectConstraint :9
uEnumType* AspectConstraint_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.AspectConstraint", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "None", 0LL,
        "Preserve", 1LL,
        "Trim", 2LL,
        "PreserveTrim", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#13
// ------------------------------------------------------------

// private sealed class TransformOrigins.BoxCenter :1812
// {
TransformOrigins__BoxCenter_type* TransformOrigins__BoxCenter_typeof()
{
    static uSStrong<TransformOrigins__BoxCenter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TransformOrigins__BoxCenter);
    options.TypeSize = sizeof(TransformOrigins__BoxCenter_type);
    type = (TransformOrigins__BoxCenter_type*)uClassType::New("Fuse.Elements.TransformOrigins.BoxCenter", options);
    type->fp_ctor_ = (void*)TransformOrigins__BoxCenter__New1_fn;
    type->interface0.fp_GetOffset = (void(*)(uObject*, ::g::Fuse::Elements::Element*, ::g::Uno::Float3*))TransformOrigins__BoxCenter__GetOffset_fn;
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    type->SetInterfaces(
        ::g::Fuse::Elements::ITransformOrigin_typeof(), offsetof(TransformOrigins__BoxCenter_type, interface0));
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::TransformOrigins__BoxCenter, Depth), 0);
    return type;
}

// public generated BoxCenter() :1812
void TransformOrigins__BoxCenter__ctor__fn(TransformOrigins__BoxCenter* __this)
{
    __this->ctor_();
}

// public float3 GetOffset(Fuse.Elements.Element elm) :1816
void TransformOrigins__BoxCenter__GetOffset_fn(TransformOrigins__BoxCenter* __this, ::g::Fuse::Elements::Element* elm, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetOffset(elm);
}

// public generated BoxCenter New() :1812
void TransformOrigins__BoxCenter__New1_fn(TransformOrigins__BoxCenter** __retval)
{
    *__retval = TransformOrigins__BoxCenter::New1();
}

// public generated BoxCenter() [instance] :1812
void TransformOrigins__BoxCenter::ctor_()
{
}

// public float3 GetOffset(Fuse.Elements.Element elm) [instance] :1816
::g::Uno::Float3 TransformOrigins__BoxCenter::GetOffset(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.TransformOrigins.BoxCenter", "GetOffset(Fuse.Elements.Element)");
    float depth = ::g::Uno::Vector::Dot(Depth, uPtr(elm)->ActualSize());
    ::g::Uno::Float3 q = ::g::Uno::Float3__New4(::g::Uno::Float2__op_Division1(elm->ActualSize(), 2.0f), depth / 2.0f);
    return q;
}

// public generated BoxCenter New() [static] :1812
TransformOrigins__BoxCenter* TransformOrigins__BoxCenter::New1()
{
    TransformOrigins__BoxCenter* obj1 = (TransformOrigins__BoxCenter*)uNew(TransformOrigins__BoxCenter_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#1
// -----------------------------------------------------------

// public struct BoxPlacement :133
// {
uStructType* BoxPlacement_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ValueSize = sizeof(BoxPlacement);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Elements.BoxPlacement", options);
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::BoxPlacement, MarginBox), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::BoxPlacement, Position), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::BoxPlacement, Size), 0);
    type->Reflection.SetFields(3,
        new uField("MarginBox", 0),
        new uField("Position", 1),
        new uField("Size", 2));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#1
// -----------------------------------------------------------

// internal abstract class BoxSizing :143
// {
BoxSizing_type* BoxSizing_typeof()
{
    static uSStrong<BoxSizing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(BoxSizing);
    options.TypeSize = sizeof(BoxSizing_type);
    type = (BoxSizing_type*)uClassType::New("Fuse.Elements.BoxSizing", options);
    type->fp_IsContentRelativeSize = BoxSizing__IsContentRelativeSize_fn;
    type->fp_RequestLayout = BoxSizing__RequestLayout_fn;
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[0] = ::g::Uno::Int_typeof();
    ::TYPES[3] = ::g::Fuse::LayoutParams_typeof();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[5] = ::g::Uno::UX::Size_typeof();
    ::TYPES[6] = ::g::Fuse::Node_typeof();
    return type;
}

// protected generated BoxSizing() :143
void BoxSizing__ctor__fn(BoxSizing* __this)
{
    __this->ctor_();
}

// protected void EffectiveAnchor(Fuse.Elements.Element element, Fuse.Elements.SimpleAlignment halign, Fuse.Elements.SimpleAlignment valign, Uno.UX.Size2& anchor) :230
void BoxSizing__EffectiveAnchor_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, int* halign, int* valign, ::g::Uno::UX::Size2* anchor)
{
    __this->EffectiveAnchor(element, *halign, *valign, anchor);
}

// protected Fuse.Elements.SimpleAlignment EffectiveHorizontalAlignment(Fuse.Elements.Element element) :187
void BoxSizing__EffectiveHorizontalAlignment_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, int* __retval)
{
    *__retval = __this->EffectiveHorizontalAlignment(element);
}

// protected Fuse.Elements.SimpleAlignment EffectiveVerticalAlignment(Fuse.Elements.Element element) :204
void BoxSizing__EffectiveVerticalAlignment_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, int* __retval)
{
    *__retval = __this->EffectiveVerticalAlignment(element);
}

// protected Fuse.LayoutParams GetConstraints(Fuse.Elements.Element element, Fuse.LayoutParams lp, [Fuse.Elements.BoxSizing.ConstraintFlags flags]) :248
void BoxSizing__GetConstraints_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, int* flags, ::g::Fuse::LayoutParams* __retval)
{
    *__retval = __this->GetConstraints(element, *lp, *flags);
}

// public virtual Fuse.LayoutDependent IsContentRelativeSize(Fuse.Elements.Element element) :161
void BoxSizing__IsContentRelativeSize_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, int* __retval)
{
    uStackFrame __("Fuse.Elements.BoxSizing", "IsContentRelativeSize(Fuse.Elements.Element)");
    return *__retval = 4, void();
}

// public virtual void RequestLayout(Fuse.Elements.Element element) :159
void BoxSizing__RequestLayout_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element)
{
}

// protected float SimpleToAnchor(Fuse.Elements.SimpleAlignment align) :221
void BoxSizing__SimpleToAnchor_fn(BoxSizing* __this, int* align, float* __retval)
{
    *__retval = __this->SimpleToAnchor(*align);
}

// protected float UnitSize(Fuse.Elements.Element element, Uno.UX.Size value, float relative, bool hasRelative, bool& known) :167
void BoxSizing__UnitSize_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::UX::Size* value, float* relative, bool* hasRelative, bool* known, float* __retval)
{
    *__retval = __this->UnitSize(element, *value, *relative, *hasRelative, known);
}

// protected generated BoxSizing() [instance] :143
void BoxSizing::ctor_()
{
}

// protected void EffectiveAnchor(Fuse.Elements.Element element, Fuse.Elements.SimpleAlignment halign, Fuse.Elements.SimpleAlignment valign, Uno.UX.Size2& anchor) [instance] :230
void BoxSizing::EffectiveAnchor(::g::Fuse::Elements::Element* element, int halign, int valign, ::g::Uno::UX::Size2* anchor)
{
    uStackFrame __("Fuse.Elements.BoxSizing", "EffectiveAnchor(Fuse.Elements.Element,Fuse.Elements.SimpleAlignment,Fuse.Elements.SimpleAlignment,Uno.UX.Size2&)");
    bool ret1;

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::AnchorProperty()), element, &ret1), ret1))
    {
        *anchor = uPtr(element)->Anchor();
        return;
    }

    *anchor = ::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(SimpleToAnchor(halign), 3), ::g::Uno::UX::Size__New1(SimpleToAnchor(valign), 3));
}

// protected Fuse.Elements.SimpleAlignment EffectiveHorizontalAlignment(Fuse.Elements.Element element) [instance] :187
int BoxSizing::EffectiveHorizontalAlignment(::g::Fuse::Elements::Element* element)
{
    uStackFrame __("Fuse.Elements.BoxSizing", "EffectiveHorizontalAlignment(Fuse.Elements.Element)");
    bool ret2;
    int raw = ::g::Fuse::Elements::AlignmentHelpers::GetHorizontalAlign(uPtr(element)->Alignment());

    if (raw == 1)
        return 0;

    if (raw == 3)
        return 2;

    if (raw == 2)
        return 1;

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::XProperty()), element, &ret2), ret2))
        return 0;

    return 1;
}

// protected Fuse.Elements.SimpleAlignment EffectiveVerticalAlignment(Fuse.Elements.Element element) [instance] :204
int BoxSizing::EffectiveVerticalAlignment(::g::Fuse::Elements::Element* element)
{
    uStackFrame __("Fuse.Elements.BoxSizing", "EffectiveVerticalAlignment(Fuse.Elements.Element)");
    bool ret3;
    int raw = ::g::Fuse::Elements::AlignmentHelpers::GetVerticalAlign(uPtr(element)->Alignment());

    if (raw == 4)
        return 0;

    if (raw == 12)
        return 2;

    if (raw == 8)
        return 1;

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::YProperty()), element, &ret3), ret3))
        return 0;

    return 1;
}

// protected Fuse.LayoutParams GetConstraints(Fuse.Elements.Element element, Fuse.LayoutParams lp, [Fuse.Elements.BoxSizing.ConstraintFlags flags]) [instance] :248
::g::Fuse::LayoutParams BoxSizing::GetConstraints(::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams lp, int flags)
{
    uStackFrame __("Fuse.Elements.BoxSizing", "GetConstraints(Fuse.Elements.Element,Fuse.LayoutParams,[Fuse.Elements.BoxSizing.ConstraintFlags])");
    bool ret4;
    bool ret5;
    bool ret6;
    bool ret7;
    bool ret8;
    bool ret9;
    bool ret10;
    bool ret11;
    bool ret12;
    bool ret13;
    ::g::Fuse::LayoutParams c = ::g::Fuse::LayoutParams__CreateEmpty();
    bool known = false;

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::WidthProperty()), element, &ret4), ret4))
    {
        float x = UnitSize(element, uPtr(element)->Width(), lp.RelativeX(), lp.HasRelativeX(), &known);

        if (known)
            c.SetX(x);
    }
    else if ((lp.HasX() && (::g::Fuse::Elements::AlignmentHelpers::GetHorizontalAlign(uPtr(element)->Alignment()) == 0)) && !(::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::XProperty()), element, &ret5), ret5))
        c.SetX(lp.X());

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::HeightProperty()), element, &ret6), ret6))
    {
        float y = UnitSize(element, uPtr(element)->Height(), lp.RelativeY(), lp.HasRelativeY(), &known);

        if (known)
            c.SetY(y);
    }
    else if ((lp.HasY() && (::g::Fuse::Elements::AlignmentHelpers::GetVerticalAlign(uPtr(element)->Alignment()) == 0)) && !(::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::YProperty()), element, &ret7), ret7))
        c.SetY(lp.Y());

    known = false;
    ::g::Uno::UX::Size limit = ::g::Uno::UX::Size__op_Implicit1(0);

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::MaxWidthProperty()), element, &ret8), ret8))
    {
        limit = uPtr(element)->MaxWidth();
        known = true;
    }
    else if (((flags & 2) == 2) && !(::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::WidthProperty()), element, &ret9), ret9))
    {
        limit = ::g::Uno::UX::Size__op_Implicit(lp.X());
        known = lp.HasX();
    }

    if (known)
    {
        float mx = UnitSize(element, limit, lp.RelativeX(), lp.HasRelativeX(), &known);

        if (known)
            c.ConstrainMaxX(mx);
    }

    known = false;

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::MaxHeightProperty()), element, &ret10), ret10))
    {
        limit = uPtr(element)->MaxHeight();
        known = true;
    }
    else if (((flags & 2) == 2) && !(::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::HeightProperty()), element, &ret11), ret11))
    {
        limit = ::g::Uno::UX::Size__op_Implicit(lp.Y());
        known = lp.HasY();
    }

    if (known)
    {
        float my = UnitSize(element, limit, lp.RelativeY(), lp.HasRelativeY(), &known);

        if (known)
            c.ConstrainMaxY(my);
    }

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::MinWidthProperty()), element, &ret12), ret12))
    {
        float mn = UnitSize(element, uPtr(element)->MinWidth(), lp.RelativeX(), lp.HasRelativeX(), &known);

        if (known)
            c.ConstrainMinX(mn);
    }

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::MinHeightProperty()), element, &ret13), ret13))
    {
        float mn1 = UnitSize(element, uPtr(element)->MinHeight(), lp.RelativeY(), lp.HasRelativeY(), &known);

        if (known)
            c.ConstrainMinY(mn1);
    }

    return c;
}

// protected float SimpleToAnchor(Fuse.Elements.SimpleAlignment align) [instance] :221
float BoxSizing::SimpleToAnchor(int align)
{
    uStackFrame __("Fuse.Elements.BoxSizing", "SimpleToAnchor(Fuse.Elements.SimpleAlignment)");

    if (align == 0)
        return 0.0f;

    if (align == 2)
        return 100.0f;

    return 50.0f;
}

// protected float UnitSize(Fuse.Elements.Element element, Uno.UX.Size value, float relative, bool hasRelative, bool& known) [instance] :167
float BoxSizing::UnitSize(::g::Fuse::Elements::Element* element, ::g::Uno::UX::Size value, float relative, bool hasRelative, bool* known)
{
    uStackFrame __("Fuse.Elements.BoxSizing", "UnitSize(Fuse.Elements.Element,Uno.UX.Size,float,bool,bool&)");
    *known = true;
    int u = value.DetermineUnit();

    if (u == 1)
        return value.Value;

    if (u == 2)
        return value.Value / uPtr(element)->AbsoluteZoom();

    if (hasRelative)
        return (value.Value * relative) / 100.0f;

    *known = false;
    return 0.0f;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#8
// -----------------------------------------------------------

// public enum Element.BoxSizingMode :1406
uEnumType* Element__BoxSizingMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.Element.BoxSizingMode", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Standard", 0LL,
        "NoImplicitMax", 1LL,
        "Limit", 2LL,
        "LayoutMaster", 3LL,
        "FillAspect", 4LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/Caching/$.uno
// -----------------------------------------------------------------

// internal partial sealed class Cache :11
// {
// static Cache() :11
static void Cache__cctor__fn(uType* __type)
{
    Cache::cacheHelper_ = ::g::Fuse::Elements::CacheHelper::New1();
}

uType* Cache_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Cache);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.Cache", options);
    type->fp_cctor_ = Cache__cctor__fn;
    ::STRINGS[0] = uString::Const("invalid PinAndValidate");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Elements/0.27.14/Caching/$.uno#1");
    ::STRINGS[2] = uString::Const("PinAndValidate");
    ::TYPES[7] = ::g::Uno::Float_typeof();
    ::TYPES[8] = ::g::Uno::Recti_typeof();
    ::TYPES[6] = ::g::Fuse::Node_typeof();
    ::TYPES[9] = ::g::Uno::Rect_typeof();
    ::TYPES[10] = ::g::Uno::Int2_typeof();
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[11] = ::g::Uno::Double_typeof();
    ::TYPES[12] = ::g::Uno::Graphics::RenderTarget_typeof();
    ::TYPES[13] = ::g::Fuse::DrawContext_typeof();
    ::TYPES[14] = ::g::Fuse::RootViewport_typeof();
    ::TYPES[15] = uObject_typeof();
    ::TYPES[16] = ::g::Fuse::Elements::CacheTile_typeof()->Array();
    ::TYPES[17] = ::g::Fuse::Elements::CacheTile_typeof();
    ::TYPES[18] = ::g::Fuse::CacheFramebuffer_typeof();
    ::TYPES[19] = ::g::Fuse::OrthographicFrustum_typeof();
    ::TYPES[20] = ::g::Fuse::IFrustum_typeof();
    ::TYPES[21] = ::g::Uno::Graphics::Texture2D_typeof();
    type->SetFields(0,
        ::g::Uno::Recti_typeof(), offsetof(::g::Fuse::Elements::Cache, _cacheRect), 0,
        ::g::Fuse::Elements::CacheTile_typeof()->Array(), offsetof(::g::Fuse::Elements::Cache, _cacheTiles), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Elements::Cache, _element), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::Cache, _isValid), 0,
        ::g::Fuse::Elements::CacheHelper_typeof(), (uintptr_t)&::g::Fuse::Elements::Cache::cacheHelper_, uFieldFlagsStatic);
    return type;
}

// public Cache(Fuse.Elements.Element elm) :136
void Cache__ctor__fn(Cache* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->ctor_(elm);
}

// private void Blit(Fuse.DrawContext dc, float opacity) :289
void Cache__Blit_fn(Cache* __this, ::g::Fuse::DrawContext* dc, float* opacity)
{
    __this->Blit(dc, *opacity);
}

// public Fuse.Elements.CacheTile[] get_CacheTiles() :134
void Cache__get_CacheTiles_fn(Cache* __this, uArray** __retval)
{
    *__retval = __this->CacheTiles();
}

// internal float4x4 CalculateCompositMatrix(Fuse.DrawContext dc, Uno.Recti cachingRect) :199
void Cache__CalculateCompositMatrix_fn(Cache* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Recti* cachingRect, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->CalculateCompositMatrix(dc, *cachingRect);
}

// internal static Uno.Recti ConservativelySnapToCoveringIntegers(Uno.Rect r) :166
void Cache__ConservativelySnapToCoveringIntegers_fn(::g::Uno::Rect* r, ::g::Uno::Recti* __retval)
{
    *__retval = Cache::ConservativelySnapToCoveringIntegers(*r);
}

// internal void DrawCached(Fuse.DrawContext dc) :147
void Cache__DrawCached_fn(Cache* __this, ::g::Fuse::DrawContext* dc)
{
    __this->DrawCached(dc);
}

// internal void DrawHeuristically(Fuse.DrawContext dc) :154
void Cache__DrawHeuristically_fn(Cache* __this, ::g::Fuse::DrawContext* dc)
{
    __this->DrawHeuristically(dc);
}

// private bool GetCachePreference(Fuse.DrawContext dc) :13
void Cache__GetCachePreference_fn(Cache* __this, ::g::Fuse::DrawContext* dc, bool* __retval)
{
    *__retval = __this->GetCachePreference(dc);
}

// private bool GetCachePreferenceCore(Fuse.DrawContext dc) :75
void Cache__GetCachePreferenceCore_fn(Cache* __this, ::g::Fuse::DrawContext* dc, bool* __retval)
{
    *__retval = __this->GetCachePreferenceCore(dc);
}

// internal bool GetCachingRect(Fuse.DrawContext dc, Uno.Recti& rect) :180
void Cache__GetCachingRect_fn(Cache* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Recti* rect, bool* __retval)
{
    *__retval = __this->GetCachingRect(dc, rect);
}

// internal static bool GetCachingRect(Fuse.Elements.Element elm, Uno.Recti& rect) :185
void Cache__GetCachingRect1_fn(::g::Fuse::Elements::Element* elm, ::g::Uno::Recti* rect, bool* __retval)
{
    *__retval = Cache::GetCachingRect1(elm, rect);
}

// internal void Invalidate() :142
void Cache__Invalidate_fn(Cache* __this)
{
    __this->Invalidate();
}

// internal int get_MaxTileSize() :205
void Cache__get_MaxTileSize_fn(Cache* __this, int* __retval)
{
    *__retval = __this->MaxTileSize();
}

// public Cache New(Fuse.Elements.Element elm) :136
void Cache__New1_fn(::g::Fuse::Elements::Element* elm, Cache** __retval)
{
    *__retval = Cache::New1(elm);
}

// private void PinAndValidate(Fuse.DrawContext dc) :207
void Cache__PinAndValidate_fn(Cache* __this, ::g::Fuse::DrawContext* dc)
{
    __this->PinAndValidate(dc);
}

// private void Repaint(Fuse.DrawContext dc, Fuse.Elements.CacheTile tile) :264
void Cache__Repaint_fn(Cache* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::CacheTile* tile)
{
    __this->Repaint(dc, *tile);
}

// private void Unpin() :256
void Cache__Unpin_fn(Cache* __this)
{
    __this->Unpin();
}

uSStrong< ::g::Fuse::Elements::CacheHelper*> Cache::cacheHelper_;

// public Cache(Fuse.Elements.Element elm) [instance] :136
void Cache::ctor_(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.Cache", ".ctor(Fuse.Elements.Element)");
    _element = elm;

    if (_element == NULL)
        U_THROW(::g::Uno::Exception::New1());
}

// private void Blit(Fuse.DrawContext dc, float opacity) [instance] :289
void Cache::Blit(::g::Fuse::DrawContext* dc, float opacity)
{
    uStackFrame __("Fuse.Elements.Cache", "Blit(Fuse.DrawContext,float)");
    uPtr(Cache::cacheHelper())->Blit(dc, this, opacity);
}

// public Fuse.Elements.CacheTile[] get_CacheTiles() [instance] :134
uArray* Cache::CacheTiles()
{
    uStackFrame __("Fuse.Elements.Cache", "get_CacheTiles()");
    return _cacheTiles;
}

// internal float4x4 CalculateCompositMatrix(Fuse.DrawContext dc, Uno.Recti cachingRect) [instance] :199
::g::Uno::Float4x4 Cache::CalculateCompositMatrix(::g::Fuse::DrawContext* dc, ::g::Uno::Recti cachingRect)
{
    uStackFrame __("Fuse.Elements.Cache", "CalculateCompositMatrix(Fuse.DrawContext,Uno.Recti)");
    ::g::Uno::Float4x4 translation = ::g::Uno::Matrix::Translation((float)cachingRect.Left / uPtr(_element)->AbsoluteZoom(), (float)cachingRect.Top / uPtr(_element)->AbsoluteZoom(), 0.0f);
    return ::g::Uno::Matrix::Mul8(translation, uPtr(_element)->WorldTransform());
}

// internal void DrawCached(Fuse.DrawContext dc) [instance] :147
void Cache::DrawCached(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Cache", "DrawCached(Fuse.DrawContext)");
    PinAndValidate(dc);
    Blit(dc, uPtr(_element)->Opacity());
    Unpin();
}

// internal void DrawHeuristically(Fuse.DrawContext dc) [instance] :154
void Cache::DrawHeuristically(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Cache", "DrawHeuristically(Fuse.DrawContext)");

    if (GetCachePreference(dc))
        DrawCached(dc);
    else
        uPtr(_element)->CompositEffects(dc);
}

// private bool GetCachePreference(Fuse.DrawContext dc) [instance] :13
bool Cache::GetCachePreference(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Cache", "GetCachePreference(Fuse.DrawContext)");
    bool flat = uPtr(_element)->IsFlat() && uPtr(_element)->IsLocalFlat();

    if (!flat)
        return false;

    ::g::Uno::Recti cachingRect;

    if (!GetCachingRect(dc, &cachingRect))
        return false;

    switch (uPtr(_element)->CachingMode())
    {
        case 2:
            return false;
        case 1:
            return true;
    }

    if (((double)cachingRect.Size().X > ((double)uPtr(uPtr(dc)->RenderTarget())->Size().X * 1.2)) || ((double)cachingRect.Size().Y > ((double)uPtr(uPtr(dc)->RenderTarget())->Size().Y * 1.2)))
        return false;

    if (uIs(uPtr(_element)->Parent(), ::TYPES[14/*Fuse.RootViewport*/]))
        ;
    else if (uPtr(_element)->Parent() == NULL)
        return GetCachePreferenceCore(dc);
    else
    {
        if (uPtr(_element)->DrawCost() > 1.0)
            return GetCachePreferenceCore(dc);
        else
            ;
    }

    return false;
}

// private bool GetCachePreferenceCore(Fuse.DrawContext dc) [instance] :75
bool Cache::GetCachePreferenceCore(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Cache", "GetCachePreferenceCore(Fuse.DrawContext)");

    if (uPtr(_element)->ValidFrameCount() > 0)
    {
        if (!uPtr(dc)->IsCaching())
            return true;
        else
            ;
    }
    else
        ;

    return false;
}

// internal bool GetCachingRect(Fuse.DrawContext dc, Uno.Recti& rect) [instance] :180
bool Cache::GetCachingRect(::g::Fuse::DrawContext* dc, ::g::Uno::Recti* rect)
{
    uStackFrame __("Fuse.Elements.Cache", "GetCachingRect(Fuse.DrawContext,Uno.Recti&)");
    return Cache::GetCachingRect1(_element, rect);
}

// internal void Invalidate() [instance] :142
void Cache::Invalidate()
{
    uStackFrame __("Fuse.Elements.Cache", "Invalidate()");
    _isValid = false;
}

// internal int get_MaxTileSize() [instance] :205
int Cache::MaxTileSize()
{
    uStackFrame __("Fuse.Elements.Cache", "get_MaxTileSize()");
    return ::g::Uno::Graphics::Texture2D::MaxSize();
}

// private void PinAndValidate(Fuse.DrawContext dc) [instance] :207
void Cache::PinAndValidate(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Cache", "PinAndValidate(Fuse.DrawContext)");
    ::g::Uno::Recti cacheRect;

    if (!GetCachingRect(dc, &cacheRect))
    {
        ::g::Fuse::Diagnostics::Error(::STRINGS[0/*"invalid Pin...*/], _element, ::STRINGS[1/*"/usr/local/...*/], 212, ::STRINGS[2/*"PinAndValid...*/]);
        return;
    }

    if (!::g::Uno::Recti__Equals2(cacheRect, _cacheRect))
    {
        int numTilesX = ((cacheRect.Size().X + MaxTileSize()) - 1) / MaxTileSize();
        int numTilesY = ((cacheRect.Size().Y + MaxTileSize()) - 1) / MaxTileSize();
        int numTiles = numTilesX * numTilesY;

        if ((_cacheTiles == NULL) || (numTiles != uPtr(_cacheTiles)->Length()))
            _cacheTiles = uArray::New(::TYPES[16/*Fuse.Elements.CacheTile[]*/], numTiles);

        for (int y = 0; y < numTilesY; ++y)

            for (int x = 0; x < numTilesX; ++x)
            {
                int tile = x + (y * numTilesX);
                ::g::Uno::Int2 Position = ::g::Uno::Int2__New2(x * MaxTileSize(), y * MaxTileSize());
                uPtr(_cacheTiles)->Item< ::g::Fuse::Elements::CacheTile>(tile)._rect = ::g::Uno::Recti__New1(cacheRect.Left + Position.X, cacheRect.Top + Position.Y, (cacheRect.Left + Position.X) + ::g::Uno::Math::Min8(cacheRect.Size().X - Position.X, MaxTileSize()), (cacheRect.Top + Position.Y) + ::g::Uno::Math::Min8(cacheRect.Size().Y - Position.Y, MaxTileSize()));
            }
    }

    for (int i = 0; i < uPtr(_cacheTiles)->Length(); ++i)
    {
        uPtr(_cacheTiles)->Item< ::g::Fuse::Elements::CacheTile>(i).EnsureHasFramebuffer(_element);
        uPtr(_cacheTiles)->Item< ::g::Fuse::Elements::CacheTile>(i)._compositMatrix = CalculateCompositMatrix(dc, uPtr(_cacheTiles)->Item< ::g::Fuse::Elements::CacheTile>(i)._rect);
        uPtr(uPtr(_cacheTiles)->Item< ::g::Fuse::Elements::CacheTile>(i)._framebuffer)->Pin();

        if (!uPtr(uPtr(_cacheTiles)->Item< ::g::Fuse::Elements::CacheTile>(i)._framebuffer)->IsContentValid() || !_isValid)
            Repaint(dc, uPtr(_cacheTiles)->Item< ::g::Fuse::Elements::CacheTile>(i));
    }

    _isValid = true;
}

// private void Repaint(Fuse.DrawContext dc, Fuse.Elements.CacheTile tile) [instance] :264
void Cache::Repaint(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::CacheTile tile)
{
    uStackFrame __("Fuse.Elements.Cache", "Repaint(Fuse.DrawContext,Fuse.Elements.CacheTile)");
    ::g::Fuse::OrthographicFrustum* collection4;
    collection4 = ::g::Fuse::OrthographicFrustum::New1();
    ::g::Uno::Float2 ind5 = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)tile._rect.Minimum().X, (float)tile._rect.Minimum().Y), uPtr(_element)->AbsoluteZoom());
    uPtr(collection4)->Origin(ind5);
    ;
    ::g::Uno::Float2 ind6 = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)tile._rect.Size().X, (float)tile._rect.Size().Y), uPtr(_element)->AbsoluteZoom());
    uPtr(collection4)->Size(ind6);
    ;
    ::g::Uno::Float4x4 ind7 = uPtr(_element)->WorldTransformInverse();
    uPtr(collection4)->LocalFromWorld(ind7);
    ;
    ::g::Fuse::OrthographicFrustum* cc = collection4;
    bool oldIsCaching = uPtr(dc)->IsCaching();
    dc->IsCaching(true);
    dc->PushRenderTargetViewport(uPtr(tile._framebuffer)->Framebuffer(), (uObject*)cc);
    dc->Clear(::g::Uno::Float4__New1(0.0f), 1.0f);
    uPtr(_element)->CompositEffects(dc);
    dc->PopRenderTargetViewport();
    dc->IsCaching(oldIsCaching);
}

// private void Unpin() [instance] :256
void Cache::Unpin()
{
    uStackFrame __("Fuse.Elements.Cache", "Unpin()");
    uArray* array1;
    int index2;
    int length3;

    for (array1 = _cacheTiles, index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        ::g::Fuse::Elements::CacheTile tile = uPtr(array1)->Item< ::g::Fuse::Elements::CacheTile>(index2);
        uPtr(tile._framebuffer)->Unpin(true);
    }
}

// internal static Uno.Recti ConservativelySnapToCoveringIntegers(Uno.Rect r) [static] :166
::g::Uno::Recti Cache::ConservativelySnapToCoveringIntegers(::g::Uno::Rect r)
{
    uStackFrame __("Fuse.Elements.Cache", "ConservativelySnapToCoveringIntegers(Uno.Rect)");
    Cache_typeof()->Init();
    ::g::Uno::Int2 origin = ::g::Uno::Int2__op_Explicit(::g::Uno::Math::Floor2(r.LeftTop()));
    ::g::Uno::Int2 size = ::g::Uno::Int2__op_Explicit(::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Addition1(::g::Uno::Float2__op_Subtraction2(r.RightBottom(), r.LeftTop()), 0.01f)));
    return ::g::Uno::Recti__New1(origin.X, origin.Y, (origin.X + size.X) + 1, (origin.Y + size.Y) + 1);
}

// internal static bool GetCachingRect(Fuse.Elements.Element elm, Uno.Recti& rect) [static] :185
bool Cache::GetCachingRect1(::g::Fuse::Elements::Element* elm, ::g::Uno::Recti* rect)
{
    uStackFrame __("Fuse.Elements.Cache", "GetCachingRect(Fuse.Elements.Element,Uno.Recti&)");
    Cache_typeof()->Init();
    ::g::Uno::Rect bounds = uPtr(elm)->RenderBoundsWithEffects();

    if (bounds.IsInfinite())
    {
        *rect = ::g::Uno::Recti__New1(0, 0, 0, 0);
        return false;
    }

    *rect = ::g::Uno::Recti__Inflate(Cache::ConservativelySnapToCoveringIntegers(::g::Uno::Rect__Scale(bounds, elm->AbsoluteZoom())), 1);
    return true;
}

// public Cache New(Fuse.Elements.Element elm) [static] :136
Cache* Cache::New1(::g::Fuse::Elements::Element* elm)
{
    Cache* obj8 = (Cache*)uNew(Cache_typeof());
    obj8->ctor_(elm);
    return obj8;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/Caching/$.uno#1
// -------------------------------------------------------------------

// internal sealed class CacheHelper :295
// {
uType* CacheHelper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(CacheHelper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.CacheHelper", options);
    type->fp_ctor_ = (void*)CacheHelper__New1_fn;
    ::TYPES[22] = ::g::Fuse::Elements::Cache_typeof();
    ::TYPES[16] = ::g::Fuse::Elements::CacheTile_typeof()->Array();
    ::TYPES[23] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[13] = ::g::Fuse::DrawContext_typeof();
    ::TYPES[7] = ::g::Uno::Float_typeof();
    ::TYPES[10] = ::g::Uno::Int2_typeof();
    ::TYPES[21] = ::g::Uno::Graphics::Texture2D_typeof();
    ::TYPES[17] = ::g::Fuse::Elements::CacheTile_typeof();
    ::TYPES[24] = ::g::Fuse::IViewport_typeof();
    ::TYPES[25] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[26] = ::g::FuseElements_bundle_typeof();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Elements::CacheHelper, _draw_934926a0), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Elements::CacheHelper, Blit_Coord_934926a0_1_1_1), 0,
        ::g::Uno::Float2_typeof()->Array(), offsetof(::g::Fuse::Elements::CacheHelper, Blit_Vertices_934926a0_1_0_7), 0);
    return type;
}

// public generated CacheHelper() :295
void CacheHelper__ctor__fn(CacheHelper* __this)
{
    __this->ctor_();
}

// public void Blit(Fuse.DrawContext dc, Fuse.Elements.Cache cache, float opacity) :297
void CacheHelper__Blit_fn(CacheHelper* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Cache* cache, float* opacity)
{
    __this->Blit(dc, cache, *opacity);
}

// private generated void init_DrawCalls() :295
void CacheHelper__init_DrawCalls_fn(CacheHelper* __this)
{
    __this->init_DrawCalls();
}

// public generated CacheHelper New() :295
void CacheHelper__New1_fn(CacheHelper** __retval)
{
    *__retval = CacheHelper::New1();
}

// public generated CacheHelper() [instance] :295
void CacheHelper::ctor_()
{
    uStackFrame __("Fuse.Elements.CacheHelper", ".ctor()");
    init_DrawCalls();
}

// public void Blit(Fuse.DrawContext dc, Fuse.Elements.Cache cache, float opacity) [instance] :297
void CacheHelper::Blit(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Cache* cache, float opacity)
{
    uStackFrame __("Fuse.Elements.CacheHelper", "Blit(Fuse.DrawContext,Fuse.Elements.Cache,float)");
    uArray* array1;
    int index2;
    int length3;

    for (array1 = uPtr(cache)->CacheTiles(), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        ::g::Fuse::Elements::CacheTile tile = uPtr(array1)->Item< ::g::Fuse::Elements::CacheTile>(index2);
        _draw_934926a0.BlendEnabled(true);
        _draw_934926a0.DepthTestEnabled(false);
        _draw_934926a0.CullFace(uPtr(dc)->CullFace());
        _draw_934926a0.BlendDstRgb(3);
        _draw_934926a0.BlendDstAlpha(3);
        _draw_934926a0.Use();
        _draw_934926a0.Attrib1(0, 2, Blit_Coord_934926a0_1_1_1, 8, 0);
        _draw_934926a0.Uniform2(1, ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)uPtr(tile.Texture())->Size().X, (float)uPtr(tile.Texture())->Size().Y), dc->ViewportPixelsPerPoint()));
        _draw_934926a0.Uniform12(2, tile._compositMatrix);
        _draw_934926a0.Uniform12(3, ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[24/*Fuse.IViewport*/])));
        _draw_934926a0.Uniform(4, opacity);
        _draw_934926a0.Sampler2(5, tile.Texture());
        _draw_934926a0.DrawArrays(uPtr(Blit_Vertices_934926a0_1_0_7)->Length());
    }
}

// private generated void init_DrawCalls() [instance] :295
void CacheHelper::init_DrawCalls()
{
    uStackFrame __("Fuse.Elements.CacheHelper", "init_DrawCalls()");
    uArray* Vertices_934926a0_1_0_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[25/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f));
    Blit_Coord_934926a0_1_1_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_934926a0_1_0_0), 0);
    Blit_Vertices_934926a0_1_0_7 = Vertices_934926a0_1_0_0;
    _draw_934926a0 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseElements_bundle::CacheHelper09c90965());
}

// public generated CacheHelper New() [static] :295
CacheHelper* CacheHelper::New1()
{
    CacheHelper* obj4 = (CacheHelper*)uNew(CacheHelper_typeof());
    obj4->ctor_();
    return obj4;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/Caching/$.uno#1
// -------------------------------------------------------------------

// internal struct CacheTile :105
// {
uStructType* CacheTile_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ValueSize = sizeof(CacheTile);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Elements.CacheTile", options);
    ::TYPES[18] = ::g::Fuse::CacheFramebuffer_typeof();
    ::TYPES[10] = ::g::Uno::Int2_typeof();
    ::TYPES[8] = ::g::Uno::Recti_typeof();
    ::TYPES[27] = ::g::Uno::Graphics::Framebuffer_typeof();
    type->SetFields(0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Elements::CacheTile, _compositMatrix), 0,
        ::g::Fuse::CacheFramebuffer_typeof(), offsetof(::g::Fuse::Elements::CacheTile, _framebuffer), 0,
        ::g::Uno::Recti_typeof(), offsetof(::g::Fuse::Elements::CacheTile, _rect), 0);
    return type;
}

// public void EnsureHasFramebuffer(object owner) :113
void CacheTile__EnsureHasFramebuffer_fn(CacheTile* __this, uObject* owner)
{
    __this->EnsureHasFramebuffer(owner);
}

// public texture2D get_Texture() :111
void CacheTile__get_Texture_fn(CacheTile* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = __this->Texture();
}

// public void EnsureHasFramebuffer(object owner) [instance] :113
void CacheTile::EnsureHasFramebuffer(uObject* owner)
{
    uStackFrame __("Fuse.Elements.CacheTile", "EnsureHasFramebuffer(object)");

    if (((_framebuffer == NULL) || (uPtr(_framebuffer)->Width() != _rect.Size().X)) || (uPtr(_framebuffer)->Height() != _rect.Size().Y))
    {
        if (_framebuffer != NULL)
            uPtr(_framebuffer)->Dispose();

        _framebuffer = ::g::Fuse::CacheFramebuffer::New1(owner, _rect.Size().X, _rect.Size().Y, 3, 0);
    }
}

// public texture2D get_Texture() [instance] :111
::g::Uno::Graphics::Texture2D* CacheTile::Texture()
{
    uStackFrame __("Fuse.Elements.CacheTile", "get_Texture()");
    return uPtr(uPtr(_framebuffer)->Framebuffer())->ColorBuffer();
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#15
// ------------------------------------------------------------

// public enum CachingMode :2097
uEnumType* CachingMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.CachingMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Optimized", 0LL,
        "Always", 1LL,
        "Never", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#13
// ------------------------------------------------------------

// private sealed class TransformOrigins.CenterOrigin :1802
// {
TransformOrigins__CenterOrigin_type* TransformOrigins__CenterOrigin_typeof()
{
    static uSStrong<TransformOrigins__CenterOrigin_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TransformOrigins__CenterOrigin);
    options.TypeSize = sizeof(TransformOrigins__CenterOrigin_type);
    type = (TransformOrigins__CenterOrigin_type*)uClassType::New("Fuse.Elements.TransformOrigins.CenterOrigin", options);
    type->fp_ctor_ = (void*)TransformOrigins__CenterOrigin__New1_fn;
    type->interface0.fp_GetOffset = (void(*)(uObject*, ::g::Fuse::Elements::Element*, ::g::Uno::Float3*))TransformOrigins__CenterOrigin__GetOffset_fn;
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    type->SetInterfaces(
        ::g::Fuse::Elements::ITransformOrigin_typeof(), offsetof(TransformOrigins__CenterOrigin_type, interface0));
    return type;
}

// public generated CenterOrigin() :1802
void TransformOrigins__CenterOrigin__ctor__fn(TransformOrigins__CenterOrigin* __this)
{
    __this->ctor_();
}

// public float3 GetOffset(Fuse.Elements.Element elm) :1804
void TransformOrigins__CenterOrigin__GetOffset_fn(TransformOrigins__CenterOrigin* __this, ::g::Fuse::Elements::Element* elm, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetOffset(elm);
}

// public generated CenterOrigin New() :1802
void TransformOrigins__CenterOrigin__New1_fn(TransformOrigins__CenterOrigin** __retval)
{
    *__retval = TransformOrigins__CenterOrigin::New1();
}

// public generated CenterOrigin() [instance] :1802
void TransformOrigins__CenterOrigin::ctor_()
{
}

// public float3 GetOffset(Fuse.Elements.Element elm) [instance] :1804
::g::Uno::Float3 TransformOrigins__CenterOrigin::GetOffset(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.TransformOrigins.CenterOrigin", "GetOffset(Fuse.Elements.Element)");
    return ::g::Uno::Float3__New4(::g::Uno::Float2__op_Division1(uPtr(elm)->ActualSize(), 2.0f), 0.0f);
}

// public generated CenterOrigin New() [static] :1802
TransformOrigins__CenterOrigin* TransformOrigins__CenterOrigin::New1()
{
    TransformOrigins__CenterOrigin* obj1 = (TransformOrigins__CenterOrigin*)uNew(TransformOrigins__CenterOrigin_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#1
// -----------------------------------------------------------

// protected enum BoxSizing.ConstraintFlags :243
uEnumType* BoxSizing__ConstraintFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.BoxSizing.ConstraintFlags", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "None", 0LL,
        "ImplicitMax", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/Caching/$.uno#2
// -------------------------------------------------------------------

// internal static class DisplayHelpers :425
// {
uClassType* DisplayHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Elements.DisplayHelpers", options);
    ::TYPES[28] = ::g::Uno::Platform2::Display_typeof();
    ::TYPES[9] = ::g::Uno::Rect_typeof();
    return type;
}

// public static int2 get_DisplaySizeHint() :429
void DisplayHelpers__get_DisplaySizeHint_fn(::g::Uno::Int2* __retval)
{
    *__retval = DisplayHelpers::DisplaySizeHint();
}

// public static int2 get_DisplaySizeHint() [static] :429
::g::Uno::Int2 DisplayHelpers::DisplaySizeHint()
{
    uStackFrame __("Fuse.Elements.DisplayHelpers", "get_DisplaySizeHint()");
    ::g::Uno::Platform2::Display* display = ::g::Uno::Platform2::Display::MainDisplay();
    return ::g::Uno::Int2__op_Explicit(uPtr(display)->Frame().Size());
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno
// ---------------------------------------------------------

// public interfacemodifiers class Element :100
// {
// static Element() :100
static void Element__cctor_1_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret12;
    ::g::Fuse::StyleProperty1* ret13;
    ::g::Fuse::StyleProperty1* ret14;
    ::g::Fuse::StyleProperty1* ret15;
    ::g::Fuse::StyleProperty1* ret16;
    ::g::Fuse::StyleProperty1* ret17;
    ::g::Fuse::StyleProperty1* ret18;
    ::g::Fuse::StyleProperty1* ret19;
    ::g::Fuse::StyleProperty1* ret20;
    ::g::Fuse::StyleProperty1* ret21;
    ::g::Fuse::StyleProperty1* ret22;
    ::g::Fuse::StyleProperty1* ret23;
    ::g::Fuse::StyleProperty1* ret24;
    ::g::Fuse::StyleProperty1* ret25;
    ::g::Fuse::StyleProperty1* ret26;
    ::g::Fuse::StyleProperty1* ret27;
    ::g::Fuse::StyleProperty1* ret28;
    ::g::Fuse::StyleProperty1* ret29;
    ::g::Fuse::StyleProperty1* ret30;
    ::g::Fuse::StyleProperty1* ret31;
    ::g::Fuse::StyleProperty1* ret32;
    ::g::Fuse::StyleProperty1* ret33;
    ::g::Fuse::StyleProperty1* ret34;
    Element::AspectProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[29/*Fuse.StyleProperty<Fuse.Elements.Element, float>*/], uCRef(1.0f), uDelegate::New(::TYPES[30/*Uno.Action<Fuse.Elements.Element>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), &ret12), ret12);
    Element::AspectConstraintProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[31/*Fuse.StyleProperty<Fuse.Elements.Element, Fuse.Elements.AspectConstraint>*/], uCRef<int>(3), uDelegate::New(::TYPES[30/*Uno.Action<Fuse.Elements.Element>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), &ret13), ret13);
    Element::CachingModeProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[32/*Fuse.StyleProperty<Fuse.Elements.Element, Fuse.Elements.CachingMode>*/], uCRef<int>(0), uDelegate::New(::TYPES[30/*Uno.Action<Fuse.Elements.Element>*/], (void*)Element__OnCachingModeChanged_fn), uDelegate::New(::TYPES[33/*Uno.Action<Fuse.Elements.Element, Fuse.Elements.CachingMode>*/], (void*)Element__SetCachingMode_fn), uDelegate::New(::TYPES[34/*Uno.Func<Fuse.Elements.Element, Fuse.Elements.CachingMode>*/], (void*)Element__GetCachingMode_fn), &ret14), ret14);
    Element::HitTestModeProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[35/*Fuse.StyleProperty<Fuse.Elements.Element, Fuse.Elements.HitTestMode>*/], uCRef<int>(5), NULL, &ret15), ret15);
    Element::WidthProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[36/*Fuse.StyleProperty<Fuse.Elements.Element, Uno.UX.Size>*/], uCRef(::g::Uno::UX::Size__Unspecified()), uDelegate::New(::TYPES[30/*Uno.Action<Fuse.Elements.Element>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), uDelegate::New(::TYPES[37/*Uno.Action<Fuse.Elements.Element, Uno.UX.Size>*/], (void*)Element__SetWidth_fn), uDelegate::New(::TYPES[38/*Uno.Func<Fuse.Elements.Element, Uno.UX.Size>*/], (void*)Element__GetWidth_fn), &ret16), ret16);
    Element::HeightProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[36/*Fuse.StyleProperty<Fuse.Elements.Element, Uno.UX.Size>*/], uCRef(::g::Uno::UX::Size__Unspecified()), uDelegate::New(::TYPES[30/*Uno.Action<Fuse.Elements.Element>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), uDelegate::New(::TYPES[37/*Uno.Action<Fuse.Elements.Element, Uno.UX.Size>*/], (void*)Element__SetHeight_fn), uDelegate::New(::TYPES[38/*Uno.Func<Fuse.Elements.Element, Uno.UX.Size>*/], (void*)Element__GetHeight_fn), &ret17), ret17);
    Element::MinWidthProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[36/*Fuse.StyleProperty<Fuse.Elements.Element, Uno.UX.Size>*/], uCRef(::g::Uno::UX::Size__Unspecified()), uDelegate::New(::TYPES[30/*Uno.Action<Fuse.Elements.Element>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), &ret18), ret18);
    Element::MinHeightProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[36/*Fuse.StyleProperty<Fuse.Elements.Element, Uno.UX.Size>*/], uCRef(::g::Uno::UX::Size__Unspecified()), uDelegate::New(::TYPES[30/*Uno.Action<Fuse.Elements.Element>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), &ret19), ret19);
    Element::MaxWidthProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[36/*Fuse.StyleProperty<Fuse.Elements.Element, Uno.UX.Size>*/], uCRef(::g::Uno::UX::Size__Unspecified()), uDelegate::New(::TYPES[30/*Uno.Action<Fuse.Elements.Element>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), &ret20), ret20);
    Element::MaxHeightProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[36/*Fuse.StyleProperty<Fuse.Elements.Element, Uno.UX.Size>*/], uCRef(::g::Uno::UX::Size__Unspecified()), uDelegate::New(::TYPES[30/*Uno.Action<Fuse.Elements.Element>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), &ret21), ret21);
    Element::AlignmentProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[39/*Fuse.StyleProperty<Fuse.Elements.Element, Fuse.Elements.Alignment>*/], uCRef<int>(0), uDelegate::New(::TYPES[30/*Uno.Action<Fuse.Elements.Element>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), &ret22), ret22);
    Element::VisibilityProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[40/*Fuse.StyleProperty<Fuse.Elements.Element, Fuse.Elements.Visibility>*/], uCRef<int>(0), uDelegate::New(::TYPES[30/*Uno.Action<Fuse.Elements.Element>*/], (void*)Element__OnVisibilityChanged_fn), uDelegate::New(::TYPES[41/*Uno.Action<Fuse.Elements.Element, Fuse.Elements.Visibility>*/], (void*)Element__SetVisibility_fn), uDelegate::New(::TYPES[42/*Uno.Func<Fuse.Elements.Element, Fuse.Elements.Visibility>*/], (void*)Element__GetVisibility_fn), &ret23), ret23);
    Element::MarginProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[43/*Fuse.StyleProperty<Fuse.Elements.Element, float4>*/], uCRef(::g::Uno::Float4__New1(0.0f)), uDelegate::New(::TYPES[30/*Uno.Action<Fuse.Elements.Element>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), &ret24), ret24);
    Element::PaddingProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[43/*Fuse.StyleProperty<Fuse.Elements.Element, float4>*/], uCRef(::g::Uno::Float4__New1(0.0f)), uDelegate::New(::TYPES[30/*Uno.Action<Fuse.Elements.Element>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), &ret25), ret25);
    Element::OffsetProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[44/*Fuse.StyleProperty<Fuse.Elements.Element, Uno.UX.Size2>*/], uCRef(::g::Uno::UX::Size2__Unspecified()), uDelegate::New(::TYPES[30/*Uno.Action<Fuse.Elements.Element>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), &ret26), ret26);
    Element::XProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[36/*Fuse.StyleProperty<Fuse.Elements.Element, Uno.UX.Size>*/], uCRef(::g::Uno::UX::Size__Unspecified()), uDelegate::New(::TYPES[30/*Uno.Action<Fuse.Elements.Element>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), &ret27), ret27);
    Element::YProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[36/*Fuse.StyleProperty<Fuse.Elements.Element, Uno.UX.Size>*/], uCRef(::g::Uno::UX::Size__Unspecified()), uDelegate::New(::TYPES[30/*Uno.Action<Fuse.Elements.Element>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), &ret28), ret28);
    Element::AnchorProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[44/*Fuse.StyleProperty<Fuse.Elements.Element, Uno.UX.Size2>*/], uCRef(::g::Uno::UX::Size2__Unspecified()), uDelegate::New(::TYPES[30/*Uno.Action<Fuse.Elements.Element>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), &ret29), ret29);
    Element::ClipToBoundsProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[46/*Fuse.StyleProperty<Fuse.Elements.Element, bool>*/], uCRef(false), uDelegate::New(::TYPES[30/*Uno.Action<Fuse.Elements.Element>*/], (void*)Element__OnClipToBoundsChanged_fn), uDelegate::New(::TYPES[47/*Uno.Action<Fuse.Elements.Element, bool>*/], (void*)Element__SetClipToBounds_fn), uDelegate::New(::TYPES[48/*Uno.Func<Fuse.Elements.Element, bool>*/], (void*)Element__GetClipToBounds_fn), &ret30), ret30);
    Element::ScriptClass1_ = ::g::Fuse::Scripting::ScriptClass::New1(::g::Fuse::Node::ScriptClass(), uArray::Init< ::g::Fuse::Scripting::ScriptMethod*>(::TYPES[49/*Fuse.Scripting.ScriptMethod[]*/], 3, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[51/*Fuse.Scripting.ScriptMethod<Fuse.Elements.Element>*/], ::STRINGS[3/*"show"*/], uDelegate::New(::TYPES[52/*Uno.Action<Fuse.Elements.Element, object[]>*/], (void*)Element__show_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[51/*Fuse.Scripting.ScriptMethod<Fuse.Elements.Element>*/], ::STRINGS[4/*"collapse"*/], uDelegate::New(::TYPES[52/*Uno.Action<Fuse.Elements.Element, object[]>*/], (void*)Element__collapse_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[51/*Fuse.Scripting.ScriptMethod<Fuse.Elements.Element>*/], ::STRINGS[5/*"hide"*/], uDelegate::New(::TYPES[52/*Uno.Action<Fuse.Elements.Element, object[]>*/], (void*)Element__hide_fn), 2)));
    Element::OpacityProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[29/*Fuse.StyleProperty<Fuse.Elements.Element, float>*/], uCRef(1.0f), uDelegate::New(::TYPES[30/*Uno.Action<Fuse.Elements.Element>*/], (void*)Element__OnOpacityChanged_fn), &ret31), ret31);
    Element::TransformOriginProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[53/*Fuse.StyleProperty<Fuse.Elements.Element, Fuse.Elements.ITransformOrigin>*/], ::g::Fuse::Elements::TransformOrigins::Center(), uDelegate::New(::TYPES[30/*Uno.Action<Fuse.Elements.Element>*/], (void*)Element__InvalidateLocalTransform1_fn), uDelegate::New(::TYPES[55/*Uno.Action<Fuse.Elements.Element, Fuse.Elements.ITransformOrigin>*/], (void*)Element__SetTransformOrigin_fn), uDelegate::New(::TYPES[56/*Uno.Func<Fuse.Elements.Element, Fuse.Elements.ITransformOrigin>*/], (void*)Element__GetTransformOrigin_fn), &ret32), ret32);
    Element::LimitHeightProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[36/*Fuse.StyleProperty<Fuse.Elements.Element, Uno.UX.Size>*/], uCRef(::g::Uno::UX::Size__Unspecified()), uDelegate::New(::TYPES[30/*Uno.Action<Fuse.Elements.Element>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), &ret33), ret33);
    Element::LimitWidthProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[36/*Fuse.StyleProperty<Fuse.Elements.Element, Uno.UX.Size>*/], uCRef(::g::Uno::UX::Size__Unspecified()), uDelegate::New(::TYPES[30/*Uno.Action<Fuse.Elements.Element>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), &ret34), ret34);
}

Element_type* Element_typeof()
{
    static uSStrong<Element_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 112;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(Element);
    options.TypeSize = sizeof(Element_type);
    type = (Element_type*)uClassType::New("Fuse.Elements.Element", options);
    type->SetBase(::g::Fuse::Node_typeof());
    type->fp_cctor_ = Element__cctor_1_fn;
    type->fp_get_AbsoluteViewportOrigin = (void(*)(::g::Fuse::Node*, ::g::Uno::Float2*))Element__get_AbsoluteViewportOrigin_fn;
    type->fp_ArrangePaddingBox = Element__ArrangePaddingBox_fn;
    type->fp_CalcRenderBounds = Element__CalcRenderBounds_fn;
    type->fp_get_CanAdjustMarginBox = (void(*)(::g::Fuse::Node*, bool*))Element__get_CanAdjustMarginBox_fn;
    type->fp_Draw = (void(*)(::g::Fuse::Node*, ::g::Fuse::DrawContext*))Element__Draw_fn;
    type->fp_DrawSelection = (void(*)(::g::Fuse::Node*, ::g::Fuse::DrawContext*))Element__DrawSelection_fn;
    type->fp_FastTrackDrawWithOpacity = Element__FastTrackDrawWithOpacity_fn;
    type->fp_GetContentSize = Element__GetContentSize_fn;
    type->fp_GetMarginSize = (void(*)(::g::Fuse::Node*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))Element__GetMarginSize_fn;
    type->fp_get_HitTestChildrenBounds = (void(*)(::g::Fuse::Node*, ::g::Fuse::NodeBounds**))Element__get_HitTestChildrenBounds_fn;
    type->fp_get_HitTestLocalBounds = (void(*)(::g::Fuse::Node*, ::g::Fuse::NodeBounds**))Element__get_HitTestLocalBounds_fn;
    type->fp_get_HitTestLocalVisualBounds = Element__get_HitTestLocalVisualBounds_fn;
    type->fp_InvalidateLocalTransform = (void(*)(::g::Fuse::Node*))Element__InvalidateLocalTransform_fn;
    type->fp_get_IsLocalVisible = (void(*)(::g::Fuse::Node*, bool*))Element__get_IsLocalVisible_fn;
    type->fp_IsMarginBoxDependent = (void(*)(::g::Fuse::Node*, ::g::Fuse::Node*, int*))Element__IsMarginBoxDependent_fn;
    type->fp_get_LocalBounds = (void(*)(::g::Fuse::Node*, ::g::Uno::Geometry::Box*))Element__get_LocalBounds_fn;
    type->fp_get_LocalRenderBounds = (void(*)(::g::Fuse::Node*, ::g::Uno::Rect*))Element__get_LocalRenderBounds_fn;
    type->fp_OnAdjustMarginBoxPosition = (void(*)(::g::Fuse::Node*, ::g::Uno::Float2*))Element__OnAdjustMarginBoxPosition_fn;
    type->fp_OnArrangeMarginBox = (void(*)(::g::Fuse::Node*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))Element__OnArrangeMarginBox_fn;
    type->fp_OnHitTest = (void(*)(::g::Fuse::Node*, ::g::Fuse::HitTestContext*))Element__OnHitTest_fn;
    type->fp_OnHitTestChildren = Element__OnHitTestChildren_fn;
    type->fp_OnHitTestLocalVisual = Element__OnHitTestLocalVisual_fn;
    type->fp_OnInvalidateLayout = (void(*)(::g::Fuse::Node*))Element__OnInvalidateLayout_fn;
    type->fp_OnInvalidateRenderBounds = (void(*)(::g::Fuse::Node*, bool*))Element__OnInvalidateRenderBounds_fn;
    type->fp_OnInvalidateVisual = (void(*)(::g::Fuse::Node*))Element__OnInvalidateVisual_fn;
    type->fp_OnResetStyle = (void(*)(::g::Fuse::Node*))Element__OnResetStyle_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Element__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Element__OnUnrooted_fn;
    type->fp_PrependImplicitTransform = (void(*)(::g::Fuse::Node*, ::g::Fuse::FastMatrix*))Element__PrependImplicitTransform_fn;
    type->fp_PrependInverseTransformOrigin = (void(*)(::g::Fuse::Node*, ::g::Fuse::FastMatrix*))Element__PrependInverseTransformOrigin_fn;
    type->fp_PrependTransformOrigin = (void(*)(::g::Fuse::Node*, ::g::Fuse::FastMatrix*))Element__PrependTransformOrigin_fn;
    type->interface2.fp_Show = (void(*)(uObject*))Element__FuseTriggersActionsIShowShow_fn;
    type->interface4.fp_Collapse = (void(*)(uObject*))Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface3.fp_Hide = (void(*)(uObject*))Element__FuseTriggersActionsIHideHide_fn;
    type->interface6.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))Element__FuseAnimationsIResizeSetSize_fn;
    type->interface5.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface5.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface5.fp_add_Placed = (void(*)(uObject*, uDelegate*))Element__add_Placed_fn;
    type->interface5.fp_remove_Placed = (void(*)(uObject*, uDelegate*))Element__remove_Placed_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseIChildObjectget_ParentObject_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::STRINGS[3] = uString::Const("show");
    ::STRINGS[4] = uString::Const("collapse");
    ::STRINGS[5] = uString::Const("hide");
    ::STRINGS[6] = uString::Const("CaptureRegion bigger than maximum texture size, dropping rendering (size: ");
    ::STRINGS[7] = uString::Const(", max-size: ");
    ::STRINGS[8] = uString::Const("/usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#4");
    ::STRINGS[9] = uString::Const("Draw called on a non-rooted node");
    ::STRINGS[10] = uString::Const("Draw");
    ::TYPES[29] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Uno::Float_typeof());
    ::TYPES[30] = ::g::Uno::Action1_typeof()->MakeType(Element_typeof());
    ::TYPES[31] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Fuse::Elements::AspectConstraint_typeof());
    ::TYPES[32] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Fuse::Elements::CachingMode_typeof());
    ::TYPES[33] = ::g::Uno::Action2_typeof()->MakeType(Element_typeof(), ::g::Fuse::Elements::CachingMode_typeof());
    ::TYPES[34] = ::g::Uno::Func1_typeof()->MakeType(Element_typeof(), ::g::Fuse::Elements::CachingMode_typeof());
    ::TYPES[35] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Fuse::Elements::HitTestMode_typeof());
    ::TYPES[36] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Uno::UX::Size_typeof());
    ::TYPES[5] = ::g::Uno::UX::Size_typeof();
    ::TYPES[37] = ::g::Uno::Action2_typeof()->MakeType(Element_typeof(), ::g::Uno::UX::Size_typeof());
    ::TYPES[38] = ::g::Uno::Func1_typeof()->MakeType(Element_typeof(), ::g::Uno::UX::Size_typeof());
    ::TYPES[39] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Fuse::Elements::Alignment_typeof());
    ::TYPES[40] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Fuse::Elements::Visibility_typeof());
    ::TYPES[41] = ::g::Uno::Action2_typeof()->MakeType(Element_typeof(), ::g::Fuse::Elements::Visibility_typeof());
    ::TYPES[42] = ::g::Uno::Func1_typeof()->MakeType(Element_typeof(), ::g::Fuse::Elements::Visibility_typeof());
    ::TYPES[43] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Uno::Float4_typeof());
    ::TYPES[44] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Uno::UX::Size2_typeof());
    ::TYPES[45] = ::g::Uno::UX::Size2_typeof();
    ::TYPES[46] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[47] = ::g::Uno::Action2_typeof()->MakeType(Element_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[48] = ::g::Uno::Func1_typeof()->MakeType(Element_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[6] = ::g::Fuse::Node_typeof();
    ::TYPES[49] = ::g::Fuse::Scripting::ScriptMethod_typeof()->Array();
    ::TYPES[50] = ::g::Fuse::Scripting::ScriptMethod_typeof();
    ::TYPES[51] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(Element_typeof());
    ::TYPES[52] = ::g::Uno::Action2_typeof()->MakeType(Element_typeof(), uObject_typeof()->Array());
    ::TYPES[53] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Fuse::Elements::ITransformOrigin_typeof());
    ::TYPES[54] = ::g::Fuse::Elements::TransformOrigins_typeof();
    ::TYPES[55] = ::g::Uno::Action2_typeof()->MakeType(Element_typeof(), ::g::Fuse::Elements::ITransformOrigin_typeof());
    ::TYPES[56] = ::g::Uno::Func1_typeof()->MakeType(Element_typeof(), ::g::Fuse::Elements::ITransformOrigin_typeof());
    ::TYPES[57] = Element__GMSCacheItem_typeof()->Array();
    ::TYPES[58] = ::g::Fuse::Elements::BoxSizing_typeof();
    ::TYPES[59] = ::g::Fuse::Elements::StandardBoxSizing_typeof();
    ::TYPES[60] = ::g::Fuse::Effects::Effect_typeof();
    ::TYPES[61] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof());
    ::TYPES[62] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof());
    ::TYPES[9] = ::g::Uno::Rect_typeof();
    ::TYPES[0] = ::g::Uno::Int_typeof();
    ::TYPES[63] = ::g::Uno::Float2_typeof();
    ::TYPES[10] = ::g::Uno::Int2_typeof();
    ::TYPES[21] = ::g::Uno::Graphics::Texture2D_typeof();
    ::TYPES[15] = uObject_typeof();
    ::TYPES[19] = ::g::Fuse::OrthographicFrustum_typeof();
    ::TYPES[20] = ::g::Fuse::IFrustum_typeof();
    ::TYPES[64] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof());
    ::TYPES[65] = ::g::Uno::Delegate_typeof();
    ::TYPES[66] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[8] = ::g::Uno::Recti_typeof();
    ::TYPES[67] = Element__GMSCacheItem_typeof();
    ::TYPES[13] = ::g::Fuse::DrawContext_typeof();
    ::TYPES[7] = ::g::Uno::Float_typeof();
    ::TYPES[68] = ::g::Uno::EventHandler_typeof();
    ::TYPES[69] = ::g::Uno::EventArgs_typeof();
    ::TYPES[3] = ::g::Fuse::LayoutParams_typeof();
    ::TYPES[70] = ::g::Fuse::Elements::BoxPlacement_typeof();
    ::TYPES[71] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof());
    ::TYPES[72] = ::g::Fuse::HitTestContext_typeof();
    ::TYPES[73] = ::g::Fuse::Elements::PreplacementHandler_typeof();
    ::TYPES[74] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof());
    ::TYPES[75] = ::g::Uno::Action_typeof();
    ::TYPES[76] = ::g::Fuse::Elements::NoImplicitMaxBoxSizing_typeof();
    ::TYPES[77] = ::g::Fuse::Elements::LimitBoxSizing_typeof();
    ::TYPES[78] = ::g::Fuse::Elements::LayoutMasterBoxSizing_typeof();
    ::TYPES[79] = ::g::Fuse::Elements::FillAspectBoxSizing_typeof();
    ::TYPES[80] = ::g::Fuse::NodeBounds_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(Element_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(Element_type, interface1),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(Element_type, interface2),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(Element_type, interface3),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(Element_type, interface4),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(Element_type, interface5),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(Element_type, interface6));
    type->SetFields(54,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::Element, _actualAnchor), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::Element, _actualPosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::Element, _actualPositionCache), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::Element, _actualSize), 0,
        ::g::Fuse::Elements::BoxSizing_typeof(), offsetof(::g::Fuse::Elements::Element, _boxSizing), 0,
        Element__BoxSizingMode_typeof(), offsetof(::g::Fuse::Elements::Element, _boxSizingMode), 0,
        ::g::Fuse::Elements::Cache_typeof(), offsetof(::g::Fuse::Elements::Element, _cache), 0,
        ::g::Fuse::Elements::CachingMode_typeof(), offsetof(::g::Fuse::Elements::Element, _cachingMode), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::Element, _clipToBounds), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Elements::Element, _compositionEffects), 0,
        ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof()), offsetof(::g::Fuse::Elements::Element, _effects), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Elements::Element, _gmsAt), 0,
        Element__GMSCacheItem_typeof()->Array(), offsetof(::g::Fuse::Elements::Element, _gmsCache), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Elements::Element, _gmsCount), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::Element, _haveActualPositionCache), 0,
        ::g::Uno::UX::Size_typeof(), offsetof(::g::Fuse::Elements::Element, _height), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::Element, _intendedSize), 0,
        ::g::Fuse::Elements::Visibility_typeof(), offsetof(::g::Fuse::Elements::Element, _oldVisibility), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::Element, _pendingDispatchPlacement), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Elements::Element, _placedBefore), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::Element, _ppPrevPosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::Element, _ppPrevSize), 0,
        ::g::Uno::Rect_typeof(), offsetof(::g::Fuse::Elements::Element, _renderBoundsWithEffects), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::Element, _renderBoundsWithEffectsDirty), 0,
        ::g::Uno::Rect_typeof(), offsetof(::g::Fuse::Elements::Element, _renderBoundsWithoutEffects), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::Element, _renderBoundsWithoutEffectsDirty), 0,
        ::g::Fuse::Elements::ITransformOrigin_typeof(), offsetof(::g::Fuse::Elements::Element, _transformOrigin), 0,
        ::g::Fuse::Elements::Visibility_typeof(), offsetof(::g::Fuse::Elements::Element, _visibility), 0,
        ::g::Uno::UX::Size_typeof(), offsetof(::g::Fuse::Elements::Element, _width), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::Element, ignoreTempArrange), 0,
        ::g::Fuse::Elements::ElementBatchEntry_typeof(), offsetof(::g::Fuse::Elements::Element, _ElementBatchEntry), 0,
        ::g::Fuse::PlacedHandler_typeof(), offsetof(::g::Fuse::Elements::Element, Placed1), 0,
        ::g::Fuse::Elements::PreplacementHandler_typeof(), offsetof(::g::Fuse::Elements::Element, Preplacement1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Elements::Element, PropertyChanged1), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Fuse::Elements::Alignment_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::AlignmentProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Uno::UX::Size2_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::AnchorProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Fuse::Elements::AspectConstraint_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::AspectConstraintProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Uno::Float_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::AspectProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Fuse::Elements::CachingMode_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::CachingModeProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Uno::Bool_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::ClipToBoundsProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Uno::UX::Size_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::HeightProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Fuse::Elements::HitTestMode_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::HitTestModeProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Uno::UX::Size_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::LimitHeightProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Uno::UX::Size_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::LimitWidthProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::MarginProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Uno::UX::Size_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::MaxHeightProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Uno::UX::Size_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::MaxWidthProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Uno::UX::Size_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::MinHeightProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Uno::UX::Size_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::MinWidthProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Uno::UX::Size2_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::OffsetProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Uno::Float_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::OpacityProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::PaddingProperty_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::ScriptClass_typeof(), (uintptr_t)&::g::Fuse::Elements::Element::ScriptClass1_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Fuse::Elements::ITransformOrigin_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::TransformOriginProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Fuse::Elements::Visibility_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::VisibilityProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Uno::UX::Size_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::WidthProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Uno::UX::Size_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::XProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Element_typeof(), ::g::Uno::UX::Size_typeof()), (uintptr_t)&::g::Fuse::Elements::Element::YProperty_, uFieldFlagsStatic);
    type->Reflection.SetFields(24,
        new uField("AlignmentProperty", 88),
        new uField("AnchorProperty", 89),
        new uField("AspectConstraintProperty", 90),
        new uField("AspectProperty", 91),
        new uField("CachingModeProperty", 92),
        new uField("ClipToBoundsProperty", 93),
        new uField("HeightProperty", 94),
        new uField("HitTestModeProperty", 95),
        new uField("LimitHeightProperty", 96),
        new uField("LimitWidthProperty", 97),
        new uField("MarginProperty", 98),
        new uField("MaxHeightProperty", 99),
        new uField("MaxWidthProperty", 100),
        new uField("MinHeightProperty", 101),
        new uField("MinWidthProperty", 102),
        new uField("OffsetProperty", 103),
        new uField("OpacityProperty", 104),
        new uField("PaddingProperty", 105),
        new uField("ScriptClass", 106),
        new uField("TransformOriginProperty", 107),
        new uField("VisibilityProperty", 108),
        new uField("WidthProperty", 109),
        new uField("XProperty", 110),
        new uField("YProperty", 111));
    type->Reflection.SetFunctions(69,
        new uFunction("get_ActualAnchor", NULL, (void*)Element__get_ActualAnchor_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_ActualPosition", NULL, (void*)Element__get_ActualPosition_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_ActualSize", NULL, (void*)Element__get_ActualSize_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("AddStyleEffect", NULL, (void*)Element__AddStyleEffect_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Effects::Effect_typeof()),
        new uFunction("get_Alignment", NULL, (void*)Element__get_Alignment_fn, 0, false, ::g::Fuse::Elements::Alignment_typeof(), 0),
        new uFunction("set_Alignment", NULL, (void*)Element__set_Alignment_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Alignment_typeof()),
        new uFunction("get_Anchor", NULL, (void*)Element__get_Anchor_fn, 0, false, ::g::Uno::UX::Size2_typeof(), 0),
        new uFunction("set_Anchor", NULL, (void*)Element__set_Anchor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size2_typeof()),
        new uFunction("get_Aspect", NULL, (void*)Element__get_Aspect_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Aspect", NULL, (void*)Element__set_Aspect_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_AspectConstraint", NULL, (void*)Element__get_AspectConstraint_fn, 0, false, ::g::Fuse::Elements::AspectConstraint_typeof(), 0),
        new uFunction("set_AspectConstraint", NULL, (void*)Element__set_AspectConstraint_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::AspectConstraint_typeof()),
        new uFunction("get_BoxSizing", NULL, (void*)Element__get_BoxSizing_fn, 0, false, Element__BoxSizingMode_typeof(), 0),
        new uFunction("set_BoxSizing", NULL, (void*)Element__set_BoxSizing_fn, 0, false, uVoid_typeof(), 1, Element__BoxSizingMode_typeof()),
        new uFunction("get_CachingMode", NULL, (void*)Element__get_CachingMode_fn, 0, false, ::g::Fuse::Elements::CachingMode_typeof(), 0),
        new uFunction("set_CachingMode", NULL, (void*)Element__set_CachingMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::CachingMode_typeof()),
        new uFunction("CaptureRegion", NULL, (void*)Element__CaptureRegion_fn, 0, false, ::g::Uno::Graphics::Framebuffer_typeof(), 3, ::g::Fuse::DrawContext_typeof(), ::g::Uno::Rect_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("get_ClipToBounds", NULL, (void*)Element__get_ClipToBounds_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ClipToBounds", NULL, (void*)Element__set_ClipToBounds_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Effects", NULL, (void*)Element__get_Effects_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof()), 0),
        new uFunction("GetVisibleViewportInvertPixelRect", NULL, (void*)Element__GetVisibleViewportInvertPixelRect_fn, 0, false, ::g::Uno::Recti_typeof(), 2, ::g::Fuse::DrawContext_typeof(), ::g::Uno::Rect_typeof()),
        new uFunction("get_HasActiveEffects", NULL, (void*)Element__get_HasActiveEffects_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasCompositionEffect", NULL, (void*)Element__get_HasCompositionEffect_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasEffects", NULL, (void*)Element__get_HasEffects_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Height", NULL, (void*)Element__get_Height_fn, 0, false, ::g::Uno::UX::Size_typeof(), 0),
        new uFunction("set_Height", NULL, (void*)Element__set_Height_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size_typeof()),
        new uFunction("get_HitTestMode", NULL, (void*)Element__get_HitTestMode_fn, 0, false, ::g::Fuse::Elements::HitTestMode_typeof(), 0),
        new uFunction("set_HitTestMode", NULL, (void*)Element__set_HitTestMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::HitTestMode_typeof()),
        new uFunction("InvalidateRenderBoundsWithEffects", NULL, (void*)Element__InvalidateRenderBoundsWithEffects_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("InvalidateVisualComposition", NULL, (void*)Element__InvalidateVisualComposition_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("IsPointInside", NULL, (void*)Element__IsPointInside_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_LimitHeight", NULL, (void*)Element__get_LimitHeight_fn, 0, false, ::g::Uno::UX::Size_typeof(), 0),
        new uFunction("set_LimitHeight", NULL, (void*)Element__set_LimitHeight_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size_typeof()),
        new uFunction("get_LimitWidth", NULL, (void*)Element__get_LimitWidth_fn, 0, false, ::g::Uno::UX::Size_typeof(), 0),
        new uFunction("set_LimitWidth", NULL, (void*)Element__set_LimitWidth_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size_typeof()),
        new uFunction("get_Margin", NULL, (void*)Element__get_Margin_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Margin", NULL, (void*)Element__set_Margin_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_MaxHeight", NULL, (void*)Element__get_MaxHeight_fn, 0, false, ::g::Uno::UX::Size_typeof(), 0),
        new uFunction("set_MaxHeight", NULL, (void*)Element__set_MaxHeight_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size_typeof()),
        new uFunction("get_MaxWidth", NULL, (void*)Element__get_MaxWidth_fn, 0, false, ::g::Uno::UX::Size_typeof(), 0),
        new uFunction("set_MaxWidth", NULL, (void*)Element__set_MaxWidth_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size_typeof()),
        new uFunction("get_MinHeight", NULL, (void*)Element__get_MinHeight_fn, 0, false, ::g::Uno::UX::Size_typeof(), 0),
        new uFunction("set_MinHeight", NULL, (void*)Element__set_MinHeight_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size_typeof()),
        new uFunction("get_MinWidth", NULL, (void*)Element__get_MinWidth_fn, 0, false, ::g::Uno::UX::Size_typeof(), 0),
        new uFunction("set_MinWidth", NULL, (void*)Element__set_MinWidth_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size_typeof()),
        new uFunction("get_Offset", NULL, (void*)Element__get_Offset_fn, 0, false, ::g::Uno::UX::Size2_typeof(), 0),
        new uFunction("set_Offset", NULL, (void*)Element__set_Offset_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size2_typeof()),
        new uFunction("get_Opacity", NULL, (void*)Element__get_Opacity_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Opacity", NULL, (void*)Element__set_Opacity_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Padding", NULL, (void*)Element__get_Padding_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Padding", NULL, (void*)Element__set_Padding_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("add_Placed", NULL, (void*)Element__add_Placed_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::PlacedHandler_typeof()),
        new uFunction("remove_Placed", NULL, (void*)Element__remove_Placed_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::PlacedHandler_typeof()),
        new uFunction("add_Preplacement", NULL, (void*)Element__add_Preplacement_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::PreplacementHandler_typeof()),
        new uFunction("remove_Preplacement", NULL, (void*)Element__remove_Preplacement_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::PreplacementHandler_typeof()),
        new uFunction("add_PropertyChanged", NULL, (void*)Element__add_PropertyChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_PropertyChanged", NULL, (void*)Element__remove_PropertyChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_RenderBoundsWithEffects", NULL, (void*)Element__get_RenderBoundsWithEffects_fn, 0, false, ::g::Uno::Rect_typeof(), 0),
        new uFunction("get_RenderBoundsWithoutEffects", NULL, (void*)Element__get_RenderBoundsWithoutEffects_fn, 0, false, ::g::Uno::Rect_typeof(), 0),
        new uFunction("get_TransformOrigin", NULL, (void*)Element__get_TransformOrigin_fn, 0, false, ::g::Fuse::Elements::ITransformOrigin_typeof(), 0),
        new uFunction("set_TransformOrigin", NULL, (void*)Element__set_TransformOrigin_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::ITransformOrigin_typeof()),
        new uFunction("get_Visibility", NULL, (void*)Element__get_Visibility_fn, 0, false, ::g::Fuse::Elements::Visibility_typeof(), 0),
        new uFunction("set_Visibility", NULL, (void*)Element__set_Visibility_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Visibility_typeof()),
        new uFunction("get_Width", NULL, (void*)Element__get_Width_fn, 0, false, ::g::Uno::UX::Size_typeof(), 0),
        new uFunction("set_Width", NULL, (void*)Element__set_Width_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size_typeof()),
        new uFunction("get_X", NULL, (void*)Element__get_X_fn, 0, false, ::g::Uno::UX::Size_typeof(), 0),
        new uFunction("set_X", NULL, (void*)Element__set_X_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size_typeof()),
        new uFunction("get_Y", NULL, (void*)Element__get_Y_fn, 0, false, ::g::Uno::UX::Size_typeof(), 0),
        new uFunction("set_Y", NULL, (void*)Element__set_Y_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size_typeof()));
    return type;
}

// protected generated Element() :100
void Element__ctor_1_fn(Element* __this)
{
    __this->ctor_1();
}

// protected override sealed float2 get_AbsoluteViewportOrigin() :1304
void Element__get_AbsoluteViewportOrigin_fn(Element* __this, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.Element", "get_AbsoluteViewportOrigin()");
    ::g::Uno::Float2 ret43;
    ::g::Uno::Float2 p = __this->ActualPosition();
    p = ::g::Uno::Float2__op_Addition2(p, (::g::Fuse::Node__get_AbsoluteViewportOrigin_fn(__this, &ret43), ret43));
    return *__retval = p, void();
}

// public float2 get_ActualAnchor() :1489
void Element__get_ActualAnchor_fn(Element* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ActualAnchor();
}

// internal void set_ActualAnchor(float2 value) :1490
void Element__set_ActualAnchor_fn(Element* __this, ::g::Uno::Float2* value)
{
    __this->ActualAnchor(*value);
}

// public float2 get_ActualPosition() :1317
void Element__get_ActualPosition_fn(Element* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ActualPosition();
}

// public float2 get_ActualSize() :1344
void Element__get_ActualSize_fn(Element* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ActualSize();
}

// public void AddStyleEffect(Fuse.Effects.Effect e) :775
void Element__AddStyleEffect_fn(Element* __this, ::g::Fuse::Effects::Effect* e)
{
    __this->AddStyleEffect(e);
}

// public Fuse.Elements.Alignment get_Alignment() :1134
void Element__get_Alignment_fn(Element* __this, int* __retval)
{
    *__retval = __this->Alignment();
}

// public void set_Alignment(Fuse.Elements.Alignment value) :1135
void Element__set_Alignment_fn(Element* __this, int* value)
{
    __this->Alignment(*value);
}

// private Fuse.Elements.Element get_AncestorElement() :1748
void Element__get_AncestorElement_fn(Element* __this, Element** __retval)
{
    *__retval = __this->AncestorElement();
}

// public Uno.UX.Size2 get_Anchor() :1227
void Element__get_Anchor_fn(Element* __this, ::g::Uno::UX::Size2* __retval)
{
    *__retval = __this->Anchor();
}

// public void set_Anchor(Uno.UX.Size2 value) :1228
void Element__set_Anchor_fn(Element* __this, ::g::Uno::UX::Size2* value)
{
    __this->Anchor(*value);
}

// protected virtual void ArrangePaddingBox(Fuse.LayoutParams lp) :1612
void Element__ArrangePaddingBox_fn(Element* __this, ::g::Fuse::LayoutParams* lp)
{
}

// public float get_Aspect() :107
void Element__get_Aspect_fn(Element* __this, float* __retval)
{
    *__retval = __this->Aspect();
}

// public void set_Aspect(float value) :108
void Element__set_Aspect_fn(Element* __this, float* value)
{
    __this->Aspect(*value);
}

// public Fuse.Elements.AspectConstraint get_AspectConstraint() :117
void Element__get_AspectConstraint_fn(Element* __this, int* __retval)
{
    *__retval = __this->AspectConstraint();
}

// public void set_AspectConstraint(Fuse.Elements.AspectConstraint value) :118
void Element__set_AspectConstraint_fn(Element* __this, int* value)
{
    __this->AspectConstraint(*value);
}

// public Fuse.Elements.Element.BoxSizingMode get_BoxSizing() :1419
void Element__get_BoxSizing_fn(Element* __this, int* __retval)
{
    *__retval = __this->BoxSizing();
}

// public void set_BoxSizing(Fuse.Elements.Element.BoxSizingMode value) :1420
void Element__set_BoxSizing_fn(Element* __this, int* value)
{
    __this->BoxSizing(*value);
}

// internal Fuse.Elements.BoxSizing get_BoxSizingObject() :1441
void Element__get_BoxSizingObject_fn(Element* __this, ::g::Fuse::Elements::BoxSizing** __retval)
{
    *__retval = __this->BoxSizingObject();
}

// private Fuse.Elements.Cache get_Cache() :849
void Element__get_Cache_fn(Element* __this, ::g::Fuse::Elements::Cache** __retval)
{
    *__retval = __this->Cache();
}

// public Fuse.Elements.CachingMode get_CachingMode() :657
void Element__get_CachingMode_fn(Element* __this, int* __retval)
{
    *__retval = __this->CachingMode();
}

// public void set_CachingMode(Fuse.Elements.CachingMode value) :658
void Element__set_CachingMode_fn(Element* __this, int* value)
{
    __this->CachingMode(*value);
}

// protected virtual Uno.Rect CalcRenderBounds() :585
void Element__CalcRenderBounds_fn(Element* __this, ::g::Uno::Rect* __retval)
{
    uStackFrame __("Fuse.Elements.Element", "CalcRenderBounds()");
    return *__retval = ::g::Uno::Rect__New2(::g::Uno::Float2__New1(0.0f), __this->ActualSize()), void();
}

// protected Uno.Rect CalcRenderBoundsWithEffects() :532
void Element__CalcRenderBoundsWithEffects_fn(Element* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->CalcRenderBoundsWithEffects();
}

// internal override sealed bool get_CanAdjustMarginBox() :1527
void Element__get_CanAdjustMarginBox_fn(Element* __this, bool* __retval)
{
    uStackFrame __("Fuse.Elements.Element", "get_CanAdjustMarginBox()");
    return *__retval = true, void();
}

// public framebuffer CaptureRegion(Fuse.DrawContext dc, Uno.Rect region, float2 padding) :667
void Element__CaptureRegion_fn(Element* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* region, ::g::Uno::Float2* padding, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->CaptureRegion(dc, *region, *padding);
}

// public bool get_ClipToBounds() :1239
void Element__get_ClipToBounds_fn(Element* __this, bool* __retval)
{
    *__retval = __this->ClipToBounds();
}

// public void set_ClipToBounds(bool value) :1240
void Element__set_ClipToBounds_fn(Element* __this, bool* value)
{
    __this->ClipToBounds(*value);
}

// private static void collapse(Fuse.Elements.Element e, object[] args) :1705
void Element__collapse_fn(Element* e, uArray* args)
{
    Element::collapse(e, args);
}

// private void Composit(Fuse.DrawContext dc) :854
void Element__Composit_fn(Element* __this, ::g::Fuse::DrawContext* dc)
{
    __this->Composit(dc);
}

// internal void CompositEffects(Fuse.DrawContext dc) :878
void Element__CompositEffects_fn(Element* __this, ::g::Fuse::DrawContext* dc)
{
    __this->CompositEffects(dc);
}

// private void DispatchPlacement() :1592
void Element__DispatchPlacement_fn(Element* __this)
{
    __this->DispatchPlacement();
}

// public override void Draw(Fuse.DrawContext dc) :697
void Element__Draw_fn(Element* __this, ::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Element", "Draw(Fuse.DrawContext)");

    if (!__this->IsLocalRooted())
        ::g::Fuse::Diagnostics::Error(::STRINGS[9/*"Draw called...*/], __this, ::STRINGS[8/*"/usr/local/...*/], 700, ::STRINGS[10/*"Draw"*/]);

    if (__this->Visibility() != 0)
        return;

    double t;
    ::g::Uno::Recti visibleRect = __this->GetVisibleViewportInvertPixelRect(dc, __this->RenderBoundsWithEffects());

    if ((visibleRect.Size().X == 0) || (visibleRect.Size().Y == 0))
        return;

    if (__this->NeedsClipping())
    {
        uPtr(dc)->PushScissor(visibleRect);
        __this->Composit(dc);
        dc->PopScissor();
    }
    else
        __this->Composit(dc);
}

// public override sealed void DrawSelection(Fuse.DrawContext dc) :743
void Element__DrawSelection_fn(Element* __this, ::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Element", "DrawSelection(Fuse.DrawContext)");
    __this->DrawLocalSelectionRect(dc, ::g::Uno::Rect__New2(::g::Uno::Float2__New2(0.0f, 0.0f), __this->ActualSize()));
}

// public Uno.Collections.IList<Fuse.Effects.Effect> get_Effects() :768
void Element__get_Effects_fn(Element* __this, uObject** __retval)
{
    *__retval = __this->Effects();
}

// internal generated Fuse.Elements.ElementBatchEntry get_ElementBatchEntry() :852
void Element__get_ElementBatchEntry_fn(Element* __this, ::g::Fuse::Elements::ElementBatchEntry** __retval)
{
    *__retval = __this->ElementBatchEntry();
}

// internal generated void set_ElementBatchEntry(Fuse.Elements.ElementBatchEntry value) :852
void Element__set_ElementBatchEntry_fn(Element* __this, ::g::Fuse::Elements::ElementBatchEntry* value)
{
    __this->ElementBatchEntry(value);
}

// protected virtual bool FastTrackDrawWithOpacity(Fuse.DrawContext dc) :873
void Element__FastTrackDrawWithOpacity_fn(Element* __this, ::g::Fuse::DrawContext* dc, bool* __retval)
{
    uStackFrame __("Fuse.Elements.Element", "FastTrackDrawWithOpacity(Fuse.DrawContext)");
    return *__retval = false, void();
}

// private void Fuse.Animations.IResize.SetSize(float2 size) :1631
void Element__FuseAnimationsIResizeSetSize_fn(Element* __this, ::g::Uno::Float2* size)
{
    uStackFrame __("Fuse.Elements.Element", "Fuse.Animations.IResize.SetSize(float2)");
    ::g::Uno::Float2 size_ = *size;
    __this->_actualSize = size_;
    __this->InternArrangePaddingBox(::g::Fuse::LayoutParams__CreateTemporary(size_));
    __this->InvalidateVisual();
    __this->InvalidateRenderBounds();
    __this->InvalidateLocalTransform();
}

// private float3 Fuse.IActualPlacement.get_ActualPosition() :1358
void Element__FuseIActualPlacementget_ActualPosition_fn(Element* __this, ::g::Uno::Float3* __retval)
{
    uStackFrame __("Fuse.Elements.Element", "Fuse.IActualPlacement.get_ActualPosition()");
    return *__retval = ::g::Uno::Float3__New4(__this->ActualPosition(), 0.0f), void();
}

// private float3 Fuse.IActualPlacement.get_ActualSize() :1357
void Element__FuseIActualPlacementget_ActualSize_fn(Element* __this, ::g::Uno::Float3* __retval)
{
    uStackFrame __("Fuse.Elements.Element", "Fuse.IActualPlacement.get_ActualSize()");
    return *__retval = ::g::Uno::Float3__New4(__this->ActualSize(), 0.0f), void();
}

// private void Fuse.Triggers.Actions.ICollapse.Collapse() :516
void Element__FuseTriggersActionsICollapseCollapse_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "Fuse.Triggers.Actions.ICollapse.Collapse()");
    __this->Visibility(1);
}

// private void Fuse.Triggers.Actions.IHide.Hide() :517
void Element__FuseTriggersActionsIHideHide_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "Fuse.Triggers.Actions.IHide.Hide()");
    __this->Visibility(2);
}

// private void Fuse.Triggers.Actions.IShow.Show() :515
void Element__FuseTriggersActionsIShowShow_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "Fuse.Triggers.Actions.IShow.Show()");
    __this->Visibility(0);
}

// protected internal float2 GetArrangePaddingSize(Fuse.LayoutParams lp) :1481
void Element__GetArrangePaddingSize_fn(Element* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetArrangePaddingSize(*lp);
}

// private static Fuse.Elements.CachingMode GetCachingMode(Fuse.Elements.Element elm) :660
void Element__GetCachingMode_fn(Element* elm, int* __retval)
{
    *__retval = Element::GetCachingMode(elm);
}

// private static bool GetClipToBounds(Fuse.Elements.Element elm) :1243
void Element__GetClipToBounds_fn(Element* elm, bool* __retval)
{
    *__retval = Element::GetClipToBounds(elm);
}

// protected virtual float2 GetContentSize(Fuse.LayoutParams lp) :1476
void Element__GetContentSize_fn(Element* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.Element", "GetContentSize(Fuse.LayoutParams)");
    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// private static Uno.UX.Size GetHeight(Fuse.Elements.Element elm) :1084
void Element__GetHeight_fn(Element* elm, ::g::Uno::UX::Size* __retval)
{
    *__retval = Element::GetHeight(elm);
}

// public override sealed float2 GetMarginSize(Fuse.LayoutParams lp) :1450
void Element__GetMarginSize_fn(Element* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.Element", "GetMarginSize(Fuse.LayoutParams)");
    Element__GMSCacheItem collection6;
    ::g::Fuse::LayoutParams lp_ = *lp;

    for (int i = 0; i < __this->_gmsCount; ++i)
    {
        Element__GMSCacheItem g = uPtr(__this->_gmsCache)->Item<Element__GMSCacheItem>(i);

        if (g.layoutParams.IsCompatible(lp_))
            return *__retval = g.result, void();
    }

    ::g::Uno::Float2 sz = uPtr(__this->_boxSizing)->CalcMarginSize(__this, lp_);
    int n = (__this->_gmsAt++) % 2;
    __this->_gmsCount = ::g::Uno::Math::Min8(2, __this->_gmsCount + 1);
    uPtr(__this->_gmsCache)->Item<Element__GMSCacheItem>(n) = (collection6 = uDefault<Element__GMSCacheItem>(), collection6.layoutParams = lp_.DeriveClone(), collection6.result = sz, collection6);
    return *__retval = sz, void();
}

// private static Fuse.Elements.ITransformOrigin GetTransformOrigin(Fuse.Elements.Element elm) :1853
void Element__GetTransformOrigin_fn(Element* elm, uObject** __retval)
{
    *__retval = Element::GetTransformOrigin(elm);
}

// internal Uno.Recti GetViewportInvertPixelRect(Fuse.DrawContext dc, Uno.Rect localRegion) :595
void Element__GetViewportInvertPixelRect_fn(Element* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* localRegion, ::g::Uno::Recti* __retval)
{
    *__retval = __this->GetViewportInvertPixelRect(dc, *localRegion);
}

// private static Fuse.Elements.Visibility GetVisibility(Fuse.Elements.Element elm) :1150
void Element__GetVisibility_fn(Element* elm, int* __retval)
{
    *__retval = Element::GetVisibility(elm);
}

// public Uno.Recti GetVisibleViewportInvertPixelRect(Fuse.DrawContext dc, Uno.Rect localRegion) :611
void Element__GetVisibleViewportInvertPixelRect_fn(Element* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* localRegion, ::g::Uno::Recti* __retval)
{
    *__retval = __this->GetVisibleViewportInvertPixelRect(dc, *localRegion);
}

// private static Uno.UX.Size GetWidth(Fuse.Elements.Element elm) :1071
void Element__GetWidth_fn(Element* elm, ::g::Uno::UX::Size* __retval)
{
    *__retval = Element::GetWidth(elm);
}

// private void GMSReset() :1400
void Element__GMSReset_fn(Element* __this)
{
    __this->GMSReset();
}

// public bool get_HasActiveEffects() :790
void Element__get_HasActiveEffects_fn(Element* __this, bool* __retval)
{
    *__retval = __this->HasActiveEffects();
}

// public bool get_HasCompositionEffect() :810
void Element__get_HasCompositionEffect_fn(Element* __this, bool* __retval)
{
    *__retval = __this->HasCompositionEffect();
}

// public bool get_HasEffects() :784
void Element__get_HasEffects_fn(Element* __this, bool* __retval)
{
    *__retval = __this->HasEffects();
}

// public Uno.UX.Size get_Height() :1081
void Element__get_Height_fn(Element* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->Height();
}

// public void set_Height(Uno.UX.Size value) :1082
void Element__set_Height_fn(Element* __this, ::g::Uno::UX::Size* value)
{
    __this->Height(*value);
}

// private static void hide(Fuse.Elements.Element e, object[] args) :1709
void Element__hide_fn(Element* e, uArray* args)
{
    Element::hide(e, args);
}

// protected override sealed Fuse.NodeBounds get_HitTestChildrenBounds() :1039
void Element__get_HitTestChildrenBounds_fn(Element* __this, ::g::Fuse::NodeBounds** __retval)
{
    uStackFrame __("Fuse.Elements.Element", "get_HitTestChildrenBounds()");
    ::g::Fuse::NodeBounds* ret56;

    if ((__this->HitTestMode() & 4) == 4)
        return *__retval = (::g::Fuse::Node__get_HitTestChildrenBounds_fn(__this, &ret56), ret56), void();

    return *__retval = ::g::Fuse::NodeBounds::Empty(), void();
}

// protected override sealed Fuse.NodeBounds get_HitTestLocalBounds() :1017
void Element__get_HitTestLocalBounds_fn(Element* __this, ::g::Fuse::NodeBounds** __retval)
{
    uStackFrame __("Fuse.Elements.Element", "get_HitTestLocalBounds()");
    ::g::Fuse::NodeBounds* n = ::g::Fuse::NodeBounds::Empty();

    if ((__this->HitTestMode() & 2) == 2)
        n = uPtr(n)->AddRect(::g::Uno::Float2__New1(0.0f), __this->ActualSize());

    if ((__this->HitTestMode() & 1) == 1)
        n = uPtr(n)->Merge(__this->HitTestLocalVisualBounds(), NULL);

    return *__retval = n, void();
}

// protected virtual Fuse.NodeBounds get_HitTestLocalVisualBounds() :1031
void Element__get_HitTestLocalVisualBounds_fn(Element* __this, ::g::Fuse::NodeBounds** __retval)
{
    uStackFrame __("Fuse.Elements.Element", "get_HitTestLocalVisualBounds()");
    return *__retval = ::g::Fuse::NodeBounds::Empty(), void();
}

// public Fuse.Elements.HitTestMode get_HitTestMode() :989
void Element__get_HitTestMode_fn(Element* __this, int* __retval)
{
    *__retval = __this->HitTestMode();
}

// public void set_HitTestMode(Fuse.Elements.HitTestMode value) :990
void Element__set_HitTestMode_fn(Element* __this, int* value)
{
    __this->HitTestMode(*value);
}

// internal float2 get_IntendedPosition() :1354
void Element__get_IntendedPosition_fn(Element* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->IntendedPosition();
}

// internal float2 get_IntendedSize() :1349
void Element__get_IntendedSize_fn(Element* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->IntendedSize();
}

// internal void InternArrangePaddingBox(Fuse.LayoutParams lp) :1606
void Element__InternArrangePaddingBox_fn(Element* __this, ::g::Fuse::LayoutParams* lp)
{
    __this->InternArrangePaddingBox(*lp);
}

// internal float2 InternGetContentSize(Fuse.LayoutParams lp) :1471
void Element__InternGetContentSize_fn(Element* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->InternGetContentSize(*lp);
}

// protected override sealed void InvalidateLocalTransform() :1896
void Element__InvalidateLocalTransform_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "InvalidateLocalTransform()");
    __this->InvalidateVisualComposition();
    Element* p = __this->AncestorElement();

    if (p != NULL)
        uPtr(p)->InvalidateRenderBounds();

    if (__this->ElementBatchEntry() != NULL)
        uPtr(__this->ElementBatchEntry())->InvalidateTransform();

    ::g::Fuse::Node__InvalidateLocalTransform_fn(__this);
}

// private static void InvalidateLocalTransform(Fuse.Elements.Element elm) :1861
void Element__InvalidateLocalTransform1_fn(Element* elm)
{
    Element::InvalidateLocalTransform1(elm);
}

// public void InvalidateRenderBoundsWithEffects() :1983
void Element__InvalidateRenderBoundsWithEffects_fn(Element* __this)
{
    __this->InvalidateRenderBoundsWithEffects();
}

// public void InvalidateVisualComposition() :1936
void Element__InvalidateVisualComposition_fn(Element* __this)
{
    __this->InvalidateVisualComposition();
}

// public override sealed bool get_IsLocalVisible() :1678
void Element__get_IsLocalVisible_fn(Element* __this, bool* __retval)
{
    uStackFrame __("Fuse.Elements.Element", "get_IsLocalVisible()");
    return *__retval = __this->Visibility() == 0, void();
}

// protected override Fuse.LayoutDependent IsMarginBoxDependent(Fuse.Node child) :1954
void Element__IsMarginBoxDependent_fn(Element* __this, ::g::Fuse::Node* child, int* __retval)
{
    uStackFrame __("Fuse.Elements.Element", "IsMarginBoxDependent(Fuse.Node)");
    return *__retval = uPtr(__this->_boxSizing)->IsContentRelativeSize(__this), void();
}

// public bool IsPointInside(float2 localPoint) :978
void Element__IsPointInside_fn(Element* __this, ::g::Uno::Float2* localPoint, bool* __retval)
{
    *__retval = __this->IsPointInside(*localPoint);
}

// public Uno.UX.Size get_LimitHeight() :2473
void Element__get_LimitHeight_fn(Element* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->LimitHeight();
}

// public void set_LimitHeight(Uno.UX.Size value) :2474
void Element__set_LimitHeight_fn(Element* __this, ::g::Uno::UX::Size* value)
{
    __this->LimitHeight(*value);
}

// public Uno.UX.Size get_LimitWidth() :2482
void Element__get_LimitWidth_fn(Element* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->LimitWidth();
}

// public void set_LimitWidth(Uno.UX.Size value) :2483
void Element__set_LimitWidth_fn(Element* __this, ::g::Uno::UX::Size* value)
{
    __this->LimitWidth(*value);
}

// public override sealed Uno.Geometry.Box get_LocalBounds() :1869
void Element__get_LocalBounds_fn(Element* __this, ::g::Uno::Geometry::Box* __retval)
{
    uStackFrame __("Fuse.Elements.Element", "get_LocalBounds()");
    return *__retval = ::g::Uno::Geometry::Box__New1(::g::Uno::Float3__New1(0.0f), ::g::Uno::Float3__New4(__this->ActualSize(), 0.0f)), void();
}

// internal void LocalDraw(Fuse.DrawContext dc) :736
void Element__LocalDraw_fn(Element* __this, ::g::Fuse::DrawContext* dc)
{
    __this->LocalDraw(dc);
}

// public override Uno.Rect get_LocalRenderBounds() :630
void Element__get_LocalRenderBounds_fn(Element* __this, ::g::Uno::Rect* __retval)
{
    uStackFrame __("Fuse.Elements.Element", "get_LocalRenderBounds()");
    return *__retval = __this->RenderBoundsWithEffects(), void();
}

// public float4 get_Margin() :1172
void Element__get_Margin_fn(Element* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Margin();
}

// public void set_Margin(float4 value) :1173
void Element__set_Margin_fn(Element* __this, ::g::Uno::Float4* value)
{
    __this->Margin(*value);
}

// public Uno.UX.Size get_MaxHeight() :1124
void Element__get_MaxHeight_fn(Element* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->MaxHeight();
}

// public void set_MaxHeight(Uno.UX.Size value) :1125
void Element__set_MaxHeight_fn(Element* __this, ::g::Uno::UX::Size* value)
{
    __this->MaxHeight(*value);
}

// public Uno.UX.Size get_MaxWidth() :1114
void Element__get_MaxWidth_fn(Element* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->MaxWidth();
}

// public void set_MaxWidth(Uno.UX.Size value) :1115
void Element__set_MaxWidth_fn(Element* __this, ::g::Uno::UX::Size* value)
{
    __this->MaxWidth(*value);
}

// public Uno.UX.Size get_MinHeight() :1104
void Element__get_MinHeight_fn(Element* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->MinHeight();
}

// public void set_MinHeight(Uno.UX.Size value) :1105
void Element__set_MinHeight_fn(Element* __this, ::g::Uno::UX::Size* value)
{
    __this->MinHeight(*value);
}

// public Uno.UX.Size get_MinWidth() :1094
void Element__get_MinWidth_fn(Element* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->MinWidth();
}

// public void set_MinWidth(Uno.UX.Size value) :1095
void Element__set_MinWidth_fn(Element* __this, ::g::Uno::UX::Size* value)
{
    __this->MinWidth(*value);
}

// private bool get_NeedsClipping() :563
void Element__get_NeedsClipping_fn(Element* __this, bool* __retval)
{
    *__retval = __this->NeedsClipping();
}

// private void NotifyPropertyChanged() :1255
void Element__NotifyPropertyChanged_fn(Element* __this)
{
    __this->NotifyPropertyChanged();
}

// public Uno.UX.Size2 get_Offset() :1194
void Element__get_Offset_fn(Element* __this, ::g::Uno::UX::Size2* __retval)
{
    *__retval = __this->Offset();
}

// public void set_Offset(Uno.UX.Size2 value) :1195
void Element__set_Offset_fn(Element* __this, ::g::Uno::UX::Size2* value)
{
    __this->Offset(*value);
}

// internal override sealed void OnAdjustMarginBoxPosition(float2 position) :1528
void Element__OnAdjustMarginBoxPosition_fn(Element* __this, ::g::Uno::Float2* position)
{
    uStackFrame __("Fuse.Elements.Element", "OnAdjustMarginBoxPosition(float2)");
    ::g::Uno::Float2 position_ = *position;
    __this->PerformPlacement(::g::Uno::Float2__op_Addition2(__this->_actualPosition, ::g::Uno::Float2__op_Subtraction2(position_, __this->MarginBoxPosition())), __this->_actualSize, false);
}

// protected override sealed float2 OnArrangeMarginBox(float2 position, Fuse.LayoutParams lp) :1493
void Element__OnArrangeMarginBox_fn(Element* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.Element", "OnArrangeMarginBox(float2,Fuse.LayoutParams)");
    ::g::Uno::Float2 position_ = *position;
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Fuse::Elements::BoxPlacement bp = uPtr(__this->_boxSizing)->CalcBoxPlacement(__this, position_, lp_);

    if (!(lp_.Temporary() && __this->ignoreTempArrange))
    {
        if (__this->Visibility() != 1)
        {
            ::g::Fuse::LayoutParams nlp = lp_.DeriveClone();
            nlp.SetSize(bp.Size, true, true);
            __this->ArrangePaddingBox(nlp);
            __this->PerformPlacement(bp.Position, bp.Size, lp_.Temporary());
        }
    }

    return *__retval = bp.MarginBox, void();
}

// private static void OnCachingModeChanged(Fuse.Elements.Element elm) :662
void Element__OnCachingModeChanged_fn(Element* elm)
{
    Element::OnCachingModeChanged(elm);
}

// private static void OnClipToBoundsChanged(Fuse.Elements.Element elm) :1246
void Element__OnClipToBoundsChanged_fn(Element* elm)
{
    Element::OnClipToBoundsChanged(elm);
}

// private void OnEffectAdded(Fuse.Effects.Effect e) :813
void Element__OnEffectAdded_fn(Element* __this, ::g::Fuse::Effects::Effect* e)
{
    __this->OnEffectAdded(e);
}

// private void OnEffectRemoved(Fuse.Effects.Effect e) :824
void Element__OnEffectRemoved_fn(Element* __this, ::g::Fuse::Effects::Effect* e)
{
    __this->OnEffectRemoved(e);
}

// private void OnEffectRenderBoundsChanged(Fuse.Effects.Effect e) :841
void Element__OnEffectRenderBoundsChanged_fn(Element* __this, ::g::Fuse::Effects::Effect* e)
{
    __this->OnEffectRenderBoundsChanged(e);
}

// private void OnEffectRenderingChanged(Fuse.Effects.Effect e) :836
void Element__OnEffectRenderingChanged_fn(Element* __this, ::g::Fuse::Effects::Effect* e)
{
    __this->OnEffectRenderingChanged(e);
}

// protected override sealed void OnHitTest(Fuse.HitTestContext htc) :993
void Element__OnHitTest_fn(Element* __this, ::g::Fuse::HitTestContext* htc)
{
    uStackFrame __("Fuse.Elements.Element", "OnHitTest(Fuse.HitTestContext)");

    if (__this->ClipToBounds() && !__this->IsPointInside(uPtr(htc)->LocalPoint()))
        return;

    if ((__this->HitTestMode() & 4) == 4)
        __this->OnHitTestChildren(htc);

    if ((__this->HitTestMode() & 1) == 1)
        __this->OnHitTestLocalVisual(htc);

    if ((__this->HitTestMode() & 2) == 2)
    {
        if (__this->IsPointInside(uPtr(htc)->LocalPoint()))
            uPtr(htc)->Hit(__this);
    }
}

// protected virtual void OnHitTestChildren(Fuse.HitTestContext htc) :1010
void Element__OnHitTestChildren_fn(Element* __this, ::g::Fuse::HitTestContext* htc)
{
}

// protected virtual void OnHitTestLocalVisual(Fuse.HitTestContext htc) :1009
void Element__OnHitTestLocalVisual_fn(Element* __this, ::g::Fuse::HitTestContext* htc)
{
}

// protected override void OnInvalidateLayout() :1948
void Element__OnInvalidateLayout_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "OnInvalidateLayout()");
    ::g::Fuse::Node__OnInvalidateLayout_fn(__this);
    __this->GMSReset();
}

// protected override sealed bool OnInvalidateRenderBounds() :1959
void Element__OnInvalidateRenderBounds_fn(Element* __this, bool* __retval)
{
    uStackFrame __("Fuse.Elements.Element", "OnInvalidateRenderBounds()");

    if (__this->_renderBoundsWithEffectsDirty && __this->_renderBoundsWithoutEffectsDirty)
        return *__retval = true, void();

    __this->_renderBoundsWithoutEffectsDirty = true;
    __this->OnInvalidateRenderBoundsWithEffects();

    if (__this->ElementBatchEntry() != NULL)
        uPtr(__this->ElementBatchEntry())->InvalidateRenderBounds();

    return *__retval = false, void();
}

// private void OnInvalidateRenderBoundsWithEffects() :1974
void Element__OnInvalidateRenderBoundsWithEffects_fn(Element* __this)
{
    __this->OnInvalidateRenderBoundsWithEffects();
}

// protected override void OnInvalidateVisual() :1926
void Element__OnInvalidateVisual_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "OnInvalidateVisual()");
    ::g::Fuse::Node__OnInvalidateVisual_fn(__this);

    if (__this->Cache() != NULL)
        uPtr(__this->Cache())->Invalidate();

    if (__this->ElementBatchEntry() != NULL)
        uPtr(__this->ElementBatchEntry())->InvalidateVisual();
}

// private static void OnOpacityChanged(Fuse.Elements.Element elm) :1772
void Element__OnOpacityChanged_fn(Element* elm)
{
    Element::OnOpacityChanged(elm);
}

// internal void OnPreplacement() :1519
void Element__OnPreplacement_fn(Element* __this)
{
    __this->OnPreplacement();
}

// protected override void OnResetStyle() :1724
void Element__OnResetStyle_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "OnResetStyle()");
    ::g::Fuse::Effects::Effect* ret40;

    if (__this->_effects != NULL)

        for (int i = 0; i < uPtr(__this->_effects)->Count(); i++)
            if (uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(__this->_effects), uCRef<int>(i), &ret40), ret40))->AddedByStyle)
                uPtr(__this->_effects)->RemoveAt(i--);

    ::g::Fuse::Node__OnResetStyle_fn(__this);
}

// protected override void OnRooted() :1649
void Element__OnRooted_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "OnRooted()");
    ::g::Fuse::Effects::Effect* ret41;

    if (__this->HasEffects())

        for (uObject* enum7 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(__this->Effects()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[60/*Fuse.Effects.Effect*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum7), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Effects::Effect* e = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum7), ::TYPES[64/*Uno.Collections.IEnumerator<Fuse.Effects.Effect>*/]), &ret41), ret41);
            uPtr(e)->Rooted();
        }

    __this->InvalidateVisualComposition();
    __this->_placedBefore = NULL;
    ::g::Fuse::Node__OnRooted_fn(__this);
}

// protected override void OnUnrooted() :1665
void Element__OnUnrooted_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "OnUnrooted()");
    ::g::Fuse::Effects::Effect* ret42;
    __this->InvalidateVisualComposition();

    if (__this->HasEffects())

        for (uObject* enum8 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(__this->Effects()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[60/*Fuse.Effects.Effect*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum8), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Effects::Effect* e = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum8), ::TYPES[64/*Uno.Collections.IEnumerator<Fuse.Effects.Effect>*/]), &ret42), ret42);
            uPtr(e)->Unrooted();
        }

    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private static void OnVisibilityChanged(Fuse.Elements.Element elm) :1154
void Element__OnVisibilityChanged_fn(Element* elm)
{
    Element::OnVisibilityChanged(elm);
}

// public float get_Opacity() :1769
void Element__get_Opacity_fn(Element* __this, float* __retval)
{
    *__retval = __this->Opacity();
}

// public void set_Opacity(float value) :1770
void Element__set_Opacity_fn(Element* __this, float* value)
{
    __this->Opacity(*value);
}

// public float4 get_Padding() :1183
void Element__get_Padding_fn(Element* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Padding();
}

// public void set_Padding(float4 value) :1184
void Element__set_Padding_fn(Element* __this, ::g::Uno::Float4* value)
{
    __this->Padding(*value);
}

// internal void PerformPlacement(float2 position, float2 size, bool temp) :1539
void Element__PerformPlacement_fn(Element* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* size, bool* temp)
{
    __this->PerformPlacement(*position, *size, *temp);
}

// public generated void add_Placed(Fuse.PlacedHandler value) :1510
void Element__add_Placed_fn(Element* __this, uDelegate* value)
{
    __this->add_Placed(value);
}

// public generated void remove_Placed(Fuse.PlacedHandler value) :1510
void Element__remove_Placed_fn(Element* __this, uDelegate* value)
{
    __this->remove_Placed(value);
}

// protected override void PrependImplicitTransform(Fuse.FastMatrix m) :1887
void Element__PrependImplicitTransform_fn(Element* __this, ::g::Fuse::FastMatrix* m)
{
    uStackFrame __("Fuse.Elements.Element", "PrependImplicitTransform(Fuse.FastMatrix)");
    ::g::Uno::Float2 actualPosition = __this->ActualPosition();

    if ((actualPosition.X != 0.0f) || (actualPosition.Y != 0.0f))
        uPtr(m)->PrependTranslation1(::g::Uno::Float3__New4(::g::Uno::Float2__New2(actualPosition.X, actualPosition.Y), 0.0f));
}

// protected override sealed void PrependInverseTransformOrigin(Fuse.FastMatrix m) :1881
void Element__PrependInverseTransformOrigin_fn(Element* __this, ::g::Fuse::FastMatrix* m)
{
    uStackFrame __("Fuse.Elements.Element", "PrependInverseTransformOrigin(Fuse.FastMatrix)");
    ::g::Uno::Float3 off = ::g::Fuse::Elements::ITransformOrigin::GetOffset(uInterface(uPtr(__this->TransformOrigin()), ::TYPES[118/*Fuse.Elements.ITransformOrigin*/]), __this);
    uPtr(m)->PrependTranslation1(::g::Uno::Float3__op_UnaryNegation(off));
}

// protected override sealed void PrependTransformOrigin(Fuse.FastMatrix m) :1875
void Element__PrependTransformOrigin_fn(Element* __this, ::g::Fuse::FastMatrix* m)
{
    uStackFrame __("Fuse.Elements.Element", "PrependTransformOrigin(Fuse.FastMatrix)");
    ::g::Uno::Float3 off = ::g::Fuse::Elements::ITransformOrigin::GetOffset(uInterface(uPtr(__this->TransformOrigin()), ::TYPES[118/*Fuse.Elements.ITransformOrigin*/]), __this);
    uPtr(m)->PrependTranslation1(off);
}

// public generated void add_Preplacement(Fuse.Elements.PreplacementHandler value) :1512
void Element__add_Preplacement_fn(Element* __this, uDelegate* value)
{
    __this->add_Preplacement(value);
}

// public generated void remove_Preplacement(Fuse.Elements.PreplacementHandler value) :1512
void Element__remove_Preplacement_fn(Element* __this, uDelegate* value)
{
    __this->remove_Preplacement(value);
}

// public generated void add_PropertyChanged(Uno.EventHandler value) :1253
void Element__add_PropertyChanged_fn(Element* __this, uDelegate* value)
{
    __this->add_PropertyChanged(value);
}

// public generated void remove_PropertyChanged(Uno.EventHandler value) :1253
void Element__remove_PropertyChanged_fn(Element* __this, uDelegate* value)
{
    __this->remove_PropertyChanged(value);
}

// public Uno.Rect get_RenderBoundsWithEffects() :549
void Element__get_RenderBoundsWithEffects_fn(Element* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->RenderBoundsWithEffects();
}

// public Uno.Rect get_RenderBoundsWithoutEffects() :569
void Element__get_RenderBoundsWithoutEffects_fn(Element* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->RenderBoundsWithoutEffects();
}

// internal void RequestLayout() :1444
void Element__RequestLayout_fn(Element* __this)
{
    __this->RequestLayout();
}

// private static void SetCachingMode(Fuse.Elements.Element elm, Fuse.Elements.CachingMode value) :661
void Element__SetCachingMode_fn(Element* elm, int* value)
{
    Element::SetCachingMode(elm, *value);
}

// private static void SetClipToBounds(Fuse.Elements.Element elm, bool value) :1244
void Element__SetClipToBounds_fn(Element* elm, bool* value)
{
    Element::SetClipToBounds(elm, *value);
}

// private static void SetHeight(Fuse.Elements.Element elm, Uno.UX.Size val) :1085
void Element__SetHeight_fn(Element* elm, ::g::Uno::UX::Size* val)
{
    Element::SetHeight(elm, *val);
}

// private static void SetTransformOrigin(Fuse.Elements.Element elm, Fuse.Elements.ITransformOrigin value) :1857
void Element__SetTransformOrigin_fn(Element* elm, uObject* value)
{
    Element::SetTransformOrigin(elm, value);
}

// private static void SetVisibility(Fuse.Elements.Element elm, Fuse.Elements.Visibility value) :1151
void Element__SetVisibility_fn(Element* elm, int* value)
{
    Element::SetVisibility(elm, *value);
}

// private static void SetWidth(Fuse.Elements.Element elm, Uno.UX.Size val) :1072
void Element__SetWidth_fn(Element* elm, ::g::Uno::UX::Size* val)
{
    Element::SetWidth(elm, *val);
}

// private static void show(Fuse.Elements.Element e, object[] args) :1701
void Element__show_fn(Element* e, uArray* args)
{
    Element::show(e, args);
}

// public Fuse.Elements.ITransformOrigin get_TransformOrigin() :1850
void Element__get_TransformOrigin_fn(Element* __this, uObject** __retval)
{
    *__retval = __this->TransformOrigin();
}

// public void set_TransformOrigin(Fuse.Elements.ITransformOrigin value) :1851
void Element__set_TransformOrigin_fn(Element* __this, uObject* value)
{
    __this->TransformOrigin(value);
}

// public Fuse.Elements.Visibility get_Visibility() :1146
void Element__get_Visibility_fn(Element* __this, int* __retval)
{
    *__retval = __this->Visibility();
}

// public void set_Visibility(Fuse.Elements.Visibility value) :1147
void Element__set_Visibility_fn(Element* __this, int* value)
{
    __this->Visibility(*value);
}

// public Uno.UX.Size get_Width() :1068
void Element__get_Width_fn(Element* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->Width();
}

// public void set_Width(Uno.UX.Size value) :1069
void Element__set_Width_fn(Element* __this, ::g::Uno::UX::Size* value)
{
    __this->Width(*value);
}

// public Uno.UX.Size get_X() :1205
void Element__get_X_fn(Element* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->X();
}

// public void set_X(Uno.UX.Size value) :1206
void Element__set_X_fn(Element* __this, ::g::Uno::UX::Size* value)
{
    __this->X(*value);
}

// public Uno.UX.Size get_Y() :1216
void Element__get_Y_fn(Element* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->Y();
}

// public void set_Y(Uno.UX.Size value) :1217
void Element__set_Y_fn(Element* __this, ::g::Uno::UX::Size* value)
{
    __this->Y(*value);
}

uSStrong< ::g::Fuse::StyleProperty1*> Element::AlignmentProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Element::AnchorProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Element::AspectConstraintProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Element::AspectProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Element::CachingModeProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Element::ClipToBoundsProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Element::HeightProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Element::HitTestModeProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Element::LimitHeightProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Element::LimitWidthProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Element::MarginProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Element::MaxHeightProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Element::MaxWidthProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Element::MinHeightProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Element::MinWidthProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Element::OffsetProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Element::OpacityProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Element::PaddingProperty_;
uSStrong< ::g::Fuse::Scripting::ScriptClass*> Element::ScriptClass1_;
uSStrong< ::g::Fuse::StyleProperty1*> Element::TransformOriginProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Element::VisibilityProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Element::WidthProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Element::XProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Element::YProperty_;

// protected generated Element() [instance] :100
void Element::ctor_1()
{
    uStackFrame __("Fuse.Elements.Element", ".ctor()");
    _gmsCache = uArray::New(::TYPES[57/*Fuse.Elements.Element.GMSCacheItem[]*/], 2);
    _boxSizing = ::g::Fuse::Elements::StandardBoxSizing::Singleton();
    _transformOrigin = ::g::Fuse::Elements::TransformOrigins::Center();
    _renderBoundsWithoutEffectsDirty = true;
    _renderBoundsWithEffectsDirty = true;
    ctor_();
}

// public float2 get_ActualAnchor() [instance] :1489
::g::Uno::Float2 Element::ActualAnchor()
{
    uStackFrame __("Fuse.Elements.Element", "get_ActualAnchor()");
    return _actualAnchor;
}

// internal void set_ActualAnchor(float2 value) [instance] :1490
void Element::ActualAnchor(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Elements.Element", "set_ActualAnchor(float2)");
    _actualAnchor = value;
}

// public float2 get_ActualPosition() [instance] :1317
::g::Uno::Float2 Element::ActualPosition()
{
    uStackFrame __("Fuse.Elements.Element", "get_ActualPosition()");

    if (_haveActualPositionCache)
        return _actualPositionCache;

    if (!SnapToPixels())
        return _actualPosition;

    ::g::Uno::Float2 parentP = ::g::Uno::Float2__New1(0.0f);

    if (Parent() != NULL)
        parentP = uPtr(Parent())->AbsoluteViewportOrigin();

    ::g::Uno::Float2 p = ::g::Uno::Float2__op_Addition2(parentP, _actualPosition);
    p = Snap(p);
    p = ::g::Uno::Float2__op_Subtraction2(p, parentP);
    _actualPositionCache = p;
    _haveActualPositionCache = true;
    return p;
}

// public float2 get_ActualSize() [instance] :1344
::g::Uno::Float2 Element::ActualSize()
{
    uStackFrame __("Fuse.Elements.Element", "get_ActualSize()");
    return _actualSize;
}

// public void AddStyleEffect(Fuse.Effects.Effect e) [instance] :775
void Element::AddStyleEffect(::g::Fuse::Effects::Effect* e)
{
    uStackFrame __("Fuse.Elements.Element", "AddStyleEffect(Fuse.Effects.Effect)");
    uPtr(e)->AddedByStyle = true;
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Effects()), ::TYPES[61/*Uno.Collections.ICollection<Fuse.Effects.Effect>*/]), e);
}

// public Fuse.Elements.Alignment get_Alignment() [instance] :1134
int Element::Alignment()
{
    uStackFrame __("Fuse.Elements.Element", "get_Alignment()");
    int ret44;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::AlignmentProperty()), this, &ret44), ret44);
}

// public void set_Alignment(Fuse.Elements.Alignment value) [instance] :1135
void Element::Alignment(int value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Alignment(Fuse.Elements.Alignment)");
    bool ret45;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::AlignmentProperty()), this, uCRef<int>(value), &ret45);
}

// private Fuse.Elements.Element get_AncestorElement() [instance] :1748
Element* Element::AncestorElement()
{
    uStackFrame __("Fuse.Elements.Element", "get_AncestorElement()");
    ::g::Fuse::Node* n = Parent();

    while (n != NULL)
    {
        Element* elm = uAs<Element*>(n, Element_typeof());

        if (elm != NULL)
            return elm;

        n = uPtr(n)->Parent();
    }

    return NULL;
}

// public Uno.UX.Size2 get_Anchor() [instance] :1227
::g::Uno::UX::Size2 Element::Anchor()
{
    uStackFrame __("Fuse.Elements.Element", "get_Anchor()");
    ::g::Uno::UX::Size2 ret46;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::AnchorProperty()), this, &ret46), ret46);
}

// public void set_Anchor(Uno.UX.Size2 value) [instance] :1228
void Element::Anchor(::g::Uno::UX::Size2 value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Anchor(Uno.UX.Size2)");
    bool ret47;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::AnchorProperty()), this, uCRef(value), &ret47);
}

// public float get_Aspect() [instance] :107
float Element::Aspect()
{
    uStackFrame __("Fuse.Elements.Element", "get_Aspect()");
    float ret48;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::AspectProperty()), this, &ret48), ret48);
}

// public void set_Aspect(float value) [instance] :108
void Element::Aspect(float value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Aspect(float)");
    bool ret49;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::AspectProperty()), this, uCRef(value), &ret49);
}

// public Fuse.Elements.AspectConstraint get_AspectConstraint() [instance] :117
int Element::AspectConstraint()
{
    uStackFrame __("Fuse.Elements.Element", "get_AspectConstraint()");
    int ret50;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::AspectConstraintProperty()), this, &ret50), ret50);
}

// public void set_AspectConstraint(Fuse.Elements.AspectConstraint value) [instance] :118
void Element::AspectConstraint(int value)
{
    uStackFrame __("Fuse.Elements.Element", "set_AspectConstraint(Fuse.Elements.AspectConstraint)");
    bool ret51;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::AspectConstraintProperty()), this, uCRef<int>(value), &ret51);
}

// public Fuse.Elements.Element.BoxSizingMode get_BoxSizing() [instance] :1419
int Element::BoxSizing()
{
    uStackFrame __("Fuse.Elements.Element", "get_BoxSizing()");
    return _boxSizingMode;
}

// public void set_BoxSizing(Fuse.Elements.Element.BoxSizingMode value) [instance] :1420
void Element::BoxSizing(int value)
{
    uStackFrame __("Fuse.Elements.Element", "set_BoxSizing(Fuse.Elements.Element.BoxSizingMode)");

    if (value == _boxSizingMode)
        return;

    _boxSizingMode = value;

    switch (_boxSizingMode)
    {
        case 0:
        {
            _boxSizing = ::g::Fuse::Elements::StandardBoxSizing::Singleton();
            break;
        }
        case 1:
        {
            _boxSizing = ::g::Fuse::Elements::NoImplicitMaxBoxSizing::Singleton1();
            break;
        }
        case 2:
        {
            _boxSizing = ::g::Fuse::Elements::LimitBoxSizing::Singleton();
            break;
        }
        case 3:
        {
            _boxSizing = ::g::Fuse::Elements::LayoutMasterBoxSizing::Singleton();
            break;
        }
        case 4:
        {
            _boxSizing = ::g::Fuse::Elements::FillAspectBoxSizing::Singleton();
            break;
        }
    }

    InvalidateLayout(2);
}

// internal Fuse.Elements.BoxSizing get_BoxSizingObject() [instance] :1441
::g::Fuse::Elements::BoxSizing* Element::BoxSizingObject()
{
    uStackFrame __("Fuse.Elements.Element", "get_BoxSizingObject()");
    return _boxSizing;
}

// private Fuse.Elements.Cache get_Cache() [instance] :849
::g::Fuse::Elements::Cache* Element::Cache()
{
    uStackFrame __("Fuse.Elements.Element", "get_Cache()");
    ::g::Fuse::Elements::Cache* ind11 = _cache;
    return (ind11 != NULL) ? ind11 : (::g::Fuse::Elements::Cache*)(_cache = ::g::Fuse::Elements::Cache::New1(this));
}

// public Fuse.Elements.CachingMode get_CachingMode() [instance] :657
int Element::CachingMode()
{
    uStackFrame __("Fuse.Elements.Element", "get_CachingMode()");
    return _cachingMode;
}

// public void set_CachingMode(Fuse.Elements.CachingMode value) [instance] :658
void Element::CachingMode(int value)
{
    uStackFrame __("Fuse.Elements.Element", "set_CachingMode(Fuse.Elements.CachingMode)");
    bool ret52;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::CachingModeProperty()), this, uCRef<int>(value), &ret52);
}

// protected Uno.Rect CalcRenderBoundsWithEffects() [instance] :532
::g::Uno::Rect Element::CalcRenderBoundsWithEffects()
{
    uStackFrame __("Fuse.Elements.Element", "CalcRenderBoundsWithEffects()");
    ::g::Fuse::Effects::Effect* ret35;
    ::g::Fuse::Effects::Effect* ret36;
    ::g::Uno::Rect r = RenderBoundsWithoutEffects();

    if (HasActiveEffects())

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Effects()), ::TYPES[61/*Uno.Collections.ICollection<Fuse.Effects.Effect>*/])); i++)
            if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Effects()), ::TYPES[62/*Uno.Collections.IList<Fuse.Effects.Effect>*/]), uCRef<int>(i), &ret35), ret35))->Active())
                r = uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Effects()), ::TYPES[62/*Uno.Collections.IList<Fuse.Effects.Effect>*/]), uCRef<int>(i), &ret36), ret36))->ModifyRenderBounds(r);

    return r;
}

// public framebuffer CaptureRegion(Fuse.DrawContext dc, Uno.Rect region, float2 padding) [instance] :667
::g::Uno::Graphics::Framebuffer* Element::CaptureRegion(::g::Fuse::DrawContext* dc, ::g::Uno::Rect region, ::g::Uno::Float2 padding)
{
    uStackFrame __("Fuse.Elements.Element", "CaptureRegion(Fuse.DrawContext,Uno.Rect,float2)");
    ::g::Fuse::OrthographicFrustum* collection1;
    ::g::Uno::Float2 sz = ::g::Uno::Float2__op_Addition2(region.Size(), ::g::Uno::Float2__op_Multiply1(padding, 2.0f));
    ::g::Uno::Float2 pixelSize = ::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Multiply1(sz, AbsoluteZoom()));
    ::g::Uno::Int2 fsz = ::g::Uno::Int2__New2((int)pixelSize.X, (int)pixelSize.Y);

    if ((fsz.X > ::g::Uno::Graphics::Texture2D::MaxSize()) || (fsz.Y > ::g::Uno::Graphics::Texture2D::MaxSize()))
    {
        ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[6/*"CaptureRegi...*/], uBox(::TYPES[10/*int2*/], fsz)), ::STRINGS[7/*", max-size: "*/]), uBox<int>(::TYPES[0/*int*/], ::g::Uno::Graphics::Texture2D::MaxSize())), 1, ::STRINGS[8/*"/usr/local/...*/], 676);
        return NULL;
    }

    ::g::Uno::Graphics::Framebuffer* fb = ::g::Fuse::FramebufferPool::Lock1(fsz, 3, false);
    collection1 = ::g::Fuse::OrthographicFrustum::New1();
    ::g::Uno::Float2 ind9 = ::g::Uno::Float2__New2(region.Left - padding.X, region.Top - padding.Y);
    uPtr(collection1)->Origin(ind9);
    ;
    uPtr(collection1)->Size(sz);
    sz;
    ::g::Uno::Float4x4 ind10 = WorldTransformInverse();
    uPtr(collection1)->LocalFromWorld(ind10);
    ;
    ::g::Fuse::OrthographicFrustum* cc = collection1;
    uPtr(dc)->PushRenderTargetViewport(fb, (uObject*)cc);
    dc->Clear(::g::Uno::Float4__New1(0.0f), 1.0f);
    LocalDraw(dc);
    dc->PopRenderTargetViewport();
    return fb;
}

// public bool get_ClipToBounds() [instance] :1239
bool Element::ClipToBounds()
{
    uStackFrame __("Fuse.Elements.Element", "get_ClipToBounds()");
    return _clipToBounds;
}

// public void set_ClipToBounds(bool value) [instance] :1240
void Element::ClipToBounds(bool value)
{
    uStackFrame __("Fuse.Elements.Element", "set_ClipToBounds(bool)");
    bool ret53;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::ClipToBoundsProperty()), this, uCRef(value), &ret53);
}

// private void Composit(Fuse.DrawContext dc) [instance] :854
void Element::Composit(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Element", "Composit(Fuse.DrawContext)");

    if (Opacity() <= 0.0f)
        return;

    if (Opacity() >= 1.0f)
    {
        uPtr(Cache())->DrawHeuristically(dc);
        return;
    }

    if (FastTrackDrawWithOpacity(dc))
        return;

    uPtr(Cache())->DrawCached(dc);
}

// internal void CompositEffects(Fuse.DrawContext dc) [instance] :878
void Element::CompositEffects(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Element", "CompositEffects(Fuse.DrawContext)");
    ::g::Fuse::Effects::Effect* ret37;
    ::g::Fuse::Effects::Effect* ret38;
    ::g::Fuse::Effects::Effect* ret39;
    bool hasActiveEffects = HasActiveEffects() && true;

    if (hasActiveEffects)

        for (uObject* enum3 = (uObject*)uPtr(_effects)->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum3), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Effects::Effect* e = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum3), ::TYPES[64/*Uno.Collections.IEnumerator<Fuse.Effects.Effect>*/]), &ret37), ret37);

            if ((uPtr(e)->Type() == 0) && uPtr(e)->Active())
            {
                double t;
                uPtr(e)->Render(dc);
            }
        }

    if (hasActiveEffects && HasCompositionEffect())

        for (uObject* enum4 = (uObject*)uPtr(_effects)->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum4), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Effects::Effect* e1 = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum4), ::TYPES[64/*Uno.Collections.IEnumerator<Fuse.Effects.Effect>*/]), &ret38), ret38);

            if ((uPtr(e1)->Type() == 1) && uPtr(e1)->Active())
            {
                double t1;
                uPtr(e1)->Render(dc);
            }
        }
    else
        LocalDraw(dc);

    if (hasActiveEffects)

        for (uObject* enum5 = (uObject*)uPtr(_effects)->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum5), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Effects::Effect* e2 = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum5), ::TYPES[64/*Uno.Collections.IEnumerator<Fuse.Effects.Effect>*/]), &ret39), ret39);

            if ((uPtr(e2)->Type() == 2) && uPtr(e2)->Active())
            {
                double t2;
                uPtr(e2)->Render(dc);
            }
        }
}

// private void DispatchPlacement() [instance] :1592
void Element::DispatchPlacement()
{
    uStackFrame __("Fuse.Elements.Element", "DispatchPlacement()");
    _pendingDispatchPlacement = false;

    if (::g::Uno::Delegate::op_Inequality(Placed1, NULL))
    {
        ::g::Fuse::PlacedArgs* args = ::g::Fuse::PlacedArgs::New2(_placedBefore != NULL, _ppPrevPosition, ActualPosition(), _ppPrevSize, ActualSize());
        uPtr(Placed1)->Invoke(2, this, args);
    }

    _placedBefore = Parent();
}

// public Uno.Collections.IList<Fuse.Effects.Effect> get_Effects() [instance] :768
uObject* Element::Effects()
{
    uStackFrame __("Fuse.Elements.Element", "get_Effects()");

    if (_effects == NULL)
        _effects = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[74/*Uno.Collections.ObservableList<Fuse.Effects.Effect>*/], uDelegate::New(::TYPES[71/*Uno.Action<Fuse.Effects.Effect>*/], (void*)Element__OnEffectAdded_fn, this), uDelegate::New(::TYPES[71/*Uno.Action<Fuse.Effects.Effect>*/], (void*)Element__OnEffectRemoved_fn, this)));

    return (uObject*)_effects;
}

// internal generated Fuse.Elements.ElementBatchEntry get_ElementBatchEntry() [instance] :852
::g::Fuse::Elements::ElementBatchEntry* Element::ElementBatchEntry()
{
    uStackFrame __("Fuse.Elements.Element", "get_ElementBatchEntry()");
    return _ElementBatchEntry;
}

// internal generated void set_ElementBatchEntry(Fuse.Elements.ElementBatchEntry value) [instance] :852
void Element::ElementBatchEntry(::g::Fuse::Elements::ElementBatchEntry* value)
{
    uStackFrame __("Fuse.Elements.Element", "set_ElementBatchEntry(Fuse.Elements.ElementBatchEntry)");
    _ElementBatchEntry = value;
}

// protected internal float2 GetArrangePaddingSize(Fuse.LayoutParams lp) [instance] :1481
::g::Uno::Float2 Element::GetArrangePaddingSize(::g::Fuse::LayoutParams lp)
{
    uStackFrame __("Fuse.Elements.Element", "GetArrangePaddingSize(Fuse.LayoutParams)");
    return uPtr(_boxSizing)->CalcArrangePaddingSize(this, lp);
}

// internal Uno.Recti GetViewportInvertPixelRect(Fuse.DrawContext dc, Uno.Rect localRegion) [instance] :595
::g::Uno::Recti Element::GetViewportInvertPixelRect(::g::Fuse::DrawContext* dc, ::g::Uno::Rect localRegion)
{
    uStackFrame __("Fuse.Elements.Element", "GetViewportInvertPixelRect(Fuse.DrawContext,Uno.Rect)");
    ::g::Uno::Float4x4 transformMatrix = uPtr(dc)->GetLocalToClipTransform(this);
    ::g::Uno::Rect esr = ::g::Uno::Rect__Transform(localRegion, transformMatrix);
    ::g::Uno::Float2 low = ::g::Uno::Math::Floor2(::g::Uno::Float2__op_Addition(0.005f, ::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Addition1(::g::Uno::Math::Min3(esr.Minimum(), esr.Maximum()), 1.0f), 2.0f), ::g::Uno::Float2__op_Implicit1(dc->GLViewportPixelSize()))));
    ::g::Uno::Float2 high = ::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Subtraction1(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Addition1(::g::Uno::Math::Max3(esr.Minimum(), esr.Maximum()), 1.0f), 2.0f), ::g::Uno::Float2__op_Implicit1(dc->GLViewportPixelSize())), 0.005f));
    ::g::Uno::Recti r = ::g::Uno::Recti__New1((int)low.X, (int)((float)dc->GLViewportPixelSize().Y - high.Y), (int)high.X, (int)((float)dc->GLViewportPixelSize().Y - low.Y));
    return r;
}

// public Uno.Recti GetVisibleViewportInvertPixelRect(Fuse.DrawContext dc, Uno.Rect localRegion) [instance] :611
::g::Uno::Recti Element::GetVisibleViewportInvertPixelRect(::g::Fuse::DrawContext* dc, ::g::Uno::Rect localRegion)
{
    uStackFrame __("Fuse.Elements.Element", "GetVisibleViewportInvertPixelRect(Fuse.DrawContext,Uno.Rect)");

    if (localRegion.IsInfinite())
        return uPtr(dc)->Scissor();

    ::g::Uno::Recti s = uPtr(dc)->Scissor();
    ::g::Uno::Recti v = GetViewportInvertPixelRect(dc, localRegion);
    ::g::Uno::Recti i = ::g::Uno::Recti__Intersect(s, v);

    if ((i.Size().X < 0) || (i.Size().Y < 0))
        return ::g::Uno::Recti__New1(0, 0, 0, 0);

    return i;
}

// private void GMSReset() [instance] :1400
void Element::GMSReset()
{
    uStackFrame __("Fuse.Elements.Element", "GMSReset()");
    _gmsCount = 0;
    _gmsAt = 0;
}

// public bool get_HasActiveEffects() [instance] :790
bool Element::HasActiveEffects()
{
    uStackFrame __("Fuse.Elements.Element", "get_HasActiveEffects()");
    ::g::Fuse::Effects::Effect* ret54;

    if (HasEffects())

        for (uObject* enum2 = (uObject*)uPtr(_effects)->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Effects::Effect* e = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[64/*Uno.Collections.IEnumerator<Fuse.Effects.Effect>*/]), &ret54), ret54);

            if (uPtr(e)->Active())
                return true;
        }

    return false;
}

// public bool get_HasCompositionEffect() [instance] :810
bool Element::HasCompositionEffect()
{
    uStackFrame __("Fuse.Elements.Element", "get_HasCompositionEffect()");
    return _compositionEffects > 0;
}

// public bool get_HasEffects() [instance] :784
bool Element::HasEffects()
{
    uStackFrame __("Fuse.Elements.Element", "get_HasEffects()");
    return (_effects != NULL) && (uPtr(_effects)->Count() > 0);
}

// public Uno.UX.Size get_Height() [instance] :1081
::g::Uno::UX::Size Element::Height()
{
    uStackFrame __("Fuse.Elements.Element", "get_Height()");
    return _height;
}

// public void set_Height(Uno.UX.Size value) [instance] :1082
void Element::Height(::g::Uno::UX::Size value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Height(Uno.UX.Size)");
    bool ret55;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::HeightProperty()), this, uCRef(value), &ret55);
}

// public Fuse.Elements.HitTestMode get_HitTestMode() [instance] :989
int Element::HitTestMode()
{
    uStackFrame __("Fuse.Elements.Element", "get_HitTestMode()");
    int ret57;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::HitTestModeProperty()), this, &ret57), ret57);
}

// public void set_HitTestMode(Fuse.Elements.HitTestMode value) [instance] :990
void Element::HitTestMode(int value)
{
    uStackFrame __("Fuse.Elements.Element", "set_HitTestMode(Fuse.Elements.HitTestMode)");
    bool ret58;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::HitTestModeProperty()), this, uCRef<int>(value), &ret58);
}

// internal float2 get_IntendedPosition() [instance] :1354
::g::Uno::Float2 Element::IntendedPosition()
{
    uStackFrame __("Fuse.Elements.Element", "get_IntendedPosition()");
    return ActualPosition();
}

// internal float2 get_IntendedSize() [instance] :1349
::g::Uno::Float2 Element::IntendedSize()
{
    uStackFrame __("Fuse.Elements.Element", "get_IntendedSize()");
    return _intendedSize;
}

// internal void InternArrangePaddingBox(Fuse.LayoutParams lp) [instance] :1606
void Element::InternArrangePaddingBox(::g::Fuse::LayoutParams lp)
{
    uStackFrame __("Fuse.Elements.Element", "InternArrangePaddingBox(Fuse.LayoutParams)");
    ArrangePaddingBox(lp);
}

// internal float2 InternGetContentSize(Fuse.LayoutParams lp) [instance] :1471
::g::Uno::Float2 Element::InternGetContentSize(::g::Fuse::LayoutParams lp)
{
    uStackFrame __("Fuse.Elements.Element", "InternGetContentSize(Fuse.LayoutParams)");
    return GetContentSize(lp);
}

// public void InvalidateRenderBoundsWithEffects() [instance] :1983
void Element::InvalidateRenderBoundsWithEffects()
{
    uStackFrame __("Fuse.Elements.Element", "InvalidateRenderBoundsWithEffects()");
    OnInvalidateRenderBoundsWithEffects();

    if (Parent() != NULL)
        uPtr(Parent())->InvalidateRenderBounds();
}

// public void InvalidateVisualComposition() [instance] :1936
void Element::InvalidateVisualComposition()
{
    uStackFrame __("Fuse.Elements.Element", "InvalidateVisualComposition()");

    if (ElementBatchEntry() != NULL)
        uPtr(ElementBatchEntry())->InvalidateVisualComposition();

    ::g::Fuse::Node* p = Parent();

    if (p != NULL)
        uPtr(p)->InvalidateVisual();
    else
        InvalidateVisual();
}

// public bool IsPointInside(float2 localPoint) [instance] :978
bool Element::IsPointInside(::g::Uno::Float2 localPoint)
{
    uStackFrame __("Fuse.Elements.Element", "IsPointInside(float2)");
    return !((((localPoint.X < 0.0f) || (localPoint.Y < 0.0f)) || (localPoint.X > ActualSize().X)) || (localPoint.Y > ActualSize().Y));
}

// public Uno.UX.Size get_LimitHeight() [instance] :2473
::g::Uno::UX::Size Element::LimitHeight()
{
    uStackFrame __("Fuse.Elements.Element", "get_LimitHeight()");
    ::g::Uno::UX::Size ret59;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::LimitHeightProperty()), this, &ret59), ret59);
}

// public void set_LimitHeight(Uno.UX.Size value) [instance] :2474
void Element::LimitHeight(::g::Uno::UX::Size value)
{
    uStackFrame __("Fuse.Elements.Element", "set_LimitHeight(Uno.UX.Size)");
    bool ret60;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::LimitHeightProperty()), this, uCRef(value), &ret60);
}

// public Uno.UX.Size get_LimitWidth() [instance] :2482
::g::Uno::UX::Size Element::LimitWidth()
{
    uStackFrame __("Fuse.Elements.Element", "get_LimitWidth()");
    ::g::Uno::UX::Size ret61;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::LimitWidthProperty()), this, &ret61), ret61);
}

// public void set_LimitWidth(Uno.UX.Size value) [instance] :2483
void Element::LimitWidth(::g::Uno::UX::Size value)
{
    uStackFrame __("Fuse.Elements.Element", "set_LimitWidth(Uno.UX.Size)");
    bool ret62;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::LimitWidthProperty()), this, uCRef(value), &ret62);
}

// internal void LocalDraw(Fuse.DrawContext dc) [instance] :736
void Element::LocalDraw(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Element", "LocalDraw(Fuse.DrawContext)");
    OnDraw(dc);
}

// public float4 get_Margin() [instance] :1172
::g::Uno::Float4 Element::Margin()
{
    uStackFrame __("Fuse.Elements.Element", "get_Margin()");
    ::g::Uno::Float4 ret63;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::MarginProperty()), this, &ret63), ret63);
}

// public void set_Margin(float4 value) [instance] :1173
void Element::Margin(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Margin(float4)");
    bool ret64;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::MarginProperty()), this, uCRef(value), &ret64);
}

// public Uno.UX.Size get_MaxHeight() [instance] :1124
::g::Uno::UX::Size Element::MaxHeight()
{
    uStackFrame __("Fuse.Elements.Element", "get_MaxHeight()");
    ::g::Uno::UX::Size ret65;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::MaxHeightProperty()), this, &ret65), ret65);
}

// public void set_MaxHeight(Uno.UX.Size value) [instance] :1125
void Element::MaxHeight(::g::Uno::UX::Size value)
{
    uStackFrame __("Fuse.Elements.Element", "set_MaxHeight(Uno.UX.Size)");
    bool ret66;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::MaxHeightProperty()), this, uCRef(value), &ret66);
}

// public Uno.UX.Size get_MaxWidth() [instance] :1114
::g::Uno::UX::Size Element::MaxWidth()
{
    uStackFrame __("Fuse.Elements.Element", "get_MaxWidth()");
    ::g::Uno::UX::Size ret67;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::MaxWidthProperty()), this, &ret67), ret67);
}

// public void set_MaxWidth(Uno.UX.Size value) [instance] :1115
void Element::MaxWidth(::g::Uno::UX::Size value)
{
    uStackFrame __("Fuse.Elements.Element", "set_MaxWidth(Uno.UX.Size)");
    bool ret68;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::MaxWidthProperty()), this, uCRef(value), &ret68);
}

// public Uno.UX.Size get_MinHeight() [instance] :1104
::g::Uno::UX::Size Element::MinHeight()
{
    uStackFrame __("Fuse.Elements.Element", "get_MinHeight()");
    ::g::Uno::UX::Size ret69;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::MinHeightProperty()), this, &ret69), ret69);
}

// public void set_MinHeight(Uno.UX.Size value) [instance] :1105
void Element::MinHeight(::g::Uno::UX::Size value)
{
    uStackFrame __("Fuse.Elements.Element", "set_MinHeight(Uno.UX.Size)");
    bool ret70;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::MinHeightProperty()), this, uCRef(value), &ret70);
}

// public Uno.UX.Size get_MinWidth() [instance] :1094
::g::Uno::UX::Size Element::MinWidth()
{
    uStackFrame __("Fuse.Elements.Element", "get_MinWidth()");
    ::g::Uno::UX::Size ret71;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::MinWidthProperty()), this, &ret71), ret71);
}

// public void set_MinWidth(Uno.UX.Size value) [instance] :1095
void Element::MinWidth(::g::Uno::UX::Size value)
{
    uStackFrame __("Fuse.Elements.Element", "set_MinWidth(Uno.UX.Size)");
    bool ret72;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::MinWidthProperty()), this, uCRef(value), &ret72);
}

// private bool get_NeedsClipping() [instance] :563
bool Element::NeedsClipping()
{
    uStackFrame __("Fuse.Elements.Element", "get_NeedsClipping()");
    return ClipToBounds();
}

// private void NotifyPropertyChanged() [instance] :1255
void Element::NotifyPropertyChanged()
{
    uStackFrame __("Fuse.Elements.Element", "NotifyPropertyChanged()");

    if (::g::Uno::Delegate::op_Inequality(PropertyChanged1, NULL))
        uPtr(PropertyChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public Uno.UX.Size2 get_Offset() [instance] :1194
::g::Uno::UX::Size2 Element::Offset()
{
    uStackFrame __("Fuse.Elements.Element", "get_Offset()");
    ::g::Uno::UX::Size2 ret73;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::OffsetProperty()), this, &ret73), ret73);
}

// public void set_Offset(Uno.UX.Size2 value) [instance] :1195
void Element::Offset(::g::Uno::UX::Size2 value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Offset(Uno.UX.Size2)");
    bool ret74;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::OffsetProperty()), this, uCRef(value), &ret74);
}

// private void OnEffectAdded(Fuse.Effects.Effect e) [instance] :813
void Element::OnEffectAdded(::g::Fuse::Effects::Effect* e)
{
    uStackFrame __("Fuse.Elements.Element", "OnEffectAdded(Fuse.Effects.Effect)");

    if (uPtr(e)->Type() == 1)
        _compositionEffects++;

    uPtr(e)->Added(this);
    e->add_RenderingChanged(uDelegate::New(::TYPES[71/*Uno.Action<Fuse.Effects.Effect>*/], (void*)Element__OnEffectRenderingChanged_fn, this));
    e->add_RenderBoundsChanged(uDelegate::New(::TYPES[71/*Uno.Action<Fuse.Effects.Effect>*/], (void*)Element__OnEffectRenderBoundsChanged_fn, this));
    InvalidateVisual();
}

// private void OnEffectRemoved(Fuse.Effects.Effect e) [instance] :824
void Element::OnEffectRemoved(::g::Fuse::Effects::Effect* e)
{
    uStackFrame __("Fuse.Elements.Element", "OnEffectRemoved(Fuse.Effects.Effect)");

    if (uPtr(e)->Type() == 1)
        _compositionEffects--;

    uPtr(e)->Removed(this);
    e->remove_RenderingChanged(uDelegate::New(::TYPES[71/*Uno.Action<Fuse.Effects.Effect>*/], (void*)Element__OnEffectRenderingChanged_fn, this));
    e->remove_RenderBoundsChanged(uDelegate::New(::TYPES[71/*Uno.Action<Fuse.Effects.Effect>*/], (void*)Element__OnEffectRenderBoundsChanged_fn, this));
    InvalidateVisual();
    e->AddedByStyle = false;
}

// private void OnEffectRenderBoundsChanged(Fuse.Effects.Effect e) [instance] :841
void Element::OnEffectRenderBoundsChanged(::g::Fuse::Effects::Effect* e)
{
    uStackFrame __("Fuse.Elements.Element", "OnEffectRenderBoundsChanged(Fuse.Effects.Effect)");
    InvalidateRenderBoundsWithEffects();
}

// private void OnEffectRenderingChanged(Fuse.Effects.Effect e) [instance] :836
void Element::OnEffectRenderingChanged(::g::Fuse::Effects::Effect* e)
{
    uStackFrame __("Fuse.Elements.Element", "OnEffectRenderingChanged(Fuse.Effects.Effect)");
    InvalidateVisual();
}

// private void OnInvalidateRenderBoundsWithEffects() [instance] :1974
void Element::OnInvalidateRenderBoundsWithEffects()
{
    uStackFrame __("Fuse.Elements.Element", "OnInvalidateRenderBoundsWithEffects()");

    if (ElementBatchEntry() != NULL)
        uPtr(ElementBatchEntry())->InvalidateRenderBounds();

    _renderBoundsWithEffectsDirty = true;
}

// internal void OnPreplacement() [instance] :1519
void Element::OnPreplacement()
{
    uStackFrame __("Fuse.Elements.Element", "OnPreplacement()");

    if (::g::Uno::Delegate::op_Inequality(Preplacement1, NULL))
        uPtr(Preplacement1)->Invoke(2, this, (::g::Fuse::Elements::PreplacementArgs*)::g::Fuse::Elements::PreplacementArgs::New2(_placedBefore != NULL));
}

// public float get_Opacity() [instance] :1769
float Element::Opacity()
{
    uStackFrame __("Fuse.Elements.Element", "get_Opacity()");
    float ret75;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::OpacityProperty()), this, &ret75), ret75);
}

// public void set_Opacity(float value) [instance] :1770
void Element::Opacity(float value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Opacity(float)");
    bool ret76;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::OpacityProperty()), this, uCRef(value), &ret76);
}

// public float4 get_Padding() [instance] :1183
::g::Uno::Float4 Element::Padding()
{
    uStackFrame __("Fuse.Elements.Element", "get_Padding()");
    ::g::Uno::Float4 ret77;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::PaddingProperty()), this, &ret77), ret77);
}

// public void set_Padding(float4 value) [instance] :1184
void Element::Padding(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Padding(float4)");
    bool ret78;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::PaddingProperty()), this, uCRef(value), &ret78);
}

// internal void PerformPlacement(float2 position, float2 size, bool temp) [instance] :1539
void Element::PerformPlacement(::g::Uno::Float2 position, ::g::Uno::Float2 size, bool temp)
{
    uStackFrame __("Fuse.Elements.Element", "PerformPlacement(float2,float2,bool)");
    ::g::Uno::Float2 s = ::g::Uno::Math::Max3(size, ::g::Uno::Float2__New1(0.0f));
    _ppPrevSize = _intendedSize;
    _ppPrevPosition = ActualPosition();
    bool newSize = ::g::Uno::Float2__op_Inequality(_ppPrevSize, s) || ::g::Uno::Float2__op_Inequality(_actualSize, s);
    bool newPosition = (_ppPrevPosition.X != position.X) || (_ppPrevPosition.Y != position.Y);
    bool newParent = _placedBefore != Parent();

    if ((newParent || newPosition) || newSize)
    {
        if (!temp && !_pendingDispatchPlacement)
        {
            OnPreplacement();

            if (::g::Uno::Delegate::op_Inequality(Placed1, NULL))
            {
                ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[75/*Uno.Action*/], (void*)Element__DispatchPlacement_fn, this), -1);
                _pendingDispatchPlacement = true;
            }
            else
                _placedBefore = Parent();
        }
    }

    if (newSize)
    {
        _actualSize = s;

        if (!temp)
            _intendedSize = s;

        InvalidateVisual();
    }

    if (newPosition)
    {
        _actualPosition = position;
        _haveActualPositionCache = false;
        InvalidateVisualComposition();
    }

    if ((newParent || newPosition) || newSize)
    {
        InvalidateRenderBounds();
        InvalidateLocalTransform();
    }
}

// public generated void add_Placed(Fuse.PlacedHandler value) [instance] :1510
void Element::add_Placed(uDelegate* value)
{
    uStackFrame __("Fuse.Elements.Element", "add_Placed(Fuse.PlacedHandler)");
    Placed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Placed1, value), ::TYPES[66/*Fuse.PlacedHandler*/]);
}

// public generated void remove_Placed(Fuse.PlacedHandler value) [instance] :1510
void Element::remove_Placed(uDelegate* value)
{
    uStackFrame __("Fuse.Elements.Element", "remove_Placed(Fuse.PlacedHandler)");
    Placed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Placed1, value), ::TYPES[66/*Fuse.PlacedHandler*/]);
}

// public generated void add_Preplacement(Fuse.Elements.PreplacementHandler value) [instance] :1512
void Element::add_Preplacement(uDelegate* value)
{
    uStackFrame __("Fuse.Elements.Element", "add_Preplacement(Fuse.Elements.PreplacementHandler)");
    Preplacement1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Preplacement1, value), ::TYPES[73/*Fuse.Elements.PreplacementHandler*/]);
}

// public generated void remove_Preplacement(Fuse.Elements.PreplacementHandler value) [instance] :1512
void Element::remove_Preplacement(uDelegate* value)
{
    uStackFrame __("Fuse.Elements.Element", "remove_Preplacement(Fuse.Elements.PreplacementHandler)");
    Preplacement1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Preplacement1, value), ::TYPES[73/*Fuse.Elements.PreplacementHandler*/]);
}

// public generated void add_PropertyChanged(Uno.EventHandler value) [instance] :1253
void Element::add_PropertyChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Elements.Element", "add_PropertyChanged(Uno.EventHandler)");
    PropertyChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PropertyChanged1, value), ::TYPES[68/*Uno.EventHandler*/]);
}

// public generated void remove_PropertyChanged(Uno.EventHandler value) [instance] :1253
void Element::remove_PropertyChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Elements.Element", "remove_PropertyChanged(Uno.EventHandler)");
    PropertyChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PropertyChanged1, value), ::TYPES[68/*Uno.EventHandler*/]);
}

// public Uno.Rect get_RenderBoundsWithEffects() [instance] :549
::g::Uno::Rect Element::RenderBoundsWithEffects()
{
    uStackFrame __("Fuse.Elements.Element", "get_RenderBoundsWithEffects()");

    if (_renderBoundsWithEffectsDirty)
    {
        _renderBoundsWithEffects = CalcRenderBoundsWithEffects();
        _renderBoundsWithEffectsDirty = false;
    }

    return _renderBoundsWithEffects;
}

// public Uno.Rect get_RenderBoundsWithoutEffects() [instance] :569
::g::Uno::Rect Element::RenderBoundsWithoutEffects()
{
    uStackFrame __("Fuse.Elements.Element", "get_RenderBoundsWithoutEffects()");

    if (_renderBoundsWithoutEffectsDirty)
    {
        _renderBoundsWithoutEffects = CalcRenderBounds();

        if (ClipToBounds())
            _renderBoundsWithoutEffects = ::g::Uno::Rect__Intersect(_renderBoundsWithoutEffects, ::g::Uno::Rect__New2(::g::Uno::Float2__New1(0.0f), ActualSize()));

        _renderBoundsWithoutEffectsDirty = false;
    }

    return _renderBoundsWithoutEffects;
}

// internal void RequestLayout() [instance] :1444
void Element::RequestLayout()
{
    uStackFrame __("Fuse.Elements.Element", "RequestLayout()");
    uPtr(_boxSizing)->RequestLayout(this);
}

// public Fuse.Elements.ITransformOrigin get_TransformOrigin() [instance] :1850
uObject* Element::TransformOrigin()
{
    uStackFrame __("Fuse.Elements.Element", "get_TransformOrigin()");
    return _transformOrigin;
}

// public void set_TransformOrigin(Fuse.Elements.ITransformOrigin value) [instance] :1851
void Element::TransformOrigin(uObject* value)
{
    uStackFrame __("Fuse.Elements.Element", "set_TransformOrigin(Fuse.Elements.ITransformOrigin)");
    bool ret79;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::TransformOriginProperty()), this, value, &ret79);
}

// public Fuse.Elements.Visibility get_Visibility() [instance] :1146
int Element::Visibility()
{
    uStackFrame __("Fuse.Elements.Element", "get_Visibility()");
    return _visibility;
}

// public void set_Visibility(Fuse.Elements.Visibility value) [instance] :1147
void Element::Visibility(int value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Visibility(Fuse.Elements.Visibility)");
    bool ret80;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::VisibilityProperty()), this, uCRef<int>(value), &ret80);
}

// public Uno.UX.Size get_Width() [instance] :1068
::g::Uno::UX::Size Element::Width()
{
    uStackFrame __("Fuse.Elements.Element", "get_Width()");
    return _width;
}

// public void set_Width(Uno.UX.Size value) [instance] :1069
void Element::Width(::g::Uno::UX::Size value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Width(Uno.UX.Size)");
    bool ret81;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::WidthProperty()), this, uCRef(value), &ret81);
}

// public Uno.UX.Size get_X() [instance] :1205
::g::Uno::UX::Size Element::X()
{
    uStackFrame __("Fuse.Elements.Element", "get_X()");
    ::g::Uno::UX::Size ret82;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::XProperty()), this, &ret82), ret82);
}

// public void set_X(Uno.UX.Size value) [instance] :1206
void Element::X(::g::Uno::UX::Size value)
{
    uStackFrame __("Fuse.Elements.Element", "set_X(Uno.UX.Size)");
    bool ret83;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::XProperty()), this, uCRef(value), &ret83);
}

// public Uno.UX.Size get_Y() [instance] :1216
::g::Uno::UX::Size Element::Y()
{
    uStackFrame __("Fuse.Elements.Element", "get_Y()");
    ::g::Uno::UX::Size ret84;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Element::YProperty()), this, &ret84), ret84);
}

// public void set_Y(Uno.UX.Size value) [instance] :1217
void Element::Y(::g::Uno::UX::Size value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Y(Uno.UX.Size)");
    bool ret85;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Element::YProperty()), this, uCRef(value), &ret85);
}

// private static void collapse(Fuse.Elements.Element e, object[] args) [static] :1705
void Element::collapse(Element* e, uArray* args)
{
    uStackFrame __("Fuse.Elements.Element", "collapse(Fuse.Elements.Element,object[])");
    Element_typeof()->Init();
    uPtr(e)->Visibility(1);
}

// private static Fuse.Elements.CachingMode GetCachingMode(Fuse.Elements.Element elm) [static] :660
int Element::GetCachingMode(Element* elm)
{
    uStackFrame __("Fuse.Elements.Element", "GetCachingMode(Fuse.Elements.Element)");
    Element_typeof()->Init();
    return uPtr(elm)->_cachingMode;
}

// private static bool GetClipToBounds(Fuse.Elements.Element elm) [static] :1243
bool Element::GetClipToBounds(Element* elm)
{
    uStackFrame __("Fuse.Elements.Element", "GetClipToBounds(Fuse.Elements.Element)");
    Element_typeof()->Init();
    return uPtr(elm)->_clipToBounds;
}

// private static Uno.UX.Size GetHeight(Fuse.Elements.Element elm) [static] :1084
::g::Uno::UX::Size Element::GetHeight(Element* elm)
{
    uStackFrame __("Fuse.Elements.Element", "GetHeight(Fuse.Elements.Element)");
    Element_typeof()->Init();
    return uPtr(elm)->_height;
}

// private static Fuse.Elements.ITransformOrigin GetTransformOrigin(Fuse.Elements.Element elm) [static] :1853
uObject* Element::GetTransformOrigin(Element* elm)
{
    uStackFrame __("Fuse.Elements.Element", "GetTransformOrigin(Fuse.Elements.Element)");
    Element_typeof()->Init();
    return uPtr(elm)->_transformOrigin;
}

// private static Fuse.Elements.Visibility GetVisibility(Fuse.Elements.Element elm) [static] :1150
int Element::GetVisibility(Element* elm)
{
    uStackFrame __("Fuse.Elements.Element", "GetVisibility(Fuse.Elements.Element)");
    Element_typeof()->Init();
    return uPtr(elm)->_visibility;
}

// private static Uno.UX.Size GetWidth(Fuse.Elements.Element elm) [static] :1071
::g::Uno::UX::Size Element::GetWidth(Element* elm)
{
    uStackFrame __("Fuse.Elements.Element", "GetWidth(Fuse.Elements.Element)");
    Element_typeof()->Init();
    return uPtr(elm)->_width;
}

// private static void hide(Fuse.Elements.Element e, object[] args) [static] :1709
void Element::hide(Element* e, uArray* args)
{
    uStackFrame __("Fuse.Elements.Element", "hide(Fuse.Elements.Element,object[])");
    Element_typeof()->Init();
    uPtr(e)->Visibility(2);
}

// private static void InvalidateLocalTransform(Fuse.Elements.Element elm) [static] :1861
void Element::InvalidateLocalTransform1(Element* elm)
{
    uStackFrame __("Fuse.Elements.Element", "InvalidateLocalTransform(Fuse.Elements.Element)");
    Element_typeof()->Init();
    uPtr(elm)->InvalidateLocalTransform();
}

// private static void OnCachingModeChanged(Fuse.Elements.Element elm) [static] :662
void Element::OnCachingModeChanged(Element* elm)
{
    uStackFrame __("Fuse.Elements.Element", "OnCachingModeChanged(Fuse.Elements.Element)");
    Element_typeof()->Init();
    uPtr(elm)->InvalidateVisual();
}

// private static void OnClipToBoundsChanged(Fuse.Elements.Element elm) [static] :1246
void Element::OnClipToBoundsChanged(Element* elm)
{
    uStackFrame __("Fuse.Elements.Element", "OnClipToBoundsChanged(Fuse.Elements.Element)");
    Element_typeof()->Init();
    uPtr(elm)->InvalidateVisual();
    elm->InvalidateHitTestBounds();
    elm->NotifyPropertyChanged();
}

// private static void OnOpacityChanged(Fuse.Elements.Element elm) [static] :1772
void Element::OnOpacityChanged(Element* elm)
{
    uStackFrame __("Fuse.Elements.Element", "OnOpacityChanged(Fuse.Elements.Element)");
    Element_typeof()->Init();
    uPtr(elm)->InvalidateVisualComposition();
    elm->NotifyPropertyChanged();
}

// private static void OnVisibilityChanged(Fuse.Elements.Element elm) [static] :1154
void Element::OnVisibilityChanged(Element* elm)
{
    uStackFrame __("Fuse.Elements.Element", "OnVisibilityChanged(Fuse.Elements.Element)");
    Element_typeof()->Init();
    uPtr(elm)->OnLocalVisibleChanged();

    if ((elm->_oldVisibility == 1) || (elm->Visibility() == 1))
        elm->InvalidateLayout(2);

    elm->_oldVisibility = elm->Visibility();
    elm->InvalidateVisualComposition();
}

// private static void SetCachingMode(Fuse.Elements.Element elm, Fuse.Elements.CachingMode value) [static] :661
void Element::SetCachingMode(Element* elm, int value)
{
    uStackFrame __("Fuse.Elements.Element", "SetCachingMode(Fuse.Elements.Element,Fuse.Elements.CachingMode)");
    Element_typeof()->Init();
    uPtr(elm)->_cachingMode = value;
}

// private static void SetClipToBounds(Fuse.Elements.Element elm, bool value) [static] :1244
void Element::SetClipToBounds(Element* elm, bool value)
{
    uStackFrame __("Fuse.Elements.Element", "SetClipToBounds(Fuse.Elements.Element,bool)");
    Element_typeof()->Init();
    uPtr(elm)->_clipToBounds = value;
}

// private static void SetHeight(Fuse.Elements.Element elm, Uno.UX.Size val) [static] :1085
void Element::SetHeight(Element* elm, ::g::Uno::UX::Size val)
{
    uStackFrame __("Fuse.Elements.Element", "SetHeight(Fuse.Elements.Element,Uno.UX.Size)");
    Element_typeof()->Init();
    uPtr(elm)->_height = val;
}

// private static void SetTransformOrigin(Fuse.Elements.Element elm, Fuse.Elements.ITransformOrigin value) [static] :1857
void Element::SetTransformOrigin(Element* elm, uObject* value)
{
    uStackFrame __("Fuse.Elements.Element", "SetTransformOrigin(Fuse.Elements.Element,Fuse.Elements.ITransformOrigin)");
    Element_typeof()->Init();
    uPtr(elm)->_transformOrigin = value;
}

// private static void SetVisibility(Fuse.Elements.Element elm, Fuse.Elements.Visibility value) [static] :1151
void Element::SetVisibility(Element* elm, int value)
{
    uStackFrame __("Fuse.Elements.Element", "SetVisibility(Fuse.Elements.Element,Fuse.Elements.Visibility)");
    Element_typeof()->Init();
    uPtr(elm)->_visibility = value;
}

// private static void SetWidth(Fuse.Elements.Element elm, Uno.UX.Size val) [static] :1072
void Element::SetWidth(Element* elm, ::g::Uno::UX::Size val)
{
    uStackFrame __("Fuse.Elements.Element", "SetWidth(Fuse.Elements.Element,Uno.UX.Size)");
    Element_typeof()->Init();
    uPtr(elm)->_width = val;
}

// private static void show(Fuse.Elements.Element e, object[] args) [static] :1701
void Element::show(Element* e, uArray* args)
{
    uStackFrame __("Fuse.Elements.Element", "show(Fuse.Elements.Element,object[])");
    Element_typeof()->Init();
    uPtr(e)->Visibility(0);
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/Caching/$.uno#3
// -------------------------------------------------------------------

// internal sealed class ElementAtlas :633
// {
uType* ElementAtlas_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ElementAtlas);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.ElementAtlas", options);
    type->fp_ctor_ = (void*)ElementAtlas__New1_fn;
    ::STRINGS[11] = uString::Const("element not already inserted anywhere!");
    ::STRINGS[12] = uString::Const("wrong atlas again, dummy!");
    ::STRINGS[13] = uString::Const("Removing from wrong atlas");
    ::TYPES[81] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::Element_typeof());
    ::TYPES[82] = ::g::Fuse::Elements::ElementAtlasFramebuffer_typeof();
    ::TYPES[68] = ::g::Uno::EventHandler_typeof();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[8] = ::g::Uno::Recti_typeof();
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[83] = ::g::Fuse::Elements::ElementBatchEntry_typeof();
    ::TYPES[13] = ::g::Fuse::DrawContext_typeof();
    ::TYPES[84] = ::g::Fuse::Elements::TextureAtlas_typeof();
    ::TYPES[85] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Elements::Element_typeof());
    ::TYPES[6] = ::g::Fuse::Node_typeof();
    ::TYPES[63] = ::g::Uno::Float2_typeof();
    ::TYPES[19] = ::g::Fuse::OrthographicFrustum_typeof();
    ::TYPES[24] = ::g::Fuse::IViewport_typeof();
    ::TYPES[20] = ::g::Fuse::IFrustum_typeof();
    ::TYPES[9] = ::g::Uno::Rect_typeof();
    ::TYPES[7] = ::g::Uno::Float_typeof();
    ::TYPES[10] = ::g::Uno::Int2_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::Element_typeof()), offsetof(::g::Fuse::Elements::ElementAtlas, _elements), 0,
        ::g::Fuse::Elements::ElementAtlasFramebuffer_typeof(), offsetof(::g::Fuse::Elements::ElementAtlas, _framebuffer), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Elements::ElementAtlas, _invalidElements), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Elements::ElementAtlas, _spilledPixels), 0,
        ::g::Fuse::Elements::TextureAtlas_typeof(), offsetof(::g::Fuse::Elements::ElementAtlas, _textureAtlas), 0);
    return type;
}

// public ElementAtlas() :645
void ElementAtlas__ctor__fn(ElementAtlas* __this)
{
    __this->ctor_();
}

// public bool AddElement(Fuse.Elements.Element elm) :676
void ElementAtlas__AddElement_fn(ElementAtlas* __this, ::g::Fuse::Elements::Element* elm, bool* __retval)
{
    *__retval = __this->AddElement(elm);
}

// public void Dispose() :652
void ElementAtlas__Dispose_fn(ElementAtlas* __this)
{
    __this->Dispose();
}

// private void FillFramebuffer(Fuse.DrawContext dc, bool drawAll, Uno.Rect scissorRectInClipSpace) :792
void ElementAtlas__FillFramebuffer_fn(ElementAtlas* __this, ::g::Fuse::DrawContext* dc, bool* drawAll, ::g::Uno::Rect* scissorRectInClipSpace)
{
    __this->FillFramebuffer(dc, *drawAll, *scissorRectInClipSpace);
}

// public static Uno.Rect GetScissorRectInClipSpace(Fuse.DrawContext dc) :760
void ElementAtlas__GetScissorRectInClipSpace_fn(::g::Fuse::DrawContext* dc, ::g::Uno::Rect* __retval)
{
    *__retval = ElementAtlas::GetScissorRectInClipSpace(dc);
}

// internal void InvalidateElement(Fuse.Elements.Element elm) :663
void ElementAtlas__InvalidateElement_fn(ElementAtlas* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->InvalidateElement(elm);
}

// public ElementAtlas New() :645
void ElementAtlas__New1_fn(ElementAtlas** __retval)
{
    *__retval = ElementAtlas::New1();
}

// private void OnFramebufferCollected(object sender, Uno.EventArgs eventArgs) :657
void ElementAtlas__OnFramebufferCollected_fn(ElementAtlas* __this, uObject* sender, ::g::Uno::EventArgs* eventArgs)
{
    __this->OnFramebufferCollected(sender, eventArgs);
}

// public framebuffer PinAndValidateFramebuffer(Fuse.DrawContext dc) :765
void ElementAtlas__PinAndValidateFramebuffer_fn(ElementAtlas* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->PinAndValidateFramebuffer(dc);
}

// public bool ReinsertElement(Fuse.Elements.Element elm) :718
void ElementAtlas__ReinsertElement_fn(ElementAtlas* __this, ::g::Fuse::Elements::Element* elm, bool* __retval)
{
    *__retval = __this->ReinsertElement(elm);
}

// public void RemoveElement(Fuse.Elements.Element elm) :700
void ElementAtlas__RemoveElement_fn(ElementAtlas* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->RemoveElement(elm);
}

// public float get_SpilledRatio() :641
void ElementAtlas__get_SpilledRatio_fn(ElementAtlas* __this, float* __retval)
{
    *__retval = __this->SpilledRatio();
}

// public void Unpin() :787
void ElementAtlas__Unpin_fn(ElementAtlas* __this)
{
    __this->Unpin();
}

// private static float2 WindowCoordToClipSpace(float2 input, int2 viewportSize) :746
void ElementAtlas__WindowCoordToClipSpace_fn(::g::Uno::Float2* input, ::g::Uno::Int2* viewportSize, ::g::Uno::Float2* __retval)
{
    *__retval = ElementAtlas::WindowCoordToClipSpace(*input, *viewportSize);
}

// private static Uno.Rect WindowRectToClipSpace(Uno.Rect input, int2 viewportSize) :751
void ElementAtlas__WindowRectToClipSpace_fn(::g::Uno::Rect* input, ::g::Uno::Int2* viewportSize, ::g::Uno::Rect* __retval)
{
    *__retval = ElementAtlas::WindowRectToClipSpace(*input, *viewportSize);
}

// public ElementAtlas() [instance] :645
void ElementAtlas::ctor_()
{
    uStackFrame __("Fuse.Elements.ElementAtlas", ".ctor()");
    _elements = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[81/*Uno.Collections.List<Fuse.Elements.Element>*/]));
    _framebuffer = ::g::Fuse::Elements::ElementAtlasFramebuffer::New1();
    uPtr(_framebuffer)->add_FramebufferCollected(uDelegate::New(::TYPES[68/*Uno.EventHandler*/], (void*)ElementAtlas__OnFramebufferCollected_fn, this));
    _textureAtlas = ::g::Fuse::Elements::TextureAtlas::New1(::g::Fuse::Elements::ElementAtlasFramebuffer::Size());
}

// public bool AddElement(Fuse.Elements.Element elm) [instance] :676
bool ElementAtlas::AddElement(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "AddElement(Fuse.Elements.Element)");
    ::g::Uno::Recti cacheRect;

    if (!::g::Fuse::Elements::Cache::GetCachingRect1(elm, &cacheRect))
        return false;

    ::g::Uno::Recti rect;

    if (!uPtr(_textureAtlas)->AddRect(cacheRect.Size(), &rect))
        return false;

    if (uPtr(elm)->ElementBatchEntry() == NULL)
        uPtr(elm)->ElementBatchEntry(::g::Fuse::Elements::ElementBatchEntry::New1(elm));

    ::g::Fuse::Elements::ElementBatchEntry* entry = elm->ElementBatchEntry();

    if (uPtr(entry)->_atlas != NULL)
        uPtr(uPtr(entry)->_atlas)->RemoveElement(elm);

    entry->_atlas = this;
    entry->_rect = rect;
    ::g::Uno::Collections::List__Add_fn(uPtr(_elements), elm);
    _invalidElements++;
    entry->IsValid = false;
    return true;
}

// public void Dispose() [instance] :652
void ElementAtlas::Dispose()
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "Dispose()");
    uPtr(_framebuffer)->Dispose();
}

// private void FillFramebuffer(Fuse.DrawContext dc, bool drawAll, Uno.Rect scissorRectInClipSpace) [instance] :792
void ElementAtlas::FillFramebuffer(::g::Fuse::DrawContext* dc, bool drawAll, ::g::Uno::Rect scissorRectInClipSpace)
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "FillFramebuffer(Fuse.DrawContext,bool,Uno.Rect)");
    ::g::Fuse::OrthographicFrustum* collection3;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::Element*> > ret7;
    float density = uPtr(dc)->ViewportPixelsPerPoint();
    ::g::Uno::Float2 viewport = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(uPtr(_textureAtlas)->Size()), density);

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::Element*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret7), ret7); enum2.MoveNext(::TYPES[85/*Uno.Collections.List<Fuse.Elements.Element>.Enumerator*/]); )
    {
        ::g::Fuse::Elements::Element* elm = enum2.Current(::TYPES[85/*Uno.Collections.List<Fuse.Elements.Element>.Enumerator*/]);
        ::g::Fuse::Elements::ElementBatchEntry* entry = uPtr(elm)->ElementBatchEntry();

        if (!uPtr(entry)->IsValid || drawAll)
        {
            ::g::Uno::Float4x4 localToClipTransform = uPtr(dc)->GetLocalToClipTransform(elm);
            ::g::Uno::Rect visibleRect = ::g::Uno::Rect__Transform(uPtr(elm)->RenderBoundsWithEffects(), localToClipTransform);

            if (!scissorRectInClipSpace.Intersects(visibleRect))
                continue;

            ::g::Uno::Recti cachingRect = ::g::Fuse::Elements::ElementBatch::GetCachingRect(elm);
            ::g::Uno::Float2 offset = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(::g::Uno::Int2__op_Subtraction1(uPtr(entry)->_rect.Minimum(), cachingRect.Minimum())), density);
            ::g::Uno::Float4x4 translation = ::g::Uno::Matrix::Translation(offset.X, offset.Y, 0.0f);
            collection3 = ::g::Fuse::OrthographicFrustum::New1();
            ::g::Uno::Float2 ind4 = ::g::Uno::Float2__New2(0.0f, 0.0f);
            uPtr(collection3)->Origin(ind4);
            ;
            uPtr(collection3)->Size(viewport);
            viewport;
            ::g::Uno::Float4x4 ind5 = ::g::Uno::Matrix::Mul8(elm->WorldTransformInverse(), translation);
            uPtr(collection3)->LocalFromWorld(ind5);
            ;
            ::g::Fuse::OrthographicFrustum* cc = collection3;
            dc->PushViewport((uObject*)::g::Fuse::FixedViewport::New1(uPtr(_textureAtlas)->Size(), density, (uObject*)cc));
            dc->PushScissor(entry->_rect);

            if (!drawAll)
                dc->Clear(::g::Uno::Float4__New1(0.0f), 1.0f);

            elm->CompositEffects(dc);
            dc->PopScissor();
            dc->PopViewport();

            if (!entry->IsValid)
                _invalidElements--;

            entry->IsValid = true;
        }
    }
}

// internal void InvalidateElement(Fuse.Elements.Element elm) [instance] :663
void ElementAtlas::InvalidateElement(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "InvalidateElement(Fuse.Elements.Element)");
    ::g::Fuse::Elements::ElementBatchEntry* entry = uPtr(elm)->ElementBatchEntry();

    if (entry == NULL)
        return;

    if (uPtr(entry)->IsValid)
    {
        _invalidElements++;
        uPtr(entry)->IsValid = false;
    }
}

// private void OnFramebufferCollected(object sender, Uno.EventArgs eventArgs) [instance] :657
void ElementAtlas::OnFramebufferCollected(uObject* sender, ::g::Uno::EventArgs* eventArgs)
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "OnFramebufferCollected(object,Uno.EventArgs)");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::Element*> > ret8;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::Element*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret8), ret8); enum1.MoveNext(::TYPES[85/*Uno.Collections.List<Fuse.Elements.Element>.Enumerator*/]); )
    {
        ::g::Fuse::Elements::Element* elm = enum1.Current(::TYPES[85/*Uno.Collections.List<Fuse.Elements.Element>.Enumerator*/]);
        InvalidateElement(elm);
    }
}

// public framebuffer PinAndValidateFramebuffer(Fuse.DrawContext dc) [instance] :765
::g::Uno::Graphics::Framebuffer* ElementAtlas::PinAndValidateFramebuffer(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "PinAndValidateFramebuffer(Fuse.DrawContext)");
    ::g::Uno::Graphics::Framebuffer* fb = uPtr(_framebuffer)->Pin();

    if (_invalidElements > 0)
    {
        ::g::Uno::Rect scissorRectInClipSpace = ElementAtlas::GetScissorRectInClipSpace(dc);
        uPtr(dc)->PushRenderTarget(fb);
        bool drawAll = _invalidElements == uPtr(_elements)->Count();

        if (drawAll)
        {
            uPtr(dc)->Clear(::g::Uno::Float4__New1(0.0f), 1.0f);
            FillFramebuffer(dc, true, scissorRectInClipSpace);
        }
        else
            FillFramebuffer(dc, false, scissorRectInClipSpace);

        dc->PopRenderTarget();
    }

    return fb;
}

// public bool ReinsertElement(Fuse.Elements.Element elm) [instance] :718
bool ElementAtlas::ReinsertElement(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "ReinsertElement(Fuse.Elements.Element)");

    if (uPtr(elm)->ElementBatchEntry() == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[11/*"element not...*/]));

    ::g::Fuse::Elements::ElementBatchEntry* entry = uPtr(elm)->ElementBatchEntry();

    if (uPtr(entry)->_atlas != this)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[12/*"wrong atlas...*/]));

    ::g::Uno::Recti cacheRect;

    if (!::g::Fuse::Elements::Cache::GetCachingRect1(elm, &cacheRect))
        return false;

    ::g::Uno::Recti rect;

    if (!uPtr(_textureAtlas)->AddRect(cacheRect.Size(), &rect))
        return false;

    _spilledPixels = (_spilledPixels + uPtr(entry)->_rect.Area());
    entry->_rect = rect;

    if (entry->IsValid)
    {
        _invalidElements++;
        uPtr(entry)->IsValid = false;
    }

    return true;
}

// public void RemoveElement(Fuse.Elements.Element elm) [instance] :700
void ElementAtlas::RemoveElement(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "RemoveElement(Fuse.Elements.Element)");
    bool ret9;
    ::g::Fuse::Elements::ElementBatchEntry* entry = uPtr(elm)->ElementBatchEntry();

    if (uPtr(entry)->_atlas != this)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[13/*"Removing fr...*/]));

    _spilledPixels = (_spilledPixels + uPtr(entry)->_rect.Area());

    if (!entry->IsValid)
        _invalidElements--;

    ::g::Uno::Collections::List__Remove_fn(uPtr(_elements), elm, &ret9);
    entry->_atlas = NULL;
}

// public float get_SpilledRatio() [instance] :641
float ElementAtlas::SpilledRatio()
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "get_SpilledRatio()");
    return (float)_spilledPixels / (float)(uPtr(_textureAtlas)->Size().X * uPtr(_textureAtlas)->Size().Y);
}

// public void Unpin() [instance] :787
void ElementAtlas::Unpin()
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "Unpin()");
    uPtr(_framebuffer)->Unpin();
}

// public static Uno.Rect GetScissorRectInClipSpace(Fuse.DrawContext dc) [static] :760
::g::Uno::Rect ElementAtlas::GetScissorRectInClipSpace(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "GetScissorRectInClipSpace(Fuse.DrawContext)");
    return ElementAtlas::WindowRectToClipSpace(::g::Uno::Rect__op_Implicit(uPtr(dc)->Scissor()), uPtr(dc)->GLViewportPixelSize());
}

// public ElementAtlas New() [static] :645
ElementAtlas* ElementAtlas::New1()
{
    ElementAtlas* obj6 = (ElementAtlas*)uNew(ElementAtlas_typeof());
    obj6->ctor_();
    return obj6;
}

// private static float2 WindowCoordToClipSpace(float2 input, int2 viewportSize) [static] :746
::g::Uno::Float2 ElementAtlas::WindowCoordToClipSpace(::g::Uno::Float2 input, ::g::Uno::Int2 viewportSize)
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "WindowCoordToClipSpace(float2,int2)");
    return ::g::Uno::Float2__op_Subtraction1(::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Division2(input, ::g::Uno::Float2__op_Implicit1(viewportSize)), 2.0f), 1.0f);
}

// private static Uno.Rect WindowRectToClipSpace(Uno.Rect input, int2 viewportSize) [static] :751
::g::Uno::Rect ElementAtlas::WindowRectToClipSpace(::g::Uno::Rect input, ::g::Uno::Int2 viewportSize)
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "WindowRectToClipSpace(Uno.Rect,int2)");
    ::g::Uno::Float2 leftTop = ElementAtlas::WindowCoordToClipSpace(input.LeftTop(), viewportSize);
    ::g::Uno::Float2 rightBottom = ElementAtlas::WindowCoordToClipSpace(input.RightBottom(), viewportSize);
    return ::g::Uno::Rect__ContainingPoints(::g::Uno::Float2__New2(leftTop.X, -leftTop.Y), ::g::Uno::Float2__New2(rightBottom.X, -rightBottom.Y));
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/Caching/$.uno#2
// -------------------------------------------------------------------

// internal sealed class ElementAtlasFramebuffer :345
// {
uType* ElementAtlasFramebuffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ElementAtlasFramebuffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.ElementAtlasFramebuffer", options);
    type->fp_ctor_ = (void*)ElementAtlasFramebuffer__New1_fn;
    ::STRINGS[14] = uString::Const("Cannot Collect while pinned!");
    ::STRINGS[15] = uString::Const("ElementAtlasFramebuffer already pinned");
    ::STRINGS[16] = uString::Const("ElementAtlasFramebuffer not already pinned");
    ::TYPES[65] = ::g::Uno::Delegate_typeof();
    ::TYPES[68] = ::g::Uno::EventHandler_typeof();
    ::TYPES[15] = uObject_typeof();
    ::TYPES[86] = ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry_typeof();
    ::TYPES[87] = ::g::Uno::Collections::LinkedListNode_typeof()->MakeType(::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry_typeof());
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[88] = ::g::Fuse::Elements::ElementAtlasFramebufferPool_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::LinkedListNode_typeof()->MakeType(::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry_typeof()), offsetof(::g::Fuse::Elements::ElementAtlasFramebuffer, _fb), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::ElementAtlasFramebuffer, _Pinned), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Elements::ElementAtlasFramebuffer, FramebufferCollected1), 0);
    return type;
}

// public generated ElementAtlasFramebuffer() :345
void ElementAtlasFramebuffer__ctor__fn(ElementAtlasFramebuffer* __this)
{
    __this->ctor_();
}

// internal void Collect() :388
void ElementAtlasFramebuffer__Collect_fn(ElementAtlasFramebuffer* __this)
{
    __this->Collect();
}

// public void Dispose() :350
void ElementAtlasFramebuffer__Dispose_fn(ElementAtlasFramebuffer* __this)
{
    __this->Dispose();
}

// internal generated void add_FramebufferCollected(Uno.EventHandler value) :386
void ElementAtlasFramebuffer__add_FramebufferCollected_fn(ElementAtlasFramebuffer* __this, uDelegate* value)
{
    __this->add_FramebufferCollected(value);
}

// internal generated void remove_FramebufferCollected(Uno.EventHandler value) :386
void ElementAtlasFramebuffer__remove_FramebufferCollected_fn(ElementAtlasFramebuffer* __this, uDelegate* value)
{
    __this->remove_FramebufferCollected(value);
}

// public generated ElementAtlasFramebuffer New() :345
void ElementAtlasFramebuffer__New1_fn(ElementAtlasFramebuffer** __retval)
{
    *__retval = ElementAtlasFramebuffer::New1();
}

// internal framebuffer Pin() :356
void ElementAtlasFramebuffer__Pin_fn(ElementAtlasFramebuffer* __this, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->Pin();
}

// internal generated bool get_Pinned() :348
void ElementAtlasFramebuffer__get_Pinned_fn(ElementAtlasFramebuffer* __this, bool* __retval)
{
    *__retval = __this->Pinned();
}

// private generated void set_Pinned(bool value) :348
void ElementAtlasFramebuffer__set_Pinned_fn(ElementAtlasFramebuffer* __this, bool* value)
{
    __this->Pinned(*value);
}

// public static int2 get_Size() :400
void ElementAtlasFramebuffer__get_Size_fn(::g::Uno::Int2* __retval)
{
    *__retval = ElementAtlasFramebuffer::Size();
}

// internal void Unpin() :378
void ElementAtlasFramebuffer__Unpin_fn(ElementAtlasFramebuffer* __this)
{
    __this->Unpin();
}

// public generated ElementAtlasFramebuffer() [instance] :345
void ElementAtlasFramebuffer::ctor_()
{
}

// internal void Collect() [instance] :388
void ElementAtlasFramebuffer::Collect()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebuffer", "Collect()");
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret2;

    if (Pinned())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[14/*"Cannot Coll...*/]));

    if (::g::Uno::Delegate::op_Inequality(FramebufferCollected1, NULL))
        uPtr(FramebufferCollected1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::New1());

    uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(_fb), &ret2), ret2))->Owner = NULL;
    _fb = NULL;
}

// public void Dispose() [instance] :350
void ElementAtlasFramebuffer::Dispose()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebuffer", "Dispose()");

    if (_fb != NULL)
        Collect();
}

// internal generated void add_FramebufferCollected(Uno.EventHandler value) [instance] :386
void ElementAtlasFramebuffer::add_FramebufferCollected(uDelegate* value)
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebuffer", "add_FramebufferCollected(Uno.EventHandler)");
    FramebufferCollected1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(FramebufferCollected1, value), ::TYPES[68/*Uno.EventHandler*/]);
}

// internal generated void remove_FramebufferCollected(Uno.EventHandler value) [instance] :386
void ElementAtlasFramebuffer::remove_FramebufferCollected(uDelegate* value)
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebuffer", "remove_FramebufferCollected(Uno.EventHandler)");
    FramebufferCollected1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(FramebufferCollected1, value), ::TYPES[68/*Uno.EventHandler*/]);
}

// internal framebuffer Pin() [instance] :356
::g::Uno::Graphics::Framebuffer* ElementAtlasFramebuffer::Pin()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebuffer", "Pin()");
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret3;
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret4;
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret5;
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret6;
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret7;

    if (Pinned())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[15/*"ElementAtla...*/]));

    Pinned(true);

    if (_fb == NULL)
    {
        ::g::Uno::Collections::LinkedListNode* fb = ::g::Fuse::Elements::ElementAtlasFramebufferPool::FindFramebuffer();

        if (uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(fb), &ret3), ret3))->Owner != NULL)
            uPtr(uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(fb), &ret4), ret4))->Owner)->Collect();

        uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(fb, &ret5), ret5))->Owner = this;
        _fb = fb;
    }
    else
        uPtr(uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(_fb), &ret6), ret6))->Pool)->UpdateUsage(_fb);

    return uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(_fb), &ret7), ret7))->Framebuffer;
}

// internal generated bool get_Pinned() [instance] :348
bool ElementAtlasFramebuffer::Pinned()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebuffer", "get_Pinned()");
    return _Pinned;
}

// private generated void set_Pinned(bool value) [instance] :348
void ElementAtlasFramebuffer::Pinned(bool value)
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebuffer", "set_Pinned(bool)");
    _Pinned = value;
}

// internal void Unpin() [instance] :378
void ElementAtlasFramebuffer::Unpin()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebuffer", "Unpin()");

    if (!Pinned())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[16/*"ElementAtla...*/]));

    Pinned(false);
}

// public generated ElementAtlasFramebuffer New() [static] :345
ElementAtlasFramebuffer* ElementAtlasFramebuffer::New1()
{
    ElementAtlasFramebuffer* obj1 = (ElementAtlasFramebuffer*)uNew(ElementAtlasFramebuffer_typeof());
    obj1->ctor_();
    return obj1;
}

// public static int2 get_Size() [static] :400
::g::Uno::Int2 ElementAtlasFramebuffer::Size()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebuffer", "get_Size()");
    return ::g::Fuse::Elements::ElementAtlasFramebufferPool::ElementAtlasSize();
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/Caching/$.uno#2
// -------------------------------------------------------------------

// internal static class ElementAtlasFramebufferPool :444
// {
uClassType* ElementAtlasFramebufferPool_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Elements.ElementAtlasFramebufferPool", options);
    ::TYPES[28] = ::g::Uno::Platform2::Display_typeof();
    ::TYPES[68] = ::g::Uno::EventHandler_typeof();
    ::TYPES[89] = ::g::Fuse::Elements::DisplayHelpers_typeof();
    ::TYPES[10] = ::g::Uno::Int2_typeof();
    ::TYPES[21] = ::g::Uno::Graphics::Texture2D_typeof();
    ::TYPES[65] = ::g::Uno::Delegate_typeof();
    type->SetFields(0,
        ::g::Uno::Int2_typeof(), (uintptr_t)&::g::Fuse::Elements::ElementAtlasFramebufferPool::_elementAtlasSize_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Elements::ElementAtlasFramebufferPool::_isInitialized_, uFieldFlagsStatic,
        ::g::Fuse::Elements::ElementAtlasFramebufferPoolImpl_typeof(), (uintptr_t)&::g::Fuse::Elements::ElementAtlasFramebufferPool::_poolImpl_, uFieldFlagsStatic,
        ::g::Uno::EventHandler_typeof(), (uintptr_t)&::g::Fuse::Elements::ElementAtlasFramebufferPool::AtlasSizeChanged1_, uFieldFlagsStatic);
    return type;
}

// public static generated void add_AtlasSizeChanged(Uno.EventHandler value) :462
void ElementAtlasFramebufferPool__add_AtlasSizeChanged_fn(uDelegate* value)
{
    ElementAtlasFramebufferPool::add_AtlasSizeChanged(value);
}

// public static generated void remove_AtlasSizeChanged(Uno.EventHandler value) :462
void ElementAtlasFramebufferPool__remove_AtlasSizeChanged_fn(uDelegate* value)
{
    ElementAtlasFramebufferPool::remove_AtlasSizeChanged(value);
}

// public static int2 get_ElementAtlasSize() :479
void ElementAtlasFramebufferPool__get_ElementAtlasSize_fn(::g::Uno::Int2* __retval)
{
    *__retval = ElementAtlasFramebufferPool::ElementAtlasSize();
}

// private static void set_ElementAtlasSize(int2 value) :484
void ElementAtlasFramebufferPool__set_ElementAtlasSize_fn(::g::Uno::Int2* value)
{
    ElementAtlasFramebufferPool::ElementAtlasSize(*value);
}

// private static void EnsurePool() :498
void ElementAtlasFramebufferPool__EnsurePool_fn()
{
    ElementAtlasFramebufferPool::EnsurePool();
}

// public static Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry> FindFramebuffer() :509
void ElementAtlasFramebufferPool__FindFramebuffer_fn(::g::Uno::Collections::LinkedListNode** __retval)
{
    *__retval = ElementAtlasFramebufferPool::FindFramebuffer();
}

// public static void Initialize() :447
void ElementAtlasFramebufferPool__Initialize_fn()
{
    ElementAtlasFramebufferPool::Initialize();
}

// private static void OnResized(object sender, Uno.EventArgs args) :472
void ElementAtlasFramebufferPool__OnResized_fn(uObject* sender, ::g::Uno::EventArgs* args)
{
    ElementAtlasFramebufferPool::OnResized(sender, args);
}

// private static void UpdateElementAtlasSize() :464
void ElementAtlasFramebufferPool__UpdateElementAtlasSize_fn()
{
    ElementAtlasFramebufferPool::UpdateElementAtlasSize();
}

::g::Uno::Int2 ElementAtlasFramebufferPool::_elementAtlasSize_;
bool ElementAtlasFramebufferPool::_isInitialized_;
uSStrong< ::g::Fuse::Elements::ElementAtlasFramebufferPoolImpl*> ElementAtlasFramebufferPool::_poolImpl_;
uSStrong<uDelegate*> ElementAtlasFramebufferPool::AtlasSizeChanged1_;

// private static void EnsurePool() [static] :498
void ElementAtlasFramebufferPool::EnsurePool()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPool", "EnsurePool()");

    if (ElementAtlasFramebufferPool::_poolImpl() != NULL)
        return;

    ElementAtlasFramebufferPool::Initialize();
    ElementAtlasFramebufferPool::_poolImpl() = ::g::Fuse::Elements::ElementAtlasFramebufferPoolImpl::New1();
}

// public static Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry> FindFramebuffer() [static] :509
::g::Uno::Collections::LinkedListNode* ElementAtlasFramebufferPool::FindFramebuffer()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPool", "FindFramebuffer()");
    ElementAtlasFramebufferPool::EnsurePool();
    return uPtr(ElementAtlasFramebufferPool::_poolImpl())->FindFramebuffer();
}

// public static void Initialize() [static] :447
void ElementAtlasFramebufferPool::Initialize()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPool", "Initialize()");

    if (ElementAtlasFramebufferPool::_isInitialized())
        return;

    ElementAtlasFramebufferPool::UpdateElementAtlasSize();
    uPtr(::g::Uno::Platform2::Display::MainDisplay())->add_FrameChanged(uDelegate::New(::TYPES[68/*Uno.EventHandler*/], (void*)ElementAtlasFramebufferPool__OnResized_fn));
    ElementAtlasFramebufferPool::_isInitialized() = true;
}

// private static void OnResized(object sender, Uno.EventArgs args) [static] :472
void ElementAtlasFramebufferPool::OnResized(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPool", "OnResized(object,Uno.EventArgs)");
    ElementAtlasFramebufferPool::UpdateElementAtlasSize();
}

// private static void UpdateElementAtlasSize() [static] :464
void ElementAtlasFramebufferPool::UpdateElementAtlasSize()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPool", "UpdateElementAtlasSize()");
    ::g::Uno::Int2 clientSize = ::g::Fuse::Elements::DisplayHelpers::DisplaySizeHint();
    ElementAtlasFramebufferPool::ElementAtlasSize(::g::Uno::Int2__New2(::g::Uno::Math::Min8((clientSize.X * 3) / 2, ::g::Uno::Graphics::Texture2D::MaxSize()), ::g::Uno::Math::Min8(clientSize.Y / 2, ::g::Uno::Graphics::Texture2D::MaxSize())));
}

// public static int2 get_ElementAtlasSize() [static] :479
::g::Uno::Int2 ElementAtlasFramebufferPool::ElementAtlasSize()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPool", "get_ElementAtlasSize()");
    ElementAtlasFramebufferPool::Initialize();
    return ElementAtlasFramebufferPool::_elementAtlasSize();
}

// private static void set_ElementAtlasSize(int2 value) [static] :484
void ElementAtlasFramebufferPool::ElementAtlasSize(::g::Uno::Int2 value)
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPool", "set_ElementAtlasSize(int2)");

    if (::g::Uno::Int2__op_Inequality(ElementAtlasFramebufferPool::_elementAtlasSize(), value))
    {
        ElementAtlasFramebufferPool::_elementAtlasSize() = value;

        if (::g::Uno::Delegate::op_Inequality(ElementAtlasFramebufferPool::AtlasSizeChanged1(), NULL))
            uPtr(ElementAtlasFramebufferPool::AtlasSizeChanged1())->Invoke(2, NULL, (::g::Uno::EventArgs*)::g::Uno::EventArgs::New1());
    }
}

// public static generated void add_AtlasSizeChanged(Uno.EventHandler value) [static] :462
void ElementAtlasFramebufferPool::add_AtlasSizeChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPool", "add_AtlasSizeChanged(Uno.EventHandler)");
    ElementAtlasFramebufferPool::AtlasSizeChanged1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ElementAtlasFramebufferPool::AtlasSizeChanged1(), value), ::TYPES[68/*Uno.EventHandler*/]);
}

// public static generated void remove_AtlasSizeChanged(Uno.EventHandler value) [static] :462
void ElementAtlasFramebufferPool::remove_AtlasSizeChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPool", "remove_AtlasSizeChanged(Uno.EventHandler)");
    ElementAtlasFramebufferPool::AtlasSizeChanged1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ElementAtlasFramebufferPool::AtlasSizeChanged1(), value), ::TYPES[68/*Uno.EventHandler*/]);
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/Caching/$.uno#2
// -------------------------------------------------------------------

// internal sealed class ElementAtlasFramebufferPoolEntry :403
// {
uType* ElementAtlasFramebufferPoolEntry_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ElementAtlasFramebufferPoolEntry);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.ElementAtlasFramebufferPoolEntry", options);
    type->fp_ctor_ = (void*)ElementAtlasFramebufferPoolEntry__New1_fn;
    type->SetFields(0,
        ::g::Uno::Graphics::Framebuffer_typeof(), offsetof(::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry, Framebuffer), 0,
        ::g::Fuse::Elements::ElementAtlasFramebuffer_typeof(), offsetof(::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry, Owner), 0,
        ::g::Fuse::Elements::ElementAtlasFramebufferPoolImpl_typeof(), offsetof(::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry, Pool), 0);
    return type;
}

// public generated ElementAtlasFramebufferPoolEntry() :403
void ElementAtlasFramebufferPoolEntry__ctor__fn(ElementAtlasFramebufferPoolEntry* __this)
{
    __this->ctor_();
}

// public void Collect() :409
void ElementAtlasFramebufferPoolEntry__Collect_fn(ElementAtlasFramebufferPoolEntry* __this)
{
    __this->Collect();
}

// public void Dispose() :415
void ElementAtlasFramebufferPoolEntry__Dispose_fn(ElementAtlasFramebufferPoolEntry* __this)
{
    __this->Dispose();
}

// public generated ElementAtlasFramebufferPoolEntry New() :403
void ElementAtlasFramebufferPoolEntry__New1_fn(ElementAtlasFramebufferPoolEntry** __retval)
{
    *__retval = ElementAtlasFramebufferPoolEntry::New1();
}

// public generated ElementAtlasFramebufferPoolEntry() [instance] :403
void ElementAtlasFramebufferPoolEntry::ctor_()
{
}

// public void Collect() [instance] :409
void ElementAtlasFramebufferPoolEntry::Collect()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPoolEntry", "Collect()");

    if (Owner != NULL)
        uPtr(Owner)->Collect();
}

// public void Dispose() [instance] :415
void ElementAtlasFramebufferPoolEntry::Dispose()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPoolEntry", "Dispose()");

    if (Framebuffer != NULL)
    {
        uPtr(Framebuffer)->Dispose();
        Framebuffer = NULL;
    }
}

// public generated ElementAtlasFramebufferPoolEntry New() [static] :403
ElementAtlasFramebufferPoolEntry* ElementAtlasFramebufferPoolEntry::New1()
{
    ElementAtlasFramebufferPoolEntry* obj1 = (ElementAtlasFramebufferPoolEntry*)uNew(ElementAtlasFramebufferPoolEntry_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/Caching/$.uno#2
// -------------------------------------------------------------------

// internal sealed class ElementAtlasFramebufferPoolImpl :516
// {
ElementAtlasFramebufferPoolImpl_type* ElementAtlasFramebufferPoolImpl_typeof()
{
    static uSStrong<ElementAtlasFramebufferPoolImpl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ElementAtlasFramebufferPoolImpl);
    options.TypeSize = sizeof(ElementAtlasFramebufferPoolImpl_type);
    type = (ElementAtlasFramebufferPoolImpl_type*)uClassType::New("Fuse.Elements.ElementAtlasFramebufferPoolImpl", options);
    type->fp_ctor_ = (void*)ElementAtlasFramebufferPoolImpl__New1_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))ElementAtlasFramebufferPoolImpl__FuseResourcesISoftDisposableSoftDispose_fn;
    ::TYPES[90] = ::g::Fuse::Resources::ISoftDisposable_typeof();
    ::TYPES[88] = ::g::Fuse::Elements::ElementAtlasFramebufferPool_typeof();
    ::TYPES[68] = ::g::Uno::EventHandler_typeof();
    ::TYPES[86] = ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry_typeof();
    ::TYPES[91] = ::g::Uno::Collections::LinkedList_typeof()->MakeType(::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry_typeof());
    ::TYPES[87] = ::g::Uno::Collections::LinkedListNode_typeof()->MakeType(::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry_typeof());
    ::TYPES[82] = ::g::Fuse::Elements::ElementAtlasFramebuffer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Resources::ISoftDisposable_typeof(), offsetof(ElementAtlasFramebufferPoolImpl_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::LinkedList_typeof()->MakeType(::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry_typeof()), offsetof(::g::Fuse::Elements::ElementAtlasFramebufferPoolImpl, _framebufferPool), 0);
    return type;
}

// internal ElementAtlasFramebufferPoolImpl() :520
void ElementAtlasFramebufferPoolImpl__ctor__fn(ElementAtlasFramebufferPoolImpl* __this)
{
    __this->ctor_();
}

// private Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry> AddEntry() :592
void ElementAtlasFramebufferPoolImpl__AddEntry_fn(ElementAtlasFramebufferPoolImpl* __this, ::g::Uno::Collections::LinkedListNode** __retval)
{
    *__retval = __this->AddEntry();
}

// private extern void DiscardPool() :551
void ElementAtlasFramebufferPoolImpl__DiscardPool_fn(ElementAtlasFramebufferPoolImpl* __this)
{
    __this->DiscardPool();
}

// private void EnsurePool() :582
void ElementAtlasFramebufferPoolImpl__EnsurePool_fn(ElementAtlasFramebufferPoolImpl* __this)
{
    __this->EnsurePool();
}

// internal Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry> FindFramebuffer() :600
void ElementAtlasFramebufferPoolImpl__FindFramebuffer_fn(ElementAtlasFramebufferPoolImpl* __this, ::g::Uno::Collections::LinkedListNode** __retval)
{
    *__retval = __this->FindFramebuffer();
}

// private void Fuse.Resources.ISoftDisposable.SoftDispose() :577
void ElementAtlasFramebufferPoolImpl__FuseResourcesISoftDisposableSoftDispose_fn(ElementAtlasFramebufferPoolImpl* __this)
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPoolImpl", "Fuse.Resources.ISoftDisposable.SoftDispose()");
    __this->DiscardPool();
}

// internal ElementAtlasFramebufferPoolImpl New() :520
void ElementAtlasFramebufferPoolImpl__New1_fn(ElementAtlasFramebufferPoolImpl** __retval)
{
    *__retval = ElementAtlasFramebufferPoolImpl::New1();
}

// private void OnAtlasSizeChanged(object sender, Uno.EventArgs eventArgs) :572
void ElementAtlasFramebufferPoolImpl__OnAtlasSizeChanged_fn(ElementAtlasFramebufferPoolImpl* __this, uObject* sender, ::g::Uno::EventArgs* eventArgs)
{
    __this->OnAtlasSizeChanged(sender, eventArgs);
}

// internal void UpdateUsage(Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry> fb) :616
void ElementAtlasFramebufferPoolImpl__UpdateUsage_fn(ElementAtlasFramebufferPoolImpl* __this, ::g::Uno::Collections::LinkedListNode* fb)
{
    __this->UpdateUsage(fb);
}

// internal ElementAtlasFramebufferPoolImpl() [instance] :520
void ElementAtlasFramebufferPoolImpl::ctor_()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPoolImpl", ".ctor()");
    ::g::Fuse::Resources::DisposalManager::Add1((uObject*)this);
    ::g::Fuse::Elements::ElementAtlasFramebufferPool::add_AtlasSizeChanged(uDelegate::New(::TYPES[68/*Uno.EventHandler*/], (void*)ElementAtlasFramebufferPoolImpl__OnAtlasSizeChanged_fn, this));
}

// private Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry> AddEntry() [instance] :592
::g::Uno::Collections::LinkedListNode* ElementAtlasFramebufferPoolImpl::AddEntry()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPoolImpl", "AddEntry()");
    ::g::Uno::Collections::LinkedListNode* ret2;
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* entry = ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry::New1();
    entry->Pool = this;
    entry->Framebuffer = ::g::Uno::Graphics::Framebuffer::New1(::g::Fuse::Elements::ElementAtlasFramebufferPool::ElementAtlasSize(), 3, 0);
    return (::g::Uno::Collections::LinkedList__AddLast_fn(uPtr(_framebufferPool), entry, &ret2), ret2);
}

// private extern void DiscardPool() [instance] :551
void ElementAtlasFramebufferPoolImpl::DiscardPool()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPoolImpl", "DiscardPool()");
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret3;
    ::g::Uno::Collections::LinkedList* pool = _framebufferPool;

    if (pool == NULL)
        return;

    ::g::Uno::Collections::LinkedListNode* curr = (::g::Uno::Collections::LinkedListNode*)uPtr(pool)->First();

    while (curr != NULL)
    {
        ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* fb = (::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(curr), &ret3), ret3);
        uPtr(fb)->Collect();
        fb->Dispose();
        curr = (::g::Uno::Collections::LinkedListNode*)uPtr(curr)->Next();
    }

    pool->Clear();
    _framebufferPool = NULL;
}

// private void EnsurePool() [instance] :582
void ElementAtlasFramebufferPoolImpl::EnsurePool()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPoolImpl", "EnsurePool()");

    if (_framebufferPool != NULL)
        return;

    _framebufferPool = ((::g::Uno::Collections::LinkedList*)::g::Uno::Collections::LinkedList::New1(::TYPES[91/*Uno.Collections.LinkedList<Fuse.Elements.ElementAtlasFramebufferPoolEntry>*/]));

    for (int i = 0; i < 20; ++i)
        AddEntry();
}

// internal Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry> FindFramebuffer() [instance] :600
::g::Uno::Collections::LinkedListNode* ElementAtlasFramebufferPoolImpl::FindFramebuffer()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPoolImpl", "FindFramebuffer()");
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret4;
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret5;
    EnsurePool();
    ::g::Uno::Collections::LinkedListNode* fb = (::g::Uno::Collections::LinkedListNode*)uPtr(_framebufferPool)->Last();

    while ((fb != NULL) && ((uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(fb), &ret4), ret4))->Owner != NULL) && uPtr(uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(fb), &ret5), ret5))->Owner)->Pinned()))
        fb = (::g::Uno::Collections::LinkedListNode*)uPtr(fb)->Previous();

    if (fb == NULL)
        fb = AddEntry();

    UpdateUsage(fb);
    return fb;
}

// private void OnAtlasSizeChanged(object sender, Uno.EventArgs eventArgs) [instance] :572
void ElementAtlasFramebufferPoolImpl::OnAtlasSizeChanged(uObject* sender, ::g::Uno::EventArgs* eventArgs)
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPoolImpl", "OnAtlasSizeChanged(object,Uno.EventArgs)");
    DiscardPool();
}

// internal void UpdateUsage(Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry> fb) [instance] :616
void ElementAtlasFramebufferPoolImpl::UpdateUsage(::g::Uno::Collections::LinkedListNode* fb)
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPoolImpl", "UpdateUsage(Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry>)");
    uPtr(_framebufferPool)->Remove1(fb);
    uPtr(_framebufferPool)->AddFirst1(fb);
}

// internal ElementAtlasFramebufferPoolImpl New() [static] :520
ElementAtlasFramebufferPoolImpl* ElementAtlasFramebufferPoolImpl::New1()
{
    ElementAtlasFramebufferPoolImpl* obj1 = (ElementAtlasFramebufferPoolImpl*)uNew(ElementAtlasFramebufferPoolImpl_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/Caching/$.uno#5
// -------------------------------------------------------------------

// internal sealed class ElementBatch :1233
// {
ElementBatch_type* ElementBatch_typeof()
{
    static uSStrong<ElementBatch_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ElementBatch);
    options.TypeSize = sizeof(ElementBatch_type);
    type = (ElementBatch_type*)uClassType::New("Fuse.Elements.ElementBatch", options);
    type->interface0.fp_Draw = (void(*)(uObject*, ::g::Fuse::DrawContext*, ::g::Uno::Float4x4*, ::g::Uno::Rect*))ElementBatch__Draw_fn;
    ::STRINGS[17] = uString::Const("wrong atlas, stupid!");
    ::STRINGS[18] = uString::Const("element has no caching rect");
    ::STRINGS[19] = uString::Const("wrong batch, stupid!");
    ::TYPES[92] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::ElementBatchEntry_typeof());
    ::TYPES[93] = ::g::Uno::Graphics::VertexAttributeInfo_typeof();
    ::TYPES[83] = ::g::Fuse::Elements::ElementBatchEntry_typeof();
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[9] = ::g::Uno::Rect_typeof();
    ::TYPES[10] = ::g::Uno::Int2_typeof();
    ::TYPES[94] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Elements::ElementBatchEntry_typeof());
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[27] = ::g::Uno::Graphics::Framebuffer_typeof();
    ::TYPES[6] = ::g::Fuse::Node_typeof();
    ::TYPES[23] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[13] = ::g::Fuse::DrawContext_typeof();
    ::TYPES[95] = ::g::Uno::UShort_typeof();
    ::TYPES[96] = ::g::Uno::Float4x4_typeof();
    ::TYPES[97] = ::g::Uno::Float4_typeof();
    ::TYPES[8] = ::g::Uno::Recti_typeof();
    ::TYPES[63] = ::g::Uno::Float2_typeof();
    ::TYPES[84] = ::g::Fuse::Elements::TextureAtlas_typeof();
    ::TYPES[98] = ::g::Fuse::Elements::ElementAtlas_typeof();
    ::TYPES[26] = ::g::FuseElements_bundle_typeof();
    type->SetInterfaces(
        ::g::Fuse::Elements::IElementBatchDrawable_typeof(), offsetof(ElementBatch_type, interface0));
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _draw_3bd224e1), 0,
        ::g::Fuse::Elements::ElementAtlas_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _elementAtlas), 0,
        ::g::Fuse::Elements::ElementBatcher_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _elementBatcher), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::ElementBatchEntry_typeof()), offsetof(::g::Fuse::Elements::ElementBatch, _elements), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _indexBuffer), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _indexBufferValid), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _positionInfo), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _prevElementCount), 0,
        ::g::Uno::Rect_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _renderBounds), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _renderBoundsValid), 0,
        ::g::Uno::Buffer_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _tempBuffer), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _texCoordInfo), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _vertexPositionBufferValid), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::ElementBatch, _vertexTexCoordBufferValid), 0);
    return type;
}

// public ElementBatch(Fuse.Elements.ElementBatcher elementBatcher, Fuse.Elements.ElementAtlas elementAtlas) :1244
void ElementBatch__ctor__fn(ElementBatch* __this, ::g::Fuse::Elements::ElementBatcher* elementBatcher, ::g::Fuse::Elements::ElementAtlas* elementAtlas)
{
    __this->ctor_(elementBatcher, elementAtlas);
}

// public void AddElement(Fuse.Elements.Element elm) :1325
void ElementBatch__AddElement_fn(ElementBatch* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->AddElement(elm);
}

// private Uno.Rect CalcRenderBounds() :1301
void ElementBatch__CalcRenderBounds_fn(ElementBatch* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->CalcRenderBounds();
}

// internal static Uno.Recti ConservativelySnapToCoveringIntegers(Uno.Rect r) :1277
void ElementBatch__ConservativelySnapToCoveringIntegers_fn(::g::Uno::Rect* r, ::g::Uno::Recti* __retval)
{
    *__retval = ElementBatch::ConservativelySnapToCoveringIntegers(*r);
}

// public void Dispose() :1262
void ElementBatch__Dispose_fn(ElementBatch* __this)
{
    __this->Dispose();
}

// public void Draw(Fuse.DrawContext dc, float4x4 localToClipTransform, Uno.Rect scissorRectInClipSpace) :1372
void ElementBatch__Draw_fn(ElementBatch* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Rect* scissorRectInClipSpace)
{
    __this->Draw(dc, *localToClipTransform, *scissorRectInClipSpace);
}

// private void FillIndexBuffer() :1437
void ElementBatch__FillIndexBuffer_fn(ElementBatch* __this)
{
    __this->FillIndexBuffer();
}

// private void FillVertexPositionBuffer(Fuse.DrawContext dc) :1476
void ElementBatch__FillVertexPositionBuffer_fn(ElementBatch* __this, ::g::Fuse::DrawContext* dc)
{
    __this->FillVertexPositionBuffer(dc);
}

// private void FillVertexTexCoordBuffer() :1456
void ElementBatch__FillVertexTexCoordBuffer_fn(ElementBatch* __this)
{
    __this->FillVertexTexCoordBuffer();
}

// public static Uno.Recti GetCachingRect(Fuse.Elements.Element elm) :1291
void ElementBatch__GetCachingRect_fn(::g::Fuse::Elements::Element* elm, ::g::Uno::Recti* __retval)
{
    *__retval = ElementBatch::GetCachingRect(elm);
}

// private generated void init_DrawCalls() :1233
void ElementBatch__init_DrawCalls_fn(ElementBatch* __this)
{
    __this->init_DrawCalls();
}

// internal void InvalidateOpacity(Fuse.Elements.Element elm) :1365
void ElementBatch__InvalidateOpacity_fn(ElementBatch* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->InvalidateOpacity(elm);
}

// public void InvalidateRenderBounds(Fuse.Elements.Element elm) :1352
void ElementBatch__InvalidateRenderBounds_fn(ElementBatch* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->InvalidateRenderBounds(elm);
}

// internal void InvalidateTransform(Fuse.Elements.Element elm) :1359
void ElementBatch__InvalidateTransform_fn(ElementBatch* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->InvalidateTransform(elm);
}

// public bool IsFull() :1432
void ElementBatch__IsFull_fn(ElementBatch* __this, bool* __retval)
{
    *__retval = __this->IsFull();
}

// public ElementBatch New(Fuse.Elements.ElementBatcher elementBatcher, Fuse.Elements.ElementAtlas elementAtlas) :1244
void ElementBatch__New1_fn(::g::Fuse::Elements::ElementBatcher* elementBatcher, ::g::Fuse::Elements::ElementAtlas* elementAtlas, ElementBatch** __retval)
{
    *__retval = ElementBatch::New1(elementBatcher, elementAtlas);
}

// public void RemoveElement(Fuse.Elements.Element elm) :1339
void ElementBatch__RemoveElement_fn(ElementBatch* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->RemoveElement(elm);
}

// public Uno.Rect get_RenderBounds() :1313
void ElementBatch__get_RenderBounds_fn(ElementBatch* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->RenderBounds();
}

// public ElementBatch(Fuse.Elements.ElementBatcher elementBatcher, Fuse.Elements.ElementAtlas elementAtlas) [instance] :1244
void ElementBatch::ctor_(::g::Fuse::Elements::ElementBatcher* elementBatcher, ::g::Fuse::Elements::ElementAtlas* elementAtlas)
{
    uStackFrame __("Fuse.Elements.ElementBatch", ".ctor(Fuse.Elements.ElementBatcher,Fuse.Elements.ElementAtlas)");
    _elements = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[92/*Uno.Collections.List<Fuse.Elements.ElementBatchEntry>*/]));
    _elementBatcher = elementBatcher;
    _elementAtlas = elementAtlas;
    _positionInfo = uDefault< ::g::Uno::Graphics::VertexAttributeInfo>();
    _positionInfo.BufferOffset = 0;
    _positionInfo.BufferStride = 12;
    _positionInfo.Type = 3;
    _positionInfo.Buffer = ::g::Uno::Graphics::VertexBuffer::New3(1);
    _texCoordInfo = uDefault< ::g::Uno::Graphics::VertexAttributeInfo>();
    _texCoordInfo.BufferOffset = 0;
    _texCoordInfo.BufferStride = 8;
    _texCoordInfo.Type = 2;
    _texCoordInfo.Buffer = ::g::Uno::Graphics::VertexBuffer::New3(0);
    init_DrawCalls();
}

// public void AddElement(Fuse.Elements.Element elm) [instance] :1325
void ElementBatch::AddElement(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.ElementBatch", "AddElement(Fuse.Elements.Element)");

    if (uPtr(uPtr(elm)->ElementBatchEntry())->_atlas != _elementAtlas)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[17/*"wrong atlas...*/]));

    ::g::Fuse::Elements::ElementBatchEntry* entry = uPtr(elm)->ElementBatchEntry();
    uPtr(entry)->_batch = this;
    ::g::Uno::Collections::List__Add_fn(uPtr(_elements), entry);
    _indexBufferValid = false;
    _vertexPositionBufferValid = false;
    _vertexTexCoordBufferValid = false;
    _renderBoundsValid = false;
}

// private Uno.Rect CalcRenderBounds() [instance] :1301
::g::Uno::Rect ElementBatch::CalcRenderBounds()
{
    uStackFrame __("Fuse.Elements.ElementBatch", "CalcRenderBounds()");
    ::g::Fuse::Elements::ElementBatchEntry* ret6;
    ::g::Fuse::Elements::ElementBatchEntry* ret7;
    ::g::Uno::Rect rect = uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_elements), uCRef<int>(0), &ret6), ret6))->_elm)->CalcRenderBoundsInParentSpace();

    for (int i = 1; i < uPtr(_elements)->Count(); i++)
        rect = ::g::Uno::Rect__Union(rect, uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_elements), uCRef<int>(i), &ret7), ret7))->_elm)->CalcRenderBoundsInParentSpace());

    return rect;
}

// public void Dispose() [instance] :1262
void ElementBatch::Dispose()
{
    uStackFrame __("Fuse.Elements.ElementBatch", "Dispose()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementBatchEntry*> > ret8;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementBatchEntry*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret8), ret8); enum1.MoveNext(::TYPES[94/*Uno.Collections.List<Fuse.Elements.ElementBatchEntry>.Enumerator*/]); )
    {
        ::g::Fuse::Elements::ElementBatchEntry* elm = enum1.Current(::TYPES[94/*Uno.Collections.List<Fuse.Elements.ElementBatchEntry>.Enumerator*/]);
        uPtr(elm)->_batch = NULL;
    }

    if (_positionInfo.Buffer != NULL)
        uPtr(_positionInfo.Buffer)->Dispose();

    if (_texCoordInfo.Buffer != NULL)
        uPtr(_texCoordInfo.Buffer)->Dispose();

    if (_indexBuffer != NULL)
        uPtr(_indexBuffer)->Dispose();
}

// public void Draw(Fuse.DrawContext dc, float4x4 localToClipTransform, Uno.Rect scissorRectInClipSpace) [instance] :1372
void ElementBatch::Draw(::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4 localToClipTransform, ::g::Uno::Rect scissorRectInClipSpace)
{
    uStackFrame __("Fuse.Elements.ElementBatch", "Draw(Fuse.DrawContext,float4x4,Uno.Rect)");
    ::g::Fuse::Elements::ElementBatchEntry* ret9;
    ::g::Uno::Rect visibleRect = ::g::Uno::Rect__Transform(RenderBounds(), localToClipTransform);

    if (!scissorRectInClipSpace.Intersects(visibleRect))
        return;

    ::g::Uno::Graphics::Framebuffer* fb = uPtr(_elementAtlas)->PinAndValidateFramebuffer(dc);

    if (_prevElementCount != uPtr(_elements)->Count())
    {
        _indexBufferValid = false;
        _vertexPositionBufferValid = false;
        _vertexTexCoordBufferValid = false;
        _tempBuffer = ::g::Uno::Buffer::New3((uPtr(_elements)->Count() * 4) * 12);
    }

    if (!_indexBufferValid)
    {
        FillIndexBuffer();
        _indexBufferValid = true;
    }

    if (!_vertexPositionBufferValid)
    {
        FillVertexPositionBuffer(dc);
        _vertexPositionBufferValid = true;
    }

    if (!_vertexTexCoordBufferValid)
    {
        FillVertexTexCoordBuffer();
        _vertexTexCoordBufferValid = true;
    }

    ::g::Uno::Graphics::Texture2D* tex = uPtr(fb)->ColorBuffer();
    ::g::Uno::Float4x4 transform = uPtr(dc)->GetLocalToClipTransform(uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_elements), uCRef<int>(0), &ret9), ret9))->_elm)->Parent());
    _draw_3bd224e1.BlendEnabled(true);
    _draw_3bd224e1.DepthTestEnabled(false);
    _draw_3bd224e1.CullFace(uPtr(dc)->CullFace());
    _draw_3bd224e1.BlendDstRgb(3);
    _draw_3bd224e1.BlendDstAlpha(3);
    _draw_3bd224e1.Use();
    _draw_3bd224e1.Attrib1(0, _positionInfo.Type, _positionInfo.Buffer, _positionInfo.BufferStride, _positionInfo.BufferOffset);
    _draw_3bd224e1.Attrib1(1, _texCoordInfo.Type, _texCoordInfo.Buffer, _texCoordInfo.BufferStride, _texCoordInfo.BufferOffset);
    _draw_3bd224e1.Uniform12(2, transform);
    _draw_3bd224e1.Sampler2(3, tex);
    _draw_3bd224e1.Draw(uPtr(_elements)->Count() * 6, 2, _indexBuffer);
    uPtr(_elementAtlas)->Unpin();
    _prevElementCount = uPtr(_elements)->Count();
}

// private void FillIndexBuffer() [instance] :1437
void ElementBatch::FillIndexBuffer()
{
    uStackFrame __("Fuse.Elements.ElementBatch", "FillIndexBuffer()");
    ::g::Uno::Buffer* indices = ::g::Uno::Buffer::New3((uPtr(_elements)->Count() * 6) * 2);

    for (int i = 0; i < uPtr(_elements)->Count(); ++i)
    {
        uPtr(indices)->Set23((i * 6) * 2, (uint16_t)(i * 4), true);
        indices->Set23(((i * 6) + 1) * 2, (uint16_t)((i * 4) + 2), true);
        indices->Set23(((i * 6) + 2) * 2, (uint16_t)((i * 4) + 1), true);
        indices->Set23(((i * 6) + 3) * 2, (uint16_t)(i * 4), true);
        indices->Set23(((i * 6) + 4) * 2, (uint16_t)((i * 4) + 3), true);
        indices->Set23(((i * 6) + 5) * 2, (uint16_t)((i * 4) + 2), true);
    }

    if (_indexBuffer != NULL)
        uPtr(_indexBuffer)->Dispose();

    _indexBuffer = ::g::Uno::Graphics::IndexBuffer::New2(indices, 0);
}

// private void FillVertexPositionBuffer(Fuse.DrawContext dc) [instance] :1476
void ElementBatch::FillVertexPositionBuffer(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.ElementBatch", "FillVertexPositionBuffer(Fuse.DrawContext)");
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float4 ind4;
    ::g::Fuse::Elements::ElementBatchEntry* ret10;
    int elementCount = uPtr(_elements)->Count();
    ::g::Uno::Buffer* vertexPositions = _tempBuffer;
    float densityScale = 1.0f / uPtr(dc)->ViewportPixelsPerPoint();

    for (int i = 0; i < elementCount; ++i)
    {
        ::g::Fuse::Elements::ElementBatchEntry* entry = (::g::Uno::Collections::List__get_Item_fn(uPtr(_elements), uCRef<int>(i), &ret10), ret10);
        ::g::Uno::Recti cachingRect = ElementBatch::GetCachingRect(uPtr(entry)->_elm);
        float opacity = entry->_opacity;
        ::g::Uno::Float4x4 transform = uPtr(entry->_elm)->LocalTransform();
        ::g::Uno::Float2 positionOrigin = ::g::Uno::Float2__op_Addition2((ind2 = transform.Item(3), ::g::Uno::Float2__New2(ind2.X, ind2.Y)), ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Implicit1(cachingRect.Minimum()), densityScale));
        ::g::Uno::Float2 size = ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Implicit1(cachingRect.Size()), densityScale);
        ::g::Uno::Float2 right = ::g::Uno::Float2__op_Multiply1((ind3 = transform.Item(0), ::g::Uno::Float2__New2(ind3.X, ind3.Y)), size.X);
        ::g::Uno::Float2 up = ::g::Uno::Float2__op_Multiply1((ind4 = transform.Item(1), ::g::Uno::Float2__New2(ind4.X, ind4.Y)), size.Y);
        uPtr(vertexPositions)->Set6(((i * 4) * _positionInfo.BufferStride) + _positionInfo.BufferOffset, ::g::Uno::Float3__New4(positionOrigin, opacity), true);
        vertexPositions->Set6((((i * 4) + 1) * _positionInfo.BufferStride) + _positionInfo.BufferOffset, ::g::Uno::Float3__New4(::g::Uno::Float2__op_Addition2(positionOrigin, right), opacity), true);
        vertexPositions->Set6((((i * 4) + 2) * _positionInfo.BufferStride) + _positionInfo.BufferOffset, ::g::Uno::Float3__New4(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2(positionOrigin, right), up), opacity), true);
        vertexPositions->Set6((((i * 4) + 3) * _positionInfo.BufferStride) + _positionInfo.BufferOffset, ::g::Uno::Float3__New4(::g::Uno::Float2__op_Addition2(positionOrigin, up), opacity), true);
    }

    uPtr(_positionInfo.Buffer)->Update(vertexPositions);
}

// private void FillVertexTexCoordBuffer() [instance] :1456
void ElementBatch::FillVertexTexCoordBuffer()
{
    uStackFrame __("Fuse.Elements.ElementBatch", "FillVertexTexCoordBuffer()");
    ::g::Fuse::Elements::ElementBatchEntry* ret11;
    int elementCount = uPtr(_elements)->Count();
    ::g::Uno::Buffer* vertexTexCoords = _tempBuffer;

    for (int i = 0; i < elementCount; ++i)
    {
        ::g::Fuse::Elements::ElementBatchEntry* entry = (::g::Uno::Collections::List__get_Item_fn(uPtr(_elements), uCRef<int>(i), &ret11), ret11);
        ::g::Uno::Recti cachingRect = ElementBatch::GetCachingRect(uPtr(entry)->_elm);
        ::g::Uno::Float2 texCoordOrigin = ::g::Uno::Float2__op_Division2(::g::Uno::Float2__op_Implicit1(entry->_rect.Minimum()), ::g::Uno::Float2__op_Implicit1(uPtr(uPtr(_elementAtlas)->_textureAtlas)->Size()));
        ::g::Uno::Float2 size = ::g::Uno::Float2__op_Division2(::g::Uno::Float2__op_Implicit1(cachingRect.Size()), ::g::Uno::Float2__op_Implicit1(uPtr(uPtr(_elementAtlas)->_textureAtlas)->Size()));
        uPtr(vertexTexCoords)->Set5(((i * 4) * _texCoordInfo.BufferStride) + _texCoordInfo.BufferOffset, texCoordOrigin, true);
        vertexTexCoords->Set5((((i * 4) + 1) * _texCoordInfo.BufferStride) + _texCoordInfo.BufferOffset, ::g::Uno::Float2__op_Addition2(texCoordOrigin, ::g::Uno::Float2__New2(size.X, 0.0f)), true);
        vertexTexCoords->Set5((((i * 4) + 2) * _texCoordInfo.BufferStride) + _texCoordInfo.BufferOffset, ::g::Uno::Float2__op_Addition2(texCoordOrigin, size), true);
        vertexTexCoords->Set5((((i * 4) + 3) * _texCoordInfo.BufferStride) + _texCoordInfo.BufferOffset, ::g::Uno::Float2__op_Addition2(texCoordOrigin, ::g::Uno::Float2__New2(0.0f, size.Y)), true);
    }

    uPtr(_texCoordInfo.Buffer)->Update(vertexTexCoords);
}

// private generated void init_DrawCalls() [instance] :1233
void ElementBatch::init_DrawCalls()
{
    uStackFrame __("Fuse.Elements.ElementBatch", "init_DrawCalls()");
    _draw_3bd224e1 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseElements_bundle::ElementBatch47d0cb7a());
}

// internal void InvalidateOpacity(Fuse.Elements.Element elm) [instance] :1365
void ElementBatch::InvalidateOpacity(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.ElementBatch", "InvalidateOpacity(Fuse.Elements.Element)");
    _vertexPositionBufferValid = false;
}

// public void InvalidateRenderBounds(Fuse.Elements.Element elm) [instance] :1352
void ElementBatch::InvalidateRenderBounds(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.ElementBatch", "InvalidateRenderBounds(Fuse.Elements.Element)");
    _vertexPositionBufferValid = false;
    _vertexTexCoordBufferValid = false;
    _renderBoundsValid = false;
}

// internal void InvalidateTransform(Fuse.Elements.Element elm) [instance] :1359
void ElementBatch::InvalidateTransform(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.ElementBatch", "InvalidateTransform(Fuse.Elements.Element)");
    _vertexPositionBufferValid = false;
    _renderBoundsValid = false;
}

// public bool IsFull() [instance] :1432
bool ElementBatch::IsFull()
{
    uStackFrame __("Fuse.Elements.ElementBatch", "IsFull()");
    return (uPtr(_elements)->Count() * 6) >= 65535;
}

// public void RemoveElement(Fuse.Elements.Element elm) [instance] :1339
void ElementBatch::RemoveElement(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.ElementBatch", "RemoveElement(Fuse.Elements.Element)");
    bool ret12;

    if (uPtr(uPtr(elm)->ElementBatchEntry())->_batch != this)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[19/*"wrong batch...*/]));

    ::g::Fuse::Elements::ElementBatchEntry* entry = uPtr(elm)->ElementBatchEntry();
    uPtr(entry)->_batch = NULL;
    ::g::Uno::Collections::List__Remove_fn(uPtr(_elements), entry, &ret12);
    _indexBufferValid = false;
    _vertexPositionBufferValid = false;
    _vertexTexCoordBufferValid = false;
}

// public Uno.Rect get_RenderBounds() [instance] :1313
::g::Uno::Rect ElementBatch::RenderBounds()
{
    uStackFrame __("Fuse.Elements.ElementBatch", "get_RenderBounds()");

    if (!_renderBoundsValid)
    {
        _renderBounds = CalcRenderBounds();
        _renderBoundsValid = true;
    }

    return _renderBounds;
}

// internal static Uno.Recti ConservativelySnapToCoveringIntegers(Uno.Rect r) [static] :1277
::g::Uno::Recti ElementBatch::ConservativelySnapToCoveringIntegers(::g::Uno::Rect r)
{
    uStackFrame __("Fuse.Elements.ElementBatch", "ConservativelySnapToCoveringIntegers(Uno.Rect)");
    ::g::Uno::Int2 origin = ::g::Uno::Int2__op_Explicit(::g::Uno::Math::Floor2(r.Minimum()));
    ::g::Uno::Int2 size = ::g::Uno::Int2__op_Explicit(::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Addition1(r.Size(), 0.01f)));
    return ::g::Uno::Recti__New1(origin.X, origin.Y, (origin.X + size.X) + 1, (origin.Y + size.Y) + 1);
}

// public static Uno.Recti GetCachingRect(Fuse.Elements.Element elm) [static] :1291
::g::Uno::Recti ElementBatch::GetCachingRect(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.ElementBatch", "GetCachingRect(Fuse.Elements.Element)");
    ::g::Uno::Rect bounds = uPtr(elm)->RenderBoundsWithEffects();

    if (bounds.IsInfinite())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[18/*"element has...*/]));

    return ::g::Uno::Recti__Inflate(ElementBatch::ConservativelySnapToCoveringIntegers(::g::Uno::Rect__Scale(bounds, elm->AbsoluteZoom())), 1);
}

// public ElementBatch New(Fuse.Elements.ElementBatcher elementBatcher, Fuse.Elements.ElementAtlas elementAtlas) [static] :1244
ElementBatch* ElementBatch::New1(::g::Fuse::Elements::ElementBatcher* elementBatcher, ::g::Fuse::Elements::ElementAtlas* elementAtlas)
{
    ElementBatch* obj5 = (ElementBatch*)uNew(ElementBatch_typeof());
    obj5->ctor_(elementBatcher, elementAtlas);
    return obj5;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/Caching/$.uno#5
// -------------------------------------------------------------------

// internal sealed class ElementBatchEntry :1168
// {
uType* ElementBatchEntry_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(ElementBatchEntry);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.ElementBatchEntry", options);
    ::TYPES[0] = ::g::Uno::Int_typeof();
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[99] = ::g::Fuse::Elements::ElementBatcher_typeof();
    ::TYPES[100] = ::g::Fuse::Elements::ElementBatch_typeof();
    type->SetFields(0,
        ::g::Fuse::Elements::ElementAtlas_typeof(), offsetof(::g::Fuse::Elements::ElementBatchEntry, _atlas), 0,
        ::g::Fuse::Elements::ElementBatch_typeof(), offsetof(::g::Fuse::Elements::ElementBatchEntry, _batch), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Elements::ElementBatchEntry, _elm), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Elements::ElementBatchEntry, _opacity), 0,
        ::g::Uno::Recti_typeof(), offsetof(::g::Fuse::Elements::ElementBatchEntry, _rect), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::ElementBatchEntry, IsValid), 0);
    return type;
}

// public ElementBatchEntry(Fuse.Elements.Element elm) :1170
void ElementBatchEntry__ctor__fn(ElementBatchEntry* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->ctor_(elm);
}

// private float GetEffectiveOpacity() :1176
void ElementBatchEntry__GetEffectiveOpacity_fn(ElementBatchEntry* __this, float* __retval)
{
    *__retval = __this->GetEffectiveOpacity();
}

// public void InvalidateRenderBounds() :1201
void ElementBatchEntry__InvalidateRenderBounds_fn(ElementBatchEntry* __this)
{
    __this->InvalidateRenderBounds();
}

// public void InvalidateTransform() :1210
void ElementBatchEntry__InvalidateTransform_fn(ElementBatchEntry* __this)
{
    __this->InvalidateTransform();
}

// public void InvalidateVisual() :1183
void ElementBatchEntry__InvalidateVisual_fn(ElementBatchEntry* __this)
{
    __this->InvalidateVisual();
}

// public void InvalidateVisualComposition() :1188
void ElementBatchEntry__InvalidateVisualComposition_fn(ElementBatchEntry* __this)
{
    __this->InvalidateVisualComposition();
}

// public ElementBatchEntry New(Fuse.Elements.Element elm) :1170
void ElementBatchEntry__New1_fn(::g::Fuse::Elements::Element* elm, ElementBatchEntry** __retval)
{
    *__retval = ElementBatchEntry::New1(elm);
}

// public void OnRemoved() :1216
void ElementBatchEntry__OnRemoved_fn(ElementBatchEntry* __this)
{
    __this->OnRemoved();
}

// public ElementBatchEntry(Fuse.Elements.Element elm) [instance] :1170
void ElementBatchEntry::ctor_(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.ElementBatchEntry", ".ctor(Fuse.Elements.Element)");
    _elm = elm;
    _opacity = GetEffectiveOpacity();
}

// private float GetEffectiveOpacity() [instance] :1176
float ElementBatchEntry::GetEffectiveOpacity()
{
    uStackFrame __("Fuse.Elements.ElementBatchEntry", "GetEffectiveOpacity()");

    if (uPtr(_elm)->Visibility() == 0)
        return uPtr(_elm)->Opacity();

    return 0.0f;
}

// public void InvalidateRenderBounds() [instance] :1201
void ElementBatchEntry::InvalidateRenderBounds()
{
    uStackFrame __("Fuse.Elements.ElementBatchEntry", "InvalidateRenderBounds()");

    if (_batch != NULL)
    {
        ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(uPtr(_batch)->_elementBatcher)->_reinsertCheckList), this);
        uPtr(_batch)->InvalidateRenderBounds(_elm);
    }
}

// public void InvalidateTransform() [instance] :1210
void ElementBatchEntry::InvalidateTransform()
{
    uStackFrame __("Fuse.Elements.ElementBatchEntry", "InvalidateTransform()");

    if (_batch != NULL)
        uPtr(_batch)->InvalidateTransform(_elm);
}

// public void InvalidateVisual() [instance] :1183
void ElementBatchEntry::InvalidateVisual()
{
    uStackFrame __("Fuse.Elements.ElementBatchEntry", "InvalidateVisual()");
    uPtr(_atlas)->InvalidateElement(_elm);
}

// public void InvalidateVisualComposition() [instance] :1188
void ElementBatchEntry::InvalidateVisualComposition()
{
    uStackFrame __("Fuse.Elements.ElementBatchEntry", "InvalidateVisualComposition()");
    float opacity = GetEffectiveOpacity();

    if (_opacity != opacity)
    {
        if (_batch != NULL)
            uPtr(_batch)->InvalidateOpacity(_elm);

        _opacity = opacity;
    }
}

// public void OnRemoved() [instance] :1216
void ElementBatchEntry::OnRemoved()
{
    uStackFrame __("Fuse.Elements.ElementBatchEntry", "OnRemoved()");

    if (_atlas != NULL)
        uPtr(_atlas)->RemoveElement(_elm);

    if (_batch != NULL)
        uPtr(_batch)->RemoveElement(_elm);
}

// public ElementBatchEntry New(Fuse.Elements.Element elm) [static] :1170
ElementBatchEntry* ElementBatchEntry::New1(::g::Fuse::Elements::Element* elm)
{
    ElementBatchEntry* obj1 = (ElementBatchEntry*)uNew(ElementBatchEntry_typeof());
    obj1->ctor_(elm);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/Caching/$.uno#4
// -------------------------------------------------------------------

// internal sealed class ElementBatcher :863
// {
ElementBatcher_type* ElementBatcher_typeof()
{
    static uSStrong<ElementBatcher_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ElementBatcher);
    options.TypeSize = sizeof(ElementBatcher_type);
    type = (ElementBatcher_type*)uClassType::New("Fuse.Elements.ElementBatcher", options);
    type->fp_ctor_ = (void*)ElementBatcher__New1_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))ElementBatcher__FuseResourcesISoftDisposableSoftDispose_fn;
    ::STRINGS[20] = uString::Const("BUG: atlas-insertion failed, but should not!");
    ::STRINGS[21] = uString::Const("/usr/local/share/uno/Packages/Fuse.Elements/0.27.14/Caching/$.uno#4");
    ::TYPES[101] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[102] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::ElementAtlas_typeof());
    ::TYPES[103] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::ElementBatch_typeof());
    ::TYPES[104] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::IElementBatchDrawable_typeof());
    ::TYPES[92] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::ElementBatchEntry_typeof());
    ::TYPES[90] = ::g::Fuse::Resources::ISoftDisposable_typeof();
    ::TYPES[88] = ::g::Fuse::Elements::ElementAtlasFramebufferPool_typeof();
    ::TYPES[68] = ::g::Uno::EventHandler_typeof();
    ::TYPES[105] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Elements::ElementAtlas_typeof());
    ::TYPES[106] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[107] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Elements::ElementBatch_typeof());
    ::TYPES[11] = ::g::Uno::Double_typeof();
    ::TYPES[98] = ::g::Fuse::Elements::ElementAtlas_typeof();
    ::TYPES[83] = ::g::Fuse::Elements::ElementBatchEntry_typeof();
    ::TYPES[94] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Elements::ElementBatchEntry_typeof());
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[10] = ::g::Uno::Int2_typeof();
    ::TYPES[8] = ::g::Uno::Recti_typeof();
    ::TYPES[6] = ::g::Fuse::Node_typeof();
    ::TYPES[108] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Elements::IElementBatchDrawable_typeof());
    ::TYPES[0] = ::g::Uno::Int_typeof();
    ::TYPES[89] = ::g::Fuse::Elements::DisplayHelpers_typeof();
    ::TYPES[109] = ::g::Fuse::Elements::IElementBatchDrawable_typeof();
    ::TYPES[100] = ::g::Fuse::Elements::ElementBatch_typeof();
    ::TYPES[63] = ::g::Uno::Float2_typeof();
    ::TYPES[9] = ::g::Uno::Rect_typeof();
    ::TYPES[7] = ::g::Uno::Float_typeof();
    ::TYPES[82] = ::g::Fuse::Elements::ElementAtlasFramebuffer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Resources::ISoftDisposable_typeof(), offsetof(ElementBatcher_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::ElementAtlas_typeof()), offsetof(::g::Fuse::Elements::ElementBatcher, _atlasPool), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::ElementBatch_typeof()), offsetof(::g::Fuse::Elements::ElementBatcher, _batchPool), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::IElementBatchDrawable_typeof()), offsetof(::g::Fuse::Elements::ElementBatcher, _drawList), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Elements::ElementBatcher, _elements), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::ElementBatchEntry_typeof()), offsetof(::g::Fuse::Elements::ElementBatcher, _reinsertCheckList), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::ElementBatcher, DrawListValid), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Elements::ElementBatcher, MaxSpilledRatio), 0);
    return type;
}

// public ElementBatcher() :871
void ElementBatcher__ctor__fn(ElementBatcher* __this)
{
    __this->ctor_();
}

// public void AddElement(Fuse.Node elm) :887
void ElementBatcher__AddElement_fn(ElementBatcher* __this, ::g::Fuse::Node* elm)
{
    __this->AddElement(elm);
}

// private Fuse.Elements.ElementAtlas allocAtlas() :899
void ElementBatcher__allocAtlas_fn(ElementBatcher* __this, ::g::Fuse::Elements::ElementAtlas** __retval)
{
    *__retval = __this->allocAtlas();
}

// private Fuse.Elements.ElementBatch allocBatch(Fuse.Elements.ElementAtlas atlas) :906
void ElementBatcher__allocBatch_fn(ElementBatcher* __this, ::g::Fuse::Elements::ElementAtlas* atlas, ::g::Fuse::Elements::ElementBatch** __retval)
{
    *__retval = __this->allocBatch(atlas);
}

// private void DiscardAtlasing() :913
void ElementBatcher__DiscardAtlasing_fn(ElementBatcher* __this)
{
    __this->DiscardAtlasing();
}

// private void DiscardBatching() :930
void ElementBatcher__DiscardBatching_fn(ElementBatcher* __this)
{
    __this->DiscardBatching();
}

// public void Draw(Fuse.DrawContext dc) :1088
void ElementBatcher__Draw_fn(ElementBatcher* __this, ::g::Fuse::DrawContext* dc)
{
    __this->Draw(dc);
}

// private void Fuse.Resources.ISoftDisposable.SoftDispose() :882
void ElementBatcher__FuseResourcesISoftDisposableSoftDispose_fn(ElementBatcher* __this)
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "Fuse.Resources.ISoftDisposable.SoftDispose()");
    __this->DiscardAtlasing();
}

// private static int get_MaxElementPixels() :939
void ElementBatcher__get_MaxElementPixels_fn(int* __retval)
{
    *__retval = ElementBatcher::MaxElementPixels();
}

// private static int2 get_MaxElementSize() :937
void ElementBatcher__get_MaxElementSize_fn(::g::Uno::Int2* __retval)
{
    *__retval = ElementBatcher::MaxElementSize();
}

// public ElementBatcher New() :871
void ElementBatcher__New1_fn(ElementBatcher** __retval)
{
    *__retval = ElementBatcher::New1();
}

// private void OnAtlasSizeChanged(object sender, Uno.EventArgs args) :877
void ElementBatcher__OnAtlasSizeChanged_fn(ElementBatcher* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnAtlasSizeChanged(sender, args);
}

// public void RemoveAllElements() :893
void ElementBatcher__RemoveAllElements_fn(ElementBatcher* __this)
{
    __this->RemoveAllElements();
}

// public static bool ShouldBatchElement(Fuse.Node node) :954
void ElementBatcher__ShouldBatchElement_fn(::g::Fuse::Node* node, bool* __retval)
{
    *__retval = ElementBatcher::ShouldBatchElement(node);
}

// public static bool ShouldBatchElementWithCachingMode(Fuse.Elements.CachingMode mode) :949
void ElementBatcher__ShouldBatchElementWithCachingMode_fn(int* mode, bool* __retval)
{
    *__retval = ElementBatcher::ShouldBatchElementWithCachingMode(*mode);
}

// public static bool ShouldBatchElementWithSize(int2 size) :941
void ElementBatcher__ShouldBatchElementWithSize_fn(::g::Uno::Int2* size, bool* __retval)
{
    *__retval = ElementBatcher::ShouldBatchElementWithSize(*size);
}

// private void UpdateDrawList() :977
void ElementBatcher__UpdateDrawList_fn(ElementBatcher* __this)
{
    __this->UpdateDrawList();
}

// public ElementBatcher() [instance] :871
void ElementBatcher::ctor_()
{
    uStackFrame __("Fuse.Elements.ElementBatcher", ".ctor()");
    _elements = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[101/*Uno.Collections.List<Fuse.Node>*/]));
    _atlasPool = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[102/*Uno.Collections.List<Fuse.Elements.ElementAtlas>*/]));
    _batchPool = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[103/*Uno.Collections.List<Fuse.Elements.ElementBatch>*/]));
    _drawList = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[104/*Uno.Collections.List<Fuse.Elements.IElementBatchDrawable>*/]));
    _reinsertCheckList = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[92/*Uno.Collections.List<Fuse.Elements.ElementBatchEntry>*/]));
    ::g::Fuse::Resources::DisposalManager::Add1((uObject*)this);
    ::g::Fuse::Elements::ElementAtlasFramebufferPool::add_AtlasSizeChanged(uDelegate::New(::TYPES[68/*Uno.EventHandler*/], (void*)ElementBatcher__OnAtlasSizeChanged_fn, this));
}

// public void AddElement(Fuse.Node elm) [instance] :887
void ElementBatcher::AddElement(::g::Fuse::Node* elm)
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "AddElement(Fuse.Node)");
    ::g::Uno::Collections::List__Add_fn(uPtr(_elements), elm);
    DrawListValid = false;
}

// private Fuse.Elements.ElementAtlas allocAtlas() [instance] :899
::g::Fuse::Elements::ElementAtlas* ElementBatcher::allocAtlas()
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "allocAtlas()");
    ::g::Fuse::Elements::ElementAtlas* atlas = ::g::Fuse::Elements::ElementAtlas::New1();
    ::g::Uno::Collections::List__Add_fn(uPtr(_atlasPool), atlas);
    return atlas;
}

// private Fuse.Elements.ElementBatch allocBatch(Fuse.Elements.ElementAtlas atlas) [instance] :906
::g::Fuse::Elements::ElementBatch* ElementBatcher::allocBatch(::g::Fuse::Elements::ElementAtlas* atlas)
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "allocBatch(Fuse.Elements.ElementAtlas)");
    ::g::Fuse::Elements::ElementBatch* batch = ::g::Fuse::Elements::ElementBatch::New1(this, atlas);
    ::g::Uno::Collections::List__Add_fn(uPtr(_batchPool), batch);
    return batch;
}

// private void DiscardAtlasing() [instance] :913
void ElementBatcher::DiscardAtlasing()
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "DiscardAtlasing()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > ret14;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret15;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_atlasPool), &ret14), ret14); enum1.MoveNext(::TYPES[105/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]); )
    {
        ::g::Fuse::Elements::ElementAtlas* atlas = enum1.Current(::TYPES[105/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);
        uPtr(atlas)->Dispose();
    }

    uPtr(_atlasPool)->Clear();

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret15), ret15); enum2.MoveNext(::TYPES[106/*Uno.Collections.List<Fuse.Node>.Enumerator*/]); )
    {
        ::g::Fuse::Node* node = enum2.Current(::TYPES[106/*Uno.Collections.List<Fuse.Node>.Enumerator*/]);
        ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(node, ::TYPES[2/*Fuse.Elements.Element*/]);

        if (elm != NULL)
            uPtr(elm)->ElementBatchEntry(NULL);
    }

    uPtr(_drawList)->Clear();
    DrawListValid = false;
}

// private void DiscardBatching() [instance] :930
void ElementBatcher::DiscardBatching()
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "DiscardBatching()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementBatch*> > ret16;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementBatch*> > enum3 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_batchPool), &ret16), ret16); enum3.MoveNext(::TYPES[107/*Uno.Collections.List<Fuse.Elements.ElementBatch>.Enumerator*/]); )
    {
        ::g::Fuse::Elements::ElementBatch* batch = enum3.Current(::TYPES[107/*Uno.Collections.List<Fuse.Elements.ElementBatch>.Enumerator*/]);
        uPtr(batch)->Dispose();
    }

    uPtr(_batchPool)->Clear();
}

// public void Draw(Fuse.DrawContext dc) [instance] :1088
void ElementBatcher::Draw(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "Draw(Fuse.DrawContext)");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > ret17;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret18;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > ret19;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > ret20;
    bool ret21;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementBatchEntry*> > ret22;
    ::g::Fuse::Node* ret23;
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret24;

    if ((double)MaxSpilledRatio > 0.5)
    {
        ::g::Uno::Collections::List* removeList = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[102/*Uno.Collections.List<Fuse.Elements.ElementAtlas>*/]);

        for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > enum7 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_atlasPool), &ret17), ret17); enum7.MoveNext(::TYPES[105/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]); )
        {
            ::g::Fuse::Elements::ElementAtlas* a = enum7.Current(::TYPES[105/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);

            if ((double)uPtr(a)->SpilledRatio() > 0.5)
                ::g::Uno::Collections::List__Add_fn(uPtr(removeList), a);
        }

        for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > enum8 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret18), ret18); enum8.MoveNext(::TYPES[106/*Uno.Collections.List<Fuse.Node>.Enumerator*/]); )
        {
            ::g::Fuse::Node* node = enum8.Current(::TYPES[106/*Uno.Collections.List<Fuse.Node>.Enumerator*/]);
            ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(node, ::TYPES[2/*Fuse.Elements.Element*/]);

            if (elm == NULL)
                continue;

            for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > enum9 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(removeList), &ret19), ret19); enum9.MoveNext(::TYPES[105/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]); )
            {
                ::g::Fuse::Elements::ElementAtlas* a1 = enum9.Current(::TYPES[105/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);

                if ((uPtr(elm)->ElementBatchEntry() != NULL) && (uPtr(uPtr(elm)->ElementBatchEntry())->_atlas == a1))
                    uPtr(elm)->ElementBatchEntry(NULL);
            }
        }

        for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > enum10 = (::g::Uno::Collections::List__GetEnumerator_fn(removeList, &ret20), ret20); enum10.MoveNext(::TYPES[105/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]); )
        {
            ::g::Fuse::Elements::ElementAtlas* a2 = enum10.Current(::TYPES[105/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);
            ::g::Uno::Collections::List__Remove_fn(uPtr(_atlasPool), a2, &ret21);
            uPtr(a2)->Dispose();
        }

        DrawListValid = false;
    }

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementBatchEntry*> > enum11 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_reinsertCheckList), &ret22), ret22); enum11.MoveNext(::TYPES[94/*Uno.Collections.List<Fuse.Elements.ElementBatchEntry>.Enumerator*/]); )
    {
        ::g::Fuse::Elements::ElementBatchEntry* e = enum11.Current(::TYPES[94/*Uno.Collections.List<Fuse.Elements.ElementBatchEntry>.Enumerator*/]);
        ::g::Fuse::Elements::Element* elm1 = uPtr(e)->_elm;
        ::g::Fuse::Elements::ElementAtlas* atlas = e->_atlas;

        if (((elm1 == NULL) || (uPtr(elm1)->ElementBatchEntry() == NULL)) || (atlas == NULL))
            continue;

        ::g::Uno::Recti cachingRect;

        if ((!::g::Fuse::Elements::Cache::GetCachingRect1(elm1, &cachingRect) || (cachingRect.Size().X > e->_rect.Size().X)) || (cachingRect.Size().Y > e->_rect.Size().Y))
        {
            if (!uPtr(atlas)->ReinsertElement(elm1))
            {
                uPtr(atlas)->RemoveElement(elm1);
                uPtr(elm1)->ElementBatchEntry(NULL);
                DrawListValid = false;
            }
        }
    }

    uPtr(_reinsertCheckList)->Clear();

    if (!DrawListValid)
    {
        UpdateDrawList();
        DrawListValid = true;
    }

    ::g::Fuse::Node* parent = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_elements), uCRef<int>(0), &ret23), ret23))->Parent();
    ::g::Uno::Float4x4 localToClipTransform = uPtr(dc)->GetLocalToClipTransform(parent);
    ::g::Uno::Rect scissorRectInClipSpace = ::g::Fuse::Elements::ElementAtlas::GetScissorRectInClipSpace(dc);

    for (::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum12 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_drawList), &ret24), ret24); enum12.MoveNext(::TYPES[108/*Uno.Collections.List<Fuse.Elements.IElementBatchDrawable>.Enumerator*/]); )
    {
        uObject* d = enum12.Current(::TYPES[108/*Uno.Collections.List<Fuse.Elements.IElementBatchDrawable>.Enumerator*/]);
        ::g::Fuse::Elements::IElementBatchDrawable::Draw(uInterface(uPtr(d), ::TYPES[109/*Fuse.Elements.IElementBatchDrawable*/]), dc, localToClipTransform, scissorRectInClipSpace);
    }
}

// private void OnAtlasSizeChanged(object sender, Uno.EventArgs args) [instance] :877
void ElementBatcher::OnAtlasSizeChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "OnAtlasSizeChanged(object,Uno.EventArgs)");
    DiscardAtlasing();
}

// public void RemoveAllElements() [instance] :893
void ElementBatcher::RemoveAllElements()
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "RemoveAllElements()");
    uPtr(_elements)->Clear();
    DrawListValid = false;
}

// private void UpdateDrawList() [instance] :977
void ElementBatcher::UpdateDrawList()
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "UpdateDrawList()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret25;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > ret26;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > ret27;
    uPtr(_drawList)->Clear();
    DiscardBatching();
    ::g::Uno::Int2 maxBatchRenderBounds = ::g::Uno::Int2__op_Multiply(::g::Fuse::Elements::DisplayHelpers::DisplaySizeHint(), 2);
    ::g::Fuse::Elements::ElementBatch* batch = NULL;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > enum4 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret25), ret25); enum4.MoveNext(::TYPES[106/*Uno.Collections.List<Fuse.Node>.Enumerator*/]); )
    {
        ::g::Fuse::Node* node = enum4.Current(::TYPES[106/*Uno.Collections.List<Fuse.Node>.Enumerator*/]);

        if (!ElementBatcher::ShouldBatchElement(node))
        {
            ::g::Uno::Collections::List__Add_fn(uPtr(_drawList), (uObject*)::g::Fuse::Elements::SingleNodeDrawable::New1(node));
            batch = NULL;
            continue;
        }

        ::g::Fuse::Elements::Element* elm = uCast< ::g::Fuse::Elements::Element*>(node, ::TYPES[2/*Fuse.Elements.Element*/]);
        bool emitNewBatch = false;
        ::g::Fuse::Elements::ElementAtlas* atlas = NULL;

        if (batch == NULL)
        {
            emitNewBatch = true;

            if (uPtr(elm)->ElementBatchEntry() != NULL)
                atlas = uPtr(uPtr(elm)->ElementBatchEntry())->_atlas;
        }
        else
        {
            if ((uPtr(elm)->ElementBatchEntry() == NULL) || (uPtr(uPtr(elm)->ElementBatchEntry())->_atlas == NULL))
            {
                atlas = uPtr(batch)->_elementAtlas;

                if (!uPtr(atlas)->AddElement(elm))
                    atlas = NULL;
            }
            else
            {
                if (uPtr(uPtr(elm)->ElementBatchEntry())->_atlas != uPtr(batch)->_elementAtlas)
                    emitNewBatch = true;

                atlas = uPtr(uPtr(elm)->ElementBatchEntry())->_atlas;
            }
        }

        if ((batch != NULL) && !emitNewBatch)
        {
            ::g::Uno::Rect batchRenderBounds = uPtr(batch)->RenderBounds();
            ::g::Uno::Rect elmRenderBounds = uPtr(elm)->CalcRenderBoundsInParentSpace();
            ::g::Uno::Rect newRenderBounds = ::g::Uno::Rect__Union(batchRenderBounds, elmRenderBounds);

            if (((newRenderBounds.Size().X > (float)maxBatchRenderBounds.X) || (newRenderBounds.Size().Y > (float)maxBatchRenderBounds.Y)) || batch->IsFull())
                emitNewBatch = true;
        }

        if (emitNewBatch || (atlas == NULL))
        {
            if (atlas == NULL)
            {
                for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > enum5 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_atlasPool), &ret26), ret26); enum5.MoveNext(::TYPES[105/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]); )
                {
                    ::g::Fuse::Elements::ElementAtlas* a = enum5.Current(::TYPES[105/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);

                    if (uPtr(a)->AddElement(elm))
                    {
                        atlas = a;
                        break;
                    }
                }

                if (atlas == NULL)
                    atlas = allocAtlas();
            }

            batch = allocBatch(atlas);

            if (((uPtr(elm)->ElementBatchEntry() == NULL) || (uPtr(uPtr(elm)->ElementBatchEntry())->_atlas != atlas)) && !uPtr(atlas)->AddElement(elm))
            {
                ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[20/*"BUG: atlas-...*/], 1, ::STRINGS[21/*"/usr/local/...*/], 1068);
                ::g::Uno::Collections::List__Add_fn(uPtr(_drawList), (uObject*)::g::Fuse::Elements::SingleNodeDrawable::New1(elm));
                batch = NULL;
                continue;
            }

            ::g::Uno::Collections::List__Add_fn(uPtr(_drawList), (uObject*)batch);
        }

        uPtr(batch)->AddElement(elm);
    }

    MaxSpilledRatio = 0.0f;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > enum6 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_atlasPool), &ret27), ret27); enum6.MoveNext(::TYPES[105/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]); )
    {
        ::g::Fuse::Elements::ElementAtlas* a1 = enum6.Current(::TYPES[105/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);
        MaxSpilledRatio = ::g::Uno::Math::Max1(MaxSpilledRatio, uPtr(a1)->SpilledRatio());
    }
}

// public ElementBatcher New() [static] :871
ElementBatcher* ElementBatcher::New1()
{
    ElementBatcher* obj13 = (ElementBatcher*)uNew(ElementBatcher_typeof());
    obj13->ctor_();
    return obj13;
}

// public static bool ShouldBatchElement(Fuse.Node node) [static] :954
bool ElementBatcher::ShouldBatchElement(::g::Fuse::Node* node)
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "ShouldBatchElement(Fuse.Node)");
    ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(node, ::TYPES[2/*Fuse.Elements.Element*/]);

    if (elm == NULL)
        return false;

    if (uPtr(elm)->DrawCost() <= 1.0)
        return false;

    if (!ElementBatcher::ShouldBatchElementWithCachingMode(uPtr(elm)->CachingMode()))
        return false;

    ::g::Uno::Recti cacheRect;

    if (!::g::Fuse::Elements::Cache::GetCachingRect1(elm, &cacheRect))
        return false;

    return ElementBatcher::ShouldBatchElementWithSize(cacheRect.Size());
}

// public static bool ShouldBatchElementWithCachingMode(Fuse.Elements.CachingMode mode) [static] :949
bool ElementBatcher::ShouldBatchElementWithCachingMode(int mode)
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "ShouldBatchElementWithCachingMode(Fuse.Elements.CachingMode)");
    return mode != 2;
}

// public static bool ShouldBatchElementWithSize(int2 size) [static] :941
bool ElementBatcher::ShouldBatchElementWithSize(::g::Uno::Int2 size)
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "ShouldBatchElementWithSize(int2)");
    ::g::Uno::Int2 maxSize = ElementBatcher::MaxElementSize();
    return ((size.X <= maxSize.X) && (size.Y <= maxSize.Y)) && ((size.X * size.Y) <= ElementBatcher::MaxElementPixels());
}

// private static int get_MaxElementPixels() [static] :939
int ElementBatcher::MaxElementPixels()
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "get_MaxElementPixels()");
    return (ElementBatcher::MaxElementSize().X * ElementBatcher::MaxElementSize().Y) / 2;
}

// private static int2 get_MaxElementSize() [static] :937
::g::Uno::Int2 ElementBatcher::MaxElementSize()
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "get_MaxElementSize()");
    return ::g::Fuse::Elements::ElementAtlasFramebuffer::Size();
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno
// ---------------------------------------------------------

// public sealed class FillAspectBoxSizing :17
// {
// static FillAspectBoxSizing() :17
static void FillAspectBoxSizing__cctor__fn(uType* __type)
{
    FillAspectBoxSizing::Singleton_ = FillAspectBoxSizing::New1();
}

::g::Fuse::Elements::BoxSizing_type* FillAspectBoxSizing_typeof()
{
    static uSStrong< ::g::Fuse::Elements::BoxSizing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(FillAspectBoxSizing);
    options.TypeSize = sizeof(::g::Fuse::Elements::BoxSizing_type);
    type = (::g::Fuse::Elements::BoxSizing_type*)uClassType::New("Fuse.Elements.FillAspectBoxSizing", options);
    type->SetBase(::g::Fuse::Elements::BoxSizing_typeof());
    type->fp_ctor_ = (void*)FillAspectBoxSizing__New1_fn;
    type->fp_cctor_ = FillAspectBoxSizing__cctor__fn;
    type->fp_CalcArrangePaddingSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))FillAspectBoxSizing__CalcArrangePaddingSize_fn;
    type->fp_CalcBoxPlacement = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Fuse::Elements::BoxPlacement*))FillAspectBoxSizing__CalcBoxPlacement_fn;
    type->fp_CalcMarginSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))FillAspectBoxSizing__CalcMarginSize_fn;
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[3] = ::g::Fuse::LayoutParams_typeof();
    ::TYPES[0] = ::g::Uno::Int_typeof();
    ::TYPES[63] = ::g::Uno::Float2_typeof();
    ::TYPES[59] = ::g::Fuse::Elements::StandardBoxSizing_typeof();
    type->SetFields(0,
        FillAspectBoxSizing_typeof(), (uintptr_t)&::g::Fuse::Elements::FillAspectBoxSizing::Singleton_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Singleton", 0));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FillAspectBoxSizing__New1_fn, 0, true, FillAspectBoxSizing_typeof(), 0));
    return type;
}

// public generated FillAspectBoxSizing() :17
void FillAspectBoxSizing__ctor_1_fn(FillAspectBoxSizing* __this)
{
    __this->ctor_1();
}

// public override sealed float2 CalcArrangePaddingSize(Fuse.Elements.Element element, Fuse.LayoutParams lp) :31
void FillAspectBoxSizing__CalcArrangePaddingSize_fn(FillAspectBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.FillAspectBoxSizing", "CalcArrangePaddingSize(Fuse.Elements.Element,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Fuse::LayoutParams cs = __this->GetConstraints(element, lp_, 2);
    ::g::Fuse::LayoutParams c = lp_.DeriveClone();
    c.BoxConstrain(cs);
    float aspect = uPtr(element)->Aspect();
    ::g::Uno::Float2 sz = ::g::Uno::Float2__New1(0.0f);

    if (c.HasSize())
        sz = __this->Pick(c.Size(), aspect);
    else if (c.HasX())
        sz = ::g::Uno::Float2__New2(c.X(), c.X() / aspect);
    else if (c.HasY())
        sz = ::g::Uno::Float2__New2(c.Y() * aspect, c.Y());

    int ac = element->AspectConstraint();

    if ((ac & 1) == 1)
    {
        if (c.HasMaxSize())
            sz = __this->Fit(sz, c.MaxSize(), aspect);
        else if (c.HasMaxX())
            sz = __this->Fit(sz, ::g::Uno::Float2__New2(c.MaxX(), sz.Y), aspect);
        else if (c.HasMaxY())
            sz = __this->Fit(sz, ::g::Uno::Float2__New2(sz.X, c.MaxY()), aspect);

        if (c.HasMinX() && (sz.X < c.MinX()))
            sz = ::g::Uno::Float2__New2(c.MinX(), c.MinX() / aspect);

        if (c.HasMinY() && (sz.Y < c.MinY()))
            sz = ::g::Uno::Float2__New2(c.MinY() * aspect, c.MinY());
    }

    if ((ac & 2) == 2)
    {
        if (c.HasMaxX() && (sz.X > c.MaxX()))
            sz.X = c.MaxX();

        if (c.HasMinX() && (sz.X < c.MinX()))
            sz.X = c.MinX();

        if (c.HasMaxY() && (sz.Y > c.MaxY()))
            sz.Y = c.MaxY();

        if (c.HasMinY() && (sz.Y < c.MinY()))
            sz.Y = c.MinY();
    }

    return *__retval = sz, void();
}

// public override sealed Fuse.Elements.BoxPlacement CalcBoxPlacement(Fuse.Elements.Element element, float2 position, Fuse.LayoutParams lp) :21
void FillAspectBoxSizing__CalcBoxPlacement_fn(FillAspectBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Fuse::Elements::BoxPlacement* __retval)
{
    uStackFrame __("Fuse.Elements.FillAspectBoxSizing", "CalcBoxPlacement(Fuse.Elements.Element,float2,Fuse.LayoutParams)");
    ::g::Uno::Float2 position_ = *position;
    ::g::Fuse::LayoutParams lp_ = *lp;
    return *__retval = uPtr(::g::Fuse::Elements::StandardBoxSizing::Singleton())->CalcBoxPlacement(element, position_, lp_), void();
}

// public override sealed float2 CalcMarginSize(Fuse.Elements.Element element, Fuse.LayoutParams lp) :26
void FillAspectBoxSizing__CalcMarginSize_fn(FillAspectBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.FillAspectBoxSizing", "CalcMarginSize(Fuse.Elements.Element,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    return *__retval = uPtr(::g::Fuse::Elements::StandardBoxSizing::Singleton())->CalcMarginSize(element, lp_), void();
}

// private float2 Fit(float2 sz, float2 max, float aspect) :89
void FillAspectBoxSizing__Fit_fn(FillAspectBoxSizing* __this, ::g::Uno::Float2* sz, ::g::Uno::Float2* max, float* aspect, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Fit(*sz, *max, *aspect);
}

// public generated FillAspectBoxSizing New() :17
void FillAspectBoxSizing__New1_fn(FillAspectBoxSizing** __retval)
{
    *__retval = FillAspectBoxSizing::New1();
}

// private float2 Pick(float2 sz, float aspect) :80
void FillAspectBoxSizing__Pick_fn(FillAspectBoxSizing* __this, ::g::Uno::Float2* sz, float* aspect, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Pick(*sz, *aspect);
}

uSStrong<FillAspectBoxSizing*> FillAspectBoxSizing::Singleton_;

// public generated FillAspectBoxSizing() [instance] :17
void FillAspectBoxSizing::ctor_1()
{
    uStackFrame __("Fuse.Elements.FillAspectBoxSizing", ".ctor()");
    ctor_();
}

// private float2 Fit(float2 sz, float2 max, float aspect) [instance] :89
::g::Uno::Float2 FillAspectBoxSizing::Fit(::g::Uno::Float2 sz, ::g::Uno::Float2 max, float aspect)
{
    uStackFrame __("Fuse.Elements.FillAspectBoxSizing", "Fit(float2,float2,float)");

    if ((sz.X <= max.X) && (sz.Y <= max.Y))
        return sz;

    if (sz.X > max.X)
        return ::g::Uno::Float2__New2(max.X, max.X / aspect);

    return ::g::Uno::Float2__New2(max.Y * aspect, max.Y);
}

// private float2 Pick(float2 sz, float aspect) [instance] :80
::g::Uno::Float2 FillAspectBoxSizing::Pick(::g::Uno::Float2 sz, float aspect)
{
    uStackFrame __("Fuse.Elements.FillAspectBoxSizing", "Pick(float2,float)");
    float y = sz.X / aspect;

    if (y <= sz.Y)
        return ::g::Uno::Float2__New2(sz.X, y);

    return ::g::Uno::Float2__New2(sz.Y * aspect, sz.Y);
}

// public generated FillAspectBoxSizing New() [static] :17
FillAspectBoxSizing* FillAspectBoxSizing::New1()
{
    FillAspectBoxSizing* obj1 = (FillAspectBoxSizing*)uNew(FillAspectBoxSizing_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#8
// -----------------------------------------------------------

// private struct Element.GMSCacheItem :1389
// {
uStructType* Element__GMSCacheItem_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Element__GMSCacheItem);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Elements.Element.GMSCacheItem", options);
    type->SetFields(0,
        ::g::Fuse::LayoutParams_typeof(), offsetof(::g::Fuse::Elements::Element__GMSCacheItem, layoutParams), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::Element__GMSCacheItem, result), 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#6
// -----------------------------------------------------------

// public enum HitTestMode :964
uEnumType* HitTestMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.HitTestMode", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "None", 0LL,
        "LocalVisual", 1LL,
        "LocalBounds", 2LL,
        "Children", 4LL,
        "LocalVisualAndChildren", 5LL,
        "LocalBoundsAndChildren", 6LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/Caching/$.uno#4
// -------------------------------------------------------------------

// internal abstract interface IElementBatchDrawable :844
// {
uInterfaceType* IElementBatchDrawable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Elements.IElementBatchDrawable", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#16
// ------------------------------------------------------------

// public sealed class InteractiveTransform :2136
// {
::g::Fuse::Transform_type* InteractiveTransform_typeof()
{
    static uSStrong< ::g::Fuse::Transform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.ObjectSize = sizeof(InteractiveTransform);
    options.TypeSize = sizeof(::g::Fuse::Transform_type);
    type = (::g::Fuse::Transform_type*)uClassType::New("Fuse.Elements.InteractiveTransform", options);
    type->SetBase(::g::Fuse::Transform_typeof());
    type->fp_ctor_ = (void*)InteractiveTransform__New1_fn;
    type->fp_AppendTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*))InteractiveTransform__AppendTo_fn;
    type->fp_get_IsFlat = (void(*)(::g::Fuse::Transform*, bool*))InteractiveTransform__get_IsFlat_fn;
    type->fp_PrependTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*))InteractiveTransform__PrependTo_fn;
    ::TYPES[63] = ::g::Uno::Float2_typeof();
    ::TYPES[65] = ::g::Uno::Delegate_typeof();
    ::TYPES[110] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[15] = uObject_typeof();
    ::TYPES[111] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[112] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[113] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Float2_typeof());
    type->SetFields(4,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Elements::InteractiveTransform, _rotation), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Elements::InteractiveTransform, _translation), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Elements::InteractiveTransform, _zoomFactor), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::Fuse::Elements::InteractiveTransform, RotationChanged1), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float2_typeof()), offsetof(::g::Fuse::Elements::InteractiveTransform, TranslationChanged1), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::Fuse::Elements::InteractiveTransform, ZoomFactorChanged1), 0);
    type->Reflection.SetFunctions(16,
        new uFunction(".ctor", NULL, (void*)InteractiveTransform__New1_fn, 0, true, InteractiveTransform_typeof(), 0),
        new uFunction("get_Rotation", NULL, (void*)InteractiveTransform__get_Rotation_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Rotation", NULL, (void*)InteractiveTransform__set_Rotation_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("add_RotationChanged", NULL, (void*)InteractiveTransform__add_RotationChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float_typeof())),
        new uFunction("remove_RotationChanged", NULL, (void*)InteractiveTransform__remove_RotationChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float_typeof())),
        new uFunction("SetRotation", NULL, (void*)InteractiveTransform__SetRotation_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float_typeof(), uObject_typeof()),
        new uFunction("SetTranslation", NULL, (void*)InteractiveTransform__SetTranslation_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float2_typeof(), uObject_typeof()),
        new uFunction("SetZoomFactor", NULL, (void*)InteractiveTransform__SetZoomFactor_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float_typeof(), uObject_typeof()),
        new uFunction("get_Translation", NULL, (void*)InteractiveTransform__get_Translation_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Translation", NULL, (void*)InteractiveTransform__set_Translation_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("add_TranslationChanged", NULL, (void*)InteractiveTransform__add_TranslationChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float2_typeof())),
        new uFunction("remove_TranslationChanged", NULL, (void*)InteractiveTransform__remove_TranslationChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float2_typeof())),
        new uFunction("get_ZoomFactor", NULL, (void*)InteractiveTransform__get_ZoomFactor_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ZoomFactor", NULL, (void*)InteractiveTransform__set_ZoomFactor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("add_ZoomFactorChanged", NULL, (void*)InteractiveTransform__add_ZoomFactorChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float_typeof())),
        new uFunction("remove_ZoomFactorChanged", NULL, (void*)InteractiveTransform__remove_ZoomFactorChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float_typeof())));
    return type;
}

// public generated InteractiveTransform() :2136
void InteractiveTransform__ctor_1_fn(InteractiveTransform* __this)
{
    __this->ctor_1();
}

// internal void AppendRotationScale(Fuse.FastMatrix matrix) :2209
void InteractiveTransform__AppendRotationScale_fn(InteractiveTransform* __this, ::g::Fuse::FastMatrix* matrix)
{
    __this->AppendRotationScale(matrix);
}

// public override sealed void AppendTo(Fuse.FastMatrix matrix, [float weight]) :2202
void InteractiveTransform__AppendTo_fn(InteractiveTransform* __this, ::g::Fuse::FastMatrix* matrix, float* weight)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "AppendTo(Fuse.FastMatrix,[float])");
    float weight_ = *weight;
    uPtr(matrix)->AppendTranslation(__this->Translation().X, __this->Translation().Y, 0.0f);
    matrix->AppendScale(__this->ZoomFactor() * weight_);
    matrix->AppendRotation(__this->Rotation() * weight_);
}

// public override sealed bool get_IsFlat() :2193
void InteractiveTransform__get_IsFlat_fn(InteractiveTransform* __this, bool* __retval)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "get_IsFlat()");
    return *__retval = true, void();
}

// public generated InteractiveTransform New() :2136
void InteractiveTransform__New1_fn(InteractiveTransform** __retval)
{
    *__retval = InteractiveTransform::New1();
}

// public override sealed void PrependTo(Fuse.FastMatrix matrix) :2195
void InteractiveTransform__PrependTo_fn(InteractiveTransform* __this, ::g::Fuse::FastMatrix* matrix)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "PrependTo(Fuse.FastMatrix)");
    uPtr(matrix)->PrependRotation(__this->Rotation());
    matrix->PrependScale(__this->ZoomFactor());
    matrix->PrependTranslation(__this->Translation().X, __this->Translation().Y, 0.0f);
}

// public float get_Rotation() :2161
void InteractiveTransform__get_Rotation_fn(InteractiveTransform* __this, float* __retval)
{
    *__retval = __this->Rotation();
}

// public void set_Rotation(float value) :2162
void InteractiveTransform__set_Rotation_fn(InteractiveTransform* __this, float* value)
{
    __this->Rotation(*value);
}

// public generated void add_RotationChanged(Uno.UX.ValueChangedHandler<float> value) :2165
void InteractiveTransform__add_RotationChanged_fn(InteractiveTransform* __this, uDelegate* value)
{
    __this->add_RotationChanged(value);
}

// public generated void remove_RotationChanged(Uno.UX.ValueChangedHandler<float> value) :2165
void InteractiveTransform__remove_RotationChanged_fn(InteractiveTransform* __this, uDelegate* value)
{
    __this->remove_RotationChanged(value);
}

// public void SetRotation(float value, [object origin]) :2167
void InteractiveTransform__SetRotation_fn(InteractiveTransform* __this, float* value, uObject* origin)
{
    __this->SetRotation(*value, origin);
}

// public void SetTranslation(float2 value, [object origin]) :2185
void InteractiveTransform__SetTranslation_fn(InteractiveTransform* __this, ::g::Uno::Float2* value, uObject* origin)
{
    __this->SetTranslation(*value, origin);
}

// public void SetZoomFactor(float value, [object origin]) :2148
void InteractiveTransform__SetZoomFactor_fn(InteractiveTransform* __this, float* value, uObject* origin)
{
    __this->SetZoomFactor(*value, origin);
}

// public float2 get_Translation() :2179
void InteractiveTransform__get_Translation_fn(InteractiveTransform* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Translation();
}

// public void set_Translation(float2 value) :2180
void InteractiveTransform__set_Translation_fn(InteractiveTransform* __this, ::g::Uno::Float2* value)
{
    __this->Translation(*value);
}

// public generated void add_TranslationChanged(Uno.UX.ValueChangedHandler<float2> value) :2183
void InteractiveTransform__add_TranslationChanged_fn(InteractiveTransform* __this, uDelegate* value)
{
    __this->add_TranslationChanged(value);
}

// public generated void remove_TranslationChanged(Uno.UX.ValueChangedHandler<float2> value) :2183
void InteractiveTransform__remove_TranslationChanged_fn(InteractiveTransform* __this, uDelegate* value)
{
    __this->remove_TranslationChanged(value);
}

// public float get_ZoomFactor() :2142
void InteractiveTransform__get_ZoomFactor_fn(InteractiveTransform* __this, float* __retval)
{
    *__retval = __this->ZoomFactor();
}

// public void set_ZoomFactor(float value) :2143
void InteractiveTransform__set_ZoomFactor_fn(InteractiveTransform* __this, float* value)
{
    __this->ZoomFactor(*value);
}

// public generated void add_ZoomFactorChanged(Uno.UX.ValueChangedHandler<float> value) :2146
void InteractiveTransform__add_ZoomFactorChanged_fn(InteractiveTransform* __this, uDelegate* value)
{
    __this->add_ZoomFactorChanged(value);
}

// public generated void remove_ZoomFactorChanged(Uno.UX.ValueChangedHandler<float> value) :2146
void InteractiveTransform__remove_ZoomFactorChanged_fn(InteractiveTransform* __this, uDelegate* value)
{
    __this->remove_ZoomFactorChanged(value);
}

// public generated InteractiveTransform() [instance] :2136
void InteractiveTransform::ctor_1()
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", ".ctor()");
    _zoomFactor = 1.0f;
    _rotation = 0.0f;
    ctor_();
}

// internal void AppendRotationScale(Fuse.FastMatrix matrix) [instance] :2209
void InteractiveTransform::AppendRotationScale(::g::Fuse::FastMatrix* matrix)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "AppendRotationScale(Fuse.FastMatrix)");
    uPtr(matrix)->AppendScale(ZoomFactor());
    matrix->AppendRotation(Rotation());
}

// public float get_Rotation() [instance] :2161
float InteractiveTransform::Rotation()
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "get_Rotation()");
    return _rotation;
}

// public void set_Rotation(float value) [instance] :2162
void InteractiveTransform::Rotation(float value)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "set_Rotation(float)");
    SetRotation(value, NULL);
}

// public generated void add_RotationChanged(Uno.UX.ValueChangedHandler<float> value) [instance] :2165
void InteractiveTransform::add_RotationChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "add_RotationChanged(Uno.UX.ValueChangedHandler<float>)");
    RotationChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(RotationChanged1, value), ::TYPES[110/*Uno.UX.ValueChangedHandler<float>*/]);
}

// public generated void remove_RotationChanged(Uno.UX.ValueChangedHandler<float> value) [instance] :2165
void InteractiveTransform::remove_RotationChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "remove_RotationChanged(Uno.UX.ValueChangedHandler<float>)");
    RotationChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(RotationChanged1, value), ::TYPES[110/*Uno.UX.ValueChangedHandler<float>*/]);
}

// public void SetRotation(float value, [object origin]) [instance] :2167
void InteractiveTransform::SetRotation(float value, uObject* origin)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "SetRotation(float,[object])");
    ::g::Uno::UX::ValueChangedArgs* ret2;
    _rotation = value;

    if (::g::Uno::Delegate::op_Inequality(RotationChanged1, NULL))
        uPtr(RotationChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[111/*Uno.UX.ValueChangedArgs<float>*/], uCRef(_rotation), (origin != NULL) ? origin : this, &ret2), ret2));

    OnMatrixChanged();
}

// public void SetTranslation(float2 value, [object origin]) [instance] :2185
void InteractiveTransform::SetTranslation(::g::Uno::Float2 value, uObject* origin)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "SetTranslation(float2,[object])");
    ::g::Uno::UX::ValueChangedArgs* ret3;
    _translation = value;

    if (::g::Uno::Delegate::op_Inequality(TranslationChanged1, NULL))
        uPtr(TranslationChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[113/*Uno.UX.ValueChangedArgs<float2>*/], uCRef(_translation), (origin != NULL) ? origin : this, &ret3), ret3));

    OnMatrixChanged();
}

// public void SetZoomFactor(float value, [object origin]) [instance] :2148
void InteractiveTransform::SetZoomFactor(float value, uObject* origin)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "SetZoomFactor(float,[object])");
    ::g::Uno::UX::ValueChangedArgs* ret4;
    _zoomFactor = value;

    if (::g::Uno::Delegate::op_Inequality(ZoomFactorChanged1, NULL))
        uPtr(ZoomFactorChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[111/*Uno.UX.ValueChangedArgs<float>*/], uCRef(_zoomFactor), (origin != NULL) ? origin : this, &ret4), ret4));

    OnMatrixChanged();
}

// public float2 get_Translation() [instance] :2179
::g::Uno::Float2 InteractiveTransform::Translation()
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "get_Translation()");
    return _translation;
}

// public void set_Translation(float2 value) [instance] :2180
void InteractiveTransform::Translation(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "set_Translation(float2)");
    SetTranslation(value, NULL);
}

// public generated void add_TranslationChanged(Uno.UX.ValueChangedHandler<float2> value) [instance] :2183
void InteractiveTransform::add_TranslationChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "add_TranslationChanged(Uno.UX.ValueChangedHandler<float2>)");
    TranslationChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(TranslationChanged1, value), ::TYPES[112/*Uno.UX.ValueChangedHandler<float2>*/]);
}

// public generated void remove_TranslationChanged(Uno.UX.ValueChangedHandler<float2> value) [instance] :2183
void InteractiveTransform::remove_TranslationChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "remove_TranslationChanged(Uno.UX.ValueChangedHandler<float2>)");
    TranslationChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(TranslationChanged1, value), ::TYPES[112/*Uno.UX.ValueChangedHandler<float2>*/]);
}

// public float get_ZoomFactor() [instance] :2142
float InteractiveTransform::ZoomFactor()
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "get_ZoomFactor()");
    return _zoomFactor;
}

// public void set_ZoomFactor(float value) [instance] :2143
void InteractiveTransform::ZoomFactor(float value)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "set_ZoomFactor(float)");
    SetZoomFactor(value, NULL);
}

// public generated void add_ZoomFactorChanged(Uno.UX.ValueChangedHandler<float> value) [instance] :2146
void InteractiveTransform::add_ZoomFactorChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "add_ZoomFactorChanged(Uno.UX.ValueChangedHandler<float>)");
    ZoomFactorChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ZoomFactorChanged1, value), ::TYPES[110/*Uno.UX.ValueChangedHandler<float>*/]);
}

// public generated void remove_ZoomFactorChanged(Uno.UX.ValueChangedHandler<float> value) [instance] :2146
void InteractiveTransform::remove_ZoomFactorChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "remove_ZoomFactorChanged(Uno.UX.ValueChangedHandler<float>)");
    ZoomFactorChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ZoomFactorChanged1, value), ::TYPES[110/*Uno.UX.ValueChangedHandler<float>*/]);
}

// public generated InteractiveTransform New() [static] :2136
InteractiveTransform* InteractiveTransform::New1()
{
    InteractiveTransform* obj1 = (InteractiveTransform*)uNew(InteractiveTransform_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#13
// ------------------------------------------------------------

// public abstract interface ITransformOrigin :1790
// {
uInterfaceType* ITransformOrigin_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Elements.ITransformOrigin", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("GetOffset", NULL, NULL, offsetof(ITransformOrigin, fp_GetOffset), false, ::g::Uno::Float3_typeof(), 1, ::g::Fuse::Elements::Element_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#17
// ------------------------------------------------------------

// public sealed class LayoutMasterBoxSizing :2231
// {
// static LayoutMasterBoxSizing() :2231
static void LayoutMasterBoxSizing__cctor__fn(uType* __type)
{
    LayoutMasterBoxSizing::Singleton_ = LayoutMasterBoxSizing::New1();
    LayoutMasterBoxSizing::_layoutMasterDataProperty_ = ::g::Fuse::Properties::CreateHandle();
}

::g::Fuse::Elements::BoxSizing_type* LayoutMasterBoxSizing_typeof()
{
    static uSStrong< ::g::Fuse::Elements::BoxSizing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LayoutMasterBoxSizing);
    options.TypeSize = sizeof(::g::Fuse::Elements::BoxSizing_type);
    type = (::g::Fuse::Elements::BoxSizing_type*)uClassType::New("Fuse.Elements.LayoutMasterBoxSizing", options);
    type->SetBase(::g::Fuse::Elements::BoxSizing_typeof());
    type->fp_ctor_ = (void*)LayoutMasterBoxSizing__New1_fn;
    type->fp_cctor_ = LayoutMasterBoxSizing__cctor__fn;
    type->fp_CalcArrangePaddingSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))LayoutMasterBoxSizing__CalcArrangePaddingSize_fn;
    type->fp_CalcBoxPlacement = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Fuse::Elements::BoxPlacement*))LayoutMasterBoxSizing__CalcBoxPlacement_fn;
    type->fp_CalcMarginSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))LayoutMasterBoxSizing__CalcMarginSize_fn;
    type->fp_IsContentRelativeSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, int*))LayoutMasterBoxSizing__IsContentRelativeSize_fn;
    type->fp_RequestLayout = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*))LayoutMasterBoxSizing__RequestLayout_fn;
    ::TYPES[59] = ::g::Fuse::Elements::StandardBoxSizing_typeof();
    ::TYPES[70] = ::g::Fuse::Elements::BoxPlacement_typeof();
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[114] = LayoutMasterBoxSizing__LayoutMasterData_typeof();
    ::TYPES[6] = ::g::Fuse::Node_typeof();
    ::TYPES[15] = uObject_typeof();
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Elements::LayoutMasterBoxSizing::_layoutMasterDataProperty_, uFieldFlagsStatic,
        LayoutMasterBoxSizing_typeof(), (uintptr_t)&::g::Fuse::Elements::LayoutMasterBoxSizing::Singleton_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Singleton", 1));
    type->Reflection.SetFunctions(6,
        new uFunction("GetLayoutMaster", NULL, (void*)LayoutMasterBoxSizing__GetLayoutMaster_fn, 0, true, ::g::Fuse::Elements::Element_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction("GetLayoutMasterMode", NULL, (void*)LayoutMasterBoxSizing__GetLayoutMasterMode_fn, 0, true, ::g::Fuse::Elements::LayoutMasterMode_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction(".ctor", NULL, (void*)LayoutMasterBoxSizing__New1_fn, 0, true, LayoutMasterBoxSizing_typeof(), 0),
        new uFunction("ResetLayoutMaster", NULL, (void*)LayoutMasterBoxSizing__ResetLayoutMaster_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction("SetLayoutMaster", NULL, (void*)LayoutMasterBoxSizing__SetLayoutMaster_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Elements::Element_typeof(), ::g::Fuse::Elements::Element_typeof()),
        new uFunction("SetLayoutMasterMode", NULL, (void*)LayoutMasterBoxSizing__SetLayoutMasterMode_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Elements::Element_typeof(), ::g::Fuse::Elements::LayoutMasterMode_typeof()));
    return type;
}

// public generated LayoutMasterBoxSizing() :2231
void LayoutMasterBoxSizing__ctor_1_fn(LayoutMasterBoxSizing* __this)
{
    __this->ctor_1();
}

// public override sealed float2 CalcArrangePaddingSize(Fuse.Elements.Element element, Fuse.LayoutParams lp) :2266
void LayoutMasterBoxSizing__CalcArrangePaddingSize_fn(LayoutMasterBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing", "CalcArrangePaddingSize(Fuse.Elements.Element,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    return *__retval = uPtr(::g::Fuse::Elements::StandardBoxSizing::Singleton())->CalcArrangePaddingSize(element, lp_), void();
}

// public override sealed Fuse.Elements.BoxPlacement CalcBoxPlacement(Fuse.Elements.Element element, float2 position, Fuse.LayoutParams lp) :2235
void LayoutMasterBoxSizing__CalcBoxPlacement_fn(LayoutMasterBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Fuse::Elements::BoxPlacement* __retval)
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing", "CalcBoxPlacement(Fuse.Elements.Element,float2,Fuse.LayoutParams)");
    ::g::Uno::Float2 position_ = *position;
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Fuse::Elements::Element* master = LayoutMasterBoxSizing::GetLayoutMaster(element);

    if (master == NULL)
    {
        ::g::Fuse::Elements::BoxPlacement bp;
        bp.MarginBox = uPtr(element)->ActualSize();
        bp.Position = element->ActualPosition();
        bp.Size = element->ActualSize();
        return *__retval = bp, void();
    }

    return *__retval = uPtr(::g::Fuse::Elements::StandardBoxSizing::Singleton())->CalcBoxPlacement(element, position_, lp_), void();
}

// public override sealed float2 CalcMarginSize(Fuse.Elements.Element element, Fuse.LayoutParams lp) :2257
void LayoutMasterBoxSizing__CalcMarginSize_fn(LayoutMasterBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing", "CalcMarginSize(Fuse.Elements.Element,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Fuse::Elements::Element* master = LayoutMasterBoxSizing::GetLayoutMaster(element);

    if (master == NULL)
        return *__retval = uPtr(element)->ActualSize(), void();

    return *__retval = uPtr(::g::Fuse::Elements::StandardBoxSizing::Singleton())->CalcMarginSize(element, lp_), void();
}

// public static Fuse.Elements.Element GetLayoutMaster(Fuse.Elements.Element elm) :2381
void LayoutMasterBoxSizing__GetLayoutMaster_fn(::g::Fuse::Elements::Element* elm, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = LayoutMasterBoxSizing::GetLayoutMaster(elm);
}

// private static Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData GetLayoutMasterData(Fuse.Elements.Element elm) :2356
void LayoutMasterBoxSizing__GetLayoutMasterData_fn(::g::Fuse::Elements::Element* elm, LayoutMasterBoxSizing__LayoutMasterData** __retval)
{
    *__retval = LayoutMasterBoxSizing::GetLayoutMasterData(elm);
}

// public static Fuse.Elements.LayoutMasterMode GetLayoutMasterMode(Fuse.Elements.Element elm) :2399
void LayoutMasterBoxSizing__GetLayoutMasterMode_fn(::g::Fuse::Elements::Element* elm, int* __retval)
{
    *__retval = LayoutMasterBoxSizing::GetLayoutMasterMode(elm);
}

// public override sealed Fuse.LayoutDependent IsContentRelativeSize(Fuse.Elements.Element element) :2368
void LayoutMasterBoxSizing__IsContentRelativeSize_fn(LayoutMasterBoxSizing* __this, ::g::Fuse::Elements::Element* element, int* __retval)
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing", "IsContentRelativeSize(Fuse.Elements.Element)");
    return *__retval = 0, void();
}

// public generated LayoutMasterBoxSizing New() :2231
void LayoutMasterBoxSizing__New1_fn(LayoutMasterBoxSizing** __retval)
{
    *__retval = LayoutMasterBoxSizing::New1();
}

// public override sealed void RequestLayout(Fuse.Elements.Element element) :2251
void LayoutMasterBoxSizing__RequestLayout_fn(LayoutMasterBoxSizing* __this, ::g::Fuse::Elements::Element* element)
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing", "RequestLayout(Fuse.Elements.Element)");
    LayoutMasterBoxSizing__LayoutMasterData* data = LayoutMasterBoxSizing::GetLayoutMasterData(element);
    uPtr(data)->ScheduleCheckLayout();
}

// public static void ResetLayoutMaster(Fuse.Elements.Element elm) :2387
void LayoutMasterBoxSizing__ResetLayoutMaster_fn(::g::Fuse::Elements::Element* elm)
{
    LayoutMasterBoxSizing::ResetLayoutMaster(elm);
}

// public static void SetLayoutMaster(Fuse.Elements.Element elm, Fuse.Elements.Element master) :2375
void LayoutMasterBoxSizing__SetLayoutMaster_fn(::g::Fuse::Elements::Element* elm, ::g::Fuse::Elements::Element* master)
{
    LayoutMasterBoxSizing::SetLayoutMaster(elm, master);
}

// public static void SetLayoutMasterMode(Fuse.Elements.Element elm, Fuse.Elements.LayoutMasterMode mode) :2393
void LayoutMasterBoxSizing__SetLayoutMasterMode_fn(::g::Fuse::Elements::Element* elm, int* mode)
{
    LayoutMasterBoxSizing::SetLayoutMasterMode(elm, *mode);
}

uSStrong< ::g::Fuse::PropertyHandle*> LayoutMasterBoxSizing::_layoutMasterDataProperty_;
uSStrong<LayoutMasterBoxSizing*> LayoutMasterBoxSizing::Singleton_;

// public generated LayoutMasterBoxSizing() [instance] :2231
void LayoutMasterBoxSizing::ctor_1()
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing", ".ctor()");
    ctor_();
}

// public static Fuse.Elements.Element GetLayoutMaster(Fuse.Elements.Element elm) [static] :2381
::g::Fuse::Elements::Element* LayoutMasterBoxSizing::GetLayoutMaster(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing", "GetLayoutMaster(Fuse.Elements.Element)");
    LayoutMasterBoxSizing_typeof()->Init();
    return uPtr(LayoutMasterBoxSizing::GetLayoutMasterData(elm))->Master();
}

// private static Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData GetLayoutMasterData(Fuse.Elements.Element elm) [static] :2356
LayoutMasterBoxSizing__LayoutMasterData* LayoutMasterBoxSizing::GetLayoutMasterData(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing", "GetLayoutMasterData(Fuse.Elements.Element)");
    LayoutMasterBoxSizing_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(LayoutMasterBoxSizing::_layoutMasterDataProperty(), &v))
        return uCast<LayoutMasterBoxSizing__LayoutMasterData*>(v, ::TYPES[114/*Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData*/]);

    LayoutMasterBoxSizing__LayoutMasterData* sd = LayoutMasterBoxSizing__LayoutMasterData::New1();
    sd->Element = elm;
    uPtr(uPtr(elm)->Properties())->Set(LayoutMasterBoxSizing::_layoutMasterDataProperty(), sd);
    return sd;
}

// public static Fuse.Elements.LayoutMasterMode GetLayoutMasterMode(Fuse.Elements.Element elm) [static] :2399
int LayoutMasterBoxSizing::GetLayoutMasterMode(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing", "GetLayoutMasterMode(Fuse.Elements.Element)");
    LayoutMasterBoxSizing_typeof()->Init();
    return uPtr(LayoutMasterBoxSizing::GetLayoutMasterData(elm))->Mode;
}

// public generated LayoutMasterBoxSizing New() [static] :2231
LayoutMasterBoxSizing* LayoutMasterBoxSizing::New1()
{
    LayoutMasterBoxSizing* obj1 = (LayoutMasterBoxSizing*)uNew(LayoutMasterBoxSizing_typeof());
    obj1->ctor_1();
    return obj1;
}

// public static void ResetLayoutMaster(Fuse.Elements.Element elm) [static] :2387
void LayoutMasterBoxSizing::ResetLayoutMaster(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing", "ResetLayoutMaster(Fuse.Elements.Element)");
    LayoutMasterBoxSizing_typeof()->Init();
    uPtr(LayoutMasterBoxSizing::GetLayoutMasterData(elm))->Master(NULL);
}

// public static void SetLayoutMaster(Fuse.Elements.Element elm, Fuse.Elements.Element master) [static] :2375
void LayoutMasterBoxSizing::SetLayoutMaster(::g::Fuse::Elements::Element* elm, ::g::Fuse::Elements::Element* master)
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing", "SetLayoutMaster(Fuse.Elements.Element,Fuse.Elements.Element)");
    LayoutMasterBoxSizing_typeof()->Init();
    uPtr(LayoutMasterBoxSizing::GetLayoutMasterData(elm))->Master(master);
}

// public static void SetLayoutMasterMode(Fuse.Elements.Element elm, Fuse.Elements.LayoutMasterMode mode) [static] :2393
void LayoutMasterBoxSizing::SetLayoutMasterMode(::g::Fuse::Elements::Element* elm, int mode)
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing", "SetLayoutMasterMode(Fuse.Elements.Element,Fuse.Elements.LayoutMasterMode)");
    LayoutMasterBoxSizing_typeof()->Init();
    uPtr(LayoutMasterBoxSizing::GetLayoutMasterData(elm))->Mode = mode;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#17
// ------------------------------------------------------------

// private sealed class LayoutMasterBoxSizing.LayoutMasterData :2273
// {
uType* LayoutMasterBoxSizing__LayoutMasterData_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(LayoutMasterBoxSizing__LayoutMasterData);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData", options);
    type->fp_ctor_ = (void*)LayoutMasterBoxSizing__LayoutMasterData__New1_fn;
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[6] = ::g::Fuse::Node_typeof();
    ::TYPES[0] = ::g::Uno::Int_typeof();
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[97] = ::g::Uno::Float4_typeof();
    ::TYPES[9] = ::g::Uno::Rect_typeof();
    ::TYPES[75] = ::g::Uno::Action_typeof();
    ::TYPES[66] = ::g::Fuse::PlacedHandler_typeof();
    type->SetFields(0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Elements::LayoutMasterBoxSizing__LayoutMasterData, _master), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::LayoutMasterBoxSizing__LayoutMasterData, _pendingCheckLayout), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Elements::LayoutMasterBoxSizing__LayoutMasterData, Element), uFieldFlagsWeak,
        ::g::Fuse::Elements::LayoutMasterMode_typeof(), offsetof(::g::Fuse::Elements::LayoutMasterBoxSizing__LayoutMasterData, Mode), 0);
    return type;
}

// public generated LayoutMasterData() :2273
void LayoutMasterBoxSizing__LayoutMasterData__ctor__fn(LayoutMasterBoxSizing__LayoutMasterData* __this)
{
    __this->ctor_();
}

// internal void CheckLayout() :2316
void LayoutMasterBoxSizing__LayoutMasterData__CheckLayout_fn(LayoutMasterBoxSizing__LayoutMasterData* __this)
{
    __this->CheckLayout();
}

// public Fuse.Elements.Element get_Master() :2283
void LayoutMasterBoxSizing__LayoutMasterData__get_Master_fn(LayoutMasterBoxSizing__LayoutMasterData* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->Master();
}

// public void set_Master(Fuse.Elements.Element value) :2284
void LayoutMasterBoxSizing__LayoutMasterData__set_Master_fn(LayoutMasterBoxSizing__LayoutMasterData* __this, ::g::Fuse::Elements::Element* value)
{
    __this->Master(value);
}

// public generated LayoutMasterData New() :2273
void LayoutMasterBoxSizing__LayoutMasterData__New1_fn(LayoutMasterBoxSizing__LayoutMasterData** __retval)
{
    *__retval = LayoutMasterBoxSizing__LayoutMasterData::New1();
}

// private void OnPlaced(object s, object args) :2350
void LayoutMasterBoxSizing__LayoutMasterData__OnPlaced_fn(LayoutMasterBoxSizing__LayoutMasterData* __this, uObject* s, uObject* args)
{
    __this->OnPlaced(s, args);
}

// internal void ScheduleCheckLayout() :2306
void LayoutMasterBoxSizing__LayoutMasterData__ScheduleCheckLayout_fn(LayoutMasterBoxSizing__LayoutMasterData* __this)
{
    __this->ScheduleCheckLayout();
}

// public generated LayoutMasterData() [instance] :2273
void LayoutMasterBoxSizing__LayoutMasterData::ctor_()
{
}

// internal void CheckLayout() [instance] :2316
void LayoutMasterBoxSizing__LayoutMasterData::CheckLayout()
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData", "CheckLayout()");
    ::g::Uno::Float4 ind1;
    _pendingCheckLayout = false;

    if ((((Element == NULL) || (_master == NULL)) || !uPtr(_master)->IsLocalRooted()) || !uPtr(Element)->IsLocalRooted())
        return;

    ::g::Uno::Float2 pos = ::g::Uno::Float2__New1(0.0f);
    ::g::Uno::Float2 size = ::g::Uno::Float2__New1(0.0f);

    if (Mode == 1)
    {
        pos = uPtr(_master)->ActualPosition();
        size = uPtr(_master)->ActualSize();
    }
    else if (Mode == 2)
    {
        ::g::Fuse::Elements::Element* pe = uAs< ::g::Fuse::Elements::Element*>(uPtr(_master)->Parent(), ::TYPES[2/*Fuse.Elements.Element*/]);

        if (pe != NULL)
        {
            pos = uPtr(pe)->ActualPosition();
            size = pe->ActualSize();
        }
    }
    else
    {
        ::g::Uno::Float4x4 m = uPtr(uPtr(_master)->Parent())->GetTransformTo(uPtr(Element)->Parent());
        pos = (ind1 = ::g::Uno::Vector::Transform1(uPtr(_master)->ActualPosition(), m), ::g::Uno::Float2__New2(ind1.X, ind1.Y));
        ::g::Uno::Rect r = ::g::Uno::Rect__New2(::g::Uno::Float2__New1(0.0f), uPtr(_master)->ActualSize());
        size = ::g::Uno::Rect__Transform(r, m).Size();
    }

    uPtr(Element)->ArrangeMarginBox(pos, ::g::Fuse::LayoutParams__Create(size));
}

// public Fuse.Elements.Element get_Master() [instance] :2283
::g::Fuse::Elements::Element* LayoutMasterBoxSizing__LayoutMasterData::Master()
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData", "get_Master()");
    return _master;
}

// public void set_Master(Fuse.Elements.Element value) [instance] :2284
void LayoutMasterBoxSizing__LayoutMasterData::Master(::g::Fuse::Elements::Element* value)
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData", "set_Master(Fuse.Elements.Element)");

    if (_master == value)
        return;

    if (_master != NULL)
        uPtr(_master)->remove_Placed(uDelegate::New(::TYPES[66/*Fuse.PlacedHandler*/], (void*)LayoutMasterBoxSizing__LayoutMasterData__OnPlaced_fn, this));

    _master = value;

    if (_master != NULL)
        uPtr(_master)->add_Placed(uDelegate::New(::TYPES[66/*Fuse.PlacedHandler*/], (void*)LayoutMasterBoxSizing__LayoutMasterData__OnPlaced_fn, this));

    if (uPtr(Element)->IsLocalRooted())
        ScheduleCheckLayout();
}

// private void OnPlaced(object s, object args) [instance] :2350
void LayoutMasterBoxSizing__LayoutMasterData::OnPlaced(uObject* s, uObject* args)
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData", "OnPlaced(object,object)");
    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[75/*Uno.Action*/], (void*)LayoutMasterBoxSizing__LayoutMasterData__CheckLayout_fn, this), -1);
}

// internal void ScheduleCheckLayout() [instance] :2306
void LayoutMasterBoxSizing__LayoutMasterData::ScheduleCheckLayout()
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData", "ScheduleCheckLayout()");

    if (!_pendingCheckLayout)
    {
        _pendingCheckLayout = true;
        ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[75/*Uno.Action*/], (void*)LayoutMasterBoxSizing__LayoutMasterData__CheckLayout_fn, this), -1);
    }
}

// public generated LayoutMasterData New() [static] :2273
LayoutMasterBoxSizing__LayoutMasterData* LayoutMasterBoxSizing__LayoutMasterData::New1()
{
    LayoutMasterBoxSizing__LayoutMasterData* obj2 = (LayoutMasterBoxSizing__LayoutMasterData*)uNew(LayoutMasterBoxSizing__LayoutMasterData_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#17
// ------------------------------------------------------------

// public enum LayoutMasterMode :2224
uEnumType* LayoutMasterMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.LayoutMasterMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "ParentTransform", 0LL,
        "LocalLayout", 1LL,
        "ParentLayout", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#18
// ------------------------------------------------------------

// public sealed class LimitBoxSizing :2414
// {
// static LimitBoxSizing() :2414
static void LimitBoxSizing__cctor__fn(uType* __type)
{
    LimitBoxSizing::Singleton_ = LimitBoxSizing::New1();
}

::g::Fuse::Elements::BoxSizing_type* LimitBoxSizing_typeof()
{
    static uSStrong< ::g::Fuse::Elements::BoxSizing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(LimitBoxSizing);
    options.TypeSize = sizeof(::g::Fuse::Elements::BoxSizing_type);
    type = (::g::Fuse::Elements::BoxSizing_type*)uClassType::New("Fuse.Elements.LimitBoxSizing", options);
    type->SetBase(::g::Fuse::Elements::BoxSizing_typeof());
    type->fp_ctor_ = (void*)LimitBoxSizing__New1_fn;
    type->fp_cctor_ = LimitBoxSizing__cctor__fn;
    type->fp_CalcArrangePaddingSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))LimitBoxSizing__CalcArrangePaddingSize_fn;
    type->fp_CalcBoxPlacement = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Fuse::Elements::BoxPlacement*))LimitBoxSizing__CalcBoxPlacement_fn;
    type->fp_CalcMarginSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))LimitBoxSizing__CalcMarginSize_fn;
    ::TYPES[59] = ::g::Fuse::Elements::StandardBoxSizing_typeof();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[63] = ::g::Uno::Float2_typeof();
    ::TYPES[6] = ::g::Fuse::Node_typeof();
    type->SetFields(0,
        LimitBoxSizing_typeof(), (uintptr_t)&::g::Fuse::Elements::LimitBoxSizing::Singleton_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Singleton", 0));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)LimitBoxSizing__New1_fn, 0, true, LimitBoxSizing_typeof(), 0));
    return type;
}

// public generated LimitBoxSizing() :2414
void LimitBoxSizing__ctor_1_fn(LimitBoxSizing* __this)
{
    __this->ctor_1();
}

// public override sealed float2 CalcArrangePaddingSize(Fuse.Elements.Element element, Fuse.LayoutParams lp) :2434
void LimitBoxSizing__CalcArrangePaddingSize_fn(LimitBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.LimitBoxSizing", "CalcArrangePaddingSize(Fuse.Elements.Element,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    return *__retval = uPtr(::g::Fuse::Elements::StandardBoxSizing::Singleton())->CalcArrangePaddingSize(element, lp_), void();
}

// public override sealed Fuse.Elements.BoxPlacement CalcBoxPlacement(Fuse.Elements.Element element, float2 position, Fuse.LayoutParams lp) :2418
void LimitBoxSizing__CalcBoxPlacement_fn(LimitBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Fuse::Elements::BoxPlacement* __retval)
{
    uStackFrame __("Fuse.Elements.LimitBoxSizing", "CalcBoxPlacement(Fuse.Elements.Element,float2,Fuse.LayoutParams)");
    ::g::Uno::Float2 position_ = *position;
    ::g::Fuse::LayoutParams lp_ = *lp;
    return *__retval = uPtr(::g::Fuse::Elements::StandardBoxSizing::Singleton())->CalcBoxPlacement(element, position_, lp_), void();
}

// public override sealed float2 CalcMarginSize(Fuse.Elements.Element element, Fuse.LayoutParams lp) :2423
void LimitBoxSizing__CalcMarginSize_fn(LimitBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.LimitBoxSizing", "CalcMarginSize(Fuse.Elements.Element,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    bool ret2;
    bool ret3;
    ::g::Fuse::LayoutParams nlp = lp_.DeriveClone();
    nlp.RetainXY(!(::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::LimitWidthProperty()), element, &ret2), ret2), !(::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::LimitHeightProperty()), element, &ret3), ret3));
    ::g::Uno::Float2 std = uPtr(::g::Fuse::Elements::StandardBoxSizing::Singleton())->CalcMarginSize(element, nlp);
    ::g::Uno::Float2 c = __this->Limit(element, std);
    return *__retval = c, void();
}

// private float2 Limit(Fuse.Elements.Element element, float2 std) :2439
void LimitBoxSizing__Limit_fn(LimitBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* std, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Limit(element, *std);
}

// public generated LimitBoxSizing New() :2414
void LimitBoxSizing__New1_fn(LimitBoxSizing** __retval)
{
    *__retval = LimitBoxSizing::New1();
}

uSStrong<LimitBoxSizing*> LimitBoxSizing::Singleton_;

// public generated LimitBoxSizing() [instance] :2414
void LimitBoxSizing::ctor_1()
{
    uStackFrame __("Fuse.Elements.LimitBoxSizing", ".ctor()");
    ctor_();
}

// private float2 Limit(Fuse.Elements.Element element, float2 std) [instance] :2439
::g::Uno::Float2 LimitBoxSizing::Limit(::g::Fuse::Elements::Element* element, ::g::Uno::Float2 std)
{
    uStackFrame __("Fuse.Elements.LimitBoxSizing", "Limit(Fuse.Elements.Element,float2)");
    bool ret4;
    ::g::Uno::UX::Size ret5;
    bool ret6;
    ::g::Uno::UX::Size ret7;

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::LimitHeightProperty()), element, &ret4), ret4))
    {
        ::g::Uno::UX::Size height = (::g::Fuse::StyleProperty1__Get_fn(uPtr(::g::Fuse::Elements::Element::LimitHeightProperty()), element, &ret5), ret5);
        bool known;
        float size = UnitSize(element, height, std.Y, true, &known);
        std.Y = ::g::Uno::Math::Min1(std.Y, size);
    }

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::LimitWidthProperty()), element, &ret6), ret6))
    {
        ::g::Uno::UX::Size height1 = (::g::Fuse::StyleProperty1__Get_fn(uPtr(::g::Fuse::Elements::Element::LimitWidthProperty()), element, &ret7), ret7);
        bool known1;
        float size1 = UnitSize(element, height1, std.X, true, &known1);
        std.X = ::g::Uno::Math::Min1(std.X, size1);
    }

    if (uPtr(element)->SnapToPixels())
        std = uPtr(element)->InternSnap(std);

    return std;
}

// public generated LimitBoxSizing New() [static] :2414
LimitBoxSizing* LimitBoxSizing::New1()
{
    LimitBoxSizing* obj1 = (LimitBoxSizing*)uNew(LimitBoxSizing_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#1
// -----------------------------------------------------------

// internal sealed class NoImplicitMaxBoxSizing :496
// {
// static NoImplicitMaxBoxSizing() :496
static void NoImplicitMaxBoxSizing__cctor_1_fn(uType* __type)
{
    NoImplicitMaxBoxSizing::Singleton1_ = NoImplicitMaxBoxSizing::New2();
}

::g::Fuse::Elements::BoxSizing_type* NoImplicitMaxBoxSizing_typeof()
{
    static uSStrong< ::g::Fuse::Elements::BoxSizing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NoImplicitMaxBoxSizing);
    options.TypeSize = sizeof(::g::Fuse::Elements::BoxSizing_type);
    type = (::g::Fuse::Elements::BoxSizing_type*)uClassType::New("Fuse.Elements.NoImplicitMaxBoxSizing", options);
    type->SetBase(::g::Fuse::Elements::StandardBoxSizing_typeof());
    type->fp_ctor_ = (void*)NoImplicitMaxBoxSizing__New2_fn;
    type->fp_cctor_ = NoImplicitMaxBoxSizing__cctor_1_fn;
    ::TYPES[59] = ::g::Fuse::Elements::StandardBoxSizing_typeof();
    type->SetFields(2,
        NoImplicitMaxBoxSizing_typeof(), (uintptr_t)&::g::Fuse::Elements::NoImplicitMaxBoxSizing::Singleton1_, uFieldFlagsStatic);
    return type;
}

// public NoImplicitMaxBoxSizing() :500
void NoImplicitMaxBoxSizing__ctor_2_fn(NoImplicitMaxBoxSizing* __this)
{
    __this->ctor_2();
}

// public NoImplicitMaxBoxSizing New() :500
void NoImplicitMaxBoxSizing__New2_fn(NoImplicitMaxBoxSizing** __retval)
{
    *__retval = NoImplicitMaxBoxSizing::New2();
}

uSStrong<NoImplicitMaxBoxSizing*> NoImplicitMaxBoxSizing::Singleton1_;

// public NoImplicitMaxBoxSizing() [instance] :500
void NoImplicitMaxBoxSizing::ctor_2()
{
    uStackFrame __("Fuse.Elements.NoImplicitMaxBoxSizing", ".ctor()");
    ctor_1();
    ImplicitMax = false;
}

// public NoImplicitMaxBoxSizing New() [static] :500
NoImplicitMaxBoxSizing* NoImplicitMaxBoxSizing::New2()
{
    NoImplicitMaxBoxSizing* obj1 = (NoImplicitMaxBoxSizing*)uNew(NoImplicitMaxBoxSizing_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#19
// ------------------------------------------------------------

// private class TranslationModes.OffsetMode :2501
// {
TranslationModes__OffsetMode_type* TranslationModes__OffsetMode_typeof()
{
    static uSStrong<TranslationModes__OffsetMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__OffsetMode);
    options.TypeSize = sizeof(TranslationModes__OffsetMode_type);
    type = (TranslationModes__OffsetMode_type*)uClassType::New("Fuse.Elements.TranslationModes.OffsetMode", options);
    type->fp_GetDstOffset = TranslationModes__OffsetMode__GetDstOffset_fn;
    type->fp_GetSrcOffset = TranslationModes__OffsetMode__GetSrcOffset_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))TranslationModes__OffsetMode__GetAbsVector_fn;
    type->interface1.fp_get_Flags = (void(*)(uObject*, int*))TranslationModes__OffsetMode__get_Flags_fn;
    ::TYPES[115] = ::g::Fuse::Transform_typeof();
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[6] = ::g::Fuse::Node_typeof();
    ::TYPES[97] = ::g::Uno::Float4_typeof();
    ::TYPES[116] = ::g::Fuse::Translation_typeof();
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(TranslationModes__OffsetMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(TranslationModes__OffsetMode_type, interface1));
    return type;
}

// public generated OffsetMode() :2501
void TranslationModes__OffsetMode__ctor__fn(TranslationModes__OffsetMode* __this)
{
    __this->ctor_();
}

// public Fuse.TransformModeFlags get_Flags() :2525
void TranslationModes__OffsetMode__get_Flags_fn(TranslationModes__OffsetMode* __this, int* __retval)
{
    *__retval = __this->Flags();
}

// public float3 GetAbsVector(Fuse.Translation t) :2503
void TranslationModes__OffsetMode__GetAbsVector_fn(TranslationModes__OffsetMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetAbsVector(t);
}

// protected virtual float3 GetDstOffset(Fuse.Elements.Element e) :2527
void TranslationModes__OffsetMode__GetDstOffset_fn(TranslationModes__OffsetMode* __this, ::g::Fuse::Elements::Element* e, ::g::Uno::Float3* __retval)
{
    uStackFrame __("Fuse.Elements.TranslationModes.OffsetMode", "GetDstOffset(Fuse.Elements.Element)");
    return *__retval = ::g::Uno::Float3__New1(0.0f), void();
}

// protected virtual float3 GetSrcOffset(Fuse.Elements.Element e) :2528
void TranslationModes__OffsetMode__GetSrcOffset_fn(TranslationModes__OffsetMode* __this, ::g::Fuse::Elements::Element* e, ::g::Uno::Float3* __retval)
{
    uStackFrame __("Fuse.Elements.TranslationModes.OffsetMode", "GetSrcOffset(Fuse.Elements.Element)");
    return *__retval = ::g::Uno::Float3__New1(0.0f), void();
}

// public generated OffsetMode() [instance] :2501
void TranslationModes__OffsetMode::ctor_()
{
}

// public Fuse.TransformModeFlags get_Flags() [instance] :2525
int TranslationModes__OffsetMode::Flags()
{
    uStackFrame __("Fuse.Elements.TranslationModes.OffsetMode", "get_Flags()");
    return 8;
}

// public float3 GetAbsVector(Fuse.Translation t) [instance] :2503
::g::Uno::Float3 TranslationModes__OffsetMode::GetAbsVector(::g::Fuse::Translation* t)
{
    uStackFrame __("Fuse.Elements.TranslationModes.OffsetMode", "GetAbsVector(Fuse.Translation)");
    ::g::Fuse::Node* n = uPtr(t)->RelativeNode();
    ::g::Fuse::Elements::Element* dstElement = uAs< ::g::Fuse::Elements::Element*>(n, ::TYPES[2/*Fuse.Elements.Element*/]);
    ::g::Uno::Float3 dst = ::g::Uno::Float3__New1(0.0f);

    if (dstElement != NULL)
        dst = GetDstOffset(dstElement);

    if ((t->Node == NULL) || (uPtr(t->Node)->Parent() == NULL))
        return ::g::Uno::Float3__New1(0.0f);

    ::g::Uno::Float4x4 m = ::g::Uno::Matrix::Mul8(uPtr(t->RelativeNode())->WorldTransform(), uPtr(uPtr(t->Node)->Parent())->WorldTransformInverse());
    ::g::Uno::Float4 ind1 = ::g::Uno::Vector::Transform4(dst, m);
    ::g::Uno::Float3 localP = ::g::Uno::Float3__New2(ind1.X, ind1.Y, ind1.Z);
    ::g::Uno::Float3 localOff = ::g::Uno::Float3__New1(0.0f);
    ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(t->Node, ::TYPES[2/*Fuse.Elements.Element*/]);

    if (elm != NULL)
        localOff = ::g::Uno::Float3__op_UnaryNegation(::g::Uno::Float3__op_Addition2(::g::Uno::Float3__New4(uPtr(elm)->ActualPosition(), 0.0f), GetSrcOffset(elm)));

    ::g::Uno::Float3 worldChange = ::g::Uno::Float3__op_Addition2(localP, localOff);
    return ::g::Uno::Float3__op_Multiply2(worldChange, t->Vector());
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#19
// ------------------------------------------------------------

// private sealed class TranslationModes.PositionOffsetMode :2531
// {
::g::Fuse::Elements::TranslationModes__OffsetMode_type* TranslationModes__PositionOffsetMode_typeof()
{
    static uSStrong< ::g::Fuse::Elements::TranslationModes__OffsetMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__PositionOffsetMode);
    options.TypeSize = sizeof(::g::Fuse::Elements::TranslationModes__OffsetMode_type);
    type = (::g::Fuse::Elements::TranslationModes__OffsetMode_type*)uClassType::New("Fuse.Elements.TranslationModes.PositionOffsetMode", options);
    type->SetBase(::g::Fuse::Elements::TranslationModes__OffsetMode_typeof());
    type->fp_ctor_ = (void*)TranslationModes__PositionOffsetMode__New2_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))::g::Fuse::Elements::TranslationModes__OffsetMode__GetAbsVector_fn;
    type->interface1.fp_get_Flags = (void(*)(uObject*, int*))::g::Fuse::Elements::TranslationModes__OffsetMode__get_Flags_fn;
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(::g::Fuse::Elements::TranslationModes__OffsetMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(::g::Fuse::Elements::TranslationModes__OffsetMode_type, interface1));
    return type;
}

// public generated PositionOffsetMode() :2531
void TranslationModes__PositionOffsetMode__ctor_1_fn(TranslationModes__PositionOffsetMode* __this)
{
    __this->ctor_1();
}

// public generated PositionOffsetMode New() :2531
void TranslationModes__PositionOffsetMode__New2_fn(TranslationModes__PositionOffsetMode** __retval)
{
    *__retval = TranslationModes__PositionOffsetMode::New2();
}

// public generated PositionOffsetMode() [instance] :2531
void TranslationModes__PositionOffsetMode::ctor_1()
{
    uStackFrame __("Fuse.Elements.TranslationModes.PositionOffsetMode", ".ctor()");
    ctor_();
}

// public generated PositionOffsetMode New() [static] :2531
TranslationModes__PositionOffsetMode* TranslationModes__PositionOffsetMode::New2()
{
    TranslationModes__PositionOffsetMode* obj1 = (TranslationModes__PositionOffsetMode*)uNew(TranslationModes__PositionOffsetMode_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#8
// -----------------------------------------------------------

// public sealed class PreplacementArgs :1287
// {
uType* PreplacementArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(PreplacementArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.PreplacementArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::PreplacementArgs, _HasPrev), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_HasPrev", NULL, (void*)PreplacementArgs__get_HasPrev_fn, 0, false, ::g::Uno::Bool_typeof(), 0));
    return type;
}

// internal PreplacementArgs(bool hasPrev) :1292
void PreplacementArgs__ctor_1_fn(PreplacementArgs* __this, bool* hasPrev)
{
    __this->ctor_1(*hasPrev);
}

// public generated bool get_HasPrev() :1290
void PreplacementArgs__get_HasPrev_fn(PreplacementArgs* __this, bool* __retval)
{
    *__retval = __this->HasPrev();
}

// private generated void set_HasPrev(bool value) :1290
void PreplacementArgs__set_HasPrev_fn(PreplacementArgs* __this, bool* value)
{
    __this->HasPrev(*value);
}

// internal PreplacementArgs New(bool hasPrev) :1292
void PreplacementArgs__New2_fn(bool* hasPrev, PreplacementArgs** __retval)
{
    *__retval = PreplacementArgs::New2(*hasPrev);
}

// internal PreplacementArgs(bool hasPrev) [instance] :1292
void PreplacementArgs::ctor_1(bool hasPrev)
{
    uStackFrame __("Fuse.Elements.PreplacementArgs", ".ctor(bool)");
    ctor_();
    HasPrev(hasPrev);
}

// public generated bool get_HasPrev() [instance] :1290
bool PreplacementArgs::HasPrev()
{
    uStackFrame __("Fuse.Elements.PreplacementArgs", "get_HasPrev()");
    return _HasPrev;
}

// private generated void set_HasPrev(bool value) [instance] :1290
void PreplacementArgs::HasPrev(bool value)
{
    uStackFrame __("Fuse.Elements.PreplacementArgs", "set_HasPrev(bool)");
    _HasPrev = value;
}

// internal PreplacementArgs New(bool hasPrev) [static] :1292
PreplacementArgs* PreplacementArgs::New2(bool hasPrev)
{
    PreplacementArgs* obj1 = (PreplacementArgs*)uNew(PreplacementArgs_typeof());
    obj1->ctor_1(hasPrev);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#8
// -----------------------------------------------------------

// public delegate void PreplacementHandler(object sender, Fuse.Elements.PreplacementArgs args) :1298
uDelegateType* PreplacementHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Elements.PreplacementHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Elements::PreplacementArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#19
// ------------------------------------------------------------

// private sealed class TranslationModes.RelativeResizeChangeMode :2579
// {
TranslationModes__RelativeResizeChangeMode_type* TranslationModes__RelativeResizeChangeMode_typeof()
{
    static uSStrong<TranslationModes__RelativeResizeChangeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__RelativeResizeChangeMode);
    options.TypeSize = sizeof(TranslationModes__RelativeResizeChangeMode_type);
    type = (TranslationModes__RelativeResizeChangeMode_type*)uClassType::New("Fuse.Elements.TranslationModes.RelativeResizeChangeMode", options);
    type->fp_ctor_ = (void*)TranslationModes__RelativeResizeChangeMode__New1_fn;
    type->interface0.fp_GetSizeChange = (void(*)(uObject*, ::g::Fuse::Node*, ::g::Fuse::Node*, ::g::Uno::Float2*, ::g::Uno::Float2*, bool*))TranslationModes__RelativeResizeChangeMode__GetSizeChange_fn;
    type->interface1.fp_get_Flags = (void(*)(uObject*, int*))TranslationModes__RelativeResizeChangeMode__get_Flags_fn;
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    type->SetInterfaces(
        ::g::Fuse::Animations::IResizeMode_typeof(), offsetof(TranslationModes__RelativeResizeChangeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(TranslationModes__RelativeResizeChangeMode_type, interface1));
    return type;
}

// public generated RelativeResizeChangeMode() :2579
void TranslationModes__RelativeResizeChangeMode__ctor__fn(TranslationModes__RelativeResizeChangeMode* __this)
{
    __this->ctor_();
}

// public Fuse.TransformModeFlags get_Flags() :2597
void TranslationModes__RelativeResizeChangeMode__get_Flags_fn(TranslationModes__RelativeResizeChangeMode* __this, int* __retval)
{
    *__retval = __this->Flags();
}

// public bool GetSizeChange(Fuse.Node target, Fuse.Node relative, float2& baseSize, float2& deltaSize) :2581
void TranslationModes__RelativeResizeChangeMode__GetSizeChange_fn(TranslationModes__RelativeResizeChangeMode* __this, ::g::Fuse::Node* target, ::g::Fuse::Node* relative, ::g::Uno::Float2* baseSize, ::g::Uno::Float2* deltaSize, bool* __retval)
{
    *__retval = __this->GetSizeChange(target, relative, baseSize, deltaSize);
}

// public generated RelativeResizeChangeMode New() :2579
void TranslationModes__RelativeResizeChangeMode__New1_fn(TranslationModes__RelativeResizeChangeMode** __retval)
{
    *__retval = TranslationModes__RelativeResizeChangeMode::New1();
}

// public generated RelativeResizeChangeMode() [instance] :2579
void TranslationModes__RelativeResizeChangeMode::ctor_()
{
}

// public Fuse.TransformModeFlags get_Flags() [instance] :2597
int TranslationModes__RelativeResizeChangeMode::Flags()
{
    uStackFrame __("Fuse.Elements.TranslationModes.RelativeResizeChangeMode", "get_Flags()");
    return 1;
}

// public bool GetSizeChange(Fuse.Node target, Fuse.Node relative, float2& baseSize, float2& deltaSize) [instance] :2581
bool TranslationModes__RelativeResizeChangeMode::GetSizeChange(::g::Fuse::Node* target, ::g::Fuse::Node* relative, ::g::Uno::Float2* baseSize, ::g::Uno::Float2* deltaSize)
{
    uStackFrame __("Fuse.Elements.TranslationModes.RelativeResizeChangeMode", "GetSizeChange(Fuse.Node,Fuse.Node,float2&,float2&)");

    if (!uIs(target, ::TYPES[2/*Fuse.Elements.Element*/]) || !uIs(relative, ::TYPES[2/*Fuse.Elements.Element*/]))
    {
        *baseSize = ::g::Uno::Float2__New1(0.0f);
        *deltaSize = ::g::Uno::Float2__New1(0.0f);
        return false;
    }

    ::g::Uno::Float2 targetSize = uPtr(uAs< ::g::Fuse::Elements::Element*>(target, ::TYPES[2/*Fuse.Elements.Element*/]))->IntendedSize();
    ::g::Uno::Float2 relativeSize = uPtr(uAs< ::g::Fuse::Elements::Element*>(relative, ::TYPES[2/*Fuse.Elements.Element*/]))->ActualSize();
    *deltaSize = ::g::Uno::Float2__op_Subtraction2(relativeSize, targetSize);
    *baseSize = targetSize;
    return true;
}

// public generated RelativeResizeChangeMode New() [static] :2579
TranslationModes__RelativeResizeChangeMode* TranslationModes__RelativeResizeChangeMode::New1()
{
    TranslationModes__RelativeResizeChangeMode* obj1 = (TranslationModes__RelativeResizeChangeMode*)uNew(TranslationModes__RelativeResizeChangeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#15
// ------------------------------------------------------------

// internal enum SimpleAlignment :2090
uEnumType* SimpleAlignment_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.SimpleAlignment", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Begin", 0LL,
        "Center", 1LL,
        "End", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/Caching/$.uno#4
// -------------------------------------------------------------------

// internal sealed class SingleNodeDrawable :849
// {
SingleNodeDrawable_type* SingleNodeDrawable_typeof()
{
    static uSStrong<SingleNodeDrawable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SingleNodeDrawable);
    options.TypeSize = sizeof(SingleNodeDrawable_type);
    type = (SingleNodeDrawable_type*)uClassType::New("Fuse.Elements.SingleNodeDrawable", options);
    type->interface0.fp_Draw = (void(*)(uObject*, ::g::Fuse::DrawContext*, ::g::Uno::Float4x4*, ::g::Uno::Rect*))SingleNodeDrawable__Draw_fn;
    type->SetInterfaces(
        ::g::Fuse::Elements::IElementBatchDrawable_typeof(), offsetof(SingleNodeDrawable_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Elements::SingleNodeDrawable, _elm), 0);
    return type;
}

// public SingleNodeDrawable(Fuse.Node elm) :852
void SingleNodeDrawable__ctor__fn(SingleNodeDrawable* __this, ::g::Fuse::Node* elm)
{
    __this->ctor_(elm);
}

// public void Draw(Fuse.DrawContext dc, float4x4 localToClipTransform, Uno.Rect scissorRectInClipSpace) :857
void SingleNodeDrawable__Draw_fn(SingleNodeDrawable* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Rect* scissorRectInClipSpace)
{
    __this->Draw(dc, *localToClipTransform, *scissorRectInClipSpace);
}

// public SingleNodeDrawable New(Fuse.Node elm) :852
void SingleNodeDrawable__New1_fn(::g::Fuse::Node* elm, SingleNodeDrawable** __retval)
{
    *__retval = SingleNodeDrawable::New1(elm);
}

// public SingleNodeDrawable(Fuse.Node elm) [instance] :852
void SingleNodeDrawable::ctor_(::g::Fuse::Node* elm)
{
    uStackFrame __("Fuse.Elements.SingleNodeDrawable", ".ctor(Fuse.Node)");
    _elm = elm;
}

// public void Draw(Fuse.DrawContext dc, float4x4 localToClipTransform, Uno.Rect scissorRectInClipSpace) [instance] :857
void SingleNodeDrawable::Draw(::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4 localToClipTransform, ::g::Uno::Rect scissorRectInClipSpace)
{
    uStackFrame __("Fuse.Elements.SingleNodeDrawable", "Draw(Fuse.DrawContext,float4x4,Uno.Rect)");
    uPtr(_elm)->Draw(dc);
}

// public SingleNodeDrawable New(Fuse.Node elm) [static] :852
SingleNodeDrawable* SingleNodeDrawable::New1(::g::Fuse::Node* elm)
{
    SingleNodeDrawable* obj1 = (SingleNodeDrawable*)uNew(SingleNodeDrawable_typeof());
    obj1->ctor_(elm);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#19
// ------------------------------------------------------------

// private sealed class TranslationModes.SizeFactorMode :2553
// {
TranslationModes__SizeFactorMode_type* TranslationModes__SizeFactorMode_typeof()
{
    static uSStrong<TranslationModes__SizeFactorMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__SizeFactorMode);
    options.TypeSize = sizeof(TranslationModes__SizeFactorMode_type);
    type = (TranslationModes__SizeFactorMode_type*)uClassType::New("Fuse.Elements.TranslationModes.SizeFactorMode", options);
    type->fp_ctor_ = (void*)TranslationModes__SizeFactorMode__New1_fn;
    type->interface0.fp_GetScaleVector = (void(*)(uObject*, ::g::Fuse::Scaling*, ::g::Uno::Float3*))TranslationModes__SizeFactorMode__GetScaleVector_fn;
    type->interface1.fp_get_Flags = (void(*)(uObject*, int*))TranslationModes__SizeFactorMode__get_Flags_fn;
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[115] = ::g::Fuse::Transform_typeof();
    ::TYPES[63] = ::g::Uno::Float2_typeof();
    ::TYPES[117] = ::g::Fuse::Scaling_typeof();
    type->SetInterfaces(
        ::g::Fuse::IScalingMode_typeof(), offsetof(TranslationModes__SizeFactorMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(TranslationModes__SizeFactorMode_type, interface1));
    return type;
}

// public generated SizeFactorMode() :2553
void TranslationModes__SizeFactorMode__ctor__fn(TranslationModes__SizeFactorMode* __this)
{
    __this->ctor_();
}

// public Fuse.TransformModeFlags get_Flags() :2570
void TranslationModes__SizeFactorMode__get_Flags_fn(TranslationModes__SizeFactorMode* __this, int* __retval)
{
    *__retval = __this->Flags();
}

// public float3 GetScaleVector(Fuse.Scaling t) :2555
void TranslationModes__SizeFactorMode__GetScaleVector_fn(TranslationModes__SizeFactorMode* __this, ::g::Fuse::Scaling* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetScaleVector(t);
}

// public generated SizeFactorMode New() :2553
void TranslationModes__SizeFactorMode__New1_fn(TranslationModes__SizeFactorMode** __retval)
{
    *__retval = TranslationModes__SizeFactorMode::New1();
}

// public generated SizeFactorMode() [instance] :2553
void TranslationModes__SizeFactorMode::ctor_()
{
}

// public Fuse.TransformModeFlags get_Flags() [instance] :2570
int TranslationModes__SizeFactorMode::Flags()
{
    uStackFrame __("Fuse.Elements.TranslationModes.SizeFactorMode", "get_Flags()");
    return 1;
}

// public float3 GetScaleVector(Fuse.Scaling t) [instance] :2555
::g::Uno::Float3 TranslationModes__SizeFactorMode::GetScaleVector(::g::Fuse::Scaling* t)
{
    uStackFrame __("Fuse.Elements.TranslationModes.SizeFactorMode", "GetScaleVector(Fuse.Scaling)");
    ::g::Fuse::Elements::Element* dst = uAs< ::g::Fuse::Elements::Element*>(uPtr(t)->RelativeNode(), ::TYPES[2/*Fuse.Elements.Element*/]);
    ::g::Fuse::Elements::Element* src = uAs< ::g::Fuse::Elements::Element*>(t->Node, ::TYPES[2/*Fuse.Elements.Element*/]);

    if ((dst == NULL) || (src == NULL))
        return ::g::Uno::Float3__New1(1.0f);

    ::g::Uno::Float2 sz = uPtr(src)->ActualSize();

    if ((sz.X < 1e-05f) || (sz.Y < 1e-05f))
        return ::g::Uno::Float3__New1(1.0f);

    ::g::Uno::Float3 rel = ::g::Uno::Float3__op_Subtraction2(::g::Uno::Float3__New4(::g::Uno::Float2__op_Division2(uPtr(dst)->ActualSize(), sz), 1.0f), ::g::Uno::Float3__New1(1.0f));
    return ::g::Uno::Float3__op_Addition2(::g::Uno::Float3__op_Multiply2(rel, t->Vector()), ::g::Uno::Float3__New1(1.0f));
}

// public generated SizeFactorMode New() [static] :2553
TranslationModes__SizeFactorMode* TranslationModes__SizeFactorMode::New1()
{
    TranslationModes__SizeFactorMode* obj1 = (TranslationModes__SizeFactorMode*)uNew(TranslationModes__SizeFactorMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#1
// -----------------------------------------------------------

// internal class StandardBoxSizing :337
// {
// static StandardBoxSizing() :337
static void StandardBoxSizing__cctor__fn(uType* __type)
{
    StandardBoxSizing::Singleton_ = StandardBoxSizing::New1();
}

::g::Fuse::Elements::BoxSizing_type* StandardBoxSizing_typeof()
{
    static uSStrong< ::g::Fuse::Elements::BoxSizing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(StandardBoxSizing);
    options.TypeSize = sizeof(::g::Fuse::Elements::BoxSizing_type);
    type = (::g::Fuse::Elements::BoxSizing_type*)uClassType::New("Fuse.Elements.StandardBoxSizing", options);
    type->SetBase(::g::Fuse::Elements::BoxSizing_typeof());
    type->fp_ctor_ = (void*)StandardBoxSizing__New1_fn;
    type->fp_cctor_ = StandardBoxSizing__cctor__fn;
    type->fp_CalcArrangePaddingSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))StandardBoxSizing__CalcArrangePaddingSize_fn;
    type->fp_CalcBoxPlacement = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Fuse::Elements::BoxPlacement*))StandardBoxSizing__CalcBoxPlacement_fn;
    type->fp_CalcMarginSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))StandardBoxSizing__CalcMarginSize_fn;
    type->fp_IsContentRelativeSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, int*))StandardBoxSizing__IsContentRelativeSize_fn;
    ::TYPES[3] = ::g::Fuse::LayoutParams_typeof();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[97] = ::g::Uno::Float4_typeof();
    ::TYPES[6] = ::g::Fuse::Node_typeof();
    ::TYPES[0] = ::g::Uno::Int_typeof();
    ::TYPES[63] = ::g::Uno::Float2_typeof();
    ::TYPES[45] = ::g::Uno::UX::Size2_typeof();
    ::TYPES[70] = ::g::Fuse::Elements::BoxPlacement_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::StandardBoxSizing, ImplicitMax), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Elements::StandardBoxSizing, pixelEpsilon), 0,
        StandardBoxSizing_typeof(), (uintptr_t)&::g::Fuse::Elements::StandardBoxSizing::Singleton_, uFieldFlagsStatic);
    return type;
}

// public generated StandardBoxSizing() :337
void StandardBoxSizing__ctor_1_fn(StandardBoxSizing* __this)
{
    __this->ctor_1();
}

// public override sealed float2 CalcArrangePaddingSize(Fuse.Elements.Element element, Fuse.LayoutParams lp) :441
void StandardBoxSizing__CalcArrangePaddingSize_fn(StandardBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.StandardBoxSizing", "CalcArrangePaddingSize(Fuse.Elements.Element,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    bool ret2;
    ::g::Fuse::LayoutParams c = __this->GetConstraints(element, lp_, __this->ImplicitMax ? 2 : 0);
    ::g::Fuse::LayoutParams child = lp_.DeriveClone();
    child.BoxConstrain(c);
    ::g::Uno::Float2 sz = child.Size();

    if (!child.HasSize())
    {
        ::g::Uno::Float4 pad = uPtr(element)->Padding();
        bool hasPad = (::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::PaddingProperty()), element, &ret2), ret2);

        if (hasPad)
            child.RemoveSize1(pad);

        sz = element->InternGetContentSize(child);
        sz = ::g::Uno::Float2__op_Addition2(sz, ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(pad.X, pad.Y), ::g::Uno::Float2__New2(pad.Z, pad.W)));
    }

    sz = c.PointConstrain(sz);

    if (uPtr(element)->SnapToPixels())
        sz = __this->SnapUp(element, sz);

    return *__retval = sz, void();
}

// public override sealed Fuse.Elements.BoxPlacement CalcBoxPlacement(Fuse.Elements.Element element, float2 position, Fuse.LayoutParams lp) :341
void StandardBoxSizing__CalcBoxPlacement_fn(StandardBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Fuse::Elements::BoxPlacement* __retval)
{
    uStackFrame __("Fuse.Elements.StandardBoxSizing", "CalcBoxPlacement(Fuse.Elements.Element,float2,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float2 position_ = *position;
    bool ret3;
    bool ret4;
    bool ret5;
    ::g::Uno::Float4 margin = uPtr(element)->Margin();
    ::g::Uno::Float2 avSize = lp_.Size();
    ::g::Uno::Float2 marginBox = element->GetMarginSize(lp_);
    ::g::Uno::Float2 paddingBox = ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Subtraction2(marginBox, ::g::Uno::Float2__New2(margin.X, margin.Y)), ::g::Uno::Float2__New2(margin.Z, margin.W));
    avSize = ::g::Uno::Float2__op_Subtraction2(avSize, ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(margin.X, margin.Y), ::g::Uno::Float2__New2(margin.Z, margin.W)));
    avSize = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), avSize);
    paddingBox = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), paddingBox);
    ::g::Uno::Float2 s = ::g::Uno::Float2__New1(0.0f);

    if (element->Visibility() != 1)
        s = paddingBox;

    ::g::Uno::Float2 p = position_;
    int halign = __this->EffectiveHorizontalAlignment(element);

    if (!lp_.HasX())
        halign = 0;

    int valign = __this->EffectiveVerticalAlignment(element);

    if (!lp_.HasY())
        valign = 0;

    p.X = (p.X + margin.X);

    switch (halign)
    {
        case 0:
            break;
        case 1:
        {
            p.X = (p.X + (avSize.X * 0.5f));
            break;
        }
        case 2:
        {
            p.X = (p.X + avSize.X);
            break;
        }
    }

    p.Y = (p.Y + margin.Y);

    switch (valign)
    {
        case 0:
            break;
        case 1:
        {
            p.Y = (p.Y + (avSize.Y * 0.5f));
            break;
        }
        case 2:
        {
            p.Y = (p.Y + avSize.Y);
            break;
        }
    }

    bool ignore;

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::OffsetProperty()), element, &ret3), ret3))
    {
        ::g::Uno::UX::Size2 offset = uPtr(element)->Offset();
        ::g::Uno::Float2 o = ::g::Uno::Float2__New2(__this->UnitSize(element, offset.X, avSize.X, lp_.HasX(), &ignore), __this->UnitSize(element, offset.Y, avSize.Y, lp_.HasY(), &ignore));
        p = ::g::Uno::Float2__op_Addition2(p, o);
    }

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::XProperty()), element, &ret4), ret4))
    {
        ::g::Uno::UX::Size o1 = uPtr(element)->X();
        p.X = (p.X + __this->UnitSize(element, o1, avSize.X, lp_.HasX(), &ignore));
    }

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::YProperty()), element, &ret5), ret5))
    {
        ::g::Uno::UX::Size o2 = uPtr(element)->Y();
        p.Y = (p.Y + __this->UnitSize(element, o2, avSize.Y, lp_.HasY(), &ignore));
    }

    ::g::Uno::UX::Size2 anchor;
    __this->EffectiveAnchor(element, halign, valign, &anchor);
    element->ActualAnchor(::g::Uno::Float2__New2(__this->UnitSize(element, anchor.X, s.X, true, &ignore), __this->UnitSize(element, anchor.Y, s.Y, true, &ignore)));
    p = ::g::Uno::Float2__op_Subtraction2(p, element->ActualAnchor());
    ::g::Fuse::Elements::BoxPlacement bp;
    bp.MarginBox = marginBox;
    bp.Position = p;
    bp.Size = s;
    return *__retval = bp, void();
}

// public override sealed float2 CalcMarginSize(Fuse.Elements.Element element, Fuse.LayoutParams lp) :423
void StandardBoxSizing__CalcMarginSize_fn(StandardBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.StandardBoxSizing", "CalcMarginSize(Fuse.Elements.Element,Fuse.LayoutParams)");
    bool ret6;
    ::g::Fuse::LayoutParams lp_ = *lp;

    if (uPtr(element)->Visibility() == 1)
        return *__retval = ::g::Uno::Float2__New1(0.0f), void();

    ::g::Uno::Float4 margin = ::g::Uno::Float4__New1(0.0f);

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::MarginProperty()), element, &ret6), ret6))
    {
        margin = uPtr(element)->Margin();
        lp_ = lp_.TrueClone();
        lp_.RemoveSize1(margin);
    }

    ::g::Uno::Float2 sz = uPtr(element)->GetArrangePaddingSize(lp_);
    sz = ::g::Uno::Float2__op_Addition2(sz, ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(margin.X, margin.Y), ::g::Uno::Float2__New2(margin.Z, margin.W)));
    return *__retval = sz, void();
}

// public override sealed Fuse.LayoutDependent IsContentRelativeSize(Fuse.Elements.Element element) :476
void StandardBoxSizing__IsContentRelativeSize_fn(StandardBoxSizing* __this, ::g::Fuse::Elements::Element* element, int* __retval)
{
    uStackFrame __("Fuse.Elements.StandardBoxSizing", "IsContentRelativeSize(Fuse.Elements.Element)");
    bool ret7;
    bool ret8;
    bool ha = ::g::Fuse::Elements::AlignmentHelpers::GetHorizontalAlign(uPtr(element)->Alignment()) != 0;
    bool w = (::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::WidthProperty()), element, &ret7), ret7);
    bool va = ::g::Fuse::Elements::AlignmentHelpers::GetVerticalAlign(element->Alignment()) != 0;
    bool h = (::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::HeightProperty()), element, &ret8), ret8);

    if (w && h)
        return *__retval = 0, void();

    if (ha || va)
        return *__retval = 4, void();

    return *__retval = 2, void();
}

// public generated StandardBoxSizing New() :337
void StandardBoxSizing__New1_fn(StandardBoxSizing** __retval)
{
    *__retval = StandardBoxSizing::New1();
}

// private float2 SnapUp(Fuse.Elements.Element element, float2 p) :470
void StandardBoxSizing__SnapUp_fn(StandardBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->SnapUp(element, *p);
}

uSStrong<StandardBoxSizing*> StandardBoxSizing::Singleton_;

// public generated StandardBoxSizing() [instance] :337
void StandardBoxSizing::ctor_1()
{
    uStackFrame __("Fuse.Elements.StandardBoxSizing", ".ctor()");
    ImplicitMax = true;
    pixelEpsilon = 0.005f;
    ctor_();
}

// private float2 SnapUp(Fuse.Elements.Element element, float2 p) [instance] :470
::g::Uno::Float2 StandardBoxSizing::SnapUp(::g::Fuse::Elements::Element* element, ::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Elements.StandardBoxSizing", "SnapUp(Fuse.Elements.Element,float2)");
    ::g::Uno::Float2 s = ::g::Uno::Float2__op_Division1(::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Subtraction1(::g::Uno::Float2__op_Multiply1(p, uPtr(element)->AbsoluteZoom()), pixelEpsilon)), uPtr(element)->AbsoluteZoom());
    return s;
}

// public generated StandardBoxSizing New() [static] :337
StandardBoxSizing* StandardBoxSizing::New1()
{
    StandardBoxSizing* obj1 = (StandardBoxSizing*)uNew(StandardBoxSizing_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#15
// ------------------------------------------------------------

// public enum StretchDirection :2115
uEnumType* StretchDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.StretchDirection", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Both", 0LL,
        "UpOnly", 1LL,
        "DownOnly", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#15
// ------------------------------------------------------------

// public enum StretchMode :2104
uEnumType* StretchMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.StretchMode", ::g::Uno::Int_typeof(), 7);
    type->SetLiterals(
        "PointPrecise", 0LL,
        "PixelPrecise", 1LL,
        "PointPrefer", 2LL,
        "Fill", 3LL,
        "Scale9", 4LL,
        "Uniform", 5LL,
        "UniformToFill", 6LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#15
// ------------------------------------------------------------

// public enum StretchSizing :2122
uEnumType* StretchSizing_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.StretchSizing", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Zero", 0LL,
        "Natural", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#15
// ------------------------------------------------------------

// public enum TextAlignment :2006
uEnumType* TextAlignment_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.TextAlignment", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Left", 0LL,
        "Center", 1LL,
        "Right", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/Caching/$.uno#6
// -------------------------------------------------------------------

// internal sealed class TextureAtlas :1509
// {
uType* TextureAtlas_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(TextureAtlas);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.TextureAtlas", options);
    ::TYPES[8] = ::g::Uno::Recti_typeof();
    ::TYPES[10] = ::g::Uno::Int2_typeof();
    type->SetFields(0,
        ::g::Uno::Recti_typeof(), offsetof(::g::Fuse::Elements::TextureAtlas, _allocatedLine), 0,
        ::g::Uno::Recti_typeof(), offsetof(::g::Fuse::Elements::TextureAtlas, _allocatedLines), 0,
        ::g::Uno::Int2_typeof(), offsetof(::g::Fuse::Elements::TextureAtlas, _Size), 0);
    return type;
}

// public TextureAtlas(int2 size) :1512
void TextureAtlas__ctor__fn(TextureAtlas* __this, ::g::Uno::Int2* size)
{
    __this->ctor_(*size);
}

// public bool AddRect(int2 size, Uno.Recti& ret) :1520
void TextureAtlas__AddRect_fn(TextureAtlas* __this, ::g::Uno::Int2* size, ::g::Uno::Recti* ret, bool* __retval)
{
    *__retval = __this->AddRect(*size, ret);
}

// public TextureAtlas New(int2 size) :1512
void TextureAtlas__New1_fn(::g::Uno::Int2* size, TextureAtlas** __retval)
{
    *__retval = TextureAtlas::New1(*size);
}

// public generated int2 get_Size() :1511
void TextureAtlas__get_Size_fn(TextureAtlas* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Size();
}

// private generated void set_Size(int2 value) :1511
void TextureAtlas__set_Size_fn(TextureAtlas* __this, ::g::Uno::Int2* value)
{
    __this->Size(*value);
}

// public TextureAtlas(int2 size) [instance] :1512
void TextureAtlas::ctor_(::g::Uno::Int2 size)
{
    uStackFrame __("Fuse.Elements.TextureAtlas", ".ctor(int2)");
    Size(size);
}

// public bool AddRect(int2 size, Uno.Recti& ret) [instance] :1520
bool TextureAtlas::AddRect(::g::Uno::Int2 size, ::g::Uno::Recti* ret)
{
    uStackFrame __("Fuse.Elements.TextureAtlas", "AddRect(int2,Uno.Recti&)");

    if ((_allocatedLine.Right + size.X) > Size().X)
    {
        _allocatedLines = ::g::Uno::Recti__Union(_allocatedLines, _allocatedLine);
        _allocatedLine = ::g::Uno::Recti__New2(_allocatedLines.LeftBottom(), ::g::Uno::Int2__New2(0, 0));
    }

    if ((_allocatedLine.Bottom + size.Y) > Size().Y)
    {
        *ret = ::g::Uno::Recti__New1(0, 0, 0, 0);
        return false;
    }

    *ret = ::g::Uno::Recti__New2(_allocatedLine.RightTop(), size);
    _allocatedLine = ::g::Uno::Recti__Union(_allocatedLine, *ret);
    return true;
}

// public generated int2 get_Size() [instance] :1511
::g::Uno::Int2 TextureAtlas::Size()
{
    uStackFrame __("Fuse.Elements.TextureAtlas", "get_Size()");
    return _Size;
}

// private generated void set_Size(int2 value) [instance] :1511
void TextureAtlas::Size(::g::Uno::Int2 value)
{
    uStackFrame __("Fuse.Elements.TextureAtlas", "set_Size(int2)");
    _Size = value;
}

// public TextureAtlas New(int2 size) [static] :1512
TextureAtlas* TextureAtlas::New1(::g::Uno::Int2 size)
{
    TextureAtlas* obj1 = (TextureAtlas*)uNew(TextureAtlas_typeof());
    obj1->ctor_(size);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#15
// ------------------------------------------------------------

// public enum TextWrapping :2000
uEnumType* TextWrapping_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.TextWrapping", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "NoWrap", 0LL,
        "Wrap", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#13
// ------------------------------------------------------------

// private sealed class TransformOrigins.TopLeftOrigin :1797
// {
TransformOrigins__TopLeftOrigin_type* TransformOrigins__TopLeftOrigin_typeof()
{
    static uSStrong<TransformOrigins__TopLeftOrigin_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TransformOrigins__TopLeftOrigin);
    options.TypeSize = sizeof(TransformOrigins__TopLeftOrigin_type);
    type = (TransformOrigins__TopLeftOrigin_type*)uClassType::New("Fuse.Elements.TransformOrigins.TopLeftOrigin", options);
    type->fp_ctor_ = (void*)TransformOrigins__TopLeftOrigin__New1_fn;
    type->interface0.fp_GetOffset = (void(*)(uObject*, ::g::Fuse::Elements::Element*, ::g::Uno::Float3*))TransformOrigins__TopLeftOrigin__GetOffset_fn;
    type->SetInterfaces(
        ::g::Fuse::Elements::ITransformOrigin_typeof(), offsetof(TransformOrigins__TopLeftOrigin_type, interface0));
    return type;
}

// public generated TopLeftOrigin() :1797
void TransformOrigins__TopLeftOrigin__ctor__fn(TransformOrigins__TopLeftOrigin* __this)
{
    __this->ctor_();
}

// public float3 GetOffset(Fuse.Elements.Element elm) :1799
void TransformOrigins__TopLeftOrigin__GetOffset_fn(TransformOrigins__TopLeftOrigin* __this, ::g::Fuse::Elements::Element* elm, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetOffset(elm);
}

// public generated TopLeftOrigin New() :1797
void TransformOrigins__TopLeftOrigin__New1_fn(TransformOrigins__TopLeftOrigin** __retval)
{
    *__retval = TransformOrigins__TopLeftOrigin::New1();
}

// public generated TopLeftOrigin() [instance] :1797
void TransformOrigins__TopLeftOrigin::ctor_()
{
}

// public float3 GetOffset(Fuse.Elements.Element elm) [instance] :1799
::g::Uno::Float3 TransformOrigins__TopLeftOrigin::GetOffset(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.TransformOrigins.TopLeftOrigin", "GetOffset(Fuse.Elements.Element)");
    return ::g::Uno::Float3__New1(0.0f);
}

// public generated TopLeftOrigin New() [static] :1797
TransformOrigins__TopLeftOrigin* TransformOrigins__TopLeftOrigin::New1()
{
    TransformOrigins__TopLeftOrigin* obj1 = (TransformOrigins__TopLeftOrigin*)uNew(TransformOrigins__TopLeftOrigin_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#19
// ------------------------------------------------------------

// private sealed class TranslationModes.TransformOriginOffsetMode :2535
// {
::g::Fuse::Elements::TranslationModes__OffsetMode_type* TranslationModes__TransformOriginOffsetMode_typeof()
{
    static uSStrong< ::g::Fuse::Elements::TranslationModes__OffsetMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__TransformOriginOffsetMode);
    options.TypeSize = sizeof(::g::Fuse::Elements::TranslationModes__OffsetMode_type);
    type = (::g::Fuse::Elements::TranslationModes__OffsetMode_type*)uClassType::New("Fuse.Elements.TranslationModes.TransformOriginOffsetMode", options);
    type->SetBase(::g::Fuse::Elements::TranslationModes__OffsetMode_typeof());
    type->fp_ctor_ = (void*)TranslationModes__TransformOriginOffsetMode__New2_fn;
    type->fp_GetDstOffset = (void(*)(::g::Fuse::Elements::TranslationModes__OffsetMode*, ::g::Fuse::Elements::Element*, ::g::Uno::Float3*))TranslationModes__TransformOriginOffsetMode__GetDstOffset_fn;
    type->fp_GetSrcOffset = (void(*)(::g::Fuse::Elements::TranslationModes__OffsetMode*, ::g::Fuse::Elements::Element*, ::g::Uno::Float3*))TranslationModes__TransformOriginOffsetMode__GetSrcOffset_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))::g::Fuse::Elements::TranslationModes__OffsetMode__GetAbsVector_fn;
    type->interface1.fp_get_Flags = (void(*)(uObject*, int*))::g::Fuse::Elements::TranslationModes__OffsetMode__get_Flags_fn;
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(::g::Fuse::Elements::TranslationModes__OffsetMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(::g::Fuse::Elements::TranslationModes__OffsetMode_type, interface1));
    return type;
}

// public generated TransformOriginOffsetMode() :2535
void TranslationModes__TransformOriginOffsetMode__ctor_1_fn(TranslationModes__TransformOriginOffsetMode* __this)
{
    __this->ctor_1();
}

// protected override sealed float3 GetDstOffset(Fuse.Elements.Element e) :2537
void TranslationModes__TransformOriginOffsetMode__GetDstOffset_fn(TranslationModes__TransformOriginOffsetMode* __this, ::g::Fuse::Elements::Element* e, ::g::Uno::Float3* __retval)
{
    uStackFrame __("Fuse.Elements.TranslationModes.TransformOriginOffsetMode", "GetDstOffset(Fuse.Elements.Element)");
    return *__retval = ::g::Fuse::Elements::ITransformOrigin::GetOffset(uInterface(uPtr(uPtr(e)->TransformOrigin()), ::TYPES[118/*Fuse.Elements.ITransformOrigin*/]), e), void();
}

// protected override sealed float3 GetSrcOffset(Fuse.Elements.Element e) :2542
void TranslationModes__TransformOriginOffsetMode__GetSrcOffset_fn(TranslationModes__TransformOriginOffsetMode* __this, ::g::Fuse::Elements::Element* e, ::g::Uno::Float3* __retval)
{
    uStackFrame __("Fuse.Elements.TranslationModes.TransformOriginOffsetMode", "GetSrcOffset(Fuse.Elements.Element)");
    return *__retval = ::g::Fuse::Elements::ITransformOrigin::GetOffset(uInterface(uPtr(uPtr(e)->TransformOrigin()), ::TYPES[118/*Fuse.Elements.ITransformOrigin*/]), e), void();
}

// public generated TransformOriginOffsetMode New() :2535
void TranslationModes__TransformOriginOffsetMode__New2_fn(TranslationModes__TransformOriginOffsetMode** __retval)
{
    *__retval = TranslationModes__TransformOriginOffsetMode::New2();
}

// public generated TransformOriginOffsetMode() [instance] :2535
void TranslationModes__TransformOriginOffsetMode::ctor_1()
{
    uStackFrame __("Fuse.Elements.TranslationModes.TransformOriginOffsetMode", ".ctor()");
    ctor_();
}

// public generated TransformOriginOffsetMode New() [static] :2535
TranslationModes__TransformOriginOffsetMode* TranslationModes__TransformOriginOffsetMode::New2()
{
    TranslationModes__TransformOriginOffsetMode* obj1 = (TranslationModes__TransformOriginOffsetMode*)uNew(TranslationModes__TransformOriginOffsetMode_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#13
// ------------------------------------------------------------

// public static class TransformOrigins :1795
// {
// static TransformOrigins() :1795
static void TransformOrigins__cctor__fn(uType* __type)
{
    TransformOrigins__BoxCenter* collection2;
    TransformOrigins__BoxCenter* collection1;
    TransformOrigins::TopLeft_ = (uObject*)TransformOrigins__TopLeftOrigin::New1();
    TransformOrigins::Center_ = (uObject*)TransformOrigins__CenterOrigin::New1();
    TransformOrigins::Anchor_ = (uObject*)TransformOrigins__AnchorOrigin::New1();
    TransformOrigins::HorizontalBoxCenter_ = (uObject*)(collection2 = TransformOrigins__BoxCenter::New1(), uPtr(collection2)->Depth = ::g::Uno::Float2__New2(0.0f, 1.0f), collection2);
    TransformOrigins::VerticalBoxCenter_ = (uObject*)(collection1 = TransformOrigins__BoxCenter::New1(), uPtr(collection1)->Depth = ::g::Uno::Float2__New2(1.0f, 0.0f), collection1);
}

uClassType* TransformOrigins_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Elements.TransformOrigins", options);
    type->fp_cctor_ = TransformOrigins__cctor__fn;
    ::TYPES[118] = ::g::Fuse::Elements::ITransformOrigin_typeof();
    ::TYPES[119] = TransformOrigins__BoxCenter_typeof();
    type->SetFields(0,
        ::g::Fuse::Elements::ITransformOrigin_typeof(), (uintptr_t)&::g::Fuse::Elements::TransformOrigins::Anchor_, uFieldFlagsStatic,
        ::g::Fuse::Elements::ITransformOrigin_typeof(), (uintptr_t)&::g::Fuse::Elements::TransformOrigins::Center_, uFieldFlagsStatic,
        ::g::Fuse::Elements::ITransformOrigin_typeof(), (uintptr_t)&::g::Fuse::Elements::TransformOrigins::HorizontalBoxCenter_, uFieldFlagsStatic,
        ::g::Fuse::Elements::ITransformOrigin_typeof(), (uintptr_t)&::g::Fuse::Elements::TransformOrigins::TopLeft_, uFieldFlagsStatic,
        ::g::Fuse::Elements::ITransformOrigin_typeof(), (uintptr_t)&::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter_, uFieldFlagsStatic);
    type->Reflection.SetFields(5,
        new uField("Anchor", 0),
        new uField("Center", 1),
        new uField("HorizontalBoxCenter", 2),
        new uField("TopLeft", 3),
        new uField("VerticalBoxCenter", 4));
    return type;
}

uSStrong<uObject*> TransformOrigins::Anchor_;
uSStrong<uObject*> TransformOrigins::Center_;
uSStrong<uObject*> TransformOrigins::HorizontalBoxCenter_;
uSStrong<uObject*> TransformOrigins::TopLeft_;
uSStrong<uObject*> TransformOrigins::VerticalBoxCenter_;
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#19
// ------------------------------------------------------------

// public static class TranslationModes :2499
// {
// static TranslationModes() :2499
static void TranslationModes__cctor__fn(uType* __type)
{
    TranslationModes::TransformOriginOffset_ = (uObject*)TranslationModes__TransformOriginOffsetMode::New2();
    TranslationModes::PositionOffset_ = (uObject*)TranslationModes__PositionOffsetMode::New2();
    TranslationModes::SizeFactor_ = (uObject*)TranslationModes__SizeFactorMode::New1();
    TranslationModes::Size_ = (uObject*)TranslationModes__RelativeResizeChangeMode::New1();
}

uClassType* TranslationModes_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Elements.TranslationModes", options);
    type->fp_cctor_ = TranslationModes__cctor__fn;
    ::TYPES[120] = ::g::Fuse::ITranslationMode_typeof();
    ::TYPES[121] = ::g::Fuse::IScalingMode_typeof();
    ::TYPES[122] = ::g::Fuse::Animations::IResizeMode_typeof();
    type->SetFields(0,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::Elements::TranslationModes::PositionOffset_, uFieldFlagsStatic,
        ::g::Fuse::Animations::IResizeMode_typeof(), (uintptr_t)&::g::Fuse::Elements::TranslationModes::Size_, uFieldFlagsStatic,
        ::g::Fuse::IScalingMode_typeof(), (uintptr_t)&::g::Fuse::Elements::TranslationModes::SizeFactor_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::Elements::TranslationModes::TransformOriginOffset_, uFieldFlagsStatic);
    type->Reflection.SetFields(4,
        new uField("PositionOffset", 0),
        new uField("Size", 1),
        new uField("SizeFactor", 2),
        new uField("TransformOriginOffset", 3));
    return type;
}

uSStrong<uObject*> TranslationModes::PositionOffset_;
uSStrong<uObject*> TranslationModes::Size_;
uSStrong<uObject*> TranslationModes::SizeFactor_;
uSStrong<uObject*> TranslationModes::TransformOriginOffset_;
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.14/$.uno#59
// ------------------------------------------------------------

// public sealed class Viewport :6499
// {
Viewport_type* Viewport_typeof()
{
    static uSStrong<Viewport_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 100;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(Viewport);
    options.TypeSize = sizeof(Viewport_type);
    type = (Viewport_type*)uClassType::New("Fuse.Elements.Viewport", options);
    type->SetBase(::g::Fuse::Elements::Element_typeof());
    type->fp_ctor_ = (void*)Viewport__New1_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*))Viewport__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))Viewport__GetContentSize_fn;
    type->fp_GetSubNode = (void(*)(::g::Fuse::Node*, int*, ::g::Fuse::Node**))Viewport__GetSubNode_fn;
    type->fp_get_HitTestBounds = (void(*)(::g::Fuse::Node*, ::g::Fuse::NodeBounds**))Viewport__get_HitTestBounds_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::DrawContext*))Viewport__OnDraw_fn;
    type->fp_OnHitTestChildren = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::HitTestContext*))Viewport__OnHitTestChildren_fn;
    type->fp_get_SubNodeCount = (void(*)(::g::Fuse::Node*, int*))Viewport__get_SubNodeCount_fn;
    type->interface7.fp_PointToWorldRay = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Uno::Geometry::Ray*))Viewport__PointToWorldRay_fn;
    type->interface7.fp_get_PixelsPerPoint = (void(*)(uObject*, float*))Viewport__get_PixelsPerPoint_fn;
    type->interface7.fp_get_Size = (void(*)(uObject*, ::g::Uno::Float2*))Viewport__get_Size_fn;
    type->interface7.fp_get_PixelSize = (void(*)(uObject*, ::g::Uno::Float2*))Viewport__get_PixelSize_fn;
    type->interface7.fp_get_ProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))Viewport__get_ProjectionTransform_fn;
    type->interface7.fp_get_ProjectionTransformInverse = (void(*)(uObject*, ::g::Uno::Float4x4*))Viewport__get_ProjectionTransformInverse_fn;
    type->interface7.fp_get_ViewProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))Viewport__get_ViewProjectionTransform_fn;
    type->interface7.fp_get_ViewProjectionTransformInverse = (void(*)(uObject*, ::g::Uno::Float4x4*))Viewport__get_ViewProjectionTransformInverse_fn;
    type->interface7.fp_get_ViewTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))Viewport__get_ViewTransform_fn;
    type->interface7.fp_get_ViewTransformInverse = (void(*)(uObject*, ::g::Uno::Float4x4*))Viewport__get_ViewTransformInverse_fn;
    type->interface7.fp_get_ViewOrigin = (void(*)(uObject*, ::g::Uno::Float3*))Viewport__get_ViewOrigin_fn;
    type->interface7.fp_get_ViewRange = (void(*)(uObject*, ::g::Uno::Float2*))Viewport__get_ViewRange_fn;
    type->interface2.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface4.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface3.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface6.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface5.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface5.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface5.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface5.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseIChildObjectget_ParentObject_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[20] = ::g::Fuse::IFrustum_typeof();
    ::TYPES[25] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[7] = ::g::Uno::Float_typeof();
    ::TYPES[63] = ::g::Uno::Float2_typeof();
    ::TYPES[123] = ::g::FuseControls_bundle_typeof();
    ::TYPES[0] = ::g::Uno::Int_typeof();
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[23] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[13] = ::g::Fuse::DrawContext_typeof();
    ::TYPES[24] = ::g::Fuse::IViewport_typeof();
    ::TYPES[6] = ::g::Fuse::Node_typeof();
    ::TYPES[27] = ::g::Uno::Graphics::Framebuffer_typeof();
    ::TYPES[80] = ::g::Fuse::NodeBounds_typeof();
    ::TYPES[124] = ::g::Fuse::PerspectiveFrustum_typeof();
    ::TYPES[125] = ::g::Fuse::FrustumViewport_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(Viewport_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(Viewport_type, interface1),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(Viewport_type, interface2),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(Viewport_type, interface3),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(Viewport_type, interface4),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(Viewport_type, interface5),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(Viewport_type, interface6),
        ::g::Fuse::IViewport_typeof(), offsetof(Viewport_type, interface7));
    type->SetFields(88,
        ::g::Uno::Graphics::PolygonFace_typeof(), offsetof(::g::Fuse::Elements::Viewport, _cullFace), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Elements::Viewport, _draw_79d7a860), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::Viewport, _flatten), 0,
        ::g::Fuse::IFrustum_typeof(), offsetof(::g::Fuse::Elements::Viewport, _frustum), 0,
        ::g::Fuse::FrustumViewport_typeof(), offsetof(::g::Fuse::Elements::Viewport, _frustumViewport), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Elements::Viewport, _hasCullFace), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Elements::Viewport, _perspective), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Elements::Viewport, _rootNode), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Elements::Viewport, OnDraw_LocalTransform_79d7a860_4_8_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Elements::Viewport, OnDraw_LocalTransform_79d7a860_4_8_3), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Elements::Viewport, OnDraw_LocalTransform_79d7a860_4_8_4), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Elements::Viewport, OnDraw_VertexData_79d7a860_7_2_1), 0);
    type->Reflection.SetFunctions(21,
        new uFunction("get_CullFace", NULL, (void*)Viewport__get_CullFace_fn, 0, false, ::g::Uno::Graphics::PolygonFace_typeof(), 0),
        new uFunction("set_CullFace", NULL, (void*)Viewport__set_CullFace_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Graphics::PolygonFace_typeof()),
        new uFunction("get_Flatten", NULL, (void*)Viewport__get_Flatten_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Flatten", NULL, (void*)Viewport__set_Flatten_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)Viewport__New1_fn, 0, true, Viewport_typeof(), 0),
        new uFunction("get_Perspective", NULL, (void*)Viewport__get_Perspective_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Perspective", NULL, (void*)Viewport__set_Perspective_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_PixelSize", NULL, (void*)Viewport__get_PixelSize_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_PixelsPerPoint", NULL, (void*)Viewport__get_PixelsPerPoint_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("PointToWorldRay", NULL, (void*)Viewport__PointToWorldRay_fn, 0, false, ::g::Uno::Geometry::Ray_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_ProjectionTransform", NULL, (void*)Viewport__get_ProjectionTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_ProjectionTransformInverse", NULL, (void*)Viewport__get_ProjectionTransformInverse_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_RootNode", NULL, (void*)Viewport__get_RootNode_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_RootNode", NULL, (void*)Viewport__set_RootNode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("get_Size", NULL, (void*)Viewport__get_Size_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_ViewOrigin", NULL, (void*)Viewport__get_ViewOrigin_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("get_ViewProjectionTransform", NULL, (void*)Viewport__get_ViewProjectionTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_ViewProjectionTransformInverse", NULL, (void*)Viewport__get_ViewProjectionTransformInverse_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_ViewRange", NULL, (void*)Viewport__get_ViewRange_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_ViewTransform", NULL, (void*)Viewport__get_ViewTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_ViewTransformInverse", NULL, (void*)Viewport__get_ViewTransformInverse_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0));
    return type;
}

// public Viewport() :6501
void Viewport__ctor_2_fn(Viewport* __this)
{
    __this->ctor_2();
}

// protected override sealed void ArrangePaddingBox(Fuse.LayoutParams lp) :6635
void Viewport__ArrangePaddingBox_fn(Viewport* __this, ::g::Fuse::LayoutParams* lp)
{
    uStackFrame __("Fuse.Elements.Viewport", "ArrangePaddingBox(Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;

    if (__this->RootNode() != NULL)
        uPtr(__this->RootNode())->ArrangeMarginBox(::g::Uno::Float2__New1(0.0f), lp_);
}

// public Uno.Graphics.PolygonFace get_CullFace() :6510
void Viewport__get_CullFace_fn(Viewport* __this, int* __retval)
{
    *__retval = __this->CullFace();
}

// public void set_CullFace(Uno.Graphics.PolygonFace value) :6511
void Viewport__set_CullFace_fn(Viewport* __this, int* value)
{
    __this->CullFace(*value);
}

// public bool get_Flatten() :6579
void Viewport__get_Flatten_fn(Viewport* __this, bool* __retval)
{
    *__retval = __this->Flatten();
}

// public void set_Flatten(bool value) :6580
void Viewport__set_Flatten_fn(Viewport* __this, bool* value)
{
    __this->Flatten(*value);
}

// private Fuse.IFrustum get_Frustum() :6545
void Viewport__get_Frustum_fn(Viewport* __this, uObject** __retval)
{
    *__retval = __this->Frustum();
}

// private void set_Frustum(Fuse.IFrustum value) :6546
void Viewport__set_Frustum_fn(Viewport* __this, uObject* value)
{
    __this->Frustum(value);
}

// protected override sealed float2 GetContentSize(Fuse.LayoutParams lp) :6628
void Viewport__GetContentSize_fn(Viewport* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.Viewport", "GetContentSize(Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;

    if (__this->RootNode() != NULL)
        return *__retval = uPtr(__this->RootNode())->GetMarginSize(lp_), void();

    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// public override sealed Fuse.Node GetSubNode(int index) :6649
void Viewport__GetSubNode_fn(Viewport* __this, int* index, ::g::Fuse::Node** __retval)
{
    uStackFrame __("Fuse.Elements.Viewport", "GetSubNode(int)");
    return *__retval = __this->RootNode(), void();
}

// private bool get_HasCullFace() :6519
void Viewport__get_HasCullFace_fn(Viewport* __this, bool* __retval)
{
    *__retval = __this->HasCullFace();
}

// public override sealed Fuse.NodeBounds get_HitTestBounds() :6688
void Viewport__get_HitTestBounds_fn(Viewport* __this, ::g::Fuse::NodeBounds** __retval)
{
    uStackFrame __("Fuse.Elements.Viewport", "get_HitTestBounds()");
    return *__retval = ::g::Fuse::NodeBounds::Infinite(), void();
}

// private generated void init_DrawCalls() :6499
void Viewport__init_DrawCalls_fn(Viewport* __this)
{
    __this->init_DrawCalls();
}

// public Viewport New() :6501
void Viewport__New1_fn(Viewport** __retval)
{
    *__retval = Viewport::New1();
}

// protected override sealed void OnDraw(Fuse.DrawContext dc) :6587
void Viewport__OnDraw_fn(Viewport* __this, ::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Viewport", "OnDraw(Fuse.DrawContext)");

    if ((__this->RootNode() == NULL) || (__this->Frustum() == NULL))
        return;

    if (__this->HasCullFace())
        uPtr(dc)->PushCullFace(__this->CullFace());

    if (__this->Flatten())
    {
        ::g::Uno::Float2 pxSize = __this->PixelSize();
        ::g::Uno::Graphics::Framebuffer* fb = ::g::Fuse::FramebufferPool::Lock1(::g::Uno::Int2__New2((int)pxSize.X, (int)pxSize.Y), 3, true);
        uPtr(dc)->PushRenderTargetViewport(fb, __this->Frustum());
        dc->Clear(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f), 1.0f);
        uPtr(__this->RootNode())->Draw(dc);
        dc->PopRenderTargetViewport();
        ::g::Uno::Float4x4 LocalTransform_79d7a860_4_8_5 = ::g::Uno::Matrix::Mul10(__this->OnDraw_LocalTransform_79d7a860_4_8_2, ::g::Uno::Matrix::Scaling1(__this->ActualSize().X, __this->ActualSize().Y, 1.0f), __this->OnDraw_LocalTransform_79d7a860_4_8_3, __this->OnDraw_LocalTransform_79d7a860_4_8_4);
        __this->_draw_79d7a860.BlendEnabled(true);
        __this->_draw_79d7a860.DepthTestEnabled(false);
        __this->_draw_79d7a860.CullFace(uPtr(dc)->CullFace());
        __this->_draw_79d7a860.BlendSrcRgb(2);
        __this->_draw_79d7a860.BlendDstRgb(3);
        __this->_draw_79d7a860.BlendDstAlpha(3);
        __this->_draw_79d7a860.Use();
        __this->_draw_79d7a860.Attrib1(0, 2, __this->OnDraw_VertexData_79d7a860_7_2_1, 8, 0);
        __this->_draw_79d7a860.Uniform12(1, ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[24/*Fuse.IViewport*/])));
        __this->_draw_79d7a860.Uniform12(2, (__this != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_79d7a860_4_8_5, __this->WorldTransform()) : LocalTransform_79d7a860_4_8_5);
        __this->_draw_79d7a860.Sampler2(3, uPtr(fb)->ColorBuffer());
        __this->_draw_79d7a860.DrawArrays(6);
        ::g::Fuse::FramebufferPool::Release(fb);
    }
    else
    {
        __this->UpdateFrustum();
        uPtr(dc)->PushViewport((uObject*)__this);
        uPtr(__this->RootNode())->Draw(dc);
        dc->PopViewport();
    }

    if (__this->HasCullFace())
        dc->PopCullFace();
}

// protected override sealed void OnHitTestChildren(Fuse.HitTestContext htc) :6654
void Viewport__OnHitTestChildren_fn(Viewport* __this, ::g::Fuse::HitTestContext* htc)
{
    uStackFrame __("Fuse.Elements.Viewport", "OnHitTestChildren(Fuse.HitTestContext)");
    uPtr(__this->RootNode())->HitTest(htc);
}

// public float get_Perspective() :6557
void Viewport__get_Perspective_fn(Viewport* __this, float* __retval)
{
    *__retval = __this->Perspective();
}

// public void set_Perspective(float value) :6558
void Viewport__set_Perspective_fn(Viewport* __this, float* value)
{
    __this->Perspective(*value);
}

// public float2 get_PixelSize() :6663
void Viewport__get_PixelSize_fn(Viewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PixelSize();
}

// public float get_PixelsPerPoint() :6661
void Viewport__get_PixelsPerPoint_fn(Viewport* __this, float* __retval)
{
    *__retval = __this->PixelsPerPoint();
}

// public Uno.Geometry.Ray PointToWorldRay(float2 pointPos) :6680
void Viewport__PointToWorldRay_fn(Viewport* __this, ::g::Uno::Float2* pointPos, ::g::Uno::Geometry::Ray* __retval)
{
    *__retval = __this->PointToWorldRay(*pointPos);
}

// public float4x4 get_ProjectionTransform() :6666
void Viewport__get_ProjectionTransform_fn(Viewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ProjectionTransform();
}

// public float4x4 get_ProjectionTransformInverse() :6668
void Viewport__get_ProjectionTransformInverse_fn(Viewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ProjectionTransformInverse();
}

// public Fuse.Node get_RootNode() :6531
void Viewport__get_RootNode_fn(Viewport* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->RootNode();
}

// public void set_RootNode(Fuse.Node value) :6532
void Viewport__set_RootNode_fn(Viewport* __this, ::g::Fuse::Node* value)
{
    __this->RootNode(value);
}

// public float2 get_Size() :6662
void Viewport__get_Size_fn(Viewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public override sealed int get_SubNodeCount() :6643
void Viewport__get_SubNodeCount_fn(Viewport* __this, int* __retval)
{
    uStackFrame __("Fuse.Elements.Viewport", "get_SubNodeCount()");
    return *__retval = (__this->RootNode() != NULL) ? 1 : 0, void();
}

// private void UpdateFrustum() :6522
void Viewport__UpdateFrustum_fn(Viewport* __this)
{
    __this->UpdateFrustum();
}

// public float3 get_ViewOrigin() :6678
void Viewport__get_ViewOrigin_fn(Viewport* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->ViewOrigin();
}

// public float4x4 get_ViewProjectionTransform() :6670
void Viewport__get_ViewProjectionTransform_fn(Viewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewProjectionTransform();
}

// public float4x4 get_ViewProjectionTransformInverse() :6672
void Viewport__get_ViewProjectionTransformInverse_fn(Viewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewProjectionTransformInverse();
}

// public float2 get_ViewRange() :6679
void Viewport__get_ViewRange_fn(Viewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ViewRange();
}

// public float4x4 get_ViewTransform() :6674
void Viewport__get_ViewTransform_fn(Viewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewTransform();
}

// public float4x4 get_ViewTransformInverse() :6676
void Viewport__get_ViewTransformInverse_fn(Viewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewTransformInverse();
}

// public Viewport() [instance] :6501
void Viewport::ctor_2()
{
    uStackFrame __("Fuse.Elements.Viewport", ".ctor()");
    _frustumViewport = ::g::Fuse::FrustumViewport::New1();
    _frustum = (uObject*)::g::Fuse::OrthographicFrustum::New1();
    ctor_1();
    UpdateFrustum();
    init_DrawCalls();
}

// public Uno.Graphics.PolygonFace get_CullFace() [instance] :6510
int Viewport::CullFace()
{
    uStackFrame __("Fuse.Elements.Viewport", "get_CullFace()");
    return _cullFace;
}

// public void set_CullFace(Uno.Graphics.PolygonFace value) [instance] :6511
void Viewport::CullFace(int value)
{
    uStackFrame __("Fuse.Elements.Viewport", "set_CullFace(Uno.Graphics.PolygonFace)");
    _cullFace = value;
    _hasCullFace = true;
    InvalidateVisual();
}

// public bool get_Flatten() [instance] :6579
bool Viewport::Flatten()
{
    uStackFrame __("Fuse.Elements.Viewport", "get_Flatten()");
    return _flatten;
}

// public void set_Flatten(bool value) [instance] :6580
void Viewport::Flatten(bool value)
{
    uStackFrame __("Fuse.Elements.Viewport", "set_Flatten(bool)");
    _flatten = value;
    InvalidateVisual();
}

// private Fuse.IFrustum get_Frustum() [instance] :6545
uObject* Viewport::Frustum()
{
    uStackFrame __("Fuse.Elements.Viewport", "get_Frustum()");
    return _frustum;
}

// private void set_Frustum(Fuse.IFrustum value) [instance] :6546
void Viewport::Frustum(uObject* value)
{
    uStackFrame __("Fuse.Elements.Viewport", "set_Frustum(Fuse.IFrustum)");
    _frustum = value;
    InvalidateVisual();
    UpdateFrustum();
}

// private bool get_HasCullFace() [instance] :6519
bool Viewport::HasCullFace()
{
    uStackFrame __("Fuse.Elements.Viewport", "get_HasCullFace()");
    return _hasCullFace;
}

// private generated void init_DrawCalls() [instance] :6499
void Viewport::init_DrawCalls()
{
    uStackFrame __("Fuse.Elements.Viewport", "init_DrawCalls()");
    OnDraw_VertexData_79d7a860_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(uArray::Init< ::g::Uno::Float2>(::TYPES[25/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f))), 0);
    OnDraw_LocalTransform_79d7a860_4_8_2 = ::g::Uno::Matrix::Translation(-::g::Uno::Float2__New1(0.0f).X, -::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    OnDraw_LocalTransform_79d7a860_4_8_3 = ::g::Uno::Matrix::RotationZ(0.0f);
    OnDraw_LocalTransform_79d7a860_4_8_4 = ::g::Uno::Matrix::Translation(::g::Uno::Float2__New1(0.0f).X, ::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    _draw_79d7a860 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControls_bundle::Viewportb83477c3());
}

// public float get_Perspective() [instance] :6557
float Viewport::Perspective()
{
    uStackFrame __("Fuse.Elements.Viewport", "get_Perspective()");
    return _perspective;
}

// public void set_Perspective(float value) [instance] :6558
void Viewport::Perspective(float value)
{
    uStackFrame __("Fuse.Elements.Viewport", "set_Perspective(float)");

    if (value != _perspective)
    {
        _perspective = value;
        ::g::Fuse::PerspectiveFrustum* pf = uAs< ::g::Fuse::PerspectiveFrustum*>(Frustum(), ::TYPES[124/*Fuse.PerspectiveFrustum*/]);

        if (pf == NULL)
        {
            pf = ::g::Fuse::PerspectiveFrustum::New1();
            Frustum((uObject*)pf);
        }

        uPtr(pf)->Distance(_perspective);
        UpdateFrustum();
    }
}

// public float2 get_PixelSize() [instance] :6663
::g::Uno::Float2 Viewport::PixelSize()
{
    uStackFrame __("Fuse.Elements.Viewport", "get_PixelSize()");
    return ::g::Uno::Float2__op_Division1(ActualSize(), AbsoluteZoom());
}

// public float get_PixelsPerPoint() [instance] :6661
float Viewport::PixelsPerPoint()
{
    uStackFrame __("Fuse.Elements.Viewport", "get_PixelsPerPoint()");
    return ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(uPtr(Parent())->Viewport()), ::TYPES[24/*Fuse.IViewport*/]));
}

// public Uno.Geometry.Ray PointToWorldRay(float2 pointPos) [instance] :6680
::g::Uno::Geometry::Ray Viewport::PointToWorldRay(::g::Uno::Float2 pointPos)
{
    uStackFrame __("Fuse.Elements.Viewport", "PointToWorldRay(float2)");
    ::g::Uno::Geometry::Ray r = ::g::Fuse::FrustumViewport::PointToWorldRay((uObject*)this, pointPos);
    return r;
}

// public float4x4 get_ProjectionTransform() [instance] :6666
::g::Uno::Float4x4 Viewport::ProjectionTransform()
{
    uStackFrame __("Fuse.Elements.Viewport", "get_ProjectionTransform()");
    return uPtr(_frustumViewport)->ProjectionTransform;
}

// public float4x4 get_ProjectionTransformInverse() [instance] :6668
::g::Uno::Float4x4 Viewport::ProjectionTransformInverse()
{
    uStackFrame __("Fuse.Elements.Viewport", "get_ProjectionTransformInverse()");
    return uPtr(_frustumViewport)->ProjectionTransformInverse;
}

// public Fuse.Node get_RootNode() [instance] :6531
::g::Fuse::Node* Viewport::RootNode()
{
    uStackFrame __("Fuse.Elements.Viewport", "get_RootNode()");
    return _rootNode;
}

// public void set_RootNode(Fuse.Node value) [instance] :6532
void Viewport::RootNode(::g::Fuse::Node* value)
{
    uStackFrame __("Fuse.Elements.Viewport", "set_RootNode(Fuse.Node)");
    UnrootChild(_rootNode);
    _rootNode = value;
    RootChild(_rootNode);
    InvalidateLayout(2);
}

// public float2 get_Size() [instance] :6662
::g::Uno::Float2 Viewport::Size()
{
    uStackFrame __("Fuse.Elements.Viewport", "get_Size()");
    return ActualSize();
}

// private void UpdateFrustum() [instance] :6522
void Viewport::UpdateFrustum()
{
    uStackFrame __("Fuse.Elements.Viewport", "UpdateFrustum()");
    uPtr(_frustumViewport)->Update((uObject*)this, Frustum());
}

// public float3 get_ViewOrigin() [instance] :6678
::g::Uno::Float3 Viewport::ViewOrigin()
{
    uStackFrame __("Fuse.Elements.Viewport", "get_ViewOrigin()");
    return ::g::Fuse::IFrustum::GetWorldPosition(uInterface(uPtr(Frustum()), ::TYPES[20/*Fuse.IFrustum*/]), (uObject*)this);
}

// public float4x4 get_ViewProjectionTransform() [instance] :6670
::g::Uno::Float4x4 Viewport::ViewProjectionTransform()
{
    uStackFrame __("Fuse.Elements.Viewport", "get_ViewProjectionTransform()");
    return uPtr(_frustumViewport)->ViewProjectionTransform;
}

// public float4x4 get_ViewProjectionTransformInverse() [instance] :6672
::g::Uno::Float4x4 Viewport::ViewProjectionTransformInverse()
{
    uStackFrame __("Fuse.Elements.Viewport", "get_ViewProjectionTransformInverse()");
    return uPtr(_frustumViewport)->ViewProjectionTransformInverse;
}

// public float2 get_ViewRange() [instance] :6679
::g::Uno::Float2 Viewport::ViewRange()
{
    uStackFrame __("Fuse.Elements.Viewport", "get_ViewRange()");
    return ::g::Fuse::IFrustum::GetDepthRange(uInterface(uPtr(Frustum()), ::TYPES[20/*Fuse.IFrustum*/]), (uObject*)this);
}

// public float4x4 get_ViewTransform() [instance] :6674
::g::Uno::Float4x4 Viewport::ViewTransform()
{
    uStackFrame __("Fuse.Elements.Viewport", "get_ViewTransform()");
    return uPtr(_frustumViewport)->ViewTransform;
}

// public float4x4 get_ViewTransformInverse() [instance] :6676
::g::Uno::Float4x4 Viewport::ViewTransformInverse()
{
    uStackFrame __("Fuse.Elements.Viewport", "get_ViewTransformInverse()");
    return uPtr(_frustumViewport)->ViewTransformInverse;
}

// public Viewport New() [static] :6501
Viewport* Viewport::New1()
{
    Viewport* obj1 = (Viewport*)uNew(Viewport_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#15
// ------------------------------------------------------------

// public enum Visibility :2013
uEnumType* Visibility_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.Visibility", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Visible", 0LL,
        "Collapsed", 1LL,
        "Hidden", 2LL);
    return type;
}

}}} // ::g::Fuse::Elements
