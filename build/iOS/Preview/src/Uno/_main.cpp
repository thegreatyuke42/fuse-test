// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.27.20/Backends/CPlusPlus/Uno/_main.cpp'.
// WARNING: Changes might be lost if you edit this file directly.

#include <uBase/Array.h>
#include <uBase/Memory.h>
#include <XliPlatform/GL.h>
#include <XliPlatform/GLContext.h>
#include <XliPlatform/Application.h>
#include <Uno/Support.h>
#include <Uno.Exception.h>
#include <Uno.Platform2.Application.h>
#include <Uno.Runtime.Implementation.Internal.Bootstrapper.h>
#include <Uno.Runtime.Implementation.Internal.BootstrapHints.h>
#include <Uno.Runtime.Implementation.PlatformWindowImpl.h>
#include <Uno.Application.h>
#include <Uno.String.h>

#ifdef DEBUG_DUMPS
#include <stdio.h> // needed for sprintf
#endif

/**
    \addtogroup Main
    @{
*/
Xli::Window* _XliWindowPtr;
Xli::GLContext* _XliGLContextPtr;
uSStrong<uArray*> _CommandLineArgs = 0;
static const uBase::Array<uBase::String>* _BaseArgs;

class uApplication : public Xli::Application
{
    uBase::Auto<Xli::GLContext> _gl;

public:
    virtual uBase::String GetInitTitle()
    {
        return "Mods4Minecraft (preview)";
    }

    virtual void OnInit(Xli::Window* wnd)
    {
        _gl = Xli::GLContext::Create(wnd, Xli::GLContextAttributes::Default());

#ifdef U_GL_DESKTOP
        glEnable(GL_VERTEX_PROGRAM_POINT_SIZE);
#endif
        glClearColor(0, 0, 0, 0);
        glClear(GL_COLOR_BUFFER_BIT);

        _gl->SetSwapInterval(0);
        _gl->SwapBuffers();

        // Store global references to wnd and gl
        _XliWindowPtr = wnd;
        _XliGLContextPtr = _gl;
    }

    virtual void OnLoad(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::g::Uno::Platform2::Application::Start();
    }

    virtual void OnUpdate(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnUpdate();
    }

    virtual void OnDraw(Xli::Window* wnd)
    {
        {
            uAutoReleasePool pool;

            if (::g::Uno::Application::Current() && ::g::Uno::Application::Current()->NeedsRedraw())
            {
                ::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnDraw();
                _gl->SwapBuffers();
            }
        }

#ifdef DEBUG_DUMPS
        static int frame = 0;
        char path[32];
        sprintf(path, "draw%d.dot", frame++);
        uDumpAllStrongRefs(path);
#endif
    }

    virtual bool OnKeyDown(Xli::Window* wnd, Xli::Key key)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnKeyDown(wnd, key))
            return true;

#ifdef WIN32
        if (key == Xli::KeyF11)
        {
            wnd->SetFullscreen(!wnd->IsFullscreen());
            return true;
        }
#endif

        return false;
    }

    virtual bool OnKeyboardResized(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        return ::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnKeyboardResized(wnd);
    }

    virtual bool OnKeyUp(Xli::Window* wnd, Xli::Key key)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnKeyUp(wnd, key))
            return true;

        return false;
    }

    virtual bool OnTextInput(Xli::Window* wnd, const uBase::String& text)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnTextInput(wnd, uStringFromXliString(text)))
            return true;

        return false;
    }

    virtual bool OnMouseDown(Xli::Window* wnd, uBase::Vector2i pos, Xli::MouseButton button)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnMouseDown(wnd, pos.X, pos.Y, button))
            return true;

        return false;
    }

    virtual bool OnMouseUp(Xli::Window* wnd, uBase::Vector2i pos, Xli::MouseButton button)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnMouseUp(wnd, pos.X, pos.Y, button))
            return true;

        return false;
    }

    virtual bool OnMouseMove(Xli::Window* wnd, uBase::Vector2i pos)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnMouseMove(wnd, pos.X, pos.Y))
            return true;

        return false;
    }

    virtual bool OnMouseWheel(Xli::Window* wnd, uBase::Vector2i delta)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnMouseWheel(wnd, (float)delta.X, (float)delta.Y, 1))
            return true;

        return false;
    }

    virtual bool OnTouchDown(Xli::Window* wnd, uBase::Vector2 pos, int id)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnTouchDown(wnd, pos.X, pos.Y, id))
            return true;

        return false;
    }

    virtual bool OnTouchMove(Xli::Window* wnd, uBase::Vector2 pos, int id)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnTouchMove(wnd, pos.X, pos.Y, id))
            return true;

        return false;
    }

    virtual bool OnTouchUp(Xli::Window* wnd, uBase::Vector2 pos, int id)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnTouchUp(wnd, pos.X, pos.Y, id))
            return true;

        return false;
    }

    virtual void OnNativeHandleChanged(Xli::Window* wnd)
    {
        _gl->MakeCurrent(wnd);
    }

    virtual void OnSizeChanged(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnWindowSizeChanged(wnd);
        Application::OnSizeChanged(wnd);
    }

    virtual bool OnClosing(Xli::Window* wnd, bool& cancel)
    {
        uAutoReleasePool pool;

        // TODO
        return false;
    }

    virtual void OnClosed(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnWindowClosed(wnd);
    }

    virtual void OnAppLowMemory(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::g::Uno::Platform2::Application::OnReceivedLowMemoryWarning();
    }

    virtual void OnAppTerminating(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::g::Uno::Platform2::Application::Terminate();
    }

    virtual void OnAppDidEnterForeground(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::g::Uno::Platform2::Application::EnterInteractive();
    }

    virtual void OnAppDidEnterBackground(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::g::Uno::Platform2::Application::EnterBackground();
    }
};

int Main(const uBase::Array<uBase::String>& args)
{
    _BaseArgs = &args;
    uRuntime uno;
    uAutoReleasePool pool;

    try
    {
        uApplication app;
        Xli::Application::Run(&app);
    }
    catch (const uThrowable& t)
    {
        uBase::String str = "(null)";

        if (t.Exception)
            str = uStringToXliString(t.Exception->ToString());

        uBase::Exception x(str);
        x._func = t.Function;
        x._line = t.Line;
        throw x;
    }

    return 0;
}

