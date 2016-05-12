// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseCore_bundle.h>
#include <Fuse.AlternateRoot.h>
#include <Fuse.App.h>
#include <Fuse.AppBase.h>
#include <Fuse.BeginRemoveArgs.h>
#include <Fuse.BeginRemoveHandler.h>
#include <Fuse.Behavior.h>
#include <Fuse.Behavior.RootStatus.h>
#include <Fuse.CacheFramebuffer.h>
#include <Fuse.Controls.ContentControl.h>
#include <Fuse.Controls.Graphics.PlatformTextRenderer.h>
#include <Fuse.Controls.Graphics.TextRendererFactory.h>
#include <Fuse.Controls.GraphicsView.h>
#include <Fuse.DataContextChangedArgs.h>
#include <Fuse.DataContextChangedHandler.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.DrawArgs.h>
#include <Fuse.DrawContext.h>
#include <Fuse.DrawHandler.h>
#include <Fuse.DrawHelpers.h>
#include <Fuse.FastMatrix.h>
#include <Fuse.FixedViewport.h>
#include <Fuse.Font.h>
#include <Fuse.Fonts.h>
#include <Fuse.FramebufferPool.h>
#include <Fuse.FramebufferPoolImpl.h>
#include <Fuse.FrustumViewport.h>
#include <Fuse.GraphicsTheme.h>
#include <Fuse.GraphicsWorker.h>
#include <Fuse.HitTestCallback.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.HitTestHandler.h>
#include <Fuse.HitTestResult.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IChildObject.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IFlush.h>
#include <Fuse.IFrustum.h>
#include <Fuse.INameListener.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Input.FocusNavigationDirection.h>
#include <Fuse.Input.Keyboard.h>
#include <Fuse.Input.TextService.h>
#include <Fuse.Internal.FrustumMatrix.h>
#include <Fuse.Internal.SimpleLock.h>
#include <Fuse.InvalidateLayoutReason.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.iOS.FirstResponder.h>
#include <Fuse.iOS.NativeStyle.h>
#include <Fuse.iOS.NativeViews.NativeView.h>
#include <Fuse.iOS.TextRenderer.h>
#include <Fuse.IOutput-1.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITransformMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.IViewport.h>
#include <Fuse.KeyboardBootstrapper.h>
#include <Fuse.Launcher.h>
#include <Fuse.Layer.h>
#include <Fuse.LayoutDependent.h>
#include <Fuse.LayoutParams.Flags.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.LayoutRole.h>
#include <Fuse.MarginBoxDependent.h>
#include <Fuse.MobileBootstrapping.h>
#include <Fuse.NameRegistry.h>
#include <Fuse.NativeTheme.h>
#include <Fuse.Node.CancelInteractionsType.h>
#include <Fuse.Node.h>
#include <Fuse.Node.HitTestRecord.h>
#include <Fuse.Node.InteractionItem.h>
#include <Fuse.Node.NodeBits.h>
#include <Fuse.Node.RootStage.h>
#include <Fuse.NodeBounds.h>
#include <Fuse.NodeEvent-2.h>
#include <Fuse.NodeEventArgs.h>
#include <Fuse.NodeEventHandler.h>
#include <Fuse.NodeEventMode.h>
#include <Fuse.NodeListCache.h>
#include <Fuse.OrthographicFrustum.h>
#include <Fuse.PerspectiveFrustum.h>
#include <Fuse.PlacedArgs.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Preview.SelectionManager.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.PropertyState.h>
#include <Fuse.RenderTargetEntry.h>
#include <Fuse.RequestBringIntoViewArgs.h>
#include <Fuse.RequestBringIntoViewHandler.h>
#include <Fuse.RequiresRootedException.h>
#include <Fuse.Resources.DisposalManager.h>
#include <Fuse.Resources.DisposalRequest.h>
#include <Fuse.Resources.ResourceRegistry.h>
#include <Fuse.RootViewport.h>
#include <Fuse.Rotation.h>
#include <Fuse.Scaling.h>
#include <Fuse.ScalingModes.h>
#include <Fuse.ScalingModes.IdentityMode.h>
#include <Fuse.Scripting.ExecutionThread.h>
#include <Fuse.Scripting.IEventSerializer.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptMethod.h>
#include <Fuse.Scripting.ScriptMethod-1.h>
#include <Fuse.Shear.h>
#include <Fuse.Stage.h>
#include <Fuse.Style.h>
#include <Fuse.StyleProperty.h>
#include <Fuse.StyleProperty-2.h>
#include <Fuse.Theme.h>
#include <Fuse.Time.h>
#include <Fuse.Timer.h>
#include <Fuse.Transform.h>
#include <Fuse.TransformModeFlags.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.TranslationModes.LocalMode.h>
#include <Fuse.TranslationModes.ParentSizeMode.h>
#include <Fuse.TranslationModes.SizeMode.h>
#include <Fuse.UnhandledExceptionArgs.h>
#include <Fuse.UnhandledExceptionHandler.h>
#include <Fuse.UpdateDispatcher.h>
#include <Fuse.UpdateListener.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.UserEvent.h>
#include <Fuse.UserEventArgs.h>
#include <Fuse.UserEventDispatch.h>
#include <Fuse.UserEventHandler.h>
#include <iOS.Foundation.NSURL.h>
#include <iOS.OpenGLES.EAGLContext.h>
#include <iOS.OpenGLES.EAGLRenderingAPI.h>
#include <iOS.OpenGLES.EAGLSharegroup.h>
#include <iOS.UIKit.UIApplication.h>
#include <iOS.UIKit.UIResponder.h>
#include <iOS.UIKit.UIView.h>
#include <ObjC.Bindings.Object.h>
#include <ObjC.ID.h>
#include <OpenGL.GL.h>
#include <OpenGL.GLClearBufferMask.h>
#include <OpenGL.GLEnableCap.h>
#include <OpenGL.GLError.h>
#include <OpenGL.GLFramebufferHandle.h>
#include <OpenGL.GLFramebufferTarget.h>
#include <OpenGL.GLInteger4Name.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.AggregateException.h>
#include <Uno.Application.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.h>
#include <Uno.Collections.HashSet-1.Enumerator.h>
#include <Uno.Collections.HashSet-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.IListExtensions.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Collections.ReadOnlyCollection-1.h>
#include <Uno.Content.Fonts.FontFace.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Func-2.h>
#include <Uno.Geometry.Collision.h>
#include <Uno.Geometry.Ray.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.FramebufferFlags.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.PrimitiveType.h>
#include <Uno.Graphics.RenderTarget.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Net.Http.Uri.h>
#include <Uno.Object.h>
#include <Uno.Platform.Key.h>
#include <Uno.Platform.KeyEventArgs.h>
#include <Uno.Platform.TextInputEventArgs.h>
#include <Uno.Platform.TimerEventArgs.h>
#include <Uno.Platform.Window.h>
#include <Uno.Platform2.Application.h>
#include <Uno.Platform2.ApplicationState.h>
#include <Uno.Platform2.ApplicationStateTransitionHandler.h>
#include <Uno.Platform2.Display.h>
#include <Uno.Predicate-1.h>
#include <Uno.Quaternion.h>
#include <Uno.Rect.h>
#include <Uno.Recti.h>
#include <Uno.Runtime.Implementation.GraphicsContextHandle.h>
#include <Uno.Runtime.Implementation.GraphicsContextImpl.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Threading.ConcurrentQueue-1.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.Thread.h>
#include <Uno.UInt.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Resource.h>
#include <Uno.Vector.h>
static uString* STRINGS[70];
static uType* TYPES[192];

namespace g{
namespace Fuse{

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno
// ----------------------------------------------------

// public sealed class AlternateRoot :10
// {
::g::Fuse::Behavior_type* AlternateRoot_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(AlternateRoot);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.AlternateRoot", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_ctor_ = (void*)AlternateRoot__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))AlternateRoot__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))AlternateRoot__OnUnrooted_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    ::STRINGS[0] = uString::Const("AlternateRoot.ParentNode is not a valid container");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno");
    ::STRINGS[2] = uString::Const("set_ParentNode");
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[1] = ::g::Fuse::Behavior_typeof();
    ::TYPES[2] = ::g::Fuse::IObjectContainer_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::Behavior_type, interface0));
    type->SetFields(3,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::AlternateRoot, _isEnabled), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::AlternateRoot, _node), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::AlternateRoot, _parentNode), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::AlternateRoot, _preserveContext), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("get_IsEnabled", NULL, (void*)AlternateRoot__get_IsEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsEnabled", NULL, (void*)AlternateRoot__set_IsEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)AlternateRoot__New1_fn, 0, true, AlternateRoot_typeof(), 0),
        new uFunction("get_Node", NULL, (void*)AlternateRoot__get_Node_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_Node", NULL, (void*)AlternateRoot__set_Node_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("get_ParentNode", NULL, (void*)AlternateRoot__get_ParentNode1_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_ParentNode", NULL, (void*)AlternateRoot__set_ParentNode1_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("get_PreserveContext", NULL, (void*)AlternateRoot__get_PreserveContext_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_PreserveContext", NULL, (void*)AlternateRoot__set_PreserveContext_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
    return type;
}

// public generated AlternateRoot() :10
void AlternateRoot__ctor_1_fn(AlternateRoot* __this)
{
    __this->ctor_1();
}

// private void Add() :109
void AlternateRoot__Add_fn(AlternateRoot* __this)
{
    __this->Add();
}

// public bool get_IsEnabled() :65
void AlternateRoot__get_IsEnabled_fn(AlternateRoot* __this, bool* __retval)
{
    *__retval = __this->IsEnabled();
}

// public void set_IsEnabled(bool value) :66
void AlternateRoot__set_IsEnabled_fn(AlternateRoot* __this, bool* value)
{
    __this->IsEnabled(*value);
}

// public generated AlternateRoot New() :10
void AlternateRoot__New1_fn(AlternateRoot** __retval)
{
    *__retval = AlternateRoot::New1();
}

// public Fuse.Node get_Node() :44
void AlternateRoot__get_Node_fn(AlternateRoot* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Node();
}

// public void set_Node(Fuse.Node value) :45
void AlternateRoot__set_Node_fn(AlternateRoot* __this, ::g::Fuse::Node* value)
{
    __this->Node(value);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :89
void AlternateRoot__OnRooted_fn(AlternateRoot* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.AlternateRoot", "OnRooted(Fuse.Node)");
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);

    if (__this->IsEnabled())
        __this->Add();
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :96
void AlternateRoot__OnUnrooted_fn(AlternateRoot* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.AlternateRoot", "OnUnrooted(Fuse.Node)");
    __this->Remove();
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// public new Fuse.Node get_ParentNode() :15
void AlternateRoot__get_ParentNode1_fn(AlternateRoot* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->ParentNode1();
}

// public new void set_ParentNode(Fuse.Node value) :16
void AlternateRoot__set_ParentNode1_fn(AlternateRoot* __this, ::g::Fuse::Node* value)
{
    __this->ParentNode1(value);
}

// public bool get_PreserveContext() :85
void AlternateRoot__get_PreserveContext_fn(AlternateRoot* __this, bool* __retval)
{
    *__retval = __this->PreserveContext();
}

// public void set_PreserveContext(bool value) :86
void AlternateRoot__set_PreserveContext_fn(AlternateRoot* __this, bool* value)
{
    __this->PreserveContext(*value);
}

// private void Remove() :102
void AlternateRoot__Remove_fn(AlternateRoot* __this)
{
    __this->Remove();
}

// public generated AlternateRoot() [instance] :10
void AlternateRoot::ctor_1()
{
    uStackFrame __("Fuse.AlternateRoot", ".ctor()");
    _isEnabled = true;
    _preserveContext = true;
    ctor_();
}

// private void Add() [instance] :109
void AlternateRoot::Add()
{
    uStackFrame __("Fuse.AlternateRoot", "Add()");

    if ((ParentNode1() == NULL) || (Node() == NULL))
        return;

    if (PreserveContext())
        uPtr(Node())->OverrideContextParent = ParentNode();

    ::g::Fuse::IObjectContainer::Add(uInterface(uPtr(uAs<uObject*>(ParentNode1(), ::TYPES[2/*Fuse.IObjectContainer*/])), ::TYPES[2/*Fuse.IObjectContainer*/]), Node());
}

// public bool get_IsEnabled() [instance] :65
bool AlternateRoot::IsEnabled()
{
    uStackFrame __("Fuse.AlternateRoot", "get_IsEnabled()");
    return _isEnabled;
}

// public void set_IsEnabled(bool value) [instance] :66
void AlternateRoot::IsEnabled(bool value)
{
    uStackFrame __("Fuse.AlternateRoot", "set_IsEnabled(bool)");

    if (_isEnabled == value)
        return;

    _isEnabled = value;

    if (!IsRooted())
        return;

    if (_isEnabled)
        Add();
    else
        Remove();
}

// public Fuse.Node get_Node() [instance] :44
::g::Fuse::Node* AlternateRoot::Node()
{
    uStackFrame __("Fuse.AlternateRoot", "get_Node()");
    return _node;
}

// public void set_Node(Fuse.Node value) [instance] :45
void AlternateRoot::Node(::g::Fuse::Node* value)
{
    uStackFrame __("Fuse.AlternateRoot", "set_Node(Fuse.Node)");

    if (value == _node)
        return;

    if (!IsRooted())
    {
        _node = value;
        return;
    }

    Remove();
    _node = value;
    Add();
}

// public new Fuse.Node get_ParentNode() [instance] :15
::g::Fuse::Node* AlternateRoot::ParentNode1()
{
    uStackFrame __("Fuse.AlternateRoot", "get_ParentNode()");
    return _parentNode;
}

// public new void set_ParentNode(Fuse.Node value) [instance] :16
void AlternateRoot::ParentNode1(::g::Fuse::Node* value)
{
    uStackFrame __("Fuse.AlternateRoot", "set_ParentNode(Fuse.Node)");

    if (value == _parentNode)
        return;

    if ((value != NULL) && !uIs(value, ::TYPES[2/*Fuse.IObjectContainer*/]))
    {
        ::g::Fuse::Diagnostics::Error(::STRINGS[0/*"AlternateRo...*/], value, ::STRINGS[1/*"/usr/local/...*/], 23, ::STRINGS[2/*"set_ParentN...*/]);
        value = NULL;
    }

    if (!IsRooted())
    {
        _parentNode = value;
        return;
    }

    Remove();
    _parentNode = value;
    Add();
}

// public bool get_PreserveContext() [instance] :85
bool AlternateRoot::PreserveContext()
{
    uStackFrame __("Fuse.AlternateRoot", "get_PreserveContext()");
    return _preserveContext;
}

// public void set_PreserveContext(bool value) [instance] :86
void AlternateRoot::PreserveContext(bool value)
{
    uStackFrame __("Fuse.AlternateRoot", "set_PreserveContext(bool)");
    _preserveContext = value;
}

// private void Remove() [instance] :102
void AlternateRoot::Remove()
{
    uStackFrame __("Fuse.AlternateRoot", "Remove()");

    if ((ParentNode1() == NULL) || (Node() == NULL))
        return;

    ::g::Fuse::IObjectContainer::BeginRemove(uInterface(uPtr(uAs<uObject*>(ParentNode1(), ::TYPES[2/*Fuse.IObjectContainer*/])), ::TYPES[2/*Fuse.IObjectContainer*/]), Node());
}

// public generated AlternateRoot New() [static] :10
AlternateRoot* AlternateRoot::New1()
{
    AlternateRoot* obj1 = (AlternateRoot*)uNew(AlternateRoot_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.27.14/$.uno#1
// ------------------------------------------------------

// public extern class App :258
// {
::g::Fuse::AppBase_type* App_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ObjectSize = sizeof(App);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("Fuse.App", options);
    type->SetBase(::g::Fuse::AppBase_typeof());
    type->fp_ctor_ = (void*)App__New1_fn;
    type->fp_OnSetRootNode = (void(*)(::g::Fuse::AppBase*, ::g::Fuse::Node*))App__OnSetRootNode_fn;
    type->fp_OnSetTheme = (void(*)(::g::Fuse::AppBase*, ::g::Fuse::Theme*))App__OnSetTheme_fn;
    type->fp_OnUpdate = (void(*)(::g::Fuse::AppBase*))App__OnUpdate_fn;
    ::STRINGS[3] = uString::Const("RootViewport.Content is not null, unroot before changing theme");
    ::TYPES[5] = ::g::Fuse::Controls::Graphics::PlatformTextRenderer_typeof();
    ::TYPES[6] = ::g::Fuse::Controls::Graphics::TextRendererFactory_typeof();
    ::TYPES[7] = ::g::Fuse::AppBase_typeof();
    ::TYPES[8] = ::g::Fuse::Style_typeof();
    ::TYPES[9] = ::g::Uno::Application_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[10] = ::g::Uno::Platform2::Display_typeof();
    ::TYPES[11] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::TimerEventArgs_typeof());
    ::TYPES[12] = ::g::ObjC::Bindings::Object_typeof();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[13] = ::g::Fuse::iOS::FirstResponder_typeof();
    ::TYPES[14] = ::g::Fuse::Controls::ContentControl_typeof();
    ::TYPES[15] = ::g::Fuse::RootViewport_typeof();
    ::TYPES[16] = ::g::Fuse::GraphicsTheme_typeof();
    ::TYPES[17] = ::g::Fuse::Controls::GraphicsView_typeof();
    type->SetFields(14,
        ::g::iOS::UIKit::UIView_typeof(), offsetof(::g::Fuse::App, _currentFocus), 0,
        ::g::Fuse::Controls::GraphicsView_typeof(), offsetof(::g::Fuse::App, _graphicsView), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)App__New1_fn, 0, true, App_typeof(), 0));
    return type;
}

// public App() :262
void App__ctor_2_fn(App* __this)
{
    __this->ctor_2();
}

// private void CheckFocus() :349
void App__CheckFocus_fn(App* __this)
{
    __this->CheckFocus();
}

// public App New() :262
void App__New1_fn(App** __retval)
{
    *__retval = App::New1();
}

// protected override sealed void OnSetRootNode(Fuse.Node root) :303
void App__OnSetRootNode_fn(App* __this, ::g::Fuse::Node* root)
{
    uStackFrame __("Fuse.App", "OnSetRootNode(Fuse.Node)");

    if (__this->_graphicsView != NULL)
        uPtr(__this->_graphicsView)->Content(root);
    else
        uPtr(__this->RootViewport())->Content(root);
}

// protected override sealed void OnSetTheme(Fuse.Theme theme) :313
void App__OnSetTheme_fn(App* __this, ::g::Fuse::Theme* theme)
{
    uStackFrame __("Fuse.App", "OnSetTheme(Fuse.Theme)");

    if (uIs(theme, ::TYPES[16/*Fuse.GraphicsTheme*/]))
    {
        if (__this->_graphicsView == NULL)
        {
            if (uPtr(__this->RootViewport())->Content() != NULL)
                U_THROW(::g::Uno::Exception::New2(::STRINGS[3/*"RootViewpor...*/]));

            __this->_graphicsView = ::g::Fuse::Controls::GraphicsView::New2();
            uPtr(__this->RootViewport())->Content(__this->_graphicsView);
        }
    }
    else
    {
        if (__this->_graphicsView != NULL)
        {
            if (uPtr(__this->_graphicsView)->Content() != NULL)
                U_THROW(::g::Uno::Exception::New2(::STRINGS[3/*"RootViewpor...*/]));

            __this->_graphicsView = NULL;
            uPtr(__this->RootViewport())->Content(NULL);
        }
    }
}

// private void OnTick(object sender, Uno.Platform.TimerEventArgs args) :275
void App__OnTick_fn(App* __this, uObject* sender, ::g::Uno::Platform::TimerEventArgs* args)
{
    __this->OnTick(sender, args);
}

// protected override void OnUpdate() :341
void App__OnUpdate_fn(App* __this)
{
    uStackFrame __("Fuse.App", "OnUpdate()");
    __this->CheckFocus();
    ::g::Fuse::AppBase__OnUpdate_fn(__this);
}

// private void PropagateBackground() :297
void App__PropagateBackground_fn(App* __this)
{
    __this->PropagateBackground();
}

// public App() [instance] :262
void App::ctor_2()
{
    uStackFrame __("Fuse.App", ".ctor()");
    ctor_1();
    ::g::Fuse::MobileBootstrapping::Init();
    ::g::Fuse::Controls::Graphics::PlatformTextRenderer::Factory() = uDelegate::New(::TYPES[6/*Fuse.Controls.Graphics.TextRendererFactory*/], (void*)::g::Fuse::iOS::TextRenderer__Create_fn);
    NativeStyle(::g::Fuse::iOS::NativeStyle::New2());
    RootViewport(::g::Fuse::RootViewport::New1(Window(), 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(RootViewport())->Styles()), ::TYPES[111/*Uno.Collections.ICollection<Fuse.Style>*/]), NativeStyle());
    ::g::Fuse::Time::Init(::g::Uno::Diagnostics::Clock::GetSeconds());
    uPtr(::g::Uno::Platform2::Display::MainDisplay())->add_Tick(uDelegate::New(::TYPES[11/*Uno.EventHandler<Uno.Platform.TimerEventArgs>*/], (void*)App__OnTick_fn, this));
}

// private void CheckFocus() [instance] :349
void App::CheckFocus()
{
    uStackFrame __("Fuse.App", "CheckFocus()");

    if (::g::ObjC::ID::op_Equality(::g::ObjC::Bindings::Object::op_Implicit(_currentFocus), ::g::ObjC::Bindings::Object::op_Implicit(NULL)) || !uPtr(_currentFocus)->isFirstResponder())
    {
        ::g::iOS::UIKit::UIView* uiview = ::g::Fuse::iOS::FirstResponder::Current();

        if (!(::g::ObjC::ID::op_Equality(::g::ObjC::Bindings::Object::op_Implicit(_currentFocus), ::g::ObjC::Bindings::Object::op_Implicit(NULL)) && ::g::ObjC::ID::op_Equality(::g::ObjC::Bindings::Object::op_Implicit(uiview), ::g::ObjC::Bindings::Object::op_Implicit(NULL))))
        {
            ::g::Fuse::Node* node = ::g::ObjC::ID::op_Equality(::g::ObjC::Bindings::Object::op_Implicit(uiview), ::g::ObjC::Bindings::Object::op_Implicit(NULL)) ? uCast< ::g::Fuse::Node*>(NULL, ::TYPES[0/*Fuse.Node*/]) : (::g::Fuse::Node*)::g::Fuse::iOS::NativeViews::NativeView::GetFrom1(uiview);
            ::g::Fuse::Input::Focus::Obtained(node);
            _currentFocus = uiview;
        }
    }
}

// private void OnTick(object sender, Uno.Platform.TimerEventArgs args) [instance] :275
void App::OnTick(uObject* sender, ::g::Uno::Platform::TimerEventArgs* args)
{
    uStackFrame __("Fuse.App", "OnTick(object,Uno.Platform.TimerEventArgs)");

    try
    {
        PropagateBackground();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }

    ::g::Fuse::Time::Set(::g::Uno::Diagnostics::Clock::GetSeconds());

    try
    {
        OnUpdate();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e1 = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e1);
    }
}

// private void PropagateBackground() [instance] :297
void App::PropagateBackground()
{
    uStackFrame __("Fuse.App", "PropagateBackground()");

    if (_graphicsView != NULL)
        uPtr(_graphicsView)->Color(Background());
}

// public App New() [static] :262
App* App::New1()
{
    App* obj1 = (App*)uNew(App_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#1
// ------------------------------------------------------

// public abstract class AppBase :149
// {
AppBase_type* AppBase_typeof()
{
    static uSStrong<AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.ObjectSize = sizeof(AppBase);
    options.TypeSize = sizeof(AppBase_type);
    type = (AppBase_type*)uClassType::New("Fuse.AppBase", options);
    type->SetBase(::g::Uno::Application_typeof());
    type->fp_OnSetTheme = AppBase__OnSetTheme_fn;
    type->fp_OnUpdate = AppBase__OnUpdate_fn;
    ::STRINGS[4] = uString::Const("Unhandled exception: \n"
        "\n"
        "");
    ::STRINGS[5] = uString::Const("\n"
        "\n"
        "");
    ::TYPES[18] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[16] = ::g::Fuse::GraphicsTheme_typeof();
    ::TYPES[9] = ::g::Uno::Application_typeof();
    ::TYPES[19] = ::g::Uno::Platform2::Application_typeof();
    ::TYPES[20] = ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof();
    ::TYPES[21] = ::g::Uno::EventHandler_typeof();
    ::TYPES[22] = ::g::Fuse::Preview::SelectionManager_typeof();
    ::TYPES[23] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof());
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[8] = ::g::Fuse::Style_typeof();
    ::TYPES[24] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[3] = uObject_typeof();
    ::TYPES[25] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[26] = ::g::Uno::Delegate_typeof();
    ::TYPES[27] = ::g::Fuse::UnhandledExceptionHandler_typeof();
    ::TYPES[28] = ::g::Fuse::UnhandledExceptionArgs_typeof();
    ::TYPES[29] = ::g::Uno::AggregateException_typeof();
    ::TYPES[30] = ::g::Uno::Collections::ReadOnlyCollection_typeof()->MakeType(::g::Uno::Exception_typeof());
    ::TYPES[31] = ::g::Uno::Exception_typeof();
    ::TYPES[15] = ::g::Fuse::RootViewport_typeof();
    type->SetFields(4,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::AppBase, _hasPendingReify), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::AppBase, _hasPendingRootNode), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::AppBase, _pendingRootNode), 0,
        ::g::Fuse::Theme_typeof(), offsetof(::g::Fuse::AppBase, _pendingTheme), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::AppBase, _rootNode), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::AppBase, _selection), 0,
        ::g::Fuse::Theme_typeof(), offsetof(::g::Fuse::AppBase, _theme), 0,
        ::g::Fuse::Style_typeof(), offsetof(::g::Fuse::AppBase, _NativeStyle), 0,
        ::g::Fuse::RootViewport_typeof(), offsetof(::g::Fuse::AppBase, _RootViewport), 0,
        ::g::Fuse::UnhandledExceptionHandler_typeof(), offsetof(::g::Fuse::AppBase, UnhandledException1), 0);
    type->Reflection.SetFunctions(13,
        new uFunction("get_Background", NULL, (void*)AppBase__get_Background_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Background", NULL, (void*)AppBase__set_Background_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_Behaviors", NULL, (void*)AppBase__get_Behaviors_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Behavior_typeof()), 0),
        new uFunction("get_Current", NULL, (void*)AppBase__get_Current1_fn, 0, true, AppBase_typeof(), 0),
        new uFunction("DrawSelection", NULL, (void*)AppBase__DrawSelection_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::DrawContext_typeof()),
        new uFunction("OnUnhandledException", NULL, (void*)AppBase__OnUnhandledException_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Exception_typeof()),
        new uFunction("get_Resources", NULL, (void*)AppBase__get_Resources_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Resource_typeof()), 0),
        new uFunction("get_RootNode", NULL, (void*)AppBase__get_RootNode_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_RootNode", NULL, (void*)AppBase__set_RootNode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("get_Theme", NULL, (void*)AppBase__get_Theme_fn, 0, false, ::g::Fuse::Theme_typeof(), 0),
        new uFunction("set_Theme", NULL, (void*)AppBase__set_Theme_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Theme_typeof()),
        new uFunction("add_UnhandledException", NULL, (void*)AppBase__add_UnhandledException_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::UnhandledExceptionHandler_typeof()),
        new uFunction("remove_UnhandledException", NULL, (void*)AppBase__remove_UnhandledException_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::UnhandledExceptionHandler_typeof()));
    return type;
}

// protected AppBase() :155
void AppBase__ctor_1_fn(AppBase* __this)
{
    __this->ctor_1();
}

// public float4 get_Background() :274
void AppBase__get_Background_fn(AppBase* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Background();
}

// public void set_Background(float4 value) :275
void AppBase__set_Background_fn(AppBase* __this, ::g::Uno::Float4* value)
{
    __this->Background(*value);
}

// public Uno.Collections.IList<Fuse.Behavior> get_Behaviors() :357
void AppBase__get_Behaviors_fn(AppBase* __this, uObject** __retval)
{
    *__retval = __this->Behaviors();
}

// private void CheckPendingReify() :297
void AppBase__CheckPendingReify_fn(AppBase* __this)
{
    __this->CheckPendingReify();
}

// public static new Fuse.AppBase get_Current() :269
void AppBase__get_Current1_fn(AppBase** __retval)
{
    *__retval = AppBase::Current1();
}

// public void DrawSelection(Fuse.DrawContext dc) :211
void AppBase__DrawSelection_fn(AppBase* __this, ::g::Fuse::DrawContext* dc)
{
    __this->DrawSelection(dc);
}

// private void FindSelection(Fuse.Node n) :203
void AppBase__FindSelection_fn(AppBase* __this, ::g::Fuse::Node* n)
{
    __this->FindSelection(n);
}

// internal generated Fuse.Style get_NativeStyle() :153
void AppBase__get_NativeStyle_fn(AppBase* __this, ::g::Fuse::Style** __retval)
{
    *__retval = __this->NativeStyle();
}

// internal generated void set_NativeStyle(Fuse.Style value) :153
void AppBase__set_NativeStyle_fn(AppBase* __this, ::g::Fuse::Style* value)
{
    __this->NativeStyle(value);
}

// private void OnEnteringBackground(Uno.Platform2.ApplicationState s) :222
void AppBase__OnEnteringBackground_fn(AppBase* __this, int* s)
{
    __this->OnEnteringBackground(*s);
}

// private void OnLowMemory(object s, object a) :227
void AppBase__OnLowMemory_fn(AppBase* __this, uObject* s, uObject* a)
{
    __this->OnLowMemory(s, a);
}

// private void OnSelectionChanged(object sender, Uno.EventArgs args) :193
void AppBase__OnSelectionChanged_fn(AppBase* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnSelectionChanged(sender, args);
}

// protected virtual void OnSetTheme(Fuse.Theme theme) :351
void AppBase__OnSetTheme_fn(AppBase* __this, ::g::Fuse::Theme* theme)
{
}

// public void OnUnhandledException(Uno.Exception e) :234
void AppBase__OnUnhandledException_fn(AppBase* __this, ::g::Uno::Exception* e)
{
    __this->OnUnhandledException(e);
}

// internal static void OnUnhandledExceptionInternal(Uno.Exception e) :261
void AppBase__OnUnhandledExceptionInternal_fn(::g::Uno::Exception* e)
{
    AppBase::OnUnhandledExceptionInternal(e);
}

// protected virtual void OnUpdate() :359
void AppBase__OnUpdate_fn(AppBase* __this)
{
    uStackFrame __("Fuse.AppBase", "OnUpdate()");
    __this->CheckPendingReify();
    ::g::Fuse::UpdateManager::Update();
    ::g::Fuse::UpdateManager::IncreaseFrameIndex();
}

// internal float get_PixelsPerPoint() :173
void AppBase__get_PixelsPerPoint_fn(AppBase* __this, float* __retval)
{
    *__retval = __this->PixelsPerPoint();
}

// public Uno.Collections.IList<Uno.UX.Resource> get_Resources() :354
void AppBase__get_Resources_fn(AppBase* __this, uObject** __retval)
{
    *__retval = __this->Resources();
}

// public Fuse.Node get_RootNode() :283
void AppBase__get_RootNode_fn(AppBase* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->RootNode();
}

// public void set_RootNode(Fuse.Node value) :284
void AppBase__set_RootNode_fn(AppBase* __this, ::g::Fuse::Node* value)
{
    __this->RootNode(value);
}

// protected generated Fuse.RootViewport get_RootViewport() :151
void AppBase__get_RootViewport_fn(AppBase* __this, ::g::Fuse::RootViewport** __retval)
{
    *__retval = __this->RootViewport();
}

// protected generated void set_RootViewport(Fuse.RootViewport value) :151
void AppBase__set_RootViewport_fn(AppBase* __this, ::g::Fuse::RootViewport* value)
{
    __this->RootViewport(value);
}

// public Fuse.Theme get_Theme() :341
void AppBase__get_Theme_fn(AppBase* __this, ::g::Fuse::Theme** __retval)
{
    *__retval = __this->Theme();
}

// public void set_Theme(Fuse.Theme value) :342
void AppBase__set_Theme_fn(AppBase* __this, ::g::Fuse::Theme* value)
{
    __this->Theme(value);
}

// public generated void add_UnhandledException(Fuse.UnhandledExceptionHandler value) :232
void AppBase__add_UnhandledException_fn(AppBase* __this, uDelegate* value)
{
    __this->add_UnhandledException(value);
}

// public generated void remove_UnhandledException(Fuse.UnhandledExceptionHandler value) :232
void AppBase__remove_UnhandledException_fn(AppBase* __this, uDelegate* value)
{
    __this->remove_UnhandledException(value);
}

// protected AppBase() [instance] :155
void AppBase::ctor_1()
{
    uStackFrame __("Fuse.AppBase", ".ctor()");
    _selection = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[18/*Uno.Collections.List<Fuse.Node>*/]));
    _pendingTheme = ::g::Fuse::GraphicsTheme::Singleton();
    ctor_();
    ClearColor(::g::Uno::Float4__New1(1.0f));
    ::g::Uno::Platform2::Application::add_EnteringBackground(uDelegate::New(::TYPES[20/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)AppBase__OnEnteringBackground_fn, this));
    ::g::Uno::Platform2::Application::add_ReceivedLowMemoryWarning(uDelegate::New(::TYPES[21/*Uno.EventHandler*/], (void*)AppBase__OnLowMemory_fn, this));
    ::g::Fuse::Preview::SelectionManager::add_SelectionChanged(uDelegate::New(::TYPES[23/*Uno.EventHandler<Uno.EventArgs>*/], (void*)AppBase__OnSelectionChanged_fn, this));
}

// public float4 get_Background() [instance] :274
::g::Uno::Float4 AppBase::Background()
{
    uStackFrame __("Fuse.AppBase", "get_Background()");
    return ClearColor();
}

// public void set_Background(float4 value) [instance] :275
void AppBase::Background(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.AppBase", "set_Background(float4)");
    ClearColor(value);
}

// public Uno.Collections.IList<Fuse.Behavior> get_Behaviors() [instance] :357
uObject* AppBase::Behaviors()
{
    uStackFrame __("Fuse.AppBase", "get_Behaviors()");
    return uPtr(RootViewport())->Behaviors();
}

// private void CheckPendingReify() [instance] :297
void AppBase::CheckPendingReify()
{
    uStackFrame __("Fuse.AppBase", "CheckPendingReify()");
    bool ret4;

    if (!_hasPendingReify)
        return;

    _hasPendingReify = false;

    if (_pendingTheme != NULL)
    {
        OnSetRootNode(NULL);

        if (_theme != NULL)
            ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(RootViewport())->Styles()), ::TYPES[111/*Uno.Collections.ICollection<Fuse.Style>*/]), _theme, &ret4);

        _theme = _pendingTheme;
        OnSetTheme(_theme);

        if (_theme != NULL)
            ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(RootViewport())->Styles()), ::TYPES[111/*Uno.Collections.ICollection<Fuse.Style>*/]), _theme);

        _pendingTheme = NULL;
    }

    if (_hasPendingRootNode)
    {
        _rootNode = _pendingRootNode;
        _pendingRootNode = NULL;
        _hasPendingRootNode = false;
    }

    OnSetRootNode(_rootNode);
}

// public void DrawSelection(Fuse.DrawContext dc) [instance] :211
void AppBase::DrawSelection(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.AppBase", "DrawSelection(Fuse.DrawContext)");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret5;

    if (uPtr(_selection)->Count() > 0)
    {
        for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_selection), &ret5), ret5); enum1.MoveNext(::TYPES[24/*Uno.Collections.List<Fuse.Node>.Enumerator*/]); )
        {
            ::g::Fuse::Node* n = enum1.Current(::TYPES[24/*Uno.Collections.List<Fuse.Node>.Enumerator*/]);
            uPtr(n)->DrawSelection(dc);
        }

        uPtr(RootNode())->InvalidateVisual();
    }
}

// private void FindSelection(Fuse.Node n) [instance] :203
void AppBase::FindSelection(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.AppBase", "FindSelection(Fuse.Node)");

    if (::g::Fuse::Preview::SelectionManager::IsSelected(n))
        ::g::Uno::Collections::List__Add_fn(uPtr(_selection), n);
}

// internal generated Fuse.Style get_NativeStyle() [instance] :153
::g::Fuse::Style* AppBase::NativeStyle()
{
    uStackFrame __("Fuse.AppBase", "get_NativeStyle()");
    return _NativeStyle;
}

// internal generated void set_NativeStyle(Fuse.Style value) [instance] :153
void AppBase::NativeStyle(::g::Fuse::Style* value)
{
    uStackFrame __("Fuse.AppBase", "set_NativeStyle(Fuse.Style)");
    _NativeStyle = value;
}

// private void OnEnteringBackground(Uno.Platform2.ApplicationState s) [instance] :222
void AppBase::OnEnteringBackground(int s)
{
    uStackFrame __("Fuse.AppBase", "OnEnteringBackground(Uno.Platform2.ApplicationState)");
    ::g::Fuse::Resources::DisposalManager::Clean(1);
}

// private void OnLowMemory(object s, object a) [instance] :227
void AppBase::OnLowMemory(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.AppBase", "OnLowMemory(object,object)");
    ::g::Fuse::Resources::DisposalManager::Clean(2);
}

// private void OnSelectionChanged(object sender, Uno.EventArgs args) [instance] :193
void AppBase::OnSelectionChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.AppBase", "OnSelectionChanged(object,Uno.EventArgs)");
    uPtr(_selection)->Clear();

    if (RootNode() != NULL)
        uPtr(RootNode())->VisitSubtree(uDelegate::New(::TYPES[25/*Uno.Action<Fuse.Node>*/], (void*)AppBase__FindSelection_fn, this));
}

// public void OnUnhandledException(Uno.Exception e) [instance] :234
void AppBase::OnUnhandledException(::g::Uno::Exception* e)
{
    uStackFrame __("Fuse.AppBase", "OnUnhandledException(Uno.Exception)");
    ::g::Uno::Exception* ret6;

    if (::g::Uno::Delegate::op_Inequality(UnhandledException1, NULL))
    {
        ::g::Fuse::UnhandledExceptionArgs* args = ::g::Fuse::UnhandledExceptionArgs::New2(e);
        uPtr(UnhandledException1)->Invoke(2, this, args);

        if (args->IsHandled())
            return;
    }
    else
    {
        ::g::Uno::Diagnostics::Debug::Log3(::STRINGS[4/*"Unhandled e...*/]);
        ::g::Uno::AggregateException* ae = uAs< ::g::Uno::AggregateException*>(e, ::TYPES[29/*Uno.AggregateException*/]);

        if (ae != NULL)

            for (int i = 0; i < uPtr(uPtr(ae)->InnerExceptions())->Count(); i++)
            {
                ::g::Uno::Exception* inner = (::g::Uno::Collections::ReadOnlyCollection__get_Item_fn(uPtr(uPtr(ae)->InnerExceptions()), uCRef<int>(i), &ret6), ret6);
                ::g::Uno::Diagnostics::Debug::Log3(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uPtr(inner)->Message(), ::STRINGS[5/*"\n\n"*/]), uPtr(inner)->StackTrace()), ::STRINGS[5/*"\n\n"*/]));
            }
        else
            ::g::Uno::Diagnostics::Debug::Log3(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uPtr(e)->Message(), ::STRINGS[5/*"\n\n"*/]), uPtr(e)->StackTrace()));
    }

    U_THROW(e);
}

// internal float get_PixelsPerPoint() [instance] :173
float AppBase::PixelsPerPoint()
{
    uStackFrame __("Fuse.AppBase", "get_PixelsPerPoint()");

    if (RootViewport() == NULL)
        return 1.0f;

    return uPtr(RootViewport())->PixelsPerPoint();
}

// public Uno.Collections.IList<Uno.UX.Resource> get_Resources() [instance] :354
uObject* AppBase::Resources()
{
    uStackFrame __("Fuse.AppBase", "get_Resources()");
    return uPtr(RootViewport())->Resources();
}

// public Fuse.Node get_RootNode() [instance] :283
::g::Fuse::Node* AppBase::RootNode()
{
    uStackFrame __("Fuse.AppBase", "get_RootNode()");
    return _hasPendingRootNode ? (::g::Fuse::Node*)_pendingRootNode : (::g::Fuse::Node*)_rootNode;
}

// public void set_RootNode(Fuse.Node value) [instance] :284
void AppBase::RootNode(::g::Fuse::Node* value)
{
    uStackFrame __("Fuse.AppBase", "set_RootNode(Fuse.Node)");

    if (_rootNode != value)
    {
        _pendingRootNode = value;
        _hasPendingRootNode = true;
        _hasPendingReify = true;
    }
}

// protected generated Fuse.RootViewport get_RootViewport() [instance] :151
::g::Fuse::RootViewport* AppBase::RootViewport()
{
    uStackFrame __("Fuse.AppBase", "get_RootViewport()");
    return _RootViewport;
}

// protected generated void set_RootViewport(Fuse.RootViewport value) [instance] :151
void AppBase::RootViewport(::g::Fuse::RootViewport* value)
{
    uStackFrame __("Fuse.AppBase", "set_RootViewport(Fuse.RootViewport)");
    _RootViewport = value;
}

// public Fuse.Theme get_Theme() [instance] :341
::g::Fuse::Theme* AppBase::Theme()
{
    uStackFrame __("Fuse.AppBase", "get_Theme()");
    ::g::Fuse::Theme* ind2 = _pendingTheme;
    return (ind2 != NULL) ? ind2 : (::g::Fuse::Theme*)_theme;
}

// public void set_Theme(Fuse.Theme value) [instance] :342
void AppBase::Theme(::g::Fuse::Theme* value)
{
    uStackFrame __("Fuse.AppBase", "set_Theme(Fuse.Theme)");
    ::g::Fuse::Theme* ind3;

    if ((ind3 = _pendingTheme, ((ind3 != NULL) ? ind3 : (::g::Fuse::Theme*)_theme)) != value)
    {
        _pendingTheme = value;
        _hasPendingReify = true;
    }
}

// public generated void add_UnhandledException(Fuse.UnhandledExceptionHandler value) [instance] :232
void AppBase::add_UnhandledException(uDelegate* value)
{
    uStackFrame __("Fuse.AppBase", "add_UnhandledException(Fuse.UnhandledExceptionHandler)");
    UnhandledException1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(UnhandledException1, value), ::TYPES[27/*Fuse.UnhandledExceptionHandler*/]);
}

// public generated void remove_UnhandledException(Fuse.UnhandledExceptionHandler value) [instance] :232
void AppBase::remove_UnhandledException(uDelegate* value)
{
    uStackFrame __("Fuse.AppBase", "remove_UnhandledException(Fuse.UnhandledExceptionHandler)");
    UnhandledException1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(UnhandledException1, value), ::TYPES[27/*Fuse.UnhandledExceptionHandler*/]);
}

// internal static void OnUnhandledExceptionInternal(Uno.Exception e) [static] :261
void AppBase::OnUnhandledExceptionInternal(::g::Uno::Exception* e)
{
    uStackFrame __("Fuse.AppBase", "OnUnhandledExceptionInternal(Uno.Exception)");
    AppBase* app = uAs<AppBase*>(AppBase::Current1(), AppBase_typeof());

    if (app != NULL)
        uPtr(app)->OnUnhandledException(e);
}

// public static new Fuse.AppBase get_Current() [static] :269
AppBase* AppBase::Current1()
{
    uStackFrame __("Fuse.AppBase", "get_Current()");
    return uAs<AppBase*>(::g::Uno::Application::Current(), AppBase_typeof());
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#36
// -------------------------------------------------------

// public abstract class BeginRemoveArgs :4679
// {
BeginRemoveArgs_type* BeginRemoveArgs_typeof()
{
    static uSStrong<BeginRemoveArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(BeginRemoveArgs);
    options.TypeSize = sizeof(BeginRemoveArgs_type);
    type = (BeginRemoveArgs_type*)uClassType::New("Fuse.BeginRemoveArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::BeginRemoveArgs, _done), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::BeginRemoveArgs, subscribers), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("AddSubscriber", NULL, (void*)BeginRemoveArgs__AddSubscriber_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_HasSubscribers", NULL, (void*)BeginRemoveArgs__get_HasSubscribers_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Remove", NULL, (void*)BeginRemoveArgs__Remove_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("RemoveSubscriber", NULL, (void*)BeginRemoveArgs__RemoveSubscriber_fn, 0, false, uVoid_typeof(), 0));
    return type;
}

// protected generated BeginRemoveArgs() :4679
void BeginRemoveArgs__ctor_1_fn(BeginRemoveArgs* __this)
{
    __this->ctor_1();
}

// public void AddSubscriber() :4682
void BeginRemoveArgs__AddSubscriber_fn(BeginRemoveArgs* __this)
{
    __this->AddSubscriber();
}

// public bool get_HasSubscribers() :4698
void BeginRemoveArgs__get_HasSubscribers_fn(BeginRemoveArgs* __this, bool* __retval)
{
    *__retval = __this->HasSubscribers();
}

// public void Remove() :4701
void BeginRemoveArgs__Remove_fn(BeginRemoveArgs* __this)
{
    __this->Remove();
}

// public void RemoveSubscriber() :4687
void BeginRemoveArgs__RemoveSubscriber_fn(BeginRemoveArgs* __this)
{
    __this->RemoveSubscriber();
}

// protected generated BeginRemoveArgs() [instance] :4679
void BeginRemoveArgs::ctor_1()
{
    uStackFrame __("Fuse.BeginRemoveArgs", ".ctor()");
    ctor_();
}

// public void AddSubscriber() [instance] :4682
void BeginRemoveArgs::AddSubscriber()
{
    uStackFrame __("Fuse.BeginRemoveArgs", "AddSubscriber()");
    subscribers++;
}

// public bool get_HasSubscribers() [instance] :4698
bool BeginRemoveArgs::HasSubscribers()
{
    uStackFrame __("Fuse.BeginRemoveArgs", "get_HasSubscribers()");
    return subscribers > 0;
}

// public void Remove() [instance] :4701
void BeginRemoveArgs::Remove()
{
    uStackFrame __("Fuse.BeginRemoveArgs", "Remove()");

    if (_done)
        return;

    _done = true;
    OnRemoved();
}

// public void RemoveSubscriber() [instance] :4687
void BeginRemoveArgs::RemoveSubscriber()
{
    uStackFrame __("Fuse.BeginRemoveArgs", "RemoveSubscriber()");
    subscribers--;

    if (subscribers == 0)
        Remove();
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#36
// -------------------------------------------------------

// public delegate void BeginRemoveHandler(object sender, Fuse.BeginRemoveArgs args) :4714
uDelegateType* BeginRemoveHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.BeginRemoveHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::BeginRemoveArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#2
// ------------------------------------------------------

// public abstract class Behavior :375
// {
Behavior_type* Behavior_typeof()
{
    static uSStrong<Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Behavior);
    options.TypeSize = sizeof(Behavior_type);
    type = (Behavior_type*)uClassType::New("Fuse.Behavior", options);
    type->fp_OnRooted = Behavior__OnRooted_fn;
    type->fp_OnUnrooted = Behavior__OnUnrooted_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))Behavior__FuseIChildObjectget_ParentObject_fn;
    ::STRINGS[6] = uString::Const("duplicate behavior rooting");
    ::STRINGS[7] = uString::Const("/usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#2");
    ::STRINGS[8] = uString::Const("Rooted");
    ::STRINGS[9] = uString::Const("duplicate behavior unrooting");
    ::STRINGS[10] = uString::Const("Unrooted");
    ::TYPES[32] = ::g::Uno::Int_typeof();
    ::TYPES[3] = uObject_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(Behavior_type, interface0));
    type->SetFields(0,
        Behavior__RootStatus_typeof(), offsetof(::g::Fuse::Behavior, _status), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Behavior, AddedByStyle), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Behavior, _ParentNode), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_OverridesDefault", NULL, (void*)Behavior__get_OverridesDefault_fn, 0, false, ::g::Uno::Bool_typeof(), 0));
    return type;
}

// protected generated Behavior() :375
void Behavior__ctor__fn(Behavior* __this)
{
    __this->ctor_();
}

// private object Fuse.IChildObject.get_ParentObject() :384
void Behavior__FuseIChildObjectget_ParentObject_fn(Behavior* __this, uObject** __retval)
{
    uStackFrame __("Fuse.Behavior", "Fuse.IChildObject.get_ParentObject()");
    return *__retval = __this->ParentNode(), void();
}

// protected internal bool get_IsRooted() :420
void Behavior__get_IsRooted_fn(Behavior* __this, bool* __retval)
{
    *__retval = __this->IsRooted();
}

// protected virtual void OnRooted(Fuse.Node parentNode) :424
void Behavior__OnRooted_fn(Behavior* __this, ::g::Fuse::Node* parentNode)
{
}

// protected virtual void OnUnrooted(Fuse.Node parentNode) :425
void Behavior__OnUnrooted_fn(Behavior* __this, ::g::Fuse::Node* parentNode)
{
}

// public bool get_OverridesDefault() :422
void Behavior__get_OverridesDefault_fn(Behavior* __this, bool* __retval)
{
    *__retval = __this->OverridesDefault();
}

// protected internal generated Fuse.Node get_ParentNode() :388
void Behavior__get_ParentNode_fn(Behavior* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->ParentNode();
}

// private generated void set_ParentNode(Fuse.Node value) :388
void Behavior__set_ParentNode_fn(Behavior* __this, ::g::Fuse::Node* value)
{
    __this->ParentNode(value);
}

// internal void Rooted(Fuse.Node e) :393
void Behavior__Rooted_fn(Behavior* __this, ::g::Fuse::Node* e)
{
    __this->Rooted(e);
}

// internal bool get_TriggerCanStartTest() :391
void Behavior__get_TriggerCanStartTest_fn(Behavior* __this, bool* __retval)
{
    *__retval = __this->TriggerCanStartTest();
}

// internal void Unrooted(Fuse.Node e) :407
void Behavior__Unrooted_fn(Behavior* __this, ::g::Fuse::Node* e)
{
    __this->Unrooted(e);
}

// protected generated Behavior() [instance] :375
void Behavior::ctor_()
{
}

// protected internal bool get_IsRooted() [instance] :420
bool Behavior::IsRooted()
{
    uStackFrame __("Fuse.Behavior", "get_IsRooted()");
    return _status == 2;
}

// public bool get_OverridesDefault() [instance] :422
bool Behavior::OverridesDefault()
{
    uStackFrame __("Fuse.Behavior", "get_OverridesDefault()");
    return false;
}

// protected internal generated Fuse.Node get_ParentNode() [instance] :388
::g::Fuse::Node* Behavior::ParentNode()
{
    uStackFrame __("Fuse.Behavior", "get_ParentNode()");
    return _ParentNode;
}

// private generated void set_ParentNode(Fuse.Node value) [instance] :388
void Behavior::ParentNode(::g::Fuse::Node* value)
{
    uStackFrame __("Fuse.Behavior", "set_ParentNode(Fuse.Node)");
    _ParentNode = value;
}

// internal void Rooted(Fuse.Node e) [instance] :393
void Behavior::Rooted(::g::Fuse::Node* e)
{
    uStackFrame __("Fuse.Behavior", "Rooted(Fuse.Node)");

    if (_status != 0)
    {
        ::g::Fuse::Diagnostics::Error(::STRINGS[6/*"duplicate b...*/], this, ::STRINGS[7/*"/usr/local/...*/], 397, ::STRINGS[8/*"Rooted"*/]);
        return;
    }

    _status = 1;
    ParentNode(e);
    OnRooted(ParentNode());
    _status = 2;
}

// internal bool get_TriggerCanStartTest() [instance] :391
bool Behavior::TriggerCanStartTest()
{
    uStackFrame __("Fuse.Behavior", "get_TriggerCanStartTest()");
    return _status > 0;
}

// internal void Unrooted(Fuse.Node e) [instance] :407
void Behavior::Unrooted(::g::Fuse::Node* e)
{
    uStackFrame __("Fuse.Behavior", "Unrooted(Fuse.Node)");

    if (_status == 0)
    {
        ::g::Fuse::Diagnostics::Error(::STRINGS[9/*"duplicate b...*/], this, ::STRINGS[7/*"/usr/local/...*/], 411, ::STRINGS[10/*"Unrooted"*/]);
        return;
    }

    OnUnrooted(ParentNode());
    ParentNode(NULL);
    _status = 0;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#3
// ------------------------------------------------------

// public sealed class CacheFramebuffer :437
// {
uType* CacheFramebuffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(CacheFramebuffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.CacheFramebuffer", options);
    ::STRINGS[11] = uString::Const("Cannot access unpinned CacheFramebuffer");
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[33] = ::g::Fuse::FramebufferPool_typeof();
    ::TYPES[32] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::g::Uno::Graphics::Framebuffer_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _fb), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _isContentValid), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _isPinned), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _lastFrameUsed), 0,
        uObject_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _owner), 0,
        ::g::Uno::Graphics::FramebufferFlags_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _Flags), 0,
        ::g::Uno::Graphics::Format_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _Format), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _Height), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _Width), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("Dispose", NULL, (void*)CacheFramebuffer__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Flags", NULL, (void*)CacheFramebuffer__get_Flags_fn, 0, false, ::g::Uno::Graphics::FramebufferFlags_typeof(), 0),
        new uFunction("get_Format", NULL, (void*)CacheFramebuffer__get_Format_fn, 0, false, ::g::Uno::Graphics::Format_typeof(), 0),
        new uFunction("get_Framebuffer", NULL, (void*)CacheFramebuffer__get_Framebuffer_fn, 0, false, ::g::Uno::Graphics::Framebuffer_typeof(), 0),
        new uFunction("get_HasValidContentIfPinned", NULL, (void*)CacheFramebuffer__get_HasValidContentIfPinned_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Height", NULL, (void*)CacheFramebuffer__get_Height_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_IsContentValid", NULL, (void*)CacheFramebuffer__get_IsContentValid_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsPinned", NULL, (void*)CacheFramebuffer__get_IsPinned_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)CacheFramebuffer__New1_fn, 0, true, CacheFramebuffer_typeof(), 5, uObject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Graphics::Format_typeof(), ::g::Uno::Graphics::FramebufferFlags_typeof()),
        new uFunction("Pin", NULL, (void*)CacheFramebuffer__Pin_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Unpin", NULL, (void*)CacheFramebuffer__Unpin_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Width", NULL, (void*)CacheFramebuffer__get_Width_fn, 0, false, ::g::Uno::Int_typeof(), 0));
    return type;
}

// public CacheFramebuffer(object owner, int width, int height, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) :538
void CacheFramebuffer__ctor__fn(CacheFramebuffer* __this, uObject* owner, int* width, int* height, int* format, int* flags)
{
    __this->ctor_(owner, *width, *height, *format, *flags);
}

// internal void Collect() :456
void CacheFramebuffer__Collect_fn(CacheFramebuffer* __this)
{
    __this->Collect();
}

// public void Dispose() :463
void CacheFramebuffer__Dispose_fn(CacheFramebuffer* __this)
{
    __this->Dispose();
}

// private void EnsurePinned() :449
void CacheFramebuffer__EnsurePinned_fn(CacheFramebuffer* __this)
{
    __this->EnsurePinned();
}

// public generated Uno.Graphics.FramebufferFlags get_Flags() :534
void CacheFramebuffer__get_Flags_fn(CacheFramebuffer* __this, int* __retval)
{
    *__retval = __this->Flags();
}

// private generated void set_Flags(Uno.Graphics.FramebufferFlags value) :534
void CacheFramebuffer__set_Flags_fn(CacheFramebuffer* __this, int* value)
{
    __this->Flags(*value);
}

// public generated Uno.Graphics.Format get_Format() :533
void CacheFramebuffer__get_Format_fn(CacheFramebuffer* __this, int* __retval)
{
    *__retval = __this->Format();
}

// private generated void set_Format(Uno.Graphics.Format value) :533
void CacheFramebuffer__set_Format_fn(CacheFramebuffer* __this, int* value)
{
    __this->Format(*value);
}

// public framebuffer get_Framebuffer() :477
void CacheFramebuffer__get_Framebuffer_fn(CacheFramebuffer* __this, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->Framebuffer();
}

// internal int get_FramesSinceLastUse() :505
void CacheFramebuffer__get_FramesSinceLastUse_fn(CacheFramebuffer* __this, int* __retval)
{
    *__retval = __this->FramesSinceLastUse();
}

// public bool get_HasValidContentIfPinned() :496
void CacheFramebuffer__get_HasValidContentIfPinned_fn(CacheFramebuffer* __this, bool* __retval)
{
    *__retval = __this->HasValidContentIfPinned();
}

// public generated int get_Height() :532
void CacheFramebuffer__get_Height_fn(CacheFramebuffer* __this, int* __retval)
{
    *__retval = __this->Height();
}

// private generated void set_Height(int value) :532
void CacheFramebuffer__set_Height_fn(CacheFramebuffer* __this, int* value)
{
    __this->Height(*value);
}

// public bool get_IsContentValid() :487
void CacheFramebuffer__get_IsContentValid_fn(CacheFramebuffer* __this, bool* __retval)
{
    *__retval = __this->IsContentValid();
}

// public bool get_IsPinned() :443
void CacheFramebuffer__get_IsPinned_fn(CacheFramebuffer* __this, bool* __retval)
{
    *__retval = __this->IsPinned();
}

// public CacheFramebuffer New(object owner, int width, int height, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) :538
void CacheFramebuffer__New1_fn(uObject* owner, int* width, int* height, int* format, int* flags, CacheFramebuffer** __retval)
{
    *__retval = CacheFramebuffer::New1(owner, *width, *height, *format, *flags);
}

// public void Pin() :511
void CacheFramebuffer__Pin_fn(CacheFramebuffer* __this)
{
    __this->Pin();
}

// public void Unpin(bool validate) :523
void CacheFramebuffer__Unpin_fn(CacheFramebuffer* __this, bool* validate)
{
    __this->Unpin(*validate);
}

// public generated int get_Width() :531
void CacheFramebuffer__get_Width_fn(CacheFramebuffer* __this, int* __retval)
{
    *__retval = __this->Width();
}

// private generated void set_Width(int value) :531
void CacheFramebuffer__set_Width_fn(CacheFramebuffer* __this, int* value)
{
    __this->Width(*value);
}

// public CacheFramebuffer(object owner, int width, int height, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) [instance] :538
void CacheFramebuffer::ctor_(uObject* owner, int width, int height, int format, int flags)
{
    uStackFrame __("Fuse.CacheFramebuffer", ".ctor(object,int,int,Uno.Graphics.Format,Uno.Graphics.FramebufferFlags)");
    _owner = owner;
    Width(width);
    Height(height);
    Format(format);
    Flags(flags);
}

// internal void Collect() [instance] :456
void CacheFramebuffer::Collect()
{
    uStackFrame __("Fuse.CacheFramebuffer", "Collect()");

    if (_fb != NULL)
        ::g::Fuse::FramebufferPool::Release(_fb);

    _fb = NULL;
    _isContentValid = false;
}

// public void Dispose() [instance] :463
void CacheFramebuffer::Dispose()
{
    uStackFrame __("Fuse.CacheFramebuffer", "Dispose()");
    Collect();
    ::g::Fuse::FramebufferPool::UnRegister(this);
}

// private void EnsurePinned() [instance] :449
void CacheFramebuffer::EnsurePinned()
{
    uStackFrame __("Fuse.CacheFramebuffer", "EnsurePinned()");

    if (!IsPinned())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[11/*"Cannot acce...*/]));
}

// public generated Uno.Graphics.FramebufferFlags get_Flags() [instance] :534
int CacheFramebuffer::Flags()
{
    uStackFrame __("Fuse.CacheFramebuffer", "get_Flags()");
    return _Flags;
}

// private generated void set_Flags(Uno.Graphics.FramebufferFlags value) [instance] :534
void CacheFramebuffer::Flags(int value)
{
    uStackFrame __("Fuse.CacheFramebuffer", "set_Flags(Uno.Graphics.FramebufferFlags)");
    _Flags = value;
}

// public generated Uno.Graphics.Format get_Format() [instance] :533
int CacheFramebuffer::Format()
{
    uStackFrame __("Fuse.CacheFramebuffer", "get_Format()");
    return _Format;
}

// private generated void set_Format(Uno.Graphics.Format value) [instance] :533
void CacheFramebuffer::Format(int value)
{
    uStackFrame __("Fuse.CacheFramebuffer", "set_Format(Uno.Graphics.Format)");
    _Format = value;
}

// public framebuffer get_Framebuffer() [instance] :477
::g::Uno::Graphics::Framebuffer* CacheFramebuffer::Framebuffer()
{
    uStackFrame __("Fuse.CacheFramebuffer", "get_Framebuffer()");
    EnsurePinned();
    return _fb;
}

// internal int get_FramesSinceLastUse() [instance] :505
int CacheFramebuffer::FramesSinceLastUse()
{
    uStackFrame __("Fuse.CacheFramebuffer", "get_FramesSinceLastUse()");
    return ::g::Fuse::FramebufferPool::Frame() - _lastFrameUsed;
}

// public bool get_HasValidContentIfPinned() [instance] :496
bool CacheFramebuffer::HasValidContentIfPinned()
{
    uStackFrame __("Fuse.CacheFramebuffer", "get_HasValidContentIfPinned()");
    return (_fb != NULL) && _isContentValid;
}

// public generated int get_Height() [instance] :532
int CacheFramebuffer::Height()
{
    uStackFrame __("Fuse.CacheFramebuffer", "get_Height()");
    return _Height;
}

// private generated void set_Height(int value) [instance] :532
void CacheFramebuffer::Height(int value)
{
    uStackFrame __("Fuse.CacheFramebuffer", "set_Height(int)");
    _Height = value;
}

// public bool get_IsContentValid() [instance] :487
bool CacheFramebuffer::IsContentValid()
{
    uStackFrame __("Fuse.CacheFramebuffer", "get_IsContentValid()");
    EnsurePinned();
    return _isContentValid;
}

// public bool get_IsPinned() [instance] :443
bool CacheFramebuffer::IsPinned()
{
    uStackFrame __("Fuse.CacheFramebuffer", "get_IsPinned()");
    return _isPinned;
}

// public void Pin() [instance] :511
void CacheFramebuffer::Pin()
{
    uStackFrame __("Fuse.CacheFramebuffer", "Pin()");
    _isPinned = true;
    _lastFrameUsed = ::g::Fuse::FramebufferPool::Frame();

    if (_fb == NULL)
    {
        _fb = ::g::Fuse::FramebufferPool::Lock(Width(), Height(), Format(), (Flags() & 1) == 1);
        ::g::Fuse::FramebufferPool::Register(this);
    }
}

// public void Unpin(bool validate) [instance] :523
void CacheFramebuffer::Unpin(bool validate)
{
    uStackFrame __("Fuse.CacheFramebuffer", "Unpin(bool)");
    EnsurePinned();
    _isPinned = false;

    if (validate)
        _isContentValid = true;

    _lastFrameUsed = ::g::Fuse::FramebufferPool::Frame();
}

// public generated int get_Width() [instance] :531
int CacheFramebuffer::Width()
{
    uStackFrame __("Fuse.CacheFramebuffer", "get_Width()");
    return _Width;
}

// private generated void set_Width(int value) [instance] :531
void CacheFramebuffer::Width(int value)
{
    uStackFrame __("Fuse.CacheFramebuffer", "set_Width(int)");
    _Width = value;
}

// public CacheFramebuffer New(object owner, int width, int height, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) [static] :538
CacheFramebuffer* CacheFramebuffer::New1(uObject* owner, int width, int height, int format, int flags)
{
    CacheFramebuffer* obj1 = (CacheFramebuffer*)uNew(CacheFramebuffer_typeof());
    obj1->ctor_(owner, width, height, format, flags);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#25
// -------------------------------------------------------

// public enum Node.CancelInteractionsType :3195
uEnumType* Node__CancelInteractionsType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Node.CancelInteractionsType", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Local", 0LL,
        "Recursive", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#21
// -------------------------------------------------------

// public sealed class DataContextChangedArgs :2814
// {
uType* DataContextChangedArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(DataContextChangedArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.DataContextChangedArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::DataContextChangedArgs, _NewValue), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::DataContextChangedArgs, _Node), 0,
        uObject_typeof(), offsetof(::g::Fuse::DataContextChangedArgs, _OldValue), 0);
    type->Reflection.SetFunctions(4,
        new uFunction(".ctor", NULL, (void*)DataContextChangedArgs__New2_fn, 0, true, DataContextChangedArgs_typeof(), 3, ::g::Fuse::Node_typeof(), uObject_typeof(), uObject_typeof()),
        new uFunction("get_NewValue", NULL, (void*)DataContextChangedArgs__get_NewValue_fn, 0, false, uObject_typeof(), 0),
        new uFunction("get_Node", NULL, (void*)DataContextChangedArgs__get_Node_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("get_OldValue", NULL, (void*)DataContextChangedArgs__get_OldValue_fn, 0, false, uObject_typeof(), 0));
    return type;
}

// public DataContextChangedArgs(Fuse.Node node, object oldValue, object newValue) :2820
void DataContextChangedArgs__ctor_1_fn(DataContextChangedArgs* __this, ::g::Fuse::Node* node, uObject* oldValue, uObject* newValue)
{
    __this->ctor_1(node, oldValue, newValue);
}

// public DataContextChangedArgs New(Fuse.Node node, object oldValue, object newValue) :2820
void DataContextChangedArgs__New2_fn(::g::Fuse::Node* node, uObject* oldValue, uObject* newValue, DataContextChangedArgs** __retval)
{
    *__retval = DataContextChangedArgs::New2(node, oldValue, newValue);
}

// public generated object get_NewValue() :2817
void DataContextChangedArgs__get_NewValue_fn(DataContextChangedArgs* __this, uObject** __retval)
{
    *__retval = __this->NewValue();
}

// private generated void set_NewValue(object value) :2817
void DataContextChangedArgs__set_NewValue_fn(DataContextChangedArgs* __this, uObject* value)
{
    __this->NewValue(value);
}

// public generated Fuse.Node get_Node() :2818
void DataContextChangedArgs__get_Node_fn(DataContextChangedArgs* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Node();
}

// private generated void set_Node(Fuse.Node value) :2818
void DataContextChangedArgs__set_Node_fn(DataContextChangedArgs* __this, ::g::Fuse::Node* value)
{
    __this->Node(value);
}

// public generated object get_OldValue() :2816
void DataContextChangedArgs__get_OldValue_fn(DataContextChangedArgs* __this, uObject** __retval)
{
    *__retval = __this->OldValue();
}

// private generated void set_OldValue(object value) :2816
void DataContextChangedArgs__set_OldValue_fn(DataContextChangedArgs* __this, uObject* value)
{
    __this->OldValue(value);
}

// public DataContextChangedArgs(Fuse.Node node, object oldValue, object newValue) [instance] :2820
void DataContextChangedArgs::ctor_1(::g::Fuse::Node* node, uObject* oldValue, uObject* newValue)
{
    uStackFrame __("Fuse.DataContextChangedArgs", ".ctor(Fuse.Node,object,object)");
    ctor_();
    Node(node);
    OldValue(oldValue);
    NewValue(newValue);
}

// public generated object get_NewValue() [instance] :2817
uObject* DataContextChangedArgs::NewValue()
{
    uStackFrame __("Fuse.DataContextChangedArgs", "get_NewValue()");
    return _NewValue;
}

// private generated void set_NewValue(object value) [instance] :2817
void DataContextChangedArgs::NewValue(uObject* value)
{
    uStackFrame __("Fuse.DataContextChangedArgs", "set_NewValue(object)");
    _NewValue = value;
}

// public generated Fuse.Node get_Node() [instance] :2818
::g::Fuse::Node* DataContextChangedArgs::Node()
{
    uStackFrame __("Fuse.DataContextChangedArgs", "get_Node()");
    return _Node;
}

// private generated void set_Node(Fuse.Node value) [instance] :2818
void DataContextChangedArgs::Node(::g::Fuse::Node* value)
{
    uStackFrame __("Fuse.DataContextChangedArgs", "set_Node(Fuse.Node)");
    _Node = value;
}

// public generated object get_OldValue() [instance] :2816
uObject* DataContextChangedArgs::OldValue()
{
    uStackFrame __("Fuse.DataContextChangedArgs", "get_OldValue()");
    return _OldValue;
}

// private generated void set_OldValue(object value) [instance] :2816
void DataContextChangedArgs::OldValue(uObject* value)
{
    uStackFrame __("Fuse.DataContextChangedArgs", "set_OldValue(object)");
    _OldValue = value;
}

// public DataContextChangedArgs New(Fuse.Node node, object oldValue, object newValue) [static] :2820
DataContextChangedArgs* DataContextChangedArgs::New2(::g::Fuse::Node* node, uObject* oldValue, uObject* newValue)
{
    DataContextChangedArgs* obj1 = (DataContextChangedArgs*)uNew(DataContextChangedArgs_typeof());
    obj1->ctor_1(node, oldValue, newValue);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#21
// -------------------------------------------------------

// public delegate void DataContextChangedHandler(object sender, Fuse.DataContextChangedArgs args) :2828
uDelegateType* DataContextChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.DataContextChangedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::DataContextChangedArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#4
// ------------------------------------------------------

// public static class Diagnostics :558
// {
uClassType* Diagnostics_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Diagnostics", options);
    ::STRINGS[12] = uString::Const("Deprecated: ");
    ::STRINGS[13] = uString::Const(" ");
    ::STRINGS[14] = uString::Const("Performance Warning: ");
    ::STRINGS[15] = uString::Const("Unsupported: ");
    type->Reflection.SetFunctions(4,
        new uFunction("Deprecated", NULL, (void*)Diagnostics__Deprecated_fn, 0, true, uVoid_typeof(), 5, ::g::Uno::String_typeof(), uObject_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof()),
        new uFunction("Error", NULL, (void*)Diagnostics__Error_fn, 0, true, uVoid_typeof(), 5, ::g::Uno::String_typeof(), uObject_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof()),
        new uFunction("PerformanceWarning", NULL, (void*)Diagnostics__PerformanceWarning_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof()),
        new uFunction("Unsupported", NULL, (void*)Diagnostics__Unsupported_fn, 0, true, uVoid_typeof(), 5, ::g::Uno::String_typeof(), uObject_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof()));
    return type;
}

// public static void Deprecated(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) :568
void Diagnostics__Deprecated_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName)
{
    Diagnostics::Deprecated(msg, obj, filePath, *lineNumber, memberName);
}

// public static void Error(string msg, [object obj], [string filePath], [int lineNumber], [string memberName]) :560
void Diagnostics__Error_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName)
{
    Diagnostics::Error(msg, obj, filePath, *lineNumber, memberName);
}

// public static void PerformanceWarning(string msg, [string filePath], [int lineNumber], [string memberName]) :584
void Diagnostics__PerformanceWarning_fn(uString* msg, uString* filePath, int* lineNumber, uString* memberName)
{
    Diagnostics::PerformanceWarning(msg, filePath, *lineNumber, memberName);
}

// public static void Unsupported(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) :576
void Diagnostics__Unsupported_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName)
{
    Diagnostics::Unsupported(msg, obj, filePath, *lineNumber, memberName);
}

// public static void Deprecated(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) [static] :568
void Diagnostics::Deprecated(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName)
{
    uStackFrame __("Fuse.Diagnostics", "Deprecated(string,object,[string],[int],[string])");
    ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[12/*"Deprecated: "*/], msg), ::STRINGS[13/*" "*/]), obj), 4, filePath, lineNumber);
}

// public static void Error(string msg, [object obj], [string filePath], [int lineNumber], [string memberName]) [static] :560
void Diagnostics::Error(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName)
{
    uStackFrame __("Fuse.Diagnostics", "Error(string,[object],[string],[int],[string])");
    ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(msg, ::STRINGS[13/*" "*/]), obj), 3, filePath, lineNumber);
}

// public static void PerformanceWarning(string msg, [string filePath], [int lineNumber], [string memberName]) [static] :584
void Diagnostics::PerformanceWarning(uString* msg, uString* filePath, int lineNumber, uString* memberName)
{
    uStackFrame __("Fuse.Diagnostics", "PerformanceWarning(string,[string],[int],[string])");
    ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition2(::STRINGS[14/*"Performance...*/], msg), 4, filePath, lineNumber);
}

// public static void Unsupported(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) [static] :576
void Diagnostics::Unsupported(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName)
{
    uStackFrame __("Fuse.Diagnostics", "Unsupported(string,object,[string],[int],[string])");
    ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[15/*"Unsupported: "*/], msg), ::STRINGS[13/*" "*/]), obj), 4, filePath, lineNumber);
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#5
// ------------------------------------------------------

// public sealed class DrawArgs :604
// {
uType* DrawArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(DrawArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.DrawArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        ::g::Fuse::DrawContext_typeof(), offsetof(::g::Fuse::DrawArgs, _Context), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Context", NULL, (void*)DrawArgs__get_Context_fn, 0, false, ::g::Fuse::DrawContext_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)DrawArgs__New2_fn, 0, true, DrawArgs_typeof(), 1, ::g::Fuse::DrawContext_typeof()));
    return type;
}

// public DrawArgs(Fuse.DrawContext dc) :608
void DrawArgs__ctor_1_fn(DrawArgs* __this, ::g::Fuse::DrawContext* dc)
{
    __this->ctor_1(dc);
}

// public generated Fuse.DrawContext get_Context() :606
void DrawArgs__get_Context_fn(DrawArgs* __this, ::g::Fuse::DrawContext** __retval)
{
    *__retval = __this->Context();
}

// private generated void set_Context(Fuse.DrawContext value) :606
void DrawArgs__set_Context_fn(DrawArgs* __this, ::g::Fuse::DrawContext* value)
{
    __this->Context(value);
}

// public DrawArgs New(Fuse.DrawContext dc) :608
void DrawArgs__New2_fn(::g::Fuse::DrawContext* dc, DrawArgs** __retval)
{
    *__retval = DrawArgs::New2(dc);
}

// public DrawArgs(Fuse.DrawContext dc) [instance] :608
void DrawArgs::ctor_1(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.DrawArgs", ".ctor(Fuse.DrawContext)");
    ctor_();
    Context(dc);
}

// public generated Fuse.DrawContext get_Context() [instance] :606
::g::Fuse::DrawContext* DrawArgs::Context()
{
    uStackFrame __("Fuse.DrawArgs", "get_Context()");
    return _Context;
}

// private generated void set_Context(Fuse.DrawContext value) [instance] :606
void DrawArgs::Context(::g::Fuse::DrawContext* value)
{
    uStackFrame __("Fuse.DrawArgs", "set_Context(Fuse.DrawContext)");
    _Context = value;
}

// public DrawArgs New(Fuse.DrawContext dc) [static] :608
DrawArgs* DrawArgs::New2(::g::Fuse::DrawContext* dc)
{
    DrawArgs* obj1 = (DrawArgs*)uNew(DrawArgs_typeof());
    obj1->ctor_1(dc);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#6
// ------------------------------------------------------

// public sealed class DrawContext :654
// {
uType* DrawContext_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.ObjectSize = sizeof(DrawContext);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.DrawContext", options);
    ::STRINGS[16] = uString::Const("/usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#6");
    ::STRINGS[17] = uString::Const("CaptureRootbuffer");
    ::STRINGS[18] = uString::Const("");
    ::STRINGS[19] = uString::Const("Clear");
    ::STRINGS[20] = uString::Const("PopRenderTarget");
    ::STRINGS[21] = uString::Const("PushRenderTarget");
    ::STRINGS[22] = uString::Const("Unpopped Scissor");
    ::STRINGS[23] = uString::Const("ReleaseRootbuffer");
    ::STRINGS[24] = uString::Const("Unpopped CullFace");
    ::STRINGS[25] = uString::Const("Unpopped Viewport");
    ::STRINGS[26] = uString::Const("Unpopped RenderTarget");
    ::STRINGS[27] = uString::Const("set_GLFramebuffer");
    ::STRINGS[28] = uString::Const("set_GLScissor");
    ::STRINGS[29] = uString::Const("set_GLViewportPixelSize");
    ::TYPES[34] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::IViewport_typeof());
    ::TYPES[35] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::RenderTargetEntry_typeof());
    ::TYPES[36] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Int4_typeof());
    ::TYPES[37] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Graphics::PolygonFace_typeof());
    ::TYPES[38] = ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Fuse::IFlush_typeof());
    ::TYPES[39] = ::g::Uno::Graphics::RenderTarget_typeof();
    ::TYPES[32] = ::g::Uno::Int_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[40] = ::g::Uno::Float4_typeof();
    ::TYPES[41] = ::g::Uno::Collections::HashSet__Enumerator_typeof()->MakeType(::g::Fuse::IFlush_typeof());
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[42] = ::g::Fuse::IViewport_typeof();
    ::TYPES[43] = ::g::Uno::Collections::IListExtensions_typeof()->MakeMethod(1, ::g::Uno::Graphics::PolygonFace_typeof());
    ::TYPES[44] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::Graphics::PolygonFace_typeof());
    ::TYPES[45] = ::g::Uno::Collections::IListExtensions_typeof()->MakeMethod(1, ::g::Fuse::RenderTargetEntry_typeof());
    ::TYPES[46] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::RenderTargetEntry_typeof());
    ::TYPES[47] = ::g::Fuse::RenderTargetEntry_typeof();
    ::TYPES[48] = ::g::Uno::Collections::IListExtensions_typeof()->MakeMethod(1, ::g::Uno::Int4_typeof());
    ::TYPES[49] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::Int4_typeof());
    ::TYPES[50] = ::g::Uno::Collections::IListExtensions_typeof()->MakeMethod(1, ::g::Fuse::IViewport_typeof());
    ::TYPES[51] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::IViewport_typeof());
    ::TYPES[52] = ::g::Uno::Graphics::Framebuffer_typeof();
    ::TYPES[53] = ::g::Uno::Int2_typeof();
    ::TYPES[54] = ::g::Uno::Int4_typeof();
    ::TYPES[55] = ::g::Uno::Recti_typeof();
    type->SetFields(0,
        ::g::Uno::Graphics::PolygonFace_typeof(), offsetof(::g::Fuse::DrawContext, _cullFace), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Graphics::PolygonFace_typeof()), offsetof(::g::Fuse::DrawContext, _cullFaces), 0,
        ::g::OpenGL::GLFramebufferHandle_typeof(), offsetof(::g::Fuse::DrawContext, _glFramebuffer), 0,
        ::g::Uno::Int4_typeof(), offsetof(::g::Fuse::DrawContext, _glScissor), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Int4_typeof()), offsetof(::g::Fuse::DrawContext, _glScissors), 0,
        ::g::Uno::Int4_typeof(), offsetof(::g::Fuse::DrawContext, _glViewport), 0,
        ::g::Uno::Runtime::Implementation::GraphicsContextHandle_typeof(), offsetof(::g::Fuse::DrawContext, _handle), 0,
        ::g::Uno::Graphics::RenderTarget_typeof(), offsetof(::g::Fuse::DrawContext, _renderTarget), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::RenderTargetEntry_typeof()), offsetof(::g::Fuse::DrawContext, _renderTargets), 0,
        ::g::Uno::Graphics::RenderTarget_typeof(), offsetof(::g::Fuse::DrawContext, _rootbuffer), 0,
        ::g::Fuse::IViewport_typeof(), offsetof(::g::Fuse::DrawContext, _viewport), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::IViewport_typeof()), offsetof(::g::Fuse::DrawContext, _viewports), 0,
        ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Fuse::IFlush_typeof()), offsetof(::g::Fuse::DrawContext, flushSet), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::DrawContext, _IsCaching), 0);
    type->Reflection.SetFunctions(25,
        new uFunction("AddFlushListener", NULL, (void*)DrawContext__AddFlushListener_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::IFlush_typeof()),
        new uFunction("Clear", NULL, (void*)DrawContext__Clear_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("get_CullFace", NULL, (void*)DrawContext__get_CullFace_fn, 0, false, ::g::Uno::Graphics::PolygonFace_typeof(), 0),
        new uFunction("Flush", NULL, (void*)DrawContext__Flush_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("GetLocalToClipTransform", NULL, (void*)DrawContext__GetLocalToClipTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("get_GLViewportPixelSize", NULL, (void*)DrawContext__get_GLViewportPixelSize_fn, 0, false, ::g::Uno::Int2_typeof(), 0),
        new uFunction("get_GLViewportPointSize", NULL, (void*)DrawContext__get_GLViewportPointSize_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_IsCaching", NULL, (void*)DrawContext__get_IsCaching_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsCaching", NULL, (void*)DrawContext__set_IsCaching_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)DrawContext__New1_fn, 0, true, DrawContext_typeof(), 1, ::g::Fuse::IViewport_typeof()),
        new uFunction("PopCullFace", NULL, (void*)DrawContext__PopCullFace_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("PopRenderTarget", NULL, (void*)DrawContext__PopRenderTarget_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("PopRenderTargetViewport", NULL, (void*)DrawContext__PopRenderTargetViewport_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("PopScissor", NULL, (void*)DrawContext__PopScissor_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("PopViewport", NULL, (void*)DrawContext__PopViewport_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("PushCullFace", NULL, (void*)DrawContext__PushCullFace_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Graphics::PolygonFace_typeof()),
        new uFunction("PushRenderTarget", NULL, (void*)DrawContext__PushRenderTarget_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Graphics::Framebuffer_typeof()),
        new uFunction("PushRenderTarget", NULL, (void*)DrawContext__PushRenderTarget1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Graphics::RenderTarget_typeof()),
        new uFunction("PushRenderTargetViewport", NULL, (void*)DrawContext__PushRenderTargetViewport_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Graphics::Framebuffer_typeof(), ::g::Fuse::IFrustum_typeof()),
        new uFunction("PushScissor", NULL, (void*)DrawContext__PushScissor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Recti_typeof()),
        new uFunction("PushViewport", NULL, (void*)DrawContext__PushViewport_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::IViewport_typeof()),
        new uFunction("get_RenderTarget", NULL, (void*)DrawContext__get_RenderTarget_fn, 0, false, ::g::Uno::Graphics::RenderTarget_typeof(), 0),
        new uFunction("get_Scissor", NULL, (void*)DrawContext__get_Scissor_fn, 0, false, ::g::Uno::Recti_typeof(), 0),
        new uFunction("get_Viewport", NULL, (void*)DrawContext__get_Viewport_fn, 0, false, ::g::Fuse::IViewport_typeof(), 0),
        new uFunction("get_ViewportPixelsPerPoint", NULL, (void*)DrawContext__get_ViewportPixelsPerPoint_fn, 0, false, ::g::Uno::Float_typeof(), 0));
    return type;
}

// public DrawContext(Fuse.IViewport viewport) :687
void DrawContext__ctor__fn(DrawContext* __this, uObject* viewport)
{
    __this->ctor_(viewport);
}

// public void AddFlushListener(Fuse.IFlush f) :700
void DrawContext__AddFlushListener_fn(DrawContext* __this, uObject* f)
{
    __this->AddFlushListener(f);
}

// internal void CaptureRootbuffer() :716
void DrawContext__CaptureRootbuffer_fn(DrawContext* __this)
{
    __this->CaptureRootbuffer();
}

// private void CheckGLError([string filePath], [int lineNumber], [string memberName]) :975
void DrawContext__CheckGLError_fn(DrawContext* __this, uString* filePath, int* lineNumber, uString* memberName)
{
    __this->CheckGLError(filePath, *lineNumber, memberName);
}

// public void Clear(float4 color, [float depth]) :840
void DrawContext__Clear_fn(DrawContext* __this, ::g::Uno::Float4* color, float* depth)
{
    __this->Clear(*color, *depth);
}

// public Uno.Graphics.PolygonFace get_CullFace() :961
void DrawContext__get_CullFace_fn(DrawContext* __this, int* __retval)
{
    *__retval = __this->CullFace();
}

// public void Flush() :706
void DrawContext__Flush_fn(DrawContext* __this)
{
    __this->Flush();
}

// public float4x4 GetLocalToClipTransform(Fuse.Node n) :677
void DrawContext__GetLocalToClipTransform_fn(DrawContext* __this, ::g::Fuse::Node* n, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetLocalToClipTransform(n);
}

// internal Fuse.RenderTargetEntry GetRenderTargetEntry() :782
void DrawContext__GetRenderTargetEntry_fn(DrawContext* __this, ::g::Fuse::RenderTargetEntry** __retval)
{
    *__retval = __this->GetRenderTargetEntry();
}

// private extern OpenGL.GLFramebufferHandle get_GLFramebuffer() :764
void DrawContext__get_GLFramebuffer_fn(DrawContext* __this, uint32_t* __retval)
{
    *__retval = __this->GLFramebuffer();
}

// private extern void set_GLFramebuffer(OpenGL.GLFramebufferHandle value) :774
void DrawContext__set_GLFramebuffer_fn(DrawContext* __this, uint32_t* value)
{
    __this->GLFramebuffer(*value);
}

// private int4 get_GLScissor() :872
void DrawContext__get_GLScissor_fn(DrawContext* __this, ::g::Uno::Int4* __retval)
{
    *__retval = __this->GLScissor();
}

// private void set_GLScissor(int4 value) :883
void DrawContext__set_GLScissor_fn(DrawContext* __this, ::g::Uno::Int4* value)
{
    __this->GLScissor(*value);
}

// public int2 get_GLViewportPixelSize() :916
void DrawContext__get_GLViewportPixelSize_fn(DrawContext* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->GLViewportPixelSize();
}

// private void set_GLViewportPixelSize(int2 value) :927
void DrawContext__set_GLViewportPixelSize_fn(DrawContext* __this, ::g::Uno::Int2* value)
{
    __this->GLViewportPixelSize(*value);
}

// public float2 get_GLViewportPointSize() :940
void DrawContext__get_GLViewportPointSize_fn(DrawContext* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GLViewportPointSize();
}

// public generated bool get_IsCaching() :955
void DrawContext__get_IsCaching_fn(DrawContext* __this, bool* __retval)
{
    *__retval = __this->IsCaching();
}

// public generated void set_IsCaching(bool value) :955
void DrawContext__set_IsCaching_fn(DrawContext* __this, bool* value)
{
    __this->IsCaching(*value);
}

// public DrawContext New(Fuse.IViewport viewport) :687
void DrawContext__New1_fn(uObject* viewport, DrawContext** __retval)
{
    *__retval = DrawContext::New1(viewport);
}

// public void PopCullFace() :970
void DrawContext__PopCullFace_fn(DrawContext* __this)
{
    __this->PopCullFace();
}

// public void PopRenderTarget() :814
void DrawContext__PopRenderTarget_fn(DrawContext* __this)
{
    __this->PopRenderTarget();
}

// public void PopRenderTargetViewport() :834
void DrawContext__PopRenderTargetViewport_fn(DrawContext* __this)
{
    __this->PopRenderTargetViewport();
}

// public void PopScissor() :902
void DrawContext__PopScissor_fn(DrawContext* __this)
{
    __this->PopScissor();
}

// public void PopViewport() :671
void DrawContext__PopViewport_fn(DrawContext* __this)
{
    __this->PopViewport();
}

// public void PushCullFace(Uno.Graphics.PolygonFace cf) :964
void DrawContext__PushCullFace_fn(DrawContext* __this, int* cf)
{
    __this->PushCullFace(*cf);
}

// public void PushRenderTarget(framebuffer fb) :790
void DrawContext__PushRenderTarget_fn(DrawContext* __this, ::g::Uno::Graphics::Framebuffer* fb)
{
    __this->PushRenderTarget(fb);
}

// public void PushRenderTarget(Uno.Graphics.RenderTarget rt) :795
void DrawContext__PushRenderTarget1_fn(DrawContext* __this, ::g::Uno::Graphics::RenderTarget* rt)
{
    __this->PushRenderTarget1(rt);
}

// private void PushRenderTarget(Uno.Graphics.RenderTarget rt, int2 viewportPixelSize, int4 glscissor) :800
void DrawContext__PushRenderTarget2_fn(DrawContext* __this, ::g::Uno::Graphics::RenderTarget* rt, ::g::Uno::Int2* viewportPixelSize, ::g::Uno::Int4* glscissor)
{
    __this->PushRenderTarget2(rt, *viewportPixelSize, *glscissor);
}

// public void PushRenderTargetViewport(framebuffer fb, Fuse.IFrustum frustum) :828
void DrawContext__PushRenderTargetViewport_fn(DrawContext* __this, ::g::Uno::Graphics::Framebuffer* fb, uObject* frustum)
{
    __this->PushRenderTargetViewport(fb, frustum);
}

// public void PushScissor(Uno.Recti scissor) :896
void DrawContext__PushScissor_fn(DrawContext* __this, ::g::Uno::Recti* scissor)
{
    __this->PushScissor(*scissor);
}

// public void PushViewport(Fuse.IViewport v) :664
void DrawContext__PushViewport_fn(DrawContext* __this, uObject* v)
{
    __this->PushViewport(v);
}

// internal void ReleaseRootbuffer() :733
void DrawContext__ReleaseRootbuffer_fn(DrawContext* __this)
{
    __this->ReleaseRootbuffer();
}

// public Uno.Graphics.RenderTarget get_RenderTarget() :758
void DrawContext__get_RenderTarget_fn(DrawContext* __this, ::g::Uno::Graphics::RenderTarget** __retval)
{
    *__retval = __this->RenderTarget();
}

// public Uno.Recti get_Scissor() :854
void DrawContext__get_Scissor_fn(DrawContext* __this, ::g::Uno::Recti* __retval)
{
    *__retval = __this->Scissor();
}

// internal void set_Scissor(Uno.Recti value) :862
void DrawContext__set_Scissor_fn(DrawContext* __this, ::g::Uno::Recti* value)
{
    __this->Scissor(*value);
}

// public Fuse.IViewport get_Viewport() :660
void DrawContext__get_Viewport_fn(DrawContext* __this, uObject** __retval)
{
    *__retval = __this->Viewport();
}

// public float get_ViewportPixelsPerPoint() :949
void DrawContext__get_ViewportPixelsPerPoint_fn(DrawContext* __this, float* __retval)
{
    *__retval = __this->ViewportPixelsPerPoint();
}

// public DrawContext(Fuse.IViewport viewport) [instance] :687
void DrawContext::ctor_(uObject* viewport)
{
    uStackFrame __("Fuse.DrawContext", ".ctor(Fuse.IViewport)");
    _viewports = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[34/*Uno.Collections.List<Fuse.IViewport>*/]));
    _renderTargets = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[35/*Uno.Collections.List<Fuse.RenderTargetEntry>*/]));
    _glScissors = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[36/*Uno.Collections.List<int4>*/]));
    _cullFaces = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[37/*Uno.Collections.List<Uno.Graphics.PolygonFace>*/]));
    _handle = ::g::Uno::Runtime::Implementation::GraphicsContextImpl::GetInstance();
    _viewport = viewport;
    _rootbuffer = ::g::Uno::Graphics::RenderTarget::New1();
    _renderTarget = _rootbuffer;
}

// public void AddFlushListener(Fuse.IFlush f) [instance] :700
void DrawContext::AddFlushListener(uObject* f)
{
    uStackFrame __("Fuse.DrawContext", "AddFlushListener(Fuse.IFlush)");
    bool ret4;

    if (flushSet == NULL)
        flushSet = ((::g::Uno::Collections::HashSet*)::g::Uno::Collections::HashSet::New1(::TYPES[38/*Uno.Collections.HashSet<Fuse.IFlush>*/]));

    ::g::Uno::Collections::HashSet__Add_fn(uPtr(flushSet), f, &ret4);
}

// internal void CaptureRootbuffer() [instance] :716
void DrawContext::CaptureRootbuffer()
{
    uStackFrame __("Fuse.DrawContext", "CaptureRootbuffer()");
    ::g::OpenGL::GL::Enable(3089);
    CheckGLError(::STRINGS[16/*"/usr/local/...*/], 721, ::STRINGS[17/*"CaptureRoot...*/]);
    _glScissor = ::g::OpenGL::GL::GetInteger(3088);
    _glViewport = ::g::OpenGL::GL::GetInteger(2978);
    _glFramebuffer = ::g::OpenGL::GL::GetFramebufferBinding();
    uPtr(_rootbuffer)->GLFramebufferHandle(_glFramebuffer);
    uPtr(_rootbuffer)->Size(::g::Uno::Runtime::Implementation::GraphicsContextImpl::GetBackbufferSize(_handle));
    uPtr(_rootbuffer)->HasDepth(true);
}

// private void CheckGLError([string filePath], [int lineNumber], [string memberName]) [instance] :975
void DrawContext::CheckGLError(uString* filePath, int lineNumber, uString* memberName)
{
    uStackFrame __("Fuse.DrawContext", "CheckGLError([string],[int],[string])");
    int e = ::g::OpenGL::GL::GetError();

    if (e != 0)
        ::g::Fuse::Diagnostics::Error(::g::Uno::String::op_Addition1(::STRINGS[18/*""*/], uBox<int>(::g::OpenGL::GLError_typeof(), e)), this, filePath, lineNumber, memberName);
}

// public void Clear(float4 color, [float depth]) [instance] :840
void DrawContext::Clear(::g::Uno::Float4 color, float depth)
{
    uStackFrame __("Fuse.DrawContext", "Clear(float4,[float])");
    ::g::OpenGL::GL::ClearDepth(depth);
    ::g::OpenGL::GL::ClearColor(color.X, color.Y, color.Z, color.W);
    ::g::OpenGL::GL::Clear(17664);
    CheckGLError(::STRINGS[16/*"/usr/local/...*/], 848, ::STRINGS[19/*"Clear"*/]);
}

// public Uno.Graphics.PolygonFace get_CullFace() [instance] :961
int DrawContext::CullFace()
{
    uStackFrame __("Fuse.DrawContext", "get_CullFace()");
    return _cullFace;
}

// public void Flush() [instance] :706
void DrawContext::Flush()
{
    uStackFrame __("Fuse.DrawContext", "Flush()");
    ::g::Uno::Collections::HashSet__Enumerator<uStrong<uObject*> > ret5;

    if (flushSet != NULL)
    {
        for (::g::Uno::Collections::HashSet__Enumerator<uStrong<uObject*> > enum1 = (::g::Uno::Collections::HashSet__GetEnumerator_fn(uPtr(flushSet), &ret5), ret5); enum1.MoveNext(::TYPES[41/*Uno.Collections.HashSet<Fuse.IFlush>.Enumerator*/]); )
        {
            uObject* f = enum1.Current(::TYPES[41/*Uno.Collections.HashSet<Fuse.IFlush>.Enumerator*/]);
            ::g::Fuse::IFlush::Flush(uInterface(uPtr(f), ::g::Fuse::IFlush_typeof()), this);
        }

        uPtr(flushSet)->Clear();
        flushSet = NULL;
    }
}

// public float4x4 GetLocalToClipTransform(Fuse.Node n) [instance] :677
::g::Uno::Float4x4 DrawContext::GetLocalToClipTransform(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.DrawContext", "GetLocalToClipTransform(Fuse.Node)");
    ::g::Uno::Float4x4 m = uPtr(n)->WorldTransform();
    ::g::Uno::Float4x4 p = ::g::Uno::Matrix::Mul8(m, ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(_viewport), ::TYPES[42/*Fuse.IViewport*/])));
    return p;
}

// internal Fuse.RenderTargetEntry GetRenderTargetEntry() [instance] :782
::g::Fuse::RenderTargetEntry* DrawContext::GetRenderTargetEntry()
{
    uStackFrame __("Fuse.DrawContext", "GetRenderTargetEntry()");
    return ::g::Fuse::RenderTargetEntry::New1(RenderTarget(), GLViewportPixelSize(), GLScissor(), GLFramebuffer());
    return NULL;
}

// private extern OpenGL.GLFramebufferHandle get_GLFramebuffer() [instance] :764
uint32_t DrawContext::GLFramebuffer()
{
    uStackFrame __("Fuse.DrawContext", "get_GLFramebuffer()");
    return _glFramebuffer;
}

// private extern void set_GLFramebuffer(OpenGL.GLFramebufferHandle value) [instance] :774
void DrawContext::GLFramebuffer(uint32_t value)
{
    uStackFrame __("Fuse.DrawContext", "set_GLFramebuffer(OpenGL.GLFramebufferHandle)");
    _glFramebuffer = value;
    ::g::OpenGL::GL::BindFramebuffer(36160, value);
    CheckGLError(::STRINGS[16/*"/usr/local/...*/], 778, ::STRINGS[27/*"set_GLFrame...*/]);
}

// private int4 get_GLScissor() [instance] :872
::g::Uno::Int4 DrawContext::GLScissor()
{
    uStackFrame __("Fuse.DrawContext", "get_GLScissor()");
    return _glScissor;
}

// private void set_GLScissor(int4 value) [instance] :883
void DrawContext::GLScissor(::g::Uno::Int4 value)
{
    uStackFrame __("Fuse.DrawContext", "set_GLScissor(int4)");
    _glScissor = value;
    ::g::OpenGL::GL::Scissor(value.Item(0), value.Item(1), value.Item(2), value.Item(3));
    CheckGLError(::STRINGS[16/*"/usr/local/...*/], 889, ::STRINGS[28/*"set_GLScissor"*/]);
}

// public int2 get_GLViewportPixelSize() [instance] :916
::g::Uno::Int2 DrawContext::GLViewportPixelSize()
{
    uStackFrame __("Fuse.DrawContext", "get_GLViewportPixelSize()");
    ::g::Uno::Int4 ind2 = _glViewport;
    return ::g::Uno::Int2__New2(ind2.Z, ind2.W);
}

// private void set_GLViewportPixelSize(int2 value) [instance] :927
void DrawContext::GLViewportPixelSize(::g::Uno::Int2 value)
{
    uStackFrame __("Fuse.DrawContext", "set_GLViewportPixelSize(int2)");
    _glViewport = ::g::Uno::Int4__New2(0, 0, value.X, value.Y);
    ::g::OpenGL::GL::Viewport(0, 0, value.X, value.Y);
    CheckGLError(::STRINGS[16/*"/usr/local/...*/], 933, ::STRINGS[29/*"set_GLViewp...*/]);
}

// public float2 get_GLViewportPointSize() [instance] :940
::g::Uno::Float2 DrawContext::GLViewportPointSize()
{
    uStackFrame __("Fuse.DrawContext", "get_GLViewportPointSize()");
    ::g::Uno::Float2 rsz = ::g::Uno::Float2__op_Implicit1(GLViewportPixelSize());
    return ::g::Uno::Float2__op_Division1(rsz, ViewportPixelsPerPoint());
}

// public generated bool get_IsCaching() [instance] :955
bool DrawContext::IsCaching()
{
    uStackFrame __("Fuse.DrawContext", "get_IsCaching()");
    return _IsCaching;
}

// public generated void set_IsCaching(bool value) [instance] :955
void DrawContext::IsCaching(bool value)
{
    uStackFrame __("Fuse.DrawContext", "set_IsCaching(bool)");
    _IsCaching = value;
}

// public void PopCullFace() [instance] :970
void DrawContext::PopCullFace()
{
    uStackFrame __("Fuse.DrawContext", "PopCullFace()");
    int ret6;
    _cullFace = (::g::Uno::Collections::IListExtensions__RemoveLast_fn(::TYPES[43/*Uno.Collections.IListExtensions.RemoveLast<Uno.Graphics.PolygonFace>*/], (uObject*)_cullFaces, &ret6), ret6);
}

// public void PopRenderTarget() [instance] :814
void DrawContext::PopRenderTarget()
{
    uStackFrame __("Fuse.DrawContext", "PopRenderTarget()");
    ::g::Fuse::RenderTargetEntry* ret7;
    Flush();
    ::g::Fuse::RenderTargetEntry* old = (::g::Uno::Collections::IListExtensions__RemoveLast_fn(::TYPES[45/*Uno.Collections.IListExtensions.RemoveLast<Fuse.RenderTargetEntry>*/], (uObject*)_renderTargets, &ret7), ret7);
    _renderTarget = uPtr(old)->RenderTarget;
    GLFramebuffer(uPtr(old)->GLFramebuffer);
    CheckGLError(::STRINGS[16/*"/usr/local/...*/], 822, ::STRINGS[20/*"PopRenderTa...*/]);
    GLViewportPixelSize(old->GLViewportPixelSize);
    GLScissor(old->GLScissor);
}

// public void PopRenderTargetViewport() [instance] :834
void DrawContext::PopRenderTargetViewport()
{
    uStackFrame __("Fuse.DrawContext", "PopRenderTargetViewport()");
    PopViewport();
    PopRenderTarget();
}

// public void PopScissor() [instance] :902
void DrawContext::PopScissor()
{
    uStackFrame __("Fuse.DrawContext", "PopScissor()");
    ::g::Uno::Int4 ret8;
    ::g::Uno::Int4 s = (::g::Uno::Collections::IListExtensions__RemoveLast_fn(::TYPES[48/*Uno.Collections.IListExtensions.RemoveLast<int4>*/], (uObject*)_glScissors, &ret8), ret8);
    GLScissor(s);
}

// public void PopViewport() [instance] :671
void DrawContext::PopViewport()
{
    uStackFrame __("Fuse.DrawContext", "PopViewport()");
    uObject* ret9;
    Flush();
    _viewport = (::g::Uno::Collections::IListExtensions__RemoveLast_fn(::TYPES[50/*Uno.Collections.IListExtensions.RemoveLast<Fuse.IViewport>*/], (uObject*)_viewports, &ret9), ret9);
}

// public void PushCullFace(Uno.Graphics.PolygonFace cf) [instance] :964
void DrawContext::PushCullFace(int cf)
{
    uStackFrame __("Fuse.DrawContext", "PushCullFace(Uno.Graphics.PolygonFace)");
    ::g::Uno::Collections::List__Add_fn(uPtr(_cullFaces), uCRef<int>(_cullFace));
    _cullFace = cf;
}

// public void PushRenderTarget(framebuffer fb) [instance] :790
void DrawContext::PushRenderTarget(::g::Uno::Graphics::Framebuffer* fb)
{
    uStackFrame __("Fuse.DrawContext", "PushRenderTarget(framebuffer)");
    PushRenderTarget1(uPtr(fb)->RenderTarget());
}

// public void PushRenderTarget(Uno.Graphics.RenderTarget rt) [instance] :795
void DrawContext::PushRenderTarget1(::g::Uno::Graphics::RenderTarget* rt)
{
    uStackFrame __("Fuse.DrawContext", "PushRenderTarget(Uno.Graphics.RenderTarget)");
    PushRenderTarget2(rt, uPtr(rt)->Size(), ::g::Uno::Int4__New2(0, 0, uPtr(rt)->Size().X, uPtr(rt)->Size().Y));
}

// private void PushRenderTarget(Uno.Graphics.RenderTarget rt, int2 viewportPixelSize, int4 glscissor) [instance] :800
void DrawContext::PushRenderTarget2(::g::Uno::Graphics::RenderTarget* rt, ::g::Uno::Int2 viewportPixelSize, ::g::Uno::Int4 glscissor)
{
    uStackFrame __("Fuse.DrawContext", "PushRenderTarget(Uno.Graphics.RenderTarget,int2,int4)");
    Flush();
    ::g::Uno::Collections::List__Add_fn(uPtr(_renderTargets), GetRenderTargetEntry());
    GLFramebuffer(uPtr(rt)->GLFramebufferHandle());
    CheckGLError(::STRINGS[16/*"/usr/local/...*/], 807, ::STRINGS[21/*"PushRenderT...*/]);
    _renderTarget = rt;
    GLViewportPixelSize(viewportPixelSize);
    GLScissor(glscissor);
}

// public void PushRenderTargetViewport(framebuffer fb, Fuse.IFrustum frustum) [instance] :828
void DrawContext::PushRenderTargetViewport(::g::Uno::Graphics::Framebuffer* fb, uObject* frustum)
{
    uStackFrame __("Fuse.DrawContext", "PushRenderTargetViewport(framebuffer,Fuse.IFrustum)");
    PushRenderTarget2(uPtr(fb)->RenderTarget(), uPtr(fb)->Size(), ::g::Uno::Int4__New7(::g::Uno::Int2__New2(0, 0), uPtr(fb)->Size()));
    PushViewport((uObject*)::g::Fuse::FixedViewport::New1(fb->Size(), ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(Viewport()), ::TYPES[42/*Fuse.IViewport*/])), frustum));
}

// public void PushScissor(Uno.Recti scissor) [instance] :896
void DrawContext::PushScissor(::g::Uno::Recti scissor)
{
    uStackFrame __("Fuse.DrawContext", "PushScissor(Uno.Recti)");
    ::g::Uno::Collections::List__Add_fn(uPtr(_glScissors), uCRef(GLScissor()));
    Scissor(scissor);
}

// public void PushViewport(Fuse.IViewport v) [instance] :664
void DrawContext::PushViewport(uObject* v)
{
    uStackFrame __("Fuse.DrawContext", "PushViewport(Fuse.IViewport)");
    Flush();
    ::g::Uno::Collections::List__Add_fn(uPtr(_viewports), _viewport);
    _viewport = v;
}

// internal void ReleaseRootbuffer() [instance] :733
void DrawContext::ReleaseRootbuffer()
{
    uStackFrame __("Fuse.DrawContext", "ReleaseRootbuffer()");

    if (uPtr(_glScissors)->Count() > 0)
        ::g::Fuse::Diagnostics::Error(::STRINGS[22/*"Unpopped Sc...*/], this, ::STRINGS[16/*"/usr/local/...*/], 738, ::STRINGS[23/*"ReleaseRoot...*/]);

    uPtr(_glScissors)->Clear();

    if (uPtr(_cullFaces)->Count() > 0)
        ::g::Fuse::Diagnostics::Error(::STRINGS[24/*"Unpopped Cu...*/], this, ::STRINGS[16/*"/usr/local/...*/], 742, ::STRINGS[23/*"ReleaseRoot...*/]);

    uPtr(_cullFaces)->Clear();

    if (uPtr(_viewports)->Count() > 0)
        ::g::Fuse::Diagnostics::Error(::STRINGS[25/*"Unpopped Vi...*/], this, ::STRINGS[16/*"/usr/local/...*/], 746, ::STRINGS[23/*"ReleaseRoot...*/]);

    uPtr(_viewports)->Clear();

    if (uPtr(_renderTargets)->Count() > 0)
        ::g::Fuse::Diagnostics::Error(::STRINGS[26/*"Unpopped Re...*/], this, ::STRINGS[16/*"/usr/local/...*/], 750, ::STRINGS[23/*"ReleaseRoot...*/]);

    uPtr(_renderTargets)->Clear();
}

// public Uno.Graphics.RenderTarget get_RenderTarget() [instance] :758
::g::Uno::Graphics::RenderTarget* DrawContext::RenderTarget()
{
    uStackFrame __("Fuse.DrawContext", "get_RenderTarget()");
    return _renderTarget;
}

// public Uno.Recti get_Scissor() [instance] :854
::g::Uno::Recti DrawContext::Scissor()
{
    uStackFrame __("Fuse.DrawContext", "get_Scissor()");
    ::g::Uno::Int2 vsz = GLViewportPixelSize();
    ::g::Uno::Int4 gl = GLScissor();
    int x = gl.X;
    int y = -gl.W - (gl.Y - vsz.Y);
    return ::g::Uno::Recti__New1(x, y, x + gl.Z, y + gl.W);
}

// internal void set_Scissor(Uno.Recti value) [instance] :862
void DrawContext::Scissor(::g::Uno::Recti value)
{
    uStackFrame __("Fuse.DrawContext", "set_Scissor(Uno.Recti)");
    ::g::Uno::Int2 vsz = GLViewportPixelSize();
    GLScissor(::g::Uno::Int4__New2(value.Left, vsz.Y - (value.Top + value.Size().Y), value.Size().X, value.Size().Y));
}

// public Fuse.IViewport get_Viewport() [instance] :660
uObject* DrawContext::Viewport()
{
    uStackFrame __("Fuse.DrawContext", "get_Viewport()");
    return _viewport;
}

// public float get_ViewportPixelsPerPoint() [instance] :949
float DrawContext::ViewportPixelsPerPoint()
{
    uStackFrame __("Fuse.DrawContext", "get_ViewportPixelsPerPoint()");
    return ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(Viewport()), ::TYPES[42/*Fuse.IViewport*/]));
}

// public DrawContext New(Fuse.IViewport viewport) [static] :687
DrawContext* DrawContext::New1(uObject* viewport)
{
    DrawContext* obj3 = (DrawContext*)uNew(DrawContext_typeof());
    obj3->ctor_(viewport);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#5
// ------------------------------------------------------

// public delegate void DrawHandler(object sender, Fuse.DrawArgs args) :614
uDelegateType* DrawHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.DrawHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::DrawArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#22
// -------------------------------------------------------

// internal sealed class DrawHelpers :2883
// {
uType* DrawHelpers_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(DrawHelpers);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.DrawHelpers", options);
    type->fp_ctor_ = (void*)DrawHelpers__New1_fn;
    ::TYPES[56] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[57] = ::g::Uno::Rect_typeof();
    ::TYPES[58] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[59] = ::g::FuseCore_bundle_typeof();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::DrawHelpers, _draw_9c5663de), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::DrawHelpers, DrawLocalRect_Coord_9c5663de_1_2_1), 0,
        ::g::Uno::Float2_typeof()->Array(), offsetof(::g::Fuse::DrawHelpers, DrawLocalRect_Vertices_9c5663de_1_1_4), 0,
        DrawHelpers_typeof(), (uintptr_t)&::g::Fuse::DrawHelpers::_instance_, uFieldFlagsStatic);
    return type;
}

// public generated DrawHelpers() :2883
void DrawHelpers__ctor__fn(DrawHelpers* __this)
{
    __this->ctor_();
}

// internal void DrawLocalRect(Fuse.DrawContext dc, Uno.Rect rect, float4x4 transform, float lineWidth, float4 color) :2897
void DrawHelpers__DrawLocalRect_fn(DrawHelpers* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* rect, ::g::Uno::Float4x4* transform, float* lineWidth, ::g::Uno::Float4* color)
{
    __this->DrawLocalRect(dc, *rect, *transform, *lineWidth, *color);
}

// private generated void init_DrawCalls() :2883
void DrawHelpers__init_DrawCalls_fn(DrawHelpers* __this)
{
    __this->init_DrawCalls();
}

// public generated DrawHelpers New() :2883
void DrawHelpers__New1_fn(DrawHelpers** __retval)
{
    *__retval = DrawHelpers::New1();
}

// internal static Fuse.DrawHelpers get_Singelton() :2889
void DrawHelpers__get_Singelton_fn(DrawHelpers** __retval)
{
    *__retval = DrawHelpers::Singelton();
}

uSStrong<DrawHelpers*> DrawHelpers::_instance_;

// public generated DrawHelpers() [instance] :2883
void DrawHelpers::ctor_()
{
    uStackFrame __("Fuse.DrawHelpers", ".ctor()");
    init_DrawCalls();
}

// internal void DrawLocalRect(Fuse.DrawContext dc, Uno.Rect rect, float4x4 transform, float lineWidth, float4 color) [instance] :2897
void DrawHelpers::DrawLocalRect(::g::Fuse::DrawContext* dc, ::g::Uno::Rect rect, ::g::Uno::Float4x4 transform, float lineWidth, ::g::Uno::Float4 color)
{
    uStackFrame __("Fuse.DrawHelpers", "DrawLocalRect(Fuse.DrawContext,Uno.Rect,float4x4,float,float4)");
    _draw_9c5663de.BlendEnabled(true);
    _draw_9c5663de.DepthTestEnabled(false);
    _draw_9c5663de.LineWidth(lineWidth);
    _draw_9c5663de.PrimitiveType(5);
    _draw_9c5663de.BlendSrcRgb(2);
    _draw_9c5663de.BlendSrcAlpha(2);
    _draw_9c5663de.BlendDstRgb(3);
    _draw_9c5663de.BlendDstAlpha(3);
    _draw_9c5663de.Use();
    _draw_9c5663de.Attrib1(0, 2, DrawLocalRect_Coord_9c5663de_1_2_1, 8, 0);
    _draw_9c5663de.Uniform2(1, rect.Size());
    _draw_9c5663de.Uniform2(2, rect.Position());
    _draw_9c5663de.Uniform12(3, transform);
    _draw_9c5663de.Uniform10(4, color);
    _draw_9c5663de.DrawArrays(uPtr(DrawLocalRect_Vertices_9c5663de_1_1_4)->Length());
}

// private generated void init_DrawCalls() [instance] :2883
void DrawHelpers::init_DrawCalls()
{
    uStackFrame __("Fuse.DrawHelpers", "init_DrawCalls()");
    uArray* Vertices_9c5663de_1_1_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[58/*float2[]*/], 5, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 0.0f));
    DrawLocalRect_Coord_9c5663de_1_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_9c5663de_1_1_0), 0);
    DrawLocalRect_Vertices_9c5663de_1_1_4 = Vertices_9c5663de_1_1_0;
    _draw_9c5663de = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseCore_bundle::DrawHelpersbba46184());
}

// public generated DrawHelpers New() [static] :2883
DrawHelpers* DrawHelpers::New1()
{
    DrawHelpers* obj1 = (DrawHelpers*)uNew(DrawHelpers_typeof());
    obj1->ctor_();
    return obj1;
}

// internal static Fuse.DrawHelpers get_Singelton() [static] :2889
DrawHelpers* DrawHelpers::Singelton()
{
    uStackFrame __("Fuse.DrawHelpers", "get_Singelton()");

    if (DrawHelpers::_instance() == NULL)
        DrawHelpers::_instance() = DrawHelpers::New1();

    return DrawHelpers::_instance();
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#8
// ------------------------------------------------------

// public sealed class FastMatrix :1187
// {
uType* FastMatrix_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FastMatrix);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FastMatrix", options);
    type->fp_ctor_ = (void*)FastMatrix__New1_fn;
    ::TYPES[60] = ::g::Uno::Float4x4_typeof();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[61] = ::g::Uno::Float_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::FastMatrix, _hasNonTranslation), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::FastMatrix, _matrix), 0);
    type->Reflection.SetFields(1,
        new uField("_hasNonTranslation", 0));
    type->Reflection.SetFunctions(23,
        new uFunction("AppendFastMatrix", NULL, (void*)FastMatrix__AppendFastMatrix_fn, 0, false, uVoid_typeof(), 1, FastMatrix_typeof()),
        new uFunction("AppendRotation", NULL, (void*)FastMatrix__AppendRotation_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("AppendRotationQuaternion", NULL, (void*)FastMatrix__AppendRotationQuaternion_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("AppendScale", NULL, (void*)FastMatrix__AppendScale_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("AppendScale", NULL, (void*)FastMatrix__AppendScale1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("AppendShear", NULL, (void*)FastMatrix__AppendShear_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("AppendTranslation", NULL, (void*)FastMatrix__AppendTranslation_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("AppendTranslation", NULL, (void*)FastMatrix__AppendTranslation1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("Copy", NULL, (void*)FastMatrix__Copy_fn, 0, false, FastMatrix_typeof(), 0),
        new uFunction("FromFloat4x4", NULL, (void*)FastMatrix__FromFloat4x4_fn, 0, true, FastMatrix_typeof(), 1, ::g::Uno::Float4x4_typeof()),
        new uFunction("Identity", NULL, (void*)FastMatrix__Identity_fn, 0, true, FastMatrix_typeof(), 0),
        new uFunction("Invert", NULL, (void*)FastMatrix__Invert_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Matrix", NULL, (void*)FastMatrix__get_Matrix_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("Mul", NULL, (void*)FastMatrix__Mul_fn, 0, false, FastMatrix_typeof(), 1, FastMatrix_typeof()),
        new uFunction("PrependFastMatrix", NULL, (void*)FastMatrix__PrependFastMatrix_fn, 0, false, uVoid_typeof(), 1, FastMatrix_typeof()),
        new uFunction("PrependRotation", NULL, (void*)FastMatrix__PrependRotation_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("PrependRotationQuaternion", NULL, (void*)FastMatrix__PrependRotationQuaternion_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("PrependScale", NULL, (void*)FastMatrix__PrependScale_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("PrependScale", NULL, (void*)FastMatrix__PrependScale1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("PrependShear", NULL, (void*)FastMatrix__PrependShear_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("PrependTranslation", NULL, (void*)FastMatrix__PrependTranslation_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("PrependTranslation", NULL, (void*)FastMatrix__PrependTranslation1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("ResetIdentity", NULL, (void*)FastMatrix__ResetIdentity_fn, 0, false, uVoid_typeof(), 0));
    return type;
}

// private FastMatrix() :1194
void FastMatrix__ctor__fn(FastMatrix* __this)
{
    __this->ctor_();
}

// private FastMatrix(Fuse.FastMatrix orig) :1199
void FastMatrix__ctor_1_fn(FastMatrix* __this, FastMatrix* orig)
{
    __this->ctor_1(orig);
}

// public void AppendFastMatrix(Fuse.FastMatrix fm) :1366
void FastMatrix__AppendFastMatrix_fn(FastMatrix* __this, FastMatrix* fm)
{
    __this->AppendFastMatrix(fm);
}

// public void AppendRotation(float zRadians) :1249
void FastMatrix__AppendRotation_fn(FastMatrix* __this, float* zRadians)
{
    __this->AppendRotation(*zRadians);
}

// public void AppendRotationQuaternion(float4 q) :1323
void FastMatrix__AppendRotationQuaternion_fn(FastMatrix* __this, ::g::Uno::Float4* q)
{
    __this->AppendRotationQuaternion(*q);
}

// public void AppendScale(float factor) :1261
void FastMatrix__AppendScale_fn(FastMatrix* __this, float* factor)
{
    __this->AppendScale(*factor);
}

// public void AppendScale(float3 scale) :1317
void FastMatrix__AppendScale1_fn(FastMatrix* __this, ::g::Uno::Float3* scale)
{
    __this->AppendScale1(*scale);
}

// public void AppendShear(float xRadians, float yRadians) :1279
void FastMatrix__AppendShear_fn(FastMatrix* __this, float* xRadians, float* yRadians)
{
    __this->AppendShear(*xRadians, *yRadians);
}

// public void AppendTranslation(float x, float y, float z) :1225
void FastMatrix__AppendTranslation_fn(FastMatrix* __this, float* x, float* y, float* z)
{
    __this->AppendTranslation(*x, *y, *z);
}

// public void AppendTranslation(float3 offset) :1329
void FastMatrix__AppendTranslation1_fn(FastMatrix* __this, ::g::Uno::Float3* offset)
{
    __this->AppendTranslation1(*offset);
}

// public Fuse.FastMatrix Copy() :1207
void FastMatrix__Copy_fn(FastMatrix* __this, FastMatrix** __retval)
{
    *__retval = __this->Copy();
}

// public static Fuse.FastMatrix FromFloat4x4(float4x4 m) :1217
void FastMatrix__FromFloat4x4_fn(::g::Uno::Float4x4* m, FastMatrix** __retval)
{
    *__retval = FastMatrix::FromFloat4x4(*m);
}

// public static Fuse.FastMatrix Identity() :1205
void FastMatrix__Identity_fn(FastMatrix** __retval)
{
    *__retval = FastMatrix::Identity();
}

// public void Invert() :1303
void FastMatrix__Invert_fn(FastMatrix* __this)
{
    __this->Invert();
}

// public float4x4 get_Matrix() :1190
void FastMatrix__get_Matrix_fn(FastMatrix* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->Matrix();
}

// public Fuse.FastMatrix Mul(Fuse.FastMatrix m) :1292
void FastMatrix__Mul_fn(FastMatrix* __this, FastMatrix* m, FastMatrix** __retval)
{
    *__retval = __this->Mul(m);
}

// private FastMatrix New() :1194
void FastMatrix__New1_fn(FastMatrix** __retval)
{
    *__retval = FastMatrix::New1();
}

// private FastMatrix New(Fuse.FastMatrix orig) :1199
void FastMatrix__New2_fn(FastMatrix* orig, FastMatrix** __retval)
{
    *__retval = FastMatrix::New2(orig);
}

// public void PrependFastMatrix(Fuse.FastMatrix fm) :1351
void FastMatrix__PrependFastMatrix_fn(FastMatrix* __this, FastMatrix* fm)
{
    __this->PrependFastMatrix(fm);
}

// public void PrependRotation(float zRadians) :1255
void FastMatrix__PrependRotation_fn(FastMatrix* __this, float* zRadians)
{
    __this->PrependRotation(*zRadians);
}

// public void PrependRotationQuaternion(float4 q) :1340
void FastMatrix__PrependRotationQuaternion_fn(FastMatrix* __this, ::g::Uno::Float4* q)
{
    __this->PrependRotationQuaternion(*q);
}

// public void PrependScale(float factor) :1267
void FastMatrix__PrependScale_fn(FastMatrix* __this, float* factor)
{
    __this->PrependScale(*factor);
}

// public void PrependScale(float3 scale) :1334
void FastMatrix__PrependScale1_fn(FastMatrix* __this, ::g::Uno::Float3* scale)
{
    __this->PrependScale1(*scale);
}

// public void PrependShear(float xRadians, float yRadians) :1273
void FastMatrix__PrependShear_fn(FastMatrix* __this, float* xRadians, float* yRadians)
{
    __this->PrependShear(*xRadians, *yRadians);
}

// public void PrependTranslation(float x, float y, float z) :1237
void FastMatrix__PrependTranslation_fn(FastMatrix* __this, float* x, float* y, float* z)
{
    __this->PrependTranslation(*x, *y, *z);
}

// public void PrependTranslation(float3 offset) :1346
void FastMatrix__PrependTranslation1_fn(FastMatrix* __this, ::g::Uno::Float3* offset)
{
    __this->PrependTranslation1(*offset);
}

// public void ResetIdentity() :1212
void FastMatrix__ResetIdentity_fn(FastMatrix* __this)
{
    __this->ResetIdentity();
}

// private void SimpleTranslation(float x, float y, float z) :1285
void FastMatrix__SimpleTranslation_fn(FastMatrix* __this, float* x, float* y, float* z)
{
    __this->SimpleTranslation(*x, *y, *z);
}

// private FastMatrix() [instance] :1194
void FastMatrix::ctor_()
{
    uStackFrame __("Fuse.FastMatrix", ".ctor()");
    _matrix = ::g::Uno::Float4x4__Identity();
}

// private FastMatrix(Fuse.FastMatrix orig) [instance] :1199
void FastMatrix::ctor_1(FastMatrix* orig)
{
    uStackFrame __("Fuse.FastMatrix", ".ctor(Fuse.FastMatrix)");
    _matrix = uPtr(orig)->_matrix;
    _hasNonTranslation = orig->_hasNonTranslation;
}

// public void AppendFastMatrix(Fuse.FastMatrix fm) [instance] :1366
void FastMatrix::AppendFastMatrix(FastMatrix* fm)
{
    uStackFrame __("Fuse.FastMatrix", "AppendFastMatrix(Fuse.FastMatrix)");

    if (_hasNonTranslation || uPtr(fm)->_hasNonTranslation)
    {
        _matrix = ::g::Uno::Matrix::Mul8(_matrix, uPtr(fm)->Matrix());
        _hasNonTranslation = true;
    }
    else
    {
        _matrix.M41 = (_matrix.M41 + uPtr(fm)->_matrix.M41);
        _matrix.M42 = (_matrix.M42 + fm->_matrix.M42);
        _matrix.M43 = (_matrix.M43 + fm->_matrix.M43);
    }
}

// public void AppendRotation(float zRadians) [instance] :1249
void FastMatrix::AppendRotation(float zRadians)
{
    uStackFrame __("Fuse.FastMatrix", "AppendRotation(float)");
    _matrix = ::g::Uno::Matrix::Mul8(_matrix, ::g::Uno::Matrix::RotationZ(zRadians));
    _hasNonTranslation = true;
}

// public void AppendRotationQuaternion(float4 q) [instance] :1323
void FastMatrix::AppendRotationQuaternion(::g::Uno::Float4 q)
{
    uStackFrame __("Fuse.FastMatrix", "AppendRotationQuaternion(float4)");
    _matrix = ::g::Uno::Matrix::Mul8(_matrix, ::g::Uno::Matrix::RotationQuaternion(q));
    _hasNonTranslation = true;
}

// public void AppendScale(float factor) [instance] :1261
void FastMatrix::AppendScale(float factor)
{
    uStackFrame __("Fuse.FastMatrix", "AppendScale(float)");
    _matrix = ::g::Uno::Matrix::Mul8(_matrix, ::g::Uno::Matrix::Scaling2(::g::Uno::Float3__New2(factor, factor, factor)));
    _hasNonTranslation = true;
}

// public void AppendScale(float3 scale) [instance] :1317
void FastMatrix::AppendScale1(::g::Uno::Float3 scale)
{
    uStackFrame __("Fuse.FastMatrix", "AppendScale(float3)");
    _matrix = ::g::Uno::Matrix::Mul8(_matrix, ::g::Uno::Matrix::Scaling2(scale));
    _hasNonTranslation = true;
}

// public void AppendShear(float xRadians, float yRadians) [instance] :1279
void FastMatrix::AppendShear(float xRadians, float yRadians)
{
    uStackFrame __("Fuse.FastMatrix", "AppendShear(float,float)");
    _matrix = ::g::Uno::Matrix::Mul8(_matrix, ::g::Uno::Matrix::Shear(::g::Uno::Float2__New2(xRadians, yRadians)));
    _hasNonTranslation = true;
}

// public void AppendTranslation(float x, float y, float z) [instance] :1225
void FastMatrix::AppendTranslation(float x, float y, float z)
{
    uStackFrame __("Fuse.FastMatrix", "AppendTranslation(float,float,float)");

    if (!_hasNonTranslation)
        SimpleTranslation(x, y, z);
    else
        _matrix = ::g::Uno::Matrix::Mul8(_matrix, ::g::Uno::Matrix::Translation1(::g::Uno::Float3__New2(x, y, z)));
}

// public void AppendTranslation(float3 offset) [instance] :1329
void FastMatrix::AppendTranslation1(::g::Uno::Float3 offset)
{
    uStackFrame __("Fuse.FastMatrix", "AppendTranslation(float3)");
    _matrix = ::g::Uno::Matrix::Mul8(_matrix, ::g::Uno::Matrix::Translation1(offset));
}

// public Fuse.FastMatrix Copy() [instance] :1207
FastMatrix* FastMatrix::Copy()
{
    uStackFrame __("Fuse.FastMatrix", "Copy()");
    return FastMatrix::New2(this);
}

// public void Invert() [instance] :1303
void FastMatrix::Invert()
{
    uStackFrame __("Fuse.FastMatrix", "Invert()");

    if (!_hasNonTranslation)
    {
        _matrix.M41 = -_matrix.M41;
        _matrix.M42 = -_matrix.M42;
        _matrix.M43 = -_matrix.M43;
    }
    else
        _matrix = ::g::Uno::Matrix::Invert2(_matrix);
}

// public float4x4 get_Matrix() [instance] :1190
::g::Uno::Float4x4 FastMatrix::Matrix()
{
    uStackFrame __("Fuse.FastMatrix", "get_Matrix()");
    return _matrix;
}

// public Fuse.FastMatrix Mul(Fuse.FastMatrix m) [instance] :1292
FastMatrix* FastMatrix::Mul(FastMatrix* m)
{
    uStackFrame __("Fuse.FastMatrix", "Mul(Fuse.FastMatrix)");
    FastMatrix* res = FastMatrix::New1();
    res->_matrix = ::g::Uno::Matrix::Mul8(_matrix, uPtr(m)->_matrix);
    res->_hasNonTranslation = (_hasNonTranslation || m->_hasNonTranslation);
    return res;
}

// public void PrependFastMatrix(Fuse.FastMatrix fm) [instance] :1351
void FastMatrix::PrependFastMatrix(FastMatrix* fm)
{
    uStackFrame __("Fuse.FastMatrix", "PrependFastMatrix(Fuse.FastMatrix)");

    if (_hasNonTranslation || uPtr(fm)->_hasNonTranslation)
    {
        _matrix = ::g::Uno::Matrix::Mul8(uPtr(fm)->Matrix(), _matrix);
        _hasNonTranslation = true;
    }
    else
    {
        _matrix.M41 = (_matrix.M41 + uPtr(fm)->_matrix.M41);
        _matrix.M42 = (_matrix.M42 + fm->_matrix.M42);
        _matrix.M43 = (_matrix.M43 + fm->_matrix.M43);
    }
}

// public void PrependRotation(float zRadians) [instance] :1255
void FastMatrix::PrependRotation(float zRadians)
{
    uStackFrame __("Fuse.FastMatrix", "PrependRotation(float)");
    _matrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::RotationZ(zRadians), _matrix);
    _hasNonTranslation = true;
}

// public void PrependRotationQuaternion(float4 q) [instance] :1340
void FastMatrix::PrependRotationQuaternion(::g::Uno::Float4 q)
{
    uStackFrame __("Fuse.FastMatrix", "PrependRotationQuaternion(float4)");
    _matrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::RotationQuaternion(q), _matrix);
    _hasNonTranslation = true;
}

// public void PrependScale(float factor) [instance] :1267
void FastMatrix::PrependScale(float factor)
{
    uStackFrame __("Fuse.FastMatrix", "PrependScale(float)");
    _matrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::Scaling2(::g::Uno::Float3__New2(factor, factor, factor)), _matrix);
    _hasNonTranslation = true;
}

// public void PrependScale(float3 scale) [instance] :1334
void FastMatrix::PrependScale1(::g::Uno::Float3 scale)
{
    uStackFrame __("Fuse.FastMatrix", "PrependScale(float3)");
    _matrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::Scaling2(scale), _matrix);
    _hasNonTranslation = true;
}

// public void PrependShear(float xRadians, float yRadians) [instance] :1273
void FastMatrix::PrependShear(float xRadians, float yRadians)
{
    uStackFrame __("Fuse.FastMatrix", "PrependShear(float,float)");
    _matrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::Shear(::g::Uno::Float2__New2(xRadians, yRadians)), _matrix);
    _hasNonTranslation = true;
}

// public void PrependTranslation(float x, float y, float z) [instance] :1237
void FastMatrix::PrependTranslation(float x, float y, float z)
{
    uStackFrame __("Fuse.FastMatrix", "PrependTranslation(float,float,float)");

    if (!_hasNonTranslation)
        SimpleTranslation(x, y, z);
    else
        _matrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::Translation1(::g::Uno::Float3__New2(x, y, z)), _matrix);
}

// public void PrependTranslation(float3 offset) [instance] :1346
void FastMatrix::PrependTranslation1(::g::Uno::Float3 offset)
{
    uStackFrame __("Fuse.FastMatrix", "PrependTranslation(float3)");
    _matrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::Translation1(offset), _matrix);
}

// public void ResetIdentity() [instance] :1212
void FastMatrix::ResetIdentity()
{
    uStackFrame __("Fuse.FastMatrix", "ResetIdentity()");
    _matrix = ::g::Uno::Float4x4__Identity();
}

// private void SimpleTranslation(float x, float y, float z) [instance] :1285
void FastMatrix::SimpleTranslation(float x, float y, float z)
{
    uStackFrame __("Fuse.FastMatrix", "SimpleTranslation(float,float,float)");
    _matrix.M41 = (_matrix.M41 + x);
    _matrix.M42 = (_matrix.M42 + y);
    _matrix.M43 = (_matrix.M43 + z);
}

// public static Fuse.FastMatrix FromFloat4x4(float4x4 m) [static] :1217
FastMatrix* FastMatrix::FromFloat4x4(::g::Uno::Float4x4 m)
{
    uStackFrame __("Fuse.FastMatrix", "FromFloat4x4(float4x4)");
    FastMatrix* k = FastMatrix::New1();
    k->_matrix = m;
    k->_hasNonTranslation = true;
    return k;
}

// public static Fuse.FastMatrix Identity() [static] :1205
FastMatrix* FastMatrix::Identity()
{
    uStackFrame __("Fuse.FastMatrix", "Identity()");
    return FastMatrix::New1();
}

// private FastMatrix New() [static] :1194
FastMatrix* FastMatrix::New1()
{
    FastMatrix* obj1 = (FastMatrix*)uNew(FastMatrix_typeof());
    obj1->ctor_();
    return obj1;
}

// private FastMatrix New(Fuse.FastMatrix orig) [static] :1199
FastMatrix* FastMatrix::New2(FastMatrix* orig)
{
    FastMatrix* obj2 = (FastMatrix*)uNew(FastMatrix_typeof());
    obj2->ctor_1(orig);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#16
// -------------------------------------------------------

// internal sealed class FixedViewport :2028
// {
FixedViewport_type* FixedViewport_typeof()
{
    static uSStrong<FixedViewport_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FixedViewport);
    options.TypeSize = sizeof(FixedViewport_type);
    type = (FixedViewport_type*)uClassType::New("Fuse.FixedViewport", options);
    type->interface0.fp_PointToWorldRay = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Uno::Geometry::Ray*))FixedViewport__PointToWorldRay_fn;
    type->interface0.fp_get_PixelsPerPoint = (void(*)(uObject*, float*))FixedViewport__get_PixelsPerPoint_fn;
    type->interface0.fp_get_Size = (void(*)(uObject*, ::g::Uno::Float2*))FixedViewport__get_Size_fn;
    type->interface0.fp_get_PixelSize = (void(*)(uObject*, ::g::Uno::Float2*))FixedViewport__get_PixelSize_fn;
    type->interface0.fp_get_ProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))FixedViewport__get_ProjectionTransform_fn;
    type->interface0.fp_get_ProjectionTransformInverse = (void(*)(uObject*, ::g::Uno::Float4x4*))FixedViewport__get_ProjectionTransformInverse_fn;
    type->interface0.fp_get_ViewProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))FixedViewport__get_ViewProjectionTransform_fn;
    type->interface0.fp_get_ViewProjectionTransformInverse = (void(*)(uObject*, ::g::Uno::Float4x4*))FixedViewport__get_ViewProjectionTransformInverse_fn;
    type->interface0.fp_get_ViewTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))FixedViewport__get_ViewTransform_fn;
    type->interface0.fp_get_ViewTransformInverse = (void(*)(uObject*, ::g::Uno::Float4x4*))FixedViewport__get_ViewTransformInverse_fn;
    type->interface0.fp_get_ViewOrigin = (void(*)(uObject*, ::g::Uno::Float3*))FixedViewport__get_ViewOrigin_fn;
    type->interface0.fp_get_ViewRange = (void(*)(uObject*, ::g::Uno::Float2*))FixedViewport__get_ViewRange_fn;
    ::TYPES[61] = ::g::Uno::Float_typeof();
    ::TYPES[53] = ::g::Uno::Int2_typeof();
    ::TYPES[42] = ::g::Fuse::IViewport_typeof();
    ::TYPES[62] = ::g::Fuse::FrustumViewport_typeof();
    type->SetInterfaces(
        ::g::Fuse::IViewport_typeof(), offsetof(FixedViewport_type, interface0));
    type->SetFields(0,
        ::g::Fuse::IFrustum_typeof(), offsetof(::g::Fuse::FixedViewport, _frustum), 0,
        ::g::Fuse::FrustumViewport_typeof(), offsetof(::g::Fuse::FixedViewport, _frustumViewport), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::FixedViewport, _pixelSize), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::FixedViewport, _pixelsPerPoint), 0);
    return type;
}

// public FixedViewport(int2 pixelSize, float pixelsPerPoint, Fuse.IFrustum frustum) :2063
void FixedViewport__ctor__fn(FixedViewport* __this, ::g::Uno::Int2* pixelSize, float* pixelsPerPoint, uObject* frustum)
{
    __this->ctor_(*pixelSize, *pixelsPerPoint, frustum);
}

// public FixedViewport New(int2 pixelSize, float pixelsPerPoint, Fuse.IFrustum frustum) :2063
void FixedViewport__New1_fn(::g::Uno::Int2* pixelSize, float* pixelsPerPoint, uObject* frustum, FixedViewport** __retval)
{
    *__retval = FixedViewport::New1(*pixelSize, *pixelsPerPoint, frustum);
}

// public float2 get_PixelSize() :2036
void FixedViewport__get_PixelSize_fn(FixedViewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PixelSize();
}

// public float get_PixelsPerPoint() :2031
void FixedViewport__get_PixelsPerPoint_fn(FixedViewport* __this, float* __retval)
{
    *__retval = __this->PixelsPerPoint();
}

// public Uno.Geometry.Ray PointToWorldRay(float2 pointPos) :2056
void FixedViewport__PointToWorldRay_fn(FixedViewport* __this, ::g::Uno::Float2* pointPos, ::g::Uno::Geometry::Ray* __retval)
{
    *__retval = __this->PointToWorldRay(*pointPos);
}

// public float4x4 get_ProjectionTransform() :2041
void FixedViewport__get_ProjectionTransform_fn(FixedViewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ProjectionTransform();
}

// public float4x4 get_ProjectionTransformInverse() :2043
void FixedViewport__get_ProjectionTransformInverse_fn(FixedViewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ProjectionTransformInverse();
}

// public float2 get_Size() :2033
void FixedViewport__get_Size_fn(FixedViewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public float3 get_ViewOrigin() :2053
void FixedViewport__get_ViewOrigin_fn(FixedViewport* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->ViewOrigin();
}

// public float4x4 get_ViewProjectionTransform() :2045
void FixedViewport__get_ViewProjectionTransform_fn(FixedViewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewProjectionTransform();
}

// public float4x4 get_ViewProjectionTransformInverse() :2047
void FixedViewport__get_ViewProjectionTransformInverse_fn(FixedViewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewProjectionTransformInverse();
}

// public float2 get_ViewRange() :2054
void FixedViewport__get_ViewRange_fn(FixedViewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ViewRange();
}

// public float4x4 get_ViewTransform() :2049
void FixedViewport__get_ViewTransform_fn(FixedViewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewTransform();
}

// public float4x4 get_ViewTransformInverse() :2051
void FixedViewport__get_ViewTransformInverse_fn(FixedViewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewTransformInverse();
}

// public FixedViewport(int2 pixelSize, float pixelsPerPoint, Fuse.IFrustum frustum) [instance] :2063
void FixedViewport::ctor_(::g::Uno::Int2 pixelSize, float pixelsPerPoint, uObject* frustum)
{
    uStackFrame __("Fuse.FixedViewport", ".ctor(int2,float,Fuse.IFrustum)");
    _frustumViewport = ::g::Fuse::FrustumViewport::New1();
    _frustum = frustum;
    _pixelSize = ::g::Uno::Float2__New2((float)pixelSize.X, (float)pixelSize.Y);
    _pixelsPerPoint = pixelsPerPoint;
    uPtr(_frustumViewport)->Update((uObject*)this, frustum);
}

// public float2 get_PixelSize() [instance] :2036
::g::Uno::Float2 FixedViewport::PixelSize()
{
    uStackFrame __("Fuse.FixedViewport", "get_PixelSize()");
    return _pixelSize;
}

// public float get_PixelsPerPoint() [instance] :2031
float FixedViewport::PixelsPerPoint()
{
    uStackFrame __("Fuse.FixedViewport", "get_PixelsPerPoint()");
    return _pixelsPerPoint;
}

// public Uno.Geometry.Ray PointToWorldRay(float2 pointPos) [instance] :2056
::g::Uno::Geometry::Ray FixedViewport::PointToWorldRay(::g::Uno::Float2 pointPos)
{
    uStackFrame __("Fuse.FixedViewport", "PointToWorldRay(float2)");
    return ::g::Fuse::FrustumViewport::PointToWorldRay((uObject*)this, pointPos);
}

// public float4x4 get_ProjectionTransform() [instance] :2041
::g::Uno::Float4x4 FixedViewport::ProjectionTransform()
{
    uStackFrame __("Fuse.FixedViewport", "get_ProjectionTransform()");
    return uPtr(_frustumViewport)->ProjectionTransform;
}

// public float4x4 get_ProjectionTransformInverse() [instance] :2043
::g::Uno::Float4x4 FixedViewport::ProjectionTransformInverse()
{
    uStackFrame __("Fuse.FixedViewport", "get_ProjectionTransformInverse()");
    return uPtr(_frustumViewport)->ProjectionTransformInverse;
}

// public float2 get_Size() [instance] :2033
::g::Uno::Float2 FixedViewport::Size()
{
    uStackFrame __("Fuse.FixedViewport", "get_Size()");
    return ::g::Uno::Float2__op_Division1(PixelSize(), PixelsPerPoint());
}

// public float3 get_ViewOrigin() [instance] :2053
::g::Uno::Float3 FixedViewport::ViewOrigin()
{
    uStackFrame __("Fuse.FixedViewport", "get_ViewOrigin()");
    return ::g::Fuse::IFrustum::GetWorldPosition(uInterface(uPtr(_frustum), ::TYPES[159/*Fuse.IFrustum*/]), (uObject*)this);
}

// public float4x4 get_ViewProjectionTransform() [instance] :2045
::g::Uno::Float4x4 FixedViewport::ViewProjectionTransform()
{
    uStackFrame __("Fuse.FixedViewport", "get_ViewProjectionTransform()");
    return uPtr(_frustumViewport)->ViewProjectionTransform;
}

// public float4x4 get_ViewProjectionTransformInverse() [instance] :2047
::g::Uno::Float4x4 FixedViewport::ViewProjectionTransformInverse()
{
    uStackFrame __("Fuse.FixedViewport", "get_ViewProjectionTransformInverse()");
    return uPtr(_frustumViewport)->ViewProjectionTransformInverse;
}

// public float2 get_ViewRange() [instance] :2054
::g::Uno::Float2 FixedViewport::ViewRange()
{
    uStackFrame __("Fuse.FixedViewport", "get_ViewRange()");
    return ::g::Fuse::IFrustum::GetDepthRange(uInterface(uPtr(_frustum), ::TYPES[159/*Fuse.IFrustum*/]), (uObject*)this);
}

// public float4x4 get_ViewTransform() [instance] :2049
::g::Uno::Float4x4 FixedViewport::ViewTransform()
{
    uStackFrame __("Fuse.FixedViewport", "get_ViewTransform()");
    return uPtr(_frustumViewport)->ViewTransform;
}

// public float4x4 get_ViewTransformInverse() [instance] :2051
::g::Uno::Float4x4 FixedViewport::ViewTransformInverse()
{
    uStackFrame __("Fuse.FixedViewport", "get_ViewTransformInverse()");
    return uPtr(_frustumViewport)->ViewTransformInverse;
}

// public FixedViewport New(int2 pixelSize, float pixelsPerPoint, Fuse.IFrustum frustum) [static] :2063
FixedViewport* FixedViewport::New1(::g::Uno::Int2 pixelSize, float pixelsPerPoint, uObject* frustum)
{
    FixedViewport* obj1 = (FixedViewport*)uNew(FixedViewport_typeof());
    obj1->ctor_(pixelSize, pixelsPerPoint, frustum);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#17
// -------------------------------------------------------

// private enum LayoutParams.Flags :2089
uEnumType* LayoutParams__Flags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.LayoutParams.Flags", ::g::Uno::Int_typeof(), 12);
    type->SetLiterals(
        "None", 0LL,
        "X", 1LL,
        "Y", 2LL,
        "Temporary", 4LL,
        "MaxX", 8LL,
        "MaxY", 16LL,
        "MinX", 32LL,
        "MinY", 64LL,
        "RelativeX", 128LL,
        "RelativeY", 256LL,
        "NoRelativeX", 512LL,
        "NoRelativeY", 1024LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#10
// -------------------------------------------------------

// public sealed class Font :1416
// {
// static Font() :1416
static void Font__cctor__fn(uType* __type)
{
    Font::_fontFaces_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[63/*Uno.Collections.Dictionary<Uno.UX.FileSource, Uno.Content.Fonts.FontFace>*/]));
}

uType* Font_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Font);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Font", options);
    type->fp_cctor_ = Font__cctor__fn;
    ::TYPES[63] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), ::g::Uno::Content::Fonts::FontFace_typeof());
    ::TYPES[64] = ::g::Uno::UX::BundleFileSource_typeof();
    ::TYPES[65] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[66] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    type->SetFields(0,
        ::g::Uno::UX::FileSource_typeof(), offsetof(::g::Fuse::Font, _file), 0,
        ::g::Uno::Content::Fonts::FontFace_typeof(), offsetof(::g::Fuse::Font, _fontFace), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), ::g::Uno::Content::Fonts::FontFace_typeof()), (uintptr_t)&::g::Fuse::Font::_fontFaces_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Font__New1_fn, 0, true, Font_typeof(), 1, ::g::Uno::UX::FileSource_typeof()));
    return type;
}

// public Font(Uno.UX.FileSource file) :1466
void Font__ctor__fn(Font* __this, ::g::Uno::UX::FileSource* file)
{
    __this->ctor_(file);
}

// internal Uno.UX.FileSource get_File() :1422
void Font__get_File_fn(Font* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// internal Uno.Content.Fonts.FontFace get_FontFace() :1434
void Font__get_FontFace_fn(Font* __this, ::g::Uno::Content::Fonts::FontFace** __retval)
{
    *__retval = __this->FontFace();
}

// private Uno.Content.Fonts.FontFace Load() :1450
void Font__Load_fn(Font* __this, ::g::Uno::Content::Fonts::FontFace** __retval)
{
    *__retval = __this->Load();
}

// public Font New(Uno.UX.FileSource file) :1466
void Font__New1_fn(::g::Uno::UX::FileSource* file, Font** __retval)
{
    *__retval = Font::New1(file);
}

uSStrong< ::g::Uno::Collections::Dictionary*> Font::_fontFaces_;

// public Font(Uno.UX.FileSource file) [instance] :1466
void Font::ctor_(::g::Uno::UX::FileSource* file)
{
    uStackFrame __("Fuse.Font", ".ctor(Uno.UX.FileSource)");
    _file = file;
}

// internal Uno.UX.FileSource get_File() [instance] :1422
::g::Uno::UX::FileSource* Font::File()
{
    uStackFrame __("Fuse.Font", "get_File()");
    return _file;
}

// internal Uno.Content.Fonts.FontFace get_FontFace() [instance] :1434
::g::Uno::Content::Fonts::FontFace* Font::FontFace()
{
    uStackFrame __("Fuse.Font", "get_FontFace()");
    bool ret2;

    if (_fontFace == NULL)
    {
        ::g::Uno::Content::Fonts::FontFace* ff;

        if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Font::_fontFaces()), _file, (void**)(&ff), &ret2), ret2))
        {
            _fontFace = Load();
            ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Font::_fontFaces()), _file, _fontFace);
        }
        else
            _fontFace = ff;
    }

    return _fontFace;
}

// private Uno.Content.Fonts.FontFace Load() [instance] :1450
::g::Uno::Content::Fonts::FontFace* Font::Load()
{
    uStackFrame __("Fuse.Font", "Load()");
    ::g::Uno::UX::BundleFileSource* bfs = uAs< ::g::Uno::UX::BundleFileSource*>(File(), ::TYPES[64/*Uno.UX.BundleFileSource*/]);

    if (bfs != NULL)
        return ::g::Uno::Content::Fonts::FontFace::Load1(uPtr(bfs)->BundleFile);
    else
    {
        uArray* data = uPtr(File())->ReadAllBytes();
        return ::g::Uno::Content::Fonts::FontFace::Load(uPtr(File())->Name, data, 0, uPtr(data)->Length());
    }
}

// public Font New(Uno.UX.FileSource file) [static] :1466
Font* Font::New1(::g::Uno::UX::FileSource* file)
{
    Font* obj1 = (Font*)uNew(Font_typeof());
    obj1->ctor_(file);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#9
// ------------------------------------------------------

// public static class Fonts :1391
// {
uClassType* Fonts_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Fonts", options);
    ::TYPES[65] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[59] = ::g::FuseCore_bundle_typeof();
    type->SetFields(0,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::Fuse::Fonts::_fallback_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Fallback", NULL, (void*)Fonts__get_Fallback_fn, 0, true, ::g::Fuse::Font_typeof(), 0));
    return type;
}

// public static Fuse.Font get_Fallback() :1397
void Fonts__get_Fallback_fn(::g::Fuse::Font** __retval)
{
    *__retval = Fonts::Fallback();
}

uSStrong< ::g::Fuse::Font*> Fonts::_fallback_;

// public static Fuse.Font get_Fallback() [static] :1397
::g::Fuse::Font* Fonts::Fallback()
{
    uStackFrame __("Fuse.Fonts", "get_Fallback()");

    if (Fonts::_fallback() == NULL)
        Fonts::_fallback() = ::g::Fuse::Font::New1(::g::Uno::UX::BundleFileSource::New1(::g::FuseCore_bundle::OpenSansLight46d9edef()));

    return Fonts::_fallback();
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#11
// -------------------------------------------------------

// public static class FramebufferPool :1482
// {
uClassType* FramebufferPool_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.FramebufferPool", options);
    ::TYPES[53] = ::g::Uno::Int2_typeof();
    ::TYPES[67] = ::g::Fuse::FramebufferPoolImpl_typeof();
    type->SetFields(0,
        ::g::Fuse::FramebufferPoolImpl_typeof(), (uintptr_t)&::g::Fuse::FramebufferPool::framebufferPool_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("Lock", NULL, (void*)FramebufferPool__Lock_fn, 0, true, ::g::Uno::Graphics::Framebuffer_typeof(), 4, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Graphics::Format_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("Lock", NULL, (void*)FramebufferPool__Lock1_fn, 0, true, ::g::Uno::Graphics::Framebuffer_typeof(), 3, ::g::Uno::Int2_typeof(), ::g::Uno::Graphics::Format_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("Release", NULL, (void*)FramebufferPool__Release_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Graphics::Framebuffer_typeof()));
    return type;
}

// private static void EnsurePool() :1486
void FramebufferPool__EnsurePool_fn()
{
    FramebufferPool::EnsurePool();
}

// internal static int get_Frame() :1518
void FramebufferPool__get_Frame_fn(int* __retval)
{
    *__retval = FramebufferPool::Frame();
}

// public static framebuffer Lock(int width, int height, Uno.Graphics.Format format, bool depth) :1504
void FramebufferPool__Lock_fn(int* width, int* height, int* format, bool* depth, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = FramebufferPool::Lock(*width, *height, *format, *depth);
}

// public static framebuffer Lock(int2 size, Uno.Graphics.Format format, bool depth) :1500
void FramebufferPool__Lock1_fn(::g::Uno::Int2* size, int* format, bool* depth, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = FramebufferPool::Lock1(*size, *format, *depth);
}

// internal static void Register(Fuse.CacheFramebuffer cfb) :1488
void FramebufferPool__Register_fn(::g::Fuse::CacheFramebuffer* cfb)
{
    FramebufferPool::Register(cfb);
}

// public static void Release(framebuffer fb) :1510
void FramebufferPool__Release_fn(::g::Uno::Graphics::Framebuffer* fb)
{
    FramebufferPool::Release(fb);
}

// internal static void UnRegister(Fuse.CacheFramebuffer cfb) :1494
void FramebufferPool__UnRegister_fn(::g::Fuse::CacheFramebuffer* cfb)
{
    FramebufferPool::UnRegister(cfb);
}

uSStrong< ::g::Fuse::FramebufferPoolImpl*> FramebufferPool::framebufferPool_;

// private static void EnsurePool() [static] :1486
void FramebufferPool::EnsurePool()
{
    uStackFrame __("Fuse.FramebufferPool", "EnsurePool()");

    if (FramebufferPool::framebufferPool() == NULL)
        FramebufferPool::framebufferPool() = ::g::Fuse::FramebufferPoolImpl::New1();
}

// public static framebuffer Lock(int width, int height, Uno.Graphics.Format format, bool depth) [static] :1504
::g::Uno::Graphics::Framebuffer* FramebufferPool::Lock(int width, int height, int format, bool depth)
{
    uStackFrame __("Fuse.FramebufferPool", "Lock(int,int,Uno.Graphics.Format,bool)");
    FramebufferPool::EnsurePool();
    return uPtr(FramebufferPool::framebufferPool())->Lock(width, height, format, depth);
}

// public static framebuffer Lock(int2 size, Uno.Graphics.Format format, bool depth) [static] :1500
::g::Uno::Graphics::Framebuffer* FramebufferPool::Lock1(::g::Uno::Int2 size, int format, bool depth)
{
    uStackFrame __("Fuse.FramebufferPool", "Lock(int2,Uno.Graphics.Format,bool)");
    return FramebufferPool::Lock(size.X, size.Y, format, depth);
}

// internal static void Register(Fuse.CacheFramebuffer cfb) [static] :1488
void FramebufferPool::Register(::g::Fuse::CacheFramebuffer* cfb)
{
    uStackFrame __("Fuse.FramebufferPool", "Register(Fuse.CacheFramebuffer)");
    FramebufferPool::EnsurePool();
    uPtr(FramebufferPool::framebufferPool())->Register(cfb);
}

// public static void Release(framebuffer fb) [static] :1510
void FramebufferPool::Release(::g::Uno::Graphics::Framebuffer* fb)
{
    uStackFrame __("Fuse.FramebufferPool", "Release(framebuffer)");
    FramebufferPool::EnsurePool();
    uPtr(FramebufferPool::framebufferPool())->Release(fb);
}

// internal static void UnRegister(Fuse.CacheFramebuffer cfb) [static] :1494
void FramebufferPool::UnRegister(::g::Fuse::CacheFramebuffer* cfb)
{
    uStackFrame __("Fuse.FramebufferPool", "UnRegister(Fuse.CacheFramebuffer)");
    FramebufferPool::EnsurePool();
    uPtr(FramebufferPool::framebufferPool())->UnRegister(cfb);
}

// internal static int get_Frame() [static] :1518
int FramebufferPool::Frame()
{
    uStackFrame __("Fuse.FramebufferPool", "get_Frame()");
    FramebufferPool::EnsurePool();
    return uPtr(FramebufferPool::framebufferPool())->frame;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#11
// -------------------------------------------------------

// internal sealed class FramebufferPoolImpl :1527
// {
FramebufferPoolImpl_type* FramebufferPoolImpl_typeof()
{
    static uSStrong<FramebufferPoolImpl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FramebufferPoolImpl);
    options.TypeSize = sizeof(FramebufferPoolImpl_type);
    type = (FramebufferPoolImpl_type*)uClassType::New("Fuse.FramebufferPoolImpl", options);
    type->fp_ctor_ = (void*)FramebufferPoolImpl__New1_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))FramebufferPoolImpl__FuseResourcesISoftDisposableSoftDispose_fn;
    ::STRINGS[30] = uString::Const("Attempted to allocate ");
    ::STRINGS[31] = uString::Const("x");
    ::STRINGS[32] = uString::Const(" framebuffer, max is ");
    ::STRINGS[33] = uString::Const("framebuffer pinned while app going into the background");
    ::STRINGS[34] = uString::Const("Pool is leaking");
    ::TYPES[68] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Graphics::Framebuffer_typeof());
    ::TYPES[69] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Graphics::Framebuffer_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[70] = ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Uno::Graphics::Framebuffer_typeof());
    ::TYPES[71] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::CacheFramebuffer_typeof());
    ::TYPES[72] = ::g::Uno::Action_typeof();
    ::TYPES[73] = ::g::Fuse::Resources::ISoftDisposable_typeof();
    ::TYPES[74] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::CacheFramebuffer_typeof());
    ::TYPES[75] = ::g::Fuse::CacheFramebuffer_typeof();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[53] = ::g::Uno::Int2_typeof();
    ::TYPES[52] = ::g::Uno::Graphics::Framebuffer_typeof();
    ::TYPES[32] = ::g::Uno::Int_typeof();
    ::TYPES[76] = ::g::Uno::Graphics::Texture2D_typeof();
    ::TYPES[3] = uObject_typeof();
    type->SetInterfaces(
        ::g::Fuse::Resources::ISoftDisposable_typeof(), offsetof(FramebufferPoolImpl_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::CacheFramebuffer_typeof()), offsetof(::g::Fuse::FramebufferPoolImpl, cacheFramebuffers), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::FramebufferPoolImpl, frame), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Graphics::Framebuffer_typeof()), offsetof(::g::Fuse::FramebufferPoolImpl, framebufferPool), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::FramebufferPoolImpl, framebuffersProvidedSinceLastCollect), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Graphics::Framebuffer_typeof(), ::g::Uno::Int_typeof()), offsetof(::g::Fuse::FramebufferPoolImpl, lastFrameUsed), 0,
        ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Uno::Graphics::Framebuffer_typeof()), offsetof(::g::Fuse::FramebufferPoolImpl, lockedFramebuffers), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::FramebufferPoolImpl, pixelsProvidedSinceLastCollect), 0);
    return type;
}

// public FramebufferPoolImpl() :1529
void FramebufferPoolImpl__ctor__fn(FramebufferPoolImpl* __this)
{
    __this->ctor_();
}

// private void CollectCacheFramebuffers() :1616
void FramebufferPoolImpl__CollectCacheFramebuffers_fn(FramebufferPoolImpl* __this)
{
    __this->CollectCacheFramebuffers();
}

// private framebuffer FindBuffer(int width, int height, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) :1547
void FramebufferPoolImpl__FindBuffer_fn(FramebufferPoolImpl* __this, int* width, int* height, int* format, int* flags, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->FindBuffer(*width, *height, *format, *flags);
}

// private void Fuse.Resources.ISoftDisposable.SoftDispose() :1648
void FramebufferPoolImpl__FuseResourcesISoftDisposableSoftDispose_fn(FramebufferPoolImpl* __this)
{
    uStackFrame __("Fuse.FramebufferPoolImpl", "Fuse.Resources.ISoftDisposable.SoftDispose()");
    ::g::Fuse::CacheFramebuffer* ret7;
    ::g::Uno::Graphics::Framebuffer* ret8;
    bool ret9;

    for (int i = 0; i < uPtr(__this->cacheFramebuffers)->Count(); i++)
    {
        ::g::Fuse::CacheFramebuffer* c = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->cacheFramebuffers), uCRef<int>(i), &ret7), ret7);

        if (uPtr(c)->IsPinned())
            U_THROW(::g::Uno::Exception::New2(::STRINGS[33/*"framebuffer...*/]));

        uPtr(c)->Collect();
        uPtr(__this->cacheFramebuffers)->RemoveAt(i--);
    }

    for (int i1 = 0; i1 < uPtr(__this->framebufferPool)->Count(); i1++)
    {
        ::g::Uno::Graphics::Framebuffer* fb = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->framebufferPool), uCRef<int>(i1), &ret8), ret8);
        uPtr(fb)->Dispose();
        uPtr(__this->framebufferPool)->RemoveAt(i1--);
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(__this->lastFrameUsed), fb, &ret9);
    }
}

// internal framebuffer Lock(int width, int height, Uno.Graphics.Format format, bool depth) :1670
void FramebufferPoolImpl__Lock_fn(FramebufferPoolImpl* __this, int* width, int* height, int* format, bool* depth, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->Lock(*width, *height, *format, *depth);
}

// public FramebufferPoolImpl New() :1529
void FramebufferPoolImpl__New1_fn(FramebufferPoolImpl** __retval)
{
    *__retval = FramebufferPoolImpl::New1();
}

// internal void Register(Fuse.CacheFramebuffer cfb) :1588
void FramebufferPoolImpl__Register_fn(FramebufferPoolImpl* __this, ::g::Fuse::CacheFramebuffer* cfb)
{
    __this->Register(cfb);
}

// internal void Release(framebuffer fb) :1678
void FramebufferPoolImpl__Release_fn(FramebufferPoolImpl* __this, ::g::Uno::Graphics::Framebuffer* fb)
{
    __this->Release(fb);
}

// internal void UnRegister(Fuse.CacheFramebuffer cfb) :1609
void FramebufferPoolImpl__UnRegister_fn(FramebufferPoolImpl* __this, ::g::Fuse::CacheFramebuffer* cfb)
{
    __this->UnRegister(cfb);
}

// public void Update() :1688
void FramebufferPoolImpl__Update_fn(FramebufferPoolImpl* __this)
{
    __this->Update();
}

// public FramebufferPoolImpl() [instance] :1529
void FramebufferPoolImpl::ctor_()
{
    uStackFrame __("Fuse.FramebufferPoolImpl", ".ctor()");
    framebufferPool = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[68/*Uno.Collections.List<framebuffer>*/]));
    lastFrameUsed = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[69/*Uno.Collections.Dictionary<framebuffer, int>*/]));
    lockedFramebuffers = ((::g::Uno::Collections::HashSet*)::g::Uno::Collections::HashSet::New1(::TYPES[70/*Uno.Collections.HashSet<framebuffer>*/]));
    cacheFramebuffers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[71/*Uno.Collections.List<Fuse.CacheFramebuffer>*/]));
    ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[72/*Uno.Action*/], (void*)FramebufferPoolImpl__Update_fn, this), 0);
    ::g::Fuse::Resources::DisposalManager::Add1((uObject*)this);
}

// private void CollectCacheFramebuffers() [instance] :1616
void FramebufferPoolImpl::CollectCacheFramebuffers()
{
    uStackFrame __("Fuse.FramebufferPoolImpl", "CollectCacheFramebuffers()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::CacheFramebuffer*> > ret3;
    ::g::Fuse::CacheFramebuffer* ret4;

    if (uPtr(cacheFramebuffers)->Count() < 3)
        return;

    int sum = 0;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::CacheFramebuffer*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(cacheFramebuffers), &ret3), ret3); enum1.MoveNext(::TYPES[74/*Uno.Collections.List<Fuse.CacheFramebuffer>.Enumerator*/]); )
    {
        ::g::Fuse::CacheFramebuffer* cfb = enum1.Current(::TYPES[74/*Uno.Collections.List<Fuse.CacheFramebuffer>.Enumerator*/]);
        sum = sum + uPtr(cfb)->FramesSinceLastUse();
    }

    int avg = sum / uPtr(cacheFramebuffers)->Count();
    int limit = avg + 3;

    for (int i = 0; i < uPtr(cacheFramebuffers)->Count(); i++)
    {
        ::g::Fuse::CacheFramebuffer* c = (::g::Uno::Collections::List__get_Item_fn(uPtr(cacheFramebuffers), uCRef<int>(i), &ret4), ret4);

        if (!uPtr(c)->IsPinned() && (uPtr(c)->FramesSinceLastUse() >= limit))
        {
            uPtr(c)->Collect();
            uPtr(cacheFramebuffers)->RemoveAt(i--);
        }
    }

    framebuffersProvidedSinceLastCollect = 0;
    pixelsProvidedSinceLastCollect = 0;
}

// private framebuffer FindBuffer(int width, int height, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) [instance] :1547
::g::Uno::Graphics::Framebuffer* FramebufferPoolImpl::FindBuffer(int width, int height, int format, int flags)
{
    uStackFrame __("Fuse.FramebufferPoolImpl", "FindBuffer(int,int,Uno.Graphics.Format,Uno.Graphics.FramebufferFlags)");
    ::g::Uno::Graphics::Framebuffer* ret5;
    bool ret6;
    width = ::g::Uno::Math::Max8(1, width);
    height = ::g::Uno::Math::Max8(1, height);

    for (int i = 0; i < uPtr(framebufferPool)->Count(); i++)
    {
        ::g::Uno::Graphics::Framebuffer* fb = (::g::Uno::Collections::List__get_Item_fn(uPtr(framebufferPool), uCRef<int>(i), &ret5), ret5);

        if (uPtr(fb)->Size().X != width)
            continue;

        if (uPtr(fb)->Size().Y != height)
            continue;

        if (uPtr(fb)->Format() != format)
            continue;

        if (uPtr(fb)->HasDepth() != ((flags & 1) == 1))
            continue;

        if (uPtr(fb)->SupportsMipmap() != ((flags & 2) == 2))
            continue;

        uPtr(framebufferPool)->RemoveAt(i);
        ::g::Uno::Collections::HashSet__Add_fn(uPtr(lockedFramebuffers), fb, &ret6);
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(lastFrameUsed), fb, uCRef<int>(frame));
        return fb;
    }

    int maxSize = ::g::Uno::Graphics::Texture2D::MaxSize();

    if ((width > maxSize) || (height > maxSize))
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[30/*"Attempted t...*/], uBox<int>(::TYPES[32/*int*/], width)), ::STRINGS[31/*"x"*/]), uBox<int>(::TYPES[32/*int*/], height)), ::STRINGS[32/*" framebuffe...*/]), uBox<int>(::TYPES[32/*int*/], maxSize)), ::STRINGS[31/*"x"*/]), uBox<int>(::TYPES[32/*int*/], maxSize))));

    double t = 0.0;
    ::g::Uno::Graphics::Framebuffer* buffer = ::g::Uno::Graphics::Framebuffer::New1(::g::Uno::Int2__New2(width, height), format, flags);
    return buffer;
}

// internal framebuffer Lock(int width, int height, Uno.Graphics.Format format, bool depth) [instance] :1670
::g::Uno::Graphics::Framebuffer* FramebufferPoolImpl::Lock(int width, int height, int format, bool depth)
{
    uStackFrame __("Fuse.FramebufferPoolImpl", "Lock(int,int,Uno.Graphics.Format,bool)");
    bool ret10;
    ::g::Uno::Graphics::Framebuffer* fb = FindBuffer(width, height, format, depth ? 1 : 0);
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(lastFrameUsed), fb, uCRef<int>(frame));
    ::g::Uno::Collections::HashSet__Add_fn(uPtr(lockedFramebuffers), fb, &ret10);
    return fb;
}

// internal void Register(Fuse.CacheFramebuffer cfb) [instance] :1588
void FramebufferPoolImpl::Register(::g::Fuse::CacheFramebuffer* cfb)
{
    uStackFrame __("Fuse.FramebufferPoolImpl", "Register(Fuse.CacheFramebuffer)");
    framebuffersProvidedSinceLastCollect = (framebuffersProvidedSinceLastCollect + 1);
    pixelsProvidedSinceLastCollect = (pixelsProvidedSinceLastCollect + (uPtr(cfb)->Width() * uPtr(cfb)->Height()));
    ::g::Uno::Collections::List__Add_fn(uPtr(cacheFramebuffers), cfb);

    if (pixelsProvidedSinceLastCollect > 1000000)
        CollectCacheFramebuffers();
    else if (framebuffersProvidedSinceLastCollect > 50)
        CollectCacheFramebuffers();
}

// internal void Release(framebuffer fb) [instance] :1678
void FramebufferPoolImpl::Release(::g::Uno::Graphics::Framebuffer* fb)
{
    uStackFrame __("Fuse.FramebufferPoolImpl", "Release(framebuffer)");
    bool ret11;
    bool ret12;

    if ((::g::Uno::Collections::HashSet__Contains_fn(uPtr(lockedFramebuffers), fb, &ret11), ret11))
    {
        ::g::Uno::Collections::HashSet__Remove_fn(uPtr(lockedFramebuffers), fb, &ret12);
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(lastFrameUsed), fb, uCRef<int>(frame));
        ::g::Uno::Collections::List__Add_fn(uPtr(framebufferPool), fb);
    }
}

// internal void UnRegister(Fuse.CacheFramebuffer cfb) [instance] :1609
void FramebufferPoolImpl::UnRegister(::g::Fuse::CacheFramebuffer* cfb)
{
    uStackFrame __("Fuse.FramebufferPoolImpl", "UnRegister(Fuse.CacheFramebuffer)");
    bool ret13;
    framebuffersProvidedSinceLastCollect = 0;
    ::g::Uno::Collections::List__Remove_fn(uPtr(cacheFramebuffers), cfb, &ret13);
}

// public void Update() [instance] :1688
void FramebufferPoolImpl::Update()
{
    uStackFrame __("Fuse.FramebufferPoolImpl", "Update()");
    ::g::Uno::Graphics::Framebuffer* ret14;
    bool ret15;
    bool ret16;
    bool contextBound = false;
    frame++;

    for (int i = 0; i < uPtr(framebufferPool)->Count(); i++)
    {
        ::g::Uno::Graphics::Framebuffer* fb = (::g::Uno::Collections::List__get_Item_fn(uPtr(framebufferPool), uCRef<int>(i), &ret14), ret14);
        int framesSinceUse;
        ::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(lastFrameUsed), fb, &framesSinceUse, &ret15);
        framesSinceUse = frame - framesSinceUse;

        if (framesSinceUse < 0)
            U_THROW(::g::Uno::Exception::New2(::STRINGS[34/*"Pool is lea...*/]));

        if (framesSinceUse > 1)
        {
            uPtr(fb)->Dispose();
            uPtr(framebufferPool)->RemoveAt(i--);
            ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(lastFrameUsed), fb, &ret16);
        }
    }
}

// public FramebufferPoolImpl New() [static] :1529
FramebufferPoolImpl* FramebufferPoolImpl::New1()
{
    FramebufferPoolImpl* obj2 = (FramebufferPoolImpl*)uNew(FramebufferPoolImpl_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#16
// -------------------------------------------------------

// internal sealed class FrustumViewport :1986
// {
uType* FrustumViewport_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(FrustumViewport);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FrustumViewport", options);
    type->fp_ctor_ = (void*)FrustumViewport__New1_fn;
    ::TYPES[77] = ::g::Uno::Float2_typeof();
    ::TYPES[42] = ::g::Fuse::IViewport_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[78] = ::g::Uno::Geometry::Ray_typeof();
    type->SetFields(0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::FrustumViewport, ProjectionTransform), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::FrustumViewport, ProjectionTransformInverse), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::FrustumViewport, ViewProjectionTransform), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::FrustumViewport, ViewProjectionTransformInverse), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::FrustumViewport, ViewTransform), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::FrustumViewport, ViewTransformInverse), 0);
    return type;
}

// public generated FrustumViewport() :1986
void FrustumViewport__ctor__fn(FrustumViewport* __this)
{
    __this->ctor_();
}

// public generated FrustumViewport New() :1986
void FrustumViewport__New1_fn(FrustumViewport** __retval)
{
    *__retval = FrustumViewport::New1();
}

// public static Uno.Geometry.Ray PointToWorldRay(Fuse.IViewport viewport, float2 pointPos) :2006
void FrustumViewport__PointToWorldRay_fn(uObject* viewport, ::g::Uno::Float2* pointPos, ::g::Uno::Geometry::Ray* __retval)
{
    *__retval = FrustumViewport::PointToWorldRay(viewport, *pointPos);
}

// public void Update(Fuse.IViewport viewport, Fuse.IFrustum frustum) :1995
void FrustumViewport__Update_fn(FrustumViewport* __this, uObject* viewport, uObject* frustum)
{
    __this->Update(viewport, frustum);
}

// public static Uno.Geometry.Ray WorldToLocalRay(Fuse.IViewport viewport, Fuse.Node where, Uno.Geometry.Ray world) :2018
void FrustumViewport__WorldToLocalRay_fn(uObject* viewport, ::g::Fuse::Node* where, ::g::Uno::Geometry::Ray* world, ::g::Uno::Geometry::Ray* __retval)
{
    *__retval = FrustumViewport::WorldToLocalRay(viewport, where, *world);
}

// public generated FrustumViewport() [instance] :1986
void FrustumViewport::ctor_()
{
}

// public void Update(Fuse.IViewport viewport, Fuse.IFrustum frustum) [instance] :1995
void FrustumViewport::Update(uObject* viewport, uObject* frustum)
{
    uStackFrame __("Fuse.FrustumViewport", "Update(Fuse.IViewport,Fuse.IFrustum)");
    ProjectionTransform = ::g::Fuse::IFrustum::GetProjectionTransform(uInterface(uPtr(frustum), ::TYPES[159/*Fuse.IFrustum*/]), viewport);
    ProjectionTransformInverse = ::g::Fuse::IFrustum::GetProjectionTransformInverse(uInterface(frustum, ::TYPES[159/*Fuse.IFrustum*/]), viewport);
    ViewTransform = ::g::Fuse::IFrustum::GetViewTransform(uInterface(frustum, ::TYPES[159/*Fuse.IFrustum*/]), viewport);
    ViewTransformInverse = ::g::Fuse::IFrustum::GetViewTransformInverse(uInterface(frustum, ::TYPES[159/*Fuse.IFrustum*/]), viewport);
    ViewProjectionTransform = ::g::Uno::Matrix::Mul8(ViewTransform, ProjectionTransform);
    ViewProjectionTransformInverse = ::g::Uno::Matrix::Mul8(ProjectionTransformInverse, ViewTransformInverse);
}

// public generated FrustumViewport New() [static] :1986
FrustumViewport* FrustumViewport::New1()
{
    FrustumViewport* obj1 = (FrustumViewport*)uNew(FrustumViewport_typeof());
    obj1->ctor_();
    return obj1;
}

// public static Uno.Geometry.Ray PointToWorldRay(Fuse.IViewport viewport, float2 pointPos) [static] :2006
::g::Uno::Geometry::Ray FrustumViewport::PointToWorldRay(uObject* viewport, ::g::Uno::Float2 pointPos)
{
    uStackFrame __("Fuse.FrustumViewport", "PointToWorldRay(Fuse.IViewport,float2)");
    ::g::Uno::Float2 p = ::g::Uno::Float2__New2(((pointPos.X / ::g::Fuse::IViewport::Size(uInterface(uPtr(viewport), ::TYPES[42/*Fuse.IViewport*/])).X) * 2.0f) - 1.0f, ((pointPos.Y / ::g::Fuse::IViewport::Size(uInterface(uPtr(viewport), ::TYPES[42/*Fuse.IViewport*/])).Y) * -2.0f) + 1.0f);
    ::g::Uno::Float4x4 vpi = ::g::Fuse::IViewport::ViewProjectionTransformInverse(uInterface(viewport, ::TYPES[42/*Fuse.IViewport*/]));
    ::g::Uno::Float3 r0 = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__New4(p, -1.0f), vpi);
    ::g::Uno::Float3 r1 = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__New4(p, 1.0f), vpi);
    return ::g::Uno::Geometry::Ray__New1(r0, ::g::Uno::Vector::Normalize1(::g::Uno::Float3__op_Subtraction2(r1, r0)));
}

// public static Uno.Geometry.Ray WorldToLocalRay(Fuse.IViewport viewport, Fuse.Node where, Uno.Geometry.Ray world) [static] :2018
::g::Uno::Geometry::Ray FrustumViewport::WorldToLocalRay(uObject* viewport, ::g::Fuse::Node* where, ::g::Uno::Geometry::Ray world)
{
    uStackFrame __("Fuse.FrustumViewport", "WorldToLocalRay(Fuse.IViewport,Fuse.Node,Uno.Geometry.Ray)");
    ::g::Uno::Float4x4 wi = uPtr(where)->WorldTransformInverse();
    ::g::Uno::Float3 r0 = ::g::Uno::Vector::TransformCoordinate1(world.Position, wi);
    ::g::Uno::Float3 r1 = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__op_Addition2(world.Position, world.Direction), wi);
    return ::g::Uno::Geometry::Ray__New1(r0, ::g::Uno::Vector::Normalize1(::g::Uno::Float3__op_Subtraction2(r1, r0)));
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#47
// -------------------------------------------------------

// public class GraphicsTheme :6794
// {
::g::Fuse::Style_type* GraphicsTheme_typeof()
{
    static uSStrong< ::g::Fuse::Style_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GraphicsTheme);
    options.TypeSize = sizeof(::g::Fuse::Style_type);
    type = (::g::Fuse::Style_type*)uClassType::New("Fuse.GraphicsTheme", options);
    type->SetBase(::g::Fuse::Theme_typeof());
    type->fp_ctor_ = (void*)GraphicsTheme__New2_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Style__Apply_fn;
    ::TYPES[79] = ::g::Fuse::Theme_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Fuse::Style_type, interface0));
    type->SetFields(6,
        ::g::Fuse::Theme_typeof(), (uintptr_t)&::g::Fuse::GraphicsTheme::_singleton_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)GraphicsTheme__New2_fn, 0, true, GraphicsTheme_typeof(), 0),
        new uFunction("get_Singleton", NULL, (void*)GraphicsTheme__get_Singleton_fn, 0, true, ::g::Fuse::Theme_typeof(), 0));
    return type;
}

// public generated GraphicsTheme() :6794
void GraphicsTheme__ctor_3_fn(GraphicsTheme* __this)
{
    __this->ctor_3();
}

// public generated GraphicsTheme New() :6794
void GraphicsTheme__New2_fn(GraphicsTheme** __retval)
{
    *__retval = GraphicsTheme::New2();
}

// public static Fuse.Theme get_Singleton() :6800
void GraphicsTheme__get_Singleton_fn(::g::Fuse::Theme** __retval)
{
    *__retval = GraphicsTheme::Singleton();
}

uSStrong< ::g::Fuse::Theme*> GraphicsTheme::_singleton_;

// public generated GraphicsTheme() [instance] :6794
void GraphicsTheme::ctor_3()
{
    uStackFrame __("Fuse.GraphicsTheme", ".ctor()");
    ctor_1();
}

// public generated GraphicsTheme New() [static] :6794
GraphicsTheme* GraphicsTheme::New2()
{
    GraphicsTheme* obj1 = (GraphicsTheme*)uNew(GraphicsTheme_typeof());
    obj1->ctor_3();
    return obj1;
}

// public static Fuse.Theme get_Singleton() [static] :6800
::g::Fuse::Theme* GraphicsTheme::Singleton()
{
    uStackFrame __("Fuse.GraphicsTheme", "get_Singleton()");

    if (GraphicsTheme::_singleton() == NULL)
        GraphicsTheme::_singleton() = GraphicsTheme::New2();

    return GraphicsTheme::_singleton();
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#12
// -------------------------------------------------------

// public static class GraphicsWorker :1747
// {
uClassType* GraphicsWorker_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.GraphicsWorker", options);
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[72] = ::g::Uno::Action_typeof();
    ::TYPES[80] = ::g::Uno::Platform::Window_typeof();
    ::TYPES[9] = ::g::Uno::Application_typeof();
    ::TYPES[21] = ::g::Uno::EventHandler_typeof();
    ::TYPES[81] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Action_typeof());
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::GraphicsWorker::_terminating_, uFieldFlagsStatic,
        ::g::Uno::Threading::Thread_typeof(), (uintptr_t)&::g::Fuse::GraphicsWorker::_thread_, uFieldFlagsStatic,
        ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Action_typeof()), (uintptr_t)&::g::Fuse::GraphicsWorker::_work_, uFieldFlagsStatic,
        ::g::iOS::OpenGLES::EAGLContext_typeof(), (uintptr_t)&::g::Fuse::GraphicsWorker::_workerContext_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction("Dispatch", NULL, (void*)GraphicsWorker__Dispatch_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Action_typeof()));
    return type;
}

// public static void Dispatch(Uno.Action a) :1749
void GraphicsWorker__Dispatch_fn(uDelegate* a)
{
    GraphicsWorker::Dispatch(a);
}

// private static void OnWindowClosed(object sender, Uno.EventArgs args) :1790
void GraphicsWorker__OnWindowClosed_fn(uObject* sender, ::g::Uno::EventArgs* args)
{
    GraphicsWorker::OnWindowClosed(sender, args);
}

// private static void Run() :1796
void GraphicsWorker__Run_fn()
{
    GraphicsWorker::Run();
}

// private static void Start() :1771
void GraphicsWorker__Start_fn()
{
    GraphicsWorker::Start();
}

bool GraphicsWorker::_terminating_;
uSStrong< ::g::Uno::Threading::Thread*> GraphicsWorker::_thread_;
uSStrong< ::g::Uno::Threading::ConcurrentQueue*> GraphicsWorker::_work_;
uSStrong< ::g::iOS::OpenGLES::EAGLContext*> GraphicsWorker::_workerContext_;

// public static void Dispatch(Uno.Action a) [static] :1749
void GraphicsWorker::Dispatch(uDelegate* a)
{
    uStackFrame __("Fuse.GraphicsWorker", "Dispatch(Uno.Action)");
    GraphicsWorker::Start();
    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(GraphicsWorker::_work()), a);
}

// private static void OnWindowClosed(object sender, Uno.EventArgs args) [static] :1790
void GraphicsWorker::OnWindowClosed(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.GraphicsWorker", "OnWindowClosed(object,Uno.EventArgs)");
    GraphicsWorker::_terminating() = true;
    uPtr(GraphicsWorker::_thread())->Join();
}

// private static void Run() [static] :1796
void GraphicsWorker::Run()
{
    uStackFrame __("Fuse.GraphicsWorker", "Run()");
    bool ret1;
    ::g::iOS::OpenGLES::EAGLContext::_setCurrentContext(GraphicsWorker::_workerContext());

    while (!GraphicsWorker::_terminating())
    {
        uAutoReleasePool ____pool;
        uDelegate* a;

        if ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(GraphicsWorker::_work()), (void**)(&a), &ret1), ret1))
        {
            uPtr(a)->InvokeVoid();
            continue;
        }

        ::g::Uno::Threading::Thread::Sleep(1);
    }
}

// private static void Start() [static] :1771
void GraphicsWorker::Start()
{
    uStackFrame __("Fuse.GraphicsWorker", "Start()");

    if (GraphicsWorker::_thread() != NULL)
        return;

    uPtr(uPtr(::g::Uno::Application::Current())->Window())->add_Closed(uDelegate::New(::TYPES[21/*Uno.EventHandler*/], (void*)GraphicsWorker__OnWindowClosed_fn));
    GraphicsWorker::_workerContext() = ::g::iOS::OpenGLES::EAGLContext::New5();
    uPtr(GraphicsWorker::_workerContext())->initWithAPISharegroup(2, uPtr(::g::iOS::OpenGLES::EAGLContext::_currentContext())->sharegroup());
    GraphicsWorker::_work() = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[81/*Uno.Threading.ConcurrentQueue<Uno.Action>*/]));
    GraphicsWorker::_thread() = ::g::Uno::Threading::Thread::Create(uDelegate::New(::TYPES[72/*Uno.Action*/], (void*)GraphicsWorker__Run_fn));
    uPtr(GraphicsWorker::_thread())->Start();
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#14
// -------------------------------------------------------

// public delegate void HitTestCallback(Fuse.HitTestResult result) :1851
uDelegateType* HitTestCallback_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.HitTestCallback", 1, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Fuse::HitTestResult_typeof());
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#14
// -------------------------------------------------------

// public sealed class HitTestContext :1861
// {
uType* HitTestContext_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(HitTestContext);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.HitTestContext", options);
    ::TYPES[26] = ::g::Uno::Delegate_typeof();
    ::TYPES[82] = ::g::Fuse::HitTestCallback_typeof();
    ::TYPES[83] = ::g::Fuse::HitTestResult_typeof();
    type->SetFields(0,
        ::g::Fuse::HitTestCallback_typeof(), offsetof(::g::Fuse::HitTestContext, _callback), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::HitTestContext, _localPoint), 0,
        ::g::Uno::Geometry::Ray_typeof(), offsetof(::g::Fuse::HitTestContext, _worldRay), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::HitTestContext, _WindowPoint), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("get_Callback", NULL, (void*)HitTestContext__get_Callback_fn, 0, false, ::g::Fuse::HitTestCallback_typeof(), 0),
        new uFunction("Dispose", NULL, (void*)HitTestContext__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Hit", NULL, (void*)HitTestContext__Hit_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("Hit", NULL, (void*)HitTestContext__Hit1_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("get_LocalPoint", NULL, (void*)HitTestContext__get_LocalPoint_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)HitTestContext__New1_fn, 0, true, HitTestContext_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Fuse::HitTestCallback_typeof()),
        new uFunction("PopLocalPoint", NULL, (void*)HitTestContext__PopLocalPoint_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("PopWorldRay", NULL, (void*)HitTestContext__PopWorldRay_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Geometry::Ray_typeof()),
        new uFunction("PushLocalPoint", NULL, (void*)HitTestContext__PushLocalPoint_fn, 0, false, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("PushWorldRay", NULL, (void*)HitTestContext__PushWorldRay_fn, 0, false, ::g::Uno::Geometry::Ray_typeof(), 1, ::g::Uno::Geometry::Ray_typeof()),
        new uFunction("get_WindowPoint", NULL, (void*)HitTestContext__get_WindowPoint_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_WorldRay", NULL, (void*)HitTestContext__get_WorldRay_fn, 0, false, ::g::Uno::Geometry::Ray_typeof(), 0));
    return type;
}

// public HitTestContext(float2 windowPoint, Fuse.HitTestCallback callback) :1923
void HitTestContext__ctor__fn(HitTestContext* __this, ::g::Uno::Float2* windowPoint, uDelegate* callback)
{
    __this->ctor_(*windowPoint, callback);
}

// public Fuse.HitTestCallback get_Callback() :1898
void HitTestContext__get_Callback_fn(HitTestContext* __this, uDelegate** __retval)
{
    *__retval = __this->Callback();
}

// public void Dispose() :1930
void HitTestContext__Dispose_fn(HitTestContext* __this)
{
    __this->Dispose();
}

// public void Hit(Fuse.Node obj) :1901
void HitTestContext__Hit_fn(HitTestContext* __this, ::g::Fuse::Node* obj)
{
    __this->Hit(obj);
}

// public void Hit(Fuse.Node obj, float hitDistance) :1911
void HitTestContext__Hit1_fn(HitTestContext* __this, ::g::Fuse::Node* obj, float* hitDistance)
{
    __this->Hit1(obj, *hitDistance);
}

// public float2 get_LocalPoint() :1866
void HitTestContext__get_LocalPoint_fn(HitTestContext* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->LocalPoint();
}

// public HitTestContext New(float2 windowPoint, Fuse.HitTestCallback callback) :1923
void HitTestContext__New1_fn(::g::Uno::Float2* windowPoint, uDelegate* callback, HitTestContext** __retval)
{
    *__retval = HitTestContext::New1(*windowPoint, callback);
}

// public void PopLocalPoint(float2 lp) :1875
void HitTestContext__PopLocalPoint_fn(HitTestContext* __this, ::g::Uno::Float2* lp)
{
    __this->PopLocalPoint(*lp);
}

// public void PopWorldRay(Uno.Geometry.Ray o) :1890
void HitTestContext__PopWorldRay_fn(HitTestContext* __this, ::g::Uno::Geometry::Ray* o)
{
    __this->PopWorldRay(*o);
}

// public float2 PushLocalPoint(float2 lp) :1868
void HitTestContext__PushLocalPoint_fn(HitTestContext* __this, ::g::Uno::Float2* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PushLocalPoint(*lp);
}

// public Uno.Geometry.Ray PushWorldRay(Uno.Geometry.Ray n) :1883
void HitTestContext__PushWorldRay_fn(HitTestContext* __this, ::g::Uno::Geometry::Ray* n, ::g::Uno::Geometry::Ray* __retval)
{
    *__retval = __this->PushWorldRay(*n);
}

// public generated float2 get_WindowPoint() :1863
void HitTestContext__get_WindowPoint_fn(HitTestContext* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->WindowPoint();
}

// private generated void set_WindowPoint(float2 value) :1863
void HitTestContext__set_WindowPoint_fn(HitTestContext* __this, ::g::Uno::Float2* value)
{
    __this->WindowPoint(*value);
}

// public Uno.Geometry.Ray get_WorldRay() :1881
void HitTestContext__get_WorldRay_fn(HitTestContext* __this, ::g::Uno::Geometry::Ray* __retval)
{
    *__retval = __this->WorldRay();
}

// public HitTestContext(float2 windowPoint, Fuse.HitTestCallback callback) [instance] :1923
void HitTestContext::ctor_(::g::Uno::Float2 windowPoint, uDelegate* callback)
{
    uStackFrame __("Fuse.HitTestContext", ".ctor(float2,Fuse.HitTestCallback)");
    WindowPoint(windowPoint);
    _localPoint = windowPoint;
    _callback = callback;
}

// public Fuse.HitTestCallback get_Callback() [instance] :1898
uDelegate* HitTestContext::Callback()
{
    uStackFrame __("Fuse.HitTestContext", "get_Callback()");
    return _callback;
}

// public void Dispose() [instance] :1930
void HitTestContext::Dispose()
{
    uStackFrame __("Fuse.HitTestContext", "Dispose()");
    _callback = NULL;
}

// public void Hit(Fuse.Node obj) [instance] :1901
void HitTestContext::Hit(::g::Fuse::Node* obj)
{
    uStackFrame __("Fuse.HitTestContext", "Hit(Fuse.Node)");
    ::g::Fuse::HitTestResult* collection1;

    if (::g::Uno::Delegate::op_Inequality(Callback(), NULL))
        uPtr(Callback())->InvokeVoid((collection1 = ::g::Fuse::HitTestResult::New1(), uPtr(collection1)->HitObject(obj), obj, collection1));
}

// public void Hit(Fuse.Node obj, float hitDistance) [instance] :1911
void HitTestContext::Hit1(::g::Fuse::Node* obj, float hitDistance)
{
    uStackFrame __("Fuse.HitTestContext", "Hit(Fuse.Node,float)");
    ::g::Fuse::HitTestResult* collection2;

    if (::g::Uno::Delegate::op_Inequality(Callback(), NULL))
        uPtr(Callback())->InvokeVoid((collection2 = ::g::Fuse::HitTestResult::New1(), uPtr(collection2)->HitObject(obj), obj, uPtr(collection2)->HasHitDistance(true), true, uPtr(collection2)->HitDistance(hitDistance), hitDistance, collection2));
}

// public float2 get_LocalPoint() [instance] :1866
::g::Uno::Float2 HitTestContext::LocalPoint()
{
    uStackFrame __("Fuse.HitTestContext", "get_LocalPoint()");
    return _localPoint;
}

// public void PopLocalPoint(float2 lp) [instance] :1875
void HitTestContext::PopLocalPoint(::g::Uno::Float2 lp)
{
    uStackFrame __("Fuse.HitTestContext", "PopLocalPoint(float2)");
    _localPoint = lp;
}

// public void PopWorldRay(Uno.Geometry.Ray o) [instance] :1890
void HitTestContext::PopWorldRay(::g::Uno::Geometry::Ray o)
{
    uStackFrame __("Fuse.HitTestContext", "PopWorldRay(Uno.Geometry.Ray)");
    _worldRay = o;
}

// public float2 PushLocalPoint(float2 lp) [instance] :1868
::g::Uno::Float2 HitTestContext::PushLocalPoint(::g::Uno::Float2 lp)
{
    uStackFrame __("Fuse.HitTestContext", "PushLocalPoint(float2)");
    ::g::Uno::Float2 r = _localPoint;
    _localPoint = lp;
    return r;
}

// public Uno.Geometry.Ray PushWorldRay(Uno.Geometry.Ray n) [instance] :1883
::g::Uno::Geometry::Ray HitTestContext::PushWorldRay(::g::Uno::Geometry::Ray n)
{
    uStackFrame __("Fuse.HitTestContext", "PushWorldRay(Uno.Geometry.Ray)");
    ::g::Uno::Geometry::Ray r = _worldRay;
    _worldRay = n;
    return r;
}

// public generated float2 get_WindowPoint() [instance] :1863
::g::Uno::Float2 HitTestContext::WindowPoint()
{
    uStackFrame __("Fuse.HitTestContext", "get_WindowPoint()");
    return _WindowPoint;
}

// private generated void set_WindowPoint(float2 value) [instance] :1863
void HitTestContext::WindowPoint(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.HitTestContext", "set_WindowPoint(float2)");
    _WindowPoint = value;
}

// public Uno.Geometry.Ray get_WorldRay() [instance] :1881
::g::Uno::Geometry::Ray HitTestContext::WorldRay()
{
    uStackFrame __("Fuse.HitTestContext", "get_WorldRay()");
    return _worldRay;
}

// public HitTestContext New(float2 windowPoint, Fuse.HitTestCallback callback) [static] :1923
HitTestContext* HitTestContext::New1(::g::Uno::Float2 windowPoint, uDelegate* callback)
{
    HitTestContext* obj3 = (HitTestContext*)uNew(HitTestContext_typeof());
    obj3->ctor_(windowPoint, callback);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#5
// ------------------------------------------------------

// public delegate void HitTestHandler(object sender, Fuse.HitTestContext htc) :616
uDelegateType* HitTestHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.HitTestHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::HitTestContext_typeof());
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#24
// -------------------------------------------------------

// private sealed class Node.HitTestRecord :3074
// {
uType* Node__HitTestRecord_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Node__HitTestRecord);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Node.HitTestRecord", options);
    type->fp_ctor_ = (void*)Node__HitTestRecord__New1_fn;
    ::TYPES[83] = ::g::Fuse::HitTestResult_typeof();
    type->SetFields(0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Node__HitTestRecord, Node), 0);
    return type;
}

// public generated HitTestRecord() :3074
void Node__HitTestRecord__ctor__fn(Node__HitTestRecord* __this)
{
    __this->ctor_();
}

// public void HitTestCallback(Fuse.HitTestResult result) :3077
void Node__HitTestRecord__HitTestCallback_fn(Node__HitTestRecord* __this, ::g::Fuse::HitTestResult* result)
{
    __this->HitTestCallback(result);
}

// public generated HitTestRecord New() :3074
void Node__HitTestRecord__New1_fn(Node__HitTestRecord** __retval)
{
    *__retval = Node__HitTestRecord::New1();
}

// public generated HitTestRecord() [instance] :3074
void Node__HitTestRecord::ctor_()
{
}

// public void HitTestCallback(Fuse.HitTestResult result) [instance] :3077
void Node__HitTestRecord::HitTestCallback(::g::Fuse::HitTestResult* result)
{
    uStackFrame __("Fuse.Node.HitTestRecord", "HitTestCallback(Fuse.HitTestResult)");

    if (Node == NULL)
        Node = uPtr(result)->HitObject();
}

// public generated HitTestRecord New() [static] :3074
Node__HitTestRecord* Node__HitTestRecord::New1()
{
    Node__HitTestRecord* obj1 = (Node__HitTestRecord*)uNew(Node__HitTestRecord_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#14
// -------------------------------------------------------

// public sealed class HitTestResult :1854
// {
uType* HitTestResult_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(HitTestResult);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.HitTestResult", options);
    type->fp_ctor_ = (void*)HitTestResult__New1_fn;
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::HitTestResult, _HasHitDistance), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::HitTestResult, _HitDistance), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::HitTestResult, _HitObject), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_HasHitDistance", NULL, (void*)HitTestResult__get_HasHitDistance_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HitDistance", NULL, (void*)HitTestResult__get_HitDistance_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("get_HitObject", NULL, (void*)HitTestResult__get_HitObject_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)HitTestResult__New1_fn, 0, true, HitTestResult_typeof(), 0));
    return type;
}

// public generated HitTestResult() :1854
void HitTestResult__ctor__fn(HitTestResult* __this)
{
    __this->ctor_();
}

// public generated bool get_HasHitDistance() :1856
void HitTestResult__get_HasHitDistance_fn(HitTestResult* __this, bool* __retval)
{
    *__retval = __this->HasHitDistance();
}

// internal generated void set_HasHitDistance(bool value) :1856
void HitTestResult__set_HasHitDistance_fn(HitTestResult* __this, bool* value)
{
    __this->HasHitDistance(*value);
}

// public generated float get_HitDistance() :1857
void HitTestResult__get_HitDistance_fn(HitTestResult* __this, float* __retval)
{
    *__retval = __this->HitDistance();
}

// internal generated void set_HitDistance(float value) :1857
void HitTestResult__set_HitDistance_fn(HitTestResult* __this, float* value)
{
    __this->HitDistance(*value);
}

// public generated Fuse.Node get_HitObject() :1858
void HitTestResult__get_HitObject_fn(HitTestResult* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->HitObject();
}

// internal generated void set_HitObject(Fuse.Node value) :1858
void HitTestResult__set_HitObject_fn(HitTestResult* __this, ::g::Fuse::Node* value)
{
    __this->HitObject(value);
}

// public generated HitTestResult New() :1854
void HitTestResult__New1_fn(HitTestResult** __retval)
{
    *__retval = HitTestResult::New1();
}

// public generated HitTestResult() [instance] :1854
void HitTestResult::ctor_()
{
}

// public generated bool get_HasHitDistance() [instance] :1856
bool HitTestResult::HasHitDistance()
{
    uStackFrame __("Fuse.HitTestResult", "get_HasHitDistance()");
    return _HasHitDistance;
}

// internal generated void set_HasHitDistance(bool value) [instance] :1856
void HitTestResult::HasHitDistance(bool value)
{
    uStackFrame __("Fuse.HitTestResult", "set_HasHitDistance(bool)");
    _HasHitDistance = value;
}

// public generated float get_HitDistance() [instance] :1857
float HitTestResult::HitDistance()
{
    uStackFrame __("Fuse.HitTestResult", "get_HitDistance()");
    return _HitDistance;
}

// internal generated void set_HitDistance(float value) [instance] :1857
void HitTestResult::HitDistance(float value)
{
    uStackFrame __("Fuse.HitTestResult", "set_HitDistance(float)");
    _HitDistance = value;
}

// public generated Fuse.Node get_HitObject() [instance] :1858
::g::Fuse::Node* HitTestResult::HitObject()
{
    uStackFrame __("Fuse.HitTestResult", "get_HitObject()");
    return _HitObject;
}

// internal generated void set_HitObject(Fuse.Node value) [instance] :1858
void HitTestResult::HitObject(::g::Fuse::Node* value)
{
    uStackFrame __("Fuse.HitTestResult", "set_HitObject(Fuse.Node)");
    _HitObject = value;
}

// public generated HitTestResult New() [static] :1854
HitTestResult* HitTestResult::New1()
{
    HitTestResult* obj1 = (HitTestResult*)uNew(HitTestResult_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#51
// -------------------------------------------------------

// public abstract interface IActualPlacement :7223
// {
uInterfaceType* IActualPlacement_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IActualPlacement", 0, 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_ActualPosition", NULL, NULL, offsetof(IActualPlacement, fp_get_ActualPosition), false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("get_ActualSize", NULL, NULL, offsetof(IActualPlacement, fp_get_ActualSize), false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("add_Placed", NULL, NULL, offsetof(IActualPlacement, fp_add_Placed), false, uVoid_typeof(), 1, ::g::Fuse::PlacedHandler_typeof()),
        new uFunction("remove_Placed", NULL, NULL, offsetof(IActualPlacement, fp_remove_Placed), false, uVoid_typeof(), 1, ::g::Fuse::PlacedHandler_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#44
// -------------------------------------------------------

// public abstract interface IChildObject :6264
// {
uInterfaceType* IChildObject_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IChildObject", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_ParentObject", NULL, NULL, offsetof(IChildObject, fp_get_ParentObject), false, uObject_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#13
// -------------------------------------------------------

// public abstract interface IDataContext :1828
// {
uInterfaceType* IDataContext_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IDataContext", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_DataContext", NULL, NULL, offsetof(IDataContext, fp_get_DataContext), false, uObject_typeof(), 0),
        new uFunction("set_DataContext", NULL, NULL, offsetof(IDataContext, fp_set_DataContext), false, uVoid_typeof(), 1, uObject_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#43
// -------------------------------------------------------

// private sealed class ScalingModes.IdentityMode :6150
// {
ScalingModes__IdentityMode_type* ScalingModes__IdentityMode_typeof()
{
    static uSStrong<ScalingModes__IdentityMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ScalingModes__IdentityMode);
    options.TypeSize = sizeof(ScalingModes__IdentityMode_type);
    type = (ScalingModes__IdentityMode_type*)uClassType::New("Fuse.ScalingModes.IdentityMode", options);
    type->fp_ctor_ = (void*)ScalingModes__IdentityMode__New1_fn;
    type->interface0.fp_GetScaleVector = (void(*)(uObject*, ::g::Fuse::Scaling*, ::g::Uno::Float3*))ScalingModes__IdentityMode__GetScaleVector_fn;
    type->interface1.fp_get_Flags = (void(*)(uObject*, int*))ScalingModes__IdentityMode__get_Flags_fn;
    ::TYPES[84] = ::g::Fuse::Scaling_typeof();
    type->SetInterfaces(
        ::g::Fuse::IScalingMode_typeof(), offsetof(ScalingModes__IdentityMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(ScalingModes__IdentityMode_type, interface1));
    return type;
}

// public generated IdentityMode() :6150
void ScalingModes__IdentityMode__ctor__fn(ScalingModes__IdentityMode* __this)
{
    __this->ctor_();
}

// public Fuse.TransformModeFlags get_Flags() :6153
void ScalingModes__IdentityMode__get_Flags_fn(ScalingModes__IdentityMode* __this, int* __retval)
{
    *__retval = __this->Flags();
}

// public float3 GetScaleVector(Fuse.Scaling t) :6152
void ScalingModes__IdentityMode__GetScaleVector_fn(ScalingModes__IdentityMode* __this, ::g::Fuse::Scaling* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetScaleVector(t);
}

// public generated IdentityMode New() :6150
void ScalingModes__IdentityMode__New1_fn(ScalingModes__IdentityMode** __retval)
{
    *__retval = ScalingModes__IdentityMode::New1();
}

// public generated IdentityMode() [instance] :6150
void ScalingModes__IdentityMode::ctor_()
{
}

// public Fuse.TransformModeFlags get_Flags() [instance] :6153
int ScalingModes__IdentityMode::Flags()
{
    uStackFrame __("Fuse.ScalingModes.IdentityMode", "get_Flags()");
    return 0;
}

// public float3 GetScaleVector(Fuse.Scaling t) [instance] :6152
::g::Uno::Float3 ScalingModes__IdentityMode::GetScaleVector(::g::Fuse::Scaling* t)
{
    uStackFrame __("Fuse.ScalingModes.IdentityMode", "GetScaleVector(Fuse.Scaling)");
    return uPtr(t)->Vector();
}

// public generated IdentityMode New() [static] :6150
ScalingModes__IdentityMode* ScalingModes__IdentityMode::New1()
{
    ScalingModes__IdentityMode* obj1 = (ScalingModes__IdentityMode*)uNew(ScalingModes__IdentityMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#6
// ------------------------------------------------------

// public abstract interface IFlush :632
// {
uInterfaceType* IFlush_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IFlush", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Flush", NULL, NULL, offsetof(IFlush, fp_Flush), false, uVoid_typeof(), 1, ::g::Fuse::DrawContext_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#15
// -------------------------------------------------------

// public abstract interface IFrustum :1945
// {
uInterfaceType* IFrustum_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IFrustum", 0, 0);
    type->Reflection.SetFunctions(6,
        new uFunction("GetDepthRange", NULL, NULL, offsetof(IFrustum, fp_GetDepthRange), false, ::g::Uno::Float2_typeof(), 1, ::g::Fuse::IViewport_typeof()),
        new uFunction("GetProjectionTransform", NULL, NULL, offsetof(IFrustum, fp_GetProjectionTransform), false, ::g::Uno::Float4x4_typeof(), 1, ::g::Fuse::IViewport_typeof()),
        new uFunction("GetProjectionTransformInverse", NULL, NULL, offsetof(IFrustum, fp_GetProjectionTransformInverse), false, ::g::Uno::Float4x4_typeof(), 1, ::g::Fuse::IViewport_typeof()),
        new uFunction("GetViewTransform", NULL, NULL, offsetof(IFrustum, fp_GetViewTransform), false, ::g::Uno::Float4x4_typeof(), 1, ::g::Fuse::IViewport_typeof()),
        new uFunction("GetViewTransformInverse", NULL, NULL, offsetof(IFrustum, fp_GetViewTransformInverse), false, ::g::Uno::Float4x4_typeof(), 1, ::g::Fuse::IViewport_typeof()),
        new uFunction("GetWorldPosition", NULL, NULL, offsetof(IFrustum, fp_GetWorldPosition), false, ::g::Uno::Float3_typeof(), 1, ::g::Fuse::IViewport_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#44
// -------------------------------------------------------

// public abstract interface INameListener :6269
// {
uInterfaceType* INameListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.INameListener", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("OnNameChanged", NULL, NULL, offsetof(INameListener, fp_OnNameChanged), false, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#25
// -------------------------------------------------------

// private struct Node.InteractionItem :3151
// {
uStructType* Node__InteractionItem_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Node__InteractionItem);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Node.InteractionItem", options);
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Node__InteractionItem, Id), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Node__InteractionItem, Cancelled), 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#29
// -------------------------------------------------------

// public enum InvalidateLayoutReason :3440
uEnumType* InvalidateLayoutReason_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.InvalidateLayoutReason", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "NothingChanged", 0LL,
        "ChildChanged", 1LL,
        "MarginBoxChanged", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#13
// -------------------------------------------------------

// public abstract interface IObjectContainer :1833
// {
uInterfaceType* IObjectContainer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IObjectContainer", 0, 0);
    type->Reflection.SetFunctions(4,
        new uFunction("Add", NULL, NULL, offsetof(IObjectContainer, fp_Add), false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("BeginRemove", NULL, NULL, offsetof(IObjectContainer, fp_BeginRemove), false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("Insert", NULL, NULL, offsetof(IObjectContainer, fp_Insert), false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), uObject_typeof()),
        new uFunction("Remove", NULL, NULL, offsetof(IObjectContainer, fp_Remove), false, uVoid_typeof(), 1, uObject_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Entities/0.27.14/Processing/$.uno
// --------------------------------------------------------------------

// public abstract interface IOutput<T> :17
// {
uInterfaceType* IOutput_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IOutput`1", 1, 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Output", NULL, NULL, offsetof(IOutput, fp_get_Output), false, type->T(0), 0),
        new uFunction("add_OutputChanged", NULL, NULL, offsetof(IOutput, fp_add_OutputChanged), false, uVoid_typeof(), 1, ::g::Uno::Action_typeof()),
        new uFunction("remove_OutputChanged", NULL, NULL, offsetof(IOutput, fp_remove_OutputChanged), false, uVoid_typeof(), 1, ::g::Uno::Action_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#43
// -------------------------------------------------------

// public abstract interface IScalingMode :6143
// {
uInterfaceType* IScalingMode_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IScalingMode", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("GetScaleVector", NULL, NULL, offsetof(IScalingMode, fp_GetScaleVector), false, ::g::Uno::Float3_typeof(), 1, ::g::Fuse::Scaling_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#51
// -------------------------------------------------------

// public abstract interface ITransformMode :7244
// {
uInterfaceType* ITransformMode_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.ITransformMode", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Flags", NULL, NULL, offsetof(ITransformMode, fp_get_Flags), false, ::g::Fuse::TransformModeFlags_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#51
// -------------------------------------------------------

// public abstract interface ITranslationMode :7249
// {
uInterfaceType* ITranslationMode_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.ITranslationMode", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("GetAbsVector", NULL, NULL, offsetof(ITranslationMode, fp_GetAbsVector), false, ::g::Uno::Float3_typeof(), 1, ::g::Fuse::Translation_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#16
// -------------------------------------------------------

// public abstract interface IViewport :1964
// {
uInterfaceType* IViewport_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IViewport", 0, 0);
    type->Reflection.SetFunctions(12,
        new uFunction("get_PixelSize", NULL, NULL, offsetof(IViewport, fp_get_PixelSize), false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_PixelsPerPoint", NULL, NULL, offsetof(IViewport, fp_get_PixelsPerPoint), false, ::g::Uno::Float_typeof(), 0),
        new uFunction("PointToWorldRay", NULL, NULL, offsetof(IViewport, fp_PointToWorldRay), false, ::g::Uno::Geometry::Ray_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_ProjectionTransform", NULL, NULL, offsetof(IViewport, fp_get_ProjectionTransform), false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_ProjectionTransformInverse", NULL, NULL, offsetof(IViewport, fp_get_ProjectionTransformInverse), false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_Size", NULL, NULL, offsetof(IViewport, fp_get_Size), false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_ViewOrigin", NULL, NULL, offsetof(IViewport, fp_get_ViewOrigin), false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("get_ViewProjectionTransform", NULL, NULL, offsetof(IViewport, fp_get_ViewProjectionTransform), false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_ViewProjectionTransformInverse", NULL, NULL, offsetof(IViewport, fp_get_ViewProjectionTransformInverse), false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_ViewRange", NULL, NULL, offsetof(IViewport, fp_get_ViewRange), false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_ViewTransform", NULL, NULL, offsetof(IViewport, fp_get_ViewTransform), false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_ViewTransformInverse", NULL, NULL, offsetof(IViewport, fp_get_ViewTransformInverse), false, ::g::Uno::Float4x4_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#42
// -------------------------------------------------------

// internal sealed class KeyboardBootstrapper :5862
// {
uType* KeyboardBootstrapper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(KeyboardBootstrapper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.KeyboardBootstrapper", options);
    type->fp_ctor_ = (void*)KeyboardBootstrapper__New1_fn;
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[85] = ::g::Uno::Platform::KeyEventArgs_typeof();
    ::TYPES[32] = ::g::Uno::Int_typeof();
    ::TYPES[86] = ::g::Uno::Platform::TextInputEventArgs_typeof();
    return type;
}

// public generated KeyboardBootstrapper() :5862
void KeyboardBootstrapper__ctor__fn(KeyboardBootstrapper* __this)
{
    __this->ctor_();
}

// public generated KeyboardBootstrapper New() :5862
void KeyboardBootstrapper__New1_fn(KeyboardBootstrapper** __retval)
{
    *__retval = KeyboardBootstrapper::New1();
}

// public static void OnKeyPressed(object sender, Uno.Platform.KeyEventArgs args) :5864
void KeyboardBootstrapper__OnKeyPressed_fn(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    KeyboardBootstrapper::OnKeyPressed(sender, args);
}

// public static void OnKeyReleased(object sender, Uno.Platform.KeyEventArgs args) :5881
void KeyboardBootstrapper__OnKeyReleased_fn(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    KeyboardBootstrapper::OnKeyReleased(sender, args);
}

// public static void OnTextInput(object sender, Uno.Platform.TextInputEventArgs args) :5893
void KeyboardBootstrapper__OnTextInput_fn(uObject* sender, ::g::Uno::Platform::TextInputEventArgs* args)
{
    KeyboardBootstrapper::OnTextInput(sender, args);
}

// public generated KeyboardBootstrapper() [instance] :5862
void KeyboardBootstrapper::ctor_()
{
}

// public generated KeyboardBootstrapper New() [static] :5862
KeyboardBootstrapper* KeyboardBootstrapper::New1()
{
    KeyboardBootstrapper* obj1 = (KeyboardBootstrapper*)uNew(KeyboardBootstrapper_typeof());
    obj1->ctor_();
    return obj1;
}

// public static void OnKeyPressed(object sender, Uno.Platform.KeyEventArgs args) [static] :5864
void KeyboardBootstrapper::OnKeyPressed(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    uStackFrame __("Fuse.KeyboardBootstrapper", "OnKeyPressed(object,Uno.Platform.KeyEventArgs)");

    try
    {
        if (!uPtr(args)->Handled() && (uPtr(args)->Key() == 9))
            ::g::Fuse::Input::Focus::Move(uPtr(args)->IsShiftKeyPressed() ? 0 : 1);

        ::g::Fuse::Input::Keyboard::RaiseKeyPressed(uPtr(args)->Key(), uPtr(args)->IsMetaKeyPressed(), uPtr(args)->IsControlKeyPressed(), uPtr(args)->IsShiftKeyPressed(), uPtr(args)->IsAltKeyPressed());
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// public static void OnKeyReleased(object sender, Uno.Platform.KeyEventArgs args) [static] :5881
void KeyboardBootstrapper::OnKeyReleased(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    uStackFrame __("Fuse.KeyboardBootstrapper", "OnKeyReleased(object,Uno.Platform.KeyEventArgs)");

    try
    {
        ::g::Fuse::Input::Keyboard::RaiseKeyReleased(uPtr(args)->Key(), uPtr(args)->IsMetaKeyPressed(), uPtr(args)->IsControlKeyPressed(), uPtr(args)->IsShiftKeyPressed(), uPtr(args)->IsAltKeyPressed());
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// public static void OnTextInput(object sender, Uno.Platform.TextInputEventArgs args) [static] :5893
void KeyboardBootstrapper::OnTextInput(uObject* sender, ::g::Uno::Platform::TextInputEventArgs* args)
{
    uStackFrame __("Fuse.KeyboardBootstrapper", "OnTextInput(object,Uno.Platform.TextInputEventArgs)");

    try
    {
        uPtr(args)->Handled(::g::Fuse::Input::TextService::RaiseTextEntered(uPtr(args)->Text()));
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Launcher/0.27.14/$.uno
// ---------------------------------------------------------

// public static class Launcher :22
// {
uClassType* Launcher_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Launcher", options);
    ::STRINGS[35] = uString::Const("tel:");
    ::STRINGS[36] = uString::Const("mailto:");
    ::STRINGS[37] = uString::Const("?");
    ::STRINGS[38] = uString::Const("cc=");
    ::STRINGS[39] = uString::Const("&");
    ::STRINGS[40] = uString::Const("bcc=");
    ::STRINGS[41] = uString::Const("subject=");
    ::STRINGS[13] = uString::Const(" ");
    ::STRINGS[42] = uString::Const("%20");
    ::STRINGS[43] = uString::Const("body=");
    ::STRINGS[44] = uString::Const(",");
    ::STRINGS[45] = uString::Const("http://maps.apple.com/maps?q=");
    ::STRINGS[46] = uString::Const("&ll=");
    ::STRINGS[47] = uString::Const("&sll=");
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[87] = ::g::Uno::Double_typeof();
    ::TYPES[88] = ::g::Uno::Net::Http::Uri_typeof();
    type->Reflection.SetFunctions(7,
        new uFunction("_launchMaps", NULL, (void*)Launcher___launchMaps_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("LaunchCall", NULL, (void*)Launcher__LaunchCall_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("LaunchEmail", NULL, (void*)Launcher__LaunchEmail_fn, 0, true, uVoid_typeof(), 5, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("LaunchMaps", NULL, (void*)Launcher__LaunchMaps_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("LaunchMaps", NULL, (void*)Launcher__LaunchMaps1_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::String_typeof()),
        new uFunction("LaunchMaps", NULL, (void*)Launcher__LaunchMaps2_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("LaunchUri", NULL, (void*)Launcher__LaunchUri_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Net::Http::Uri_typeof()));
    return type;
}

// public static void _launchMaps(string uri) :114
void Launcher___launchMaps_fn(uString* uri)
{
    Launcher::_launchMaps(uri);
}

// public static void LaunchCall(string callString) :55
void Launcher__LaunchCall_fn(uString* callString)
{
    Launcher::LaunchCall(callString);
}

// public static void LaunchEmail(string to, string carbonCopy, string blindCarbonCopy, string subject, string message) :137
void Launcher__LaunchEmail_fn(uString* to, uString* carbonCopy, uString* blindCarbonCopy, uString* subject, uString* message)
{
    Launcher::LaunchEmail(to, carbonCopy, blindCarbonCopy, subject, message);
}

// public static void LaunchMaps(double latitude, double longitude) :80
void Launcher__LaunchMaps_fn(double* latitude, double* longitude)
{
    Launcher::LaunchMaps(*latitude, *longitude);
}

// public static void LaunchMaps(double latitude, double longitude, string query) :101
void Launcher__LaunchMaps1_fn(double* latitude, double* longitude, uString* query)
{
    Launcher::LaunchMaps1(*latitude, *longitude, query);
}

// public static void LaunchMaps(string query) :93
void Launcher__LaunchMaps2_fn(uString* query)
{
    Launcher::LaunchMaps2(query);
}

// public static void LaunchUri(Uno.Net.Http.Uri uri) :24
void Launcher__LaunchUri_fn(::g::Uno::Net::Http::Uri* uri)
{
    Launcher::LaunchUri(uri);
}

// public static void _launchMaps(string uri) [static] :114
void Launcher::_launchMaps(uString* uri)
{
    uStackFrame __("Fuse.Launcher", "_launchMaps(string)");
    ::g::iOS::Foundation::NSURL* mapURL = ::g::iOS::Foundation::NSURL::New6(::g::iOS::Foundation::NSURL::_urlWithString(uri));
    uPtr(::g::iOS::UIKit::UIApplication::_sharedApplication())->openURL(mapURL);
}

// public static void LaunchCall(string callString) [static] :55
void Launcher::LaunchCall(uString* callString)
{
    uStackFrame __("Fuse.Launcher", "LaunchCall(string)");
    ::g::Uno::Text::StringBuilder* builder = ::g::Uno::Text::StringBuilder::New1();
    builder->Append1(::STRINGS[35/*"tel:"*/]);
    builder->Append1(callString);
    ::g::iOS::UIKit::UIApplication* app = ::g::iOS::UIKit::UIApplication::_sharedApplication();
    ::g::iOS::Foundation::NSURL* telephoneURL = ::g::iOS::Foundation::NSURL::New6(::g::iOS::Foundation::NSURL::_urlWithString(uPtr(builder)->ToString()));
    uPtr(app)->openURL(telephoneURL);
}

// public static void LaunchEmail(string to, string carbonCopy, string blindCarbonCopy, string subject, string message) [static] :137
void Launcher::LaunchEmail(uString* to, uString* carbonCopy, uString* blindCarbonCopy, uString* subject, uString* message)
{
    uStackFrame __("Fuse.Launcher", "LaunchEmail(string,string,string,string,string)");
    ::g::Uno::Text::StringBuilder* builder = ::g::Uno::Text::StringBuilder::New1();
    builder->Append1(::STRINGS[36/*"mailto:"*/]);
    builder->Append1(to);
    builder->Append1(::STRINGS[37/*"?"*/]);

    if (!::g::Uno::String::IsNullOrEmpty(carbonCopy))
    {
        uPtr(builder)->Append1(::STRINGS[38/*"cc="*/]);
        builder->Append1(carbonCopy);
    }

    if (!::g::Uno::String::IsNullOrEmpty(blindCarbonCopy))
    {
        uPtr(builder)->Append1(::STRINGS[39/*"&"*/]);
        builder->Append1(::STRINGS[40/*"bcc="*/]);
        builder->Append1(blindCarbonCopy);
    }

    if (!::g::Uno::String::IsNullOrEmpty(subject))
    {
        uPtr(builder)->Append1(::STRINGS[39/*"&"*/]);
        builder->Append1(::STRINGS[41/*"subject="*/]);
        builder->Append1(::g::Uno::String::Replace1(uPtr(subject), ::STRINGS[13/*" "*/], ::STRINGS[42/*"%20"*/]));
    }

    if (!::g::Uno::String::IsNullOrEmpty(message))
    {
        uPtr(builder)->Append1(::STRINGS[39/*"&"*/]);
        builder->Append1(::STRINGS[43/*"body="*/]);
        builder->Append1(::g::Uno::String::Replace1(uPtr(message), ::STRINGS[13/*" "*/], ::STRINGS[42/*"%20"*/]));
    }

    ::g::iOS::UIKit::UIApplication* app = ::g::iOS::UIKit::UIApplication::_sharedApplication();
    ::g::iOS::Foundation::NSURL* mailURL = ::g::iOS::Foundation::NSURL::New6(::g::iOS::Foundation::NSURL::_urlWithString(uPtr(builder)->ToString()));
    uPtr(app)->openURL(mailURL);
}

// public static void LaunchMaps(double latitude, double longitude) [static] :80
void Launcher::LaunchMaps(double latitude, double longitude)
{
    uStackFrame __("Fuse.Launcher", "LaunchMaps(double,double)");
    uString* latlon = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Double::ToString(latitude, ::TYPES[87/*double*/]), ::STRINGS[44/*","*/]), ::g::Uno::Double::ToString(longitude, ::TYPES[87/*double*/]));
    Launcher::_launchMaps(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[45/*"http://maps...*/], latlon), ::STRINGS[46/*"&ll="*/]), latlon));
}

// public static void LaunchMaps(double latitude, double longitude, string query) [static] :101
void Launcher::LaunchMaps1(double latitude, double longitude, uString* query)
{
    uStackFrame __("Fuse.Launcher", "LaunchMaps(double,double,string)");
    uString* latlon = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Double::ToString(latitude, ::TYPES[87/*double*/]), ::STRINGS[44/*","*/]), ::g::Uno::Double::ToString(longitude, ::TYPES[87/*double*/]));
    Launcher::_launchMaps(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[45/*"http://maps...*/], query), ::STRINGS[47/*"&sll="*/]), latlon));
}

// public static void LaunchMaps(string query) [static] :93
void Launcher::LaunchMaps2(uString* query)
{
    uStackFrame __("Fuse.Launcher", "LaunchMaps(string)");
    Launcher::_launchMaps(::g::Uno::String::op_Addition2(::STRINGS[45/*"http://maps...*/], query));
}

// public static void LaunchUri(Uno.Net.Http.Uri uri) [static] :24
void Launcher::LaunchUri(::g::Uno::Net::Http::Uri* uri)
{
    uStackFrame __("Fuse.Launcher", "LaunchUri(Uno.Net.Http.Uri)");
    ::g::Uno::Text::StringBuilder* builder = ::g::Uno::Text::StringBuilder::New1();
    builder->Append1(uPtr(uri)->AbsoluteUri());
    ::g::iOS::UIKit::UIApplication* app = ::g::iOS::UIKit::UIApplication::_sharedApplication();
    ::g::iOS::Foundation::NSURL* siteURL = ::g::iOS::Foundation::NSURL::New6(::g::iOS::Foundation::NSURL::_urlWithString(uPtr(builder)->ToString()));
    uPtr(app)->openURL(siteURL);
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#29
// -------------------------------------------------------

// public enum Layer :3426
uEnumType* Layer_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Layer", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Background", 0LL,
        "Layout", 1LL,
        "Overlay", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#29
// -------------------------------------------------------

// public enum LayoutDependent :3448
uEnumType* LayoutDependent_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.LayoutDependent", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "No", 0LL,
        "NoArrange", 1LL,
        "Maybe", 2LL,
        "MaybeArrange", 3LL,
        "Yes", 4LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#17
// -------------------------------------------------------

// public struct LayoutParams :2087
// {
uStructType* LayoutParams_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ValueSize = sizeof(LayoutParams);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.LayoutParams", options);
    ::TYPES[77] = ::g::Uno::Float2_typeof();
    ::TYPES[40] = ::g::Uno::Float4_typeof();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[89] = LayoutParams__Flags_typeof();
    ::TYPES[32] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        LayoutParams__Flags_typeof(), offsetof(::g::Fuse::LayoutParams, _flags), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::LayoutParams, _size), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::LayoutParams, _maxSize), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::LayoutParams, _minSize), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::LayoutParams, _relativeSize), 0);
    type->Reflection.SetFunctions(49,
        new uFunction("BoxConstrain", NULL, (void*)LayoutParams__BoxConstrain_fn, 0, false, uVoid_typeof(), 1, LayoutParams_typeof()),
        new uFunction("ConstrainMax", NULL, (void*)LayoutParams__ConstrainMax_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Float2_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("ConstrainMaxX", NULL, (void*)LayoutParams__ConstrainMaxX_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("ConstrainMaxY", NULL, (void*)LayoutParams__ConstrainMaxY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("ConstrainMin", NULL, (void*)LayoutParams__ConstrainMin_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Float2_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("ConstrainMinX", NULL, (void*)LayoutParams__ConstrainMinX_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("ConstrainMinY", NULL, (void*)LayoutParams__ConstrainMinY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Copy", NULL, (void*)LayoutParams__Copy_fn, 0, false, uVoid_typeof(), 1, LayoutParams_typeof()),
        new uFunction("Create", NULL, (void*)LayoutParams__Create_fn, 0, true, LayoutParams_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("CreateEmpty", NULL, (void*)LayoutParams__CreateEmpty_fn, 0, true, LayoutParams_typeof(), 0),
        new uFunction("CreateTemporary", NULL, (void*)LayoutParams__CreateTemporary_fn, 0, true, LayoutParams_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("CreateXY", NULL, (void*)LayoutParams__CreateXY_fn, 0, true, LayoutParams_typeof(), 3, ::g::Uno::Float2_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("DeriveClone", NULL, (void*)LayoutParams__DeriveClone_fn, 0, false, LayoutParams_typeof(), 0),
        new uFunction("GetAvailableSize", NULL, (void*)LayoutParams__GetAvailableSize_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_HasMaxSize", NULL, (void*)LayoutParams__get_HasMaxSize_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasMaxX", NULL, (void*)LayoutParams__get_HasMaxX_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasMaxY", NULL, (void*)LayoutParams__get_HasMaxY_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasMinSize", NULL, (void*)LayoutParams__get_HasMinSize_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasMinX", NULL, (void*)LayoutParams__get_HasMinX_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasMinY", NULL, (void*)LayoutParams__get_HasMinY_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasRelativeX", NULL, (void*)LayoutParams__get_HasRelativeX_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasRelativeY", NULL, (void*)LayoutParams__get_HasRelativeY_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasSize", NULL, (void*)LayoutParams__get_HasSize_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasX", NULL, (void*)LayoutParams__get_HasX_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasY", NULL, (void*)LayoutParams__get_HasY_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("IsCompatible", NULL, (void*)LayoutParams__IsCompatible_fn, 0, false, ::g::Uno::Bool_typeof(), 1, LayoutParams_typeof()),
        new uFunction("get_MaxSize", NULL, (void*)LayoutParams__get_MaxSize_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_MaxX", NULL, (void*)LayoutParams__get_MaxX_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("get_MaxY", NULL, (void*)LayoutParams__get_MaxY_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("get_MinSize", NULL, (void*)LayoutParams__get_MinSize_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_MinX", NULL, (void*)LayoutParams__get_MinX_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("get_MinY", NULL, (void*)LayoutParams__get_MinY_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("PointConstrain", NULL, (void*)LayoutParams__PointConstrain_fn, 0, false, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_RelativeSize", NULL, (void*)LayoutParams__get_RelativeSize_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_RelativeX", NULL, (void*)LayoutParams__get_RelativeX_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("get_RelativeY", NULL, (void*)LayoutParams__get_RelativeY_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("RemoveSize", NULL, (void*)LayoutParams__RemoveSize_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("RemoveSize", NULL, (void*)LayoutParams__RemoveSize1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("Reset", NULL, (void*)LayoutParams__Reset_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("RetainXY", NULL, (void*)LayoutParams__RetainXY_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("SetRelativeSize", NULL, (void*)LayoutParams__SetRelativeSize_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Float2_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("SetSize", NULL, (void*)LayoutParams__SetSize_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Float2_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("SetX", NULL, (void*)LayoutParams__SetX_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("SetY", NULL, (void*)LayoutParams__SetY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Size", NULL, (void*)LayoutParams__get_Size_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_Temporary", NULL, (void*)LayoutParams__get_Temporary_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("TrueClone", NULL, (void*)LayoutParams__TrueClone_fn, 0, false, LayoutParams_typeof(), 0),
        new uFunction("get_X", NULL, (void*)LayoutParams__get_X_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("get_Y", NULL, (void*)LayoutParams__get_Y_fn, 0, false, ::g::Uno::Float_typeof(), 0));
    return type;
}

// public void BoxConstrain(Fuse.LayoutParams o) :2345
void LayoutParams__BoxConstrain_fn(LayoutParams* __this, LayoutParams* o)
{
    __this->BoxConstrain(*o);
}

// public void ConstrainMax(float2 max, [bool hasMaxX], [bool hasMaxY]) :2302
void LayoutParams__ConstrainMax_fn(LayoutParams* __this, ::g::Uno::Float2* max, bool* hasMaxX, bool* hasMaxY)
{
    __this->ConstrainMax(*max, *hasMaxX, *hasMaxY);
}

// public void ConstrainMaxX(float max) :2284
void LayoutParams__ConstrainMaxX_fn(LayoutParams* __this, float* max)
{
    __this->ConstrainMaxX(*max);
}

// public void ConstrainMaxY(float max) :2293
void LayoutParams__ConstrainMaxY_fn(LayoutParams* __this, float* max)
{
    __this->ConstrainMaxY(*max);
}

// public void ConstrainMin(float2 min, [bool hasMinX], [bool hasMinY]) :2331
void LayoutParams__ConstrainMin_fn(LayoutParams* __this, ::g::Uno::Float2* min, bool* hasMinX, bool* hasMinY)
{
    __this->ConstrainMin(*min, *hasMinX, *hasMinY);
}

// public void ConstrainMinX(float min) :2313
void LayoutParams__ConstrainMinX_fn(LayoutParams* __this, float* min)
{
    __this->ConstrainMinX(*min);
}

// public void ConstrainMinY(float min) :2322
void LayoutParams__ConstrainMinY_fn(LayoutParams* __this, float* min)
{
    __this->ConstrainMinY(*min);
}

// public void Copy(Fuse.LayoutParams o) :2180
void LayoutParams__Copy_fn(LayoutParams* __this, LayoutParams* o)
{
    __this->Copy(*o);
}

// public static Fuse.LayoutParams Create(float2 size) :2189
void LayoutParams__Create_fn(::g::Uno::Float2* size, LayoutParams* __retval)
{
    *__retval = LayoutParams__Create(*size);
}

// public static Fuse.LayoutParams CreateEmpty() :2218
void LayoutParams__CreateEmpty_fn(LayoutParams* __retval)
{
    *__retval = LayoutParams__CreateEmpty();
}

// public static Fuse.LayoutParams CreateTemporary(float2 size) :2198
void LayoutParams__CreateTemporary_fn(::g::Uno::Float2* size, LayoutParams* __retval)
{
    *__retval = LayoutParams__CreateTemporary(*size);
}

// public static Fuse.LayoutParams CreateXY(float2 size, bool hasX, bool hasY) :2208
void LayoutParams__CreateXY_fn(::g::Uno::Float2* size, bool* hasX, bool* hasY, LayoutParams* __retval)
{
    *__retval = LayoutParams__CreateXY(*size, *hasX, *hasY);
}

// public Fuse.LayoutParams DeriveClone() :2163
void LayoutParams__DeriveClone_fn(LayoutParams* __this, LayoutParams* __retval)
{
    *__retval = __this->DeriveClone();
}

// public float2 GetAvailableSize() :2397
void LayoutParams__GetAvailableSize_fn(LayoutParams* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetAvailableSize();
}

// public bool get_HasMaxSize() :2127
void LayoutParams__get_HasMaxSize_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasMaxSize();
}

// public bool get_HasMaxX() :2125
void LayoutParams__get_HasMaxX_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasMaxX();
}

// public bool get_HasMaxY() :2126
void LayoutParams__get_HasMaxY_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasMaxY();
}

// public bool get_HasMinSize() :2131
void LayoutParams__get_HasMinSize_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasMinSize();
}

// public bool get_HasMinX() :2129
void LayoutParams__get_HasMinX_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasMinX();
}

// public bool get_HasMinY() :2130
void LayoutParams__get_HasMinY_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasMinY();
}

// public bool get_HasRelativeX() :2135
void LayoutParams__get_HasRelativeX_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasRelativeX();
}

// public bool get_HasRelativeY() :2144
void LayoutParams__get_HasRelativeY_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasRelativeY();
}

// public bool get_HasSize() :2121
void LayoutParams__get_HasSize_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasSize();
}

// public bool get_HasX() :2119
void LayoutParams__get_HasX_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasX();
}

// public bool get_HasY() :2120
void LayoutParams__get_HasY_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasY();
}

// public bool IsCompatible(Fuse.LayoutParams nlp) :2473
void LayoutParams__IsCompatible_fn(LayoutParams* __this, LayoutParams* nlp, bool* __retval)
{
    *__retval = __this->IsCompatible(*nlp);
}

// public float2 get_MaxSize() :2406
void LayoutParams__get_MaxSize_fn(LayoutParams* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MaxSize();
}

// public float get_MaxX() :2407
void LayoutParams__get_MaxX_fn(LayoutParams* __this, float* __retval)
{
    *__retval = __this->MaxX();
}

// public float get_MaxY() :2408
void LayoutParams__get_MaxY_fn(LayoutParams* __this, float* __retval)
{
    *__retval = __this->MaxY();
}

// public float2 get_MinSize() :2410
void LayoutParams__get_MinSize_fn(LayoutParams* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MinSize();
}

// public float get_MinX() :2411
void LayoutParams__get_MinX_fn(LayoutParams* __this, float* __retval)
{
    *__retval = __this->MinX();
}

// public float get_MinY() :2412
void LayoutParams__get_MinY_fn(LayoutParams* __this, float* __retval)
{
    *__retval = __this->MinY();
}

// public float2 PointConstrain(float2 p) :2355
void LayoutParams__PointConstrain_fn(LayoutParams* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PointConstrain(*p);
}

// private float2 PointConstrain(float2 p, bool knowX, bool knowY) :2360
void LayoutParams__PointConstrain1_fn(LayoutParams* __this, ::g::Uno::Float2* p, bool* knowX, bool* knowY, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PointConstrain1(*p, *knowX, *knowY);
}

// public float2 get_RelativeSize() :2414
void LayoutParams__get_RelativeSize_fn(LayoutParams* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->RelativeSize();
}

// public float get_RelativeX() :2417
void LayoutParams__get_RelativeX_fn(LayoutParams* __this, float* __retval)
{
    *__retval = __this->RelativeX();
}

// public float get_RelativeY() :2426
void LayoutParams__get_RelativeY_fn(LayoutParams* __this, float* __retval)
{
    *__retval = __this->RelativeY();
}

// public void RemoveSize(float2 size) :2226
void LayoutParams__RemoveSize_fn(LayoutParams* __this, ::g::Uno::Float2* size)
{
    __this->RemoveSize(*size);
}

// public void RemoveSize(float4 size) :2233
void LayoutParams__RemoveSize1_fn(LayoutParams* __this, ::g::Uno::Float4* size)
{
    __this->RemoveSize1(*size);
}

// public void Reset() :2174
void LayoutParams__Reset_fn(LayoutParams* __this)
{
    __this->Reset();
}

// public void RetainXY(bool x, bool y) :2238
void LayoutParams__RetainXY_fn(LayoutParams* __this, bool* x, bool* y)
{
    __this->RetainXY(*x, *y);
}

// private void SetFlag(Fuse.LayoutParams.Flags g, bool val) :2111
void LayoutParams__SetFlag_fn(LayoutParams* __this, int* g, bool* val)
{
    __this->SetFlag(*g, *val);
}

// public void SetRelativeSize(float2 sz, bool hasX, bool hasY) :2275
void LayoutParams__SetRelativeSize_fn(LayoutParams* __this, ::g::Uno::Float2* sz, bool* hasX, bool* hasY)
{
    __this->SetRelativeSize(*sz, *hasX, *hasY);
}

// public void SetSize(float2 xy, [bool hasX], [bool hasY]) :2252
void LayoutParams__SetSize_fn(LayoutParams* __this, ::g::Uno::Float2* xy, bool* hasX, bool* hasY)
{
    __this->SetSize(*xy, *hasX, *hasY);
}

// public void SetX(float x) :2263
void LayoutParams__SetX_fn(LayoutParams* __this, float* x)
{
    __this->SetX(*x);
}

// public void SetY(float y) :2269
void LayoutParams__SetY_fn(LayoutParams* __this, float* y)
{
    __this->SetY(*y);
}

// public float2 get_Size() :2402
void LayoutParams__get_Size_fn(LayoutParams* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public bool get_Temporary() :2123
void LayoutParams__get_Temporary_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->Temporary();
}

// public Fuse.LayoutParams TrueClone() :2152
void LayoutParams__TrueClone_fn(LayoutParams* __this, LayoutParams* __retval)
{
    *__retval = __this->TrueClone();
}

// public float get_X() :2403
void LayoutParams__get_X_fn(LayoutParams* __this, float* __retval)
{
    *__retval = __this->X();
}

// public float get_Y() :2404
void LayoutParams__get_Y_fn(LayoutParams* __this, float* __retval)
{
    *__retval = __this->Y();
}

// public void BoxConstrain(Fuse.LayoutParams o) [instance] :2345
void LayoutParams::BoxConstrain(LayoutParams o)
{
    uStackFrame __("Fuse.LayoutParams", "BoxConstrain(Fuse.LayoutParams)");
    SetSize(o.Size(), o.HasX(), o.HasY());
    ConstrainMax(o.MaxSize(), o.HasMaxX(), o.HasMaxY());
    ConstrainMin(o.MinSize(), o.HasMinX(), o.HasMinY());
}

// public void ConstrainMax(float2 max, [bool hasMaxX], [bool hasMaxY]) [instance] :2302
void LayoutParams::ConstrainMax(::g::Uno::Float2 max, bool hasMaxX, bool hasMaxY)
{
    uStackFrame __("Fuse.LayoutParams", "ConstrainMax(float2,[bool],[bool])");
    max = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), max);

    if (hasMaxX)
        ConstrainMaxX(max.X);

    if (hasMaxY)
        ConstrainMaxY(max.Y);
}

// public void ConstrainMaxX(float max) [instance] :2284
void LayoutParams::ConstrainMaxX(float max)
{
    uStackFrame __("Fuse.LayoutParams", "ConstrainMaxX(float)");

    if (HasMaxX())
        _maxSize.X = ::g::Uno::Math::Min1(_maxSize.X, max);
    else
        _maxSize.X = max;

    SetFlag(8, true);
}

// public void ConstrainMaxY(float max) [instance] :2293
void LayoutParams::ConstrainMaxY(float max)
{
    uStackFrame __("Fuse.LayoutParams", "ConstrainMaxY(float)");

    if (HasMaxY())
        _maxSize.Y = ::g::Uno::Math::Min1(_maxSize.Y, max);
    else
        _maxSize.Y = max;

    SetFlag(16, true);
}

// public void ConstrainMin(float2 min, [bool hasMinX], [bool hasMinY]) [instance] :2331
void LayoutParams::ConstrainMin(::g::Uno::Float2 min, bool hasMinX, bool hasMinY)
{
    uStackFrame __("Fuse.LayoutParams", "ConstrainMin(float2,[bool],[bool])");
    min = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), min);

    if (hasMinX)
        ConstrainMinX(min.X);

    if (hasMinY)
        ConstrainMinY(min.Y);
}

// public void ConstrainMinX(float min) [instance] :2313
void LayoutParams::ConstrainMinX(float min)
{
    uStackFrame __("Fuse.LayoutParams", "ConstrainMinX(float)");

    if (HasMinX())
        _minSize.X = ::g::Uno::Math::Min1(_minSize.X, min);
    else
        _minSize.X = min;

    SetFlag(32, true);
}

// public void ConstrainMinY(float min) [instance] :2322
void LayoutParams::ConstrainMinY(float min)
{
    uStackFrame __("Fuse.LayoutParams", "ConstrainMinY(float)");

    if (HasMinY())
        _minSize.Y = ::g::Uno::Math::Min1(_minSize.Y, min);
    else
        _minSize.Y = min;

    SetFlag(64, true);
}

// public void Copy(Fuse.LayoutParams o) [instance] :2180
void LayoutParams::Copy(LayoutParams o)
{
    uStackFrame __("Fuse.LayoutParams", "Copy(Fuse.LayoutParams)");
    _flags = o._flags;
    _size = o._size;
    _maxSize = o._maxSize;
    _minSize = o._minSize;
    _relativeSize = o._relativeSize;
}

// public Fuse.LayoutParams DeriveClone() [instance] :2163
LayoutParams LayoutParams::DeriveClone()
{
    uStackFrame __("Fuse.LayoutParams", "DeriveClone()");
    LayoutParams lp = TrueClone();
    lp.SetFlag(128, false);
    lp.SetFlag(256, false);
    lp.SetFlag(512, false);
    lp.SetFlag(1024, false);
    lp._relativeSize = ::g::Uno::Float2__New1(0.0f);
    return lp;
}

// public float2 GetAvailableSize() [instance] :2397
::g::Uno::Float2 LayoutParams::GetAvailableSize()
{
    uStackFrame __("Fuse.LayoutParams", "GetAvailableSize()");
    return PointConstrain1(::g::Uno::Float2__New1(0.0f), false, false);
}

// public bool get_HasMaxSize() [instance] :2127
bool LayoutParams::HasMaxSize()
{
    uStackFrame __("Fuse.LayoutParams", "get_HasMaxSize()");
    return HasMaxX() && HasMaxY();
}

// public bool get_HasMaxX() [instance] :2125
bool LayoutParams::HasMaxX()
{
    uStackFrame __("Fuse.LayoutParams", "get_HasMaxX()");
    return (_flags & 8) == 8;
}

// public bool get_HasMaxY() [instance] :2126
bool LayoutParams::HasMaxY()
{
    uStackFrame __("Fuse.LayoutParams", "get_HasMaxY()");
    return (_flags & 16) == 16;
}

// public bool get_HasMinSize() [instance] :2131
bool LayoutParams::HasMinSize()
{
    uStackFrame __("Fuse.LayoutParams", "get_HasMinSize()");
    return HasMinX() && HasMinY();
}

// public bool get_HasMinX() [instance] :2129
bool LayoutParams::HasMinX()
{
    uStackFrame __("Fuse.LayoutParams", "get_HasMinX()");
    return (_flags & 32) == 32;
}

// public bool get_HasMinY() [instance] :2130
bool LayoutParams::HasMinY()
{
    uStackFrame __("Fuse.LayoutParams", "get_HasMinY()");
    return (_flags & 64) == 64;
}

// public bool get_HasRelativeX() [instance] :2135
bool LayoutParams::HasRelativeX()
{
    uStackFrame __("Fuse.LayoutParams", "get_HasRelativeX()");

    if ((_flags & 512) == 512)
        return false;

    return ((_flags & 128) == 128) || HasX();
}

// public bool get_HasRelativeY() [instance] :2144
bool LayoutParams::HasRelativeY()
{
    uStackFrame __("Fuse.LayoutParams", "get_HasRelativeY()");

    if ((_flags & 1024) == 1024)
        return false;

    return ((_flags & 256) == 256) || HasY();
}

// public bool get_HasSize() [instance] :2121
bool LayoutParams::HasSize()
{
    uStackFrame __("Fuse.LayoutParams", "get_HasSize()");
    return HasX() && HasY();
}

// public bool get_HasX() [instance] :2119
bool LayoutParams::HasX()
{
    uStackFrame __("Fuse.LayoutParams", "get_HasX()");
    return (_flags & 1) == 1;
}

// public bool get_HasY() [instance] :2120
bool LayoutParams::HasY()
{
    uStackFrame __("Fuse.LayoutParams", "get_HasY()");
    return (_flags & 2) == 2;
}

// public bool IsCompatible(Fuse.LayoutParams nlp) [instance] :2473
bool LayoutParams::IsCompatible(LayoutParams nlp)
{
    uStackFrame __("Fuse.LayoutParams", "IsCompatible(Fuse.LayoutParams)");

    if ((((((HasX() != nlp.HasX()) || (HasY() != nlp.HasY())) || (HasMaxX() != nlp.HasMaxX())) || (HasMaxY() != nlp.HasMaxY())) || (HasMinX() != nlp.HasMinX())) || (HasMinY() != nlp.HasMinY()))
        return false;

    if (HasX() && (::g::Uno::Math::Abs1(X() - nlp.X()) > 1e-05f))
        return false;

    if (HasY() && (::g::Uno::Math::Abs1(Y() - nlp.Y()) > 1e-05f))
        return false;

    if (HasMaxX() && (::g::Uno::Math::Abs1(MaxX() - nlp.MaxX()) > 1e-05f))
        return false;

    if (HasMinX() && (::g::Uno::Math::Abs1(MinX() - nlp.MinX()) > 1e-05f))
        return false;

    if (HasMaxY() && (::g::Uno::Math::Abs1(MaxY() - nlp.MaxY()) > 1e-05f))
        return false;

    if (HasMinY() && (::g::Uno::Math::Abs1(MinY() - nlp.MinY()) > 1e-05f))
        return false;

    if (HasRelativeX() && (::g::Uno::Math::Abs1(RelativeX() - nlp.RelativeX()) > 1e-05f))
        return false;

    if (HasRelativeY() && (::g::Uno::Math::Abs1(RelativeY() - nlp.RelativeY()) > 1e-05f))
        return false;

    return true;
}

// public float2 get_MaxSize() [instance] :2406
::g::Uno::Float2 LayoutParams::MaxSize()
{
    uStackFrame __("Fuse.LayoutParams", "get_MaxSize()");
    return _maxSize;
}

// public float get_MaxX() [instance] :2407
float LayoutParams::MaxX()
{
    uStackFrame __("Fuse.LayoutParams", "get_MaxX()");
    return _maxSize.X;
}

// public float get_MaxY() [instance] :2408
float LayoutParams::MaxY()
{
    uStackFrame __("Fuse.LayoutParams", "get_MaxY()");
    return _maxSize.Y;
}

// public float2 get_MinSize() [instance] :2410
::g::Uno::Float2 LayoutParams::MinSize()
{
    uStackFrame __("Fuse.LayoutParams", "get_MinSize()");
    return _minSize;
}

// public float get_MinX() [instance] :2411
float LayoutParams::MinX()
{
    uStackFrame __("Fuse.LayoutParams", "get_MinX()");
    return _minSize.X;
}

// public float get_MinY() [instance] :2412
float LayoutParams::MinY()
{
    uStackFrame __("Fuse.LayoutParams", "get_MinY()");
    return _minSize.Y;
}

// public float2 PointConstrain(float2 p) [instance] :2355
::g::Uno::Float2 LayoutParams::PointConstrain(::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.LayoutParams", "PointConstrain(float2)");
    return PointConstrain1(p, true, true);
}

// private float2 PointConstrain(float2 p, bool knowX, bool knowY) [instance] :2360
::g::Uno::Float2 LayoutParams::PointConstrain1(::g::Uno::Float2 p, bool knowX, bool knowY)
{
    uStackFrame __("Fuse.LayoutParams", "PointConstrain(float2,bool,bool)");

    if (HasX())
    {
        p.X = X();
        knowX = true;
    }

    if (HasMaxX())
    {
        p.X = (knowX ? ::g::Uno::Math::Min1(p.X, MaxX()) : MaxX());
        knowX = true;
    }

    if (HasMinX())
    {
        p.X = (knowX ? ::g::Uno::Math::Max1(p.X, MinX()) : MinX());
        knowX = true;
    }

    if (HasY())
    {
        p.Y = Y();
        knowY = true;
    }

    if (HasMaxY())
    {
        p.Y = (knowY ? ::g::Uno::Math::Min1(p.Y, MaxY()) : MaxY());
        knowY = true;
    }

    if (HasMinY())
    {
        p.Y = (knowY ? ::g::Uno::Math::Max1(p.Y, MinY()) : MinY());
        knowY = true;
    }

    return p;
}

// public float2 get_RelativeSize() [instance] :2414
::g::Uno::Float2 LayoutParams::RelativeSize()
{
    uStackFrame __("Fuse.LayoutParams", "get_RelativeSize()");
    return ::g::Uno::Float2__New2(RelativeX(), RelativeY());
}

// public float get_RelativeX() [instance] :2417
float LayoutParams::RelativeX()
{
    uStackFrame __("Fuse.LayoutParams", "get_RelativeX()");

    if ((_flags & 512) == 512)
        return 0.0f;

    return ((_flags & 128) == 128) ? _relativeSize.X : _size.X;
}

// public float get_RelativeY() [instance] :2426
float LayoutParams::RelativeY()
{
    uStackFrame __("Fuse.LayoutParams", "get_RelativeY()");

    if ((_flags & 1024) == 1024)
        return 0.0f;

    return ((_flags & 256) == 256) ? _relativeSize.Y : _size.Y;
}

// public void RemoveSize(float2 size) [instance] :2226
void LayoutParams::RemoveSize(::g::Uno::Float2 size)
{
    uStackFrame __("Fuse.LayoutParams", "RemoveSize(float2)");
    _size = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), ::g::Uno::Float2__op_Subtraction2(_size, size));
    _maxSize = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), ::g::Uno::Float2__op_Subtraction2(_maxSize, size));
    _minSize = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), ::g::Uno::Float2__op_Subtraction2(_minSize, size));
}

// public void RemoveSize(float4 size) [instance] :2233
void LayoutParams::RemoveSize1(::g::Uno::Float4 size)
{
    uStackFrame __("Fuse.LayoutParams", "RemoveSize(float4)");
    RemoveSize(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(size.X, size.Y), ::g::Uno::Float2__New2(size.Z, size.W)));
}

// public void Reset() [instance] :2174
void LayoutParams::Reset()
{
    uStackFrame __("Fuse.LayoutParams", "Reset()");
    _flags = 0;
    _size = (_maxSize = (_minSize = (_relativeSize = ::g::Uno::Float2__New1(0.0f))));
}

// public void RetainXY(bool x, bool y) [instance] :2238
void LayoutParams::RetainXY(bool x, bool y)
{
    uStackFrame __("Fuse.LayoutParams", "RetainXY(bool,bool)");

    if (!x)
    {
        _size.X = 0.0f;
        SetFlag(1, false);
    }

    if (!y)
    {
        _size.Y = 0.0f;
        SetFlag(2, false);
    }
}

// private void SetFlag(Fuse.LayoutParams.Flags g, bool val) [instance] :2111
void LayoutParams::SetFlag(int g, bool val)
{
    uStackFrame __("Fuse.LayoutParams", "SetFlag(Fuse.LayoutParams.Flags,bool)");

    if (val)
        _flags = (_flags | g);
    else
        _flags = (_flags & ~g);
}

// public void SetRelativeSize(float2 sz, bool hasX, bool hasY) [instance] :2275
void LayoutParams::SetRelativeSize(::g::Uno::Float2 sz, bool hasX, bool hasY)
{
    uStackFrame __("Fuse.LayoutParams", "SetRelativeSize(float2,bool,bool)");
    _relativeSize = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), sz);
    SetFlag(128, hasX);
    SetFlag(512, !hasX);
    SetFlag(256, hasY);
    SetFlag(1024, !hasY);
}

// public void SetSize(float2 xy, [bool hasX], [bool hasY]) [instance] :2252
void LayoutParams::SetSize(::g::Uno::Float2 xy, bool hasX, bool hasY)
{
    uStackFrame __("Fuse.LayoutParams", "SetSize(float2,[bool],[bool])");
    _size = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), xy);
    SetFlag(1, hasX);

    if (!hasX)
        _size.X = 0.0f;

    SetFlag(2, hasY);

    if (!hasY)
        _size.Y = 0.0f;
}

// public void SetX(float x) [instance] :2263
void LayoutParams::SetX(float x)
{
    uStackFrame __("Fuse.LayoutParams", "SetX(float)");
    SetFlag(1, true);
    _size.X = ::g::Uno::Math::Max1(x, 0.0f);
}

// public void SetY(float y) [instance] :2269
void LayoutParams::SetY(float y)
{
    uStackFrame __("Fuse.LayoutParams", "SetY(float)");
    SetFlag(2, true);
    _size.Y = ::g::Uno::Math::Max1(y, 0.0f);
}

// public float2 get_Size() [instance] :2402
::g::Uno::Float2 LayoutParams::Size()
{
    uStackFrame __("Fuse.LayoutParams", "get_Size()");
    return _size;
}

// public bool get_Temporary() [instance] :2123
bool LayoutParams::Temporary()
{
    uStackFrame __("Fuse.LayoutParams", "get_Temporary()");
    return (_flags & 4) == 4;
}

// public Fuse.LayoutParams TrueClone() [instance] :2152
LayoutParams LayoutParams::TrueClone()
{
    uStackFrame __("Fuse.LayoutParams", "TrueClone()");
    LayoutParams lp = uDefault<LayoutParams>();
    lp._flags = _flags;
    lp._size = _size;
    lp._maxSize = _maxSize;
    lp._minSize = _minSize;
    lp._relativeSize = _relativeSize;
    return lp;
}

// public float get_X() [instance] :2403
float LayoutParams::X()
{
    uStackFrame __("Fuse.LayoutParams", "get_X()");
    return _size.X;
}

// public float get_Y() [instance] :2404
float LayoutParams::Y()
{
    uStackFrame __("Fuse.LayoutParams", "get_Y()");
    return _size.Y;
}

// public static Fuse.LayoutParams Create(float2 size) [static] :2189
LayoutParams LayoutParams__Create(::g::Uno::Float2 size)
{
    uStackFrame __("Fuse.LayoutParams", "Create(float2)");
    LayoutParams lp = uDefault<LayoutParams>();
    lp.SetFlag(1, true);
    lp.SetFlag(2, true);
    lp._size = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), size);
    return lp;
}

// public static Fuse.LayoutParams CreateEmpty() [static] :2218
LayoutParams LayoutParams__CreateEmpty()
{
    uStackFrame __("Fuse.LayoutParams", "CreateEmpty()");
    return uDefault<LayoutParams>();
}

// public static Fuse.LayoutParams CreateTemporary(float2 size) [static] :2198
LayoutParams LayoutParams__CreateTemporary(::g::Uno::Float2 size)
{
    uStackFrame __("Fuse.LayoutParams", "CreateTemporary(float2)");
    LayoutParams lp = uDefault<LayoutParams>();
    lp.SetFlag(1, true);
    lp.SetFlag(2, true);
    lp._size = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), size);
    lp.SetFlag(4, true);
    return lp;
}

// public static Fuse.LayoutParams CreateXY(float2 size, bool hasX, bool hasY) [static] :2208
LayoutParams LayoutParams__CreateXY(::g::Uno::Float2 size, bool hasX, bool hasY)
{
    uStackFrame __("Fuse.LayoutParams", "CreateXY(float2,bool,bool)");
    LayoutParams lp = uDefault<LayoutParams>();
    lp.SetFlag(1, hasX);
    lp.SetFlag(2, hasY);
    lp._size.X = (hasX ? ::g::Uno::Math::Max1(size.X, 0.0f) : 0.0f);
    lp._size.Y = (hasY ? ::g::Uno::Math::Max1(size.Y, 0.0f) : 0.0f);
    return lp;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#29
// -------------------------------------------------------

// public enum LayoutRole :3433
uEnumType* LayoutRole_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.LayoutRole", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Standard", 0LL,
        "Inert", 1LL,
        "Independent", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#51
// -------------------------------------------------------

// private sealed class TranslationModes.LocalMode :7256
// {
TranslationModes__LocalMode_type* TranslationModes__LocalMode_typeof()
{
    static uSStrong<TranslationModes__LocalMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__LocalMode);
    options.TypeSize = sizeof(TranslationModes__LocalMode_type);
    type = (TranslationModes__LocalMode_type*)uClassType::New("Fuse.TranslationModes.LocalMode", options);
    type->fp_ctor_ = (void*)TranslationModes__LocalMode__New1_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))TranslationModes__LocalMode__GetAbsVector_fn;
    type->interface1.fp_get_Flags = (void(*)(uObject*, int*))TranslationModes__LocalMode__get_Flags_fn;
    ::TYPES[90] = ::g::Fuse::Translation_typeof();
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(TranslationModes__LocalMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(TranslationModes__LocalMode_type, interface1));
    return type;
}

// public generated LocalMode() :7256
void TranslationModes__LocalMode__ctor__fn(TranslationModes__LocalMode* __this)
{
    __this->ctor_();
}

// public Fuse.TransformModeFlags get_Flags() :7259
void TranslationModes__LocalMode__get_Flags_fn(TranslationModes__LocalMode* __this, int* __retval)
{
    *__retval = __this->Flags();
}

// public float3 GetAbsVector(Fuse.Translation t) :7258
void TranslationModes__LocalMode__GetAbsVector_fn(TranslationModes__LocalMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetAbsVector(t);
}

// public generated LocalMode New() :7256
void TranslationModes__LocalMode__New1_fn(TranslationModes__LocalMode** __retval)
{
    *__retval = TranslationModes__LocalMode::New1();
}

// public generated LocalMode() [instance] :7256
void TranslationModes__LocalMode::ctor_()
{
}

// public Fuse.TransformModeFlags get_Flags() [instance] :7259
int TranslationModes__LocalMode::Flags()
{
    uStackFrame __("Fuse.TranslationModes.LocalMode", "get_Flags()");
    return 0;
}

// public float3 GetAbsVector(Fuse.Translation t) [instance] :7258
::g::Uno::Float3 TranslationModes__LocalMode::GetAbsVector(::g::Fuse::Translation* t)
{
    uStackFrame __("Fuse.TranslationModes.LocalMode", "GetAbsVector(Fuse.Translation)");
    return uPtr(t)->Vector();
}

// public generated LocalMode New() [static] :7256
TranslationModes__LocalMode* TranslationModes__LocalMode::New1()
{
    TranslationModes__LocalMode* obj1 = (TranslationModes__LocalMode*)uNew(TranslationModes__LocalMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#29
// -------------------------------------------------------

// public enum MarginBoxDependent :3460
uEnumType* MarginBoxDependent_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.MarginBoxDependent", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Layout", 1LL,
        "Size", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#18
// -------------------------------------------------------

// internal sealed extern class MobileBootstrapping :2509
// {
uType* MobileBootstrapping_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(MobileBootstrapping);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.MobileBootstrapping", options);
    type->fp_ctor_ = (void*)MobileBootstrapping__New1_fn;
    ::TYPES[19] = ::g::Uno::Platform2::Application_typeof();
    ::TYPES[20] = ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof();
    ::TYPES[21] = ::g::Uno::EventHandler_typeof();
    ::TYPES[91] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof());
    ::TYPES[10] = ::g::Uno::Platform2::Display_typeof();
    ::TYPES[9] = ::g::Uno::Application_typeof();
    ::TYPES[92] = ::g::Uno::EventArgs_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::MobileBootstrapping::_isInited_, uFieldFlagsStatic);
    return type;
}

// public generated MobileBootstrapping() :2509
void MobileBootstrapping__ctor__fn(MobileBootstrapping* __this)
{
    __this->ctor_();
}

// public static void Init() :2512
void MobileBootstrapping__Init_fn()
{
    MobileBootstrapping::Init();
}

// public generated MobileBootstrapping New() :2509
void MobileBootstrapping__New1_fn(MobileBootstrapping** __retval)
{
    *__retval = MobileBootstrapping::New1();
}

// private static void OnEnterBackground(Uno.Platform2.ApplicationState state) :2574
void MobileBootstrapping__OnEnterBackground_fn(int* state)
{
    MobileBootstrapping::OnEnterBackground(*state);
}

// private static void OnEnterForeground(Uno.Platform2.ApplicationState state) :2557
void MobileBootstrapping__OnEnterForeground_fn(int* state)
{
    MobileBootstrapping::OnEnterForeground(*state);
}

// private static void OnEnterInteractive(Uno.Platform2.ApplicationState state) :2562
void MobileBootstrapping__OnEnterInteractive_fn(int* state)
{
    MobileBootstrapping::OnEnterInteractive(*state);
}

// private static void OnExitInteractive(Uno.Platform2.ApplicationState state) :2568
void MobileBootstrapping__OnExitInteractive_fn(int* state)
{
    MobileBootstrapping::OnExitInteractive(*state);
}

// internal static void OnKeyPressed(object sender, Uno.Platform.KeyEventArgs args) :2542
void MobileBootstrapping__OnKeyPressed_fn(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    MobileBootstrapping::OnKeyPressed(sender, args);
}

// internal static void OnKeyReleased(object sender, Uno.Platform.KeyEventArgs args) :2547
void MobileBootstrapping__OnKeyReleased_fn(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    MobileBootstrapping::OnKeyReleased(sender, args);
}

// private static void OnReceivedLowMemoryWarning(object sender, Uno.EventArgs args) :2578
void MobileBootstrapping__OnReceivedLowMemoryWarning_fn(uObject* sender, ::g::Uno::EventArgs* args)
{
    MobileBootstrapping::OnReceivedLowMemoryWarning(sender, args);
}

// private static void OnStarted(Uno.Platform2.ApplicationState state) :2552
void MobileBootstrapping__OnStarted_fn(int* state)
{
    MobileBootstrapping::OnStarted(*state);
}

// private static void OnTerminating(Uno.Platform2.ApplicationState state) :2531
void MobileBootstrapping__OnTerminating_fn(int* state)
{
    MobileBootstrapping::OnTerminating(*state);
}

bool MobileBootstrapping::_isInited_;

// public generated MobileBootstrapping() [instance] :2509
void MobileBootstrapping::ctor_()
{
}

// public static void Init() [static] :2512
void MobileBootstrapping::Init()
{
    uStackFrame __("Fuse.MobileBootstrapping", "Init()");

    if (MobileBootstrapping::_isInited())
        return;

    MobileBootstrapping::_isInited() = true;
    ::g::Uno::Platform2::Application::add_Started(uDelegate::New(::TYPES[20/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)MobileBootstrapping__OnStarted_fn));
    ::g::Uno::Platform2::Application::add_EnteringForeground(uDelegate::New(::TYPES[20/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)MobileBootstrapping__OnEnterForeground_fn));
    ::g::Uno::Platform2::Application::add_EnteringInteractive(uDelegate::New(::TYPES[20/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)MobileBootstrapping__OnEnterInteractive_fn));
    ::g::Uno::Platform2::Application::add_ExitedInteractive(uDelegate::New(::TYPES[20/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)MobileBootstrapping__OnExitInteractive_fn));
    ::g::Uno::Platform2::Application::add_EnteringBackground(uDelegate::New(::TYPES[20/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)MobileBootstrapping__OnEnterBackground_fn));
    ::g::Uno::Platform2::Application::add_ReceivedLowMemoryWarning(uDelegate::New(::TYPES[21/*Uno.EventHandler*/], (void*)MobileBootstrapping__OnReceivedLowMemoryWarning_fn));
    ::g::Uno::Platform2::Application::add_Terminating(uDelegate::New(::TYPES[20/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)MobileBootstrapping__OnTerminating_fn));
    ::g::Uno::Platform2::Application::add_KeyDown(uDelegate::New(::TYPES[91/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/], (void*)::g::Fuse::KeyboardBootstrapper__OnKeyPressed_fn));
    ::g::Uno::Platform2::Application::add_KeyDown(uDelegate::New(::TYPES[91/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/], (void*)MobileBootstrapping__OnKeyPressed_fn));
    ::g::Uno::Platform2::Application::add_KeyUp(uDelegate::New(::TYPES[91/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/], (void*)::g::Fuse::KeyboardBootstrapper__OnKeyReleased_fn));
    ::g::Uno::Platform2::Application::add_KeyUp(uDelegate::New(::TYPES[91/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/], (void*)MobileBootstrapping__OnKeyReleased_fn));
}

// public generated MobileBootstrapping New() [static] :2509
MobileBootstrapping* MobileBootstrapping::New1()
{
    MobileBootstrapping* obj1 = (MobileBootstrapping*)uNew(MobileBootstrapping_typeof());
    obj1->ctor_();
    return obj1;
}

// private static void OnEnterBackground(Uno.Platform2.ApplicationState state) [static] :2574
void MobileBootstrapping::OnEnterBackground(int state)
{
}

// private static void OnEnterForeground(Uno.Platform2.ApplicationState state) [static] :2557
void MobileBootstrapping::OnEnterForeground(int state)
{
    uStackFrame __("Fuse.MobileBootstrapping", "OnEnterForeground(Uno.Platform2.ApplicationState)");
    uPtr(::g::Uno::Platform2::Display::MainDisplay())->FramesPerSecond(20U);
}

// private static void OnEnterInteractive(Uno.Platform2.ApplicationState state) [static] :2562
void MobileBootstrapping::OnEnterInteractive(int state)
{
    uStackFrame __("Fuse.MobileBootstrapping", "OnEnterInteractive(Uno.Platform2.ApplicationState)");
    uPtr(::g::Uno::Platform2::Display::MainDisplay())->FramesPerSecond(60U);
    uPtr(uPtr(::g::Uno::Application::Current())->Window())->OnGotFocus(::g::Uno::EventArgs::Empty());
}

// private static void OnExitInteractive(Uno.Platform2.ApplicationState state) [static] :2568
void MobileBootstrapping::OnExitInteractive(int state)
{
    uStackFrame __("Fuse.MobileBootstrapping", "OnExitInteractive(Uno.Platform2.ApplicationState)");
    uPtr(::g::Uno::Platform2::Display::MainDisplay())->FramesPerSecond(20U);
    uPtr(uPtr(::g::Uno::Application::Current())->Window())->OnLostFocus(::g::Uno::EventArgs::Empty());
}

// internal static void OnKeyPressed(object sender, Uno.Platform.KeyEventArgs args) [static] :2542
void MobileBootstrapping::OnKeyPressed(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    uStackFrame __("Fuse.MobileBootstrapping", "OnKeyPressed(object,Uno.Platform.KeyEventArgs)");
    uPtr(uPtr(::g::Uno::Application::Current())->Window())->OnKeyPressed(args);
}

// internal static void OnKeyReleased(object sender, Uno.Platform.KeyEventArgs args) [static] :2547
void MobileBootstrapping::OnKeyReleased(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    uStackFrame __("Fuse.MobileBootstrapping", "OnKeyReleased(object,Uno.Platform.KeyEventArgs)");
    uPtr(uPtr(::g::Uno::Application::Current())->Window())->OnKeyReleased(args);
}

// private static void OnReceivedLowMemoryWarning(object sender, Uno.EventArgs args) [static] :2578
void MobileBootstrapping::OnReceivedLowMemoryWarning(uObject* sender, ::g::Uno::EventArgs* args)
{
}

// private static void OnStarted(Uno.Platform2.ApplicationState state) [static] :2552
void MobileBootstrapping::OnStarted(int state)
{
    uStackFrame __("Fuse.MobileBootstrapping", "OnStarted(Uno.Platform2.ApplicationState)");
    uPtr(::g::Uno::Application::Current())->Load();
}

// private static void OnTerminating(Uno.Platform2.ApplicationState state) [static] :2531
void MobileBootstrapping::OnTerminating(int state)
{
    uStackFrame __("Fuse.MobileBootstrapping", "OnTerminating(Uno.Platform2.ApplicationState)");
    ::g::Uno::Platform2::Application::remove_Started(uDelegate::New(::TYPES[20/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)MobileBootstrapping__OnStarted_fn));
    ::g::Uno::Platform2::Application::remove_EnteringForeground(uDelegate::New(::TYPES[20/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)MobileBootstrapping__OnEnterForeground_fn));
    ::g::Uno::Platform2::Application::remove_EnteringInteractive(uDelegate::New(::TYPES[20/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)MobileBootstrapping__OnEnterInteractive_fn));
    ::g::Uno::Platform2::Application::remove_ExitedInteractive(uDelegate::New(::TYPES[20/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)MobileBootstrapping__OnExitInteractive_fn));
    ::g::Uno::Platform2::Application::remove_EnteringBackground(uDelegate::New(::TYPES[20/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)MobileBootstrapping__OnEnterBackground_fn));
    ::g::Uno::Platform2::Application::remove_ReceivedLowMemoryWarning(uDelegate::New(::TYPES[21/*Uno.EventHandler*/], (void*)MobileBootstrapping__OnReceivedLowMemoryWarning_fn));
    ::g::Uno::Platform2::Application::remove_Terminating(uDelegate::New(::TYPES[20/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)MobileBootstrapping__OnTerminating_fn));
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#44
// -------------------------------------------------------

// public static class NameRegistry :6274
// {
// static NameRegistry() :6274
static void NameRegistry__cctor__fn(uType* __type)
{
    NameRegistry::_nameToObj_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[93/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>*/]));
    NameRegistry::_names_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[94/*Uno.Collections.Dictionary<object, string>*/]));
    NameRegistry::_listeners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[95/*Uno.Collections.Dictionary<string, Uno.Collections.List<Fuse.INameListener>>*/]));
}

uClassType* NameRegistry_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.NameRegistry", options);
    type->fp_cctor_ = NameRegistry__cctor__fn;
    ::TYPES[93] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof()));
    ::TYPES[94] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), ::g::Uno::String_typeof());
    ::TYPES[95] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::INameListener_typeof()));
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[96] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::INameListener_typeof());
    ::TYPES[97] = ::g::Fuse::INameListener_typeof()->Array();
    ::TYPES[98] = ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::INameListener_typeof()));
    ::TYPES[99] = ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::INameListener_typeof())), (uintptr_t)&::g::Fuse::NameRegistry::_listeners_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), ::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::NameRegistry::_names_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof())), (uintptr_t)&::g::Fuse::NameRegistry::_nameToObj_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(5,
        new uFunction("AddListener", NULL, (void*)NameRegistry__AddListener_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Fuse::INameListener_typeof()),
        new uFunction("ClearName", NULL, (void*)NameRegistry__ClearName_fn, 0, true, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("GetName", NULL, (void*)NameRegistry__GetName_fn, 0, true, ::g::Uno::String_typeof(), 1, uObject_typeof()),
        new uFunction("RemoveListener", NULL, (void*)NameRegistry__RemoveListener_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::INameListener_typeof()),
        new uFunction("SetName", NULL, (void*)NameRegistry__SetName_fn, 0, true, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()));
    return type;
}

// public static void AddListener(string name, Fuse.INameListener listener) :6333
void NameRegistry__AddListener_fn(uString* name, uObject* listener)
{
    NameRegistry::AddListener(name, listener);
}

// public static void ClearName(object obj) :6326
void NameRegistry__ClearName_fn(uObject* obj)
{
    NameRegistry::ClearName(obj);
}

// public static string GetName(object obj) :6320
void NameRegistry__GetName_fn(uObject* obj, uString** __retval)
{
    *__retval = NameRegistry::GetName(obj);
}

// internal static Uno.Collections.List<object> GetObjectsWithName(string name) :6313
void NameRegistry__GetObjectsWithName_fn(uString* name, ::g::Uno::Collections::List** __retval)
{
    *__retval = NameRegistry::GetObjectsWithName(name);
}

// private static void NotifyNameChanged(object obj, string name) :6355
void NameRegistry__NotifyNameChanged_fn(uObject* obj, uString* name)
{
    NameRegistry::NotifyNameChanged(obj, name);
}

// public static void RemoveListener(Fuse.INameListener listener) :6343
void NameRegistry__RemoveListener_fn(uObject* listener)
{
    NameRegistry::RemoveListener(listener);
}

// public static void SetName(object obj, string name) :6280
void NameRegistry__SetName_fn(uObject* obj, uString* name)
{
    NameRegistry::SetName(obj, name);
}

uSStrong< ::g::Uno::Collections::Dictionary*> NameRegistry::_listeners_;
uSStrong< ::g::Uno::Collections::Dictionary*> NameRegistry::_names_;
uSStrong< ::g::Uno::Collections::Dictionary*> NameRegistry::_nameToObj_;

// public static void AddListener(string name, Fuse.INameListener listener) [static] :6333
void NameRegistry::AddListener(uString* name, uObject* listener)
{
    uStackFrame __("Fuse.NameRegistry", "AddListener(string,Fuse.INameListener)");
    NameRegistry_typeof()->Init();
    bool ret5;
    bool ret6;
    ::g::Uno::Collections::List* ret7;
    ::g::Uno::Collections::List* ret8;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NameRegistry::_listeners()), name, &ret5), ret5))
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(NameRegistry::_listeners()), name, (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[96/*Uno.Collections.List<Fuse.INameListener>*/]));

    if (!(::g::Uno::Collections::List__Contains_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_listeners()), name, &ret7), ret7)), listener, &ret6), ret6))
        ::g::Uno::Collections::List__Add_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_listeners()), name, &ret8), ret8)), listener);
}

// public static void ClearName(object obj) [static] :6326
void NameRegistry::ClearName(uObject* obj)
{
    uStackFrame __("Fuse.NameRegistry", "ClearName(object)");
    NameRegistry_typeof()->Init();
    NameRegistry::SetName(obj, NULL);
}

// public static string GetName(object obj) [static] :6320
uString* NameRegistry::GetName(uObject* obj)
{
    uStackFrame __("Fuse.NameRegistry", "GetName(object)");
    NameRegistry_typeof()->Init();
    bool ret9;
    uString* ret10;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NameRegistry::_names()), obj, &ret9), ret9))
        return NULL;

    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_names()), obj, &ret10), ret10);
}

// internal static Uno.Collections.List<object> GetObjectsWithName(string name) [static] :6313
::g::Uno::Collections::List* NameRegistry::GetObjectsWithName(uString* name)
{
    uStackFrame __("Fuse.NameRegistry", "GetObjectsWithName(string)");
    NameRegistry_typeof()->Init();
    bool ret11;
    ::g::Uno::Collections::List* res = NULL;
    ::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(NameRegistry::_nameToObj()), name, (void**)(&res), &ret11);
    return res;
}

// private static void NotifyNameChanged(object obj, string name) [static] :6355
void NameRegistry::NotifyNameChanged(uObject* obj, uString* name)
{
    uStackFrame __("Fuse.NameRegistry", "NotifyNameChanged(object,string)");
    NameRegistry_typeof()->Init();
    uArray* array2;
    int index3;
    int length4;
    bool ret12;
    ::g::Uno::Collections::List* ret13;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NameRegistry::_listeners()), name, &ret12), ret12))

        for (array2 = (uArray*)uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_listeners()), name, &ret13), ret13))->ToArray(), index3 = 0, length4 = uPtr(array2)->Length(); index3 < length4; ++index3)
        {
            uObject* listener = uPtr(array2)->Strong<uObject*>(index3);
            ::g::Fuse::INameListener::OnNameChanged(uInterface(uPtr(listener), ::g::Fuse::INameListener_typeof()), obj, name);
        }
}

// public static void RemoveListener(Fuse.INameListener listener) [static] :6343
void NameRegistry::RemoveListener(uObject* listener)
{
    uStackFrame __("Fuse.NameRegistry", "RemoveListener(Fuse.INameListener)");
    NameRegistry_typeof()->Init();
    ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong< ::g::Uno::Collections::List*> > ret14;
    bool ret15;
    bool ret16;

    for (::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong< ::g::Uno::Collections::List*> > enum1 = (::g::Uno::Collections::Dictionary__ValueCollection__GetEnumerator_fn(uPtr((::g::Uno::Collections::Dictionary__ValueCollection*)uPtr(NameRegistry::_listeners())->Values()), &ret14), ret14); enum1.MoveNext(::TYPES[98/*Uno.Collections.Dictionary<string, Uno.Collections.List<Fuse.INameListener>>.ValueCollection.Enumerator*/]); )
    {
        ::g::Uno::Collections::List* list = enum1.Current(::TYPES[98/*Uno.Collections.Dictionary<string, Uno.Collections.List<Fuse.INameListener>>.ValueCollection.Enumerator*/]);

        if ((::g::Uno::Collections::List__Contains_fn(uPtr(list), listener, &ret15), ret15))
        {
            ::g::Uno::Collections::List__Remove_fn(uPtr(list), listener, &ret16);
            break;
        }
    }
}

// public static void SetName(object obj, string name) [static] :6280
void NameRegistry::SetName(uObject* obj, uString* name)
{
    uStackFrame __("Fuse.NameRegistry", "SetName(object,string)");
    NameRegistry_typeof()->Init();
    bool ret17;
    uString* ret18;
    bool ret19;
    ::g::Uno::Collections::List* ret20;
    ::g::Uno::Collections::List* ret21;
    bool ret22;
    bool ret23;
    bool ret24;
    ::g::Uno::Collections::List* ret25;
    uString* oldName = NULL;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NameRegistry::_names()), obj, &ret17), ret17))
    {
        oldName = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_names()), obj, &ret18), ret18);
        ::g::Uno::Collections::List__Remove_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_nameToObj()), oldName, &ret20), ret20)), obj, &ret19);

        if (uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_nameToObj()), oldName, &ret21), ret21))->Count() == 0)
            ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(NameRegistry::_nameToObj()), oldName, &ret22);
    }

    if (::g::Uno::String::op_Inequality(name, oldName))
    {
        if (::g::Uno::String::op_Equality(name, NULL))
            ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(NameRegistry::_names()), obj, &ret23);
        else
        {
            ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(NameRegistry::_names()), obj, name);

            if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NameRegistry::_nameToObj()), name, &ret24), ret24))
                ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(NameRegistry::_nameToObj()), name, (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[99/*Uno.Collections.List<object>*/]));

            ::g::Uno::Collections::List__Add_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_nameToObj()), name, &ret25), ret25)), obj);
        }

        if (::g::Uno::String::op_Inequality(oldName, NULL))
            NameRegistry::NotifyNameChanged(obj, oldName);

        if (::g::Uno::String::op_Inequality(name, NULL))
            NameRegistry::NotifyNameChanged(obj, name);
    }
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#47
// -------------------------------------------------------

// public sealed class NativeTheme :6809
// {
::g::Fuse::Style_type* NativeTheme_typeof()
{
    static uSStrong< ::g::Fuse::Style_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeTheme);
    options.TypeSize = sizeof(::g::Fuse::Style_type);
    type = (::g::Fuse::Style_type*)uClassType::New("Fuse.NativeTheme", options);
    type->SetBase(::g::Fuse::Theme_typeof());
    type->fp_ctor_ = (void*)NativeTheme__New2_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Style__Apply_fn;
    ::TYPES[79] = ::g::Fuse::Theme_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Fuse::Style_type, interface0));
    type->SetFields(6,
        ::g::Fuse::Theme_typeof(), (uintptr_t)&::g::Fuse::NativeTheme::_singleton_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)NativeTheme__New2_fn, 0, true, NativeTheme_typeof(), 0),
        new uFunction("get_Singleton", NULL, (void*)NativeTheme__get_Singleton_fn, 0, true, ::g::Fuse::Theme_typeof(), 0));
    return type;
}

// public generated NativeTheme() :6809
void NativeTheme__ctor_3_fn(NativeTheme* __this)
{
    __this->ctor_3();
}

// public generated NativeTheme New() :6809
void NativeTheme__New2_fn(NativeTheme** __retval)
{
    *__retval = NativeTheme::New2();
}

// public static Fuse.Theme get_Singleton() :6815
void NativeTheme__get_Singleton_fn(::g::Fuse::Theme** __retval)
{
    *__retval = NativeTheme::Singleton();
}

uSStrong< ::g::Fuse::Theme*> NativeTheme::_singleton_;

// public generated NativeTheme() [instance] :6809
void NativeTheme::ctor_3()
{
    uStackFrame __("Fuse.NativeTheme", ".ctor()");
    ctor_1();
}

// public generated NativeTheme New() [static] :6809
NativeTheme* NativeTheme::New2()
{
    NativeTheme* obj1 = (NativeTheme*)uNew(NativeTheme_typeof());
    obj1->ctor_3();
    return obj1;
}

// public static Fuse.Theme get_Singleton() [static] :6815
::g::Fuse::Theme* NativeTheme::Singleton()
{
    uStackFrame __("Fuse.NativeTheme", "get_Singleton()");

    if (NativeTheme::_singleton() == NULL)
        NativeTheme::_singleton() = NativeTheme::New2();

    return NativeTheme::_singleton();
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#19
// -------------------------------------------------------

// public interfacemodifiers class Node :2593
// {
// static Node() :2593
static void Node__cctor__fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret9;
    ::g::Fuse::StyleProperty1* ret10;
    ::g::Fuse::StyleProperty1* ret11;
    Node::_isContextEnabledChangedHandle_ = ::g::Fuse::Properties::CreateHandle();
    Node::IsEnabledProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[100/*Fuse.StyleProperty<Fuse.Node, bool>*/], uCRef(true), uDelegate::New(::TYPES[25/*Uno.Action<Fuse.Node>*/], (void*)Node__OnIsEnabledChangedInternal_fn), NULL, NULL, &ret9), ret9);
    Node::_isVisibleChangedHandle_ = ::g::Fuse::Properties::CreateHandle();
    Node::_layerProperty_ = ::g::Fuse::Properties::CreateHandle();
    Node::_layoutRoleProperty_ = ::g::Fuse::Properties::CreateHandle();
    Node::SnapToPixelsProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[100/*Fuse.StyleProperty<Fuse.Node, bool>*/], uCRef(true), uDelegate::New(::TYPES[25/*Uno.Action<Fuse.Node>*/], (void*)Node__InvalidateLayout1_fn), uDelegate::New(::TYPES[101/*Uno.Action<Fuse.Node, bool>*/], (void*)Node__SetSnapToPixels_fn), uDelegate::New(::TYPES[102/*Uno.Func<Fuse.Node, bool>*/], (void*)Node__GetSnapToPixels_fn), &ret10), ret10);
    Node::_nameHandle_ = ::g::Fuse::Properties::CreateHandle();
    Node::NameProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[103/*Fuse.StyleProperty<Fuse.Node, string>*/], NULL, NULL, uDelegate::New(::TYPES[104/*Uno.Action<Fuse.Node, string>*/], (void*)Node__SetName_fn), uDelegate::New(::TYPES[105/*Uno.Func<Fuse.Node, string>*/], (void*)Node__GetName_fn), &ret11), ret11);
    Node::_resourcesHandle_ = ::g::Fuse::Properties::CreateHandle();
    Node::_styleHandle_ = ::g::Fuse::Properties::CreateHandle();
    Node::ScriptClass_ = ::g::Fuse::Scripting::ScriptClass::New1(NULL, uArray::Init< ::g::Fuse::Scripting::ScriptMethod*>(::TYPES[106/*Fuse.Scripting.ScriptMethod[]*/], 3, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[108/*Fuse.Scripting.ScriptMethod<Fuse.Node>*/], ::STRINGS[48/*"enable"*/], uDelegate::New(::TYPES[109/*Uno.Action<Fuse.Node, object[]>*/], (void*)Node__enable_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[108/*Fuse.Scripting.ScriptMethod<Fuse.Node>*/], ::STRINGS[49/*"disable"*/], uDelegate::New(::TYPES[109/*Uno.Action<Fuse.Node, object[]>*/], (void*)Node__disable_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[108/*Fuse.Scripting.ScriptMethod<Fuse.Node>*/], ::STRINGS[50/*"bringIntoView"*/], uDelegate::New(::TYPES[109/*Uno.Action<Fuse.Node, object[]>*/], (void*)Node__bringIntoView_fn), 2)));
    Node::_rootedHandle_ = ::g::Fuse::Properties::CreateHandle();
    Node::_unrootedHandle_ = ::g::Fuse::Properties::CreateHandle();
}

Node_type* Node_typeof()
{
    static uSStrong<Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 68;
    options.InterfaceCount = 2;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(Node);
    options.TypeSize = sizeof(Node_type);
    type = (Node_type*)uClassType::New("Fuse.Node", options);
    type->fp_cctor_ = Node__cctor__fn;
    type->fp_get_AbsoluteViewportOrigin = Node__get_AbsoluteViewportOrigin_fn;
    type->fp_get_CanAdjustMarginBox = Node__get_CanAdjustMarginBox_fn;
    type->fp_Draw = Node__Draw_fn;
    type->fp_DrawSelection = Node__DrawSelection_fn;
    type->fp_GetMarginSize = Node__GetMarginSize_fn;
    type->fp_GetSubNode = Node__GetSubNode_fn;
    type->fp_get_HitTestBounds = Node__get_HitTestBounds_fn;
    type->fp_get_HitTestChildrenBounds = Node__get_HitTestChildrenBounds_fn;
    type->fp_get_HitTestLocalBounds = Node__get_HitTestLocalBounds_fn;
    type->fp_InvalidateLocalTransform = Node__InvalidateLocalTransform_fn;
    type->fp_get_IsLocalVisible = Node__get_IsLocalVisible_fn;
    type->fp_IsMarginBoxDependent = Node__IsMarginBoxDependent_fn;
    type->fp_get_LocalBounds = Node__get_LocalBounds_fn;
    type->fp_get_LocalRenderBounds = Node__get_LocalRenderBounds_fn;
    type->fp_OnAdjustMarginBoxPosition = Node__OnAdjustMarginBoxPosition_fn;
    type->fp_OnApplyStyle = Node__OnApplyStyle_fn;
    type->fp_OnArrangeMarginBox = Node__OnArrangeMarginBox_fn;
    type->fp_OnBehaviorAdded = Node__OnBehaviorAdded_fn;
    type->fp_OnBehaviorRemoved = Node__OnBehaviorRemoved_fn;
    type->fp_OnHitTest = Node__OnHitTest_fn;
    type->fp_OnInvalidateChildZOffset = Node__OnInvalidateChildZOffset_fn;
    type->fp_OnInvalidateLayout = Node__OnInvalidateLayout_fn;
    type->fp_OnInvalidateRenderBounds = Node__OnInvalidateRenderBounds_fn;
    type->fp_OnInvalidateVisual = Node__OnInvalidateVisual_fn;
    type->fp_OnResetStyle = Node__OnResetStyle_fn;
    type->fp_OnRooted = Node__OnRooted_fn;
    type->fp_OnUnrooted = Node__OnUnrooted_fn;
    type->fp_PrependImplicitTransform = Node__PrependImplicitTransform_fn;
    type->fp_PrependInverseTransformOrigin = Node__PrependInverseTransformOrigin_fn;
    type->fp_PrependTransformOrigin = Node__PrependTransformOrigin_fn;
    type->fp_SoftDispose = Node__SoftDispose_fn;
    type->fp_get_SubNodeCount = Node__get_SubNodeCount_fn;
    type->fp_WindowToWorldRay = Node__WindowToWorldRay_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))Node__FuseIChildObjectget_ParentObject_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))Node__set_DataContext_fn;
    ::STRINGS[48] = uString::Const("enable");
    ::STRINGS[49] = uString::Const("disable");
    ::STRINGS[50] = uString::Const("bringIntoView");
    ::STRINGS[51] = uString::Const("Should not have styling applied if not rooted");
    ::STRINGS[52] = uString::Const("Too many style properties - not enough backing store bits in Node");
    ::STRINGS[53] = uString::Const("Layout was invalidated while performing layout");
    ::STRINGS[54] = uString::Const("Invalid call to RearrangeMarginBox");
    ::STRINGS[55] = uString::Const("Rooting happening after the mixers update phase");
    ::STRINGS[56] = uString::Const("/usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#36");
    ::STRINGS[57] = uString::Const("Root");
    ::STRINGS[58] = uString::Const("Node already has a different parent");
    ::STRINGS[59] = uString::Const("Unrooting happening after the mixers update phase");
    ::STRINGS[60] = uString::Const("Unroot");
    ::TYPES[100] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Node_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[25] = ::g::Uno::Action1_typeof()->MakeType(Node_typeof());
    ::TYPES[101] = ::g::Uno::Action2_typeof()->MakeType(Node_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[102] = ::g::Uno::Func1_typeof()->MakeType(Node_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[103] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Node_typeof(), ::g::Uno::String_typeof());
    ::TYPES[104] = ::g::Uno::Action2_typeof()->MakeType(Node_typeof(), ::g::Uno::String_typeof());
    ::TYPES[105] = ::g::Uno::Func1_typeof()->MakeType(Node_typeof(), ::g::Uno::String_typeof());
    ::TYPES[106] = ::g::Fuse::Scripting::ScriptMethod_typeof()->Array();
    ::TYPES[107] = ::g::Fuse::Scripting::ScriptMethod_typeof();
    ::TYPES[108] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(Node_typeof());
    ::TYPES[109] = ::g::Uno::Action2_typeof()->MakeType(Node_typeof(), uObject_typeof()->Array());
    ::TYPES[1] = ::g::Fuse::Behavior_typeof();
    ::TYPES[8] = ::g::Fuse::Style_typeof();
    ::TYPES[110] = ::g::Fuse::Transform_typeof();
    ::TYPES[111] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Style_typeof());
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[112] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Style_typeof());
    ::TYPES[3] = uObject_typeof();
    ::TYPES[32] = ::g::Uno::Int_typeof();
    ::TYPES[113] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), Node__InteractionItem_typeof());
    ::TYPES[114] = Node__InteractionItem_typeof();
    ::TYPES[115] = ::g::Fuse::FastMatrix_typeof();
    ::TYPES[60] = ::g::Uno::Float4x4_typeof();
    ::TYPES[40] = ::g::Uno::Float4_typeof();
    ::TYPES[99] = ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof());
    ::TYPES[116] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(uObject_typeof(), Node__InteractionItem_typeof());
    ::TYPES[117] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(uObject_typeof(), Node__InteractionItem_typeof());
    ::TYPES[118] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(uObject_typeof());
    ::TYPES[72] = ::g::Uno::Action_typeof();
    ::TYPES[119] = ::g::Fuse::DrawHelpers_typeof();
    ::TYPES[120] = ::g::Fuse::Time_typeof();
    ::TYPES[61] = ::g::Uno::Float_typeof();
    ::TYPES[121] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    ::TYPES[82] = ::g::Fuse::HitTestCallback_typeof();
    ::TYPES[122] = Node__HitTestRecord_typeof();
    ::TYPES[123] = ::g::Fuse::PropertyState_typeof();
    ::TYPES[124] = ::g::Uno::Collections::HashSet_typeof()->MakeType(Node_typeof());
    ::TYPES[125] = ::g::Fuse::IChildObject_typeof();
    ::TYPES[126] = ::g::Fuse::HitTestContext_typeof();
    ::TYPES[127] = ::g::Uno::Float3_typeof();
    ::TYPES[78] = ::g::Uno::Geometry::Ray_typeof();
    ::TYPES[128] = ::g::Fuse::UpdateManager_typeof();
    ::TYPES[21] = ::g::Uno::EventHandler_typeof();
    ::TYPES[92] = ::g::Uno::EventArgs_typeof();
    ::TYPES[26] = ::g::Uno::Delegate_typeof();
    ::TYPES[129] = ::g::Fuse::BeginRemoveHandler_typeof();
    ::TYPES[130] = ::g::Fuse::RequestBringIntoViewHandler_typeof();
    ::TYPES[131] = ::g::Fuse::DataContextChangedHandler_typeof();
    ::TYPES[132] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    ::TYPES[133] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Transform_typeof());
    ::TYPES[134] = ::g::Uno::UX::Resource_typeof();
    ::TYPES[135] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Transform_typeof());
    ::TYPES[42] = ::g::Fuse::IViewport_typeof();
    ::TYPES[77] = ::g::Uno::Float2_typeof();
    ::TYPES[136] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), uObject_typeof());
    ::TYPES[137] = ::g::Uno::UInt_typeof();
    ::TYPES[138] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof());
    ::TYPES[139] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Resource_typeof());
    ::TYPES[140] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    ::TYPES[141] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    ::TYPES[142] = ::g::Fuse::NodeBounds_typeof();
    ::TYPES[143] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Transform_typeof());
    ::TYPES[144] = ::g::Fuse::Layer_typeof();
    ::TYPES[145] = ::g::Fuse::LayoutRole_typeof();
    ::TYPES[146] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Uno::UX::Resource_typeof());
    ::TYPES[147] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Resource_typeof());
    ::TYPES[148] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Style_typeof());
    ::TYPES[149] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Style_typeof());
    ::TYPES[150] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Transform_typeof());
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(Node_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(Node_type, interface1));
    type->SetFields(0,
        ::g::Fuse::LayoutParams_typeof(), offsetof(::g::Fuse::Node, _ambLayoutParams), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Node, _ambMargin), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Node, _ambPosition), 0,
        ::g::Uno::UInt_typeof(), offsetof(::g::Fuse::Node, _b0), 0,
        ::g::Uno::UInt_typeof(), offsetof(::g::Fuse::Node, _b1), 0,
        ::g::Uno::UInt_typeof(), offsetof(::g::Fuse::Node, _b2), 0,
        ::g::Uno::UInt_typeof(), offsetof(::g::Fuse::Node, _b3), 0,
        ::g::Uno::UInt_typeof(), offsetof(::g::Fuse::Node, _b4), 0,
        ::g::Uno::UInt_typeof(), offsetof(::g::Fuse::Node, _b5), 0,
        ::g::Uno::UInt_typeof(), offsetof(::g::Fuse::Node, _b6), 0,
        ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Behavior_typeof()), offsetof(::g::Fuse::Node, _behaviors), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Node, _cachedRenderTargetSize), 0,
        uObject_typeof(), offsetof(::g::Fuse::Node, _dataContext), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Node, _drawCost), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Node, _hasMarginBox), 0,
        ::g::Fuse::NodeBounds_typeof(), offsetof(::g::Fuse::Node, _hitTestBoundsCache), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Node, _ignoreStyle), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), Node__InteractionItem_typeof()), offsetof(::g::Fuse::Node, _interactions), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Node, _isContextEnabledCache), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Node, _isFlat), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Node, _isFlatCached), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Node, _isHitTestBoundsCacheValid), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Node, _isLocalFlat), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Node, _isLocalFlatCached), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Node, _isVisibleCached), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Node, _lastInvalidate), 0,
        ::g::Fuse::InvalidateLayoutReason_typeof(), offsetof(::g::Fuse::Node, _layoutDirty), 0,
        ::g::Fuse::FastMatrix_typeof(), offsetof(::g::Fuse::Node, _localTransform), 0,
        ::g::Fuse::FastMatrix_typeof(), offsetof(::g::Fuse::Node, _localTransformInverse), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Node, _name), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Node, _nodebits), 0,
        Node_typeof(), offsetof(::g::Fuse::Node, _parent), 0,
        ::g::Fuse::BeginRemoveArgs_typeof(), offsetof(::g::Fuse::Node, _pendingRemove), 0,
        ::g::Fuse::Properties_typeof(), offsetof(::g::Fuse::Node, _properties), 0,
        Node__RootStage_typeof(), offsetof(::g::Fuse::Node, _rootStage), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Node, _snapToPixels), 0,
        ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Transform_typeof()), offsetof(::g::Fuse::Node, _transforms), 0,
        ::g::Fuse::FastMatrix_typeof(), offsetof(::g::Fuse::Node, _worldTransform), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Node, _worldTransformCacheVersion), 0,
        ::g::Fuse::FastMatrix_typeof(), offsetof(::g::Fuse::Node, _worldTransformInverse), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Node, _worldTransformInverseCacheVersion), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Node, _worldTransformParentCacheVersion), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Node, _worldTransformVersion), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Node, _zOffset), 0,
        Node_typeof(), offsetof(::g::Fuse::Node, OverrideContextParent), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Node, ZLayer), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Node, ZOffsetFixed), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Node, ZOffsetNatural), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Node, _AddedByStyle), 0,
        ::g::Fuse::BeginRemoveHandler_typeof(), offsetof(::g::Fuse::Node, BeginRemove1), 0,
        ::g::Fuse::DataContextChangedHandler_typeof(), offsetof(::g::Fuse::Node, DataContextChanged1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Node, IsInteractingChanged1), 0,
        ::g::Fuse::RequestBringIntoViewHandler_typeof(), offsetof(::g::Fuse::Node, RequestBringIntoView1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Node, TransformsChanged1), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Node::_isContextEnabledChangedHandle_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Node::_isVisibleChangedHandle_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Node::_layerProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Node::_layoutRoleProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Node::_nameHandle_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Node::_performingLayout_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Node::_resourcesHandle_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Node::_rootedHandle_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Node::_styleHandle_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Node::_unrootedHandle_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Node_typeof(), ::g::Uno::Bool_typeof()), (uintptr_t)&::g::Fuse::Node::IsEnabledProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Node_typeof(), ::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::Node::NameProperty_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::ScriptClass_typeof(), (uintptr_t)&::g::Fuse::Node::ScriptClass_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Node_typeof(), ::g::Uno::Bool_typeof()), (uintptr_t)&::g::Fuse::Node::SnapToPixelsProperty_, uFieldFlagsStatic);
    type->Reflection.SetFields(4,
        new uField("IsEnabledProperty", 64),
        new uField("NameProperty", 65),
        new uField("ScriptClass", 66),
        new uField("SnapToPixelsProperty", 67));
    type->Reflection.SetFunctions(92,
        new uFunction("get_AbsoluteZoom", NULL, (void*)Node__get_AbsoluteZoom_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("AddDrawCost", NULL, (void*)Node__AddDrawCost_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("AddStyleBehavior", NULL, (void*)Node__AddStyleBehavior_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Behavior_typeof()),
        new uFunction("AddStyleStyle", NULL, (void*)Node__AddStyleStyle_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Style_typeof()),
        new uFunction("AddStyleTransform", NULL, (void*)Node__AddStyleTransform_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Transform_typeof()),
        new uFunction("ApplyStyle", NULL, (void*)Node__ApplyStyle1_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("ArrangeMarginBox", NULL, (void*)Node__ArrangeMarginBox_fn, 0, false, ::g::Uno::Float2_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Fuse::LayoutParams_typeof()),
        new uFunction("BeginInteraction", NULL, (void*)Node__BeginInteraction_fn, 0, false, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::Action_typeof()),
        new uFunction("add_BeginRemove", NULL, (void*)Node__add_BeginRemove_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::BeginRemoveHandler_typeof()),
        new uFunction("remove_BeginRemove", NULL, (void*)Node__remove_BeginRemove_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::BeginRemoveHandler_typeof()),
        new uFunction("get_Behaviors", NULL, (void*)Node__get_Behaviors_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Behavior_typeof()), 0),
        new uFunction("BringIntoView", NULL, (void*)Node__BringIntoView_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("CancelInteractions", NULL, (void*)Node__CancelInteractions_fn, 0, false, uVoid_typeof(), 1, Node__CancelInteractionsType_typeof()),
        new uFunction("get_ContextParent", NULL, (void*)Node__get_ContextParent_fn, 0, false, Node_typeof(), 0),
        new uFunction("get_DataContext", NULL, (void*)Node__get_DataContext_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_DataContext", NULL, (void*)Node__set_DataContext_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("add_DataContextChanged", NULL, (void*)Node__add_DataContextChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::DataContextChangedHandler_typeof()),
        new uFunction("remove_DataContextChanged", NULL, (void*)Node__remove_DataContextChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::DataContextChangedHandler_typeof()),
        new uFunction("Draw", NULL, NULL, offsetof(Node_type, fp_Draw), false, uVoid_typeof(), 1, ::g::Fuse::DrawContext_typeof()),
        new uFunction("get_DrawCost", NULL, (void*)Node__get_DrawCost_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("DrawSelection", NULL, NULL, offsetof(Node_type, fp_DrawSelection), false, uVoid_typeof(), 1, ::g::Fuse::DrawContext_typeof()),
        new uFunction("EndInteraction", NULL, (void*)Node__EndInteraction_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("FindByType`1", type, (void*)Node__FindByType_fn, 0, false, type->U(0), 0),
        new uFunction("FindNodeByName", NULL, (void*)Node__FindNodeByName_fn, 0, false, Node_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("FindObjectByName", NULL, (void*)Node__FindObjectByName_fn, 0, false, uObject_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof())),
        new uFunction("GetHitWindowPoint", NULL, (void*)Node__GetHitWindowPoint_fn, 0, false, Node_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("GetMarginSize", NULL, NULL, offsetof(Node_type, fp_GetMarginSize), false, ::g::Uno::Float2_typeof(), 1, ::g::Fuse::LayoutParams_typeof()),
        new uFunction("GetNearestAncestorOfType`1", type, (void*)Node__GetNearestAncestorOfType_fn, 0, false, type->U(0), 0),
        new uFunction("GetSubNode", NULL, NULL, offsetof(Node_type, fp_GetSubNode), false, Node_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("GetTransformTo", NULL, (void*)Node__GetTransformTo_fn, 0, false, ::g::Uno::Float4x4_typeof(), 1, Node_typeof()),
        new uFunction("HitTest", NULL, (void*)Node__HitTest_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::HitTestContext_typeof()),
        new uFunction("get_HitTestBounds", NULL, NULL, offsetof(Node_type, fp_get_HitTestBounds), false, ::g::Fuse::NodeBounds_typeof(), 0),
        new uFunction("get_IgnoreStyle", NULL, (void*)Node__get_IgnoreStyle_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IgnoreStyle", NULL, (void*)Node__set_IgnoreStyle_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("InvalidateLayout", NULL, (void*)Node__InvalidateLayout_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::InvalidateLayoutReason_typeof()),
        new uFunction("InvalidateRenderBounds", NULL, (void*)Node__InvalidateRenderBounds_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("InvalidateVisual", NULL, (void*)Node__InvalidateVisual_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_IsContextEnabled", NULL, (void*)Node__get_IsContextEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("add_IsContextEnabledChanged", NULL, (void*)Node__add_IsContextEnabledChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_IsContextEnabledChanged", NULL, (void*)Node__remove_IsContextEnabledChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_IsEnabled", NULL, (void*)Node__get_IsEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsEnabled", NULL, (void*)Node__set_IsEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_IsInteracting", NULL, (void*)Node__get_IsInteracting_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("add_IsInteractingChanged", NULL, (void*)Node__add_IsInteractingChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_IsInteractingChanged", NULL, (void*)Node__remove_IsInteractingChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_IsLocalRooted", NULL, (void*)Node__get_IsLocalRooted_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsLocalVisible", NULL, NULL, offsetof(Node_type, fp_get_IsLocalVisible), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsRooted", NULL, (void*)Node__get_IsRooted_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsVisible", NULL, (void*)Node__get_IsVisible_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("add_IsVisibleChanged", NULL, (void*)Node__add_IsVisibleChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_IsVisibleChanged", NULL, (void*)Node__remove_IsVisibleChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_Layer", NULL, (void*)Node__get_Layer_fn, 0, false, ::g::Fuse::Layer_typeof(), 0),
        new uFunction("set_Layer", NULL, (void*)Node__set_Layer_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layer_typeof()),
        new uFunction("get_LayoutRole", NULL, (void*)Node__get_LayoutRole_fn, 0, false, ::g::Fuse::LayoutRole_typeof(), 0),
        new uFunction("set_LayoutRole", NULL, (void*)Node__set_LayoutRole_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::LayoutRole_typeof()),
        new uFunction("get_LocalBounds", NULL, NULL, offsetof(Node_type, fp_get_LocalBounds), false, ::g::Uno::Geometry::Box_typeof(), 0),
        new uFunction("get_LocalRenderBounds", NULL, NULL, offsetof(Node_type, fp_get_LocalRenderBounds), false, ::g::Uno::Rect_typeof(), 0),
        new uFunction("LocalToParent", NULL, (void*)Node__LocalToParent_fn, 0, false, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_LocalTransform", NULL, (void*)Node__get_LocalTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_Name", NULL, (void*)Node__get_Name_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Name", NULL, (void*)Node__set_Name_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("OnIsSelectedChanged", NULL, (void*)Node__OnIsSelectedChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Parent", NULL, (void*)Node__get_Parent_fn, 0, false, Node_typeof(), 0),
        new uFunction("ParentToLocal", NULL, (void*)Node__ParentToLocal_fn, 0, false, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_Properties", NULL, (void*)Node__get_Properties_fn, 0, false, ::g::Fuse::Properties_typeof(), 0),
        new uFunction("RemoveDrawCost", NULL, (void*)Node__RemoveDrawCost_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("add_RequestBringIntoView", NULL, (void*)Node__add_RequestBringIntoView_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::RequestBringIntoViewHandler_typeof()),
        new uFunction("remove_RequestBringIntoView", NULL, (void*)Node__remove_RequestBringIntoView_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::RequestBringIntoViewHandler_typeof()),
        new uFunction("get_Resources", NULL, (void*)Node__get_Resources_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Resource_typeof()), 0),
        new uFunction("add_Rooted", NULL, (void*)Node__add_Rooted_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_Rooted", NULL, (void*)Node__remove_Rooted_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("SetResource", NULL, (void*)Node__SetResource_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), uObject_typeof()),
        new uFunction("get_SnapToPixels", NULL, (void*)Node__get_SnapToPixels_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_SnapToPixels", NULL, (void*)Node__set_SnapToPixels_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Styles", NULL, (void*)Node__get_Styles_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Style_typeof()), 0),
        new uFunction("get_SubNodeCount", NULL, NULL, offsetof(Node_type, fp_get_SubNodeCount), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_Transforms", NULL, (void*)Node__get_Transforms_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Transform_typeof()), 0),
        new uFunction("add_TransformsChanged", NULL, (void*)Node__add_TransformsChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_TransformsChanged", NULL, (void*)Node__remove_TransformsChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("TryGetResource", NULL, (void*)Node__TryGetResource_fn, 0, false, ::g::Uno::Bool_typeof(), 3, ::g::Uno::String_typeof(), ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof()), uObject_typeof()->ByRef()),
        new uFunction("add_Unrooted", NULL, (void*)Node__add_Unrooted_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_Unrooted", NULL, (void*)Node__remove_Unrooted_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_ValidFrameCount", NULL, (void*)Node__get_ValidFrameCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_Viewport", NULL, (void*)Node__get_Viewport_fn, 0, false, ::g::Fuse::IViewport_typeof(), 0),
        new uFunction("VisitSubtree", NULL, (void*)Node__VisitSubtree_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(Node_typeof())),
        new uFunction("WindowToLocal", NULL, (void*)Node__WindowToLocal_fn, 0, false, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("WindowToWorldRay", NULL, NULL, offsetof(Node_type, fp_WindowToWorldRay), false, ::g::Uno::Geometry::Ray_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_WorldPosition", NULL, (void*)Node__get_WorldPosition_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("get_WorldTransform", NULL, (void*)Node__get_WorldTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_WorldTransformInverse", NULL, (void*)Node__get_WorldTransformInverse_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_ZOffset", NULL, (void*)Node__get_ZOffset_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ZOffset", NULL, (void*)Node__set_ZOffset_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}

// protected generated Node() :2593
void Node__ctor__fn(Node* __this)
{
    __this->ctor_();
}

// protected virtual float2 get_AbsoluteViewportOrigin() :3828
void Node__get_AbsoluteViewportOrigin_fn(Node* __this, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Node", "get_AbsoluteViewportOrigin()");

    if (__this->Parent() != NULL)
        return *__retval = uPtr(__this->Parent())->AbsoluteViewportOrigin(), void();

    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// public float get_AbsoluteZoom() :3676
void Node__get_AbsoluteZoom_fn(Node* __this, float* __retval)
{
    *__retval = __this->AbsoluteZoom();
}

// public void AddDrawCost(double cost) :4736
void Node__AddDrawCost_fn(Node* __this, double* cost)
{
    __this->AddDrawCost(*cost);
}

// internal generated bool get_AddedByStyle() :4758
void Node__get_AddedByStyle_fn(Node* __this, bool* __retval)
{
    *__retval = __this->AddedByStyle();
}

// internal generated void set_AddedByStyle(bool value) :4758
void Node__set_AddedByStyle_fn(Node* __this, bool* value)
{
    __this->AddedByStyle(*value);
}

// private void AddEventHandler(Fuse.PropertyHandle ph, Fuse.Node.NodeBits ne, object handler) :2998
void Node__AddEventHandler_fn(Node* __this, ::g::Fuse::PropertyHandle* ph, int* ne, uObject* handler)
{
    __this->AddEventHandler(ph, *ne, handler);
}

// public void AddStyleBehavior(Fuse.Behavior b) :2607
void Node__AddStyleBehavior_fn(Node* __this, ::g::Fuse::Behavior* b)
{
    __this->AddStyleBehavior(b);
}

// public void AddStyleStyle(Fuse.Style style) :4152
void Node__AddStyleStyle_fn(Node* __this, ::g::Fuse::Style* style)
{
    __this->AddStyleStyle(style);
}

// public void AddStyleTransform(Fuse.Transform t) :4367
void Node__AddStyleTransform_fn(Node* __this, ::g::Fuse::Transform* t)
{
    __this->AddStyleTransform(t);
}

// internal void AdjustMarginBoxPosition(float2 position) :3817
void Node__AdjustMarginBoxPosition_fn(Node* __this, ::g::Uno::Float2* position)
{
    __this->AdjustMarginBoxPosition(*position);
}

// protected bool ApplyLocalStyles(object target) :4269
void Node__ApplyLocalStyles_fn(Node* __this, uObject* target, bool* __retval)
{
    *__retval = __this->ApplyLocalStyles(target);
}

// private void ApplyStyle() :4246
void Node__ApplyStyle_fn(Node* __this)
{
    __this->ApplyStyle();
}

// public void ApplyStyle(object target) :4258
void Node__ApplyStyle1_fn(Node* __this, uObject* target)
{
    __this->ApplyStyle1(target);
}

// public float2 ArrangeMarginBox(float2 position, Fuse.LayoutParams lp) :3784
void Node__ArrangeMarginBox_fn(Node* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ArrangeMarginBox(*position, *lp);
}

// public void BeginInteraction(object id, Uno.Action cancelled) :3168
void Node__BeginInteraction_fn(Node* __this, uObject* id, uDelegate* cancelled)
{
    __this->BeginInteraction(id, cancelled);
}

// public generated void add_BeginRemove(Fuse.BeginRemoveHandler value) :4756
void Node__add_BeginRemove_fn(Node* __this, uDelegate* value)
{
    __this->add_BeginRemove(value);
}

// public generated void remove_BeginRemove(Fuse.BeginRemoveHandler value) :4756
void Node__remove_BeginRemove_fn(Node* __this, uDelegate* value)
{
    __this->remove_BeginRemove(value);
}

// public Uno.Collections.IList<Fuse.Behavior> get_Behaviors() :2600
void Node__get_Behaviors_fn(Node* __this, uObject** __retval)
{
    *__retval = __this->Behaviors();
}

// private static void bringIntoView(Fuse.Node n, object[] args) :4316
void Node__bringIntoView_fn(Node* n, uArray* args)
{
    Node::bringIntoView(n, args);
}

// public void BringIntoView() :3848
void Node__BringIntoView_fn(Node* __this)
{
    __this->BringIntoView();
}

// internal Uno.Rect CalcRenderBoundsInParentSpace() :4652
void Node__CalcRenderBoundsInParentSpace_fn(Node* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->CalcRenderBoundsInParentSpace();
}

// private Fuse.FastMatrix CalcWorldTransform() :4537
void Node__CalcWorldTransform_fn(Node* __this, ::g::Fuse::FastMatrix** __retval)
{
    *__retval = __this->CalcWorldTransform();
}

// internal virtual bool get_CanAdjustMarginBox() :3822
void Node__get_CanAdjustMarginBox_fn(Node* __this, bool* __retval)
{
    uStackFrame __("Fuse.Node", "get_CanAdjustMarginBox()");
    return *__retval = false, void();
}

// public void CancelInteractions([Fuse.Node.CancelInteractionsType how]) :3200
void Node__CancelInteractions_fn(Node* __this, int* how)
{
    __this->CancelInteractions(*how);
}

// private void ClearBit(Fuse.Node.NodeBits nb) :2985
void Node__ClearBit_fn(Node* __this, int* nb)
{
    __this->ClearBit(*nb);
}

// public Fuse.Node get_ContextParent() :4792
void Node__get_ContextParent_fn(Node* __this, Node** __retval)
{
    *__retval = __this->ContextParent();
}

// public object get_DataContext() :2838
void Node__get_DataContext_fn(Node* __this, uObject** __retval)
{
    *__retval = __this->DataContext();
}

// public void set_DataContext(object value) :2844
void Node__set_DataContext_fn(Node* __this, uObject* value)
{
    __this->DataContext(value);
}

// public generated void add_DataContextChanged(Fuse.DataContextChangedHandler value) :2870
void Node__add_DataContextChanged_fn(Node* __this, uDelegate* value)
{
    __this->add_DataContextChanged(value);
}

// public generated void remove_DataContextChanged(Fuse.DataContextChangedHandler value) :2870
void Node__remove_DataContextChanged_fn(Node* __this, uDelegate* value)
{
    __this->remove_DataContextChanged(value);
}

// private static void disable(Fuse.Node n, object[] args) :4311
void Node__disable_fn(Node* n, uArray* args)
{
    Node::disable(n, args);
}

// private int DistanceTo(object obj, int reference) :3949
void Node__DistanceTo_fn(Node* __this, uObject* obj, int* reference, int* __retval)
{
    *__retval = __this->DistanceTo(obj, *reference);
}

// public virtual void Draw(Fuse.DrawContext dc) :2931
void Node__Draw_fn(Node* __this, ::g::Fuse::DrawContext* dc)
{
}

// public double get_DrawCost() :4734
void Node__get_DrawCost_fn(Node* __this, double* __retval)
{
    *__retval = __this->DrawCost();
}

// private void DrawLocalRect(Fuse.DrawContext dc, Uno.Rect rect, float lineWidth, float4 color, float4x4 localToClipTransform) :2933
void Node__DrawLocalRect_fn(Node* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* rect, float* lineWidth, ::g::Uno::Float4* color, ::g::Uno::Float4x4* localToClipTransform)
{
    __this->DrawLocalRect(dc, *rect, *lineWidth, *color, *localToClipTransform);
}

// protected void DrawLocalSelectionRect(Fuse.DrawContext dc, Uno.Rect rect) :2938
void Node__DrawLocalSelectionRect_fn(Node* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* rect)
{
    __this->DrawLocalSelectionRect(dc, *rect);
}

// public virtual void DrawSelection(Fuse.DrawContext dc) :2948
void Node__DrawSelection_fn(Node* __this, ::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Node", "DrawSelection(Fuse.DrawContext)");
    __this->DrawLocalSelectionRect(dc, __this->LocalRenderBounds());
}

// private static void enable(Fuse.Node n, object[] args) :4306
void Node__enable_fn(Node* n, uArray* args)
{
    Node::enable(n, args);
}

// public void EndInteraction(object id) :3177
void Node__EndInteraction_fn(Node* __this, uObject* id)
{
    __this->EndInteraction(id);
}

// public T FindByType<T>() :4801
void Node__FindByType_fn(Node* __this, uType* __type, Node** __retval)
{
    *__retval = __this->FindByType(__type);
}

// public Fuse.Node FindNodeByName(string name) :3918
void Node__FindNodeByName_fn(Node* __this, uString* name, Node** __retval)
{
    *__retval = __this->FindNodeByName(name);
}

// public object FindObjectByName(string name, Uno.Predicate<object> acceptor) :3924
void Node__FindObjectByName_fn(Node* __this, uString* name, uDelegate* acceptor, uObject** __retval)
{
    *__retval = __this->FindObjectByName(name, acceptor);
}

// private object Fuse.IChildObject.get_ParentObject() :4718
void Node__FuseIChildObjectget_ParentObject_fn(Node* __this, uObject** __retval)
{
    uStackFrame __("Fuse.Node", "Fuse.IChildObject.get_ParentObject()");
    return *__retval = __this->Parent(), void();
}

// public Fuse.Node GetHitWindowPoint(float2 windowPoint) :3063
void Node__GetHitWindowPoint_fn(Node* __this, ::g::Uno::Float2* windowPoint, Node** __retval)
{
    *__retval = __this->GetHitWindowPoint(*windowPoint);
}

// public virtual float2 GetMarginSize(Fuse.LayoutParams lp) :3527
void Node__GetMarginSize_fn(Node* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Node", "GetMarginSize(Fuse.LayoutParams)");
    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// private static string GetName(Fuse.Node n) :3904
void Node__GetName_fn(Node* n, uString** __retval)
{
    *__retval = Node::GetName(n);
}

// public T GetNearestAncestorOfType<T>() :4807
void Node__GetNearestAncestorOfType_fn(Node* __this, uType* __type, Node** __retval)
{
    *__retval = __this->GetNearestAncestorOfType(__type);
}

// internal Fuse.PropertyState GetPropertyState(int id) :4000
void Node__GetPropertyState_fn(Node* __this, int* id, int* __retval)
{
    *__retval = __this->GetPropertyState(*id);
}

// private static bool GetSnapToPixels(Fuse.Node n) :3697
void Node__GetSnapToPixels_fn(Node* n, bool* __retval)
{
    *__retval = Node::GetSnapToPixels(n);
}

// public virtual Fuse.Node GetSubNode(int index) :4978
void Node__GetSubNode_fn(Node* __this, int* index, Node** __retval)
{
    uStackFrame __("Fuse.Node", "GetSubNode(int)");
    U_THROW(::g::Uno::Exception::New1());
}

// public float4x4 GetTransformTo(Fuse.Node other) :4549
void Node__GetTransformTo_fn(Node* __this, Node* other, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetTransformTo(other);
}

// private float4x4 GetTransformToAncestor(Fuse.Node ancestor) :4578
void Node__GetTransformToAncestor_fn(Node* __this, Node* ancestor, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetTransformToAncestor(ancestor);
}

// private bool HasBit(Fuse.Node.NodeBits nb) :2983
void Node__HasBit_fn(Node* __this, int* nb, bool* __retval)
{
    *__retval = __this->HasBit(*nb);
}

// private bool get_HasExplicitTransforms() :4375
void Node__get_HasExplicitTransforms_fn(Node* __this, bool* __retval)
{
    *__retval = __this->HasExplicitTransforms();
}

// private bool HasInSubtree(object c) :3967
void Node__HasInSubtree_fn(Node* __this, uObject* c, bool* __retval)
{
    *__retval = __this->HasInSubtree(c);
}

// private bool get_HasMarginBox() :3770
void Node__get_HasMarginBox_fn(Node* __this, bool* __retval)
{
    *__retval = __this->HasMarginBox();
}

// private bool get_HasResources() :4109
void Node__get_HasResources_fn(Node* __this, bool* __retval)
{
    *__retval = __this->HasResources();
}

// public void HitTest(Fuse.HitTestContext htc) :3026
void Node__HitTest_fn(Node* __this, ::g::Fuse::HitTestContext* htc)
{
    __this->HitTest(htc);
}

// public virtual Fuse.NodeBounds get_HitTestBounds() :3099
void Node__get_HitTestBounds_fn(Node* __this, ::g::Fuse::NodeBounds** __retval)
{
    uStackFrame __("Fuse.Node", "get_HitTestBounds()");

    if (__this->_isHitTestBoundsCacheValid)
        return *__retval = __this->_hitTestBoundsCache, void();

    ::g::Fuse::NodeBounds* nb = ::g::Fuse::NodeBounds::Empty();

    if (__this->IsContextEnabled() && __this->IsVisible())
    {
        nb = uPtr(nb)->Merge(__this->HitTestLocalBounds(), NULL);
        nb = uPtr(nb)->Merge(__this->HitTestChildrenBounds(), NULL);
    }

    __this->_hitTestBoundsCache = nb;
    __this->_isHitTestBoundsCacheValid = true;
    return *__retval = nb, void();
}

// protected virtual Fuse.NodeBounds get_HitTestChildrenBounds() :3128
void Node__get_HitTestChildrenBounds_fn(Node* __this, ::g::Fuse::NodeBounds** __retval)
{
    uStackFrame __("Fuse.Node", "get_HitTestChildrenBounds()");
    ::g::Fuse::NodeBounds* nb = ::g::Fuse::NodeBounds::Empty();

    for (int i = 0; i < __this->SubNodeCount(); ++i)
    {
        Node* n = __this->GetSubNode(i);
        nb = uPtr(nb)->MergeChild(n, uPtr(n)->HitTestBounds());
    }

    return *__retval = nb, void();
}

// protected virtual Fuse.NodeBounds get_HitTestLocalBounds() :3120
void Node__get_HitTestLocalBounds_fn(Node* __this, ::g::Fuse::NodeBounds** __retval)
{
    uStackFrame __("Fuse.Node", "get_HitTestLocalBounds()");
    return *__retval = ::g::Fuse::NodeBounds::Empty(), void();
}

// protected float2 IfSnap(float2 p) :3643
void Node__IfSnap_fn(Node* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->IfSnap(*p);
}

// protected float2 IfSnapDown(float2 p) :3668
void Node__IfSnapDown_fn(Node* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->IfSnapDown(*p);
}

// protected float2 IfSnapUp(float2 p) :3648
void Node__IfSnapUp_fn(Node* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->IfSnapUp(*p);
}

// public bool get_IgnoreStyle() :4235
void Node__get_IgnoreStyle_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IgnoreStyle();
}

// public void set_IgnoreStyle(bool value) :4236
void Node__set_IgnoreStyle_fn(Node* __this, bool* value)
{
    __this->IgnoreStyle(*value);
}

// internal Fuse.FastMatrix get_InternLocalTransformInternal() :4508
void Node__get_InternLocalTransformInternal_fn(Node* __this, ::g::Fuse::FastMatrix** __retval)
{
    *__retval = __this->InternLocalTransformInternal();
}

// internal float2 InternSnap(float2 p) :3636
void Node__InternSnap_fn(Node* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->InternSnap(*p);
}

// internal float2 InternSnapUp(float2 p) :3655
void Node__InternSnapUp_fn(Node* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->InternSnapUp(*p);
}

// private void InvalidateFlat() :3301
void Node__InvalidateFlat_fn(Node* __this)
{
    __this->InvalidateFlat();
}

// protected void InvalidateHitTestBounds() :3084
void Node__InvalidateHitTestBounds_fn(Node* __this)
{
    __this->InvalidateHitTestBounds();
}

// public void InvalidateLayout([Fuse.InvalidateLayoutReason reason]) :3549
void Node__InvalidateLayout_fn(Node* __this, int* reason)
{
    __this->InvalidateLayout(*reason);
}

// protected static void InvalidateLayout(Fuse.Node elm) :3700
void Node__InvalidateLayout1_fn(Node* elm)
{
    Node::InvalidateLayout1(elm);
}

// protected virtual void InvalidateLocalTransform() :4407
void Node__InvalidateLocalTransform_fn(Node* __this)
{
    uStackFrame __("Fuse.Node", "InvalidateLocalTransform()");
    __this->_localTransform = NULL;
    __this->_localTransformInverse = NULL;
    __this->_worldTransformVersion++;
    __this->InvalidateFlat();
    __this->InvalidateHitTestBounds();
}

// public void InvalidateRenderBounds() :4634
void Node__InvalidateRenderBounds_fn(Node* __this)
{
    __this->InvalidateRenderBounds();
}

// public void InvalidateVisual() :5027
void Node__InvalidateVisual_fn(Node* __this)
{
    __this->InvalidateVisual();
}

// private void InvokeEventHandler(object obj, object args) :2992
void Node__InvokeEventHandler_fn(Node* __this, uObject* obj, uObject* args)
{
    __this->InvokeEventHandler(obj, args);
}

// public bool get_IsContextEnabled() :3262
void Node__get_IsContextEnabled_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IsContextEnabled();
}

// public void add_IsContextEnabledChanged(Uno.EventHandler value) :3245
void Node__add_IsContextEnabledChanged_fn(Node* __this, uDelegate* value)
{
    __this->add_IsContextEnabledChanged(value);
}

// public void remove_IsContextEnabledChanged(Uno.EventHandler value) :3246
void Node__remove_IsContextEnabledChanged_fn(Node* __this, uDelegate* value)
{
    __this->remove_IsContextEnabledChanged(value);
}

// public bool get_IsEnabled() :3255
void Node__get_IsEnabled_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IsEnabled();
}

// public void set_IsEnabled(bool value) :3256
void Node__set_IsEnabled_fn(Node* __this, bool* value)
{
    __this->IsEnabled(*value);
}

// internal bool get_IsFlat() :3336
void Node__get_IsFlat_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IsFlat();
}

// public bool get_IsInteracting() :3161
void Node__get_IsInteracting_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IsInteracting();
}

// public generated void add_IsInteractingChanged(Uno.EventHandler value) :3158
void Node__add_IsInteractingChanged_fn(Node* __this, uDelegate* value)
{
    __this->add_IsInteractingChanged(value);
}

// public generated void remove_IsInteractingChanged(Uno.EventHandler value) :3158
void Node__remove_IsInteractingChanged_fn(Node* __this, uDelegate* value)
{
    __this->remove_IsInteractingChanged(value);
}

// internal bool get_IsLocalFlat() :3317
void Node__get_IsLocalFlat_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IsLocalFlat();
}

// public bool get_IsLocalRooted() :4838
void Node__get_IsLocalRooted_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IsLocalRooted();
}

// public virtual bool get_IsLocalVisible() :3382
void Node__get_IsLocalVisible_fn(Node* __this, bool* __retval)
{
    uStackFrame __("Fuse.Node", "get_IsLocalVisible()");
    return *__retval = true, void();
}

// protected virtual Fuse.LayoutDependent IsMarginBoxDependent(Fuse.Node child) :3630
void Node__IsMarginBoxDependent_fn(Node* __this, Node* child, int* __retval)
{
    uStackFrame __("Fuse.Node", "IsMarginBoxDependent(Fuse.Node)");
    return *__retval = 2, void();
}

// private bool IsNode(object obj) :3922
void Node__IsNode_fn(Node* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->IsNode(obj);
}

// public bool get_IsRooted() :4818
void Node__get_IsRooted_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IsRooted();
}

// private bool IsRootStage(Fuse.Node.RootStage stage) :4852
void Node__IsRootStage_fn(Node* __this, int* stage, bool* __retval)
{
    *__retval = __this->IsRootStage(*stage);
}

// protected bool get_IsSubtreeRooted() :4819
void Node__get_IsSubtreeRooted_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IsSubtreeRooted();
}

// public bool get_IsVisible() :3380
void Node__get_IsVisible_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IsVisible();
}

// public void add_IsVisibleChanged(Uno.EventHandler value) :3375
void Node__add_IsVisibleChanged_fn(Node* __this, uDelegate* value)
{
    __this->add_IsVisibleChanged(value);
}

// public void remove_IsVisibleChanged(Uno.EventHandler value) :3376
void Node__remove_IsVisibleChanged_fn(Node* __this, uDelegate* value)
{
    __this->remove_IsVisibleChanged(value);
}

// internal bool IsWorldMatrixValid() :4461
void Node__IsWorldMatrixValid_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IsWorldMatrixValid();
}

// public Fuse.Layer get_Layer() :3489
void Node__get_Layer_fn(Node* __this, int* __retval)
{
    *__retval = __this->Layer();
}

// public void set_Layer(Fuse.Layer value) :3496
void Node__set_Layer_fn(Node* __this, int* value)
{
    __this->Layer(*value);
}

// public Fuse.LayoutRole get_LayoutRole() :3508
void Node__get_LayoutRole_fn(Node* __this, int* __retval)
{
    *__retval = __this->LayoutRole();
}

// public void set_LayoutRole(Fuse.LayoutRole value) :3520
void Node__set_LayoutRole_fn(Node* __this, int* value)
{
    __this->LayoutRole(*value);
}

// public virtual Uno.Geometry.Box get_LocalBounds() :4456
void Node__get_LocalBounds_fn(Node* __this, ::g::Uno::Geometry::Box* __retval)
{
    uStackFrame __("Fuse.Node", "get_LocalBounds()");
    return *__retval = ::g::Uno::Geometry::Box__New1(::g::Uno::Float3__New1(0.0f), ::g::Uno::Float3__New1(0.0f)), void();
}

// public virtual Uno.Rect get_LocalRenderBounds() :4628
void Node__get_LocalRenderBounds_fn(Node* __this, ::g::Uno::Rect* __retval)
{
    uStackFrame __("Fuse.Node", "get_LocalRenderBounds()");
    return *__retval = ::g::Uno::Rect__New2(::g::Uno::Float2__New1(-FLT_INF), ::g::Uno::Float2__New1(FLT_INF)), void();
}

// public float2 LocalToParent(float2 localPoint) :4988
void Node__LocalToParent_fn(Node* __this, ::g::Uno::Float2* localPoint, ::g::Uno::Float2* __retval)
{
    *__retval = __this->LocalToParent(*localPoint);
}

// public float4x4 get_LocalTransform() :4502
void Node__get_LocalTransform_fn(Node* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->LocalTransform();
}

// protected Fuse.FastMatrix get_LocalTransformInternal() :4512
void Node__get_LocalTransformInternal_fn(Node* __this, ::g::Fuse::FastMatrix** __retval)
{
    *__retval = __this->LocalTransformInternal();
}

// protected float4x4 get_LocalTransformInverse() :4526
void Node__get_LocalTransformInverse_fn(Node* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->LocalTransformInverse();
}

// internal float2 get_MarginBoxPosition() :3815
void Node__get_MarginBoxPosition_fn(Node* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MarginBoxPosition();
}

// public string get_Name() :3900
void Node__get_Name_fn(Node* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// public void set_Name(string value) :3901
void Node__set_Name_fn(Node* __this, uString* value)
{
    __this->Name(value);
}

// internal virtual void OnAdjustMarginBoxPosition(float2 position) :3823
void Node__OnAdjustMarginBoxPosition_fn(Node* __this, ::g::Uno::Float2* position)
{
}

// protected virtual void OnApplyStyle(object target) :4263
void Node__OnApplyStyle_fn(Node* __this, uObject* target)
{
    uStackFrame __("Fuse.Node", "OnApplyStyle(object)");

    if (!__this->ApplyLocalStyles(target))
        return;

    if (__this->Parent() != NULL)
        uPtr(__this->Parent())->ApplyStyle1(target);
}

// protected virtual float2 OnArrangeMarginBox(float2 position, Fuse.LayoutParams lp) :3779
void Node__OnArrangeMarginBox_fn(Node* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Node", "OnArrangeMarginBox(float2,Fuse.LayoutParams)");
    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// protected void OnBeginRemove(Fuse.BeginRemoveArgs args) :4761
void Node__OnBeginRemove_fn(Node* __this, ::g::Fuse::BeginRemoveArgs* args)
{
    __this->OnBeginRemove(args);
}

// internal virtual void OnBehaviorAdded(Fuse.Behavior b) :2613
void Node__OnBehaviorAdded_fn(Node* __this, ::g::Fuse::Behavior* b)
{
    uStackFrame __("Fuse.Node", "OnBehaviorAdded(Fuse.Behavior)");

    if (__this->IsRootStage(3))
        uPtr(b)->Rooted(__this);
}

// internal virtual void OnBehaviorRemoved(Fuse.Behavior b) :2621
void Node__OnBehaviorRemoved_fn(Node* __this, ::g::Fuse::Behavior* b)
{
    uStackFrame __("Fuse.Node", "OnBehaviorRemoved(Fuse.Behavior)");

    if (uPtr(b)->IsRooted())
    {
        uPtr(b)->Unrooted(__this);
        b->AddedByStyle = false;
    }
}

// protected internal void OnBringIntoView(Fuse.Node elm) :3839
void Node__OnBringIntoView_fn(Node* __this, Node* elm)
{
    __this->OnBringIntoView(elm);
}

// private void OnDataContextChanged(Fuse.DataContextChangedArgs args) :2856
void Node__OnDataContextChanged_fn(Node* __this, ::g::Fuse::DataContextChangedArgs* args)
{
    __this->OnDataContextChanged(args);
}

// protected virtual void OnHitTest(Fuse.HitTestContext htc) :3061
void Node__OnHitTest_fn(Node* __this, ::g::Fuse::HitTestContext* htc)
{
}

// private void OnInteractionsChanged() :3189
void Node__OnInteractionsChanged_fn(Node* __this)
{
    __this->OnInteractionsChanged();
}

// internal virtual void OnInvalidateChildZOffset(Fuse.Node child) :3878
void Node__OnInvalidateChildZOffset_fn(Node* __this, Node* child)
{
}

// protected virtual void OnInvalidateLayout() :3532
void Node__OnInvalidateLayout_fn(Node* __this)
{
    uStackFrame __("Fuse.Node", "OnInvalidateLayout()");
    __this->InvalidateHitTestBounds();
}

// protected virtual bool OnInvalidateRenderBounds() :4646
void Node__OnInvalidateRenderBounds_fn(Node* __this, bool* __retval)
{
    uStackFrame __("Fuse.Node", "OnInvalidateRenderBounds()");
    return *__retval = false, void();
}

// protected virtual void OnInvalidateVisual() :5039
void Node__OnInvalidateVisual_fn(Node* __this)
{
}

// protected void OnIsContextEnabledChanged() :3284
void Node__OnIsContextEnabledChanged_fn(Node* __this)
{
    __this->OnIsContextEnabledChanged();
}

// private static void OnIsEnabledChangedInternal(Fuse.Node n) :3265
void Node__OnIsEnabledChangedInternal_fn(Node* n)
{
    Node::OnIsEnabledChangedInternal(n);
}

// public void OnIsSelectedChanged(bool isSelected) :4727
void Node__OnIsSelectedChanged_fn(Node* __this, bool* isSelected)
{
    __this->OnIsSelectedChanged(*isSelected);
}

// protected void OnIsVisibleChanged() :3404
void Node__OnIsVisibleChanged_fn(Node* __this)
{
    __this->OnIsVisibleChanged();
}

// protected void OnLocalVisibleChanged() :3385
void Node__OnLocalVisibleChanged_fn(Node* __this)
{
    __this->OnLocalVisibleChanged();
}

// private void OnMatrixChanged(Fuse.Transform t) :4393
void Node__OnMatrixChanged_fn(Node* __this, ::g::Fuse::Transform* t)
{
    __this->OnMatrixChanged(t);
}

// protected virtual void OnResetStyle() :4213
void Node__OnResetStyle_fn(Node* __this)
{
    uStackFrame __("Fuse.Node", "OnResetStyle()");
    ::g::Fuse::Behavior* ret22;
    ::g::Fuse::Transform* ret23;

    if (__this->_behaviors != NULL)

        for (int i = 0; i < uPtr(__this->_behaviors)->Count(); i++)
            if (uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(__this->_behaviors), uCRef<int>(i), &ret22), ret22))->AddedByStyle)
                uPtr(__this->_behaviors)->RemoveAt(i--);

    if (__this->_transforms != NULL)

        for (int i1 = 0; i1 < uPtr(__this->_transforms)->Count(); i1++)
            if (uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(__this->_transforms), uCRef<int>(i1), &ret23), ret23))->AddedByStyle)
                uPtr(__this->_transforms)->RemoveAt(i1--);

    ::g::Fuse::StyleProperty::ResetAllStyle(__this);
}

// private void OnResourceChanged(Uno.UX.Resource res) :4112
void Node__OnResourceChanged_fn(Node* __this, ::g::Uno::UX::Resource* res)
{
    __this->OnResourceChanged(res);
}

// protected virtual void OnRooted() :4932
void Node__OnRooted_fn(Node* __this)
{
}

// private void OnTransformAdded(Fuse.Transform t) :4378
void Node__OnTransformAdded_fn(Node* __this, ::g::Fuse::Transform* t)
{
    __this->OnTransformAdded(t);
}

// private void OnTransformRemoved(Fuse.Transform t) :4385
void Node__OnTransformRemoved_fn(Node* __this, ::g::Fuse::Transform* t)
{
    __this->OnTransformRemoved(t);
}

// private void OnTransformsChanged() :4401
void Node__OnTransformsChanged_fn(Node* __this)
{
    __this->OnTransformsChanged();
}

// protected virtual void OnUnrooted() :4969
void Node__OnUnrooted_fn(Node* __this)
{
}

// protected void OnWorldTransformValidated() :4494
void Node__OnWorldTransformValidated_fn(Node* __this)
{
    __this->OnWorldTransformValidated();
}

// public Fuse.Node get_Parent() :4783
void Node__get_Parent_fn(Node* __this, Node** __retval)
{
    *__retval = __this->Parent();
}

// public float2 ParentToLocal(float2 parentPoint) :4983
void Node__ParentToLocal_fn(Node* __this, ::g::Uno::Float2* parentPoint, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ParentToLocal(*parentPoint);
}

// protected void PerformLayout() :3702
void Node__PerformLayout_fn(Node* __this)
{
    __this->PerformLayout();
}

// protected void PerformLayout(float2 clientSize) :3710
void Node__PerformLayout1_fn(Node* __this, ::g::Uno::Float2* clientSize)
{
    __this->PerformLayout1(*clientSize);
}

// private void PrependExplicitTransforms(Fuse.FastMatrix m) :4597
void Node__PrependExplicitTransforms_fn(Node* __this, ::g::Fuse::FastMatrix* m)
{
    __this->PrependExplicitTransforms(m);
}

// protected virtual void PrependImplicitTransform(Fuse.FastMatrix m) :4351
void Node__PrependImplicitTransform_fn(Node* __this, ::g::Fuse::FastMatrix* m)
{
}

// protected virtual void PrependInverseTransformOrigin(Fuse.FastMatrix m) :4353
void Node__PrependInverseTransformOrigin_fn(Node* __this, ::g::Fuse::FastMatrix* m)
{
}

// private void PrependLocalTransform(Fuse.FastMatrix m) :4591
void Node__PrependLocalTransform_fn(Node* __this, ::g::Fuse::FastMatrix* m)
{
    __this->PrependLocalTransform(m);
}

// protected virtual void PrependTransformOrigin(Fuse.FastMatrix m) :4352
void Node__PrependTransformOrigin_fn(Node* __this, ::g::Fuse::FastMatrix* m)
{
}

// public Fuse.Properties get_Properties() :4772
void Node__get_Properties_fn(Node* __this, ::g::Fuse::Properties** __retval)
{
    *__retval = __this->Properties();
}

// private void RaiseEvent(Fuse.PropertyHandle ph, Fuse.Node.NodeBits ne) :2987
void Node__RaiseEvent_fn(Node* __this, ::g::Fuse::PropertyHandle* ph, int* ne)
{
    __this->RaiseEvent(ph, *ne);
}

// private void ReapplyStyle() :4186
void Node__ReapplyStyle_fn(Node* __this)
{
    __this->ReapplyStyle();
}

// private void ReapplySubtreeStyle() :4176
void Node__ReapplySubtreeStyle_fn(Node* __this)
{
    __this->ReapplySubtreeStyle();
}

// private void RearrangeMarginBox() :3772
void Node__RearrangeMarginBox_fn(Node* __this)
{
    __this->RearrangeMarginBox();
}

// public void RemoveDrawCost(double cost) :4746
void Node__RemoveDrawCost_fn(Node* __this, double* cost)
{
    __this->RemoveDrawCost(*cost);
}

// private void RemoveEventHandler(Fuse.PropertyHandle ph, Fuse.Node.NodeBits ne, object handler) :3004
void Node__RemoveEventHandler_fn(Node* __this, ::g::Fuse::PropertyHandle* ph, int* ne, uObject* handler)
{
    __this->RemoveEventHandler(ph, *ne, handler);
}

// public generated void add_RequestBringIntoView(Fuse.RequestBringIntoViewHandler value) :3837
void Node__add_RequestBringIntoView_fn(Node* __this, uDelegate* value)
{
    __this->add_RequestBringIntoView(value);
}

// public generated void remove_RequestBringIntoView(Fuse.RequestBringIntoViewHandler value) :3837
void Node__remove_RequestBringIntoView_fn(Node* __this, uDelegate* value)
{
    __this->remove_RequestBringIntoView(value);
}

// internal void ResetStyle() :4193
void Node__ResetStyle_fn(Node* __this)
{
    __this->ResetStyle();
}

// public Uno.Collections.IList<Uno.UX.Resource> get_Resources() :4048
void Node__get_Resources_fn(Node* __this, uObject** __retval)
{
    *__retval = __this->Resources();
}

// internal void Root() :4891
void Node__Root_fn(Node* __this)
{
    __this->Root();
}

// private void RootBehaviors() :2630
void Node__RootBehaviors_fn(Node* __this)
{
    __this->RootBehaviors();
}

// internal void RootChild(Fuse.Node child) :4873
void Node__RootChild_fn(Node* __this, Node* child)
{
    __this->RootChild(child);
}

// public void add_Rooted(Uno.EventHandler value) :4824
void Node__add_Rooted_fn(Node* __this, uDelegate* value)
{
    __this->add_Rooted(value);
}

// public void remove_Rooted(Uno.EventHandler value) :4825
void Node__remove_Rooted_fn(Node* __this, uDelegate* value)
{
    __this->remove_Rooted(value);
}

// private void SetBit(Fuse.Node.NodeBits nb) :2984
void Node__SetBit_fn(Node* __this, int* nb)
{
    __this->SetBit(*nb);
}

// private static void SetName(Fuse.Node n, string v) :3908
void Node__SetName_fn(Node* n, uString* v)
{
    Node::SetName(n, v);
}

// internal void SetParent(Fuse.Node parent) :4857
void Node__SetParent_fn(Node* __this, Node* parent)
{
    __this->SetParent(parent);
}

// internal void SetPropertyState(int id, Fuse.PropertyState state) :4015
void Node__SetPropertyState_fn(Node* __this, int* id, int* state)
{
    __this->SetPropertyState(*id, *state);
}

// public void SetResource(string key, object value) :4059
void Node__SetResource_fn(Node* __this, uString* key, uObject* value)
{
    __this->SetResource(key, value);
}

// private static void SetSnapToPixels(Fuse.Node n, bool value) :3698
void Node__SetSnapToPixels_fn(Node* n, bool* value)
{
    Node::SetSnapToPixels(n, *value);
}

// protected float2 Snap(float2 p) :3637
void Node__Snap_fn(Node* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Snap(*p);
}

// protected float2 SnapDown(float2 p) :3662
void Node__SnapDown_fn(Node* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->SnapDown(*p);
}

// public bool get_SnapToPixels() :3694
void Node__get_SnapToPixels_fn(Node* __this, bool* __retval)
{
    *__retval = __this->SnapToPixels();
}

// public void set_SnapToPixels(bool value) :3695
void Node__set_SnapToPixels_fn(Node* __this, bool* value)
{
    __this->SnapToPixels(*value);
}

// protected float2 SnapUp(float2 p) :3656
void Node__SnapUp_fn(Node* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->SnapUp(*p);
}

// protected virtual void SoftDispose() :4971
void Node__SoftDispose_fn(Node* __this)
{
}

// private void StyleAdded(Fuse.Style s) :4158
void Node__StyleAdded_fn(Node* __this, ::g::Fuse::Style* s)
{
    __this->StyleAdded(s);
}

// private void StyleRemoved(Fuse.Style s) :4165
void Node__StyleRemoved_fn(Node* __this, ::g::Fuse::Style* s)
{
    __this->StyleRemoved(s);
}

// public Uno.Collections.IList<Fuse.Style> get_Styles() :4139
void Node__get_Styles_fn(Node* __this, uObject** __retval)
{
    *__retval = __this->Styles();
}

// public virtual int get_SubNodeCount() :4975
void Node__get_SubNodeCount_fn(Node* __this, int* __retval)
{
    uStackFrame __("Fuse.Node", "get_SubNodeCount()");
    return *__retval = 0, void();
}

// public Uno.Collections.IList<Fuse.Transform> get_Transforms() :4360
void Node__get_Transforms_fn(Node* __this, uObject** __retval)
{
    *__retval = __this->Transforms();
}

// public generated void add_TransformsChanged(Uno.EventHandler value) :4399
void Node__add_TransformsChanged_fn(Node* __this, uDelegate* value)
{
    __this->add_TransformsChanged(value);
}

// public generated void remove_TransformsChanged(Uno.EventHandler value) :4399
void Node__remove_TransformsChanged_fn(Node* __this, uDelegate* value)
{
    __this->remove_TransformsChanged(value);
}

// public bool TryGetResource(string key, Uno.Predicate<object> acceptor, object& resource) :4076
void Node__TryGetResource_fn(Node* __this, uString* key, uDelegate* acceptor, uObject** resource, bool* __retval)
{
    *__retval = __this->TryGetResource(key, acceptor, resource);
}

// internal void Unroot() :4936
void Node__Unroot_fn(Node* __this)
{
    __this->Unroot();
}

// private void UnrootBehaviors() :2642
void Node__UnrootBehaviors_fn(Node* __this)
{
    __this->UnrootBehaviors();
}

// internal void UnrootChild(Fuse.Node child) :4882
void Node__UnrootChild_fn(Node* __this, Node* child)
{
    __this->UnrootChild(child);
}

// public void add_Unrooted(Uno.EventHandler value) :4831
void Node__add_Unrooted_fn(Node* __this, uDelegate* value)
{
    __this->add_Unrooted(value);
}

// public void remove_Unrooted(Uno.EventHandler value) :4832
void Node__remove_Unrooted_fn(Node* __this, uDelegate* value)
{
    __this->remove_Unrooted(value);
}

// private void UpdateIsContextEnabledCache() :3270
void Node__UpdateIsContextEnabledCache_fn(Node* __this)
{
    __this->UpdateIsContextEnabledCache();
}

// private void UpdateIsVisibleCache() :3390
void Node__UpdateIsVisibleCache_fn(Node* __this)
{
    __this->UpdateIsVisibleCache();
}

// private void UpdateLayout() :3744
void Node__UpdateLayout_fn(Node* __this)
{
    __this->UpdateLayout();
}

// public int get_ValidFrameCount() :5045
void Node__get_ValidFrameCount_fn(Node* __this, int* __retval)
{
    *__retval = __this->ValidFrameCount();
}

// public Fuse.IViewport get_Viewport() :4996
void Node__get_Viewport_fn(Node* __this, uObject** __retval)
{
    *__retval = __this->Viewport();
}

// public void VisitSubtree(Uno.Action<Fuse.Node> action) :4720
void Node__VisitSubtree_fn(Node* __this, uDelegate* action)
{
    __this->VisitSubtree(action);
}

// public float2 WindowToLocal(float2 windowCoord) :4610
void Node__WindowToLocal_fn(Node* __this, ::g::Uno::Float2* windowCoord, ::g::Uno::Float2* __retval)
{
    *__retval = __this->WindowToLocal(*windowCoord);
}

// public virtual Uno.Geometry.Ray WindowToWorldRay(float2 windowCoord) :4617
void Node__WindowToWorldRay_fn(Node* __this, ::g::Uno::Float2* windowCoord, ::g::Uno::Geometry::Ray* __retval)
{
    uStackFrame __("Fuse.Node", "WindowToWorldRay(float2)");
    ::g::Uno::Geometry::Ray collection5;
    ::g::Uno::Float2 windowCoord_ = *windowCoord;

    if (__this->Parent() != NULL)
        return *__retval = uPtr(__this->Parent())->WindowToWorldRay(windowCoord_), void();

    collection5 = uDefault< ::g::Uno::Geometry::Ray>();
    collection5.Position = ::g::Uno::Float3__New4(windowCoord_, 0.0f);
    collection5.Direction = ::g::Uno::Float3__New2(0.0f, 0.0f, -1.0f);
    return *__retval = collection5, void();
}

// public float3 get_WorldPosition() :4451
void Node__get_WorldPosition_fn(Node* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->WorldPosition();
}

// public float4x4 get_WorldTransform() :4443
void Node__get_WorldTransform_fn(Node* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->WorldTransform();
}

// private Fuse.FastMatrix get_WorldTransformInternal() :4477
void Node__get_WorldTransformInternal_fn(Node* __this, ::g::Fuse::FastMatrix** __retval)
{
    *__retval = __this->WorldTransformInternal();
}

// public float4x4 get_WorldTransformInverse() :4427
void Node__get_WorldTransformInverse_fn(Node* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->WorldTransformInverse();
}

// public float get_ZOffset() :3867
void Node__get_ZOffset_fn(Node* __this, float* __retval)
{
    *__retval = __this->ZOffset();
}

// public void set_ZOffset(float value) :3868
void Node__set_ZOffset_fn(Node* __this, float* value)
{
    __this->ZOffset(*value);
}

uSStrong< ::g::Fuse::PropertyHandle*> Node::_isContextEnabledChangedHandle_;
uSStrong< ::g::Fuse::PropertyHandle*> Node::_isVisibleChangedHandle_;
uSStrong< ::g::Fuse::PropertyHandle*> Node::_layerProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> Node::_layoutRoleProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> Node::_nameHandle_;
bool Node::_performingLayout_;
uSStrong< ::g::Fuse::PropertyHandle*> Node::_resourcesHandle_;
uSStrong< ::g::Fuse::PropertyHandle*> Node::_rootedHandle_;
uSStrong< ::g::Fuse::PropertyHandle*> Node::_styleHandle_;
uSStrong< ::g::Fuse::PropertyHandle*> Node::_unrootedHandle_;
uSStrong< ::g::Fuse::StyleProperty1*> Node::IsEnabledProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Node::NameProperty_;
uSStrong< ::g::Fuse::Scripting::ScriptClass*> Node::ScriptClass_;
uSStrong< ::g::Fuse::StyleProperty1*> Node::SnapToPixelsProperty_;

// protected generated Node() [instance] :2593
void Node::ctor_()
{
    uStackFrame __("Fuse.Node", ".ctor()");
    _isContextEnabledCache = true;
    _isVisibleCached = true;
    _snapToPixels = true;
    _ambLayoutParams = ::g::Fuse::LayoutParams__CreateEmpty();
    _zOffset = 0.0f;
    _worldTransformInverseCacheVersion = -1;
    _worldTransformCacheVersion = -1;
    _worldTransformParentCacheVersion = -1;
    _lastInvalidate = -1;
}

// public float get_AbsoluteZoom() [instance] :3676
float Node::AbsoluteZoom()
{
    uStackFrame __("Fuse.Node", "get_AbsoluteZoom()");
    uObject* v = Viewport();

    if (v == NULL)
        return 1.0f;

    return ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(v), ::TYPES[42/*Fuse.IViewport*/]));
}

// public void AddDrawCost(double cost) [instance] :4736
void Node::AddDrawCost(double cost)
{
    uStackFrame __("Fuse.Node", "AddDrawCost(double)");
    Node* p = this;

    while (p != NULL)
    {
        uPtr(p)->_drawCost = (uPtr(p)->_drawCost + cost);
        p = uPtr(p)->Parent();
    }
}

// internal generated bool get_AddedByStyle() [instance] :4758
bool Node::AddedByStyle()
{
    uStackFrame __("Fuse.Node", "get_AddedByStyle()");
    return _AddedByStyle;
}

// internal generated void set_AddedByStyle(bool value) [instance] :4758
void Node::AddedByStyle(bool value)
{
    uStackFrame __("Fuse.Node", "set_AddedByStyle(bool)");
    _AddedByStyle = value;
}

// private void AddEventHandler(Fuse.PropertyHandle ph, Fuse.Node.NodeBits ne, object handler) [instance] :2998
void Node::AddEventHandler(::g::Fuse::PropertyHandle* ph, int ne, uObject* handler)
{
    uStackFrame __("Fuse.Node", "AddEventHandler(Fuse.PropertyHandle,Fuse.Node.NodeBits,object)");
    uPtr(Properties())->AddToList(ph, handler);
    SetBit(ne);
}

// public void AddStyleBehavior(Fuse.Behavior b) [instance] :2607
void Node::AddStyleBehavior(::g::Fuse::Behavior* b)
{
    uStackFrame __("Fuse.Node", "AddStyleBehavior(Fuse.Behavior)");
    uPtr(b)->AddedByStyle = true;
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Fuse.Behavior*/])), b);
}

// public void AddStyleStyle(Fuse.Style style) [instance] :4152
void Node::AddStyleStyle(::g::Fuse::Style* style)
{
    uStackFrame __("Fuse.Node", "AddStyleStyle(Fuse.Style)");
    uPtr(style)->AddedByStyle = true;
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Styles()), ::TYPES[111/*Uno.Collections.ICollection<Fuse.Style>*/]), style);
}

// public void AddStyleTransform(Fuse.Transform t) [instance] :4367
void Node::AddStyleTransform(::g::Fuse::Transform* t)
{
    uStackFrame __("Fuse.Node", "AddStyleTransform(Fuse.Transform)");
    uPtr(t)->AddedByStyle = true;
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[110/*Fuse.Transform*/])), t);
}

// internal void AdjustMarginBoxPosition(float2 position) [instance] :3817
void Node::AdjustMarginBoxPosition(::g::Uno::Float2 position)
{
    uStackFrame __("Fuse.Node", "AdjustMarginBoxPosition(float2)");
    ArrangeMarginBox(position, _ambLayoutParams);
}

// protected bool ApplyLocalStyles(object target) [instance] :4269
bool Node::ApplyLocalStyles(uObject* target)
{
    uStackFrame __("Fuse.Node", "ApplyLocalStyles(object)");
    ::g::Fuse::Style* ret12;

    if (HasBit(3) && (target != this))

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Styles()), ::TYPES[111/*Uno.Collections.ICollection<Fuse.Style>*/])); i++)
            if (!uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Styles()), ::TYPES[112/*Uno.Collections.IList<Fuse.Style>*/]), uCRef<int>(i), &ret12), ret12))->Apply(target))
                return false;

    return true;
}

// private void ApplyStyle() [instance] :4246
void Node::ApplyStyle()
{
    uStackFrame __("Fuse.Node", "ApplyStyle()");

    if (!IsRootStage(2))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[51/*"Should not ...*/]));

    if (!HasBit(0))
    {
        SetBit(0);

        if (!IgnoreStyle())
            ApplyStyle1(this);
    }
}

// public void ApplyStyle(object target) [instance] :4258
void Node::ApplyStyle1(uObject* target)
{
    uStackFrame __("Fuse.Node", "ApplyStyle(object)");
    OnApplyStyle(target);
}

// public float2 ArrangeMarginBox(float2 position, Fuse.LayoutParams lp) [instance] :3784
::g::Uno::Float2 Node::ArrangeMarginBox(::g::Uno::Float2 position, ::g::Fuse::LayoutParams lp)
{
    uStackFrame __("Fuse.Node", "ArrangeMarginBox(float2,Fuse.LayoutParams)");
    bool same = (HasMarginBox() && (_layoutDirty == 0)) && _ambLayoutParams.IsCompatible(lp);
    ::g::Uno::Float2 marginBox;

    if (same && (::g::Uno::Vector::Distance(position, _ambPosition) < 1e-05f))
        return _ambMargin;
    else if (same && CanAdjustMarginBox())
    {
        marginBox = _ambMargin;
        OnAdjustMarginBoxPosition(position);
    }
    else
        marginBox = OnArrangeMarginBox(position, lp);

    _layoutDirty = 0;
    _ambMargin = marginBox;
    _ambPosition = position;
    _ambLayoutParams = lp.DeriveClone();
    _hasMarginBox = true;
    return marginBox;
}

// public void BeginInteraction(object id, Uno.Action cancelled) [instance] :3168
void Node::BeginInteraction(uObject* id, uDelegate* cancelled)
{
    uStackFrame __("Fuse.Node", "BeginInteraction(object,Uno.Action)");
    Node__InteractionItem collection1;

    if (_interactions == NULL)
        _interactions = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[113/*Uno.Collections.Dictionary<object, Fuse.Node.InteractionItem>*/]));

    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_interactions), id, uCRef((collection1 = uDefault<Node__InteractionItem>(), collection1.Id = id, collection1.Cancelled = cancelled, collection1)));
    OnInteractionsChanged();
}

// public generated void add_BeginRemove(Fuse.BeginRemoveHandler value) [instance] :4756
void Node::add_BeginRemove(uDelegate* value)
{
    uStackFrame __("Fuse.Node", "add_BeginRemove(Fuse.BeginRemoveHandler)");
    BeginRemove1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(BeginRemove1, value), ::TYPES[129/*Fuse.BeginRemoveHandler*/]);
}

// public generated void remove_BeginRemove(Fuse.BeginRemoveHandler value) [instance] :4756
void Node::remove_BeginRemove(uDelegate* value)
{
    uStackFrame __("Fuse.Node", "remove_BeginRemove(Fuse.BeginRemoveHandler)");
    BeginRemove1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(BeginRemove1, value), ::TYPES[129/*Fuse.BeginRemoveHandler*/]);
}

// public Uno.Collections.IList<Fuse.Behavior> get_Behaviors() [instance] :2600
uObject* Node::Behaviors()
{
    uStackFrame __("Fuse.Node", "get_Behaviors()");

    if (_behaviors == NULL)
        _behaviors = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[132/*Uno.Collections.ObservableList<Fuse.Behavior>*/], uDelegate::New(::TYPES[140/*Uno.Action<Fuse.Behavior>*/], this, offsetof(Node_type, fp_OnBehaviorAdded)), uDelegate::New(::TYPES[140/*Uno.Action<Fuse.Behavior>*/], this, offsetof(Node_type, fp_OnBehaviorRemoved))));

    return (uObject*)_behaviors;
}

// public void BringIntoView() [instance] :3848
void Node::BringIntoView()
{
    uStackFrame __("Fuse.Node", "BringIntoView()");
    OnBringIntoView(this);
}

// internal Uno.Rect CalcRenderBoundsInParentSpace() [instance] :4652
::g::Uno::Rect Node::CalcRenderBoundsInParentSpace()
{
    uStackFrame __("Fuse.Node", "CalcRenderBoundsInParentSpace()");
    ::g::Uno::Float4 ind6;
    ::g::Uno::Rect childRect = LocalRenderBounds();
    ::g::Fuse::FastMatrix* fastMatrix = LocalTransformInternal();
    ::g::Uno::Rect childRectInParentSpace;

    if (uPtr(fastMatrix)->_hasNonTranslation)
        childRectInParentSpace = ::g::Uno::Rect__Transform(childRect, LocalTransform());
    else
        childRectInParentSpace = ::g::Uno::Rect__Translate(childRect, (ind6 = LocalTransform().Item(3), ::g::Uno::Float2__New2(ind6.X, ind6.Y)));

    return childRectInParentSpace;
}

// private Fuse.FastMatrix CalcWorldTransform() [instance] :4537
::g::Fuse::FastMatrix* Node::CalcWorldTransform()
{
    uStackFrame __("Fuse.Node", "CalcWorldTransform()");
    ::g::Fuse::FastMatrix* m = LocalTransformInternal();

    if (Parent() != NULL)
        m = uPtr(m)->Mul(uPtr(Parent())->WorldTransformInternal());

    return m;
}

// public void CancelInteractions([Fuse.Node.CancelInteractionsType how]) [instance] :3200
void Node::CancelInteractions(int how)
{
    uStackFrame __("Fuse.Node", "CancelInteractions([Fuse.Node.CancelInteractionsType])");
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uObject*>, Node__InteractionItem> ret13;
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret14;
    bool ret15;
    Node__InteractionItem ret16;

    if (_interactions != NULL)
    {
        ::g::Uno::Collections::List* ids = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[99/*Uno.Collections.List<object>*/]);

        for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uObject*>, Node__InteractionItem> enum2 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_interactions), &ret13), ret13); enum2.MoveNext(::TYPES[116/*Uno.Collections.Dictionary<object, Fuse.Node.InteractionItem>.Enumerator*/]); )
        {
            ::g::Uno::Collections::KeyValuePair<uStrong<uObject*>, Node__InteractionItem> i = enum2.Current(::TYPES[116/*Uno.Collections.Dictionary<object, Fuse.Node.InteractionItem>.Enumerator*/]);
            ::g::Uno::Collections::List__Add_fn(uPtr(ids), i.Key(::TYPES[117/*Uno.Collections.KeyValuePair<object, Fuse.Node.InteractionItem>*/]));
        }

        for (::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum3 = (::g::Uno::Collections::List__GetEnumerator_fn(ids, &ret14), ret14); enum3.MoveNext(::TYPES[118/*Uno.Collections.List<object>.Enumerator*/]); )
        {
            uObject* id = enum3.Current(::TYPES[118/*Uno.Collections.List<object>.Enumerator*/]);

            if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(_interactions), id, &ret15), ret15))
            {
                Node__InteractionItem i1 = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(_interactions), id, &ret16), ret16);
                uPtr(i1.Cancelled)->InvokeVoid();
            }
        }
    }

    if (how == 1)

        for (int i2 = 0; i2 < SubNodeCount(); ++i2)
            uPtr(GetSubNode(i2))->CancelInteractions(how);
}

// private void ClearBit(Fuse.Node.NodeBits nb) [instance] :2985
void Node::ClearBit(int nb)
{
    uStackFrame __("Fuse.Node", "ClearBit(Fuse.Node.NodeBits)");
    _nodebits = (_nodebits & ~(1 << nb));
}

// public Fuse.Node get_ContextParent() [instance] :4792
Node* Node::ContextParent()
{
    uStackFrame __("Fuse.Node", "get_ContextParent()");
    Node* ind8 = OverrideContextParent;
    return (ind8 != NULL) ? ind8 : (Node*)Parent();
}

// public object get_DataContext() [instance] :2838
uObject* Node::DataContext()
{
    uStackFrame __("Fuse.Node", "get_DataContext()");

    if (_dataContext != NULL)
        return _dataContext;

    if (ContextParent() != NULL)
        return uPtr(ContextParent())->DataContext();

    return NULL;
}

// public void set_DataContext(object value) [instance] :2844
void Node::DataContext(uObject* value)
{
    uStackFrame __("Fuse.Node", "set_DataContext(object)");

    if (_dataContext != value)
    {
        ::g::Fuse::DataContextChangedArgs* args = ::g::Fuse::DataContextChangedArgs::New2(this, _dataContext, value);
        _dataContext = value;
        OnDataContextChanged(args);
    }
}

// public generated void add_DataContextChanged(Fuse.DataContextChangedHandler value) [instance] :2870
void Node::add_DataContextChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Node", "add_DataContextChanged(Fuse.DataContextChangedHandler)");
    DataContextChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(DataContextChanged1, value), ::TYPES[131/*Fuse.DataContextChangedHandler*/]);
}

// public generated void remove_DataContextChanged(Fuse.DataContextChangedHandler value) [instance] :2870
void Node::remove_DataContextChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Node", "remove_DataContextChanged(Fuse.DataContextChangedHandler)");
    DataContextChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(DataContextChanged1, value), ::TYPES[131/*Fuse.DataContextChangedHandler*/]);
}

// private int DistanceTo(object obj, int reference) [instance] :3949
int Node::DistanceTo(uObject* obj, int reference)
{
    uStackFrame __("Fuse.Node", "DistanceTo(object,int)");
    Node* p = this;
    int c = 0;

    while (p != NULL)
    {
        if (uPtr(p)->HasInSubtree(obj))
            return c;

        c++;

        if (c > reference)
            return c;

        p = uPtr(p)->Parent();
    }

    return 2147483647;
}

// public double get_DrawCost() [instance] :4734
double Node::DrawCost()
{
    uStackFrame __("Fuse.Node", "get_DrawCost()");
    return _drawCost;
}

// private void DrawLocalRect(Fuse.DrawContext dc, Uno.Rect rect, float lineWidth, float4 color, float4x4 localToClipTransform) [instance] :2933
void Node::DrawLocalRect(::g::Fuse::DrawContext* dc, ::g::Uno::Rect rect, float lineWidth, ::g::Uno::Float4 color, ::g::Uno::Float4x4 localToClipTransform)
{
    uStackFrame __("Fuse.Node", "DrawLocalRect(Fuse.DrawContext,Uno.Rect,float,float4,float4x4)");
    uPtr(::g::Fuse::DrawHelpers::Singelton())->DrawLocalRect(dc, rect, localToClipTransform, lineWidth, color);
}

// protected void DrawLocalSelectionRect(Fuse.DrawContext dc, Uno.Rect rect) [instance] :2938
void Node::DrawLocalSelectionRect(::g::Fuse::DrawContext* dc, ::g::Uno::Rect rect)
{
    uStackFrame __("Fuse.Node", "DrawLocalSelectionRect(Fuse.DrawContext,Uno.Rect)");
    ::g::Uno::Float4x4 localToClipTransform = uPtr(dc)->GetLocalToClipTransform(this);
    double phase = ::g::Fuse::Time::FrameTime() * 4.0;
    float pulse = (float)(0.667 + (0.333 * ::g::Uno::Math::Sin(phase * 3.1415926535897931)));
    ::g::Uno::Float4 color = ::g::Uno::Float4__New2(0.25f, 0.5f, 0.75f, pulse);
    DrawLocalRect(dc, rect, 4.0f, ::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f), localToClipTransform);
    DrawLocalRect(dc, rect, 2.0f, color, localToClipTransform);
}

// public void EndInteraction(object id) [instance] :3177
void Node::EndInteraction(uObject* id)
{
    uStackFrame __("Fuse.Node", "EndInteraction(object)");
    bool ret17;

    if (_interactions == NULL)
        return;

    ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(_interactions), id, &ret17);

    if (uPtr(_interactions)->Count() == 0)
        _interactions = NULL;

    OnInteractionsChanged();
}

// public T FindByType<T>() [instance] :4801
Node* Node::FindByType(uType* __type)
{
    uType* __types[] = {
        __type->U(0),
        Node_typeof()->MakeMethod(1, __type->U(0)),
    };
    uStackFrame __("Fuse.Node", "FindByType`1()");

    if (uIs(this, __types[0]))
        return uAs<Node*>(this, __types[0]);

    return (Node*)GetNearestAncestorOfType(__types[1]);
}

// public Fuse.Node FindNodeByName(string name) [instance] :3918
Node* Node::FindNodeByName(uString* name)
{
    uStackFrame __("Fuse.Node", "FindNodeByName(string)");
    return uAs<Node*>(FindObjectByName(name, uDelegate::New(::TYPES[121/*Uno.Predicate<object>*/], (void*)Node__IsNode_fn, this)), Node_typeof());
}

// public object FindObjectByName(string name, Uno.Predicate<object> acceptor) [instance] :3924
uObject* Node::FindObjectByName(uString* name, uDelegate* acceptor)
{
    uStackFrame __("Fuse.Node", "FindObjectByName(string,Uno.Predicate<object>)");
    uObject* ret18;
    bool ret19;
    ::g::Uno::Collections::List* objs = ::g::Fuse::NameRegistry::GetObjectsWithName(name);

    if (objs == NULL)
        return NULL;

    int bestDistance = 2147483647;
    uObject* best = NULL;

    for (int i = 0; i < uPtr(objs)->Count(); i++)
    {
        uObject* n = (::g::Uno::Collections::List__get_Item_fn(uPtr(objs), uCRef<int>(i), &ret18), ret18);

        if (!(uPtr(acceptor)->Invoke(&ret19, 1, n), ret19))
            continue;

        int dist = DistanceTo(n, bestDistance);

        if (dist < bestDistance)
        {
            bestDistance = dist;
            best = n;
        }

        if (bestDistance == 0)
            return best;
    }

    return best;
}

// public Fuse.Node GetHitWindowPoint(float2 windowPoint) [instance] :3063
Node* Node::GetHitWindowPoint(::g::Uno::Float2 windowPoint)
{
    uStackFrame __("Fuse.Node", "GetHitWindowPoint(float2)");
    Node__HitTestRecord* htr = Node__HitTestRecord::New1();
    ::g::Fuse::HitTestContext* htc = ::g::Fuse::HitTestContext::New1(windowPoint, uDelegate::New(::TYPES[82/*Fuse.HitTestCallback*/], (void*)Node__HitTestRecord__HitTestCallback_fn, htr));

    if (Parent() != NULL)
        htc->PushLocalPoint(uPtr(Parent())->WindowToLocal(windowPoint));

    htc->PushWorldRay(::g::Fuse::IViewport::PointToWorldRay(uInterface(uPtr(Viewport()), ::TYPES[42/*Fuse.IViewport*/]), windowPoint));
    HitTest(htc);
    return htr->Node;
}

// public T GetNearestAncestorOfType<T>() [instance] :4807
Node* Node::GetNearestAncestorOfType(uType* __type)
{
    uType* __types[] = {
        __type->U(0),
    };
    uStackFrame __("Fuse.Node", "GetNearestAncestorOfType`1()");
    Node* current = Parent();

    while (current != NULL)
    {
        if (uIs(current, __types[0]))
            return uAs<Node*>(current, __types[0]);

        current = uPtr(current)->Parent();
    }

    return NULL;
}

// internal Fuse.PropertyState GetPropertyState(int id) [instance] :4000
int Node::GetPropertyState(int id)
{
    uStackFrame __("Fuse.Node", "GetPropertyState(int)");
    int bits = (id & 15) * 2;
    uint32_t mask = 3U;

    if (id < 16)
        return (int)((_b0 >> bits) & mask);
    else if (id < 32)
        return (int)((_b1 >> bits) & mask);
    else if (id < 48)
        return (int)((_b2 >> bits) & mask);
    else if (id < 64)
        return (int)((_b3 >> bits) & mask);
    else if (id < 80)
        return (int)((_b4 >> bits) & mask);
    else if (id < 96)
        return (int)((_b5 >> bits) & mask);
    else if (id < 112)
        return (int)((_b6 >> bits) & mask);
    else
        U_THROW(::g::Uno::Exception::New2(::STRINGS[52/*"Too many st...*/]));
}

// public float4x4 GetTransformTo(Fuse.Node other) [instance] :4549
::g::Uno::Float4x4 Node::GetTransformTo(Node* other)
{
    uStackFrame __("Fuse.Node", "GetTransformTo(Fuse.Node)");
    bool ret20;
    bool ret21;
    ::g::Uno::Collections::HashSet* parents = (::g::Uno::Collections::HashSet*)::g::Uno::Collections::HashSet::New1(::TYPES[124/*Uno.Collections.HashSet<Fuse.Node>*/]);
    Node* q = this;

    while (q != NULL)
    {
        ::g::Uno::Collections::HashSet__Add_fn(uPtr(parents), q, &ret20);
        q = uPtr(q)->Parent();
    }

    Node* c = other;

    while (c != NULL)
    {
        if ((::g::Uno::Collections::HashSet__Contains_fn(uPtr(parents), c, &ret21), ret21))
            break;

        c = uPtr(c)->Parent();
    }

    if (c == NULL)
        return ::g::Uno::Float4x4__Identity();

    ::g::Uno::Float4x4 thisTo = GetTransformToAncestor(c);
    ::g::Uno::Float4x4 otherTo = uPtr(other)->GetTransformToAncestor(c);
    return ::g::Uno::Matrix::Mul8(thisTo, ::g::Uno::Matrix::Invert2(otherTo));
}

// private float4x4 GetTransformToAncestor(Fuse.Node ancestor) [instance] :4578
::g::Uno::Float4x4 Node::GetTransformToAncestor(Node* ancestor)
{
    uStackFrame __("Fuse.Node", "GetTransformToAncestor(Fuse.Node)");
    ::g::Fuse::FastMatrix* m = ::g::Fuse::FastMatrix::Identity();
    Node* n = this;

    while ((n != NULL) && (n != ancestor))
    {
        m = uPtr(m)->Mul(uPtr(n)->LocalTransformInternal());
        n = uPtr(n)->Parent();
    }

    return uPtr(m)->Matrix();
}

// private bool HasBit(Fuse.Node.NodeBits nb) [instance] :2983
bool Node::HasBit(int nb)
{
    uStackFrame __("Fuse.Node", "HasBit(Fuse.Node.NodeBits)");
    return (_nodebits & (1 << nb)) != 0;
}

// private bool get_HasExplicitTransforms() [instance] :4375
bool Node::HasExplicitTransforms()
{
    uStackFrame __("Fuse.Node", "get_HasExplicitTransforms()");
    return (_transforms != NULL) && (uPtr(_transforms)->Count() > 0);
}

// private bool HasInSubtree(object c) [instance] :3967
bool Node::HasInSubtree(uObject* c)
{
    uStackFrame __("Fuse.Node", "HasInSubtree(object)");

    if (c == this)
        return true;

    uObject* co = uAs<uObject*>(c, ::TYPES[125/*Fuse.IChildObject*/]);

    if (co != NULL)
    {
        uObject* p = ::g::Fuse::IChildObject::ParentObject(uInterface(uPtr(co), ::TYPES[125/*Fuse.IChildObject*/]));

        if (p != NULL)
            return HasInSubtree(p);
    }

    return false;
}

// private bool get_HasMarginBox() [instance] :3770
bool Node::HasMarginBox()
{
    uStackFrame __("Fuse.Node", "get_HasMarginBox()");
    return _hasMarginBox;
}

// private bool get_HasResources() [instance] :4109
bool Node::HasResources()
{
    uStackFrame __("Fuse.Node", "get_HasResources()");
    return HasBit(1);
}

// public void HitTest(Fuse.HitTestContext htc) [instance] :3026
void Node::HitTest(::g::Fuse::HitTestContext* htc)
{
    uStackFrame __("Fuse.Node", "HitTest(Fuse.HitTestContext)");

    if (!IsVisible())
        return;

    ::g::Fuse::NodeBounds* bounds = HitTestBounds();
    ::g::Uno::Float2 localPoint;
    bool hit;

    if (IsFlat() && IsLocalFlat())
    {
        localPoint = ParentToLocal(uPtr(htc)->LocalPoint());
        hit = uPtr(bounds)->ContainsPoint(localPoint);
    }
    else
    {
        ::g::Uno::Geometry::Ray world = ::g::Fuse::IViewport::PointToWorldRay(uInterface(uPtr(Viewport()), ::TYPES[42/*Fuse.IViewport*/]), uPtr(htc)->WindowPoint());
        ::g::Uno::Geometry::Ray local = ::g::Fuse::FrustumViewport::WorldToLocalRay(Viewport(), this, world);
        float t = -local.Position.Z / local.Direction.Z;
        ::g::Uno::Float3 plane = ::g::Uno::Float3__op_Addition2(local.Position, ::g::Uno::Float3__op_Multiply1(local.Direction, t));
        localPoint = ::g::Uno::Float2__New2(plane.X, plane.Y);
        hit = uPtr(bounds)->IntersectsRay(local);
    }

    if (true && !hit)
        return;

    ::g::Uno::Float2 old = uPtr(htc)->PushLocalPoint(localPoint);
    OnHitTest(htc);
    htc->PopLocalPoint(old);
}

// protected float2 IfSnap(float2 p) [instance] :3643
::g::Uno::Float2 Node::IfSnap(::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Node", "IfSnap(float2)");
    return SnapToPixels() ? Snap(p) : p;
}

// protected float2 IfSnapDown(float2 p) [instance] :3668
::g::Uno::Float2 Node::IfSnapDown(::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Node", "IfSnapDown(float2)");
    return SnapToPixels() ? SnapDown(p) : p;
}

// protected float2 IfSnapUp(float2 p) [instance] :3648
::g::Uno::Float2 Node::IfSnapUp(::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Node", "IfSnapUp(float2)");
    return SnapToPixels() ? SnapUp(p) : p;
}

// public bool get_IgnoreStyle() [instance] :4235
bool Node::IgnoreStyle()
{
    uStackFrame __("Fuse.Node", "get_IgnoreStyle()");
    return _ignoreStyle;
}

// public void set_IgnoreStyle(bool value) [instance] :4236
void Node::IgnoreStyle(bool value)
{
    uStackFrame __("Fuse.Node", "set_IgnoreStyle(bool)");

    if (_ignoreStyle != value)
    {
        _ignoreStyle = value;
        ReapplyStyle();
    }
}

// internal Fuse.FastMatrix get_InternLocalTransformInternal() [instance] :4508
::g::Fuse::FastMatrix* Node::InternLocalTransformInternal()
{
    uStackFrame __("Fuse.Node", "get_InternLocalTransformInternal()");
    return LocalTransformInternal();
}

// internal float2 InternSnap(float2 p) [instance] :3636
::g::Uno::Float2 Node::InternSnap(::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Node", "InternSnap(float2)");
    return Snap(p);
}

// internal float2 InternSnapUp(float2 p) [instance] :3655
::g::Uno::Float2 Node::InternSnapUp(::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Node", "InternSnapUp(float2)");
    return SnapUp(p);
}

// private void InvalidateFlat() [instance] :3301
void Node::InvalidateFlat()
{
    uStackFrame __("Fuse.Node", "InvalidateFlat()");

    if (_isLocalFlatCached || _isFlatCached)
    {
        _isLocalFlatCached = false;
        _isFlatCached = false;

        if (Parent() != NULL)
            uPtr(Parent())->InvalidateFlat();
    }
}

// protected void InvalidateHitTestBounds() [instance] :3084
void Node::InvalidateHitTestBounds()
{
    uStackFrame __("Fuse.Node", "InvalidateHitTestBounds()");
    Node* p = this;

    while ((p != NULL) && p->_isHitTestBoundsCacheValid)
    {
        uPtr(p)->_isHitTestBoundsCacheValid = false;
        p = uPtr(p)->Parent();
    }
}

// public void InvalidateLayout([Fuse.InvalidateLayoutReason reason]) [instance] :3549
void Node::InvalidateLayout(int reason)
{
    uStackFrame __("Fuse.Node", "InvalidateLayout([Fuse.InvalidateLayoutReason])");

    if (Node::_performingLayout())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[53/*"Layout was ...*/]));

    if (reason <= _layoutDirty)
        return;

    _layoutDirty = reason;
    OnInvalidateLayout();
    Node* child = this;
    Node* parent = Parent();
    Node* maybeChild = NULL;

    while (parent != NULL)
    {
        if (reason <= uPtr(parent)->_layoutDirty)
            break;

        int useReason = reason;

        if (uPtr(child)->HasMarginBox() && (reason > 1))
        {
            int mb = uPtr(parent)->IsMarginBoxDependent(child);

            if ((mb == 4) || (mb == 3))
            {
                while ((maybeChild != NULL) && (maybeChild != parent))
                {
                    uPtr(maybeChild)->_layoutDirty = 2;
                    maybeChild = uPtr(maybeChild)->Parent();
                }

                maybeChild = NULL;
            }

            switch (mb)
            {
                case 0:
                {
                    useReason = reason = 1;
                    break;
                }
                case 1:
                {
                    useReason = 2;
                    reason = 1;
                    break;
                }
                case 2:
                {
                    useReason = 1;

                    if (maybeChild == NULL)
                        maybeChild = parent;

                    break;
                }
                case 3:
                {
                    useReason = 2;

                    if (maybeChild == NULL)
                        maybeChild = parent;

                    break;
                }
                case 4:
                {
                    reason = useReason = 2;
                    break;
                }
            }
        }

        uPtr(parent)->OnInvalidateLayout();

        if (useReason > parent->_layoutDirty)
            parent->_layoutDirty = useReason;

        child = parent;
        parent = uPtr(parent)->Parent();
    }
}

// public void InvalidateRenderBounds() [instance] :4634
void Node::InvalidateRenderBounds()
{
    uStackFrame __("Fuse.Node", "InvalidateRenderBounds()");
    Node* p = this;

    while (p != NULL)
    {
        if (uPtr(p)->OnInvalidateRenderBounds())
            break;

        p = uPtr(p)->Parent();
    }
}

// public void InvalidateVisual() [instance] :5027
void Node::InvalidateVisual()
{
    uStackFrame __("Fuse.Node", "InvalidateVisual()");

    if (_lastInvalidate == ::g::Fuse::UpdateManager::FrameIndex())
        return;

    _lastInvalidate = ::g::Fuse::UpdateManager::FrameIndex();
    OnInvalidateVisual();

    if ((Parent() != NULL) && IsVisible())
        uPtr(Parent())->InvalidateVisual();
}

// private void InvokeEventHandler(object obj, object args) [instance] :2992
void Node::InvokeEventHandler(uObject* obj, uObject* args)
{
    uStackFrame __("Fuse.Node", "InvokeEventHandler(object,object)");
    uPtr(uCast<uDelegate*>(obj, ::TYPES[21/*Uno.EventHandler*/]))->Invoke(2, this, uCast< ::g::Uno::EventArgs*>(args, ::TYPES[92/*Uno.EventArgs*/]));
}

// public bool get_IsContextEnabled() [instance] :3262
bool Node::IsContextEnabled()
{
    uStackFrame __("Fuse.Node", "get_IsContextEnabled()");
    return _isContextEnabledCache;
}

// public void add_IsContextEnabledChanged(Uno.EventHandler value) [instance] :3245
void Node::add_IsContextEnabledChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Node", "add_IsContextEnabledChanged(Uno.EventHandler)");
    AddEventHandler(Node::_isContextEnabledChangedHandle(), 4, value);
}

// public void remove_IsContextEnabledChanged(Uno.EventHandler value) [instance] :3246
void Node::remove_IsContextEnabledChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Node", "remove_IsContextEnabledChanged(Uno.EventHandler)");
    RemoveEventHandler(Node::_isContextEnabledChangedHandle(), 4, value);
}

// public bool get_IsEnabled() [instance] :3255
bool Node::IsEnabled()
{
    uStackFrame __("Fuse.Node", "get_IsEnabled()");
    bool ret35;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Node::IsEnabledProperty()), this, &ret35), ret35);
}

// public void set_IsEnabled(bool value) [instance] :3256
void Node::IsEnabled(bool value)
{
    uStackFrame __("Fuse.Node", "set_IsEnabled(bool)");
    bool ret36;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Node::IsEnabledProperty()), this, uCRef(value), &ret36);
}

// internal bool get_IsFlat() [instance] :3336
bool Node::IsFlat()
{
    uStackFrame __("Fuse.Node", "get_IsFlat()");

    if (_isFlatCached)
        return _isFlat;

    bool flat = true;

    for (int i = 0; i < SubNodeCount(); ++i)
        if (!uPtr(GetSubNode(i))->IsFlat() || !uPtr(GetSubNode(i))->IsLocalFlat())
        {
            flat = false;
            break;
        }

    _isFlat = flat;
    _isFlatCached = true;
    return flat;
}

// public bool get_IsInteracting() [instance] :3161
bool Node::IsInteracting()
{
    uStackFrame __("Fuse.Node", "get_IsInteracting()");
    return (_interactions != NULL) && (uPtr(_interactions)->Count() > 0);
}

// public generated void add_IsInteractingChanged(Uno.EventHandler value) [instance] :3158
void Node::add_IsInteractingChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Node", "add_IsInteractingChanged(Uno.EventHandler)");
    IsInteractingChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(IsInteractingChanged1, value), ::TYPES[21/*Uno.EventHandler*/]);
}

// public generated void remove_IsInteractingChanged(Uno.EventHandler value) [instance] :3158
void Node::remove_IsInteractingChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Node", "remove_IsInteractingChanged(Uno.EventHandler)");
    IsInteractingChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(IsInteractingChanged1, value), ::TYPES[21/*Uno.EventHandler*/]);
}

// internal bool get_IsLocalFlat() [instance] :3317
bool Node::IsLocalFlat()
{
    uStackFrame __("Fuse.Node", "get_IsLocalFlat()");
    ::g::Fuse::Transform* ret37;

    if (_isLocalFlatCached)
        return _isLocalFlat;

    bool v = true;

    for (uObject* enum4 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Transforms()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[110/*Fuse.Transform*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum4), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Transform* t = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum4), ::TYPES[143/*Uno.Collections.IEnumerator<Fuse.Transform>*/]), &ret37), ret37);
        v = v && uPtr(t)->IsFlat();
    }

    _isLocalFlat = v;
    _isLocalFlatCached = true;
    return v;
}

// public bool get_IsLocalRooted() [instance] :4838
bool Node::IsLocalRooted()
{
    uStackFrame __("Fuse.Node", "get_IsLocalRooted()");
    return _rootStage >= 6;
}

// private bool IsNode(object obj) [instance] :3922
bool Node::IsNode(uObject* obj)
{
    uStackFrame __("Fuse.Node", "IsNode(object)");
    return uIs(obj, Node_typeof());
}

// public bool get_IsRooted() [instance] :4818
bool Node::IsRooted()
{
    uStackFrame __("Fuse.Node", "get_IsRooted()");
    return IsLocalRooted();
}

// private bool IsRootStage(Fuse.Node.RootStage stage) [instance] :4852
bool Node::IsRootStage(int stage)
{
    uStackFrame __("Fuse.Node", "IsRootStage(Fuse.Node.RootStage)");
    return _rootStage >= stage;
}

// protected bool get_IsSubtreeRooted() [instance] :4819
bool Node::IsSubtreeRooted()
{
    uStackFrame __("Fuse.Node", "get_IsSubtreeRooted()");
    return IsRootStage(4);
}

// public bool get_IsVisible() [instance] :3380
bool Node::IsVisible()
{
    uStackFrame __("Fuse.Node", "get_IsVisible()");
    return _isVisibleCached;
}

// public void add_IsVisibleChanged(Uno.EventHandler value) [instance] :3375
void Node::add_IsVisibleChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Node", "add_IsVisibleChanged(Uno.EventHandler)");
    AddEventHandler(Node::_isVisibleChangedHandle(), 5, value);
}

// public void remove_IsVisibleChanged(Uno.EventHandler value) [instance] :3376
void Node::remove_IsVisibleChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Node", "remove_IsVisibleChanged(Uno.EventHandler)");
    RemoveEventHandler(Node::_isVisibleChangedHandle(), 5, value);
}

// internal bool IsWorldMatrixValid() [instance] :4461
bool Node::IsWorldMatrixValid()
{
    uStackFrame __("Fuse.Node", "IsWorldMatrixValid()");

    if ((_worldTransformCacheVersion != _worldTransformVersion) || (_worldTransform == NULL))
        return false;

    if (Parent() != NULL)
        return (_worldTransformParentCacheVersion == uPtr(Parent())->_worldTransformVersion) && uPtr(Parent())->IsWorldMatrixValid();

    return true;
}

// public Fuse.Layer get_Layer() [instance] :3489
int Node::Layer()
{
    uStackFrame __("Fuse.Node", "get_Layer()");
    uObject* v;

    if (uPtr(Properties())->TryGet(Node::_layerProperty(), &v))
        return uUnbox<int>(::TYPES[144/*Fuse.Layer*/], v);

    return 1;
}

// public void set_Layer(Fuse.Layer value) [instance] :3496
void Node::Layer(int value)
{
    uStackFrame __("Fuse.Node", "set_Layer(Fuse.Layer)");
    uPtr(Properties())->Set(Node::_layerProperty(), uBox<int>(::TYPES[144/*Fuse.Layer*/], value));
    InvalidateLayout(2);
}

// public Fuse.LayoutRole get_LayoutRole() [instance] :3508
int Node::LayoutRole()
{
    uStackFrame __("Fuse.Node", "get_LayoutRole()");
    uObject* v;

    if (uPtr(Properties())->TryGet(Node::_layoutRoleProperty(), &v))
        return uUnbox<int>(::TYPES[145/*Fuse.LayoutRole*/], v);

    if (Layer() != 1)
        return 1;

    return 0;
}

// public void set_LayoutRole(Fuse.LayoutRole value) [instance] :3520
void Node::LayoutRole(int value)
{
    uStackFrame __("Fuse.Node", "set_LayoutRole(Fuse.LayoutRole)");
    uPtr(Properties())->Set(Node::_layoutRoleProperty(), uBox<int>(::TYPES[145/*Fuse.LayoutRole*/], value));
    InvalidateLayout(2);
}

// public float2 LocalToParent(float2 localPoint) [instance] :4988
::g::Uno::Float2 Node::LocalToParent(::g::Uno::Float2 localPoint)
{
    uStackFrame __("Fuse.Node", "LocalToParent(float2)");
    ::g::Uno::Float2 localPoint_ = localPoint;
    localPoint_ = ::g::Uno::Vector::TransformCoordinate(localPoint_, LocalTransform());
    return localPoint_;
}

// public float4x4 get_LocalTransform() [instance] :4502
::g::Uno::Float4x4 Node::LocalTransform()
{
    uStackFrame __("Fuse.Node", "get_LocalTransform()");
    return uPtr(LocalTransformInternal())->Matrix();
}

// protected Fuse.FastMatrix get_LocalTransformInternal() [instance] :4512
::g::Fuse::FastMatrix* Node::LocalTransformInternal()
{
    uStackFrame __("Fuse.Node", "get_LocalTransformInternal()");

    if (_localTransform == NULL)
    {
        _localTransform = ::g::Fuse::FastMatrix::Identity();
        PrependLocalTransform(_localTransform);
    }

    return _localTransform;
}

// protected float4x4 get_LocalTransformInverse() [instance] :4526
::g::Uno::Float4x4 Node::LocalTransformInverse()
{
    uStackFrame __("Fuse.Node", "get_LocalTransformInverse()");

    if (_localTransformInverse == NULL)
    {
        _localTransformInverse = ::g::Fuse::FastMatrix::FromFloat4x4(LocalTransform());
        uPtr(_localTransformInverse)->Invert();
    }

    return uPtr(_localTransformInverse)->Matrix();
}

// internal float2 get_MarginBoxPosition() [instance] :3815
::g::Uno::Float2 Node::MarginBoxPosition()
{
    uStackFrame __("Fuse.Node", "get_MarginBoxPosition()");
    return _ambPosition;
}

// public string get_Name() [instance] :3900
uString* Node::Name()
{
    uStackFrame __("Fuse.Node", "get_Name()");
    return _name;
}

// public void set_Name(string value) [instance] :3901
void Node::Name(uString* value)
{
    uStackFrame __("Fuse.Node", "set_Name(string)");
    Node::SetName(this, value);
}

// protected void OnBeginRemove(Fuse.BeginRemoveArgs args) [instance] :4761
void Node::OnBeginRemove(::g::Fuse::BeginRemoveArgs* args)
{
    uStackFrame __("Fuse.Node", "OnBeginRemove(Fuse.BeginRemoveArgs)");
    _pendingRemove = args;

    if (::g::Uno::Delegate::op_Inequality(BeginRemove1, NULL))
        uPtr(BeginRemove1)->Invoke(2, this, args);
}

// protected internal void OnBringIntoView(Fuse.Node elm) [instance] :3839
void Node::OnBringIntoView(Node* elm)
{
    uStackFrame __("Fuse.Node", "OnBringIntoView(Fuse.Node)");

    if (::g::Uno::Delegate::op_Inequality(RequestBringIntoView1, NULL))
        uPtr(RequestBringIntoView1)->Invoke(2, this, (::g::Fuse::RequestBringIntoViewArgs*)::g::Fuse::RequestBringIntoViewArgs::New2(elm));

    if (Parent() != NULL)
        uPtr(Parent())->OnBringIntoView(elm);
}

// private void OnDataContextChanged(Fuse.DataContextChangedArgs args) [instance] :2856
void Node::OnDataContextChanged(::g::Fuse::DataContextChangedArgs* args)
{
    uStackFrame __("Fuse.Node", "OnDataContextChanged(Fuse.DataContextChangedArgs)");

    if (::g::Uno::Delegate::op_Inequality(DataContextChanged1, NULL))
        uPtr(DataContextChanged1)->Invoke(2, this, args);

    for (int i = 0; i < SubNodeCount(); i++)
    {
        Node* c = GetSubNode(i);
        uPtr(c)->OnDataContextChanged(args);
    }
}

// private void OnInteractionsChanged() [instance] :3189
void Node::OnInteractionsChanged()
{
    uStackFrame __("Fuse.Node", "OnInteractionsChanged()");

    if (::g::Uno::Delegate::op_Inequality(IsInteractingChanged1, NULL))
        uPtr(IsInteractingChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// protected void OnIsContextEnabledChanged() [instance] :3284
void Node::OnIsContextEnabledChanged()
{
    uStackFrame __("Fuse.Node", "OnIsContextEnabledChanged()");
    RaiseEvent(Node::_isContextEnabledChangedHandle(), 4);
    InvalidateHitTestBounds();
    InvalidateVisual();
}

// public void OnIsSelectedChanged(bool isSelected) [instance] :4727
void Node::OnIsSelectedChanged(bool isSelected)
{
}

// protected void OnIsVisibleChanged() [instance] :3404
void Node::OnIsVisibleChanged()
{
    uStackFrame __("Fuse.Node", "OnIsVisibleChanged()");

    if (IsVisible())
        InvalidateVisual();

    if (Parent() != NULL)
        uPtr(Parent())->InvalidateVisual();

    RaiseEvent(Node::_isVisibleChangedHandle(), 5);
    InvalidateHitTestBounds();
}

// protected void OnLocalVisibleChanged() [instance] :3385
void Node::OnLocalVisibleChanged()
{
    uStackFrame __("Fuse.Node", "OnLocalVisibleChanged()");
    UpdateIsVisibleCache();
}

// private void OnMatrixChanged(Fuse.Transform t) [instance] :4393
void Node::OnMatrixChanged(::g::Fuse::Transform* t)
{
    uStackFrame __("Fuse.Node", "OnMatrixChanged(Fuse.Transform)");
    OnTransformsChanged();
    InvalidateLocalTransform();
}

// private void OnResourceChanged(Uno.UX.Resource res) [instance] :4112
void Node::OnResourceChanged(::g::Uno::UX::Resource* res)
{
    uStackFrame __("Fuse.Node", "OnResourceChanged(Uno.UX.Resource)");
    ::g::Fuse::Resources::ResourceRegistry::NotifyResourceChanged(uPtr(res)->Key());
}

// private void OnTransformAdded(Fuse.Transform t) [instance] :4378
void Node::OnTransformAdded(::g::Fuse::Transform* t)
{
    uStackFrame __("Fuse.Node", "OnTransformAdded(Fuse.Transform)");
    uPtr(t)->Added(this);
    t->add_MatrixChanged(uDelegate::New(::TYPES[135/*Uno.Action<Fuse.Transform>*/], (void*)Node__OnMatrixChanged_fn, this));
    OnMatrixChanged(t);
}

// private void OnTransformRemoved(Fuse.Transform t) [instance] :4385
void Node::OnTransformRemoved(::g::Fuse::Transform* t)
{
    uStackFrame __("Fuse.Node", "OnTransformRemoved(Fuse.Transform)");
    uPtr(t)->Removed(this);
    t->remove_MatrixChanged(uDelegate::New(::TYPES[135/*Uno.Action<Fuse.Transform>*/], (void*)Node__OnMatrixChanged_fn, this));
    OnMatrixChanged(t);
    t->AddedByStyle = false;
}

// private void OnTransformsChanged() [instance] :4401
void Node::OnTransformsChanged()
{
    uStackFrame __("Fuse.Node", "OnTransformsChanged()");

    if (::g::Uno::Delegate::op_Inequality(TransformsChanged1, NULL))
        uPtr(TransformsChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// protected void OnWorldTransformValidated() [instance] :4494
void Node::OnWorldTransformValidated()
{
}

// public Fuse.Node get_Parent() [instance] :4783
Node* Node::Parent()
{
    uStackFrame __("Fuse.Node", "get_Parent()");
    return _parent;
}

// public float2 ParentToLocal(float2 parentPoint) [instance] :4983
::g::Uno::Float2 Node::ParentToLocal(::g::Uno::Float2 parentPoint)
{
    uStackFrame __("Fuse.Node", "ParentToLocal(float2)");
    ::g::Uno::Float2 parentPoint_ = parentPoint;
    return ::g::Uno::Vector::TransformCoordinate(parentPoint_, LocalTransformInverse());
}

// protected void PerformLayout() [instance] :3702
void Node::PerformLayout()
{
    uStackFrame __("Fuse.Node", "PerformLayout()");
    PerformLayout1(::g::Fuse::IViewport::Size(uInterface(uPtr(Viewport()), ::TYPES[42/*Fuse.IViewport*/])));
}

// protected void PerformLayout(float2 clientSize) [instance] :3710
void Node::PerformLayout1(::g::Uno::Float2 clientSize)
{
    uStackFrame __("Fuse.Node", "PerformLayout(float2)");

    if ((_cachedRenderTargetSize.X != clientSize.X) || (_cachedRenderTargetSize.Y != clientSize.Y))
    {
        _cachedRenderTargetSize = clientSize;
        InvalidateLayout(2);
    }

    if (_layoutDirty != 0)
    {
        Node::_performingLayout() = true;

        {
            const auto __finally_fun = [&]()
            {
                Node::_performingLayout() = false;
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);

            if (_layoutDirty == 2)
            {
                ::g::Uno::Float2 availableSize = clientSize;
                ::g::Uno::Float2 offset = ::g::Uno::Float2__New1(0.0f);
                ArrangeMarginBox(offset, ::g::Fuse::LayoutParams__Create(availableSize));
            }
            else
                UpdateLayout();
        }
    }
}

// private void PrependExplicitTransforms(Fuse.FastMatrix m) [instance] :4597
void Node::PrependExplicitTransforms(::g::Fuse::FastMatrix* m)
{
    uStackFrame __("Fuse.Node", "PrependExplicitTransforms(Fuse.FastMatrix)");
    ::g::Fuse::Transform* ret24;

    if (HasExplicitTransforms())
    {
        PrependTransformOrigin(m);

        for (int i = 0; i < uPtr(_transforms)->Count(); i++)
            uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_transforms), uCRef<int>(i), &ret24), ret24))->PrependTo(m);

        PrependInverseTransformOrigin(m);
    }
}

// private void PrependLocalTransform(Fuse.FastMatrix m) [instance] :4591
void Node::PrependLocalTransform(::g::Fuse::FastMatrix* m)
{
    uStackFrame __("Fuse.Node", "PrependLocalTransform(Fuse.FastMatrix)");
    PrependImplicitTransform(m);
    PrependExplicitTransforms(m);
}

// public Fuse.Properties get_Properties() [instance] :4772
::g::Fuse::Properties* Node::Properties()
{
    uStackFrame __("Fuse.Node", "get_Properties()");

    if (_properties == NULL)
        _properties = ::g::Fuse::Properties::New1();

    return _properties;
}

// private void RaiseEvent(Fuse.PropertyHandle ph, Fuse.Node.NodeBits ne) [instance] :2987
void Node::RaiseEvent(::g::Fuse::PropertyHandle* ph, int ne)
{
    uStackFrame __("Fuse.Node", "RaiseEvent(Fuse.PropertyHandle,Fuse.Node.NodeBits)");

    if (HasBit(ne))
        uPtr(Properties())->ForeachInList1(ph, uDelegate::New(::TYPES[136/*Uno.Action<object, object>*/], (void*)Node__InvokeEventHandler_fn, this), ::g::Uno::EventArgs::Empty());
}

// private void ReapplyStyle() [instance] :4186
void Node::ReapplyStyle()
{
    uStackFrame __("Fuse.Node", "ReapplyStyle()");
    ResetStyle();

    if (IsRootStage(2))
        ApplyStyle();
}

// private void ReapplySubtreeStyle() [instance] :4176
void Node::ReapplySubtreeStyle()
{
    uStackFrame __("Fuse.Node", "ReapplySubtreeStyle()");

    for (int i = 0; i < SubNodeCount(); i++)
    {
        Node* n = GetSubNode(i);
        uPtr(n)->ReapplyStyle();
        n->ReapplySubtreeStyle();
    }
}

// private void RearrangeMarginBox() [instance] :3772
void Node::RearrangeMarginBox()
{
    uStackFrame __("Fuse.Node", "RearrangeMarginBox()");

    if (!HasMarginBox())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[54/*"Invalid cal...*/]));

    ArrangeMarginBox(_ambPosition, _ambLayoutParams);
}

// public void RemoveDrawCost(double cost) [instance] :4746
void Node::RemoveDrawCost(double cost)
{
    uStackFrame __("Fuse.Node", "RemoveDrawCost(double)");
    Node* p = this;

    while (p != NULL)
    {
        uPtr(p)->_drawCost = (uPtr(p)->_drawCost - cost);
        p = uPtr(p)->Parent();
    }
}

// private void RemoveEventHandler(Fuse.PropertyHandle ph, Fuse.Node.NodeBits ne, object handler) [instance] :3004
void Node::RemoveEventHandler(::g::Fuse::PropertyHandle* ph, int ne, uObject* handler)
{
    uStackFrame __("Fuse.Node", "RemoveEventHandler(Fuse.PropertyHandle,Fuse.Node.NodeBits,object)");
    uPtr(Properties())->RemoveFromList(ph, handler);
    uObject* foo;

    if (!uPtr(Properties())->TryGet(ph, &foo))
        ClearBit(ne);
}

// public generated void add_RequestBringIntoView(Fuse.RequestBringIntoViewHandler value) [instance] :3837
void Node::add_RequestBringIntoView(uDelegate* value)
{
    uStackFrame __("Fuse.Node", "add_RequestBringIntoView(Fuse.RequestBringIntoViewHandler)");
    RequestBringIntoView1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(RequestBringIntoView1, value), ::TYPES[130/*Fuse.RequestBringIntoViewHandler*/]);
}

// public generated void remove_RequestBringIntoView(Fuse.RequestBringIntoViewHandler value) [instance] :3837
void Node::remove_RequestBringIntoView(uDelegate* value)
{
    uStackFrame __("Fuse.Node", "remove_RequestBringIntoView(Fuse.RequestBringIntoViewHandler)");
    RequestBringIntoView1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(RequestBringIntoView1, value), ::TYPES[130/*Fuse.RequestBringIntoViewHandler*/]);
}

// internal void ResetStyle() [instance] :4193
void Node::ResetStyle()
{
    uStackFrame __("Fuse.Node", "ResetStyle()");
    ::g::Fuse::Style* ret25;

    if (HasBit(0))
    {
        OnResetStyle();
        ClearBit(0);
    }

    uObject* listobj;

    if (uPtr(Properties())->TryGet(Node::_styleHandle(), &listobj))
    {
        uObject* s = (uObject*)listobj;

        for (int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(s), ::TYPES[111/*Uno.Collections.ICollection<Fuse.Style>*/])) - 1; i >= 0; --i)
            if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(s), ::TYPES[112/*Uno.Collections.IList<Fuse.Style>*/]), uCRef<int>(i), &ret25), ret25))->AddedByStyle)
                ::g::Uno::Collections::IList::RemoveAt(uInterface(uPtr(s), ::TYPES[112/*Uno.Collections.IList<Fuse.Style>*/]), i);
    }
}

// public Uno.Collections.IList<Uno.UX.Resource> get_Resources() [instance] :4048
uObject* Node::Resources()
{
    uStackFrame __("Fuse.Node", "get_Resources()");

    if (!HasResources())
    {
        SetBit(1);
        uPtr(Properties())->Set(Node::_resourcesHandle(), (::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[146/*Uno.Collections.ObservableList<Uno.UX.Resource>*/], uDelegate::New(::TYPES[147/*Uno.Action<Uno.UX.Resource>*/], (void*)Node__OnResourceChanged_fn, this), uDelegate::New(::TYPES[147/*Uno.Action<Uno.UX.Resource>*/], (void*)Node__OnResourceChanged_fn, this)));
    }

    return (uObject*)uPtr(Properties())->Get(Node::_resourcesHandle());
}

// internal void Root() [instance] :4891
void Node::Root()
{
    uStackFrame __("Fuse.Node", "Root()");

    if (_rootStage > 0)
        return;

    _rootStage = 1;

    if (::g::Fuse::UpdateManager::IsPastStage(1))
        ::g::Fuse::Diagnostics::Error(::STRINGS[55/*"Rooting hap...*/], this, ::STRINGS[56/*"/usr/local/...*/], 4898, ::STRINGS[57/*"Root"*/]);

    if (::g::Uno::String::op_Inequality(Name(), NULL))
        ::g::Fuse::NameRegistry::SetName(this, Name());

    UpdateIsContextEnabledCache();
    UpdateIsVisibleCache();
    _rootStage = 2;
    ApplyStyle();
    _rootStage = 3;
    RootBehaviors();
    _rootStage = 4;

    for (int i = 0; i < SubNodeCount(); i++)
        uPtr(GetSubNode(i))->Root();

    _rootStage = 5;
    RaiseEvent(Node::_rootedHandle(), 8);
    OnRooted();
    _rootStage = 6;
    _ambLayoutParams.Reset();
}

// private void RootBehaviors() [instance] :2630
void Node::RootBehaviors()
{
    uStackFrame __("Fuse.Node", "RootBehaviors()");
    ::g::Fuse::Behavior* ret26;
    ::g::Fuse::Behavior* ret27;

    if (_behaviors != NULL)

        for (int i = 0; i < uPtr(_behaviors)->Count(); i++)
            if (!uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_behaviors), uCRef<int>(i), &ret26), ret26))->IsRooted())
                uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_behaviors), uCRef<int>(i), &ret27), ret27))->Rooted(this);
}

// internal void RootChild(Fuse.Node child) [instance] :4873
void Node::RootChild(Node* child)
{
    uStackFrame __("Fuse.Node", "RootChild(Fuse.Node)");

    if (child != NULL)
    {
        uPtr(child)->SetParent(this);

        if (IsSubtreeRooted())
            child->Root();
    }
}

// public void add_Rooted(Uno.EventHandler value) [instance] :4824
void Node::add_Rooted(uDelegate* value)
{
    uStackFrame __("Fuse.Node", "add_Rooted(Uno.EventHandler)");
    AddEventHandler(Node::_rootedHandle(), 8, value);
}

// public void remove_Rooted(Uno.EventHandler value) [instance] :4825
void Node::remove_Rooted(uDelegate* value)
{
    uStackFrame __("Fuse.Node", "remove_Rooted(Uno.EventHandler)");
    RemoveEventHandler(Node::_rootedHandle(), 8, value);
}

// private void SetBit(Fuse.Node.NodeBits nb) [instance] :2984
void Node::SetBit(int nb)
{
    uStackFrame __("Fuse.Node", "SetBit(Fuse.Node.NodeBits)");
    _nodebits = (_nodebits | (1 << nb));
}

// internal void SetParent(Fuse.Node parent) [instance] :4857
void Node::SetParent(Node* parent)
{
    uStackFrame __("Fuse.Node", "SetParent(Fuse.Node)");

    if (_pendingRemove != NULL)
    {
        uPtr(_pendingRemove)->Remove();
        _pendingRemove = NULL;
    }

    if (((parent != NULL) && (_parent != NULL)) && (_parent != parent))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[58/*"Node alread...*/]));

    _parent = parent;
}

// internal void SetPropertyState(int id, Fuse.PropertyState state) [instance] :4015
void Node::SetPropertyState(int id, int state)
{
    uStackFrame __("Fuse.Node", "SetPropertyState(int,Fuse.PropertyState)");
    int bits = (id & 15) * 2;
    uint32_t mask = ~(3U << bits);

    if (id < 16)
        _b0 = ((_b0 & mask) | ((uint32_t)state << bits));
    else if (id < 32)
        _b1 = ((_b1 & mask) | ((uint32_t)state << bits));
    else if (id < 48)
        _b2 = ((_b2 & mask) | ((uint32_t)state << bits));
    else if (id < 64)
        _b3 = ((_b3 & mask) | ((uint32_t)state << bits));
    else if (id < 80)
        _b4 = ((_b4 & mask) | ((uint32_t)state << bits));
    else if (id < 96)
        _b5 = ((_b5 & mask) | ((uint32_t)state << bits));
    else if (id < 112)
        _b6 = ((_b6 & mask) | ((uint32_t)state << bits));
    else
        U_THROW(::g::Uno::Exception::New2(::STRINGS[52/*"Too many st...*/]));
}

// public void SetResource(string key, object value) [instance] :4059
void Node::SetResource(uString* key, uObject* value)
{
    uStackFrame __("Fuse.Node", "SetResource(string,object)");
    ::g::Uno::UX::Resource* ret28;
    uObject* resources = Resources();

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(resources), ::TYPES[138/*Uno.Collections.ICollection<Uno.UX.Resource>*/])); ++i)
    {
        ::g::Uno::UX::Resource* r = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(resources), ::TYPES[139/*Uno.Collections.IList<Uno.UX.Resource>*/]), uCRef<int>(i), &ret28), ret28);

        if (::g::Uno::String::op_Equality(uPtr(r)->Key(), key))
        {
            ::g::Uno::Collections::IList::RemoveAt(uInterface(uPtr(resources), ::TYPES[139/*Uno.Collections.IList<Uno.UX.Resource>*/]), i);
            break;
        }
    }

    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(resources), ::TYPES[138/*Uno.Collections.ICollection<Uno.UX.Resource>*/]), ::g::Uno::UX::Resource::New1(key, value));
}

// protected float2 Snap(float2 p) [instance] :3637
::g::Uno::Float2 Node::Snap(::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Node", "Snap(float2)");
    ::g::Uno::Float2 s = ::g::Uno::Float2__op_Division1(::g::Uno::Math::Round4(::g::Uno::Float2__op_Multiply1(p, AbsoluteZoom())), AbsoluteZoom());
    return s;
}

// protected float2 SnapDown(float2 p) [instance] :3662
::g::Uno::Float2 Node::SnapDown(::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Node", "SnapDown(float2)");
    ::g::Uno::Float2 s = ::g::Uno::Float2__op_Division1(::g::Uno::Math::Floor2(::g::Uno::Float2__op_Addition1(::g::Uno::Float2__op_Multiply1(p, AbsoluteZoom()), 0.005f)), AbsoluteZoom());
    return s;
}

// public bool get_SnapToPixels() [instance] :3694
bool Node::SnapToPixels()
{
    uStackFrame __("Fuse.Node", "get_SnapToPixels()");
    return _snapToPixels;
}

// public void set_SnapToPixels(bool value) [instance] :3695
void Node::SnapToPixels(bool value)
{
    uStackFrame __("Fuse.Node", "set_SnapToPixels(bool)");
    bool ret38;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Node::SnapToPixelsProperty()), this, uCRef(value), &ret38);
}

// protected float2 SnapUp(float2 p) [instance] :3656
::g::Uno::Float2 Node::SnapUp(::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Node", "SnapUp(float2)");
    ::g::Uno::Float2 s = ::g::Uno::Float2__op_Division1(::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Subtraction1(::g::Uno::Float2__op_Multiply1(p, AbsoluteZoom()), 0.005f)), AbsoluteZoom());
    return s;
}

// private void StyleAdded(Fuse.Style s) [instance] :4158
void Node::StyleAdded(::g::Fuse::Style* s)
{
    uStackFrame __("Fuse.Node", "StyleAdded(Fuse.Style)");
    uPtr(s)->add_TemplatesChanged(uDelegate::New(::TYPES[72/*Uno.Action*/], (void*)Node__ReapplySubtreeStyle_fn, this));
    SetBit(3);
    ReapplySubtreeStyle();
}

// private void StyleRemoved(Fuse.Style s) [instance] :4165
void Node::StyleRemoved(::g::Fuse::Style* s)
{
    uStackFrame __("Fuse.Node", "StyleRemoved(Fuse.Style)");
    uPtr(s)->remove_TemplatesChanged(uDelegate::New(::TYPES[72/*Uno.Action*/], (void*)Node__ReapplySubtreeStyle_fn, this));

    if (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Styles()), ::TYPES[111/*Uno.Collections.ICollection<Fuse.Style>*/])) == 0)
    {
        uPtr(Properties())->Clear(Node::_styleHandle());
        ClearBit(3);
    }

    ReapplySubtreeStyle();
}

// public Uno.Collections.IList<Fuse.Style> get_Styles() [instance] :4139
uObject* Node::Styles()
{
    uStackFrame __("Fuse.Node", "get_Styles()");
    uObject* listobj;

    if (!uPtr(Properties())->TryGet(Node::_styleHandle(), &listobj))
    {
        listobj = (::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[148/*Uno.Collections.ObservableList<Fuse.Style>*/], uDelegate::New(::TYPES[149/*Uno.Action<Fuse.Style>*/], (void*)Node__StyleAdded_fn, this), uDelegate::New(::TYPES[149/*Uno.Action<Fuse.Style>*/], (void*)Node__StyleRemoved_fn, this));
        uPtr(Properties())->Set(Node::_styleHandle(), listobj);
    }

    return (uObject*)listobj;
}

// public Uno.Collections.IList<Fuse.Transform> get_Transforms() [instance] :4360
uObject* Node::Transforms()
{
    uStackFrame __("Fuse.Node", "get_Transforms()");

    if (_transforms == NULL)
        _transforms = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[133/*Uno.Collections.ObservableList<Fuse.Transform>*/], uDelegate::New(::TYPES[135/*Uno.Action<Fuse.Transform>*/], (void*)Node__OnTransformAdded_fn, this), uDelegate::New(::TYPES[135/*Uno.Action<Fuse.Transform>*/], (void*)Node__OnTransformRemoved_fn, this)));

    return (uObject*)_transforms;
}

// public generated void add_TransformsChanged(Uno.EventHandler value) [instance] :4399
void Node::add_TransformsChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Node", "add_TransformsChanged(Uno.EventHandler)");
    TransformsChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(TransformsChanged1, value), ::TYPES[21/*Uno.EventHandler*/]);
}

// public generated void remove_TransformsChanged(Uno.EventHandler value) [instance] :4399
void Node::remove_TransformsChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Node", "remove_TransformsChanged(Uno.EventHandler)");
    TransformsChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(TransformsChanged1, value), ::TYPES[21/*Uno.EventHandler*/]);
}

// public bool TryGetResource(string key, Uno.Predicate<object> acceptor, object& resource) [instance] :4076
bool Node::TryGetResource(uString* key, uDelegate* acceptor, uObject** resource)
{
    uStackFrame __("Fuse.Node", "TryGetResource(string,Uno.Predicate<object>,object&)");
    ::g::Uno::UX::Resource* ret29;
    bool ret30;
    ::g::Fuse::Style* ret31;

    if (HasResources())
    {
        uObject* resources = Resources();

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(resources), ::TYPES[138/*Uno.Collections.ICollection<Uno.UX.Resource>*/])); i++)
        {
            ::g::Uno::UX::Resource* r = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(resources), ::TYPES[139/*Uno.Collections.IList<Uno.UX.Resource>*/]), uCRef<int>(i), &ret29), ret29);

            if (::g::Uno::String::op_Equality(uPtr(r)->Key(), key) && (::g::Uno::Delegate::op_Equality(acceptor, NULL) || (uPtr(acceptor)->Invoke(&ret30, 1, (uObject*)uPtr(r)->Value()), ret30)))
            {
                *resource = uPtr(r)->Value();
                return true;
            }
        }
    }

    if (HasBit(3))

        for (int si = 0; si < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Styles()), ::TYPES[111/*Uno.Collections.ICollection<Fuse.Style>*/])); si++)
            if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Styles()), ::TYPES[112/*Uno.Collections.IList<Fuse.Style>*/]), uCRef<int>(si), &ret31), ret31))->TryGetResource(key, acceptor, resource))
                return true;

    if (ContextParent() != NULL)
        return uPtr(ContextParent())->TryGetResource(key, acceptor, resource);

    *resource = NULL;
    return false;
}

// internal void Unroot() [instance] :4936
void Node::Unroot()
{
    uStackFrame __("Fuse.Node", "Unroot()");

    if (_rootStage == 0)
        return;

    _rootStage = 0;

    if (_pendingRemove != NULL)
    {
        uPtr(_pendingRemove)->Remove();
        _pendingRemove = NULL;
    }

    if (::g::Fuse::UpdateManager::IsPastStage(1))
        ::g::Fuse::Diagnostics::Error(::STRINGS[59/*"Unrooting h...*/], this, ::STRINGS[56/*"/usr/local/...*/], 4949, ::STRINGS[60/*"Unroot"*/]);

    RaiseEvent(Node::_unrootedHandle(), 9);
    OnUnrooted();

    if (::g::Uno::String::op_Inequality(Name(), NULL))
        ::g::Fuse::NameRegistry::ClearName(this);

    ResetStyle();
    UnrootBehaviors();

    for (int i = 0; i < SubNodeCount(); i++)
        uPtr(GetSubNode(i))->Unroot();

    OverrideContextParent = NULL;
    SoftDispose();
}

// private void UnrootBehaviors() [instance] :2642
void Node::UnrootBehaviors()
{
    uStackFrame __("Fuse.Node", "UnrootBehaviors()");
    ::g::Fuse::Behavior* ret32;
    ::g::Fuse::Behavior* ret33;

    if (_behaviors != NULL)

        for (int i = 0; i < uPtr(_behaviors)->Count(); i++)
            if (uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_behaviors), uCRef<int>(i), &ret32), ret32))->IsRooted())
                uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_behaviors), uCRef<int>(i), &ret33), ret33))->Unrooted(this);
}

// internal void UnrootChild(Fuse.Node child) [instance] :4882
void Node::UnrootChild(Node* child)
{
    uStackFrame __("Fuse.Node", "UnrootChild(Fuse.Node)");

    if (child != NULL)
    {
        if (uPtr(child)->IsRooted())
            uPtr(child)->Unroot();

        child->SetParent(NULL);
    }
}

// public void add_Unrooted(Uno.EventHandler value) [instance] :4831
void Node::add_Unrooted(uDelegate* value)
{
    uStackFrame __("Fuse.Node", "add_Unrooted(Uno.EventHandler)");
    AddEventHandler(Node::_unrootedHandle(), 9, value);
}

// public void remove_Unrooted(Uno.EventHandler value) [instance] :4832
void Node::remove_Unrooted(uDelegate* value)
{
    uStackFrame __("Fuse.Node", "remove_Unrooted(Uno.EventHandler)");
    RemoveEventHandler(Node::_unrootedHandle(), 9, value);
}

// private void UpdateIsContextEnabledCache() [instance] :3270
void Node::UpdateIsContextEnabledCache()
{
    uStackFrame __("Fuse.Node", "UpdateIsContextEnabledCache()");
    bool ret34;
    bool newValue = (::g::Fuse::StyleProperty1__Get_fn(uPtr(Node::IsEnabledProperty()), this, &ret34), ret34) && ((Parent() == NULL) || uPtr(Parent())->_isContextEnabledCache);

    if (_isContextEnabledCache != newValue)
    {
        _isContextEnabledCache = newValue;
        OnIsContextEnabledChanged();

        for (int i = 0; i < SubNodeCount(); i++)
            uPtr(GetSubNode(i))->UpdateIsContextEnabledCache();
    }
}

// private void UpdateIsVisibleCache() [instance] :3390
void Node::UpdateIsVisibleCache()
{
    uStackFrame __("Fuse.Node", "UpdateIsVisibleCache()");
    bool newValue = IsLocalVisible() && ((Parent() == NULL) || uPtr(Parent())->IsVisible());

    if (_isVisibleCached != newValue)
    {
        _isVisibleCached = newValue;
        OnIsVisibleChanged();

        for (int i = 0; i < SubNodeCount(); i++)
            uPtr(GetSubNode(i))->UpdateIsVisibleCache();
    }
}

// private void UpdateLayout() [instance] :3744
void Node::UpdateLayout()
{
    uStackFrame __("Fuse.Node", "UpdateLayout()");

    switch (_layoutDirty)
    {
        case 0:
            break;
        case 1:
        {
            for (int i = 0; i < SubNodeCount(); ++i)
                uPtr(GetSubNode(i))->UpdateLayout();

            break;
        }
        case 2:
        {
            RearrangeMarginBox();
            break;
        }
    }

    _layoutDirty = 0;
}

// public int get_ValidFrameCount() [instance] :5045
int Node::ValidFrameCount()
{
    uStackFrame __("Fuse.Node", "get_ValidFrameCount()");
    return ::g::Fuse::UpdateManager::FrameIndex() - _lastInvalidate;
}

// public Fuse.IViewport get_Viewport() [instance] :4996
uObject* Node::Viewport()
{
    uStackFrame __("Fuse.Node", "get_Viewport()");
    Node* p = this;

    while (p != NULL)
    {
        uObject* vp = uAs<uObject*>(p, ::TYPES[42/*Fuse.IViewport*/]);

        if (vp != NULL)
            return vp;

        p = uPtr(p)->Parent();
    }

    return NULL;
}

// public void VisitSubtree(Uno.Action<Fuse.Node> action) [instance] :4720
void Node::VisitSubtree(uDelegate* action)
{
    uStackFrame __("Fuse.Node", "VisitSubtree(Uno.Action<Fuse.Node>)");
    uPtr(action)->InvokeVoid(this);

    for (int i = 0; i < SubNodeCount(); i++)
        uPtr(GetSubNode(i))->VisitSubtree(action);
}

// public float2 WindowToLocal(float2 windowCoord) [instance] :4610
::g::Uno::Float2 Node::WindowToLocal(::g::Uno::Float2 windowCoord)
{
    uStackFrame __("Fuse.Node", "WindowToLocal(float2)");
    ::g::Uno::Float2 windowCoord_ = windowCoord;
    ::g::Uno::Float2 parentCoord = (Parent() == NULL) ? windowCoord_ : uPtr(Parent())->WindowToLocal(windowCoord_);
    return ::g::Uno::Vector::TransformCoordinate(parentCoord, LocalTransformInverse());
}

// public float3 get_WorldPosition() [instance] :4451
::g::Uno::Float3 Node::WorldPosition()
{
    uStackFrame __("Fuse.Node", "get_WorldPosition()");
    ::g::Uno::Float4x4 ind7 = uPtr(WorldTransformInternal())->Matrix();
    return ::g::Uno::Float3__New2(ind7.M41, ind7.M42, ind7.M43);
}

// public float4x4 get_WorldTransform() [instance] :4443
::g::Uno::Float4x4 Node::WorldTransform()
{
    uStackFrame __("Fuse.Node", "get_WorldTransform()");
    return uPtr(WorldTransformInternal())->Matrix();
}

// private Fuse.FastMatrix get_WorldTransformInternal() [instance] :4477
::g::Fuse::FastMatrix* Node::WorldTransformInternal()
{
    uStackFrame __("Fuse.Node", "get_WorldTransformInternal()");

    if (!IsWorldMatrixValid())
    {
        _worldTransform = CalcWorldTransform();
        _worldTransformCacheVersion = (++_worldTransformVersion);

        if (Parent() != NULL)
            _worldTransformParentCacheVersion = uPtr(Parent())->_worldTransformVersion;

        OnWorldTransformValidated();
    }

    return _worldTransform;
}

// public float4x4 get_WorldTransformInverse() [instance] :4427
::g::Uno::Float4x4 Node::WorldTransformInverse()
{
    uStackFrame __("Fuse.Node", "get_WorldTransformInverse()");

    if ((_worldTransformInverseCacheVersion != _worldTransformVersion) || !IsWorldMatrixValid())
    {
        _worldTransformInverse = ::g::Fuse::FastMatrix::FromFloat4x4(WorldTransform());
        uPtr(_worldTransformInverse)->Invert();
        _worldTransformInverseCacheVersion = _worldTransformVersion;
    }

    return uPtr(_worldTransformInverse)->Matrix();
}

// public float get_ZOffset() [instance] :3867
float Node::ZOffset()
{
    uStackFrame __("Fuse.Node", "get_ZOffset()");
    return _zOffset;
}

// public void set_ZOffset(float value) [instance] :3868
void Node::ZOffset(float value)
{
    uStackFrame __("Fuse.Node", "set_ZOffset(float)");

    if (_zOffset == value)
        return;

    _zOffset = value;

    if (Parent() != NULL)
        uPtr(Parent())->OnInvalidateChildZOffset(this);
}

// private static void bringIntoView(Fuse.Node n, object[] args) [static] :4316
void Node::bringIntoView(Node* n, uArray* args)
{
    uStackFrame __("Fuse.Node", "bringIntoView(Fuse.Node,object[])");
    Node_typeof()->Init();
    uPtr(n)->BringIntoView();
}

// private static void disable(Fuse.Node n, object[] args) [static] :4311
void Node::disable(Node* n, uArray* args)
{
    uStackFrame __("Fuse.Node", "disable(Fuse.Node,object[])");
    Node_typeof()->Init();
    uPtr(n)->IsEnabled(false);
}

// private static void enable(Fuse.Node n, object[] args) [static] :4306
void Node::enable(Node* n, uArray* args)
{
    uStackFrame __("Fuse.Node", "enable(Fuse.Node,object[])");
    Node_typeof()->Init();
    uPtr(n)->IsEnabled(true);
}

// private static string GetName(Fuse.Node n) [static] :3904
uString* Node::GetName(Node* n)
{
    uStackFrame __("Fuse.Node", "GetName(Fuse.Node)");
    Node_typeof()->Init();
    return uPtr(n)->_name;
}

// private static bool GetSnapToPixels(Fuse.Node n) [static] :3697
bool Node::GetSnapToPixels(Node* n)
{
    uStackFrame __("Fuse.Node", "GetSnapToPixels(Fuse.Node)");
    Node_typeof()->Init();
    return uPtr(n)->_snapToPixels;
}

// protected static void InvalidateLayout(Fuse.Node elm) [static] :3700
void Node::InvalidateLayout1(Node* elm)
{
    uStackFrame __("Fuse.Node", "InvalidateLayout(Fuse.Node)");
    Node_typeof()->Init();
    uPtr(elm)->InvalidateLayout(2);
}

// private static void OnIsEnabledChangedInternal(Fuse.Node n) [static] :3265
void Node::OnIsEnabledChangedInternal(Node* n)
{
    uStackFrame __("Fuse.Node", "OnIsEnabledChangedInternal(Fuse.Node)");
    Node_typeof()->Init();
    uPtr(n)->UpdateIsContextEnabledCache();
}

// private static void SetName(Fuse.Node n, string v) [static] :3908
void Node::SetName(Node* n, uString* v)
{
    uStackFrame __("Fuse.Node", "SetName(Fuse.Node,string)");
    Node_typeof()->Init();
    uPtr(n)->_name = v;

    if (n->IsRootStage(1))
        ::g::Fuse::NameRegistry::SetName(n, uPtr(n)->Name());
}

// private static void SetSnapToPixels(Fuse.Node n, bool value) [static] :3698
void Node::SetSnapToPixels(Node* n, bool value)
{
    uStackFrame __("Fuse.Node", "SetSnapToPixels(Fuse.Node,bool)");
    Node_typeof()->Init();
    uPtr(n)->_snapToPixels = value;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#23
// -------------------------------------------------------

// private enum Node.NodeBits :2969
uEnumType* Node__NodeBits_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Node.NodeBits", ::g::Uno::Int_typeof(), 10);
    type->SetLiterals(
        "Styled", 0LL,
        "Resources", 1LL,
        "ResourceChanged", 2LL,
        "Style", 3LL,
        "IsContextEnabledChanged", 4LL,
        "IsVisibleChanged", 5LL,
        "Added", 6LL,
        "Removed", 7LL,
        "Rooted", 8LL,
        "Unrooted", 9LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#20
// -------------------------------------------------------

// public sealed class NodeBounds :2668
// {
// static NodeBounds() :2668
static void NodeBounds__cctor__fn(uType* __type)
{
    NodeBounds* collection1;
    NodeBounds::_empty_ = NodeBounds::New1();
    NodeBounds::_infinite_ = (collection1 = NodeBounds::New1(), uPtr(collection1)->_isInfinite = true, uPtr(collection1)->_isEmpty = false, collection1);
}

uType* NodeBounds_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(NodeBounds);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.NodeBounds", options);
    type->fp_ctor_ = (void*)NodeBounds__New1_fn;
    type->fp_cctor_ = NodeBounds__cctor__fn;
    ::TYPES[127] = ::g::Uno::Float3_typeof();
    ::TYPES[151] = ::g::Uno::Geometry::Box_typeof();
    ::TYPES[77] = ::g::Uno::Float2_typeof();
    ::TYPES[115] = ::g::Fuse::FastMatrix_typeof();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    type->SetFields(0,
        ::g::Uno::Geometry::Box_typeof(), offsetof(::g::Fuse::NodeBounds, _box), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::NodeBounds, _isEmpty), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::NodeBounds, _isInfinite), 0,
        NodeBounds_typeof(), (uintptr_t)&::g::Fuse::NodeBounds::_empty_, uFieldFlagsStatic,
        NodeBounds_typeof(), (uintptr_t)&::g::Fuse::NodeBounds::_infinite_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(18,
        new uFunction("AddPoint", NULL, (void*)NodeBounds__AddPoint_fn, 0, false, NodeBounds_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("AddPoint", NULL, (void*)NodeBounds__AddPoint1_fn, 0, false, NodeBounds_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("AddRect", NULL, (void*)NodeBounds__AddRect_fn, 0, false, NodeBounds_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("get_AxisMax", NULL, (void*)NodeBounds__get_AxisMax_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("get_AxisMin", NULL, (void*)NodeBounds__get_AxisMin_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("Box", NULL, (void*)NodeBounds__Box_fn, 0, true, NodeBounds_typeof(), 1, ::g::Uno::Geometry::Box_typeof()),
        new uFunction("ContainsPoint", NULL, (void*)NodeBounds__ContainsPoint_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_Empty", NULL, (void*)NodeBounds__get_Empty_fn, 0, true, NodeBounds_typeof(), 0),
        new uFunction("get_Infinite", NULL, (void*)NodeBounds__get_Infinite_fn, 0, true, NodeBounds_typeof(), 0),
        new uFunction("IntersectsRay", NULL, (void*)NodeBounds__IntersectsRay_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Geometry::Ray_typeof()),
        new uFunction("get_IsEmpty", NULL, (void*)NodeBounds__get_IsEmpty_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsFlat", NULL, (void*)NodeBounds__get_IsFlat_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsInfinite", NULL, (void*)NodeBounds__get_IsInfinite_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Merge", NULL, (void*)NodeBounds__Merge_fn, 0, false, NodeBounds_typeof(), 2, NodeBounds_typeof(), ::g::Fuse::FastMatrix_typeof()),
        new uFunction("MergeChild", NULL, (void*)NodeBounds__MergeChild_fn, 0, false, NodeBounds_typeof(), 2, ::g::Fuse::Node_typeof(), NodeBounds_typeof()),
        new uFunction("Point", NULL, (void*)NodeBounds__Point_fn, 0, true, NodeBounds_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("Rect", NULL, (void*)NodeBounds__Rect_fn, 0, true, NodeBounds_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("Rect", NULL, (void*)NodeBounds__Rect1_fn, 0, true, NodeBounds_typeof(), 2, ::g::Uno::Float3_typeof(), ::g::Uno::Float3_typeof()));
    return type;
}

// private NodeBounds() :2670
void NodeBounds__ctor__fn(NodeBounds* __this)
{
    __this->ctor_();
}

// public Fuse.NodeBounds AddPoint(float2 pt) :2739
void NodeBounds__AddPoint_fn(NodeBounds* __this, ::g::Uno::Float2* pt, NodeBounds** __retval)
{
    *__retval = __this->AddPoint(*pt);
}

// public Fuse.NodeBounds AddPoint(float3 pt) :2734
void NodeBounds__AddPoint1_fn(NodeBounds* __this, ::g::Uno::Float3* pt, NodeBounds** __retval)
{
    *__retval = __this->AddPoint1(*pt);
}

// public Fuse.NodeBounds AddRect(float2 mn, float2 mx) :2744
void NodeBounds__AddRect_fn(NodeBounds* __this, ::g::Uno::Float2* mn, ::g::Uno::Float2* mx, NodeBounds** __retval)
{
    *__retval = __this->AddRect(*mn, *mx);
}

// public float3 get_AxisMax() :2724
void NodeBounds__get_AxisMax_fn(NodeBounds* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->AxisMax();
}

// public float3 get_AxisMin() :2723
void NodeBounds__get_AxisMin_fn(NodeBounds* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->AxisMin();
}

// public static Fuse.NodeBounds Box(Uno.Geometry.Box a) :2707
void NodeBounds__Box_fn(::g::Uno::Geometry::Box* a, NodeBounds** __retval)
{
    *__retval = NodeBounds::Box(*a);
}

// public bool ContainsPoint(float2 pt) :2772
void NodeBounds__ContainsPoint_fn(NodeBounds* __this, ::g::Uno::Float2* pt, bool* __retval)
{
    *__retval = __this->ContainsPoint(*pt);
}

// public static Fuse.NodeBounds get_Empty() :2675
void NodeBounds__get_Empty_fn(NodeBounds** __retval)
{
    *__retval = NodeBounds::Empty();
}

// public static Fuse.NodeBounds get_Infinite() :2681
void NodeBounds__get_Infinite_fn(NodeBounds** __retval)
{
    *__retval = NodeBounds::Infinite();
}

// public bool IntersectsRay(Uno.Geometry.Ray ray) :2784
void NodeBounds__IntersectsRay_fn(NodeBounds* __this, ::g::Uno::Geometry::Ray* ray, bool* __retval)
{
    *__retval = __this->IntersectsRay(*ray);
}

// public bool get_IsEmpty() :2718
void NodeBounds__get_IsEmpty_fn(NodeBounds* __this, bool* __retval)
{
    *__retval = __this->IsEmpty();
}

// public bool get_IsFlat() :2731
void NodeBounds__get_IsFlat_fn(NodeBounds* __this, bool* __retval)
{
    *__retval = __this->IsFlat();
}

// public bool get_IsInfinite() :2727
void NodeBounds__get_IsInfinite_fn(NodeBounds* __this, bool* __retval)
{
    *__retval = __this->IsInfinite();
}

// public Fuse.NodeBounds Merge(Fuse.NodeBounds nb, [Fuse.FastMatrix trans]) :2749
void NodeBounds__Merge_fn(NodeBounds* __this, NodeBounds* nb, ::g::Fuse::FastMatrix* trans, NodeBounds** __retval)
{
    *__retval = __this->Merge(nb, trans);
}

// public Fuse.NodeBounds MergeChild(Fuse.Node child, Fuse.NodeBounds nb) :2767
void NodeBounds__MergeChild_fn(NodeBounds* __this, ::g::Fuse::Node* child, NodeBounds* nb, NodeBounds** __retval)
{
    *__retval = __this->MergeChild(child, nb);
}

// private NodeBounds New() :2670
void NodeBounds__New1_fn(NodeBounds** __retval)
{
    *__retval = NodeBounds::New1();
}

// public static Fuse.NodeBounds Point(float3 pt) :2684
void NodeBounds__Point_fn(::g::Uno::Float3* pt, NodeBounds** __retval)
{
    *__retval = NodeBounds::Point(*pt);
}

// public static Fuse.NodeBounds Rect(float2 a, float2 b) :2702
void NodeBounds__Rect_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, NodeBounds** __retval)
{
    *__retval = NodeBounds::Rect(*a, *b);
}

// public static Fuse.NodeBounds Rect(float3 a, float3 b) :2693
void NodeBounds__Rect1_fn(::g::Uno::Float3* a, ::g::Uno::Float3* b, NodeBounds** __retval)
{
    *__retval = NodeBounds::Rect1(*a, *b);
}

uSStrong<NodeBounds*> NodeBounds::_empty_;
uSStrong<NodeBounds*> NodeBounds::_infinite_;

// private NodeBounds() [instance] :2670
void NodeBounds::ctor_()
{
    uStackFrame __("Fuse.NodeBounds", ".ctor()");
    _isEmpty = true;
}

// public Fuse.NodeBounds AddPoint(float2 pt) [instance] :2739
NodeBounds* NodeBounds::AddPoint(::g::Uno::Float2 pt)
{
    uStackFrame __("Fuse.NodeBounds", "AddPoint(float2)");
    return Merge(NodeBounds::Point(::g::Uno::Float3__New4(pt, 0.0f)), NULL);
}

// public Fuse.NodeBounds AddPoint(float3 pt) [instance] :2734
NodeBounds* NodeBounds::AddPoint1(::g::Uno::Float3 pt)
{
    uStackFrame __("Fuse.NodeBounds", "AddPoint(float3)");
    return Merge(NodeBounds::Point(pt), NULL);
}

// public Fuse.NodeBounds AddRect(float2 mn, float2 mx) [instance] :2744
NodeBounds* NodeBounds::AddRect(::g::Uno::Float2 mn, ::g::Uno::Float2 mx)
{
    uStackFrame __("Fuse.NodeBounds", "AddRect(float2,float2)");
    return Merge(NodeBounds::Rect1(::g::Uno::Float3__New4(mn, 0.0f), ::g::Uno::Float3__New4(mx, 0.0f)), NULL);
}

// public float3 get_AxisMax() [instance] :2724
::g::Uno::Float3 NodeBounds::AxisMax()
{
    uStackFrame __("Fuse.NodeBounds", "get_AxisMax()");
    return _box.Maximum;
}

// public float3 get_AxisMin() [instance] :2723
::g::Uno::Float3 NodeBounds::AxisMin()
{
    uStackFrame __("Fuse.NodeBounds", "get_AxisMin()");
    return _box.Minimum;
}

// public bool ContainsPoint(float2 pt) [instance] :2772
bool NodeBounds::ContainsPoint(::g::Uno::Float2 pt)
{
    uStackFrame __("Fuse.NodeBounds", "ContainsPoint(float2)");

    if (IsEmpty())
        return false;

    if (IsInfinite())
        return true;

    return (((((_box.Minimum.X <= pt.X) && (_box.Minimum.Y <= pt.Y)) && (_box.Maximum.X >= pt.X)) && (_box.Maximum.Y >= pt.Y)) && (_box.Minimum.Z <= 0.0f)) && (_box.Maximum.Z >= 0.0f);
}

// public bool IntersectsRay(Uno.Geometry.Ray ray) [instance] :2784
bool NodeBounds::IntersectsRay(::g::Uno::Geometry::Ray ray)
{
    uStackFrame __("Fuse.NodeBounds", "IntersectsRay(Uno.Geometry.Ray)");

    if (IsEmpty())
        return false;

    if (IsInfinite())
        return true;

    float distance;
    return ::g::Uno::Geometry::Collision::RayIntersectsBox(ray, _box, &distance);
}

// public bool get_IsEmpty() [instance] :2718
bool NodeBounds::IsEmpty()
{
    uStackFrame __("Fuse.NodeBounds", "get_IsEmpty()");
    return _isEmpty;
}

// public bool get_IsFlat() [instance] :2731
bool NodeBounds::IsFlat()
{
    uStackFrame __("Fuse.NodeBounds", "get_IsFlat()");
    return _isEmpty || ((_box.Minimum.Z == 0.0f) && (_box.Minimum.Z == 0.0f));
}

// public bool get_IsInfinite() [instance] :2727
bool NodeBounds::IsInfinite()
{
    uStackFrame __("Fuse.NodeBounds", "get_IsInfinite()");
    return _isInfinite;
}

// public Fuse.NodeBounds Merge(Fuse.NodeBounds nb, [Fuse.FastMatrix trans]) [instance] :2749
NodeBounds* NodeBounds::Merge(NodeBounds* nb, ::g::Fuse::FastMatrix* trans)
{
    uStackFrame __("Fuse.NodeBounds", "Merge(Fuse.NodeBounds,[Fuse.FastMatrix])");

    if (uPtr(nb)->IsEmpty())
        return this;

    if (uPtr(nb)->IsInfinite() || IsInfinite())
        return NodeBounds::_infinite();

    ::g::Uno::Geometry::Box add = (trans != NULL) ? ::g::Uno::Geometry::Box__Transform(uPtr(nb)->_box, uPtr(trans)->Matrix()) : uPtr(nb)->_box;

    if (!IsEmpty())
    {
        add.Minimum = ::g::Uno::Math::Min5(_box.Minimum, add.Minimum);
        add.Maximum = ::g::Uno::Math::Max5(_box.Maximum, add.Maximum);
    }

    return NodeBounds::Box(add);
}

// public Fuse.NodeBounds MergeChild(Fuse.Node child, Fuse.NodeBounds nb) [instance] :2767
NodeBounds* NodeBounds::MergeChild(::g::Fuse::Node* child, NodeBounds* nb)
{
    uStackFrame __("Fuse.NodeBounds", "MergeChild(Fuse.Node,Fuse.NodeBounds)");
    return Merge(nb, uPtr(child)->InternLocalTransformInternal());
}

// public static Fuse.NodeBounds Box(Uno.Geometry.Box a) [static] :2707
NodeBounds* NodeBounds::Box(::g::Uno::Geometry::Box a)
{
    uStackFrame __("Fuse.NodeBounds", "Box(Uno.Geometry.Box)");
    NodeBounds_typeof()->Init();
    NodeBounds* nb = NodeBounds::New1();
    nb->_box = a;
    nb->_isEmpty = false;
    return nb;
}

// private NodeBounds New() [static] :2670
NodeBounds* NodeBounds::New1()
{
    NodeBounds* obj2 = (NodeBounds*)uNew(NodeBounds_typeof());
    obj2->ctor_();
    return obj2;
}

// public static Fuse.NodeBounds Point(float3 pt) [static] :2684
NodeBounds* NodeBounds::Point(::g::Uno::Float3 pt)
{
    uStackFrame __("Fuse.NodeBounds", "Point(float3)");
    NodeBounds_typeof()->Init();
    NodeBounds* nb = NodeBounds::New1();
    nb->_box.Minimum = pt;
    nb->_box.Maximum = pt;
    nb->_isEmpty = false;
    return nb;
}

// public static Fuse.NodeBounds Rect(float2 a, float2 b) [static] :2702
NodeBounds* NodeBounds::Rect(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    uStackFrame __("Fuse.NodeBounds", "Rect(float2,float2)");
    NodeBounds_typeof()->Init();
    return NodeBounds::Rect1(::g::Uno::Float3__New4(a, 0.0f), ::g::Uno::Float3__New4(b, 0.0f));
}

// public static Fuse.NodeBounds Rect(float3 a, float3 b) [static] :2693
NodeBounds* NodeBounds::Rect1(::g::Uno::Float3 a, ::g::Uno::Float3 b)
{
    uStackFrame __("Fuse.NodeBounds", "Rect(float3,float3)");
    NodeBounds_typeof()->Init();
    NodeBounds* nb = NodeBounds::New1();
    nb->_box.Minimum = ::g::Uno::Math::Min5(a, b);
    nb->_box.Maximum = ::g::Uno::Math::Max5(a, b);
    nb->_isEmpty = false;
    return nb;
}

// public static Fuse.NodeBounds get_Empty() [static] :2675
NodeBounds* NodeBounds::Empty()
{
    uStackFrame __("Fuse.NodeBounds", "get_Empty()");
    NodeBounds_typeof()->Init();
    return NodeBounds::_empty();
}

// public static Fuse.NodeBounds get_Infinite() [static] :2681
NodeBounds* NodeBounds::Infinite()
{
    uStackFrame __("Fuse.NodeBounds", "get_Infinite()");
    NodeBounds_typeof()->Init();
    return NodeBounds::_infinite();
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#7
// ------------------------------------------------------

// public abstract class NodeEvent<THandler, TArgs> :1037
// {
NodeEvent_type* NodeEvent_typeof()
{
    static uSStrong<NodeEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(NodeEvent);
    options.TypeSize = sizeof(NodeEvent_type);
    type = (NodeEvent_type*)uClassType::New("Fuse.NodeEvent`2", options);
    ::STRINGS[61] = uString::Const("Invalid RaiseType for event");
    ::STRINGS[62] = uString::Const("/usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#7");
    ::TYPES[152] = ::g::Uno::Collections::List_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[153] = ::g::Fuse::NodeEventArgs_typeof();
    ::TYPES[154] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), uObject_typeof()->Array());
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[18] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[155] = uObject_typeof()->Array();
    ::TYPES[26] = ::g::Uno::Delegate_typeof();
    ::TYPES[156] = ::g::Uno::Action2_typeof();
    ::TYPES[157] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    type->SetPrecalc(
        ::TYPES[152/*Uno.Collections.List`1*/]->MakeType(type->T(0)),
        ::TYPES[156/*Uno.Action`2*/]->MakeType(type->T(1), ::TYPES[157/*Uno.Collections.IList<Fuse.Node>*/]));
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::NodeEvent, _globalHandlers), 0,
        ::g::Fuse::PropertyHandle_typeof(), offsetof(::g::Fuse::NodeEvent, _handle), 0);
    type->Reflection.SetFunctions(6,
        new uFunction("AddGlobalHandler", NULL, (void*)NodeEvent__AddGlobalHandler_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("AddHandler", NULL, (void*)NodeEvent__AddHandler_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), type->T(0)),
        new uFunction("RaiseWithBubble", NULL, (void*)NodeEvent__RaiseWithBubble_fn, 0, false, uVoid_typeof(), 2, type->T(1), ::g::Fuse::NodeEventMode_typeof()),
        new uFunction("RaiseWithoutBubble", NULL, (void*)NodeEvent__RaiseWithoutBubble_fn, 0, false, uVoid_typeof(), 2, type->T(1), ::g::Fuse::NodeEventMode_typeof()),
        new uFunction("RemoveGlobalHandler", NULL, (void*)NodeEvent__RemoveGlobalHandler_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("RemoveHandler", NULL, (void*)NodeEvent__RemoveHandler_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), type->T(0)));
    return type;
}

// protected generated NodeEvent() :1037
void NodeEvent__ctor__fn(NodeEvent* __this)
{
    __this->ctor_();
}

// public void AddGlobalHandler(THandler handler) :1052
void NodeEvent__AddGlobalHandler_fn(NodeEvent* __this, void* handler)
{
    uType* __types[] = {
        __this->__type->GetBase(NodeEvent_typeof())->T(0),
    };
    uStackFrame __("Fuse.NodeEvent`2", "AddGlobalHandler(THandler)");
    ::g::Uno::Collections::List__Add_fn(uPtr(__this->_globalHandlers), handler);
}

// public void AddHandler(Fuse.Node node, THandler handler) :1041
void NodeEvent__AddHandler_fn(NodeEvent* __this, ::g::Fuse::Node* node, void* handler)
{
    uType* __types[] = {
        __this->__type->GetBase(NodeEvent_typeof())->T(0),
    };
    uStackFrame __("Fuse.NodeEvent`2", "AddHandler(Fuse.Node,THandler)");
    uPtr(uPtr(node)->Properties())->AddToList(__this->_handle, uBoxPtr(__types[0], handler));
}

// private void InvokeGlobalHandlers(Fuse.Node node, TArgs args) :1062
void NodeEvent__InvokeGlobalHandlers_fn(NodeEvent* __this, ::g::Fuse::Node* node, ::g::Fuse::NodeEventArgs* args)
{
    __this->InvokeGlobalHandlers(node, args);
}

// private void InvokeInternal(THandler handler, object sender, TArgs args) :1139
void NodeEvent__InvokeInternal_fn(NodeEvent* __this, void* handler, uObject* sender, ::g::Fuse::NodeEventArgs* args)
{
    uType* __types[] = {
        __this->__type->GetBase(NodeEvent_typeof())->T(0),
    };
    uStackFrame __("Fuse.NodeEvent`2", "InvokeInternal(THandler,object,TArgs)");

    try
    {
        __this->Invoke_ex(handler, sender, args);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private void OnRaise(object target, object[] args) :1122
void NodeEvent__OnRaise_fn(NodeEvent* __this, uObject* target, uArray* args)
{
    __this->OnRaise(target, args);
}

// private void OnRaiseEnabled(object target, object[] args) :1130
void NodeEvent__OnRaiseEnabled_fn(NodeEvent* __this, uObject* target, uArray* args)
{
    __this->OnRaiseEnabled(target, args);
}

// private void Raise(TArgs args, Fuse.NodeEventMode type, bool bubble, [Uno.Action<TArgs, Uno.Collections.IList<Fuse.Node>> PostBubbleAction]) :1087
void NodeEvent__Raise_fn(NodeEvent* __this, ::g::Fuse::NodeEventArgs* args, int* type, bool* bubble, uDelegate* PostBubbleAction)
{
    __this->Raise(args, *type, *bubble, PostBubbleAction);
}

// public void RaiseWithBubble(TArgs args, [Fuse.NodeEventMode type]) :1071
void NodeEvent__RaiseWithBubble_fn(NodeEvent* __this, ::g::Fuse::NodeEventArgs* args, int* type)
{
    __this->RaiseWithBubble(args, *type);
}

// internal void RaiseWithBubble(TArgs args, Fuse.NodeEventMode type, Uno.Action<TArgs, Uno.Collections.IList<Fuse.Node>> PostBubbleAction) :1076
void NodeEvent__RaiseWithBubble1_fn(NodeEvent* __this, ::g::Fuse::NodeEventArgs* args, int* type, uDelegate* PostBubbleAction)
{
    __this->RaiseWithBubble1(args, *type, PostBubbleAction);
}

// public void RaiseWithoutBubble(TArgs args, [Fuse.NodeEventMode type]) :1082
void NodeEvent__RaiseWithoutBubble_fn(NodeEvent* __this, ::g::Fuse::NodeEventArgs* args, int* type)
{
    __this->RaiseWithoutBubble(args, *type);
}

// public void RemoveGlobalHandler(THandler handler) :1057
void NodeEvent__RemoveGlobalHandler_fn(NodeEvent* __this, void* handler)
{
    uType* __types[] = {
        __this->__type->GetBase(NodeEvent_typeof())->T(0),
    };
    uStackFrame __("Fuse.NodeEvent`2", "RemoveGlobalHandler(THandler)");
    bool ret4;
    ::g::Uno::Collections::List__Remove_fn(uPtr(__this->_globalHandlers), handler, &ret4);
}

// public void RemoveHandler(Fuse.Node node, THandler handler) :1046
void NodeEvent__RemoveHandler_fn(NodeEvent* __this, ::g::Fuse::Node* node, void* handler)
{
    uType* __types[] = {
        __this->__type->GetBase(NodeEvent_typeof())->T(0),
    };
    uStackFrame __("Fuse.NodeEvent`2", "RemoveHandler(Fuse.Node,THandler)");
    uPtr(uPtr(node)->Properties())->RemoveFromList(__this->_handle, uBoxPtr(__types[0], handler));
}

// protected generated NodeEvent() [instance] :1037
void NodeEvent::ctor_()
{
    uType* __types[] = {
        __type->GetBase(NodeEvent_typeof())->Precalced(0/*Uno.Collections.List<THandler>*/),
        __type->GetBase(NodeEvent_typeof())->T(0),
    };
    uStackFrame __("Fuse.NodeEvent`2", ".ctor()");
    _handle = ::g::Fuse::Properties::CreateHandle();
    _globalHandlers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]));
}

// private void InvokeGlobalHandlers(Fuse.Node node, TArgs args) [instance] :1062
void NodeEvent::InvokeGlobalHandlers(::g::Fuse::Node* node, ::g::Fuse::NodeEventArgs* args)
{
    uType* __types[] = {
        __type->GetBase(NodeEvent_typeof())->T(0),
        __type->GetBase(NodeEvent_typeof())->Precalced(0/*Uno.Collections.List<THandler>*/),
    };
    uStackFrame __("Fuse.NodeEvent`2", "InvokeGlobalHandlers(Fuse.Node,TArgs)");
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    if (uPtr(_globalHandlers)->Count() > 0)

        for (int i = 0; i < uPtr(_globalHandlers)->Count(); i++)
            NodeEvent__InvokeInternal_fn(this, (::g::Uno::Collections::List__get_Item_fn(uPtr(_globalHandlers), uCRef<int>(i), &ret1), ret1), node, args);
}

// private void OnRaise(object target, object[] args) [instance] :1122
void NodeEvent::OnRaise(uObject* target, uArray* args)
{
    uType* __types[] = {
        __type->GetBase(NodeEvent_typeof())->T(0),
        __type->GetBase(NodeEvent_typeof())->T(1),
    };
    uStackFrame __("Fuse.NodeEvent`2", "OnRaise(object,object[])");
    uT handler(__types[0], U_ALLOCA(__types[0]->ValueSize));
    handler = uUnboxAny(__types[0], target);
    ::g::Fuse::Node* node = uCast< ::g::Fuse::Node*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[0/*Fuse.Node*/]);
    ::g::Fuse::NodeEventArgs* eventArgs = uCast< ::g::Fuse::NodeEventArgs*>(args->Strong<uObject*>(1), __types[1]);
    NodeEvent__InvokeInternal_fn(this, handler, node, eventArgs);
}

// private void OnRaiseEnabled(object target, object[] args) [instance] :1130
void NodeEvent::OnRaiseEnabled(uObject* target, uArray* args)
{
    uType* __types[] = {
        __type->GetBase(NodeEvent_typeof())->T(0),
        __type->GetBase(NodeEvent_typeof())->T(1),
    };
    uStackFrame __("Fuse.NodeEvent`2", "OnRaiseEnabled(object,object[])");
    uT handler(__types[0], U_ALLOCA(__types[0]->ValueSize));
    handler = uUnboxAny(__types[0], target);
    ::g::Fuse::Node* node = uCast< ::g::Fuse::Node*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[0/*Fuse.Node*/]);
    ::g::Fuse::NodeEventArgs* eventArgs = uCast< ::g::Fuse::NodeEventArgs*>(args->Strong<uObject*>(1), __types[1]);

    if (uPtr(node)->IsContextEnabled())
        NodeEvent__InvokeInternal_fn(this, handler, node, eventArgs);
}

// private void Raise(TArgs args, Fuse.NodeEventMode type, bool bubble, [Uno.Action<TArgs, Uno.Collections.IList<Fuse.Node>> PostBubbleAction]) [instance] :1087
void NodeEvent::Raise(::g::Fuse::NodeEventArgs* args, int type, bool bubble, uDelegate* PostBubbleAction)
{
    uType* __types[] = {
        __type->GetBase(NodeEvent_typeof())->Precalced(1/*Uno.Action<TArgs, Uno.Collections.IList<Fuse.Node>>*/),
        __type->GetBase(NodeEvent_typeof())->T(1),
    };
    uStackFrame __("Fuse.NodeEvent`2", "Raise(TArgs,Fuse.NodeEventMode,bool,[Uno.Action<TArgs, Uno.Collections.IList<Fuse.Node>>])");
    ::g::Fuse::Node* ret2;
    ::g::Fuse::Node* ret3;
    ::g::Fuse::Node* node = uPtr(args)->Node();
    uDelegate* handler = NULL;

    switch (type)
    {
        case 0:
        {
            handler = uDelegate::New(::TYPES[154/*Uno.Action<object, object[]>*/], (void*)NodeEvent__OnRaise_fn, this);
            break;
        }
        case 2:
        {
            handler = uDelegate::New(::TYPES[154/*Uno.Action<object, object[]>*/], (void*)NodeEvent__OnRaise_fn, this);
            break;
        }
        case 1:
        {
            handler = uDelegate::New(::TYPES[154/*Uno.Action<object, object[]>*/], (void*)NodeEvent__OnRaiseEnabled_fn, this);
            break;
        }
        default:
        {
            ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[61/*"Invalid Rai...*/], 1, ::STRINGS[62/*"/usr/local/...*/], 1099);
            return;
        }
    }

    ::g::Uno::Collections::List* list = ::g::Fuse::NodeListCache::Acquire();

    while (node != NULL)
    {
        ::g::Uno::Collections::List__Add_fn(uPtr(list), node);

        if (!bubble)
            break;

        node = uPtr(node)->Parent();
    }

    for (int i = 0; i < uPtr(list)->Count(); ++i)
        uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret2), ret2))->Properties())->ForeachInList(_handle, handler, uArray::Init<uObject*>(::TYPES[155/*object[]*/], 2, (::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret3), ret3), args));

    if (::g::Uno::Delegate::op_Inequality(PostBubbleAction, NULL))
        uPtr(PostBubbleAction)->Invoke(2, args, (uObject*)list);

    InvokeGlobalHandlers(node, args);
    ::g::Fuse::NodeListCache::Release(list);
}

// public void RaiseWithBubble(TArgs args, [Fuse.NodeEventMode type]) [instance] :1071
void NodeEvent::RaiseWithBubble(::g::Fuse::NodeEventArgs* args, int type)
{
    uStackFrame __("Fuse.NodeEvent`2", "RaiseWithBubble(TArgs,[Fuse.NodeEventMode])");
    Raise(args, type, true, NULL);
}

// internal void RaiseWithBubble(TArgs args, Fuse.NodeEventMode type, Uno.Action<TArgs, Uno.Collections.IList<Fuse.Node>> PostBubbleAction) [instance] :1076
void NodeEvent::RaiseWithBubble1(::g::Fuse::NodeEventArgs* args, int type, uDelegate* PostBubbleAction)
{
    uStackFrame __("Fuse.NodeEvent`2", "RaiseWithBubble(TArgs,Fuse.NodeEventMode,Uno.Action<TArgs, Uno.Collections.IList<Fuse.Node>>)");
    Raise(args, type, true, PostBubbleAction);
}

// public void RaiseWithoutBubble(TArgs args, [Fuse.NodeEventMode type]) [instance] :1082
void NodeEvent::RaiseWithoutBubble(::g::Fuse::NodeEventArgs* args, int type)
{
    uStackFrame __("Fuse.NodeEvent`2", "RaiseWithoutBubble(TArgs,[Fuse.NodeEventMode])");
    Raise(args, type, false, NULL);
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#7
// ------------------------------------------------------

// public class NodeEventArgs :1155
// {
NodeEventArgs_type* NodeEventArgs_typeof()
{
    static uSStrong<NodeEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NodeEventArgs);
    options.TypeSize = sizeof(NodeEventArgs_type);
    type = (NodeEventArgs_type*)uClassType::New("Fuse.NodeEventArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->fp_Serialize = NodeEventArgs__Serialize_fn;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))NodeEventArgs__FuseScriptingIScriptEventSerialize_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(NodeEventArgs_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::NodeEventArgs, _IsHandled), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::NodeEventArgs, _Node), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_IsHandled", NULL, (void*)NodeEventArgs__get_IsHandled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsHandled", NULL, (void*)NodeEventArgs__set_IsHandled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)NodeEventArgs__New2_fn, 0, true, NodeEventArgs_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("get_Node", NULL, (void*)NodeEventArgs__get_Node_fn, 0, false, ::g::Fuse::Node_typeof(), 0));
    return type;
}

// public NodeEventArgs(Fuse.Node node) :1161
void NodeEventArgs__ctor_1_fn(NodeEventArgs* __this, ::g::Fuse::Node* node)
{
    __this->ctor_1(node);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :1166
void NodeEventArgs__FuseScriptingIScriptEventSerialize_fn(NodeEventArgs* __this, uObject* s)
{
    uStackFrame __("Fuse.NodeEventArgs", "Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer)");
    __this->Serialize(s);
}

// public generated bool get_IsHandled() :1157
void NodeEventArgs__get_IsHandled_fn(NodeEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsHandled();
}

// public generated void set_IsHandled(bool value) :1157
void NodeEventArgs__set_IsHandled_fn(NodeEventArgs* __this, bool* value)
{
    __this->IsHandled(*value);
}

// public NodeEventArgs New(Fuse.Node node) :1161
void NodeEventArgs__New2_fn(::g::Fuse::Node* node, NodeEventArgs** __retval)
{
    *__retval = NodeEventArgs::New2(node);
}

// public generated Fuse.Node get_Node() :1159
void NodeEventArgs__get_Node_fn(NodeEventArgs* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Node();
}

// private generated void set_Node(Fuse.Node value) :1159
void NodeEventArgs__set_Node_fn(NodeEventArgs* __this, ::g::Fuse::Node* value)
{
    __this->Node(value);
}

// private virtual void Serialize(Fuse.Scripting.IEventSerializer s) :1171
void NodeEventArgs__Serialize_fn(NodeEventArgs* __this, uObject* s)
{
}

// public NodeEventArgs(Fuse.Node node) [instance] :1161
void NodeEventArgs::ctor_1(::g::Fuse::Node* node)
{
    uStackFrame __("Fuse.NodeEventArgs", ".ctor(Fuse.Node)");
    ctor_();
    Node(node);
}

// public generated bool get_IsHandled() [instance] :1157
bool NodeEventArgs::IsHandled()
{
    uStackFrame __("Fuse.NodeEventArgs", "get_IsHandled()");
    return _IsHandled;
}

// public generated void set_IsHandled(bool value) [instance] :1157
void NodeEventArgs::IsHandled(bool value)
{
    uStackFrame __("Fuse.NodeEventArgs", "set_IsHandled(bool)");
    _IsHandled = value;
}

// public generated Fuse.Node get_Node() [instance] :1159
::g::Fuse::Node* NodeEventArgs::Node()
{
    uStackFrame __("Fuse.NodeEventArgs", "get_Node()");
    return _Node;
}

// private generated void set_Node(Fuse.Node value) [instance] :1159
void NodeEventArgs::Node(::g::Fuse::Node* value)
{
    uStackFrame __("Fuse.NodeEventArgs", "set_Node(Fuse.Node)");
    _Node = value;
}

// public NodeEventArgs New(Fuse.Node node) [static] :1161
NodeEventArgs* NodeEventArgs::New2(::g::Fuse::Node* node)
{
    NodeEventArgs* obj1 = (NodeEventArgs*)uNew(NodeEventArgs_typeof());
    obj1->ctor_1(node);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#7
// ------------------------------------------------------

// public delegate void NodeEventHandler(object sender, Fuse.NodeEventArgs args) :1176
uDelegateType* NodeEventHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.NodeEventHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::NodeEventArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#7
// ------------------------------------------------------

// public enum NodeEventMode :1002
uEnumType* NodeEventMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.NodeEventMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Normal", 0LL,
        "Enabled", 1LL,
        "Force", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#7
// ------------------------------------------------------

// internal static class NodeListCache :1015
// {
// static NodeListCache() :1015
static void NodeListCache__cctor__fn(uType* __type)
{
    NodeListCache::_nodeListCache_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[158/*Uno.Collections.List<Uno.Collections.List<Fuse.Node>>*/]));
}

uClassType* NodeListCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.NodeListCache", options);
    type->fp_cctor_ = NodeListCache__cctor__fn;
    ::TYPES[158] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof()));
    ::TYPES[18] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof())), (uintptr_t)&::g::Fuse::NodeListCache::_nodeListCache_, uFieldFlagsStatic);
    return type;
}

// public static Uno.Collections.List<Fuse.Node> Acquire() :1019
void NodeListCache__Acquire_fn(::g::Uno::Collections::List** __retval)
{
    *__retval = NodeListCache::Acquire();
}

// public static void Release(Uno.Collections.List<Fuse.Node> list) :1030
void NodeListCache__Release_fn(::g::Uno::Collections::List* list)
{
    NodeListCache::Release(list);
}

uSStrong< ::g::Uno::Collections::List*> NodeListCache::_nodeListCache_;

// public static Uno.Collections.List<Fuse.Node> Acquire() [static] :1019
::g::Uno::Collections::List* NodeListCache::Acquire()
{
    uStackFrame __("Fuse.NodeListCache", "Acquire()");
    NodeListCache_typeof()->Init();
    ::g::Uno::Collections::List* ret1;

    if (uPtr(NodeListCache::_nodeListCache())->Count() > 0)
    {
        ::g::Uno::Collections::List* l = (::g::Uno::Collections::List__get_Item_fn(uPtr(NodeListCache::_nodeListCache()), uCRef<int>(uPtr(NodeListCache::_nodeListCache())->Count() - 1), &ret1), ret1);
        uPtr(NodeListCache::_nodeListCache())->RemoveAt(uPtr(NodeListCache::_nodeListCache())->Count() - 1);
        return l;
    }

    return (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[18/*Uno.Collections.List<Fuse.Node>*/]);
}

// public static void Release(Uno.Collections.List<Fuse.Node> list) [static] :1030
void NodeListCache::Release(::g::Uno::Collections::List* list)
{
    uStackFrame __("Fuse.NodeListCache", "Release(Uno.Collections.List<Fuse.Node>)");
    NodeListCache_typeof()->Init();
    uPtr(list)->Clear();
    ::g::Uno::Collections::List__Add_fn(uPtr(NodeListCache::_nodeListCache()), list);
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#38
// -------------------------------------------------------

// public sealed class OrthographicFrustum :5059
// {
OrthographicFrustum_type* OrthographicFrustum_typeof()
{
    static uSStrong<OrthographicFrustum_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(OrthographicFrustum);
    options.TypeSize = sizeof(OrthographicFrustum_type);
    type = (OrthographicFrustum_type*)uClassType::New("Fuse.OrthographicFrustum", options);
    type->fp_ctor_ = (void*)OrthographicFrustum__New1_fn;
    type->interface0.fp_GetProjectionTransform = (void(*)(uObject*, uObject*, ::g::Uno::Float4x4*))OrthographicFrustum__GetProjectionTransform_fn;
    type->interface0.fp_GetProjectionTransformInverse = (void(*)(uObject*, uObject*, ::g::Uno::Float4x4*))OrthographicFrustum__GetProjectionTransformInverse_fn;
    type->interface0.fp_GetViewTransform = (void(*)(uObject*, uObject*, ::g::Uno::Float4x4*))OrthographicFrustum__GetViewTransform_fn;
    type->interface0.fp_GetViewTransformInverse = (void(*)(uObject*, uObject*, ::g::Uno::Float4x4*))OrthographicFrustum__GetViewTransformInverse_fn;
    type->interface0.fp_GetDepthRange = (void(*)(uObject*, uObject*, ::g::Uno::Float2*))OrthographicFrustum__GetDepthRange_fn;
    type->interface0.fp_GetWorldPosition = (void(*)(uObject*, uObject*, ::g::Uno::Float3*))OrthographicFrustum__GetWorldPosition_fn;
    ::TYPES[60] = ::g::Uno::Float4x4_typeof();
    ::TYPES[42] = ::g::Fuse::IViewport_typeof();
    ::TYPES[77] = ::g::Uno::Float2_typeof();
    ::TYPES[61] = ::g::Uno::Float_typeof();
    type->SetInterfaces(
        ::g::Fuse::IFrustum_typeof(), offsetof(OrthographicFrustum_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::OrthographicFrustum, _hasLocalFromWorld), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::OrthographicFrustum, _hasOrigin), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::OrthographicFrustum, _hasSize), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::OrthographicFrustum, _localFromWorld), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::OrthographicFrustum, _origin), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::OrthographicFrustum, _size), 0);
    type->Reflection.SetFunctions(13,
        new uFunction("GetDepthRange", NULL, (void*)OrthographicFrustum__GetDepthRange_fn, 0, false, ::g::Uno::Float2_typeof(), 1, ::g::Fuse::IViewport_typeof()),
        new uFunction("GetProjectionTransform", NULL, (void*)OrthographicFrustum__GetProjectionTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 1, ::g::Fuse::IViewport_typeof()),
        new uFunction("GetProjectionTransformInverse", NULL, (void*)OrthographicFrustum__GetProjectionTransformInverse_fn, 0, false, ::g::Uno::Float4x4_typeof(), 1, ::g::Fuse::IViewport_typeof()),
        new uFunction("GetViewTransform", NULL, (void*)OrthographicFrustum__GetViewTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 1, ::g::Fuse::IViewport_typeof()),
        new uFunction("GetViewTransformInverse", NULL, (void*)OrthographicFrustum__GetViewTransformInverse_fn, 0, false, ::g::Uno::Float4x4_typeof(), 1, ::g::Fuse::IViewport_typeof()),
        new uFunction("GetWorldPosition", NULL, (void*)OrthographicFrustum__GetWorldPosition_fn, 0, false, ::g::Uno::Float3_typeof(), 1, ::g::Fuse::IViewport_typeof()),
        new uFunction("get_LocalFromWorld", NULL, (void*)OrthographicFrustum__get_LocalFromWorld_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("set_LocalFromWorld", NULL, (void*)OrthographicFrustum__set_LocalFromWorld_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4x4_typeof()),
        new uFunction(".ctor", NULL, (void*)OrthographicFrustum__New1_fn, 0, true, OrthographicFrustum_typeof(), 0),
        new uFunction("get_Origin", NULL, (void*)OrthographicFrustum__get_Origin_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Origin", NULL, (void*)OrthographicFrustum__set_Origin_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_Size", NULL, (void*)OrthographicFrustum__get_Size_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Size", NULL, (void*)OrthographicFrustum__set_Size_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()));
    return type;
}

// public generated OrthographicFrustum() :5059
void OrthographicFrustum__ctor__fn(OrthographicFrustum* __this)
{
    __this->ctor_();
}

// public float2 GetDepthRange(Fuse.IViewport viewport) :5131
void OrthographicFrustum__GetDepthRange_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetDepthRange(viewport);
}

// public float4x4 GetProjectionTransform(Fuse.IViewport viewport) :5100
void OrthographicFrustum__GetProjectionTransform_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetProjectionTransform(viewport);
}

// public float4x4 GetProjectionTransformInverse(Fuse.IViewport viewport) :5113
void OrthographicFrustum__GetProjectionTransformInverse_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetProjectionTransformInverse(viewport);
}

// public float4x4 GetViewTransform(Fuse.IViewport viewport) :5105
void OrthographicFrustum__GetViewTransform_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetViewTransform(viewport);
}

// public float4x4 GetViewTransformInverse(Fuse.IViewport viewport) :5118
void OrthographicFrustum__GetViewTransformInverse_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetViewTransformInverse(viewport);
}

// public float3 GetWorldPosition(Fuse.IViewport viewport) :5126
void OrthographicFrustum__GetWorldPosition_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetWorldPosition(viewport);
}

// public float4x4 get_LocalFromWorld() :5092
void OrthographicFrustum__get_LocalFromWorld_fn(OrthographicFrustum* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->LocalFromWorld();
}

// public void set_LocalFromWorld(float4x4 value) :5093
void OrthographicFrustum__set_LocalFromWorld_fn(OrthographicFrustum* __this, ::g::Uno::Float4x4* value)
{
    __this->LocalFromWorld(*value);
}

// private float4x4 MatrixProjection(float2 viewSize) :5150
void OrthographicFrustum__MatrixProjection_fn(OrthographicFrustum* __this, ::g::Uno::Float2* viewSize, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->MatrixProjection(*viewSize);
}

// private float4x4 MatrixProjectionInverse(float2 viewSize) :5155
void OrthographicFrustum__MatrixProjectionInverse_fn(OrthographicFrustum* __this, ::g::Uno::Float2* viewSize, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->MatrixProjectionInverse(*viewSize);
}

// private float4x4 MatrixView(float2 origin, float2 viewSize) :5136
void OrthographicFrustum__MatrixView_fn(OrthographicFrustum* __this, ::g::Uno::Float2* origin, ::g::Uno::Float2* viewSize, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->MatrixView(*origin, *viewSize);
}

// private float4x4 MatrixViewInverse(float2 origin, float2 viewSize) :5143
void OrthographicFrustum__MatrixViewInverse_fn(OrthographicFrustum* __this, ::g::Uno::Float2* origin, ::g::Uno::Float2* viewSize, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->MatrixViewInverse(*origin, *viewSize);
}

// public generated OrthographicFrustum New() :5059
void OrthographicFrustum__New1_fn(OrthographicFrustum** __retval)
{
    *__retval = OrthographicFrustum::New1();
}

// public float2 get_Origin() :5065
void OrthographicFrustum__get_Origin_fn(OrthographicFrustum* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Origin();
}

// public void set_Origin(float2 value) :5066
void OrthographicFrustum__set_Origin_fn(OrthographicFrustum* __this, ::g::Uno::Float2* value)
{
    __this->Origin(*value);
}

// public float2 get_Size() :5077
void OrthographicFrustum__get_Size_fn(OrthographicFrustum* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public void set_Size(float2 value) :5081
void OrthographicFrustum__set_Size_fn(OrthographicFrustum* __this, ::g::Uno::Float2* value)
{
    __this->Size(*value);
}

// public generated OrthographicFrustum() [instance] :5059
void OrthographicFrustum::ctor_()
{
    uStackFrame __("Fuse.OrthographicFrustum", ".ctor()");
    _localFromWorld = ::g::Uno::Float4x4__Identity();
}

// public float2 GetDepthRange(Fuse.IViewport viewport) [instance] :5131
::g::Uno::Float2 OrthographicFrustum::GetDepthRange(uObject* viewport)
{
    uStackFrame __("Fuse.OrthographicFrustum", "GetDepthRange(Fuse.IViewport)");
    return ::g::Uno::Float2__New2(1.0f, 1000.0f);
}

// public float4x4 GetProjectionTransform(Fuse.IViewport viewport) [instance] :5100
::g::Uno::Float4x4 OrthographicFrustum::GetProjectionTransform(uObject* viewport)
{
    uStackFrame __("Fuse.OrthographicFrustum", "GetProjectionTransform(Fuse.IViewport)");
    return MatrixProjection(_hasSize ? Size() : ::g::Fuse::IViewport::Size(uInterface(uPtr(viewport), ::TYPES[42/*Fuse.IViewport*/])));
}

// public float4x4 GetProjectionTransformInverse(Fuse.IViewport viewport) [instance] :5113
::g::Uno::Float4x4 OrthographicFrustum::GetProjectionTransformInverse(uObject* viewport)
{
    uStackFrame __("Fuse.OrthographicFrustum", "GetProjectionTransformInverse(Fuse.IViewport)");
    return MatrixProjectionInverse(_hasSize ? Size() : ::g::Fuse::IViewport::Size(uInterface(uPtr(viewport), ::TYPES[42/*Fuse.IViewport*/])));
}

// public float4x4 GetViewTransform(Fuse.IViewport viewport) [instance] :5105
::g::Uno::Float4x4 OrthographicFrustum::GetViewTransform(uObject* viewport)
{
    uStackFrame __("Fuse.OrthographicFrustum", "GetViewTransform(Fuse.IViewport)");
    ::g::Uno::Float4x4 ts = MatrixView(_hasOrigin ? Origin() : ::g::Uno::Float2__New1(0.0f), _hasSize ? Size() : ::g::Fuse::IViewport::Size(uInterface(uPtr(viewport), ::TYPES[42/*Fuse.IViewport*/])));

    if (_hasLocalFromWorld)
        ts = ::g::Uno::Matrix::Mul8(LocalFromWorld(), ts);

    return ts;
}

// public float4x4 GetViewTransformInverse(Fuse.IViewport viewport) [instance] :5118
::g::Uno::Float4x4 OrthographicFrustum::GetViewTransformInverse(uObject* viewport)
{
    uStackFrame __("Fuse.OrthographicFrustum", "GetViewTransformInverse(Fuse.IViewport)");
    ::g::Uno::Float4x4 ts = MatrixViewInverse(_hasOrigin ? Origin() : ::g::Uno::Float2__New1(0.0f), _hasSize ? Size() : ::g::Fuse::IViewport::Size(uInterface(uPtr(viewport), ::TYPES[42/*Fuse.IViewport*/])));

    if (_hasLocalFromWorld)
        ts = ::g::Uno::Matrix::Mul8(ts, ::g::Uno::Matrix::Invert2(LocalFromWorld()));

    return ts;
}

// public float3 GetWorldPosition(Fuse.IViewport viewport) [instance] :5126
::g::Uno::Float3 OrthographicFrustum::GetWorldPosition(uObject* viewport)
{
    uStackFrame __("Fuse.OrthographicFrustum", "GetWorldPosition(Fuse.IViewport)");
    return ::g::Uno::Float3__New4(::g::Uno::Float2__op_Division1(_hasSize ? Size() : ::g::Fuse::IViewport::Size(uInterface(uPtr(viewport), ::TYPES[42/*Fuse.IViewport*/])), 2.0f), 2.0f);
}

// public float4x4 get_LocalFromWorld() [instance] :5092
::g::Uno::Float4x4 OrthographicFrustum::LocalFromWorld()
{
    uStackFrame __("Fuse.OrthographicFrustum", "get_LocalFromWorld()");
    return _localFromWorld;
}

// public void set_LocalFromWorld(float4x4 value) [instance] :5093
void OrthographicFrustum::LocalFromWorld(::g::Uno::Float4x4 value)
{
    uStackFrame __("Fuse.OrthographicFrustum", "set_LocalFromWorld(float4x4)");
    _localFromWorld = value;
    _hasLocalFromWorld = true;
}

// private float4x4 MatrixProjection(float2 viewSize) [instance] :5150
::g::Uno::Float4x4 OrthographicFrustum::MatrixProjection(::g::Uno::Float2 viewSize)
{
    uStackFrame __("Fuse.OrthographicFrustum", "MatrixProjection(float2)");
    return ::g::Fuse::Internal::FrustumMatrix::OrthoRH(viewSize.X, viewSize.Y, 1.0f, 1000.0f);
}

// private float4x4 MatrixProjectionInverse(float2 viewSize) [instance] :5155
::g::Uno::Float4x4 OrthographicFrustum::MatrixProjectionInverse(::g::Uno::Float2 viewSize)
{
    uStackFrame __("Fuse.OrthographicFrustum", "MatrixProjectionInverse(float2)");
    return ::g::Fuse::Internal::FrustumMatrix::OrthoRHInverse(viewSize.X, viewSize.Y, 1.0f, 1000.0f);
}

// private float4x4 MatrixView(float2 origin, float2 viewSize) [instance] :5136
::g::Uno::Float4x4 OrthographicFrustum::MatrixView(::g::Uno::Float2 origin, ::g::Uno::Float2 viewSize)
{
    uStackFrame __("Fuse.OrthographicFrustum", "MatrixView(float2,float2)");
    ::g::Uno::Float4x4 t = ::g::Uno::Matrix::Translation((-viewSize.X / 2.0f) - origin.X, (-viewSize.Y / 2.0f) - origin.Y, -2.0f);
    ::g::Uno::Float4x4 s = ::g::Uno::Matrix::Scaling1(1.0f, -1.0f, 1.0f);
    return ::g::Uno::Matrix::Mul8(t, s);
}

// private float4x4 MatrixViewInverse(float2 origin, float2 viewSize) [instance] :5143
::g::Uno::Float4x4 OrthographicFrustum::MatrixViewInverse(::g::Uno::Float2 origin, ::g::Uno::Float2 viewSize)
{
    uStackFrame __("Fuse.OrthographicFrustum", "MatrixViewInverse(float2,float2)");
    ::g::Uno::Float4x4 s = ::g::Uno::Matrix::Scaling1(1.0f, -1.0f, 1.0f);
    ::g::Uno::Float4x4 t = ::g::Uno::Matrix::Translation((viewSize.X / 2.0f) + origin.X, (viewSize.Y / 2.0f) + origin.Y, 2.0f);
    return ::g::Uno::Matrix::Mul8(s, t);
}

// public float2 get_Origin() [instance] :5065
::g::Uno::Float2 OrthographicFrustum::Origin()
{
    uStackFrame __("Fuse.OrthographicFrustum", "get_Origin()");
    return _origin;
}

// public void set_Origin(float2 value) [instance] :5066
void OrthographicFrustum::Origin(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.OrthographicFrustum", "set_Origin(float2)");
    _origin = value;
    _hasOrigin = true;
}

// public float2 get_Size() [instance] :5077
::g::Uno::Float2 OrthographicFrustum::Size()
{
    uStackFrame __("Fuse.OrthographicFrustum", "get_Size()");
    return _size;
}

// public void set_Size(float2 value) [instance] :5081
void OrthographicFrustum::Size(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.OrthographicFrustum", "set_Size(float2)");
    _size = value;
    _hasSize = true;
}

// public generated OrthographicFrustum New() [static] :5059
OrthographicFrustum* OrthographicFrustum::New1()
{
    OrthographicFrustum* obj1 = (OrthographicFrustum*)uNew(OrthographicFrustum_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#51
// -------------------------------------------------------

// private sealed class TranslationModes.ParentSizeMode :7268
// {
TranslationModes__ParentSizeMode_type* TranslationModes__ParentSizeMode_typeof()
{
    static uSStrong<TranslationModes__ParentSizeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__ParentSizeMode);
    options.TypeSize = sizeof(TranslationModes__ParentSizeMode_type);
    type = (TranslationModes__ParentSizeMode_type*)uClassType::New("Fuse.TranslationModes.ParentSizeMode", options);
    type->fp_ctor_ = (void*)TranslationModes__ParentSizeMode__New1_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))TranslationModes__ParentSizeMode__GetAbsVector_fn;
    type->interface1.fp_get_Flags = (void(*)(uObject*, int*))TranslationModes__ParentSizeMode__get_Flags_fn;
    ::TYPES[90] = ::g::Fuse::Translation_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[110] = ::g::Fuse::Transform_typeof();
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(TranslationModes__ParentSizeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(TranslationModes__ParentSizeMode_type, interface1));
    return type;
}

// public generated ParentSizeMode() :7268
void TranslationModes__ParentSizeMode__ctor__fn(TranslationModes__ParentSizeMode* __this)
{
    __this->ctor_();
}

// public Fuse.TransformModeFlags get_Flags() :7271
void TranslationModes__ParentSizeMode__get_Flags_fn(TranslationModes__ParentSizeMode* __this, int* __retval)
{
    *__retval = __this->Flags();
}

// public float3 GetAbsVector(Fuse.Translation t) :7270
void TranslationModes__ParentSizeMode__GetAbsVector_fn(TranslationModes__ParentSizeMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetAbsVector(t);
}

// public generated ParentSizeMode New() :7268
void TranslationModes__ParentSizeMode__New1_fn(TranslationModes__ParentSizeMode** __retval)
{
    *__retval = TranslationModes__ParentSizeMode::New1();
}

// public generated ParentSizeMode() [instance] :7268
void TranslationModes__ParentSizeMode::ctor_()
{
}

// public Fuse.TransformModeFlags get_Flags() [instance] :7271
int TranslationModes__ParentSizeMode::Flags()
{
    uStackFrame __("Fuse.TranslationModes.ParentSizeMode", "get_Flags()");
    return 2;
}

// public float3 GetAbsVector(Fuse.Translation t) [instance] :7270
::g::Uno::Float3 TranslationModes__ParentSizeMode::GetAbsVector(::g::Fuse::Translation* t)
{
    uStackFrame __("Fuse.TranslationModes.ParentSizeMode", "GetAbsVector(Fuse.Translation)");
    return ::g::Fuse::TranslationModes::RelativeToSize(uPtr(t)->Vector(), uPtr(uPtr(t)->RelativeNode())->Parent());
}

// public generated ParentSizeMode New() [static] :7268
TranslationModes__ParentSizeMode* TranslationModes__ParentSizeMode::New1()
{
    TranslationModes__ParentSizeMode* obj1 = (TranslationModes__ParentSizeMode*)uNew(TranslationModes__ParentSizeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#39
// -------------------------------------------------------

// public sealed class PerspectiveFrustum :5172
// {
PerspectiveFrustum_type* PerspectiveFrustum_typeof()
{
    static uSStrong<PerspectiveFrustum_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PerspectiveFrustum);
    options.TypeSize = sizeof(PerspectiveFrustum_type);
    type = (PerspectiveFrustum_type*)uClassType::New("Fuse.PerspectiveFrustum", options);
    type->fp_ctor_ = (void*)PerspectiveFrustum__New1_fn;
    type->interface0.fp_GetProjectionTransform = (void(*)(uObject*, uObject*, ::g::Uno::Float4x4*))PerspectiveFrustum__GetProjectionTransform_fn;
    type->interface0.fp_GetProjectionTransformInverse = (void(*)(uObject*, uObject*, ::g::Uno::Float4x4*))PerspectiveFrustum__GetProjectionTransformInverse_fn;
    type->interface0.fp_GetViewTransform = (void(*)(uObject*, uObject*, ::g::Uno::Float4x4*))PerspectiveFrustum__GetViewTransform_fn;
    type->interface0.fp_GetViewTransformInverse = (void(*)(uObject*, uObject*, ::g::Uno::Float4x4*))PerspectiveFrustum__GetViewTransformInverse_fn;
    type->interface0.fp_GetDepthRange = (void(*)(uObject*, uObject*, ::g::Uno::Float2*))PerspectiveFrustum__GetDepthRange_fn;
    type->interface0.fp_GetWorldPosition = (void(*)(uObject*, uObject*, ::g::Uno::Float3*))PerspectiveFrustum__GetWorldPosition_fn;
    ::TYPES[42] = ::g::Fuse::IViewport_typeof();
    ::TYPES[61] = ::g::Uno::Float_typeof();
    type->SetInterfaces(
        ::g::Fuse::IFrustum_typeof(), offsetof(PerspectiveFrustum_type, interface0));
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::PerspectiveFrustum, _Distance), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("get_Distance", NULL, (void*)PerspectiveFrustum__get_Distance_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Distance", NULL, (void*)PerspectiveFrustum__set_Distance_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("GetDepthRange", NULL, (void*)PerspectiveFrustum__GetDepthRange_fn, 0, false, ::g::Uno::Float2_typeof(), 1, ::g::Fuse::IViewport_typeof()),
        new uFunction("GetProjectionTransform", NULL, (void*)PerspectiveFrustum__GetProjectionTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 1, ::g::Fuse::IViewport_typeof()),
        new uFunction("GetProjectionTransformInverse", NULL, (void*)PerspectiveFrustum__GetProjectionTransformInverse_fn, 0, false, ::g::Uno::Float4x4_typeof(), 1, ::g::Fuse::IViewport_typeof()),
        new uFunction("GetViewTransform", NULL, (void*)PerspectiveFrustum__GetViewTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 1, ::g::Fuse::IViewport_typeof()),
        new uFunction("GetViewTransformInverse", NULL, (void*)PerspectiveFrustum__GetViewTransformInverse_fn, 0, false, ::g::Uno::Float4x4_typeof(), 1, ::g::Fuse::IViewport_typeof()),
        new uFunction("GetWorldPosition", NULL, (void*)PerspectiveFrustum__GetWorldPosition_fn, 0, false, ::g::Uno::Float3_typeof(), 1, ::g::Fuse::IViewport_typeof()),
        new uFunction(".ctor", NULL, (void*)PerspectiveFrustum__New1_fn, 0, true, PerspectiveFrustum_typeof(), 0));
    return type;
}

// public generated PerspectiveFrustum() :5172
void PerspectiveFrustum__ctor__fn(PerspectiveFrustum* __this)
{
    __this->ctor_();
}

// public generated float get_Distance() :5174
void PerspectiveFrustum__get_Distance_fn(PerspectiveFrustum* __this, float* __retval)
{
    *__retval = __this->Distance();
}

// public generated void set_Distance(float value) :5174
void PerspectiveFrustum__set_Distance_fn(PerspectiveFrustum* __this, float* value)
{
    __this->Distance(*value);
}

// public float2 GetDepthRange(Fuse.IViewport viewport) :5208
void PerspectiveFrustum__GetDepthRange_fn(PerspectiveFrustum* __this, uObject* viewport, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetDepthRange(viewport);
}

// public float4x4 GetProjectionTransform(Fuse.IViewport viewport) :5178
void PerspectiveFrustum__GetProjectionTransform_fn(PerspectiveFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetProjectionTransform(viewport);
}

// public float4x4 GetProjectionTransformInverse(Fuse.IViewport viewport) :5189
void PerspectiveFrustum__GetProjectionTransformInverse_fn(PerspectiveFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetProjectionTransformInverse(viewport);
}

// public float4x4 GetViewTransform(Fuse.IViewport viewport) :5184
void PerspectiveFrustum__GetViewTransform_fn(PerspectiveFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetViewTransform(viewport);
}

// public float4x4 GetViewTransformInverse(Fuse.IViewport viewport) :5196
void PerspectiveFrustum__GetViewTransformInverse_fn(PerspectiveFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetViewTransformInverse(viewport);
}

// public float3 GetWorldPosition(Fuse.IViewport viewport) :5201
void PerspectiveFrustum__GetWorldPosition_fn(PerspectiveFrustum* __this, uObject* viewport, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetWorldPosition(viewport);
}

// public generated PerspectiveFrustum New() :5172
void PerspectiveFrustum__New1_fn(PerspectiveFrustum** __retval)
{
    *__retval = PerspectiveFrustum::New1();
}

// public generated PerspectiveFrustum() [instance] :5172
void PerspectiveFrustum::ctor_()
{
}

// public generated float get_Distance() [instance] :5174
float PerspectiveFrustum::Distance()
{
    uStackFrame __("Fuse.PerspectiveFrustum", "get_Distance()");
    return _Distance;
}

// public generated void set_Distance(float value) [instance] :5174
void PerspectiveFrustum::Distance(float value)
{
    uStackFrame __("Fuse.PerspectiveFrustum", "set_Distance(float)");
    _Distance = value;
}

// public float2 GetDepthRange(Fuse.IViewport viewport) [instance] :5208
::g::Uno::Float2 PerspectiveFrustum::GetDepthRange(uObject* viewport)
{
    uStackFrame __("Fuse.PerspectiveFrustum", "GetDepthRange(Fuse.IViewport)");
    return ::g::Uno::Float2__New2(10.0f, 1000.0f + Distance());
}

// public float4x4 GetProjectionTransform(Fuse.IViewport viewport) [instance] :5178
::g::Uno::Float4x4 PerspectiveFrustum::GetProjectionTransform(uObject* viewport)
{
    uStackFrame __("Fuse.PerspectiveFrustum", "GetProjectionTransform(Fuse.IViewport)");
    return ::g::Fuse::Internal::FrustumMatrix::PerspectiveProjection(::g::Fuse::IViewport::Size(uInterface(uPtr(viewport), ::TYPES[42/*Fuse.IViewport*/])), 10.0f, 1000.0f + Distance(), Distance());
}

// public float4x4 GetProjectionTransformInverse(Fuse.IViewport viewport) [instance] :5189
::g::Uno::Float4x4 PerspectiveFrustum::GetProjectionTransformInverse(uObject* viewport)
{
    uStackFrame __("Fuse.PerspectiveFrustum", "GetProjectionTransformInverse(Fuse.IViewport)");
    ::g::Uno::Float4x4 pi = ::g::Fuse::Internal::FrustumMatrix::PerspectiveProjectionInverse(::g::Fuse::IViewport::Size(uInterface(uPtr(viewport), ::TYPES[42/*Fuse.IViewport*/])), 10.0f, 1000.0f + Distance(), Distance());
    return pi;
}

// public float4x4 GetViewTransform(Fuse.IViewport viewport) [instance] :5184
::g::Uno::Float4x4 PerspectiveFrustum::GetViewTransform(uObject* viewport)
{
    uStackFrame __("Fuse.PerspectiveFrustum", "GetViewTransform(Fuse.IViewport)");
    return ::g::Fuse::Internal::FrustumMatrix::PerspectiveView(::g::Fuse::IViewport::Size(uInterface(uPtr(viewport), ::TYPES[42/*Fuse.IViewport*/])), Distance(), ::g::Uno::Float2__New2(0.5f, 0.5f));
}

// public float4x4 GetViewTransformInverse(Fuse.IViewport viewport) [instance] :5196
::g::Uno::Float4x4 PerspectiveFrustum::GetViewTransformInverse(uObject* viewport)
{
    uStackFrame __("Fuse.PerspectiveFrustum", "GetViewTransformInverse(Fuse.IViewport)");
    return ::g::Fuse::Internal::FrustumMatrix::PerspectiveViewInverse(::g::Fuse::IViewport::Size(uInterface(uPtr(viewport), ::TYPES[42/*Fuse.IViewport*/])), Distance(), ::g::Uno::Float2__New2(0.5f, 0.5f));
}

// public float3 GetWorldPosition(Fuse.IViewport viewport) [instance] :5201
::g::Uno::Float3 PerspectiveFrustum::GetWorldPosition(uObject* viewport)
{
    uStackFrame __("Fuse.PerspectiveFrustum", "GetWorldPosition(Fuse.IViewport)");
    return ::g::Uno::Float3__New4(::g::Uno::Float2__op_Division1(::g::Fuse::IViewport::Size(uInterface(uPtr(viewport), ::TYPES[42/*Fuse.IViewport*/])), 2.0f), -Distance());
}

// public generated PerspectiveFrustum New() [static] :5172
PerspectiveFrustum* PerspectiveFrustum::New1()
{
    PerspectiveFrustum* obj1 = (PerspectiveFrustum*)uNew(PerspectiveFrustum_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#51
// -------------------------------------------------------

// public sealed class PlacedArgs :7196
// {
uType* PlacedArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(PlacedArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.PlacedArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::PlacedArgs, _HasPrev), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::PlacedArgs, _NewPosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::PlacedArgs, _NewSize), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::PlacedArgs, _PrevPosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::PlacedArgs, _PrevSize), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_DefaultValue", NULL, (void*)PlacedArgs__get_DefaultValue_fn, 0, false, uObject_typeof(), 0),
        new uFunction("get_HasPrev", NULL, (void*)PlacedArgs__get_HasPrev_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_NewPosition", NULL, (void*)PlacedArgs__get_NewPosition_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_NewSize", NULL, (void*)PlacedArgs__get_NewSize_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_PrevPosition", NULL, (void*)PlacedArgs__get_PrevPosition_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_PrevSize", NULL, (void*)PlacedArgs__get_PrevSize_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("Serialize", NULL, (void*)PlacedArgs__Serialize_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Scripting::IEventSerializer_typeof()));
    return type;
}

// internal PlacedArgs(bool hasPrev, float2 prevPosition, float2 newPosition, float2 prevSize, float2 newSize) :7204
void PlacedArgs__ctor_1_fn(PlacedArgs* __this, bool* hasPrev, ::g::Uno::Float2* prevPosition, ::g::Uno::Float2* newPosition, ::g::Uno::Float2* prevSize, ::g::Uno::Float2* newSize)
{
    __this->ctor_1(*hasPrev, *prevPosition, *newPosition, *prevSize, *newSize);
}

// public object get_DefaultValue() :7217
void PlacedArgs__get_DefaultValue_fn(PlacedArgs* __this, uObject** __retval)
{
    *__retval = __this->DefaultValue();
}

// public generated bool get_HasPrev() :7198
void PlacedArgs__get_HasPrev_fn(PlacedArgs* __this, bool* __retval)
{
    *__retval = __this->HasPrev();
}

// private generated void set_HasPrev(bool value) :7198
void PlacedArgs__set_HasPrev_fn(PlacedArgs* __this, bool* value)
{
    __this->HasPrev(*value);
}

// internal PlacedArgs New(bool hasPrev, float2 prevPosition, float2 newPosition, float2 prevSize, float2 newSize) :7204
void PlacedArgs__New2_fn(bool* hasPrev, ::g::Uno::Float2* prevPosition, ::g::Uno::Float2* newPosition, ::g::Uno::Float2* prevSize, ::g::Uno::Float2* newSize, PlacedArgs** __retval)
{
    *__retval = PlacedArgs::New2(*hasPrev, *prevPosition, *newPosition, *prevSize, *newSize);
}

// public generated float2 get_NewPosition() :7202
void PlacedArgs__get_NewPosition_fn(PlacedArgs* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->NewPosition();
}

// private generated void set_NewPosition(float2 value) :7202
void PlacedArgs__set_NewPosition_fn(PlacedArgs* __this, ::g::Uno::Float2* value)
{
    __this->NewPosition(*value);
}

// public generated float2 get_NewSize() :7201
void PlacedArgs__get_NewSize_fn(PlacedArgs* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->NewSize();
}

// private generated void set_NewSize(float2 value) :7201
void PlacedArgs__set_NewSize_fn(PlacedArgs* __this, ::g::Uno::Float2* value)
{
    __this->NewSize(*value);
}

// public generated float2 get_PrevPosition() :7199
void PlacedArgs__get_PrevPosition_fn(PlacedArgs* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PrevPosition();
}

// private generated void set_PrevPosition(float2 value) :7199
void PlacedArgs__set_PrevPosition_fn(PlacedArgs* __this, ::g::Uno::Float2* value)
{
    __this->PrevPosition(*value);
}

// public generated float2 get_PrevSize() :7200
void PlacedArgs__get_PrevSize_fn(PlacedArgs* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PrevSize();
}

// private generated void set_PrevSize(float2 value) :7200
void PlacedArgs__set_PrevSize_fn(PlacedArgs* __this, ::g::Uno::Float2* value)
{
    __this->PrevSize(*value);
}

// public void Serialize(Fuse.Scripting.IEventSerializer serializer) :7214
void PlacedArgs__Serialize_fn(PlacedArgs* __this, uObject* serializer)
{
    __this->Serialize(serializer);
}

// internal PlacedArgs(bool hasPrev, float2 prevPosition, float2 newPosition, float2 prevSize, float2 newSize) [instance] :7204
void PlacedArgs::ctor_1(bool hasPrev, ::g::Uno::Float2 prevPosition, ::g::Uno::Float2 newPosition, ::g::Uno::Float2 prevSize, ::g::Uno::Float2 newSize)
{
    uStackFrame __("Fuse.PlacedArgs", ".ctor(bool,float2,float2,float2,float2)");
    ctor_();
    HasPrev(hasPrev);
    PrevPosition(prevPosition);
    PrevSize(prevSize);
    NewSize(newSize);
    NewPosition(newPosition);
}

// public object get_DefaultValue() [instance] :7217
uObject* PlacedArgs::DefaultValue()
{
    uStackFrame __("Fuse.PlacedArgs", "get_DefaultValue()");
    return NULL;
}

// public generated bool get_HasPrev() [instance] :7198
bool PlacedArgs::HasPrev()
{
    uStackFrame __("Fuse.PlacedArgs", "get_HasPrev()");
    return _HasPrev;
}

// private generated void set_HasPrev(bool value) [instance] :7198
void PlacedArgs::HasPrev(bool value)
{
    uStackFrame __("Fuse.PlacedArgs", "set_HasPrev(bool)");
    _HasPrev = value;
}

// public generated float2 get_NewPosition() [instance] :7202
::g::Uno::Float2 PlacedArgs::NewPosition()
{
    uStackFrame __("Fuse.PlacedArgs", "get_NewPosition()");
    return _NewPosition;
}

// private generated void set_NewPosition(float2 value) [instance] :7202
void PlacedArgs::NewPosition(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.PlacedArgs", "set_NewPosition(float2)");
    _NewPosition = value;
}

// public generated float2 get_NewSize() [instance] :7201
::g::Uno::Float2 PlacedArgs::NewSize()
{
    uStackFrame __("Fuse.PlacedArgs", "get_NewSize()");
    return _NewSize;
}

// private generated void set_NewSize(float2 value) [instance] :7201
void PlacedArgs::NewSize(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.PlacedArgs", "set_NewSize(float2)");
    _NewSize = value;
}

// public generated float2 get_PrevPosition() [instance] :7199
::g::Uno::Float2 PlacedArgs::PrevPosition()
{
    uStackFrame __("Fuse.PlacedArgs", "get_PrevPosition()");
    return _PrevPosition;
}

// private generated void set_PrevPosition(float2 value) [instance] :7199
void PlacedArgs::PrevPosition(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.PlacedArgs", "set_PrevPosition(float2)");
    _PrevPosition = value;
}

// public generated float2 get_PrevSize() [instance] :7200
::g::Uno::Float2 PlacedArgs::PrevSize()
{
    uStackFrame __("Fuse.PlacedArgs", "get_PrevSize()");
    return _PrevSize;
}

// private generated void set_PrevSize(float2 value) [instance] :7200
void PlacedArgs::PrevSize(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.PlacedArgs", "set_PrevSize(float2)");
    _PrevSize = value;
}

// public void Serialize(Fuse.Scripting.IEventSerializer serializer) [instance] :7214
void PlacedArgs::Serialize(uObject* serializer)
{
}

// internal PlacedArgs New(bool hasPrev, float2 prevPosition, float2 newPosition, float2 prevSize, float2 newSize) [static] :7204
PlacedArgs* PlacedArgs::New2(bool hasPrev, ::g::Uno::Float2 prevPosition, ::g::Uno::Float2 newPosition, ::g::Uno::Float2 prevSize, ::g::Uno::Float2 newSize)
{
    PlacedArgs* obj1 = (PlacedArgs*)uNew(PlacedArgs_typeof());
    obj1->ctor_1(hasPrev, prevPosition, newPosition, prevSize, newSize);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#51
// -------------------------------------------------------

// public delegate void PlacedHandler(object sender, Fuse.PlacedArgs args) :7221
uDelegateType* PlacedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.PlacedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::PlacedArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#41
// -------------------------------------------------------

// public sealed class Properties :5657
// {
// static Properties() :5657
static void Properties__cctor__fn(uType* __type)
{
    Properties::NoValue_ = ::g::Uno::Object::New();
}

uType* Properties_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Properties);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Properties", options);
    type->fp_ctor_ = (void*)Properties__New1_fn;
    type->fp_cctor_ = Properties__cctor__fn;
    ::TYPES[154] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), uObject_typeof()->Array());
    ::TYPES[136] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), uObject_typeof());
    ::TYPES[155] = uObject_typeof()->Array();
    ::TYPES[99] = ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof());
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), offsetof(::g::Fuse::Properties, _handle), 0,
        Properties_typeof(), offsetof(::g::Fuse::Properties, _next), 0,
        uObject_typeof(), offsetof(::g::Fuse::Properties, _value), 0,
        uObject_typeof(), (uintptr_t)&::g::Fuse::Properties::NoValue_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(13,
        new uFunction("AddToList", NULL, (void*)Properties__AddToList_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::PropertyHandle_typeof(), uObject_typeof()),
        new uFunction("Clear", NULL, (void*)Properties__Clear_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::PropertyHandle_typeof()),
        new uFunction("CreateHandle", NULL, (void*)Properties__CreateHandle_fn, 0, true, ::g::Fuse::PropertyHandle_typeof(), 0),
        new uFunction("ForeachInList", NULL, (void*)Properties__ForeachInList_fn, 0, false, uVoid_typeof(), 3, ::g::Fuse::PropertyHandle_typeof(), ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), uObject_typeof()->Array()), uObject_typeof()->Array()),
        new uFunction("ForeachInList", NULL, (void*)Properties__ForeachInList1_fn, 0, false, uVoid_typeof(), 3, ::g::Fuse::PropertyHandle_typeof(), ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), uObject_typeof()), uObject_typeof()),
        new uFunction("Get", NULL, (void*)Properties__Get_fn, 0, false, uObject_typeof(), 1, ::g::Fuse::PropertyHandle_typeof()),
        new uFunction("Has", NULL, (void*)Properties__Has_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Fuse::PropertyHandle_typeof()),
        new uFunction(".ctor", NULL, (void*)Properties__New1_fn, 0, true, Properties_typeof(), 0),
        new uFunction("RemoveAllFromList", NULL, (void*)Properties__RemoveAllFromList_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::PropertyHandle_typeof(), uObject_typeof()),
        new uFunction("RemoveFromList", NULL, (void*)Properties__RemoveFromList_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::PropertyHandle_typeof(), uObject_typeof()),
        new uFunction("Set", NULL, (void*)Properties__Set_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::PropertyHandle_typeof(), uObject_typeof()),
        new uFunction("ToArray", NULL, (void*)Properties__ToArray_fn, 0, false, uObject_typeof()->Array(), 1, ::g::Fuse::PropertyHandle_typeof()),
        new uFunction("TryGet", NULL, (void*)Properties__TryGet_fn, 0, false, ::g::Uno::Bool_typeof(), 2, ::g::Fuse::PropertyHandle_typeof(), uObject_typeof()->ByRef()));
    return type;
}

// public generated Properties() :5657
void Properties__ctor__fn(Properties* __this)
{
    __this->ctor_();
}

// public void AddToList(Fuse.PropertyHandle handle, object val) :5708
void Properties__AddToList_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject* val)
{
    __this->AddToList(handle, val);
}

// public void Clear(Fuse.PropertyHandle handle) :5791
void Properties__Clear_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle)
{
    __this->Clear(handle);
}

// private void Clear(Fuse.PropertyHandle handle, object val, bool all) :5798
void Properties__Clear1_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject* val, bool* all)
{
    __this->Clear1(handle, val, *all);
}

// public static Fuse.PropertyHandle CreateHandle() :5663
void Properties__CreateHandle_fn(::g::Fuse::PropertyHandle** __retval)
{
    *__retval = Properties::CreateHandle();
}

// public void ForeachInList(Fuse.PropertyHandle handle, Uno.Action<object, object[]> action, object[] state) :5774
void Properties__ForeachInList_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uDelegate* action, uArray* state)
{
    __this->ForeachInList(handle, action, state);
}

// public void ForeachInList(Fuse.PropertyHandle handle, Uno.Action<object, object> action, object state) :5757
void Properties__ForeachInList1_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uDelegate* action, uObject* state)
{
    __this->ForeachInList1(handle, action, state);
}

// public object Get(Fuse.PropertyHandle handle) :5668
void Properties__Get_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject** __retval)
{
    *__retval = __this->Get(handle);
}

// public bool Has(Fuse.PropertyHandle handle) :5683
void Properties__Has_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, bool* __retval)
{
    *__retval = __this->Has(handle);
}

// public generated Properties New() :5657
void Properties__New1_fn(Properties** __retval)
{
    *__retval = Properties::New1();
}

// public void RemoveAllFromList(Fuse.PropertyHandle handle, object val) :5731
void Properties__RemoveAllFromList_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject* val)
{
    __this->RemoveAllFromList(handle, val);
}

// public void RemoveFromList(Fuse.PropertyHandle handle, object val) :5726
void Properties__RemoveFromList_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject* val)
{
    __this->RemoveFromList(handle, val);
}

// public void Set(Fuse.PropertyHandle handle, object val) :5690
void Properties__Set_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject* val)
{
    __this->Set(handle, val);
}

// public object[] ToArray(Fuse.PropertyHandle handle) :5736
void Properties__ToArray_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uArray** __retval)
{
    *__retval = __this->ToArray(handle);
}

// public bool TryGet(Fuse.PropertyHandle handle, object& val) :5675
void Properties__TryGet_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject** val, bool* __retval)
{
    *__retval = __this->TryGet(handle, val);
}

uSStrong<uObject*> Properties::NoValue_;

// public generated Properties() [instance] :5657
void Properties::ctor_()
{
}

// public void AddToList(Fuse.PropertyHandle handle, object val) [instance] :5708
void Properties::AddToList(::g::Fuse::PropertyHandle* handle, uObject* val)
{
    uStackFrame __("Fuse.Properties", "AddToList(Fuse.PropertyHandle,object)");

    if (_handle == NULL)
    {
        _handle = handle;
        _value = val;
    }
    else if (_next == NULL)
    {
        _next = Properties::New1();
        uPtr(_next)->AddToList(handle, val);
    }
    else
        uPtr(_next)->AddToList(handle, val);
}

// public void Clear(Fuse.PropertyHandle handle) [instance] :5791
void Properties::Clear(::g::Fuse::PropertyHandle* handle)
{
    uStackFrame __("Fuse.Properties", "Clear(Fuse.PropertyHandle)");
    Clear1(handle, Properties::NoValue(), true);
}

// private void Clear(Fuse.PropertyHandle handle, object val, bool all) [instance] :5798
void Properties::Clear1(::g::Fuse::PropertyHandle* handle, uObject* val, bool all)
{
    uStackFrame __("Fuse.Properties", "Clear(Fuse.PropertyHandle,object,bool)");

    if (_handle == NULL)
        return;

    Properties* p = this;
    Properties* previous = NULL;

    while (p != NULL)
        if ((uPtr(p)->_handle == handle) && ((val == Properties::NoValue()) || ::g::Uno::Object::Equals(uPtr(val), uPtr(p)->_value)))
        {
            if (previous == NULL)
            {
                if (uPtr(p)->_next == NULL)
                {
                    uPtr(p)->_handle = NULL;
                    p->_value = NULL;
                    break;
                }
                else
                {
                    uPtr(p)->_handle = uPtr(uPtr(p)->_next)->_handle;
                    p->_value = uPtr(p->_next)->_value;
                    p->_next = uPtr(p->_next)->_next;

                    if (all)
                        continue;
                    else
                        break;
                }
            }
            else
            {
                uPtr(previous)->_next = uPtr(p)->_next;
                p = uPtr(p)->_next;

                if (all)
                    continue;
                else
                    break;
            }
        }
        else
        {
            previous = p;
            p = uPtr(p)->_next;
        }
}

// public void ForeachInList(Fuse.PropertyHandle handle, Uno.Action<object, object[]> action, object[] state) [instance] :5774
void Properties::ForeachInList(::g::Fuse::PropertyHandle* handle, uDelegate* action, uArray* state)
{
    uStackFrame __("Fuse.Properties", "ForeachInList(Fuse.PropertyHandle,Uno.Action<object, object[]>,object[])");

    if (_handle == NULL)
        return;

    Properties* p = this;

    while (p != NULL)
    {
        if (uPtr(p)->_handle == handle)
            uPtr(action)->Invoke(2, (uObject*)uPtr(p)->_value, state);

        p = uPtr(p)->_next;
    }
}

// public void ForeachInList(Fuse.PropertyHandle handle, Uno.Action<object, object> action, object state) [instance] :5757
void Properties::ForeachInList1(::g::Fuse::PropertyHandle* handle, uDelegate* action, uObject* state)
{
    uStackFrame __("Fuse.Properties", "ForeachInList(Fuse.PropertyHandle,Uno.Action<object, object>,object)");

    if (_handle == NULL)
        return;

    Properties* p = this;

    while (p != NULL)
    {
        if (uPtr(p)->_handle == handle)
            uPtr(action)->Invoke(2, (uObject*)uPtr(p)->_value, state);

        p = uPtr(p)->_next;
    }
}

// public object Get(Fuse.PropertyHandle handle) [instance] :5668
uObject* Properties::Get(::g::Fuse::PropertyHandle* handle)
{
    uStackFrame __("Fuse.Properties", "Get(Fuse.PropertyHandle)");

    if (_handle == handle)
        return _value;

    if (_next != NULL)
        return uPtr(_next)->Get(handle);

    return NULL;
}

// public bool Has(Fuse.PropertyHandle handle) [instance] :5683
bool Properties::Has(::g::Fuse::PropertyHandle* handle)
{
    uStackFrame __("Fuse.Properties", "Has(Fuse.PropertyHandle)");

    if (_handle == handle)
        return true;

    if (_next != NULL)
        return uPtr(_next)->Has(handle);

    return false;
}

// public void RemoveAllFromList(Fuse.PropertyHandle handle, object val) [instance] :5731
void Properties::RemoveAllFromList(::g::Fuse::PropertyHandle* handle, uObject* val)
{
    uStackFrame __("Fuse.Properties", "RemoveAllFromList(Fuse.PropertyHandle,object)");
    Clear1(handle, val, true);
}

// public void RemoveFromList(Fuse.PropertyHandle handle, object val) [instance] :5726
void Properties::RemoveFromList(::g::Fuse::PropertyHandle* handle, uObject* val)
{
    uStackFrame __("Fuse.Properties", "RemoveFromList(Fuse.PropertyHandle,object)");
    Clear1(handle, val, false);
}

// public void Set(Fuse.PropertyHandle handle, object val) [instance] :5690
void Properties::Set(::g::Fuse::PropertyHandle* handle, uObject* val)
{
    uStackFrame __("Fuse.Properties", "Set(Fuse.PropertyHandle,object)");

    if (_handle == NULL)
    {
        _handle = handle;
        _value = val;
    }
    else if (_handle == handle)
        _value = val;
    else
    {
        if (_next == NULL)
            _next = Properties::New1();

        uPtr(_next)->Set(handle, val);
    }
}

// public object[] ToArray(Fuse.PropertyHandle handle) [instance] :5736
uArray* Properties::ToArray(::g::Fuse::PropertyHandle* handle)
{
    uStackFrame __("Fuse.Properties", "ToArray(Fuse.PropertyHandle)");

    if (_handle == NULL)
        return uArray::New(::TYPES[155/*object[]*/], 0);

    ::g::Uno::Collections::List* list = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[99/*Uno.Collections.List<object>*/]);
    Properties* p = this;

    while (p != NULL)
    {
        if (uPtr(p)->_handle == handle)
            ::g::Uno::Collections::List__Add_fn(uPtr(list), uPtr(p)->_value);

        p = uPtr(p)->_next;
    }

    return (uArray*)list->ToArray();
}

// public bool TryGet(Fuse.PropertyHandle handle, object& val) [instance] :5675
bool Properties::TryGet(::g::Fuse::PropertyHandle* handle, uObject** val)
{
    uStackFrame __("Fuse.Properties", "TryGet(Fuse.PropertyHandle,object&)");

    if (_handle == handle)
    {
        *val = _value;
        return true;
    }

    if (_next != NULL)
        return uPtr(_next)->TryGet(handle, val);

    *val = NULL;
    return false;
}

// public static Fuse.PropertyHandle CreateHandle() [static] :5663
::g::Fuse::PropertyHandle* Properties::CreateHandle()
{
    uStackFrame __("Fuse.Properties", "CreateHandle()");
    Properties_typeof()->Init();
    return ::g::Fuse::PropertyHandle::New1();
}

// public generated Properties New() [static] :5657
Properties* Properties::New1()
{
    Properties* obj1 = (Properties*)uNew(Properties_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#41
// -------------------------------------------------------

// public sealed class PropertyHandle :5652
// {
uType* PropertyHandle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(PropertyHandle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.PropertyHandle", options);
    type->fp_ctor_ = (void*)PropertyHandle__New1_fn;
    return type;
}

// internal PropertyHandle() :5654
void PropertyHandle__ctor__fn(PropertyHandle* __this)
{
    __this->ctor_();
}

// internal PropertyHandle New() :5654
void PropertyHandle__New1_fn(PropertyHandle** __retval)
{
    *__retval = PropertyHandle::New1();
}

// internal PropertyHandle() [instance] :5654
void PropertyHandle::ctor_()
{
}

// internal PropertyHandle New() [static] :5654
PropertyHandle* PropertyHandle::New1()
{
    PropertyHandle* obj1 = (PropertyHandle*)uNew(PropertyHandle_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#31
// -------------------------------------------------------

// public enum PropertyState :3989
uEnumType* PropertyState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.PropertyState", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "NoValue", 0LL,
        "StyleValue", 1LL,
        "LocalValue", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#6
// ------------------------------------------------------

// internal sealed class RenderTargetEntry :637
// {
uType* RenderTargetEntry_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(RenderTargetEntry);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.RenderTargetEntry", options);
    type->SetFields(0,
        ::g::OpenGL::GLFramebufferHandle_typeof(), offsetof(::g::Fuse::RenderTargetEntry, GLFramebuffer), 0,
        ::g::Uno::Int4_typeof(), offsetof(::g::Fuse::RenderTargetEntry, GLScissor), 0,
        ::g::Uno::Int2_typeof(), offsetof(::g::Fuse::RenderTargetEntry, GLViewportPixelSize), 0,
        ::g::Uno::Graphics::RenderTarget_typeof(), offsetof(::g::Fuse::RenderTargetEntry, RenderTarget), 0);
    return type;
}

// public extern RenderTargetEntry(Uno.Graphics.RenderTarget rt, int2 viewportPixelSize, int4 glScissor, OpenGL.GLFramebufferHandle handle) :644
void RenderTargetEntry__ctor__fn(RenderTargetEntry* __this, ::g::Uno::Graphics::RenderTarget* rt, ::g::Uno::Int2* viewportPixelSize, ::g::Uno::Int4* glScissor, uint32_t* handle)
{
    __this->ctor_(rt, *viewportPixelSize, *glScissor, *handle);
}

// public extern RenderTargetEntry New(Uno.Graphics.RenderTarget rt, int2 viewportPixelSize, int4 glScissor, OpenGL.GLFramebufferHandle handle) :644
void RenderTargetEntry__New1_fn(::g::Uno::Graphics::RenderTarget* rt, ::g::Uno::Int2* viewportPixelSize, ::g::Uno::Int4* glScissor, uint32_t* handle, RenderTargetEntry** __retval)
{
    *__retval = RenderTargetEntry::New1(rt, *viewportPixelSize, *glScissor, *handle);
}

// public extern RenderTargetEntry(Uno.Graphics.RenderTarget rt, int2 viewportPixelSize, int4 glScissor, OpenGL.GLFramebufferHandle handle) [instance] :644
void RenderTargetEntry::ctor_(::g::Uno::Graphics::RenderTarget* rt, ::g::Uno::Int2 viewportPixelSize, ::g::Uno::Int4 glScissor, uint32_t handle)
{
    uStackFrame __("Fuse.RenderTargetEntry", ".ctor(Uno.Graphics.RenderTarget,int2,int4,OpenGL.GLFramebufferHandle)");
    RenderTarget = rt;
    GLViewportPixelSize = viewportPixelSize;
    GLScissor = glScissor;
    GLFramebuffer = handle;
}

// public extern RenderTargetEntry New(Uno.Graphics.RenderTarget rt, int2 viewportPixelSize, int4 glScissor, OpenGL.GLFramebufferHandle handle) [static] :644
RenderTargetEntry* RenderTargetEntry::New1(::g::Uno::Graphics::RenderTarget* rt, ::g::Uno::Int2 viewportPixelSize, ::g::Uno::Int4 glScissor, uint32_t handle)
{
    RenderTargetEntry* obj1 = (RenderTargetEntry*)uNew(RenderTargetEntry_typeof());
    obj1->ctor_(rt, viewportPixelSize, glScissor, handle);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#29
// -------------------------------------------------------

// public sealed class RequestBringIntoViewArgs :3472
// {
uType* RequestBringIntoViewArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(RequestBringIntoViewArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.RequestBringIntoViewArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::RequestBringIntoViewArgs, _Node), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)RequestBringIntoViewArgs__New2_fn, 0, true, RequestBringIntoViewArgs_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("get_Node", NULL, (void*)RequestBringIntoViewArgs__get_Node_fn, 0, false, ::g::Fuse::Node_typeof(), 0));
    return type;
}

// public RequestBringIntoViewArgs(Fuse.Node elm) :3475
void RequestBringIntoViewArgs__ctor_1_fn(RequestBringIntoViewArgs* __this, ::g::Fuse::Node* elm)
{
    __this->ctor_1(elm);
}

// public RequestBringIntoViewArgs New(Fuse.Node elm) :3475
void RequestBringIntoViewArgs__New2_fn(::g::Fuse::Node* elm, RequestBringIntoViewArgs** __retval)
{
    *__retval = RequestBringIntoViewArgs::New2(elm);
}

// public generated Fuse.Node get_Node() :3474
void RequestBringIntoViewArgs__get_Node_fn(RequestBringIntoViewArgs* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Node();
}

// private generated void set_Node(Fuse.Node value) :3474
void RequestBringIntoViewArgs__set_Node_fn(RequestBringIntoViewArgs* __this, ::g::Fuse::Node* value)
{
    __this->Node(value);
}

// public RequestBringIntoViewArgs(Fuse.Node elm) [instance] :3475
void RequestBringIntoViewArgs::ctor_1(::g::Fuse::Node* elm)
{
    uStackFrame __("Fuse.RequestBringIntoViewArgs", ".ctor(Fuse.Node)");
    ctor_();
    Node(elm);
}

// public generated Fuse.Node get_Node() [instance] :3474
::g::Fuse::Node* RequestBringIntoViewArgs::Node()
{
    uStackFrame __("Fuse.RequestBringIntoViewArgs", "get_Node()");
    return _Node;
}

// private generated void set_Node(Fuse.Node value) [instance] :3474
void RequestBringIntoViewArgs::Node(::g::Fuse::Node* value)
{
    uStackFrame __("Fuse.RequestBringIntoViewArgs", "set_Node(Fuse.Node)");
    _Node = value;
}

// public RequestBringIntoViewArgs New(Fuse.Node elm) [static] :3475
RequestBringIntoViewArgs* RequestBringIntoViewArgs::New2(::g::Fuse::Node* elm)
{
    RequestBringIntoViewArgs* obj1 = (RequestBringIntoViewArgs*)uNew(RequestBringIntoViewArgs_typeof());
    obj1->ctor_1(elm);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#29
// -------------------------------------------------------

// public delegate void RequestBringIntoViewHandler(object sender, Fuse.RequestBringIntoViewArgs args) :3481
uDelegateType* RequestBringIntoViewHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.RequestBringIntoViewHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::RequestBringIntoViewArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#36
// -------------------------------------------------------

// public sealed class RequiresRootedException :4677
// {
::g::Uno::Exception_type* RequiresRootedException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(RequiresRootedException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Fuse.RequiresRootedException", options);
    type->SetBase(::g::Uno::Exception_typeof());
    type->fp_ctor_ = (void*)RequiresRootedException__New4_fn;
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)RequiresRootedException__New4_fn, 0, true, RequiresRootedException_typeof(), 0));
    return type;
}

// public generated RequiresRootedException() :4677
void RequiresRootedException__ctor_3_fn(RequiresRootedException* __this)
{
    __this->ctor_3();
}

// public generated RequiresRootedException New() :4677
void RequiresRootedException__New4_fn(RequiresRootedException** __retval)
{
    *__retval = RequiresRootedException::New4();
}

// public generated RequiresRootedException() [instance] :4677
void RequiresRootedException::ctor_3()
{
    ctor_();
}

// public generated RequiresRootedException New() [static] :4677
RequiresRootedException* RequiresRootedException::New4()
{
    RequiresRootedException* obj1 = (RequiresRootedException*)uNew(RequiresRootedException_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#36
// -------------------------------------------------------

// private enum Node.RootStage :4840
uEnumType* Node__RootStage_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Node.RootStage", ::g::Uno::Int_typeof(), 7);
    type->SetLiterals(
        "None", 0LL,
        "Rooting", 1LL,
        "Styles", 2LL,
        "Behaviors", 3LL,
        "Children", 4LL,
        "LocalRooting", 5LL,
        "LocalRooted", 6LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#2
// ------------------------------------------------------

// private enum Behavior.RootStatus :377
uEnumType* Behavior__RootStatus_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Behavior.RootStatus", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Unrooted", 0LL,
        "Rooting", 1LL,
        "Rooted", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#42
// -------------------------------------------------------

// public class RootViewport :5906
// {
RootViewport_type* RootViewport_typeof()
{
    static uSStrong<RootViewport_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 64;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(RootViewport);
    options.TypeSize = sizeof(RootViewport_type);
    type = (RootViewport_type*)uClassType::New("Fuse.RootViewport", options);
    type->SetBase(::g::Fuse::Node_typeof());
    type->fp_GetSubNode = (void(*)(::g::Fuse::Node*, int*, ::g::Fuse::Node**))RootViewport__GetSubNode_fn;
    type->fp_OnArrangeMarginBox = (void(*)(::g::Fuse::Node*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))RootViewport__OnArrangeMarginBox_fn;
    type->fp_OnHitTest = (void(*)(::g::Fuse::Node*, ::g::Fuse::HitTestContext*))RootViewport__OnHitTest_fn;
    type->fp_get_SubNodeCount = (void(*)(::g::Fuse::Node*, int*))RootViewport__get_SubNodeCount_fn;
    type->interface2.fp_PointToWorldRay = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Uno::Geometry::Ray*))RootViewport__PointToWorldRay_fn;
    type->interface2.fp_get_PixelsPerPoint = (void(*)(uObject*, float*))RootViewport__get_PixelsPerPoint_fn;
    type->interface2.fp_get_Size = (void(*)(uObject*, ::g::Uno::Float2*))RootViewport__get_Size_fn;
    type->interface2.fp_get_PixelSize = (void(*)(uObject*, ::g::Uno::Float2*))RootViewport__get_PixelSize_fn;
    type->interface2.fp_get_ProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))RootViewport__get_ProjectionTransform_fn;
    type->interface2.fp_get_ProjectionTransformInverse = (void(*)(uObject*, ::g::Uno::Float4x4*))RootViewport__get_ProjectionTransformInverse_fn;
    type->interface2.fp_get_ViewProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))RootViewport__get_ViewProjectionTransform_fn;
    type->interface2.fp_get_ViewProjectionTransformInverse = (void(*)(uObject*, ::g::Uno::Float4x4*))RootViewport__get_ViewProjectionTransformInverse_fn;
    type->interface2.fp_get_ViewTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))RootViewport__get_ViewTransform_fn;
    type->interface2.fp_get_ViewTransformInverse = (void(*)(uObject*, ::g::Uno::Float4x4*))RootViewport__get_ViewTransformInverse_fn;
    type->interface2.fp_get_ViewOrigin = (void(*)(uObject*, ::g::Uno::Float3*))RootViewport__get_ViewOrigin_fn;
    type->interface2.fp_get_ViewRange = (void(*)(uObject*, ::g::Uno::Float2*))RootViewport__get_ViewRange_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseIChildObjectget_ParentObject_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[159] = ::g::Fuse::IFrustum_typeof();
    ::TYPES[80] = ::g::Uno::Platform::Window_typeof();
    ::TYPES[21] = ::g::Uno::EventHandler_typeof();
    ::TYPES[10] = ::g::Uno::Platform2::Display_typeof();
    ::TYPES[42] = ::g::Fuse::IViewport_typeof();
    ::TYPES[72] = ::g::Uno::Action_typeof();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[7] = ::g::Fuse::AppBase_typeof();
    ::TYPES[26] = ::g::Uno::Delegate_typeof();
    ::TYPES[160] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[57] = ::g::Uno::Rect_typeof();
    ::TYPES[62] = ::g::Fuse::FrustumViewport_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(RootViewport_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(RootViewport_type, interface1),
        ::g::Fuse::IViewport_typeof(), offsetof(RootViewport_type, interface2));
    type->SetFields(54,
        ::g::Fuse::FrustumViewport_typeof(), offsetof(::g::Fuse::RootViewport, _frustumViewport), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::RootViewport, _overridePixelsPerPoint), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::RootViewport, _pixelSize), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::RootViewport, _pixelsPerOSPoint), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::RootViewport, _pixelsPerPoint), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::RootViewport, _root), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::RootViewport, _sizeOverridden), 0,
        ::g::Fuse::IFrustum_typeof(), offsetof(::g::Fuse::RootViewport, Frustum), 0,
        ::g::Uno::Platform::Window_typeof(), offsetof(::g::Fuse::RootViewport, Window), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float2_typeof()), offsetof(::g::Fuse::RootViewport, Resized1), 0);
    type->Reflection.SetFunctions(17,
        new uFunction("get_Content", NULL, (void*)RootViewport__get_Content_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_Content", NULL, (void*)RootViewport__set_Content_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction(".ctor", NULL, (void*)RootViewport__New1_fn, 0, true, RootViewport_typeof(), 2, ::g::Uno::Platform::Window_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("get_PixelSize", NULL, (void*)RootViewport__get_PixelSize_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_PixelsPerPoint", NULL, (void*)RootViewport__get_PixelsPerPoint_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("PointToWorldRay", NULL, (void*)RootViewport__PointToWorldRay_fn, 0, false, ::g::Uno::Geometry::Ray_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_ProjectionTransform", NULL, (void*)RootViewport__get_ProjectionTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_ProjectionTransformInverse", NULL, (void*)RootViewport__get_ProjectionTransformInverse_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("add_Resized", NULL, (void*)RootViewport__add_Resized_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float2_typeof())),
        new uFunction("remove_Resized", NULL, (void*)RootViewport__remove_Resized_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float2_typeof())),
        new uFunction("get_Size", NULL, (void*)RootViewport__get_Size_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_ViewOrigin", NULL, (void*)RootViewport__get_ViewOrigin_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("get_ViewProjectionTransform", NULL, (void*)RootViewport__get_ViewProjectionTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_ViewProjectionTransformInverse", NULL, (void*)RootViewport__get_ViewProjectionTransformInverse_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_ViewRange", NULL, (void*)RootViewport__get_ViewRange_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_ViewTransform", NULL, (void*)RootViewport__get_ViewTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_ViewTransformInverse", NULL, (void*)RootViewport__get_ViewTransformInverse_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0));
    return type;
}

// public RootViewport(Uno.Platform.Window window, [float overridePixelsPerPoint]) :5912
void RootViewport__ctor_1_fn(RootViewport* __this, ::g::Uno::Platform::Window* window, float* overridePixelsPerPoint)
{
    __this->ctor_1(window, *overridePixelsPerPoint);
}

// public Fuse.Node get_Content() :5935
void RootViewport__get_Content_fn(RootViewport* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Content();
}

// public void set_Content(Fuse.Node value) :5936
void RootViewport__set_Content_fn(RootViewport* __this, ::g::Fuse::Node* value)
{
    __this->Content(value);
}

// private void EstablishSize() :6007
void RootViewport__EstablishSize_fn(RootViewport* __this)
{
    __this->EstablishSize();
}

// private extern void EstablishSizeInternals() :6069
void RootViewport__EstablishSizeInternals_fn(RootViewport* __this)
{
    __this->EstablishSizeInternals();
}

// public override sealed Fuse.Node GetSubNode(int i) :6124
void RootViewport__GetSubNode_fn(RootViewport* __this, int* i, ::g::Fuse::Node** __retval)
{
    uStackFrame __("Fuse.RootViewport", "GetSubNode(int)");
    return *__retval = __this->Content(), void();
}

// public RootViewport New(Uno.Platform.Window window, [float overridePixelsPerPoint]) :5912
void RootViewport__New1_fn(::g::Uno::Platform::Window* window, float* overridePixelsPerPoint, RootViewport** __retval)
{
    *__retval = RootViewport::New1(window, *overridePixelsPerPoint);
}

// protected override sealed float2 OnArrangeMarginBox(float2 position, Fuse.LayoutParams lp) :6126
void RootViewport__OnArrangeMarginBox_fn(RootViewport* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.RootViewport", "OnArrangeMarginBox(float2,Fuse.LayoutParams)");
    ::g::Uno::Float2 position_ = *position;
    ::g::Fuse::LayoutParams lp_ = *lp;

    if (__this->Content() == NULL)
        return *__retval = ::g::Uno::Float2__New1(0.0f), void();

    return *__retval = uPtr(__this->Content())->ArrangeMarginBox(position_, lp_), void();
}

// private void OnGotFocus(object sender, Uno.EventArgs args) :5958
void RootViewport__OnGotFocus_fn(RootViewport* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnGotFocus(sender, args);
}

// protected override sealed void OnHitTest(Fuse.HitTestContext htc) :5982
void RootViewport__OnHitTest_fn(RootViewport* __this, ::g::Fuse::HitTestContext* htc)
{
    uStackFrame __("Fuse.RootViewport", "OnHitTest(Fuse.HitTestContext)");

    if (__this->Content() != NULL)
        uPtr(__this->Content())->HitTest(htc);
}

// private void OnLostFocus(object sender, Uno.EventArgs args) :5970
void RootViewport__OnLostFocus_fn(RootViewport* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnLostFocus(sender, args);
}

// private void OnResized(object s, object a) :5988
void RootViewport__OnResized_fn(RootViewport* __this, uObject* s, uObject* a)
{
    __this->OnResized(s, a);
}

// public float2 get_PixelSize() :6100
void RootViewport__get_PixelSize_fn(RootViewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PixelSize();
}

// internal float get_PixelsPerOSPoint() :6082
void RootViewport__get_PixelsPerOSPoint_fn(RootViewport* __this, float* __retval)
{
    *__retval = __this->PixelsPerOSPoint();
}

// public float get_PixelsPerPoint() :6087
void RootViewport__get_PixelsPerPoint_fn(RootViewport* __this, float* __retval)
{
    *__retval = __this->PixelsPerPoint();
}

// public Uno.Geometry.Ray PointToWorldRay(float2 pixelPos) :6117
void RootViewport__PointToWorldRay_fn(RootViewport* __this, ::g::Uno::Float2* pixelPos, ::g::Uno::Geometry::Ray* __retval)
{
    *__retval = __this->PointToWorldRay(*pixelPos);
}

// public float4x4 get_ProjectionTransform() :6104
void RootViewport__get_ProjectionTransform_fn(RootViewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ProjectionTransform();
}

// public float4x4 get_ProjectionTransformInverse() :6106
void RootViewport__get_ProjectionTransformInverse_fn(RootViewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ProjectionTransformInverse();
}

// public generated void add_Resized(Uno.Action<float2> value) :5910
void RootViewport__add_Resized_fn(RootViewport* __this, uDelegate* value)
{
    __this->add_Resized(value);
}

// public generated void remove_Resized(Uno.Action<float2> value) :5910
void RootViewport__remove_Resized_fn(RootViewport* __this, uDelegate* value)
{
    __this->remove_Resized(value);
}

// public float2 get_Size() :6094
void RootViewport__get_Size_fn(RootViewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public override sealed int get_SubNodeCount() :6122
void RootViewport__get_SubNodeCount_fn(RootViewport* __this, int* __retval)
{
    uStackFrame __("Fuse.RootViewport", "get_SubNodeCount()");
    return *__retval = (__this->Content() != NULL) ? 1 : 0, void();
}

// public float3 get_ViewOrigin() :6115
void RootViewport__get_ViewOrigin_fn(RootViewport* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->ViewOrigin();
}

// public float4x4 get_ViewProjectionTransform() :6108
void RootViewport__get_ViewProjectionTransform_fn(RootViewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewProjectionTransform();
}

// public float4x4 get_ViewProjectionTransformInverse() :6110
void RootViewport__get_ViewProjectionTransformInverse_fn(RootViewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewProjectionTransformInverse();
}

// public float2 get_ViewRange() :6116
void RootViewport__get_ViewRange_fn(RootViewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ViewRange();
}

// public float4x4 get_ViewTransform() :6114
void RootViewport__get_ViewTransform_fn(RootViewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewTransform();
}

// public float4x4 get_ViewTransformInverse() :6112
void RootViewport__get_ViewTransformInverse_fn(RootViewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewTransformInverse();
}

// public RootViewport(Uno.Platform.Window window, [float overridePixelsPerPoint]) [instance] :5912
void RootViewport::ctor_1(::g::Uno::Platform::Window* window, float overridePixelsPerPoint)
{
    uStackFrame __("Fuse.RootViewport", ".ctor(Uno.Platform.Window,[float])");
    Frustum = (uObject*)::g::Fuse::OrthographicFrustum::New1();
    _frustumViewport = ::g::Fuse::FrustumViewport::New1();
    ctor_();
    _overridePixelsPerPoint = overridePixelsPerPoint;
    Window = window;
    EstablishSize();
    uPtr(Window)->add_GotFocus(uDelegate::New(::TYPES[21/*Uno.EventHandler*/], (void*)RootViewport__OnGotFocus_fn, this));
    uPtr(Window)->add_LostFocus(uDelegate::New(::TYPES[21/*Uno.EventHandler*/], (void*)RootViewport__OnLostFocus_fn, this));
    uPtr(Window)->add_Resized(uDelegate::New(::TYPES[21/*Uno.EventHandler*/], (void*)RootViewport__OnResized_fn, this));
    uPtr(::g::Uno::Platform2::Display::MainDisplay())->add_FrameChanged(uDelegate::New(::TYPES[21/*Uno.EventHandler*/], (void*)RootViewport__OnResized_fn, this));
    uPtr(_frustumViewport)->Update((uObject*)this, Frustum);
    Root();
    ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[72/*Uno.Action*/], (void*)::g::Fuse::Node__PerformLayout_fn, this), 2);
}

// public Fuse.Node get_Content() [instance] :5935
::g::Fuse::Node* RootViewport::Content()
{
    uStackFrame __("Fuse.RootViewport", "get_Content()");
    return _root;
}

// public void set_Content(Fuse.Node value) [instance] :5936
void RootViewport::Content(::g::Fuse::Node* value)
{
    uStackFrame __("Fuse.RootViewport", "set_Content(Fuse.Node)");

    if (_root != value)
    {
        try
        {
            UnrootChild(_root);
            _root = value;
            RootChild(_root);
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* ex = __t.Exception;
            _root = NULL;
            throw __t;
        }

        InvalidateLayout(2);
    }
}

// private void EstablishSize() [instance] :6007
void RootViewport::EstablishSize()
{
    uStackFrame __("Fuse.RootViewport", "EstablishSize()");

    if (!_sizeOverridden)
    {
        if ((Window == NULL) || (::g::Fuse::AppBase::Current1() == NULL))
        {
            _pixelsPerPoint = 1.0f;
            _pixelsPerOSPoint = 1.0f;
        }
        else
            EstablishSizeInternals();
    }

    if (::g::Uno::Delegate::op_Inequality(Resized1, NULL))
        uPtr(Resized1)->InvokeVoid(uCRef(_pixelSize));
}

// private extern void EstablishSizeInternals() [instance] :6069
void RootViewport::EstablishSizeInternals()
{
    uStackFrame __("Fuse.RootViewport", "EstablishSizeInternals()");
    _pixelSize = uPtr(::g::Uno::Platform2::Display::MainDisplay())->Frame().Size();
    _pixelsPerOSPoint = uPtr(::g::Uno::Platform2::Display::MainDisplay())->Density();
    _pixelsPerPoint = _pixelsPerOSPoint;
}

// private void OnGotFocus(object sender, Uno.EventArgs args) [instance] :5958
void RootViewport::OnGotFocus(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.RootViewport", "OnGotFocus(object,Uno.EventArgs)");

    try
    {
        ::g::Fuse::Input::Focus::OnWindowGotFocus(sender, args);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private void OnLostFocus(object sender, Uno.EventArgs args) [instance] :5970
void RootViewport::OnLostFocus(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.RootViewport", "OnLostFocus(object,Uno.EventArgs)");

    try
    {
        ::g::Fuse::Input::Focus::OnWindowLostFocus(sender, args);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private void OnResized(object s, object a) [instance] :5988
void RootViewport::OnResized(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.RootViewport", "OnResized(object,object)");
    EstablishSize();
    uPtr(_frustumViewport)->Update((uObject*)this, Frustum);
}

// public float2 get_PixelSize() [instance] :6100
::g::Uno::Float2 RootViewport::PixelSize()
{
    uStackFrame __("Fuse.RootViewport", "get_PixelSize()");
    return _pixelSize;
}

// internal float get_PixelsPerOSPoint() [instance] :6082
float RootViewport::PixelsPerOSPoint()
{
    uStackFrame __("Fuse.RootViewport", "get_PixelsPerOSPoint()");
    return _pixelsPerOSPoint;
}

// public float get_PixelsPerPoint() [instance] :6087
float RootViewport::PixelsPerPoint()
{
    uStackFrame __("Fuse.RootViewport", "get_PixelsPerPoint()");
    return (_overridePixelsPerPoint > 0.0f) ? _overridePixelsPerPoint : _pixelsPerPoint;
}

// public Uno.Geometry.Ray PointToWorldRay(float2 pixelPos) [instance] :6117
::g::Uno::Geometry::Ray RootViewport::PointToWorldRay(::g::Uno::Float2 pixelPos)
{
    uStackFrame __("Fuse.RootViewport", "PointToWorldRay(float2)");
    return ::g::Fuse::FrustumViewport::PointToWorldRay((uObject*)this, pixelPos);
}

// public float4x4 get_ProjectionTransform() [instance] :6104
::g::Uno::Float4x4 RootViewport::ProjectionTransform()
{
    uStackFrame __("Fuse.RootViewport", "get_ProjectionTransform()");
    return uPtr(_frustumViewport)->ProjectionTransform;
}

// public float4x4 get_ProjectionTransformInverse() [instance] :6106
::g::Uno::Float4x4 RootViewport::ProjectionTransformInverse()
{
    uStackFrame __("Fuse.RootViewport", "get_ProjectionTransformInverse()");
    return uPtr(_frustumViewport)->ProjectionTransformInverse;
}

// public generated void add_Resized(Uno.Action<float2> value) [instance] :5910
void RootViewport::add_Resized(uDelegate* value)
{
    uStackFrame __("Fuse.RootViewport", "add_Resized(Uno.Action<float2>)");
    Resized1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Resized1, value), ::TYPES[160/*Uno.Action<float2>*/]);
}

// public generated void remove_Resized(Uno.Action<float2> value) [instance] :5910
void RootViewport::remove_Resized(uDelegate* value)
{
    uStackFrame __("Fuse.RootViewport", "remove_Resized(Uno.Action<float2>)");
    Resized1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Resized1, value), ::TYPES[160/*Uno.Action<float2>*/]);
}

// public float2 get_Size() [instance] :6094
::g::Uno::Float2 RootViewport::Size()
{
    uStackFrame __("Fuse.RootViewport", "get_Size()");
    return ::g::Uno::Float2__op_Division1(PixelSize(), PixelsPerPoint());
}

// public float3 get_ViewOrigin() [instance] :6115
::g::Uno::Float3 RootViewport::ViewOrigin()
{
    uStackFrame __("Fuse.RootViewport", "get_ViewOrigin()");
    return ::g::Fuse::IFrustum::GetWorldPosition(uInterface(uPtr(Frustum), ::TYPES[159/*Fuse.IFrustum*/]), (uObject*)this);
}

// public float4x4 get_ViewProjectionTransform() [instance] :6108
::g::Uno::Float4x4 RootViewport::ViewProjectionTransform()
{
    uStackFrame __("Fuse.RootViewport", "get_ViewProjectionTransform()");
    return uPtr(_frustumViewport)->ViewProjectionTransform;
}

// public float4x4 get_ViewProjectionTransformInverse() [instance] :6110
::g::Uno::Float4x4 RootViewport::ViewProjectionTransformInverse()
{
    uStackFrame __("Fuse.RootViewport", "get_ViewProjectionTransformInverse()");
    return uPtr(_frustumViewport)->ViewProjectionTransformInverse;
}

// public float2 get_ViewRange() [instance] :6116
::g::Uno::Float2 RootViewport::ViewRange()
{
    uStackFrame __("Fuse.RootViewport", "get_ViewRange()");
    return ::g::Fuse::IFrustum::GetDepthRange(uInterface(uPtr(Frustum), ::TYPES[159/*Fuse.IFrustum*/]), (uObject*)this);
}

// public float4x4 get_ViewTransform() [instance] :6114
::g::Uno::Float4x4 RootViewport::ViewTransform()
{
    uStackFrame __("Fuse.RootViewport", "get_ViewTransform()");
    return uPtr(_frustumViewport)->ViewTransform;
}

// public float4x4 get_ViewTransformInverse() [instance] :6112
::g::Uno::Float4x4 RootViewport::ViewTransformInverse()
{
    uStackFrame __("Fuse.RootViewport", "get_ViewTransformInverse()");
    return uPtr(_frustumViewport)->ViewTransformInverse;
}

// public RootViewport New(Uno.Platform.Window window, [float overridePixelsPerPoint]) [static] :5912
RootViewport* RootViewport::New1(::g::Uno::Platform::Window* window, float overridePixelsPerPoint)
{
    RootViewport* obj1 = (RootViewport*)uNew(RootViewport_typeof());
    obj1->ctor_1(window, overridePixelsPerPoint);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#50
// -------------------------------------------------------

// public sealed class Rotation :7008
// {
::g::Fuse::Transform_type* Rotation_typeof()
{
    static uSStrong< ::g::Fuse::Transform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Rotation);
    options.TypeSize = sizeof(::g::Fuse::Transform_type);
    type = (::g::Fuse::Transform_type*)uClassType::New("Fuse.Rotation", options);
    type->SetBase(::g::Fuse::Transform_typeof());
    type->fp_ctor_ = (void*)Rotation__New1_fn;
    type->fp_AppendTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*))Rotation__AppendTo_fn;
    type->fp_get_IsFlat = (void(*)(::g::Fuse::Transform*, bool*))Rotation__get_IsFlat_fn;
    type->fp_PrependTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*))Rotation__PrependTo_fn;
    ::TYPES[127] = ::g::Uno::Float3_typeof();
    type->SetFields(4,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Rotation, _euler), 0);
    type->Reflection.SetFunctions(13,
        new uFunction("get_Degrees", NULL, (void*)Rotation__get_Degrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Degrees", NULL, (void*)Rotation__set_Degrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DegreesX", NULL, (void*)Rotation__get_DegreesX_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesX", NULL, (void*)Rotation__set_DegreesX_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DegreesY", NULL, (void*)Rotation__get_DegreesY_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesY", NULL, (void*)Rotation__set_DegreesY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DegreesZ", NULL, (void*)Rotation__get_DegreesZ_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesZ", NULL, (void*)Rotation__set_DegreesZ_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_EulerAngle", NULL, (void*)Rotation__get_EulerAngle_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("set_EulerAngle", NULL, (void*)Rotation__set_EulerAngle_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("get_EulerAngleDegrees", NULL, (void*)Rotation__get_EulerAngleDegrees_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("set_EulerAngleDegrees", NULL, (void*)Rotation__set_EulerAngleDegrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction(".ctor", NULL, (void*)Rotation__New1_fn, 0, true, Rotation_typeof(), 0));
    return type;
}

// public generated Rotation() :7008
void Rotation__ctor_1_fn(Rotation* __this)
{
    __this->ctor_1();
}

// public override sealed void AppendTo(Fuse.FastMatrix m, float weight) :7095
void Rotation__AppendTo_fn(Rotation* __this, ::g::Fuse::FastMatrix* m, float* weight)
{
    uStackFrame __("Fuse.Rotation", "AppendTo(Fuse.FastMatrix,float)");
    float weight_ = *weight;

    if (__this->HasRotation())
        uPtr(m)->AppendRotationQuaternion(::g::Uno::Quaternion::FromEulerAngle1(::g::Uno::Float3__op_Multiply1(__this->_euler, weight_)));
}

// public float get_Degrees() :7040
void Rotation__get_Degrees_fn(Rotation* __this, float* __retval)
{
    *__retval = __this->Degrees();
}

// public void set_Degrees(float value) :7041
void Rotation__set_Degrees_fn(Rotation* __this, float* value)
{
    __this->Degrees(*value);
}

// public float get_DegreesX() :7074
void Rotation__get_DegreesX_fn(Rotation* __this, float* __retval)
{
    *__retval = __this->DegreesX();
}

// public void set_DegreesX(float value) :7075
void Rotation__set_DegreesX_fn(Rotation* __this, float* value)
{
    __this->DegreesX(*value);
}

// public float get_DegreesY() :7060
void Rotation__get_DegreesY_fn(Rotation* __this, float* __retval)
{
    *__retval = __this->DegreesY();
}

// public void set_DegreesY(float value) :7061
void Rotation__set_DegreesY_fn(Rotation* __this, float* value)
{
    __this->DegreesY(*value);
}

// public float get_DegreesZ() :7046
void Rotation__get_DegreesZ_fn(Rotation* __this, float* __retval)
{
    *__retval = __this->DegreesZ();
}

// public void set_DegreesZ(float value) :7047
void Rotation__set_DegreesZ_fn(Rotation* __this, float* value)
{
    __this->DegreesZ(*value);
}

// public float3 get_EulerAngle() :7013
void Rotation__get_EulerAngle_fn(Rotation* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->EulerAngle();
}

// public void set_EulerAngle(float3 value) :7014
void Rotation__set_EulerAngle_fn(Rotation* __this, ::g::Uno::Float3* value)
{
    __this->EulerAngle(*value);
}

// public float3 get_EulerAngleDegrees() :7026
void Rotation__get_EulerAngleDegrees_fn(Rotation* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->EulerAngleDegrees();
}

// public void set_EulerAngleDegrees(float3 value) :7027
void Rotation__set_EulerAngleDegrees_fn(Rotation* __this, ::g::Uno::Float3* value)
{
    __this->EulerAngleDegrees(*value);
}

// private bool get_HasRotation() :7088
void Rotation__get_HasRotation_fn(Rotation* __this, bool* __retval)
{
    *__retval = __this->HasRotation();
}

// public override sealed bool get_IsFlat() :7109
void Rotation__get_IsFlat_fn(Rotation* __this, bool* __retval)
{
    uStackFrame __("Fuse.Rotation", "get_IsFlat()");
    return *__retval = (::g::Uno::Math::Abs1(__this->_euler.X) < 1e-05f) && (::g::Uno::Math::Abs1(__this->_euler.Y) < 1e-05f), void();
}

// public generated Rotation New() :7008
void Rotation__New1_fn(Rotation** __retval)
{
    *__retval = Rotation::New1();
}

// public override sealed void PrependTo(Fuse.FastMatrix m) :7101
void Rotation__PrependTo_fn(Rotation* __this, ::g::Fuse::FastMatrix* m)
{
    uStackFrame __("Fuse.Rotation", "PrependTo(Fuse.FastMatrix)");

    if (__this->HasRotation())
        uPtr(m)->PrependRotationQuaternion(::g::Uno::Quaternion::FromEulerAngle1(__this->_euler));
}

// public generated Rotation() [instance] :7008
void Rotation::ctor_1()
{
    uStackFrame __("Fuse.Rotation", ".ctor()");
    ctor_();
}

// public float get_Degrees() [instance] :7040
float Rotation::Degrees()
{
    uStackFrame __("Fuse.Rotation", "get_Degrees()");
    return DegreesZ();
}

// public void set_Degrees(float value) [instance] :7041
void Rotation::Degrees(float value)
{
    uStackFrame __("Fuse.Rotation", "set_Degrees(float)");
    DegreesZ(value);
}

// public float get_DegreesX() [instance] :7074
float Rotation::DegreesX()
{
    uStackFrame __("Fuse.Rotation", "get_DegreesX()");
    return ::g::Uno::Math::RadiansToDegrees1(_euler.X);
}

// public void set_DegreesX(float value) [instance] :7075
void Rotation::DegreesX(float value)
{
    uStackFrame __("Fuse.Rotation", "set_DegreesX(float)");
    float r = ::g::Uno::Math::DegreesToRadians1(value);

    if (_euler.X != r)
    {
        _euler.X = r;
        OnMatrixChanged();
    }
}

// public float get_DegreesY() [instance] :7060
float Rotation::DegreesY()
{
    uStackFrame __("Fuse.Rotation", "get_DegreesY()");
    return ::g::Uno::Math::RadiansToDegrees1(_euler.Y);
}

// public void set_DegreesY(float value) [instance] :7061
void Rotation::DegreesY(float value)
{
    uStackFrame __("Fuse.Rotation", "set_DegreesY(float)");
    float r = ::g::Uno::Math::DegreesToRadians1(value);

    if (_euler.Y != r)
    {
        _euler.Y = r;
        OnMatrixChanged();
    }
}

// public float get_DegreesZ() [instance] :7046
float Rotation::DegreesZ()
{
    uStackFrame __("Fuse.Rotation", "get_DegreesZ()");
    return ::g::Uno::Math::RadiansToDegrees1(_euler.Z);
}

// public void set_DegreesZ(float value) [instance] :7047
void Rotation::DegreesZ(float value)
{
    uStackFrame __("Fuse.Rotation", "set_DegreesZ(float)");
    float r = ::g::Uno::Math::DegreesToRadians1(value);

    if (_euler.Z != r)
    {
        _euler.Z = r;
        OnMatrixChanged();
    }
}

// public float3 get_EulerAngle() [instance] :7013
::g::Uno::Float3 Rotation::EulerAngle()
{
    uStackFrame __("Fuse.Rotation", "get_EulerAngle()");
    return _euler;
}

// public void set_EulerAngle(float3 value) [instance] :7014
void Rotation::EulerAngle(::g::Uno::Float3 value)
{
    uStackFrame __("Fuse.Rotation", "set_EulerAngle(float3)");

    if (::g::Uno::Float3__op_Inequality(_euler, value))
    {
        _euler = value;
        OnMatrixChanged();
    }
}

// public float3 get_EulerAngleDegrees() [instance] :7026
::g::Uno::Float3 Rotation::EulerAngleDegrees()
{
    uStackFrame __("Fuse.Rotation", "get_EulerAngleDegrees()");
    return ::g::Uno::Math::RadiansToDegrees3(_euler);
}

// public void set_EulerAngleDegrees(float3 value) [instance] :7027
void Rotation::EulerAngleDegrees(::g::Uno::Float3 value)
{
    uStackFrame __("Fuse.Rotation", "set_EulerAngleDegrees(float3)");
    ::g::Uno::Float3 r = ::g::Uno::Math::DegreesToRadians3(value);

    if (::g::Uno::Float3__op_Inequality(_euler, r))
    {
        _euler = r;
        OnMatrixChanged();
    }
}

// private bool get_HasRotation() [instance] :7088
bool Rotation::HasRotation()
{
    uStackFrame __("Fuse.Rotation", "get_HasRotation()");
    return ((::g::Uno::Math::Abs1(_euler.X) + ::g::Uno::Math::Abs1(_euler.Y)) + ::g::Uno::Math::Abs1(_euler.Z)) > 1e-05f;
}

// public generated Rotation New() [static] :7008
Rotation* Rotation::New1()
{
    Rotation* obj1 = (Rotation*)uNew(Rotation_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#43
// -------------------------------------------------------

// public sealed class Scaling :6159
// {
::g::Fuse::Transform_type* Scaling_typeof()
{
    static uSStrong< ::g::Fuse::Transform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(Scaling);
    options.TypeSize = sizeof(::g::Fuse::Transform_type);
    type = (::g::Fuse::Transform_type*)uClassType::New("Fuse.Scaling", options);
    type->SetBase(::g::Fuse::Transform_typeof());
    type->fp_ctor_ = (void*)Scaling__New1_fn;
    type->fp_AppendTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*))Scaling__AppendTo_fn;
    type->fp_get_IsFlat = (void(*)(::g::Fuse::Transform*, bool*))Scaling__get_IsFlat_fn;
    type->fp_PrependTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*))Scaling__PrependTo_fn;
    ::TYPES[161] = ::g::Fuse::ScalingModes_typeof();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[127] = ::g::Uno::Float3_typeof();
    type->SetFields(4,
        ::g::Fuse::IScalingMode_typeof(), offsetof(::g::Fuse::Scaling, _relativeTo), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Scaling, _vector), 0);
    type->Reflection.SetFunctions(13,
        new uFunction("get_Factor", NULL, (void*)Scaling__get_Factor_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Factor", NULL, (void*)Scaling__set_Factor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Scaling__New1_fn, 0, true, Scaling_typeof(), 0),
        new uFunction("get_RelativeTo", NULL, (void*)Scaling__get_RelativeTo_fn, 0, false, ::g::Fuse::IScalingMode_typeof(), 0),
        new uFunction("set_RelativeTo", NULL, (void*)Scaling__set_RelativeTo_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::IScalingMode_typeof()),
        new uFunction("get_Vector", NULL, (void*)Scaling__get_Vector_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("set_Vector", NULL, (void*)Scaling__set_Vector_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("get_X", NULL, (void*)Scaling__get_X_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_X", NULL, (void*)Scaling__set_X_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Y", NULL, (void*)Scaling__get_Y_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Y", NULL, (void*)Scaling__set_Y_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Z", NULL, (void*)Scaling__get_Z_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Z", NULL, (void*)Scaling__set_Z_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}

// public generated Scaling() :6159
void Scaling__ctor_1_fn(Scaling* __this)
{
    __this->ctor_1();
}

// public override sealed void AppendTo(Fuse.FastMatrix m, float weight) :6235
void Scaling__AppendTo_fn(Scaling* __this, ::g::Fuse::FastMatrix* m, float* weight)
{
    uStackFrame __("Fuse.Scaling", "AppendTo(Fuse.FastMatrix,float)");
    float weight_ = *weight;
    ::g::Uno::Float3 v = __this->EffectiveVector();

    if (!__this->IsIdentity(v))
        uPtr(m)->AppendScale1(::g::Uno::Math::Lerp4(::g::Uno::Float3__New1(1.0f), v, weight_));
}

// private float3 get_EffectiveVector() :6222
void Scaling__get_EffectiveVector_fn(Scaling* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->EffectiveVector();
}

// public float get_Factor() :6177
void Scaling__get_Factor_fn(Scaling* __this, float* __retval)
{
    *__retval = __this->Factor();
}

// public void set_Factor(float value) :6178
void Scaling__set_Factor_fn(Scaling* __this, float* value)
{
    __this->Factor(*value);
}

// public override sealed bool get_IsFlat() :6251
void Scaling__get_IsFlat_fn(Scaling* __this, bool* __retval)
{
    uStackFrame __("Fuse.Scaling", "get_IsFlat()");
    return *__retval = true, void();
}

// private bool IsIdentity(float3 v) :6228
void Scaling__IsIdentity_fn(Scaling* __this, ::g::Uno::Float3* v, bool* __retval)
{
    *__retval = __this->IsIdentity(*v);
}

// public generated Scaling New() :6159
void Scaling__New1_fn(Scaling** __retval)
{
    *__retval = Scaling::New1();
}

// public override sealed void PrependTo(Fuse.FastMatrix m) :6242
void Scaling__PrependTo_fn(Scaling* __this, ::g::Fuse::FastMatrix* m)
{
    uStackFrame __("Fuse.Scaling", "PrependTo(Fuse.FastMatrix)");
    ::g::Uno::Float3 v = __this->EffectiveVector();

    if (!__this->IsIdentity(v))
        uPtr(m)->PrependScale1(v);
}

// public Fuse.IScalingMode get_RelativeTo() :6164
void Scaling__get_RelativeTo_fn(Scaling* __this, uObject** __retval)
{
    *__retval = __this->RelativeTo();
}

// public void set_RelativeTo(Fuse.IScalingMode value) :6165
void Scaling__set_RelativeTo_fn(Scaling* __this, uObject* value)
{
    __this->RelativeTo(value);
}

// public float3 get_Vector() :6191
void Scaling__get_Vector_fn(Scaling* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->Vector();
}

// public void set_Vector(float3 value) :6192
void Scaling__set_Vector_fn(Scaling* __this, ::g::Uno::Float3* value)
{
    __this->Vector(*value);
}

// public float get_X() :6204
void Scaling__get_X_fn(Scaling* __this, float* __retval)
{
    *__retval = __this->X();
}

// public void set_X(float value) :6205
void Scaling__set_X_fn(Scaling* __this, float* value)
{
    __this->X(*value);
}

// public float get_Y() :6210
void Scaling__get_Y_fn(Scaling* __this, float* __retval)
{
    *__retval = __this->Y();
}

// public void set_Y(float value) :6211
void Scaling__set_Y_fn(Scaling* __this, float* value)
{
    __this->Y(*value);
}

// public float get_Z() :6216
void Scaling__get_Z_fn(Scaling* __this, float* __retval)
{
    *__retval = __this->Z();
}

// public void set_Z(float value) :6217
void Scaling__set_Z_fn(Scaling* __this, float* value)
{
    __this->Z(*value);
}

// public generated Scaling() [instance] :6159
void Scaling::ctor_1()
{
    uStackFrame __("Fuse.Scaling", ".ctor()");
    _relativeTo = ::g::Fuse::ScalingModes::Identity();
    _vector = ::g::Uno::Float3__New1(1.0f);
    ctor_();
}

// private float3 get_EffectiveVector() [instance] :6222
::g::Uno::Float3 Scaling::EffectiveVector()
{
    uStackFrame __("Fuse.Scaling", "get_EffectiveVector()");
    return ::g::Fuse::IScalingMode::GetScaleVector(uInterface(uPtr(_relativeTo), ::TYPES[162/*Fuse.IScalingMode*/]), this);
}

// public float get_Factor() [instance] :6177
float Scaling::Factor()
{
    uStackFrame __("Fuse.Scaling", "get_Factor()");
    return _vector.X;
}

// public void set_Factor(float value) [instance] :6178
void Scaling::Factor(float value)
{
    uStackFrame __("Fuse.Scaling", "set_Factor(float)");

    if (::g::Uno::Float3__op_Inequality(_vector, ::g::Uno::Float3__New1(value)))
    {
        _vector = ::g::Uno::Float3__New1(value);
        OnMatrixChanged();
    }
}

// private bool IsIdentity(float3 v) [instance] :6228
bool Scaling::IsIdentity(::g::Uno::Float3 v)
{
    uStackFrame __("Fuse.Scaling", "IsIdentity(float3)");
    return ((::g::Uno::Math::Abs1(v.X - 1.0f) < 1e-05f) && (::g::Uno::Math::Abs1(v.Y - 1.0f) < 1e-05f)) && (::g::Uno::Math::Abs1(v.Z - 1.0f) < 1e-05f);
}

// public Fuse.IScalingMode get_RelativeTo() [instance] :6164
uObject* Scaling::RelativeTo()
{
    uStackFrame __("Fuse.Scaling", "get_RelativeTo()");
    return _relativeTo;
}

// public void set_RelativeTo(Fuse.IScalingMode value) [instance] :6165
void Scaling::RelativeTo(uObject* value)
{
    uStackFrame __("Fuse.Scaling", "set_RelativeTo(Fuse.IScalingMode)");

    if (_relativeTo == value)
        return;

    _relativeTo = value;
    OnMatrixChanged();
}

// public float3 get_Vector() [instance] :6191
::g::Uno::Float3 Scaling::Vector()
{
    uStackFrame __("Fuse.Scaling", "get_Vector()");
    return _vector;
}

// public void set_Vector(float3 value) [instance] :6192
void Scaling::Vector(::g::Uno::Float3 value)
{
    uStackFrame __("Fuse.Scaling", "set_Vector(float3)");

    if (::g::Uno::Float3__op_Inequality(_vector, value))
    {
        _vector = value;
        OnMatrixChanged();
    }
}

// public float get_X() [instance] :6204
float Scaling::X()
{
    uStackFrame __("Fuse.Scaling", "get_X()");
    return Vector().X;
}

// public void set_X(float value) [instance] :6205
void Scaling::X(float value)
{
    uStackFrame __("Fuse.Scaling", "set_X(float)");
    Vector(::g::Uno::Float3__New2(value, Vector().Y, Vector().Z));
}

// public float get_Y() [instance] :6210
float Scaling::Y()
{
    uStackFrame __("Fuse.Scaling", "get_Y()");
    return Vector().Y;
}

// public void set_Y(float value) [instance] :6211
void Scaling::Y(float value)
{
    uStackFrame __("Fuse.Scaling", "set_Y(float)");
    Vector(::g::Uno::Float3__New2(Vector().X, value, Vector().Z));
}

// public float get_Z() [instance] :6216
float Scaling::Z()
{
    uStackFrame __("Fuse.Scaling", "get_Z()");
    return Vector().Z;
}

// public void set_Z(float value) [instance] :6217
void Scaling::Z(float value)
{
    uStackFrame __("Fuse.Scaling", "set_Z(float)");
    Vector(::g::Uno::Float3__New2(Vector().X, Vector().Y, value));
}

// public generated Scaling New() [static] :6159
Scaling* Scaling::New1()
{
    Scaling* obj1 = (Scaling*)uNew(Scaling_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#43
// -------------------------------------------------------

// public static class ScalingModes :6148
// {
// static ScalingModes() :6148
static void ScalingModes__cctor__fn(uType* __type)
{
    ScalingModes::Identity_ = (uObject*)ScalingModes__IdentityMode::New1();
}

uClassType* ScalingModes_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.ScalingModes", options);
    type->fp_cctor_ = ScalingModes__cctor__fn;
    ::TYPES[162] = ::g::Fuse::IScalingMode_typeof();
    type->SetFields(0,
        ::g::Fuse::IScalingMode_typeof(), (uintptr_t)&::g::Fuse::ScalingModes::Identity_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Identity", 0));
    return type;
}

uSStrong<uObject*> ScalingModes::Identity_;
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#50
// -------------------------------------------------------

// public sealed class Shear :7114
// {
::g::Fuse::Transform_type* Shear_typeof()
{
    static uSStrong< ::g::Fuse::Transform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Shear);
    options.TypeSize = sizeof(::g::Fuse::Transform_type);
    type = (::g::Fuse::Transform_type*)uClassType::New("Fuse.Shear", options);
    type->SetBase(::g::Fuse::Transform_typeof());
    type->fp_ctor_ = (void*)Shear__New1_fn;
    type->fp_AppendTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*))Shear__AppendTo_fn;
    type->fp_get_IsFlat = (void(*)(::g::Fuse::Transform*, bool*))Shear__get_IsFlat_fn;
    type->fp_PrependTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*))Shear__PrependTo_fn;
    ::TYPES[77] = ::g::Uno::Float2_typeof();
    type->SetFields(4,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Shear, _vector), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("get_Degrees", NULL, (void*)Shear__get_Degrees_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Degrees", NULL, (void*)Shear__set_Degrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_DegreesX", NULL, (void*)Shear__get_DegreesX_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesX", NULL, (void*)Shear__set_DegreesX_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DegreesY", NULL, (void*)Shear__get_DegreesY_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesY", NULL, (void*)Shear__set_DegreesY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Shear__New1_fn, 0, true, Shear_typeof(), 0),
        new uFunction("get_Vector", NULL, (void*)Shear__get_Vector_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Vector", NULL, (void*)Shear__set_Vector_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()));
    return type;
}

// public generated Shear() :7114
void Shear__ctor_1_fn(Shear* __this)
{
    __this->ctor_1();
}

// public override sealed void AppendTo(Fuse.FastMatrix m, float weight) :7168
void Shear__AppendTo_fn(Shear* __this, ::g::Fuse::FastMatrix* m, float* weight)
{
    uStackFrame __("Fuse.Shear", "AppendTo(Fuse.FastMatrix,float)");
    float weight_ = *weight;
    ::g::Uno::Float2 v = ::g::Uno::Float2__op_Multiply1(__this->Vector(), weight_);
    uPtr(m)->AppendShear(v.X, v.Y);
}

// public float2 get_Degrees() :7160
void Shear__get_Degrees_fn(Shear* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Degrees();
}

// public void set_Degrees(float2 value) :7161
void Shear__set_Degrees_fn(Shear* __this, ::g::Uno::Float2* value)
{
    __this->Degrees(*value);
}

// public float get_DegreesX() :7132
void Shear__get_DegreesX_fn(Shear* __this, float* __retval)
{
    *__retval = __this->DegreesX();
}

// public void set_DegreesX(float value) :7133
void Shear__set_DegreesX_fn(Shear* __this, float* value)
{
    __this->DegreesX(*value);
}

// public float get_DegreesY() :7146
void Shear__get_DegreesY_fn(Shear* __this, float* __retval)
{
    *__retval = __this->DegreesY();
}

// public void set_DegreesY(float value) :7147
void Shear__set_DegreesY_fn(Shear* __this, float* value)
{
    __this->DegreesY(*value);
}

// public override sealed bool get_IsFlat() :7182
void Shear__get_IsFlat_fn(Shear* __this, bool* __retval)
{
    uStackFrame __("Fuse.Shear", "get_IsFlat()");
    return *__retval = true, void();
}

// public generated Shear New() :7114
void Shear__New1_fn(Shear** __retval)
{
    *__retval = Shear::New1();
}

// public override sealed void PrependTo(Fuse.FastMatrix m) :7174
void Shear__PrependTo_fn(Shear* __this, ::g::Fuse::FastMatrix* m)
{
    uStackFrame __("Fuse.Shear", "PrependTo(Fuse.FastMatrix)");
    ::g::Uno::Float2 v = __this->Vector();
    uPtr(m)->PrependShear(v.X, v.Y);
}

// public float2 get_Vector() :7119
void Shear__get_Vector_fn(Shear* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Vector();
}

// public void set_Vector(float2 value) :7120
void Shear__set_Vector_fn(Shear* __this, ::g::Uno::Float2* value)
{
    __this->Vector(*value);
}

// public generated Shear() [instance] :7114
void Shear::ctor_1()
{
    uStackFrame __("Fuse.Shear", ".ctor()");
    ctor_();
}

// public float2 get_Degrees() [instance] :7160
::g::Uno::Float2 Shear::Degrees()
{
    uStackFrame __("Fuse.Shear", "get_Degrees()");
    return ::g::Uno::Float2__New2(DegreesX(), DegreesY());
}

// public void set_Degrees(float2 value) [instance] :7161
void Shear::Degrees(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Shear", "set_Degrees(float2)");
    Vector(::g::Uno::Float2__New2(::g::Uno::Math::DegreesToRadians1(value.X), ::g::Uno::Math::DegreesToRadians1(value.Y)));
}

// public float get_DegreesX() [instance] :7132
float Shear::DegreesX()
{
    uStackFrame __("Fuse.Shear", "get_DegreesX()");
    return _vector.X;
}

// public void set_DegreesX(float value) [instance] :7133
void Shear::DegreesX(float value)
{
    uStackFrame __("Fuse.Shear", "set_DegreesX(float)");
    float r = ::g::Uno::Math::DegreesToRadians1(value);

    if (_vector.X != r)
    {
        _vector.X = r;
        OnMatrixChanged();
    }
}

// public float get_DegreesY() [instance] :7146
float Shear::DegreesY()
{
    uStackFrame __("Fuse.Shear", "get_DegreesY()");
    return _vector.Y;
}

// public void set_DegreesY(float value) [instance] :7147
void Shear::DegreesY(float value)
{
    uStackFrame __("Fuse.Shear", "set_DegreesY(float)");
    float r = ::g::Uno::Math::DegreesToRadians1(value);

    if (_vector.Y != r)
    {
        _vector.Y = r;
        OnMatrixChanged();
    }
}

// public float2 get_Vector() [instance] :7119
::g::Uno::Float2 Shear::Vector()
{
    uStackFrame __("Fuse.Shear", "get_Vector()");
    return _vector;
}

// public void set_Vector(float2 value) [instance] :7120
void Shear::Vector(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Shear", "set_Vector(float2)");

    if (::g::Uno::Float2__op_Inequality(_vector, value))
    {
        _vector = value;
        OnMatrixChanged();
    }
}

// public generated Shear New() [static] :7114
Shear* Shear::New1()
{
    Shear* obj1 = (Shear*)uNew(Shear_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#51
// -------------------------------------------------------

// private sealed class TranslationModes.SizeMode :7262
// {
TranslationModes__SizeMode_type* TranslationModes__SizeMode_typeof()
{
    static uSStrong<TranslationModes__SizeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__SizeMode);
    options.TypeSize = sizeof(TranslationModes__SizeMode_type);
    type = (TranslationModes__SizeMode_type*)uClassType::New("Fuse.TranslationModes.SizeMode", options);
    type->fp_ctor_ = (void*)TranslationModes__SizeMode__New1_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))TranslationModes__SizeMode__GetAbsVector_fn;
    type->interface1.fp_get_Flags = (void(*)(uObject*, int*))TranslationModes__SizeMode__get_Flags_fn;
    ::TYPES[90] = ::g::Fuse::Translation_typeof();
    ::TYPES[110] = ::g::Fuse::Transform_typeof();
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(TranslationModes__SizeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(TranslationModes__SizeMode_type, interface1));
    return type;
}

// public generated SizeMode() :7262
void TranslationModes__SizeMode__ctor__fn(TranslationModes__SizeMode* __this)
{
    __this->ctor_();
}

// public Fuse.TransformModeFlags get_Flags() :7265
void TranslationModes__SizeMode__get_Flags_fn(TranslationModes__SizeMode* __this, int* __retval)
{
    *__retval = __this->Flags();
}

// public float3 GetAbsVector(Fuse.Translation t) :7264
void TranslationModes__SizeMode__GetAbsVector_fn(TranslationModes__SizeMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetAbsVector(t);
}

// public generated SizeMode New() :7262
void TranslationModes__SizeMode__New1_fn(TranslationModes__SizeMode** __retval)
{
    *__retval = TranslationModes__SizeMode::New1();
}

// public generated SizeMode() [instance] :7262
void TranslationModes__SizeMode::ctor_()
{
}

// public Fuse.TransformModeFlags get_Flags() [instance] :7265
int TranslationModes__SizeMode::Flags()
{
    uStackFrame __("Fuse.TranslationModes.SizeMode", "get_Flags()");
    return 1;
}

// public float3 GetAbsVector(Fuse.Translation t) [instance] :7264
::g::Uno::Float3 TranslationModes__SizeMode::GetAbsVector(::g::Fuse::Translation* t)
{
    uStackFrame __("Fuse.TranslationModes.SizeMode", "GetAbsVector(Fuse.Translation)");
    return ::g::Fuse::TranslationModes::RelativeToSize(uPtr(t)->Vector(), uPtr(t)->RelativeNode());
}

// public generated SizeMode New() [static] :7262
TranslationModes__SizeMode* TranslationModes__SizeMode::New1()
{
    TranslationModes__SizeMode* obj1 = (TranslationModes__SizeMode*)uNew(TranslationModes__SizeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#52
// -------------------------------------------------------

// internal sealed class Stage :7521
// {
uType* Stage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(Stage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Stage", options);
    ::TYPES[163] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::UpdateListener_typeof());
    ::TYPES[164] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof());
    ::TYPES[165] = ::g::Fuse::UpdateListener_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Stage, HasListenersRemoved), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::UpdateListener_typeof()), offsetof(::g::Fuse::Stage, Listeners), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::UpdateListener_typeof()), offsetof(::g::Fuse::Stage, Onces), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::UpdateListener_typeof()), offsetof(::g::Fuse::Stage, OncesPending), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof()), offsetof(::g::Fuse::Stage, PhaseDeferredActions), 0,
        ::g::Fuse::UpdateStage_typeof(), offsetof(::g::Fuse::Stage, UpdateStage), 0);
    return type;
}

// public Stage(Fuse.UpdateStage _updateStage) :7532
void Stage__ctor__fn(Stage* __this, int* _updateStage)
{
    __this->ctor_(*_updateStage);
}

// public void Insert(Uno.Collections.List<Fuse.UpdateListener> list, Fuse.UpdateListener us) :7538
void Stage__Insert_fn(Stage* __this, ::g::Uno::Collections::List* list, ::g::Fuse::UpdateListener* us)
{
    __this->Insert(list, us);
}

// public Stage New(Fuse.UpdateStage _updateStage) :7532
void Stage__New1_fn(int* _updateStage, Stage** __retval)
{
    *__retval = Stage::New1(*_updateStage);
}

// public Stage(Fuse.UpdateStage _updateStage) [instance] :7532
void Stage::ctor_(int _updateStage)
{
    uStackFrame __("Fuse.Stage", ".ctor(Fuse.UpdateStage)");
    Listeners = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[163/*Uno.Collections.List<Fuse.UpdateListener>*/]));
    Onces = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[163/*Uno.Collections.List<Fuse.UpdateListener>*/]));
    OncesPending = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[163/*Uno.Collections.List<Fuse.UpdateListener>*/]));
    PhaseDeferredActions = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[164/*Uno.Collections.List<Uno.Action>*/]));
    UpdateStage = _updateStage;
}

// public void Insert(Uno.Collections.List<Fuse.UpdateListener> list, Fuse.UpdateListener us) [instance] :7538
void Stage::Insert(::g::Uno::Collections::List* list, ::g::Fuse::UpdateListener* us)
{
    uStackFrame __("Fuse.Stage", "Insert(Uno.Collections.List<Fuse.UpdateListener>,Fuse.UpdateListener)");
    ::g::Fuse::UpdateListener* ret2;

    for (int i = uPtr(list)->Count(); i > 0; --i)
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i - 1), &ret2), ret2))->sequence <= uPtr(us)->sequence)
        {
            ::g::Uno::Collections::List__Insert_fn(uPtr(list), uCRef<int>(i), us);
            return;
        }

    ::g::Uno::Collections::List__Insert_fn(list, uCRef<int>(0), us);
}

// public Stage New(Fuse.UpdateStage _updateStage) [static] :7532
Stage* Stage::New1(int _updateStage)
{
    Stage* obj1 = (Stage*)uNew(Stage_typeof());
    obj1->ctor_(_updateStage);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#47
// -------------------------------------------------------

// public class Style :6665
// {
Style_type* Style_typeof()
{
    static uSStrong<Style_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Style);
    options.TypeSize = sizeof(Style_type);
    type = (Style_type*)uClassType::New("Fuse.Style", options);
    type->fp_ctor_ = (void*)Style__New1_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))Style__Apply_fn;
    ::TYPES[166] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::ITemplate_typeof());
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[167] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::ITemplate_typeof());
    ::TYPES[134] = ::g::Uno::UX::Resource_typeof();
    ::TYPES[26] = ::g::Uno::Delegate_typeof();
    ::TYPES[72] = ::g::Uno::Action_typeof();
    ::TYPES[138] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof());
    ::TYPES[139] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Resource_typeof());
    ::TYPES[121] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    ::TYPES[168] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(Style_typeof());
    ::TYPES[146] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Uno::UX::Resource_typeof());
    ::TYPES[147] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Resource_typeof());
    ::TYPES[112] = ::g::Uno::Collections::IList_typeof()->MakeType(Style_typeof());
    ::TYPES[169] = ::g::Uno::Collections::List_typeof()->MakeType(Style_typeof());
    ::TYPES[170] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Uno::UX::ITemplate_typeof());
    ::TYPES[171] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::ITemplate_typeof());
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(Style_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Resource_typeof()), offsetof(::g::Fuse::Style, _resources), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(Style_typeof()), offsetof(::g::Fuse::Style, _styles), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::ITemplate_typeof()), offsetof(::g::Fuse::Style, _templates), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Style, AddedByStyle), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Style, TemplatesChanged1), 0);
    type->Reflection.SetFunctions(6,
        new uFunction("Apply", NULL, (void*)Style__Apply_fn, 0, false, ::g::Uno::Bool_typeof(), 1, uObject_typeof()),
        new uFunction("get_HasResources", NULL, (void*)Style__get_HasResources_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Style__New1_fn, 0, true, Style_typeof(), 0),
        new uFunction("get_Resources", NULL, (void*)Style__get_Resources_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Resource_typeof()), 0),
        new uFunction("get_Templates", NULL, (void*)Style__get_Templates_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::ITemplate_typeof()), 0),
        new uFunction("TryGetResource", NULL, (void*)Style__TryGetResource_fn, 0, false, ::g::Uno::Bool_typeof(), 3, ::g::Uno::String_typeof(), ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof()), uObject_typeof()->ByRef()));
    return type;
}

// public generated Style() :6665
void Style__ctor__fn(Style* __this)
{
    __this->ctor_();
}

// public bool Apply(object target) :6718
void Style__Apply_fn(Style* __this, uObject* target, bool* __retval)
{
    *__retval = __this->Apply(target);
}

// public bool get_HasResources() :6731
void Style__get_HasResources_fn(Style* __this, bool* __retval)
{
    *__retval = __this->HasResources();
}

// public generated Style New() :6665
void Style__New1_fn(Style** __retval)
{
    *__retval = Style::New1();
}

// private void OnResourceChanged(Uno.UX.Resource r) :6774
void Style__OnResourceChanged_fn(Style* __this, ::g::Uno::UX::Resource* r)
{
    __this->OnResourceChanged(r);
}

// private void OnTemplateAdded(Uno.UX.ITemplate tpl) :6693
void Style__OnTemplateAdded_fn(Style* __this, uObject* tpl)
{
    __this->OnTemplateAdded(tpl);
}

// private void OnTemplateRemoved(Uno.UX.ITemplate tpl) :6701
void Style__OnTemplateRemoved_fn(Style* __this, uObject* tpl)
{
    __this->OnTemplateRemoved(tpl);
}

// private void OnTemplatesChanged() :6708
void Style__OnTemplatesChanged_fn(Style* __this)
{
    __this->OnTemplatesChanged();
}

// public Uno.Collections.IList<Uno.UX.Resource> get_Resources() :6736
void Style__get_Resources_fn(Style* __this, uObject** __retval)
{
    *__retval = __this->Resources();
}

// private Uno.Collections.IList<Fuse.Style> get_Styles() :6685
void Style__get_Styles_fn(Style* __this, uObject** __retval)
{
    *__retval = __this->Styles();
}

// public Uno.Collections.IList<Uno.UX.ITemplate> get_Templates() :6674
void Style__get_Templates_fn(Style* __this, uObject** __retval)
{
    *__retval = __this->Templates();
}

// internal generated void add_TemplatesChanged(Uno.Action value) :6667
void Style__add_TemplatesChanged_fn(Style* __this, uDelegate* value)
{
    __this->add_TemplatesChanged(value);
}

// internal generated void remove_TemplatesChanged(Uno.Action value) :6667
void Style__remove_TemplatesChanged_fn(Style* __this, uDelegate* value)
{
    __this->remove_TemplatesChanged(value);
}

// public bool TryGetResource(string key, Uno.Predicate<object> acceptor, object& resource) :6745
void Style__TryGetResource_fn(Style* __this, uString* key, uDelegate* acceptor, uObject** resource, bool* __retval)
{
    *__retval = __this->TryGetResource(key, acceptor, resource);
}

// public generated Style() [instance] :6665
void Style::ctor_()
{
}

// public bool Apply(object target) [instance] :6718
bool Style::Apply(uObject* target)
{
    uStackFrame __("Fuse.Style", "Apply(object)");
    uObject* ret5;

    if (_templates != NULL)

        for (int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_templates), ::TYPES[166/*Uno.Collections.ICollection<Uno.UX.ITemplate>*/])); (i--) > 0; )
            if (!::g::Uno::UX::ITemplate::Apply(uInterface(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_templates), ::TYPES[167/*Uno.Collections.IList<Uno.UX.ITemplate>*/]), uCRef<int>(i), &ret5), ret5)), ::g::Uno::UX::ITemplate_typeof()), target))
                return false;

    return true;
}

// public bool get_HasResources() [instance] :6731
bool Style::HasResources()
{
    uStackFrame __("Fuse.Style", "get_HasResources()");
    return (_resources != NULL) && (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_resources), ::TYPES[138/*Uno.Collections.ICollection<Uno.UX.Resource>*/])) > 0);
}

// private void OnResourceChanged(Uno.UX.Resource r) [instance] :6774
void Style::OnResourceChanged(::g::Uno::UX::Resource* r)
{
    uStackFrame __("Fuse.Style", "OnResourceChanged(Uno.UX.Resource)");
    ::g::Fuse::Resources::ResourceRegistry::NotifyResourceChanged(uPtr(r)->Key());
}

// private void OnTemplateAdded(Uno.UX.ITemplate tpl) [instance] :6693
void Style::OnTemplateAdded(uObject* tpl)
{
    uStackFrame __("Fuse.Style", "OnTemplateAdded(Uno.UX.ITemplate)");
    Style* s = uAs<Style*>(tpl, Style_typeof());

    if (s != NULL)
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Styles()), ::TYPES[111/*Uno.Collections.ICollection<Fuse.Style>*/]), s);

    OnTemplatesChanged();
}

// private void OnTemplateRemoved(Uno.UX.ITemplate tpl) [instance] :6701
void Style::OnTemplateRemoved(uObject* tpl)
{
    uStackFrame __("Fuse.Style", "OnTemplateRemoved(Uno.UX.ITemplate)");
    bool ret6;
    Style* s = uAs<Style*>(tpl, Style_typeof());

    if (s != NULL)
        ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(Styles()), ::TYPES[111/*Uno.Collections.ICollection<Fuse.Style>*/]), s, &ret6);
}

// private void OnTemplatesChanged() [instance] :6708
void Style::OnTemplatesChanged()
{
    uStackFrame __("Fuse.Style", "OnTemplatesChanged()");

    if (::g::Uno::Delegate::op_Inequality(TemplatesChanged1, NULL))
        uPtr(TemplatesChanged1)->InvokeVoid();
}

// public Uno.Collections.IList<Uno.UX.Resource> get_Resources() [instance] :6736
uObject* Style::Resources()
{
    uStackFrame __("Fuse.Style", "get_Resources()");

    if (_resources == NULL)
        _resources = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[146/*Uno.Collections.ObservableList<Uno.UX.Resource>*/], uDelegate::New(::TYPES[147/*Uno.Action<Uno.UX.Resource>*/], (void*)Style__OnResourceChanged_fn, this), uDelegate::New(::TYPES[147/*Uno.Action<Uno.UX.Resource>*/], (void*)Style__OnResourceChanged_fn, this)));

    return _resources;
}

// private Uno.Collections.IList<Fuse.Style> get_Styles() [instance] :6685
uObject* Style::Styles()
{
    uStackFrame __("Fuse.Style", "get_Styles()");
    uObject* ind3 = _styles;
    return (ind3 != NULL) ? ind3 : (uObject*)(_styles = (uObject*)((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[169/*Uno.Collections.List<Fuse.Style>*/])));
}

// public Uno.Collections.IList<Uno.UX.ITemplate> get_Templates() [instance] :6674
uObject* Style::Templates()
{
    uStackFrame __("Fuse.Style", "get_Templates()");
    uObject* ind2 = _templates;
    return (ind2 != NULL) ? ind2 : (uObject*)(_templates = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[170/*Uno.Collections.ObservableList<Uno.UX.ITemplate>*/], uDelegate::New(::TYPES[171/*Uno.Action<Uno.UX.ITemplate>*/], (void*)Style__OnTemplateAdded_fn, this), uDelegate::New(::TYPES[171/*Uno.Action<Uno.UX.ITemplate>*/], (void*)Style__OnTemplateRemoved_fn, this))));
}

// internal generated void add_TemplatesChanged(Uno.Action value) [instance] :6667
void Style::add_TemplatesChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Style", "add_TemplatesChanged(Uno.Action)");
    TemplatesChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(TemplatesChanged1, value), ::TYPES[72/*Uno.Action*/]);
}

// internal generated void remove_TemplatesChanged(Uno.Action value) [instance] :6667
void Style::remove_TemplatesChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Style", "remove_TemplatesChanged(Uno.Action)");
    TemplatesChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(TemplatesChanged1, value), ::TYPES[72/*Uno.Action*/]);
}

// public bool TryGetResource(string key, Uno.Predicate<object> acceptor, object& resource) [instance] :6745
bool Style::TryGetResource(uString* key, uDelegate* acceptor, uObject** resource)
{
    uStackFrame __("Fuse.Style", "TryGetResource(string,Uno.Predicate<object>,object&)");
    ::g::Uno::UX::Resource* ret7;
    bool ret8;
    Style* ret9;

    if (HasResources())
    {
        uObject* resources = Resources();

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(resources), ::TYPES[138/*Uno.Collections.ICollection<Uno.UX.Resource>*/])); i++)
        {
            ::g::Uno::UX::Resource* r = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(resources), ::TYPES[139/*Uno.Collections.IList<Uno.UX.Resource>*/]), uCRef<int>(i), &ret7), ret7);

            if (::g::Uno::String::op_Equality(uPtr(r)->Key(), key) && (::g::Uno::Delegate::op_Equality(acceptor, NULL) || (uPtr(acceptor)->Invoke(&ret8, 1, (uObject*)uPtr(r)->Value()), ret8)))
            {
                *resource = uPtr(r)->Value();
                return true;
            }
        }
    }

    if (_styles != NULL)

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_styles), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(Style_typeof()))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            Style* s = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[168/*Uno.Collections.IEnumerator<Fuse.Style>*/]), &ret9), ret9);

            if (uPtr(s)->TryGetResource(key, acceptor, resource))
                return true;
        }

    *resource = NULL;
    return false;
}

// public generated Style New() [static] :6665
Style* Style::New1()
{
    Style* obj4 = (Style*)uNew(Style_typeof());
    obj4->ctor_();
    return obj4;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#46
// -------------------------------------------------------

// public abstract class StyleProperty :6409
// {
StyleProperty_type* StyleProperty_typeof()
{
    static uSStrong<StyleProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(StyleProperty);
    options.TypeSize = sizeof(StyleProperty_type);
    type = (StyleProperty_type*)uClassType::New("Fuse.StyleProperty", options);
    ::TYPES[172] = ::g::Uno::Collections::List_typeof()->MakeType(StyleProperty_typeof());
    type->SetFields(0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::StyleProperty::_propertyEnum_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(StyleProperty_typeof()), (uintptr_t)&::g::Fuse::StyleProperty::All_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("HasValueFor", NULL, NULL, offsetof(StyleProperty_type, fp_HasValueFor), false, ::g::Uno::Bool_typeof(), 1, uObject_typeof()),
        new uFunction("ResetAll", NULL, (void*)StyleProperty__ResetAll_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("ResetAllStyle", NULL, (void*)StyleProperty__ResetAllStyle_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()));
    return type;
}

// internal StyleProperty() :6437
void StyleProperty__ctor__fn(StyleProperty* __this)
{
    __this->ctor_();
}

// public static void ResetAll(Fuse.Node n) :6415
void StyleProperty__ResetAll_fn(::g::Fuse::Node* n)
{
    StyleProperty::ResetAll(n);
}

// public static void ResetAllStyle(Fuse.Node n) :6424
void StyleProperty__ResetAllStyle_fn(::g::Fuse::Node* n)
{
    StyleProperty::ResetAllStyle(n);
}

int StyleProperty::_propertyEnum_;
uSStrong< ::g::Uno::Collections::List*> StyleProperty::All_;

// internal StyleProperty() [instance] :6437
void StyleProperty::ctor_()
{
    uStackFrame __("Fuse.StyleProperty", ".ctor()");

    if (StyleProperty::All() == NULL)
        StyleProperty::All() = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[172/*Uno.Collections.List<Fuse.StyleProperty>*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr(StyleProperty::All()), this);
}

// public static void ResetAll(Fuse.Node n) [static] :6415
void StyleProperty::ResetAll(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.StyleProperty", "ResetAll(Fuse.Node)");
    StyleProperty* ret1;

    if (StyleProperty::All() != NULL)

        for (int i = 0; i < uPtr(StyleProperty::All())->Count(); i++)
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(StyleProperty::All()), uCRef<int>(i), &ret1), ret1))->ResetFor(n);
}

// public static void ResetAllStyle(Fuse.Node n) [static] :6424
void StyleProperty::ResetAllStyle(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.StyleProperty", "ResetAllStyle(Fuse.Node)");
    StyleProperty* ret2;

    if (StyleProperty::All() != NULL)

        for (int i = 0; i < uPtr(StyleProperty::All())->Count(); i++)
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(StyleProperty::All()), uCRef<int>(i), &ret2), ret2))->ResetStyleFor(n);
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#46
// -------------------------------------------------------

// public sealed class StyleProperty<TOwner, T> :6445
// {
::g::Fuse::StyleProperty_type* StyleProperty1_typeof()
{
    static uSStrong< ::g::Fuse::StyleProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.GenericCount = 2;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(StyleProperty1);
    options.TypeSize = sizeof(::g::Fuse::StyleProperty_type);
    type = (::g::Fuse::StyleProperty_type*)uClassType::New("Fuse.StyleProperty`2", options);
    type->SetBase(::g::Fuse::StyleProperty_typeof());
    type->fp_HasValueFor = (void(*)(::g::Fuse::StyleProperty*, uObject*, bool*))StyleProperty1__HasValueFor_fn;
    type->fp_ResetFor = (void(*)(::g::Fuse::StyleProperty*, ::g::Fuse::Node*))StyleProperty1__ResetFor_fn;
    type->fp_ResetStyleFor = (void(*)(::g::Fuse::StyleProperty*, ::g::Fuse::Node*))StyleProperty1__ResetStyleFor_fn;
    ::STRINGS[63] = uString::Const("Style property - must provide getter and setter as a pair");
    ::TYPES[173] = ::g::Fuse::StyleProperty_typeof();
    ::TYPES[26] = ::g::Uno::Delegate_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[174] = ::g::Uno::Func1_typeof();
    ::TYPES[32] = ::g::Uno::Int_typeof();
    ::TYPES[175] = ::g::Uno::Action1_typeof();
    ::TYPES[156] = ::g::Uno::Action2_typeof();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    type->SetPrecalc(
        ::TYPES[174/*Uno.Func`2*/]->MakeType(type->T(0), type->T(1)),
        ::TYPES[175/*Uno.Action`1*/]->MakeType(type->T(0)),
        ::TYPES[156/*Uno.Action`2*/]->MakeType(type->T(0), type->T(1)));
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::StyleProperty1, _changedCallback), 0,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Fuse::StyleProperty1, _getter), 0,
        ::g::Fuse::PropertyHandle_typeof(), offsetof(::g::Fuse::StyleProperty1, _handle), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::StyleProperty1, _id), 0,
        ::g::Uno::Action2_typeof()->MakeType(type->T(0), type->T(1)), offsetof(::g::Fuse::StyleProperty1, _setter), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("get_DefaultValue", NULL, (void*)StyleProperty1__get_DefaultValue_fn, 0, false, type->T(1), 0),
        new uFunction("Get", NULL, (void*)StyleProperty1__Get_fn, 0, false, type->T(1), 1, type->T(0)),
        new uFunction("HasLocalValue", NULL, (void*)StyleProperty1__HasLocalValue_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("HasValue", NULL, (void*)StyleProperty1__HasValue_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction(".ctor", type, (void*)StyleProperty1__New1_fn, 0, true, type, 2, type->T(1), ::g::Uno::Action1_typeof()->MakeType(type->T(0))),
        new uFunction(".ctor", type, (void*)StyleProperty1__New2_fn, 0, true, type, 4, type->T(1), ::g::Uno::Action1_typeof()->MakeType(type->T(0)), ::g::Uno::Action2_typeof()->MakeType(type->T(0), type->T(1)), ::g::Uno::Func1_typeof()->MakeType(type->T(0), type->T(1))),
        new uFunction("Reset", NULL, (void*)StyleProperty1__Reset_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("ResetStyle", NULL, (void*)StyleProperty1__ResetStyle_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("Set", NULL, (void*)StyleProperty1__Set_fn, 0, false, ::g::Uno::Bool_typeof(), 2, type->T(0), type->T(1)),
        new uFunction("SetLocalState", NULL, (void*)StyleProperty1__SetLocalState_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("SetStyle", NULL, (void*)StyleProperty1__SetStyle_fn, 0, false, ::g::Uno::Bool_typeof(), 2, type->T(0), type->T(1)),
        new uFunction("WriteValue", NULL, (void*)StyleProperty1__WriteValue_fn, 0, false, uVoid_typeof(), 3, type->T(0), type->T(1), ::g::Fuse::PropertyState_typeof()));
    return type;
}

// public StyleProperty(T defaultValue, Uno.Action<TOwner> changedCallback) :6457
void StyleProperty1__ctor_1_fn(StyleProperty1* __this, void* defaultValue, uDelegate* changedCallback)
{
    uType* __types[] = {
        __this->__type->T(1),
    };
    uStackFrame __("Fuse.StyleProperty`2", ".ctor(T,Uno.Action<TOwner>)");
    __this->_handle = ::g::Fuse::Properties::CreateHandle();
    __this->ctor_();
    __this->_id = (::g::Fuse::StyleProperty::_propertyEnum()++);
    __this->_defaultValue() = defaultValue;
    __this->_changedCallback = changedCallback;
}

// public StyleProperty(T defaultValue, Uno.Action<TOwner> changedCallback, Uno.Action<TOwner, T> setter, Uno.Func<TOwner, T> getter) :6466
void StyleProperty1__ctor_2_fn(StyleProperty1* __this, void* defaultValue, uDelegate* changedCallback, uDelegate* setter, uDelegate* getter)
{
    uType* __types[] = {
        __this->__type->T(1),
    };
    uStackFrame __("Fuse.StyleProperty`2", ".ctor(T,Uno.Action<TOwner>,Uno.Action<TOwner, T>,Uno.Func<TOwner, T>)");
    __this->_handle = ::g::Fuse::Properties::CreateHandle();
    StyleProperty1__ctor_1_fn(__this, defaultValue, changedCallback);

    if (::g::Uno::Delegate::op_Equality(__this->_setter, NULL) != ::g::Uno::Delegate::op_Equality(__this->_getter, NULL))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[63/*"Style prope...*/]));

    __this->_setter = setter;
    __this->_getter = getter;
}

// public T get_DefaultValue() :6448
void StyleProperty1__get_DefaultValue_fn(StyleProperty1* __this, uTRef __retval)
{
    uStackFrame __("Fuse.StyleProperty`2", "get_DefaultValue()");
    return __retval.Store(__this->_defaultValue()), void();
}

// public T Get(TOwner owner) :6499
void StyleProperty1__Get_fn(StyleProperty1* __this, void* owner, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->T(1),
        __this->__type->Precalced(0/*Uno.Func<TOwner, T>*/),
    };
    uStackFrame __("Fuse.StyleProperty`2", "Get(TOwner)");
    uT ret3(__types[1], U_ALLOCA(__types[1]->ValueSize));
    ;
    ::g::Fuse::Node* n = uCast< ::g::Fuse::Node*>(uBoxPtr(__types[0], owner), ::TYPES[0/*Fuse.Node*/]);

    if (::g::Uno::Delegate::op_Inequality(__this->_getter, NULL))
        return __retval.Store((uPtr(__this->_getter)->Invoke(&ret3, 1, owner), ret3)), void();
    else
    {
        if (uPtr(n)->GetPropertyState(__this->_id) == 0)
            return __retval.Store(__this->_defaultValue()), void();
        else
        {
            uObject* res;
            uPtr(uPtr(n)->Properties())->TryGet(__this->_handle, &res);
            return __retval.Store(__types[1], uUnboxAny(__types[1], res)), void();
        }
    }
}

// public bool HasLocalValue(TOwner owner) :6535
void StyleProperty1__HasLocalValue_fn(StyleProperty1* __this, void* owner, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.StyleProperty`2", "HasLocalValue(TOwner)");
    ::g::Fuse::Node* n = uCast< ::g::Fuse::Node*>(uBoxPtr(__types[0], owner), ::TYPES[0/*Fuse.Node*/]);
    return *__retval = n->GetPropertyState(__this->_id) == 2, void();
}

// public bool HasValue(TOwner owner) :6493
void StyleProperty1__HasValue_fn(StyleProperty1* __this, void* owner, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.StyleProperty`2", "HasValue(TOwner)");
    ::g::Fuse::Node* n = uCast< ::g::Fuse::Node*>(uBoxPtr(__types[0], owner), ::TYPES[0/*Fuse.Node*/]);
    return *__retval = n->GetPropertyState(__this->_id) != 0, void();
}

// public override sealed bool HasValueFor(object owner) :6487
void StyleProperty1__HasValueFor_fn(StyleProperty1* __this, uObject* owner, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.StyleProperty`2", "HasValueFor(object)");
    bool ret4;

    if (uIs(owner, __types[0]))
        return *__retval = (StyleProperty1__HasValue_fn(__this, uUnboxAny(__types[0], owner), &ret4), ret4), void();
    else
        return *__retval = false, void();
}

// private bool IsEqual(T value, T oldValue) :6528
void StyleProperty1__IsEqual_fn(StyleProperty1* __this, void* value, void* oldValue, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(1),
    };
    uStackFrame __("Fuse.StyleProperty`2", "IsEqual(T,T)");

    if (uBoxPtr(__types[0], value) == uBoxPtr(__types[0], oldValue))
        return *__retval = true, void();

    if (uBoxPtr(__types[0], value) == NULL)
        return *__retval = false, void();

    return *__retval = ::g::Uno::Object::Equals(uBoxPtr(__types[0], value, U_ALLOCA(__types[0]->ObjectSize)), uBoxPtr(__types[0], oldValue)), void();
}

// public StyleProperty New(T defaultValue, Uno.Action<TOwner> changedCallback) :6457
void StyleProperty1__New1_fn(uType* __type, void* defaultValue, uDelegate* changedCallback, StyleProperty1** __retval)
{
    uType* __types[] = {
        __type->T(1),
    };
    StyleProperty1* obj1 = (StyleProperty1*)uNew(__type);
    StyleProperty1__ctor_1_fn(obj1, defaultValue, changedCallback);
    return *__retval = obj1, void();
}

// public StyleProperty New(T defaultValue, Uno.Action<TOwner> changedCallback, Uno.Action<TOwner, T> setter, Uno.Func<TOwner, T> getter) :6466
void StyleProperty1__New2_fn(uType* __type, void* defaultValue, uDelegate* changedCallback, uDelegate* setter, uDelegate* getter, StyleProperty1** __retval)
{
    uType* __types[] = {
        __type->T(1),
    };
    StyleProperty1* obj2 = (StyleProperty1*)uNew(__type);
    StyleProperty1__ctor_2_fn(obj2, defaultValue, changedCallback, setter, getter);
    return *__retval = obj2, void();
}

// protected void OnChanged(TOwner owner) :6481
void StyleProperty1__OnChanged_fn(StyleProperty1* __this, void* owner)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(1/*Uno.Action<TOwner>*/),
    };
    uStackFrame __("Fuse.StyleProperty`2", "OnChanged(TOwner)");

    if (::g::Uno::Delegate::op_Inequality(__this->_changedCallback, NULL))
        uPtr(__this->_changedCallback)->InvokeVoid(owner);
}

// public bool Reset(TOwner owner) :6606
void StyleProperty1__Reset_fn(StyleProperty1* __this, void* owner, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(2/*Uno.Action<TOwner, T>*/),
        __this->__type->T(1),
    };
    uStackFrame __("Fuse.StyleProperty`2", "Reset(TOwner)");
    ::g::Fuse::Node* n = uCast< ::g::Fuse::Node*>(uBoxPtr(__types[0], owner), ::TYPES[0/*Fuse.Node*/]);
    int s = n->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::g::Uno::Delegate::op_Inequality(__this->_setter, NULL))
            uPtr(__this->_setter)->Invoke(2, owner, (void*)__this->_defaultValue());
        else
            uPtr(uPtr(n)->Properties())->Clear(__this->_handle);

        uPtr(n)->SetPropertyState(__this->_id, 0);
        StyleProperty1__OnChanged_fn(__this, owner);
        return *__retval = true, void();
    }

    return *__retval = false, void();
}

// internal override sealed void ResetFor(Fuse.Node n) :6638
void StyleProperty1__ResetFor_fn(StyleProperty1* __this, ::g::Fuse::Node* n)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.StyleProperty`2", "ResetFor(Fuse.Node)");
    bool ret5;

    if (uIs(n, __types[0]))
        StyleProperty1__Reset_fn(__this, uUnboxAny(__types[0], n), &ret5);
}

// public bool ResetStyle(TOwner owner) :6630
void StyleProperty1__ResetStyle_fn(StyleProperty1* __this, void* owner, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.StyleProperty`2", "ResetStyle(TOwner)");
    bool ret6;
    ::g::Fuse::Node* n = uCast< ::g::Fuse::Node*>(uBoxPtr(__types[0], owner), ::TYPES[0/*Fuse.Node*/]);
    int s = n->GetPropertyState(__this->_id);

    if (s == 1)
        return *__retval = (StyleProperty1__Reset_fn(__this, owner, &ret6), ret6), void();
    else
        return *__retval = false, void();
}

// internal override sealed void ResetStyleFor(Fuse.Node n) :6646
void StyleProperty1__ResetStyleFor_fn(StyleProperty1* __this, ::g::Fuse::Node* n)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.StyleProperty`2", "ResetStyleFor(Fuse.Node)");
    bool ret7;

    if (uIs(n, __types[0]))
        StyleProperty1__ResetStyle_fn(__this, uUnboxAny(__types[0], n), &ret7);
}

// public bool Set(TOwner owner, T value) :6557
void StyleProperty1__Set_fn(StyleProperty1* __this, void* owner, void* value, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->T(1),
        __this->__type->Precalced(2/*Uno.Action<TOwner, T>*/),
    };
    uStackFrame __("Fuse.StyleProperty`2", "Set(TOwner,T)");
    uT ret8(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT oldValue(__types[1], U_ALLOCA(__types[1]->ValueSize));
    ;
    bool ret9;
    bool ret10;
    ::g::Fuse::Node* n = uCast< ::g::Fuse::Node*>(uBoxPtr(__types[0], owner), ::TYPES[0/*Fuse.Node*/]);
    oldValue = (StyleProperty1__Get_fn(__this, owner, &ret8), ret8);

    if (!(StyleProperty1__HasLocalValue_fn(__this, owner, &ret9), ret9) || !(StyleProperty1__IsEqual_fn(__this, value, oldValue, &ret10), ret10))
    {
        if (::g::Uno::Delegate::op_Inequality(__this->_setter, NULL))
        {
            uPtr(__this->_setter)->Invoke(2, owner, value);
            uPtr(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            uPtr(uPtr(n)->Properties())->Set(__this->_handle, uBoxPtr(__types[1], value));
            n->SetPropertyState(__this->_id, 2);
        }

        StyleProperty1__OnChanged_fn(__this, owner);
        return *__retval = true, void();
    }

    return *__retval = false, void();
}

// public void SetLocalState(TOwner owner) :6522
void StyleProperty1__SetLocalState_fn(StyleProperty1* __this, void* owner)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.StyleProperty`2", "SetLocalState(TOwner)");
    ::g::Fuse::Node* n = uCast< ::g::Fuse::Node*>(uBoxPtr(__types[0], owner), ::TYPES[0/*Fuse.Node*/]);
    n->SetPropertyState(__this->_id, 2);
}

// public bool SetStyle(TOwner owner, T value) :6583
void StyleProperty1__SetStyle_fn(StyleProperty1* __this, void* owner, void* value, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->T(1),
        __this->__type->Precalced(2/*Uno.Action<TOwner, T>*/),
    };
    uStackFrame __("Fuse.StyleProperty`2", "SetStyle(TOwner,T)");
    bool ret11;
    ::g::Fuse::Node* n = uCast< ::g::Fuse::Node*>(uBoxPtr(__types[0], owner), ::TYPES[0/*Fuse.Node*/]);

    if (!(StyleProperty1__HasValue_fn(__this, owner, &ret11), ret11))
    {
        if (::g::Uno::Delegate::op_Inequality(__this->_setter, NULL))
        {
            uPtr(__this->_setter)->Invoke(2, owner, value);
            uPtr(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            uPtr(uPtr(n)->Properties())->Set(__this->_handle, uBoxPtr(__types[1], value));
            n->SetPropertyState(__this->_id, 1);
        }

        StyleProperty1__OnChanged_fn(__this, owner);
        return *__retval = true, void();
    }

    return *__retval = false, void();
}

// public void WriteValue(TOwner owner, T value, Fuse.PropertyState ps) :6541
void StyleProperty1__WriteValue_fn(StyleProperty1* __this, void* owner, void* value, int* ps)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->T(1),
        __this->__type->Precalced(2/*Uno.Action<TOwner, T>*/),
    };
    uStackFrame __("Fuse.StyleProperty`2", "WriteValue(TOwner,T,Fuse.PropertyState)");
    int ps_ = *ps;
    ::g::Fuse::Node* n = uCast< ::g::Fuse::Node*>(uBoxPtr(__types[0], owner), ::TYPES[0/*Fuse.Node*/]);

    if (::g::Uno::Delegate::op_Inequality(__this->_setter, NULL))
    {
        uPtr(__this->_setter)->Invoke(2, owner, value);
        uPtr(n)->SetPropertyState(__this->_id, ps_);
    }
    else
    {
        uPtr(uPtr(n)->Properties())->Set(__this->_handle, uBoxPtr(__types[1], value));
        n->SetPropertyState(__this->_id, ps_);
    }
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#47
// -------------------------------------------------------

// public abstract class Theme :6781
// {
::g::Fuse::Style_type* Theme_typeof()
{
    static uSStrong< ::g::Fuse::Style_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Theme);
    options.TypeSize = sizeof(::g::Fuse::Style_type);
    type = (::g::Fuse::Style_type*)uClassType::New("Fuse.Theme", options);
    type->SetBase(::g::Fuse::Style_typeof());
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Style__Apply_fn;
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Fuse::Style_type, interface0));
    type->SetFields(5,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Theme, RootMediator), 0);
    return type;
}

// protected Theme() :6790
void Theme__ctor_1_fn(Theme* __this)
{
    __this->ctor_1();
}

// protected Theme(Fuse.Node rootMediator) :6785
void Theme__ctor_2_fn(Theme* __this, ::g::Fuse::Node* rootMediator)
{
    __this->ctor_2(rootMediator);
}

// protected Theme() [instance] :6790
void Theme::ctor_1()
{
    uStackFrame __("Fuse.Theme", ".ctor()");
    ctor_();
}

// protected Theme(Fuse.Node rootMediator) [instance] :6785
void Theme::ctor_2(::g::Fuse::Node* rootMediator)
{
    uStackFrame __("Fuse.Theme", ".ctor(Fuse.Node)");
    ctor_();
    RootMediator = rootMediator;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#49
// -------------------------------------------------------

// public static class Time :6891
// {
uClassType* Time_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Time", options);
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[61] = ::g::Uno::Float_typeof();
    type->SetFields(0,
        ::g::Uno::Double_typeof(), (uintptr_t)&::g::Fuse::Time::_base_, uFieldFlagsStatic,
        ::g::Uno::Double_typeof(), (uintptr_t)&::g::Fuse::Time::_current_, uFieldFlagsStatic,
        ::g::Uno::Double_typeof(), (uintptr_t)&::g::Fuse::Time::_delta_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Time::_init_, uFieldFlagsStatic,
        ::g::Uno::Double_typeof(), (uintptr_t)&::g::Fuse::Time::_prev_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction("get_FrameInterval", NULL, (void*)Time__get_FrameInterval_fn, 0, true, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_FrameIntervalFloat", NULL, (void*)Time__get_FrameIntervalFloat_fn, 0, true, ::g::Uno::Float_typeof(), 0),
        new uFunction("get_FrameTime", NULL, (void*)Time__get_FrameTime_fn, 0, true, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_FrameTimeBase", NULL, (void*)Time__get_FrameTimeBase_fn, 0, true, ::g::Uno::Double_typeof(), 0));
    return type;
}

// public static double get_FrameInterval() :6929
void Time__get_FrameInterval_fn(double* __retval)
{
    *__retval = Time::FrameInterval();
}

// public static float get_FrameIntervalFloat() :6939
void Time__get_FrameIntervalFloat_fn(float* __retval)
{
    *__retval = Time::FrameIntervalFloat();
}

// public static double get_FrameTime() :6924
void Time__get_FrameTime_fn(double* __retval)
{
    *__retval = Time::FrameTime();
}

// public static double get_FrameTimeBase() :6934
void Time__get_FrameTimeBase_fn(double* __retval)
{
    *__retval = Time::FrameTimeBase();
}

// internal static void Init(double start) :6899
void Time__Init_fn(double* start)
{
    Time::Init(*start);
}

// internal static void Set(double current) :6908
void Time__Set_fn(double* current)
{
    Time::Set(*current);
}

double Time::_base_;
double Time::_current_;
double Time::_delta_;
bool Time::_init_;
double Time::_prev_;

// internal static void Init(double start) [static] :6899
void Time::Init(double start)
{
    uStackFrame __("Fuse.Time", "Init(double)");
    Time::_base() = start;
    Time::_current() = start;
    Time::_delta() = 0.0;
    Time::_prev() = start;
    Time::_init() = true;
}

// internal static void Set(double current) [static] :6908
void Time::Set(double current)
{
    uStackFrame __("Fuse.Time", "Set(double)");

    if (!Time::_init())
        Time::Init(current);
    else
    {
        Time::_delta() = (current - Time::_prev());
        Time::_current() = current;
        Time::_prev() = current;
    }
}

// public static double get_FrameInterval() [static] :6929
double Time::FrameInterval()
{
    uStackFrame __("Fuse.Time", "get_FrameInterval()");
    return Time::_delta();
}

// public static float get_FrameIntervalFloat() [static] :6939
float Time::FrameIntervalFloat()
{
    uStackFrame __("Fuse.Time", "get_FrameIntervalFloat()");
    return (float)Time::_delta();
}

// public static double get_FrameTime() [static] :6924
double Time::FrameTime()
{
    uStackFrame __("Fuse.Time", "get_FrameTime()");
    return Time::_current() - Time::_base();
}

// public static double get_FrameTimeBase() [static] :6934
double Time::FrameTimeBase()
{
    uStackFrame __("Fuse.Time", "get_FrameTimeBase()");
    return Time::_base();
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#48
// -------------------------------------------------------

// public sealed class Timer :6834
// {
uType* Timer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Timer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Timer", options);
    ::TYPES[72] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Timer, _callback), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Timer, _interval), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Timer, _once), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Timer, _running), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Timer, _startTime), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Wait", NULL, (void*)Timer__Wait_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Action_typeof()));
    return type;
}

// private Timer(double interval, Uno.Action callback) :6842
void Timer__ctor__fn(Timer* __this, double* interval, uDelegate* callback)
{
    __this->ctor_(*interval, callback);
}

// private Timer New(double interval, Uno.Action callback) :6842
void Timer__New1_fn(double* interval, uDelegate* callback, Timer** __retval)
{
    *__retval = Timer::New1(*interval, callback);
}

// private void Start() :6850
void Timer__Start_fn(Timer* __this)
{
    __this->Start();
}

// private void Stop() :6857
void Timer__Stop_fn(Timer* __this)
{
    __this->Stop();
}

// private void Update() :6863
void Timer__Update_fn(Timer* __this)
{
    __this->Update();
}

// public static void Wait(double duration, Uno.Action callback) :6877
void Timer__Wait_fn(double* duration, uDelegate* callback)
{
    Timer::Wait(*duration, callback);
}

// private Timer(double interval, Uno.Action callback) [instance] :6842
void Timer::ctor_(double interval, uDelegate* callback)
{
    uStackFrame __("Fuse.Timer", ".ctor(double,Uno.Action)");
    _callback = callback;
    _startTime = ::g::Uno::Diagnostics::Clock::GetSeconds();
    _interval = interval;
    _once = true;
}

// private void Start() [instance] :6850
void Timer::Start()
{
    uStackFrame __("Fuse.Timer", "Start()");
    _startTime = ::g::Uno::Diagnostics::Clock::GetSeconds();
    ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[72/*Uno.Action*/], (void*)Timer__Update_fn, this), 0);
    _running = true;
}

// private void Stop() [instance] :6857
void Timer::Stop()
{
    uStackFrame __("Fuse.Timer", "Stop()");
    _running = false;
    ::g::Fuse::UpdateManager::RemoveAction(uDelegate::New(::TYPES[72/*Uno.Action*/], (void*)Timer__Update_fn, this), 0);
}

// private void Update() [instance] :6863
void Timer::Update()
{
    uStackFrame __("Fuse.Timer", "Update()");
    double now = ::g::Uno::Diagnostics::Clock::GetSeconds();
    double time = now - _startTime;

    if (time > _interval)
    {
        uPtr(_callback)->InvokeVoid();

        if (_once)
            Stop();
        else
            _startTime = now;
    }
}

// private Timer New(double interval, Uno.Action callback) [static] :6842
Timer* Timer::New1(double interval, uDelegate* callback)
{
    Timer* obj1 = (Timer*)uNew(Timer_typeof());
    obj1->ctor_(interval, callback);
    return obj1;
}

// public static void Wait(double duration, Uno.Action callback) [static] :6877
void Timer::Wait(double duration, uDelegate* callback)
{
    uStackFrame __("Fuse.Timer", "Wait(double,Uno.Action)");
    Timer* t = Timer::New1(duration, callback);
    t->Start();
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#50
// -------------------------------------------------------

// public abstract class Transform :6951
// {
Transform_type* Transform_typeof()
{
    static uSStrong<Transform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Transform);
    options.TypeSize = sizeof(Transform_type);
    type = (Transform_type*)uClassType::New("Fuse.Transform", options);
    type->fp_OnAdded = Transform__OnAdded_fn;
    type->fp_OnRelativeNodeChanged = Transform__OnRelativeNodeChanged_fn;
    type->fp_OnRemoved = Transform__OnRemoved_fn;
    ::TYPES[26] = ::g::Uno::Delegate_typeof();
    ::TYPES[135] = ::g::Uno::Action1_typeof()->MakeType(Transform_typeof());
    type->SetFields(0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Transform, _relativeNode), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Transform, AddedByStyle), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Transform, Node), 0,
        ::g::Uno::Action1_typeof()->MakeType(Transform_typeof()), offsetof(::g::Fuse::Transform, MatrixChanged1), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("AppendTo", NULL, NULL, offsetof(Transform_type, fp_AppendTo), false, uVoid_typeof(), 2, ::g::Fuse::FastMatrix_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("get_IsFlat", NULL, NULL, offsetof(Transform_type, fp_get_IsFlat), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("PrependTo", NULL, NULL, offsetof(Transform_type, fp_PrependTo), false, uVoid_typeof(), 1, ::g::Fuse::FastMatrix_typeof()),
        new uFunction("get_RelativeNode", NULL, (void*)Transform__get_RelativeNode_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_RelativeNode", NULL, (void*)Transform__set_RelativeNode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()));
    return type;
}

// internal Transform() :7005
void Transform__ctor__fn(Transform* __this)
{
    __this->ctor_();
}

// internal void Added(Fuse.Node n) :6976
void Transform__Added_fn(Transform* __this, ::g::Fuse::Node* n)
{
    __this->Added(n);
}

// internal generated void add_MatrixChanged(Uno.Action<Fuse.Transform> value) :6994
void Transform__add_MatrixChanged_fn(Transform* __this, uDelegate* value)
{
    __this->add_MatrixChanged(value);
}

// internal generated void remove_MatrixChanged(Uno.Action<Fuse.Transform> value) :6994
void Transform__remove_MatrixChanged_fn(Transform* __this, uDelegate* value)
{
    __this->remove_MatrixChanged(value);
}

// protected virtual void OnAdded() :6988
void Transform__OnAdded_fn(Transform* __this)
{
}

// protected void OnMatrixChanged() :6996
void Transform__OnMatrixChanged_fn(Transform* __this)
{
    __this->OnMatrixChanged();
}

// protected virtual void OnRelativeNodeChanged() :6971
void Transform__OnRelativeNodeChanged_fn(Transform* __this)
{
    uStackFrame __("Fuse.Transform", "OnRelativeNodeChanged()");
    __this->OnMatrixChanged();
}

// protected virtual void OnRemoved() :6989
void Transform__OnRemoved_fn(Transform* __this)
{
}

// public Fuse.Node get_RelativeNode() :6960
void Transform__get_RelativeNode_fn(Transform* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->RelativeNode();
}

// public void set_RelativeNode(Fuse.Node value) :6961
void Transform__set_RelativeNode_fn(Transform* __this, ::g::Fuse::Node* value)
{
    __this->RelativeNode(value);
}

// internal void Removed(Fuse.Node n) :6982
void Transform__Removed_fn(Transform* __this, ::g::Fuse::Node* n)
{
    __this->Removed(n);
}

// internal Transform() [instance] :7005
void Transform::ctor_()
{
}

// internal void Added(Fuse.Node n) [instance] :6976
void Transform::Added(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Transform", "Added(Fuse.Node)");
    Node = n;
    OnAdded();
}

// internal generated void add_MatrixChanged(Uno.Action<Fuse.Transform> value) [instance] :6994
void Transform::add_MatrixChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Transform", "add_MatrixChanged(Uno.Action<Fuse.Transform>)");
    MatrixChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(MatrixChanged1, value), ::TYPES[135/*Uno.Action<Fuse.Transform>*/]);
}

// internal generated void remove_MatrixChanged(Uno.Action<Fuse.Transform> value) [instance] :6994
void Transform::remove_MatrixChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Transform", "remove_MatrixChanged(Uno.Action<Fuse.Transform>)");
    MatrixChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(MatrixChanged1, value), ::TYPES[135/*Uno.Action<Fuse.Transform>*/]);
}

// protected void OnMatrixChanged() [instance] :6996
void Transform::OnMatrixChanged()
{
    uStackFrame __("Fuse.Transform", "OnMatrixChanged()");

    if (::g::Uno::Delegate::op_Inequality(MatrixChanged1, NULL))
        uPtr(MatrixChanged1)->InvokeVoid(this);
}

// public Fuse.Node get_RelativeNode() [instance] :6960
::g::Fuse::Node* Transform::RelativeNode()
{
    uStackFrame __("Fuse.Transform", "get_RelativeNode()");
    ::g::Fuse::Node* ind1 = _relativeNode;
    return (ind1 != NULL) ? ind1 : (::g::Fuse::Node*)Node;
}

// public void set_RelativeNode(Fuse.Node value) [instance] :6961
void Transform::RelativeNode(::g::Fuse::Node* value)
{
    uStackFrame __("Fuse.Transform", "set_RelativeNode(Fuse.Node)");

    if (_relativeNode == value)
        return;

    _relativeNode = value;
    OnRelativeNodeChanged();
}

// internal void Removed(Fuse.Node n) [instance] :6982
void Transform::Removed(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Transform", "Removed(Fuse.Node)");
    OnRemoved();
    Node = NULL;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#51
// -------------------------------------------------------

// public enum TransformModeFlags :7231
uEnumType* TransformModeFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.TransformModeFlags", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "None", 0LL,
        "Size", 1LL,
        "ParentSize", 2LL,
        "Position", 4LL,
        "WorldTransform", 8LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#51
// -------------------------------------------------------

// public sealed class Translation :7293
// {
::g::Fuse::Transform_type* Translation_typeof()
{
    static uSStrong< ::g::Fuse::Transform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.ObjectSize = sizeof(Translation);
    options.TypeSize = sizeof(::g::Fuse::Transform_type);
    type = (::g::Fuse::Transform_type*)uClassType::New("Fuse.Translation", options);
    type->SetBase(::g::Fuse::Transform_typeof());
    type->fp_ctor_ = (void*)Translation__New1_fn;
    type->fp_AppendTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*))Translation__AppendTo_fn;
    type->fp_get_IsFlat = (void(*)(::g::Fuse::Transform*, bool*))Translation__get_IsFlat_fn;
    type->fp_OnAdded = (void(*)(::g::Fuse::Transform*))Translation__OnAdded_fn;
    type->fp_OnRelativeNodeChanged = (void(*)(::g::Fuse::Transform*))Translation__OnRelativeNodeChanged_fn;
    type->fp_OnRemoved = (void(*)(::g::Fuse::Transform*))Translation__OnRemoved_fn;
    type->fp_PrependTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*))Translation__PrependTo_fn;
    ::TYPES[176] = ::g::Fuse::TranslationModes_typeof();
    ::TYPES[127] = ::g::Uno::Float3_typeof();
    ::TYPES[110] = ::g::Fuse::Transform_typeof();
    ::TYPES[177] = ::g::Fuse::ITransformMode_typeof();
    ::TYPES[32] = ::g::Uno::Int_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[178] = ::g::Fuse::IActualPlacement_typeof();
    ::TYPES[179] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[21] = ::g::Uno::EventHandler_typeof();
    ::TYPES[77] = ::g::Uno::Float2_typeof();
    type->SetFields(4,
        ::g::Fuse::ITranslationMode_typeof(), offsetof(::g::Fuse::Translation, _relativeTo), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Translation, _rootedSubscribed), 0,
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Translation, _subscribed), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Translation, _x), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Translation, _y), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Translation, _z), 0);
    type->Reflection.SetFunctions(13,
        new uFunction(".ctor", NULL, (void*)Translation__New1_fn, 0, true, Translation_typeof(), 0),
        new uFunction("get_RelativeTo", NULL, (void*)Translation__get_RelativeTo_fn, 0, false, ::g::Fuse::ITranslationMode_typeof(), 0),
        new uFunction("set_RelativeTo", NULL, (void*)Translation__set_RelativeTo_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::ITranslationMode_typeof()),
        new uFunction("get_Vector", NULL, (void*)Translation__get_Vector_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("set_Vector", NULL, (void*)Translation__set_Vector_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("get_X", NULL, (void*)Translation__get_X_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_X", NULL, (void*)Translation__set_X_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_XY", NULL, (void*)Translation__get_XY_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_XY", NULL, (void*)Translation__set_XY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_Y", NULL, (void*)Translation__get_Y_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Y", NULL, (void*)Translation__set_Y_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Z", NULL, (void*)Translation__get_Z_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Z", NULL, (void*)Translation__set_Z_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}

// public generated Translation() :7293
void Translation__ctor_1_fn(Translation* __this)
{
    __this->ctor_1();
}

// public override sealed void AppendTo(Fuse.FastMatrix m, float weight) :7463
void Translation__AppendTo_fn(Translation* __this, ::g::Fuse::FastMatrix* m, float* weight)
{
    uStackFrame __("Fuse.Translation", "AppendTo(Fuse.FastMatrix,float)");
    float weight_ = *weight;
    ::g::Uno::Float3 v = ::g::Uno::Float3__op_Multiply1(::g::Fuse::ITranslationMode::GetAbsVector(uInterface(uPtr(__this->RelativeTo()), ::TYPES[180/*Fuse.ITranslationMode*/]), __this), weight_);
    uPtr(m)->AppendTranslation(v.X, v.Y, v.Z);
}

// private void CheckSubscription() :7326
void Translation__CheckSubscription_fn(Translation* __this)
{
    __this->CheckSubscription();
}

// public override sealed bool get_IsFlat() :7477
void Translation__get_IsFlat_fn(Translation* __this, bool* __retval)
{
    uStackFrame __("Fuse.Translation", "get_IsFlat()");
    return *__retval = ::g::Uno::Math::Abs1(__this->Z()) < 1e-05f, void();
}

// public generated Translation New() :7293
void Translation__New1_fn(Translation** __retval)
{
    *__retval = Translation::New1();
}

// protected override sealed void OnAdded() :7314
void Translation__OnAdded_fn(Translation* __this)
{
    uStackFrame __("Fuse.Translation", "OnAdded()");
    __this->CheckSubscription();
}

// private void OnPlaced(object sender, object args) :7380
void Translation__OnPlaced_fn(Translation* __this, uObject* sender, uObject* args)
{
    __this->OnPlaced(sender, args);
}

// protected override sealed void OnRelativeNodeChanged() :7309
void Translation__OnRelativeNodeChanged_fn(Translation* __this)
{
    uStackFrame __("Fuse.Translation", "OnRelativeNodeChanged()");
    __this->CheckSubscription();
}

// protected override sealed void OnRemoved() :7319
void Translation__OnRemoved_fn(Translation* __this)
{
    uStackFrame __("Fuse.Translation", "OnRemoved()");
    __this->CheckSubscription();
}

// private void OnRooted(object sender, object args) :7385
void Translation__OnRooted_fn(Translation* __this, uObject* sender, uObject* args)
{
    __this->OnRooted(sender, args);
}

// public override sealed void PrependTo(Fuse.FastMatrix m) :7469
void Translation__PrependTo_fn(Translation* __this, ::g::Fuse::FastMatrix* m)
{
    uStackFrame __("Fuse.Translation", "PrependTo(Fuse.FastMatrix)");
    ::g::Uno::Float3 v = ::g::Fuse::ITranslationMode::GetAbsVector(uInterface(uPtr(__this->RelativeTo()), ::TYPES[180/*Fuse.ITranslationMode*/]), __this);
    uPtr(m)->PrependTranslation(v.X, v.Y, v.Z);
}

// public Fuse.ITranslationMode get_RelativeTo() :7298
void Translation__get_RelativeTo_fn(Translation* __this, uObject** __retval)
{
    *__retval = __this->RelativeTo();
}

// public void set_RelativeTo(Fuse.ITranslationMode value) :7299
void Translation__set_RelativeTo_fn(Translation* __this, uObject* value)
{
    __this->RelativeTo(value);
}

// public float3 get_Vector() :7449
void Translation__get_Vector_fn(Translation* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->Vector();
}

// public void set_Vector(float3 value) :7450
void Translation__set_Vector_fn(Translation* __this, ::g::Uno::Float3* value)
{
    __this->Vector(*value);
}

// public float get_X() :7394
void Translation__get_X_fn(Translation* __this, float* __retval)
{
    *__retval = __this->X();
}

// public void set_X(float value) :7395
void Translation__set_X_fn(Translation* __this, float* value)
{
    __this->X(*value);
}

// public float2 get_XY() :7407
void Translation__get_XY_fn(Translation* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->XY();
}

// public void set_XY(float2 value) :7408
void Translation__set_XY_fn(Translation* __this, ::g::Uno::Float2* value)
{
    __this->XY(*value);
}

// public float get_Y() :7422
void Translation__get_Y_fn(Translation* __this, float* __retval)
{
    *__retval = __this->Y();
}

// public void set_Y(float value) :7423
void Translation__set_Y_fn(Translation* __this, float* value)
{
    __this->Y(*value);
}

// public float get_Z() :7436
void Translation__get_Z_fn(Translation* __this, float* __retval)
{
    *__retval = __this->Z();
}

// public void set_Z(float value) :7437
void Translation__set_Z_fn(Translation* __this, float* value)
{
    __this->Z(*value);
}

// public generated Translation() [instance] :7293
void Translation::ctor_1()
{
    uStackFrame __("Fuse.Translation", ".ctor()");
    _relativeTo = ::g::Fuse::TranslationModes::Local();
    ctor_();
}

// private void CheckSubscription() [instance] :7326
void Translation::CheckSubscription()
{
    uStackFrame __("Fuse.Translation", "CheckSubscription()");
    ::g::Fuse::Node* root = NULL;
    ::g::Fuse::Node* node = RelativeNode();
    int flags = ::g::Fuse::ITransformMode::Flags(uInterface(uPtr(RelativeTo()), ::TYPES[177/*Fuse.ITransformMode*/]));

    if (((flags & 2) == 2) && (node != NULL))
    {
        root = node;
        node = uAs< ::g::Fuse::Node*>(uPtr(node)->Parent(), ::TYPES[0/*Fuse.Node*/]);
    }
    else if ((flags & 1) == 1)
        ;
    else
        node = NULL;

    uObject* act = uAs<uObject*>(node, ::TYPES[178/*Fuse.IActualPlacement*/]);

    if (_subscribed != act)
    {
        if (_subscribed != NULL)
        {
            ::g::Fuse::IActualPlacement::remove_Placed(uInterface(uPtr(_subscribed), ::TYPES[178/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[179/*Fuse.PlacedHandler*/], (void*)Translation__OnPlaced_fn, this));
            _subscribed = NULL;
        }

        if (act != NULL)
        {
            ::g::Fuse::IActualPlacement::add_Placed(uInterface(uPtr(act), ::TYPES[178/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[179/*Fuse.PlacedHandler*/], (void*)Translation__OnPlaced_fn, this));
            _subscribed = act;
        }
    }

    if (root != _rootedSubscribed)
    {
        if (_rootedSubscribed != NULL)
        {
            uPtr(_rootedSubscribed)->remove_Rooted(uDelegate::New(::TYPES[21/*Uno.EventHandler*/], (void*)Translation__OnRooted_fn, this));
            _rootedSubscribed = NULL;
        }

        if (root != NULL)
        {
            uPtr(root)->add_Rooted(uDelegate::New(::TYPES[21/*Uno.EventHandler*/], (void*)Translation__OnRooted_fn, this));
            _rootedSubscribed = root;
        }
    }
}

// private void OnPlaced(object sender, object args) [instance] :7380
void Translation::OnPlaced(uObject* sender, uObject* args)
{
    uStackFrame __("Fuse.Translation", "OnPlaced(object,object)");
    OnMatrixChanged();
}

// private void OnRooted(object sender, object args) [instance] :7385
void Translation::OnRooted(uObject* sender, uObject* args)
{
    uStackFrame __("Fuse.Translation", "OnRooted(object,object)");
    CheckSubscription();
    OnMatrixChanged();
}

// public Fuse.ITranslationMode get_RelativeTo() [instance] :7298
uObject* Translation::RelativeTo()
{
    uStackFrame __("Fuse.Translation", "get_RelativeTo()");
    return _relativeTo;
}

// public void set_RelativeTo(Fuse.ITranslationMode value) [instance] :7299
void Translation::RelativeTo(uObject* value)
{
    uStackFrame __("Fuse.Translation", "set_RelativeTo(Fuse.ITranslationMode)");

    if (_relativeTo == value)
        return;

    _relativeTo = value;
    CheckSubscription();
}

// public float3 get_Vector() [instance] :7449
::g::Uno::Float3 Translation::Vector()
{
    uStackFrame __("Fuse.Translation", "get_Vector()");
    return ::g::Uno::Float3__New2(X(), Y(), Z());
}

// public void set_Vector(float3 value) [instance] :7450
void Translation::Vector(::g::Uno::Float3 value)
{
    uStackFrame __("Fuse.Translation", "set_Vector(float3)");

    if (((_x != value.X) || (_y != value.Y)) || (_z != value.Z))
    {
        _x = value.X;
        _y = value.Y;
        _z = value.Z;
        OnMatrixChanged();
    }
}

// public float get_X() [instance] :7394
float Translation::X()
{
    uStackFrame __("Fuse.Translation", "get_X()");
    return _x;
}

// public void set_X(float value) [instance] :7395
void Translation::X(float value)
{
    uStackFrame __("Fuse.Translation", "set_X(float)");

    if (_x != value)
    {
        _x = value;
        OnMatrixChanged();
    }
}

// public float2 get_XY() [instance] :7407
::g::Uno::Float2 Translation::XY()
{
    uStackFrame __("Fuse.Translation", "get_XY()");
    return ::g::Uno::Float2__New2(_x, _y);
}

// public void set_XY(float2 value) [instance] :7408
void Translation::XY(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Translation", "set_XY(float2)");

    if ((_x != value.X) || (_y != value.Y))
    {
        _x = value.X;
        _y = value.Y;
        OnMatrixChanged();
    }
}

// public float get_Y() [instance] :7422
float Translation::Y()
{
    uStackFrame __("Fuse.Translation", "get_Y()");
    return _y;
}

// public void set_Y(float value) [instance] :7423
void Translation::Y(float value)
{
    uStackFrame __("Fuse.Translation", "set_Y(float)");

    if (_y != value)
    {
        _y = value;
        OnMatrixChanged();
    }
}

// public float get_Z() [instance] :7436
float Translation::Z()
{
    uStackFrame __("Fuse.Translation", "get_Z()");
    return _z;
}

// public void set_Z(float value) [instance] :7437
void Translation::Z(float value)
{
    uStackFrame __("Fuse.Translation", "set_Z(float)");

    if (_z != value)
    {
        _z = value;
        OnMatrixChanged();
    }
}

// public generated Translation New() [static] :7293
Translation* Translation::New1()
{
    Translation* obj1 = (Translation*)uNew(Translation_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#51
// -------------------------------------------------------

// public static class TranslationModes :7254
// {
// static TranslationModes() :7254
static void TranslationModes__cctor__fn(uType* __type)
{
    TranslationModes::Local_ = (uObject*)TranslationModes__LocalMode::New1();
    TranslationModes::Size_ = (uObject*)TranslationModes__SizeMode::New1();
    TranslationModes::ParentSize_ = (uObject*)TranslationModes__ParentSizeMode::New1();
}

uClassType* TranslationModes_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.TranslationModes", options);
    type->fp_cctor_ = TranslationModes__cctor__fn;
    ::TYPES[180] = ::g::Fuse::ITranslationMode_typeof();
    ::TYPES[178] = ::g::Fuse::IActualPlacement_typeof();
    type->SetFields(0,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::TranslationModes::Local_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::TranslationModes::ParentSize_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::TranslationModes::Size_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("Local", 0),
        new uField("ParentSize", 1),
        new uField("Size", 2));
    return type;
}

// private static float3 RelativeToSize(float3 v, Fuse.Node node) :7274
void TranslationModes__RelativeToSize_fn(::g::Uno::Float3* v, ::g::Fuse::Node* node, ::g::Uno::Float3* __retval)
{
    *__retval = TranslationModes::RelativeToSize(*v, node);
}

uSStrong<uObject*> TranslationModes::Local_;
uSStrong<uObject*> TranslationModes::ParentSize_;
uSStrong<uObject*> TranslationModes::Size_;

// private static float3 RelativeToSize(float3 v, Fuse.Node node) [static] :7274
::g::Uno::Float3 TranslationModes::RelativeToSize(::g::Uno::Float3 v, ::g::Fuse::Node* node)
{
    uStackFrame __("Fuse.TranslationModes", "RelativeToSize(float3,Fuse.Node)");
    TranslationModes_typeof()->Init();
    uObject* isz = uAs<uObject*>(node, ::TYPES[178/*Fuse.IActualPlacement*/]);

    if (isz == NULL)
        return v;

    return ::g::Uno::Float3__op_Multiply2(v, ::g::Fuse::IActualPlacement::ActualSize(uInterface(uPtr(isz), ::TYPES[178/*Fuse.IActualPlacement*/])));
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#1
// ------------------------------------------------------

// public sealed class UnhandledExceptionArgs :134
// {
uType* UnhandledExceptionArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(UnhandledExceptionArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.UnhandledExceptionArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        ::g::Uno::Exception_typeof(), offsetof(::g::Fuse::UnhandledExceptionArgs, _Exception), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::UnhandledExceptionArgs, _IsHandled), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Exception", NULL, (void*)UnhandledExceptionArgs__get_Exception_fn, 0, false, ::g::Uno::Exception_typeof(), 0),
        new uFunction("get_IsHandled", NULL, (void*)UnhandledExceptionArgs__get_IsHandled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsHandled", NULL, (void*)UnhandledExceptionArgs__set_IsHandled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)UnhandledExceptionArgs__New2_fn, 0, true, UnhandledExceptionArgs_typeof(), 1, ::g::Uno::Exception_typeof()));
    return type;
}

// public UnhandledExceptionArgs(Uno.Exception e) :139
void UnhandledExceptionArgs__ctor_1_fn(UnhandledExceptionArgs* __this, ::g::Uno::Exception* e)
{
    __this->ctor_1(e);
}

// public generated Uno.Exception get_Exception() :136
void UnhandledExceptionArgs__get_Exception_fn(UnhandledExceptionArgs* __this, ::g::Uno::Exception** __retval)
{
    *__retval = __this->Exception();
}

// private generated void set_Exception(Uno.Exception value) :136
void UnhandledExceptionArgs__set_Exception_fn(UnhandledExceptionArgs* __this, ::g::Uno::Exception* value)
{
    __this->Exception(value);
}

// public generated bool get_IsHandled() :137
void UnhandledExceptionArgs__get_IsHandled_fn(UnhandledExceptionArgs* __this, bool* __retval)
{
    *__retval = __this->IsHandled();
}

// public generated void set_IsHandled(bool value) :137
void UnhandledExceptionArgs__set_IsHandled_fn(UnhandledExceptionArgs* __this, bool* value)
{
    __this->IsHandled(*value);
}

// public UnhandledExceptionArgs New(Uno.Exception e) :139
void UnhandledExceptionArgs__New2_fn(::g::Uno::Exception* e, UnhandledExceptionArgs** __retval)
{
    *__retval = UnhandledExceptionArgs::New2(e);
}

// public UnhandledExceptionArgs(Uno.Exception e) [instance] :139
void UnhandledExceptionArgs::ctor_1(::g::Uno::Exception* e)
{
    uStackFrame __("Fuse.UnhandledExceptionArgs", ".ctor(Uno.Exception)");
    ctor_();
    Exception(e);
}

// public generated Uno.Exception get_Exception() [instance] :136
::g::Uno::Exception* UnhandledExceptionArgs::Exception()
{
    uStackFrame __("Fuse.UnhandledExceptionArgs", "get_Exception()");
    return _Exception;
}

// private generated void set_Exception(Uno.Exception value) [instance] :136
void UnhandledExceptionArgs::Exception(::g::Uno::Exception* value)
{
    uStackFrame __("Fuse.UnhandledExceptionArgs", "set_Exception(Uno.Exception)");
    _Exception = value;
}

// public generated bool get_IsHandled() [instance] :137
bool UnhandledExceptionArgs::IsHandled()
{
    uStackFrame __("Fuse.UnhandledExceptionArgs", "get_IsHandled()");
    return _IsHandled;
}

// public generated void set_IsHandled(bool value) [instance] :137
void UnhandledExceptionArgs::IsHandled(bool value)
{
    uStackFrame __("Fuse.UnhandledExceptionArgs", "set_IsHandled(bool)");
    _IsHandled = value;
}

// public UnhandledExceptionArgs New(Uno.Exception e) [static] :139
UnhandledExceptionArgs* UnhandledExceptionArgs::New2(::g::Uno::Exception* e)
{
    UnhandledExceptionArgs* obj1 = (UnhandledExceptionArgs*)uNew(UnhandledExceptionArgs_typeof());
    obj1->ctor_1(e);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#1
// ------------------------------------------------------

// public delegate void UnhandledExceptionHandler(object sender, Fuse.UnhandledExceptionArgs args) :145
uDelegateType* UnhandledExceptionHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.UnhandledExceptionHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::UnhandledExceptionArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#52
// -------------------------------------------------------

// internal sealed class UpdateDispatcher :7553
// {
UpdateDispatcher_type* UpdateDispatcher_typeof()
{
    static uSStrong<UpdateDispatcher_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UpdateDispatcher);
    options.TypeSize = sizeof(UpdateDispatcher_type);
    type = (UpdateDispatcher_type*)uClassType::New("Fuse.UpdateDispatcher", options);
    type->fp_ctor_ = (void*)UpdateDispatcher__New1_fn;
    type->interface0.fp_Invoke = (void(*)(uObject*, uDelegate*))UpdateDispatcher__Invoke_fn;
    type->SetInterfaces(
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(UpdateDispatcher_type, interface0));
    return type;
}

// public generated UpdateDispatcher() :7553
void UpdateDispatcher__ctor__fn(UpdateDispatcher* __this)
{
    __this->ctor_();
}

// public void Invoke(Uno.Action action) :7555
void UpdateDispatcher__Invoke_fn(UpdateDispatcher* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// public generated UpdateDispatcher New() :7553
void UpdateDispatcher__New1_fn(UpdateDispatcher** __retval)
{
    *__retval = UpdateDispatcher::New1();
}

// public generated UpdateDispatcher() [instance] :7553
void UpdateDispatcher::ctor_()
{
}

// public void Invoke(Uno.Action action) [instance] :7555
void UpdateDispatcher::Invoke(uDelegate* action)
{
    uStackFrame __("Fuse.UpdateDispatcher", "Invoke(Uno.Action)");
    ::g::Fuse::UpdateManager::PostAction(action);
}

// public generated UpdateDispatcher New() [static] :7553
UpdateDispatcher* UpdateDispatcher::New1()
{
    UpdateDispatcher* obj1 = (UpdateDispatcher*)uNew(UpdateDispatcher_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#52
// -------------------------------------------------------

// internal sealed class UpdateListener :7503
// {
uType* UpdateListener_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(UpdateListener);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.UpdateListener", options);
    type->fp_ctor_ = (void*)UpdateListener__New1_fn;
    ::TYPES[26] = ::g::Uno::Delegate_typeof();
    ::TYPES[72] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::UpdateListener, action), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::UpdateListener, defer), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::UpdateListener, removed), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::UpdateListener, sequence), 0);
    return type;
}

// public generated UpdateListener() :7503
void UpdateListener__ctor__fn(UpdateListener* __this)
{
    __this->ctor_();
}

// public void Invoke() :7511
void UpdateListener__Invoke_fn(UpdateListener* __this)
{
    __this->Invoke();
}

// public generated UpdateListener New() :7503
void UpdateListener__New1_fn(UpdateListener** __retval)
{
    *__retval = UpdateListener::New1();
}

// public generated UpdateListener() [instance] :7503
void UpdateListener::ctor_()
{
}

// public void Invoke() [instance] :7511
void UpdateListener::Invoke()
{
    uStackFrame __("Fuse.UpdateListener", "Invoke()");

    if (removed)
        return;

    if (::g::Uno::Delegate::op_Inequality(action, NULL))
        uPtr(action)->InvokeVoid();
}

// public generated UpdateListener New() [static] :7503
UpdateListener* UpdateListener::New1()
{
    UpdateListener* obj1 = (UpdateListener*)uNew(UpdateListener_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#52
// -------------------------------------------------------

// public static class UpdateManager :7561
// {
// static UpdateManager() :7568
static void UpdateManager__cctor__fn(uType* __type)
{
    UpdateManager::_stages_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[181/*Uno.Collections.List<Fuse.Stage>*/]));
    UpdateManager::_postActions_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[164/*Uno.Collections.List<Uno.Action>*/]));
    UpdateManager::_postActionsSwap_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[164/*Uno.Collections.List<Uno.Action>*/]));
    UpdateManager::Dispatcher_ = (uObject*)::g::Fuse::UpdateDispatcher::New1();
    UpdateManager::_postActionLock_ = ::g::Fuse::Internal::SimpleLock::New1();
    UpdateManager::_frameIndex_ = 1;
    UpdateManager::_postActionLock_ = ::g::Fuse::Internal::SimpleLock::New1();

    for (int i = 0; i <= 4; ++i)
        ::g::Uno::Collections::List__Add_fn(uPtr(UpdateManager::_stages_), ::g::Fuse::Stage::New1(i));
}

uClassType* UpdateManager_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.UpdateManager", options);
    type->fp_cctor_ = UpdateManager__cctor__fn;
    ::STRINGS[64] = uString::Const("no Action found to remove");
    ::STRINGS[65] = uString::Const("no OnceAction found to remove");
    ::TYPES[181] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Stage_typeof());
    ::TYPES[164] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof());
    ::TYPES[182] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[183] = ::g::Fuse::UpdateStage_typeof();
    ::TYPES[165] = ::g::Fuse::UpdateListener_typeof();
    ::TYPES[32] = ::g::Uno::Int_typeof();
    ::TYPES[184] = ::g::Fuse::Stage_typeof();
    ::TYPES[72] = ::g::Uno::Action_typeof();
    ::TYPES[185] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Exception_typeof());
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[163] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::UpdateListener_typeof());
    ::TYPES[3] = uObject_typeof();
    type->SetFields(0,
        ::g::Fuse::Stage_typeof(), (uintptr_t)&::g::Fuse::UpdateManager::_currentStage_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::UpdateManager::_frameIndex_, uFieldFlagsStatic,
        ::g::Fuse::Internal::SimpleLock_typeof(), (uintptr_t)&::g::Fuse::UpdateManager::_postActionLock_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof()), (uintptr_t)&::g::Fuse::UpdateManager::_postActions_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof()), (uintptr_t)&::g::Fuse::UpdateManager::_postActionsSwap_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Stage_typeof()), (uintptr_t)&::g::Fuse::UpdateManager::_stages_, uFieldFlagsStatic,
        ::g::Uno::Threading::IDispatcher_typeof(), (uintptr_t)&::g::Fuse::UpdateManager::Dispatcher_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Dispatcher", 6));
    type->Reflection.SetFunctions(10,
        new uFunction("AddAction", NULL, (void*)UpdateManager__AddAction_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Action_typeof(), ::g::Fuse::UpdateStage_typeof()),
        new uFunction("AddDeferredAction", NULL, (void*)UpdateManager__AddDeferredAction_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Action_typeof(), ::g::Fuse::UpdateStage_typeof()),
        new uFunction("AddOnceAction", NULL, (void*)UpdateManager__AddOnceAction_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Action_typeof(), ::g::Fuse::UpdateStage_typeof()),
        new uFunction("get_FrameIndex", NULL, (void*)UpdateManager__get_FrameIndex_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("IncreaseFrameIndex", NULL, (void*)UpdateManager__IncreaseFrameIndex_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("PerformNextFrame", NULL, (void*)UpdateManager__PerformNextFrame_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Action_typeof(), ::g::Fuse::UpdateStage_typeof()),
        new uFunction("PostAction", NULL, (void*)UpdateManager__PostAction_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Action_typeof()),
        new uFunction("RemoveAction", NULL, (void*)UpdateManager__RemoveAction_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Action_typeof(), ::g::Fuse::UpdateStage_typeof()),
        new uFunction("RemoveOnceAction", NULL, (void*)UpdateManager__RemoveOnceAction_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Action_typeof(), ::g::Fuse::UpdateStage_typeof()),
        new uFunction("Update", NULL, (void*)UpdateManager__Update_fn, 0, true, uVoid_typeof(), 0));
    return type;
}

// public static void AddAction(Uno.Action pu, [Fuse.UpdateStage stage]) :7579
void UpdateManager__AddAction_fn(uDelegate* pu, int* stage)
{
    UpdateManager::AddAction(pu, *stage);
}

// public static void AddDeferredAction(Uno.Action pu, [Fuse.UpdateStage stage]) :7662
void UpdateManager__AddDeferredAction_fn(uDelegate* pu, int* stage)
{
    UpdateManager::AddDeferredAction(pu, *stage);
}

// public static void AddOnceAction(Uno.Action pu, [Fuse.UpdateStage stage]) :7614
void UpdateManager__AddOnceAction_fn(uDelegate* pu, int* stage)
{
    UpdateManager::AddOnceAction(pu, *stage);
}

// internal static Fuse.UpdateStage get_CurrentStage() :7689
void UpdateManager__get_CurrentStage_fn(int* __retval)
{
    *__retval = UpdateManager::CurrentStage();
}

// internal static void ForceLayoutUpdateNow() :7823
void UpdateManager__ForceLayoutUpdateNow_fn()
{
    UpdateManager::ForceLayoutUpdateNow();
}

// public static int get_FrameIndex() :7820
void UpdateManager__get_FrameIndex_fn(int* __retval)
{
    *__retval = UpdateManager::FrameIndex();
}

// public static void IncreaseFrameIndex() :7672
void UpdateManager__IncreaseFrameIndex_fn()
{
    UpdateManager::IncreaseFrameIndex();
}

// internal static bool IsPastStage(Fuse.UpdateStage stage) :7692
void UpdateManager__IsPastStage_fn(int* stage, bool* __retval)
{
    *__retval = UpdateManager::IsPastStage(*stage);
}

// public static void PerformNextFrame(Uno.Action pu, [Fuse.UpdateStage stage]) :7631
void UpdateManager__PerformNextFrame_fn(uDelegate* pu, int* stage)
{
    UpdateManager::PerformNextFrame(pu, *stage);
}

// public static void PostAction(Uno.Action pu) :7645
void UpdateManager__PostAction_fn(uDelegate* pu)
{
    UpdateManager::PostAction(pu);
}

// private static void ProcessPostActions() :7780
void UpdateManager__ProcessPostActions_fn()
{
    UpdateManager::ProcessPostActions();
}

// public static void RemoveAction(Uno.Action pu, [Fuse.UpdateStage stage]) :7606
void UpdateManager__RemoveAction_fn(uDelegate* pu, int* stage)
{
    UpdateManager::RemoveAction(pu, *stage);
}

// private static bool RemoveFrom(Uno.Collections.List<Fuse.UpdateListener> list, Uno.Action action) :7592
void UpdateManager__RemoveFrom_fn(::g::Uno::Collections::List* list, uDelegate* action, bool* __retval)
{
    *__retval = UpdateManager::RemoveFrom(list, action);
}

// public static void RemoveOnceAction(Uno.Action pu, [Fuse.UpdateStage stage]) :7621
void UpdateManager__RemoveOnceAction_fn(uDelegate* pu, int* stage)
{
    UpdateManager::RemoveOnceAction(pu, *stage);
}

// public static void Update() :7678
void UpdateManager__Update_fn()
{
    UpdateManager::Update();
}

// private static void Update(Fuse.Stage stage) :7697
void UpdateManager__Update1_fn(::g::Fuse::Stage* stage)
{
    UpdateManager::Update1(stage);
}

uSStrong< ::g::Fuse::Stage*> UpdateManager::_currentStage_;
int UpdateManager::_frameIndex_;
uSStrong< ::g::Fuse::Internal::SimpleLock*> UpdateManager::_postActionLock_;
uSStrong< ::g::Uno::Collections::List*> UpdateManager::_postActions_;
uSStrong< ::g::Uno::Collections::List*> UpdateManager::_postActionsSwap_;
uSStrong< ::g::Uno::Collections::List*> UpdateManager::_stages_;
uSStrong<uObject*> UpdateManager::Dispatcher_;

// public static void AddAction(Uno.Action pu, [Fuse.UpdateStage stage]) [static] :7579
void UpdateManager::AddAction(uDelegate* pu, int stage)
{
    uStackFrame __("Fuse.UpdateManager", "AddAction(Uno.Action,[Fuse.UpdateStage])");
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret1;
    ::g::Fuse::UpdateListener* us = ::g::Fuse::UpdateListener::New1();
    us->action = pu;
    ::g::Fuse::Stage* s = (::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(stage), &ret1), ret1);
    uPtr(s)->Insert(uPtr(s)->Listeners, us);
}

// public static void AddDeferredAction(Uno.Action pu, [Fuse.UpdateStage stage]) [static] :7662
void UpdateManager::AddDeferredAction(uDelegate* pu, int stage)
{
    uStackFrame __("Fuse.UpdateManager", "AddDeferredAction(Uno.Action,[Fuse.UpdateStage])");
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret2;
    ::g::Fuse::Stage* ret3;

    if (stage != -1)
        ::g::Uno::Collections::List__Add_fn(uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(stage), &ret2), ret2))->PhaseDeferredActions), pu);
    else if (UpdateManager::_currentStage() != NULL)
        ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(UpdateManager::_currentStage())->PhaseDeferredActions), pu);
    else
        ::g::Uno::Collections::List__Add_fn(uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(0), &ret3), ret3))->PhaseDeferredActions), pu);
}

// public static void AddOnceAction(Uno.Action pu, [Fuse.UpdateStage stage]) [static] :7614
void UpdateManager::AddOnceAction(uDelegate* pu, int stage)
{
    uStackFrame __("Fuse.UpdateManager", "AddOnceAction(Uno.Action,[Fuse.UpdateStage])");
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret4;
    ::g::Fuse::UpdateListener* us = ::g::Fuse::UpdateListener::New1();
    us->action = pu;
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(stage), &ret4), ret4))->OncesPending), us);
}

// internal static void ForceLayoutUpdateNow() [static] :7823
void UpdateManager::ForceLayoutUpdateNow()
{
    uStackFrame __("Fuse.UpdateManager", "ForceLayoutUpdateNow()");
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret5;
    UpdateManager::Update1((::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(2), &ret5), ret5));
}

// public static void IncreaseFrameIndex() [static] :7672
void UpdateManager::IncreaseFrameIndex()
{
    uStackFrame __("Fuse.UpdateManager", "IncreaseFrameIndex()");
    UpdateManager_typeof()->Init();
    UpdateManager::_frameIndex()++;
}

// internal static bool IsPastStage(Fuse.UpdateStage stage) [static] :7692
bool UpdateManager::IsPastStage(int stage)
{
    uStackFrame __("Fuse.UpdateManager", "IsPastStage(Fuse.UpdateStage)");
    UpdateManager_typeof()->Init();
    return stage < UpdateManager::CurrentStage();
}

// public static void PerformNextFrame(Uno.Action pu, [Fuse.UpdateStage stage]) [static] :7631
void UpdateManager::PerformNextFrame(uDelegate* pu, int stage)
{
    uStackFrame __("Fuse.UpdateManager", "PerformNextFrame(Uno.Action,[Fuse.UpdateStage])");
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret6;
    ::g::Fuse::UpdateListener* us = ::g::Fuse::UpdateListener::New1();
    us->action = pu;
    us->defer = true;
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(stage), &ret6), ret6))->OncesPending), us);
}

// public static void PostAction(Uno.Action pu) [static] :7645
void UpdateManager::PostAction(uDelegate* pu)
{
    uStackFrame __("Fuse.UpdateManager", "PostAction(Uno.Action)");
    UpdateManager_typeof()->Init();
    uPtr(UpdateManager::_postActionLock())->Lock();

    {
        const auto __finally_fun = [&]()
        {
            uPtr(UpdateManager::_postActionLock())->Unlock();
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::List__Add_fn(uPtr(UpdateManager::_postActions()), pu);
    }
}

// private static void ProcessPostActions() [static] :7780
void UpdateManager::ProcessPostActions()
{
    uStackFrame __("Fuse.UpdateManager", "ProcessPostActions()");
    UpdateManager_typeof()->Init();
    uDelegate* ret7;
    ::g::Uno::Collections::List* _exceptions = NULL;

    while (true)
    {
        uPtr(UpdateManager::_postActionLock())->Lock();
        ::g::Uno::Collections::List* a = UpdateManager::_postActions();
        UpdateManager::_postActions() = UpdateManager::_postActionsSwap();
        UpdateManager::_postActionsSwap() = a;
        uPtr(UpdateManager::_postActionLock())->Unlock();

        if (uPtr(a)->Count() == 0)
            break;

        for (int i = 0; i < uPtr(a)->Count(); ++i)

            try
            {
                uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(a), uCRef<int>(i), &ret7), ret7))->InvokeVoid();
            }
            catch (const uThrowable& __t)
            {
                ::g::Uno::Exception* e = __t.Exception;

                if (_exceptions == NULL)
                    _exceptions = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[185/*Uno.Collections.List<Uno.Exception>*/]);

                ::g::Uno::Collections::List__Add_fn(_exceptions, e);
            }

        uPtr(a)->Clear();
    }

    UpdateManager::_currentStage() = NULL;

    if (_exceptions != NULL)
        U_THROW(::g::Uno::AggregateException::New7((uArray*)uPtr(_exceptions)->ToArray()));
}

// public static void RemoveAction(Uno.Action pu, [Fuse.UpdateStage stage]) [static] :7606
void UpdateManager::RemoveAction(uDelegate* pu, int stage)
{
    uStackFrame __("Fuse.UpdateManager", "RemoveAction(Uno.Action,[Fuse.UpdateStage])");
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret8;
    ::g::Fuse::Stage* s = (::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(stage), &ret8), ret8);

    if (!UpdateManager::RemoveFrom(uPtr(s)->Listeners, pu))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[64/*"no Action f...*/]));

    uPtr(s)->HasListenersRemoved = true;
}

// private static bool RemoveFrom(Uno.Collections.List<Fuse.UpdateListener> list, Uno.Action action) [static] :7592
bool UpdateManager::RemoveFrom(::g::Uno::Collections::List* list, uDelegate* action)
{
    uStackFrame __("Fuse.UpdateManager", "RemoveFrom(Uno.Collections.List<Fuse.UpdateListener>,Uno.Action)");
    UpdateManager_typeof()->Init();
    ::g::Fuse::UpdateListener* ret9;
    ::g::Fuse::UpdateListener* ret10;
    ::g::Fuse::UpdateListener* ret11;

    for (int i = 0; i < uPtr(list)->Count(); ++i)
        if (::g::Uno::Object::Equals1(action, uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret9), ret9))->action) && !uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret10), ret10))->removed)
        {
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret11), ret11))->removed = true;
            return true;
        }

    return false;
}

// public static void RemoveOnceAction(Uno.Action pu, [Fuse.UpdateStage stage]) [static] :7621
void UpdateManager::RemoveOnceAction(uDelegate* pu, int stage)
{
    uStackFrame __("Fuse.UpdateManager", "RemoveOnceAction(Uno.Action,[Fuse.UpdateStage])");
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret12;
    ::g::Fuse::Stage* s = (::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(stage), &ret12), ret12);

    if (UpdateManager::RemoveFrom(uPtr(s)->OncesPending, pu))
        return;

    if (!UpdateManager::RemoveFrom(uPtr(s)->Onces, pu))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[65/*"no OnceActi...*/]));
}

// public static void Update() [static] :7678
void UpdateManager::Update()
{
    uStackFrame __("Fuse.UpdateManager", "Update()");
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret13;
    UpdateManager::ProcessPostActions();
    int c = uPtr(UpdateManager::_stages())->Count();

    for (int i = 0; i < c; ++i)
        UpdateManager::Update1((::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(i), &ret13), ret13));
}

// private static void Update(Fuse.Stage stage) [static] :7697
void UpdateManager::Update1(::g::Fuse::Stage* stage)
{
    uStackFrame __("Fuse.UpdateManager", "Update(Fuse.Stage)");
    UpdateManager_typeof()->Init();
    ::g::Fuse::UpdateListener* ret14;
    ::g::Fuse::UpdateListener* ret15;
    ::g::Fuse::UpdateListener* ret16;
    uDelegate* ret17;
    UpdateManager::_currentStage() = stage;
    ::g::Uno::Collections::List* _exceptions = NULL;

    if (uPtr(uPtr(stage)->OncesPending)->Count() > 0)
    {
        ::g::Uno::Collections::List* t = uPtr(stage)->Onces;
        stage->Onces = stage->OncesPending;
        stage->OncesPending = t;
        uPtr(stage->OncesPending)->Clear();
        int c = uPtr(stage->Onces)->Count();

        for (int i = 0; i < c; ++i)
        {
            ::g::Fuse::UpdateListener* ul = (::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(stage)->Onces), uCRef<int>(i), &ret14), ret14);

            if (uPtr(ul)->defer)
            {
                uPtr(ul)->defer = false;
                ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(stage)->OncesPending), ul);
            }
            else
            {
                try
                {
                    uPtr(ul)->Invoke();
                }
                catch (const uThrowable& __t)
                {
                    ::g::Uno::Exception* e = __t.Exception;

                    if (_exceptions == NULL)
                        _exceptions = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[185/*Uno.Collections.List<Uno.Exception>*/]);

                    ::g::Uno::Collections::List__Add_fn(_exceptions, e);
                }
            }
        }
    }

    for (int i1 = 0; i1 < uPtr(uPtr(stage)->Listeners)->Count(); ++i1)
    {
        ::g::Fuse::UpdateListener* ul1 = (::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(stage)->Listeners), uCRef<int>(i1), &ret15), ret15);

        try
        {
            uPtr(ul1)->Invoke();
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e1 = __t.Exception;

            if (_exceptions == NULL)
                _exceptions = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[185/*Uno.Collections.List<Uno.Exception>*/]);

            ::g::Uno::Collections::List__Add_fn(_exceptions, e1);
        }
    }

    if (uPtr(stage)->HasListenersRemoved)

        for (int i2 = uPtr(uPtr(stage)->Listeners)->Count() - 1; i2 >= 0; --i2)
            if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(stage)->Listeners), uCRef<int>(i2), &ret16), ret16))->removed)
                uPtr(uPtr(stage)->Listeners)->RemoveAt(i2);

    for (int i3 = 0; i3 < uPtr(uPtr(stage)->PhaseDeferredActions)->Count(); ++i3)

        try
        {
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(stage)->PhaseDeferredActions), uCRef<int>(i3), &ret17), ret17))->InvokeVoid();
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e2 = __t.Exception;

            if (_exceptions == NULL)
                _exceptions = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[185/*Uno.Collections.List<Uno.Exception>*/]);

            ::g::Uno::Collections::List__Add_fn(_exceptions, e2);
        }

    uPtr(uPtr(stage)->PhaseDeferredActions)->Clear();
    UpdateManager::_currentStage() = NULL;

    if (_exceptions != NULL)
        U_THROW(::g::Uno::AggregateException::New7((uArray*)uPtr(_exceptions)->ToArray()));
}

// internal static Fuse.UpdateStage get_CurrentStage() [static] :7689
int UpdateManager::CurrentStage()
{
    uStackFrame __("Fuse.UpdateManager", "get_CurrentStage()");
    UpdateManager_typeof()->Init();
    return (UpdateManager::_currentStage() == NULL) ? -1 : uPtr(UpdateManager::_currentStage())->UpdateStage;
}

// public static int get_FrameIndex() [static] :7820
int UpdateManager::FrameIndex()
{
    uStackFrame __("Fuse.UpdateManager", "get_FrameIndex()");
    UpdateManager_typeof()->Init();
    return UpdateManager::_frameIndex();
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.27.14/$.uno#52
// -------------------------------------------------------

// public enum UpdateStage :7490
uEnumType* UpdateStage_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.UpdateStage", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "None", -1LL,
        "Primary", 0LL,
        "Mixers", 1LL,
        "Layout", 2LL,
        "PostLayoutMixers", 3LL,
        "Draw", 4LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.UserEvents/0.27.14/$.uno#2
// -------------------------------------------------------------

// public sealed class UserEvent :270
// {
::g::Fuse::Behavior_type* UserEvent_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UserEvent);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.UserEvent", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    ::STRINGS[66] = uString::Const("Unknown event: ");
    ::STRINGS[67] = uString::Const("/usr/local/share/uno/Packages/Fuse.UserEvents/0.27.14/$.uno#2");
    ::STRINGS[68] = uString::Const("RaiseEvent");
    ::TYPES[1] = ::g::Fuse::Behavior_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[186] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    ::TYPES[187] = ::g::Fuse::UserEventHandler_typeof();
    ::TYPES[26] = ::g::Uno::Delegate_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::Behavior_type, interface0));
    type->SetFields(3,
        ::g::Fuse::UserEventDispatch_typeof(), offsetof(::g::Fuse::UserEvent, Dispatch), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::UserEvent, _Name), 0,
        ::g::Fuse::UserEventHandler_typeof(), offsetof(::g::Fuse::UserEvent, Raised1), 0);
    type->Reflection.SetFunctions(6,
        new uFunction("get_Name", NULL, (void*)UserEvent__get_Name_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)UserEvent__New1_fn, 0, true, UserEvent_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Raise", NULL, (void*)UserEvent__Raise_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof())),
        new uFunction("add_Raised", NULL, (void*)UserEvent__add_Raised_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::UserEventHandler_typeof()),
        new uFunction("remove_Raised", NULL, (void*)UserEvent__remove_Raised_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::UserEventHandler_typeof()),
        new uFunction("RaiseEvent", NULL, (void*)UserEvent__RaiseEvent_fn, 0, true, uVoid_typeof(), 3, ::g::Fuse::Node_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof())));
    return type;
}

// public UserEvent(string name) :280
void UserEvent__ctor_1_fn(UserEvent* __this, uString* name)
{
    __this->ctor_1(name);
}

// public generated string get_Name() :275
void UserEvent__get_Name_fn(UserEvent* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :275
void UserEvent__set_Name_fn(UserEvent* __this, uString* value)
{
    __this->Name(value);
}

// public UserEvent New(string name) :280
void UserEvent__New1_fn(uString* name, UserEvent** __retval)
{
    *__retval = UserEvent::New1(name);
}

// public void Raise([Uno.Collections.Dictionary<string, object> args]) :310
void UserEvent__Raise_fn(UserEvent* __this, ::g::Uno::Collections::Dictionary* args)
{
    __this->Raise(args);
}

// public generated void add_Raised(Fuse.UserEventHandler value) :272
void UserEvent__add_Raised_fn(UserEvent* __this, uDelegate* value)
{
    __this->add_Raised(value);
}

// public generated void remove_Raised(Fuse.UserEventHandler value) :272
void UserEvent__remove_Raised_fn(UserEvent* __this, uDelegate* value)
{
    __this->remove_Raised(value);
}

// public static void RaiseEvent(Fuse.Node from, string name, [Uno.Collections.Dictionary<string, object> args]) :315
void UserEvent__RaiseEvent_fn(::g::Fuse::Node* from, uString* name, ::g::Uno::Collections::Dictionary* args)
{
    UserEvent::RaiseEvent(from, name, args);
}

// internal static Fuse.UserEvent ScanTree(Fuse.Node at, string name, Fuse.Node& node) :290
void UserEvent__ScanTree_fn(::g::Fuse::Node* at, uString* name, ::g::Fuse::Node** node, UserEvent** __retval)
{
    *__retval = UserEvent::ScanTree(at, name, node);
}

// public UserEvent(string name) [instance] :280
void UserEvent::ctor_1(uString* name)
{
    uStackFrame __("Fuse.UserEvent", ".ctor(string)");
    ctor_();
    Name(name);
    Dispatch = ::g::Fuse::UserEventDispatch::GetByName(name);
}

// public generated string get_Name() [instance] :275
uString* UserEvent::Name()
{
    uStackFrame __("Fuse.UserEvent", "get_Name()");
    return _Name;
}

// private generated void set_Name(string value) [instance] :275
void UserEvent::Name(uString* value)
{
    uStackFrame __("Fuse.UserEvent", "set_Name(string)");
    _Name = value;
}

// public void Raise([Uno.Collections.Dictionary<string, object> args]) [instance] :310
void UserEvent::Raise(::g::Uno::Collections::Dictionary* args)
{
    uStackFrame __("Fuse.UserEvent", "Raise([Uno.Collections.Dictionary<string, object>])");
    uPtr(Dispatch)->Raise(ParentNode(), args);
}

// public generated void add_Raised(Fuse.UserEventHandler value) [instance] :272
void UserEvent::add_Raised(uDelegate* value)
{
    uStackFrame __("Fuse.UserEvent", "add_Raised(Fuse.UserEventHandler)");
    Raised1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Raised1, value), ::TYPES[187/*Fuse.UserEventHandler*/]);
}

// public generated void remove_Raised(Fuse.UserEventHandler value) [instance] :272
void UserEvent::remove_Raised(uDelegate* value)
{
    uStackFrame __("Fuse.UserEvent", "remove_Raised(Fuse.UserEventHandler)");
    Raised1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Raised1, value), ::TYPES[187/*Fuse.UserEventHandler*/]);
}

// public UserEvent New(string name) [static] :280
UserEvent* UserEvent::New1(uString* name)
{
    UserEvent* obj2 = (UserEvent*)uNew(UserEvent_typeof());
    obj2->ctor_1(name);
    return obj2;
}

// public static void RaiseEvent(Fuse.Node from, string name, [Uno.Collections.Dictionary<string, object> args]) [static] :315
void UserEvent::RaiseEvent(::g::Fuse::Node* from, uString* name, ::g::Uno::Collections::Dictionary* args)
{
    uStackFrame __("Fuse.UserEvent", "RaiseEvent(Fuse.Node,string,[Uno.Collections.Dictionary<string, object>])");
    ::g::Fuse::Node* n;
    UserEvent* ev = UserEvent::ScanTree(from, name, &n);

    if (ev == NULL)
    {
        ::g::Fuse::Diagnostics::Error(::g::Uno::String::op_Addition2(::STRINGS[66/*"Unknown eve...*/], name), NULL, ::STRINGS[67/*"/usr/local/...*/], 321, ::STRINGS[68/*"RaiseEvent"*/]);
        return;
    }

    uPtr(ev)->Raise(args);
}

// internal static Fuse.UserEvent ScanTree(Fuse.Node at, string name, Fuse.Node& node) [static] :290
UserEvent* UserEvent::ScanTree(::g::Fuse::Node* at, uString* name, ::g::Fuse::Node** node)
{
    uStackFrame __("Fuse.UserEvent", "ScanTree(Fuse.Node,string,Fuse.Node&)");
    ::g::Fuse::Behavior* ret3;

    while (at != NULL)
    {
        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(at)->Behaviors()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[1/*Fuse.Behavior*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Behavior* b = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[186/*Uno.Collections.IEnumerator<Fuse.Behavior>*/]), &ret3), ret3);
            UserEvent* ue = uAs<UserEvent*>(b, UserEvent_typeof());

            if ((ue != NULL) && ::g::Uno::String::op_Equality(uPtr(ue)->Name(), name))
            {
                *node = at;
                return ue;
            }
        }

        at = uPtr(at)->ContextParent();
    }

    *node = NULL;
    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.UserEvents/0.27.14/$.uno#2
// -------------------------------------------------------------

// public sealed class UserEventArgs :191
// {
UserEventArgs_type* UserEventArgs_typeof()
{
    static uSStrong<UserEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UserEventArgs);
    options.TypeSize = sizeof(UserEventArgs_type);
    type = (UserEventArgs_type*)uClassType::New("Fuse.UserEventArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))UserEventArgs__FuseScriptingIScriptEventSerialize_fn;
    ::STRINGS[69] = uString::Const("name");
    ::TYPES[188] = ::g::Fuse::UserEventDispatch_typeof();
    ::TYPES[189] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof());
    ::TYPES[190] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(UserEventArgs_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof()), offsetof(::g::Fuse::UserEventArgs, _Args), 0,
        ::g::Fuse::UserEventDispatch_typeof(), offsetof(::g::Fuse::UserEventArgs, _Dispatch), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::UserEventArgs, _Source), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Args", NULL, (void*)UserEventArgs__get_Args_fn, 0, false, ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof()), 0),
        new uFunction("get_Name", NULL, (void*)UserEventArgs__get_Name_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_Source", NULL, (void*)UserEventArgs__get_Source_fn, 0, false, ::g::Fuse::Node_typeof(), 0));
    return type;
}

// internal UserEventArgs(Fuse.UserEventDispatch dispatch, Fuse.Node source, [Uno.Collections.Dictionary<string, object> args]) :205
void UserEventArgs__ctor_1_fn(UserEventArgs* __this, ::g::Fuse::UserEventDispatch* dispatch, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args)
{
    __this->ctor_1(dispatch, source, args);
}

// public generated Uno.Collections.Dictionary<string, object> get_Args() :203
void UserEventArgs__get_Args_fn(UserEventArgs* __this, ::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = __this->Args();
}

// private generated void set_Args(Uno.Collections.Dictionary<string, object> value) :203
void UserEventArgs__set_Args_fn(UserEventArgs* __this, ::g::Uno::Collections::Dictionary* value)
{
    __this->Args(value);
}

// internal generated Fuse.UserEventDispatch get_Dispatch() :193
void UserEventArgs__get_Dispatch_fn(UserEventArgs* __this, ::g::Fuse::UserEventDispatch** __retval)
{
    *__retval = __this->Dispatch();
}

// private generated void set_Dispatch(Fuse.UserEventDispatch value) :193
void UserEventArgs__set_Dispatch_fn(UserEventArgs* __this, ::g::Fuse::UserEventDispatch* value)
{
    __this->Dispatch(value);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :217
void UserEventArgs__FuseScriptingIScriptEventSerialize_fn(UserEventArgs* __this, uObject* s)
{
    uStackFrame __("Fuse.UserEventArgs", "Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer)");
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > ret3;
    ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::g::Fuse::Scripting::IEventSerializer_typeof()), ::STRINGS[69/*"name"*/], uPtr(__this->Dispatch())->Name());

    if (__this->Args() != NULL)

        for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->Args()), &ret3), ret3); enum1.MoveNext(::TYPES[189/*Uno.Collections.Dictionary<string, object>.Enumerator*/]); )
        {
            ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uObject*> > m = enum1.Current(::TYPES[189/*Uno.Collections.Dictionary<string, object>.Enumerator*/]);
            ::g::Fuse::Scripting::IEventSerializer::AddObject(uInterface(uPtr(s), ::g::Fuse::Scripting::IEventSerializer_typeof()), m.Key(::TYPES[190/*Uno.Collections.KeyValuePair<string, object>*/]), m.Value(::TYPES[190/*Uno.Collections.KeyValuePair<string, object>*/]));
        }
}

// public string get_Name() :197
void UserEventArgs__get_Name_fn(UserEventArgs* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// internal UserEventArgs New(Fuse.UserEventDispatch dispatch, Fuse.Node source, [Uno.Collections.Dictionary<string, object> args]) :205
void UserEventArgs__New2_fn(::g::Fuse::UserEventDispatch* dispatch, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args, UserEventArgs** __retval)
{
    *__retval = UserEventArgs::New2(dispatch, source, args);
}

// internal void Raise() :212
void UserEventArgs__Raise_fn(UserEventArgs* __this)
{
    __this->Raise();
}

// public generated Fuse.Node get_Source() :200
void UserEventArgs__get_Source_fn(UserEventArgs* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Fuse.Node value) :200
void UserEventArgs__set_Source_fn(UserEventArgs* __this, ::g::Fuse::Node* value)
{
    __this->Source(value);
}

// internal UserEventArgs(Fuse.UserEventDispatch dispatch, Fuse.Node source, [Uno.Collections.Dictionary<string, object> args]) [instance] :205
void UserEventArgs::ctor_1(::g::Fuse::UserEventDispatch* dispatch, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args)
{
    uStackFrame __("Fuse.UserEventArgs", ".ctor(Fuse.UserEventDispatch,Fuse.Node,[Uno.Collections.Dictionary<string, object>])");
    ctor_();
    Dispatch(dispatch);
    Source(source);
    Args(args);
}

// public generated Uno.Collections.Dictionary<string, object> get_Args() [instance] :203
::g::Uno::Collections::Dictionary* UserEventArgs::Args()
{
    uStackFrame __("Fuse.UserEventArgs", "get_Args()");
    return _Args;
}

// private generated void set_Args(Uno.Collections.Dictionary<string, object> value) [instance] :203
void UserEventArgs::Args(::g::Uno::Collections::Dictionary* value)
{
    uStackFrame __("Fuse.UserEventArgs", "set_Args(Uno.Collections.Dictionary<string, object>)");
    _Args = value;
}

// internal generated Fuse.UserEventDispatch get_Dispatch() [instance] :193
::g::Fuse::UserEventDispatch* UserEventArgs::Dispatch()
{
    uStackFrame __("Fuse.UserEventArgs", "get_Dispatch()");
    return _Dispatch;
}

// private generated void set_Dispatch(Fuse.UserEventDispatch value) [instance] :193
void UserEventArgs::Dispatch(::g::Fuse::UserEventDispatch* value)
{
    uStackFrame __("Fuse.UserEventArgs", "set_Dispatch(Fuse.UserEventDispatch)");
    _Dispatch = value;
}

// public string get_Name() [instance] :197
uString* UserEventArgs::Name()
{
    uStackFrame __("Fuse.UserEventArgs", "get_Name()");
    return uPtr(Dispatch())->Name();
}

// internal void Raise() [instance] :212
void UserEventArgs::Raise()
{
    uStackFrame __("Fuse.UserEventArgs", "Raise()");
    uPtr(Dispatch())->OnRaised(this);
}

// public generated Fuse.Node get_Source() [instance] :200
::g::Fuse::Node* UserEventArgs::Source()
{
    uStackFrame __("Fuse.UserEventArgs", "get_Source()");
    return _Source;
}

// private generated void set_Source(Fuse.Node value) [instance] :200
void UserEventArgs::Source(::g::Fuse::Node* value)
{
    uStackFrame __("Fuse.UserEventArgs", "set_Source(Fuse.Node)");
    _Source = value;
}

// internal UserEventArgs New(Fuse.UserEventDispatch dispatch, Fuse.Node source, [Uno.Collections.Dictionary<string, object> args]) [static] :205
UserEventArgs* UserEventArgs::New2(::g::Fuse::UserEventDispatch* dispatch, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args)
{
    UserEventArgs* obj2 = (UserEventArgs*)uNew(UserEventArgs_typeof());
    obj2->ctor_1(dispatch, source, args);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.UserEvents/0.27.14/$.uno#2
// -------------------------------------------------------------

// internal sealed class UserEventDispatch :230
// {
// static UserEventDispatch() :230
static void UserEventDispatch__cctor__fn(uType* __type)
{
    UserEventDispatch::_userEvents_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[191/*Uno.Collections.Dictionary<string, Fuse.UserEventDispatch>*/]));
}

uType* UserEventDispatch_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(UserEventDispatch);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.UserEventDispatch", options);
    type->fp_ctor_ = (void*)UserEventDispatch__New1_fn;
    type->fp_cctor_ = UserEventDispatch__cctor__fn;
    ::TYPES[191] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), UserEventDispatch_typeof());
    ::TYPES[26] = ::g::Uno::Delegate_typeof();
    ::TYPES[187] = ::g::Fuse::UserEventHandler_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[72] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::UserEventDispatch, _Name), 0,
        ::g::Fuse::UserEventHandler_typeof(), offsetof(::g::Fuse::UserEventDispatch, Raised1), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), UserEventDispatch_typeof()), (uintptr_t)&::g::Fuse::UserEventDispatch::_userEvents_, uFieldFlagsStatic);
    return type;
}

// public generated UserEventDispatch() :230
void UserEventDispatch__ctor__fn(UserEventDispatch* __this)
{
    __this->ctor_();
}

// internal void DirectRaise([Fuse.Node source], [Uno.Collections.Dictionary<string, object> args]) :257
void UserEventDispatch__DirectRaise_fn(UserEventDispatch* __this, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args)
{
    __this->DirectRaise(source, args);
}

// internal static Fuse.UserEventDispatch GetByName(string name) :239
void UserEventDispatch__GetByName_fn(uString* name, UserEventDispatch** __retval)
{
    *__retval = UserEventDispatch::GetByName(name);
}

// public generated string get_Name() :237
void UserEventDispatch__get_Name_fn(UserEventDispatch* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :237
void UserEventDispatch__set_Name_fn(UserEventDispatch* __this, uString* value)
{
    __this->Name(value);
}

// public generated UserEventDispatch New() :230
void UserEventDispatch__New1_fn(UserEventDispatch** __retval)
{
    *__retval = UserEventDispatch::New1();
}

// internal void OnRaised(Fuse.UserEventArgs args) :263
void UserEventDispatch__OnRaised_fn(UserEventDispatch* __this, ::g::Fuse::UserEventArgs* args)
{
    __this->OnRaised(args);
}

// public void Raise(Fuse.Node source, [Uno.Collections.Dictionary<string, object> args]) :251
void UserEventDispatch__Raise_fn(UserEventDispatch* __this, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args)
{
    __this->Raise(source, args);
}

// public generated void add_Raised(Fuse.UserEventHandler value) :235
void UserEventDispatch__add_Raised_fn(UserEventDispatch* __this, uDelegate* value)
{
    __this->add_Raised(value);
}

// public generated void remove_Raised(Fuse.UserEventHandler value) :235
void UserEventDispatch__remove_Raised_fn(UserEventDispatch* __this, uDelegate* value)
{
    __this->remove_Raised(value);
}

uSStrong< ::g::Uno::Collections::Dictionary*> UserEventDispatch::_userEvents_;

// public generated UserEventDispatch() [instance] :230
void UserEventDispatch::ctor_()
{
}

// internal void DirectRaise([Fuse.Node source], [Uno.Collections.Dictionary<string, object> args]) [instance] :257
void UserEventDispatch::DirectRaise(::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args)
{
    uStackFrame __("Fuse.UserEventDispatch", "DirectRaise([Fuse.Node],[Uno.Collections.Dictionary<string, object>])");
    ::g::Fuse::UserEventArgs* m = ::g::Fuse::UserEventArgs::New2(this, source, args);
    OnRaised(m);
}

// public generated string get_Name() [instance] :237
uString* UserEventDispatch::Name()
{
    uStackFrame __("Fuse.UserEventDispatch", "get_Name()");
    return _Name;
}

// private generated void set_Name(string value) [instance] :237
void UserEventDispatch::Name(uString* value)
{
    uStackFrame __("Fuse.UserEventDispatch", "set_Name(string)");
    _Name = value;
}

// internal void OnRaised(Fuse.UserEventArgs args) [instance] :263
void UserEventDispatch::OnRaised(::g::Fuse::UserEventArgs* args)
{
    uStackFrame __("Fuse.UserEventDispatch", "OnRaised(Fuse.UserEventArgs)");

    if (::g::Uno::Delegate::op_Inequality(Raised1, NULL))
        uPtr(Raised1)->Invoke(2, this, args);
}

// public void Raise(Fuse.Node source, [Uno.Collections.Dictionary<string, object> args]) [instance] :251
void UserEventDispatch::Raise(::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args)
{
    uStackFrame __("Fuse.UserEventDispatch", "Raise(Fuse.Node,[Uno.Collections.Dictionary<string, object>])");
    ::g::Fuse::UserEventArgs* m = ::g::Fuse::UserEventArgs::New2(this, source, args);
    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[72/*Uno.Action*/], (void*)::g::Fuse::UserEventArgs__Raise_fn, m), -1);
}

// public generated void add_Raised(Fuse.UserEventHandler value) [instance] :235
void UserEventDispatch::add_Raised(uDelegate* value)
{
    uStackFrame __("Fuse.UserEventDispatch", "add_Raised(Fuse.UserEventHandler)");
    Raised1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Raised1, value), ::TYPES[187/*Fuse.UserEventHandler*/]);
}

// public generated void remove_Raised(Fuse.UserEventHandler value) [instance] :235
void UserEventDispatch::remove_Raised(uDelegate* value)
{
    uStackFrame __("Fuse.UserEventDispatch", "remove_Raised(Fuse.UserEventHandler)");
    Raised1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Raised1, value), ::TYPES[187/*Fuse.UserEventHandler*/]);
}

// internal static Fuse.UserEventDispatch GetByName(string name) [static] :239
UserEventDispatch* UserEventDispatch::GetByName(uString* name)
{
    uStackFrame __("Fuse.UserEventDispatch", "GetByName(string)");
    UserEventDispatch_typeof()->Init();
    bool ret2;
    UserEventDispatch* current;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(UserEventDispatch::_userEvents()), name, (void**)(&current), &ret2), ret2))
        return current;

    UserEventDispatch* ue = UserEventDispatch::New1();
    ue->Name(name);
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(UserEventDispatch::_userEvents()), name, ue);
    return ue;
}

// public generated UserEventDispatch New() [static] :230
UserEventDispatch* UserEventDispatch::New1()
{
    UserEventDispatch* obj1 = (UserEventDispatch*)uNew(UserEventDispatch_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.UserEvents/0.27.14/$.uno#2
// -------------------------------------------------------------

// public delegate void UserEventHandler(object sender, Fuse.UserEventArgs args) :228
uDelegateType* UserEventHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.UserEventHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::UserEventArgs_typeof());
    return type;
}

}} // ::g::Fuse