namespace g{namespace Experimental{namespace Http{namespace Internal{uClassType* DateUtil_typeof();}}}}
namespace g{namespace Experimental{namespace Http{struct Loader_type; ::g::Experimental::Http::Loader_type* BinaryLoader_typeof();}}}
namespace g{namespace Experimental{namespace Http{struct Loader_type; ::g::Experimental::Http::Loader_type* TextLoader_typeof();}}}
namespace g{namespace Experimental{namespace Http{struct Loader_type; Loader_type* Loader_typeof();}}}
namespace g{namespace Experimental{namespace Http{uClassType* HttpLoader_typeof();}}}
namespace g{namespace Experimental{namespace Http{uClassType* LoaderConst_typeof();}}}
namespace g{namespace Experimental{namespace Http{uType* HttpResponseHeader_typeof();}}}
namespace g{namespace Experimental{namespace Physics{struct AdapterMultiplier_type; AdapterMultiplier_type* AdapterMultiplier_typeof();}}}
namespace g{namespace Experimental{namespace Physics{struct AngularAdapter_type; AngularAdapter_type* AngularAdapter_typeof();}}}
namespace g{namespace Experimental{namespace Physics{struct BasicBoundedRegion2D_type; BasicBoundedRegion2D_type* BasicBoundedRegion2D_typeof();}}}
namespace g{namespace Experimental{namespace Physics{struct ElasticForce_type; ElasticForce_type* ElasticForce_typeof();}}}
namespace g{namespace Experimental{namespace Physics{struct Friction_type; Friction_type* Friction_typeof();}}}
namespace g{namespace Experimental{namespace Physics{struct SmoothSnap_type; SmoothSnap_type* SmoothSnap_typeof();}}}
namespace g{namespace Experimental{namespace Physics{uClassType* DestinationSimulationFactory_typeof();}}}
namespace g{namespace Experimental{namespace Physics{uType* PointerVelocity_typeof();}}}
namespace g{namespace Experimental{namespace TextureLoader{uClassType* TextureLoader_typeof();}}}
namespace g{namespace Experimental{namespace TextureLoader{uClassType* TextureLoaderImpl_typeof();}}}
namespace g{namespace Experimental{namespace TextureLoader{uType* Callback_typeof();}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{uType* FocusManager_typeof();}}}}
namespace g{namespace Fuse{namespace Android{struct NativeTemplate_type; NativeTemplate_type* NativeTemplate_typeof();}}}
namespace g{namespace Fuse{namespace Android{uClassType* Helpers_typeof();}}}
namespace g{namespace Fuse{namespace Android{uType* Blitter_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Animator_type; ::g::Fuse::Animations::Animator_type* Change_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Animator_type; ::g::Fuse::Animations::Animator_type* Cycle_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Animator_type; ::g::Fuse::Animations::Animator_type* Nothing_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Animator_type; ::g::Fuse::Animations::Animator_type* OpenAnimator_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Animator_type; ::g::Fuse::Animations::Animator_type* Resize_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Animator_type; ::g::Fuse::Animations::Animator_type* Spin_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Animator_type; ::g::Fuse::Animations::Animator_type* TrackAnimator_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Animator_type; Animator_type* Animator_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct AnimatorState_type; AnimatorState_type* AnimatorState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Converter_type; ::g::Fuse::Animations::Converter_type* ConverterDouble_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Converter_type; ::g::Fuse::Animations::Converter_type* ConverterFloat_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Converter_type; ::g::Fuse::Animations::Converter_type* ConverterFloat2_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Converter_type; ::g::Fuse::Animations::Converter_type* ConverterFloat3_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Converter_type; ::g::Fuse::Animations::Converter_type* ConverterFloat4_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Converter_type; ::g::Fuse::Animations::Converter_type* ConverterSize_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Converter_type; ::g::Fuse::Animations::Converter_type* ConverterSize2_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Converter_type; Converter_type* Converter_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct DiscreteKeyframeTrack_type; DiscreteKeyframeTrack_type* DiscreteKeyframeTrack_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct DiscreteSingleTrack_type; DiscreteSingleTrack_type* DiscreteSingleTrack_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct EasingTrack_type; EasingTrack_type* EasingTrack_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MasterBase_type; ::g::Fuse::Animations::MasterBase_type* AverageMasterTransform_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MasterBase_type; ::g::Fuse::Animations::MasterBase_type* DiscreteMasterTransform_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MasterBase_type; ::g::Fuse::Animations::MasterBase_type* MasterTransform_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MasterBase_type; MasterBase_type* MasterBase_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MasterProperty_type; ::g::Fuse::Animations::MasterProperty_type* AverageMasterProperty_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MasterProperty_type; ::g::Fuse::Animations::MasterProperty_type* DiscreteMasterProperty_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MasterProperty_type; MasterProperty_type* MasterProperty_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MixerBase_type; ::g::Fuse::Animations::MixerBase_type* AverageMixer_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MixerBase_type; ::g::Fuse::Animations::MixerBase_type* DiscreteMixer_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MixerBase_type; MixerBase_type* MixerBase_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MixerHandle_type; MixerHandle_type* MixerHandle_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct OpenAnimatorState_type; ::g::Fuse::Animations::OpenAnimatorState_type* CycleState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct OpenAnimatorState_type; ::g::Fuse::Animations::OpenAnimatorState_type* SpinState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct OpenAnimatorState_type; OpenAnimatorState_type* OpenAnimatorState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct SplineTrack_type; SplineTrack_type* SplineTrack_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState_type; ::g::Fuse::Animations::TrackAnimatorState_type* ContinuousTrackChangeState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState_type; ::g::Fuse::Animations::TrackAnimatorState_type* DiscreteTrackChangeState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState_type; ::g::Fuse::Animations::TrackAnimatorState_type* NothingAnimatorState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState_type; ::g::Fuse::Animations::TrackAnimatorState_type* ResizeAnimatorState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState_type; ::g::Fuse::Animations::TrackAnimatorState_type* TransformAnimatorState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState_type; TrackAnimatorState_type* TrackAnimatorState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TransformAnimator_type; ::g::Fuse::Animations::TransformAnimator_type* Move_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TransformAnimator_type; ::g::Fuse::Animations::TransformAnimator_type* Rotate_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TransformAnimator_type; ::g::Fuse::Animations::TransformAnimator_type* Scale_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TransformAnimator_type; ::g::Fuse::Animations::TransformAnimator_type* Skew_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TransformAnimator_type; TransformAnimator_type* TransformAnimator_typeof();}}}
namespace g{namespace Fuse{namespace Animations{uClassType* EasingFunctions_typeof();}}}
namespace g{namespace Fuse{namespace Animations{uStructType* MasterBase__GFWResult_typeof();}}}
namespace g{namespace Fuse{namespace Animations{uType* CreateStateParams_typeof();}}}
namespace g{namespace Fuse{namespace Animations{uType* Keyframe_typeof();}}}
namespace g{namespace Fuse{namespace Animations{uType* Mixer_typeof();}}}
namespace g{namespace Fuse{namespace Animations{uType* Player_typeof();}}}
namespace g{namespace Fuse{namespace Animations{uType* PlayerPart_typeof();}}}
namespace g{namespace Fuse{namespace Animations{uType* TriggerAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Animations{uType* TriggerAnimationState_typeof();}}}
namespace g{namespace Fuse{namespace BasicTheme{uType* NativeWithFallbackTheme_typeof();}}}
namespace g{namespace Fuse{namespace Camera{struct iOSCameraImpl__TakePictureTask_type; iOSCameraImpl__TakePictureTask_type* iOSCameraImpl__TakePictureTask_typeof();}}}
namespace g{namespace Fuse{namespace Camera{uClassType* Camera_typeof();}}}
namespace g{namespace Fuse{namespace Camera{uClassType* iOSCameraImpl_typeof();}}}
namespace g{namespace Fuse{namespace Camera{uClassType* TakePictureHelpers_typeof();}}}
namespace g{namespace Fuse{namespace Camera{uType* iOSCameraHelper_typeof();}}}
namespace g{namespace Fuse{namespace Camera{uType* PictureResult_typeof();}}}
namespace g{namespace Fuse{namespace Camera{uType* TakePictureOptions_typeof();}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct LineCachePasswordTransform_type; LineCachePasswordTransform_type* LineCachePasswordTransform_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{uType* LineCache_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{uType* LineCacheLine_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{uType* TextEditVisual__DegreeSpan_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{uType* TextEditVisual__SwipeGestureHelper_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{uType* TextPosition_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{uType* TextSpan_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct ControlVisual_type; ::g::Fuse::Controls::Graphics::ControlVisual_type* TextVisual_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct ControlVisual_type; ControlVisual_type* ControlVisual_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct ControlVisual_type;}}} namespace Fuse{namespace Controls{namespace FallbackTextEdit{::g::Fuse::Controls::Graphics::ControlVisual_type* TextEditVisual_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct ControlVisual_type;}}} namespace Fuse{namespace Video{::g::Fuse::Controls::Graphics::ControlVisual_type* VideoVisual_typeof();}}}
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct TextRenderer_type; TextRenderer_type* TextRenderer_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct Visual_type; Visual_type* Visual_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Graphics{uClassType* PlatformTextRenderer_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Internal{uClassType* RectExtensions_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Internal{uClassType* WordWrapper_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Internal{uType* DefaultTextRenderer__FontKey_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Internal{uType* DefaultTextRenderer_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Internal{uType* WordWrapInfo_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Internal{uType* WordWrapperWord_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Internal{uType* WrappedLine_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{struct ContentControl_type; ::g::Fuse::Controls::ContentControl_type* Placeholder_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ContentControl_type; ::g::Fuse::Controls::ContentControl_type* ScrollView_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ContentControl_type; ::g::Fuse::Controls::ContentControl_type* ScrollViewer_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ContentControl_type; ::g::Fuse::Controls::ContentControl_type* Viewbox_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ContentControl_type; ContentControl_type* ContentControl_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* BottomBarBackground_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* BottomFrameBackground_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* RightFrameBackground_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* StatusBarBackground_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* TopFrameBackground_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; Control_type* Control_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct FallbackMapViewClient_type; FallbackMapViewClient_type* FallbackMapViewClient_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct FallbackWebViewClient_type; FallbackWebViewClient_type* FallbackWebViewClient_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct GraphicsView_type; GraphicsView_type* GraphicsView_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Image_type; Image_type* Image_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct JavaScriptCall_type; JavaScriptCall_type* JavaScriptCall_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct LoadHtmlCall_type; LoadHtmlCall_type* LoadHtmlCall_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct MapEventArgs_type; MapEventArgs_type* MapEventArgs_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct MapView_type; MapView_type* MapView_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct MarkerEventArgs_type; MarkerEventArgs_type* MarkerEventArgs_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Number_type; Number_type* Number_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct PageControl_type; PageControl_type* PageControl_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ParentControl_type; ::g::Fuse::Controls::ParentControl_type* BackButton_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ParentControl_type; ::g::Fuse::Controls::ParentControl_type* Button_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ParentControl_type; ::g::Fuse::Controls::ParentControl_type* ClientPanel_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ParentControl_type; ::g::Fuse::Controls::ParentControl_type* DockPanel_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ParentControl_type; ::g::Fuse::Controls::ParentControl_type* EdgeNavigator_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ParentControl_type; ::g::Fuse::Controls::ParentControl_type* Grid_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ParentControl_type; ::g::Fuse::Controls::ParentControl_type* MultiLayoutPanel_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ParentControl_type; ::g::Fuse::Controls::ParentControl_type* NativeViewHost_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ParentControl_type; ::g::Fuse::Controls::ParentControl_type* NavigationBar_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ParentControl_type; ::g::Fuse::Controls::ParentControl_type* Page_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ParentControl_type; ::g::Fuse::Controls::ParentControl_type* PageIndicator_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ParentControl_type; ::g::Fuse::Controls::ParentControl_type* PageIndicatorDot_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ParentControl_type; ::g::Fuse::Controls::ParentControl_type* Panel_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ParentControl_type; ::g::Fuse::Controls::ParentControl_type* PlainTextEdit_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ParentControl_type; ::g::Fuse::Controls::ParentControl_type* StackPanel_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ParentControl_type; ::g::Fuse::Controls::ParentControl_type* WrapPanel_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ParentControl_type; ParentControl_type* ParentControl_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ParentControl_type;}} namespace Outracks{namespace Simulator{::g::Fuse::Controls::ParentControl_type* FakeApp_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ParentControl_type;}} namespace Outracks{namespace Simulator{::g::Fuse::Controls::ParentControl_type* Flasher_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct PathShape_type; ::g::Fuse::Controls::PathShape_type* Ellipse_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct PathShape_type; ::g::Fuse::Controls::PathShape_type* Path_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct PathShape_type; ::g::Fuse::Controls::PathShape_type* RegularPolygon_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct PathShape_type; ::g::Fuse::Controls::PathShape_type* Star_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct PathShape_type; PathShape_type* PathShape_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Primitive_type; Primitive_type* Primitive_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct RangeControl_type; ::g::Fuse::Controls::RangeControl_type* Slider_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct RangeControl_type; RangeControl_type* RangeControl_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct RangeControl2D_type; RangeControl2D_type* RangeControl2D_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Shape_type; ::g::Fuse::Controls::Shape_type* Circle_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Shape_type; ::g::Fuse::Controls::Shape_type* Rectangle_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Shape_type; Shape_type* Shape_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct TextBlock_type; ::g::Fuse::Controls::TextBlock_type* Text_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct TextBlock_type; TextBlock_type* TextBlock_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct TextBlock_type;}} namespace Fuse{namespace BasicTheme{::g::Fuse::Controls::TextBlock_type* ButtonText_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct TextControl_type; ::g::Fuse::Controls::TextControl_type* TextEdit_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct TextControl_type; ::g::Fuse::Controls::TextControl_type* TextInput_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct TextControl_type; TextControl_type* TextControl_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ToggleControl_type; ::g::Fuse::Controls::ToggleControl_type* Switch_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ToggleControl_type; ToggleControl_type* ToggleControl_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Video_type; Video_type* Video_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct WebView_type; WebView_type* WebView_typeof();}}}
namespace g{namespace Fuse{namespace Controls{uClassType* KeyframeAccessors_typeof();}}}
namespace g{namespace Fuse{namespace Controls{uClassType* ZoomLevel_typeof();}}}
namespace g{namespace Fuse{namespace Controls{uType* FileVideoSource_typeof();}}}
namespace g{namespace Fuse{namespace Controls{uType* HTML_typeof();}}}
namespace g{namespace Fuse{namespace Controls{uType* ImageElementDraw_typeof();}}}
namespace g{namespace Fuse{namespace Controls{uType* PageControl__PageData_typeof();}}}
namespace g{namespace Fuse{namespace Controls{uType* ScrollPositionChangedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Controls{uType* ScrollPropertyChangedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Controls{uType* UrlVideoSource_typeof();}}}
namespace g{namespace Fuse{namespace Controls{uType* VideoSource_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* AdvancedAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* ChildExtensionAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* ColorAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* ComponentOfAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* DefaultComponentAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* DefaultInstanceAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* DesignerNameAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* DragDropPriorityAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* ExtensionAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* GroupAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* HideAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* HidesAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* IconAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* InlineAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* IntervalAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* OptionalHideAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* PriorityAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* RangeAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* RecursionSafeAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* RequiredComponentAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* SpawnableAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* SpawnsAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* ThicknessAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* TransitionAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{namespace Batching{uClassType* BatchHelpers_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Batching{uType* Batch_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Batching{uType* BatchIndexBuffer_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Batching{uType* BatchVertexBuffer_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Batching{uType* Entry_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Batching{uType* MeshBatcher_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Internal{uType* Float2Buffer_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Internal{uType* Float3Buffer_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Internal{uType* FloatBuffer_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Internal{uType* MultiBuffer__Field_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Internal{uType* MultiBuffer__Setter_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Internal{uType* MultiBuffer_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Internal{uType* TypedBuffer_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Internal{uType* UShortBuffer_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Meshes{uClassType* MeshGenerator_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Meshes{uClassType* MeshTools_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* Circle_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* ConcaveWedgeCoverage_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* ConvexWedgeCoverage_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* Coverage_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* FillCoverage_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* LimitCoverage_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* OneLimitCoverage_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* Rectangle_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* StrokeCoverage_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* Wedge_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* WedgeCoverage_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct Dict_type; ::g::Fuse::Drawing::Tesselation::Collections::Dict_type* ActiveRegionDict_typeof();}}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct Dict_type; Dict_type* Dict_typeof();}}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct LinkedListEnumerable_type; ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type* DictNodeEnumerable_typeof();}}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct LinkedListEnumerable_type; LinkedListEnumerable_type* LinkedListEnumerable_typeof();}}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct LinkedListEnumerable_type;}}}} namespace Fuse{namespace Drawing{namespace Tesselation{::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type* EdgeLoopEnumerable_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct LinkedListEnumerable_type;}}}} namespace Fuse{namespace Drawing{namespace Tesselation{::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type* EdgesEnumerable_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct LinkedListEnumerable_type;}}}} namespace Fuse{namespace Drawing{namespace Tesselation{::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type* FacesEnumerable_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct LinkedListEnumerable_type;}}}} namespace Fuse{namespace Drawing{namespace Tesselation{::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type* OriginEnumerable_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct LinkedListEnumerable_type;}}}} namespace Fuse{namespace Drawing{namespace Tesselation{::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type* VerticesEnumerable_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct LinkedListEnumerator_type; LinkedListEnumerator_type* LinkedListEnumerator_typeof();}}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct PriorityQueue_type; ::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue_type* VertexQueue_typeof();}}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct PriorityQueue_type; PriorityQueue_type* PriorityQueue_typeof();}}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{uType* DictNode_typeof();}}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{uClassType* Geom_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{uType* ActiveRegion_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{uType* Face_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{uType* HalfEdge_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{uType* Mesh_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{uType* MeshBuilder_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{uType* Sweep_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{uType* Vertex_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush_type; ::g::Fuse::Drawing::Brush_type* DynamicBrush_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush_type; ::g::Fuse::Drawing::Brush_type* LinearGradient_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush_type; ::g::Fuse::Drawing::Brush_type* StaticBrush_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush_type; Brush_type* Brush_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct ContourEnumerable_type; ContourEnumerable_type* ContourEnumerable_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct ContourEnumerator_type; ContourEnumerator_type* ContourEnumerator_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct ImageFill_type; ImageFill_type* ImageFill_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct LineCapImpl_type; ::g::Fuse::Drawing::LineCapImpl_type* ButtCap_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct LineCapImpl_type; ::g::Fuse::Drawing::LineCapImpl_type* RoundCap_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct LineCapImpl_type; LineCapImpl_type* LineCapImpl_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct LineJoinImpl_type; ::g::Fuse::Drawing::LineJoinImpl_type* MiterJoin_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct LineJoinImpl_type; LineJoinImpl_type* LineJoinImpl_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct NonConsecutiveEnumerable_type; NonConsecutiveEnumerable_type* NonConsecutiveEnumerable_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct NonConsecutiveEnumerator_type; NonConsecutiveEnumerator_type* NonConsecutiveEnumerator_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry_type; ::g::Fuse::Drawing::PathGeometry_type* ClosePath_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry_type; ::g::Fuse::Drawing::PathGeometry_type* ContourTerminator_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry_type; ::g::Fuse::Drawing::PathGeometry_type* CurveTo_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry_type; ::g::Fuse::Drawing::PathGeometry_type* HorizontalLineTo_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry_type; ::g::Fuse::Drawing::PathGeometry_type* LineTo_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry_type; ::g::Fuse::Drawing::PathGeometry_type* MoveTo_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry_type; ::g::Fuse::Drawing::PathGeometry_type* SmoothCurveTo_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry_type; ::g::Fuse::Drawing::PathGeometry_type* VerticalLineTo_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry_type; PathGeometry_type* PathGeometry_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct PolygonFiller_type; PolygonFiller_type* PolygonFiller_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct SolidColor_type; SolidColor_type* SolidColor_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct StaticSolidColor_type; StaticSolidColor_type* StaticSolidColor_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uClassType* BezierOp_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uClassType* BlendModeHelpers_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uClassType* Brushes_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uClassType* Colors_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uClassType* EllipseFactory_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uClassType* NonConsecutiveExtension_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uClassType* PathGeometryExtensions_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uClassType* RectangleFactory_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uClassType* RegularPolygonFactory_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uClassType* StarFactory_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uClassType* WindingRules_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uStructType* ImageFill__DrawParams_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* Border_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* Cache_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* Contour_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* GradientStop_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* LinearGradientDrawable_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* PathGeometryParser_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* PathGeometryRenderer_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* Polygon_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* PolygonDrawable_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* RendererContext_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* Stroke_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* Token_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* Util_typeof();}}}
namespace g{namespace Fuse{namespace Effects{struct BasicEffect_type; ::g::Fuse::Effects::BasicEffect_type* Blur_typeof();}}}
namespace g{namespace Fuse{namespace Effects{struct BasicEffect_type; ::g::Fuse::Effects::BasicEffect_type* Desaturate_typeof();}}}
namespace g{namespace Fuse{namespace Effects{struct BasicEffect_type; ::g::Fuse::Effects::BasicEffect_type* DropShadow_typeof();}}}
namespace g{namespace Fuse{namespace Effects{struct BasicEffect_type; ::g::Fuse::Effects::BasicEffect_type* Halftone_typeof();}}}
namespace g{namespace Fuse{namespace Effects{struct BasicEffect_type; BasicEffect_type* BasicEffect_typeof();}}}
namespace g{namespace Fuse{namespace Effects{struct Effect_type; Effect_type* Effect_typeof();}}}
namespace g{namespace Fuse{namespace Effects{struct Mask_type; Mask_type* Mask_typeof();}}}
namespace g{namespace Fuse{namespace Effects{uType* DropShadow__Blitter_typeof();}}}
namespace g{namespace Fuse{namespace Effects{uType* EffectHelpers_typeof();}}}
namespace g{namespace Fuse{namespace Elements{namespace Internal{uType* ElementDraw_typeof();}}}}
namespace g{namespace Fuse{namespace Elements{namespace Internal{uType* Scale9Rectangle_typeof();}}}}
namespace g{namespace Fuse{namespace Elements{struct BoxSizing_type; ::g::Fuse::Elements::BoxSizing_type* FillAspectBoxSizing_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct BoxSizing_type; ::g::Fuse::Elements::BoxSizing_type* LayoutMasterBoxSizing_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct BoxSizing_type; ::g::Fuse::Elements::BoxSizing_type* LimitBoxSizing_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct BoxSizing_type; ::g::Fuse::Elements::BoxSizing_type* NoImplicitMaxBoxSizing_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct BoxSizing_type; ::g::Fuse::Elements::BoxSizing_type* StandardBoxSizing_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct BoxSizing_type; BoxSizing_type* BoxSizing_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct Element_type; Element_type* Element_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct Element_type;}} namespace Fuse{namespace Controls{::g::Fuse::Elements::Element_type* MapMarker_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct Element_type;}} namespace Fuse{namespace Controls{namespace FallbackTextEdit{::g::Fuse::Elements::Element_type* TextWindow_typeof();}}}}
namespace g{namespace Fuse{namespace Elements{struct ElementAtlasFramebufferPoolImpl_type; ElementAtlasFramebufferPoolImpl_type* ElementAtlasFramebufferPoolImpl_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct ElementBatch_type; ElementBatch_type* ElementBatch_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct ElementBatcher_type; ElementBatcher_type* ElementBatcher_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct SingleNodeDrawable_type; SingleNodeDrawable_type* SingleNodeDrawable_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct TransformOrigins__AnchorOrigin_type; TransformOrigins__AnchorOrigin_type* TransformOrigins__AnchorOrigin_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct TransformOrigins__BoxCenter_type; TransformOrigins__BoxCenter_type* TransformOrigins__BoxCenter_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct TransformOrigins__CenterOrigin_type; TransformOrigins__CenterOrigin_type* TransformOrigins__CenterOrigin_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct TransformOrigins__TopLeftOrigin_type; TransformOrigins__TopLeftOrigin_type* TransformOrigins__TopLeftOrigin_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct TranslationModes__OffsetMode_type; ::g::Fuse::Elements::TranslationModes__OffsetMode_type* TranslationModes__PositionOffsetMode_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct TranslationModes__OffsetMode_type; ::g::Fuse::Elements::TranslationModes__OffsetMode_type* TranslationModes__TransformOriginOffsetMode_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct TranslationModes__OffsetMode_type; TranslationModes__OffsetMode_type* TranslationModes__OffsetMode_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct TranslationModes__RelativeResizeChangeMode_type; TranslationModes__RelativeResizeChangeMode_type* TranslationModes__RelativeResizeChangeMode_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct TranslationModes__SizeFactorMode_type; TranslationModes__SizeFactorMode_type* TranslationModes__SizeFactorMode_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct Viewport_type; Viewport_type* Viewport_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uClassType* AlignmentHelpers_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uClassType* DisplayHelpers_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uClassType* ElementAtlasFramebufferPool_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uClassType* TransformOrigins_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uClassType* TranslationModes_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uStructType* BoxPlacement_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uStructType* CacheTile_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uStructType* Element__GMSCacheItem_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* Cache_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* CacheHelper_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* ElementAtlas_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* ElementAtlasFramebuffer_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* ElementAtlasFramebufferPoolEntry_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* ElementBatchEntry_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* LayoutMasterBoxSizing__LayoutMasterData_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* PreplacementArgs_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* TextureAtlas_typeof();}}}
namespace g{namespace Fuse{namespace Entities{namespace Designer{uClassType* AnimationHelpers_typeof();}}}}
namespace g{namespace Fuse{namespace Entities{namespace Designer{uClassType* PreloadedResources_typeof();}}}}
namespace g{namespace Fuse{namespace Entities{namespace Filters{uType* Blitter_typeof();}}}}
namespace g{namespace Fuse{namespace Entities{namespace Internal{uType* SceneGraphBuilder_typeof();}}}}
namespace g{namespace Fuse{namespace Entities{namespace Internal{uType* SceneGraphBuilderVisitor_typeof();}}}}
namespace g{namespace Fuse{namespace Entities{namespace Processing{struct Extrude_type; Extrude_type* Extrude_typeof();}}}}
namespace g{namespace Fuse{namespace Entities{namespace Processing{struct Stroke_type; Stroke_type* Stroke_typeof();}}}}
namespace g{namespace Fuse{namespace Entities{struct Component_type; Component_type* Component_typeof();}}}
namespace g{namespace Fuse{namespace Entities{struct Frustum_type; Frustum_type* Frustum_typeof();}}}
namespace g{namespace Fuse{namespace Entities{struct Light_type; ::g::Fuse::Entities::Light_type* DirectionalLight_typeof();}}}
namespace g{namespace Fuse{namespace Entities{struct Light_type; ::g::Fuse::Entities::Light_type* EnvironmentLight_typeof();}}}
namespace g{namespace Fuse{namespace Entities{struct Light_type; ::g::Fuse::Entities::Light_type* PointLight_typeof();}}}
namespace g{namespace Fuse{namespace Entities{struct Light_type; ::g::Fuse::Entities::Light_type* SpotLight_typeof();}}}
namespace g{namespace Fuse{namespace Entities{struct Light_type; Light_type* Light_typeof();}}}
namespace g{namespace Fuse{namespace Entities{struct Mesh_type; Mesh_type* Mesh_typeof();}}}
namespace g{namespace Fuse{namespace Entities{struct MeshBatchingEngine_type; MeshBatchingEngine_type* MeshBatchingEngine_typeof();}}}
namespace g{namespace Fuse{namespace Entities{struct MeshRenderer_type; ::g::Fuse::Entities::MeshRenderer_type* SkinnedMeshRenderer_typeof();}}}
namespace g{namespace Fuse{namespace Entities{struct MeshRenderer_type; MeshRenderer_type* MeshRenderer_typeof();}}}
namespace g{namespace Fuse{namespace Entities{struct MeshRenderer_type; namespace Primitives{::g::Fuse::Entities::MeshRenderer_type* ConeRenderer_typeof();}}}}
namespace g{namespace Fuse{namespace Entities{struct MeshRenderer_type; namespace Primitives{::g::Fuse::Entities::MeshRenderer_type* CubeRenderer_typeof();}}}}
namespace g{namespace Fuse{namespace Entities{struct MeshRenderer_type; namespace Primitives{::g::Fuse::Entities::MeshRenderer_type* CylinderRenderer_typeof();}}}}
namespace g{namespace Fuse{namespace Entities{struct MeshRenderer_type; namespace Primitives{::g::Fuse::Entities::MeshRenderer_type* SphereRenderer_typeof();}}}}
namespace g{namespace Fuse{namespace Entities{struct RenderNode_type; ::g::Fuse::Entities::RenderNode_type* RenderToTexture_typeof();}}}
namespace g{namespace Fuse{namespace Entities{struct RenderNode_type; namespace Filters{::g::Fuse::Entities::RenderNode_type* Blur_typeof();}}}}
namespace g{namespace Fuse{namespace Entities{struct RenderNode_type; namespace Filters{::g::Fuse::Entities::RenderNode_type* FindEdges_typeof();}}}}
namespace g{namespace Fuse{namespace Entities{struct RenderNode_type; RenderNode_type* RenderNode_typeof();}}}
namespace g{namespace Fuse{namespace Entities{struct Scene_type; Scene_type* Scene_typeof();}}}
namespace g{namespace Fuse{namespace Entities{struct TriangleMeshIntersecter_type; ::g::Fuse::Entities::TriangleMeshIntersecter_type* DirectArrayMeshIntersecter_typeof();}}}
namespace g{namespace Fuse{namespace Entities{struct TriangleMeshIntersecter_type; ::g::Fuse::Entities::TriangleMeshIntersecter_type* IndexedArrayMeshIntersecter_typeof();}}}
namespace g{namespace Fuse{namespace Entities{struct TriangleMeshIntersecter_type; ::g::Fuse::Entities::TriangleMeshIntersecter_type* ModelMeshCollision__Direct_typeof();}}}
namespace g{namespace Fuse{namespace Entities{struct TriangleMeshIntersecter_type; ::g::Fuse::Entities::TriangleMeshIntersecter_type* ModelMeshCollision__Indexed_typeof();}}}
namespace g{namespace Fuse{namespace Entities{struct TriangleMeshIntersecter_type; TriangleMeshIntersecter_type* TriangleMeshIntersecter_typeof();}}}
namespace g{namespace Fuse{namespace Entities{struct VisitType_type; ::g::Fuse::Entities::VisitType_type* VisitAction_typeof();}}}
namespace g{namespace Fuse{namespace Entities{struct VisitType_type; ::g::Fuse::Entities::VisitType_type* VisitPredicate_typeof();}}}
namespace g{namespace Fuse{namespace Entities{struct VisitType_type; VisitType_type* VisitType_typeof();}}}
namespace g{namespace Fuse{namespace Entities{uClassType* ModelMeshHelpers_typeof();}}}
namespace g{namespace Fuse{namespace Entities{uClassType* NodeExtensions_typeof();}}}
namespace g{namespace Fuse{namespace Entities{uClassType* Raycasting_typeof();}}}
namespace g{namespace Fuse{namespace Entities{uStructType* Entry_typeof();}}}
namespace g{namespace Fuse{namespace Entities{uType* DefaultMaterial_typeof();}}}
namespace g{namespace Fuse{namespace Entities{uType* Material_typeof();}}}
namespace g{namespace Fuse{namespace Entities{uType* ModelMeshCollision_typeof();}}}
namespace g{namespace Fuse{namespace Entities{uType* Raycasting__EntityVisitor_typeof();}}}
namespace g{namespace Fuse{namespace Entities{uType* Skinner_typeof();}}}
namespace g{namespace Fuse{namespace GeoLocation{struct IOSLocationProvider__LocationListenerBase_type; ::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase_type* IOSLocationProvider__ContinuesListener_typeof();}}}
namespace g{namespace Fuse{namespace GeoLocation{struct IOSLocationProvider__LocationListenerBase_type; ::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase_type* IOSLocationProvider__PromiseListener_typeof();}}}
namespace g{namespace Fuse{namespace GeoLocation{struct IOSLocationProvider__LocationListenerBase_type; IOSLocationProvider__LocationListenerBase_type* IOSLocationProvider__LocationListenerBase_typeof();}}}
namespace g{namespace Fuse{namespace GeoLocation{struct IOSLocationProvider_type; IOSLocationProvider_type* IOSLocationProvider_typeof();}}}
namespace g{namespace Fuse{namespace GeoLocation{uType* GeoCoordinates_typeof();}}}
namespace g{namespace Fuse{namespace GeoLocation{uType* Location_typeof();}}}
namespace g{namespace Fuse{namespace GeoLocation{uType* LocationTracker_typeof();}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{uType* EdgeSwiper_typeof();}}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{uType* Swiper_typeof();}}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{uType* SwipeRegion_typeof();}}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{uType* TwoFinger__Point_typeof();}}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{uType* TwoFinger_typeof();}}}}
namespace g{namespace Fuse{namespace Gestures{struct TransformGesture_type; ::g::Fuse::Gestures::TransformGesture_type* PanGesture_typeof();}}}
namespace g{namespace Fuse{namespace Gestures{struct TransformGesture_type; ::g::Fuse::Gestures::TransformGesture_type* RotateGesture_typeof();}}}
namespace g{namespace Fuse{namespace Gestures{struct TransformGesture_type; ::g::Fuse::Gestures::TransformGesture_type* ZoomGesture_typeof();}}}
namespace g{namespace Fuse{namespace Gestures{struct TransformGesture_type; TransformGesture_type* TransformGesture_typeof();}}}
namespace g{namespace Fuse{namespace Gestures{uStructType* double2_typeof();}}}
namespace g{namespace Fuse{namespace Gestures{uType* Clicker_typeof();}}}
namespace g{namespace Fuse{namespace Gestures{uType* DegreeSpan_typeof();}}}
namespace g{namespace Fuse{namespace Gestures{uType* SwipeGestureHelper_typeof();}}}
namespace g{namespace Fuse{namespace Input{namespace UX{uClassType* AttachedFocusMembers_typeof();}}}}
namespace g{namespace Fuse{namespace Input{namespace UX{uClassType* AttachedKeyboardMembers_typeof();}}}}
namespace g{namespace Fuse{namespace Input{namespace UX{uClassType* AttachedPointerMembers_typeof();}}}}
namespace g{namespace Fuse{namespace Input{struct Pointer__DefaultPointerEventResponder_type; Pointer__DefaultPointerEventResponder_type* Pointer__DefaultPointerEventResponder_typeof();}}}
namespace g{namespace Fuse{namespace Input{uClassType* Focus_typeof();}}}
namespace g{namespace Fuse{namespace Input{uClassType* FocusPredictStrategy_typeof();}}}
namespace g{namespace Fuse{namespace Input{uClassType* HitTestHelpers_typeof();}}}
namespace g{namespace Fuse{namespace Input{uClassType* Keyboard_typeof();}}}
namespace g{namespace Fuse{namespace Input{uClassType* Pointer_typeof();}}}
namespace g{namespace Fuse{namespace Input{uClassType* TextService_typeof();}}}
namespace g{namespace Fuse{namespace Input{uClassType* TraverseNodeExtensions_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* Capturer_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* Pointer__PELHolder_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* Pointer__PointerRecord_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* PointerEventData_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* SelectionQuery_typeof();}}}
namespace g{namespace Fuse{namespace Internal{namespace Drawing{uType* SolidRectangle_typeof();}}}}
namespace g{namespace Fuse{namespace Internal{struct Blender_type; ::g::Fuse::Internal::Blender_type* Float2Blender_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct Blender_type; ::g::Fuse::Internal::Blender_type* Float3Blender_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct Blender_type; ::g::Fuse::Internal::Blender_type* Float4Blender_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct Blender_type; ::g::Fuse::Internal::Blender_type* Size2Blender_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct Blender_type; ::g::Fuse::Internal::Blender_type* SizeBlender_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct Blender_type; Blender_type* Blender_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct ScalarBlender_type; ::g::Fuse::Internal::ScalarBlender_type* DoubleBlender_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct ScalarBlender_type; ::g::Fuse::Internal::ScalarBlender_type* FloatBlender_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct ScalarBlender_type; ScalarBlender_type* ScalarBlender_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uClassType* FrustumMatrix_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uClassType* FuseConfig_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uClassType* Statistics_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uClassType* VectorUtil_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uType* BlenderMap_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uType* ImageContainer_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uType* SimpleLock_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uType* SizingContainer_typeof();}}}
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct Control_type; ::g::Fuse::iOS::Controls::Control_type* Button_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct Control_type; ::g::Fuse::iOS::Controls::Control_type* Image_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct Control_type; ::g::Fuse::iOS::Controls::Control_type* Slider_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct Control_type; ::g::Fuse::iOS::Controls::Control_type* Switch_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct Control_type; ::g::Fuse::iOS::Controls::Control_type* TextBlock_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct Control_type; ::g::Fuse::iOS::Controls::Control_type* TextInput_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct Control_type; Control_type* Control_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct Element_type; Element_type* Element_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct MapView_type; MapView_type* MapView_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct MultilineTextInput_type; MultilineTextInput_type* MultilineTextInput_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct Shape_type; ::g::Fuse::iOS::Controls::Shape_type* Circle_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct Shape_type; ::g::Fuse::iOS::Controls::Shape_type* Rectangle_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct Shape_type; Shape_type* Shape_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct SingleLineTextInput_type; SingleLineTextInput_type* SingleLineTextInput_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct WebView_type; WebView_type* WebView_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace Controls{uClassType* ControlProperties_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace Controls{uClassType* ImageCache_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace Controls{uClassType* WKWebViewHelpers_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace NativeViews{struct NativeView_type; ::g::Fuse::iOS::NativeViews::NativeView_type* GenericNativeView_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace NativeViews{struct NativeView_type; ::g::Fuse::iOS::NativeViews::NativeView_type* LeafNativeView_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace NativeViews{struct NativeView_type; NativeView_type* NativeView_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace NativeViews{struct ParentNativeView_type; ::g::Fuse::iOS::NativeViews::ParentNativeView_type* ContentControl_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace NativeViews{struct ParentNativeView_type; ::g::Fuse::iOS::NativeViews::ParentNativeView_type* GraphicsView_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace NativeViews{struct ParentNativeView_type; ::g::Fuse::iOS::NativeViews::ParentNativeView_type* NativeViewHost_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace NativeViews{struct ParentNativeView_type; ::g::Fuse::iOS::NativeViews::ParentNativeView_type* ParentControl_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace NativeViews{struct ParentNativeView_type; ParentNativeView_type* ParentNativeView_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace NativeViews{struct ScrollView_type; ScrollView_type* ScrollView_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace NativeViews{uType* NativeViewBlitter_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{struct ControlEvent_type; ControlEvent_type* ControlEvent_typeof();}}}
namespace g{namespace Fuse{namespace iOS{struct NativeTemplate_type; NativeTemplate_type* NativeTemplate_typeof();}}}
namespace g{namespace Fuse{namespace iOS{struct TextRenderer_type; TextRenderer_type* TextRenderer_typeof();}}}
namespace g{namespace Fuse{namespace iOS{struct UIControlCallback_type; ::g::Fuse::iOS::UIControlCallback_type* InputDispatch__TouchEvents_typeof();}}}
namespace g{namespace Fuse{namespace iOS{struct UIControlCallback_type; UIControlCallback_type* UIControlCallback_typeof();}}}
namespace g{namespace Fuse{namespace iOS{uClassType* FirstResponder_typeof();}}}
namespace g{namespace Fuse{namespace iOS{uClassType* FontCache_typeof();}}}
namespace g{namespace Fuse{namespace iOS{uClassType* InputDispatch_typeof();}}}
namespace g{namespace Fuse{namespace iOS{uClassType* iOSBindingView_typeof();}}}
namespace g{namespace Fuse{namespace iOS{uClassType* iOSDeviceInterop_typeof();}}}
namespace g{namespace Fuse{namespace iOS{uClassType* iOSExtensions_typeof();}}}
namespace g{namespace Fuse{namespace iOS{uClassType* iOSInterop_typeof();}}}
namespace g{namespace Fuse{namespace iOS{uClassType* NSAttributedStringConstants_typeof();}}}
namespace g{namespace Fuse{namespace iOS{uClassType* RootView_typeof();}}}
namespace g{namespace Fuse{namespace iOS{uClassType* Transform_typeof();}}}
namespace g{namespace Fuse{namespace iOS{uType* Blitter_typeof();}}}
namespace g{namespace Fuse{namespace iOS{uType* TextLayout_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout_type; ::g::Fuse::Layouts::Layout_type* CircleLayout_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout_type; ::g::Fuse::Layouts::Layout_type* ColumnLayout_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout_type; ::g::Fuse::Layouts::Layout_type* DefaultLayout_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout_type; ::g::Fuse::Layouts::Layout_type* DockLayout_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout_type; ::g::Fuse::Layouts::Layout_type* GridLayout_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout_type; ::g::Fuse::Layouts::Layout_type* StackLayout_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout_type; ::g::Fuse::Layouts::Layout_type* WrapLayout_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout_type; Layout_type* Layout_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{uClassType* Layouts_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{uStructType* DefinitionBase__ParseDataItem_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{uType* Column_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{uType* DefinitionBase_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{uType* Row_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct BackForwardNavigationTriggerAction_type; ::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type* GoBack_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct BackForwardNavigationTriggerAction_type; ::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type* GoForward_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct BackForwardNavigationTriggerAction_type; BackForwardNavigationTriggerAction_type* BackForwardNavigationTriggerAction_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct DefaultNavigationAnimator_type; DefaultNavigationAnimator_type* DefaultNavigationAnimator_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct DefaultNavigationAnimatorPlayer_type; DefaultNavigationAnimatorPlayer_type* DefaultNavigationAnimatorPlayer_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigatedArgs_type; NavigatedArgs_type* NavigatedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct Navigation_type; ::g::Fuse::Navigation::Navigation_type* DirectNavigation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct Navigation_type; ::g::Fuse::Navigation::Navigation_type* EdgeNavigation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct Navigation_type; ::g::Fuse::Navigation::Navigation_type* HierarchicalNavigation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct Navigation_type; ::g::Fuse::Navigation::Navigation_type* LinearNavigation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct Navigation_type; ::g::Fuse::Navigation::Navigation_type* StructuredNavigation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct Navigation_type; Navigation_type* Navigation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type; ::g::Fuse::Navigation::NavigationAnimation_type* ActivatingAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type; ::g::Fuse::Navigation::NavigationAnimation_type* DeactivatingAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type; ::g::Fuse::Navigation::NavigationAnimation_type* EnterExitAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type; ::g::Fuse::Navigation::NavigationAnimation_type* EnteringAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type; ::g::Fuse::Navigation::NavigationAnimation_type* ExitingAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type; NavigationAnimation_type* NavigationAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type;}} namespace Fuse{namespace Controls{namespace PageControlBit{::g::Fuse::Navigation::NavigationAnimation_type* EnterHorizontal_typeof();}}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type;}} namespace Fuse{namespace Controls{namespace PageControlBit{::g::Fuse::Navigation::NavigationAnimation_type* EnterVertical_typeof();}}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type;}} namespace Fuse{namespace Controls{namespace PageControlBit{::g::Fuse::Navigation::NavigationAnimation_type* ExitHorizontal_typeof();}}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type;}} namespace Fuse{namespace Controls{namespace PageControlBit{::g::Fuse::Navigation::NavigationAnimation_type* ExitVertical_typeof();}}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationTriggerAction_type; ::g::Fuse::Navigation::NavigationTriggerAction_type* NavigateTo_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationTriggerAction_type; ::g::Fuse::Navigation::NavigationTriggerAction_type* NavigateToggle_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationTriggerAction_type; NavigationTriggerAction_type* NavigationTriggerAction_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct PageResourceBinding_type; PageResourceBinding_type* PageResourceBinding_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct SeekNavigationAnimatorPlayer_type; SeekNavigationAnimatorPlayer_type* SeekNavigationAnimatorPlayer_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileHistoryTrigger_type; ::g::Fuse::Navigation::WhileHistoryTrigger_type* WhileCanGoBack_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileHistoryTrigger_type; ::g::Fuse::Navigation::WhileHistoryTrigger_type* WhileCanGoForward_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileHistoryTrigger_type; WhileHistoryTrigger_type* WhileHistoryTrigger_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileNavigationTrigger_type; ::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileActive_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileNavigationTrigger_type; ::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInactive_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileNavigationTrigger_type; ::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInEnterState_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileNavigationTrigger_type; ::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInExitState_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileNavigationTrigger_type; WhileNavigationTrigger_type* WhileNavigationTrigger_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uClassType* NavigationPageProperty_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uClassType* NavTriggerUtil_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uClassType* PlayerFactory_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uType* EndSeekArgs_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uType* NavigationArgs_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uType* NavigationStateArgs_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uType* NavigationTween_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uType* ProgressSpan_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uType* ProgressTimer_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uType* UpdateSeekArgs_typeof();}}}
namespace g{namespace Fuse{namespace Physics{struct Draggable_type; Draggable_type* Draggable_typeof();}}}
namespace g{namespace Fuse{namespace Physics{struct ForceField_type; ::g::Fuse::Physics::ForceField_type* PointAttractor_typeof();}}}
namespace g{namespace Fuse{namespace Physics{struct ForceField_type; ForceField_type* ForceField_typeof();}}}
namespace g{namespace Fuse{namespace Physics{struct ForceFieldEventArgs_type; ForceFieldEventArgs_type* ForceFieldEventArgs_typeof();}}}
namespace g{namespace Fuse{namespace Physics{struct ForceFieldTrigger_type; ::g::Fuse::Physics::ForceFieldTrigger_type* EnteredForceField_typeof();}}}
namespace g{namespace Fuse{namespace Physics{struct ForceFieldTrigger_type; ::g::Fuse::Physics::ForceFieldTrigger_type* ExitedForceField_typeof();}}}
namespace g{namespace Fuse{namespace Physics{struct ForceFieldTrigger_type; ::g::Fuse::Physics::ForceFieldTrigger_type* ForceFieldEventTrigger_typeof();}}}
namespace g{namespace Fuse{namespace Physics{struct ForceFieldTrigger_type; ::g::Fuse::Physics::ForceFieldTrigger_type* InForceFieldAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Physics{struct ForceFieldTrigger_type; ForceFieldTrigger_type* ForceFieldTrigger_typeof();}}}
namespace g{namespace Fuse{namespace Physics{struct Spring_type; Spring_type* Spring_typeof();}}}
namespace g{namespace Fuse{namespace Physics{uType* Body_typeof();}}}
namespace g{namespace Fuse{namespace Physics{uType* World_typeof();}}}
namespace g{namespace Fuse{namespace Preview{uClassType* SelectionManager_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uClassType* Bundle_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uClassType* Camera_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uClassType* FileReaderImpl_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uClassType* Globals_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uClassType* Storage_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uClassType* Vibration_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uType* Builtins_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uType* Bundle__ReadClosure_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uType* Email_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uType* FileReaderImpl__FileReadCommand_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uType* FunctionClosure_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uType* Http__FuseJSHttpClient_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uType* Http__FuseJSHttpRequest_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uType* Http_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uType* InterApp_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uType* Lifecycle_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uType* Maps_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uType* Phone_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uType* RaiseEvent_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uType* TimerManager__Timer_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uType* TimerManager_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uType* TimerModule__CallbackClosure_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uType* UserEvents_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{struct Binding_type; ::g::Fuse::Reactive::Binding_type* EventBinding_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct Binding_type; Binding_type* Binding_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct CascadingPathSubscription_type; CascadingPathSubscription_type* CascadingPathSubscription_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct DataBinding_type; ::g::Fuse::Reactive::DataBinding_type* DataToResourceBinding_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct DataBinding_type; DataBinding_type* DataBinding_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct Dispatcher_type; Dispatcher_type* Dispatcher_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct Each_type; Each_type* Each_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct InternalPathSubscription_type; InternalPathSubscription_type* InternalPathSubscription_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct JavaScript_type; JavaScript_type* JavaScript_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct Match_type; Match_type* Match_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct ObservableSubscription_type; ObservableSubscription_type* ObservableSubscription_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct ScriptObjectSerializer_type; ScriptObjectSerializer_type* ScriptObjectSerializer_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker_type; ThreadWorker_type* ThreadWorker_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct WhileCount_type; ::g::Fuse::Reactive::WhileCount_type* WhileEmpty_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct WhileCount_type; WhileCount_type* WhileCount_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{uClassType* Console_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{uClassType* DebugLog_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{uType* CascadingPathSubscription__BindAttempt_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{uType* Case_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{uType* JavaScript__CallClosure_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{uType* Observable_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{uType* ScriptEventArgs_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct DisposalPolicy_type; ::g::Fuse::Resources::DisposalPolicy_type* ExpirationDisposalPolicy_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct DisposalPolicy_type; ::g::Fuse::Resources::DisposalPolicy_type* RetainDisposalPolicy_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct DisposalPolicy_type; DisposalPolicy_type* DisposalPolicy_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct GenericResourceConverter_type; GenericResourceConverter_type* GenericResourceConverter_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSource_type; ::g::Fuse::Resources::ImageSource_type* FileImageSource_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSource_type; ::g::Fuse::Resources::ImageSource_type* HttpImageSource_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSource_type; ::g::Fuse::Resources::ImageSource_type* MultiDensityImageSource_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSource_type; ::g::Fuse::Resources::ImageSource_type* TextureImageSource_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSource_type; ImageSource_type* ImageSource_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSourceErrorArgs_type; ImageSourceErrorArgs_type* ImageSourceErrorArgs_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct LoadingImageSource_type; ::g::Fuse::Resources::LoadingImageSource_type* FileImageSourceImpl_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct LoadingImageSource_type; ::g::Fuse::Resources::LoadingImageSource_type* HttpImageSourceImpl_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct LoadingImageSource_type; LoadingImageSource_type* LoadingImageSource_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct NumericResourceConverter_type; ::g::Fuse::Resources::NumericResourceConverter_type* DoubleResourceConverter_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct NumericResourceConverter_type; ::g::Fuse::Resources::NumericResourceConverter_type* FloatResourceConverter_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct NumericResourceConverter_type; ::g::Fuse::Resources::NumericResourceConverter_type* IntResourceConverter_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct NumericResourceConverter_type; NumericResourceConverter_type* NumericResourceConverter_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct PolicyDeferredDisposable_type; PolicyDeferredDisposable_type* PolicyDeferredDisposable_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uClassType* DisposalManager_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uClassType* FileImageSourceCache_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uClassType* HttpImageSourceCache_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uClassType* ResourceConverters_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uClassType* ResourceRegistry_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uType* HttpImageSourceImpl__BackgroundLoad_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uType* MemoryPolicy_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uType* ProxyImageSource_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{namespace Duktape{uClassType* duktape_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{namespace Duktape{uStructType* duk_context_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{namespace Duktape{uType* RawCallback_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScriptCore{uType* Marshaller__CallbackExceptionHandler_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScriptCore{uType* Marshaller_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{struct Array_type; Array_type* Array_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Array_type; namespace Duktape{::g::Fuse::Scripting::Array_type* Array_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{struct Array_type; namespace JavaScriptCore{::g::Fuse::Scripting::Array_type* Array_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{struct BoolChangedArgs_type; BoolChangedArgs_type* BoolChangedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Context_type; Context_type* Context_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Context_type; namespace Duktape{::g::Fuse::Scripting::Context_type* Context_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context_type; namespace JavaScriptCore{::g::Fuse::Scripting::Context_type* Context_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{struct DoubleChangedArgs_type; DoubleChangedArgs_type* DoubleChangedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Function_type; Function_type* Function_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Function_type; namespace Duktape{::g::Fuse::Scripting::Function_type* Function_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{struct Function_type; namespace JavaScriptCore{::g::Fuse::Scripting::Function_type* Function_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{struct Module_type; ::g::Fuse::Scripting::Module_type* CodeModule_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Module_type; ::g::Fuse::Scripting::Module_type* FileModule_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Module_type; ::g::Fuse::Scripting::Module_type* ScriptModule_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Module_type; Module_type* Module_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeMember_type; ::g::Fuse::Scripting::NativeMember_type* NativeFunction_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeMember_type; ::g::Fuse::Scripting::NativeMember_type* NativePromise_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeMember_type; NativeMember_type* NativeMember_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type; NativeModule_type* NativeModule_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type;}} namespace Fuse{namespace Reactive{namespace FuseJS{::g::Fuse::Scripting::NativeModule_type* Base64_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type;}} namespace Fuse{namespace Reactive{namespace FuseJS{::g::Fuse::Scripting::NativeModule_type* Environment_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type;}} namespace Fuse{namespace Reactive{namespace FuseJS{::g::Fuse::Scripting::NativeModule_type* GeoLocation_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type;}} namespace Fuse{namespace Reactive{namespace FuseJS{::g::Fuse::Scripting::NativeModule_type* TimerModule_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeProperty_type; ::g::Fuse::Scripting::NativeProperty_type* NativeEvent_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeProperty_type; NativeProperty_type* NativeProperty_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Object_type; namespace Duktape{::g::Fuse::Scripting::Object_type* Object_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{struct Object_type; namespace JavaScriptCore{::g::Fuse::Scripting::Object_type* Object_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{struct Object_type; Object_type* Object_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptMethod_type; ::g::Fuse::Scripting::ScriptMethod_type* ScriptMethod1_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptMethod_type; ScriptMethod_type* ScriptMethod_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct StringChangedArgs_type; StringChangedArgs_type* StringChangedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uClassType* JSCallback__NumberConverter_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uClassType* JSCallback_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uClassType* Marshal_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uClassType* Value_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* External_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* FactoryClosure_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* JSCallback__ActionClosure_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* JSCallback__ActionClosure1_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* JSCallback__ActionClosure2_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* JSCallback__FuncClosure_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* JSCallback__FuncClosure1_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* JSCallback__FuncClosure2_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* ModuleResult_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* NativeFunction__NativeFunctionClosure_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* NativePromise__ContextClosure_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* NativePromise__PromiseClosure_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* ScriptClass_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* ScriptModule__RequireContext_typeof();}}}
namespace g{namespace Fuse{namespace Shapes{struct PathShape_type; ::g::Fuse::Shapes::PathShape_type* Ellipse_typeof();}}}
namespace g{namespace Fuse{namespace Shapes{struct PathShape_type; ::g::Fuse::Shapes::PathShape_type* Path_typeof();}}}
namespace g{namespace Fuse{namespace Shapes{struct PathShape_type; ::g::Fuse::Shapes::PathShape_type* RegularPolygon_typeof();}}}
namespace g{namespace Fuse{namespace Shapes{struct PathShape_type; ::g::Fuse::Shapes::PathShape_type* Star_typeof();}}}
namespace g{namespace Fuse{namespace Shapes{struct PathShape_type; PathShape_type* PathShape_typeof();}}}
namespace g{namespace Fuse{namespace Shapes{struct Shape_type; ::g::Fuse::Shapes::Shape_type* Circle_typeof();}}}
namespace g{namespace Fuse{namespace Shapes{struct Shape_type; ::g::Fuse::Shapes::Shape_type* Rectangle_typeof();}}}
namespace g{namespace Fuse{namespace Shapes{struct Shape_type; Shape_type* Shape_typeof();}}}
namespace g{namespace Fuse{namespace Shapes{uType* GeometryCache_typeof();}}}
namespace g{namespace Fuse{namespace Shapes{uType* GeometryCacheEntry_typeof();}}}
namespace g{namespace Fuse{namespace Storage{uClassType* ApplicationDir_typeof();}}}
namespace g{namespace Fuse{namespace Storage{uType* ApplicationDir__ReadClosure_typeof();}}}
namespace g{namespace Fuse{namespace Storage{uType* ApplicationDir__WriteClosure_typeof();}}}
namespace g{namespace Fuse{namespace Themes{struct GraphicsTemplate_type; GraphicsTemplate_type* GraphicsTemplate_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct DebugFrame_type; DebugFrame_type* DebugFrame_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct DebugProperty_type; DebugProperty_type* DebugProperty_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct DebugTime_type; DebugTime_type* DebugTime_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct JSEventArgs_type; JSEventArgs_type* JSEventArgs_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct LoadHtml_type; LoadHtml_type* LoadHtml_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* BringIntoView_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* BringToFront_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Call_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Callback_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* CancelInteractions_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Collapse_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* DebugAction_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* EvaluateJS_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* GiveFocus_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Hide_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* LaunchEmail_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* LaunchMaps_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* LaunchUri_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Pause_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* PlaybackAction_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* PlayTo_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Pulse_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* PulseBackward_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* PulseForward_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* RaiseUserEvent_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* ReleaseFocus_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Resume_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* SendToBack_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Set_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Show_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Stop_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* TransitionLayout_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* TransitionState_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; TriggerAction_type* TriggerAction_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type;}}} namespace Fuse{namespace Controls{::g::Fuse::Triggers::Actions::TriggerAction_type* Toggle_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type;}}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Actions::TriggerAction_type* ScrollableGoto_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type;}}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Actions::TriggerAction_type* SetSwipeActive_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type;}}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Actions::TriggerAction_type* ToggleSwipeActive_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type;}}} namespace Fuse{namespace Vibration{::g::Fuse::Triggers::Actions::TriggerAction_type* Vibrate_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct WebViewNavAction_type; ::g::Fuse::Triggers::Actions::WebViewNavAction_type* LoadUrl_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct WebViewNavAction_type; ::g::Fuse::Triggers::Actions::WebViewNavAction_type* Reload_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct WebViewNavAction_type; ::g::Fuse::Triggers::Actions::WebViewNavAction_type* StopLoading_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct WebViewNavAction_type; WebViewNavAction_type* WebViewNavAction_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{uType* UserEventArg_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{struct LayoutTransition__PositionChangeMode_type; LayoutTransition__PositionChangeMode_type* LayoutTransition__PositionChangeMode_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct LayoutTransition__ResizeChangeMode_type; LayoutTransition__ResizeChangeMode_type* LayoutTransition__ResizeChangeMode_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct LayoutTransition__ScaleChangeMode_type; LayoutTransition__ScaleChangeMode_type* LayoutTransition__ScaleChangeMode_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct LayoutTransition__WorldPositionChangeMode_type; LayoutTransition__WorldPositionChangeMode_type* LayoutTransition__WorldPositionChangeMode_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Timeline_type; Timeline_type* Timeline_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* AddingAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* Android_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* ContainingText_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* InteractionCompleted_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* iOS_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* LayoutAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* OnBackButton_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* OnKeyPress_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* OnUserEvent_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* PageBeginLoading_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* PageLoaded_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* ProgressAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* PullToReload_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* RangeAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* RemovingAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* ScrollingAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* State_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* TextInputActionTriggered_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileCompleted_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileContainsText_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileFailed_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileFocused_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileFocusWithin_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileInteracting_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileKeyboardVisible_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileLoading_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileNotFocused_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhilePageLoading_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhilePaused_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhilePlaying_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileScrollable_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileTrigger_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileVisible_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; Trigger_type* Trigger_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Controls{::g::Fuse::Triggers::Trigger_type* DefaultSwitchBehavior_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* Clicked_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* ClickerTrigger_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* DoubleClicked_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* DoubleTapped_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* EdgeSwipeAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* LongPressed_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* Pressed_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* Released_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* Swiped_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* SwipingAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* Tapped_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* WhileClickerTrigger_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* WhileHovering_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* WhilePressed_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* WhileSwipeActive_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Navigation{::g::Fuse::Triggers::Trigger_type* WhileNavigating_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Physics{::g::Fuse::Triggers::Trigger_type* WhileDragging_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Reactive{::g::Fuse::Triggers::Trigger_type* Select_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileEnabledDisabledTrigger_type; ::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type* WhileDisabled_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileEnabledDisabledTrigger_type; ::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type* WhileEnabled_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileEnabledDisabledTrigger_type; WhileEnabledDisabledTrigger_type* WhileEnabledDisabledTrigger_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileKeyboardVisible__RelativeToKeyboardMode_type; WhileKeyboardVisible__RelativeToKeyboardMode_type* WhileKeyboardVisible__RelativeToKeyboardMode_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileValue_type; ::g::Fuse::Triggers::WhileValue_type* WhileBool_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileValue_type; ::g::Fuse::Triggers::WhileValue_type* WhileFalse_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileValue_type; ::g::Fuse::Triggers::WhileValue_type* WhileFloat_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileValue_type; ::g::Fuse::Triggers::WhileValue_type* WhileTrue_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileValue_type; WhileValue_type* WhileValue_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WindowSizeTrigger_type; ::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowAspect_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WindowSizeTrigger_type; ::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowLandscape_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WindowSizeTrigger_type; ::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowPortrait_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WindowSizeTrigger_type; ::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowSize_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WindowSizeTrigger_type; WindowSizeTrigger_type* WindowSizeTrigger_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{uClassType* LayoutTransition_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{uClassType* WhileValueStatic_typeof();}}}
namespace g{namespace Fuse{namespace Vibration{uClassType* Vibration_typeof();}}}
namespace g{namespace Fuse{namespace Video{namespace Graphics{namespace iOS{namespace Internal{struct VideoPlayer_type; VideoPlayer_type* VideoPlayer_typeof();}}}}}}
namespace g{namespace Fuse{namespace Video{namespace Graphics{namespace iOS{namespace Internal{uClassType* VideoPlayerImpl_typeof();}}}}}}
namespace g{namespace Fuse{namespace Video{namespace Graphics{namespace iOS{uType* VideoLoader_typeof();}}}}}
namespace g{namespace Fuse{namespace Video{struct VideoContainer_type; VideoContainer_type* VideoContainer_typeof();}}}
namespace g{namespace Fuse{namespace Video{uClassType* VideoDiskCache_typeof();}}}
namespace g{namespace Fuse{namespace Video{uClassType* VideoLoader_typeof();}}}
namespace g{namespace Fuse{namespace Video{uType* Scale9Rectangle_typeof();}}}
namespace g{namespace Fuse{namespace Video{uType* VideoDrawElement_typeof();}}}
namespace g{namespace Fuse{struct AppBase_type; ::g::Fuse::AppBase_type* App_typeof();}}
namespace g{namespace Fuse{struct AppBase_type; AppBase_type* AppBase_typeof();}}
namespace g{namespace Fuse{struct AppBase_type;} ::g::Fuse::AppBase_type* MainView_typeof();}
namespace g{namespace Fuse{struct BeginRemoveArgs_type; BeginRemoveArgs_type* BeginRemoveArgs_typeof();}}
namespace g{namespace Fuse{struct BeginRemoveArgs_type; namespace Controls{::g::Fuse::BeginRemoveArgs_type* BeginRemoveArgsImpl_typeof();}}}
namespace g{namespace Fuse{struct Behavior_type; ::g::Fuse::Behavior_type* AlternateRoot_typeof();}}
namespace g{namespace Fuse{struct Behavior_type; ::g::Fuse::Behavior_type* UserEvent_typeof();}}
namespace g{namespace Fuse{struct Behavior_type; Behavior_type* Behavior_typeof();}}
namespace g{namespace Fuse{struct Behavior_type; namespace Android{::g::Fuse::Behavior_type* StatusBarConfig_typeof();}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Android{namespace NativeViews{::g::Fuse::Behavior_type* ContentControl_typeof();}}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Android{namespace NativeViews{::g::Fuse::Behavior_type* GraphicsView_typeof();}}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Android{namespace NativeViews{::g::Fuse::Behavior_type* LeafNativeView_typeof();}}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Android{namespace NativeViews{::g::Fuse::Behavior_type* NativeView_typeof();}}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Android{namespace NativeViews{::g::Fuse::Behavior_type* NativeViewHost_typeof();}}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Android{namespace NativeViews{::g::Fuse::Behavior_type* ParentControl_typeof();}}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Android{namespace NativeViews{::g::Fuse::Behavior_type* ParentNativeView_typeof();}}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Android{namespace NativeViews{::g::Fuse::Behavior_type* ScrollView_typeof();}}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Android{namespace NativeViews{::g::Fuse::Behavior_type* SurfaceView_typeof();}}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Android{namespace NativeViews{::g::Fuse::Behavior_type* TextureView_typeof();}}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Animations{::g::Fuse::Behavior_type* Attractor_typeof();}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Animations{::g::Fuse::Behavior_type* RangeAdapter_typeof();}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Controls{::g::Fuse::Behavior_type* MultiLayout_typeof();}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Controls{::g::Fuse::Behavior_type* PropertyBinding_typeof();}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Controls{namespace Graphics{::g::Fuse::Behavior_type* LinearSliderBehavior_typeof();}}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Gestures{::g::Fuse::Behavior_type* CircularRangeBehavior_typeof();}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Gestures{::g::Fuse::Behavior_type* KeepFocusInView_typeof();}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Gestures{::g::Fuse::Behavior_type* KeepInView_typeof();}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Gestures{::g::Fuse::Behavior_type* KeepInViewCommon_typeof();}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Gestures{::g::Fuse::Behavior_type* LinearRangeBehavior_typeof();}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Gestures{::g::Fuse::Behavior_type* Scroller_typeof();}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Gestures{::g::Fuse::Behavior_type* SwipeGesture_typeof();}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Gestures{::g::Fuse::Behavior_type* Trackball_typeof();}}}
namespace g{namespace Fuse{struct Behavior_type; namespace iOS{::g::Fuse::Behavior_type* StatusBarConfig_typeof();}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Navigation{::g::Fuse::Behavior_type* SwipeNavigate_typeof();}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Resources{::g::Fuse::Behavior_type* ResourceBinding_typeof();}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Resources{::g::Fuse::Behavior_type* ResourceBool_typeof();}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Resources{::g::Fuse::Behavior_type* ResourceFloat_typeof();}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Resources{::g::Fuse::Behavior_type* ResourceFloat2_typeof();}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Resources{::g::Fuse::Behavior_type* ResourceFloat3_typeof();}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Resources{::g::Fuse::Behavior_type* ResourceFloat4_typeof();}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Resources{::g::Fuse::Behavior_type* ResourceObject_typeof();}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Resources{::g::Fuse::Behavior_type* ResourceSetter_typeof();}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Resources{::g::Fuse::Behavior_type* ResourceString_typeof();}}}
namespace g{namespace Fuse{struct Behavior_type; namespace Triggers{::g::Fuse::Behavior_type* StateGroup_typeof();}}}
namespace g{namespace Fuse{struct FixedViewport_type; FixedViewport_type* FixedViewport_typeof();}}
namespace g{namespace Fuse{struct FramebufferPoolImpl_type; FramebufferPoolImpl_type* FramebufferPoolImpl_typeof();}}
namespace g{namespace Fuse{struct Node_type; namespace Android{namespace Controls{::g::Fuse::Node_type* Button_typeof();}}}}
namespace g{namespace Fuse{struct Node_type; namespace Android{namespace Controls{::g::Fuse::Node_type* CheckBox_typeof();}}}}
namespace g{namespace Fuse{struct Node_type; namespace Android{namespace Controls{::g::Fuse::Node_type* Circle_typeof();}}}}
namespace g{namespace Fuse{struct Node_type; namespace Android{namespace Controls{::g::Fuse::Node_type* CompoundButton_typeof();}}}}
namespace g{namespace Fuse{struct Node_type; namespace Android{namespace Controls{::g::Fuse::Node_type* Control_typeof();}}}}
namespace g{namespace Fuse{struct Node_type; namespace Android{namespace Controls{::g::Fuse::Node_type* Element_typeof();}}}}
namespace g{namespace Fuse{struct Node_type; namespace Android{namespace Controls{::g::Fuse::Node_type* Image_typeof();}}}}
namespace g{namespace Fuse{struct Node_type; namespace Android{namespace Controls{::g::Fuse::Node_type* MapView_typeof();}}}}
namespace g{namespace Fuse{struct Node_type; namespace Android{namespace Controls{::g::Fuse::Node_type* PlainTextEdit_typeof();}}}}
namespace g{namespace Fuse{struct Node_type; namespace Android{namespace Controls{::g::Fuse::Node_type* RadioButton_typeof();}}}}
namespace g{namespace Fuse{struct Node_type; namespace Android{namespace Controls{::g::Fuse::Node_type* Rectangle_typeof();}}}}
namespace g{namespace Fuse{struct Node_type; namespace Android{namespace Controls{::g::Fuse::Node_type* SeekBar_typeof();}}}}
namespace g{namespace Fuse{struct Node_type; namespace Android{namespace Controls{::g::Fuse::Node_type* Shape_typeof();}}}}
namespace g{namespace Fuse{struct Node_type; namespace Android{namespace Controls{::g::Fuse::Node_type* Switch_typeof();}}}}
namespace g{namespace Fuse{struct Node_type; namespace Android{namespace Controls{::g::Fuse::Node_type* TextEdit_typeof();}}}}
namespace g{namespace Fuse{struct Node_type; namespace Android{namespace Controls{::g::Fuse::Node_type* TextView_typeof();}}}}
namespace g{namespace Fuse{struct Node_type; namespace Android{namespace Controls{::g::Fuse::Node_type* TextViewBase_typeof();}}}}
namespace g{namespace Fuse{struct Node_type; namespace Android{namespace Controls{::g::Fuse::Node_type* ToggleButton_typeof();}}}}
namespace g{namespace Fuse{struct Node_type; namespace Android{namespace Controls{::g::Fuse::Node_type* WebView_typeof();}}}}
namespace g{namespace Fuse{struct Node_type; namespace Entities{::g::Fuse::Node_type* Entity_typeof();}}}
namespace g{namespace Fuse{struct Node_type; Node_type* Node_typeof();}}
namespace g{namespace Fuse{struct NodeEvent_type; namespace Input{::g::Fuse::NodeEvent_type* FocusGained_typeof();}}}
namespace g{namespace Fuse{struct NodeEvent_type; namespace Input{::g::Fuse::NodeEvent_type* FocusLost_typeof();}}}
namespace g{namespace Fuse{struct NodeEvent_type; namespace Input{::g::Fuse::NodeEvent_type* IsFocusableChangedEvent_typeof();}}}
namespace g{namespace Fuse{struct NodeEvent_type; namespace Input{::g::Fuse::NodeEvent_type* KeyPressed_typeof();}}}
namespace g{namespace Fuse{struct NodeEvent_type; namespace Input{::g::Fuse::NodeEvent_type* KeyReleased_typeof();}}}
namespace g{namespace Fuse{struct NodeEvent_type; namespace Input{::g::Fuse::NodeEvent_type* PointerEntered_typeof();}}}
namespace g{namespace Fuse{struct NodeEvent_type; namespace Input{::g::Fuse::NodeEvent_type* PointerLeft_typeof();}}}
namespace g{namespace Fuse{struct NodeEvent_type; namespace Input{::g::Fuse::NodeEvent_type* PointerMoved_typeof();}}}
namespace g{namespace Fuse{struct NodeEvent_type; namespace Input{::g::Fuse::NodeEvent_type* PointerPressed_typeof();}}}
namespace g{namespace Fuse{struct NodeEvent_type; namespace Input{::g::Fuse::NodeEvent_type* PointerReleased_typeof();}}}
namespace g{namespace Fuse{struct NodeEvent_type; namespace Input{::g::Fuse::NodeEvent_type* PointerWheelMoved_typeof();}}}
namespace g{namespace Fuse{struct NodeEvent_type; namespace Input{::g::Fuse::NodeEvent_type* TextEntered_typeof();}}}
namespace g{namespace Fuse{struct NodeEvent_type; namespace Triggers{::g::Fuse::NodeEvent_type* LayoutTransitioned_typeof();}}}
namespace g{namespace Fuse{struct NodeEvent_type; NodeEvent_type* NodeEvent_typeof();}}
namespace g{namespace Fuse{struct NodeEventArgs_type; namespace Controls{::g::Fuse::NodeEventArgs_type* TextInputActionArgs_typeof();}}}
namespace g{namespace Fuse{struct NodeEventArgs_type; namespace Gestures{::g::Fuse::NodeEventArgs_type* ClickedArgs_typeof();}}}
namespace g{namespace Fuse{struct NodeEventArgs_type; namespace Gestures{::g::Fuse::NodeEventArgs_type* DoubleTappedArgs_typeof();}}}
namespace g{namespace Fuse{struct NodeEventArgs_type; namespace Gestures{::g::Fuse::NodeEventArgs_type* LongPressedArgs_typeof();}}}
namespace g{namespace Fuse{struct NodeEventArgs_type; namespace Gestures{::g::Fuse::NodeEventArgs_type* TappedArgs_typeof();}}}
namespace g{namespace Fuse{struct NodeEventArgs_type; namespace Input{::g::Fuse::NodeEventArgs_type* CustomPointerEventArgs_typeof();}}}
namespace g{namespace Fuse{struct NodeEventArgs_type; namespace Input{::g::Fuse::NodeEventArgs_type* FocusGainedArgs_typeof();}}}
namespace g{namespace Fuse{struct NodeEventArgs_type; namespace Input{::g::Fuse::NodeEventArgs_type* FocusLostArgs_typeof();}}}
namespace g{namespace Fuse{struct NodeEventArgs_type; namespace Input{::g::Fuse::NodeEventArgs_type* IsFocusableChangedArgs_typeof();}}}
namespace g{namespace Fuse{struct NodeEventArgs_type; namespace Input{::g::Fuse::NodeEventArgs_type* KeyEventArgs_typeof();}}}
namespace g{namespace Fuse{struct NodeEventArgs_type; namespace Input{::g::Fuse::NodeEventArgs_type* KeyPressedArgs_typeof();}}}
namespace g{namespace Fuse{struct NodeEventArgs_type; namespace Input{::g::Fuse::NodeEventArgs_type* KeyReleasedArgs_typeof();}}}
namespace g{namespace Fuse{struct NodeEventArgs_type; namespace Input{::g::Fuse::NodeEventArgs_type* PointerEnteredArgs_typeof();}}}
namespace g{namespace Fuse{struct NodeEventArgs_type; namespace Input{::g::Fuse::NodeEventArgs_type* PointerEventArgs_typeof();}}}
namespace g{namespace Fuse{struct NodeEventArgs_type; namespace Input{::g::Fuse::NodeEventArgs_type* PointerLeftArgs_typeof();}}}
namespace g{namespace Fuse{struct NodeEventArgs_type; namespace Input{::g::Fuse::NodeEventArgs_type* PointerMovedArgs_typeof();}}}
namespace g{namespace Fuse{struct NodeEventArgs_type; namespace Input{::g::Fuse::NodeEventArgs_type* PointerPressedArgs_typeof();}}}
namespace g{namespace Fuse{struct NodeEventArgs_type; namespace Input{::g::Fuse::NodeEventArgs_type* PointerReleasedArgs_typeof();}}}
namespace g{namespace Fuse{struct NodeEventArgs_type; namespace Input{::g::Fuse::NodeEventArgs_type* PointerWheelMovedArgs_typeof();}}}
namespace g{namespace Fuse{struct NodeEventArgs_type; namespace Input{::g::Fuse::NodeEventArgs_type* TextEnteredArgs_typeof();}}}
namespace g{namespace Fuse{struct NodeEventArgs_type; namespace Triggers{::g::Fuse::NodeEventArgs_type* LayoutTransitionedArgs_typeof();}}}
namespace g{namespace Fuse{struct NodeEventArgs_type; NodeEventArgs_type* NodeEventArgs_typeof();}}
namespace g{namespace Fuse{struct OrthographicFrustum_type; OrthographicFrustum_type* OrthographicFrustum_typeof();}}
namespace g{namespace Fuse{struct PerspectiveFrustum_type; PerspectiveFrustum_type* PerspectiveFrustum_typeof();}}
namespace g{namespace Fuse{struct RootViewport_type; namespace Desktop{::g::Fuse::RootViewport_type* DesktopRootViewport_typeof();}}}
namespace g{namespace Fuse{struct RootViewport_type; RootViewport_type* RootViewport_typeof();}}
namespace g{namespace Fuse{struct ScalingModes__IdentityMode_type; ScalingModes__IdentityMode_type* ScalingModes__IdentityMode_typeof();}}
namespace g{namespace Fuse{struct Style_type; ::g::Fuse::Style_type* GraphicsTheme_typeof();}}
namespace g{namespace Fuse{struct Style_type; ::g::Fuse::Style_type* NativeTheme_typeof();}}
namespace g{namespace Fuse{struct Style_type; ::g::Fuse::Style_type* Theme_typeof();}}
namespace g{namespace Fuse{struct Style_type; namespace Android{::g::Fuse::Style_type* NativeStyle_typeof();}}}
namespace g{namespace Fuse{struct Style_type; namespace BasicTheme{::g::Fuse::Style_type* BasicStyle_typeof();}}}
namespace g{namespace Fuse{struct Style_type; namespace BasicTheme{::g::Fuse::Style_type* BasicTheme_typeof();}}}
namespace g{namespace Fuse{struct Style_type; namespace Desktop{::g::Fuse::Style_type* NativeStyle_typeof();}}}
namespace g{namespace Fuse{struct Style_type; namespace iOS{::g::Fuse::Style_type* NativeStyle_typeof();}}}
namespace g{namespace Fuse{struct Style_type; namespace Themes{::g::Fuse::Style_type* GraphicsStyle_typeof();}}}
namespace g{namespace Fuse{struct Style_type; Style_type* Style_typeof();}}
namespace g{namespace Fuse{struct StyleProperty_type; ::g::Fuse::StyleProperty_type* StyleProperty1_typeof();}}
namespace g{namespace Fuse{struct StyleProperty_type; StyleProperty_type* StyleProperty_typeof();}}
namespace g{namespace Fuse{struct Transform_type; ::g::Fuse::Transform_type* Rotation_typeof();}}
namespace g{namespace Fuse{struct Transform_type; ::g::Fuse::Transform_type* Scaling_typeof();}}
namespace g{namespace Fuse{struct Transform_type; ::g::Fuse::Transform_type* Shear_typeof();}}
namespace g{namespace Fuse{struct Transform_type; ::g::Fuse::Transform_type* Translation_typeof();}}
namespace g{namespace Fuse{struct Transform_type; namespace Animations{::g::Fuse::Transform_type* FastMatrixTransform_typeof();}}}
namespace g{namespace Fuse{struct Transform_type; namespace Elements{::g::Fuse::Transform_type* InteractiveTransform_typeof();}}}
namespace g{namespace Fuse{struct Transform_type; namespace Entities{::g::Fuse::Transform_type* Transform3D_typeof();}}}
namespace g{namespace Fuse{struct Transform_type; Transform_type* Transform_typeof();}}
namespace g{namespace Fuse{struct TranslationModes__LocalMode_type; TranslationModes__LocalMode_type* TranslationModes__LocalMode_typeof();}}
namespace g{namespace Fuse{struct TranslationModes__ParentSizeMode_type; TranslationModes__ParentSizeMode_type* TranslationModes__ParentSizeMode_typeof();}}
namespace g{namespace Fuse{struct TranslationModes__SizeMode_type; TranslationModes__SizeMode_type* TranslationModes__SizeMode_typeof();}}
namespace g{namespace Fuse{struct UpdateDispatcher_type; UpdateDispatcher_type* UpdateDispatcher_typeof();}}
namespace g{namespace Fuse{struct UserEventArgs_type; UserEventArgs_type* UserEventArgs_typeof();}}
namespace g{namespace Fuse{uClassType* Diagnostics_typeof();}}
namespace g{namespace Fuse{uClassType* Fonts_typeof();}}
namespace g{namespace Fuse{uClassType* FramebufferPool_typeof();}}
namespace g{namespace Fuse{uClassType* GraphicsWorker_typeof();}}
namespace g{namespace Fuse{uClassType* Launcher_typeof();}}
namespace g{namespace Fuse{uClassType* NameRegistry_typeof();}}
namespace g{namespace Fuse{uClassType* NodeListCache_typeof();}}
namespace g{namespace Fuse{uClassType* ScalingModes_typeof();}}
namespace g{namespace Fuse{uClassType* Time_typeof();}}
namespace g{namespace Fuse{uClassType* TranslationModes_typeof();}}
namespace g{namespace Fuse{uClassType* UpdateManager_typeof();}}
namespace g{namespace Fuse{uStructType* LayoutParams_typeof();}}
namespace g{namespace Fuse{uStructType* Node__InteractionItem_typeof();}}
namespace g{namespace Fuse{uType* CacheFramebuffer_typeof();}}
namespace g{namespace Fuse{uType* DataContextChangedArgs_typeof();}}
namespace g{namespace Fuse{uType* DrawArgs_typeof();}}
namespace g{namespace Fuse{uType* DrawContext_typeof();}}
namespace g{namespace Fuse{uType* DrawHelpers_typeof();}}
namespace g{namespace Fuse{uType* FastMatrix_typeof();}}
namespace g{namespace Fuse{uType* Font_typeof();}}
namespace g{namespace Fuse{uType* FrustumViewport_typeof();}}
namespace g{namespace Fuse{uType* HitTestContext_typeof();}}
namespace g{namespace Fuse{uType* HitTestResult_typeof();}}
namespace g{namespace Fuse{uType* KeyboardBootstrapper_typeof();}}
namespace g{namespace Fuse{uType* MobileBootstrapping_typeof();}}
namespace g{namespace Fuse{uType* Node__HitTestRecord_typeof();}}
namespace g{namespace Fuse{uType* NodeBounds_typeof();}}
namespace g{namespace Fuse{uType* PlacedArgs_typeof();}}
namespace g{namespace Fuse{uType* Properties_typeof();}}
namespace g{namespace Fuse{uType* PropertyHandle_typeof();}}
namespace g{namespace Fuse{uType* RenderTargetEntry_typeof();}}
namespace g{namespace Fuse{uType* RequestBringIntoViewArgs_typeof();}}
namespace g{namespace Fuse{uType* Stage_typeof();}}
namespace g{namespace Fuse{uType* Timer_typeof();}}
namespace g{namespace Fuse{uType* UnhandledExceptionArgs_typeof();}}
namespace g{namespace Fuse{uType* UpdateListener_typeof();}}
namespace g{namespace Fuse{uType* UserEventDispatch_typeof();}}
namespace g{namespace iOS{namespace AudioToolbox{uClassType* Functions_typeof();}}}
namespace g{namespace iOS{namespace CoreFoundation{uStructType* CFStringRef_typeof();}}}
namespace g{namespace iOS{namespace CoreGraphics{uClassType* Functions_typeof();}}}
namespace g{namespace iOS{namespace CoreGraphics{uStructType* CGAffineTransform_typeof();}}}
namespace g{namespace iOS{namespace CoreGraphics{uStructType* CGColorRef_typeof();}}}
namespace g{namespace iOS{namespace CoreGraphics{uStructType* CGColorSpaceRef_typeof();}}}
namespace g{namespace iOS{namespace CoreGraphics{uStructType* CGContextRef_typeof();}}}
namespace g{namespace iOS{namespace CoreGraphics{uStructType* CGDataProviderRef_typeof();}}}
namespace g{namespace iOS{namespace CoreGraphics{uStructType* CGFontRef_typeof();}}}
namespace g{namespace iOS{namespace CoreGraphics{uStructType* CGPathRef_typeof();}}}
namespace g{namespace iOS{namespace CoreGraphics{uStructType* CGPoint_typeof();}}}
namespace g{namespace iOS{namespace CoreGraphics{uStructType* CGRect_typeof();}}}
namespace g{namespace iOS{namespace CoreGraphics{uStructType* CGSize_typeof();}}}
namespace g{namespace iOS{namespace CoreImage{struct CIImage_type; CIImage_type* CIImage_typeof();}}}
namespace g{namespace iOS{namespace CoreLocation{namespace Interop{struct ICLLocationManagerDelegate_type; ICLLocationManagerDelegate_type* ICLLocationManagerDelegate_typeof();}}}}
namespace g{namespace iOS{namespace CoreLocation{struct CLHeading_type; CLHeading_type* CLHeading_typeof();}}}
namespace g{namespace iOS{namespace CoreLocation{struct CLLocation_type; CLLocation_type* CLLocation_typeof();}}}
namespace g{namespace iOS{namespace CoreLocation{struct CLRegion_type; ::g::iOS::CoreLocation::CLRegion_type* CLBeaconRegion_typeof();}}}
namespace g{namespace iOS{namespace CoreLocation{struct CLRegion_type; CLRegion_type* CLRegion_typeof();}}}
namespace g{namespace iOS{namespace CoreLocation{struct CLVisit_type; CLVisit_type* CLVisit_typeof();}}}
namespace g{namespace iOS{namespace CoreLocation{uStructType* CLLocationCoordinate2D_typeof();}}}
namespace g{namespace iOS{namespace Foundation{namespace Interop{struct INSCopying_type; INSCopying_type* INSCopying_typeof();}}}}
namespace g{namespace iOS{namespace Foundation{struct NSArray_type; ::g::iOS::Foundation::NSArray_type* NSMutableArray_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSArray_type; NSArray_type* NSArray_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSAttributedString_type; ::g::iOS::Foundation::NSAttributedString_type* NSMutableAttributedString_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSAttributedString_type; NSAttributedString_type* NSAttributedString_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSAttributedString_type;}} namespace iOS{namespace UIKit{::g::iOS::Foundation::NSAttributedString_type* NSTextStorage_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSDate_type; NSDate_type* NSDate_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSDictionary_type; ::g::iOS::Foundation::NSDictionary_type* NSMutableDictionary_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSDictionary_type; NSDictionary_type* NSDictionary_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSError_type; NSError_type* NSError_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSIndexSet_type; NSIndexSet_type* NSIndexSet_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSMutableOrderedSet_type; NSMutableOrderedSet_type* NSMutableOrderedSet_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type; ::g::iOS::Foundation::NSObject_type* NSBundle_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type; ::g::iOS::Foundation::NSObject_type* NSCoder_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type; ::g::iOS::Foundation::NSObject_type* NSExtensionContext_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type; ::g::iOS::Foundation::NSObject_type* NSFileManager_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type; ::g::iOS::Foundation::NSObject_type* NSInvocation_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type; ::g::iOS::Foundation::NSObject_type* NSKeyedArchiver_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type; ::g::iOS::Foundation::NSObject_type* NSMethodSignature_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type; ::g::iOS::Foundation::NSObject_type* NSThread_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type; ::g::iOS::Foundation::NSObject_type* NSUndoManager_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type; ::g::iOS::Foundation::NSObject_type* NSURLCache_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type; ::g::iOS::Foundation::NSObject_type* NSUserActivity_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type; NSObject_type* NSObject_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type;}} namespace iOS{namespace CoreLocation{::g::iOS::Foundation::NSObject_type* CLLocationManager_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type;}} namespace iOS{namespace MapKit{::g::iOS::Foundation::NSObject_type* MKOverlayRenderer_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type;}} namespace iOS{namespace OpenGLES{::g::iOS::Foundation::NSObject_type* EAGLContext_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type;}} namespace iOS{namespace OpenGLES{::g::iOS::Foundation::NSObject_type* EAGLSharegroup_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type;}} namespace iOS{namespace QuartzCore{::g::iOS::Foundation::NSObject_type* CAGradientLayer_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type;}} namespace iOS{namespace QuartzCore{::g::iOS::Foundation::NSObject_type* CALayer_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type;}} namespace iOS{namespace QuartzCore{::g::iOS::Foundation::NSObject_type* CAShapeLayer_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type;}} namespace iOS{namespace UIKit{::g::iOS::Foundation::NSObject_type* NSLayoutConstraint_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type;}} namespace iOS{namespace UIKit{::g::iOS::Foundation::NSObject_type* NSLayoutManager_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type;}} namespace iOS{namespace UIKit{::g::iOS::Foundation::NSObject_type* NSTextAttachment_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type;}} namespace iOS{namespace UIKit{::g::iOS::Foundation::NSObject_type* NSTextContainer_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type;}} namespace iOS{namespace UIKit{::g::iOS::Foundation::NSObject_type* UIBarButtonItem_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type;}} namespace iOS{namespace UIKit{::g::iOS::Foundation::NSObject_type* UIDevice_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type;}} namespace iOS{namespace UIKit{::g::iOS::Foundation::NSObject_type* UIEvent_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type;}} namespace iOS{namespace UIKit{::g::iOS::Foundation::NSObject_type* UIGestureRecognizer_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type;}} namespace iOS{namespace UIKit{::g::iOS::Foundation::NSObject_type* UIImage_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type;}} namespace iOS{namespace UIKit{::g::iOS::Foundation::NSObject_type* UINavigationItem_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type;}} namespace iOS{namespace UIKit{::g::iOS::Foundation::NSObject_type* UISearchDisplayController_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type;}} namespace iOS{namespace UIKit{::g::iOS::Foundation::NSObject_type* UIStoryboard_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type;}} namespace iOS{namespace UIKit{::g::iOS::Foundation::NSObject_type* UIStoryboardSegue_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type;}} namespace iOS{namespace UIKit{::g::iOS::Foundation::NSObject_type* UITabBarItem_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type;}} namespace iOS{namespace UIKit{::g::iOS::Foundation::NSObject_type* UITextInputMode_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type;}} namespace iOS{namespace UIKit{::g::iOS::Foundation::NSObject_type* UITextPosition_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type;}} namespace iOS{namespace UIKit{::g::iOS::Foundation::NSObject_type* UITextRange_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type;}} namespace iOS{namespace UIKit{::g::iOS::Foundation::NSObject_type* UITouch_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSObject_type;}} namespace iOS{namespace WebKit{::g::iOS::Foundation::NSObject_type* WKNavigation_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSSet_type; ::g::iOS::Foundation::NSSet_type* NSMutableSet_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSSet_type; NSSet_type* NSSet_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSString_type; NSString_type* NSString_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSURL_type; NSURL_type* NSURL_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSURLRequest_type; NSURLRequest_type* NSURLRequest_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSUUID_type; NSUUID_type* NSUUID_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSValue_type; ::g::iOS::Foundation::NSValue_type* NSNumber_typeof();}}}
namespace g{namespace iOS{namespace Foundation{struct NSValue_type; NSValue_type* NSValue_typeof();}}}
namespace g{namespace iOS{namespace Foundation{uStructType* _NSRange_typeof();}}}
namespace g{namespace iOS{namespace MapKit{namespace Interop{struct IMKAnnotation_type; IMKAnnotation_type* IMKAnnotation_typeof();}}}}
namespace g{namespace iOS{namespace MapKit{namespace Interop{struct IMKMapViewDelegate_type; IMKMapViewDelegate_type* IMKMapViewDelegate_typeof();}}}}
namespace g{namespace iOS{namespace MapKit{namespace Interop{struct IMKOverlay_type; IMKOverlay_type* IMKOverlay_typeof();}}}}
namespace g{namespace iOS{namespace MapKit{struct MKMapCamera_type; MKMapCamera_type* MKMapCamera_typeof();}}}
namespace g{namespace iOS{namespace MapKit{struct MKUserLocation_type; MKUserLocation_type* MKUserLocation_typeof();}}}
namespace g{namespace iOS{namespace MapKit{uStructType* MKCoordinateRegion_typeof();}}}
namespace g{namespace iOS{namespace MapKit{uStructType* MKCoordinateSpan_typeof();}}}
namespace g{namespace iOS{namespace MapKit{uStructType* MKMapPoint_typeof();}}}
namespace g{namespace iOS{namespace MapKit{uStructType* MKMapRect_typeof();}}}
namespace g{namespace iOS{namespace MapKit{uStructType* MKMapSize_typeof();}}}
namespace g{namespace iOS{namespace QuartzCore{uStructType* CATransform3D_typeof();}}}
namespace g{namespace iOS{namespace UIKit{namespace Interop{struct IUIContentContainer_type; IUIContentContainer_type* IUIContentContainer_typeof();}}}}
namespace g{namespace iOS{namespace UIKit{namespace Interop{struct IUICoordinateSpace_type; IUICoordinateSpace_type* IUICoordinateSpace_typeof();}}}}
namespace g{namespace iOS{namespace UIKit{namespace Interop{struct IUIImagePickerControllerDelegate_type; IUIImagePickerControllerDelegate_type* IUIImagePickerControllerDelegate_typeof();}}}}
namespace g{namespace iOS{namespace UIKit{namespace Interop{struct IUIKeyInput_type; IUIKeyInput_type* IUIKeyInput_typeof();}}}}
namespace g{namespace iOS{namespace UIKit{namespace Interop{struct IUILayoutSupport_type; IUILayoutSupport_type* IUILayoutSupport_typeof();}}}}
namespace g{namespace iOS{namespace UIKit{namespace Interop{struct IUIScrollViewDelegate_type; IUIScrollViewDelegate_type* IUIScrollViewDelegate_typeof();}}}}
namespace g{namespace iOS{namespace UIKit{namespace Interop{struct IUITextFieldDelegate_type; IUITextFieldDelegate_type* IUITextFieldDelegate_typeof();}}}}
namespace g{namespace iOS{namespace UIKit{namespace Interop{struct IUITextInput_type; IUITextInput_type* IUITextInput_typeof();}}}}
namespace g{namespace iOS{namespace UIKit{namespace Interop{struct IUITextInputDelegate_type; IUITextInputDelegate_type* IUITextInputDelegate_typeof();}}}}
namespace g{namespace iOS{namespace UIKit{namespace Interop{struct IUITextInputTokenizer_type; IUITextInputTokenizer_type* IUITextInputTokenizer_typeof();}}}}
namespace g{namespace iOS{namespace UIKit{namespace Interop{struct IUITextInputTraits_type; IUITextInputTraits_type* IUITextInputTraits_typeof();}}}}
namespace g{namespace iOS{namespace UIKit{namespace Interop{struct IUITextViewDelegate_type; IUITextViewDelegate_type* IUITextViewDelegate_typeof();}}}}
namespace g{namespace iOS{namespace UIKit{namespace Interop{struct IUIViewControllerAnimatedTransitioning_type; IUIViewControllerAnimatedTransitioning_type* IUIViewControllerAnimatedTransitioning_typeof();}}}}
namespace g{namespace iOS{namespace UIKit{namespace Interop{struct IUIViewControllerContextTransitioning_type; IUIViewControllerContextTransitioning_type* IUIViewControllerContextTransitioning_typeof();}}}}
namespace g{namespace iOS{namespace UIKit{namespace Interop{struct IUIViewControllerInteractiveTransitioning_type; IUIViewControllerInteractiveTransitioning_type* IUIViewControllerInteractiveTransitioning_typeof();}}}}
namespace g{namespace iOS{namespace UIKit{namespace Interop{struct IUIViewControllerTransitionCoordinator_type; IUIViewControllerTransitionCoordinator_type* IUIViewControllerTransitionCoordinator_typeof();}}}}
namespace g{namespace iOS{namespace UIKit{namespace Interop{struct IUIViewControllerTransitionCoordinatorContext_type; IUIViewControllerTransitionCoordinatorContext_type* IUIViewControllerTransitionCoordinatorContext_typeof();}}}}
namespace g{namespace iOS{namespace UIKit{namespace Interop{struct IUIViewControllerTransitioningDelegate_type; IUIViewControllerTransitioningDelegate_type* IUIViewControllerTransitioningDelegate_typeof();}}}}
namespace g{namespace iOS{namespace UIKit{struct NSParagraphStyle_type; ::g::iOS::UIKit::NSParagraphStyle_type* NSMutableParagraphStyle_typeof();}}}
namespace g{namespace iOS{namespace UIKit{struct NSParagraphStyle_type; NSParagraphStyle_type* NSParagraphStyle_typeof();}}}
namespace g{namespace iOS{namespace UIKit{struct UIBezierPath_type; UIBezierPath_type* UIBezierPath_typeof();}}}
namespace g{namespace iOS{namespace UIKit{struct UIColor_type; UIColor_type* UIColor_typeof();}}}
namespace g{namespace iOS{namespace UIKit{struct UIFont_type; UIFont_type* UIFont_typeof();}}}
namespace g{namespace iOS{namespace UIKit{struct UIInputViewController_type; UIInputViewController_type* UIInputViewController_typeof();}}}
namespace g{namespace iOS{namespace UIKit{struct UIMotionEffect_type; UIMotionEffect_type* UIMotionEffect_typeof();}}}
namespace g{namespace iOS{namespace UIKit{struct UIPresentationController_type; ::g::iOS::UIKit::UIPresentationController_type* UIPopoverPresentationController_typeof();}}}
namespace g{namespace iOS{namespace UIKit{struct UIPresentationController_type; UIPresentationController_type* UIPresentationController_typeof();}}}
namespace g{namespace iOS{namespace UIKit{struct UIResponder_type; ::g::iOS::UIKit::UIResponder_type* UIApplication_typeof();}}}
namespace g{namespace iOS{namespace UIKit{struct UIResponder_type; UIResponder_type* UIResponder_typeof();}}}
namespace g{namespace iOS{namespace UIKit{struct UITextField_type; UITextField_type* UITextField_typeof();}}}
namespace g{namespace iOS{namespace UIKit{struct UITextView_type; UITextView_type* UITextView_typeof();}}}
namespace g{namespace iOS{namespace UIKit{struct UITraitCollection_type; UITraitCollection_type* UITraitCollection_typeof();}}}
namespace g{namespace iOS{namespace UIKit{struct UIView_type; ::g::iOS::UIKit::UIView_type* UIButton_typeof();}}}
namespace g{namespace iOS{namespace UIKit{struct UIView_type; ::g::iOS::UIKit::UIView_type* UIControl_typeof();}}}
namespace g{namespace iOS{namespace UIKit{struct UIView_type; ::g::iOS::UIKit::UIView_type* UIImageView_typeof();}}}
namespace g{namespace iOS{namespace UIKit{struct UIView_type; ::g::iOS::UIKit::UIView_type* UILabel_typeof();}}}
namespace g{namespace iOS{namespace UIKit{struct UIView_type; ::g::iOS::UIKit::UIView_type* UIScrollView_typeof();}}}
namespace g{namespace iOS{namespace UIKit{struct UIView_type; ::g::iOS::UIKit::UIView_type* UISlider_typeof();}}}
namespace g{namespace iOS{namespace UIKit{struct UIView_type; ::g::iOS::UIKit::UIView_type* UISwitch_typeof();}}}
namespace g{namespace iOS{namespace UIKit{struct UIView_type; ::g::iOS::UIKit::UIView_type* UIWindow_typeof();}}}
namespace g{namespace iOS{namespace UIKit{struct UIView_type; UIView_type* UIView_typeof();}}}
namespace g{namespace iOS{namespace UIKit{struct UIView_type;}} namespace Fuse{namespace iOS{namespace Controls{::g::iOS::UIKit::UIView_type* FuseMapView_typeof();}}}}
namespace g{namespace iOS{namespace UIKit{struct UIView_type;}} namespace Fuse{namespace iOS{namespace Controls{::g::iOS::UIKit::UIView_type* ViewContainer_typeof();}}}}
namespace g{namespace iOS{namespace UIKit{struct UIView_type;}} namespace Fuse{namespace iOS{namespace NativeViews{::g::iOS::UIKit::UIView_type* NativeViewHost__ViewHost_typeof();}}}}
namespace g{namespace iOS{namespace UIKit{struct UIView_type;}} namespace iOS{namespace GLKit{::g::iOS::UIKit::UIView_type* GLKView_typeof();}}}
namespace g{namespace iOS{namespace UIKit{struct UIView_type;}} namespace iOS{namespace MapKit{::g::iOS::UIKit::UIView_type* MKAnnotationView_typeof();}}}
namespace g{namespace iOS{namespace UIKit{struct UIView_type;}} namespace iOS{namespace MapKit{::g::iOS::UIKit::UIView_type* MKMapView_typeof();}}}
namespace g{namespace iOS{namespace UIKit{struct UIView_type;}} namespace iOS{namespace MapKit{::g::iOS::UIKit::UIView_type* MKOverlayView_typeof();}}}
namespace g{namespace iOS{namespace UIKit{struct UIView_type;}} namespace iOS{namespace WebKit{::g::iOS::UIKit::UIView_type* WKWebView_typeof();}}}
namespace g{namespace iOS{namespace UIKit{struct UIViewController_type; ::g::iOS::UIKit::UIViewController_type* UIImagePickerController_typeof();}}}
namespace g{namespace iOS{namespace UIKit{struct UIViewController_type; ::g::iOS::UIKit::UIViewController_type* UINavigationController_typeof();}}}
namespace g{namespace iOS{namespace UIKit{struct UIViewController_type; ::g::iOS::UIKit::UIViewController_type* UISplitViewController_typeof();}}}
namespace g{namespace iOS{namespace UIKit{struct UIViewController_type; ::g::iOS::UIKit::UIViewController_type* UITabBarController_typeof();}}}
namespace g{namespace iOS{namespace UIKit{struct UIViewController_type; UIViewController_type* UIViewController_typeof();}}}
namespace g{namespace iOS{namespace UIKit{struct UIViewController_type;}} namespace Fuse{namespace iOS{namespace Controls{::g::iOS::UIKit::UIViewController_type* MapViewController_typeof();}}}}
namespace g{namespace iOS{namespace UIKit{struct UIViewPrintFormatter_type; UIViewPrintFormatter_type* UIViewPrintFormatter_typeof();}}}
namespace g{namespace iOS{namespace UIKit{uClassType* Functions_typeof();}}}
namespace g{namespace iOS{namespace UIKit{uStructType* UIEdgeInsets_typeof();}}}
namespace g{namespace iOS{namespace WebKit{namespace Interop{struct IWKNavigationDelegate_type; IWKNavigationDelegate_type* IWKNavigationDelegate_typeof();}}}}
namespace g{namespace ObjC{namespace Bindings{struct Object_type; Object_type* Object_typeof();}}}
namespace g{namespace ObjC{uClassType* Helpers_typeof();}}
namespace g{namespace ObjC{uStructType* Class_typeof();}}
namespace g{namespace ObjC{uStructType* ID_typeof();}}
namespace g{namespace ObjC{uStructType* Protocol_typeof();}}
namespace g{namespace ObjC{uStructType* Selector_typeof();}}
namespace g{namespace OpenGL{uClassType* GL_typeof();}}
namespace g{namespace OpenGL{uStructType* GLBufferHandle_typeof();}}
namespace g{namespace OpenGL{uStructType* GLFramebufferHandle_typeof();}}
namespace g{namespace OpenGL{uStructType* GLProgramHandle_typeof();}}
namespace g{namespace OpenGL{uStructType* GLRenderbufferHandle_typeof();}}
namespace g{namespace OpenGL{uStructType* GLShaderHandle_typeof();}}
namespace g{namespace OpenGL{uStructType* GLTextureHandle_typeof();}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct NamespaceName_type; NamespaceName_type* NamespaceName_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Optional1_type; Optional1_type* Optional1_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct StaticMemberName_type; StaticMemberName_type* StaticMemberName_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeMemberName_type; TypeMemberName_type* TypeMemberName_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeName_type; TypeName_type* TypeName_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Variable_type; Variable_type* Variable_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uClassType* OptionalExtensions_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* AddEventHandler_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* BindVariable_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* BlobLiteral_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* BooleanLiteral_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* CallDynamicMethod_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* CallLambda_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* CallStaticMethod_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* EnumLiteral_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* Expression_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* Instantiate_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* IsType_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* Lambda_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* Literal_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* LogicalOr_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* MethodGroup_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* NoOperation_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* NumberLiteral_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* Optional_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* Parameter_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* ReadProperty_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* ReadStaticField_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* ReadVariable_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* RemoveEventHandler_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* Return_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* Signature_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* Statement_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* StringLiteral_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* WriteProperty_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{uType* DebugLog_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{uType* Error_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{uType* ExceptionInfo_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{uType* Execute_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{uType* MessageFromClient_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{uType* MessageToClient_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{uType* RegisterName_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{uType* Reify_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{uType* SetSelection_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{uType* UnhandledException_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Reflection{namespace Native{struct CppEvent_type; CppEvent_type* CppEvent_typeof();}}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Reflection{namespace Native{struct CppProperty_type; CppProperty_type* CppProperty_typeof();}}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Reflection{namespace Native{struct NativeReflection_type; NativeReflection_type* NativeReflection_typeof();}}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Reflection{namespace Native{struct SimpleTypeMap_type; SimpleTypeMap_type* SimpleTypeMap_typeof();}}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Reflection{namespace Native{uClassType* ReflectionCache_typeof();}}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Reflection{namespace Native{uClassType* ReflectionExtensions_typeof();}}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Reflection{namespace Native{uClassType* ReflectionHelpers_typeof();}}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Reflection{namespace Native{uClassType* TryInvokeExtension_typeof();}}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Reflection{struct DelegateReflection_type; DelegateReflection_type* DelegateReflection_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct Selection_type; Selection_type* Selection_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct UxTemplate_type; UxTemplate_type* UxTemplate_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{uClassType* ObjectPropertyRegistry_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{uClassType* ObjectTagRegistry_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{uClassType* VirtualMachine_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{uType* Environment_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{uType* LambdaClosure_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{uType* LazyPropertyStorage_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{uType* ScopeClosure_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{uType* SimulatedObjectTypeRegistry_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{struct Application_type; ::g::Outracks::Simulator::Application_type* GeneratedApplication_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct Application_type; Application_type* Application_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct Connected_type; ::g::Outracks::Simulator::Connected_type* Idle_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct Connected_type; ::g::Outracks::Simulator::Connected_type* Reifying_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct Connected_type; ::g::Outracks::Simulator::Connected_type* Running_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct Connected_type; Connected_type* Connected_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct ImmutableList_type; ImmutableList_type* ImmutableList_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct OfflineSimulatorClient_type; OfflineSimulatorClient_type* OfflineSimulatorClient_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct ShowingPrompt_type; ::g::Outracks::Simulator::ShowingPrompt_type* ChangeIp_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct ShowingPrompt_type; ShowingPrompt_type* ShowingPrompt_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct SimulatorClient_type; SimulatorClient_type* SimulatorClient_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct State_type; ::g::Outracks::Simulator::State_type* Connecting_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct State_type; ::g::Outracks::Simulator::State_type* ConnectingToHost_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct State_type; ::g::Outracks::Simulator::State_type* ConnectingToProxy_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct State_type; ::g::Outracks::Simulator::State_type* ConnectionLost_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct State_type; ::g::Outracks::Simulator::State_type* FailedToConnect_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct State_type; ::g::Outracks::Simulator::State_type* Faulted_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct State_type; ::g::Outracks::Simulator::State_type* ShowingModalDialog_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct State_type; ::g::Outracks::Simulator::State_type* Uninitialized_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct State_type; State_type* State_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uClassType* AggregateConnectError_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uClassType* Bundle_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uClassType* BytecodeCache_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uClassType* Closure_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uClassType* ConnectToFirstRespondingEndpoint_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uClassType* Context_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uClassType* DeviceInfo_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uClassType* EnumerableHitTestExtension_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uClassType* Exceptions_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uClassType* GoOffline_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uClassType* IndentString_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uClassType* List_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uClassType* Serialization_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uClassType* StringSplitting_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uClassType* Tasks_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* Apply_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* ApplyFirst_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* ApplySecond_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* ConcurrentQueue_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* ConnectToEndpointClosure_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* DialogButton_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* DummyApplication_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* EnumerableHitTestExtension__CollectHitNodesClosure_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* FileCache_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* Forget_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* Forget1_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* ForgetAction_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* GetSimulatorEndpoint_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* LoadingScreen_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* ModalDialog_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* ProxyClient_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* Task_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* TaskThread_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* UserAppState_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* WaitForFirstResult_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct ConcurrentCollection__DeferLockImpl_type; ConcurrentCollection__DeferLockImpl_type* ConcurrentCollection__DeferLockImpl_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct ConcurrentCollection_type; ConcurrentCollection_type* ConcurrentCollection_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary__Enumerator_type; Dictionary__Enumerator_type* Dictionary__Enumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary__KeyCollection__Enumerator_type; Dictionary__KeyCollection__Enumerator_type* Dictionary__KeyCollection__Enumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary__KeyCollection_type; Dictionary__KeyCollection_type* Dictionary__KeyCollection_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary__ValueCollection__Enumerator_type; Dictionary__ValueCollection__Enumerator_type* Dictionary__ValueCollection__Enumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary__ValueCollection_type; Dictionary__ValueCollection_type* Dictionary__ValueCollection_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary_type; Dictionary_type* Dictionary_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct EmptyEnumerable_type; EmptyEnumerable_type* EmptyEnumerable_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct EmptyEnumerator_type; EmptyEnumerator_type* EmptyEnumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct HashSet__Enumerator_type; HashSet__Enumerator_type* HashSet__Enumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct HashSet_type; HashSet_type* HashSet_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct LinkedList__Enumerator_type; LinkedList__Enumerator_type* LinkedList__Enumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct LinkedList_type; LinkedList_type* LinkedList_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct List__Enumerator_type; List__Enumerator_type* List__Enumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct List_type; List_type* List_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct ObservableList_type; ObservableList_type* ObservableList_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct Queue__Enumerator_type; Queue__Enumerator_type* Queue__Enumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct Queue_type; Queue_type* Queue_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct SelectEnumerable_type; SelectEnumerable_type* SelectEnumerable_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct SelectEnumerator_type; SelectEnumerator_type* SelectEnumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct Stack__Enumerator_type; Stack__Enumerator_type* Stack__Enumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct Stack_type; Stack_type* Stack_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct UnionEnumerable_type; UnionEnumerable_type* UnionEnumerable_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct UnionEnumerator_type; UnionEnumerator_type* UnionEnumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct WhereEnumerable_type; WhereEnumerable_type* WhereEnumerable_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct WhereEnumerator_type; WhereEnumerator_type* WhereEnumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{uClassType* EnumerableExtensions_typeof();}}}
namespace g{namespace Uno{namespace Collections{uClassType* IListExtensions_typeof();}}}
namespace g{namespace Uno{namespace Collections{uStructType* ConcurrentCollection__ModItem_typeof();}}}
namespace g{namespace Uno{namespace Collections{uStructType* Dictionary__Bucket_typeof();}}}
namespace g{namespace Uno{namespace Collections{uStructType* KeyValuePair_typeof();}}}
namespace g{namespace Uno{namespace Collections{uType* EnumerableExtensions__LinkedList_typeof();}}}
namespace g{namespace Uno{namespace Collections{uType* LinkedListNode_typeof();}}}
namespace g{namespace Uno{namespace Collections{uType* OrderByCompare_typeof();}}}
namespace g{namespace Uno{namespace Collections{uType* ReadOnlyCollection_typeof();}}}
namespace g{namespace Uno{namespace Compiler{namespace ExportTargetInterop{namespace Android{uType* ForeignFixedNameAttribute_typeof();}}}}}
namespace g{namespace Uno{namespace Compiler{namespace ExportTargetInterop{namespace Foreign{namespace ObjC{struct Object_type; Object_type* Object_typeof();}}}}}}
namespace g{namespace Uno{namespace Compiler{namespace ExportTargetInterop{uType* DontCopyStructAttribute_typeof();}}}}
namespace g{namespace Uno{namespace Compiler{namespace ExportTargetInterop{uType* DontExportAttribute_typeof();}}}}
namespace g{namespace Uno{namespace Compiler{namespace ExportTargetInterop{uType* OptionalAttribute_typeof();}}}}
namespace g{namespace Uno{namespace Compiler{namespace ExportTargetInterop{uType* StaticAttribute_typeof();}}}}
namespace g{namespace Uno{namespace Compiler{namespace ExportTargetInterop{uType* TargetSpecificImplementationAttribute_typeof();}}}}
namespace g{namespace Uno{namespace Compiler{namespace ExportTargetInterop{uType* TargetSpecificTypeAttribute_typeof();}}}}
namespace g{namespace Uno{namespace Compiler{namespace ImportServices{uType* FilenameAttribute_typeof();}}}}
namespace g{namespace Uno{namespace Compiler{namespace ShaderGenerator{uType* ShaderStageInlineAttribute_typeof();}}}}
namespace g{namespace Uno{namespace Compiler{uType* CallerFilePathAttribute_typeof();}}}
namespace g{namespace Uno{namespace Compiler{uType* CallerLineNumberAttribute_typeof();}}}
namespace g{namespace Uno{namespace Compiler{uType* CallerMemberNameAttribute_typeof();}}}
namespace g{namespace Uno{namespace Compiler{uType* CallerPackageNameAttribute_typeof();}}}
namespace g{namespace Uno{namespace Compiler{uType* HideFromCodeCompleterAttribute_typeof();}}}
namespace g{namespace Uno{namespace Compiler{uType* IgnoreMainClassAttribute_typeof();}}}
namespace g{namespace Uno{namespace Compiler{uType* MainClassAttribute_typeof();}}}
namespace g{namespace Uno{namespace Compiler{uType* UxGeneratedAttribute_typeof();}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct FontFace_type; ::g::Uno::Content::Fonts::FontFace_type* CppFontFace_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct FontFace_type; FontFace_type* FontFace_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct TextShader_type; ::g::Uno::Content::Fonts::TextShader_type* SdfFontShader_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct TextShader_type; ::g::Uno::Content::Fonts::TextShader_type* SpriteFontShader_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct TextShader_type; TextShader_type* TextShader_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct TextTransform_type; ::g::Uno::Content::Fonts::TextTransform_type* DefaultTextTransform_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct TextTransform_type; TextTransform_type* TextTransform_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct TextTransform_type;}}} namespace Fuse{namespace Controls{namespace Internal{::g::Uno::Content::Fonts::TextTransform_type* ProperTextTransform_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{uClassType* FontFaceHelpers_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{uStructType* BitmapFont__CharPair_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{uStructType* BitmapFont__GlyphInfo_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{uStructType* CppFontFaceHandle_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{uStructType* RenderedGlyph_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{uType* BitmapFont_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{uType* TextRenderer_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{uType* TextShaderData_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Images{uType* Bitmap_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Models{uType* IndexArray_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Models{uType* Model_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Models{uType* ModelDrawable_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Models{uType* ModelMaterial_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Models{uType* ModelMesh_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Models{uType* ModelNode_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Models{uType* ModelParameter1_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Models{uType* VertexAttributeArray_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Splines{struct Spline_type; ::g::Uno::Content::Splines::Spline_type* KeyframedSpline_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Splines{struct Spline_type; ::g::Uno::Content::Splines::Spline_type* LinearSplineFloat_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Splines{struct Spline_type; ::g::Uno::Content::Splines::Spline_type* LinearSplineFloat2_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Splines{struct Spline_type; ::g::Uno::Content::Splines::Spline_type* LinearSplineFloat3_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Splines{struct Spline_type; ::g::Uno::Content::Splines::Spline_type* LinearSplineFloat4_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Splines{struct Spline_type; ::g::Uno::Content::Splines::Spline_type* LinearSplineFloat4x4_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Splines{struct Spline_type; Spline_type* Spline_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Splines{uStructType* KeyframedSpline__Key_typeof();}}}}
namespace g{namespace Uno{namespace Diagnostics{struct ProfileEvent_type; ::g::Uno::Diagnostics::ProfileEvent_type* AllocateEvent_typeof();}}}
namespace g{namespace Uno{namespace Diagnostics{struct ProfileEvent_type; ::g::Uno::Diagnostics::ProfileEvent_type* EnterEvent_typeof();}}}
namespace g{namespace Uno{namespace Diagnostics{struct ProfileEvent_type; ::g::Uno::Diagnostics::ProfileEvent_type* ExitEvent_typeof();}}}
namespace g{namespace Uno{namespace Diagnostics{struct ProfileEvent_type; ::g::Uno::Diagnostics::ProfileEvent_type* FreeEvent_typeof();}}}
namespace g{namespace Uno{namespace Diagnostics{struct ProfileEvent_type; ProfileEvent_type* ProfileEvent_typeof();}}}
namespace g{namespace Uno{namespace Diagnostics{uClassType* Clock_typeof();}}}
namespace g{namespace Uno{namespace Diagnostics{uClassType* Debug_typeof();}}}
namespace g{namespace Uno{namespace Diagnostics{uClassType* Profile_typeof();}}}
namespace g{namespace Uno{namespace Diagnostics{uType* AlwaysProfileAttribute_typeof();}}}
namespace g{namespace Uno{namespace Diagnostics{uType* IdMap_typeof();}}}
namespace g{namespace Uno{namespace Diagnostics{uType* NeverProfileAttribute_typeof();}}}
namespace g{namespace Uno{namespace Diagnostics{uType* ProfileData_typeof();}}}
namespace g{namespace Uno{namespace Geometry{struct VertexEnumerable_type; VertexEnumerable_type* VertexEnumerable_typeof();}}}
namespace g{namespace Uno{namespace Geometry{struct VertexEnumerator_type; VertexEnumerator_type* VertexEnumerator_typeof();}}}
namespace g{namespace Uno{namespace Geometry{uClassType* Collision_typeof();}}}
namespace g{namespace Uno{namespace Geometry{uClassType* Collision2D_typeof();}}}
namespace g{namespace Uno{namespace Geometry{uStructType* Box_typeof();}}}
namespace g{namespace Uno{namespace Geometry{uStructType* Frustum_typeof();}}}
namespace g{namespace Uno{namespace Geometry{uStructType* Plane_typeof();}}}
namespace g{namespace Uno{namespace Geometry{uStructType* Ray_typeof();}}}
namespace g{namespace Uno{namespace Geometry{uStructType* Sphere_typeof();}}}
namespace g{namespace Uno{namespace Geometry{uStructType* Triangle_typeof();}}}
namespace g{namespace Uno{namespace Geometry{uType* CubicBezier_typeof();}}}
namespace g{namespace Uno{namespace Geometry{uType* Triangle2D_typeof();}}}
namespace g{namespace Uno{namespace Geometry{uType* Vertex_typeof();}}}
namespace g{namespace Uno{namespace Graphics{struct DeviceBuffer_type; ::g::Uno::Graphics::DeviceBuffer_type* IndexBuffer_typeof();}}}
namespace g{namespace Uno{namespace Graphics{struct DeviceBuffer_type; ::g::Uno::Graphics::DeviceBuffer_type* VertexBuffer_typeof();}}}
namespace g{namespace Uno{namespace Graphics{struct DeviceBuffer_type; DeviceBuffer_type* DeviceBuffer_typeof();}}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer_type; Framebuffer_type* Framebuffer_typeof();}}}
namespace g{namespace Uno{namespace Graphics{struct RenderTarget_type; RenderTarget_type* RenderTarget_typeof();}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D_type; Texture2D_type* Texture2D_typeof();}}}
namespace g{namespace Uno{namespace Graphics{struct TextureCube_type; TextureCube_type* TextureCube_typeof();}}}
namespace g{namespace Uno{namespace Graphics{struct VideoTexture_type; VideoTexture_type* VideoTexture_typeof();}}}
namespace g{namespace Uno{namespace Graphics{uClassType* FormatHelpers_typeof();}}}
namespace g{namespace Uno{namespace Graphics{uClassType* IndexTypeHelpers_typeof();}}}
namespace g{namespace Uno{namespace Graphics{uClassType* TextureHelpers_typeof();}}}
namespace g{namespace Uno{namespace Graphics{uClassType* VertexAttributeTypeHelpers_typeof();}}}
namespace g{namespace Uno{namespace Graphics{uStructType* SamplerState_typeof();}}}
namespace g{namespace Uno{namespace Graphics{uStructType* VertexAttributeInfo_typeof();}}}
namespace g{namespace Uno{namespace Graphics{uType* GraphicsContext_typeof();}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader_type; BinaryReader_type* BinaryReader_typeof();}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter_type; BinaryWriter_type* BinaryWriter_typeof();}}}
namespace g{namespace Uno{namespace IO{struct Stream_type; ::g::Uno::IO::Stream_type* CppXliStream_typeof();}}}
namespace g{namespace Uno{namespace IO{struct Stream_type; ::g::Uno::IO::Stream_type* MemoryStream_typeof();}}}
namespace g{namespace Uno{namespace IO{struct Stream_type; Stream_type* Stream_typeof();}}}
namespace g{namespace Uno{namespace IO{struct Stream_type;}} namespace Experimental{namespace Cache{::g::Uno::IO::Stream_type* ProxyStream_typeof();}}}
namespace g{namespace Uno{namespace IO{struct Stream_type;}} namespace Outracks{namespace Simulator{::g::Uno::IO::Stream_type* ArrayStream_typeof();}}}
namespace g{namespace Uno{namespace IO{struct Stream_type;}} namespace Uno{namespace Net{namespace Sockets{::g::Uno::IO::Stream_type* NetworkStream_typeof();}}}}
namespace g{namespace Uno{namespace IO{struct TextReader_type; ::g::Uno::IO::TextReader_type* StreamReader_typeof();}}}
namespace g{namespace Uno{namespace IO{struct TextReader_type; TextReader_type* TextReader_typeof();}}}
namespace g{namespace Uno{namespace IO{struct TextWriter_type; ::g::Uno::IO::TextWriter_type* StreamWriter_typeof();}}}
namespace g{namespace Uno{namespace IO{struct TextWriter_type; ::g::Uno::IO::TextWriter_type* StringWriter_typeof();}}}
namespace g{namespace Uno{namespace IO{struct TextWriter_type; TextWriter_type* TextWriter_typeof();}}}
namespace g{namespace Uno{namespace IO{uClassType* Directory_typeof();}}}
namespace g{namespace Uno{namespace IO{uClassType* File_typeof();}}}
namespace g{namespace Uno{namespace IO{uClassType* FileSystemImpl_typeof();}}}
namespace g{namespace Uno{namespace IO{uClassType* Path_typeof();}}}
namespace g{namespace Uno{namespace IO{uStructType* CppXliStreamHandle_typeof();}}}
namespace g{namespace Uno{namespace IO{uType* Bundle_typeof();}}}
namespace g{namespace Uno{namespace IO{uType* BundleFile_typeof();}}}
namespace g{namespace Uno{namespace Net{namespace Http{namespace Implementation{struct iOSHttpRequest_type; iOSHttpRequest_type* iOSHttpRequest_typeof();}}}}}
namespace g{namespace Uno{namespace Net{namespace Http{namespace Implementation{uClassType* iOSHttpSharedCache_typeof();}}}}}
namespace g{namespace Uno{namespace Net{namespace Http{namespace Implementation{uStructType* iOSHttpRequestHandle_typeof();}}}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpDefaultDispatcher_type; HttpDefaultDispatcher_type* HttpDefaultDispatcher_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandler_type; HttpMessageHandler_type* HttpMessageHandler_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest_type; HttpMessageHandlerRequest_type* HttpMessageHandlerRequest_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uClassType* HttpMessageCache_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uClassType* HttpMessageHandler__StaticData_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uClassType* HttpStatusReasonPhrase_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uStructType* SchemeParserResult_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* AbsolutePathParser_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* HashParser_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* HostInfo_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* HostInfoParser_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* HttpMessageHandlerRequest__DispatchClosure_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* HttpMessageHandlerRequest__DispatchClosure1_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* QueryParser_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* SchemeParser_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* Uri_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* UriScheme_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* UserInfoParser_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Sockets{namespace Berkeley{uClassType* bsd_dns_typeof();}}}}}
namespace g{namespace Uno{namespace Net{namespace Sockets{namespace Berkeley{uClassType* bsd_socket_typeof();}}}}}
namespace g{namespace Uno{namespace Net{namespace Sockets{struct Socket_type; namespace Berkeley{::g::Uno::Net::Sockets::Socket_type* Socket_typeof();}}}}}
namespace g{namespace Uno{namespace Net{namespace Sockets{struct Socket_type; Socket_type* Socket_typeof();}}}}
namespace g{namespace Uno{namespace Net{uType* Dns_typeof();}}}
namespace g{namespace Uno{namespace Net{uType* EndPoint_typeof();}}}
namespace g{namespace Uno{namespace Net{uType* IPAddress_typeof();}}}
namespace g{namespace Uno{namespace Net{uType* IPEndPoint_typeof();}}}
namespace g{namespace Uno{namespace Platform{namespace iOS{uClassType* Application_typeof();}}}}
namespace g{namespace Uno{namespace Platform{namespace iOS{uClassType* StatusBar_typeof();}}}}
namespace g{namespace Uno{namespace Platform{uClassType* SystemUI_typeof();}}}
namespace g{namespace Uno{namespace Platform{uStructType* ViewNativeHandle_typeof();}}}
namespace g{namespace Uno{namespace Platform{uType* ClosingEventArgs_typeof();}}}
namespace g{namespace Uno{namespace Platform{uType* FrameChangedEventArgs_typeof();}}}
namespace g{namespace Uno{namespace Platform{uType* KeyEventArgs_typeof();}}}
namespace g{namespace Uno{namespace Platform{uType* PointerEventArgs_typeof();}}}
namespace g{namespace Uno{namespace Platform{uType* SystemUIWillResizeEventArgs_typeof();}}}
namespace g{namespace Uno{namespace Platform{uType* TextInputEventArgs_typeof();}}}
namespace g{namespace Uno{namespace Platform{uType* TimerEventArgs_typeof();}}}
namespace g{namespace Uno{namespace Platform{uType* Window_typeof();}}}
namespace g{namespace Uno{namespace Platform2{namespace Implementation{uType* InvokedFromNativeCodeAttribute_typeof();}}}}
namespace g{namespace Uno{namespace Platform2{uClassType* Application_typeof();}}}
namespace g{namespace Uno{namespace Platform2{uStructType* Display__PrivateState_typeof();}}}
namespace g{namespace Uno{namespace Platform2{uType* Display_typeof();}}}
namespace g{namespace Uno{namespace Reflection{struct CppField_type; CppField_type* CppField_typeof();}}}
namespace g{namespace Uno{namespace Reflection{struct CppFunction_type; CppFunction_type* CppFunction_typeof();}}}
namespace g{namespace Uno{namespace Reflection{uType* CppReflection_typeof();}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct ArrayEnumerable_type; ArrayEnumerable_type* ArrayEnumerable_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct ArrayEnumerator_type; ArrayEnumerator_type* ArrayEnumerator_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct ArrayList_type; ArrayList_type* ArrayList_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct FormatStringToken_type; ::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type* FormatStringItem_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct FormatStringToken_type; ::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type* FormatStringLiteral_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct FormatStringToken_type; FormatStringToken_type* FormatStringToken_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{uClassType* BootstrapHints_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{uClassType* Bootstrapper_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{uClassType* BufferConverters_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{uClassType* NumericFormatter_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{uClassType* WindowHelpers_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{uType* BufferReader_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{uType* FormatStringTokenizer_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{struct GLCompiledProgram_type; GLCompiledProgram_type* GLCompiledProgram_typeof();}}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{uClassType* GLHelpers_typeof();}}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{uClassType* GLInterop_typeof();}}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{uStructType* GLDrawCall_typeof();}}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{uType* GLProgram_typeof();}}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* ArrayCopyImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* ArraySortImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* BufferImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* ClockImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* DebugImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* GenericEqualsImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* GraphicsContextImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* PlatformWindowImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* TextEncodingImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uStructType* GraphicsContextHandle_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uStructType* PlatformWindowHandle_typeof();}}}}
namespace g{namespace Uno{namespace Testing{uType* NamedTestMethod_typeof();}}}
namespace g{namespace Uno{namespace Testing{uType* Registry_typeof();}}}
namespace g{namespace Uno{namespace Testing{uType* TestAttribute_typeof();}}}
namespace g{namespace Uno{namespace Text{struct Decoder_type; ::g::Uno::Text::Decoder_type* UTF8Decoder_typeof();}}}
namespace g{namespace Uno{namespace Text{struct Decoder_type; Decoder_type* Decoder_typeof();}}}
namespace g{namespace Uno{namespace Text{struct Encoding_type; ::g::Uno::Text::Encoding_type* UTF8Encoding_typeof();}}}
namespace g{namespace Uno{namespace Text{struct Encoding_type; Encoding_type* Encoding_typeof();}}}
namespace g{namespace Uno{namespace Text{uClassType* Ascii_typeof();}}}
namespace g{namespace Uno{namespace Text{uClassType* Base64_typeof();}}}
namespace g{namespace Uno{namespace Text{uClassType* Utf8_typeof();}}}
namespace g{namespace Uno{namespace Text{uType* StringBuilder_typeof();}}}
namespace g{namespace Uno{namespace Text{uType* StringBuilderElement_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct AutoResetEvent_type; ::g::Uno::Threading::AutoResetEvent_type* PosixAutoResetEvent_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct AutoResetEvent_type; AutoResetEvent_type* AutoResetEvent_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct ConcurrentDictionary_type; ConcurrentDictionary_type* ConcurrentDictionary_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct ConcurrentQueue_type; ConcurrentQueue_type* ConcurrentQueue_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct Future_type; ::g::Uno::Threading::Future_type* Future1_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct Future_type; ::g::Uno::Threading::Future_type* Promise_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct Future_type; ::g::Uno::Threading::Future_type* TaskFuture_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct Future_type; Future_type* Future_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct Future_type;}} namespace Fuse{namespace Video{namespace Graphics{namespace iOS{::g::Uno::Threading::Future_type* VideoLoader__VideoPromise_typeof();}}}}}
namespace g{namespace Uno{namespace Threading{struct LockGuard_type; LockGuard_type* LockGuard_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct ManualResetEvent_type; ::g::Uno::Threading::ManualResetEvent_type* PosixManualResetEvent_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct ManualResetEvent_type; ManualResetEvent_type* ManualResetEvent_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct Mutex_type; ::g::Uno::Threading::Mutex_type* POSIXMutex_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct Mutex_type; Mutex_type* Mutex_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct SyncDispatcher_type; SyncDispatcher_type* SyncDispatcher_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct Task_type; Task_type* Task_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct Thread_type; ::g::Uno::Threading::Thread_type* POSIXThread_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct Thread_type; Thread_type* Thread_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct ThreadPool__WorkItem_type; ::g::Uno::Threading::ThreadPool__WorkItem_type* ThreadPool__DefaultWorkItem_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct ThreadPool__WorkItem_type; ::g::Uno::Threading::ThreadPool__WorkItem_type* ThreadPool__ParameterizedWorkItem_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct ThreadPool__WorkItem_type; ThreadPool__WorkItem_type* ThreadPool__WorkItem_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct ThreadPool_type; ThreadPool_type* ThreadPool_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct ThreadPoolTaskScheduler_type; ThreadPoolTaskScheduler_type* ThreadPoolTaskScheduler_typeof();}}}
namespace g{namespace Uno{namespace Threading{uClassType* IDispatcherExtensions_typeof();}}}
namespace g{namespace Uno{namespace Threading{uClassType* Monitor_typeof();}}}
namespace g{namespace Uno{namespace Threading{uType* CancellationToken_typeof();}}}
namespace g{namespace Uno{namespace Threading{uType* CancellationTokenSource_typeof();}}}
namespace g{namespace Uno{namespace Threading{uType* Future1__Closure_typeof();}}}
namespace g{namespace Uno{namespace Threading{uType* IDispatcherExtensions__Arg1Invoke_typeof();}}}
namespace g{namespace Uno{namespace Threading{uType* IDispatcherExtensions__Arg1InvokeFunc_typeof();}}}
namespace g{namespace Uno{namespace Threading{uType* IDispatcherExtensions__Arg2Invoke_typeof();}}}
namespace g{namespace Uno{namespace Threading{uType* MainThreadAttribute_typeof();}}}
namespace g{namespace Uno{namespace Threading{uType* POSIXThread__ReleasingLauncher_typeof();}}}
namespace g{namespace Uno{namespace Time{namespace Calendars{struct YearMonthDayCalculator_type; ::g::Uno::Time::Calendars::YearMonthDayCalculator_type* GregorianYearMonthDayCalculator_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Calendars{struct YearMonthDayCalculator_type; YearMonthDayCalculator_type* YearMonthDayCalculator_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Calendars{uClassType* TimeOfDayCalculator_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Calendars{uType* Era_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Calendars{uType* WeekYearCalculator_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct PatternPart_type; ::g::Uno::Time::Text::PatternPart_type* NumberPart_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct PatternPart_type; ::g::Uno::Time::Text::PatternPart_type* OffsetPatternPart_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct PatternPart_type; ::g::Uno::Time::Text::PatternPart_type* RangeNumberPart_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct PatternPart_type; ::g::Uno::Time::Text::PatternPart_type* SeparatorPart_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct PatternPart_type; ::g::Uno::Time::Text::PatternPart_type* SignPart_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct PatternPart_type; PatternPart_type* PatternPart_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* FixedFormatPattern_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* LocalDatePattern__LocalDateBucket_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* LocalDatePattern_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* LocalDateTimePattern__LocalDateTimeBucket_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* LocalDateTimePattern_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* LocalTimePattern__LocalTimeBucket_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* LocalTimePattern_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* OffsetDateTimePattern__OffsetDateTimeBucket_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* OffsetDateTimePattern_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* OffsetPattern__OffsetBucket_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* OffsetPattern_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* ParseResult_typeof();}}}}
namespace g{namespace Uno{namespace Time{struct DateTimeZone_type; ::g::Uno::Time::DateTimeZone_type* DeviceTimeZone_typeof();}}}
namespace g{namespace Uno{namespace Time{struct DateTimeZone_type; ::g::Uno::Time::DateTimeZone_type* FixedDateTimeZone_typeof();}}}
namespace g{namespace Uno{namespace Time{struct DateTimeZone_type; DateTimeZone_type* DateTimeZone_typeof();}}}
namespace g{namespace Uno{namespace Time{uClassType* Converter_typeof();}}}
namespace g{namespace Uno{namespace Time{uClassType* HashCodeHelper_typeof();}}}
namespace g{namespace Uno{namespace Time{uClassType* Preconditions_typeof();}}}
namespace g{namespace Uno{namespace Time{uStructType* Duration_typeof();}}}
namespace g{namespace Uno{namespace Time{uStructType* Instant_typeof();}}}
namespace g{namespace Uno{namespace Time{uStructType* LocalTime_typeof();}}}
namespace g{namespace Uno{namespace Time{uStructType* Offset_typeof();}}}
namespace g{namespace Uno{namespace Time{uType* CalendarSystem_typeof();}}}
namespace g{namespace Uno{namespace Time{uType* LocalDate_typeof();}}}
namespace g{namespace Uno{namespace Time{uType* LocalDateTime_typeof();}}}
namespace g{namespace Uno{namespace Time{uType* OffsetDateTime_typeof();}}}
namespace g{namespace Uno{namespace Time{uType* ZonedDateTime_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Factory_type; Factory_type* Factory_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Factory_type;}} namespace Fuse{namespace Android{::g::Uno::UX::Factory_type* NativeEditFactory_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Factory_type;}} namespace Fuse{namespace Controls{::g::Uno::UX::Factory_type* PageIndicatorDotFactory_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Factory_type;}} namespace Fuse{namespace Controls{namespace Graphics{::g::Uno::UX::Factory_type* TextVisual__Factory_typeof();}}}}
namespace g{namespace Uno{namespace UX{struct Factory_type;}} namespace Fuse{namespace Desktop{::g::Uno::UX::Factory_type* NativeStyle__Template__Factory_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Factory_type;}} namespace Fuse{namespace iOS{::g::Uno::UX::Factory_type* NativeTemplate__NativeEditFactory_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Factory_type;}} namespace Outracks{namespace Simulator{namespace Runtime{::g::Uno::UX::Factory_type* UxFactory_typeof();}}}}
namespace g{namespace Uno{namespace UX{struct FileSource_type; ::g::Uno::UX::FileSource_type* BundleFileSource_typeof();}}}
namespace g{namespace Uno{namespace UX{struct FileSource_type; FileSource_type* FileSource_typeof();}}}
namespace g{namespace Uno{namespace UX{struct FileSource_type;}} namespace Fuse{namespace Resources{::g::Uno::UX::FileSource_type* FileResource_typeof();}}}
namespace g{namespace Uno{namespace UX{struct FileSource_type;}} namespace Fuse{namespace Scripting{::g::Uno::UX::FileSource_type* JSFileSource_typeof();}}}
namespace g{namespace Uno{namespace UX{struct FileSource_type;}} namespace Outracks{namespace Simulator{::g::Uno::UX::FileSource_type* ByteFileSource_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property_type; Property_type* Property_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseBasicTheme_FuseBasicThemeButtonText_Value_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsButton_Opacity_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsButton_Text_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsCircle_Opacity_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsRectangle_Height_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsRectangle_Width_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsText_Font_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsText_FontSize_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsText_LineSpacing_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsText_TextAlignment_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsText_TextColor_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsText_TextWrapping_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsText_Value_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsTextEdit_FocusIsFocusable_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsTextInput_Font_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsTextInput_FontSize_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsTextInput_LineSpacing_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsTextInput_PlaceholderText_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsTextInput_TextAlignment_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsTextInput_TextColor_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseBasicTheme_FuseControlsTextInput_TextWrapping_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseBasicTheme_FuseDrawingSolidColor_Color_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseBasicTheme_FuseDrawingStroke_Width_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseBasicTheme_FuseEffectsDropShadow_Color_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseBasicTheme_FuseTranslation_X_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseBasicTheme_FuseTriggersWhileFalse_Value_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseControls_FuseControlsBackButton_IsEnabled_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseControls_FuseDrawingSolidColor_Color_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseThemes_FuseControlsScrollView_KeepFocusInView_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseThemes_FuseControlsScrollView_UserScroll_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseThemes_FuseGesturesScroller_UserScroll_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* FuseThemes_FuseTriggersWhileTrue_Value_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* Mods4Minecraft_FuseControlsButton_IsEnabled_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* Mods4Minecraft_FuseControlsPageControl_Active_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} ::g::Uno::UX::Property_type* Mods4Minecraft_FuseControlsTextInput_Value_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property_type;}} namespace Outracks{namespace Simulator{namespace Reflection{namespace Native{::g::Uno::UX::Property_type* Property_typeof();}}}}}
namespace g{namespace Uno{namespace UX{struct Property_type;}} namespace Outracks{namespace Simulator{namespace Runtime{::g::Uno::UX::Property_type* LazyProperty_typeof();}}}}
namespace g{namespace Uno{namespace UX{struct Property_type;}} namespace Outracks{namespace Simulator{namespace Runtime{::g::Uno::UX::Property_type* UxProperty_typeof();}}}}
namespace g{namespace Uno{namespace UX{struct Template_type; Template_type* Template_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} ::g::Uno::UX::Template_type* MainView__Template_typeof();}
namespace g{namespace Uno{namespace UX{struct Template_type;}} ::g::Uno::UX::Template_type* MainView__Template1_typeof();}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Template_type* BasicStyle__Template__Template1_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Template_type* BasicStyle__Template_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Template_type* BasicStyle__Template1_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Template_type* BasicStyle__Template2_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Template_type* BasicStyle__Template3_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Template_type* BasicStyle__Template4_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Template_type* BasicStyle__Template5_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace BasicTheme{::g::Uno::UX::Template_type* BasicStyle__Template6_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace Controls{::g::Uno::UX::Template_type* PageIndicator__Template_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace Desktop{::g::Uno::UX::Template_type* NativeStyle__Template_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace Themes{::g::Uno::UX::Template_type* GraphicsStyle__Template_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace Themes{::g::Uno::UX::Template_type* GraphicsStyle__Template1_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace Themes{::g::Uno::UX::Template_type* GraphicsStyle__Template2_typeof();}}}
namespace g{namespace Uno{namespace UX{uClassType* StreamExtensions_typeof();}}}
namespace g{namespace Uno{namespace UX{uStructType* Size_typeof();}}}
namespace g{namespace Uno{namespace UX{uStructType* Size2_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* NameTable_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* NameTableEntry_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* Resource_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* UXAutoNameTableAttribute_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* UXComponentsAttribute_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* UXConstructorAttribute_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* UXContentAttribute_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* UXFileNameAttribute_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* UXGlobalResourceAttribute_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* UXLineNumberAttribute_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* UXMetadataAttribute_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* UXNameAttribute_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* UXPrimaryAttribute_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* UXSourceFileNameAttribute_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* UXValueBindingArgumentAttribute_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* UXValueBindingTargetAttribute_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* ValueChangedArgs_typeof();}}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* AggregateException_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* ArgumentException_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* ArgumentNullException_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* ArgumentOutOfRangeException_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* FormatException_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* IndexOutOfRangeException_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* InvalidCastException_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* InvalidOperationException_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* NotImplementedException_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* NotSupportedException_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* NullReferenceException_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* ObjectDisposedException_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* OverflowException_typeof();}}
namespace g{namespace Uno{struct Exception_type; Exception_type* Exception_typeof();}}
namespace g{namespace Uno{struct Exception_type; namespace IO{::g::Uno::Exception_type* EndOfStreamException_typeof();}}}
namespace g{namespace Uno{struct Exception_type; namespace IO{::g::Uno::Exception_type* IOException_typeof();}}}
namespace g{namespace Uno{struct Exception_type; namespace Net{namespace Http{::g::Uno::Exception_type* InvalidResponseTypeException_typeof();}}}}
namespace g{namespace Uno{struct Exception_type; namespace Net{namespace Http{::g::Uno::Exception_type* InvalidStateException_typeof();}}}}
namespace g{namespace Uno{struct Exception_type; namespace Net{namespace Http{::g::Uno::Exception_type* UriFormatException_typeof();}}}}
namespace g{namespace Uno{struct Exception_type; namespace Net{namespace Sockets{::g::Uno::Exception_type* SocketException_typeof();}}}}
namespace g{namespace Uno{struct Exception_type; namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{::g::Uno::Exception_type* GLException_typeof();}}}}}}
namespace g{namespace Uno{struct Exception_type;} namespace Experimental{namespace TextureLoader{::g::Uno::Exception_type* InvalidContentTypeException_typeof();}}}
namespace g{namespace Uno{struct Exception_type;} namespace Fuse{::g::Uno::Exception_type* RequiresRootedException_typeof();}}
namespace g{namespace Uno{struct Exception_type;} namespace Fuse{namespace Scripting{::g::Uno::Exception_type* Error_typeof();}}}
namespace g{namespace Uno{struct Exception_type;} namespace Fuse{namespace Scripting{::g::Uno::Exception_type* ScriptException_typeof();}}}
namespace g{namespace Uno{struct Exception_type;} namespace Outracks{namespace Simulator{::g::Uno::Exception_type* FailedToConnectToEndPoint_typeof();}}}
namespace g{namespace Uno{struct Exception_type;} namespace Outracks{namespace Simulator{::g::Uno::Exception_type* FailedToConnectToProxy_typeof();}}}
namespace g{namespace Uno{struct Exception_type;} namespace Outracks{namespace Simulator{::g::Uno::Exception_type* FailedToConnectToSimulator_typeof();}}}
namespace g{namespace Uno{struct Exception_type;} namespace Outracks{namespace Simulator{::g::Uno::Exception_type* InvalidDataException_typeof();}}}
namespace g{namespace Uno{struct Exception_type;} namespace Outracks{namespace Simulator{::g::Uno::Exception_type* NonExhaustiveMatch_typeof();}}}
namespace g{namespace Uno{struct Exception_type;} namespace Outracks{namespace Simulator{namespace Runtime{::g::Uno::Exception_type* MemberNotFound_typeof();}}}}
namespace g{namespace Uno{struct Exception_type;} namespace Outracks{namespace Simulator{namespace Runtime{::g::Uno::Exception_type* TypeNotFound_typeof();}}}}
namespace g{namespace Uno{struct Exception_type;} namespace Outracks{namespace Simulator{namespace Runtime{::g::Uno::Exception_type* UnambiguousMethodNotFound_typeof();}}}}
namespace g{namespace Uno{struct Exception_type;} namespace Outracks{namespace Simulator{namespace Runtime{::g::Uno::Exception_type* VariableNotBound_typeof();}}}}
namespace g{namespace Uno{uClassType* Array_typeof();}}
namespace g{namespace Uno{uClassType* Color_typeof();}}
namespace g{namespace Uno{uClassType* ColorHelper_typeof();}}
namespace g{namespace Uno{uClassType* Enum_typeof();}}
namespace g{namespace Uno{uClassType* GC_typeof();}}
namespace g{namespace Uno{uClassType* Generic_typeof();}}
namespace g{namespace Uno{uClassType* Math_typeof();}}
namespace g{namespace Uno{uClassType* Matrix_typeof();}}
namespace g{namespace Uno{uClassType* Quaternion_typeof();}}
namespace g{namespace Uno{uClassType* Vector_typeof();}}
namespace g{namespace Uno{uStructType* Bool_typeof();}}
namespace g{namespace Uno{uStructType* Byte_typeof();}}
namespace g{namespace Uno{uStructType* Byte2_typeof();}}
namespace g{namespace Uno{uStructType* Byte4_typeof();}}
namespace g{namespace Uno{uStructType* Char_typeof();}}
namespace g{namespace Uno{uStructType* Double_typeof();}}
namespace g{namespace Uno{uStructType* Float_typeof();}}
namespace g{namespace Uno{uStructType* Float2_typeof();}}
namespace g{namespace Uno{uStructType* Float2x2_typeof();}}
namespace g{namespace Uno{uStructType* Float3_typeof();}}
namespace g{namespace Uno{uStructType* Float3x3_typeof();}}
namespace g{namespace Uno{uStructType* Float4_typeof();}}
namespace g{namespace Uno{uStructType* Float4x4_typeof();}}
namespace g{namespace Uno{uStructType* Int_typeof();}}
namespace g{namespace Uno{uStructType* Int2_typeof();}}
namespace g{namespace Uno{uStructType* Int3_typeof();}}
namespace g{namespace Uno{uStructType* Int4_typeof();}}
namespace g{namespace Uno{uStructType* IntPtr_typeof();}}
namespace g{namespace Uno{uStructType* Long_typeof();}}
namespace g{namespace Uno{uStructType* Rect_typeof();}}
namespace g{namespace Uno{uStructType* Recti_typeof();}}
namespace g{namespace Uno{uStructType* SByte_typeof();}}
namespace g{namespace Uno{uStructType* SByte2_typeof();}}
namespace g{namespace Uno{uStructType* SByte4_typeof();}}
namespace g{namespace Uno{uStructType* Short_typeof();}}
namespace g{namespace Uno{uStructType* Short2_typeof();}}
namespace g{namespace Uno{uStructType* Short4_typeof();}}
namespace g{namespace Uno{uStructType* UInt_typeof();}}
namespace g{namespace Uno{uStructType* ULong_typeof();}}
namespace g{namespace Uno{uStructType* UShort_typeof();}}
namespace g{namespace Uno{uStructType* UShort2_typeof();}}
namespace g{namespace Uno{uStructType* UShort4_typeof();}}
namespace g{namespace Uno{uType* Application_typeof();}}
namespace g{namespace Uno{uType* Attribute_typeof();}}
namespace g{namespace Uno{uType* Buffer_typeof();}}
namespace g{namespace Uno{uType* DateTime_typeof();}}
namespace g{namespace Uno{uType* Delegate_typeof();}}
namespace g{namespace Uno{uType* EventArgs_typeof();}}
namespace g{namespace Uno{uType* FakeTime_typeof();}}
namespace g{namespace Uno{uType* FlagsAttribute_typeof();}}
namespace g{namespace Uno{uType* String_typeof();}}
namespace g{namespace Uno{uType* Type_typeof();}}
namespace g{namespace Uno{uType* WeakReference_typeof();}}
namespace g{namespace Uno{uType* WeakReferenceAttribute_typeof();}}
namespace g{uClassType* FuseAndroid_bundle_typeof();}
namespace g{uClassType* FuseBasicTheme_bundle_typeof();}
namespace g{uClassType* FuseControls_bundle_typeof();}
namespace g{uClassType* FuseCore_bundle_typeof();}
namespace g{uClassType* FuseDrawing_bundle_typeof();}
namespace g{uClassType* FuseDrawingPolygons_bundle_typeof();}
namespace g{uClassType* FuseDrawingPrimitives_bundle_typeof();}
namespace g{uClassType* FuseEffects_bundle_typeof();}
namespace g{uClassType* FuseElements_bundle_typeof();}
namespace g{uClassType* FuseEntities_bundle_typeof();}
namespace g{uClassType* FuseiOS_bundle_typeof();}
namespace g{uClassType* FuseReactive_bundle_typeof();}
namespace g{uClassType* FuseThemes_bundle_typeof();}
namespace g{uClassType* FuseVideo_bundle_typeof();}
namespace g{uClassType* Mods4Minecraft_bundle_typeof();}
namespace g{uClassType* OutracksSimulatorClientUno_bundle_typeof();}
namespace g{uClassType* UnoCore_bundle_typeof();}
namespace g{uType* HashableWeakReference_typeof();}
namespace g{uType* WeakDictionary_typeof();}
void uInitRtti(uType*(*factories[])());

void uInitRtti()
{
    static uType*(*factories[])() =
    {
        (uType*(*)())&::g::Experimental::Cache::ProxyStream_typeof,
        (uType*(*)())&::g::Experimental::Http::BinaryLoader_typeof,
        (uType*(*)())&::g::Experimental::Http::HttpLoader_typeof,
        (uType*(*)())&::g::Experimental::Http::HttpResponseHeader_typeof,
        (uType*(*)())&::g::Experimental::Http::Internal::DateUtil_typeof,
        (uType*(*)())&::g::Experimental::Http::Loader_typeof,
        (uType*(*)())&::g::Experimental::Http::LoaderConst_typeof,
        (uType*(*)())&::g::Experimental::Http::TextLoader_typeof,
        (uType*(*)())&::g::Experimental::Physics::AdapterMultiplier_typeof,
        (uType*(*)())&::g::Experimental::Physics::AngularAdapter_typeof,
        (uType*(*)())&::g::Experimental::Physics::BasicBoundedRegion2D_typeof,
        (uType*(*)())&::g::Experimental::Physics::DestinationSimulationFactory_typeof,
        (uType*(*)())&::g::Experimental::Physics::ElasticForce_typeof,
        (uType*(*)())&::g::Experimental::Physics::Friction_typeof,
        (uType*(*)())&::g::Experimental::Physics::PointerVelocity_typeof,
        (uType*(*)())&::g::Experimental::Physics::SmoothSnap_typeof,
        (uType*(*)())&::g::Experimental::TextureLoader::Callback_typeof,
        (uType*(*)())&::g::Experimental::TextureLoader::InvalidContentTypeException_typeof,
        (uType*(*)())&::g::Experimental::TextureLoader::TextureLoader_typeof,
        (uType*(*)())&::g::Experimental::TextureLoader::TextureLoaderImpl_typeof,
        (uType*(*)())&::g::Fuse::AlternateRoot_typeof,
        (uType*(*)())&::g::Fuse::Android::Blitter_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::Button_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::CheckBox_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::Circle_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::CompoundButton_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::Control_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::Element_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::FocusManager_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::Image_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::MapView_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::PlainTextEdit_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::RadioButton_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::Rectangle_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::SeekBar_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::Shape_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::Switch_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::TextEdit_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::TextView_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::TextViewBase_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::ToggleButton_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::WebView_typeof,
        (uType*(*)())&::g::Fuse::Android::Helpers_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeEditFactory_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeStyle_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeTemplate_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeViews::ContentControl_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeViews::GraphicsView_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeViews::LeafNativeView_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeViews::NativeView_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeViews::NativeViewHost_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeViews::ParentControl_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeViews::ParentNativeView_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeViews::ScrollView_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeViews::SurfaceView_typeof,
        (uType*(*)())&::g::Fuse::Android::NativeViews::TextureView_typeof,
        (uType*(*)())&::g::Fuse::Android::StatusBarConfig_typeof,
        (uType*(*)())&::g::Fuse::Animations::Animator_typeof,
        (uType*(*)())&::g::Fuse::Animations::AnimatorState_typeof,
        (uType*(*)())&::g::Fuse::Animations::Attractor_typeof,
        (uType*(*)())&::g::Fuse::Animations::AverageMasterProperty_typeof,
        (uType*(*)())&::g::Fuse::Animations::AverageMasterTransform_typeof,
        (uType*(*)())&::g::Fuse::Animations::AverageMixer_typeof,
        (uType*(*)())&::g::Fuse::Animations::Change_typeof,
        (uType*(*)())&::g::Fuse::Animations::ContinuousTrackChangeState_typeof,
        (uType*(*)())&::g::Fuse::Animations::Converter_typeof,
        (uType*(*)())&::g::Fuse::Animations::ConverterDouble_typeof,
        (uType*(*)())&::g::Fuse::Animations::ConverterFloat_typeof,
        (uType*(*)())&::g::Fuse::Animations::ConverterFloat2_typeof,
        (uType*(*)())&::g::Fuse::Animations::ConverterFloat3_typeof,
        (uType*(*)())&::g::Fuse::Animations::ConverterFloat4_typeof,
        (uType*(*)())&::g::Fuse::Animations::ConverterSize_typeof,
        (uType*(*)())&::g::Fuse::Animations::ConverterSize2_typeof,
        (uType*(*)())&::g::Fuse::Animations::CreateStateParams_typeof,
        (uType*(*)())&::g::Fuse::Animations::Cycle_typeof,
        (uType*(*)())&::g::Fuse::Animations::CycleState_typeof,
        (uType*(*)())&::g::Fuse::Animations::DiscreteKeyframeTrack_typeof,
        (uType*(*)())&::g::Fuse::Animations::DiscreteMasterProperty_typeof,
        (uType*(*)())&::g::Fuse::Animations::DiscreteMasterTransform_typeof,
        (uType*(*)())&::g::Fuse::Animations::DiscreteMixer_typeof,
        (uType*(*)())&::g::Fuse::Animations::DiscreteSingleTrack_typeof,
        (uType*(*)())&::g::Fuse::Animations::DiscreteTrackChangeState_typeof,
        (uType*(*)())&::g::Fuse::Animations::EasingFunctions_typeof,
        (uType*(*)())&::g::Fuse::Animations::EasingTrack_typeof,
        (uType*(*)())&::g::Fuse::Animations::FastMatrixTransform_typeof,
        (uType*(*)())&::g::Fuse::Animations::Keyframe_typeof,
        (uType*(*)())&::g::Fuse::Animations::MasterBase__GFWResult_typeof,
        (uType*(*)())&::g::Fuse::Animations::MasterBase_typeof,
        (uType*(*)())&::g::Fuse::Animations::MasterProperty_typeof,
        (uType*(*)())&::g::Fuse::Animations::MasterTransform_typeof,
        (uType*(*)())&::g::Fuse::Animations::Mixer_typeof,
        (uType*(*)())&::g::Fuse::Animations::MixerBase_typeof,
        (uType*(*)())&::g::Fuse::Animations::MixerHandle_typeof,
        (uType*(*)())&::g::Fuse::Animations::Move_typeof,
        (uType*(*)())&::g::Fuse::Animations::Nothing_typeof,
        (uType*(*)())&::g::Fuse::Animations::NothingAnimatorState_typeof,
        (uType*(*)())&::g::Fuse::Animations::OpenAnimator_typeof,
        (uType*(*)())&::g::Fuse::Animations::OpenAnimatorState_typeof,
        (uType*(*)())&::g::Fuse::Animations::Player_typeof,
        (uType*(*)())&::g::Fuse::Animations::PlayerPart_typeof,
        (uType*(*)())&::g::Fuse::Animations::RangeAdapter_typeof,
        (uType*(*)())&::g::Fuse::Animations::Resize_typeof,
        (uType*(*)())&::g::Fuse::Animations::ResizeAnimatorState_typeof,
        (uType*(*)())&::g::Fuse::Animations::Rotate_typeof,
        (uType*(*)())&::g::Fuse::Animations::Scale_typeof,
        (uType*(*)())&::g::Fuse::Animations::Skew_typeof,
        (uType*(*)())&::g::Fuse::Animations::Spin_typeof,
        (uType*(*)())&::g::Fuse::Animations::SpinState_typeof,
        (uType*(*)())&::g::Fuse::Animations::SplineTrack_typeof,
        (uType*(*)())&::g::Fuse::Animations::TrackAnimator_typeof,
        (uType*(*)())&::g::Fuse::Animations::TrackAnimatorState_typeof,
        (uType*(*)())&::g::Fuse::Animations::TransformAnimator_typeof,
        (uType*(*)())&::g::Fuse::Animations::TransformAnimatorState_typeof,
        (uType*(*)())&::g::Fuse::Animations::TriggerAnimation_typeof,
        (uType*(*)())&::g::Fuse::Animations::TriggerAnimationState_typeof,
        (uType*(*)())&::g::Fuse::App_typeof,
        (uType*(*)())&::g::Fuse::AppBase_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Template__Template1_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Template_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Template1_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Template2_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Template3_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Template4_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Template5_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle__Template6_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicStyle_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::BasicTheme_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::ButtonText_typeof,
        (uType*(*)())&::g::Fuse::BasicTheme::NativeWithFallbackTheme_typeof,
        (uType*(*)())&::g::Fuse::BeginRemoveArgs_typeof,
        (uType*(*)())&::g::Fuse::Behavior_typeof,
        (uType*(*)())&::g::Fuse::CacheFramebuffer_typeof,
        (uType*(*)())&::g::Fuse::Camera::Camera_typeof,
        (uType*(*)())&::g::Fuse::Camera::iOSCameraHelper_typeof,
        (uType*(*)())&::g::Fuse::Camera::iOSCameraImpl__TakePictureTask_typeof,
        (uType*(*)())&::g::Fuse::Camera::iOSCameraImpl_typeof,
        (uType*(*)())&::g::Fuse::Camera::PictureResult_typeof,
        (uType*(*)())&::g::Fuse::Camera::TakePictureHelpers_typeof,
        (uType*(*)())&::g::Fuse::Camera::TakePictureOptions_typeof,
        (uType*(*)())&::g::Fuse::Controls::BackButton_typeof,
        (uType*(*)())&::g::Fuse::Controls::BeginRemoveArgsImpl_typeof,
        (uType*(*)())&::g::Fuse::Controls::BottomBarBackground_typeof,
        (uType*(*)())&::g::Fuse::Controls::BottomFrameBackground_typeof,
        (uType*(*)())&::g::Fuse::Controls::Button_typeof,
        (uType*(*)())&::g::Fuse::Controls::Circle_typeof,
        (uType*(*)())&::g::Fuse::Controls::ClientPanel_typeof,
        (uType*(*)())&::g::Fuse::Controls::ContentControl_typeof,
        (uType*(*)())&::g::Fuse::Controls::Control_typeof,
        (uType*(*)())&::g::Fuse::Controls::DefaultSwitchBehavior_typeof,
        (uType*(*)())&::g::Fuse::Controls::DockPanel_typeof,
        (uType*(*)())&::g::Fuse::Controls::EdgeNavigator_typeof,
        (uType*(*)())&::g::Fuse::Controls::Ellipse_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackMapViewClient_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextEdit::LineCache_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextEdit::LineCacheLine_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextEdit::LineCachePasswordTransform_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextEdit::TextEditVisual__DegreeSpan_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextEdit::TextEditVisual__SwipeGestureHelper_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextEdit::TextEditVisual_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextEdit::TextPosition_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextEdit::TextSpan_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextEdit::TextWindow_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackWebViewClient_typeof,
        (uType*(*)())&::g::Fuse::Controls::FileVideoSource_typeof,
        (uType*(*)())&::g::Fuse::Controls::Graphics::ControlVisual_typeof,
        (uType*(*)())&::g::Fuse::Controls::Graphics::LinearSliderBehavior_typeof,
        (uType*(*)())&::g::Fuse::Controls::Graphics::PlatformTextRenderer_typeof,
        (uType*(*)())&::g::Fuse::Controls::Graphics::TextRenderer_typeof,
        (uType*(*)())&::g::Fuse::Controls::Graphics::TextVisual__Factory_typeof,
        (uType*(*)())&::g::Fuse::Controls::Graphics::TextVisual_typeof,
        (uType*(*)())&::g::Fuse::Controls::Graphics::Visual_typeof,
        (uType*(*)())&::g::Fuse::Controls::GraphicsView_typeof,
        (uType*(*)())&::g::Fuse::Controls::Grid_typeof,
        (uType*(*)())&::g::Fuse::Controls::HTML_typeof,
        (uType*(*)())&::g::Fuse::Controls::Image_typeof,
        (uType*(*)())&::g::Fuse::Controls::ImageElementDraw_typeof,
        (uType*(*)())&::g::Fuse::Controls::Internal::DefaultTextRenderer__FontKey_typeof,
        (uType*(*)())&::g::Fuse::Controls::Internal::DefaultTextRenderer_typeof,
        (uType*(*)())&::g::Fuse::Controls::Internal::ProperTextTransform_typeof,
        (uType*(*)())&::g::Fuse::Controls::Internal::RectExtensions_typeof,
        (uType*(*)())&::g::Fuse::Controls::Internal::WordWrapInfo_typeof,
        (uType*(*)())&::g::Fuse::Controls::Internal::WordWrapper_typeof,
        (uType*(*)())&::g::Fuse::Controls::Internal::WordWrapperWord_typeof,
        (uType*(*)())&::g::Fuse::Controls::Internal::WrappedLine_typeof,
        (uType*(*)())&::g::Fuse::Controls::JavaScriptCall_typeof,
        (uType*(*)())&::g::Fuse::Controls::KeyframeAccessors_typeof,
        (uType*(*)())&::g::Fuse::Controls::LoadHtmlCall_typeof,
        (uType*(*)())&::g::Fuse::Controls::MapEventArgs_typeof,
        (uType*(*)())&::g::Fuse::Controls::MapMarker_typeof,
        (uType*(*)())&::g::Fuse::Controls::MapView_typeof,
        (uType*(*)())&::g::Fuse::Controls::MarkerEventArgs_typeof,
        (uType*(*)())&::g::Fuse::Controls::MultiLayout_typeof,
        (uType*(*)())&::g::Fuse::Controls::MultiLayoutPanel_typeof,
        (uType*(*)())&::g::Fuse::Controls::NativeViewHost_typeof,
        (uType*(*)())&::g::Fuse::Controls::NavigationBar_typeof,
        (uType*(*)())&::g::Fuse::Controls::Number_typeof,
        (uType*(*)())&::g::Fuse::Controls::Page_typeof,
        (uType*(*)())&::g::Fuse::Controls::PageControl__PageData_typeof,
        (uType*(*)())&::g::Fuse::Controls::PageControl_typeof,
        (uType*(*)())&::g::Fuse::Controls::PageControlBit::EnterHorizontal_typeof,
        (uType*(*)())&::g::Fuse::Controls::PageControlBit::EnterVertical_typeof,
        (uType*(*)())&::g::Fuse::Controls::PageControlBit::ExitHorizontal_typeof,
        (uType*(*)())&::g::Fuse::Controls::PageControlBit::ExitVertical_typeof,
        (uType*(*)())&::g::Fuse::Controls::PageIndicator__Template_typeof,
        (uType*(*)())&::g::Fuse::Controls::PageIndicator_typeof,
        (uType*(*)())&::g::Fuse::Controls::PageIndicatorDot_typeof,
        (uType*(*)())&::g::Fuse::Controls::PageIndicatorDotFactory_typeof,
        (uType*(*)())&::g::Fuse::Controls::Panel_typeof,
        (uType*(*)())&::g::Fuse::Controls::ParentControl_typeof,
        (uType*(*)())&::g::Fuse::Controls::Path_typeof,
        (uType*(*)())&::g::Fuse::Controls::PathShape_typeof,
        (uType*(*)())&::g::Fuse::Controls::Placeholder_typeof,
        (uType*(*)())&::g::Fuse::Controls::PlainTextEdit_typeof,
        (uType*(*)())&::g::Fuse::Controls::Primitive_typeof,
        (uType*(*)())&::g::Fuse::Controls::PropertyBinding_typeof,
        (uType*(*)())&::g::Fuse::Controls::RangeControl_typeof,
        (uType*(*)())&::g::Fuse::Controls::RangeControl2D_typeof,
        (uType*(*)())&::g::Fuse::Controls::Rectangle_typeof,
        (uType*(*)())&::g::Fuse::Controls::RegularPolygon_typeof,
        (uType*(*)())&::g::Fuse::Controls::RightFrameBackground_typeof,
        (uType*(*)())&::g::Fuse::Controls::ScrollPositionChangedArgs_typeof,
        (uType*(*)())&::g::Fuse::Controls::ScrollPropertyChangedArgs_typeof,
        (uType*(*)())&::g::Fuse::Controls::ScrollView_typeof,
        (uType*(*)())&::g::Fuse::Controls::ScrollViewer_typeof,
        (uType*(*)())&::g::Fuse::Controls::Shape_typeof,
        (uType*(*)())&::g::Fuse::Controls::Slider_typeof,
        (uType*(*)())&::g::Fuse::Controls::StackPanel_typeof,
        (uType*(*)())&::g::Fuse::Controls::Star_typeof,
        (uType*(*)())&::g::Fuse::Controls::StatusBarBackground_typeof,
        (uType*(*)())&::g::Fuse::Controls::Switch_typeof,
        (uType*(*)())&::g::Fuse::Controls::Text_typeof,
        (uType*(*)())&::g::Fuse::Controls::TextBlock_typeof,
        (uType*(*)())&::g::Fuse::Controls::TextControl_typeof,
        (uType*(*)())&::g::Fuse::Controls::TextEdit_typeof,
        (uType*(*)())&::g::Fuse::Controls::TextInput_typeof,
        (uType*(*)())&::g::Fuse::Controls::TextInputActionArgs_typeof,
        (uType*(*)())&::g::Fuse::Controls::Toggle_typeof,
        (uType*(*)())&::g::Fuse::Controls::ToggleControl_typeof,
        (uType*(*)())&::g::Fuse::Controls::TopFrameBackground_typeof,
        (uType*(*)())&::g::Fuse::Controls::UrlVideoSource_typeof,
        (uType*(*)())&::g::Fuse::Controls::Video_typeof,
        (uType*(*)())&::g::Fuse::Controls::VideoSource_typeof,
        (uType*(*)())&::g::Fuse::Controls::Viewbox_typeof,
        (uType*(*)())&::g::Fuse::Controls::WebView_typeof,
        (uType*(*)())&::g::Fuse::Controls::WrapPanel_typeof,
        (uType*(*)())&::g::Fuse::Controls::ZoomLevel_typeof,
        (uType*(*)())&::g::Fuse::DataContextChangedArgs_typeof,
        (uType*(*)())&::g::Fuse::Designer::AdvancedAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::ChildExtensionAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::ColorAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::ComponentOfAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::DefaultComponentAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::DefaultInstanceAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::DesignerNameAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::DragDropPriorityAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::ExtensionAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::GroupAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::HideAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::HidesAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::IconAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::InlineAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::IntervalAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::OptionalHideAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::PriorityAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::RangeAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::RecursionSafeAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::RequiredComponentAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::SpawnableAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::SpawnsAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::ThicknessAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::TransitionAttribute_typeof,
        (uType*(*)())&::g::Fuse::Desktop::DesktopRootViewport_typeof,
        (uType*(*)())&::g::Fuse::Desktop::NativeStyle__Template__Factory_typeof,
        (uType*(*)())&::g::Fuse::Desktop::NativeStyle__Template_typeof,
        (uType*(*)())&::g::Fuse::Desktop::NativeStyle_typeof,
        (uType*(*)())&::g::Fuse::Diagnostics_typeof,
        (uType*(*)())&::g::Fuse::DrawArgs_typeof,
        (uType*(*)())&::g::Fuse::DrawContext_typeof,
        (uType*(*)())&::g::Fuse::DrawHelpers_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Batching::Batch_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Batching::BatchHelpers_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Batching::BatchIndexBuffer_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Batching::Entry_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Batching::MeshBatcher_typeof,
        (uType*(*)())&::g::Fuse::Drawing::BezierOp_typeof,
        (uType*(*)())&::g::Fuse::Drawing::BlendModeHelpers_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Border_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Brush_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Brushes_typeof,
        (uType*(*)())&::g::Fuse::Drawing::ButtCap_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Cache_typeof,
        (uType*(*)())&::g::Fuse::Drawing::ClosePath_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Colors_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Contour_typeof,
        (uType*(*)())&::g::Fuse::Drawing::ContourEnumerable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::ContourEnumerator_typeof,
        (uType*(*)())&::g::Fuse::Drawing::ContourTerminator_typeof,
        (uType*(*)())&::g::Fuse::Drawing::CurveTo_typeof,
        (uType*(*)())&::g::Fuse::Drawing::DynamicBrush_typeof,
        (uType*(*)())&::g::Fuse::Drawing::EllipseFactory_typeof,
        (uType*(*)())&::g::Fuse::Drawing::GradientStop_typeof,
        (uType*(*)())&::g::Fuse::Drawing::HorizontalLineTo_typeof,
        (uType*(*)())&::g::Fuse::Drawing::ImageFill__DrawParams_typeof,
        (uType*(*)())&::g::Fuse::Drawing::ImageFill_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Internal::Float2Buffer_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Internal::Float3Buffer_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Internal::FloatBuffer_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Internal::MultiBuffer__Field_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Internal::MultiBuffer__Setter_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Internal::MultiBuffer_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Internal::TypedBuffer_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Internal::UShortBuffer_typeof,
        (uType*(*)())&::g::Fuse::Drawing::LinearGradient_typeof,
        (uType*(*)())&::g::Fuse::Drawing::LinearGradientDrawable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::LineCapImpl_typeof,
        (uType*(*)())&::g::Fuse::Drawing::LineJoinImpl_typeof,
        (uType*(*)())&::g::Fuse::Drawing::LineTo_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Meshes::MeshGenerator_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Meshes::MeshTools_typeof,
        (uType*(*)())&::g::Fuse::Drawing::MiterJoin_typeof,
        (uType*(*)())&::g::Fuse::Drawing::MoveTo_typeof,
        (uType*(*)())&::g::Fuse::Drawing::NonConsecutiveEnumerable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::NonConsecutiveEnumerator_typeof,
        (uType*(*)())&::g::Fuse::Drawing::NonConsecutiveExtension_typeof,
        (uType*(*)())&::g::Fuse::Drawing::PathGeometry_typeof,
        (uType*(*)())&::g::Fuse::Drawing::PathGeometryExtensions_typeof,
        (uType*(*)())&::g::Fuse::Drawing::PathGeometryParser_typeof,
        (uType*(*)())&::g::Fuse::Drawing::PathGeometryRenderer_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Polygon_typeof,
        (uType*(*)())&::g::Fuse::Drawing::PolygonDrawable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::PolygonFiller_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::Circle_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::Coverage_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::FillCoverage_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::LimitCoverage_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::OneLimitCoverage_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::Rectangle_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::StrokeCoverage_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::Wedge_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::WedgeCoverage_typeof,
        (uType*(*)())&::g::Fuse::Drawing::RectangleFactory_typeof,
        (uType*(*)())&::g::Fuse::Drawing::RegularPolygonFactory_typeof,
        (uType*(*)())&::g::Fuse::Drawing::RendererContext_typeof,
        (uType*(*)())&::g::Fuse::Drawing::RoundCap_typeof,
        (uType*(*)())&::g::Fuse::Drawing::SmoothCurveTo_typeof,
        (uType*(*)())&::g::Fuse::Drawing::SolidColor_typeof,
        (uType*(*)())&::g::Fuse::Drawing::StarFactory_typeof,
        (uType*(*)())&::g::Fuse::Drawing::StaticBrush_typeof,
        (uType*(*)())&::g::Fuse::Drawing::StaticSolidColor_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Stroke_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::ActiveRegion_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Collections::Dict_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Collections::DictNode_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Collections::DictNodeEnumerable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerator_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Collections::VertexQueue_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::EdgeLoopEnumerable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::EdgesEnumerable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Face_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::FacesEnumerable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Geom_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::HalfEdge_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Mesh_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::MeshBuilder_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::OriginEnumerable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Sweep_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Vertex_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::VerticesEnumerable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Token_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Util_typeof,
        (uType*(*)())&::g::Fuse::Drawing::VerticalLineTo_typeof,
        (uType*(*)())&::g::Fuse::Drawing::WindingRules_typeof,
        (uType*(*)())&::g::Fuse::Effects::BasicEffect_typeof,
        (uType*(*)())&::g::Fuse::Effects::Blur_typeof,
        (uType*(*)())&::g::Fuse::Effects::Desaturate_typeof,
        (uType*(*)())&::g::Fuse::Effects::DropShadow__Blitter_typeof,
        (uType*(*)())&::g::Fuse::Effects::DropShadow_typeof,
        (uType*(*)())&::g::Fuse::Effects::Effect_typeof,
        (uType*(*)())&::g::Fuse::Effects::EffectHelpers_typeof,
        (uType*(*)())&::g::Fuse::Effects::Halftone_typeof,
        (uType*(*)())&::g::Fuse::Effects::Mask_typeof,
        (uType*(*)())&::g::Fuse::Elements::AlignmentHelpers_typeof,
        (uType*(*)())&::g::Fuse::Elements::BoxPlacement_typeof,
        (uType*(*)())&::g::Fuse::Elements::BoxSizing_typeof,
        (uType*(*)())&::g::Fuse::Elements::Cache_typeof,
        (uType*(*)())&::g::Fuse::Elements::CacheHelper_typeof,
        (uType*(*)())&::g::Fuse::Elements::CacheTile_typeof,
        (uType*(*)())&::g::Fuse::Elements::DisplayHelpers_typeof,
        (uType*(*)())&::g::Fuse::Elements::Element__GMSCacheItem_typeof,
        (uType*(*)())&::g::Fuse::Elements::Element_typeof,
        (uType*(*)())&::g::Fuse::Elements::ElementAtlas_typeof,
        (uType*(*)())&::g::Fuse::Elements::ElementAtlasFramebuffer_typeof,
        (uType*(*)())&::g::Fuse::Elements::ElementAtlasFramebufferPool_typeof,
        (uType*(*)())&::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry_typeof,
        (uType*(*)())&::g::Fuse::Elements::ElementAtlasFramebufferPoolImpl_typeof,
        (uType*(*)())&::g::Fuse::Elements::ElementBatch_typeof,
        (uType*(*)())&::g::Fuse::Elements::ElementBatchEntry_typeof,
        (uType*(*)())&::g::Fuse::Elements::ElementBatcher_typeof,
        (uType*(*)())&::g::Fuse::Elements::FillAspectBoxSizing_typeof,
        (uType*(*)())&::g::Fuse::Elements::InteractiveTransform_typeof,
        (uType*(*)())&::g::Fuse::Elements::Internal::ElementDraw_typeof,
        (uType*(*)())&::g::Fuse::Elements::Internal::Scale9Rectangle_typeof,
        (uType*(*)())&::g::Fuse::Elements::LayoutMasterBoxSizing__LayoutMasterData_typeof,
        (uType*(*)())&::g::Fuse::Elements::LayoutMasterBoxSizing_typeof,
        (uType*(*)())&::g::Fuse::Elements::LimitBoxSizing_typeof,
        (uType*(*)())&::g::Fuse::Elements::NoImplicitMaxBoxSizing_typeof,
        (uType*(*)())&::g::Fuse::Elements::PreplacementArgs_typeof,
        (uType*(*)())&::g::Fuse::Elements::SingleNodeDrawable_typeof,
        (uType*(*)())&::g::Fuse::Elements::StandardBoxSizing_typeof,
        (uType*(*)())&::g::Fuse::Elements::TextureAtlas_typeof,
        (uType*(*)())&::g::Fuse::Elements::TransformOrigins__AnchorOrigin_typeof,
        (uType*(*)())&::g::Fuse::Elements::TransformOrigins__BoxCenter_typeof,
        (uType*(*)())&::g::Fuse::Elements::TransformOrigins__CenterOrigin_typeof,
        (uType*(*)())&::g::Fuse::Elements::TransformOrigins__TopLeftOrigin_typeof,
        (uType*(*)())&::g::Fuse::Elements::TransformOrigins_typeof,
        (uType*(*)())&::g::Fuse::Elements::TranslationModes__OffsetMode_typeof,
        (uType*(*)())&::g::Fuse::Elements::TranslationModes__PositionOffsetMode_typeof,
        (uType*(*)())&::g::Fuse::Elements::TranslationModes__RelativeResizeChangeMode_typeof,
        (uType*(*)())&::g::Fuse::Elements::TranslationModes__SizeFactorMode_typeof,
        (uType*(*)())&::g::Fuse::Elements::TranslationModes__TransformOriginOffsetMode_typeof,
        (uType*(*)())&::g::Fuse::Elements::TranslationModes_typeof,
        (uType*(*)())&::g::Fuse::Elements::Viewport_typeof,
        (uType*(*)())&::g::Fuse::Entities::Component_typeof,
        (uType*(*)())&::g::Fuse::Entities::DefaultMaterial_typeof,
        (uType*(*)())&::g::Fuse::Entities::Designer::AnimationHelpers_typeof,
        (uType*(*)())&::g::Fuse::Entities::Designer::PreloadedResources_typeof,
        (uType*(*)())&::g::Fuse::Entities::DirectArrayMeshIntersecter_typeof,
        (uType*(*)())&::g::Fuse::Entities::DirectionalLight_typeof,
        (uType*(*)())&::g::Fuse::Entities::Entity_typeof,
        (uType*(*)())&::g::Fuse::Entities::Entry_typeof,
        (uType*(*)())&::g::Fuse::Entities::EnvironmentLight_typeof,
        (uType*(*)())&::g::Fuse::Entities::Filters::Blitter_typeof,
        (uType*(*)())&::g::Fuse::Entities::Filters::Blur_typeof,
        (uType*(*)())&::g::Fuse::Entities::Filters::FindEdges_typeof,
        (uType*(*)())&::g::Fuse::Entities::Frustum_typeof,
        (uType*(*)())&::g::Fuse::Entities::IndexedArrayMeshIntersecter_typeof,
        (uType*(*)())&::g::Fuse::Entities::Internal::SceneGraphBuilder_typeof,
        (uType*(*)())&::g::Fuse::Entities::Internal::SceneGraphBuilderVisitor_typeof,
        (uType*(*)())&::g::Fuse::Entities::Light_typeof,
        (uType*(*)())&::g::Fuse::Entities::Material_typeof,
        (uType*(*)())&::g::Fuse::Entities::Mesh_typeof,
        (uType*(*)())&::g::Fuse::Entities::MeshBatchingEngine_typeof,
        (uType*(*)())&::g::Fuse::Entities::MeshRenderer_typeof,
        (uType*(*)())&::g::Fuse::Entities::ModelMeshCollision__Direct_typeof,
        (uType*(*)())&::g::Fuse::Entities::ModelMeshCollision__Indexed_typeof,
        (uType*(*)())&::g::Fuse::Entities::ModelMeshCollision_typeof,
        (uType*(*)())&::g::Fuse::Entities::ModelMeshHelpers_typeof,
        (uType*(*)())&::g::Fuse::Entities::NodeExtensions_typeof,
        (uType*(*)())&::g::Fuse::Entities::PointLight_typeof,
        (uType*(*)())&::g::Fuse::Entities::Primitives::ConeRenderer_typeof,
        (uType*(*)())&::g::Fuse::Entities::Primitives::CubeRenderer_typeof,
        (uType*(*)())&::g::Fuse::Entities::Primitives::CylinderRenderer_typeof,
        (uType*(*)())&::g::Fuse::Entities::Primitives::SphereRenderer_typeof,
        (uType*(*)())&::g::Fuse::Entities::Processing::Extrude_typeof,
        (uType*(*)())&::g::Fuse::Entities::Processing::Stroke_typeof,
        (uType*(*)())&::g::Fuse::Entities::Raycasting__EntityVisitor_typeof,
        (uType*(*)())&::g::Fuse::Entities::Raycasting_typeof,
        (uType*(*)())&::g::Fuse::Entities::RenderNode_typeof,
        (uType*(*)())&::g::Fuse::Entities::RenderToTexture_typeof,
        (uType*(*)())&::g::Fuse::Entities::Scene_typeof,
        (uType*(*)())&::g::Fuse::Entities::SkinnedMeshRenderer_typeof,
        (uType*(*)())&::g::Fuse::Entities::Skinner_typeof,
        (uType*(*)())&::g::Fuse::Entities::SpotLight_typeof,
        (uType*(*)())&::g::Fuse::Entities::Transform3D_typeof,
        (uType*(*)())&::g::Fuse::Entities::TriangleMeshIntersecter_typeof,
        (uType*(*)())&::g::Fuse::Entities::VisitAction_typeof,
        (uType*(*)())&::g::Fuse::Entities::VisitPredicate_typeof,
        (uType*(*)())&::g::Fuse::Entities::VisitType_typeof,
        (uType*(*)())&::g::Fuse::FastMatrix_typeof,
        (uType*(*)())&::g::Fuse::FixedViewport_typeof,
        (uType*(*)())&::g::Fuse::Font_typeof,
        (uType*(*)())&::g::Fuse::Fonts_typeof,
        (uType*(*)())&::g::Fuse::FramebufferPool_typeof,
        (uType*(*)())&::g::Fuse::FramebufferPoolImpl_typeof,
        (uType*(*)())&::g::Fuse::FrustumViewport_typeof,
        (uType*(*)())&::g::Fuse::GeoLocation::GeoCoordinates_typeof,
        (uType*(*)())&::g::Fuse::GeoLocation::IOSLocationProvider__ContinuesListener_typeof,
        (uType*(*)())&::g::Fuse::GeoLocation::IOSLocationProvider__LocationListenerBase_typeof,
        (uType*(*)())&::g::Fuse::GeoLocation::IOSLocationProvider__PromiseListener_typeof,
        (uType*(*)())&::g::Fuse::GeoLocation::IOSLocationProvider_typeof,
        (uType*(*)())&::g::Fuse::GeoLocation::Location_typeof,
        (uType*(*)())&::g::Fuse::GeoLocation::LocationTracker_typeof,
        (uType*(*)())&::g::Fuse::Gestures::CircularRangeBehavior_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Clicked_typeof,
        (uType*(*)())&::g::Fuse::Gestures::ClickedArgs_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Clicker_typeof,
        (uType*(*)())&::g::Fuse::Gestures::ClickerTrigger_typeof,
        (uType*(*)())&::g::Fuse::Gestures::DegreeSpan_typeof,
        (uType*(*)())&::g::Fuse::Gestures::double2_typeof,
        (uType*(*)())&::g::Fuse::Gestures::DoubleClicked_typeof,
        (uType*(*)())&::g::Fuse::Gestures::DoubleTapped_typeof,
        (uType*(*)())&::g::Fuse::Gestures::DoubleTappedArgs_typeof,
        (uType*(*)())&::g::Fuse::Gestures::EdgeSwipeAnimation_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Internal::EdgeSwiper_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Internal::Swiper_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Internal::SwipeRegion_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Internal::TwoFinger__Point_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Internal::TwoFinger_typeof,
        (uType*(*)())&::g::Fuse::Gestures::KeepFocusInView_typeof,
        (uType*(*)())&::g::Fuse::Gestures::KeepInView_typeof,
        (uType*(*)())&::g::Fuse::Gestures::KeepInViewCommon_typeof,
        (uType*(*)())&::g::Fuse::Gestures::LinearRangeBehavior_typeof,
        (uType*(*)())&::g::Fuse::Gestures::LongPressed_typeof,
        (uType*(*)())&::g::Fuse::Gestures::LongPressedArgs_typeof,
        (uType*(*)())&::g::Fuse::Gestures::PanGesture_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Pressed_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Released_typeof,
        (uType*(*)())&::g::Fuse::Gestures::RotateGesture_typeof,
        (uType*(*)())&::g::Fuse::Gestures::ScrollableGoto_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Scroller_typeof,
        (uType*(*)())&::g::Fuse::Gestures::SetSwipeActive_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Swiped_typeof,
        (uType*(*)())&::g::Fuse::Gestures::SwipeGesture_typeof,
        (uType*(*)())&::g::Fuse::Gestures::SwipeGestureHelper_typeof,
        (uType*(*)())&::g::Fuse::Gestures::SwipingAnimation_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Tapped_typeof,
        (uType*(*)())&::g::Fuse::Gestures::TappedArgs_typeof,
        (uType*(*)())&::g::Fuse::Gestures::ToggleSwipeActive_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Trackball_typeof,
        (uType*(*)())&::g::Fuse::Gestures::TransformGesture_typeof,
        (uType*(*)())&::g::Fuse::Gestures::WhileClickerTrigger_typeof,
        (uType*(*)())&::g::Fuse::Gestures::WhileHovering_typeof,
        (uType*(*)())&::g::Fuse::Gestures::WhilePressed_typeof,
        (uType*(*)())&::g::Fuse::Gestures::WhileSwipeActive_typeof,
        (uType*(*)())&::g::Fuse::Gestures::ZoomGesture_typeof,
        (uType*(*)())&::g::Fuse::GraphicsTheme_typeof,
        (uType*(*)())&::g::Fuse::GraphicsWorker_typeof,
        (uType*(*)())&::g::Fuse::HitTestContext_typeof,
        (uType*(*)())&::g::Fuse::HitTestResult_typeof,
        (uType*(*)())&::g::Fuse::Input::Capturer_typeof,
        (uType*(*)())&::g::Fuse::Input::CustomPointerEventArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::Focus_typeof,
        (uType*(*)())&::g::Fuse::Input::FocusGained_typeof,
        (uType*(*)())&::g::Fuse::Input::FocusGainedArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::FocusLost_typeof,
        (uType*(*)())&::g::Fuse::Input::FocusLostArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::FocusPredictStrategy_typeof,
        (uType*(*)())&::g::Fuse::Input::HitTestHelpers_typeof,
        (uType*(*)())&::g::Fuse::Input::IsFocusableChangedArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::IsFocusableChangedEvent_typeof,
        (uType*(*)())&::g::Fuse::Input::Keyboard_typeof,
        (uType*(*)())&::g::Fuse::Input::KeyEventArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::KeyPressed_typeof,
        (uType*(*)())&::g::Fuse::Input::KeyPressedArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::KeyReleased_typeof,
        (uType*(*)())&::g::Fuse::Input::KeyReleasedArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::Pointer__DefaultPointerEventResponder_typeof,
        (uType*(*)())&::g::Fuse::Input::Pointer__PELHolder_typeof,
        (uType*(*)())&::g::Fuse::Input::Pointer__PointerRecord_typeof,
        (uType*(*)())&::g::Fuse::Input::Pointer_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerEntered_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerEnteredArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerEventArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerEventData_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerLeft_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerLeftArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerMoved_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerMovedArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerPressed_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerPressedArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerReleased_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerReleasedArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerWheelMoved_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerWheelMovedArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::SelectionQuery_typeof,
        (uType*(*)())&::g::Fuse::Input::TextEntered_typeof,
        (uType*(*)())&::g::Fuse::Input::TextEnteredArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::TextService_typeof,
        (uType*(*)())&::g::Fuse::Input::TraverseNodeExtensions_typeof,
        (uType*(*)())&::g::Fuse::Input::UX::AttachedFocusMembers_typeof,
        (uType*(*)())&::g::Fuse::Input::UX::AttachedKeyboardMembers_typeof,
        (uType*(*)())&::g::Fuse::Input::UX::AttachedPointerMembers_typeof,
        (uType*(*)())&::g::Fuse::Internal::Blender_typeof,
        (uType*(*)())&::g::Fuse::Internal::BlenderMap_typeof,
        (uType*(*)())&::g::Fuse::Internal::DoubleBlender_typeof,
        (uType*(*)())&::g::Fuse::Internal::Drawing::SolidRectangle_typeof,
        (uType*(*)())&::g::Fuse::Internal::Float2Blender_typeof,
        (uType*(*)())&::g::Fuse::Internal::Float3Blender_typeof,
        (uType*(*)())&::g::Fuse::Internal::Float4Blender_typeof,
        (uType*(*)())&::g::Fuse::Internal::FloatBlender_typeof,
        (uType*(*)())&::g::Fuse::Internal::FrustumMatrix_typeof,
        (uType*(*)())&::g::Fuse::Internal::FuseConfig_typeof,
        (uType*(*)())&::g::Fuse::Internal::ImageContainer_typeof,
        (uType*(*)())&::g::Fuse::Internal::ScalarBlender_typeof,
        (uType*(*)())&::g::Fuse::Internal::SimpleLock_typeof,
        (uType*(*)())&::g::Fuse::Internal::Size2Blender_typeof,
        (uType*(*)())&::g::Fuse::Internal::SizeBlender_typeof,
        (uType*(*)())&::g::Fuse::Internal::SizingContainer_typeof,
        (uType*(*)())&::g::Fuse::Internal::Statistics_typeof,
        (uType*(*)())&::g::Fuse::Internal::VectorUtil_typeof,
        (uType*(*)())&::g::Fuse::iOS::Blitter_typeof,
        (uType*(*)())&::g::Fuse::iOS::ControlEvent_typeof,
        (uType*(*)())&::g::Fuse::iOS::Controls::Button_typeof,
        (uType*(*)())&::g::Fuse::iOS::Controls::Circle_typeof,
        (uType*(*)())&::g::Fuse::iOS::Controls::Control_typeof,
        (uType*(*)())&::g::Fuse::iOS::Controls::ControlProperties_typeof,
        (uType*(*)())&::g::Fuse::iOS::Controls::Element_typeof,
        (uType*(*)())&::g::Fuse::iOS::Controls::FuseMapView_typeof,
        (uType*(*)())&::g::Fuse::iOS::Controls::Image_typeof,
        (uType*(*)())&::g::Fuse::iOS::Controls::ImageCache_typeof,
        (uType*(*)())&::g::Fuse::iOS::Controls::MapView_typeof,
        (uType*(*)())&::g::Fuse::iOS::Controls::MapViewController_typeof,
        (uType*(*)())&::g::Fuse::iOS::Controls::MultilineTextInput_typeof,
        (uType*(*)())&::g::Fuse::iOS::Controls::Rectangle_typeof,
        (uType*(*)())&::g::Fuse::iOS::Controls::Shape_typeof,
        (uType*(*)())&::g::Fuse::iOS::Controls::SingleLineTextInput_typeof,
        (uType*(*)())&::g::Fuse::iOS::Controls::Slider_typeof,
        (uType*(*)())&::g::Fuse::iOS::Controls::Switch_typeof,
        (uType*(*)())&::g::Fuse::iOS::Controls::TextBlock_typeof,
        (uType*(*)())&::g::Fuse::iOS::Controls::TextInput_typeof,
        (uType*(*)())&::g::Fuse::iOS::Controls::ViewContainer_typeof,
        (uType*(*)())&::g::Fuse::iOS::Controls::WebView_typeof,
        (uType*(*)())&::g::Fuse::iOS::Controls::WKWebViewHelpers_typeof,
        (uType*(*)())&::g::Fuse::iOS::FirstResponder_typeof,
        (uType*(*)())&::g::Fuse::iOS::FontCache_typeof,
        (uType*(*)())&::g::Fuse::iOS::InputDispatch__TouchEvents_typeof,
        (uType*(*)())&::g::Fuse::iOS::InputDispatch_typeof,
        (uType*(*)())&::g::Fuse::iOS::iOSBindingView_typeof,
        (uType*(*)())&::g::Fuse::iOS::iOSDeviceInterop_typeof,
        (uType*(*)())&::g::Fuse::iOS::iOSExtensions_typeof,
        (uType*(*)())&::g::Fuse::iOS::iOSInterop_typeof,
        (uType*(*)())&::g::Fuse::iOS::NativeStyle_typeof,
        (uType*(*)())&::g::Fuse::iOS::NativeTemplate__NativeEditFactory_typeof,
        (uType*(*)())&::g::Fuse::iOS::NativeTemplate_typeof,
        (uType*(*)())&::g::Fuse::iOS::NativeViews::ContentControl_typeof,
        (uType*(*)())&::g::Fuse::iOS::NativeViews::GenericNativeView_typeof,
        (uType*(*)())&::g::Fuse::iOS::NativeViews::GraphicsView_typeof,
        (uType*(*)())&::g::Fuse::iOS::NativeViews::LeafNativeView_typeof,
        (uType*(*)())&::g::Fuse::iOS::NativeViews::NativeView_typeof,
        (uType*(*)())&::g::Fuse::iOS::NativeViews::NativeViewBlitter_typeof,
        (uType*(*)())&::g::Fuse::iOS::NativeViews::NativeViewHost__ViewHost_typeof,
        (uType*(*)())&::g::Fuse::iOS::NativeViews::NativeViewHost_typeof,
        (uType*(*)())&::g::Fuse::iOS::NativeViews::ParentControl_typeof,
        (uType*(*)())&::g::Fuse::iOS::NativeViews::ParentNativeView_typeof,
        (uType*(*)())&::g::Fuse::iOS::NativeViews::ScrollView_typeof,
        (uType*(*)())&::g::Fuse::iOS::NSAttributedStringConstants_typeof,
        (uType*(*)())&::g::Fuse::iOS::RootView_typeof,
        (uType*(*)())&::g::Fuse::iOS::StatusBarConfig_typeof,
        (uType*(*)())&::g::Fuse::iOS::TextLayout_typeof,
        (uType*(*)())&::g::Fuse::iOS::TextRenderer_typeof,
        (uType*(*)())&::g::Fuse::iOS::Transform_typeof,
        (uType*(*)())&::g::Fuse::iOS::UIControlCallback_typeof,
        (uType*(*)())&::g::Fuse::KeyboardBootstrapper_typeof,
        (uType*(*)())&::g::Fuse::Launcher_typeof,
        (uType*(*)())&::g::Fuse::LayoutParams_typeof,
        (uType*(*)())&::g::Fuse::Layouts::CircleLayout_typeof,
        (uType*(*)())&::g::Fuse::Layouts::Column_typeof,
        (uType*(*)())&::g::Fuse::Layouts::ColumnLayout_typeof,
        (uType*(*)())&::g::Fuse::Layouts::DefaultLayout_typeof,
        (uType*(*)())&::g::Fuse::Layouts::DefinitionBase__ParseDataItem_typeof,
        (uType*(*)())&::g::Fuse::Layouts::DefinitionBase_typeof,
        (uType*(*)())&::g::Fuse::Layouts::DockLayout_typeof,
        (uType*(*)())&::g::Fuse::Layouts::GridLayout_typeof,
        (uType*(*)())&::g::Fuse::Layouts::Layout_typeof,
        (uType*(*)())&::g::Fuse::Layouts::Layouts_typeof,
        (uType*(*)())&::g::Fuse::Layouts::Row_typeof,
        (uType*(*)())&::g::Fuse::Layouts::StackLayout_typeof,
        (uType*(*)())&::g::Fuse::Layouts::WrapLayout_typeof,
        (uType*(*)())&::g::Fuse::MobileBootstrapping_typeof,
        (uType*(*)())&::g::Fuse::NameRegistry_typeof,
        (uType*(*)())&::g::Fuse::NativeTheme_typeof,
        (uType*(*)())&::g::Fuse::Navigation::ActivatingAnimation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::BackForwardNavigationTriggerAction_typeof,
        (uType*(*)())&::g::Fuse::Navigation::DeactivatingAnimation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::DefaultNavigationAnimator_typeof,
        (uType*(*)())&::g::Fuse::Navigation::DefaultNavigationAnimatorPlayer_typeof,
        (uType*(*)())&::g::Fuse::Navigation::DirectNavigation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::EdgeNavigation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::EndSeekArgs_typeof,
        (uType*(*)())&::g::Fuse::Navigation::EnterExitAnimation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::EnteringAnimation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::ExitingAnimation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::GoBack_typeof,
        (uType*(*)())&::g::Fuse::Navigation::GoForward_typeof,
        (uType*(*)())&::g::Fuse::Navigation::HierarchicalNavigation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::LinearNavigation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigatedArgs_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigateTo_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigateToggle_typeof,
        (uType*(*)())&::g::Fuse::Navigation::Navigation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigationAnimation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigationArgs_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigationPageProperty_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigationStateArgs_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigationTriggerAction_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigationTween_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavTriggerUtil_typeof,
        (uType*(*)())&::g::Fuse::Navigation::PageResourceBinding_typeof,
        (uType*(*)())&::g::Fuse::Navigation::PlayerFactory_typeof,
        (uType*(*)())&::g::Fuse::Navigation::ProgressSpan_typeof,
        (uType*(*)())&::g::Fuse::Navigation::ProgressTimer_typeof,
        (uType*(*)())&::g::Fuse::Navigation::SeekNavigationAnimatorPlayer_typeof,
        (uType*(*)())&::g::Fuse::Navigation::StructuredNavigation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::SwipeNavigate_typeof,
        (uType*(*)())&::g::Fuse::Navigation::UpdateSeekArgs_typeof,
        (uType*(*)())&::g::Fuse::Navigation::WhileActive_typeof,
        (uType*(*)())&::g::Fuse::Navigation::WhileCanGoBack_typeof,
        (uType*(*)())&::g::Fuse::Navigation::WhileCanGoForward_typeof,
        (uType*(*)())&::g::Fuse::Navigation::WhileHistoryTrigger_typeof,
        (uType*(*)())&::g::Fuse::Navigation::WhileInactive_typeof,
        (uType*(*)())&::g::Fuse::Navigation::WhileInEnterState_typeof,
        (uType*(*)())&::g::Fuse::Navigation::WhileInExitState_typeof,
        (uType*(*)())&::g::Fuse::Navigation::WhileNavigating_typeof,
        (uType*(*)())&::g::Fuse::Navigation::WhileNavigationTrigger_typeof,
        (uType*(*)())&::g::Fuse::Node__HitTestRecord_typeof,
        (uType*(*)())&::g::Fuse::Node__InteractionItem_typeof,
        (uType*(*)())&::g::Fuse::Node_typeof,
        (uType*(*)())&::g::Fuse::NodeBounds_typeof,
        (uType*(*)())&::g::Fuse::NodeEvent_typeof,
        (uType*(*)())&::g::Fuse::NodeEventArgs_typeof,
        (uType*(*)())&::g::Fuse::NodeListCache_typeof,
        (uType*(*)())&::g::Fuse::OrthographicFrustum_typeof,
        (uType*(*)())&::g::Fuse::PerspectiveFrustum_typeof,
        (uType*(*)())&::g::Fuse::Physics::Body_typeof,
        (uType*(*)())&::g::Fuse::Physics::Draggable_typeof,
        (uType*(*)())&::g::Fuse::Physics::EnteredForceField_typeof,
        (uType*(*)())&::g::Fuse::Physics::ExitedForceField_typeof,
        (uType*(*)())&::g::Fuse::Physics::ForceField_typeof,
        (uType*(*)())&::g::Fuse::Physics::ForceFieldEventArgs_typeof,
        (uType*(*)())&::g::Fuse::Physics::ForceFieldEventTrigger_typeof,
        (uType*(*)())&::g::Fuse::Physics::ForceFieldTrigger_typeof,
        (uType*(*)())&::g::Fuse::Physics::InForceFieldAnimation_typeof,
        (uType*(*)())&::g::Fuse::Physics::PointAttractor_typeof,
        (uType*(*)())&::g::Fuse::Physics::Spring_typeof,
        (uType*(*)())&::g::Fuse::Physics::WhileDragging_typeof,
        (uType*(*)())&::g::Fuse::Physics::World_typeof,
        (uType*(*)())&::g::Fuse::PlacedArgs_typeof,
        (uType*(*)())&::g::Fuse::Preview::SelectionManager_typeof,
        (uType*(*)())&::g::Fuse::Properties_typeof,
        (uType*(*)())&::g::Fuse::PropertyHandle_typeof,
        (uType*(*)())&::g::Fuse::Reactive::Binding_typeof,
        (uType*(*)())&::g::Fuse::Reactive::CascadingPathSubscription__BindAttempt_typeof,
        (uType*(*)())&::g::Fuse::Reactive::CascadingPathSubscription_typeof,
        (uType*(*)())&::g::Fuse::Reactive::Case_typeof,
        (uType*(*)())&::g::Fuse::Reactive::Console_typeof,
        (uType*(*)())&::g::Fuse::Reactive::DataBinding_typeof,
        (uType*(*)())&::g::Fuse::Reactive::DataToResourceBinding_typeof,
        (uType*(*)())&::g::Fuse::Reactive::DebugLog_typeof,
        (uType*(*)())&::g::Fuse::Reactive::Dispatcher_typeof,
        (uType*(*)())&::g::Fuse::Reactive::Each_typeof,
        (uType*(*)())&::g::Fuse::Reactive::EventBinding_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::Base64_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::Builtins_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::Bundle__ReadClosure_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::Bundle_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::Camera_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::Email_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::Environment_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::FileReaderImpl__FileReadCommand_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::FileReaderImpl_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::FunctionClosure_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::GeoLocation_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::Globals_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpClient_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpRequest_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::Http_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::InterApp_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::Lifecycle_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::Maps_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::Phone_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::RaiseEvent_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::Storage_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::TimerManager__Timer_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::TimerManager_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::TimerModule__CallbackClosure_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::TimerModule_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::UserEvents_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::Vibration_typeof,
        (uType*(*)())&::g::Fuse::Reactive::InternalPathSubscription_typeof,
        (uType*(*)())&::g::Fuse::Reactive::JavaScript__CallClosure_typeof,
        (uType*(*)())&::g::Fuse::Reactive::JavaScript_typeof,
        (uType*(*)())&::g::Fuse::Reactive::Match_typeof,
        (uType*(*)())&::g::Fuse::Reactive::Observable_typeof,
        (uType*(*)())&::g::Fuse::Reactive::ObservableSubscription_typeof,
        (uType*(*)())&::g::Fuse::Reactive::ScriptEventArgs_typeof,
        (uType*(*)())&::g::Fuse::Reactive::ScriptObjectSerializer_typeof,
        (uType*(*)())&::g::Fuse::Reactive::Select_typeof,
        (uType*(*)())&::g::Fuse::Reactive::ThreadWorker_typeof,
        (uType*(*)())&::g::Fuse::Reactive::WhileCount_typeof,
        (uType*(*)())&::g::Fuse::Reactive::WhileEmpty_typeof,
        (uType*(*)())&::g::Fuse::RenderTargetEntry_typeof,
        (uType*(*)())&::g::Fuse::RequestBringIntoViewArgs_typeof,
        (uType*(*)())&::g::Fuse::RequiresRootedException_typeof,
        (uType*(*)())&::g::Fuse::Resources::DisposalManager_typeof,
        (uType*(*)())&::g::Fuse::Resources::DisposalPolicy_typeof,
        (uType*(*)())&::g::Fuse::Resources::DoubleResourceConverter_typeof,
        (uType*(*)())&::g::Fuse::Resources::ExpirationDisposalPolicy_typeof,
        (uType*(*)())&::g::Fuse::Resources::FileImageSource_typeof,
        (uType*(*)())&::g::Fuse::Resources::FileImageSourceCache_typeof,
        (uType*(*)())&::g::Fuse::Resources::FileImageSourceImpl_typeof,
        (uType*(*)())&::g::Fuse::Resources::FileResource_typeof,
        (uType*(*)())&::g::Fuse::Resources::FloatResourceConverter_typeof,
        (uType*(*)())&::g::Fuse::Resources::GenericResourceConverter_typeof,
        (uType*(*)())&::g::Fuse::Resources::HttpImageSource_typeof,
        (uType*(*)())&::g::Fuse::Resources::HttpImageSourceCache_typeof,
        (uType*(*)())&::g::Fuse::Resources::HttpImageSourceImpl__BackgroundLoad_typeof,
        (uType*(*)())&::g::Fuse::Resources::HttpImageSourceImpl_typeof,
        (uType*(*)())&::g::Fuse::Resources::ImageSource_typeof,
        (uType*(*)())&::g::Fuse::Resources::ImageSourceErrorArgs_typeof,
        (uType*(*)())&::g::Fuse::Resources::IntResourceConverter_typeof,
        (uType*(*)())&::g::Fuse::Resources::LoadingImageSource_typeof,
        (uType*(*)())&::g::Fuse::Resources::MemoryPolicy_typeof,
        (uType*(*)())&::g::Fuse::Resources::MultiDensityImageSource_typeof,
        (uType*(*)())&::g::Fuse::Resources::NumericResourceConverter_typeof,
        (uType*(*)())&::g::Fuse::Resources::PolicyDeferredDisposable_typeof,
        (uType*(*)())&::g::Fuse::Resources::ProxyImageSource_typeof,
        (uType*(*)())&::g::Fuse::Resources::ResourceBinding_typeof,
        (uType*(*)())&::g::Fuse::Resources::ResourceBool_typeof,
        (uType*(*)())&::g::Fuse::Resources::ResourceConverters_typeof,
        (uType*(*)())&::g::Fuse::Resources::ResourceFloat_typeof,
        (uType*(*)())&::g::Fuse::Resources::ResourceFloat2_typeof,
        (uType*(*)())&::g::Fuse::Resources::ResourceFloat3_typeof,
        (uType*(*)())&::g::Fuse::Resources::ResourceFloat4_typeof,
        (uType*(*)())&::g::Fuse::Resources::ResourceObject_typeof,
        (uType*(*)())&::g::Fuse::Resources::ResourceRegistry_typeof,
        (uType*(*)())&::g::Fuse::Resources::ResourceSetter_typeof,
        (uType*(*)())&::g::Fuse::Resources::ResourceString_typeof,
        (uType*(*)())&::g::Fuse::Resources::RetainDisposalPolicy_typeof,
        (uType*(*)())&::g::Fuse::Resources::TextureImageSource_typeof,
        (uType*(*)())&::g::Fuse::RootViewport_typeof,
        (uType*(*)())&::g::Fuse::Rotation_typeof,
        (uType*(*)())&::g::Fuse::Scaling_typeof,
        (uType*(*)())&::g::Fuse::ScalingModes__IdentityMode_typeof,
        (uType*(*)())&::g::Fuse::ScalingModes_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Array_typeof,
        (uType*(*)())&::g::Fuse::Scripting::BoolChangedArgs_typeof,
        (uType*(*)())&::g::Fuse::Scripting::CodeModule_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Context_typeof,
        (uType*(*)())&::g::Fuse::Scripting::DoubleChangedArgs_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Duktape::Array_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Duktape::Context_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Duktape::duk_context_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Duktape::duktape_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Duktape::Function_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Duktape::Object_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Duktape::RawCallback_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Error_typeof,
        (uType*(*)())&::g::Fuse::Scripting::External_typeof,
        (uType*(*)())&::g::Fuse::Scripting::FactoryClosure_typeof,
        (uType*(*)())&::g::Fuse::Scripting::FileModule_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Function_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JavaScriptCore::Array_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JavaScriptCore::Context_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JavaScriptCore::Function_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JavaScriptCore::Marshaller__CallbackExceptionHandler_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JavaScriptCore::Marshaller_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JavaScriptCore::Object_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JSCallback__ActionClosure_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JSCallback__ActionClosure1_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JSCallback__ActionClosure2_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JSCallback__FuncClosure_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JSCallback__FuncClosure1_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JSCallback__FuncClosure2_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JSCallback__NumberConverter_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JSCallback_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JSFileSource_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Marshal_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Module_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ModuleResult_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NativeEvent_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NativeFunction__NativeFunctionClosure_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NativeFunction_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NativeMember_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NativeModule_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NativePromise__ContextClosure_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NativePromise__PromiseClosure_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NativePromise_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NativeProperty_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Object_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ScriptClass_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ScriptException_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ScriptMethod_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ScriptMethod1_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ScriptModule__RequireContext_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ScriptModule_typeof,
        (uType*(*)())&::g::Fuse::Scripting::StringChangedArgs_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Value_typeof,
        (uType*(*)())&::g::Fuse::Shapes::Circle_typeof,
        (uType*(*)())&::g::Fuse::Shapes::Ellipse_typeof,
        (uType*(*)())&::g::Fuse::Shapes::GeometryCache_typeof,
        (uType*(*)())&::g::Fuse::Shapes::GeometryCacheEntry_typeof,
        (uType*(*)())&::g::Fuse::Shapes::Path_typeof,
        (uType*(*)())&::g::Fuse::Shapes::PathShape_typeof,
        (uType*(*)())&::g::Fuse::Shapes::Rectangle_typeof,
        (uType*(*)())&::g::Fuse::Shapes::RegularPolygon_typeof,
        (uType*(*)())&::g::Fuse::Shapes::Shape_typeof,
        (uType*(*)())&::g::Fuse::Shapes::Star_typeof,
        (uType*(*)())&::g::Fuse::Shear_typeof,
        (uType*(*)())&::g::Fuse::Stage_typeof,
        (uType*(*)())&::g::Fuse::Storage::ApplicationDir__ReadClosure_typeof,
        (uType*(*)())&::g::Fuse::Storage::ApplicationDir__WriteClosure_typeof,
        (uType*(*)())&::g::Fuse::Storage::ApplicationDir_typeof,
        (uType*(*)())&::g::Fuse::Style_typeof,
        (uType*(*)())&::g::Fuse::StyleProperty_typeof,
        (uType*(*)())&::g::Fuse::StyleProperty1_typeof,
        (uType*(*)())&::g::Fuse::Theme_typeof,
        (uType*(*)())&::g::Fuse::Themes::GraphicsStyle__Template_typeof,
        (uType*(*)())&::g::Fuse::Themes::GraphicsStyle__Template1_typeof,
        (uType*(*)())&::g::Fuse::Themes::GraphicsStyle__Template2_typeof,
        (uType*(*)())&::g::Fuse::Themes::GraphicsStyle_typeof,
        (uType*(*)())&::g::Fuse::Themes::GraphicsTemplate_typeof,
        (uType*(*)())&::g::Fuse::Time_typeof,
        (uType*(*)())&::g::Fuse::Timer_typeof,
        (uType*(*)())&::g::Fuse::Transform_typeof,
        (uType*(*)())&::g::Fuse::Translation_typeof,
        (uType*(*)())&::g::Fuse::TranslationModes__LocalMode_typeof,
        (uType*(*)())&::g::Fuse::TranslationModes__ParentSizeMode_typeof,
        (uType*(*)())&::g::Fuse::TranslationModes__SizeMode_typeof,
        (uType*(*)())&::g::Fuse::TranslationModes_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::BringIntoView_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::BringToFront_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Call_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Callback_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::CancelInteractions_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Collapse_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::DebugAction_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::DebugFrame_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::DebugProperty_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::DebugTime_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::EvaluateJS_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::GiveFocus_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Hide_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::JSEventArgs_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::LaunchEmail_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::LaunchMaps_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::LaunchUri_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::LoadHtml_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::LoadUrl_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Pause_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::PlaybackAction_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::PlayTo_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Pulse_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::PulseBackward_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::PulseForward_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::RaiseUserEvent_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::ReleaseFocus_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Reload_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Resume_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::SendToBack_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Set_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Show_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Stop_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::StopLoading_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::TransitionLayout_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::TransitionState_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::TriggerAction_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::UserEventArg_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::WebViewNavAction_typeof,
        (uType*(*)())&::g::Fuse::Triggers::AddingAnimation_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Android_typeof,
        (uType*(*)())&::g::Fuse::Triggers::ContainingText_typeof,
        (uType*(*)())&::g::Fuse::Triggers::InteractionCompleted_typeof,
        (uType*(*)())&::g::Fuse::Triggers::iOS_typeof,
        (uType*(*)())&::g::Fuse::Triggers::LayoutAnimation_typeof,
        (uType*(*)())&::g::Fuse::Triggers::LayoutTransition__PositionChangeMode_typeof,
        (uType*(*)())&::g::Fuse::Triggers::LayoutTransition__ResizeChangeMode_typeof,
        (uType*(*)())&::g::Fuse::Triggers::LayoutTransition__ScaleChangeMode_typeof,
        (uType*(*)())&::g::Fuse::Triggers::LayoutTransition__WorldPositionChangeMode_typeof,
        (uType*(*)())&::g::Fuse::Triggers::LayoutTransition_typeof,
        (uType*(*)())&::g::Fuse::Triggers::LayoutTransitioned_typeof,
        (uType*(*)())&::g::Fuse::Triggers::LayoutTransitionedArgs_typeof,
        (uType*(*)())&::g::Fuse::Triggers::OnBackButton_typeof,
        (uType*(*)())&::g::Fuse::Triggers::OnKeyPress_typeof,
        (uType*(*)())&::g::Fuse::Triggers::OnUserEvent_typeof,
        (uType*(*)())&::g::Fuse::Triggers::PageBeginLoading_typeof,
        (uType*(*)())&::g::Fuse::Triggers::PageLoaded_typeof,
        (uType*(*)())&::g::Fuse::Triggers::ProgressAnimation_typeof,
        (uType*(*)())&::g::Fuse::Triggers::PullToReload_typeof,
        (uType*(*)())&::g::Fuse::Triggers::RangeAnimation_typeof,
        (uType*(*)())&::g::Fuse::Triggers::RemovingAnimation_typeof,
        (uType*(*)())&::g::Fuse::Triggers::ScrollingAnimation_typeof,
        (uType*(*)())&::g::Fuse::Triggers::State_typeof,
        (uType*(*)())&::g::Fuse::Triggers::StateGroup_typeof,
        (uType*(*)())&::g::Fuse::Triggers::TextInputActionTriggered_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Timeline_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Trigger_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileBool_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileCompleted_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileContainsText_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileDisabled_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileEnabled_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileEnabledDisabledTrigger_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileFailed_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileFalse_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileFloat_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileFocused_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileFocusWithin_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileInteracting_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileKeyboardVisible__RelativeToKeyboardMode_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileKeyboardVisible_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileLoading_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileNotFocused_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhilePageLoading_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhilePaused_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhilePlaying_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileScrollable_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileTrigger_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileTrue_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileValue_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileValueStatic_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileVisible_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileWindowAspect_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileWindowLandscape_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileWindowPortrait_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileWindowSize_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WindowSizeTrigger_typeof,
        (uType*(*)())&::g::Fuse::UnhandledExceptionArgs_typeof,
        (uType*(*)())&::g::Fuse::UpdateDispatcher_typeof,
        (uType*(*)())&::g::Fuse::UpdateListener_typeof,
        (uType*(*)())&::g::Fuse::UpdateManager_typeof,
        (uType*(*)())&::g::Fuse::UserEvent_typeof,
        (uType*(*)())&::g::Fuse::UserEventArgs_typeof,
        (uType*(*)())&::g::Fuse::UserEventDispatch_typeof,
        (uType*(*)())&::g::Fuse::Vibration::Vibrate_typeof,
        (uType*(*)())&::g::Fuse::Vibration::Vibration_typeof,
        (uType*(*)())&::g::Fuse::Video::Graphics::iOS::Internal::VideoPlayer_typeof,
        (uType*(*)())&::g::Fuse::Video::Graphics::iOS::Internal::VideoPlayerImpl_typeof,
        (uType*(*)())&::g::Fuse::Video::Graphics::iOS::VideoLoader__VideoPromise_typeof,
        (uType*(*)())&::g::Fuse::Video::Graphics::iOS::VideoLoader_typeof,
        (uType*(*)())&::g::Fuse::Video::Scale9Rectangle_typeof,
        (uType*(*)())&::g::Fuse::Video::VideoContainer_typeof,
        (uType*(*)())&::g::Fuse::Video::VideoDiskCache_typeof,
        (uType*(*)())&::g::Fuse::Video::VideoDrawElement_typeof,
        (uType*(*)())&::g::Fuse::Video::VideoLoader_typeof,
        (uType*(*)())&::g::Fuse::Video::VideoVisual_typeof,
        (uType*(*)())&::g::FuseAndroid_bundle_typeof,
        (uType*(*)())&::g::FuseBasicTheme_bundle_typeof,
        (uType*(*)())&::g::FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property_typeof,
        (uType*(*)())&::g::FuseBasicTheme_FuseBasicThemeButtonText_Value_Property_typeof,
        (uType*(*)())&::g::FuseBasicTheme_FuseControlsButton_Opacity_Property_typeof,
        (uType*(*)())&::g::FuseBasicTheme_FuseControlsButton_Text_Property_typeof,
        (uType*(*)())&::g::FuseBasicTheme_FuseControlsCircle_Opacity_Property_typeof,
        (uType*(*)())&::g::FuseBasicTheme_FuseControlsRectangle_Height_Property_typeof,
        (uType*(*)())&::g::FuseBasicTheme_FuseControlsRectangle_Width_Property_typeof,
        (uType*(*)())&::g::FuseBasicTheme_FuseControlsText_Font_Property_typeof,
        (uType*(*)())&::g::FuseBasicTheme_FuseControlsText_FontSize_Property_typeof,
        (uType*(*)())&::g::FuseBasicTheme_FuseControlsText_LineSpacing_Property_typeof,
        (uType*(*)())&::g::FuseBasicTheme_FuseControlsText_TextAlignment_Property_typeof,
        (uType*(*)())&::g::FuseBasicTheme_FuseControlsText_TextColor_Property_typeof,
        (uType*(*)())&::g::FuseBasicTheme_FuseControlsText_TextWrapping_Property_typeof,
        (uType*(*)())&::g::FuseBasicTheme_FuseControlsText_Value_Property_typeof,
        (uType*(*)())&::g::FuseBasicTheme_FuseControlsTextEdit_FocusIsFocusable_Property_typeof,
        (uType*(*)())&::g::FuseBasicTheme_FuseControlsTextInput_Font_Property_typeof,
        (uType*(*)())&::g::FuseBasicTheme_FuseControlsTextInput_FontSize_Property_typeof,
        (uType*(*)())&::g::FuseBasicTheme_FuseControlsTextInput_LineSpacing_Property_typeof,
        (uType*(*)())&::g::FuseBasicTheme_FuseControlsTextInput_PlaceholderColor_Property_typeof,
        (uType*(*)())&::g::FuseBasicTheme_FuseControlsTextInput_PlaceholderText_Property_typeof,
        (uType*(*)())&::g::FuseBasicTheme_FuseControlsTextInput_TextAlignment_Property_typeof,
        (uType*(*)())&::g::FuseBasicTheme_FuseControlsTextInput_TextColor_Property_typeof,
        (uType*(*)())&::g::FuseBasicTheme_FuseControlsTextInput_TextWrapping_Property_typeof,
        (uType*(*)())&::g::FuseBasicTheme_FuseDrawingSolidColor_Color_Property_typeof,
        (uType*(*)())&::g::FuseBasicTheme_FuseDrawingStroke_Width_Property_typeof,
        (uType*(*)())&::g::FuseBasicTheme_FuseEffectsDropShadow_Color_Property_typeof,
        (uType*(*)())&::g::FuseBasicTheme_FuseTranslation_X_Property_typeof,
        (uType*(*)())&::g::FuseBasicTheme_FuseTriggersActionsGiveFocus_IsActive_Property_typeof,
        (uType*(*)())&::g::FuseBasicTheme_FuseTriggersWhileFalse_Value_Property_typeof,
        (uType*(*)())&::g::FuseControls_bundle_typeof,
        (uType*(*)())&::g::FuseControls_FuseControlsBackButton_IsEnabled_Property_typeof,
        (uType*(*)())&::g::FuseControls_FuseDrawingSolidColor_Color_Property_typeof,
        (uType*(*)())&::g::FuseCore_bundle_typeof,
        (uType*(*)())&::g::FuseDrawing_bundle_typeof,
        (uType*(*)())&::g::FuseDrawingPolygons_bundle_typeof,
        (uType*(*)())&::g::FuseDrawingPrimitives_bundle_typeof,
        (uType*(*)())&::g::FuseEffects_bundle_typeof,
        (uType*(*)())&::g::FuseElements_bundle_typeof,
        (uType*(*)())&::g::FuseEntities_bundle_typeof,
        (uType*(*)())&::g::FuseiOS_bundle_typeof,
        (uType*(*)())&::g::FuseReactive_bundle_typeof,
        (uType*(*)())&::g::FuseThemes_bundle_typeof,
        (uType*(*)())&::g::FuseThemes_FuseControlsScrollView_KeepFocusInView_Property_typeof,
        (uType*(*)())&::g::FuseThemes_FuseControlsScrollView_UserScroll_Property_typeof,
        (uType*(*)())&::g::FuseThemes_FuseGesturesScroller_UserScroll_Property_typeof,
        (uType*(*)())&::g::FuseThemes_FuseTriggersWhileTrue_Value_Property_typeof,
        (uType*(*)())&::g::FuseVideo_bundle_typeof,
        (uType*(*)())&::g::HashableWeakReference_typeof,
        (uType*(*)())&::g::iOS::AudioToolbox::Functions_typeof,
        (uType*(*)())&::g::iOS::CoreFoundation::CFStringRef_typeof,
        (uType*(*)())&::g::iOS::CoreGraphics::CGAffineTransform_typeof,
        (uType*(*)())&::g::iOS::CoreGraphics::CGColorRef_typeof,
        (uType*(*)())&::g::iOS::CoreGraphics::CGColorSpaceRef_typeof,
        (uType*(*)())&::g::iOS::CoreGraphics::CGContextRef_typeof,
        (uType*(*)())&::g::iOS::CoreGraphics::CGDataProviderRef_typeof,
        (uType*(*)())&::g::iOS::CoreGraphics::CGFontRef_typeof,
        (uType*(*)())&::g::iOS::CoreGraphics::CGPathRef_typeof,
        (uType*(*)())&::g::iOS::CoreGraphics::CGPoint_typeof,
        (uType*(*)())&::g::iOS::CoreGraphics::CGRect_typeof,
        (uType*(*)())&::g::iOS::CoreGraphics::CGSize_typeof,
        (uType*(*)())&::g::iOS::CoreGraphics::Functions_typeof,
        (uType*(*)())&::g::iOS::CoreImage::CIImage_typeof,
        (uType*(*)())&::g::iOS::CoreLocation::CLBeaconRegion_typeof,
        (uType*(*)())&::g::iOS::CoreLocation::CLHeading_typeof,
        (uType*(*)())&::g::iOS::CoreLocation::CLLocation_typeof,
        (uType*(*)())&::g::iOS::CoreLocation::CLLocationCoordinate2D_typeof,
        (uType*(*)())&::g::iOS::CoreLocation::CLLocationManager_typeof,
        (uType*(*)())&::g::iOS::CoreLocation::CLRegion_typeof,
        (uType*(*)())&::g::iOS::CoreLocation::CLVisit_typeof,
        (uType*(*)())&::g::iOS::CoreLocation::Interop::ICLLocationManagerDelegate_typeof,
        (uType*(*)())&::g::iOS::Foundation::_NSRange_typeof,
        (uType*(*)())&::g::iOS::Foundation::Interop::INSCopying_typeof,
        (uType*(*)())&::g::iOS::Foundation::NSArray_typeof,
        (uType*(*)())&::g::iOS::Foundation::NSAttributedString_typeof,
        (uType*(*)())&::g::iOS::Foundation::NSBundle_typeof,
        (uType*(*)())&::g::iOS::Foundation::NSCoder_typeof,
        (uType*(*)())&::g::iOS::Foundation::NSDate_typeof,
        (uType*(*)())&::g::iOS::Foundation::NSDictionary_typeof,
        (uType*(*)())&::g::iOS::Foundation::NSError_typeof,
        (uType*(*)())&::g::iOS::Foundation::NSExtensionContext_typeof,
        (uType*(*)())&::g::iOS::Foundation::NSFileManager_typeof,
        (uType*(*)())&::g::iOS::Foundation::NSIndexSet_typeof,
        (uType*(*)())&::g::iOS::Foundation::NSInvocation_typeof,
        (uType*(*)())&::g::iOS::Foundation::NSKeyedArchiver_typeof,
        (uType*(*)())&::g::iOS::Foundation::NSMethodSignature_typeof,
        (uType*(*)())&::g::iOS::Foundation::NSMutableArray_typeof,
        (uType*(*)())&::g::iOS::Foundation::NSMutableAttributedString_typeof,
        (uType*(*)())&::g::iOS::Foundation::NSMutableDictionary_typeof,
        (uType*(*)())&::g::iOS::Foundation::NSMutableOrderedSet_typeof,
        (uType*(*)())&::g::iOS::Foundation::NSMutableSet_typeof,
        (uType*(*)())&::g::iOS::Foundation::NSNumber_typeof,
        (uType*(*)())&::g::iOS::Foundation::NSObject_typeof,
        (uType*(*)())&::g::iOS::Foundation::NSSet_typeof,
        (uType*(*)())&::g::iOS::Foundation::NSString_typeof,
        (uType*(*)())&::g::iOS::Foundation::NSThread_typeof,
        (uType*(*)())&::g::iOS::Foundation::NSUndoManager_typeof,
        (uType*(*)())&::g::iOS::Foundation::NSURL_typeof,
        (uType*(*)())&::g::iOS::Foundation::NSURLCache_typeof,
        (uType*(*)())&::g::iOS::Foundation::NSURLRequest_typeof,
        (uType*(*)())&::g::iOS::Foundation::NSUserActivity_typeof,
        (uType*(*)())&::g::iOS::Foundation::NSUUID_typeof,
        (uType*(*)())&::g::iOS::Foundation::NSValue_typeof,
        (uType*(*)())&::g::iOS::GLKit::GLKView_typeof,
        (uType*(*)())&::g::iOS::MapKit::Interop::IMKAnnotation_typeof,
        (uType*(*)())&::g::iOS::MapKit::Interop::IMKMapViewDelegate_typeof,
        (uType*(*)())&::g::iOS::MapKit::Interop::IMKOverlay_typeof,
        (uType*(*)())&::g::iOS::MapKit::MKAnnotationView_typeof,
        (uType*(*)())&::g::iOS::MapKit::MKCoordinateRegion_typeof,
        (uType*(*)())&::g::iOS::MapKit::MKCoordinateSpan_typeof,
        (uType*(*)())&::g::iOS::MapKit::MKMapCamera_typeof,
        (uType*(*)())&::g::iOS::MapKit::MKMapPoint_typeof,
        (uType*(*)())&::g::iOS::MapKit::MKMapRect_typeof,
        (uType*(*)())&::g::iOS::MapKit::MKMapSize_typeof,
        (uType*(*)())&::g::iOS::MapKit::MKMapView_typeof,
        (uType*(*)())&::g::iOS::MapKit::MKOverlayRenderer_typeof,
        (uType*(*)())&::g::iOS::MapKit::MKOverlayView_typeof,
        (uType*(*)())&::g::iOS::MapKit::MKUserLocation_typeof,
        (uType*(*)())&::g::iOS::OpenGLES::EAGLContext_typeof,
        (uType*(*)())&::g::iOS::OpenGLES::EAGLSharegroup_typeof,
        (uType*(*)())&::g::iOS::QuartzCore::CAGradientLayer_typeof,
        (uType*(*)())&::g::iOS::QuartzCore::CALayer_typeof,
        (uType*(*)())&::g::iOS::QuartzCore::CAShapeLayer_typeof,
        (uType*(*)())&::g::iOS::QuartzCore::CATransform3D_typeof,
        (uType*(*)())&::g::iOS::UIKit::Functions_typeof,
        (uType*(*)())&::g::iOS::UIKit::Interop::IUIContentContainer_typeof,
        (uType*(*)())&::g::iOS::UIKit::Interop::IUICoordinateSpace_typeof,
        (uType*(*)())&::g::iOS::UIKit::Interop::IUIImagePickerControllerDelegate_typeof,
        (uType*(*)())&::g::iOS::UIKit::Interop::IUIKeyInput_typeof,
        (uType*(*)())&::g::iOS::UIKit::Interop::IUILayoutSupport_typeof,
        (uType*(*)())&::g::iOS::UIKit::Interop::IUIScrollViewDelegate_typeof,
        (uType*(*)())&::g::iOS::UIKit::Interop::IUITextFieldDelegate_typeof,
        (uType*(*)())&::g::iOS::UIKit::Interop::IUITextInput_typeof,
        (uType*(*)())&::g::iOS::UIKit::Interop::IUITextInputDelegate_typeof,
        (uType*(*)())&::g::iOS::UIKit::Interop::IUITextInputTokenizer_typeof,
        (uType*(*)())&::g::iOS::UIKit::Interop::IUITextInputTraits_typeof,
        (uType*(*)())&::g::iOS::UIKit::Interop::IUITextViewDelegate_typeof,
        (uType*(*)())&::g::iOS::UIKit::Interop::IUIViewControllerAnimatedTransitioning_typeof,
        (uType*(*)())&::g::iOS::UIKit::Interop::IUIViewControllerContextTransitioning_typeof,
        (uType*(*)())&::g::iOS::UIKit::Interop::IUIViewControllerInteractiveTransitioning_typeof,
        (uType*(*)())&::g::iOS::UIKit::Interop::IUIViewControllerTransitionCoordinator_typeof,
        (uType*(*)())&::g::iOS::UIKit::Interop::IUIViewControllerTransitionCoordinatorContext_typeof,
        (uType*(*)())&::g::iOS::UIKit::Interop::IUIViewControllerTransitioningDelegate_typeof,
        (uType*(*)())&::g::iOS::UIKit::NSLayoutConstraint_typeof,
        (uType*(*)())&::g::iOS::UIKit::NSLayoutManager_typeof,
        (uType*(*)())&::g::iOS::UIKit::NSMutableParagraphStyle_typeof,
        (uType*(*)())&::g::iOS::UIKit::NSParagraphStyle_typeof,
        (uType*(*)())&::g::iOS::UIKit::NSTextAttachment_typeof,
        (uType*(*)())&::g::iOS::UIKit::NSTextContainer_typeof,
        (uType*(*)())&::g::iOS::UIKit::NSTextStorage_typeof,
        (uType*(*)())&::g::iOS::UIKit::UIApplication_typeof,
        (uType*(*)())&::g::iOS::UIKit::UIBarButtonItem_typeof,
        (uType*(*)())&::g::iOS::UIKit::UIBezierPath_typeof,
        (uType*(*)())&::g::iOS::UIKit::UIButton_typeof,
        (uType*(*)())&::g::iOS::UIKit::UIColor_typeof,
        (uType*(*)())&::g::iOS::UIKit::UIControl_typeof,
        (uType*(*)())&::g::iOS::UIKit::UIDevice_typeof,
        (uType*(*)())&::g::iOS::UIKit::UIEdgeInsets_typeof,
        (uType*(*)())&::g::iOS::UIKit::UIEvent_typeof,
        (uType*(*)())&::g::iOS::UIKit::UIFont_typeof,
        (uType*(*)())&::g::iOS::UIKit::UIGestureRecognizer_typeof,
        (uType*(*)())&::g::iOS::UIKit::UIImage_typeof,
        (uType*(*)())&::g::iOS::UIKit::UIImagePickerController_typeof,
        (uType*(*)())&::g::iOS::UIKit::UIImageView_typeof,
        (uType*(*)())&::g::iOS::UIKit::UIInputViewController_typeof,
        (uType*(*)())&::g::iOS::UIKit::UILabel_typeof,
        (uType*(*)())&::g::iOS::UIKit::UIMotionEffect_typeof,
        (uType*(*)())&::g::iOS::UIKit::UINavigationController_typeof,
        (uType*(*)())&::g::iOS::UIKit::UINavigationItem_typeof,
        (uType*(*)())&::g::iOS::UIKit::UIPopoverPresentationController_typeof,
        (uType*(*)())&::g::iOS::UIKit::UIPresentationController_typeof,
        (uType*(*)())&::g::iOS::UIKit::UIResponder_typeof,
        (uType*(*)())&::g::iOS::UIKit::UIScrollView_typeof,
        (uType*(*)())&::g::iOS::UIKit::UISearchDisplayController_typeof,
        (uType*(*)())&::g::iOS::UIKit::UISlider_typeof,
        (uType*(*)())&::g::iOS::UIKit::UISplitViewController_typeof,
        (uType*(*)())&::g::iOS::UIKit::UIStoryboard_typeof,
        (uType*(*)())&::g::iOS::UIKit::UIStoryboardSegue_typeof,
        (uType*(*)())&::g::iOS::UIKit::UISwitch_typeof,
        (uType*(*)())&::g::iOS::UIKit::UITabBarController_typeof,
        (uType*(*)())&::g::iOS::UIKit::UITabBarItem_typeof,
        (uType*(*)())&::g::iOS::UIKit::UITextField_typeof,
        (uType*(*)())&::g::iOS::UIKit::UITextInputMode_typeof,
        (uType*(*)())&::g::iOS::UIKit::UITextPosition_typeof,
        (uType*(*)())&::g::iOS::UIKit::UITextRange_typeof,
        (uType*(*)())&::g::iOS::UIKit::UITextView_typeof,
        (uType*(*)())&::g::iOS::UIKit::UITouch_typeof,
        (uType*(*)())&::g::iOS::UIKit::UITraitCollection_typeof,
        (uType*(*)())&::g::iOS::UIKit::UIView_typeof,
        (uType*(*)())&::g::iOS::UIKit::UIViewController_typeof,
        (uType*(*)())&::g::iOS::UIKit::UIViewPrintFormatter_typeof,
        (uType*(*)())&::g::iOS::UIKit::UIWindow_typeof,
        (uType*(*)())&::g::iOS::WebKit::Interop::IWKNavigationDelegate_typeof,
        (uType*(*)())&::g::iOS::WebKit::WKNavigation_typeof,
        (uType*(*)())&::g::iOS::WebKit::WKWebView_typeof,
        (uType*(*)())&::g::MainView__Template_typeof,
        (uType*(*)())&::g::MainView__Template1_typeof,
        (uType*(*)())&::g::MainView_typeof,
        (uType*(*)())&::g::Mods4Minecraft_bundle_typeof,
        (uType*(*)())&::g::Mods4Minecraft_FuseControlsButton_IsEnabled_Property_typeof,
        (uType*(*)())&::g::Mods4Minecraft_FuseControlsPageControl_Active_Property_typeof,
        (uType*(*)())&::g::Mods4Minecraft_FuseControlsTextInput_Value_Property_typeof,
        (uType*(*)())&::g::ObjC::Bindings::Object_typeof,
        (uType*(*)())&::g::ObjC::Class_typeof,
        (uType*(*)())&::g::ObjC::Helpers_typeof,
        (uType*(*)())&::g::ObjC::ID_typeof,
        (uType*(*)())&::g::ObjC::Protocol_typeof,
        (uType*(*)())&::g::ObjC::Selector_typeof,
        (uType*(*)())&::g::OpenGL::GL_typeof,
        (uType*(*)())&::g::OpenGL::GLBufferHandle_typeof,
        (uType*(*)())&::g::OpenGL::GLFramebufferHandle_typeof,
        (uType*(*)())&::g::OpenGL::GLProgramHandle_typeof,
        (uType*(*)())&::g::OpenGL::GLRenderbufferHandle_typeof,
        (uType*(*)())&::g::OpenGL::GLShaderHandle_typeof,
        (uType*(*)())&::g::OpenGL::GLTextureHandle_typeof,
        (uType*(*)())&::g::Outracks::Simulator::AggregateConnectError_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Application_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Apply_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ApplyFirst_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ApplySecond_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ArrayStream_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bundle_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::AddEventHandler_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::BindVariable_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::BlobLiteral_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::BooleanLiteral_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::CallDynamicMethod_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::CallLambda_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::CallStaticMethod_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::EnumLiteral_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::Expression_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::Instantiate_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::IsType_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::Lambda_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::Literal_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::LogicalOr_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::MethodGroup_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::NamespaceName_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::NoOperation_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::NumberLiteral_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::Optional_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::Optional1_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::OptionalExtensions_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::Parameter_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::ReadProperty_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::ReadStaticField_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::ReadVariable_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::RemoveEventHandler_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::Return_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::Signature_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::Statement_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::StaticMemberName_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::StringLiteral_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::TypeName_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::Variable_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::WriteProperty_typeof,
        (uType*(*)())&::g::Outracks::Simulator::BytecodeCache_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ByteFileSource_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ChangeIp_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Closure_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ConcurrentQueue_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Connected_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Connecting_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ConnectingToHost_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ConnectingToProxy_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ConnectionLost_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ConnectToEndpointClosure_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ConnectToFirstRespondingEndpoint_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Context_typeof,
        (uType*(*)())&::g::Outracks::Simulator::DeviceInfo_typeof,
        (uType*(*)())&::g::Outracks::Simulator::DialogButton_typeof,
        (uType*(*)())&::g::Outracks::Simulator::DummyApplication_typeof,
        (uType*(*)())&::g::Outracks::Simulator::EnumerableHitTestExtension__CollectHitNodesClosure_typeof,
        (uType*(*)())&::g::Outracks::Simulator::EnumerableHitTestExtension_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Exceptions_typeof,
        (uType*(*)())&::g::Outracks::Simulator::FailedToConnect_typeof,
        (uType*(*)())&::g::Outracks::Simulator::FailedToConnectToEndPoint_typeof,
        (uType*(*)())&::g::Outracks::Simulator::FailedToConnectToProxy_typeof,
        (uType*(*)())&::g::Outracks::Simulator::FailedToConnectToSimulator_typeof,
        (uType*(*)())&::g::Outracks::Simulator::FakeApp_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Faulted_typeof,
        (uType*(*)())&::g::Outracks::Simulator::FileCache_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Flasher_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Forget_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Forget1_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ForgetAction_typeof,
        (uType*(*)())&::g::Outracks::Simulator::GeneratedApplication_typeof,
        (uType*(*)())&::g::Outracks::Simulator::GetSimulatorEndpoint_typeof,
        (uType*(*)())&::g::Outracks::Simulator::GoOffline_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Idle_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ImmutableList_typeof,
        (uType*(*)())&::g::Outracks::Simulator::IndentString_typeof,
        (uType*(*)())&::g::Outracks::Simulator::InvalidDataException_typeof,
        (uType*(*)())&::g::Outracks::Simulator::List_typeof,
        (uType*(*)())&::g::Outracks::Simulator::LoadingScreen_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ModalDialog_typeof,
        (uType*(*)())&::g::Outracks::Simulator::NonExhaustiveMatch_typeof,
        (uType*(*)())&::g::Outracks::Simulator::OfflineSimulatorClient_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Protocol::DebugLog_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Protocol::Error_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Protocol::ExceptionInfo_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Protocol::Execute_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Protocol::MessageFromClient_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Protocol::MessageToClient_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Protocol::RegisterName_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Protocol::Reify_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Protocol::SetSelection_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Protocol::UnhandledException_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ProxyClient_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Reflection::DelegateReflection_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Reflection::Native::CppEvent_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Reflection::Native::CppProperty_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Reflection::Native::NativeReflection_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Reflection::Native::Property_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Reflection::Native::ReflectionCache_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Reflection::Native::ReflectionExtensions_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Reflection::Native::ReflectionHelpers_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Reflection::Native::SimpleTypeMap_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Reflection::Native::TryInvokeExtension_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Reifying_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Running_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Runtime::Environment_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Runtime::LambdaClosure_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Runtime::LazyProperty_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Runtime::LazyPropertyStorage_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Runtime::MemberNotFound_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Runtime::ObjectPropertyRegistry_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Runtime::ObjectTagRegistry_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Runtime::ScopeClosure_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Runtime::Selection_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Runtime::SimulatedObjectTypeRegistry_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Runtime::TypeNotFound_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Runtime::UnambiguousMethodNotFound_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Runtime::UxFactory_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Runtime::UxProperty_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Runtime::UxTemplate_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Runtime::VariableNotBound_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Runtime::VirtualMachine_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Serialization_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ShowingModalDialog_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ShowingPrompt_typeof,
        (uType*(*)())&::g::Outracks::Simulator::SimulatorClient_typeof,
        (uType*(*)())&::g::Outracks::Simulator::State_typeof,
        (uType*(*)())&::g::Outracks::Simulator::StringSplitting_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Task_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Tasks_typeof,
        (uType*(*)())&::g::Outracks::Simulator::TaskThread_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Uninitialized_typeof,
        (uType*(*)())&::g::Outracks::Simulator::UserAppState_typeof,
        (uType*(*)())&::g::Outracks::Simulator::WaitForFirstResult_typeof,
        (uType*(*)())&::g::OutracksSimulatorClientUno_bundle_typeof,
        (uType*(*)())&::g::Uno::AggregateException_typeof,
        (uType*(*)())&::g::Uno::Application_typeof,
        (uType*(*)())&::g::Uno::ArgumentException_typeof,
        (uType*(*)())&::g::Uno::ArgumentNullException_typeof,
        (uType*(*)())&::g::Uno::ArgumentOutOfRangeException_typeof,
        (uType*(*)())&::g::Uno::Array_typeof,
        (uType*(*)())&::g::Uno::Attribute_typeof,
        (uType*(*)())&::g::Uno::Bool_typeof,
        (uType*(*)())&::g::Uno::Buffer_typeof,
        (uType*(*)())&::g::Uno::Byte_typeof,
        (uType*(*)())&::g::Uno::Byte2_typeof,
        (uType*(*)())&::g::Uno::Byte4_typeof,
        (uType*(*)())&::g::Uno::Char_typeof,
        (uType*(*)())&::g::Uno::Collections::ConcurrentCollection__DeferLockImpl_typeof,
        (uType*(*)())&::g::Uno::Collections::ConcurrentCollection__ModItem_typeof,
        (uType*(*)())&::g::Uno::Collections::ConcurrentCollection_typeof,
        (uType*(*)())&::g::Uno::Collections::Dictionary__Bucket_typeof,
        (uType*(*)())&::g::Uno::Collections::Dictionary__Enumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::Dictionary__KeyCollection__Enumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::Dictionary__KeyCollection_typeof,
        (uType*(*)())&::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::Dictionary__ValueCollection_typeof,
        (uType*(*)())&::g::Uno::Collections::Dictionary_typeof,
        (uType*(*)())&::g::Uno::Collections::EmptyEnumerable_typeof,
        (uType*(*)())&::g::Uno::Collections::EmptyEnumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::EnumerableExtensions__LinkedList_typeof,
        (uType*(*)())&::g::Uno::Collections::EnumerableExtensions_typeof,
        (uType*(*)())&::g::Uno::Collections::HashSet__Enumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::HashSet_typeof,
        (uType*(*)())&::g::Uno::Collections::IListExtensions_typeof,
        (uType*(*)())&::g::Uno::Collections::KeyValuePair_typeof,
        (uType*(*)())&::g::Uno::Collections::LinkedList__Enumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::LinkedList_typeof,
        (uType*(*)())&::g::Uno::Collections::LinkedListNode_typeof,
        (uType*(*)())&::g::Uno::Collections::List__Enumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::List_typeof,
        (uType*(*)())&::g::Uno::Collections::ObservableList_typeof,
        (uType*(*)())&::g::Uno::Collections::OrderByCompare_typeof,
        (uType*(*)())&::g::Uno::Collections::Queue__Enumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::Queue_typeof,
        (uType*(*)())&::g::Uno::Collections::ReadOnlyCollection_typeof,
        (uType*(*)())&::g::Uno::Collections::SelectEnumerable_typeof,
        (uType*(*)())&::g::Uno::Collections::SelectEnumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::Stack__Enumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::Stack_typeof,
        (uType*(*)())&::g::Uno::Collections::UnionEnumerable_typeof,
        (uType*(*)())&::g::Uno::Collections::UnionEnumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::WhereEnumerable_typeof,
        (uType*(*)())&::g::Uno::Collections::WhereEnumerator_typeof,
        (uType*(*)())&::g::Uno::Color_typeof,
        (uType*(*)())&::g::Uno::ColorHelper_typeof,
        (uType*(*)())&::g::Uno::Compiler::CallerFilePathAttribute_typeof,
        (uType*(*)())&::g::Uno::Compiler::CallerLineNumberAttribute_typeof,
        (uType*(*)())&::g::Uno::Compiler::CallerMemberNameAttribute_typeof,
        (uType*(*)())&::g::Uno::Compiler::CallerPackageNameAttribute_typeof,
        (uType*(*)())&::g::Uno::Compiler::ExportTargetInterop::Android::ForeignFixedNameAttribute_typeof,
        (uType*(*)())&::g::Uno::Compiler::ExportTargetInterop::DontCopyStructAttribute_typeof,
        (uType*(*)())&::g::Uno::Compiler::ExportTargetInterop::DontExportAttribute_typeof,
        (uType*(*)())&::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object_typeof,
        (uType*(*)())&::g::Uno::Compiler::ExportTargetInterop::OptionalAttribute_typeof,
        (uType*(*)())&::g::Uno::Compiler::ExportTargetInterop::StaticAttribute_typeof,
        (uType*(*)())&::g::Uno::Compiler::ExportTargetInterop::TargetSpecificImplementationAttribute_typeof,
        (uType*(*)())&::g::Uno::Compiler::ExportTargetInterop::TargetSpecificTypeAttribute_typeof,
        (uType*(*)())&::g::Uno::Compiler::HideFromCodeCompleterAttribute_typeof,
        (uType*(*)())&::g::Uno::Compiler::IgnoreMainClassAttribute_typeof,
        (uType*(*)())&::g::Uno::Compiler::ImportServices::FilenameAttribute_typeof,
        (uType*(*)())&::g::Uno::Compiler::MainClassAttribute_typeof,
        (uType*(*)())&::g::Uno::Compiler::ShaderGenerator::ShaderStageInlineAttribute_typeof,
        (uType*(*)())&::g::Uno::Compiler::UxGeneratedAttribute_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::BitmapFont__CharPair_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::BitmapFont__GlyphInfo_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::BitmapFont_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::CppFontFace_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::CppFontFaceHandle_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::DefaultTextTransform_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::FontFace_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::FontFaceHelpers_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::RenderedGlyph_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::SdfFontShader_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::SpriteFontShader_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::TextRenderer_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::TextShader_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::TextShaderData_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::TextTransform_typeof,
        (uType*(*)())&::g::Uno::Content::Images::Bitmap_typeof,
        (uType*(*)())&::g::Uno::Content::Models::IndexArray_typeof,
        (uType*(*)())&::g::Uno::Content::Models::Model_typeof,
        (uType*(*)())&::g::Uno::Content::Models::ModelDrawable_typeof,
        (uType*(*)())&::g::Uno::Content::Models::ModelMaterial_typeof,
        (uType*(*)())&::g::Uno::Content::Models::ModelMesh_typeof,
        (uType*(*)())&::g::Uno::Content::Models::ModelNode_typeof,
        (uType*(*)())&::g::Uno::Content::Models::ModelParameter1_typeof,
        (uType*(*)())&::g::Uno::Content::Models::VertexAttributeArray_typeof,
        (uType*(*)())&::g::Uno::Content::Splines::KeyframedSpline__Key_typeof,
        (uType*(*)())&::g::Uno::Content::Splines::KeyframedSpline_typeof,
        (uType*(*)())&::g::Uno::Content::Splines::LinearSplineFloat_typeof,
        (uType*(*)())&::g::Uno::Content::Splines::LinearSplineFloat2_typeof,
        (uType*(*)())&::g::Uno::Content::Splines::LinearSplineFloat3_typeof,
        (uType*(*)())&::g::Uno::Content::Splines::LinearSplineFloat4_typeof,
        (uType*(*)())&::g::Uno::Content::Splines::LinearSplineFloat4x4_typeof,
        (uType*(*)())&::g::Uno::Content::Splines::Spline_typeof,
        (uType*(*)())&::g::Uno::DateTime_typeof,
        (uType*(*)())&::g::Uno::Delegate_typeof,
        (uType*(*)())&::g::Uno::Diagnostics::AllocateEvent_typeof,
        (uType*(*)())&::g::Uno::Diagnostics::AlwaysProfileAttribute_typeof,
        (uType*(*)())&::g::Uno::Diagnostics::Clock_typeof,
        (uType*(*)())&::g::Uno::Diagnostics::Debug_typeof,
        (uType*(*)())&::g::Uno::Diagnostics::EnterEvent_typeof,
        (uType*(*)())&::g::Uno::Diagnostics::ExitEvent_typeof,
        (uType*(*)())&::g::Uno::Diagnostics::FreeEvent_typeof,
        (uType*(*)())&::g::Uno::Diagnostics::IdMap_typeof,
        (uType*(*)())&::g::Uno::Diagnostics::NeverProfileAttribute_typeof,
        (uType*(*)())&::g::Uno::Diagnostics::Profile_typeof,
        (uType*(*)())&::g::Uno::Diagnostics::ProfileData_typeof,
        (uType*(*)())&::g::Uno::Diagnostics::ProfileEvent_typeof,
        (uType*(*)())&::g::Uno::Double_typeof,
        (uType*(*)())&::g::Uno::Enum_typeof,
        (uType*(*)())&::g::Uno::EventArgs_typeof,
        (uType*(*)())&::g::Uno::Exception_typeof,
        (uType*(*)())&::g::Uno::FakeTime_typeof,
        (uType*(*)())&::g::Uno::FlagsAttribute_typeof,
        (uType*(*)())&::g::Uno::Float_typeof,
        (uType*(*)())&::g::Uno::Float2_typeof,
        (uType*(*)())&::g::Uno::Float2x2_typeof,
        (uType*(*)())&::g::Uno::Float3_typeof,
        (uType*(*)())&::g::Uno::Float3x3_typeof,
        (uType*(*)())&::g::Uno::Float4_typeof,
        (uType*(*)())&::g::Uno::Float4x4_typeof,
        (uType*(*)())&::g::Uno::FormatException_typeof,
        (uType*(*)())&::g::Uno::GC_typeof,
        (uType*(*)())&::g::Uno::Generic_typeof,
        (uType*(*)())&::g::Uno::Geometry::Box_typeof,
        (uType*(*)())&::g::Uno::Geometry::Collision_typeof,
        (uType*(*)())&::g::Uno::Geometry::Collision2D_typeof,
        (uType*(*)())&::g::Uno::Geometry::CubicBezier_typeof,
        (uType*(*)())&::g::Uno::Geometry::Frustum_typeof,
        (uType*(*)())&::g::Uno::Geometry::Plane_typeof,
        (uType*(*)())&::g::Uno::Geometry::Ray_typeof,
        (uType*(*)())&::g::Uno::Geometry::Sphere_typeof,
        (uType*(*)())&::g::Uno::Geometry::Triangle_typeof,
        (uType*(*)())&::g::Uno::Geometry::Triangle2D_typeof,
        (uType*(*)())&::g::Uno::Geometry::Vertex_typeof,
        (uType*(*)())&::g::Uno::Geometry::VertexEnumerable_typeof,
        (uType*(*)())&::g::Uno::Geometry::VertexEnumerator_typeof,
        (uType*(*)())&::g::Uno::Graphics::DeviceBuffer_typeof,
        (uType*(*)())&::g::Uno::Graphics::FormatHelpers_typeof,
        (uType*(*)())&::g::Uno::Graphics::Framebuffer_typeof,
        (uType*(*)())&::g::Uno::Graphics::GraphicsContext_typeof,
        (uType*(*)())&::g::Uno::Graphics::IndexBuffer_typeof,
        (uType*(*)())&::g::Uno::Graphics::IndexTypeHelpers_typeof,
        (uType*(*)())&::g::Uno::Graphics::RenderTarget_typeof,
        (uType*(*)())&::g::Uno::Graphics::SamplerState_typeof,
        (uType*(*)())&::g::Uno::Graphics::Texture2D_typeof,
        (uType*(*)())&::g::Uno::Graphics::TextureCube_typeof,
        (uType*(*)())&::g::Uno::Graphics::TextureHelpers_typeof,
        (uType*(*)())&::g::Uno::Graphics::VertexAttributeInfo_typeof,
        (uType*(*)())&::g::Uno::Graphics::VertexAttributeTypeHelpers_typeof,
        (uType*(*)())&::g::Uno::Graphics::VertexBuffer_typeof,
        (uType*(*)())&::g::Uno::Graphics::VideoTexture_typeof,
        (uType*(*)())&::g::Uno::IndexOutOfRangeException_typeof,
        (uType*(*)())&::g::Uno::Int_typeof,
        (uType*(*)())&::g::Uno::Int2_typeof,
        (uType*(*)())&::g::Uno::Int3_typeof,
        (uType*(*)())&::g::Uno::Int4_typeof,
        (uType*(*)())&::g::Uno::IntPtr_typeof,
        (uType*(*)())&::g::Uno::InvalidCastException_typeof,
        (uType*(*)())&::g::Uno::InvalidOperationException_typeof,
        (uType*(*)())&::g::Uno::IO::BinaryReader_typeof,
        (uType*(*)())&::g::Uno::IO::BinaryWriter_typeof,
        (uType*(*)())&::g::Uno::IO::Bundle_typeof,
        (uType*(*)())&::g::Uno::IO::BundleFile_typeof,
        (uType*(*)())&::g::Uno::IO::CppXliStream_typeof,
        (uType*(*)())&::g::Uno::IO::CppXliStreamHandle_typeof,
        (uType*(*)())&::g::Uno::IO::Directory_typeof,
        (uType*(*)())&::g::Uno::IO::EndOfStreamException_typeof,
        (uType*(*)())&::g::Uno::IO::File_typeof,
        (uType*(*)())&::g::Uno::IO::FileSystemImpl_typeof,
        (uType*(*)())&::g::Uno::IO::IOException_typeof,
        (uType*(*)())&::g::Uno::IO::MemoryStream_typeof,
        (uType*(*)())&::g::Uno::IO::Path_typeof,
        (uType*(*)())&::g::Uno::IO::Stream_typeof,
        (uType*(*)())&::g::Uno::IO::StreamReader_typeof,
        (uType*(*)())&::g::Uno::IO::StreamWriter_typeof,
        (uType*(*)())&::g::Uno::IO::StringWriter_typeof,
        (uType*(*)())&::g::Uno::IO::TextReader_typeof,
        (uType*(*)())&::g::Uno::IO::TextWriter_typeof,
        (uType*(*)())&::g::Uno::Long_typeof,
        (uType*(*)())&::g::Uno::Math_typeof,
        (uType*(*)())&::g::Uno::Matrix_typeof,
        (uType*(*)())&::g::Uno::Net::Dns_typeof,
        (uType*(*)())&::g::Uno::Net::EndPoint_typeof,
        (uType*(*)())&::g::Uno::Net::Http::AbsolutePathParser_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HashParser_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HostInfo_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HostInfoParser_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HttpDefaultDispatcher_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HttpMessageCache_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HttpMessageHandler__StaticData_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HttpMessageHandler_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HttpMessageHandlerRequest__DispatchClosure_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HttpMessageHandlerRequest__DispatchClosure1_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HttpStatusReasonPhrase_typeof,
        (uType*(*)())&::g::Uno::Net::Http::Implementation::iOSHttpRequest_typeof,
        (uType*(*)())&::g::Uno::Net::Http::Implementation::iOSHttpRequestHandle_typeof,
        (uType*(*)())&::g::Uno::Net::Http::Implementation::iOSHttpSharedCache_typeof,
        (uType*(*)())&::g::Uno::Net::Http::InvalidResponseTypeException_typeof,
        (uType*(*)())&::g::Uno::Net::Http::InvalidStateException_typeof,
        (uType*(*)())&::g::Uno::Net::Http::QueryParser_typeof,
        (uType*(*)())&::g::Uno::Net::Http::SchemeParser_typeof,
        (uType*(*)())&::g::Uno::Net::Http::SchemeParserResult_typeof,
        (uType*(*)())&::g::Uno::Net::Http::Uri_typeof,
        (uType*(*)())&::g::Uno::Net::Http::UriFormatException_typeof,
        (uType*(*)())&::g::Uno::Net::Http::UriScheme_typeof,
        (uType*(*)())&::g::Uno::Net::Http::UserInfoParser_typeof,
        (uType*(*)())&::g::Uno::Net::IPAddress_typeof,
        (uType*(*)())&::g::Uno::Net::IPEndPoint_typeof,
        (uType*(*)())&::g::Uno::Net::Sockets::Berkeley::bsd_dns_typeof,
        (uType*(*)())&::g::Uno::Net::Sockets::Berkeley::bsd_socket_typeof,
        (uType*(*)())&::g::Uno::Net::Sockets::Berkeley::Socket_typeof,
        (uType*(*)())&::g::Uno::Net::Sockets::NetworkStream_typeof,
        (uType*(*)())&::g::Uno::Net::Sockets::Socket_typeof,
        (uType*(*)())&::g::Uno::Net::Sockets::SocketException_typeof,
        (uType*(*)())&::g::Uno::NotImplementedException_typeof,
        (uType*(*)())&::g::Uno::NotSupportedException_typeof,
        (uType*(*)())&::g::Uno::NullReferenceException_typeof,
        (uType*(*)())&::g::Uno::ObjectDisposedException_typeof,
        (uType*(*)())&::g::Uno::OverflowException_typeof,
        (uType*(*)())&::g::Uno::Platform::ClosingEventArgs_typeof,
        (uType*(*)())&::g::Uno::Platform::FrameChangedEventArgs_typeof,
        (uType*(*)())&::g::Uno::Platform::iOS::Application_typeof,
        (uType*(*)())&::g::Uno::Platform::iOS::StatusBar_typeof,
        (uType*(*)())&::g::Uno::Platform::KeyEventArgs_typeof,
        (uType*(*)())&::g::Uno::Platform::PointerEventArgs_typeof,
        (uType*(*)())&::g::Uno::Platform::SystemUI_typeof,
        (uType*(*)())&::g::Uno::Platform::SystemUIWillResizeEventArgs_typeof,
        (uType*(*)())&::g::Uno::Platform::TextInputEventArgs_typeof,
        (uType*(*)())&::g::Uno::Platform::TimerEventArgs_typeof,
        (uType*(*)())&::g::Uno::Platform::ViewNativeHandle_typeof,
        (uType*(*)())&::g::Uno::Platform::Window_typeof,
        (uType*(*)())&::g::Uno::Platform2::Application_typeof,
        (uType*(*)())&::g::Uno::Platform2::Display__PrivateState_typeof,
        (uType*(*)())&::g::Uno::Platform2::Display_typeof,
        (uType*(*)())&::g::Uno::Platform2::Implementation::InvokedFromNativeCodeAttribute_typeof,
        (uType*(*)())&::g::Uno::Quaternion_typeof,
        (uType*(*)())&::g::Uno::Rect_typeof,
        (uType*(*)())&::g::Uno::Recti_typeof,
        (uType*(*)())&::g::Uno::Reflection::CppField_typeof,
        (uType*(*)())&::g::Uno::Reflection::CppFunction_typeof,
        (uType*(*)())&::g::Uno::Reflection::CppReflection_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ArrayCopyImpl_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ArraySortImpl_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::BufferImpl_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ClockImpl_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::DebugImpl_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::GenericEqualsImpl_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::GraphicsContextHandle_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::GraphicsContextImpl_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::ArrayEnumerator_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::ArrayList_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::BootstrapHints_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::Bootstrapper_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::BufferConverters_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::BufferReader_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::FormatStringItem_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::FormatStringLiteral_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::FormatStringToken_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::FormatStringTokenizer_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::NumericFormatter_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::WindowHelpers_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::PlatformWindowImpl_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLHelpers_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::TextEncodingImpl_typeof,
        (uType*(*)())&::g::Uno::SByte_typeof,
        (uType*(*)())&::g::Uno::SByte2_typeof,
        (uType*(*)())&::g::Uno::SByte4_typeof,
        (uType*(*)())&::g::Uno::Short_typeof,
        (uType*(*)())&::g::Uno::Short2_typeof,
        (uType*(*)())&::g::Uno::Short4_typeof,
        (uType*(*)())&::g::Uno::String_typeof,
        (uType*(*)())&::g::Uno::Testing::NamedTestMethod_typeof,
        (uType*(*)())&::g::Uno::Testing::Registry_typeof,
        (uType*(*)())&::g::Uno::Testing::TestAttribute_typeof,
        (uType*(*)())&::g::Uno::Text::Ascii_typeof,
        (uType*(*)())&::g::Uno::Text::Base64_typeof,
        (uType*(*)())&::g::Uno::Text::Decoder_typeof,
        (uType*(*)())&::g::Uno::Text::Encoding_typeof,
        (uType*(*)())&::g::Uno::Text::StringBuilder_typeof,
        (uType*(*)())&::g::Uno::Text::StringBuilderElement_typeof,
        (uType*(*)())&::g::Uno::Text::Utf8_typeof,
        (uType*(*)())&::g::Uno::Text::UTF8Decoder_typeof,
        (uType*(*)())&::g::Uno::Text::UTF8Encoding_typeof,
        (uType*(*)())&::g::Uno::Threading::AutoResetEvent_typeof,
        (uType*(*)())&::g::Uno::Threading::CancellationToken_typeof,
        (uType*(*)())&::g::Uno::Threading::CancellationTokenSource_typeof,
        (uType*(*)())&::g::Uno::Threading::ConcurrentDictionary_typeof,
        (uType*(*)())&::g::Uno::Threading::ConcurrentQueue_typeof,
        (uType*(*)())&::g::Uno::Threading::Future_typeof,
        (uType*(*)())&::g::Uno::Threading::Future1__Closure_typeof,
        (uType*(*)())&::g::Uno::Threading::Future1_typeof,
        (uType*(*)())&::g::Uno::Threading::IDispatcherExtensions__Arg1Invoke_typeof,
        (uType*(*)())&::g::Uno::Threading::IDispatcherExtensions__Arg1InvokeFunc_typeof,
        (uType*(*)())&::g::Uno::Threading::IDispatcherExtensions__Arg2Invoke_typeof,
        (uType*(*)())&::g::Uno::Threading::IDispatcherExtensions_typeof,
        (uType*(*)())&::g::Uno::Threading::LockGuard_typeof,
        (uType*(*)())&::g::Uno::Threading::MainThreadAttribute_typeof,
        (uType*(*)())&::g::Uno::Threading::ManualResetEvent_typeof,
        (uType*(*)())&::g::Uno::Threading::Monitor_typeof,
        (uType*(*)())&::g::Uno::Threading::Mutex_typeof,
        (uType*(*)())&::g::Uno::Threading::PosixAutoResetEvent_typeof,
        (uType*(*)())&::g::Uno::Threading::PosixManualResetEvent_typeof,
        (uType*(*)())&::g::Uno::Threading::POSIXMutex_typeof,
        (uType*(*)())&::g::Uno::Threading::POSIXThread__ReleasingLauncher_typeof,
        (uType*(*)())&::g::Uno::Threading::POSIXThread_typeof,
        (uType*(*)())&::g::Uno::Threading::Promise_typeof,
        (uType*(*)())&::g::Uno::Threading::SyncDispatcher_typeof,
        (uType*(*)())&::g::Uno::Threading::Task_typeof,
        (uType*(*)())&::g::Uno::Threading::TaskFuture_typeof,
        (uType*(*)())&::g::Uno::Threading::Thread_typeof,
        (uType*(*)())&::g::Uno::Threading::ThreadPool__DefaultWorkItem_typeof,
        (uType*(*)())&::g::Uno::Threading::ThreadPool__ParameterizedWorkItem_typeof,
        (uType*(*)())&::g::Uno::Threading::ThreadPool__WorkItem_typeof,
        (uType*(*)())&::g::Uno::Threading::ThreadPool_typeof,
        (uType*(*)())&::g::Uno::Threading::ThreadPoolTaskScheduler_typeof,
        (uType*(*)())&::g::Uno::Time::Calendars::Era_typeof,
        (uType*(*)())&::g::Uno::Time::Calendars::GregorianYearMonthDayCalculator_typeof,
        (uType*(*)())&::g::Uno::Time::Calendars::TimeOfDayCalculator_typeof,
        (uType*(*)())&::g::Uno::Time::Calendars::WeekYearCalculator_typeof,
        (uType*(*)())&::g::Uno::Time::Calendars::YearMonthDayCalculator_typeof,
        (uType*(*)())&::g::Uno::Time::CalendarSystem_typeof,
        (uType*(*)())&::g::Uno::Time::Converter_typeof,
        (uType*(*)())&::g::Uno::Time::DateTimeZone_typeof,
        (uType*(*)())&::g::Uno::Time::DeviceTimeZone_typeof,
        (uType*(*)())&::g::Uno::Time::Duration_typeof,
        (uType*(*)())&::g::Uno::Time::FixedDateTimeZone_typeof,
        (uType*(*)())&::g::Uno::Time::HashCodeHelper_typeof,
        (uType*(*)())&::g::Uno::Time::Instant_typeof,
        (uType*(*)())&::g::Uno::Time::LocalDate_typeof,
        (uType*(*)())&::g::Uno::Time::LocalDateTime_typeof,
        (uType*(*)())&::g::Uno::Time::LocalTime_typeof,
        (uType*(*)())&::g::Uno::Time::Offset_typeof,
        (uType*(*)())&::g::Uno::Time::OffsetDateTime_typeof,
        (uType*(*)())&::g::Uno::Time::Preconditions_typeof,
        (uType*(*)())&::g::Uno::Time::Text::FixedFormatPattern_typeof,
        (uType*(*)())&::g::Uno::Time::Text::LocalDatePattern__LocalDateBucket_typeof,
        (uType*(*)())&::g::Uno::Time::Text::LocalDatePattern_typeof,
        (uType*(*)())&::g::Uno::Time::Text::LocalDateTimePattern__LocalDateTimeBucket_typeof,
        (uType*(*)())&::g::Uno::Time::Text::LocalDateTimePattern_typeof,
        (uType*(*)())&::g::Uno::Time::Text::LocalTimePattern__LocalTimeBucket_typeof,
        (uType*(*)())&::g::Uno::Time::Text::LocalTimePattern_typeof,
        (uType*(*)())&::g::Uno::Time::Text::NumberPart_typeof,
        (uType*(*)())&::g::Uno::Time::Text::OffsetDateTimePattern__OffsetDateTimeBucket_typeof,
        (uType*(*)())&::g::Uno::Time::Text::OffsetDateTimePattern_typeof,
        (uType*(*)())&::g::Uno::Time::Text::OffsetPattern__OffsetBucket_typeof,
        (uType*(*)())&::g::Uno::Time::Text::OffsetPattern_typeof,
        (uType*(*)())&::g::Uno::Time::Text::OffsetPatternPart_typeof,
        (uType*(*)())&::g::Uno::Time::Text::ParseResult_typeof,
        (uType*(*)())&::g::Uno::Time::Text::PatternPart_typeof,
        (uType*(*)())&::g::Uno::Time::Text::RangeNumberPart_typeof,
        (uType*(*)())&::g::Uno::Time::Text::SeparatorPart_typeof,
        (uType*(*)())&::g::Uno::Time::Text::SignPart_typeof,
        (uType*(*)())&::g::Uno::Time::ZonedDateTime_typeof,
        (uType*(*)())&::g::Uno::Type_typeof,
        (uType*(*)())&::g::Uno::UInt_typeof,
        (uType*(*)())&::g::Uno::ULong_typeof,
        (uType*(*)())&::g::Uno::UShort_typeof,
        (uType*(*)())&::g::Uno::UShort2_typeof,
        (uType*(*)())&::g::Uno::UShort4_typeof,
        (uType*(*)())&::g::Uno::UX::BundleFileSource_typeof,
        (uType*(*)())&::g::Uno::UX::Factory_typeof,
        (uType*(*)())&::g::Uno::UX::FileSource_typeof,
        (uType*(*)())&::g::Uno::UX::NameTable_typeof,
        (uType*(*)())&::g::Uno::UX::NameTableEntry_typeof,
        (uType*(*)())&::g::Uno::UX::Property_typeof,
        (uType*(*)())&::g::Uno::UX::Resource_typeof,
        (uType*(*)())&::g::Uno::UX::Size_typeof,
        (uType*(*)())&::g::Uno::UX::Size2_typeof,
        (uType*(*)())&::g::Uno::UX::StreamExtensions_typeof,
        (uType*(*)())&::g::Uno::UX::Template_typeof,
        (uType*(*)())&::g::Uno::UX::UXAutoNameTableAttribute_typeof,
        (uType*(*)())&::g::Uno::UX::UXComponentsAttribute_typeof,
        (uType*(*)())&::g::Uno::UX::UXConstructorAttribute_typeof,
        (uType*(*)())&::g::Uno::UX::UXContentAttribute_typeof,
        (uType*(*)())&::g::Uno::UX::UXFileNameAttribute_typeof,
        (uType*(*)())&::g::Uno::UX::UXGlobalResourceAttribute_typeof,
        (uType*(*)())&::g::Uno::UX::UXLineNumberAttribute_typeof,
        (uType*(*)())&::g::Uno::UX::UXMetadataAttribute_typeof,
        (uType*(*)())&::g::Uno::UX::UXNameAttribute_typeof,
        (uType*(*)())&::g::Uno::UX::UXPrimaryAttribute_typeof,
        (uType*(*)())&::g::Uno::UX::UXSourceFileNameAttribute_typeof,
        (uType*(*)())&::g::Uno::UX::UXValueBindingArgumentAttribute_typeof,
        (uType*(*)())&::g::Uno::UX::UXValueBindingTargetAttribute_typeof,
        (uType*(*)())&::g::Uno::UX::ValueChangedArgs_typeof,
        (uType*(*)())&::g::Uno::Vector_typeof,
        (uType*(*)())&::g::Uno::WeakReference_typeof,
        (uType*(*)())&::g::Uno::WeakReferenceAttribute_typeof,
        (uType*(*)())&::g::UnoCore_bundle_typeof,
        (uType*(*)())&::g::WeakDictionary_typeof,
        NULL
    };

    uInitRtti(factories);
}

#include <Outracks.Simulator.GeneratedApplication.h>

void uStartApp()
{
    if (_BaseArgs)
    {
        _CommandLineArgs = uArray::New(::g::Uno::String_typeof()->Array(), _BaseArgs->Length());

        for (int i = 0; i < _BaseArgs->Length(); i++)
            _CommandLineArgs->Strong<uString*>(i) = uStringFromXliString((*_BaseArgs)[i]);
    }

    ::g::Outracks::Simulator::GeneratedApplication::New3();
}

/** @} */
