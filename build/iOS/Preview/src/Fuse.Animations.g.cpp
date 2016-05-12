// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Experimental.Physics.DestinationSimulation-1.h>
#include <Experimental.Physics.DestinationSimulationFactory-1.h>
#include <Experimental.Physics.DestinationSimulationType.h>
#include <Experimental.Physics.ElasticForce-1.h>
#include <Experimental.Physics.MotionSimulation-1.h>
#include <Experimental.Physics.Simulation.h>
#include <Fuse.Animations.AnimationVariant.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.AnimatorState.h>
#include <Fuse.Animations.AnimatorVariant.h>
#include <Fuse.Animations.Attractor-1.h>
#include <Fuse.Animations.AverageMasterProperty-1.h>
#include <Fuse.Animations.AverageMasterTransform.h>
#include <Fuse.Animations.AverageMixer.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.ContinuousTrackChangeState-1.h>
#include <Fuse.Animations.ContinuousTrackProvider.h>
#include <Fuse.Animations.Converter-1.h>
#include <Fuse.Animations.ConverterDouble.h>
#include <Fuse.Animations.ConverterFloat.h>
#include <Fuse.Animations.ConverterFloat2.h>
#include <Fuse.Animations.ConverterFloat3.h>
#include <Fuse.Animations.ConverterFloat4.h>
#include <Fuse.Animations.ConverterSize.h>
#include <Fuse.Animations.ConverterSize2.h>
#include <Fuse.Animations.CreateStateParams.h>
#include <Fuse.Animations.Cycle-1.h>
#include <Fuse.Animations.CycleState-1.h>
#include <Fuse.Animations.CycleWaveform.h>
#include <Fuse.Animations.DiscreteKeyframeTrack.h>
#include <Fuse.Animations.DiscreteMasterProperty-1.h>
#include <Fuse.Animations.DiscreteMasterTransform.h>
#include <Fuse.Animations.DiscreteMixer.h>
#include <Fuse.Animations.DiscreteSingleTrack.h>
#include <Fuse.Animations.DiscreteTrackChangeState-1.h>
#include <Fuse.Animations.DiscreteTrackProvider.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.EasingFunction.h>
#include <Fuse.Animations.EasingFunctions.h>
#include <Fuse.Animations.EasingTrack.h>
#include <Fuse.Animations.FastMatrixTransform.h>
#include <Fuse.Animations.IMixer.h>
#include <Fuse.Animations.IMixerHandle-1.h>
#include <Fuse.Animations.IMixerMaster.h>
#include <Fuse.Animations.IResize.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Animations.ITrackProvider.h>
#include <Fuse.Animations.Keyframe.h>
#include <Fuse.Animations.KeyframeInterpolation.h>
#include <Fuse.Animations.KeyframeTrack.h>
#include <Fuse.Animations.MasterBase-1.GFWResult.h>
#include <Fuse.Animations.MasterBase-1.h>
#include <Fuse.Animations.MasterProperty-1.h>
#include <Fuse.Animations.MasterPropertyGet.h>
#include <Fuse.Animations.MasterTransform.h>
#include <Fuse.Animations.Mixer.h>
#include <Fuse.Animations.MixerBase.h>
#include <Fuse.Animations.MixerHandle-1.h>
#include <Fuse.Animations.MixOp.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.Nothing.h>
#include <Fuse.Animations.NothingAnimatorState.h>
#include <Fuse.Animations.OpenAnimator.h>
#include <Fuse.Animations.OpenAnimatorState.h>
#include <Fuse.Animations.Player.h>
#include <Fuse.Animations.PlayerPart.h>
#include <Fuse.Animations.PlayMode.h>
#include <Fuse.Animations.RangeAdapter-1.h>
#include <Fuse.Animations.Resize.h>
#include <Fuse.Animations.ResizeAnimatorState.h>
#include <Fuse.Animations.Rotate.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.SeekDirection.h>
#include <Fuse.Animations.SeekResult.h>
#include <Fuse.Animations.Skew.h>
#include <Fuse.Animations.Spin.h>
#include <Fuse.Animations.SpinState.h>
#include <Fuse.Animations.SplineTrack.h>
#include <Fuse.Animations.SplineTrack.PointInterpolater.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TrackAnimatorState.h>
#include <Fuse.Animations.TrackProvider.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Animations.TransformAnimatorState-1.h>
#include <Fuse.Animations.TransformPriority.h>
#include <Fuse.Animations.TriggerAnimation.h>
#include <Fuse.Animations.TriggerAnimationState.h>
#include <Fuse.Animations.TriggerAnimationState.SeekFlags.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.FastMatrix.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Internal.Blender-1.h>
#include <Fuse.Internal.BlenderMap.h>
#include <Fuse.Internal.ScalarBlender-1.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITransformMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Node.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Rotation.h>
#include <Fuse.ScalingModes.h>
#include <Fuse.Time.h>
#include <Fuse.Transform.h>
#include <Fuse.TransformModeFlags.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ConcurrentCollection-1.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[16];
static uType* TYPES[108];

namespace g{
namespace Fuse{
namespace Animations{

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#21
// --------------------------------------------------------------

// public enum AnimationVariant :3585
uEnumType* AnimationVariant_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.AnimationVariant", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Forward", 0LL,
        "Backward", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno
// -----------------------------------------------------------

// public abstract class Animator :14
// {
Animator_type* Animator_typeof()
{
    static uSStrong<Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Animator);
    options.TypeSize = sizeof(Animator_type);
    type = (Animator_type*)uClassType::New("Fuse.Animations.Animator", options);
    type->fp_get_AnimatorVariant = Animator__get_AnimatorVariant_fn;
    type->fp_GetDurationWithDelay = Animator__GetDurationWithDelay_fn;
    ::TYPES[0] = ::g::Fuse::Animations::Mixer_typeof();
    type->SetFields(0,
        ::g::Fuse::Animations::MixOp_typeof(), offsetof(::g::Fuse::Animations::Animator, _mixOp), 0,
        ::g::Fuse::Animations::IMixer_typeof(), offsetof(::g::Fuse::Animations::Animator, Mixer), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::Animator, _Delay), 0);
    type->Reflection.SetFields(1,
        new uField("Mixer", 1));
    type->Reflection.SetFunctions(4,
        new uFunction("get_Delay", NULL, (void*)Animator__get_Delay_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Delay", NULL, (void*)Animator__set_Delay_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_MixOp", NULL, (void*)Animator__get_MixOp_fn, 0, false, ::g::Fuse::Animations::MixOp_typeof(), 0),
        new uFunction("set_MixOp", NULL, (void*)Animator__set_MixOp_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::MixOp_typeof()));
    return type;
}

// internal Animator() :36
void Animator__ctor__fn(Animator* __this)
{
    __this->ctor_();
}

// internal virtual Fuse.Animations.AnimatorVariant get_AnimatorVariant() :20
void Animator__get_AnimatorVariant_fn(Animator* __this, int* __retval)
{
    uStackFrame __("Fuse.Animations.Animator", "get_AnimatorVariant()");
    return *__retval = 0, void();
}

// public generated double get_Delay() :18
void Animator__get_Delay_fn(Animator* __this, double* __retval)
{
    *__retval = __this->Delay();
}

// public generated void set_Delay(double value) :18
void Animator__set_Delay_fn(Animator* __this, double* value)
{
    __this->Delay(*value);
}

// internal virtual double GetDurationWithDelay(Fuse.Animations.AnimationVariant dir) :31
void Animator__GetDurationWithDelay_fn(Animator* __this, int* dir, double* __retval)
{
    uStackFrame __("Fuse.Animations.Animator", "GetDurationWithDelay(Fuse.Animations.AnimationVariant)");
    return *__retval = __this->Delay(), void();
}

// public Fuse.Animations.MixOp get_MixOp() :27
void Animator__get_MixOp_fn(Animator* __this, int* __retval)
{
    *__retval = __this->MixOp();
}

// public void set_MixOp(Fuse.Animations.MixOp value) :28
void Animator__set_MixOp_fn(Animator* __this, int* value)
{
    __this->MixOp(*value);
}

// internal Animator() [instance] :36
void Animator::ctor_()
{
    uStackFrame __("Fuse.Animations.Animator", ".ctor()");
    Mixer = ::g::Fuse::Animations::Mixer::Default();
    _mixOp = 1;
}

// public generated double get_Delay() [instance] :18
double Animator::Delay()
{
    uStackFrame __("Fuse.Animations.Animator", "get_Delay()");
    return _Delay;
}

// public generated void set_Delay(double value) [instance] :18
void Animator::Delay(double value)
{
    uStackFrame __("Fuse.Animations.Animator", "set_Delay(double)");
    _Delay = value;
}

// public Fuse.Animations.MixOp get_MixOp() [instance] :27
int Animator::MixOp()
{
    uStackFrame __("Fuse.Animations.Animator", "get_MixOp()");
    return _mixOp;
}

// public void set_MixOp(Fuse.Animations.MixOp value) [instance] :28
void Animator::MixOp(int value)
{
    uStackFrame __("Fuse.Animations.Animator", "set_MixOp(Fuse.Animations.MixOp)");
    _mixOp = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno
// -----------------------------------------------------------

// internal abstract class AnimatorState :60
// {
AnimatorState_type* AnimatorState_typeof()
{
    static uSStrong<AnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(AnimatorState);
    options.TypeSize = sizeof(AnimatorState_type);
    type = (AnimatorState_type*)uClassType::New("Fuse.Animations.AnimatorState", options);
    type->fp_Disable = AnimatorState__Disable_fn;
    type->fp_get_IsOpenEnd = AnimatorState__get_IsOpenEnd_fn;
    ::TYPES[1] = ::g::Fuse::Animations::CreateStateParams_typeof();
    type->SetFields(0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Animations::AnimatorState, Node), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::AnimatorState, TotalDuration), 0,
        ::g::Fuse::Animations::AnimationVariant_typeof(), offsetof(::g::Fuse::Animations::AnimatorState, Variant), 0);
    return type;
}

// protected AnimatorState(Fuse.Animations.CreateStateParams p, [Fuse.Node useNode]) :66
void AnimatorState__ctor__fn(AnimatorState* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Node* useNode)
{
    __this->ctor_(p, useNode);
}

// public virtual void Disable() :80
void AnimatorState__Disable_fn(AnimatorState* __this)
{
}

// public virtual bool get_IsOpenEnd() :79
void AnimatorState__get_IsOpenEnd_fn(AnimatorState* __this, bool* __retval)
{
    uStackFrame __("Fuse.Animations.AnimatorState", "get_IsOpenEnd()");
    return *__retval = false, void();
}

// protected AnimatorState(Fuse.Animations.CreateStateParams p, [Fuse.Node useNode]) [instance] :66
void AnimatorState::ctor_(::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Node* useNode)
{
    uStackFrame __("Fuse.Animations.AnimatorState", ".ctor(Fuse.Animations.CreateStateParams,[Fuse.Node])");
    Variant = uPtr(p)->Variant;
    Node = ((useNode != NULL) ? useNode : (::g::Fuse::Node*)p->Attached);
    TotalDuration = p->TotalDuration;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno
// -----------------------------------------------------------

// internal enum AnimatorVariant :7
uEnumType* AnimatorVariant_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.AnimatorVariant", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Allow", 0LL,
        "Disallow", 1LL,
        "HasBackward", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#1
// -------------------------------------------------------------

// public sealed class Attractor<T> :97
// {
::g::Fuse::Behavior_type* Attractor_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 7;
    options.ObjectSize = sizeof(Attractor);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Animations.Attractor`1", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_ctor_ = (void*)Attractor__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Attractor__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Attractor__OnUnrooted_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    ::STRINGS[0] = uString::Const("target");
    ::TYPES[2] = ::g::Experimental::Physics::DestinationSimulation_typeof();
    ::TYPES[3] = ::g::Experimental::Physics::ElasticForce_typeof();
    ::TYPES[4] = ::g::Uno::UX::Property_typeof();
    ::TYPES[5] = ::g::Uno::UX::ValueChangedHandler_typeof();
    ::TYPES[6] = ::g::Fuse::Behavior_typeof();
    ::TYPES[7] = ::g::Uno::Bool_typeof();
    ::TYPES[8] = ::g::Experimental::Physics::Simulation_typeof();
    ::TYPES[9] = ::g::Uno::Action_typeof();
    ::TYPES[10] = ::g::Uno::UX::ValueChangedArgs_typeof();
    ::TYPES[11] = ::g::Experimental::Physics::MotionSimulation_typeof();
    ::TYPES[12] = ::g::Fuse::Time_typeof();
    ::TYPES[13] = ::g::Uno::Double_typeof();
    ::TYPES[14] = uObject_typeof();
    ::TYPES[15] = ::g::Uno::Int_typeof();
    ::TYPES[16] = ::g::Experimental::Physics::DestinationSimulationFactory_typeof();
    type->SetPrecalc(
        ::TYPES[2/*Experimental.Physics.DestinationSimulation`1*/]->MakeType(type->T(0)),
        ::TYPES[3/*Experimental.Physics.ElasticForce`1*/]->MakeType(type->T(0)),
        ::TYPES[4/*Uno.UX.Property`1*/]->MakeType(type->T(0)),
        ::TYPES[5/*Uno.UX.ValueChangedHandler`1*/]->MakeType(type->T(0)),
        ::TYPES[10/*Uno.UX.ValueChangedArgs`1*/]->MakeType(type->T(0)),
        ::TYPES[11/*Experimental.Physics.MotionSimulation`1*/]->MakeType(type->T(0)),
        ::TYPES[16/*Experimental.Physics.DestinationSimulationFactory`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::Behavior_type, interface0));
    type->SetFields(3,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Attractor, _isEnabled), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Attractor, _isUpdate), 0,
        ::g::Experimental::Physics::DestinationSimulationType_typeof(), offsetof(::g::Fuse::Animations::Attractor, _simulationType), 0,
        ::g::Experimental::Physics::DestinationSimulation_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::Attractor, _target), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::Attractor, _timeMultiplier), 0,
        ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::Attractor, _Target), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("get_IsEnabled", NULL, (void*)Attractor__get_IsEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsEnabled", NULL, (void*)Attractor__set_IsEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", type, (void*)Attractor__New2_fn, 0, true, type, 1, ::g::Uno::UX::Property_typeof()->MakeType(type->T(0))),
        new uFunction("get_Simulation", NULL, (void*)Attractor__get_Simulation_fn, 0, false, ::g::Experimental::Physics::DestinationSimulation_typeof()->MakeType(type->T(0)), 0),
        new uFunction("set_Simulation", NULL, (void*)Attractor__set_Simulation_fn, 0, false, uVoid_typeof(), 1, ::g::Experimental::Physics::DestinationSimulation_typeof()->MakeType(type->T(0))),
        new uFunction("get_SimulationType", NULL, (void*)Attractor__get_SimulationType_fn, 0, false, ::g::Experimental::Physics::DestinationSimulationType_typeof(), 0),
        new uFunction("set_SimulationType", NULL, (void*)Attractor__set_SimulationType_fn, 0, false, uVoid_typeof(), 1, ::g::Experimental::Physics::DestinationSimulationType_typeof()),
        new uFunction("get_Target", NULL, (void*)Attractor__get_Target_fn, 0, false, ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), 0),
        new uFunction("get_TimeMultiplier", NULL, (void*)Attractor__get_TimeMultiplier_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_TimeMultiplier", NULL, (void*)Attractor__set_TimeMultiplier_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Value", NULL, (void*)Attractor__get_Value_fn, 0, false, type->T(0), 0),
        new uFunction("set_Value", NULL, (void*)Attractor__set_Value_fn, 0, false, uVoid_typeof(), 1, type->T(0)));
    return type;
}

// internal Attractor() :99
void Attractor__ctor_1_fn(Attractor* __this)
{
    __this->ctor_1();
}

// public Attractor(Uno.UX.Property<T> target) :104
void Attractor__ctor_2_fn(Attractor* __this, ::g::Uno::UX::Property* target)
{
    __this->ctor_2(target);
}

// private void CheckNeedUpdate() :175
void Attractor__CheckNeedUpdate_fn(Attractor* __this)
{
    __this->CheckNeedUpdate();
}

// public bool get_IsEnabled() :128
void Attractor__get_IsEnabled_fn(Attractor* __this, bool* __retval)
{
    *__retval = __this->IsEnabled();
}

// public void set_IsEnabled(bool value) :129
void Attractor__set_IsEnabled_fn(Attractor* __this, bool* value)
{
    __this->IsEnabled(*value);
}

// internal Attractor New() :99
void Attractor__New1_fn(uType* __type, Attractor** __retval)
{
    *__retval = Attractor::New1(__type);
}

// public Attractor New(Uno.UX.Property<T> target) :104
void Attractor__New2_fn(uType* __type, ::g::Uno::UX::Property* target, Attractor** __retval)
{
    *__retval = Attractor::New2(__type, target);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :188
void Attractor__OnRooted_fn(Attractor* __this, ::g::Fuse::Node* parentNode)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.Attractor`1", "OnRooted(Fuse.Node)");
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    ::g::Experimental::Physics::DestinationSimulation::Reset_ex(uInterface(uPtr(__this->_target), __this->__type->Precalced(0/*Experimental.Physics.DestinationSimulation<T>*/)), (::g::Uno::UX::Property__Get_fn(uPtr(__this->Target()), &ret3), ret3));
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :194
void Attractor__OnUnrooted_fn(Attractor* __this, ::g::Fuse::Node* parentNode)
{
    uStackFrame __("Fuse.Animations.Attractor`1", "OnUnrooted(Fuse.Node)");
    __this->CheckNeedUpdate();
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// private void OnValueChanged(object s, Uno.UX.ValueChangedArgs<T> args) :207
void Attractor__OnValueChanged_fn(Attractor* __this, uObject* s, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnValueChanged(s, args);
}

// public Experimental.Physics.DestinationSimulation<T> get_Simulation() :115
void Attractor__get_Simulation_fn(Attractor* __this, uObject** __retval)
{
    *__retval = __this->Simulation();
}

// public void set_Simulation(Experimental.Physics.DestinationSimulation<T> value) :116
void Attractor__set_Simulation_fn(Attractor* __this, uObject* value)
{
    __this->Simulation(value);
}

// public Experimental.Physics.DestinationSimulationType get_SimulationType() :150
void Attractor__get_SimulationType_fn(Attractor* __this, int* __retval)
{
    *__retval = __this->SimulationType();
}

// public void set_SimulationType(Experimental.Physics.DestinationSimulationType value) :151
void Attractor__set_SimulationType_fn(Attractor* __this, int* value)
{
    __this->SimulationType(*value);
}

// public generated Uno.UX.Property<T> get_Target() :101
void Attractor__get_Target_fn(Attractor* __this, ::g::Uno::UX::Property** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :101
void Attractor__set_Target_fn(Attractor* __this, ::g::Uno::UX::Property* value)
{
    __this->Target(value);
}

// public float get_TimeMultiplier() :143
void Attractor__get_TimeMultiplier_fn(Attractor* __this, float* __retval)
{
    *__retval = __this->TimeMultiplier();
}

// public void set_TimeMultiplier(float value) :144
void Attractor__set_TimeMultiplier_fn(Attractor* __this, float* value)
{
    __this->TimeMultiplier(*value);
}

// private void Update() :200
void Attractor__Update_fn(Attractor* __this)
{
    __this->Update();
}

// public T get_Value() :166
void Attractor__get_Value_fn(Attractor* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Experimental.Physics.DestinationSimulation<T>*/),
    };
    uStackFrame __("Fuse.Animations.Attractor`1", "get_Value()");
    uT ret10(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return __retval.Store((::g::Experimental::Physics::DestinationSimulation::get_Destination_ex(uInterface(uPtr(__this->_target), __types[1]), &ret10), ret10)), void();
}

// public void set_Value(T value) :167
void Attractor__set_Value_fn(Attractor* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Experimental.Physics.DestinationSimulation<T>*/),
    };
    uStackFrame __("Fuse.Animations.Attractor`1", "set_Value(T)");
    ::g::Experimental::Physics::DestinationSimulation::set_Destination_ex(uInterface(uPtr(__this->_target), __types[1]), value);
    __this->CheckNeedUpdate();
}

// internal Attractor() [instance] :99
void Attractor::ctor_1()
{
    uType* __types[] = {
        __type->Precalced(0/*Experimental.Physics.DestinationSimulation<T>*/),
        __type->T(0),
        __type->Precalced(1/*Experimental.Physics.ElasticForce<T>*/),
    };
    uStackFrame __("Fuse.Animations.Attractor`1", ".ctor()");
    _target = (uObject*)((::g::Experimental::Physics::ElasticForce*)::g::Experimental::Physics::ElasticForce::CreatePoints(__types[2]));
    _isEnabled = true;
    _timeMultiplier = 1.0f;
    _simulationType = 4;
    ctor_();
}

// public Attractor(Uno.UX.Property<T> target) [instance] :104
void Attractor::ctor_2(::g::Uno::UX::Property* target)
{
    uType* __types[] = {
        __type->Precalced(0/*Experimental.Physics.DestinationSimulation<T>*/),
        __type->T(0),
        __type->Precalced(1/*Experimental.Physics.ElasticForce<T>*/),
        __type->Precalced(2/*Uno.UX.Property<T>*/),
        __type->Precalced(3/*Uno.UX.ValueChangedHandler<T>*/),
    };
    uStackFrame __("Fuse.Animations.Attractor`1", ".ctor(Uno.UX.Property<T>)");
    _target = (uObject*)((::g::Experimental::Physics::ElasticForce*)::g::Experimental::Physics::ElasticForce::CreatePoints(__types[2]));
    _isEnabled = true;
    _timeMultiplier = 1.0f;
    _simulationType = 4;
    ctor_();

    if (target == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"target"*/]));

    Target(target);
    uPtr(Target())->add_ValueChanged(uDelegate::New(__types[4], (void*)Attractor__OnValueChanged_fn, this));
}

// private void CheckNeedUpdate() [instance] :175
void Attractor::CheckNeedUpdate()
{
    uStackFrame __("Fuse.Animations.Attractor`1", "CheckNeedUpdate()");
    bool need = IsRooted() && !::g::Experimental::Physics::Simulation::IsStatic(uInterface(uPtr(_target), ::TYPES[8/*Experimental.Physics.Simulation*/]));

    if (need == _isUpdate)
        return;

    if (need)
        ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)Attractor__Update_fn, this), 0);
    else
        ::g::Fuse::UpdateManager::RemoveAction(uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)Attractor__Update_fn, this), 0);

    _isUpdate = need;
}

// public bool get_IsEnabled() [instance] :128
bool Attractor::IsEnabled()
{
    uStackFrame __("Fuse.Animations.Attractor`1", "get_IsEnabled()");
    return _isEnabled;
}

// public void set_IsEnabled(bool value) [instance] :129
void Attractor::IsEnabled(bool value)
{
    uType* __types[] = {
        __type->T(0),
    };
    uStackFrame __("Fuse.Animations.Attractor`1", "set_IsEnabled(bool)");
    uT ret7(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    if (_isEnabled == value)
        return;

    _isEnabled = true;

    if (!_isEnabled)
        ::g::Experimental::Physics::DestinationSimulation::Reset_ex(uInterface(uPtr(_target), __type->Precalced(0/*Experimental.Physics.DestinationSimulation<T>*/)), (::g::Uno::UX::Property__Get_fn(uPtr(Target()), &ret7), ret7));

    CheckNeedUpdate();
}

// private void OnValueChanged(object s, Uno.UX.ValueChangedArgs<T> args) [instance] :207
void Attractor::OnValueChanged(uObject* s, ::g::Uno::UX::ValueChangedArgs* args)
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(4/*Uno.UX.ValueChangedArgs<T>*/),
        __type->Precalced(5/*Experimental.Physics.MotionSimulation<T>*/),
    };
    uStackFrame __("Fuse.Animations.Attractor`1", "OnValueChanged(object,Uno.UX.ValueChangedArgs<T>)");
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ;

    if (uPtr(args)->Origin() == this)
        return;

    if (!IsEnabled() || ::g::Experimental::Physics::Simulation::IsStatic(uInterface(uPtr(_target), ::TYPES[8/*Experimental.Physics.Simulation*/])))
        ::g::Experimental::Physics::DestinationSimulation::Reset_ex(uInterface(uPtr(_target), __type->Precalced(0/*Experimental.Physics.DestinationSimulation<T>*/)), (::g::Uno::UX::ValueChangedArgs__get_Value_fn(uPtr(args), &ret4), ret4));
    else
        ::g::Experimental::Physics::MotionSimulation::set_Position_ex(uInterface(uPtr(_target), __types[2]), (::g::Uno::UX::ValueChangedArgs__get_Value_fn(args, &ret5), ret5));

    CheckNeedUpdate();
}

// public Experimental.Physics.DestinationSimulation<T> get_Simulation() [instance] :115
uObject* Attractor::Simulation()
{
    uStackFrame __("Fuse.Animations.Attractor`1", "get_Simulation()");
    return _target;
}

// public void set_Simulation(Experimental.Physics.DestinationSimulation<T> value) [instance] :116
void Attractor::Simulation(uObject* value)
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(0/*Experimental.Physics.DestinationSimulation<T>*/),
    };
    uStackFrame __("Fuse.Animations.Attractor`1", "set_Simulation(Experimental.Physics.DestinationSimulation<T>)");
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT dest(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    dest = (::g::Experimental::Physics::DestinationSimulation::get_Destination_ex(uInterface(uPtr(_target), __types[1]), &ret8), ret8);
    _target = value;
    ::g::Experimental::Physics::DestinationSimulation::Reset_ex(uInterface(uPtr(_target), __types[1]), dest);
    CheckNeedUpdate();
}

// public Experimental.Physics.DestinationSimulationType get_SimulationType() [instance] :150
int Attractor::SimulationType()
{
    uStackFrame __("Fuse.Animations.Attractor`1", "get_SimulationType()");
    return _simulationType;
}

// public void set_SimulationType(Experimental.Physics.DestinationSimulationType value) [instance] :151
void Attractor::SimulationType(int value)
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(0/*Experimental.Physics.DestinationSimulation<T>*/),
        __type->Precalced(6/*Experimental.Physics.DestinationSimulationFactory<T>*/),
    };
    uStackFrame __("Fuse.Animations.Attractor`1", "set_SimulationType(Experimental.Physics.DestinationSimulationType)");
    uT ret9(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT dest(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    if (_simulationType != value)
    {
        _simulationType = value;
        dest = (::g::Experimental::Physics::DestinationSimulation::get_Destination_ex(uInterface(uPtr(_target), __types[1]), &ret9), ret9);
        _target = ((uObject*)::g::Experimental::Physics::DestinationSimulationFactory::Create(__types[2], _simulationType));
        ::g::Experimental::Physics::DestinationSimulation::Reset_ex(uInterface(uPtr(_target), __types[1]), dest);
        CheckNeedUpdate();
    }
}

// public generated Uno.UX.Property<T> get_Target() [instance] :101
::g::Uno::UX::Property* Attractor::Target()
{
    uStackFrame __("Fuse.Animations.Attractor`1", "get_Target()");
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :101
void Attractor::Target(::g::Uno::UX::Property* value)
{
    uStackFrame __("Fuse.Animations.Attractor`1", "set_Target(Uno.UX.Property<T>)");
    _Target = value;
}

// public float get_TimeMultiplier() [instance] :143
float Attractor::TimeMultiplier()
{
    uStackFrame __("Fuse.Animations.Attractor`1", "get_TimeMultiplier()");
    return _timeMultiplier;
}

// public void set_TimeMultiplier(float value) [instance] :144
void Attractor::TimeMultiplier(float value)
{
    uStackFrame __("Fuse.Animations.Attractor`1", "set_TimeMultiplier(float)");
    _timeMultiplier = value;
}

// private void Update() [instance] :200
void Attractor::Update()
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(5/*Experimental.Physics.MotionSimulation<T>*/),
    };
    uStackFrame __("Fuse.Animations.Attractor`1", "Update()");
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ::g::Experimental::Physics::Simulation::Update(uInterface(uPtr(_target), ::TYPES[8/*Experimental.Physics.Simulation*/]), ::g::Fuse::Time::FrameInterval() * (double)_timeMultiplier);
    ::g::Uno::UX::Property__Set_fn(uPtr(Target()), (::g::Experimental::Physics::MotionSimulation::get_Position_ex(uInterface(uPtr(_target), __types[1]), &ret6), ret6), this);
    CheckNeedUpdate();
}

// internal Attractor New() [static] :99
Attractor* Attractor::New1(uType* __type)
{
    Attractor* obj1 = (Attractor*)uNew(__type);
    obj1->ctor_1();
    return obj1;
}

// public Attractor New(Uno.UX.Property<T> target) [static] :104
Attractor* Attractor::New2(uType* __type, ::g::Uno::UX::Property* target)
{
    Attractor* obj2 = (Attractor*)uNew(__type);
    obj2->ctor_2(target);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#2
// -------------------------------------------------------------

// internal sealed class AverageMasterProperty<T> :239
// {
::g::Fuse::Animations::MasterProperty_type* AverageMasterProperty_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MasterProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.PrecalcCount = 6;
    options.ObjectSize = sizeof(AverageMasterProperty);
    options.TypeSize = sizeof(::g::Fuse::Animations::MasterProperty_type);
    type = (::g::Fuse::Animations::MasterProperty_type*)uClassType::New("Fuse.Animations.AverageMasterProperty`1", options);
    type->SetBase(::g::Fuse::Animations::MasterProperty_typeof()->MakeType(type->T(0)));
    type->fp_OnActive = (void(*)(::g::Fuse::Animations::MasterBase*))AverageMasterProperty__OnActive_fn;
    type->fp_OnComplete = (void(*)(::g::Fuse::Animations::MasterBase*))AverageMasterProperty__OnComplete_fn;
    type->interface1.fp_GetPropertyObject = (void(*)(uObject*, uObject**))::g::Fuse::Animations::MasterProperty__GetPropertyObject_fn;
    type->interface0.fp_Complete = (void(*)(uObject*))::g::Fuse::Animations::MasterBase__Complete_fn;
    ::TYPES[17] = ::g::Fuse::Internal::BlenderMap_typeof();
    ::TYPES[18] = ::g::Fuse::Animations::MasterProperty_typeof();
    ::TYPES[13] = ::g::Uno::Double_typeof();
    ::TYPES[19] = ::g::Fuse::Animations::MasterBase__GFWResult_typeof();
    ::TYPES[20] = ::g::Uno::Collections::List_typeof();
    ::TYPES[21] = ::g::Fuse::Animations::MixerHandle_typeof();
    ::TYPES[22] = ::g::Fuse::Animations::MasterBase_typeof();
    ::TYPES[7] = ::g::Uno::Bool_typeof();
    ::TYPES[15] = ::g::Uno::Int_typeof();
    ::TYPES[14] = uObject_typeof();
    type->SetPrecalc(
        ::TYPES[17/*Fuse.Internal.BlenderMap*/]->MakeMethod(1, type->T(0)),
        ::TYPES[18/*Fuse.Animations.MasterProperty`1*/]->MakeType(type->T(0)),
        ::TYPES[19/*Fuse.Animations.MasterBase`1.GFWResult*/]->MakeType(type->T(0)),
        ::TYPES[20/*Uno.Collections.List`1*/]->MakeType(::TYPES[21/*Fuse.Animations.MixerHandle`1*/]->MakeType(type->T(0))),
        ::TYPES[21/*Fuse.Animations.MixerHandle`1*/]->MakeType(type->T(0)),
        ::TYPES[22/*Fuse.Animations.MasterBase`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(::g::Fuse::Animations::MasterProperty_type, interface0),
        ::g::Fuse::Animations::MasterPropertyGet_typeof(), offsetof(::g::Fuse::Animations::MasterProperty_type, interface1));
    type->SetFields(6,
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::AverageMasterProperty, blender), 0);
    return type;
}

// public AverageMasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :241
void AverageMasterProperty__ctor_2_fn(AverageMasterProperty* __this, ::g::Uno::UX::Property* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_2(property, mixerBase);
}

// public AverageMasterProperty New(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :241
void AverageMasterProperty__New1_fn(uType* __type, ::g::Uno::UX::Property* property, ::g::Fuse::Animations::MixerBase* mixerBase, AverageMasterProperty** __retval)
{
    *__retval = AverageMasterProperty::New1(__type, property, mixerBase);
}

// protected override sealed void OnActive() :245
void AverageMasterProperty__OnActive_fn(AverageMasterProperty* __this)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Internal.BlenderMap.Get<T>*/),
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.AverageMasterProperty`1", "OnActive()");

    if (__this->blender == NULL)
        __this->blender = ((::g::Fuse::Internal::Blender*)::g::Fuse::Internal::BlenderMap::Get(__types[0]));
}

// public override sealed void OnComplete() :251
void AverageMasterProperty__OnComplete_fn(AverageMasterProperty* __this)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(1/*Fuse.Animations.MasterProperty<T>*/),
        __this->__type->Precalced(2/*Fuse.Animations.MasterBase<T>.GFWResult*/),
        __this->__type->Precalced(3/*Uno.Collections.List<Fuse.Animations.MixerHandle<T>>*/),
        __this->__type->Precalced(4/*Fuse.Animations.MixerHandle<T>*/),
        __this->__type->Precalced(5/*Fuse.Animations.MasterBase<T>*/),
    };
    uStackFrame __("Fuse.Animations.AverageMasterProperty`1", "OnComplete()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret7(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT nv(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ;
    ::g::Fuse::Animations::MixerHandle* ret4;
    ;
    ;
    ;
    ;
    ::g::Fuse::Animations::MasterBase__GFWResult weight = __this->GetFullWeight();
    nv = (uPtr(__this->blender)->Weight_ex((__this->get_RestValue_ex(&ret3), ret3), uCRef((double)(weight.Rest / weight.Full)), &ret2), ret2);
    int c = uPtr((::g::Uno::Collections::List*)__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::g::Fuse::Animations::MixerHandle* v = (::g::Uno::Collections::List__get_Item_fn(uPtr((::g::Uno::Collections::List*)__this->Handles), uCRef<int>(i), &ret4), ret4);

        if (!uPtr(v)->HasValue())
            continue;

        if (uPtr(v)->MixOp() == 1)
            nv = (uPtr(__this->blender)->Add_ex(nv, (uPtr(__this->blender)->Weight_ex(uPtr(v)->Value(), uCRef((double)(uPtr(v)->Strength / weight.Full)), &ret6), ret6), &ret5), ret5);
        else
            nv = (uPtr(__this->blender)->Add_ex(nv, (uPtr(__this->blender)->Weight_ex(v->Value(), uCRef((double)v->Strength), &ret8), ret8), &ret7), ret7);
    }

    ::g::Uno::UX::Property__Set_fn(uPtr((::g::Uno::UX::Property*)__this->Property), nv, __this);
}

// public AverageMasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) [instance] :241
void AverageMasterProperty::ctor_2(::g::Uno::UX::Property* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    uStackFrame __("Fuse.Animations.AverageMasterProperty`1", ".ctor(Uno.UX.Property<T>,Fuse.Animations.MixerBase)");
    ctor_1(property, mixerBase);
}

// public AverageMasterProperty New(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) [static] :241
AverageMasterProperty* AverageMasterProperty::New1(uType* __type, ::g::Uno::UX::Property* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    AverageMasterProperty* obj1 = (AverageMasterProperty*)uNew(__type);
    obj1->ctor_2(property, mixerBase);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#2
// -------------------------------------------------------------

// internal sealed class AverageMasterTransform :273
// {
::g::Fuse::Animations::MasterBase_type* AverageMasterTransform_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MasterBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(AverageMasterTransform);
    options.TypeSize = sizeof(::g::Fuse::Animations::MasterBase_type);
    type = (::g::Fuse::Animations::MasterBase_type*)uClassType::New("Fuse.Animations.AverageMasterTransform", options);
    type->SetBase(::g::Fuse::Animations::MasterTransform_typeof());
    type->fp_OnComplete = (void(*)(::g::Fuse::Animations::MasterBase*))AverageMasterTransform__OnComplete_fn;
    type->interface0.fp_Complete = (void(*)(uObject*))::g::Fuse::Animations::MasterBase__Complete_fn;
    ::TYPES[23] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Animations::MixerHandle_typeof()->MakeType(::g::Fuse::Transform_typeof()));
    ::TYPES[24] = ::g::Fuse::Animations::MasterBase_typeof()->MakeType(::g::Fuse::Transform_typeof());
    ::TYPES[7] = ::g::Uno::Bool_typeof();
    ::TYPES[25] = ::g::Fuse::Animations::MixerHandle_typeof()->MakeType(::g::Fuse::Transform_typeof());
    ::TYPES[15] = ::g::Uno::Int_typeof();
    ::TYPES[26] = ::g::Fuse::Animations::MasterBase__GFWResult_typeof()->MakeType(::g::Fuse::Transform_typeof());
    ::TYPES[27] = ::g::Uno::Float4x4_typeof();
    ::TYPES[28] = ::g::Fuse::FastMatrix_typeof();
    ::TYPES[14] = uObject_typeof();
    ::TYPES[29] = ::g::Fuse::Animations::FastMatrixTransform_typeof();
    ::TYPES[30] = ::g::Fuse::Animations::MasterTransform_typeof();
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(::g::Fuse::Animations::MasterBase_type, interface0));
    type->SetFields(7);
    return type;
}

// public AverageMasterTransform(Fuse.Node node, Fuse.Animations.MixerBase mixerBase) :275
void AverageMasterTransform__ctor_2_fn(AverageMasterTransform* __this, ::g::Fuse::Node* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_2(node, mixerBase);
}

// public AverageMasterTransform New(Fuse.Node node, Fuse.Animations.MixerBase mixerBase) :275
void AverageMasterTransform__New1_fn(::g::Fuse::Node* node, ::g::Fuse::Animations::MixerBase* mixerBase, AverageMasterTransform** __retval)
{
    *__retval = AverageMasterTransform::New1(node, mixerBase);
}

// public override sealed void OnComplete() :278
void AverageMasterTransform__OnComplete_fn(AverageMasterTransform* __this)
{
    uStackFrame __("Fuse.Animations.AverageMasterTransform", "OnComplete()");
    ::g::Fuse::Animations::MixerHandle* ret2;
    ::g::Fuse::Animations::MasterBase__GFWResult weight = __this->GetFullWeight();
    ::g::Fuse::FastMatrix* nv = ::g::Fuse::FastMatrix::Identity();
    int c = uPtr((::g::Uno::Collections::List*)__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::g::Fuse::Animations::MixerHandle* v = (::g::Uno::Collections::List__get_Item_fn(uPtr((::g::Uno::Collections::List*)__this->Handles), uCRef<int>(i), &ret2), ret2);

        if (!uPtr(v)->HasValue())
            continue;

        if (uPtr(v)->MixOp() == 1)
            uPtr(uPtr(v)->Value().Strong< ::g::Fuse::Transform*>())->AppendTo(nv, uPtr(v)->Strength / weight.Full);
        else
            uPtr(v->Value().Strong< ::g::Fuse::Transform*>())->AppendTo(nv, v->Strength);
    }

    if (!uPtr(nv)->Matrix().Equals(::TYPES[27/*float4x4*/], uBox(::TYPES[27/*float4x4*/], uPtr(uPtr(__this->FMT)->Matrix)->Matrix())))
    {
        uPtr(__this->FMT)->Matrix = nv;
        uPtr(__this->FMT)->Changed();
    }
}

// public AverageMasterTransform(Fuse.Node node, Fuse.Animations.MixerBase mixerBase) [instance] :275
void AverageMasterTransform::ctor_2(::g::Fuse::Node* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    uStackFrame __("Fuse.Animations.AverageMasterTransform", ".ctor(Fuse.Node,Fuse.Animations.MixerBase)");
    ctor_1(node, mixerBase);
}

// public AverageMasterTransform New(Fuse.Node node, Fuse.Animations.MixerBase mixerBase) [static] :275
AverageMasterTransform* AverageMasterTransform::New1(::g::Fuse::Node* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    AverageMasterTransform* obj1 = (AverageMasterTransform*)uNew(AverageMasterTransform_typeof());
    obj1->ctor_2(node, mixerBase);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#2
// -------------------------------------------------------------

// internal sealed class AverageMixer :229
// {
::g::Fuse::Animations::MixerBase_type* AverageMixer_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MixerBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(AverageMixer);
    options.TypeSize = sizeof(::g::Fuse::Animations::MixerBase_type);
    type = (::g::Fuse::Animations::MixerBase_type*)uClassType::New("Fuse.Animations.AverageMixer", options);
    type->SetBase(::g::Fuse::Animations::MixerBase_typeof());
    type->fp_ctor_ = (void*)AverageMixer__New1_fn;
    type->fp_CreateMaster = (void(*)(::g::Fuse::Animations::MixerBase*, uType*, ::g::Uno::UX::Property*, ::g::Fuse::Animations::MixerBase*, ::g::Fuse::Animations::MasterProperty**))AverageMixer__CreateMaster_fn;
    type->fp_CreateMasterTransform = (void(*)(::g::Fuse::Animations::MixerBase*, ::g::Fuse::Node*, ::g::Fuse::Animations::MixerBase*, ::g::Fuse::Animations::MasterBase**))AverageMixer__CreateMasterTransform_fn;
    type->interface0.fp_Register = (void(*)(uObject*, uType*, ::g::Uno::UX::Property*, int*, uObject**))::g::Fuse::Animations::MixerBase__Register_fn;
    type->interface0.fp_RegisterTransform = (void(*)(uObject*, ::g::Fuse::Node*, int*, int*, uObject**))::g::Fuse::Animations::MixerBase__RegisterTransform_fn;
    ::TYPES[18] = ::g::Fuse::Animations::MasterProperty_typeof();
    ::TYPES[31] = ::g::Fuse::Animations::AverageMasterProperty_typeof();
    ::TYPES[24] = ::g::Fuse::Animations::MasterBase_typeof()->MakeType(::g::Fuse::Transform_typeof());
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixer_typeof(), offsetof(::g::Fuse::Animations::MixerBase_type, interface0));
    type->SetFields(2);
    return type;
}

// public generated AverageMixer() :229
void AverageMixer__ctor_1_fn(AverageMixer* __this)
{
    __this->ctor_1();
}

// protected override sealed Fuse.Animations.MasterProperty<T> CreateMaster<T>(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :231
void AverageMixer__CreateMaster_fn(AverageMixer* __this, uType* __type, ::g::Uno::UX::Property* property, ::g::Fuse::Animations::MixerBase* mixerBase, ::g::Fuse::Animations::MasterProperty** __retval)
{
    __type = AverageMixer_typeof()->GetVirtual(__type);
    uType* __types[] = {
        ::TYPES[18/*Fuse.Animations.MasterProperty`1*/]->MakeType(__type->U(0)),
        __type->U(0),
        ::TYPES[31/*Fuse.Animations.AverageMasterProperty`1*/]->MakeType(__type->U(0)),
    };
    uStackFrame __("Fuse.Animations.AverageMixer", "CreateMaster`1(Uno.UX.Property<T>,Fuse.Animations.MixerBase)");
    return *__retval = (::g::Fuse::Animations::AverageMasterProperty*)::g::Fuse::Animations::AverageMasterProperty::New1(__types[2], property, mixerBase), void();
}

// protected override sealed Fuse.Animations.MasterBase<Fuse.Transform> CreateMasterTransform(Fuse.Node element, Fuse.Animations.MixerBase mixerBase) :234
void AverageMixer__CreateMasterTransform_fn(AverageMixer* __this, ::g::Fuse::Node* element, ::g::Fuse::Animations::MixerBase* mixerBase, ::g::Fuse::Animations::MasterBase** __retval)
{
    uStackFrame __("Fuse.Animations.AverageMixer", "CreateMasterTransform(Fuse.Node,Fuse.Animations.MixerBase)");
    return *__retval = ::g::Fuse::Animations::AverageMasterTransform::New1(element, mixerBase), void();
}

// public generated AverageMixer New() :229
void AverageMixer__New1_fn(AverageMixer** __retval)
{
    *__retval = AverageMixer::New1();
}

// public generated AverageMixer() [instance] :229
void AverageMixer::ctor_1()
{
    uStackFrame __("Fuse.Animations.AverageMixer", ".ctor()");
    ctor_();
}

// public generated AverageMixer New() [static] :229
AverageMixer* AverageMixer::New1()
{
    AverageMixer* obj1 = (AverageMixer*)uNew(AverageMixer_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#3
// -------------------------------------------------------------

// public sealed class Change<T> :315
// {
::g::Fuse::Animations::Animator_type* Change_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 20;
    options.GenericCount = 1;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(Change);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.Change`1", options);
    type->SetBase(::g::Fuse::Animations::TrackAnimator_typeof());
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))Change__CreateState_fn;
    ::STRINGS[0] = uString::Const("target");
    ::STRINGS[1] = uString::Const("Unsupported change type: ");
    ::TYPES[32] = ::g::Uno::Float_typeof();
    ::TYPES[14] = uObject_typeof();
    ::TYPES[33] = ::g::Fuse::Animations::ConverterFloat_typeof();
    ::TYPES[34] = ::g::Uno::Float2_typeof();
    ::TYPES[35] = ::g::Fuse::Animations::ConverterFloat2_typeof();
    ::TYPES[36] = ::g::Uno::Float3_typeof();
    ::TYPES[37] = ::g::Fuse::Animations::ConverterFloat3_typeof();
    ::TYPES[38] = ::g::Uno::Float4_typeof();
    ::TYPES[39] = ::g::Fuse::Animations::ConverterFloat4_typeof();
    ::TYPES[13] = ::g::Uno::Double_typeof();
    ::TYPES[40] = ::g::Fuse::Animations::ConverterDouble_typeof();
    ::TYPES[41] = ::g::Uno::UX::Size_typeof();
    ::TYPES[42] = ::g::Fuse::Animations::ConverterSize_typeof();
    ::TYPES[43] = ::g::Uno::UX::Size2_typeof();
    ::TYPES[44] = ::g::Fuse::Animations::ConverterSize2_typeof();
    ::TYPES[45] = ::g::Fuse::Animations::Converter_typeof();
    ::TYPES[46] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[0] = ::g::Fuse::Animations::Mixer_typeof();
    ::TYPES[47] = ::g::Fuse::Animations::AnimatorState_typeof();
    ::TYPES[48] = ::g::Fuse::Animations::ContinuousTrackChangeState_typeof();
    ::TYPES[49] = ::g::Fuse::Animations::DiscreteTrackChangeState_typeof();
    ::TYPES[50] = ::g::Fuse::Animations::TrackAnimator_typeof();
    type->SetPrecalc(
        ::TYPES[45/*Fuse.Animations.Converter`1*/]->MakeType(type->T(0)),
        ::TYPES[48/*Fuse.Animations.ContinuousTrackChangeState`1*/]->MakeType(type->T(0)),
        ::TYPES[49/*Fuse.Animations.DiscreteTrackChangeState`1*/]->MakeType(type->T(0)));
    type->SetFields(18,
        ::g::Fuse::Animations::Converter_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::Change, ContinuousConverter), 0,
        ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::Change, _Target), 0);
    type->Reflection.SetFunctions(20,
        new uFunction("get_DegreesX", NULL, (void*)Change__get_DegreesX_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesX", NULL, (void*)Change__set_DegreesX_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DegreesXY", NULL, (void*)Change__get_DegreesXY_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_DegreesXY", NULL, (void*)Change__set_DegreesXY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_DegreesY", NULL, (void*)Change__get_DegreesY_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesY", NULL, (void*)Change__set_DegreesY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DegreesZ", NULL, (void*)Change__get_DegreesZ_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesZ", NULL, (void*)Change__set_DegreesZ_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", type, (void*)Change__New1_fn, 0, true, type, 1, ::g::Uno::UX::Property_typeof()->MakeType(type->T(0))),
        new uFunction("get_Target", NULL, (void*)Change__get_Target_fn, 0, false, ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), 0),
        new uFunction("get_Value", NULL, (void*)Change__get_Value_fn, 0, false, type->T(0), 0),
        new uFunction("set_Value", NULL, (void*)Change__set_Value_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("get_X", NULL, (void*)Change__get_X_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_X", NULL, (void*)Change__set_X_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_XY", NULL, (void*)Change__get_XY_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_XY", NULL, (void*)Change__set_XY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_Y", NULL, (void*)Change__get_Y_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Y", NULL, (void*)Change__set_Y_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Z", NULL, (void*)Change__get_Z_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Z", NULL, (void*)Change__set_Z_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}

// public Change(Uno.UX.Property<T> target) :337
void Change__ctor_2_fn(Change* __this, ::g::Uno::UX::Property* target)
{
    __this->ctor_2(target);
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :371
void Change__CreateState_fn(Change* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Fuse.Animations.ContinuousTrackChangeState<T>*/),
        __this->__type->T(0),
        __this->__type->Precalced(2/*Fuse.Animations.DiscreteTrackChangeState<T>*/),
    };
    uStackFrame __("Fuse.Animations.Change`1", "CreateState(Fuse.Animations.CreateStateParams)");

    if (__this->IsContinuous())
        return *__retval = (::g::Fuse::Animations::ContinuousTrackChangeState*)::g::Fuse::Animations::ContinuousTrackChangeState::New1(__types[0], __this, p), void();

    return *__retval = (::g::Fuse::Animations::DiscreteTrackChangeState*)::g::Fuse::Animations::DiscreteTrackChangeState::New1(__types[2], __this, p), void();
}

// public float get_DegreesX() :401
void Change__get_DegreesX_fn(Change* __this, float* __retval)
{
    *__retval = __this->DegreesX();
}

// public void set_DegreesX(float value) :402
void Change__set_DegreesX_fn(Change* __this, float* value)
{
    __this->DegreesX(*value);
}

// public float2 get_DegreesXY() :437
void Change__get_DegreesXY_fn(Change* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->DegreesXY();
}

// public void set_DegreesXY(float2 value) :438
void Change__set_DegreesXY_fn(Change* __this, ::g::Uno::Float2* value)
{
    __this->DegreesXY(*value);
}

// public float get_DegreesY() :413
void Change__get_DegreesY_fn(Change* __this, float* __retval)
{
    *__retval = __this->DegreesY();
}

// public void set_DegreesY(float value) :414
void Change__set_DegreesY_fn(Change* __this, float* value)
{
    __this->DegreesY(*value);
}

// public float get_DegreesZ() :425
void Change__get_DegreesZ_fn(Change* __this, float* __retval)
{
    *__retval = __this->DegreesZ();
}

// public void set_DegreesZ(float value) :426
void Change__set_DegreesZ_fn(Change* __this, float* value)
{
    __this->DegreesZ(*value);
}

// private bool get_IsContinuous() :380
void Change__get_IsContinuous_fn(Change* __this, bool* __retval)
{
    *__retval = __this->IsContinuous();
}

// public Change New(Uno.UX.Property<T> target) :337
void Change__New1_fn(uType* __type, ::g::Uno::UX::Property* target, Change** __retval)
{
    *__retval = Change::New1(__type, target);
}

// public generated Uno.UX.Property<T> get_Target() :317
void Change__get_Target_fn(Change* __this, ::g::Uno::UX::Property** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :317
void Change__set_Target_fn(Change* __this, ::g::Uno::UX::Property* value)
{
    __this->Target(value);
}

// public T get_Value() :321
void Change__get_Value_fn(Change* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.Change`1", "get_Value()");
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return __retval.Store(__types[0], __this->IsContinuous() ? (uPtr(__this->ContinuousConverter)->Out_ex(uCRef(__this->_vectorValue), &ret3), (void*)ret3) : (void*)uUnboxAny(__types[0], __this->_objectValue)), void();
}

// public void set_Value(T value) :325
void Change__set_Value_fn(Change* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.Change`1", "set_Value(T)");
    ::g::Uno::Float4 ret4;

    if (__this->IsContinuous())
        __this->_vectorValue = (uPtr(__this->ContinuousConverter)->In_ex(value, &ret4), ret4);
    else
        __this->_objectValue = uBoxPtr(__types[0], value);
}

// public float get_X() :395
void Change__get_X_fn(Change* __this, float* __retval)
{
    *__retval = __this->X();
}

// public void set_X(float value) :396
void Change__set_X_fn(Change* __this, float* value)
{
    __this->X(*value);
}

// public float2 get_XY() :431
void Change__get_XY_fn(Change* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->XY();
}

// public void set_XY(float2 value) :432
void Change__set_XY_fn(Change* __this, ::g::Uno::Float2* value)
{
    __this->XY(*value);
}

// public float get_Y() :407
void Change__get_Y_fn(Change* __this, float* __retval)
{
    *__retval = __this->Y();
}

// public void set_Y(float value) :408
void Change__set_Y_fn(Change* __this, float* value)
{
    __this->Y(*value);
}

// public float get_Z() :419
void Change__get_Z_fn(Change* __this, float* __retval)
{
    *__retval = __this->Z();
}

// public void set_Z(float value) :420
void Change__set_Z_fn(Change* __this, float* value)
{
    __this->Z(*value);
}

// public Change(Uno.UX.Property<T> target) [instance] :337
void Change::ctor_2(::g::Uno::UX::Property* target)
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(0/*Fuse.Animations.Converter<T>*/),
    };
    uStackFrame __("Fuse.Animations.Change`1", ".ctor(Uno.UX.Property<T>)");
    ctor_1();

    if (target == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"target"*/]));

    Target(target);

    if (IsContinuous())
    {
        uObject* v;

        if (::g::Uno::Type::op_Equality(__types[0], ::TYPES[32/*float*/]))
            v = ::g::Fuse::Animations::ConverterFloat::Singleton();
        else if (::g::Uno::Type::op_Equality(__types[0], ::TYPES[34/*float2*/]))
            v = ::g::Fuse::Animations::ConverterFloat2::Singleton();
        else if (::g::Uno::Type::op_Equality(__types[0], ::TYPES[36/*float3*/]))
            v = ::g::Fuse::Animations::ConverterFloat3::Singleton();
        else if (::g::Uno::Type::op_Equality(__types[0], ::TYPES[38/*float4*/]))
            v = ::g::Fuse::Animations::ConverterFloat4::Singleton();
        else if (::g::Uno::Type::op_Equality(__types[0], ::TYPES[13/*double*/]))
            v = ::g::Fuse::Animations::ConverterDouble::Singleton();
        else if (::g::Uno::Type::op_Equality(__types[0], ::TYPES[41/*Uno.UX.Size*/]))
            v = ::g::Fuse::Animations::ConverterSize::Singleton();
        else if (::g::Uno::Type::op_Equality(__types[0], ::TYPES[43/*Uno.UX.Size2*/]))
            v = ::g::Fuse::Animations::ConverterSize2::Singleton();
        else
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[1/*"Unsupported...*/], __types[0])));

        ContinuousConverter = uCast< ::g::Fuse::Animations::Converter*>(v, __types[1]);
    }
    else
    {
        Mixer = ::g::Fuse::Animations::Mixer::DefaultDiscrete();
        MarkDiscrete();
    }
}

// public float get_DegreesX() [instance] :401
float Change::DegreesX()
{
    uStackFrame __("Fuse.Animations.Change`1", "get_DegreesX()");
    return ::g::Uno::Math::RadiansToDegrees1(X());
}

// public void set_DegreesX(float value) [instance] :402
void Change::DegreesX(float value)
{
    uStackFrame __("Fuse.Animations.Change`1", "set_DegreesX(float)");
    X(::g::Uno::Math::DegreesToRadians1(value));
}

// public float2 get_DegreesXY() [instance] :437
::g::Uno::Float2 Change::DegreesXY()
{
    uStackFrame __("Fuse.Animations.Change`1", "get_DegreesXY()");
    return ::g::Uno::Float2__New2(::g::Uno::Math::RadiansToDegrees1(X()), ::g::Uno::Math::RadiansToDegrees1(Y()));
}

// public void set_DegreesXY(float2 value) [instance] :438
void Change::DegreesXY(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Animations.Change`1", "set_DegreesXY(float2)");
    XY(::g::Uno::Float2__New2(::g::Uno::Math::DegreesToRadians1(value.X), ::g::Uno::Math::DegreesToRadians1(value.Y)));
}

// public float get_DegreesY() [instance] :413
float Change::DegreesY()
{
    uStackFrame __("Fuse.Animations.Change`1", "get_DegreesY()");
    return ::g::Uno::Math::RadiansToDegrees1(Y());
}

// public void set_DegreesY(float value) [instance] :414
void Change::DegreesY(float value)
{
    uStackFrame __("Fuse.Animations.Change`1", "set_DegreesY(float)");
    Y(::g::Uno::Math::DegreesToRadians1(value));
}

// public float get_DegreesZ() [instance] :425
float Change::DegreesZ()
{
    uStackFrame __("Fuse.Animations.Change`1", "get_DegreesZ()");
    return ::g::Uno::Math::RadiansToDegrees1(Y());
}

// public void set_DegreesZ(float value) [instance] :426
void Change::DegreesZ(float value)
{
    uStackFrame __("Fuse.Animations.Change`1", "set_DegreesZ(float)");
    Y(::g::Uno::Math::DegreesToRadians1(value));
}

// private bool get_IsContinuous() [instance] :380
bool Change::IsContinuous()
{
    uType* __types[] = {
        __type->T(0),
    };
    uStackFrame __("Fuse.Animations.Change`1", "get_IsContinuous()");
    return (((((::g::Uno::Type::op_Equality(__types[0], ::TYPES[32/*float*/]) || ::g::Uno::Type::op_Equality(__types[0], ::TYPES[34/*float2*/])) || ::g::Uno::Type::op_Equality(__types[0], ::TYPES[36/*float3*/])) || ::g::Uno::Type::op_Equality(__types[0], ::TYPES[38/*float4*/])) || ::g::Uno::Type::op_Equality(__types[0], ::TYPES[13/*double*/])) || ::g::Uno::Type::op_Equality(__types[0], ::TYPES[41/*Uno.UX.Size*/])) || ::g::Uno::Type::op_Equality(__types[0], ::TYPES[43/*Uno.UX.Size2*/]);
}

// public generated Uno.UX.Property<T> get_Target() [instance] :317
::g::Uno::UX::Property* Change::Target()
{
    uStackFrame __("Fuse.Animations.Change`1", "get_Target()");
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :317
void Change::Target(::g::Uno::UX::Property* value)
{
    uStackFrame __("Fuse.Animations.Change`1", "set_Target(Uno.UX.Property<T>)");
    _Target = value;
}

// public float get_X() [instance] :395
float Change::X()
{
    uStackFrame __("Fuse.Animations.Change`1", "get_X()");
    return _vectorValue.X;
}

// public void set_X(float value) [instance] :396
void Change::X(float value)
{
    uStackFrame __("Fuse.Animations.Change`1", "set_X(float)");
    _vectorValue.X = value;
}

// public float2 get_XY() [instance] :431
::g::Uno::Float2 Change::XY()
{
    uStackFrame __("Fuse.Animations.Change`1", "get_XY()");
    ::g::Uno::Float4 ind1 = _vectorValue;
    return ::g::Uno::Float2__New2(ind1.X, ind1.Y);
}

// public void set_XY(float2 value) [instance] :432
void Change::XY(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Animations.Change`1", "set_XY(float2)");
    _vectorValue = ::g::Uno::Float4__New6(value, _vectorValue.Z, _vectorValue.W);
}

// public float get_Y() [instance] :407
float Change::Y()
{
    uStackFrame __("Fuse.Animations.Change`1", "get_Y()");
    return _vectorValue.Y;
}

// public void set_Y(float value) [instance] :408
void Change::Y(float value)
{
    uStackFrame __("Fuse.Animations.Change`1", "set_Y(float)");
    _vectorValue.Y = value;
}

// public float get_Z() [instance] :419
float Change::Z()
{
    uStackFrame __("Fuse.Animations.Change`1", "get_Z()");
    return _vectorValue.Z;
}

// public void set_Z(float value) [instance] :420
void Change::Z(float value)
{
    uStackFrame __("Fuse.Animations.Change`1", "set_Z(float)");
    _vectorValue.Z = value;
}

// public Change New(Uno.UX.Property<T> target) [static] :337
Change* Change::New1(uType* __type, ::g::Uno::UX::Property* target)
{
    Change* obj2 = (Change*)uNew(__type);
    obj2->ctor_2(target);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#3
// -------------------------------------------------------------

// internal sealed class ContinuousTrackChangeState<T> :475
// {
::g::Fuse::Animations::TrackAnimatorState_type* ContinuousTrackChangeState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.GenericCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(ContinuousTrackChangeState);
    options.TypeSize = sizeof(::g::Fuse::Animations::TrackAnimatorState_type);
    type = (::g::Fuse::Animations::TrackAnimatorState_type*)uClassType::New("Fuse.Animations.ContinuousTrackChangeState`1", options);
    type->SetBase(::g::Fuse::Animations::TrackAnimatorState_typeof());
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Disable_fn;
    type->fp_SeekValue = (void(*)(::g::Fuse::Animations::TrackAnimatorState*, ::g::Uno::Float4*, float*))ContinuousTrackChangeState__SeekValue_fn;
    ::STRINGS[2] = uString::Const("Invalid Seek");
    ::STRINGS[3] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#3");
    ::TYPES[50] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[51] = ::g::Fuse::Animations::IMixer_typeof();
    ::TYPES[46] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[52] = ::g::Fuse::Animations::Change_typeof();
    type->SetPrecalc(
        ::TYPES[51/*Fuse.Animations.IMixer*/]->MakeMethod(1, type->T(0)),
        ::TYPES[52/*Fuse.Animations.Change`1*/]->MakeType(type->T(0)));
    type->SetFields(6,
        ::g::Fuse::Animations::Change_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::ContinuousTrackChangeState, Animator1), 0,
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::ContinuousTrackChangeState, mixHandle), 0);
    return type;
}

// public ContinuousTrackChangeState(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) :480
void ContinuousTrackChangeState__ctor_2_fn(ContinuousTrackChangeState* __this, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public override sealed void Disable() :487
void ContinuousTrackChangeState__Disable_fn(ContinuousTrackChangeState* __this)
{
    uStackFrame __("Fuse.Animations.ContinuousTrackChangeState`1", "Disable()");

    if (__this->mixHandle == NULL)
        return;

    ::g::Fuse::Animations::IMixerHandle::Unregister(uInterface(uPtr(__this->mixHandle), ::TYPES[73/*Fuse.Animations.IMixerHandle`1*/]->MakeType(__this->__type->T(0))));
    __this->mixHandle = NULL;
}

// public ContinuousTrackChangeState New(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) :480
void ContinuousTrackChangeState__New1_fn(uType* __type, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p, ContinuousTrackChangeState** __retval)
{
    *__retval = ContinuousTrackChangeState::New1(__type, animator, p);
}

// protected override sealed void SeekValue(float4 value, float strength) :496
void ContinuousTrackChangeState__SeekValue_fn(ContinuousTrackChangeState* __this, ::g::Uno::Float4* value, float* strength)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(1/*Fuse.Animations.Change<T>*/),
    };
    uStackFrame __("Fuse.Animations.ContinuousTrackChangeState`1", "SeekValue(float4,float)");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ::g::Uno::Float4 value_ = *value;
    float strength_ = *strength;

    if (__this->mixHandle == NULL)
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[2/*"Invalid Seek"*/], 1, ::STRINGS[3/*"/usr/local/...*/], 500);
        return;
    }

    ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(__this->mixHandle), ::TYPES[73/*Fuse.Animations.IMixerHandle`1*/]->MakeType(__types[0])), (uPtr((::g::Fuse::Animations::Converter*)uPtr(__this->Animator1)->ContinuousConverter)->Out_ex(uCRef(value_), &ret2), ret2), uCRef(strength_));
}

// public ContinuousTrackChangeState(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) [instance] :480
void ContinuousTrackChangeState::ctor_2(::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Animations.IMixer.Register<T>*/),
        __type->T(0),
        __type->Precalced(1/*Fuse.Animations.Change<T>*/),
    };
    uStackFrame __("Fuse.Animations.ContinuousTrackChangeState`1", ".ctor(Fuse.Animations.Change<T>,Fuse.Animations.CreateStateParams)");
    ctor_1(animator, p, NULL);
    Animator1 = animator;
    mixHandle = ((uObject*)::g::Fuse::Animations::IMixer::Register(uInterface(uPtr(uPtr(Animator1)->Mixer), ::TYPES[51/*Fuse.Animations.IMixer*/]), __types[0], (::g::Uno::UX::Property*)uPtr(Animator1)->Target(), uPtr(Animator1)->MixOp()));
}

// public ContinuousTrackChangeState New(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) [static] :480
ContinuousTrackChangeState* ContinuousTrackChangeState::New1(uType* __type, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState* obj1 = (ContinuousTrackChangeState*)uNew(__type);
    obj1->ctor_2(animator, p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#19
// --------------------------------------------------------------

// internal abstract interface ContinuousTrackProvider :3052
// {
uInterfaceType* ContinuousTrackProvider_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.ContinuousTrackProvider", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#3
// -------------------------------------------------------------

// internal abstract class Converter<T> :507
// {
Converter_type* Converter_typeof()
{
    static uSStrong<Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(Converter);
    options.TypeSize = sizeof(Converter_type);
    type = (Converter_type*)uClassType::New("Fuse.Animations.Converter`1", options);
    return type;
}

// protected generated Converter() :507
void Converter__ctor__fn(Converter* __this)
{
    __this->ctor_();
}

// protected generated Converter() [instance] :507
void Converter::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#3
// -------------------------------------------------------------

// internal sealed class ConverterDouble :556
// {
// static ConverterDouble() :556
static void ConverterDouble__cctor__fn(uType* __type)
{
    ConverterDouble::Singleton_ = ConverterDouble::New1();
}

::g::Fuse::Animations::Converter_type* ConverterDouble_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterDouble);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterDouble", options);
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::Double_typeof()));
    type->fp_ctor_ = (void*)ConverterDouble__New1_fn;
    type->fp_cctor_ = ConverterDouble__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterDouble__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterDouble__Out_fn;
    ::TYPES[32] = ::g::Uno::Float_typeof();
    ::TYPES[13] = ::g::Uno::Double_typeof();
    ::TYPES[38] = ::g::Uno::Float4_typeof();
    type->SetFields(0,
        ConverterDouble_typeof(), (uintptr_t)&::g::Fuse::Animations::ConverterDouble::Singleton_, uFieldFlagsStatic);
    return type;
}

// public generated ConverterDouble() :556
void ConverterDouble__ctor_1_fn(ConverterDouble* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(double value) :560
void ConverterDouble__In_fn(ConverterDouble* __this, double* value, ::g::Uno::Float4* __retval)
{
    uStackFrame __("Fuse.Animations.ConverterDouble", "In(double)");
    double value_ = *value;
    return *__retval = ::g::Uno::Float4__New2((float)value_, 0.0f, 0.0f, 0.0f), void();
}

// public generated ConverterDouble New() :556
void ConverterDouble__New1_fn(ConverterDouble** __retval)
{
    *__retval = ConverterDouble::New1();
}

// public override sealed double Out(float4 value) :559
void ConverterDouble__Out_fn(ConverterDouble* __this, ::g::Uno::Float4* value, double* __retval)
{
    uStackFrame __("Fuse.Animations.ConverterDouble", "Out(float4)");
    ::g::Uno::Float4 value_ = *value;
    return *__retval = (double)value_.X, void();
}

uSStrong<ConverterDouble*> ConverterDouble::Singleton_;

// public generated ConverterDouble() [instance] :556
void ConverterDouble::ctor_1()
{
    uStackFrame __("Fuse.Animations.ConverterDouble", ".ctor()");
    ctor_();
}

// public generated ConverterDouble New() [static] :556
ConverterDouble* ConverterDouble::New1()
{
    ConverterDouble* obj1 = (ConverterDouble*)uNew(ConverterDouble_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#3
// -------------------------------------------------------------

// internal sealed class ConverterFloat :513
// {
// static ConverterFloat() :513
static void ConverterFloat__cctor__fn(uType* __type)
{
    ConverterFloat::Singleton_ = ConverterFloat::New1();
}

::g::Fuse::Animations::Converter_type* ConverterFloat_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterFloat);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterFloat", options);
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_ctor_ = (void*)ConverterFloat__New1_fn;
    type->fp_cctor_ = ConverterFloat__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterFloat__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterFloat__Out_fn;
    ::TYPES[38] = ::g::Uno::Float4_typeof();
    type->SetFields(0,
        ConverterFloat_typeof(), (uintptr_t)&::g::Fuse::Animations::ConverterFloat::Singleton_, uFieldFlagsStatic);
    return type;
}

// public generated ConverterFloat() :513
void ConverterFloat__ctor_1_fn(ConverterFloat* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(float value) :517
void ConverterFloat__In_fn(ConverterFloat* __this, float* value, ::g::Uno::Float4* __retval)
{
    uStackFrame __("Fuse.Animations.ConverterFloat", "In(float)");
    float value_ = *value;
    return *__retval = ::g::Uno::Float4__New2(value_, 0.0f, 0.0f, 0.0f), void();
}

// public generated ConverterFloat New() :513
void ConverterFloat__New1_fn(ConverterFloat** __retval)
{
    *__retval = ConverterFloat::New1();
}

// public override sealed float Out(float4 value) :516
void ConverterFloat__Out_fn(ConverterFloat* __this, ::g::Uno::Float4* value, float* __retval)
{
    uStackFrame __("Fuse.Animations.ConverterFloat", "Out(float4)");
    ::g::Uno::Float4 value_ = *value;
    return *__retval = value_.X, void();
}

uSStrong<ConverterFloat*> ConverterFloat::Singleton_;

// public generated ConverterFloat() [instance] :513
void ConverterFloat::ctor_1()
{
    uStackFrame __("Fuse.Animations.ConverterFloat", ".ctor()");
    ctor_();
}

// public generated ConverterFloat New() [static] :513
ConverterFloat* ConverterFloat::New1()
{
    ConverterFloat* obj1 = (ConverterFloat*)uNew(ConverterFloat_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#3
// -------------------------------------------------------------

// internal sealed class ConverterFloat2 :535
// {
// static ConverterFloat2() :535
static void ConverterFloat2__cctor__fn(uType* __type)
{
    ConverterFloat2::Singleton_ = ConverterFloat2::New1();
}

::g::Fuse::Animations::Converter_type* ConverterFloat2_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterFloat2);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterFloat2", options);
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::Float2_typeof()));
    type->fp_ctor_ = (void*)ConverterFloat2__New1_fn;
    type->fp_cctor_ = ConverterFloat2__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterFloat2__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterFloat2__Out_fn;
    ::TYPES[38] = ::g::Uno::Float4_typeof();
    type->SetFields(0,
        ConverterFloat2_typeof(), (uintptr_t)&::g::Fuse::Animations::ConverterFloat2::Singleton_, uFieldFlagsStatic);
    return type;
}

// public generated ConverterFloat2() :535
void ConverterFloat2__ctor_1_fn(ConverterFloat2* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(float2 value) :539
void ConverterFloat2__In_fn(ConverterFloat2* __this, ::g::Uno::Float2* value, ::g::Uno::Float4* __retval)
{
    uStackFrame __("Fuse.Animations.ConverterFloat2", "In(float2)");
    ::g::Uno::Float2 value_ = *value;
    return *__retval = ::g::Uno::Float4__New6(value_, 0.0f, 0.0f), void();
}

// public generated ConverterFloat2 New() :535
void ConverterFloat2__New1_fn(ConverterFloat2** __retval)
{
    *__retval = ConverterFloat2::New1();
}

// public override sealed float2 Out(float4 value) :538
void ConverterFloat2__Out_fn(ConverterFloat2* __this, ::g::Uno::Float4* value, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Animations.ConverterFloat2", "Out(float4)");
    ::g::Uno::Float4 value_ = *value;
    return *__retval = ::g::Uno::Float2__New2(value_.X, value_.Y), void();
}

uSStrong<ConverterFloat2*> ConverterFloat2::Singleton_;

// public generated ConverterFloat2() [instance] :535
void ConverterFloat2::ctor_1()
{
    uStackFrame __("Fuse.Animations.ConverterFloat2", ".ctor()");
    ctor_();
}

// public generated ConverterFloat2 New() [static] :535
ConverterFloat2* ConverterFloat2::New1()
{
    ConverterFloat2* obj1 = (ConverterFloat2*)uNew(ConverterFloat2_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#3
// -------------------------------------------------------------

// internal sealed class ConverterFloat3 :542
// {
// static ConverterFloat3() :542
static void ConverterFloat3__cctor__fn(uType* __type)
{
    ConverterFloat3::Singleton_ = ConverterFloat3::New1();
}

::g::Fuse::Animations::Converter_type* ConverterFloat3_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterFloat3);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterFloat3", options);
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::Float3_typeof()));
    type->fp_ctor_ = (void*)ConverterFloat3__New1_fn;
    type->fp_cctor_ = ConverterFloat3__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterFloat3__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterFloat3__Out_fn;
    ::TYPES[38] = ::g::Uno::Float4_typeof();
    type->SetFields(0,
        ConverterFloat3_typeof(), (uintptr_t)&::g::Fuse::Animations::ConverterFloat3::Singleton_, uFieldFlagsStatic);
    return type;
}

// public generated ConverterFloat3() :542
void ConverterFloat3__ctor_1_fn(ConverterFloat3* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(float3 value) :546
void ConverterFloat3__In_fn(ConverterFloat3* __this, ::g::Uno::Float3* value, ::g::Uno::Float4* __retval)
{
    uStackFrame __("Fuse.Animations.ConverterFloat3", "In(float3)");
    ::g::Uno::Float3 value_ = *value;
    return *__retval = ::g::Uno::Float4__New8(value_, 0.0f), void();
}

// public generated ConverterFloat3 New() :542
void ConverterFloat3__New1_fn(ConverterFloat3** __retval)
{
    *__retval = ConverterFloat3::New1();
}

// public override sealed float3 Out(float4 value) :545
void ConverterFloat3__Out_fn(ConverterFloat3* __this, ::g::Uno::Float4* value, ::g::Uno::Float3* __retval)
{
    uStackFrame __("Fuse.Animations.ConverterFloat3", "Out(float4)");
    ::g::Uno::Float4 value_ = *value;
    return *__retval = ::g::Uno::Float3__New2(value_.X, value_.Y, value_.Z), void();
}

uSStrong<ConverterFloat3*> ConverterFloat3::Singleton_;

// public generated ConverterFloat3() [instance] :542
void ConverterFloat3::ctor_1()
{
    uStackFrame __("Fuse.Animations.ConverterFloat3", ".ctor()");
    ctor_();
}

// public generated ConverterFloat3 New() [static] :542
ConverterFloat3* ConverterFloat3::New1()
{
    ConverterFloat3* obj1 = (ConverterFloat3*)uNew(ConverterFloat3_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#3
// -------------------------------------------------------------

// internal sealed class ConverterFloat4 :549
// {
// static ConverterFloat4() :549
static void ConverterFloat4__cctor__fn(uType* __type)
{
    ConverterFloat4::Singleton_ = ConverterFloat4::New1();
}

::g::Fuse::Animations::Converter_type* ConverterFloat4_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterFloat4);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterFloat4", options);
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_ctor_ = (void*)ConverterFloat4__New1_fn;
    type->fp_cctor_ = ConverterFloat4__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterFloat4__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterFloat4__Out_fn;
    type->SetFields(0,
        ConverterFloat4_typeof(), (uintptr_t)&::g::Fuse::Animations::ConverterFloat4::Singleton_, uFieldFlagsStatic);
    return type;
}

// public generated ConverterFloat4() :549
void ConverterFloat4__ctor_1_fn(ConverterFloat4* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(float4 value) :553
void ConverterFloat4__In_fn(ConverterFloat4* __this, ::g::Uno::Float4* value, ::g::Uno::Float4* __retval)
{
    uStackFrame __("Fuse.Animations.ConverterFloat4", "In(float4)");
    ::g::Uno::Float4 value_ = *value;
    return *__retval = value_, void();
}

// public generated ConverterFloat4 New() :549
void ConverterFloat4__New1_fn(ConverterFloat4** __retval)
{
    *__retval = ConverterFloat4::New1();
}

// public override sealed float4 Out(float4 value) :552
void ConverterFloat4__Out_fn(ConverterFloat4* __this, ::g::Uno::Float4* value, ::g::Uno::Float4* __retval)
{
    uStackFrame __("Fuse.Animations.ConverterFloat4", "Out(float4)");
    ::g::Uno::Float4 value_ = *value;
    return *__retval = value_, void();
}

uSStrong<ConverterFloat4*> ConverterFloat4::Singleton_;

// public generated ConverterFloat4() [instance] :549
void ConverterFloat4::ctor_1()
{
    uStackFrame __("Fuse.Animations.ConverterFloat4", ".ctor()");
    ctor_();
}

// public generated ConverterFloat4 New() [static] :549
ConverterFloat4* ConverterFloat4::New1()
{
    ConverterFloat4* obj1 = (ConverterFloat4*)uNew(ConverterFloat4_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#3
// -------------------------------------------------------------

// internal sealed class ConverterSize :520
// {
// static ConverterSize() :520
static void ConverterSize__cctor__fn(uType* __type)
{
    ConverterSize::Singleton_ = ConverterSize::New1();
}

::g::Fuse::Animations::Converter_type* ConverterSize_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterSize);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterSize", options);
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::UX::Size_typeof()));
    type->fp_ctor_ = (void*)ConverterSize__New1_fn;
    type->fp_cctor_ = ConverterSize__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterSize__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterSize__Out_fn;
    ::TYPES[41] = ::g::Uno::UX::Size_typeof();
    ::TYPES[38] = ::g::Uno::Float4_typeof();
    type->SetFields(0,
        ConverterSize_typeof(), (uintptr_t)&::g::Fuse::Animations::ConverterSize::Singleton_, uFieldFlagsStatic);
    return type;
}

// public generated ConverterSize() :520
void ConverterSize__ctor_1_fn(ConverterSize* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(Uno.UX.Size value) :524
void ConverterSize__In_fn(ConverterSize* __this, ::g::Uno::UX::Size* value, ::g::Uno::Float4* __retval)
{
    uStackFrame __("Fuse.Animations.ConverterSize", "In(Uno.UX.Size)");
    ::g::Uno::UX::Size value_ = *value;
    return *__retval = ::g::Uno::Float4__New2(value_.Value, 0.0f, 0.0f, 0.0f), void();
}

// public generated ConverterSize New() :520
void ConverterSize__New1_fn(ConverterSize** __retval)
{
    *__retval = ConverterSize::New1();
}

// public override sealed Uno.UX.Size Out(float4 value) :523
void ConverterSize__Out_fn(ConverterSize* __this, ::g::Uno::Float4* value, ::g::Uno::UX::Size* __retval)
{
    uStackFrame __("Fuse.Animations.ConverterSize", "Out(float4)");
    ::g::Uno::Float4 value_ = *value;
    return *__retval = ::g::Uno::UX::Size__op_Implicit(value_.X), void();
}

uSStrong<ConverterSize*> ConverterSize::Singleton_;

// public generated ConverterSize() [instance] :520
void ConverterSize::ctor_1()
{
    uStackFrame __("Fuse.Animations.ConverterSize", ".ctor()");
    ctor_();
}

// public generated ConverterSize New() [static] :520
ConverterSize* ConverterSize::New1()
{
    ConverterSize* obj1 = (ConverterSize*)uNew(ConverterSize_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#3
// -------------------------------------------------------------

// internal sealed class ConverterSize2 :527
// {
// static ConverterSize2() :527
static void ConverterSize2__cctor__fn(uType* __type)
{
    ConverterSize2::Singleton_ = ConverterSize2::New1();
}

::g::Fuse::Animations::Converter_type* ConverterSize2_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterSize2);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterSize2", options);
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::UX::Size2_typeof()));
    type->fp_ctor_ = (void*)ConverterSize2__New1_fn;
    type->fp_cctor_ = ConverterSize2__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterSize2__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterSize2__Out_fn;
    ::TYPES[43] = ::g::Uno::UX::Size2_typeof();
    ::TYPES[38] = ::g::Uno::Float4_typeof();
    type->SetFields(0,
        ConverterSize2_typeof(), (uintptr_t)&::g::Fuse::Animations::ConverterSize2::Singleton_, uFieldFlagsStatic);
    return type;
}

// public generated ConverterSize2() :527
void ConverterSize2__ctor_1_fn(ConverterSize2* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(Uno.UX.Size2 value) :531
void ConverterSize2__In_fn(ConverterSize2* __this, ::g::Uno::UX::Size2* value, ::g::Uno::Float4* __retval)
{
    uStackFrame __("Fuse.Animations.ConverterSize2", "In(Uno.UX.Size2)");
    ::g::Uno::UX::Size2 value_ = *value;
    return *__retval = ::g::Uno::Float4__New2(::g::Uno::UX::Size__op_Explicit(value_.X), ::g::Uno::UX::Size__op_Explicit(value_.Y), 0.0f, 0.0f), void();
}

// public generated ConverterSize2 New() :527
void ConverterSize2__New1_fn(ConverterSize2** __retval)
{
    *__retval = ConverterSize2::New1();
}

// public override sealed Uno.UX.Size2 Out(float4 value) :530
void ConverterSize2__Out_fn(ConverterSize2* __this, ::g::Uno::Float4* value, ::g::Uno::UX::Size2* __retval)
{
    uStackFrame __("Fuse.Animations.ConverterSize2", "Out(float4)");
    ::g::Uno::Float4 value_ = *value;
    return *__retval = ::g::Uno::UX::Size2__op_Implicit1(::g::Uno::Float2__New2(value_.X, value_.Y)), void();
}

uSStrong<ConverterSize2*> ConverterSize2::Singleton_;

// public generated ConverterSize2() [instance] :527
void ConverterSize2::ctor_1()
{
    uStackFrame __("Fuse.Animations.ConverterSize2", ".ctor()");
    ctor_();
}

// public generated ConverterSize2 New() [static] :527
ConverterSize2* ConverterSize2::New1()
{
    ConverterSize2* obj1 = (ConverterSize2*)uNew(ConverterSize2_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno
// -----------------------------------------------------------

// internal sealed class CreateStateParams :39
// {
uType* CreateStateParams_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(CreateStateParams);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Animations.CreateStateParams", options);
    type->fp_ctor_ = (void*)CreateStateParams__New1_fn;
    type->SetFields(0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Animations::CreateStateParams, Attached), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::CreateStateParams, TotalDuration), 0,
        ::g::Fuse::Animations::AnimationVariant_typeof(), offsetof(::g::Fuse::Animations::CreateStateParams, Variant), 0);
    return type;
}

// public generated CreateStateParams() :39
void CreateStateParams__ctor__fn(CreateStateParams* __this)
{
    __this->ctor_();
}

// public generated CreateStateParams New() :39
void CreateStateParams__New1_fn(CreateStateParams** __retval)
{
    *__retval = CreateStateParams::New1();
}

// public generated CreateStateParams() [instance] :39
void CreateStateParams::ctor_()
{
}

// public generated CreateStateParams New() [static] :39
CreateStateParams* CreateStateParams::New1()
{
    CreateStateParams* obj1 = (CreateStateParams*)uNew(CreateStateParams_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#4
// -------------------------------------------------------------

// public sealed class Cycle<T> :579
// {
::g::Fuse::Animations::Animator_type* Cycle_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.GenericCount = 1;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(Cycle);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.Cycle`1", options);
    type->SetBase(::g::Fuse::Animations::OpenAnimator_typeof());
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))Cycle__CreateState_fn;
    ::STRINGS[4] = uString::Const("Target");
    ::TYPES[17] = ::g::Fuse::Internal::BlenderMap_typeof();
    ::TYPES[53] = ::g::Fuse::Internal::Blender_typeof();
    ::TYPES[47] = ::g::Fuse::Animations::AnimatorState_typeof();
    ::TYPES[54] = ::g::Fuse::Animations::CycleState_typeof();
    ::TYPES[55] = ::g::Uno::Delegate_typeof();
    ::TYPES[32] = ::g::Uno::Float_typeof();
    ::TYPES[13] = ::g::Uno::Double_typeof();
    type->SetPrecalc(
        ::TYPES[17/*Fuse.Internal.BlenderMap*/]->MakeMethod(1, type->T(0)),
        ::TYPES[53/*Fuse.Internal.Blender`1*/]->MakeType(type->T(0)),
        ::TYPES[54/*Fuse.Animations.CycleState`1*/]->MakeType(type->T(0)));
    type->SetFields(5,
        ::g::Fuse::Animations::Easing_typeof(), offsetof(::g::Fuse::Animations::Cycle, _easing), 0,
        ::g::Fuse::Animations::EasingFunction_typeof(), offsetof(::g::Fuse::Animations::Cycle, _easingFunction), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Cycle, _hasProgressOffset), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::Cycle, _hertz), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::Cycle, _progressOffset), 0,
        ::g::Fuse::Animations::CycleWaveform_typeof(), offsetof(::g::Fuse::Animations::Cycle, _waveform), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::Cycle, _High), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::Cycle, _Low), 0,
        ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::Cycle, _Target), 0);
    type->Reflection.SetFunctions(16,
        new uFunction("get_Base", NULL, (void*)Cycle__get_Base_fn, 0, false, type->T(0), 0),
        new uFunction("set_Base", NULL, (void*)Cycle__set_Base_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("get_Easing", NULL, (void*)Cycle__get_Easing_fn, 0, false, ::g::Fuse::Animations::Easing_typeof(), 0),
        new uFunction("set_Easing", NULL, (void*)Cycle__set_Easing_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::Easing_typeof()),
        new uFunction("get_Frequency", NULL, (void*)Cycle__get_Frequency_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Frequency", NULL, (void*)Cycle__set_Frequency_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_High", NULL, (void*)Cycle__get_High_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_High", NULL, (void*)Cycle__set_High_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Low", NULL, (void*)Cycle__get_Low_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Low", NULL, (void*)Cycle__set_Low_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", type, (void*)Cycle__New1_fn, 0, true, type, 1, ::g::Uno::UX::Property_typeof()->MakeType(type->T(0))),
        new uFunction("get_ProgressOffset", NULL, (void*)Cycle__get_ProgressOffset_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ProgressOffset", NULL, (void*)Cycle__set_ProgressOffset_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Target", NULL, (void*)Cycle__get_Target_fn, 0, false, ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), 0),
        new uFunction("get_Waveform", NULL, (void*)Cycle__get_Waveform_fn, 0, false, ::g::Fuse::Animations::CycleWaveform_typeof(), 0),
        new uFunction("set_Waveform", NULL, (void*)Cycle__set_Waveform_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::CycleWaveform_typeof()));
    return type;
}

// public Cycle(Uno.UX.Property<T> Target) :587
void Cycle__ctor_2_fn(Cycle* __this, ::g::Uno::UX::Property* Target1)
{
    __this->ctor_2(Target1);
}

// public generated T get_Base() :584
void Cycle__get_Base_fn(Cycle* __this, uTRef __retval)
{
    uStackFrame __("Fuse.Animations.Cycle`1", "get_Base()");
    return __retval.Store(__this->_Base()), void();
}

// public generated void set_Base(T value) :584
void Cycle__set_Base_fn(Cycle* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.Cycle`1", "set_Base(T)");
    __this->_Base() = value;
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :610
void Cycle__CreateState_fn(Cycle* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*Fuse.Animations.CycleState<T>*/),
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.Cycle`1", "CreateState(Fuse.Animations.CreateStateParams)");
    return *__retval = (::g::Fuse::Animations::CycleState*)::g::Fuse::Animations::CycleState::New1(__types[0], __this, p), void();
}

// public Fuse.Animations.Easing get_Easing() :668
void Cycle__get_Easing_fn(Cycle* __this, int* __retval)
{
    *__retval = __this->Easing();
}

// public void set_Easing(Fuse.Animations.Easing value) :669
void Cycle__set_Easing_fn(Cycle* __this, int* value)
{
    __this->Easing(*value);
}

// public double get_Frequency() :599
void Cycle__get_Frequency_fn(Cycle* __this, double* __retval)
{
    *__retval = __this->Frequency();
}

// public void set_Frequency(double value) :600
void Cycle__set_Frequency_fn(Cycle* __this, double* value)
{
    __this->Frequency(*value);
}

// public generated float get_High() :583
void Cycle__get_High_fn(Cycle* __this, float* __retval)
{
    *__retval = __this->High();
}

// public generated void set_High(float value) :583
void Cycle__set_High_fn(Cycle* __this, float* value)
{
    __this->High(*value);
}

// private bool get_IsOneCrossing() :622
void Cycle__get_IsOneCrossing_fn(Cycle* __this, bool* __retval)
{
    *__retval = __this->IsOneCrossing();
}

// private bool get_IsZeroCrossing() :617
void Cycle__get_IsZeroCrossing_fn(Cycle* __this, bool* __retval)
{
    *__retval = __this->IsZeroCrossing();
}

// public generated float get_Low() :582
void Cycle__get_Low_fn(Cycle* __this, float* __retval)
{
    *__retval = __this->Low();
}

// public generated void set_Low(float value) :582
void Cycle__set_Low_fn(Cycle* __this, float* value)
{
    __this->Low(*value);
}

// public Cycle New(Uno.UX.Property<T> Target) :587
void Cycle__New1_fn(uType* __type, ::g::Uno::UX::Property* Target1, Cycle** __retval)
{
    *__retval = Cycle::New1(__type, Target1);
}

// public float get_ProgressOffset() :656
void Cycle__get_ProgressOffset_fn(Cycle* __this, float* __retval)
{
    *__retval = __this->ProgressOffset();
}

// public void set_ProgressOffset(float value) :657
void Cycle__set_ProgressOffset_fn(Cycle* __this, float* value)
{
    __this->ProgressOffset(*value);
}

// private double get_RestProgress() :630
void Cycle__get_RestProgress_fn(Cycle* __this, double* __retval)
{
    *__retval = __this->RestProgress();
}

// public generated Uno.UX.Property<T> get_Target() :581
void Cycle__get_Target_fn(Cycle* __this, ::g::Uno::UX::Property** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :581
void Cycle__set_Target_fn(Cycle* __this, ::g::Uno::UX::Property* value)
{
    __this->Target(value);
}

// public Fuse.Animations.CycleWaveform get_Waveform() :606
void Cycle__get_Waveform_fn(Cycle* __this, int* __retval)
{
    *__retval = __this->Waveform();
}

// public void set_Waveform(Fuse.Animations.CycleWaveform value) :607
void Cycle__set_Waveform_fn(Cycle* __this, int* value)
{
    __this->Waveform(*value);
}

// internal double WaveformFunc(double i, double offset) :676
void Cycle__WaveformFunc_fn(Cycle* __this, double* i, double* offset, double* __retval)
{
    *__retval = __this->WaveformFunc(*i, *offset);
}

// public Cycle(Uno.UX.Property<T> Target) [instance] :587
void Cycle::ctor_2(::g::Uno::UX::Property* Target1)
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(0/*Fuse.Internal.BlenderMap.Get<T>*/),
        __type->Precalced(1/*Fuse.Internal.Blender<T>*/),
    };
    uStackFrame __("Fuse.Animations.Cycle`1", ".ctor(Uno.UX.Property<T>)");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    _hertz = 1.0;
    _progressOffset = 0.0f;
    ctor_1();

    if (Target1 == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[4/*"Target"*/]));

    Target(Target1);
    ::g::Fuse::Internal::Blender* blender = (::g::Fuse::Internal::Blender*)::g::Fuse::Internal::BlenderMap::Get(__types[1]);
    Cycle__set_Base_fn(this, (uPtr(blender)->get_One_ex(&ret2), ret2));
}

// public Fuse.Animations.Easing get_Easing() [instance] :668
int Cycle::Easing()
{
    uStackFrame __("Fuse.Animations.Cycle`1", "get_Easing()");
    return _easing;
}

// public void set_Easing(Fuse.Animations.Easing value) [instance] :669
void Cycle::Easing(int value)
{
    uStackFrame __("Fuse.Animations.Cycle`1", "set_Easing(Fuse.Animations.Easing)");
    _easing = value;
    _easingFunction = ::g::Fuse::Animations::EasingFunctions::FromEasing(_easing);
}

// public double get_Frequency() [instance] :599
double Cycle::Frequency()
{
    uStackFrame __("Fuse.Animations.Cycle`1", "get_Frequency()");
    return _hertz;
}

// public void set_Frequency(double value) [instance] :600
void Cycle::Frequency(double value)
{
    uStackFrame __("Fuse.Animations.Cycle`1", "set_Frequency(double)");
    _hertz = value;
}

// public generated float get_High() [instance] :583
float Cycle::High()
{
    uStackFrame __("Fuse.Animations.Cycle`1", "get_High()");
    return _High;
}

// public generated void set_High(float value) [instance] :583
void Cycle::High(float value)
{
    uStackFrame __("Fuse.Animations.Cycle`1", "set_High(float)");
    _High = value;
}

// private bool get_IsOneCrossing() [instance] :622
bool Cycle::IsOneCrossing()
{
    uStackFrame __("Fuse.Animations.Cycle`1", "get_IsOneCrossing()");
    return (Low() <= 1.0f) && (High() >= 1.0f);
}

// private bool get_IsZeroCrossing() [instance] :617
bool Cycle::IsZeroCrossing()
{
    uStackFrame __("Fuse.Animations.Cycle`1", "get_IsZeroCrossing()");
    return (Low() <= 0.0f) && (High() >= 0.0f);
}

// public generated float get_Low() [instance] :582
float Cycle::Low()
{
    uStackFrame __("Fuse.Animations.Cycle`1", "get_Low()");
    return _Low;
}

// public generated void set_Low(float value) [instance] :582
void Cycle::Low(float value)
{
    uStackFrame __("Fuse.Animations.Cycle`1", "set_Low(float)");
    _Low = value;
}

// public float get_ProgressOffset() [instance] :656
float Cycle::ProgressOffset()
{
    uStackFrame __("Fuse.Animations.Cycle`1", "get_ProgressOffset()");
    return (_hasProgressOffset || ::g::Uno::Delegate::op_Inequality(_easingFunction, NULL)) ? _progressOffset : (float)RestProgress();
}

// public void set_ProgressOffset(float value) [instance] :657
void Cycle::ProgressOffset(float value)
{
    uStackFrame __("Fuse.Animations.Cycle`1", "set_ProgressOffset(float)");
    _hasProgressOffset = true;
    _progressOffset = value;
}

// private double get_RestProgress() [instance] :630
double Cycle::RestProgress()
{
    uStackFrame __("Fuse.Animations.Cycle`1", "get_RestProgress()");
    double v = 0.0;

    if (IsZeroCrossing())
        v = (double)((0.0f - Low()) / (High() - Low()));
    else if (IsOneCrossing())
        v = (double)((1.0f - Low()) / (High() - Low()));

    switch (Waveform())
    {
        case 0:
            return ::g::Uno::Math::Asin(2.0 * (v - 0.5)) / 6.2831853071795862;
        case 1:
            return v * 0.5;
        case 2:
            return v;
    }

    return v;
}

// public generated Uno.UX.Property<T> get_Target() [instance] :581
::g::Uno::UX::Property* Cycle::Target()
{
    uStackFrame __("Fuse.Animations.Cycle`1", "get_Target()");
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :581
void Cycle::Target(::g::Uno::UX::Property* value)
{
    uStackFrame __("Fuse.Animations.Cycle`1", "set_Target(Uno.UX.Property<T>)");
    _Target = value;
}

// public Fuse.Animations.CycleWaveform get_Waveform() [instance] :606
int Cycle::Waveform()
{
    uStackFrame __("Fuse.Animations.Cycle`1", "get_Waveform()");
    return _waveform;
}

// public void set_Waveform(Fuse.Animations.CycleWaveform value) [instance] :607
void Cycle::Waveform(int value)
{
    uStackFrame __("Fuse.Animations.Cycle`1", "set_Waveform(Fuse.Animations.CycleWaveform)");
    _waveform = value;
}

// internal double WaveformFunc(double i, double offset) [instance] :676
double Cycle::WaveformFunc(double i, double offset)
{
    uStackFrame __("Fuse.Animations.Cycle`1", "WaveformFunc(double,double)");

    switch (Waveform())
    {
        case 0:
            return (::g::Uno::Math::Sin(((i + offset) * 3.1415926535897931) * 2.0) / 2.0) + 0.5;
        case 1:
        {
            double a = ::g::Uno::Math::Mod(i + offset, 1.0);

            if (a < 0.5)
                return a * 2.0;

            return 1.0 + (2.0 * (0.5 - a));
        }
        case 2:
            return ::g::Uno::Math::Mod(i + offset, 1.0);
    }

    return i;
}

// public Cycle New(Uno.UX.Property<T> Target) [static] :587
Cycle* Cycle::New1(uType* __type, ::g::Uno::UX::Property* Target1)
{
    Cycle* obj1 = (Cycle*)uNew(__type);
    obj1->ctor_2(Target1);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#4
// -------------------------------------------------------------

// internal sealed class CycleState<T> :697
// {
::g::Fuse::Animations::OpenAnimatorState_type* CycleState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::OpenAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.GenericCount = 1;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(CycleState);
    options.TypeSize = sizeof(::g::Fuse::Animations::OpenAnimatorState_type);
    type = (::g::Fuse::Animations::OpenAnimatorState_type*)uClassType::New("Fuse.Animations.CycleState`1", options);
    type->SetBase(::g::Fuse::Animations::OpenAnimatorState_typeof());
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))CycleState__Disable_fn;
    type->fp_Seek = (void(*)(::g::Fuse::Animations::OpenAnimatorState*, bool*, float*, float*, int*, bool*))CycleState__Seek_fn;
    ::STRINGS[5] = uString::Const("Invalid seek");
    ::STRINGS[6] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#4");
    ::TYPES[56] = ::g::Fuse::Animations::OpenAnimator_typeof();
    ::TYPES[51] = ::g::Fuse::Animations::IMixer_typeof();
    ::TYPES[46] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[57] = ::g::Fuse::Animations::Cycle_typeof();
    ::TYPES[17] = ::g::Fuse::Internal::BlenderMap_typeof();
    ::TYPES[13] = ::g::Uno::Double_typeof();
    ::TYPES[55] = ::g::Uno::Delegate_typeof();
    ::TYPES[58] = ::g::Fuse::Animations::EasingFunction_typeof();
    ::TYPES[32] = ::g::Uno::Float_typeof();
    type->SetPrecalc(
        ::TYPES[51/*Fuse.Animations.IMixer*/]->MakeMethod(1, type->T(0)),
        ::TYPES[57/*Fuse.Animations.Cycle`1*/]->MakeType(type->T(0)),
        ::TYPES[17/*Fuse.Internal.BlenderMap*/]->MakeMethod(1, type->T(0)));
    type->SetFields(5,
        ::g::Fuse::Animations::Cycle_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::CycleState, Animator1), 0,
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::CycleState, blender), 0,
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::CycleState, mixHandle), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::CycleState, progress), 0);
    return type;
}

// public CycleState(Fuse.Animations.Cycle<T> animator, Fuse.Animations.CreateStateParams p) :703
void CycleState__ctor_2_fn(CycleState* __this, ::g::Fuse::Animations::Cycle* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public override sealed void Disable() :711
void CycleState__Disable_fn(CycleState* __this)
{
    uStackFrame __("Fuse.Animations.CycleState`1", "Disable()");

    if (__this->mixHandle == NULL)
        return;

    ::g::Fuse::Animations::IMixerHandle::Unregister(uInterface(uPtr(__this->mixHandle), ::TYPES[73/*Fuse.Animations.IMixerHandle`1*/]->MakeType(__this->__type->T(0))));
    __this->mixHandle = NULL;
    __this->progress = 0.0;
}

// public CycleState New(Fuse.Animations.Cycle<T> animator, Fuse.Animations.CreateStateParams p) :703
void CycleState__New1_fn(uType* __type, ::g::Fuse::Animations::Cycle* animator, ::g::Fuse::Animations::CreateStateParams* p, CycleState** __retval)
{
    *__retval = CycleState::New1(__type, animator, p);
}

// protected override sealed bool Seek(bool on, float interval, float strength, Fuse.Animations.SeekDirection dir) :729
void CycleState__Seek_fn(CycleState* __this, bool* on, float* interval, float* strength, int* dir, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(1/*Fuse.Animations.Cycle<T>*/),
    };
    uStackFrame __("Fuse.Animations.CycleState`1", "Seek(bool,float,float,Fuse.Animations.SeekDirection)");
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    float interval_ = *interval;
    bool on_ = *on;
    float ret2;
    ;
    ;
    float strength_ = *strength;

    if (__this->mixHandle == NULL)
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[5/*"Invalid seek"*/], 1, ::STRINGS[6/*"/usr/local/...*/], 733);
        return *__retval = true, void();
    }

    bool done = false;
    double oldProgress = __this->progress;
    __this->progress = (__this->progress + ((double)interval_ * uPtr(__this->Animator1)->Frequency()));

    if (on_)
        __this->progress = ::g::Uno::Math::Mod(__this->progress, 1.0);
    else if ((((oldProgress <= 0.0) || (__this->progress <= 0.0)) || (__this->progress >= 1.0)) || (oldProgress >= 1.0))
    {
        __this->progress = 0.0;
        done = true;
    }

    double s = uPtr(__this->Animator1)->WaveformFunc(__this->progress, (double)uPtr(__this->Animator1)->ProgressOffset());

    if (::g::Uno::Delegate::op_Inequality(uPtr(__this->Animator1)->_easingFunction, NULL))
        s = (double)(uPtr(uPtr(__this->Animator1)->_easingFunction)->Invoke(&ret2, 1, uCRef((float)s)), ret2);

    ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(__this->mixHandle), ::TYPES[73/*Fuse.Animations.IMixerHandle`1*/]->MakeType(__types[0])), (uPtr(__this->blender)->Weight_ex((::g::Fuse::Animations::Cycle__get_Base_fn(uPtr(__this->Animator1), &ret4), ret4), uCRef((double)::g::Uno::Math::Lerp1(uPtr(__this->Animator1)->Low(), uPtr(__this->Animator1)->High(), (float)s)), &ret3), ret3), uCRef(strength_));
    return *__retval = done, void();
}

// public CycleState(Fuse.Animations.Cycle<T> animator, Fuse.Animations.CreateStateParams p) [instance] :703
void CycleState::ctor_2(::g::Fuse::Animations::Cycle* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Animations.IMixer.Register<T>*/),
        __type->T(0),
        __type->Precalced(1/*Fuse.Animations.Cycle<T>*/),
        __type->Precalced(2/*Fuse.Internal.BlenderMap.Get<T>*/),
    };
    uStackFrame __("Fuse.Animations.CycleState`1", ".ctor(Fuse.Animations.Cycle<T>,Fuse.Animations.CreateStateParams)");
    ctor_1(animator, p, NULL);
    Animator1 = animator;
    mixHandle = ((uObject*)::g::Fuse::Animations::IMixer::Register(uInterface(uPtr(uPtr(Animator1)->Mixer), ::TYPES[51/*Fuse.Animations.IMixer*/]), __types[0], (::g::Uno::UX::Property*)uPtr(Animator1)->Target(), uPtr(Animator1)->MixOp()));
    blender = ((::g::Fuse::Internal::Blender*)::g::Fuse::Internal::BlenderMap::Get(__types[3]));
}

// public CycleState New(Fuse.Animations.Cycle<T> animator, Fuse.Animations.CreateStateParams p) [static] :703
CycleState* CycleState::New1(uType* __type, ::g::Fuse::Animations::Cycle* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    CycleState* obj1 = (CycleState*)uNew(__type);
    obj1->ctor_2(animator, p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#4
// -------------------------------------------------------------

// public enum CycleWaveform :571
uEnumType* CycleWaveform_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.CycleWaveform", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Sine", 0LL,
        "Triangle", 1LL,
        "Sawtooth", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#5
// -------------------------------------------------------------

// internal sealed class DiscreteKeyframeTrack :772
// {
DiscreteKeyframeTrack_type* DiscreteKeyframeTrack_typeof()
{
    static uSStrong<DiscreteKeyframeTrack_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(DiscreteKeyframeTrack);
    options.TypeSize = sizeof(DiscreteKeyframeTrack_type);
    type = (DiscreteKeyframeTrack_type*)uClassType::New("Fuse.Animations.DiscreteKeyframeTrack", options);
    type->fp_ctor_ = (void*)DiscreteKeyframeTrack__New1_fn;
    type->interface3.fp_GetDuration = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*, double*))DiscreteKeyframeTrack__FuseAnimationsTrackProviderGetDuration_fn;
    type->interface3.fp_GetAnimatorVariant = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*))DiscreteKeyframeTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn;
    type->interface0.fp_GetSeekProgress = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, uObject**, double*, int*))DiscreteKeyframeTrack__FuseAnimationsDiscreteTrackProviderGetSeekProgress_fn;
    type->interface0.fp_GetSeekTime = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, uObject**, double*, int*))DiscreteKeyframeTrack__FuseAnimationsDiscreteTrackProviderGetSeekTime_fn;
    type->interface2.fp_get_Keyframes = (void(*)(uObject*, uObject**))DiscreteKeyframeTrack__get_Keyframes_fn;
    type->interface2.fp_get_Interpolation = (void(*)(uObject*, int*))DiscreteKeyframeTrack__get_Interpolation_fn;
    type->interface2.fp_set_Interpolation = (void(*)(uObject*, int*))DiscreteKeyframeTrack__set_Interpolation_fn;
    ::TYPES[59] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Animations::Keyframe_typeof());
    ::TYPES[60] = ::g::Fuse::Animations::DiscreteTrackProvider_typeof();
    ::TYPES[61] = ::g::Fuse::Animations::Keyframe_typeof();
    ::TYPES[62] = ::g::Fuse::Animations::SeekResult_typeof();
    ::TYPES[15] = ::g::Uno::Int_typeof();
    ::TYPES[63] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Animations::Keyframe_typeof());
    type->SetInterfaces(
        ::g::Fuse::Animations::DiscreteTrackProvider_typeof(), offsetof(DiscreteKeyframeTrack_type, interface0),
        ::g::Fuse::Animations::ITrackProvider_typeof(), offsetof(DiscreteKeyframeTrack_type, interface1),
        ::g::Fuse::Animations::KeyframeTrack_typeof(), offsetof(DiscreteKeyframeTrack_type, interface2),
        ::g::Fuse::Animations::TrackProvider_typeof(), offsetof(DiscreteKeyframeTrack_type, interface3));
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::DiscreteKeyframeTrack, _duration), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Animations::Keyframe_typeof()), offsetof(::g::Fuse::Animations::DiscreteKeyframeTrack, _frames), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::DiscreteKeyframeTrack, _init), 0,
        ::g::Fuse::Animations::KeyframeInterpolation_typeof(), offsetof(::g::Fuse::Animations::DiscreteKeyframeTrack, _Interpolation), 0);
    return type;
}

// public generated DiscreteKeyframeTrack() :772
void DiscreteKeyframeTrack__ctor__fn(DiscreteKeyframeTrack* __this)
{
    __this->ctor_();
}

// private Fuse.Animations.SeekResult Fuse.Animations.DiscreteTrackProvider.GetSeekProgress(Fuse.Animations.TrackAnimatorState tas, double progress, double interval, Fuse.Animations.SeekDirection dir, object& value, double& strength) :805
void DiscreteKeyframeTrack__FuseAnimationsDiscreteTrackProviderGetSeekProgress_fn(DiscreteKeyframeTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* progress, double* interval, int* dir, uObject** value, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.DiscreteKeyframeTrack", "Fuse.Animations.DiscreteTrackProvider.GetSeekProgress(Fuse.Animations.TrackAnimatorState,double,double,Fuse.Animations.SeekDirection,object&,double&)");
    double progress_ = *progress;
    double interval_ = *interval;
    int dir_ = *dir;
    return *__retval = ::g::Fuse::Animations::DiscreteTrackProvider::GetSeekTime(uInterface(uPtr(uAs<uObject*>(__this, ::TYPES[60/*Fuse.Animations.DiscreteTrackProvider*/])), ::TYPES[60/*Fuse.Animations.DiscreteTrackProvider*/]), tas, progress_ * __this->_duration, interval_, dir_, value, strength), void();
}

// private Fuse.Animations.SeekResult Fuse.Animations.DiscreteTrackProvider.GetSeekTime(Fuse.Animations.TrackAnimatorState tas, double elapsed, double interval, Fuse.Animations.SeekDirection dir, object& value, double& strength) :813
void DiscreteKeyframeTrack__FuseAnimationsDiscreteTrackProviderGetSeekTime_fn(DiscreteKeyframeTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* elapsed, double* interval, int* dir, uObject** value, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.DiscreteKeyframeTrack", "Fuse.Animations.DiscreteTrackProvider.GetSeekTime(Fuse.Animations.TrackAnimatorState,double,double,Fuse.Animations.SeekDirection,object&,double&)");
    ::g::Fuse::Animations::Keyframe* ret2;
    double elapsed_ = *elapsed;
    ::g::Fuse::Animations::Keyframe* ret3;
    ::g::Fuse::Animations::Keyframe* ret4;
    int dir_ = *dir;
    __this->Init();

    if (uPtr(__this->_frames)->Count() == 0)
    {
        *value = NULL;
        *strength = 0.0;
        return *__retval = 3, void();
    }

    int segment = -1;

    while ((segment < (uPtr(__this->_frames)->Count() - 2)) && (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(segment + 1), &ret2), ret2))->Time() <= elapsed_))
        ++segment;

    if (segment == -1)
    {
        *value = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(0), &ret3), ret3))->ObjectValue();
        *strength = 0.0;
    }
    else
    {
        *value = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(segment), &ret4), ret4))->ObjectValue();
        *strength = 1.0;
    }

    return *__retval = (((dir_ == 0) ? elapsed_ >= 0.0 : elapsed_ <= 0.0) ? 1 : 0) | 2, void();
}

// private Fuse.Animations.AnimatorVariant Fuse.Animations.TrackProvider.GetAnimatorVariant(Fuse.Animations.TrackAnimator ta) :800
void DiscreteKeyframeTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn(DiscreteKeyframeTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* __retval)
{
    uStackFrame __("Fuse.Animations.DiscreteKeyframeTrack", "Fuse.Animations.TrackProvider.GetAnimatorVariant(Fuse.Animations.TrackAnimator)");
    return *__retval = 0, void();
}

// private double Fuse.Animations.TrackProvider.GetDuration(Fuse.Animations.TrackAnimator ta, Fuse.Animations.AnimationVariant variant) :794
void DiscreteKeyframeTrack__FuseAnimationsTrackProviderGetDuration_fn(DiscreteKeyframeTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* variant, double* __retval)
{
    uStackFrame __("Fuse.Animations.DiscreteKeyframeTrack", "Fuse.Animations.TrackProvider.GetDuration(Fuse.Animations.TrackAnimator,Fuse.Animations.AnimationVariant)");
    __this->Init();
    return *__retval = __this->_duration, void();
}

// private void Init() :785
void DiscreteKeyframeTrack__Init_fn(DiscreteKeyframeTrack* __this)
{
    __this->Init();
}

// public generated Fuse.Animations.KeyframeInterpolation get_Interpolation() :781
void DiscreteKeyframeTrack__get_Interpolation_fn(DiscreteKeyframeTrack* __this, int* __retval)
{
    *__retval = __this->Interpolation();
}

// public generated void set_Interpolation(Fuse.Animations.KeyframeInterpolation value) :781
void DiscreteKeyframeTrack__set_Interpolation_fn(DiscreteKeyframeTrack* __this, int* value)
{
    __this->Interpolation(*value);
}

// public Uno.Collections.IList<Fuse.Animations.Keyframe> get_Keyframes() :778
void DiscreteKeyframeTrack__get_Keyframes_fn(DiscreteKeyframeTrack* __this, uObject** __retval)
{
    *__retval = __this->Keyframes();
}

// public generated DiscreteKeyframeTrack New() :772
void DiscreteKeyframeTrack__New1_fn(DiscreteKeyframeTrack** __retval)
{
    *__retval = DiscreteKeyframeTrack::New1();
}

// public generated DiscreteKeyframeTrack() [instance] :772
void DiscreteKeyframeTrack::ctor_()
{
    uStackFrame __("Fuse.Animations.DiscreteKeyframeTrack", ".ctor()");
    _frames = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[59/*Uno.Collections.List<Fuse.Animations.Keyframe>*/]));
}

// private void Init() [instance] :785
void DiscreteKeyframeTrack::Init()
{
    uStackFrame __("Fuse.Animations.DiscreteKeyframeTrack", "Init()");

    if (_init)
        return;

    _duration = ::g::Fuse::Animations::Keyframe::CompleteFrames((uObject*)_frames, 0.0f, 0.0f, 0.0f);
    _init = true;
}

// public generated Fuse.Animations.KeyframeInterpolation get_Interpolation() [instance] :781
int DiscreteKeyframeTrack::Interpolation()
{
    uStackFrame __("Fuse.Animations.DiscreteKeyframeTrack", "get_Interpolation()");
    return _Interpolation;
}

// public generated void set_Interpolation(Fuse.Animations.KeyframeInterpolation value) [instance] :781
void DiscreteKeyframeTrack::Interpolation(int value)
{
    uStackFrame __("Fuse.Animations.DiscreteKeyframeTrack", "set_Interpolation(Fuse.Animations.KeyframeInterpolation)");
    _Interpolation = value;
}

// public Uno.Collections.IList<Fuse.Animations.Keyframe> get_Keyframes() [instance] :778
uObject* DiscreteKeyframeTrack::Keyframes()
{
    uStackFrame __("Fuse.Animations.DiscreteKeyframeTrack", "get_Keyframes()");
    return (uObject*)_frames;
}

// public generated DiscreteKeyframeTrack New() [static] :772
DiscreteKeyframeTrack* DiscreteKeyframeTrack::New1()
{
    DiscreteKeyframeTrack* obj1 = (DiscreteKeyframeTrack*)uNew(DiscreteKeyframeTrack_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#6
// -------------------------------------------------------------

// internal sealed class DiscreteMasterProperty<T> :866
// {
::g::Fuse::Animations::MasterProperty_type* DiscreteMasterProperty_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MasterProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.PrecalcCount = 4;
    options.ObjectSize = sizeof(DiscreteMasterProperty);
    options.TypeSize = sizeof(::g::Fuse::Animations::MasterProperty_type);
    type = (::g::Fuse::Animations::MasterProperty_type*)uClassType::New("Fuse.Animations.DiscreteMasterProperty`1", options);
    type->SetBase(::g::Fuse::Animations::MasterProperty_typeof()->MakeType(type->T(0)));
    type->fp_OnComplete = (void(*)(::g::Fuse::Animations::MasterBase*))DiscreteMasterProperty__OnComplete_fn;
    type->interface1.fp_GetPropertyObject = (void(*)(uObject*, uObject**))::g::Fuse::Animations::MasterProperty__GetPropertyObject_fn;
    type->interface0.fp_Complete = (void(*)(uObject*))::g::Fuse::Animations::MasterBase__Complete_fn;
    ::TYPES[18] = ::g::Fuse::Animations::MasterProperty_typeof();
    ::TYPES[20] = ::g::Uno::Collections::List_typeof();
    ::TYPES[21] = ::g::Fuse::Animations::MixerHandle_typeof();
    ::TYPES[22] = ::g::Fuse::Animations::MasterBase_typeof();
    ::TYPES[14] = uObject_typeof();
    type->SetPrecalc(
        ::TYPES[18/*Fuse.Animations.MasterProperty`1*/]->MakeType(type->T(0)),
        ::TYPES[20/*Uno.Collections.List`1*/]->MakeType(::TYPES[21/*Fuse.Animations.MixerHandle`1*/]->MakeType(type->T(0))),
        ::TYPES[21/*Fuse.Animations.MixerHandle`1*/]->MakeType(type->T(0)),
        ::TYPES[22/*Fuse.Animations.MasterBase`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(::g::Fuse::Animations::MasterProperty_type, interface0),
        ::g::Fuse::Animations::MasterPropertyGet_typeof(), offsetof(::g::Fuse::Animations::MasterProperty_type, interface1));
    type->SetFields(6);
    return type;
}

// public DiscreteMasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :868
void DiscreteMasterProperty__ctor_2_fn(DiscreteMasterProperty* __this, ::g::Uno::UX::Property* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_2(property, mixerBase);
}

// public DiscreteMasterProperty New(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :868
void DiscreteMasterProperty__New1_fn(uType* __type, ::g::Uno::UX::Property* property, ::g::Fuse::Animations::MixerBase* mixerBase, DiscreteMasterProperty** __retval)
{
    *__retval = DiscreteMasterProperty::New1(__type, property, mixerBase);
}

// public override sealed void OnComplete() :871
void DiscreteMasterProperty__OnComplete_fn(DiscreteMasterProperty* __this)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Fuse.Animations.MasterProperty<T>*/),
        __this->__type->Precalced(1/*Uno.Collections.List<Fuse.Animations.MixerHandle<T>>*/),
        __this->__type->Precalced(2/*Fuse.Animations.MixerHandle<T>*/),
        __this->__type->Precalced(3/*Fuse.Animations.MasterBase<T>*/),
    };
    uStackFrame __("Fuse.Animations.DiscreteMasterProperty`1", "OnComplete()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT nv(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ::g::Fuse::Animations::MixerHandle* ret3;
    nv = (__this->get_RestValue_ex(&ret2), ret2);
    float str = 0.5f;

    for (int i = 0; i < uPtr((::g::Uno::Collections::List*)__this->Handles)->Count(); ++i)
    {
        ::g::Fuse::Animations::MixerHandle* v = (::g::Uno::Collections::List__get_Item_fn(uPtr((::g::Uno::Collections::List*)__this->Handles), uCRef<int>(i), &ret3), ret3);

        if (uPtr(v)->HasValue() && (uPtr(v)->Strength > str))
        {
            nv = uPtr(v)->Value();
            str = v->Strength;
        }
    }

    ::g::Uno::UX::Property__Set_fn(uPtr((::g::Uno::UX::Property*)__this->Property), nv, __this);
}

// public DiscreteMasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) [instance] :868
void DiscreteMasterProperty::ctor_2(::g::Uno::UX::Property* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    uStackFrame __("Fuse.Animations.DiscreteMasterProperty`1", ".ctor(Uno.UX.Property<T>,Fuse.Animations.MixerBase)");
    ctor_1(property, mixerBase);
}

// public DiscreteMasterProperty New(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) [static] :868
DiscreteMasterProperty* DiscreteMasterProperty::New1(uType* __type, ::g::Uno::UX::Property* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    DiscreteMasterProperty* obj1 = (DiscreteMasterProperty*)uNew(__type);
    obj1->ctor_2(property, mixerBase);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#6
// -------------------------------------------------------------

// internal sealed class DiscreteMasterTransform :889
// {
::g::Fuse::Animations::MasterBase_type* DiscreteMasterTransform_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MasterBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DiscreteMasterTransform);
    options.TypeSize = sizeof(::g::Fuse::Animations::MasterBase_type);
    type = (::g::Fuse::Animations::MasterBase_type*)uClassType::New("Fuse.Animations.DiscreteMasterTransform", options);
    type->SetBase(::g::Fuse::Animations::MasterTransform_typeof());
    type->fp_OnComplete = (void(*)(::g::Fuse::Animations::MasterBase*))DiscreteMasterTransform__OnComplete_fn;
    type->interface0.fp_Complete = (void(*)(uObject*))::g::Fuse::Animations::MasterBase__Complete_fn;
    ::TYPES[29] = ::g::Fuse::Animations::FastMatrixTransform_typeof();
    ::TYPES[30] = ::g::Fuse::Animations::MasterTransform_typeof();
    ::TYPES[23] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Animations::MixerHandle_typeof()->MakeType(::g::Fuse::Transform_typeof()));
    ::TYPES[24] = ::g::Fuse::Animations::MasterBase_typeof()->MakeType(::g::Fuse::Transform_typeof());
    ::TYPES[25] = ::g::Fuse::Animations::MixerHandle_typeof()->MakeType(::g::Fuse::Transform_typeof());
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(::g::Fuse::Animations::MasterBase_type, interface0));
    type->SetFields(7);
    return type;
}

// public DiscreteMasterTransform(Fuse.Node node, Fuse.Animations.MixerBase mixerBase) :891
void DiscreteMasterTransform__ctor_2_fn(DiscreteMasterTransform* __this, ::g::Fuse::Node* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_2(node, mixerBase);
}

// public DiscreteMasterTransform New(Fuse.Node node, Fuse.Animations.MixerBase mixerBase) :891
void DiscreteMasterTransform__New1_fn(::g::Fuse::Node* node, ::g::Fuse::Animations::MixerBase* mixerBase, DiscreteMasterTransform** __retval)
{
    *__retval = DiscreteMasterTransform::New1(node, mixerBase);
}

// public override sealed void OnComplete() :894
void DiscreteMasterTransform__OnComplete_fn(DiscreteMasterTransform* __this)
{
    uStackFrame __("Fuse.Animations.DiscreteMasterTransform", "OnComplete()");
    ::g::Fuse::Animations::MixerHandle* ret2;
    uPtr(uPtr(__this->FMT)->Matrix)->ResetIdentity();
    float str = 0.5f;
    ::g::Fuse::Transform* value = NULL;

    for (int i = 0; i < uPtr((::g::Uno::Collections::List*)__this->Handles)->Count(); ++i)
    {
        ::g::Fuse::Animations::MixerHandle* v = (::g::Uno::Collections::List__get_Item_fn(uPtr((::g::Uno::Collections::List*)__this->Handles), uCRef<int>(i), &ret2), ret2);

        if (uPtr(v)->HasValue() && (uPtr(v)->Strength > str))
        {
            value = uPtr(v)->Value().Strong< ::g::Fuse::Transform*>();
            str = v->Strength;
        }
    }

    if (value != NULL)
        uPtr(value)->AppendTo(uPtr(__this->FMT)->Matrix, 1.0f);

    uPtr(__this->FMT)->Changed();
}

// public DiscreteMasterTransform(Fuse.Node node, Fuse.Animations.MixerBase mixerBase) [instance] :891
void DiscreteMasterTransform::ctor_2(::g::Fuse::Node* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    uStackFrame __("Fuse.Animations.DiscreteMasterTransform", ".ctor(Fuse.Node,Fuse.Animations.MixerBase)");
    ctor_1(node, mixerBase);
}

// public DiscreteMasterTransform New(Fuse.Node node, Fuse.Animations.MixerBase mixerBase) [static] :891
DiscreteMasterTransform* DiscreteMasterTransform::New1(::g::Fuse::Node* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    DiscreteMasterTransform* obj1 = (DiscreteMasterTransform*)uNew(DiscreteMasterTransform_typeof());
    obj1->ctor_2(node, mixerBase);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#6
// -------------------------------------------------------------

// internal sealed class DiscreteMixer :856
// {
::g::Fuse::Animations::MixerBase_type* DiscreteMixer_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MixerBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(DiscreteMixer);
    options.TypeSize = sizeof(::g::Fuse::Animations::MixerBase_type);
    type = (::g::Fuse::Animations::MixerBase_type*)uClassType::New("Fuse.Animations.DiscreteMixer", options);
    type->SetBase(::g::Fuse::Animations::MixerBase_typeof());
    type->fp_ctor_ = (void*)DiscreteMixer__New1_fn;
    type->fp_CreateMaster = (void(*)(::g::Fuse::Animations::MixerBase*, uType*, ::g::Uno::UX::Property*, ::g::Fuse::Animations::MixerBase*, ::g::Fuse::Animations::MasterProperty**))DiscreteMixer__CreateMaster_fn;
    type->fp_CreateMasterTransform = (void(*)(::g::Fuse::Animations::MixerBase*, ::g::Fuse::Node*, ::g::Fuse::Animations::MixerBase*, ::g::Fuse::Animations::MasterBase**))DiscreteMixer__CreateMasterTransform_fn;
    type->interface0.fp_Register = (void(*)(uObject*, uType*, ::g::Uno::UX::Property*, int*, uObject**))::g::Fuse::Animations::MixerBase__Register_fn;
    type->interface0.fp_RegisterTransform = (void(*)(uObject*, ::g::Fuse::Node*, int*, int*, uObject**))::g::Fuse::Animations::MixerBase__RegisterTransform_fn;
    ::TYPES[18] = ::g::Fuse::Animations::MasterProperty_typeof();
    ::TYPES[64] = ::g::Fuse::Animations::DiscreteMasterProperty_typeof();
    ::TYPES[24] = ::g::Fuse::Animations::MasterBase_typeof()->MakeType(::g::Fuse::Transform_typeof());
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixer_typeof(), offsetof(::g::Fuse::Animations::MixerBase_type, interface0));
    type->SetFields(2);
    return type;
}

// public generated DiscreteMixer() :856
void DiscreteMixer__ctor_1_fn(DiscreteMixer* __this)
{
    __this->ctor_1();
}

// protected override sealed Fuse.Animations.MasterProperty<T> CreateMaster<T>(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :858
void DiscreteMixer__CreateMaster_fn(DiscreteMixer* __this, uType* __type, ::g::Uno::UX::Property* property, ::g::Fuse::Animations::MixerBase* mixerBase, ::g::Fuse::Animations::MasterProperty** __retval)
{
    __type = DiscreteMixer_typeof()->GetVirtual(__type);
    uType* __types[] = {
        ::TYPES[18/*Fuse.Animations.MasterProperty`1*/]->MakeType(__type->U(0)),
        __type->U(0),
        ::TYPES[64/*Fuse.Animations.DiscreteMasterProperty`1*/]->MakeType(__type->U(0)),
    };
    uStackFrame __("Fuse.Animations.DiscreteMixer", "CreateMaster`1(Uno.UX.Property<T>,Fuse.Animations.MixerBase)");
    return *__retval = (::g::Fuse::Animations::DiscreteMasterProperty*)::g::Fuse::Animations::DiscreteMasterProperty::New1(__types[2], property, mixerBase), void();
}

// protected override sealed Fuse.Animations.MasterBase<Fuse.Transform> CreateMasterTransform(Fuse.Node element, Fuse.Animations.MixerBase mixerBase) :861
void DiscreteMixer__CreateMasterTransform_fn(DiscreteMixer* __this, ::g::Fuse::Node* element, ::g::Fuse::Animations::MixerBase* mixerBase, ::g::Fuse::Animations::MasterBase** __retval)
{
    uStackFrame __("Fuse.Animations.DiscreteMixer", "CreateMasterTransform(Fuse.Node,Fuse.Animations.MixerBase)");
    return *__retval = ::g::Fuse::Animations::DiscreteMasterTransform::New1(element, mixerBase), void();
}

// public generated DiscreteMixer New() :856
void DiscreteMixer__New1_fn(DiscreteMixer** __retval)
{
    *__retval = DiscreteMixer::New1();
}

// public generated DiscreteMixer() [instance] :856
void DiscreteMixer::ctor_1()
{
    uStackFrame __("Fuse.Animations.DiscreteMixer", ".ctor()");
    ctor_();
}

// public generated DiscreteMixer New() [static] :856
DiscreteMixer* DiscreteMixer::New1()
{
    DiscreteMixer* obj1 = (DiscreteMixer*)uNew(DiscreteMixer_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#7
// -------------------------------------------------------------

// internal sealed class DiscreteSingleTrack :924
// {
// static DiscreteSingleTrack() :924
static void DiscreteSingleTrack__cctor__fn(uType* __type)
{
    DiscreteSingleTrack::Singleton_ = DiscreteSingleTrack::New1();
}

DiscreteSingleTrack_type* DiscreteSingleTrack_typeof()
{
    static uSStrong<DiscreteSingleTrack_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(DiscreteSingleTrack);
    options.TypeSize = sizeof(DiscreteSingleTrack_type);
    type = (DiscreteSingleTrack_type*)uClassType::New("Fuse.Animations.DiscreteSingleTrack", options);
    type->fp_ctor_ = (void*)DiscreteSingleTrack__New1_fn;
    type->fp_cctor_ = DiscreteSingleTrack__cctor__fn;
    type->interface2.fp_GetDuration = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*, double*))DiscreteSingleTrack__FuseAnimationsTrackProviderGetDuration_fn;
    type->interface2.fp_GetAnimatorVariant = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*))DiscreteSingleTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn;
    type->interface0.fp_GetSeekProgress = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, uObject**, double*, int*))DiscreteSingleTrack__FuseAnimationsDiscreteTrackProviderGetSeekProgress_fn;
    type->interface0.fp_GetSeekTime = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, uObject**, double*, int*))DiscreteSingleTrack__FuseAnimationsDiscreteTrackProviderGetSeekTime_fn;
    ::TYPES[50] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[65] = ::g::Fuse::Animations::TrackAnimatorState_typeof();
    ::TYPES[62] = ::g::Fuse::Animations::SeekResult_typeof();
    ::TYPES[15] = ::g::Uno::Int_typeof();
    ::TYPES[32] = ::g::Uno::Float_typeof();
    ::TYPES[13] = ::g::Uno::Double_typeof();
    type->SetInterfaces(
        ::g::Fuse::Animations::DiscreteTrackProvider_typeof(), offsetof(DiscreteSingleTrack_type, interface0),
        ::g::Fuse::Animations::ITrackProvider_typeof(), offsetof(DiscreteSingleTrack_type, interface1),
        ::g::Fuse::Animations::TrackProvider_typeof(), offsetof(DiscreteSingleTrack_type, interface2));
    type->SetFields(0,
        DiscreteSingleTrack_typeof(), (uintptr_t)&::g::Fuse::Animations::DiscreteSingleTrack::Singleton_, uFieldFlagsStatic);
    return type;
}

// public generated DiscreteSingleTrack() :924
void DiscreteSingleTrack__ctor__fn(DiscreteSingleTrack* __this)
{
    __this->ctor_();
}

// private Fuse.Animations.SeekResult Fuse.Animations.DiscreteTrackProvider.GetSeekProgress(Fuse.Animations.TrackAnimatorState tas, double progress, double interval, Fuse.Animations.SeekDirection dir, object& value, double& strength) :939
void DiscreteSingleTrack__FuseAnimationsDiscreteTrackProviderGetSeekProgress_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* progress, double* interval, int* dir, uObject** value, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.DiscreteSingleTrack", "Fuse.Animations.DiscreteTrackProvider.GetSeekProgress(Fuse.Animations.TrackAnimatorState,double,double,Fuse.Animations.SeekDirection,object&,double&)");
    double progress_ = *progress;
    int dir_ = *dir;
    *strength = progress_;
    *value = uPtr(uPtr(tas)->Animator)->_objectValue;
    return *__retval = (((dir_ == 0) ? progress_ >= 1.0 : progress_ <= 0.0) ? 1 : 0) | 2, void();
}

// private Fuse.Animations.SeekResult Fuse.Animations.DiscreteTrackProvider.GetSeekTime(Fuse.Animations.TrackAnimatorState tas, double elapsed, double interval, Fuse.Animations.SeekDirection dir, object& value, double& strength) :950
void DiscreteSingleTrack__FuseAnimationsDiscreteTrackProviderGetSeekTime_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* elapsed, double* interval, int* dir, uObject** value, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.DiscreteSingleTrack", "Fuse.Animations.DiscreteTrackProvider.GetSeekTime(Fuse.Animations.TrackAnimatorState,double,double,Fuse.Animations.SeekDirection,object&,double&)");
    int dir_ = *dir;
    double elapsed_ = *elapsed;
    double duration = uPtr(tas)->Duration();
    float progress;

    if (duration < 9.9999997473787516e-06)
        progress = (float)(((dir_ == 0) ? elapsed_ >= -9.9999997473787516e-06 : elapsed_ > 9.9999997473787516e-06) ? 1 : 0);
    else
        progress = (float)(elapsed_ / duration);

    *strength = (double)::g::Uno::Math::Clamp1(progress, 0.0f, 1.0f);
    *value = uPtr(tas->Animator)->_objectValue;
    return *__retval = (((dir_ == 0) ? elapsed_ >= 0.0 : elapsed_ <= 0.0) ? 1 : 0) | 2, void();
}

// private Fuse.Animations.AnimatorVariant Fuse.Animations.TrackProvider.GetAnimatorVariant(Fuse.Animations.TrackAnimator ta) :934
void DiscreteSingleTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* __retval)
{
    uStackFrame __("Fuse.Animations.DiscreteSingleTrack", "Fuse.Animations.TrackProvider.GetAnimatorVariant(Fuse.Animations.TrackAnimator)");
    return *__retval = uPtr(ta)->HasBack() ? 2 : 0, void();
}

// private double Fuse.Animations.TrackProvider.GetDuration(Fuse.Animations.TrackAnimator ta, Fuse.Animations.AnimationVariant variant) :929
void DiscreteSingleTrack__FuseAnimationsTrackProviderGetDuration_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* variant, double* __retval)
{
    uStackFrame __("Fuse.Animations.DiscreteSingleTrack", "Fuse.Animations.TrackProvider.GetDuration(Fuse.Animations.TrackAnimator,Fuse.Animations.AnimationVariant)");
    int variant_ = *variant;
    return *__retval = (variant_ == 1) ? uPtr(ta)->DurationBack() : uPtr(ta)->Duration(), void();
}

// public generated DiscreteSingleTrack New() :924
void DiscreteSingleTrack__New1_fn(DiscreteSingleTrack** __retval)
{
    *__retval = DiscreteSingleTrack::New1();
}

uSStrong<DiscreteSingleTrack*> DiscreteSingleTrack::Singleton_;

// public generated DiscreteSingleTrack() [instance] :924
void DiscreteSingleTrack::ctor_()
{
}

// public generated DiscreteSingleTrack New() [static] :924
DiscreteSingleTrack* DiscreteSingleTrack::New1()
{
    DiscreteSingleTrack* obj1 = (DiscreteSingleTrack*)uNew(DiscreteSingleTrack_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#3
// -------------------------------------------------------------

// internal sealed class DiscreteTrackChangeState<T> :442
// {
::g::Fuse::Animations::TrackAnimatorState_type* DiscreteTrackChangeState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.GenericCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(DiscreteTrackChangeState);
    options.TypeSize = sizeof(::g::Fuse::Animations::TrackAnimatorState_type);
    type = (::g::Fuse::Animations::TrackAnimatorState_type*)uClassType::New("Fuse.Animations.DiscreteTrackChangeState`1", options);
    type->SetBase(::g::Fuse::Animations::TrackAnimatorState_typeof());
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Disable_fn;
    type->fp_SeekObjectValue = (void(*)(::g::Fuse::Animations::TrackAnimatorState*, uObject*, float*))DiscreteTrackChangeState__SeekObjectValue_fn;
    ::STRINGS[2] = uString::Const("Invalid Seek");
    ::STRINGS[3] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#3");
    ::TYPES[50] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[51] = ::g::Fuse::Animations::IMixer_typeof();
    ::TYPES[46] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[52] = ::g::Fuse::Animations::Change_typeof();
    type->SetPrecalc(
        ::TYPES[51/*Fuse.Animations.IMixer*/]->MakeMethod(1, type->T(0)),
        ::TYPES[52/*Fuse.Animations.Change`1*/]->MakeType(type->T(0)));
    type->SetFields(6,
        ::g::Fuse::Animations::Change_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::DiscreteTrackChangeState, Animator1), 0,
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::DiscreteTrackChangeState, mixHandle), 0);
    return type;
}

// public DiscreteTrackChangeState(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) :447
void DiscreteTrackChangeState__ctor_2_fn(DiscreteTrackChangeState* __this, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public override sealed void Disable() :454
void DiscreteTrackChangeState__Disable_fn(DiscreteTrackChangeState* __this)
{
    uStackFrame __("Fuse.Animations.DiscreteTrackChangeState`1", "Disable()");

    if (__this->mixHandle == NULL)
        return;

    ::g::Fuse::Animations::IMixerHandle::Unregister(uInterface(uPtr(__this->mixHandle), ::TYPES[73/*Fuse.Animations.IMixerHandle`1*/]->MakeType(__this->__type->T(0))));
    __this->mixHandle = NULL;
}

// public DiscreteTrackChangeState New(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) :447
void DiscreteTrackChangeState__New1_fn(uType* __type, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p, DiscreteTrackChangeState** __retval)
{
    *__retval = DiscreteTrackChangeState::New1(__type, animator, p);
}

// protected override sealed void SeekObjectValue(object value, float strength) :463
void DiscreteTrackChangeState__SeekObjectValue_fn(DiscreteTrackChangeState* __this, uObject* value, float* strength)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.DiscreteTrackChangeState`1", "SeekObjectValue(object,float)");
    float strength_ = *strength;

    if (__this->mixHandle == NULL)
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[2/*"Invalid Seek"*/], 1, ::STRINGS[3/*"/usr/local/...*/], 467);
        return;
    }

    if ((value != NULL) && uIs(value, __types[0]))
        ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(__this->mixHandle), ::TYPES[73/*Fuse.Animations.IMixerHandle`1*/]->MakeType(__types[0])), uUnboxAny(__types[0], value), uCRef(strength_));
}

// public DiscreteTrackChangeState(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) [instance] :447
void DiscreteTrackChangeState::ctor_2(::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Animations.IMixer.Register<T>*/),
        __type->T(0),
        __type->Precalced(1/*Fuse.Animations.Change<T>*/),
    };
    uStackFrame __("Fuse.Animations.DiscreteTrackChangeState`1", ".ctor(Fuse.Animations.Change<T>,Fuse.Animations.CreateStateParams)");
    ctor_1(animator, p, NULL);
    Animator1 = animator;
    mixHandle = ((uObject*)::g::Fuse::Animations::IMixer::Register(uInterface(uPtr(uPtr(Animator1)->Mixer), ::TYPES[51/*Fuse.Animations.IMixer*/]), __types[0], (::g::Uno::UX::Property*)uPtr(Animator1)->Target(), uPtr(Animator1)->MixOp()));
}

// public DiscreteTrackChangeState New(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) [static] :447
DiscreteTrackChangeState* DiscreteTrackChangeState::New1(uType* __type, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState* obj1 = (DiscreteTrackChangeState*)uNew(__type);
    obj1->ctor_2(animator, p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#19
// --------------------------------------------------------------

// internal abstract interface DiscreteTrackProvider :3060
// {
uInterfaceType* DiscreteTrackProvider_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.DiscreteTrackProvider", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#8
// -------------------------------------------------------------

// public enum Easing :981
uEnumType* Easing_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.Easing", ::g::Uno::Int_typeof(), 31);
    type->SetLiterals(
        "Linear", 0LL,
        "QuadraticIn", 1LL,
        "QuadraticOut", 2LL,
        "QuadraticInOut", 3LL,
        "CubicIn", 4LL,
        "CubicOut", 5LL,
        "CubicInOut", 6LL,
        "QuarticIn", 7LL,
        "QuarticOut", 8LL,
        "QuarticInOut", 9LL,
        "QuinticIn", 10LL,
        "QuinticOut", 11LL,
        "QuinticInOut", 12LL,
        "SinusoidalIn", 13LL,
        "SinusoidalOut", 14LL,
        "SinusoidalInOut", 15LL,
        "ExponentialIn", 16LL,
        "ExponentialOut", 17LL,
        "ExponentialInOut", 18LL,
        "CircularIn", 19LL,
        "CircularOut", 20LL,
        "CircularInOut", 21LL,
        "ElasticIn", 22LL,
        "ElasticOut", 23LL,
        "ElasticInOut", 24LL,
        "BackIn", 25LL,
        "BackOut", 26LL,
        "BackInOut", 27LL,
        "BounceIn", 28LL,
        "BounceOut", 29LL,
        "BounceInOut", 30LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#8
// -------------------------------------------------------------

// public delegate float EasingFunction(float k) :979
uDelegateType* EasingFunction_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Animations.EasingFunction", 1, 0);
    type->SetSignature(::g::Uno::Float_typeof(),
        ::g::Uno::Float_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#8
// -------------------------------------------------------------

// public static class EasingFunctions :1026
// {
uClassType* EasingFunctions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Animations.EasingFunctions", options);
    ::TYPES[32] = ::g::Uno::Float_typeof();
    ::TYPES[58] = ::g::Fuse::Animations::EasingFunction_typeof();
    type->Reflection.SetFunctions(32,
        new uFunction("BackIn", NULL, (void*)EasingFunctions__BackIn_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("BackInOut", NULL, (void*)EasingFunctions__BackInOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("BackOut", NULL, (void*)EasingFunctions__BackOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("BounceIn", NULL, (void*)EasingFunctions__BounceIn_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("BounceInOut", NULL, (void*)EasingFunctions__BounceInOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("BounceOut", NULL, (void*)EasingFunctions__BounceOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("CircularIn", NULL, (void*)EasingFunctions__CircularIn_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("CircularInOut", NULL, (void*)EasingFunctions__CircularInOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("CircularOut", NULL, (void*)EasingFunctions__CircularOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("CubicIn", NULL, (void*)EasingFunctions__CubicIn_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("CubicInOut", NULL, (void*)EasingFunctions__CubicInOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("CubicOut", NULL, (void*)EasingFunctions__CubicOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("ElasticIn", NULL, (void*)EasingFunctions__ElasticIn_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("ElasticInOut", NULL, (void*)EasingFunctions__ElasticInOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("ElasticOut", NULL, (void*)EasingFunctions__ElasticOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("ExponentialIn", NULL, (void*)EasingFunctions__ExponentialIn_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("ExponentialInOut", NULL, (void*)EasingFunctions__ExponentialInOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("ExponentialOut", NULL, (void*)EasingFunctions__ExponentialOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("FromEasing", NULL, (void*)EasingFunctions__FromEasing_fn, 0, true, ::g::Fuse::Animations::EasingFunction_typeof(), 1, ::g::Fuse::Animations::Easing_typeof()),
        new uFunction("Linear", NULL, (void*)EasingFunctions__Linear_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("QuadraticIn", NULL, (void*)EasingFunctions__QuadraticIn_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("QuadraticInOut", NULL, (void*)EasingFunctions__QuadraticInOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("QuadraticOut", NULL, (void*)EasingFunctions__QuadraticOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("QuarticIn", NULL, (void*)EasingFunctions__QuarticIn_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("QuarticInOut", NULL, (void*)EasingFunctions__QuarticInOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("QuarticOut", NULL, (void*)EasingFunctions__QuarticOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("QuinticIn", NULL, (void*)EasingFunctions__QuinticIn_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("QuinticInOut", NULL, (void*)EasingFunctions__QuinticInOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("QuinticOut", NULL, (void*)EasingFunctions__QuinticOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("SinusoidalIn", NULL, (void*)EasingFunctions__SinusoidalIn_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("SinusoidalInOut", NULL, (void*)EasingFunctions__SinusoidalInOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("SinusoidalOut", NULL, (void*)EasingFunctions__SinusoidalOut_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}

// public static float BackIn(float k) :1263
void EasingFunctions__BackIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::BackIn(*k);
}

// public static float BackInOut(float k) :1276
void EasingFunctions__BackInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::BackInOut(*k);
}

// public static float BackOut(float k) :1269
void EasingFunctions__BackOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::BackOut(*k);
}

// public static float BounceIn(float k) :1288
void EasingFunctions__BounceIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::BounceIn(*k);
}

// public static float BounceInOut(float k) :1316
void EasingFunctions__BounceInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::BounceInOut(*k);
}

// public static float BounceOut(float k) :1293
void EasingFunctions__BounceOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::BounceOut(*k);
}

// public static float CircularIn(float k) :1207
void EasingFunctions__CircularIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::CircularIn(*k);
}

// public static float CircularInOut(float k) :1218
void EasingFunctions__CircularInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::CircularInOut(*k);
}

// public static float CircularOut(float k) :1212
void EasingFunctions__CircularOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::CircularOut(*k);
}

// public static float CubicIn(float k) :1105
void EasingFunctions__CubicIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::CubicIn(*k);
}

// public static float CubicInOut(float k) :1116
void EasingFunctions__CubicInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::CubicInOut(*k);
}

// public static float CubicOut(float k) :1110
void EasingFunctions__CubicOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::CubicOut(*k);
}

// public static float ElasticIn(float k) :1227
void EasingFunctions__ElasticIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::ElasticIn(*k);
}

// public static float ElasticInOut(float k) :1249
void EasingFunctions__ElasticInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::ElasticInOut(*k);
}

// public static float ElasticOut(float k) :1238
void EasingFunctions__ElasticOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::ElasticOut(*k);
}

// public static float ExponentialIn(float k) :1182
void EasingFunctions__ExponentialIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::ExponentialIn(*k);
}

// public static float ExponentialInOut(float k) :1192
void EasingFunctions__ExponentialInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::ExponentialInOut(*k);
}

// public static float ExponentialOut(float k) :1187
void EasingFunctions__ExponentialOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::ExponentialOut(*k);
}

// public static Fuse.Animations.EasingFunction FromEasing(Fuse.Animations.Easing e) :1028
void EasingFunctions__FromEasing_fn(int* e, uDelegate** __retval)
{
    *__retval = EasingFunctions::FromEasing(*e);
}

// public static float Linear(float k) :1078
void EasingFunctions__Linear_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::Linear(*k);
}

// public static float QuadraticIn(float k) :1083
void EasingFunctions__QuadraticIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuadraticIn(*k);
}

// public static float QuadraticInOut(float k) :1093
void EasingFunctions__QuadraticInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuadraticInOut(*k);
}

// public static float QuadraticOut(float k) :1088
void EasingFunctions__QuadraticOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuadraticOut(*k);
}

// public static float QuarticIn(float k) :1126
void EasingFunctions__QuarticIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuarticIn(*k);
}

// public static float QuarticInOut(float k) :1137
void EasingFunctions__QuarticInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuarticInOut(*k);
}

// public static float QuarticOut(float k) :1131
void EasingFunctions__QuarticOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuarticOut(*k);
}

// public static float QuinticIn(float k) :1146
void EasingFunctions__QuinticIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuinticIn(*k);
}

// public static float QuinticInOut(float k) :1157
void EasingFunctions__QuinticInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuinticInOut(*k);
}

// public static float QuinticOut(float k) :1151
void EasingFunctions__QuinticOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::QuinticOut(*k);
}

// public static float SinusoidalIn(float k) :1167
void EasingFunctions__SinusoidalIn_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::SinusoidalIn(*k);
}

// public static float SinusoidalInOut(float k) :1177
void EasingFunctions__SinusoidalInOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::SinusoidalInOut(*k);
}

// public static float SinusoidalOut(float k) :1172
void EasingFunctions__SinusoidalOut_fn(float* k, float* __retval)
{
    *__retval = EasingFunctions::SinusoidalOut(*k);
}

// public static float BackIn(float k) [static] :1263
float EasingFunctions::BackIn(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "BackIn(float)");
    float s = 1.70158f;
    return (k * k) * (((s + 1.0f) * k) - s);
}

// public static float BackInOut(float k) [static] :1276
float EasingFunctions::BackInOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "BackInOut(float)");
    float s = 2.59490943f;
    k = k * 2.0f;

    if (k < 1.0f)
        return 0.5f * ((k * k) * (((s + 1.0f) * k) - s));

    k = k - 2.0f;
    return 0.5f * (((k * k) * (((s + 1.0f) * k) + s)) + 2.0f);
}

// public static float BackOut(float k) [static] :1269
float EasingFunctions::BackOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "BackOut(float)");
    float s = 1.70158f;
    k = k - 1.0f;
    return ((k * k) * (((s + 1.0f) * k) + s)) + 1.0f;
}

// public static float BounceIn(float k) [static] :1288
float EasingFunctions::BounceIn(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "BounceIn(float)");
    return 1.0f - EasingFunctions::BounceOut(1.0f - k);
}

// public static float BounceInOut(float k) [static] :1316
float EasingFunctions::BounceInOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "BounceInOut(float)");

    if (k < 0.5f)
        return EasingFunctions::BounceIn(k * 2.0f) * 0.5f;

    return (EasingFunctions::BounceOut((k * 2.0f) - 1.0f) * 0.5f) + 0.5f;
}

// public static float BounceOut(float k) [static] :1293
float EasingFunctions::BounceOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "BounceOut(float)");

    if (k < 0.363636374f)
        return (7.5625f * k) * k;
    else if (k < 0.727272749f)
    {
        k = k - 0.545454562f;
        return ((7.5625f * k) * k) + 0.75f;
    }
    else if (k < 0.909090936f)
    {
        k = k - 0.8181818f;
        return ((7.562f * k) * k) + 0.9375f;
    }
    else
    {
        k = k - 0.954545438f;
        return ((7.5625f * k) * k) + 0.984375f;
    }
}

// public static float CircularIn(float k) [static] :1207
float EasingFunctions::CircularIn(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "CircularIn(float)");
    return 1.0f - ::g::Uno::Math::Sqrt1(1.0f - (k * k));
}

// public static float CircularInOut(float k) [static] :1218
float EasingFunctions::CircularInOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "CircularInOut(float)");
    k = k * 2.0f;

    if (k < 1.0f)
        return -0.5f * (::g::Uno::Math::Sqrt1(1.0f - (k * k)) - 1.0f);

    k = k - 2.0f;
    return 0.5f * (::g::Uno::Math::Sqrt1(1.0f - (k * k)) + 1.0f);
}

// public static float CircularOut(float k) [static] :1212
float EasingFunctions::CircularOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "CircularOut(float)");
    k = k - 1.0f;
    return ::g::Uno::Math::Sqrt1(1.0f - (k * k));
}

// public static float CubicIn(float k) [static] :1105
float EasingFunctions::CubicIn(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "CubicIn(float)");
    return (k * k) * k;
}

// public static float CubicInOut(float k) [static] :1116
float EasingFunctions::CubicInOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "CubicInOut(float)");
    k = k * 2.0f;

    if (k < 1.0f)
        return ((0.5f * k) * k) * k;

    k = k - 2.0f;
    return 0.5f * (((k * k) * k) + 2.0f);
}

// public static float CubicOut(float k) [static] :1110
float EasingFunctions::CubicOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "CubicOut(float)");
    k = k - 1.0f;
    return ((k * k) * k) + 1.0f;
}

// public static float ElasticIn(float k) [static] :1227
float EasingFunctions::ElasticIn(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "ElasticIn(float)");

    if (k == 0.0f)
        return 0.0f;

    if (k == 1.0f)
        return 1.0f;

    k = k - 1.0f;
    return -::g::Uno::Math::Pow1(2.0f, 10.0f * k) * ::g::Uno::Math::Sin1(((k - 0.1f) * 6.28318548f) * 2.5f);
}

// public static float ElasticInOut(float k) [static] :1249
float EasingFunctions::ElasticInOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "ElasticInOut(float)");

    if (k == 0.0f)
        return 0.0f;

    if (k == 1.0f)
        return 1.0f;

    k = (k * 2.0f) - 1.0f;

    if (k < 0.0f)
        return (-0.5f * ::g::Uno::Math::Pow1(2.0f, 10.0f * k)) * ::g::Uno::Math::Sin1(((k - 0.1f) * 6.28318548f) * 2.5f);

    return ((::g::Uno::Math::Pow1(2.0f, -10.0f * k) * ::g::Uno::Math::Sin1(((k - 0.1f) * 6.28318548f) * 2.5f)) * 0.5f) + 1.0f;
}

// public static float ElasticOut(float k) [static] :1238
float EasingFunctions::ElasticOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "ElasticOut(float)");

    if (k == 0.0f)
        return 0.0f;

    if (k == 1.0f)
        return 1.0f;

    return (::g::Uno::Math::Pow1(2.0f, -10.0f * k) * ::g::Uno::Math::Sin1(((k - 0.1f) * 6.28318548f) * 2.5f)) + 1.0f;
}

// public static float ExponentialIn(float k) [static] :1182
float EasingFunctions::ExponentialIn(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "ExponentialIn(float)");
    return (k == 0.0f) ? 0.0f : ::g::Uno::Math::Pow1(1024.0f, k - 1.0f);
}

// public static float ExponentialInOut(float k) [static] :1192
float EasingFunctions::ExponentialInOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "ExponentialInOut(float)");

    if (k == 0.0f)
        return 0.0f;

    if (k == 1.0f)
        return 1.0f;

    k = k * 2.0f;

    if (k < 1.0f)
        return 0.5f * ::g::Uno::Math::Pow1(1024.0f, k - 1.0f);

    return 0.5f * (-::g::Uno::Math::Pow1(2.0f, -10.0f * (k - 1.0f)) + 2.0f);
}

// public static float ExponentialOut(float k) [static] :1187
float EasingFunctions::ExponentialOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "ExponentialOut(float)");
    return (k == 1.0f) ? 1.0f : 1.0f - ::g::Uno::Math::Pow1(2.0f, -10.0f * k);
}

// public static Fuse.Animations.EasingFunction FromEasing(Fuse.Animations.Easing e) [static] :1028
uDelegate* EasingFunctions::FromEasing(int e)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "FromEasing(Fuse.Animations.Easing)");

    switch (e)
    {
        case 0:
            return uDelegate::New(::TYPES[58/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__Linear_fn);
        case 1:
            return uDelegate::New(::TYPES[58/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuadraticIn_fn);
        case 2:
            return uDelegate::New(::TYPES[58/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuadraticOut_fn);
        case 3:
            return uDelegate::New(::TYPES[58/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuadraticInOut_fn);
        case 4:
            return uDelegate::New(::TYPES[58/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__CubicIn_fn);
        case 5:
            return uDelegate::New(::TYPES[58/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__CubicOut_fn);
        case 6:
            return uDelegate::New(::TYPES[58/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__CubicInOut_fn);
        case 7:
            return uDelegate::New(::TYPES[58/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuarticIn_fn);
        case 8:
            return uDelegate::New(::TYPES[58/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuarticOut_fn);
        case 9:
            return uDelegate::New(::TYPES[58/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuarticInOut_fn);
        case 10:
            return uDelegate::New(::TYPES[58/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuinticIn_fn);
        case 11:
            return uDelegate::New(::TYPES[58/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuinticOut_fn);
        case 12:
            return uDelegate::New(::TYPES[58/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__QuinticInOut_fn);
        case 13:
            return uDelegate::New(::TYPES[58/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__SinusoidalIn_fn);
        case 14:
            return uDelegate::New(::TYPES[58/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__SinusoidalOut_fn);
        case 15:
            return uDelegate::New(::TYPES[58/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__SinusoidalInOut_fn);
        case 16:
            return uDelegate::New(::TYPES[58/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__ExponentialIn_fn);
        case 17:
            return uDelegate::New(::TYPES[58/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__ExponentialOut_fn);
        case 18:
            return uDelegate::New(::TYPES[58/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__ExponentialInOut_fn);
        case 19:
            return uDelegate::New(::TYPES[58/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__CircularIn_fn);
        case 20:
            return uDelegate::New(::TYPES[58/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__CircularOut_fn);
        case 21:
            return uDelegate::New(::TYPES[58/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__CircularInOut_fn);
        case 22:
            return uDelegate::New(::TYPES[58/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__ElasticIn_fn);
        case 23:
            return uDelegate::New(::TYPES[58/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__ElasticOut_fn);
        case 24:
            return uDelegate::New(::TYPES[58/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__ElasticInOut_fn);
        case 25:
            return uDelegate::New(::TYPES[58/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__BackIn_fn);
        case 26:
            return uDelegate::New(::TYPES[58/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__BackOut_fn);
        case 27:
            return uDelegate::New(::TYPES[58/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__BackInOut_fn);
        case 28:
            return uDelegate::New(::TYPES[58/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__BounceIn_fn);
        case 29:
            return uDelegate::New(::TYPES[58/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__BounceOut_fn);
        case 30:
            return uDelegate::New(::TYPES[58/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__BounceInOut_fn);
        default:
            return uDelegate::New(::TYPES[58/*Fuse.Animations.EasingFunction*/], (void*)EasingFunctions__Linear_fn);
    }
}

// public static float Linear(float k) [static] :1078
float EasingFunctions::Linear(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "Linear(float)");
    return k;
}

// public static float QuadraticIn(float k) [static] :1083
float EasingFunctions::QuadraticIn(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "QuadraticIn(float)");
    return k * k;
}

// public static float QuadraticInOut(float k) [static] :1093
float EasingFunctions::QuadraticInOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "QuadraticInOut(float)");
    k = k * 2.0f;

    if (k < 1.0f)
        return (0.5f * k) * k;

    k = k - 1.0f;
    return -0.5f * ((k * (k - 2.0f)) - 1.0f);
}

// public static float QuadraticOut(float k) [static] :1088
float EasingFunctions::QuadraticOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "QuadraticOut(float)");
    return k * (2.0f - k);
}

// public static float QuarticIn(float k) [static] :1126
float EasingFunctions::QuarticIn(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "QuarticIn(float)");
    return ((k * k) * k) * k;
}

// public static float QuarticInOut(float k) [static] :1137
float EasingFunctions::QuarticInOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "QuarticInOut(float)");
    k = k * 2.0f;

    if (k < 1.0f)
        return (((0.5f * k) * k) * k) * k;

    k = k - 2.0f;
    return -0.5f * ((((k * k) * k) * k) - 2.0f);
}

// public static float QuarticOut(float k) [static] :1131
float EasingFunctions::QuarticOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "QuarticOut(float)");
    k = k - 1.0f;
    return 1.0f - (((k * k) * k) * k);
}

// public static float QuinticIn(float k) [static] :1146
float EasingFunctions::QuinticIn(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "QuinticIn(float)");
    return (((k * k) * k) * k) * k;
}

// public static float QuinticInOut(float k) [static] :1157
float EasingFunctions::QuinticInOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "QuinticInOut(float)");
    k = k * 2.0f;

    if (k < 1.0f)
        return ((((0.5f * k) * k) * k) * k) * k;

    k = k - 2.0f;
    return 0.5f * (((((k * k) * k) * k) * k) + 2.0f);
}

// public static float QuinticOut(float k) [static] :1151
float EasingFunctions::QuinticOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "QuinticOut(float)");
    k = k - 1.0f;
    return ((((k * k) * k) * k) * k) + 1.0f;
}

// public static float SinusoidalIn(float k) [static] :1167
float EasingFunctions::SinusoidalIn(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "SinusoidalIn(float)");
    return 1.0f - ::g::Uno::Math::Cos1((k * 3.14159274f) / 2.0f);
}

// public static float SinusoidalInOut(float k) [static] :1177
float EasingFunctions::SinusoidalInOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "SinusoidalInOut(float)");
    return 0.5f * (1.0f - ::g::Uno::Math::Cos1(3.14159274f * k));
}

// public static float SinusoidalOut(float k) [static] :1172
float EasingFunctions::SinusoidalOut(float k)
{
    uStackFrame __("Fuse.Animations.EasingFunctions", "SinusoidalOut(float)");
    return ::g::Uno::Math::Sin1((k * 3.14159274f) / 2.0f);
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#9
// -------------------------------------------------------------

// internal sealed class EasingTrack :1332
// {
// static EasingTrack() :1332
static void EasingTrack__cctor__fn(uType* __type)
{
    EasingTrack::Singleton_ = EasingTrack::New1();
}

EasingTrack_type* EasingTrack_typeof()
{
    static uSStrong<EasingTrack_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(EasingTrack);
    options.TypeSize = sizeof(EasingTrack_type);
    type = (EasingTrack_type*)uClassType::New("Fuse.Animations.EasingTrack", options);
    type->fp_ctor_ = (void*)EasingTrack__New1_fn;
    type->fp_cctor_ = EasingTrack__cctor__fn;
    type->interface2.fp_GetDuration = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*, double*))EasingTrack__FuseAnimationsTrackProviderGetDuration_fn;
    type->interface2.fp_GetAnimatorVariant = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*))EasingTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn;
    type->interface0.fp_GetSeekProgress = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, ::g::Uno::Float4*, double*, int*))EasingTrack__FuseAnimationsContinuousTrackProviderGetSeekProgress_fn;
    type->interface0.fp_GetSeekTime = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, ::g::Uno::Float4*, double*, int*))EasingTrack__FuseAnimationsContinuousTrackProviderGetSeekTime_fn;
    ::TYPES[58] = ::g::Fuse::Animations::EasingFunction_typeof();
    ::TYPES[65] = ::g::Fuse::Animations::TrackAnimatorState_typeof();
    ::TYPES[32] = ::g::Uno::Float_typeof();
    ::TYPES[13] = ::g::Uno::Double_typeof();
    ::TYPES[50] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[62] = ::g::Fuse::Animations::SeekResult_typeof();
    ::TYPES[15] = ::g::Uno::Int_typeof();
    ::TYPES[66] = ::g::Fuse::Animations::ContinuousTrackProvider_typeof();
    type->SetInterfaces(
        ::g::Fuse::Animations::ContinuousTrackProvider_typeof(), offsetof(EasingTrack_type, interface0),
        ::g::Fuse::Animations::ITrackProvider_typeof(), offsetof(EasingTrack_type, interface1),
        ::g::Fuse::Animations::TrackProvider_typeof(), offsetof(EasingTrack_type, interface2));
    type->SetFields(0,
        EasingTrack_typeof(), (uintptr_t)&::g::Fuse::Animations::EasingTrack::Singleton_, uFieldFlagsStatic);
    return type;
}

// public generated EasingTrack() :1332
void EasingTrack__ctor__fn(EasingTrack* __this)
{
    __this->ctor_();
}

// private Fuse.Animations.SeekResult Fuse.Animations.ContinuousTrackProvider.GetSeekProgress(Fuse.Animations.TrackAnimatorState tas, double progress, double interval, Fuse.Animations.SeekDirection dir, float4& value, double& strength) :1347
void EasingTrack__FuseAnimationsContinuousTrackProviderGetSeekProgress_fn(EasingTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* progress, double* interval, int* dir, ::g::Uno::Float4* value, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.EasingTrack", "Fuse.Animations.ContinuousTrackProvider.GetSeekProgress(Fuse.Animations.TrackAnimatorState,double,double,Fuse.Animations.SeekDirection,float4&,double&)");
    double progress_ = *progress;
    float ret2;
    int dir_ = *dir;
    progress_ = ::g::Uno::Math::Clamp(progress_, 0.0, 1.0);
    float ease = (uPtr(::g::Fuse::Animations::EasingFunctions::FromEasing(uPtr(tas)->Easing()))->Invoke(&ret2, 1, uCRef((float)progress_)), ret2);
    *strength = (double)ease;
    *value = uPtr(tas->Animator)->_vectorValue;
    return *__retval = (((dir_ == 0) ? progress_ >= 1.0 : progress_ <= 0.0) ? 1 : 0) | 2, void();
}

// private Fuse.Animations.SeekResult Fuse.Animations.ContinuousTrackProvider.GetSeekTime(Fuse.Animations.TrackAnimatorState tas, double elapsed, double interval, Fuse.Animations.SeekDirection dir, float4& value, double& strength) :1361
void EasingTrack__FuseAnimationsContinuousTrackProviderGetSeekTime_fn(EasingTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* elapsed, double* interval, int* dir, ::g::Uno::Float4* value, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.EasingTrack", "Fuse.Animations.ContinuousTrackProvider.GetSeekTime(Fuse.Animations.TrackAnimatorState,double,double,Fuse.Animations.SeekDirection,float4&,double&)");
    int dir_ = *dir;
    double elapsed_ = *elapsed;
    double interval_ = *interval;
    double duration = uPtr(tas)->Duration();
    float progress;

    if (duration < 9.9999997473787516e-06)
        progress = (float)(((dir_ == 0) ? elapsed_ >= -9.9999997473787516e-06 : elapsed_ > 9.9999997473787516e-06) ? 1 : 0);
    else
        progress = (float)(elapsed_ / duration);

    return *__retval = ::g::Fuse::Animations::ContinuousTrackProvider::GetSeekProgress(uInterface(uPtr(uAs<uObject*>(__this, ::TYPES[66/*Fuse.Animations.ContinuousTrackProvider*/])), ::TYPES[66/*Fuse.Animations.ContinuousTrackProvider*/]), tas, (double)progress, interval_, dir_, value, strength), void();
}

// private Fuse.Animations.AnimatorVariant Fuse.Animations.TrackProvider.GetAnimatorVariant(Fuse.Animations.TrackAnimator ta) :1342
void EasingTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn(EasingTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* __retval)
{
    uStackFrame __("Fuse.Animations.EasingTrack", "Fuse.Animations.TrackProvider.GetAnimatorVariant(Fuse.Animations.TrackAnimator)");
    return *__retval = uPtr(ta)->HasBack() ? 2 : 0, void();
}

// private double Fuse.Animations.TrackProvider.GetDuration(Fuse.Animations.TrackAnimator ta, Fuse.Animations.AnimationVariant variant) :1337
void EasingTrack__FuseAnimationsTrackProviderGetDuration_fn(EasingTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* variant, double* __retval)
{
    uStackFrame __("Fuse.Animations.EasingTrack", "Fuse.Animations.TrackProvider.GetDuration(Fuse.Animations.TrackAnimator,Fuse.Animations.AnimationVariant)");
    int variant_ = *variant;
    return *__retval = ((variant_ == 1) && uPtr(ta)->HasBack()) ? uPtr(ta)->DurationBack() : uPtr(ta)->Duration(), void();
}

// public generated EasingTrack New() :1332
void EasingTrack__New1_fn(EasingTrack** __retval)
{
    *__retval = EasingTrack::New1();
}

uSStrong<EasingTrack*> EasingTrack::Singleton_;

// public generated EasingTrack() [instance] :1332
void EasingTrack::ctor_()
{
}

// public generated EasingTrack New() [static] :1332
EasingTrack* EasingTrack::New1()
{
    EasingTrack* obj1 = (EasingTrack*)uNew(EasingTrack_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#11
// --------------------------------------------------------------

// internal sealed class FastMatrixTransform :1839
// {
::g::Fuse::Transform_type* FastMatrixTransform_typeof()
{
    static uSStrong< ::g::Fuse::Transform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(FastMatrixTransform);
    options.TypeSize = sizeof(::g::Fuse::Transform_type);
    type = (::g::Fuse::Transform_type*)uClassType::New("Fuse.Animations.FastMatrixTransform", options);
    type->SetBase(::g::Fuse::Transform_typeof());
    type->fp_ctor_ = (void*)FastMatrixTransform__New1_fn;
    type->fp_AppendTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*))FastMatrixTransform__AppendTo_fn;
    type->fp_get_IsFlat = (void(*)(::g::Fuse::Transform*, bool*))FastMatrixTransform__get_IsFlat_fn;
    type->fp_PrependTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*))FastMatrixTransform__PrependTo_fn;
    ::TYPES[28] = ::g::Fuse::FastMatrix_typeof();
    ::TYPES[27] = ::g::Uno::Float4x4_typeof();
    type->SetFields(4,
        ::g::Fuse::FastMatrix_typeof(), offsetof(::g::Fuse::Animations::FastMatrixTransform, Matrix), 0);
    return type;
}

// public generated FastMatrixTransform() :1839
void FastMatrixTransform__ctor_1_fn(FastMatrixTransform* __this)
{
    __this->ctor_1();
}

// public override sealed void AppendTo(Fuse.FastMatrix m, float weight) :1843
void FastMatrixTransform__AppendTo_fn(FastMatrixTransform* __this, ::g::Fuse::FastMatrix* m, float* weight)
{
    uStackFrame __("Fuse.Animations.FastMatrixTransform", "AppendTo(Fuse.FastMatrix,float)");
    uPtr(m)->AppendFastMatrix(__this->Matrix);
}

// public void Changed() :1854
void FastMatrixTransform__Changed_fn(FastMatrixTransform* __this)
{
    __this->Changed();
}

// public override sealed bool get_IsFlat() :1861
void FastMatrixTransform__get_IsFlat_fn(FastMatrixTransform* __this, bool* __retval)
{
    uStackFrame __("Fuse.Animations.FastMatrixTransform", "get_IsFlat()");
    ::g::Uno::Float4x4 m = uPtr(__this->Matrix)->Matrix();
    bool q = (((((::g::Uno::Math::Abs1(m.M13) < 1e-05f) && (::g::Uno::Math::Abs1(m.M23) < 1e-05f)) && (::g::Uno::Math::Abs1(m.M43) < 1e-05f)) && (::g::Uno::Math::Abs1(m.M14) < 1e-05f)) && (::g::Uno::Math::Abs1(m.M24) < 1e-05f)) && (::g::Uno::Math::Abs1(m.M34) < 1e-05f);
    return *__retval = q, void();
}

// public generated FastMatrixTransform New() :1839
void FastMatrixTransform__New1_fn(FastMatrixTransform** __retval)
{
    *__retval = FastMatrixTransform::New1();
}

// public override sealed void PrependTo(Fuse.FastMatrix m) :1849
void FastMatrixTransform__PrependTo_fn(FastMatrixTransform* __this, ::g::Fuse::FastMatrix* m)
{
    uStackFrame __("Fuse.Animations.FastMatrixTransform", "PrependTo(Fuse.FastMatrix)");
    uPtr(m)->PrependFastMatrix(__this->Matrix);
}

// public generated FastMatrixTransform() [instance] :1839
void FastMatrixTransform::ctor_1()
{
    uStackFrame __("Fuse.Animations.FastMatrixTransform", ".ctor()");
    Matrix = ::g::Fuse::FastMatrix::Identity();
    ctor_();
}

// public void Changed() [instance] :1854
void FastMatrixTransform::Changed()
{
    uStackFrame __("Fuse.Animations.FastMatrixTransform", "Changed()");
    OnMatrixChanged();
}

// public generated FastMatrixTransform New() [static] :1839
FastMatrixTransform* FastMatrixTransform::New1()
{
    FastMatrixTransform* obj1 = (FastMatrixTransform*)uNew(FastMatrixTransform_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#11
// --------------------------------------------------------------

// protected struct MasterBase<T>.GFWResult :1781
// {
uStructType* MasterBase__GFWResult_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.ValueSize = sizeof(MasterBase__GFWResult);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Animations.MasterBase`1.GFWResult", options);
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::MasterBase__GFWResult, Rest), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::MasterBase__GFWResult, Full), 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#11
// --------------------------------------------------------------

// public abstract interface IMixer :1586
// {
uInterfaceType* IMixer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IMixer", 0, 1);
    type->Reflection.SetFunctions(2,
        new uFunction("Register`1", type, NULL, offsetof(IMixer, fp_Register), false, ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(type->U(0)), 2, ::g::Uno::UX::Property_typeof()->MakeType(type->U(0)), ::g::Fuse::Animations::MixOp_typeof()),
        new uFunction("RegisterTransform", NULL, NULL, offsetof(IMixer, fp_RegisterTransform), false, ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(::g::Fuse::Transform_typeof()), 3, ::g::Fuse::Node_typeof(), ::g::Fuse::Animations::MixOp_typeof(), ::g::Uno::Int_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#11
// --------------------------------------------------------------

// public abstract interface IMixerHandle<T> :1592
// {
uInterfaceType* IMixerHandle_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IMixerHandle`1", 1, 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_RestValue", NULL, NULL, offsetof(IMixerHandle, fp_get_RestValue), false, type->T(0), 0),
        new uFunction("Set", NULL, NULL, offsetof(IMixerHandle, fp_Set), false, uVoid_typeof(), 2, type->T(0), ::g::Uno::Float_typeof()),
        new uFunction("Unregister", NULL, NULL, offsetof(IMixerHandle, fp_Unregister), false, uVoid_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#11
// --------------------------------------------------------------

// internal abstract interface IMixerMaster :1599
// {
uInterfaceType* IMixerMaster_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IMixerMaster", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#16
// --------------------------------------------------------------

// public abstract interface IResize :2622
// {
uInterfaceType* IResize_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IResize", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("SetSize", NULL, NULL, offsetof(IResize, fp_SetSize), false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#16
// --------------------------------------------------------------

// public abstract interface IResizeMode :2627
// {
uInterfaceType* IResizeMode_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IResizeMode", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("GetSizeChange", NULL, NULL, offsetof(IResizeMode, fp_GetSizeChange), false, ::g::Uno::Bool_typeof(), 4, ::g::Fuse::Node_typeof(), ::g::Fuse::Node_typeof(), ::g::Uno::Float2_typeof()->ByRef(), ::g::Uno::Float2_typeof()->ByRef()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#19
// --------------------------------------------------------------

// public abstract interface ITrackProvider :3043
// {
uInterfaceType* ITrackProvider_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.ITrackProvider", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#10
// --------------------------------------------------------------

// public sealed class Keyframe :1387
// {
uType* Keyframe_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.ObjectSize = sizeof(Keyframe);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Animations.Keyframe", options);
    type->fp_ctor_ = (void*)Keyframe__New1_fn;
    ::TYPES[67] = ::g::Uno::Collections::ICollection_typeof()->MakeType(Keyframe_typeof());
    ::TYPES[63] = ::g::Uno::Collections::IList_typeof()->MakeType(Keyframe_typeof());
    ::TYPES[7] = ::g::Uno::Bool_typeof();
    ::TYPES[38] = ::g::Uno::Float4_typeof();
    ::TYPES[34] = ::g::Uno::Float2_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Keyframe, _hasTangentIn), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Keyframe, _hasTangentOut), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Keyframe, _hasTime), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Keyframe, _hasTimeDelta), 0,
        uObject_typeof(), offsetof(::g::Fuse::Animations::Keyframe, _objectValue), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Animations::Keyframe, _tangentIn), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Animations::Keyframe, _tangentOut), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::Keyframe, _time), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::Keyframe, _timeDelta), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Animations::Keyframe, _value), 0);
    type->Reflection.SetFunctions(31,
        new uFunction("get_DegreesX", NULL, (void*)Keyframe__get_DegreesX_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesX", NULL, (void*)Keyframe__set_DegreesX_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DegreesXY", NULL, (void*)Keyframe__get_DegreesXY_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_DegreesXY", NULL, (void*)Keyframe__set_DegreesXY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_DegreesY", NULL, (void*)Keyframe__get_DegreesY_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesY", NULL, (void*)Keyframe__set_DegreesY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DegreesZ", NULL, (void*)Keyframe__get_DegreesZ_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesZ", NULL, (void*)Keyframe__set_DegreesZ_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Keyframe__New1_fn, 0, true, Keyframe_typeof(), 0),
        new uFunction("get_ObjectValue", NULL, (void*)Keyframe__get_ObjectValue_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_ObjectValue", NULL, (void*)Keyframe__set_ObjectValue_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("get_TangentIn", NULL, (void*)Keyframe__get_TangentIn_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_TangentIn", NULL, (void*)Keyframe__set_TangentIn_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_TangentOut", NULL, (void*)Keyframe__get_TangentOut_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_TangentOut", NULL, (void*)Keyframe__set_TangentOut_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_Time", NULL, (void*)Keyframe__get_Time_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Time", NULL, (void*)Keyframe__set_Time_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_TimeDelta", NULL, (void*)Keyframe__get_TimeDelta_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_TimeDelta", NULL, (void*)Keyframe__set_TimeDelta_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Value", NULL, (void*)Keyframe__get_Value_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)Keyframe__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_X", NULL, (void*)Keyframe__get_X_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_X", NULL, (void*)Keyframe__set_X_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_XY", NULL, (void*)Keyframe__get_XY_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_XY", NULL, (void*)Keyframe__set_XY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_XYZ", NULL, (void*)Keyframe__get_XYZ_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("set_XYZ", NULL, (void*)Keyframe__set_XYZ_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("get_Y", NULL, (void*)Keyframe__get_Y_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Y", NULL, (void*)Keyframe__set_Y_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Z", NULL, (void*)Keyframe__get_Z_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Z", NULL, (void*)Keyframe__set_Z_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}

// public generated Keyframe() :1387
void Keyframe__ctor__fn(Keyframe* __this)
{
    __this->ctor_();
}

// internal static double CompleteFrames(Uno.Collections.IList<Fuse.Animations.Keyframe> frames, float tension, float bias, float continuity) :1518
void Keyframe__CompleteFrames_fn(uObject* frames, float* tension, float* bias, float* continuity, double* __retval)
{
    *__retval = Keyframe::CompleteFrames(frames, *tension, *bias, *continuity);
}

// public float get_DegreesX() :1435
void Keyframe__get_DegreesX_fn(Keyframe* __this, float* __retval)
{
    *__retval = __this->DegreesX();
}

// public void set_DegreesX(float value) :1436
void Keyframe__set_DegreesX_fn(Keyframe* __this, float* value)
{
    __this->DegreesX(*value);
}

// public float2 get_DegreesXY() :1453
void Keyframe__get_DegreesXY_fn(Keyframe* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->DegreesXY();
}

// public void set_DegreesXY(float2 value) :1454
void Keyframe__set_DegreesXY_fn(Keyframe* __this, ::g::Uno::Float2* value)
{
    __this->DegreesXY(*value);
}

// public float get_DegreesY() :1441
void Keyframe__get_DegreesY_fn(Keyframe* __this, float* __retval)
{
    *__retval = __this->DegreesY();
}

// public void set_DegreesY(float value) :1442
void Keyframe__set_DegreesY_fn(Keyframe* __this, float* value)
{
    __this->DegreesY(*value);
}

// public float get_DegreesZ() :1447
void Keyframe__get_DegreesZ_fn(Keyframe* __this, float* __retval)
{
    *__retval = __this->DegreesZ();
}

// public void set_DegreesZ(float value) :1448
void Keyframe__set_DegreesZ_fn(Keyframe* __this, float* value)
{
    __this->DegreesZ(*value);
}

// private static void KochanekBartelTangent(float4 pa, float4 pb, float4 pc, float4 pd, float t, float b, float c, float4& tangentIn, float4& tangentOut) :1559
void Keyframe__KochanekBartelTangent_fn(::g::Uno::Float4* pa, ::g::Uno::Float4* pb, ::g::Uno::Float4* pc, ::g::Uno::Float4* pd, float* t, float* b, float* c, ::g::Uno::Float4* tangentIn, ::g::Uno::Float4* tangentOut)
{
    Keyframe::KochanekBartelTangent(*pa, *pb, *pc, *pd, *t, *b, *c, tangentIn, tangentOut);
}

// public generated Keyframe New() :1387
void Keyframe__New1_fn(Keyframe** __retval)
{
    *__retval = Keyframe::New1();
}

// public object get_ObjectValue() :1399
void Keyframe__get_ObjectValue_fn(Keyframe* __this, uObject** __retval)
{
    *__retval = __this->ObjectValue();
}

// public void set_ObjectValue(object value) :1400
void Keyframe__set_ObjectValue_fn(Keyframe* __this, uObject* value)
{
    __this->ObjectValue(value);
}

// public float4 get_TangentIn() :1486
void Keyframe__get_TangentIn_fn(Keyframe* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->TangentIn();
}

// public void set_TangentIn(float4 value) :1487
void Keyframe__set_TangentIn_fn(Keyframe* __this, ::g::Uno::Float4* value)
{
    __this->TangentIn(*value);
}

// public float4 get_TangentOut() :1496
void Keyframe__get_TangentOut_fn(Keyframe* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->TangentOut();
}

// public void set_TangentOut(float4 value) :1497
void Keyframe__set_TangentOut_fn(Keyframe* __this, ::g::Uno::Float4* value)
{
    __this->TangentOut(*value);
}

// public double get_Time() :1474
void Keyframe__get_Time_fn(Keyframe* __this, double* __retval)
{
    *__retval = __this->Time();
}

// public void set_Time(double value) :1475
void Keyframe__set_Time_fn(Keyframe* __this, double* value)
{
    __this->Time(*value);
}

// public double get_TimeDelta() :1462
void Keyframe__get_TimeDelta_fn(Keyframe* __this, double* __retval)
{
    *__retval = __this->TimeDelta();
}

// public void set_TimeDelta(double value) :1463
void Keyframe__set_TimeDelta_fn(Keyframe* __this, double* value)
{
    __this->TimeDelta(*value);
}

// public float4 get_Value() :1392
void Keyframe__get_Value_fn(Keyframe* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(float4 value) :1393
void Keyframe__set_Value_fn(Keyframe* __this, ::g::Uno::Float4* value)
{
    __this->Value(*value);
}

// public float get_X() :1405
void Keyframe__get_X_fn(Keyframe* __this, float* __retval)
{
    *__retval = __this->X();
}

// public void set_X(float value) :1406
void Keyframe__set_X_fn(Keyframe* __this, float* value)
{
    __this->X(*value);
}

// public float2 get_XY() :1423
void Keyframe__get_XY_fn(Keyframe* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->XY();
}

// public void set_XY(float2 value) :1424
void Keyframe__set_XY_fn(Keyframe* __this, ::g::Uno::Float2* value)
{
    __this->XY(*value);
}

// public float3 get_XYZ() :1429
void Keyframe__get_XYZ_fn(Keyframe* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->XYZ();
}

// public void set_XYZ(float3 value) :1430
void Keyframe__set_XYZ_fn(Keyframe* __this, ::g::Uno::Float3* value)
{
    __this->XYZ(*value);
}

// public float get_Y() :1411
void Keyframe__get_Y_fn(Keyframe* __this, float* __retval)
{
    *__retval = __this->Y();
}

// public void set_Y(float value) :1412
void Keyframe__set_Y_fn(Keyframe* __this, float* value)
{
    __this->Y(*value);
}

// public float get_Z() :1417
void Keyframe__get_Z_fn(Keyframe* __this, float* __retval)
{
    *__retval = __this->Z();
}

// public void set_Z(float value) :1418
void Keyframe__set_Z_fn(Keyframe* __this, float* value)
{
    __this->Z(*value);
}

// public generated Keyframe() [instance] :1387
void Keyframe::ctor_()
{
}

// public float get_DegreesX() [instance] :1435
float Keyframe::DegreesX()
{
    uStackFrame __("Fuse.Animations.Keyframe", "get_DegreesX()");
    return ::g::Uno::Math::RadiansToDegrees1(_value.X);
}

// public void set_DegreesX(float value) [instance] :1436
void Keyframe::DegreesX(float value)
{
    uStackFrame __("Fuse.Animations.Keyframe", "set_DegreesX(float)");
    _value.X = ::g::Uno::Math::DegreesToRadians1(value);
}

// public float2 get_DegreesXY() [instance] :1453
::g::Uno::Float2 Keyframe::DegreesXY()
{
    uStackFrame __("Fuse.Animations.Keyframe", "get_DegreesXY()");
    return ::g::Uno::Float2__New2(::g::Uno::Math::RadiansToDegrees1(_value.X), ::g::Uno::Math::RadiansToDegrees1(_value.Y));
}

// public void set_DegreesXY(float2 value) [instance] :1454
void Keyframe::DegreesXY(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Animations.Keyframe", "set_DegreesXY(float2)");
    _value = ::g::Uno::Float4__New2(::g::Uno::Math::DegreesToRadians1(value.X), ::g::Uno::Math::DegreesToRadians1(value.Y), _value.Z, _value.W);
}

// public float get_DegreesY() [instance] :1441
float Keyframe::DegreesY()
{
    uStackFrame __("Fuse.Animations.Keyframe", "get_DegreesY()");
    return ::g::Uno::Math::RadiansToDegrees1(_value.Y);
}

// public void set_DegreesY(float value) [instance] :1442
void Keyframe::DegreesY(float value)
{
    uStackFrame __("Fuse.Animations.Keyframe", "set_DegreesY(float)");
    _value.Y = ::g::Uno::Math::DegreesToRadians1(value);
}

// public float get_DegreesZ() [instance] :1447
float Keyframe::DegreesZ()
{
    uStackFrame __("Fuse.Animations.Keyframe", "get_DegreesZ()");
    return ::g::Uno::Math::RadiansToDegrees1(_value.Z);
}

// public void set_DegreesZ(float value) [instance] :1448
void Keyframe::DegreesZ(float value)
{
    uStackFrame __("Fuse.Animations.Keyframe", "set_DegreesZ(float)");
    _value.Z = ::g::Uno::Math::DegreesToRadians1(value);
}

// public object get_ObjectValue() [instance] :1399
uObject* Keyframe::ObjectValue()
{
    uStackFrame __("Fuse.Animations.Keyframe", "get_ObjectValue()");
    return _objectValue;
}

// public void set_ObjectValue(object value) [instance] :1400
void Keyframe::ObjectValue(uObject* value)
{
    uStackFrame __("Fuse.Animations.Keyframe", "set_ObjectValue(object)");
    _objectValue = value;
}

// public float4 get_TangentIn() [instance] :1486
::g::Uno::Float4 Keyframe::TangentIn()
{
    uStackFrame __("Fuse.Animations.Keyframe", "get_TangentIn()");
    return _tangentIn;
}

// public void set_TangentIn(float4 value) [instance] :1487
void Keyframe::TangentIn(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Animations.Keyframe", "set_TangentIn(float4)");
    _tangentIn = value;
    _hasTangentIn = true;
}

// public float4 get_TangentOut() [instance] :1496
::g::Uno::Float4 Keyframe::TangentOut()
{
    uStackFrame __("Fuse.Animations.Keyframe", "get_TangentOut()");
    return _tangentOut;
}

// public void set_TangentOut(float4 value) [instance] :1497
void Keyframe::TangentOut(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Animations.Keyframe", "set_TangentOut(float4)");
    _tangentOut = value;
    _hasTangentOut = true;
}

// public double get_Time() [instance] :1474
double Keyframe::Time()
{
    uStackFrame __("Fuse.Animations.Keyframe", "get_Time()");
    return _time;
}

// public void set_Time(double value) [instance] :1475
void Keyframe::Time(double value)
{
    uStackFrame __("Fuse.Animations.Keyframe", "set_Time(double)");
    _time = value;
    _hasTime = true;
}

// public double get_TimeDelta() [instance] :1462
double Keyframe::TimeDelta()
{
    uStackFrame __("Fuse.Animations.Keyframe", "get_TimeDelta()");
    return _timeDelta;
}

// public void set_TimeDelta(double value) [instance] :1463
void Keyframe::TimeDelta(double value)
{
    uStackFrame __("Fuse.Animations.Keyframe", "set_TimeDelta(double)");
    _timeDelta = value;
    _hasTimeDelta = true;
}

// public float4 get_Value() [instance] :1392
::g::Uno::Float4 Keyframe::Value()
{
    uStackFrame __("Fuse.Animations.Keyframe", "get_Value()");
    return _value;
}

// public void set_Value(float4 value) [instance] :1393
void Keyframe::Value(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Animations.Keyframe", "set_Value(float4)");
    _value = value;
}

// public float get_X() [instance] :1405
float Keyframe::X()
{
    uStackFrame __("Fuse.Animations.Keyframe", "get_X()");
    return _value.X;
}

// public void set_X(float value) [instance] :1406
void Keyframe::X(float value)
{
    uStackFrame __("Fuse.Animations.Keyframe", "set_X(float)");
    _value.X = value;
}

// public float2 get_XY() [instance] :1423
::g::Uno::Float2 Keyframe::XY()
{
    uStackFrame __("Fuse.Animations.Keyframe", "get_XY()");
    ::g::Uno::Float4 ind1 = _value;
    return ::g::Uno::Float2__New2(ind1.X, ind1.Y);
}

// public void set_XY(float2 value) [instance] :1424
void Keyframe::XY(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Animations.Keyframe", "set_XY(float2)");
    _value = ::g::Uno::Float4__New6(value, _value.Z, _value.W);
}

// public float3 get_XYZ() [instance] :1429
::g::Uno::Float3 Keyframe::XYZ()
{
    uStackFrame __("Fuse.Animations.Keyframe", "get_XYZ()");
    ::g::Uno::Float4 ind2 = _value;
    return ::g::Uno::Float3__New2(ind2.X, ind2.Y, ind2.Z);
}

// public void set_XYZ(float3 value) [instance] :1430
void Keyframe::XYZ(::g::Uno::Float3 value)
{
    uStackFrame __("Fuse.Animations.Keyframe", "set_XYZ(float3)");
    _value = ::g::Uno::Float4__New8(value, _value.W);
}

// public float get_Y() [instance] :1411
float Keyframe::Y()
{
    uStackFrame __("Fuse.Animations.Keyframe", "get_Y()");
    return _value.Y;
}

// public void set_Y(float value) [instance] :1412
void Keyframe::Y(float value)
{
    uStackFrame __("Fuse.Animations.Keyframe", "set_Y(float)");
    _value.Y = value;
}

// public float get_Z() [instance] :1417
float Keyframe::Z()
{
    uStackFrame __("Fuse.Animations.Keyframe", "get_Z()");
    return _value.Z;
}

// public void set_Z(float value) [instance] :1418
void Keyframe::Z(float value)
{
    uStackFrame __("Fuse.Animations.Keyframe", "set_Z(float)");
    _value.Z = value;
}

// internal static double CompleteFrames(Uno.Collections.IList<Fuse.Animations.Keyframe> frames, float tension, float bias, float continuity) [static] :1518
double Keyframe::CompleteFrames(uObject* frames, float tension, float bias, float continuity)
{
    uStackFrame __("Fuse.Animations.Keyframe", "CompleteFrames(Uno.Collections.IList<Fuse.Animations.Keyframe>,float,float,float)");
    Keyframe* ret4;
    Keyframe* ret5;
    Keyframe* ret6;
    Keyframe* ret7;
    double time = 0.0;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(frames), ::TYPES[67/*Uno.Collections.ICollection<Fuse.Animations.Keyframe>*/])); ++i)
    {
        Keyframe* prev = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(frames), ::TYPES[63/*Uno.Collections.IList<Fuse.Animations.Keyframe>*/]), uCRef<int>(::g::Uno::Math::Max8(0, i - 1)), &ret4), ret4);
        Keyframe* frame = (::g::Uno::Collections::IList::get_Item_ex(uInterface(frames, ::TYPES[63/*Uno.Collections.IList<Fuse.Animations.Keyframe>*/]), uCRef<int>(i), &ret5), ret5);
        Keyframe* next = (::g::Uno::Collections::IList::get_Item_ex(uInterface(frames, ::TYPES[63/*Uno.Collections.IList<Fuse.Animations.Keyframe>*/]), uCRef<int>(::g::Uno::Math::Min8(::g::Uno::Collections::ICollection::Count(uInterface(frames, ::TYPES[67/*Uno.Collections.ICollection<Fuse.Animations.Keyframe>*/])) - 1, i + 1)), &ret6), ret6);
        Keyframe* next2 = (::g::Uno::Collections::IList::get_Item_ex(uInterface(frames, ::TYPES[63/*Uno.Collections.IList<Fuse.Animations.Keyframe>*/]), uCRef<int>(::g::Uno::Math::Min8(::g::Uno::Collections::ICollection::Count(uInterface(frames, ::TYPES[67/*Uno.Collections.ICollection<Fuse.Animations.Keyframe>*/])) - 1, i + 2)), &ret7), ret7);

        if (uPtr(frame)->_hasTime)
        {
            uPtr(frame)->_timeDelta = (uPtr(frame)->_time - time);
            time = frame->_time;
        }
        else if (uPtr(frame)->_hasTimeDelta)
        {
            time = time + uPtr(frame)->_timeDelta;
            frame->_time = time;
        }
        else
        {
            uPtr(frame)->_time = time;
            frame->_timeDelta = 0.0;
        }

        ::g::Uno::Float4 ta;
        ::g::Uno::Float4 tb;
        Keyframe::KochanekBartelTangent(uPtr(prev)->Value(), uPtr(frame)->Value(), uPtr(next)->Value(), uPtr(next2)->Value(), tension, bias, continuity, &ta, &tb);

        if ((i > 0) && !frame->_hasTangentOut)
            frame->_tangentOut = ta;

        if (!next->_hasTangentIn)
            next->_tangentIn = tb;
    }

    return time;
}

// private static void KochanekBartelTangent(float4 pa, float4 pb, float4 pc, float4 pd, float t, float b, float c, float4& tangentIn, float4& tangentOut) [static] :1559
void Keyframe::KochanekBartelTangent(::g::Uno::Float4 pa, ::g::Uno::Float4 pb, ::g::Uno::Float4 pc, ::g::Uno::Float4 pd, float t, float b, float c, ::g::Uno::Float4* tangentIn, ::g::Uno::Float4* tangentOut)
{
    uStackFrame __("Fuse.Animations.Keyframe", "KochanekBartelTangent(float4,float4,float4,float4,float,float,float,float4&,float4&)");
    *tangentIn = ::g::Uno::Float4__op_Addition2(::g::Uno::Float4__op_Multiply((((1.0f - t) * (1.0f + b)) * (1.0f + c)) / 2.0f, ::g::Uno::Float4__op_Subtraction2(pb, pa)), ::g::Uno::Float4__op_Multiply((((1.0f - t) * (1.0f - b)) * (1.0f - c)) / 2.0f, ::g::Uno::Float4__op_Subtraction2(pc, pb)));
    *tangentOut = ::g::Uno::Float4__op_Addition2(::g::Uno::Float4__op_Multiply((((1.0f - t) * (1.0f + b)) * (1.0f - c)) / 2.0f, ::g::Uno::Float4__op_Subtraction2(pc, pb)), ::g::Uno::Float4__op_Multiply((((1.0f - t) * (1.0f - b)) * (1.0f + c)) / 2.0f, ::g::Uno::Float4__op_Subtraction2(pd, pc)));
}

// public generated Keyframe New() [static] :1387
Keyframe* Keyframe::New1()
{
    Keyframe* obj3 = (Keyframe*)uNew(Keyframe_typeof());
    obj3->ctor_();
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#18
// --------------------------------------------------------------

// public enum KeyframeInterpolation :2854
uEnumType* KeyframeInterpolation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.KeyframeInterpolation", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Linear", 0LL,
        "CatmullRom", 1LL,
        "Custom", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#19
// --------------------------------------------------------------

// internal abstract interface KeyframeTrack :3068
// {
uInterfaceType* KeyframeTrack_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.KeyframeTrack", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#11
// --------------------------------------------------------------

// internal abstract class MasterBase<T> :1706
// {
//  ~MasterBase() :1714
static void MasterBase__Finalize_fn(MasterBase* __this)
{
}

MasterBase_type* MasterBase_typeof()
{
    static uSStrong<MasterBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(MasterBase);
    options.TypeSize = sizeof(MasterBase_type);
    type = (MasterBase_type*)uClassType::New("Fuse.Animations.MasterBase`1", options);
    type->fp_Finalize = (void(*)(uObject*))MasterBase__Finalize_fn;
    type->fp_OnActive = MasterBase__OnActive_fn;
    type->fp_get_PostLayout = MasterBase__get_PostLayout_fn;
    type->interface0.fp_Complete = (void(*)(uObject*))MasterBase__Complete_fn;
    ::TYPES[20] = ::g::Uno::Collections::List_typeof();
    ::TYPES[21] = ::g::Fuse::Animations::MixerHandle_typeof();
    ::TYPES[68] = ::g::Fuse::Animations::IMixerMaster_typeof();
    ::TYPES[15] = ::g::Uno::Int_typeof();
    ::TYPES[19] = MasterBase__GFWResult_typeof();
    ::TYPES[7] = ::g::Uno::Bool_typeof();
    type->SetPrecalc(
        ::TYPES[20/*Uno.Collections.List`1*/]->MakeType(::TYPES[21/*Fuse.Animations.MixerHandle`1*/]->MakeType(type->T(0))),
        ::TYPES[21/*Fuse.Animations.MixerHandle`1*/]->MakeType(type->T(0)),
        ::TYPES[19/*Fuse.Animations.MasterBase`1.GFWResult*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(MasterBase_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::MasterBase, _inactive), 0,
        ::g::Fuse::Animations::MixerBase_typeof(), offsetof(::g::Fuse::Animations::MasterBase, _mixerBase), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::MasterBase, DirtyValue), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Animations::MixerHandle_typeof()->MakeType(type->T(0))), offsetof(::g::Fuse::Animations::MasterBase, Handles), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::MasterBase, masterAdded), 0);
    return type;
}

// protected MasterBase([Fuse.Animations.MixerBase mixerBase]) :1709
void MasterBase__ctor__fn(MasterBase* __this, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_(mixerBase);
}

// public void Complete() :1756
void MasterBase__Complete_fn(MasterBase* __this)
{
    __this->Complete();
}

// protected Fuse.Animations.MasterBase<T>.GFWResult GetFullWeight() :1787
void MasterBase__GetFullWeight_fn(MasterBase* __this, MasterBase__GFWResult* __retval)
{
    *__retval = __this->GetFullWeight();
}

// protected virtual void OnActive() :1752
void MasterBase__OnActive_fn(MasterBase* __this)
{
}

// protected virtual bool get_PostLayout() :1750
void MasterBase__get_PostLayout_fn(MasterBase* __this, bool* __retval)
{
    uStackFrame __("Fuse.Animations.MasterBase`1", "get_PostLayout()");
    return *__retval = false, void();
}

// public void Register(Fuse.Animations.MixerHandle<T> handle) :1725
void MasterBase__Register_fn(MasterBase* __this, ::g::Fuse::Animations::MixerHandle* handle)
{
    __this->Register(handle);
}

// public void Unregister(Fuse.Animations.MixerHandle<T> handle) :1745
void MasterBase__Unregister_fn(MasterBase* __this, ::g::Fuse::Animations::MixerHandle* handle)
{
    __this->Unregister(handle);
}

// protected MasterBase([Fuse.Animations.MixerBase mixerBase]) [instance] :1709
void MasterBase::ctor_(::g::Fuse::Animations::MixerBase* mixerBase)
{
    uType* __types[] = {
        __type->GetBase(MasterBase_typeof())->Precalced(0/*Uno.Collections.List<Fuse.Animations.MixerHandle<T>>*/),
        __type->GetBase(MasterBase_typeof())->Precalced(1/*Fuse.Animations.MixerHandle<T>*/),
        __type->GetBase(MasterBase_typeof())->T(0),
    };
    uStackFrame __("Fuse.Animations.MasterBase`1", ".ctor([Fuse.Animations.MixerBase])");
    Handles = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]));
    _mixerBase = mixerBase;
}

// public void Complete() [instance] :1756
void MasterBase::Complete()
{
    uType* __types[] = {
        __type->GetBase(MasterBase_typeof())->Precalced(0/*Uno.Collections.List<Fuse.Animations.MixerHandle<T>>*/),
        __type->GetBase(MasterBase_typeof())->Precalced(1/*Fuse.Animations.MixerHandle<T>*/),
        __type->GetBase(MasterBase_typeof())->T(0),
    };
    uStackFrame __("Fuse.Animations.MasterBase`1", "Complete()");

    if (uPtr(Handles)->Count() == 0)
    {
        if (masterAdded)
        {
            ::g::Fuse::Animations::Mixer::RemoveMaster((uObject*)this, PostLayout());
            masterAdded = false;
            OnInactive();
        }

        if (_mixerBase != NULL)
            uPtr(_mixerBase)->Unused((uObject*)this);

        _inactive = true;
        return;
    }

    if (DirtyValue)
    {
        OnComplete();
        DirtyValue = false;
    }
}

// protected Fuse.Animations.MasterBase<T>.GFWResult GetFullWeight() [instance] :1787
MasterBase__GFWResult MasterBase::GetFullWeight()
{
    uType* __types[] = {
        __type->GetBase(MasterBase_typeof())->Precalced(0/*Uno.Collections.List<Fuse.Animations.MixerHandle<T>>*/),
        __type->GetBase(MasterBase_typeof())->Precalced(1/*Fuse.Animations.MixerHandle<T>*/),
        __type->GetBase(MasterBase_typeof())->T(0),
        __type->GetBase(MasterBase_typeof())->Precalced(2/*Fuse.Animations.MasterBase<T>.GFWResult*/),
    };
    uStackFrame __("Fuse.Animations.MasterBase`1", "GetFullWeight()");
    MasterBase__GFWResult collection1;
    ::g::Fuse::Animations::MixerHandle* ret1;
    float fullWeight = 0.0f;
    int c = uPtr(Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::g::Fuse::Animations::MixerHandle* v = (::g::Uno::Collections::List__get_Item_fn(uPtr(Handles), uCRef<int>(i), &ret1), ret1);

        if (uPtr(v)->MixOp() == 1)
            fullWeight = fullWeight + (uPtr(v)->HasValue() ? uPtr(v)->Strength : 0.0f);
    }

    float restWeight = 1.0f - ::g::Uno::Math::Min1(fullWeight, 1.0f);
    fullWeight = ::g::Uno::Math::Max1(1.0f, fullWeight);
    collection1 = uDefault<MasterBase__GFWResult>();
    collection1.Rest = restWeight;
    collection1.Full = fullWeight;
    return collection1;
}

// public void Register(Fuse.Animations.MixerHandle<T> handle) [instance] :1725
void MasterBase::Register(::g::Fuse::Animations::MixerHandle* handle)
{
    uType* __types[] = {
        __type->GetBase(MasterBase_typeof())->Precalced(0/*Uno.Collections.List<Fuse.Animations.MixerHandle<T>>*/),
        __type->GetBase(MasterBase_typeof())->Precalced(1/*Fuse.Animations.MixerHandle<T>*/),
        __type->GetBase(MasterBase_typeof())->T(0),
    };
    uStackFrame __("Fuse.Animations.MasterBase`1", "Register(Fuse.Animations.MixerHandle<T>)");
    ::g::Fuse::Animations::MixerHandle* ret2;

    if (_inactive)
        return;

    int at = 0;

    for (; (at < uPtr(Handles)->Count()) && (uPtr(handle)->Priority() <= uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Handles), uCRef<int>(at), &ret2), ret2))->Priority()); ++at)
        ;

    ::g::Uno::Collections::List__Insert_fn(uPtr(Handles), uCRef<int>(at), handle);

    if (!masterAdded)
    {
        masterAdded = true;
        ::g::Fuse::Animations::Mixer::AddMaster((uObject*)this, PostLayout());
        OnActive();
    }
}

// public void Unregister(Fuse.Animations.MixerHandle<T> handle) [instance] :1745
void MasterBase::Unregister(::g::Fuse::Animations::MixerHandle* handle)
{
    uStackFrame __("Fuse.Animations.MasterBase`1", "Unregister(Fuse.Animations.MixerHandle<T>)");
    bool ret3;
    ::g::Uno::Collections::List__Remove_fn(uPtr(Handles), handle, &ret3);
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#11
// --------------------------------------------------------------

// internal abstract class MasterProperty<T> :1814
// {
MasterProperty_type* MasterProperty_typeof()
{
    static uSStrong<MasterProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(MasterProperty);
    options.TypeSize = sizeof(MasterProperty_type);
    type = (MasterProperty_type*)uClassType::New("Fuse.Animations.MasterProperty`1", options);
    type->SetBase(::g::Fuse::Animations::MasterBase_typeof()->MakeType(type->T(0)));
    type->fp_OnInactive = (void(*)(::g::Fuse::Animations::MasterBase*))MasterProperty__OnInactive_fn;
    type->fp_get_RestValue = (void(*)(::g::Fuse::Animations::MasterBase*, uTRef))MasterProperty__get_RestValue_fn;
    type->interface1.fp_GetPropertyObject = (void(*)(uObject*, uObject**))MasterProperty__GetPropertyObject_fn;
    type->interface0.fp_Complete = (void(*)(uObject*))::g::Fuse::Animations::MasterBase__Complete_fn;
    ::TYPES[14] = uObject_typeof();
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(MasterProperty_type, interface0),
        ::g::Fuse::Animations::MasterPropertyGet_typeof(), offsetof(MasterProperty_type, interface1));
    type->SetFields(5,
        ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::MasterProperty, Property), 0);
    return type;
}

// protected MasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :1819
void MasterProperty__ctor_1_fn(MasterProperty* __this, ::g::Uno::UX::Property* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_1(property, mixerBase);
}

// public object GetPropertyObject() :1817
void MasterProperty__GetPropertyObject_fn(MasterProperty* __this, uObject** __retval)
{
    *__retval = __this->GetPropertyObject();
}

// protected override sealed void OnInactive() :1833
void MasterProperty__OnInactive_fn(MasterProperty* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(MasterProperty_typeof())->T(0),
    };
    uStackFrame __("Fuse.Animations.MasterProperty`1", "OnInactive()");
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ::g::Uno::UX::Property__Set_fn(uPtr(__this->Property), (__this->get_RestValue_ex(&ret1), ret1), __this);
}

// public override sealed T get_RestValue() :1827
void MasterProperty__get_RestValue_fn(MasterProperty* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(MasterProperty_typeof())->T(0),
    };
    uStackFrame __("Fuse.Animations.MasterProperty`1", "get_RestValue()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return __retval.Store((::g::Uno::UX::Property__GetRestState_fn(uPtr(__this->Property), &ret2), ret2)), void();
}

// protected MasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) [instance] :1819
void MasterProperty::ctor_1(::g::Uno::UX::Property* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    uStackFrame __("Fuse.Animations.MasterProperty`1", ".ctor(Uno.UX.Property<T>,Fuse.Animations.MixerBase)");
    ctor_(mixerBase);
    Property = property;
}

// public object GetPropertyObject() [instance] :1817
uObject* MasterProperty::GetPropertyObject()
{
    uStackFrame __("Fuse.Animations.MasterProperty`1", "GetPropertyObject()");
    return Property;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#11
// --------------------------------------------------------------

// internal abstract interface MasterPropertyGet :1810
// {
uInterfaceType* MasterPropertyGet_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.MasterPropertyGet", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#11
// --------------------------------------------------------------

// internal abstract class MasterTransform :1875
// {
// static MasterTransform() :1875
static void MasterTransform__cctor__fn(uType* __type)
{
    MasterTransform::identity_ = ::g::Fuse::Translation::New1();
}

::g::Fuse::Animations::MasterBase_type* MasterTransform_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MasterBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(MasterTransform);
    options.TypeSize = sizeof(::g::Fuse::Animations::MasterBase_type);
    type = (::g::Fuse::Animations::MasterBase_type*)uClassType::New("Fuse.Animations.MasterTransform", options);
    type->SetBase(::g::Fuse::Animations::MasterBase_typeof()->MakeType(::g::Fuse::Transform_typeof()));
    type->fp_cctor_ = MasterTransform__cctor__fn;
    type->fp_OnActive = (void(*)(::g::Fuse::Animations::MasterBase*))MasterTransform__OnActive_fn;
    type->fp_OnInactive = (void(*)(::g::Fuse::Animations::MasterBase*))MasterTransform__OnInactive_fn;
    type->fp_get_PostLayout = (void(*)(::g::Fuse::Animations::MasterBase*, bool*))MasterTransform__get_PostLayout_fn;
    type->fp_get_RestValue = (void(*)(::g::Fuse::Animations::MasterBase*, uTRef))MasterTransform__get_RestValue_fn;
    type->interface0.fp_Complete = (void(*)(uObject*))::g::Fuse::Animations::MasterBase__Complete_fn;
    ::TYPES[69] = ::g::Fuse::Transform_typeof();
    ::TYPES[70] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(::g::Fuse::Animations::MasterBase_type, interface0));
    type->SetFields(5,
        ::g::Fuse::Animations::FastMatrixTransform_typeof(), offsetof(::g::Fuse::Animations::MasterTransform, FMT), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Animations::MasterTransform, Node), 0,
        ::g::Fuse::Transform_typeof(), (uintptr_t)&::g::Fuse::Animations::MasterTransform::identity_, uFieldFlagsStatic);
    return type;
}

// protected MasterTransform(Fuse.Node node, Fuse.Animations.MixerBase mixerBase) :1880
void MasterTransform__ctor_1_fn(MasterTransform* __this, ::g::Fuse::Node* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_1(node, mixerBase);
}

// protected override sealed void OnActive() :1887
void MasterTransform__OnActive_fn(MasterTransform* __this)
{
    uStackFrame __("Fuse.Animations.MasterTransform", "OnActive()");
    __this->FMT = ::g::Fuse::Animations::FastMatrixTransform::New1();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->Node)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[69/*Fuse.Transform*/])), __this->FMT);
}

// protected override sealed void OnInactive() :1893
void MasterTransform__OnInactive_fn(MasterTransform* __this)
{
    uStackFrame __("Fuse.Animations.MasterTransform", "OnInactive()");
    bool ret1;
    ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(__this->Node)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[69/*Fuse.Transform*/])), __this->FMT, &ret1);
    __this->FMT = NULL;
}

// protected override sealed bool get_PostLayout() :1877
void MasterTransform__get_PostLayout_fn(MasterTransform* __this, bool* __retval)
{
    uStackFrame __("Fuse.Animations.MasterTransform", "get_PostLayout()");
    return *__retval = true, void();
}

// public override sealed Fuse.Transform get_RestValue() :1902
void MasterTransform__get_RestValue_fn(MasterTransform* __this, ::g::Fuse::Transform** __retval)
{
    uStackFrame __("Fuse.Animations.MasterTransform", "get_RestValue()");
    return *__retval = MasterTransform::identity(), void();
}

uSStrong< ::g::Fuse::Transform*> MasterTransform::identity_;

// protected MasterTransform(Fuse.Node node, Fuse.Animations.MixerBase mixerBase) [instance] :1880
void MasterTransform::ctor_1(::g::Fuse::Node* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    uStackFrame __("Fuse.Animations.MasterTransform", ".ctor(Fuse.Node,Fuse.Animations.MixerBase)");
    ctor_(mixerBase);
    Node = node;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#11
// --------------------------------------------------------------

// internal sealed class Mixer :1604
// {
// static Mixer() :1604
static void Mixer__cctor__fn(uType* __type)
{
    Mixer::_default_ = (uObject*)::g::Fuse::Animations::AverageMixer::New1();
    Mixer::_defaultDiscrete_ = (uObject*)::g::Fuse::Animations::DiscreteMixer::New1();
    Mixer::PreMasters_ = ((::g::Uno::Collections::ConcurrentCollection*)::g::Uno::Collections::ConcurrentCollection::New1(::TYPES[71/*Uno.Collections.ConcurrentCollection<Fuse.Animations.IMixerMaster>*/]));
    Mixer::PostMasters_ = ((::g::Uno::Collections::ConcurrentCollection*)::g::Uno::Collections::ConcurrentCollection::New1(::TYPES[71/*Uno.Collections.ConcurrentCollection<Fuse.Animations.IMixerMaster>*/]));
}

uType* Mixer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Mixer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Animations.Mixer", options);
    type->fp_ctor_ = (void*)Mixer__New1_fn;
    type->fp_cctor_ = Mixer__cctor__fn;
    ::TYPES[51] = ::g::Fuse::Animations::IMixer_typeof();
    ::TYPES[71] = ::g::Uno::Collections::ConcurrentCollection_typeof()->MakeType(::g::Fuse::Animations::IMixerMaster_typeof());
    ::TYPES[9] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Fuse::Animations::IMixer_typeof(), (uintptr_t)&::g::Fuse::Animations::Mixer::_default_, uFieldFlagsStatic,
        ::g::Fuse::Animations::IMixer_typeof(), (uintptr_t)&::g::Fuse::Animations::Mixer::_defaultDiscrete_, uFieldFlagsStatic,
        ::g::Uno::Collections::ConcurrentCollection_typeof()->MakeType(::g::Fuse::Animations::IMixerMaster_typeof()), (uintptr_t)&::g::Fuse::Animations::Mixer::PostMasters_, uFieldFlagsStatic,
        ::g::Uno::Collections::ConcurrentCollection_typeof()->MakeType(::g::Fuse::Animations::IMixerMaster_typeof()), (uintptr_t)&::g::Fuse::Animations::Mixer::PreMasters_, uFieldFlagsStatic);
    return type;
}

// public generated Mixer() :1604
void Mixer__ctor__fn(Mixer* __this)
{
    __this->ctor_();
}

// public static void AddMaster(Fuse.Animations.IMixerMaster master, bool postLayout) :1613
void Mixer__AddMaster_fn(uObject* master, bool* postLayout)
{
    Mixer::AddMaster(master, *postLayout);
}

// public static void CompletePost() :1645
void Mixer__CompletePost_fn()
{
    Mixer::CompletePost();
}

// public static void CompletePre() :1635
void Mixer__CompletePre_fn()
{
    Mixer::CompletePre();
}

// public static Fuse.Animations.IMixer get_Default() :1607
void Mixer__get_Default_fn(uObject** __retval)
{
    *__retval = Mixer::Default();
}

// public static Fuse.Animations.IMixer get_DefaultDiscrete() :1609
void Mixer__get_DefaultDiscrete_fn(uObject** __retval)
{
    *__retval = Mixer::DefaultDiscrete();
}

// public generated Mixer New() :1604
void Mixer__New1_fn(Mixer** __retval)
{
    *__retval = Mixer::New1();
}

// public static void RemoveMaster(Fuse.Animations.IMixerMaster master, bool postLayout) :1624
void Mixer__RemoveMaster_fn(uObject* master, bool* postLayout)
{
    Mixer::RemoveMaster(master, *postLayout);
}

uSStrong<uObject*> Mixer::_default_;
uSStrong<uObject*> Mixer::_defaultDiscrete_;
uSStrong< ::g::Uno::Collections::ConcurrentCollection*> Mixer::PostMasters_;
uSStrong< ::g::Uno::Collections::ConcurrentCollection*> Mixer::PreMasters_;

// public generated Mixer() [instance] :1604
void Mixer::ctor_()
{
}

// public static void AddMaster(Fuse.Animations.IMixerMaster master, bool postLayout) [static] :1613
void Mixer::AddMaster(uObject* master, bool postLayout)
{
    uStackFrame __("Fuse.Animations.Mixer", "AddMaster(Fuse.Animations.IMixerMaster,bool)");
    Mixer_typeof()->Init();
    ::g::Uno::Collections::ConcurrentCollection* list = postLayout ? (::g::Uno::Collections::ConcurrentCollection*)Mixer::PostMasters() : (::g::Uno::Collections::ConcurrentCollection*)Mixer::PreMasters();
    int stage = postLayout ? 3 : 1;
    uDelegate* act = postLayout ? uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)Mixer__CompletePost_fn) : uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)Mixer__CompletePre_fn);

    if (uPtr(list)->Count() == 0)
        ::g::Fuse::UpdateManager::AddAction(act, stage);

    ::g::Uno::Collections::ConcurrentCollection__Add_fn(uPtr(list), master);
}

// public static void CompletePost() [static] :1645
void Mixer::CompletePost()
{
    uStackFrame __("Fuse.Animations.Mixer", "CompletePost()");
    Mixer_typeof()->Init();
    uObject* ret2;
    uObject* l = uPtr(Mixer::PostMasters())->DeferLock();

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(l), ::g::Uno::IDisposable_typeof()));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        int c = uPtr(Mixer::PostMasters())->Count();

        for (int i = 0; i < c; ++i)
            ::g::Fuse::Animations::IMixerMaster::Complete(uInterface(uPtr((::g::Uno::Collections::ConcurrentCollection__get_Item_fn(uPtr(Mixer::PostMasters()), uCRef<int>(i), &ret2), ret2)), ::TYPES[68/*Fuse.Animations.IMixerMaster*/]));
    }
}

// public static void CompletePre() [static] :1635
void Mixer::CompletePre()
{
    uStackFrame __("Fuse.Animations.Mixer", "CompletePre()");
    Mixer_typeof()->Init();
    uObject* ret3;
    uObject* l = uPtr(Mixer::PreMasters())->DeferLock();

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(l), ::g::Uno::IDisposable_typeof()));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        int c = uPtr(Mixer::PreMasters())->Count();

        for (int i = 0; i < c; ++i)
            ::g::Fuse::Animations::IMixerMaster::Complete(uInterface(uPtr((::g::Uno::Collections::ConcurrentCollection__get_Item_fn(uPtr(Mixer::PreMasters()), uCRef<int>(i), &ret3), ret3)), ::TYPES[68/*Fuse.Animations.IMixerMaster*/]));
    }
}

// public generated Mixer New() [static] :1604
Mixer* Mixer::New1()
{
    Mixer* obj1 = (Mixer*)uNew(Mixer_typeof());
    obj1->ctor_();
    return obj1;
}

// public static void RemoveMaster(Fuse.Animations.IMixerMaster master, bool postLayout) [static] :1624
void Mixer::RemoveMaster(uObject* master, bool postLayout)
{
    uStackFrame __("Fuse.Animations.Mixer", "RemoveMaster(Fuse.Animations.IMixerMaster,bool)");
    Mixer_typeof()->Init();
    bool ret4;
    ::g::Uno::Collections::ConcurrentCollection* list = postLayout ? (::g::Uno::Collections::ConcurrentCollection*)Mixer::PostMasters() : (::g::Uno::Collections::ConcurrentCollection*)Mixer::PreMasters();
    int stage = postLayout ? 3 : 1;
    uDelegate* act = postLayout ? uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)Mixer__CompletePost_fn) : uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)Mixer__CompletePre_fn);
    ::g::Uno::Collections::ConcurrentCollection__Remove_fn(uPtr(list), master, &ret4);

    if (list->Count() == 0)
        ::g::Fuse::UpdateManager::RemoveAction(act, stage);
}

// public static Fuse.Animations.IMixer get_Default() [static] :1607
uObject* Mixer::Default()
{
    uStackFrame __("Fuse.Animations.Mixer", "get_Default()");
    Mixer_typeof()->Init();
    return Mixer::_default();
}

// public static Fuse.Animations.IMixer get_DefaultDiscrete() [static] :1609
uObject* Mixer::DefaultDiscrete()
{
    uStackFrame __("Fuse.Animations.Mixer", "get_DefaultDiscrete()");
    Mixer_typeof()->Init();
    return Mixer::_defaultDiscrete();
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#11
// --------------------------------------------------------------

// internal abstract class MixerBase :1656
// {
MixerBase_type* MixerBase_typeof()
{
    static uSStrong<MixerBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(MixerBase);
    options.TypeSize = sizeof(MixerBase_type);
    type = (MixerBase_type*)uClassType::New("Fuse.Animations.MixerBase", options);
    type->interface0.fp_Register = (void(*)(uObject*, uType*, ::g::Uno::UX::Property*, int*, uObject**))MixerBase__Register_fn;
    type->interface0.fp_RegisterTransform = (void(*)(uObject*, ::g::Fuse::Node*, int*, int*, uObject**))MixerBase__RegisterTransform_fn;
    ::TYPES[72] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), uObject_typeof());
    ::TYPES[7] = ::g::Uno::Bool_typeof();
    ::TYPES[14] = uObject_typeof();
    ::TYPES[22] = ::g::Fuse::Animations::MasterBase_typeof();
    ::TYPES[73] = ::g::Fuse::Animations::IMixerHandle_typeof();
    ::TYPES[21] = ::g::Fuse::Animations::MixerHandle_typeof();
    ::TYPES[70] = ::g::Fuse::Node_typeof();
    ::TYPES[24] = ::g::Fuse::Animations::MasterBase_typeof()->MakeType(::g::Fuse::Transform_typeof());
    ::TYPES[74] = ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(::g::Fuse::Transform_typeof());
    ::TYPES[25] = ::g::Fuse::Animations::MixerHandle_typeof()->MakeType(::g::Fuse::Transform_typeof());
    ::TYPES[75] = ::g::Fuse::Animations::MasterPropertyGet_typeof();
    ::TYPES[30] = ::g::Fuse::Animations::MasterTransform_typeof();
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixer_typeof(), offsetof(MixerBase_type, interface0));
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), offsetof(::g::Fuse::Animations::MixerBase, _propHandle), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), uObject_typeof()), offsetof(::g::Fuse::Animations::MixerBase, Masters), 0);
    return type;
}

// protected generated MixerBase() :1656
void MixerBase__ctor__fn(MixerBase* __this)
{
    __this->ctor_();
}

// public Fuse.Animations.IMixerHandle<T> Register<T>(Uno.UX.Property<T> property, Fuse.Animations.MixOp mode) :1660
void MixerBase__Register_fn(MixerBase* __this, uType* __type, ::g::Uno::UX::Property* property, int* mode, uObject** __retval)
{
    *__retval = __this->Register(__type, property, *mode);
}

// public Fuse.Animations.IMixerHandle<Fuse.Transform> RegisterTransform(Fuse.Node element, Fuse.Animations.MixOp mode, [int priority]) :1674
void MixerBase__RegisterTransform_fn(MixerBase* __this, ::g::Fuse::Node* element, int* mode, int* priority, uObject** __retval)
{
    *__retval = __this->RegisterTransform(element, *mode, *priority);
}

// public void Unused(Fuse.Animations.IMixerMaster mb) :1689
void MixerBase__Unused_fn(MixerBase* __this, uObject* mb)
{
    __this->Unused(mb);
}

// protected generated MixerBase() [instance] :1656
void MixerBase::ctor_()
{
    uStackFrame __("Fuse.Animations.MixerBase", ".ctor()");
    Masters = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[72/*Uno.Collections.Dictionary<object, object>*/]));
    _propHandle = ::g::Fuse::Properties::CreateHandle();
}

// public Fuse.Animations.IMixerHandle<T> Register<T>(Uno.UX.Property<T> property, Fuse.Animations.MixOp mode) [instance] :1660
uObject* MixerBase::Register(uType* __type, ::g::Uno::UX::Property* property, int mode)
{
    uType* __types[] = {
        MixerBase_typeof()->MakeMethod(1, __type->U(0)),
        __type->U(0),
        ::TYPES[22/*Fuse.Animations.MasterBase`1*/]->MakeType(__type->U(0)),
        ::TYPES[73/*Fuse.Animations.IMixerHandle`1*/]->MakeType(__type->U(0)),
        ::TYPES[21/*Fuse.Animations.MixerHandle`1*/]->MakeType(__type->U(0)),
    };
    uStackFrame __("Fuse.Animations.MixerBase", "Register`1(Uno.UX.Property<T>,Fuse.Animations.MixOp)");
    bool ret1;
    uObject* master;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Masters), property, (void**)(&master), &ret1), ret1))
    {
        master = (::g::Fuse::Animations::MasterProperty*)CreateMaster(__types[0], property, this);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Masters), property, master);
    }

    ::g::Fuse::Animations::MasterBase* masterT = uCast< ::g::Fuse::Animations::MasterBase*>(master, __types[2]);
    return (uObject*)((::g::Fuse::Animations::MixerHandle*)::g::Fuse::Animations::MixerHandle::New1(__types[4], masterT, mode, 0));
}

// public Fuse.Animations.IMixerHandle<Fuse.Transform> RegisterTransform(Fuse.Node element, Fuse.Animations.MixOp mode, [int priority]) [instance] :1674
uObject* MixerBase::RegisterTransform(::g::Fuse::Node* element, int mode, int priority)
{
    uStackFrame __("Fuse.Animations.MixerBase", "RegisterTransform(Fuse.Node,Fuse.Animations.MixOp,[int])");
    uObject* master;

    if (!uPtr(uPtr(element)->Properties())->TryGet(_propHandle, &master))
    {
        master = CreateMasterTransform(element, this);
        uPtr(uPtr(element)->Properties())->Set(_propHandle, master);
    }

    ::g::Fuse::Animations::MasterBase* masterT = uCast< ::g::Fuse::Animations::MasterBase*>(master, ::TYPES[24/*Fuse.Animations.MasterBase<Fuse.Transform>*/]);
    return (uObject*)((::g::Fuse::Animations::MixerHandle*)::g::Fuse::Animations::MixerHandle::New1(::TYPES[25/*Fuse.Animations.MixerHandle<Fuse.Transform>*/], masterT, mode, priority));
}

// public void Unused(Fuse.Animations.IMixerMaster mb) [instance] :1689
void MixerBase::Unused(uObject* mb)
{
    uStackFrame __("Fuse.Animations.MixerBase", "Unused(Fuse.Animations.IMixerMaster)");
    bool ret2;
    uObject* prop = uAs<uObject*>(mb, ::TYPES[75/*Fuse.Animations.MasterPropertyGet*/]);

    if (prop != NULL)
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(Masters), ::g::Fuse::Animations::MasterPropertyGet::GetPropertyObject(uInterface(uPtr(prop), ::TYPES[75/*Fuse.Animations.MasterPropertyGet*/])), &ret2);

    ::g::Fuse::Animations::MasterTransform* trans = uAs< ::g::Fuse::Animations::MasterTransform*>(mb, ::TYPES[30/*Fuse.Animations.MasterTransform*/]);

    if (trans != NULL)
        uPtr(uPtr(uPtr(trans)->Node)->Properties())->Clear(_propHandle);
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#11
// --------------------------------------------------------------

// internal sealed class MixerHandle<T> :1906
// {
MixerHandle_type* MixerHandle_typeof()
{
    static uSStrong<MixerHandle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(MixerHandle);
    options.TypeSize = sizeof(MixerHandle_type);
    type = (MixerHandle_type*)uClassType::New("Fuse.Animations.MixerHandle`1", options);
    type->interface0.fp_Unregister = (void(*)(uObject*))MixerHandle__Unregister_fn;
    type->interface0.fp_Set = (void(*)(uObject*, void*, float*))MixerHandle__Set_fn;
    type->interface0.fp_get_RestValue = (void(*)(uObject*, uTRef))MixerHandle__get_RestValue_fn;
    ::STRINGS[7] = uString::Const("invalid MixerHandle.Set post-Unregister");
    ::STRINGS[8] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#11");
    ::STRINGS[9] = uString::Const("Invalid MixerHandle.RestValue post-Unregister");
    ::TYPES[22] = ::g::Fuse::Animations::MasterBase_typeof();
    type->SetPrecalc(
        ::TYPES[22/*Fuse.Animations.MasterBase`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(type->T(0)), offsetof(MixerHandle_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::MixerHandle, _hasValue), 0,
        ::g::Fuse::Animations::MasterBase_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::MixerHandle, Master), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::MixerHandle, Strength), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Fuse::Animations::MixOp_typeof(), offsetof(::g::Fuse::Animations::MixerHandle, _MixOp), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Animations::MixerHandle, _Priority), 0);
    return type;
}

// public MixerHandle(Fuse.Animations.MasterBase<T> master, Fuse.Animations.MixOp mode, int priority) :1919
void MixerHandle__ctor__fn(MixerHandle* __this, ::g::Fuse::Animations::MasterBase* master, int* mode, int* priority)
{
    __this->ctor_(master, *mode, *priority);
}

// public bool get_HasValue() :1912
void MixerHandle__get_HasValue_fn(MixerHandle* __this, bool* __retval)
{
    *__retval = __this->HasValue();
}

// public generated Fuse.Animations.MixOp get_MixOp() :1914
void MixerHandle__get_MixOp_fn(MixerHandle* __this, int* __retval)
{
    *__retval = __this->MixOp();
}

// public generated void set_MixOp(Fuse.Animations.MixOp value) :1914
void MixerHandle__set_MixOp_fn(MixerHandle* __this, int* value)
{
    __this->MixOp(*value);
}

// public MixerHandle New(Fuse.Animations.MasterBase<T> master, Fuse.Animations.MixOp mode, int priority) :1919
void MixerHandle__New1_fn(uType* __type, ::g::Fuse::Animations::MasterBase* master, int* mode, int* priority, MixerHandle** __retval)
{
    *__retval = MixerHandle::New1(__type, master, *mode, *priority);
}

// public generated int get_Priority() :1916
void MixerHandle__get_Priority_fn(MixerHandle* __this, int* __retval)
{
    *__retval = __this->Priority();
}

// private generated void set_Priority(int value) :1916
void MixerHandle__set_Priority_fn(MixerHandle* __this, int* value)
{
    __this->Priority(*value);
}

// public T get_RestValue() :1951
void MixerHandle__get_RestValue_fn(MixerHandle* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Fuse.Animations.MasterBase<T>*/),
    };
    uStackFrame __("Fuse.Animations.MixerHandle`1", "get_RestValue()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    if (__this->Master == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[9/*"Invalid Mix...*/]));

    return __retval.Store((uPtr(__this->Master)->get_RestValue_ex(&ret2), ret2)), void();
}

// public void Set(T value, float strength) :1935
void MixerHandle__Set_fn(MixerHandle* __this, void* value, float* strength)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Fuse.Animations.MasterBase<T>*/),
    };
    uStackFrame __("Fuse.Animations.MixerHandle`1", "Set(T,float)");
    float strength_ = *strength;

    if (__this->Master == NULL)
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[7/*"invalid Mix...*/], 1, ::STRINGS[8/*"/usr/local/...*/], 1939);
        return;
    }

    __this->_hasValue = true;
    __this->Value() = value;
    __this->Strength = strength_;
    uPtr(__this->Master)->DirtyValue = true;
}

// public void Unregister() :1927
void MixerHandle__Unregister_fn(MixerHandle* __this)
{
    __this->Unregister();
}

// public MixerHandle(Fuse.Animations.MasterBase<T> master, Fuse.Animations.MixOp mode, int priority) [instance] :1919
void MixerHandle::ctor_(::g::Fuse::Animations::MasterBase* master, int mode, int priority)
{
    uStackFrame __("Fuse.Animations.MixerHandle`1", ".ctor(Fuse.Animations.MasterBase<T>,Fuse.Animations.MixOp,int)");
    Priority(priority);
    Master = master;
    MixOp(mode);
    uPtr(Master)->Register(this);
}

// public bool get_HasValue() [instance] :1912
bool MixerHandle::HasValue()
{
    uStackFrame __("Fuse.Animations.MixerHandle`1", "get_HasValue()");
    return _hasValue;
}

// public generated Fuse.Animations.MixOp get_MixOp() [instance] :1914
int MixerHandle::MixOp()
{
    uStackFrame __("Fuse.Animations.MixerHandle`1", "get_MixOp()");
    return _MixOp;
}

// public generated void set_MixOp(Fuse.Animations.MixOp value) [instance] :1914
void MixerHandle::MixOp(int value)
{
    uStackFrame __("Fuse.Animations.MixerHandle`1", "set_MixOp(Fuse.Animations.MixOp)");
    _MixOp = value;
}

// public generated int get_Priority() [instance] :1916
int MixerHandle::Priority()
{
    uStackFrame __("Fuse.Animations.MixerHandle`1", "get_Priority()");
    return _Priority;
}

// private generated void set_Priority(int value) [instance] :1916
void MixerHandle::Priority(int value)
{
    uStackFrame __("Fuse.Animations.MixerHandle`1", "set_Priority(int)");
    _Priority = value;
}

// public void Unregister() [instance] :1927
void MixerHandle::Unregister()
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Animations.MasterBase<T>*/),
        __type->T(0),
    };
    uStackFrame __("Fuse.Animations.MixerHandle`1", "Unregister()");
    uPtr(Master)->Unregister(this);
    _hasValue = false;
    uPtr(Master)->DirtyValue = true;
    Master = NULL;
}

// public MixerHandle New(Fuse.Animations.MasterBase<T> master, Fuse.Animations.MixOp mode, int priority) [static] :1919
MixerHandle* MixerHandle::New1(uType* __type, ::g::Fuse::Animations::MasterBase* master, int mode, int priority)
{
    MixerHandle* obj1 = (MixerHandle*)uNew(__type);
    obj1->ctor_(master, mode, priority);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#11
// --------------------------------------------------------------

// public enum MixOp :1580
uEnumType* MixOp_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.MixOp", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Add", 0LL,
        "Weight", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#20
// --------------------------------------------------------------

// public sealed class Move :3450
// {
::g::Fuse::Animations::TransformAnimator_type* Move_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TransformAnimator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 22;
    options.ObjectSize = sizeof(Move);
    options.TypeSize = sizeof(::g::Fuse::Animations::TransformAnimator_type);
    type = (::g::Fuse::Animations::TransformAnimator_type*)uClassType::New("Fuse.Animations.Move", options);
    type->SetBase(::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Translation_typeof()));
    type->fp_ctor_ = (void*)Move__New1_fn;
    type->fp_Update = (void(*)(::g::Fuse::Animations::TransformAnimator*, ::g::Fuse::Node*, ::g::Fuse::Transform*, ::g::Uno::Float4*))Move__Update_fn;
    ::TYPES[76] = ::g::Fuse::TranslationModes_typeof();
    ::TYPES[77] = ::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Translation_typeof());
    ::TYPES[78] = ::g::Fuse::Translation_typeof();
    ::TYPES[38] = ::g::Uno::Float4_typeof();
    type->SetFields(21,
        ::g::Fuse::ITranslationMode_typeof(), offsetof(::g::Fuse::Animations::Move, _relativeTo), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)Move__New1_fn, 0, true, Move_typeof(), 0),
        new uFunction("get_RelativeTo", NULL, (void*)Move__get_RelativeTo_fn, 0, false, ::g::Fuse::ITranslationMode_typeof(), 0),
        new uFunction("set_RelativeTo", NULL, (void*)Move__set_RelativeTo_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::ITranslationMode_typeof()));
    return type;
}

// public Move() :3452
void Move__ctor_3_fn(Move* __this)
{
    __this->ctor_3();
}

// public Move New() :3452
void Move__New1_fn(Move** __retval)
{
    *__retval = Move::New1();
}

// public Fuse.ITranslationMode get_RelativeTo() :3460
void Move__get_RelativeTo_fn(Move* __this, uObject** __retval)
{
    *__retval = __this->RelativeTo();
}

// public void set_RelativeTo(Fuse.ITranslationMode value) :3461
void Move__set_RelativeTo_fn(Move* __this, uObject* value)
{
    __this->RelativeTo(value);
}

// internal override sealed void Update(Fuse.Node elm, Fuse.Translation t, float4 value) :3464
void Move__Update_fn(Move* __this, ::g::Fuse::Node* elm, ::g::Fuse::Translation* t, ::g::Uno::Float4* value)
{
    uStackFrame __("Fuse.Animations.Move", "Update(Fuse.Node,Fuse.Translation,float4)");
    ::g::Uno::Float4 value_ = *value;
    uPtr(t)->RelativeTo(__this->RelativeTo());
    t->Vector(::g::Uno::Float3__New2(value_.X, value_.Y, value_.Z));
}

// public Move() [instance] :3452
void Move::ctor_3()
{
    uStackFrame __("Fuse.Animations.Move", ".ctor()");
    _relativeTo = ::g::Fuse::TranslationModes::Local();
    ctor_2();
    Priority(1000);
}

// public Fuse.ITranslationMode get_RelativeTo() [instance] :3460
uObject* Move::RelativeTo()
{
    uStackFrame __("Fuse.Animations.Move", "get_RelativeTo()");
    return _relativeTo;
}

// public void set_RelativeTo(Fuse.ITranslationMode value) [instance] :3461
void Move::RelativeTo(uObject* value)
{
    uStackFrame __("Fuse.Animations.Move", "set_RelativeTo(Fuse.ITranslationMode)");
    _relativeTo = value;
}

// public Move New() [static] :3452
Move* Move::New1()
{
    Move* obj1 = (Move*)uNew(Move_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#12
// --------------------------------------------------------------

// public sealed class Nothing :1969
// {
::g::Fuse::Animations::Animator_type* Nothing_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.ObjectSize = sizeof(Nothing);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.Nothing", options);
    type->SetBase(::g::Fuse::Animations::TrackAnimator_typeof());
    type->fp_ctor_ = (void*)Nothing__New1_fn;
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))Nothing__CreateState_fn;
    ::TYPES[47] = ::g::Fuse::Animations::AnimatorState_typeof();
    type->SetFields(18);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Nothing__New1_fn, 0, true, Nothing_typeof(), 0));
    return type;
}

// public generated Nothing() :1969
void Nothing__ctor_2_fn(Nothing* __this)
{
    __this->ctor_2();
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :1971
void Nothing__CreateState_fn(Nothing* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    uStackFrame __("Fuse.Animations.Nothing", "CreateState(Fuse.Animations.CreateStateParams)");
    return *__retval = ::g::Fuse::Animations::NothingAnimatorState::New1(__this, p), void();
}

// public generated Nothing New() :1969
void Nothing__New1_fn(Nothing** __retval)
{
    *__retval = Nothing::New1();
}

// public generated Nothing() [instance] :1969
void Nothing::ctor_2()
{
    uStackFrame __("Fuse.Animations.Nothing", ".ctor()");
    ctor_1();
}

// public generated Nothing New() [static] :1969
Nothing* Nothing::New1()
{
    Nothing* obj1 = (Nothing*)uNew(Nothing_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#12
// --------------------------------------------------------------

// internal sealed class NothingAnimatorState :1977
// {
::g::Fuse::Animations::TrackAnimatorState_type* NothingAnimatorState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(NothingAnimatorState);
    options.TypeSize = sizeof(::g::Fuse::Animations::TrackAnimatorState_type);
    type = (::g::Fuse::Animations::TrackAnimatorState_type*)uClassType::New("Fuse.Animations.NothingAnimatorState", options);
    type->SetBase(::g::Fuse::Animations::TrackAnimatorState_typeof());
    ::TYPES[50] = ::g::Fuse::Animations::TrackAnimator_typeof();
    type->SetFields(6);
    return type;
}

// public NothingAnimatorState(Fuse.Animations.Nothing animator, Fuse.Animations.CreateStateParams p) :1979
void NothingAnimatorState__ctor_2_fn(NothingAnimatorState* __this, ::g::Fuse::Animations::Nothing* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public NothingAnimatorState New(Fuse.Animations.Nothing animator, Fuse.Animations.CreateStateParams p) :1979
void NothingAnimatorState__New1_fn(::g::Fuse::Animations::Nothing* animator, ::g::Fuse::Animations::CreateStateParams* p, NothingAnimatorState** __retval)
{
    *__retval = NothingAnimatorState::New1(animator, p);
}

// public NothingAnimatorState(Fuse.Animations.Nothing animator, Fuse.Animations.CreateStateParams p) [instance] :1979
void NothingAnimatorState::ctor_2(::g::Fuse::Animations::Nothing* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    uStackFrame __("Fuse.Animations.NothingAnimatorState", ".ctor(Fuse.Animations.Nothing,Fuse.Animations.CreateStateParams)");
    ctor_1(animator, p, NULL);
}

// public NothingAnimatorState New(Fuse.Animations.Nothing animator, Fuse.Animations.CreateStateParams p) [static] :1979
NothingAnimatorState* NothingAnimatorState::New1(::g::Fuse::Animations::Nothing* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    NothingAnimatorState* obj1 = (NothingAnimatorState*)uNew(NothingAnimatorState_typeof());
    obj1->ctor_2(animator, p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#13
// --------------------------------------------------------------

// public abstract class OpenAnimator :1992
// {
::g::Fuse::Animations::Animator_type* OpenAnimator_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(OpenAnimator);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.OpenAnimator", options);
    type->SetBase(::g::Fuse::Animations::Animator_typeof());
    type->fp_get_AnimatorVariant = (void(*)(::g::Fuse::Animations::Animator*, int*))OpenAnimator__get_AnimatorVariant_fn;
    type->fp_GetDurationWithDelay = (void(*)(::g::Fuse::Animations::Animator*, int*, double*))OpenAnimator__GetDurationWithDelay_fn;
    ::TYPES[46] = ::g::Fuse::Animations::Animator_typeof();
    type->SetFields(3,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::OpenAnimator, _duration), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::OpenAnimator, _hasDuration), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Duration", NULL, (void*)OpenAnimator__get_Duration_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Duration", NULL, (void*)OpenAnimator__set_Duration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_HasDuration", NULL, (void*)OpenAnimator__get_HasDuration_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("ResetDuration", NULL, (void*)OpenAnimator__ResetDuration_fn, 0, false, uVoid_typeof(), 0));
    return type;
}

// protected generated OpenAnimator() :1992
void OpenAnimator__ctor_1_fn(OpenAnimator* __this)
{
    __this->ctor_1();
}

// internal override sealed Fuse.Animations.AnimatorVariant get_AnimatorVariant() :1996
void OpenAnimator__get_AnimatorVariant_fn(OpenAnimator* __this, int* __retval)
{
    uStackFrame __("Fuse.Animations.OpenAnimator", "get_AnimatorVariant()");
    return *__retval = 1, void();
}

// public double get_Duration() :2002
void OpenAnimator__get_Duration_fn(OpenAnimator* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public void set_Duration(double value) :2003
void OpenAnimator__set_Duration_fn(OpenAnimator* __this, double* value)
{
    __this->Duration(*value);
}

// internal double GetDelay(Fuse.Animations.AnimationVariant dir, double totalDuration) :2024
void OpenAnimator__GetDelay_fn(OpenAnimator* __this, int* dir, double* totalDuration, double* __retval)
{
    *__retval = __this->GetDelay(*dir, *totalDuration);
}

// internal override sealed double GetDurationWithDelay(Fuse.Animations.AnimationVariant dir) :2019
void OpenAnimator__GetDurationWithDelay_fn(OpenAnimator* __this, int* dir, double* __retval)
{
    uStackFrame __("Fuse.Animations.OpenAnimator", "GetDurationWithDelay(Fuse.Animations.AnimationVariant)");
    return *__retval = __this->Delay() + __this->Duration(), void();
}

// public bool get_HasDuration() :2017
void OpenAnimator__get_HasDuration_fn(OpenAnimator* __this, bool* __retval)
{
    *__retval = __this->HasDuration();
}

// public void ResetDuration() :2010
void OpenAnimator__ResetDuration_fn(OpenAnimator* __this)
{
    __this->ResetDuration();
}

// protected generated OpenAnimator() [instance] :1992
void OpenAnimator::ctor_1()
{
    uStackFrame __("Fuse.Animations.OpenAnimator", ".ctor()");
    ctor_();
}

// public double get_Duration() [instance] :2002
double OpenAnimator::Duration()
{
    uStackFrame __("Fuse.Animations.OpenAnimator", "get_Duration()");
    return _duration;
}

// public void set_Duration(double value) [instance] :2003
void OpenAnimator::Duration(double value)
{
    uStackFrame __("Fuse.Animations.OpenAnimator", "set_Duration(double)");
    _duration = value;
    _hasDuration = true;
}

// internal double GetDelay(Fuse.Animations.AnimationVariant dir, double totalDuration) [instance] :2024
double OpenAnimator::GetDelay(int dir, double totalDuration)
{
    uStackFrame __("Fuse.Animations.OpenAnimator", "GetDelay(Fuse.Animations.AnimationVariant,double)");
    return Delay();
}

// public bool get_HasDuration() [instance] :2017
bool OpenAnimator::HasDuration()
{
    uStackFrame __("Fuse.Animations.OpenAnimator", "get_HasDuration()");
    return _hasDuration;
}

// public void ResetDuration() [instance] :2010
void OpenAnimator::ResetDuration()
{
    uStackFrame __("Fuse.Animations.OpenAnimator", "ResetDuration()");
    _duration = 0.0;
    _hasDuration = false;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#13
// --------------------------------------------------------------

// internal abstract class OpenAnimatorState :2030
// {
OpenAnimatorState_type* OpenAnimatorState_typeof()
{
    static uSStrong<OpenAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(OpenAnimatorState);
    options.TypeSize = sizeof(OpenAnimatorState_type);
    type = (OpenAnimatorState_type*)uClassType::New("Fuse.Animations.OpenAnimatorState", options);
    type->SetBase(::g::Fuse::Animations::AnimatorState_typeof());
    type->fp_get_IsOpenEnd = (void(*)(::g::Fuse::Animations::AnimatorState*, bool*))OpenAnimatorState__get_IsOpenEnd_fn;
    type->fp_SeekProgress = (void(*)(::g::Fuse::Animations::AnimatorState*, double*, double*, int*, double*, int*))OpenAnimatorState__SeekProgress_fn;
    type->fp_SeekTime = (void(*)(::g::Fuse::Animations::AnimatorState*, double*, double*, int*, double*, int*))OpenAnimatorState__SeekTime_fn;
    ::TYPES[47] = ::g::Fuse::Animations::AnimatorState_typeof();
    ::TYPES[15] = ::g::Uno::Int_typeof();
    ::TYPES[56] = ::g::Fuse::Animations::OpenAnimator_typeof();
    ::TYPES[7] = ::g::Uno::Bool_typeof();
    ::TYPES[32] = ::g::Uno::Float_typeof();
    ::TYPES[62] = ::g::Fuse::Animations::SeekResult_typeof();
    type->SetFields(3,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::OpenAnimatorState, _seekDone), 0,
        ::g::Fuse::Animations::OpenAnimator_typeof(), offsetof(::g::Fuse::Animations::OpenAnimatorState, Animator), 0);
    return type;
}

// protected OpenAnimatorState(Fuse.Animations.OpenAnimator animator, Fuse.Animations.CreateStateParams p, [Fuse.Node useNode]) :2035
void OpenAnimatorState__ctor_1_fn(OpenAnimatorState* __this, ::g::Fuse::Animations::OpenAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Node* useNode)
{
    __this->ctor_1(animator, p, useNode);
}

// public override sealed bool get_IsOpenEnd() :2042
void OpenAnimatorState__get_IsOpenEnd_fn(OpenAnimatorState* __this, bool* __retval)
{
    uStackFrame __("Fuse.Animations.OpenAnimatorState", "get_IsOpenEnd()");
    return *__retval = true, void();
}

// internal override sealed Fuse.Animations.SeekResult SeekProgress(double progress, double interval, Fuse.Animations.SeekDirection dir, double strength) :2044
void OpenAnimatorState__SeekProgress_fn(OpenAnimatorState* __this, double* progress, double* interval, int* dir, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.OpenAnimatorState", "SeekProgress(double,double,Fuse.Animations.SeekDirection,double)");
    double progress_ = *progress;
    double interval_ = *interval;
    int dir_ = *dir;
    double strength_ = *strength;
    return *__retval = __this->SeekTime(progress_ * __this->TotalDuration, interval_, dir_, strength_), void();
}

// internal override sealed Fuse.Animations.SeekResult SeekTime(double nominal, double interval, Fuse.Animations.SeekDirection dir, double strength) :2050
void OpenAnimatorState__SeekTime_fn(OpenAnimatorState* __this, double* nominal, double* interval, int* dir, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.OpenAnimatorState", "SeekTime(double,double,Fuse.Animations.SeekDirection,double)");
    int dir_ = *dir;
    double nominal_ = *nominal;
    double interval_ = *interval;
    double strength_ = *strength;
    double delay = uPtr(__this->Animator)->GetDelay(__this->Variant, __this->TotalDuration);
    bool on = (dir_ == 0) ? nominal_ > (delay - 9.9999997473787516e-06) : nominal_ > (delay + 9.9999997473787516e-06);

    if (uPtr(__this->Animator)->HasDuration() && (nominal_ > ((delay + uPtr(__this->Animator)->Duration()) - 9.9999997473787516e-06)))
        on = false;

    bool mayEnd = (dir_ == 0) ? nominal_ >= (uPtr(__this->Animator)->GetDurationWithDelay(__this->Variant) - 9.9999997473787516e-06) : nominal_ <= (delay + 9.9999997473787516e-06);

    if (on || !__this->_seekDone)
        __this->_seekDone = __this->Seek(on, (float)interval_, (float)strength_, dir_);

    return *__retval = (__this->_seekDone ? 2 : 0) | ((mayEnd && __this->_seekDone) ? 1 : 0), void();
}

// protected OpenAnimatorState(Fuse.Animations.OpenAnimator animator, Fuse.Animations.CreateStateParams p, [Fuse.Node useNode]) [instance] :2035
void OpenAnimatorState::ctor_1(::g::Fuse::Animations::OpenAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Node* useNode)
{
    uStackFrame __("Fuse.Animations.OpenAnimatorState", ".ctor(Fuse.Animations.OpenAnimator,Fuse.Animations.CreateStateParams,[Fuse.Node])");
    _seekDone = true;
    ctor_(p, useNode);
    Animator = animator;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#14
// --------------------------------------------------------------

// internal sealed class Player :2244
// {
uType* Player_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.ObjectSize = sizeof(Player);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Animations.Player", options);
    ::TYPES[79] = ::g::Fuse::Animations::PlayerPart_typeof();
    ::TYPES[15] = ::g::Uno::Int_typeof();
    ::TYPES[55] = ::g::Uno::Delegate_typeof();
    ::TYPES[80] = ::g::Uno::Action1_typeof()->MakeType(uObject_typeof());
    ::TYPES[14] = uObject_typeof();
    ::TYPES[7] = ::g::Uno::Bool_typeof();
    ::TYPES[81] = ::g::Fuse::Animations::AnimatorState_typeof()->Array();
    ::TYPES[9] = ::g::Uno::Action_typeof();
    ::TYPES[12] = ::g::Fuse::Time_typeof();
    ::TYPES[13] = ::g::Uno::Double_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Player, _isDone), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::Player, _isStarted), 0,
        ::g::Fuse::Animations::PlayerPart_typeof(), offsetof(::g::Fuse::Animations::Player, _progress), 0,
        ::g::Fuse::Animations::SeekDirection_typeof(), offsetof(::g::Fuse::Animations::Player, _seekDirection), 0,
        ::g::Fuse::Animations::AnimatorState_typeof()->Array(), offsetof(::g::Fuse::Animations::Player, _states), 0,
        ::g::Fuse::Animations::PlayerPart_typeof(), offsetof(::g::Fuse::Animations::Player, _strength), 0,
        ::g::Uno::Action1_typeof()->MakeType(uObject_typeof()), offsetof(::g::Fuse::Animations::Player, ProgressUpdated), 0,
        ::g::Uno::Action1_typeof()->MakeType(uObject_typeof()), offsetof(::g::Fuse::Animations::Player, StrengthUpdated), 0,
        ::g::Fuse::Animations::TriggerAnimation_typeof(), offsetof(::g::Fuse::Animations::Player, _Animation), 0,
        ::g::Uno::Action1_typeof()->MakeType(uObject_typeof()), offsetof(::g::Fuse::Animations::Player, _DoneCallback), 0,
        ::g::Fuse::Animations::PlayMode_typeof(), offsetof(::g::Fuse::Animations::Player, _Mode), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Animations::Player, _Node), 0,
        ::g::Fuse::Animations::AnimationVariant_typeof(), offsetof(::g::Fuse::Animations::Player, _Variant), 0);
    return type;
}

// public Player(Fuse.Node elm, Fuse.Animations.TriggerAnimation animation, Fuse.Animations.AnimationVariant variant, Fuse.Animations.PlayMode mode) :2267
void Player__ctor__fn(Player* __this, ::g::Fuse::Node* elm, ::g::Fuse::Animations::TriggerAnimation* animation, int* variant, int* mode)
{
    __this->ctor_(elm, animation, *variant, *mode);
}

// public generated Fuse.Animations.TriggerAnimation get_Animation() :2250
void Player__get_Animation_fn(Player* __this, ::g::Fuse::Animations::TriggerAnimation** __retval)
{
    *__retval = __this->Animation();
}

// private generated void set_Animation(Fuse.Animations.TriggerAnimation value) :2250
void Player__set_Animation_fn(Player* __this, ::g::Fuse::Animations::TriggerAnimation* value)
{
    __this->Animation(value);
}

// public double get_AnimatorsDuration() :2283
void Player__get_AnimatorsDuration_fn(Player* __this, double* __retval)
{
    *__retval = __this->AnimatorsDuration();
}

// internal bool get_AnyEffect() :2422
void Player__get_AnyEffect_fn(Player* __this, bool* __retval)
{
    *__retval = __this->AnyEffect();
}

// private void CheckUpdate([bool interval]) :2290
void Player__CheckUpdate_fn(Player* __this, bool* interval)
{
    __this->CheckUpdate(*interval);
}

// private void CheckUpdateAction() :2288
void Player__CheckUpdateAction_fn(Player* __this)
{
    __this->CheckUpdateAction();
}

// public void Disable() :2374
void Player__Disable_fn(Player* __this)
{
    __this->Disable();
}

// private void Done() :2359
void Player__Done_fn(Player* __this)
{
    __this->Done();
}

// public generated Uno.Action<object> get_DoneCallback() :2285
void Player__get_DoneCallback_fn(Player* __this, uDelegate** __retval)
{
    *__retval = __this->DoneCallback();
}

// public generated void set_DoneCallback(Uno.Action<object> value) :2285
void Player__set_DoneCallback_fn(Player* __this, uDelegate* value)
{
    __this->DoneCallback(value);
}

// public void FadeIn(double time) :2496
void Player__FadeIn_fn(Player* __this, double* time)
{
    __this->FadeIn(*time);
}

// public void FadeOut(double time) :2503
void Player__FadeOut_fn(Player* __this, double* time)
{
    __this->FadeOut(*time);
}

// internal bool get_IsSyncState() :2414
void Player__get_IsSyncState_fn(Player* __this, bool* __retval)
{
    *__retval = __this->IsSyncState();
}

// public generated Fuse.Animations.PlayMode get_Mode() :2252
void Player__get_Mode_fn(Player* __this, int* __retval)
{
    *__retval = __this->Mode();
}

// private generated void set_Mode(Fuse.Animations.PlayMode value) :2252
void Player__set_Mode_fn(Player* __this, int* value)
{
    __this->Mode(*value);
}

// public Player New(Fuse.Node elm, Fuse.Animations.TriggerAnimation animation, Fuse.Animations.AnimationVariant variant, Fuse.Animations.PlayMode mode) :2267
void Player__New1_fn(::g::Fuse::Node* elm, ::g::Fuse::Animations::TriggerAnimation* animation, int* variant, int* mode, Player** __retval)
{
    *__retval = Player::New1(elm, animation, *variant, *mode);
}

// public generated Fuse.Node get_Node() :2249
void Player__get_Node_fn(Player* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Node();
}

// private generated void set_Node(Fuse.Node value) :2249
void Player__set_Node_fn(Player* __this, ::g::Fuse::Node* value)
{
    __this->Node(value);
}

// public void PlayToEnd() :2468
void Player__PlayToEnd_fn(Player* __this)
{
    __this->PlayToEnd();
}

// public void PlayToProgress(double progress) :2459
void Player__PlayToProgress_fn(Player* __this, double* progress)
{
    __this->PlayToProgress(*progress);
}

// public void PlayToStart() :2476
void Player__PlayToStart_fn(Player* __this)
{
    __this->PlayToStart();
}

// public double get_Progress() :2388
void Player__get_Progress_fn(Player* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public double get_RemainTime() :2392
void Player__get_RemainTime_fn(Player* __this, double* __retval)
{
    *__retval = __this->RemainTime();
}

// public void SeekProgress(double progress, [bool triggerUpdate]) :2402
void Player__SeekProgress_fn(Player* __this, double* progress, bool* triggerUpdate)
{
    __this->SeekProgress(*progress, *triggerUpdate);
}

// private void Start() :2328
void Player__Start_fn(Player* __this)
{
    __this->Start();
}

// private Fuse.Animations.AnimatorState[] get_States() :2257
void Player__get_States_fn(Player* __this, uArray** __retval)
{
    *__retval = __this->States();
}

// private void Stop() :2337
void Player__Stop_fn(Player* __this)
{
    __this->Stop();
}

// public double get_Strength() :2488
void Player__get_Strength_fn(Player* __this, double* __retval)
{
    *__retval = __this->Strength();
}

// public void set_Strength(double value) :2489
void Player__set_Strength_fn(Player* __this, double* value)
{
    __this->Strength(*value);
}

// public void Suspend() :2349
void Player__Suspend_fn(Player* __this)
{
    __this->Suspend();
}

// public void TimeChanged() :2277
void Player__TimeChanged_fn(Player* __this)
{
    __this->TimeChanged();
}

// private bool UpdateStates(bool isInterval) :2428
void Player__UpdateStates_fn(Player* __this, bool* isInterval, bool* __retval)
{
    *__retval = __this->UpdateStates(*isInterval);
}

// public generated Fuse.Animations.AnimationVariant get_Variant() :2251
void Player__get_Variant_fn(Player* __this, int* __retval)
{
    *__retval = __this->Variant();
}

// public generated void set_Variant(Fuse.Animations.AnimationVariant value) :2251
void Player__set_Variant_fn(Player* __this, int* value)
{
    __this->Variant(*value);
}

// public Player(Fuse.Node elm, Fuse.Animations.TriggerAnimation animation, Fuse.Animations.AnimationVariant variant, Fuse.Animations.PlayMode mode) [instance] :2267
void Player::ctor_(::g::Fuse::Node* elm, ::g::Fuse::Animations::TriggerAnimation* animation, int variant, int mode)
{
    uStackFrame __("Fuse.Animations.Player", ".ctor(Fuse.Node,Fuse.Animations.TriggerAnimation,Fuse.Animations.AnimationVariant,Fuse.Animations.PlayMode)");
    _progress = ::g::Fuse::Animations::PlayerPart::New1(0.0);
    _seekDirection = 1;
    _strength = ::g::Fuse::Animations::PlayerPart::New1(1.0);
    Animation(animation);
    Node(elm);
    Variant(variant);
    Mode(mode);
    TimeChanged();
}

// public generated Fuse.Animations.TriggerAnimation get_Animation() [instance] :2250
::g::Fuse::Animations::TriggerAnimation* Player::Animation()
{
    uStackFrame __("Fuse.Animations.Player", "get_Animation()");
    return _Animation;
}

// private generated void set_Animation(Fuse.Animations.TriggerAnimation value) [instance] :2250
void Player::Animation(::g::Fuse::Animations::TriggerAnimation* value)
{
    uStackFrame __("Fuse.Animations.Player", "set_Animation(Fuse.Animations.TriggerAnimation)");
    _Animation = value;
}

// public double get_AnimatorsDuration() [instance] :2283
double Player::AnimatorsDuration()
{
    uStackFrame __("Fuse.Animations.Player", "get_AnimatorsDuration()");
    return uPtr(_progress)->Duration;
}

// internal bool get_AnyEffect() [instance] :2422
bool Player::AnyEffect()
{
    uStackFrame __("Fuse.Animations.Player", "get_AnyEffect()");
    return (uPtr(_progress)->Current > 0.0) && (uPtr(_strength)->Current > 0.0);
}

// private void CheckUpdate([bool interval]) [instance] :2290
void Player::CheckUpdate(bool interval)
{
    uStackFrame __("Fuse.Animations.Player", "CheckUpdate([bool])");
    bool running = false;

    if (uPtr(_progress)->Animate)
    {
        running = true;

        if (Mode() == 1)
            uPtr(_progress)->WrapStep();
        else
            uPtr(_progress)->Step();

        if (::g::Uno::Delegate::op_Inequality(ProgressUpdated, NULL))
            uPtr(ProgressUpdated)->InvokeVoid(this);
    }

    if (uPtr(_strength)->Animate)
    {
        running = true;
        uPtr(_strength)->Step();

        if (::g::Uno::Delegate::op_Inequality(StrengthUpdated, NULL))
            uPtr(StrengthUpdated)->InvokeVoid(this);
    }

    bool stable = UpdateStates(interval);

    if (stable && !running)
        Stop();
    else
        Start();

    if (!running)
        Done();
}

// private void CheckUpdateAction() [instance] :2288
void Player::CheckUpdateAction()
{
    uStackFrame __("Fuse.Animations.Player", "CheckUpdateAction()");
    CheckUpdate(true);
}

// public void Disable() [instance] :2374
void Player::Disable()
{
    uStackFrame __("Fuse.Animations.Player", "Disable()");
    Stop();

    if (_states != NULL)
    {
        for (int i = 0; i < uPtr(_states)->Length(); i++)
            uPtr(uPtr(_states)->Strong< ::g::Fuse::Animations::AnimatorState*>(i))->Disable();

        _states = NULL;
    }
}

// private void Done() [instance] :2359
void Player::Done()
{
    uStackFrame __("Fuse.Animations.Player", "Done()");
    uPtr(_progress)->Animate = false;
    uPtr(_strength)->Animate = false;

    if (!_isDone)
    {
        _isDone = true;

        if (::g::Uno::Delegate::op_Inequality(DoneCallback(), NULL))
            uPtr(DoneCallback())->InvokeVoid(this);
    }
}

// public generated Uno.Action<object> get_DoneCallback() [instance] :2285
uDelegate* Player::DoneCallback()
{
    uStackFrame __("Fuse.Animations.Player", "get_DoneCallback()");
    return _DoneCallback;
}

// public generated void set_DoneCallback(Uno.Action<object> value) [instance] :2285
void Player::DoneCallback(uDelegate* value)
{
    uStackFrame __("Fuse.Animations.Player", "set_DoneCallback(Uno.Action<object>)");
    _DoneCallback = value;
}

// public void FadeIn(double time) [instance] :2496
void Player::FadeIn(double time)
{
    uStackFrame __("Fuse.Animations.Player", "FadeIn(double)");
    uPtr(_strength)->AlterDuration(time, 1.0);
    uPtr(_strength)->PlayToEnd();
    CheckUpdate(false);
}

// public void FadeOut(double time) [instance] :2503
void Player::FadeOut(double time)
{
    uStackFrame __("Fuse.Animations.Player", "FadeOut(double)");
    uPtr(_strength)->AlterDuration(time, 1.0);
    uPtr(_strength)->PlayToStart();
    CheckUpdate(false);
}

// internal bool get_IsSyncState() [instance] :2414
bool Player::IsSyncState()
{
    uStackFrame __("Fuse.Animations.Player", "get_IsSyncState()");
    return (uPtr(_progress)->Current == 0.0) || (uPtr(_progress)->Progress() == 1.0);
}

// public generated Fuse.Animations.PlayMode get_Mode() [instance] :2252
int Player::Mode()
{
    uStackFrame __("Fuse.Animations.Player", "get_Mode()");
    return _Mode;
}

// private generated void set_Mode(Fuse.Animations.PlayMode value) [instance] :2252
void Player::Mode(int value)
{
    uStackFrame __("Fuse.Animations.Player", "set_Mode(Fuse.Animations.PlayMode)");
    _Mode = value;
}

// public generated Fuse.Node get_Node() [instance] :2249
::g::Fuse::Node* Player::Node()
{
    uStackFrame __("Fuse.Animations.Player", "get_Node()");
    return _Node;
}

// private generated void set_Node(Fuse.Node value) [instance] :2249
void Player::Node(::g::Fuse::Node* value)
{
    uStackFrame __("Fuse.Animations.Player", "set_Node(Fuse.Node)");
    _Node = value;
}

// public void PlayToEnd() [instance] :2468
void Player::PlayToEnd()
{
    uStackFrame __("Fuse.Animations.Player", "PlayToEnd()");
    _seekDirection = 0;
    uPtr(_progress)->PlayToEnd();
    _isDone = false;
    CheckUpdate(false);
}

// public void PlayToProgress(double progress) [instance] :2459
void Player::PlayToProgress(double progress)
{
    uStackFrame __("Fuse.Animations.Player", "PlayToProgress(double)");

    if (progress != uPtr(_progress)->Progress())
        _seekDirection = ((progress > uPtr(_progress)->Progress()) ? 0 : 1);

    uPtr(_progress)->PlayToProgress(progress);
    _isDone = false;
    CheckUpdate(false);
}

// public void PlayToStart() [instance] :2476
void Player::PlayToStart()
{
    uStackFrame __("Fuse.Animations.Player", "PlayToStart()");
    _seekDirection = 1;
    uPtr(_progress)->PlayToStart();
    _isDone = false;
    CheckUpdate(false);
}

// public double get_Progress() [instance] :2388
double Player::Progress()
{
    uStackFrame __("Fuse.Animations.Player", "get_Progress()");
    return uPtr(_progress)->Progress();
}

// public double get_RemainTime() [instance] :2392
double Player::RemainTime()
{
    uStackFrame __("Fuse.Animations.Player", "get_RemainTime()");

    if (uPtr(_progress)->IsProgress || (uPtr(_progress)->Duration < 9.9999997473787516e-06))
        return 0.0;

    return (Variant() == 0) ? uPtr(_progress)->Duration - uPtr(_progress)->Current : uPtr(_progress)->Current;
}

// public void SeekProgress(double progress, [bool triggerUpdate]) [instance] :2402
void Player::SeekProgress(double progress, bool triggerUpdate)
{
    uStackFrame __("Fuse.Animations.Player", "SeekProgress(double,[bool])");
    uPtr(_progress)->SeekProgress(progress);
    _isDone = true;
    CheckUpdate(false);

    if (triggerUpdate && ::g::Uno::Delegate::op_Inequality(ProgressUpdated, NULL))
        uPtr(ProgressUpdated)->InvokeVoid(this);
}

// private void Start() [instance] :2328
void Player::Start()
{
    uStackFrame __("Fuse.Animations.Player", "Start()");

    if (!_isStarted)
    {
        _isStarted = true;
        ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)Player__CheckUpdateAction_fn, this), 0);
    }
}

// private Fuse.Animations.AnimatorState[] get_States() [instance] :2257
uArray* Player::States()
{
    uStackFrame __("Fuse.Animations.Player", "get_States()");

    if (_states == NULL)
        _states = uPtr(Animation())->CreateAnimatorsState(Variant(), Node());

    return _states;
}

// private void Stop() [instance] :2337
void Player::Stop()
{
    uStackFrame __("Fuse.Animations.Player", "Stop()");

    if (_isStarted)
    {
        _isStarted = false;
        ::g::Fuse::UpdateManager::RemoveAction(uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)Player__CheckUpdateAction_fn, this), 0);

        if (!AnyEffect())
            Disable();
    }
}

// public double get_Strength() [instance] :2488
double Player::Strength()
{
    uStackFrame __("Fuse.Animations.Player", "get_Strength()");
    return uPtr(_strength)->Progress();
}

// public void set_Strength(double value) [instance] :2489
void Player::Strength(double value)
{
    uStackFrame __("Fuse.Animations.Player", "set_Strength(double)");
    uPtr(_strength)->SeekProgress(value);
    CheckUpdate(false);
}

// public void Suspend() [instance] :2349
void Player::Suspend()
{
    uStackFrame __("Fuse.Animations.Player", "Suspend()");
    uPtr(_progress)->Animate = false;
    uPtr(_strength)->Animate = false;
    CheckUpdate(false);
}

// public void TimeChanged() [instance] :2277
void Player::TimeChanged()
{
    uStackFrame __("Fuse.Animations.Player", "TimeChanged()");
    uPtr(_progress)->AlterDuration(uPtr(Animation())->GetAnimatorsDuration(Variant()), uPtr(Animation())->GetTimeMultiplier(Variant()));
}

// private bool UpdateStates(bool isInterval) [instance] :2428
bool Player::UpdateStates(bool isInterval)
{
    uStackFrame __("Fuse.Animations.Player", "UpdateStates(bool)");
    bool allStable = true;
    double interval = isInterval ? ::g::Fuse::Time::FrameInterval() * uPtr(_progress)->TimeMultiplier() : 0.0;

    if (_seekDirection == 1)
        interval = -interval;

    for (int i = 0; i < uPtr(States())->Length(); ++i)
    {
        ::g::Fuse::Animations::AnimatorState* s = uPtr(States())->Strong< ::g::Fuse::Animations::AnimatorState*>(i);
        int stable;

        if (uPtr(_progress)->IsProgress)
            stable = uPtr(s)->SeekProgress(uPtr(_progress)->Current, interval, _seekDirection, uPtr(_strength)->Progress());
        else
            stable = s->SeekTime(uPtr(_progress)->Current, interval, _seekDirection, uPtr(_strength)->Progress());

        allStable = allStable && ((stable & 2) == 2);
    }

    return allStable;
}

// public generated Fuse.Animations.AnimationVariant get_Variant() [instance] :2251
int Player::Variant()
{
    uStackFrame __("Fuse.Animations.Player", "get_Variant()");
    return _Variant;
}

// public generated void set_Variant(Fuse.Animations.AnimationVariant value) [instance] :2251
void Player::Variant(int value)
{
    uStackFrame __("Fuse.Animations.Player", "set_Variant(Fuse.Animations.AnimationVariant)");
    _Variant = value;
}

// public Player New(Fuse.Node elm, Fuse.Animations.TriggerAnimation animation, Fuse.Animations.AnimationVariant variant, Fuse.Animations.PlayMode mode) [static] :2267
Player* Player::New1(::g::Fuse::Node* elm, ::g::Fuse::Animations::TriggerAnimation* animation, int variant, int mode)
{
    Player* obj1 = (Player*)uNew(Player_typeof());
    obj1->ctor_(elm, animation, variant, mode);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#14
// --------------------------------------------------------------

// internal sealed class PlayerPart :2097
// {
uType* PlayerPart_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(PlayerPart);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Animations.PlayerPart", options);
    ::TYPES[12] = ::g::Fuse::Time_typeof();
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, _stepTime), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, _timeMultiplier), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, Animate), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, Current), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, Duration), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, IsProgress), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, Source), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, SourceTime), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::PlayerPart, Target), 0);
    return type;
}

// public PlayerPart([double currentProgress]) :2107
void PlayerPart__ctor__fn(PlayerPart* __this, double* currentProgress)
{
    __this->ctor_(*currentProgress);
}

// public void AlterDuration(double t, double timeMult) :2232
void PlayerPart__AlterDuration_fn(PlayerPart* __this, double* t, double* timeMult)
{
    __this->AlterDuration(*t, *timeMult);
}

// private void MarkSource(bool isAnimating) :2139
void PlayerPart__MarkSource_fn(PlayerPart* __this, bool* isAnimating)
{
    __this->MarkSource(*isAnimating);
}

// public PlayerPart New([double currentProgress]) :2107
void PlayerPart__New1_fn(double* currentProgress, PlayerPart** __retval)
{
    *__retval = PlayerPart::New1(*currentProgress);
}

// public void PlayToEnd() :2151
void PlayerPart__PlayToEnd_fn(PlayerPart* __this)
{
    __this->PlayToEnd();
}

// public void PlayToProgress(double progress) :2113
void PlayerPart__PlayToProgress_fn(PlayerPart* __this, double* progress)
{
    __this->PlayToProgress(*progress);
}

// public void PlayToStart() :2156
void PlayerPart__PlayToStart_fn(PlayerPart* __this)
{
    __this->PlayToStart();
}

// public double get_Progress() :2222
void PlayerPart__get_Progress_fn(PlayerPart* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public void SeekProgress(double p) :2204
void PlayerPart__SeekProgress_fn(PlayerPart* __this, double* p)
{
    __this->SeekProgress(*p);
}

// public void Step() :2162
void PlayerPart__Step_fn(PlayerPart* __this)
{
    __this->Step();
}

// public double get_TimeMultiplier() :2241
void PlayerPart__get_TimeMultiplier_fn(PlayerPart* __this, double* __retval)
{
    *__retval = __this->TimeMultiplier();
}

// public void WrapStep() :2183
void PlayerPart__WrapStep_fn(PlayerPart* __this)
{
    __this->WrapStep();
}

// public PlayerPart([double currentProgress]) [instance] :2107
void PlayerPart::ctor_(double currentProgress)
{
    uStackFrame __("Fuse.Animations.PlayerPart", ".ctor([double])");
    _timeMultiplier = 1.0;
    IsProgress = true;
    Current = currentProgress;
}

// public void AlterDuration(double t, double timeMult) [instance] :2232
void PlayerPart::AlterDuration(double t, double timeMult)
{
    uStackFrame __("Fuse.Animations.PlayerPart", "AlterDuration(double,double)");
    _timeMultiplier = timeMult;
    MarkSource(Animate);
    double p = Progress();
    Duration = t;
    SeekProgress(p);
}

// private void MarkSource(bool isAnimating) [instance] :2139
void PlayerPart::MarkSource(bool isAnimating)
{
    uStackFrame __("Fuse.Animations.PlayerPart", "MarkSource(bool)");
    Source = Current;

    if (isAnimating && (_stepTime < ::g::Fuse::Time::FrameTime()))
        SourceTime = (::g::Fuse::Time::FrameTime() - (::g::Fuse::Time::FrameInterval() * _timeMultiplier));
    else
        SourceTime = ::g::Fuse::Time::FrameTime();
}

// public void PlayToEnd() [instance] :2151
void PlayerPart::PlayToEnd()
{
    uStackFrame __("Fuse.Animations.PlayerPart", "PlayToEnd()");
    PlayToProgress(1.0);
}

// public void PlayToProgress(double progress) [instance] :2113
void PlayerPart::PlayToProgress(double progress)
{
    uStackFrame __("Fuse.Animations.PlayerPart", "PlayToProgress(double)");
    bool nIsProgress;
    double nTarget;

    if (Duration < 9.9999997473787516e-06)
    {
        nIsProgress = true;
        nTarget = progress;
    }
    else
    {
        nIsProgress = false;
        nTarget = progress * Duration;
    }

    if (((nIsProgress == IsProgress) && (nTarget == Target)) && Animate)
        return;

    MarkSource(Animate);
    Animate = true;
    IsProgress = nIsProgress;
    Target = nTarget;
}

// public void PlayToStart() [instance] :2156
void PlayerPart::PlayToStart()
{
    uStackFrame __("Fuse.Animations.PlayerPart", "PlayToStart()");
    PlayToProgress(0.0);
}

// public double get_Progress() [instance] :2222
double PlayerPart::Progress()
{
    uStackFrame __("Fuse.Animations.PlayerPart", "get_Progress()");

    if (IsProgress)
        return Current;
    else
        return ::g::Uno::Math::Clamp(Current / Duration, 0.0, 1.0);
}

// public void SeekProgress(double p) [instance] :2204
void PlayerPart::SeekProgress(double p)
{
    uStackFrame __("Fuse.Animations.PlayerPart", "SeekProgress(double)");
    p = ::g::Uno::Math::Clamp(p, 0.0, 1.0);
    Animate = false;

    if (Duration < 9.9999997473787516e-06)
    {
        IsProgress = true;
        Current = p;
    }
    else
    {
        IsProgress = false;
        Current = (p * Duration);
    }
}

// public void Step() [instance] :2162
void PlayerPart::Step()
{
    uStackFrame __("Fuse.Animations.PlayerPart", "Step()");
    _stepTime = ::g::Fuse::Time::FrameTime();
    double elapsed = (::g::Fuse::Time::FrameTime() - SourceTime) * _timeMultiplier;

    if (Target > Source)
        Current = (IsProgress ? 1.0 : ::g::Uno::Math::Min(elapsed + Source, Duration));
    else
        Current = (IsProgress ? 0.0 : ::g::Uno::Math::Max(Source - elapsed, 0.0));

    if (((Target >= Source) && (Current >= Target)) || ((Target <= Source) && (Current <= Target)))
    {
        Current = Target;
        Animate = false;
    }
}

// public double get_TimeMultiplier() [instance] :2241
double PlayerPart::TimeMultiplier()
{
    uStackFrame __("Fuse.Animations.PlayerPart", "get_TimeMultiplier()");
    return _timeMultiplier;
}

// public void WrapStep() [instance] :2183
void PlayerPart::WrapStep()
{
    uStackFrame __("Fuse.Animations.PlayerPart", "WrapStep()");

    if (IsProgress || ((Target > 0.0) && (Target < 1.0)))
    {
        Step();
        return;
    }

    _stepTime = ::g::Fuse::Time::FrameTime();
    double elapsed = (::g::Fuse::Time::FrameTime() - SourceTime) * _timeMultiplier;

    if (Target > Source)
        Current = ::g::Uno::Math::Mod(elapsed + Source, Duration);
    else
        Current = ::g::Uno::Math::Mod(Source - elapsed, Duration);
}

// public PlayerPart New([double currentProgress]) [static] :2107
PlayerPart* PlayerPart::New1(double currentProgress)
{
    PlayerPart* obj1 = (PlayerPart*)uNew(PlayerPart_typeof());
    obj1->ctor_(currentProgress);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#21
// --------------------------------------------------------------

// public enum PlayMode :3591
uEnumType* PlayMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.PlayMode", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Once", 0LL,
        "Wrap", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#18
// --------------------------------------------------------------

// private delegate float4 SplineTrack.PointInterpolater(float4 p0, float4 p1, float4 m0, float4 m1, float t) :2903
uDelegateType* SplineTrack__PointInterpolater_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Animations.SplineTrack.PointInterpolater", 5, 0);
    type->SetSignature(::g::Uno::Float4_typeof(),
        ::g::Uno::Float4_typeof(),
        ::g::Uno::Float4_typeof(),
        ::g::Uno::Float4_typeof(),
        ::g::Uno::Float4_typeof(),
        ::g::Uno::Float_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#15
// --------------------------------------------------------------

// public sealed class RangeAdapter<T> :2526
// {
::g::Fuse::Behavior_type* RangeAdapter_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 4;
    options.ObjectSize = sizeof(RangeAdapter);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Animations.RangeAdapter`1", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))RangeAdapter__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))RangeAdapter__OnUnrooted_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    ::TYPES[17] = ::g::Fuse::Internal::BlenderMap_typeof();
    ::TYPES[4] = ::g::Uno::UX::Property_typeof();
    ::TYPES[5] = ::g::Uno::UX::ValueChangedHandler_typeof();
    ::TYPES[55] = ::g::Uno::Delegate_typeof();
    ::TYPES[14] = uObject_typeof();
    ::TYPES[10] = ::g::Uno::UX::ValueChangedArgs_typeof();
    type->SetPrecalc(
        ::TYPES[17/*Fuse.Internal.BlenderMap*/]->MakeMethod(1, type->T(0)),
        ::TYPES[4/*Uno.UX.Property`1*/]->MakeType(type->T(0)),
        ::TYPES[5/*Uno.UX.ValueChangedHandler`1*/]->MakeType(type->T(0)),
        ::TYPES[10/*Uno.UX.ValueChangedArgs`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::Behavior_type, interface0));
    type->SetFields(3,
        ::g::Fuse::Internal::ScalarBlender_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::RangeAdapter, _blender), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::RangeAdapter, _sourceRangeMax), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::RangeAdapter, _sourceRangeMin), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::RangeAdapter, _valueRangeMax), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::RangeAdapter, _valueRangeMin), 0,
        ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::RangeAdapter, _Source), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::RangeAdapter, ValueChanged1), 0);
    type->Reflection.SetFunctions(15,
        new uFunction(".ctor", type, (void*)RangeAdapter__New1_fn, 0, true, type, 1, ::g::Uno::UX::Property_typeof()->MakeType(type->T(0))),
        new uFunction("SetValue", NULL, (void*)RangeAdapter__SetValue_fn, 0, false, uVoid_typeof(), 2, type->T(0), uObject_typeof()),
        new uFunction("get_Source", NULL, (void*)RangeAdapter__get_Source_fn, 0, false, ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), 0),
        new uFunction("get_SourceRangeMax", NULL, (void*)RangeAdapter__get_SourceRangeMax_fn, 0, false, type->T(0), 0),
        new uFunction("set_SourceRangeMax", NULL, (void*)RangeAdapter__set_SourceRangeMax_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("get_SourceRangeMin", NULL, (void*)RangeAdapter__get_SourceRangeMin_fn, 0, false, type->T(0), 0),
        new uFunction("set_SourceRangeMin", NULL, (void*)RangeAdapter__set_SourceRangeMin_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("get_Value", NULL, (void*)RangeAdapter__get_Value_fn, 0, false, type->T(0), 0),
        new uFunction("set_Value", NULL, (void*)RangeAdapter__set_Value_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("add_ValueChanged", NULL, (void*)RangeAdapter__add_ValueChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(type->T(0))),
        new uFunction("remove_ValueChanged", NULL, (void*)RangeAdapter__remove_ValueChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(type->T(0))),
        new uFunction("get_ValueRangeMax", NULL, (void*)RangeAdapter__get_ValueRangeMax_fn, 0, false, type->T(0), 0),
        new uFunction("set_ValueRangeMax", NULL, (void*)RangeAdapter__set_ValueRangeMax_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("get_ValueRangeMin", NULL, (void*)RangeAdapter__get_ValueRangeMin_fn, 0, false, type->T(0), 0),
        new uFunction("set_ValueRangeMin", NULL, (void*)RangeAdapter__set_ValueRangeMin_fn, 0, false, uVoid_typeof(), 1, type->T(0)));
    return type;
}

// public RangeAdapter(Uno.UX.Property<T> source) :2533
void RangeAdapter__ctor_1_fn(RangeAdapter* __this, ::g::Uno::UX::Property* source)
{
    __this->ctor_1(source);
}

// private T In(T value) :2606
void RangeAdapter__In_fn(RangeAdapter* __this, void* value, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "In(T)");
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    double ret2;
    ;
    double dst = (uPtr(__this->_blender)->ToDouble_ex(value, &ret2), ret2);
    double rel = (dst - __this->_valueRangeMin) / (__this->_valueRangeMax - __this->_valueRangeMin);
    double src = (rel * (__this->_sourceRangeMax - __this->_sourceRangeMin)) + __this->_sourceRangeMin;
    return __retval.Store((uPtr(__this->_blender)->FromDouble_ex(uCRef(src), &ret3), ret3)), void();
}

// public RangeAdapter New(Uno.UX.Property<T> source) :2533
void RangeAdapter__New1_fn(uType* __type, ::g::Uno::UX::Property* source, RangeAdapter** __retval)
{
    *__retval = RangeAdapter::New1(__type, source);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :2552
void RangeAdapter__OnRooted_fn(RangeAdapter* __this, ::g::Fuse::Node* parentNode)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Uno.UX.Property<T>*/),
        __this->__type->T(0),
        __this->__type->Precalced(2/*Uno.UX.ValueChangedHandler<T>*/),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "OnRooted(Fuse.Node)");
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    uPtr(__this->Source())->add_ValueChanged(uDelegate::New(__types[2], (void*)RangeAdapter__OnSourceValueChanged_fn, __this));
}

// private void OnSourceValueChanged(object s, Uno.UX.ValueChangedArgs<T> args) :2564
void RangeAdapter__OnSourceValueChanged_fn(RangeAdapter* __this, uObject* s, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnSourceValueChanged(s, args);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :2558
void RangeAdapter__OnUnrooted_fn(RangeAdapter* __this, ::g::Fuse::Node* parentNode)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Uno.UX.Property<T>*/),
        __this->__type->T(0),
        __this->__type->Precalced(2/*Uno.UX.ValueChangedHandler<T>*/),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "OnUnrooted(Fuse.Node)");
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
    uPtr(__this->Source())->remove_ValueChanged(uDelegate::New(__types[2], (void*)RangeAdapter__OnSourceValueChanged_fn, __this));
}

// private T Out(T value) :2597
void RangeAdapter__Out_fn(RangeAdapter* __this, void* value, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "Out(T)");
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    double ret7;
    ;
    double src = (uPtr(__this->_blender)->ToDouble_ex(value, &ret7), ret7);
    double rel = (src - __this->_sourceRangeMin) / (__this->_sourceRangeMax - __this->_sourceRangeMin);
    double dst = (rel * (__this->_valueRangeMax - __this->_valueRangeMin)) + __this->_valueRangeMin;
    return __retval.Store((uPtr(__this->_blender)->FromDouble_ex(uCRef(dst), &ret8), ret8)), void();
}

// public void SetValue(T value, object origin) :2545
void RangeAdapter__SetValue_fn(RangeAdapter* __this, void* value, uObject* origin)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "SetValue(T,object)");
    uT ret9(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ::g::Uno::UX::Property__Set_fn(uPtr(__this->Source()), (RangeAdapter__In_fn(__this, value, &ret9), ret9), origin);
}

// public generated Uno.UX.Property<T> get_Source() :2528
void RangeAdapter__get_Source_fn(RangeAdapter* __this, ::g::Uno::UX::Property** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Uno.UX.Property<T> value) :2528
void RangeAdapter__set_Source_fn(RangeAdapter* __this, ::g::Uno::UX::Property* value)
{
    __this->Source(value);
}

// public T get_SourceRangeMax() :2579
void RangeAdapter__get_SourceRangeMax_fn(RangeAdapter* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "get_SourceRangeMax()");
    uT ret10(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return __retval.Store((uPtr(__this->_blender)->FromDouble_ex(uCRef(__this->_sourceRangeMax), &ret10), ret10)), void();
}

// public void set_SourceRangeMax(T value) :2580
void RangeAdapter__set_SourceRangeMax_fn(RangeAdapter* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "set_SourceRangeMax(T)");
    double ret11;
    __this->_sourceRangeMax = (uPtr(__this->_blender)->ToDouble_ex(value, &ret11), ret11);
}

// public T get_SourceRangeMin() :2573
void RangeAdapter__get_SourceRangeMin_fn(RangeAdapter* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "get_SourceRangeMin()");
    uT ret12(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return __retval.Store((uPtr(__this->_blender)->FromDouble_ex(uCRef(__this->_sourceRangeMin), &ret12), ret12)), void();
}

// public void set_SourceRangeMin(T value) :2574
void RangeAdapter__set_SourceRangeMin_fn(RangeAdapter* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "set_SourceRangeMin(T)");
    double ret13;
    __this->_sourceRangeMin = (uPtr(__this->_blender)->ToDouble_ex(value, &ret13), ret13);
}

// public T get_Value() :2541
void RangeAdapter__get_Value_fn(RangeAdapter* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "get_Value()");
    uT ret14(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret15(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ;
    return __retval.Store((RangeAdapter__Out_fn(__this, (::g::Uno::UX::Property__Get_fn(uPtr(__this->Source()), &ret15), ret15), &ret14), ret14)), void();
}

// public void set_Value(T value) :2542
void RangeAdapter__set_Value_fn(RangeAdapter* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "set_Value(T)");
    RangeAdapter__SetValue_fn(__this, value, __this);
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<T> value) :2550
void RangeAdapter__add_ValueChanged_fn(RangeAdapter* __this, uDelegate* value)
{
    __this->add_ValueChanged(value);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<T> value) :2550
void RangeAdapter__remove_ValueChanged_fn(RangeAdapter* __this, uDelegate* value)
{
    __this->remove_ValueChanged(value);
}

// public T get_ValueRangeMax() :2592
void RangeAdapter__get_ValueRangeMax_fn(RangeAdapter* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "get_ValueRangeMax()");
    uT ret16(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return __retval.Store((uPtr(__this->_blender)->FromDouble_ex(uCRef(__this->_valueRangeMax), &ret16), ret16)), void();
}

// public void set_ValueRangeMax(T value) :2593
void RangeAdapter__set_ValueRangeMax_fn(RangeAdapter* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "set_ValueRangeMax(T)");
    double ret17;
    __this->_valueRangeMax = (uPtr(__this->_blender)->ToDouble_ex(value, &ret17), ret17);
}

// public T get_ValueRangeMin() :2586
void RangeAdapter__get_ValueRangeMin_fn(RangeAdapter* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "get_ValueRangeMin()");
    uT ret18(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    return __retval.Store((uPtr(__this->_blender)->FromDouble_ex(uCRef(__this->_valueRangeMin), &ret18), ret18)), void();
}

// public void set_ValueRangeMin(T value) :2587
void RangeAdapter__set_ValueRangeMin_fn(RangeAdapter* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "set_ValueRangeMin(T)");
    double ret19;
    __this->_valueRangeMin = (uPtr(__this->_blender)->ToDouble_ex(value, &ret19), ret19);
}

// public RangeAdapter(Uno.UX.Property<T> source) [instance] :2533
void RangeAdapter::ctor_1(::g::Uno::UX::Property* source)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.BlenderMap.GetScalar<T>*/),
        __type->T(0),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", ".ctor(Uno.UX.Property<T>)");
    _blender = ((::g::Fuse::Internal::ScalarBlender*)::g::Fuse::Internal::BlenderMap::GetScalar(__types[0]));
    _sourceRangeMin = 0.0;
    _sourceRangeMax = 1.0;
    _valueRangeMin = 0.0;
    _valueRangeMax = 1.0;
    ctor_();
    Source(source);
}

// private void OnSourceValueChanged(object s, Uno.UX.ValueChangedArgs<T> args) [instance] :2564
void RangeAdapter::OnSourceValueChanged(uObject* s, ::g::Uno::UX::ValueChangedArgs* args)
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(2/*Uno.UX.ValueChangedHandler<T>*/),
        __type->Precalced(3/*Uno.UX.ValueChangedArgs<T>*/),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "OnSourceValueChanged(object,Uno.UX.ValueChangedArgs<T>)");
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::Uno::UX::ValueChangedArgs* ret4;
    ;
    ;

    if (::g::Uno::Delegate::op_Inequality(ValueChanged1, NULL))
        uPtr(ValueChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(__types[2], (RangeAdapter__Out_fn(this, (::g::Uno::UX::ValueChangedArgs__get_Value_fn(uPtr(args), &ret6), ret6), &ret5), ret5), uPtr(args)->Origin(), &ret4), ret4));
}

// public generated Uno.UX.Property<T> get_Source() [instance] :2528
::g::Uno::UX::Property* RangeAdapter::Source()
{
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "get_Source()");
    return _Source;
}

// private generated void set_Source(Uno.UX.Property<T> value) [instance] :2528
void RangeAdapter::Source(::g::Uno::UX::Property* value)
{
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "set_Source(Uno.UX.Property<T>)");
    _Source = value;
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<T> value) [instance] :2550
void RangeAdapter::add_ValueChanged(uDelegate* value)
{
    uType* __types[] = {
        __type->Precalced(2/*Uno.UX.ValueChangedHandler<T>*/),
        __type->T(0),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "add_ValueChanged(Uno.UX.ValueChangedHandler<T>)");
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ValueChanged1, value), __types[0]);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<T> value) [instance] :2550
void RangeAdapter::remove_ValueChanged(uDelegate* value)
{
    uType* __types[] = {
        __type->Precalced(2/*Uno.UX.ValueChangedHandler<T>*/),
        __type->T(0),
    };
    uStackFrame __("Fuse.Animations.RangeAdapter`1", "remove_ValueChanged(Uno.UX.ValueChangedHandler<T>)");
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ValueChanged1, value), __types[0]);
}

// public RangeAdapter New(Uno.UX.Property<T> source) [static] :2533
RangeAdapter* RangeAdapter::New1(uType* __type, ::g::Uno::UX::Property* source)
{
    RangeAdapter* obj1 = (RangeAdapter*)uNew(__type);
    obj1->ctor_1(source);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#16
// --------------------------------------------------------------

// public sealed class Resize :2632
// {
::g::Fuse::Animations::Animator_type* Resize_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 21;
    options.ObjectSize = sizeof(Resize);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.Resize", options);
    type->SetBase(::g::Fuse::Animations::TrackAnimator_typeof());
    type->fp_ctor_ = (void*)Resize__New1_fn;
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))Resize__CreateState_fn;
    ::TYPES[47] = ::g::Fuse::Animations::AnimatorState_typeof();
    ::TYPES[50] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[38] = ::g::Uno::Float4_typeof();
    type->SetFields(18,
        ::g::Fuse::Animations::IResizeMode_typeof(), offsetof(::g::Fuse::Animations::Resize, _resizeMode), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Animations::Resize, _RelativeNode), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Animations::Resize, _Target), 0);
    type->Reflection.SetFunctions(13,
        new uFunction(".ctor", NULL, (void*)Resize__New1_fn, 0, true, Resize_typeof(), 0),
        new uFunction("get_RelativeNode", NULL, (void*)Resize__get_RelativeNode_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_RelativeNode", NULL, (void*)Resize__set_RelativeNode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("get_RelativeTo", NULL, (void*)Resize__get_RelativeTo_fn, 0, false, ::g::Fuse::Animations::IResizeMode_typeof(), 0),
        new uFunction("set_RelativeTo", NULL, (void*)Resize__set_RelativeTo_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::IResizeMode_typeof()),
        new uFunction("get_Target", NULL, (void*)Resize__get_Target_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)Resize__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("get_Vector", NULL, (void*)Resize__get_Vector_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Vector", NULL, (void*)Resize__set_Vector_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_X", NULL, (void*)Resize__get_X_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_X", NULL, (void*)Resize__set_X_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Y", NULL, (void*)Resize__get_Y_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Y", NULL, (void*)Resize__set_Y_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}

// public generated Resize() :2632
void Resize__ctor_2_fn(Resize* __this)
{
    __this->ctor_2();
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :2663
void Resize__CreateState_fn(Resize* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    uStackFrame __("Fuse.Animations.Resize", "CreateState(Fuse.Animations.CreateStateParams)");
    return *__retval = ::g::Fuse::Animations::ResizeAnimatorState::New1(__this, p), void();
}

// public generated Resize New() :2632
void Resize__New1_fn(Resize** __retval)
{
    *__retval = Resize::New1();
}

// public generated Fuse.Node get_RelativeNode() :2636
void Resize__get_RelativeNode_fn(Resize* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->RelativeNode();
}

// public generated void set_RelativeNode(Fuse.Node value) :2636
void Resize__set_RelativeNode_fn(Resize* __this, ::g::Fuse::Node* value)
{
    __this->RelativeNode(value);
}

// public Fuse.Animations.IResizeMode get_RelativeTo() :2641
void Resize__get_RelativeTo_fn(Resize* __this, uObject** __retval)
{
    *__retval = __this->RelativeTo();
}

// public void set_RelativeTo(Fuse.Animations.IResizeMode value) :2642
void Resize__set_RelativeTo_fn(Resize* __this, uObject* value)
{
    __this->RelativeTo(value);
}

// public generated Fuse.Node get_Target() :2634
void Resize__get_Target_fn(Resize* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Node value) :2634
void Resize__set_Target_fn(Resize* __this, ::g::Fuse::Node* value)
{
    __this->Target(value);
}

// public float2 get_Vector() :2659
void Resize__get_Vector_fn(Resize* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Vector();
}

// public void set_Vector(float2 value) :2660
void Resize__set_Vector_fn(Resize* __this, ::g::Uno::Float2* value)
{
    __this->Vector(*value);
}

// public float get_X() :2647
void Resize__get_X_fn(Resize* __this, float* __retval)
{
    *__retval = __this->X();
}

// public void set_X(float value) :2648
void Resize__set_X_fn(Resize* __this, float* value)
{
    __this->X(*value);
}

// public float get_Y() :2653
void Resize__get_Y_fn(Resize* __this, float* __retval)
{
    *__retval = __this->Y();
}

// public void set_Y(float value) :2654
void Resize__set_Y_fn(Resize* __this, float* value)
{
    __this->Y(*value);
}

// public generated Resize() [instance] :2632
void Resize::ctor_2()
{
    uStackFrame __("Fuse.Animations.Resize", ".ctor()");
    ctor_1();
}

// public generated Fuse.Node get_RelativeNode() [instance] :2636
::g::Fuse::Node* Resize::RelativeNode()
{
    uStackFrame __("Fuse.Animations.Resize", "get_RelativeNode()");
    return _RelativeNode;
}

// public generated void set_RelativeNode(Fuse.Node value) [instance] :2636
void Resize::RelativeNode(::g::Fuse::Node* value)
{
    uStackFrame __("Fuse.Animations.Resize", "set_RelativeNode(Fuse.Node)");
    _RelativeNode = value;
}

// public Fuse.Animations.IResizeMode get_RelativeTo() [instance] :2641
uObject* Resize::RelativeTo()
{
    uStackFrame __("Fuse.Animations.Resize", "get_RelativeTo()");
    return _resizeMode;
}

// public void set_RelativeTo(Fuse.Animations.IResizeMode value) [instance] :2642
void Resize::RelativeTo(uObject* value)
{
    uStackFrame __("Fuse.Animations.Resize", "set_RelativeTo(Fuse.Animations.IResizeMode)");
    _resizeMode = value;
}

// public generated Fuse.Node get_Target() [instance] :2634
::g::Fuse::Node* Resize::Target()
{
    uStackFrame __("Fuse.Animations.Resize", "get_Target()");
    return _Target;
}

// public generated void set_Target(Fuse.Node value) [instance] :2634
void Resize::Target(::g::Fuse::Node* value)
{
    uStackFrame __("Fuse.Animations.Resize", "set_Target(Fuse.Node)");
    _Target = value;
}

// public float2 get_Vector() [instance] :2659
::g::Uno::Float2 Resize::Vector()
{
    uStackFrame __("Fuse.Animations.Resize", "get_Vector()");
    ::g::Uno::Float4 ind1 = _vectorValue;
    return ::g::Uno::Float2__New2(ind1.X, ind1.Y);
}

// public void set_Vector(float2 value) [instance] :2660
void Resize::Vector(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Animations.Resize", "set_Vector(float2)");
    ::g::Uno::Float4 ind2;
    _vectorValue = ::g::Uno::Float4__New7(value, (ind2 = _vectorValue, ::g::Uno::Float2__New2(ind2.Z, ind2.W)));
}

// public float get_X() [instance] :2647
float Resize::X()
{
    uStackFrame __("Fuse.Animations.Resize", "get_X()");
    return _vectorValue.X;
}

// public void set_X(float value) [instance] :2648
void Resize::X(float value)
{
    uStackFrame __("Fuse.Animations.Resize", "set_X(float)");
    _vectorValue.X = value;
}

// public float get_Y() [instance] :2653
float Resize::Y()
{
    uStackFrame __("Fuse.Animations.Resize", "get_Y()");
    return _vectorValue.Y;
}

// public void set_Y(float value) [instance] :2654
void Resize::Y(float value)
{
    uStackFrame __("Fuse.Animations.Resize", "set_Y(float)");
    _vectorValue.Y = value;
}

// public generated Resize New() [static] :2632
Resize* Resize::New1()
{
    Resize* obj3 = (Resize*)uNew(Resize_typeof());
    obj3->ctor_2();
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#16
// --------------------------------------------------------------

// internal sealed class ResizeAnimatorState :2669
// {
::g::Fuse::Animations::TrackAnimatorState_type* ResizeAnimatorState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.ObjectSize = sizeof(ResizeAnimatorState);
    options.TypeSize = sizeof(::g::Fuse::Animations::TrackAnimatorState_type);
    type = (::g::Fuse::Animations::TrackAnimatorState_type*)uClassType::New("Fuse.Animations.ResizeAnimatorState", options);
    type->SetBase(::g::Fuse::Animations::TrackAnimatorState_typeof());
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))ResizeAnimatorState__Disable_fn;
    type->fp_SeekValue = (void(*)(::g::Fuse::Animations::TrackAnimatorState*, ::g::Uno::Float4*, float*))ResizeAnimatorState__SeekValue_fn;
    ::STRINGS[10] = uString::Const("Resize started without a Target node");
    ::STRINGS[11] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#16");
    ::STRINGS[12] = uString::Const(".ctor");
    ::STRINGS[13] = uString::Const("Resize started without as RelativeTo");
    ::TYPES[50] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[82] = ::g::Fuse::Animations::Resize_typeof();
    ::TYPES[83] = ::g::Fuse::Animations::IResize_typeof();
    ::TYPES[47] = ::g::Fuse::Animations::AnimatorState_typeof();
    ::TYPES[14] = uObject_typeof();
    ::TYPES[15] = ::g::Uno::Int_typeof();
    ::TYPES[84] = ::g::Fuse::ITransformMode_typeof();
    ::TYPES[85] = ::g::Fuse::IActualPlacement_typeof();
    ::TYPES[86] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[7] = ::g::Uno::Bool_typeof();
    ::TYPES[38] = ::g::Uno::Float4_typeof();
    type->SetFields(6,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::ResizeAnimatorState, _lastStrength), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Animations::ResizeAnimatorState, _lastValue), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Animations::ResizeAnimatorState, _relativeNode), 0,
        ::g::Fuse::Animations::IResizeMode_typeof(), offsetof(::g::Fuse::Animations::ResizeAnimatorState, _relativeTo), 0,
        ::g::Fuse::Animations::Resize_typeof(), offsetof(::g::Fuse::Animations::ResizeAnimatorState, _resize), 0,
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Animations::ResizeAnimatorState, _target), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::ResizeAnimatorState, _valid), 0);
    return type;
}

// public ResizeAnimatorState(Fuse.Animations.Resize r, Fuse.Animations.CreateStateParams p) :2677
void ResizeAnimatorState__ctor_2_fn(ResizeAnimatorState* __this, ::g::Fuse::Animations::Resize* r, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(r, p);
}

// public override sealed void Disable() :2711
void ResizeAnimatorState__Disable_fn(ResizeAnimatorState* __this)
{
    uStackFrame __("Fuse.Animations.ResizeAnimatorState", "Disable()");
    ::g::Fuse::Animations::AnimatorState__Disable_fn(__this);

    if (!__this->_valid)
        return;

    uObject* e = uAs<uObject*>(__this->_target, ::TYPES[85/*Fuse.IActualPlacement*/]);

    if (e != NULL)
        ::g::Fuse::IActualPlacement::remove_Placed(uInterface(uPtr(e), ::TYPES[85/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[86/*Fuse.PlacedHandler*/], (void*)ResizeAnimatorState__OnPlaced_fn, __this));

    if ((::g::Fuse::ITransformMode::Flags(uInterface(uPtr(__this->_relativeTo), ::TYPES[84/*Fuse.ITransformMode*/])) & 1) == 1)
    {
        uObject* elm = uAs<uObject*>(__this->_relativeNode, ::TYPES[85/*Fuse.IActualPlacement*/]);

        if (elm != NULL)
            ::g::Fuse::IActualPlacement::remove_Placed(uInterface(uPtr(elm), ::TYPES[85/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[86/*Fuse.PlacedHandler*/], (void*)ResizeAnimatorState__OnPlaced_fn, __this));
    }
}

// public ResizeAnimatorState New(Fuse.Animations.Resize r, Fuse.Animations.CreateStateParams p) :2677
void ResizeAnimatorState__New1_fn(::g::Fuse::Animations::Resize* r, ::g::Fuse::Animations::CreateStateParams* p, ResizeAnimatorState** __retval)
{
    *__retval = ResizeAnimatorState::New1(r, p);
}

// private void OnPlaced(object s, object a) :2753
void ResizeAnimatorState__OnPlaced_fn(ResizeAnimatorState* __this, uObject* s, uObject* a)
{
    __this->OnPlaced(s, a);
}

// protected override sealed void SeekValue(float4 value, float strength) :2731
void ResizeAnimatorState__SeekValue_fn(ResizeAnimatorState* __this, ::g::Uno::Float4* value, float* strength)
{
    uStackFrame __("Fuse.Animations.ResizeAnimatorState", "SeekValue(float4,float)");
    float strength_ = *strength;
    ::g::Uno::Float4 value_ = *value;
    __this->_lastStrength = strength_;
    __this->_lastValue = value_;
    __this->Update(value_, strength_);
}

// private void Update(float4 value, float strength) :2738
void ResizeAnimatorState__Update_fn(ResizeAnimatorState* __this, ::g::Uno::Float4* value, float* strength)
{
    __this->Update(*value, *strength);
}

// public ResizeAnimatorState(Fuse.Animations.Resize r, Fuse.Animations.CreateStateParams p) [instance] :2677
void ResizeAnimatorState::ctor_2(::g::Fuse::Animations::Resize* r, ::g::Fuse::Animations::CreateStateParams* p)
{
    uStackFrame __("Fuse.Animations.ResizeAnimatorState", ".ctor(Fuse.Animations.Resize,Fuse.Animations.CreateStateParams)");
    ::g::Fuse::Node* ind1;
    _valid = true;
    ctor_1(r, p, uPtr(r)->Target());
    _resize = r;
    _target = uAs<uObject*>(Node, ::TYPES[83/*Fuse.Animations.IResize*/]);

    if (_target == NULL)
    {
        ::g::Fuse::Diagnostics::Error(::STRINGS[10/*"Resize star...*/], r, ::STRINGS[11/*"/usr/local/...*/], 2683, ::STRINGS[12/*".ctor"*/]);
        _valid = false;
        return;
    }

    _relativeTo = r->RelativeTo();

    if (_relativeTo == NULL)
    {
        ::g::Fuse::Diagnostics::Error(::STRINGS[13/*"Resize star...*/], r, ::STRINGS[11/*"/usr/local/...*/], 2691, ::STRINGS[12/*".ctor"*/]);
        _valid = false;
        return;
    }

    _relativeNode = (ind1 = uPtr(_resize)->RelativeNode(), ((ind1 != NULL) ? ind1 : (::g::Fuse::Node*)Node));

    if ((::g::Fuse::ITransformMode::Flags(uInterface(uPtr(_relativeTo), ::TYPES[84/*Fuse.ITransformMode*/])) & 1) == 1)
    {
        uObject* elm = uAs<uObject*>(_relativeNode, ::TYPES[85/*Fuse.IActualPlacement*/]);

        if (elm != NULL)
            ::g::Fuse::IActualPlacement::add_Placed(uInterface(uPtr(elm), ::TYPES[85/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[86/*Fuse.PlacedHandler*/], (void*)ResizeAnimatorState__OnPlaced_fn, this));
    }

    uObject* e = uAs<uObject*>(_target, ::TYPES[85/*Fuse.IActualPlacement*/]);

    if (e != NULL)
        ::g::Fuse::IActualPlacement::add_Placed(uInterface(uPtr(e), ::TYPES[85/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[86/*Fuse.PlacedHandler*/], (void*)ResizeAnimatorState__OnPlaced_fn, this));
}

// private void OnPlaced(object s, object a) [instance] :2753
void ResizeAnimatorState::OnPlaced(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Animations.ResizeAnimatorState", "OnPlaced(object,object)");
    Update(_lastValue, _lastStrength);
}

// private void Update(float4 value, float strength) [instance] :2738
void ResizeAnimatorState::Update(::g::Uno::Float4 value, float strength)
{
    uStackFrame __("Fuse.Animations.ResizeAnimatorState", "Update(float4,float)");

    if (!_valid)
        return;

    ::g::Uno::Float2 baseSize;
    ::g::Uno::Float2 deltaSize;

    if (::g::Fuse::Animations::IResizeMode::GetSizeChange(uInterface(uPtr(_relativeTo), ::g::Fuse::Animations::IResizeMode_typeof()), Node, _relativeNode, &baseSize, &deltaSize))
    {
        ::g::Uno::Float2 sz = ::g::Uno::Float2__op_Addition2(baseSize, ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Multiply2(deltaSize, ::g::Uno::Float2__New2(value.X, value.Y)), strength));
        ::g::Fuse::Animations::IResize::SetSize(uInterface(uPtr(_target), ::TYPES[83/*Fuse.Animations.IResize*/]), sz);
    }
}

// public ResizeAnimatorState New(Fuse.Animations.Resize r, Fuse.Animations.CreateStateParams p) [static] :2677
ResizeAnimatorState* ResizeAnimatorState::New1(::g::Fuse::Animations::Resize* r, ::g::Fuse::Animations::CreateStateParams* p)
{
    ResizeAnimatorState* obj2 = (ResizeAnimatorState*)uNew(ResizeAnimatorState_typeof());
    obj2->ctor_2(r, p);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#20
// --------------------------------------------------------------

// public sealed class Rotate :3471
// {
::g::Fuse::Animations::TransformAnimator_type* Rotate_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TransformAnimator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 21;
    options.ObjectSize = sizeof(Rotate);
    options.TypeSize = sizeof(::g::Fuse::Animations::TransformAnimator_type);
    type = (::g::Fuse::Animations::TransformAnimator_type*)uClassType::New("Fuse.Animations.Rotate", options);
    type->SetBase(::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Rotation_typeof()));
    type->fp_ctor_ = (void*)Rotate__New1_fn;
    type->fp_Update = (void(*)(::g::Fuse::Animations::TransformAnimator*, ::g::Fuse::Node*, ::g::Fuse::Transform*, ::g::Uno::Float4*))Rotate__Update_fn;
    ::TYPES[87] = ::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Rotation_typeof());
    ::TYPES[88] = ::g::Fuse::Rotation_typeof();
    ::TYPES[38] = ::g::Uno::Float4_typeof();
    type->SetFields(21);
    type->Reflection.SetFunctions(9,
        new uFunction("get_Degrees", NULL, (void*)Rotate__get_Degrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Degrees", NULL, (void*)Rotate__set_Degrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DegreesX", NULL, (void*)Rotate__get_DegreesX_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesX", NULL, (void*)Rotate__set_DegreesX_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DegreesY", NULL, (void*)Rotate__get_DegreesY_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesY", NULL, (void*)Rotate__set_DegreesY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DegreesZ", NULL, (void*)Rotate__get_DegreesZ_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesZ", NULL, (void*)Rotate__set_DegreesZ_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Rotate__New1_fn, 0, true, Rotate_typeof(), 0));
    return type;
}

// public Rotate() :3473
void Rotate__ctor_3_fn(Rotate* __this)
{
    __this->ctor_3();
}

// public float get_Degrees() :3480
void Rotate__get_Degrees_fn(Rotate* __this, float* __retval)
{
    *__retval = __this->Degrees();
}

// public void set_Degrees(float value) :3481
void Rotate__set_Degrees_fn(Rotate* __this, float* value)
{
    __this->Degrees(*value);
}

// public float get_DegreesX() :3486
void Rotate__get_DegreesX_fn(Rotate* __this, float* __retval)
{
    *__retval = __this->DegreesX();
}

// public void set_DegreesX(float value) :3487
void Rotate__set_DegreesX_fn(Rotate* __this, float* value)
{
    __this->DegreesX(*value);
}

// public float get_DegreesY() :3492
void Rotate__get_DegreesY_fn(Rotate* __this, float* __retval)
{
    *__retval = __this->DegreesY();
}

// public void set_DegreesY(float value) :3493
void Rotate__set_DegreesY_fn(Rotate* __this, float* value)
{
    __this->DegreesY(*value);
}

// public float get_DegreesZ() :3498
void Rotate__get_DegreesZ_fn(Rotate* __this, float* __retval)
{
    *__retval = __this->DegreesZ();
}

// public void set_DegreesZ(float value) :3499
void Rotate__set_DegreesZ_fn(Rotate* __this, float* value)
{
    __this->DegreesZ(*value);
}

// public Rotate New() :3473
void Rotate__New1_fn(Rotate** __retval)
{
    *__retval = Rotate::New1();
}

// internal override sealed void Update(Fuse.Node elm, Fuse.Rotation t, float4 value) :3502
void Rotate__Update_fn(Rotate* __this, ::g::Fuse::Node* elm, ::g::Fuse::Rotation* t, ::g::Uno::Float4* value)
{
    uStackFrame __("Fuse.Animations.Rotate", "Update(Fuse.Node,Fuse.Rotation,float4)");
    ::g::Uno::Float4 value_ = *value;
    uPtr(t)->EulerAngle(::g::Uno::Float3__New2(value_.X, value_.Y, value_.Z));
}

// public Rotate() [instance] :3473
void Rotate::ctor_3()
{
    uStackFrame __("Fuse.Animations.Rotate", ".ctor()");
    ctor_2();
    Priority(3000);
}

// public float get_Degrees() [instance] :3480
float Rotate::Degrees()
{
    uStackFrame __("Fuse.Animations.Rotate", "get_Degrees()");
    return DegreesZ();
}

// public void set_Degrees(float value) [instance] :3481
void Rotate::Degrees(float value)
{
    uStackFrame __("Fuse.Animations.Rotate", "set_Degrees(float)");
    DegreesZ(value);
}

// public float get_DegreesX() [instance] :3486
float Rotate::DegreesX()
{
    uStackFrame __("Fuse.Animations.Rotate", "get_DegreesX()");
    return ::g::Uno::Math::RadiansToDegrees1(X());
}

// public void set_DegreesX(float value) [instance] :3487
void Rotate::DegreesX(float value)
{
    uStackFrame __("Fuse.Animations.Rotate", "set_DegreesX(float)");
    X(::g::Uno::Math::DegreesToRadians1(value));
}

// public float get_DegreesY() [instance] :3492
float Rotate::DegreesY()
{
    uStackFrame __("Fuse.Animations.Rotate", "get_DegreesY()");
    return ::g::Uno::Math::RadiansToDegrees1(Y());
}

// public void set_DegreesY(float value) [instance] :3493
void Rotate::DegreesY(float value)
{
    uStackFrame __("Fuse.Animations.Rotate", "set_DegreesY(float)");
    Y(::g::Uno::Math::DegreesToRadians1(value));
}

// public float get_DegreesZ() [instance] :3498
float Rotate::DegreesZ()
{
    uStackFrame __("Fuse.Animations.Rotate", "get_DegreesZ()");
    return ::g::Uno::Math::RadiansToDegrees1(Z());
}

// public void set_DegreesZ(float value) [instance] :3499
void Rotate::DegreesZ(float value)
{
    uStackFrame __("Fuse.Animations.Rotate", "set_DegreesZ(float)");
    Z(::g::Uno::Math::DegreesToRadians1(value));
}

// public Rotate New() [static] :3473
Rotate* Rotate::New1()
{
    Rotate* obj1 = (Rotate*)uNew(Rotate_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#20
// --------------------------------------------------------------

// public sealed class Scale :3508
// {
::g::Fuse::Animations::TransformAnimator_type* Scale_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TransformAnimator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 22;
    options.ObjectSize = sizeof(Scale);
    options.TypeSize = sizeof(::g::Fuse::Animations::TransformAnimator_type);
    type = (::g::Fuse::Animations::TransformAnimator_type*)uClassType::New("Fuse.Animations.Scale", options);
    type->SetBase(::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Scaling_typeof()));
    type->fp_ctor_ = (void*)Scale__New1_fn;
    type->fp_Update = (void(*)(::g::Fuse::Animations::TransformAnimator*, ::g::Fuse::Node*, ::g::Fuse::Transform*, ::g::Uno::Float4*))Scale__Update_fn;
    ::TYPES[89] = ::g::Fuse::ScalingModes_typeof();
    ::TYPES[90] = ::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Scaling_typeof());
    ::TYPES[50] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[91] = ::g::Fuse::Scaling_typeof();
    ::TYPES[38] = ::g::Uno::Float4_typeof();
    type->SetFields(21,
        ::g::Fuse::IScalingMode_typeof(), offsetof(::g::Fuse::Animations::Scale, _relativeTo), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Factor", NULL, (void*)Scale__get_Factor_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Factor", NULL, (void*)Scale__set_Factor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Scale__New1_fn, 0, true, Scale_typeof(), 0),
        new uFunction("get_RelativeTo", NULL, (void*)Scale__get_RelativeTo_fn, 0, false, ::g::Fuse::IScalingMode_typeof(), 0),
        new uFunction("set_RelativeTo", NULL, (void*)Scale__set_RelativeTo_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::IScalingMode_typeof()));
    return type;
}

// public Scale() :3517
void Scale__ctor_3_fn(Scale* __this)
{
    __this->ctor_3();
}

// public float get_Factor() :3525
void Scale__get_Factor_fn(Scale* __this, float* __retval)
{
    *__retval = __this->Factor();
}

// public void set_Factor(float value) :3526
void Scale__set_Factor_fn(Scale* __this, float* value)
{
    __this->Factor(*value);
}

// public Scale New() :3517
void Scale__New1_fn(Scale** __retval)
{
    *__retval = Scale::New1();
}

// public Fuse.IScalingMode get_RelativeTo() :3513
void Scale__get_RelativeTo_fn(Scale* __this, uObject** __retval)
{
    *__retval = __this->RelativeTo();
}

// public void set_RelativeTo(Fuse.IScalingMode value) :3514
void Scale__set_RelativeTo_fn(Scale* __this, uObject* value)
{
    __this->RelativeTo(value);
}

// internal override sealed void Update(Fuse.Node elm, Fuse.Scaling t, float4 value) :3529
void Scale__Update_fn(Scale* __this, ::g::Fuse::Node* elm, ::g::Fuse::Scaling* t, ::g::Uno::Float4* value)
{
    uStackFrame __("Fuse.Animations.Scale", "Update(Fuse.Node,Fuse.Scaling,float4)");
    ::g::Uno::Float4 value_ = *value;
    uPtr(t)->RelativeTo(__this->RelativeTo());
    t->Vector(::g::Uno::Float3__New2(value_.X, value_.Y, value_.Z));
}

// public Scale() [instance] :3517
void Scale::ctor_3()
{
    uStackFrame __("Fuse.Animations.Scale", ".ctor()");
    _relativeTo = ::g::Fuse::ScalingModes::Identity();
    ctor_2();
    Priority(2000);
    _vectorValue = ::g::Uno::Float4__New1(1.0f);
}

// public float get_Factor() [instance] :3525
float Scale::Factor()
{
    uStackFrame __("Fuse.Animations.Scale", "get_Factor()");
    return X();
}

// public void set_Factor(float value) [instance] :3526
void Scale::Factor(float value)
{
    uStackFrame __("Fuse.Animations.Scale", "set_Factor(float)");
    _vectorValue = ::g::Uno::Float4__New1(value);
}

// public Fuse.IScalingMode get_RelativeTo() [instance] :3513
uObject* Scale::RelativeTo()
{
    uStackFrame __("Fuse.Animations.Scale", "get_RelativeTo()");
    return _relativeTo;
}

// public void set_RelativeTo(Fuse.IScalingMode value) [instance] :3514
void Scale::RelativeTo(uObject* value)
{
    uStackFrame __("Fuse.Animations.Scale", "set_RelativeTo(Fuse.IScalingMode)");
    _relativeTo = value;
}

// public Scale New() [static] :3517
Scale* Scale::New1()
{
    Scale* obj1 = (Scale*)uNew(Scale_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno
// -----------------------------------------------------------

// internal enum SeekDirection :46
uEnumType* SeekDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.SeekDirection", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Forward", 0LL,
        "Backward", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#21
// --------------------------------------------------------------

// public enum TriggerAnimationState.SeekFlags :3984
uEnumType* TriggerAnimationState__SeekFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.TriggerAnimationState.SeekFlags", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "ForcePlayer", 1LL,
        "BypassUpdate", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno
// -----------------------------------------------------------

// internal enum SeekResult :53
uEnumType* SeekResult_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.SeekResult", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Complete", 1LL,
        "Stable", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#20
// --------------------------------------------------------------

// public sealed class Skew :3536
// {
::g::Fuse::Animations::TransformAnimator_type* Skew_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TransformAnimator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 21;
    options.ObjectSize = sizeof(Skew);
    options.TypeSize = sizeof(::g::Fuse::Animations::TransformAnimator_type);
    type = (::g::Fuse::Animations::TransformAnimator_type*)uClassType::New("Fuse.Animations.Skew", options);
    type->SetBase(::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Shear_typeof()));
    type->fp_ctor_ = (void*)Skew__New1_fn;
    type->fp_Update = (void(*)(::g::Fuse::Animations::TransformAnimator*, ::g::Fuse::Node*, ::g::Fuse::Transform*, ::g::Uno::Float4*))Skew__Update_fn;
    ::TYPES[92] = ::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Shear_typeof());
    ::TYPES[93] = ::g::Fuse::Shear_typeof();
    ::TYPES[38] = ::g::Uno::Float4_typeof();
    ::TYPES[34] = ::g::Uno::Float2_typeof();
    ::TYPES[50] = ::g::Fuse::Animations::TrackAnimator_typeof();
    type->SetFields(21);
    type->Reflection.SetFunctions(9,
        new uFunction("get_DegreesX", NULL, (void*)Skew__get_DegreesX_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesX", NULL, (void*)Skew__set_DegreesX_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DegreesXY", NULL, (void*)Skew__get_DegreesXY_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_DegreesXY", NULL, (void*)Skew__set_DegreesXY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_DegreesY", NULL, (void*)Skew__get_DegreesY_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesY", NULL, (void*)Skew__set_DegreesY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Skew__New1_fn, 0, true, Skew_typeof(), 0),
        new uFunction("get_XY", NULL, (void*)Skew__get_XY_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_XY", NULL, (void*)Skew__set_XY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()));
    return type;
}

// public Skew() :3538
void Skew__ctor_3_fn(Skew* __this)
{
    __this->ctor_3();
}

// public float get_DegreesX() :3550
void Skew__get_DegreesX_fn(Skew* __this, float* __retval)
{
    *__retval = __this->DegreesX();
}

// public void set_DegreesX(float value) :3551
void Skew__set_DegreesX_fn(Skew* __this, float* value)
{
    __this->DegreesX(*value);
}

// public float2 get_DegreesXY() :3568
void Skew__get_DegreesXY_fn(Skew* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->DegreesXY();
}

// public void set_DegreesXY(float2 value) :3569
void Skew__set_DegreesXY_fn(Skew* __this, ::g::Uno::Float2* value)
{
    __this->DegreesXY(*value);
}

// public float get_DegreesY() :3556
void Skew__get_DegreesY_fn(Skew* __this, float* __retval)
{
    *__retval = __this->DegreesY();
}

// public void set_DegreesY(float value) :3557
void Skew__set_DegreesY_fn(Skew* __this, float* value)
{
    __this->DegreesY(*value);
}

// public Skew New() :3538
void Skew__New1_fn(Skew** __retval)
{
    *__retval = Skew::New1();
}

// internal override sealed void Update(Fuse.Node elm, Fuse.Shear t, float4 value) :3543
void Skew__Update_fn(Skew* __this, ::g::Fuse::Node* elm, ::g::Fuse::Shear* t, ::g::Uno::Float4* value)
{
    uStackFrame __("Fuse.Animations.Skew", "Update(Fuse.Node,Fuse.Shear,float4)");
    ::g::Uno::Float4 value_ = *value;
    uPtr(t)->Vector(::g::Uno::Float2__New2(value_.X, value_.Y));
}

// public float2 get_XY() :3562
void Skew__get_XY_fn(Skew* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->XY();
}

// public void set_XY(float2 value) :3563
void Skew__set_XY_fn(Skew* __this, ::g::Uno::Float2* value)
{
    __this->XY(*value);
}

// public Skew() [instance] :3538
void Skew::ctor_3()
{
    uStackFrame __("Fuse.Animations.Skew", ".ctor()");
    ctor_2();
    Priority(4000);
}

// public float get_DegreesX() [instance] :3550
float Skew::DegreesX()
{
    uStackFrame __("Fuse.Animations.Skew", "get_DegreesX()");
    return ::g::Uno::Math::RadiansToDegrees1(X());
}

// public void set_DegreesX(float value) [instance] :3551
void Skew::DegreesX(float value)
{
    uStackFrame __("Fuse.Animations.Skew", "set_DegreesX(float)");
    X(::g::Uno::Math::DegreesToRadians1(value));
}

// public float2 get_DegreesXY() [instance] :3568
::g::Uno::Float2 Skew::DegreesXY()
{
    uStackFrame __("Fuse.Animations.Skew", "get_DegreesXY()");
    return ::g::Uno::Float2__New2(::g::Uno::Math::RadiansToDegrees1(X()), ::g::Uno::Math::RadiansToDegrees1(Y()));
}

// public void set_DegreesXY(float2 value) [instance] :3569
void Skew::DegreesXY(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Animations.Skew", "set_DegreesXY(float2)");
    XY(::g::Uno::Float2__New2(::g::Uno::Math::DegreesToRadians1(value.X), ::g::Uno::Math::DegreesToRadians1(value.Y)));
}

// public float get_DegreesY() [instance] :3556
float Skew::DegreesY()
{
    uStackFrame __("Fuse.Animations.Skew", "get_DegreesY()");
    return ::g::Uno::Math::RadiansToDegrees1(Y());
}

// public void set_DegreesY(float value) [instance] :3557
void Skew::DegreesY(float value)
{
    uStackFrame __("Fuse.Animations.Skew", "set_DegreesY(float)");
    Y(::g::Uno::Math::DegreesToRadians1(value));
}

// public float2 get_XY() [instance] :3562
::g::Uno::Float2 Skew::XY()
{
    uStackFrame __("Fuse.Animations.Skew", "get_XY()");
    ::g::Uno::Float4 ind1 = _vectorValue;
    return ::g::Uno::Float2__New2(ind1.X, ind1.Y);
}

// public void set_XY(float2 value) [instance] :3563
void Skew::XY(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Animations.Skew", "set_XY(float2)");
    _vectorValue = ::g::Uno::Float4__New6(value, _vectorValue.Z, _vectorValue.W);
}

// public Skew New() [static] :3538
Skew* Skew::New1()
{
    Skew* obj2 = (Skew*)uNew(Skew_typeof());
    obj2->ctor_3();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#17
// --------------------------------------------------------------

// public sealed class Spin :2766
// {
::g::Fuse::Animations::Animator_type* Spin_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(Spin);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.Spin", options);
    type->SetBase(::g::Fuse::Animations::OpenAnimator_typeof());
    type->fp_ctor_ = (void*)Spin__New1_fn;
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))Spin__CreateState_fn;
    ::TYPES[46] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[47] = ::g::Fuse::Animations::AnimatorState_typeof();
    type->SetFields(5,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::Spin, _hertz), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Animations::Spin, _Target), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Frequency", NULL, (void*)Spin__get_Frequency_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Frequency", NULL, (void*)Spin__set_Frequency_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction(".ctor", NULL, (void*)Spin__New1_fn, 0, true, Spin_typeof(), 0),
        new uFunction("get_Target", NULL, (void*)Spin__get_Target_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)Spin__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()));
    return type;
}

// public Spin() :2768
void Spin__ctor_2_fn(Spin* __this)
{
    __this->ctor_2();
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :2782
void Spin__CreateState_fn(Spin* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    uStackFrame __("Fuse.Animations.Spin", "CreateState(Fuse.Animations.CreateStateParams)");
    return *__retval = ::g::Fuse::Animations::SpinState::New1(__this, p), void();
}

// public double get_Frequency() :2778
void Spin__get_Frequency_fn(Spin* __this, double* __retval)
{
    *__retval = __this->Frequency();
}

// public void set_Frequency(double value) :2779
void Spin__set_Frequency_fn(Spin* __this, double* value)
{
    __this->Frequency(*value);
}

// public Spin New() :2768
void Spin__New1_fn(Spin** __retval)
{
    *__retval = Spin::New1();
}

// public generated Fuse.Node get_Target() :2773
void Spin__get_Target_fn(Spin* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Node value) :2773
void Spin__set_Target_fn(Spin* __this, ::g::Fuse::Node* value)
{
    __this->Target(value);
}

// public Spin() [instance] :2768
void Spin::ctor_2()
{
    uStackFrame __("Fuse.Animations.Spin", ".ctor()");
    _hertz = 1.0;
    ctor_1();
    MixOp(0);
}

// public double get_Frequency() [instance] :2778
double Spin::Frequency()
{
    uStackFrame __("Fuse.Animations.Spin", "get_Frequency()");
    return _hertz;
}

// public void set_Frequency(double value) [instance] :2779
void Spin::Frequency(double value)
{
    uStackFrame __("Fuse.Animations.Spin", "set_Frequency(double)");
    _hertz = value;
}

// public generated Fuse.Node get_Target() [instance] :2773
::g::Fuse::Node* Spin::Target()
{
    uStackFrame __("Fuse.Animations.Spin", "get_Target()");
    return _Target;
}

// public generated void set_Target(Fuse.Node value) [instance] :2773
void Spin::Target(::g::Fuse::Node* value)
{
    uStackFrame __("Fuse.Animations.Spin", "set_Target(Fuse.Node)");
    _Target = value;
}

// public Spin New() [static] :2768
Spin* Spin::New1()
{
    Spin* obj1 = (Spin*)uNew(Spin_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#17
// --------------------------------------------------------------

// internal sealed class SpinState :2789
// {
::g::Fuse::Animations::OpenAnimatorState_type* SpinState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::OpenAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(SpinState);
    options.TypeSize = sizeof(::g::Fuse::Animations::OpenAnimatorState_type);
    type = (::g::Fuse::Animations::OpenAnimatorState_type*)uClassType::New("Fuse.Animations.SpinState", options);
    type->SetBase(::g::Fuse::Animations::OpenAnimatorState_typeof());
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))SpinState__Disable_fn;
    type->fp_Seek = (void(*)(::g::Fuse::Animations::OpenAnimatorState*, bool*, float*, float*, int*, bool*))SpinState__Seek_fn;
    ::STRINGS[5] = uString::Const("Invalid seek");
    ::STRINGS[14] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#17");
    ::TYPES[56] = ::g::Fuse::Animations::OpenAnimator_typeof();
    ::TYPES[94] = ::g::Fuse::Animations::Spin_typeof();
    ::TYPES[46] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[47] = ::g::Fuse::Animations::AnimatorState_typeof();
    ::TYPES[13] = ::g::Uno::Double_typeof();
    ::TYPES[88] = ::g::Fuse::Rotation_typeof();
    ::TYPES[32] = ::g::Uno::Float_typeof();
    ::TYPES[69] = ::g::Fuse::Transform_typeof();
    type->SetFields(5,
        ::g::Fuse::Animations::Spin_typeof(), offsetof(::g::Fuse::Animations::SpinState, Animator1), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::SpinState, degrees), 0,
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(::g::Fuse::Transform_typeof()), offsetof(::g::Fuse::Animations::SpinState, mixHandle), 0,
        ::g::Fuse::Rotation_typeof(), offsetof(::g::Fuse::Animations::SpinState, transform), 0);
    return type;
}

// public SpinState(Fuse.Animations.Spin animator, Fuse.Animations.CreateStateParams p) :2795
void SpinState__ctor_2_fn(SpinState* __this, ::g::Fuse::Animations::Spin* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public override sealed void Disable() :2805
void SpinState__Disable_fn(SpinState* __this)
{
    uStackFrame __("Fuse.Animations.SpinState", "Disable()");

    if (__this->mixHandle == NULL)
        return;

    __this->degrees = 0.0;
    ::g::Fuse::Animations::IMixerHandle::Unregister(uInterface(uPtr(__this->mixHandle), ::TYPES[74/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/]));
    __this->mixHandle = NULL;
}

// public SpinState New(Fuse.Animations.Spin animator, Fuse.Animations.CreateStateParams p) :2795
void SpinState__New1_fn(::g::Fuse::Animations::Spin* animator, ::g::Fuse::Animations::CreateStateParams* p, SpinState** __retval)
{
    *__retval = SpinState::New1(animator, p);
}

// protected override sealed bool Seek(bool on, float interval, float strength, Fuse.Animations.SeekDirection dir) :2815
void SpinState__Seek_fn(SpinState* __this, bool* on, float* interval, float* strength, int* dir, bool* __retval)
{
    uStackFrame __("Fuse.Animations.SpinState", "Seek(bool,float,float,Fuse.Animations.SeekDirection)");
    float interval_ = *interval;
    bool on_ = *on;
    float strength_ = *strength;

    if ((__this->mixHandle == NULL) || (__this->transform == NULL))
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[5/*"Invalid seek"*/], 1, ::STRINGS[14/*"/usr/local/...*/], 2819);
        return *__retval = true, void();
    }

    bool done = false;
    double oldDegrees = __this->degrees;
    __this->degrees = (__this->degrees + ((double)(interval_ * 360.0f) * uPtr(__this->Animator1)->Frequency()));

    if (on_)
        __this->degrees = ::g::Uno::Math::Mod(__this->degrees, 360.0);
    else if ((((oldDegrees <= 9.9999997473787516e-06) || (__this->degrees <= 9.9999997473787516e-06)) || (oldDegrees >= 360.0)) || (__this->degrees >= 360.0))
    {
        __this->degrees = 0.0;
        done = true;
    }

    uPtr(__this->transform)->Degrees((float)__this->degrees);
    ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(__this->mixHandle), ::TYPES[74/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/]), __this->transform, uCRef(strength_));
    return *__retval = done, void();
}

// public SpinState(Fuse.Animations.Spin animator, Fuse.Animations.CreateStateParams p) [instance] :2795
void SpinState::ctor_2(::g::Fuse::Animations::Spin* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    uStackFrame __("Fuse.Animations.SpinState", ".ctor(Fuse.Animations.Spin,Fuse.Animations.CreateStateParams)");
    transform = ::g::Fuse::Rotation::New1();
    ctor_1(animator, p, uPtr(animator)->Target());
    Animator1 = animator;
    mixHandle = ::g::Fuse::Animations::IMixer::RegisterTransform(uInterface(uPtr(uPtr(Animator1)->Mixer), ::TYPES[51/*Fuse.Animations.IMixer*/]), Node, uPtr(Animator1)->MixOp(), 3000);
}

// public SpinState New(Fuse.Animations.Spin animator, Fuse.Animations.CreateStateParams p) [static] :2795
SpinState* SpinState::New1(::g::Fuse::Animations::Spin* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    SpinState* obj1 = (SpinState*)uNew(SpinState_typeof());
    obj1->ctor_2(animator, p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#18
// --------------------------------------------------------------

// internal sealed class SplineTrack :2861
// {
SplineTrack_type* SplineTrack_typeof()
{
    static uSStrong<SplineTrack_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(SplineTrack);
    options.TypeSize = sizeof(SplineTrack_type);
    type = (SplineTrack_type*)uClassType::New("Fuse.Animations.SplineTrack", options);
    type->fp_ctor_ = (void*)SplineTrack__New1_fn;
    type->interface3.fp_GetDuration = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*, double*))SplineTrack__FuseAnimationsTrackProviderGetDuration_fn;
    type->interface3.fp_GetAnimatorVariant = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*))SplineTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn;
    type->interface0.fp_GetSeekProgress = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, ::g::Uno::Float4*, double*, int*))SplineTrack__FuseAnimationsContinuousTrackProviderGetSeekProgress_fn;
    type->interface0.fp_GetSeekTime = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, ::g::Uno::Float4*, double*, int*))SplineTrack__FuseAnimationsContinuousTrackProviderGetSeekTime_fn;
    type->interface2.fp_get_Keyframes = (void(*)(uObject*, uObject**))SplineTrack__get_Keyframes_fn;
    type->interface2.fp_get_Interpolation = (void(*)(uObject*, int*))SplineTrack__get_Interpolation_fn;
    type->interface2.fp_set_Interpolation = (void(*)(uObject*, int*))SplineTrack__set_Interpolation_fn;
    ::TYPES[59] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Animations::Keyframe_typeof());
    ::TYPES[95] = SplineTrack__PointInterpolater_typeof();
    ::TYPES[66] = ::g::Fuse::Animations::ContinuousTrackProvider_typeof();
    ::TYPES[61] = ::g::Fuse::Animations::Keyframe_typeof();
    ::TYPES[32] = ::g::Uno::Float_typeof();
    ::TYPES[62] = ::g::Fuse::Animations::SeekResult_typeof();
    ::TYPES[15] = ::g::Uno::Int_typeof();
    ::TYPES[63] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Animations::Keyframe_typeof());
    type->SetInterfaces(
        ::g::Fuse::Animations::ContinuousTrackProvider_typeof(), offsetof(SplineTrack_type, interface0),
        ::g::Fuse::Animations::ITrackProvider_typeof(), offsetof(SplineTrack_type, interface1),
        ::g::Fuse::Animations::KeyframeTrack_typeof(), offsetof(SplineTrack_type, interface2),
        ::g::Fuse::Animations::TrackProvider_typeof(), offsetof(SplineTrack_type, interface3));
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::SplineTrack, _bias), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::SplineTrack, _continuity), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::SplineTrack, _duration), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Animations::Keyframe_typeof()), offsetof(::g::Fuse::Animations::SplineTrack, _frames), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::SplineTrack, _init), 0,
        SplineTrack__PointInterpolater_typeof(), offsetof(::g::Fuse::Animations::SplineTrack, _pointInterpolater), 0,
        ::g::Fuse::Animations::KeyframeInterpolation_typeof(), offsetof(::g::Fuse::Animations::SplineTrack, _style), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::SplineTrack, _tension), 0);
    return type;
}

// public generated SplineTrack() :2861
void SplineTrack__ctor__fn(SplineTrack* __this)
{
    __this->ctor_();
}

// public float get_Bias() :2884
void SplineTrack__get_Bias_fn(SplineTrack* __this, float* __retval)
{
    *__retval = __this->Bias();
}

// public void set_Bias(float value) :2885
void SplineTrack__set_Bias_fn(SplineTrack* __this, float* value)
{
    __this->Bias(*value);
}

// public float get_Continuity() :2895
void SplineTrack__get_Continuity_fn(SplineTrack* __this, float* __retval)
{
    *__retval = __this->Continuity();
}

// public void set_Continuity(float value) :2896
void SplineTrack__set_Continuity_fn(SplineTrack* __this, float* value)
{
    __this->Continuity(*value);
}

// private static float4 CubicHermitePoint(float4 p0, float4 p1, float4 m0, float4 m1, float t) :3004
void SplineTrack__CubicHermitePoint_fn(::g::Uno::Float4* p0, ::g::Uno::Float4* p1, ::g::Uno::Float4* m0, ::g::Uno::Float4* m1, float* t, ::g::Uno::Float4* __retval)
{
    *__retval = SplineTrack::CubicHermitePoint(*p0, *p1, *m0, *m1, *t);
}

// private Fuse.Animations.SeekResult Fuse.Animations.ContinuousTrackProvider.GetSeekProgress(Fuse.Animations.TrackAnimatorState tas, double progress, double interval, Fuse.Animations.SeekDirection dir, float4& value, double& strength) :2957
void SplineTrack__FuseAnimationsContinuousTrackProviderGetSeekProgress_fn(SplineTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* progress, double* interval, int* dir, ::g::Uno::Float4* value, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.SplineTrack", "Fuse.Animations.ContinuousTrackProvider.GetSeekProgress(Fuse.Animations.TrackAnimatorState,double,double,Fuse.Animations.SeekDirection,float4&,double&)");
    double progress_ = *progress;
    double interval_ = *interval;
    int dir_ = *dir;
    return *__retval = ::g::Fuse::Animations::ContinuousTrackProvider::GetSeekTime(uInterface(uPtr(uAs<uObject*>(__this, ::TYPES[66/*Fuse.Animations.ContinuousTrackProvider*/])), ::TYPES[66/*Fuse.Animations.ContinuousTrackProvider*/]), tas, progress_ * __this->_duration, interval_, dir_, value, strength), void();
}

// private Fuse.Animations.SeekResult Fuse.Animations.ContinuousTrackProvider.GetSeekTime(Fuse.Animations.TrackAnimatorState tas, double elapsed, double interval, Fuse.Animations.SeekDirection dir, float4& value, double& strength) :2965
void SplineTrack__FuseAnimationsContinuousTrackProviderGetSeekTime_fn(SplineTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* elapsed, double* interval, int* dir, ::g::Uno::Float4* value, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.SplineTrack", "Fuse.Animations.ContinuousTrackProvider.GetSeekTime(Fuse.Animations.TrackAnimatorState,double,double,Fuse.Animations.SeekDirection,float4&,double&)");
    ::g::Fuse::Animations::Keyframe* ret2;
    double elapsed_ = *elapsed;
    ::g::Fuse::Animations::Keyframe* ret3;
    ::g::Fuse::Animations::Keyframe* ret4;
    ::g::Fuse::Animations::Keyframe* ret5;
    ::g::Fuse::Animations::Keyframe* ret6;
    ::g::Fuse::Animations::Keyframe* ret7;
    ::g::Uno::Float4 ret8;
    ::g::Fuse::Animations::Keyframe* ret9;
    ::g::Fuse::Animations::Keyframe* ret10;
    ::g::Fuse::Animations::Keyframe* ret11;
    ::g::Fuse::Animations::Keyframe* ret12;
    int dir_ = *dir;
    __this->Init();

    if (uPtr(__this->_frames)->Count() == 0)
    {
        *value = ::g::Uno::Float4__New1(0.0f);
        *strength = 0.0;
        return *__retval = 3, void();
    }

    int segment = 0;

    while ((segment < (uPtr(__this->_frames)->Count() - 1)) && (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(segment), &ret2), ret2))->Time() <= elapsed_))
        ++segment;

    if (segment == 0)
    {
        double segmentProgress = elapsed_ / uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(0), &ret3), ret3))->TimeDelta();
        *value = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(0), &ret4), ret4))->Value();
        *strength = segmentProgress;
    }
    else
    {
        int previous = segment - 1;
        double segmentProgress1 = (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(segment), &ret5), ret5))->TimeDelta() < 9.9999997473787516e-06) ? 0.0 : ::g::Uno::Math::Clamp((elapsed_ - uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(previous), &ret6), ret6))->Time()) / uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(segment), &ret7), ret7))->TimeDelta(), 0.0, 1.0);
        *value = (uPtr(__this->_pointInterpolater)->Invoke(&ret8, 5, uCRef(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(previous), &ret9), ret9))->Value()), uCRef(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(segment), &ret10), ret10))->Value()), uCRef(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(previous), &ret11), ret11))->TangentOut()), uCRef(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_frames), uCRef<int>(segment), &ret12), ret12))->TangentIn()), uCRef((float)segmentProgress1)), ret8);
        *strength = 1.0;
    }

    return *__retval = (((dir_ == 0) ? elapsed_ >= __this->_duration : elapsed_ <= 0.0) ? 1 : 0) | 2, void();
}

// private Fuse.Animations.AnimatorVariant Fuse.Animations.TrackProvider.GetAnimatorVariant(Fuse.Animations.TrackAnimator tas) :2952
void SplineTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn(SplineTrack* __this, ::g::Fuse::Animations::TrackAnimator* tas, int* __retval)
{
    uStackFrame __("Fuse.Animations.SplineTrack", "Fuse.Animations.TrackProvider.GetAnimatorVariant(Fuse.Animations.TrackAnimator)");
    return *__retval = 0, void();
}

// private double Fuse.Animations.TrackProvider.GetDuration(Fuse.Animations.TrackAnimator ta, Fuse.Animations.AnimationVariant variant) :2946
void SplineTrack__FuseAnimationsTrackProviderGetDuration_fn(SplineTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* variant, double* __retval)
{
    uStackFrame __("Fuse.Animations.SplineTrack", "Fuse.Animations.TrackProvider.GetDuration(Fuse.Animations.TrackAnimator,Fuse.Animations.AnimationVariant)");
    __this->Init();
    return *__retval = __this->_duration, void();
}

// private void Init() :2938
void SplineTrack__Init_fn(SplineTrack* __this)
{
    __this->Init();
}

// public Fuse.Animations.KeyframeInterpolation get_Interpolation() :2909
void SplineTrack__get_Interpolation_fn(SplineTrack* __this, int* __retval)
{
    *__retval = __this->Interpolation();
}

// public void set_Interpolation(Fuse.Animations.KeyframeInterpolation value) :2910
void SplineTrack__set_Interpolation_fn(SplineTrack* __this, int* value)
{
    __this->Interpolation(*value);
}

// public Uno.Collections.IList<Fuse.Animations.Keyframe> get_Keyframes() :2867
void SplineTrack__get_Keyframes_fn(SplineTrack* __this, uObject** __retval)
{
    *__retval = __this->Keyframes();
}

// private static float4 LinearPoint(float4 p0, float4 p1, float4 m0, float4 m1, float t) :3015
void SplineTrack__LinearPoint_fn(::g::Uno::Float4* p0, ::g::Uno::Float4* p1, ::g::Uno::Float4* m0, ::g::Uno::Float4* m1, float* t, ::g::Uno::Float4* __retval)
{
    *__retval = SplineTrack::LinearPoint(*p0, *p1, *m0, *m1, *t);
}

// public generated SplineTrack New() :2861
void SplineTrack__New1_fn(SplineTrack** __retval)
{
    *__retval = SplineTrack::New1();
}

// public float get_Tension() :2873
void SplineTrack__get_Tension_fn(SplineTrack* __this, float* __retval)
{
    *__retval = __this->Tension();
}

// public void set_Tension(float value) :2874
void SplineTrack__set_Tension_fn(SplineTrack* __this, float* value)
{
    __this->Tension(*value);
}

// public generated SplineTrack() [instance] :2861
void SplineTrack::ctor_()
{
    uStackFrame __("Fuse.Animations.SplineTrack", ".ctor()");
    _frames = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[59/*Uno.Collections.List<Fuse.Animations.Keyframe>*/]));
    _tension = 1.0f;
    _continuity = -1.0f;
    _pointInterpolater = uDelegate::New(::TYPES[95/*Fuse.Animations.SplineTrack.PointInterpolater*/], (void*)SplineTrack__LinearPoint_fn);
}

// public float get_Bias() [instance] :2884
float SplineTrack::Bias()
{
    uStackFrame __("Fuse.Animations.SplineTrack", "get_Bias()");
    return _bias;
}

// public void set_Bias(float value) [instance] :2885
void SplineTrack::Bias(float value)
{
    uStackFrame __("Fuse.Animations.SplineTrack", "set_Bias(float)");
    _bias = value;
    _style = 2;
}

// public float get_Continuity() [instance] :2895
float SplineTrack::Continuity()
{
    uStackFrame __("Fuse.Animations.SplineTrack", "get_Continuity()");
    return _continuity;
}

// public void set_Continuity(float value) [instance] :2896
void SplineTrack::Continuity(float value)
{
    uStackFrame __("Fuse.Animations.SplineTrack", "set_Continuity(float)");
    _continuity = value;
    _style = 2;
}

// private void Init() [instance] :2938
void SplineTrack::Init()
{
    uStackFrame __("Fuse.Animations.SplineTrack", "Init()");

    if (_init)
        return;

    _duration = ::g::Fuse::Animations::Keyframe::CompleteFrames((uObject*)_frames, Tension(), Bias(), Continuity());
    _init = true;
}

// public Fuse.Animations.KeyframeInterpolation get_Interpolation() [instance] :2909
int SplineTrack::Interpolation()
{
    uStackFrame __("Fuse.Animations.SplineTrack", "get_Interpolation()");
    return _style;
}

// public void set_Interpolation(Fuse.Animations.KeyframeInterpolation value) [instance] :2910
void SplineTrack::Interpolation(int value)
{
    uStackFrame __("Fuse.Animations.SplineTrack", "set_Interpolation(Fuse.Animations.KeyframeInterpolation)");
    _style = value;

    switch (_style)
    {
        case 0:
        {
            _bias = 0.0f;
            _tension = 1.0f;
            _continuity = -1.0f;
            _pointInterpolater = uDelegate::New(::TYPES[95/*Fuse.Animations.SplineTrack.PointInterpolater*/], (void*)SplineTrack__LinearPoint_fn);
            break;
        }
        case 1:
        {
            _bias = 0.0f;
            _tension = 0.0f;
            _continuity = 0.0f;
            _pointInterpolater = uDelegate::New(::TYPES[95/*Fuse.Animations.SplineTrack.PointInterpolater*/], (void*)SplineTrack__CubicHermitePoint_fn);
            break;
        }
        default:
        {
            _pointInterpolater = uDelegate::New(::TYPES[95/*Fuse.Animations.SplineTrack.PointInterpolater*/], (void*)SplineTrack__CubicHermitePoint_fn);
            break;
        }
    }
}

// public Uno.Collections.IList<Fuse.Animations.Keyframe> get_Keyframes() [instance] :2867
uObject* SplineTrack::Keyframes()
{
    uStackFrame __("Fuse.Animations.SplineTrack", "get_Keyframes()");
    return (uObject*)_frames;
}

// public float get_Tension() [instance] :2873
float SplineTrack::Tension()
{
    uStackFrame __("Fuse.Animations.SplineTrack", "get_Tension()");
    return _tension;
}

// public void set_Tension(float value) [instance] :2874
void SplineTrack::Tension(float value)
{
    uStackFrame __("Fuse.Animations.SplineTrack", "set_Tension(float)");
    _tension = value;
    _style = 2;
}

// private static float4 CubicHermitePoint(float4 p0, float4 p1, float4 m0, float4 m1, float t) [static] :3004
::g::Uno::Float4 SplineTrack::CubicHermitePoint(::g::Uno::Float4 p0, ::g::Uno::Float4 p1, ::g::Uno::Float4 m0, ::g::Uno::Float4 m1, float t)
{
    uStackFrame __("Fuse.Animations.SplineTrack", "CubicHermitePoint(float4,float4,float4,float4,float)");
    float t2 = t * t;
    float t3 = t2 * t;
    return ::g::Uno::Float4__op_Addition2(::g::Uno::Float4__op_Addition2(::g::Uno::Float4__op_Addition2(::g::Uno::Float4__op_Multiply(((2.0f * t3) - (3.0f * t2)) + 1.0f, p0), ::g::Uno::Float4__op_Multiply((t3 - (2.0f * t2)) + t, m0)), ::g::Uno::Float4__op_Multiply((-2.0f * t3) + (3.0f * t2), p1)), ::g::Uno::Float4__op_Multiply(t3 - t2, m1));
}

// private static float4 LinearPoint(float4 p0, float4 p1, float4 m0, float4 m1, float t) [static] :3015
::g::Uno::Float4 SplineTrack::LinearPoint(::g::Uno::Float4 p0, ::g::Uno::Float4 p1, ::g::Uno::Float4 m0, ::g::Uno::Float4 m1, float t)
{
    uStackFrame __("Fuse.Animations.SplineTrack", "LinearPoint(float4,float4,float4,float4,float)");
    return ::g::Uno::Float4__op_Addition2(p0, ::g::Uno::Float4__op_Multiply(t, ::g::Uno::Float4__op_Subtraction2(p1, p0)));
}

// public generated SplineTrack New() [static] :2861
SplineTrack* SplineTrack::New1()
{
    SplineTrack* obj1 = (SplineTrack*)uNew(SplineTrack_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#19
// --------------------------------------------------------------

// public abstract class TrackAnimator :3074
// {
::g::Fuse::Animations::Animator_type* TrackAnimator_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.ObjectSize = sizeof(TrackAnimator);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.TrackAnimator", options);
    type->SetBase(::g::Fuse::Animations::Animator_typeof());
    type->fp_get_AnimatorVariant = (void(*)(::g::Fuse::Animations::Animator*, int*))TrackAnimator__get_AnimatorVariant_fn;
    type->fp_GetDurationWithDelay = (void(*)(::g::Fuse::Animations::Animator*, int*, double*))TrackAnimator__GetDurationWithDelay_fn;
    ::TYPES[96] = ::g::Fuse::Animations::TrackProvider_typeof();
    ::TYPES[97] = ::g::Fuse::Animations::EasingTrack_typeof();
    ::TYPES[15] = ::g::Uno::Int_typeof();
    ::TYPES[46] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[98] = ::g::Fuse::Animations::DiscreteSingleTrack_typeof();
    ::TYPES[99] = ::g::Fuse::Animations::KeyframeTrack_typeof();
    ::TYPES[100] = ::g::Fuse::Animations::ITrackProvider_typeof();
    ::TYPES[66] = ::g::Fuse::Animations::ContinuousTrackProvider_typeof();
    type->SetFields(3,
        ::g::Fuse::Animations::TrackProvider_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _continuousProvider), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _delayBack), 0,
        ::g::Fuse::Animations::TrackProvider_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _discreteProvider), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _durationBack), 0,
        ::g::Fuse::Animations::Easing_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _easing), 0,
        ::g::Fuse::Animations::Easing_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _easingBack), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _hasDelayBack), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _hasDurationBack), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _hasEasingBack), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _isDiscrete), 0,
        ::g::Fuse::Animations::KeyframeTrack_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _keyframeTrack), 0,
        uObject_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _objectValue), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _vectorValue), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _weight), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TrackAnimator, _Duration), 0);
    type->Reflection.SetFunctions(17,
        new uFunction("get_DelayBack", NULL, (void*)TrackAnimator__get_DelayBack_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_DelayBack", NULL, (void*)TrackAnimator__set_DelayBack_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Duration", NULL, (void*)TrackAnimator__get_Duration_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Duration", NULL, (void*)TrackAnimator__set_Duration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_DurationBack", NULL, (void*)TrackAnimator__get_DurationBack_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_DurationBack", NULL, (void*)TrackAnimator__set_DurationBack_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Easing", NULL, (void*)TrackAnimator__get_Easing_fn, 0, false, ::g::Fuse::Animations::Easing_typeof(), 0),
        new uFunction("set_Easing", NULL, (void*)TrackAnimator__set_Easing_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::Easing_typeof()),
        new uFunction("get_EasingBack", NULL, (void*)TrackAnimator__get_EasingBack_fn, 0, false, ::g::Fuse::Animations::Easing_typeof(), 0),
        new uFunction("set_EasingBack", NULL, (void*)TrackAnimator__set_EasingBack_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::Easing_typeof()),
        new uFunction("get_KeyframeInterpolation", NULL, (void*)TrackAnimator__get_KeyframeInterpolation_fn, 0, false, ::g::Fuse::Animations::KeyframeInterpolation_typeof(), 0),
        new uFunction("set_KeyframeInterpolation", NULL, (void*)TrackAnimator__set_KeyframeInterpolation_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::KeyframeInterpolation_typeof()),
        new uFunction("get_Keyframes", NULL, (void*)TrackAnimator__get_Keyframes_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Animations::Keyframe_typeof()), 0),
        new uFunction("get_Provider", NULL, (void*)TrackAnimator__get_Provider_fn, 0, false, ::g::Fuse::Animations::ITrackProvider_typeof(), 0),
        new uFunction("set_Provider", NULL, (void*)TrackAnimator__set_Provider_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::ITrackProvider_typeof()),
        new uFunction("get_Weight", NULL, (void*)TrackAnimator__get_Weight_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Weight", NULL, (void*)TrackAnimator__set_Weight_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
    return type;
}

// protected generated TrackAnimator() :3074
void TrackAnimator__ctor_1_fn(TrackAnimator* __this)
{
    __this->ctor_1();
}

// internal override sealed Fuse.Animations.AnimatorVariant get_AnimatorVariant() :3078
void TrackAnimator__get_AnimatorVariant_fn(TrackAnimator* __this, int* __retval)
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "get_AnimatorVariant()");

    if (__this->_discreteProvider != NULL)
        return *__retval = ::g::Fuse::Animations::TrackProvider::GetAnimatorVariant(uInterface(uPtr(__this->_discreteProvider), ::TYPES[96/*Fuse.Animations.TrackProvider*/]), __this), void();
    else if (__this->_continuousProvider != NULL)
        return *__retval = ::g::Fuse::Animations::TrackProvider::GetAnimatorVariant(uInterface(uPtr(__this->_continuousProvider), ::TYPES[96/*Fuse.Animations.TrackProvider*/]), __this), void();

    return *__retval = 0, void();
}

// public double get_DelayBack() :3172
void TrackAnimator__get_DelayBack_fn(TrackAnimator* __this, double* __retval)
{
    *__retval = __this->DelayBack();
}

// public void set_DelayBack(double value) :3173
void TrackAnimator__set_DelayBack_fn(TrackAnimator* __this, double* value)
{
    __this->DelayBack(*value);
}

// public generated double get_Duration() :3154
void TrackAnimator__get_Duration_fn(TrackAnimator* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public generated void set_Duration(double value) :3154
void TrackAnimator__set_Duration_fn(TrackAnimator* __this, double* value)
{
    __this->Duration(*value);
}

// public double get_DurationBack() :3160
void TrackAnimator__get_DurationBack_fn(TrackAnimator* __this, double* __retval)
{
    *__retval = __this->DurationBack();
}

// public void set_DurationBack(double value) :3161
void TrackAnimator__set_DurationBack_fn(TrackAnimator* __this, double* value)
{
    __this->DurationBack(*value);
}

// public Fuse.Animations.Easing get_Easing() :3138
void TrackAnimator__get_Easing_fn(TrackAnimator* __this, int* __retval)
{
    *__retval = __this->Easing();
}

// public void set_Easing(Fuse.Animations.Easing value) :3139
void TrackAnimator__set_Easing_fn(TrackAnimator* __this, int* value)
{
    __this->Easing(*value);
}

// public Fuse.Animations.Easing get_EasingBack() :3146
void TrackAnimator__get_EasingBack_fn(TrackAnimator* __this, int* __retval)
{
    *__retval = __this->EasingBack();
}

// public void set_EasingBack(Fuse.Animations.Easing value) :3147
void TrackAnimator__set_EasingBack_fn(TrackAnimator* __this, int* value)
{
    __this->EasingBack(*value);
}

// internal override sealed double GetDurationWithDelay(Fuse.Animations.AnimationVariant dir) :3088
void TrackAnimator__GetDurationWithDelay_fn(TrackAnimator* __this, int* dir, double* __retval)
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "GetDurationWithDelay(Fuse.Animations.AnimationVariant)");
    int dir_ = *dir;
    double duration = 0.0;

    if (__this->_discreteProvider != NULL)
        duration = ::g::Fuse::Animations::TrackProvider::GetDuration(uInterface(uPtr(__this->_discreteProvider), ::TYPES[96/*Fuse.Animations.TrackProvider*/]), __this, dir_);
    else if (__this->_continuousProvider != NULL)
        duration = ::g::Fuse::Animations::TrackProvider::GetDuration(uInterface(uPtr(__this->_continuousProvider), ::TYPES[96/*Fuse.Animations.TrackProvider*/]), __this, dir_);

    return *__retval = (((dir_ == 1) && __this->HasBack()) ? __this->DelayBack() : __this->Delay()) + duration, void();
}

// internal Fuse.Animations.TrackProvider GetProvider(Fuse.Animations.AnimationVariant variant) :3128
void TrackAnimator__GetProvider_fn(TrackAnimator* __this, int* variant, uObject** __retval)
{
    *__retval = __this->GetProvider(*variant);
}

// internal bool get_HasBack() :3182
void TrackAnimator__get_HasBack_fn(TrackAnimator* __this, bool* __retval)
{
    *__retval = __this->HasBack();
}

// public Fuse.Animations.KeyframeInterpolation get_KeyframeInterpolation() :3211
void TrackAnimator__get_KeyframeInterpolation_fn(TrackAnimator* __this, int* __retval)
{
    *__retval = __this->KeyframeInterpolation();
}

// public void set_KeyframeInterpolation(Fuse.Animations.KeyframeInterpolation value) :3212
void TrackAnimator__set_KeyframeInterpolation_fn(TrackAnimator* __this, int* value)
{
    __this->KeyframeInterpolation(*value);
}

// public Uno.Collections.IList<Fuse.Animations.Keyframe> get_Keyframes() :3218
void TrackAnimator__get_Keyframes_fn(TrackAnimator* __this, uObject** __retval)
{
    *__retval = __this->Keyframes();
}

// private Fuse.Animations.KeyframeTrack get_KeyframeTrack() :3188
void TrackAnimator__get_KeyframeTrack_fn(TrackAnimator* __this, uObject** __retval)
{
    *__retval = __this->KeyframeTrack();
}

// internal void MarkDiscrete() :3103
void TrackAnimator__MarkDiscrete_fn(TrackAnimator* __this)
{
    __this->MarkDiscrete();
}

// public Fuse.Animations.ITrackProvider get_Provider() :3114
void TrackAnimator__get_Provider_fn(TrackAnimator* __this, uObject** __retval)
{
    *__retval = __this->Provider();
}

// public void set_Provider(Fuse.Animations.ITrackProvider value) :3120
void TrackAnimator__set_Provider_fn(TrackAnimator* __this, uObject* value)
{
    __this->Provider(value);
}

// public double get_Weight() :3224
void TrackAnimator__get_Weight_fn(TrackAnimator* __this, double* __retval)
{
    *__retval = __this->Weight();
}

// public void set_Weight(double value) :3225
void TrackAnimator__set_Weight_fn(TrackAnimator* __this, double* value)
{
    __this->Weight(*value);
}

// protected generated TrackAnimator() [instance] :3074
void TrackAnimator::ctor_1()
{
    uStackFrame __("Fuse.Animations.TrackAnimator", ".ctor()");
    _continuousProvider = (uObject*)::g::Fuse::Animations::EasingTrack::Singleton();
    _weight = 1.0;
    ctor_();
}

// public double get_DelayBack() [instance] :3172
double TrackAnimator::DelayBack()
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "get_DelayBack()");
    return _hasDelayBack ? _delayBack : 0.0;
}

// public void set_DelayBack(double value) [instance] :3173
void TrackAnimator::DelayBack(double value)
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "set_DelayBack(double)");
    _delayBack = value;
    _hasDelayBack = true;
}

// public generated double get_Duration() [instance] :3154
double TrackAnimator::Duration()
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "get_Duration()");
    return _Duration;
}

// public generated void set_Duration(double value) [instance] :3154
void TrackAnimator::Duration(double value)
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "set_Duration(double)");
    _Duration = value;
}

// public double get_DurationBack() [instance] :3160
double TrackAnimator::DurationBack()
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "get_DurationBack()");
    return _hasDurationBack ? _durationBack : Duration();
}

// public void set_DurationBack(double value) [instance] :3161
void TrackAnimator::DurationBack(double value)
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "set_DurationBack(double)");
    _durationBack = value;
    _hasDurationBack = true;
}

// public Fuse.Animations.Easing get_Easing() [instance] :3138
int TrackAnimator::Easing()
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "get_Easing()");
    return _easing;
}

// public void set_Easing(Fuse.Animations.Easing value) [instance] :3139
void TrackAnimator::Easing(int value)
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "set_Easing(Fuse.Animations.Easing)");
    _easing = value;
}

// public Fuse.Animations.Easing get_EasingBack() [instance] :3146
int TrackAnimator::EasingBack()
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "get_EasingBack()");
    return _hasEasingBack ? _easingBack : _easing;
}

// public void set_EasingBack(Fuse.Animations.Easing value) [instance] :3147
void TrackAnimator::EasingBack(int value)
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "set_EasingBack(Fuse.Animations.Easing)");
    _easingBack = value;
    _hasEasingBack = true;
}

// internal Fuse.Animations.TrackProvider GetProvider(Fuse.Animations.AnimationVariant variant) [instance] :3128
uObject* TrackAnimator::GetProvider(int variant)
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "GetProvider(Fuse.Animations.AnimationVariant)");
    uObject* ind1 = _discreteProvider;
    return (ind1 != NULL) ? ind1 : (uObject*)_continuousProvider;
}

// internal bool get_HasBack() [instance] :3182
bool TrackAnimator::HasBack()
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "get_HasBack()");
    return (_hasDelayBack || _hasDurationBack) || _hasEasingBack;
}

// public Fuse.Animations.KeyframeInterpolation get_KeyframeInterpolation() [instance] :3211
int TrackAnimator::KeyframeInterpolation()
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "get_KeyframeInterpolation()");
    return ::g::Fuse::Animations::KeyframeTrack::Interpolation(uInterface(uPtr(KeyframeTrack()), ::TYPES[99/*Fuse.Animations.KeyframeTrack*/]));
}

// public void set_KeyframeInterpolation(Fuse.Animations.KeyframeInterpolation value) [instance] :3212
void TrackAnimator::KeyframeInterpolation(int value)
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "set_KeyframeInterpolation(Fuse.Animations.KeyframeInterpolation)");
    ::g::Fuse::Animations::KeyframeTrack::Interpolation(uInterface(uPtr(KeyframeTrack()), ::TYPES[99/*Fuse.Animations.KeyframeTrack*/]), value);
}

// public Uno.Collections.IList<Fuse.Animations.Keyframe> get_Keyframes() [instance] :3218
uObject* TrackAnimator::Keyframes()
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "get_Keyframes()");
    return ::g::Fuse::Animations::KeyframeTrack::Keyframes(uInterface(uPtr(KeyframeTrack()), ::TYPES[99/*Fuse.Animations.KeyframeTrack*/]));
}

// private Fuse.Animations.KeyframeTrack get_KeyframeTrack() [instance] :3188
uObject* TrackAnimator::KeyframeTrack()
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "get_KeyframeTrack()");

    if (_keyframeTrack == NULL)
    {
        if (_isDiscrete)
        {
            ::g::Fuse::Animations::DiscreteKeyframeTrack* t = ::g::Fuse::Animations::DiscreteKeyframeTrack::New1();
            _keyframeTrack = (uObject*)t;
            _discreteProvider = (uObject*)t;
        }
        else
        {
            ::g::Fuse::Animations::SplineTrack* t1 = ::g::Fuse::Animations::SplineTrack::New1();
            _keyframeTrack = (uObject*)t1;
            _continuousProvider = (uObject*)t1;
        }
    }

    return _keyframeTrack;
}

// internal void MarkDiscrete() [instance] :3103
void TrackAnimator::MarkDiscrete()
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "MarkDiscrete()");
    _discreteProvider = (uObject*)::g::Fuse::Animations::DiscreteSingleTrack::Singleton();
    _continuousProvider = NULL;
    _isDiscrete = true;
}

// public Fuse.Animations.ITrackProvider get_Provider() [instance] :3114
uObject* TrackAnimator::Provider()
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "get_Provider()");

    if (_continuousProvider != NULL)
        return uAs<uObject*>(_continuousProvider, ::TYPES[100/*Fuse.Animations.ITrackProvider*/]);

    return NULL;
}

// public void set_Provider(Fuse.Animations.ITrackProvider value) [instance] :3120
void TrackAnimator::Provider(uObject* value)
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "set_Provider(Fuse.Animations.ITrackProvider)");
    _continuousProvider = NULL;

    if (uIs(value, ::TYPES[66/*Fuse.Animations.ContinuousTrackProvider*/]))
        _continuousProvider = uAs<uObject*>(value, ::TYPES[96/*Fuse.Animations.TrackProvider*/]);
}

// public double get_Weight() [instance] :3224
double TrackAnimator::Weight()
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "get_Weight()");
    return _weight;
}

// public void set_Weight(double value) [instance] :3225
void TrackAnimator::Weight(double value)
{
    uStackFrame __("Fuse.Animations.TrackAnimator", "set_Weight(double)");
    _weight = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#19
// --------------------------------------------------------------

// internal abstract class TrackAnimatorState :3234
// {
TrackAnimatorState_type* TrackAnimatorState_typeof()
{
    static uSStrong<TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(TrackAnimatorState);
    options.TypeSize = sizeof(TrackAnimatorState_type);
    type = (TrackAnimatorState_type*)uClassType::New("Fuse.Animations.TrackAnimatorState", options);
    type->SetBase(::g::Fuse::Animations::AnimatorState_typeof());
    type->fp_SeekObjectValue = TrackAnimatorState__SeekObjectValue_fn;
    type->fp_SeekProgress = (void(*)(::g::Fuse::Animations::AnimatorState*, double*, double*, int*, double*, int*))TrackAnimatorState__SeekProgress_fn;
    type->fp_SeekTime = (void(*)(::g::Fuse::Animations::AnimatorState*, double*, double*, int*, double*, int*))TrackAnimatorState__SeekTime_fn;
    type->fp_SeekValue = TrackAnimatorState__SeekValue_fn;
    ::TYPES[47] = ::g::Fuse::Animations::AnimatorState_typeof();
    ::TYPES[66] = ::g::Fuse::Animations::ContinuousTrackProvider_typeof();
    ::TYPES[60] = ::g::Fuse::Animations::DiscreteTrackProvider_typeof();
    ::TYPES[32] = ::g::Uno::Float_typeof();
    ::TYPES[50] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[46] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[15] = ::g::Uno::Int_typeof();
    type->SetFields(3,
        ::g::Fuse::Animations::ContinuousTrackProvider_typeof(), offsetof(::g::Fuse::Animations::TrackAnimatorState, _continuousProvider), 0,
        ::g::Fuse::Animations::DiscreteTrackProvider_typeof(), offsetof(::g::Fuse::Animations::TrackAnimatorState, _discreteProvider), 0,
        ::g::Fuse::Animations::TrackAnimator_typeof(), offsetof(::g::Fuse::Animations::TrackAnimatorState, Animator), 0);
    return type;
}

// protected TrackAnimatorState(Fuse.Animations.TrackAnimator animator, Fuse.Animations.CreateStateParams p, [Fuse.Node useNode]) :3240
void TrackAnimatorState__ctor_1_fn(TrackAnimatorState* __this, ::g::Fuse::Animations::TrackAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Node* useNode)
{
    __this->ctor_1(animator, p, useNode);
}

// public double get_Duration() :3319
void TrackAnimatorState__get_Duration_fn(TrackAnimatorState* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public Fuse.Animations.Easing get_Easing() :3324
void TrackAnimatorState__get_Easing_fn(TrackAnimatorState* __this, int* __retval)
{
    *__retval = __this->Easing();
}

// public bool get_IsBackward() :3314
void TrackAnimatorState__get_IsBackward_fn(TrackAnimatorState* __this, bool* __retval)
{
    *__retval = __this->IsBackward();
}

// protected virtual void SeekObjectValue(object value, float strength) :3310
void TrackAnimatorState__SeekObjectValue_fn(TrackAnimatorState* __this, uObject* value, float* strength)
{
}

// internal override sealed Fuse.Animations.SeekResult SeekProgress(double progress, double interval, Fuse.Animations.SeekDirection dir, double strength) :3250
void TrackAnimatorState__SeekProgress_fn(TrackAnimatorState* __this, double* progress, double* interval, int* dir, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.TrackAnimatorState", "SeekProgress(double,double,Fuse.Animations.SeekDirection,double)");
    double progress_ = *progress;
    double interval_ = *interval;
    int dir_ = *dir;
    double strength_ = *strength;

    if (__this->_continuousProvider != NULL)
    {
        double oStrength;
        ::g::Uno::Float4 oValue;
        int r = ::g::Fuse::Animations::ContinuousTrackProvider::GetSeekProgress(uInterface(uPtr(__this->_continuousProvider), ::TYPES[66/*Fuse.Animations.ContinuousTrackProvider*/]), __this, progress_, interval_, dir_, &oValue, &oStrength);
        __this->SeekValue(oValue, (float)((oStrength * strength_) * uPtr(__this->Animator)->Weight()));
        return *__retval = r, void();
    }

    if (__this->_discreteProvider != NULL)
    {
        double oStrength1;
        uObject* oValue1;
        int r1 = ::g::Fuse::Animations::DiscreteTrackProvider::GetSeekProgress(uInterface(uPtr(__this->_discreteProvider), ::TYPES[60/*Fuse.Animations.DiscreteTrackProvider*/]), __this, progress_, interval_, dir_, &oValue1, &oStrength1);
        __this->SeekObjectValue(oValue1, (float)((oStrength1 * strength_) * uPtr(__this->Animator)->Weight()));
        return *__retval = r1, void();
    }

    return *__retval = 3, void();
}

// internal override sealed Fuse.Animations.SeekResult SeekTime(double elapsed, double interval, Fuse.Animations.SeekDirection dir, double strength) :3276
void TrackAnimatorState__SeekTime_fn(TrackAnimatorState* __this, double* elapsed, double* interval, int* dir, double* strength, int* __retval)
{
    uStackFrame __("Fuse.Animations.TrackAnimatorState", "SeekTime(double,double,Fuse.Animations.SeekDirection,double)");
    double elapsed_ = *elapsed;
    double interval_ = *interval;
    int dir_ = *dir;
    double strength_ = *strength;
    double relTime;

    if (__this->IsBackward() && uPtr(__this->Animator)->HasBack())
        relTime = elapsed_ - ((__this->TotalDuration - uPtr(__this->Animator)->DelayBack()) - uPtr(__this->Animator)->DurationBack());
    else
        relTime = elapsed_ - uPtr(__this->Animator)->Delay();

    if (__this->_continuousProvider != NULL)
    {
        double oStrength;
        ::g::Uno::Float4 oValue;
        int r = ::g::Fuse::Animations::ContinuousTrackProvider::GetSeekTime(uInterface(uPtr(__this->_continuousProvider), ::TYPES[66/*Fuse.Animations.ContinuousTrackProvider*/]), __this, relTime, interval_, dir_, &oValue, &oStrength);
        __this->SeekValue(oValue, (float)(oStrength * strength_));
        return *__retval = r, void();
    }

    if (__this->_discreteProvider != NULL)
    {
        double oStrength1;
        uObject* oValue1;
        int r1 = ::g::Fuse::Animations::DiscreteTrackProvider::GetSeekTime(uInterface(uPtr(__this->_discreteProvider), ::TYPES[60/*Fuse.Animations.DiscreteTrackProvider*/]), __this, relTime, interval_, dir_, &oValue1, &oStrength1);
        __this->SeekObjectValue(oValue1, (float)(oStrength1 * strength_));
        return *__retval = r1, void();
    }

    return *__retval = 3, void();
}

// protected virtual void SeekValue(float4 value, float strength) :3309
void TrackAnimatorState__SeekValue_fn(TrackAnimatorState* __this, ::g::Uno::Float4* value, float* strength)
{
}

// protected TrackAnimatorState(Fuse.Animations.TrackAnimator animator, Fuse.Animations.CreateStateParams p, [Fuse.Node useNode]) [instance] :3240
void TrackAnimatorState::ctor_1(::g::Fuse::Animations::TrackAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Node* useNode)
{
    uStackFrame __("Fuse.Animations.TrackAnimatorState", ".ctor(Fuse.Animations.TrackAnimator,Fuse.Animations.CreateStateParams,[Fuse.Node])");
    ctor_(p, useNode);
    Animator = animator;
    uObject* pr = uPtr(animator)->GetProvider(Variant);
    _continuousProvider = uAs<uObject*>(pr, ::TYPES[66/*Fuse.Animations.ContinuousTrackProvider*/]);
    _discreteProvider = uAs<uObject*>(pr, ::TYPES[60/*Fuse.Animations.DiscreteTrackProvider*/]);
}

// public double get_Duration() [instance] :3319
double TrackAnimatorState::Duration()
{
    uStackFrame __("Fuse.Animations.TrackAnimatorState", "get_Duration()");
    return IsBackward() ? uPtr(Animator)->DurationBack() : uPtr(Animator)->Duration();
}

// public Fuse.Animations.Easing get_Easing() [instance] :3324
int TrackAnimatorState::Easing()
{
    uStackFrame __("Fuse.Animations.TrackAnimatorState", "get_Easing()");
    return IsBackward() ? uPtr(Animator)->EasingBack() : uPtr(Animator)->Easing();
}

// public bool get_IsBackward() [instance] :3314
bool TrackAnimatorState::IsBackward()
{
    uStackFrame __("Fuse.Animations.TrackAnimatorState", "get_IsBackward()");
    return Variant == 1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#19
// --------------------------------------------------------------

// internal abstract interface TrackProvider :3046
// {
uInterfaceType* TrackProvider_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.TrackProvider", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#20
// --------------------------------------------------------------

// public abstract class TransformAnimator<TransformType> :3343
// {
TransformAnimator_type* TransformAnimator_typeof()
{
    static uSStrong<TransformAnimator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 21;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(TransformAnimator);
    options.TypeSize = sizeof(TransformAnimator_type);
    type = (TransformAnimator_type*)uClassType::New("Fuse.Animations.TransformAnimator`1", options);
    type->SetBase(::g::Fuse::Animations::TrackAnimator_typeof());
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))TransformAnimator__CreateState_fn;
    ::TYPES[46] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[47] = ::g::Fuse::Animations::AnimatorState_typeof();
    ::TYPES[101] = ::g::Fuse::Animations::TransformAnimatorState_typeof();
    ::TYPES[50] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[38] = ::g::Uno::Float4_typeof();
    type->SetPrecalc(
        ::TYPES[101/*Fuse.Animations.TransformAnimatorState`1*/]->MakeType(type->T(0)));
    type->SetFields(18,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Animations::TransformAnimator, _Priority), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Animations::TransformAnimator, _RelativeNode), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Animations::TransformAnimator, _Target), 0);
    type->Reflection.SetFunctions(14,
        new uFunction("get_Priority", NULL, (void*)TransformAnimator__get_Priority_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Priority", NULL, (void*)TransformAnimator__set_Priority_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_RelativeNode", NULL, (void*)TransformAnimator__get_RelativeNode_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_RelativeNode", NULL, (void*)TransformAnimator__set_RelativeNode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("get_Target", NULL, (void*)TransformAnimator__get_Target_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)TransformAnimator__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("get_Vector", NULL, (void*)TransformAnimator__get_Vector_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("set_Vector", NULL, (void*)TransformAnimator__set_Vector_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("get_X", NULL, (void*)TransformAnimator__get_X_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_X", NULL, (void*)TransformAnimator__set_X_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Y", NULL, (void*)TransformAnimator__get_Y_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Y", NULL, (void*)TransformAnimator__set_Y_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Z", NULL, (void*)TransformAnimator__get_Z_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Z", NULL, (void*)TransformAnimator__set_Z_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}

// internal TransformAnimator() :3346
void TransformAnimator__ctor_2_fn(TransformAnimator* __this)
{
    __this->ctor_2();
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :3383
void TransformAnimator__CreateState_fn(TransformAnimator* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(TransformAnimator_typeof())->Precalced(0/*Fuse.Animations.TransformAnimatorState<TransformType>*/),
        __this->__type->GetBase(TransformAnimator_typeof())->T(0),
    };
    uStackFrame __("Fuse.Animations.TransformAnimator`1", "CreateState(Fuse.Animations.CreateStateParams)");
    return *__retval = (::g::Fuse::Animations::TransformAnimatorState*)::g::Fuse::Animations::TransformAnimatorState::New1(__types[0], __this, p), void();
}

// public generated int get_Priority() :3379
void TransformAnimator__get_Priority_fn(TransformAnimator* __this, int* __retval)
{
    *__retval = __this->Priority();
}

// public generated void set_Priority(int value) :3379
void TransformAnimator__set_Priority_fn(TransformAnimator* __this, int* value)
{
    __this->Priority(*value);
}

// public generated Fuse.Node get_RelativeNode() :3375
void TransformAnimator__get_RelativeNode_fn(TransformAnimator* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->RelativeNode();
}

// public generated void set_RelativeNode(Fuse.Node value) :3375
void TransformAnimator__set_RelativeNode_fn(TransformAnimator* __this, ::g::Fuse::Node* value)
{
    __this->RelativeNode(value);
}

// public generated Fuse.Node get_Target() :3377
void TransformAnimator__get_Target_fn(TransformAnimator* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Node value) :3377
void TransformAnimator__set_Target_fn(TransformAnimator* __this, ::g::Fuse::Node* value)
{
    __this->Target(value);
}

// public float3 get_Vector() :3371
void TransformAnimator__get_Vector_fn(TransformAnimator* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->Vector();
}

// public void set_Vector(float3 value) :3372
void TransformAnimator__set_Vector_fn(TransformAnimator* __this, ::g::Uno::Float3* value)
{
    __this->Vector(*value);
}

// public float get_X() :3353
void TransformAnimator__get_X_fn(TransformAnimator* __this, float* __retval)
{
    *__retval = __this->X();
}

// public void set_X(float value) :3354
void TransformAnimator__set_X_fn(TransformAnimator* __this, float* value)
{
    __this->X(*value);
}

// public float get_Y() :3359
void TransformAnimator__get_Y_fn(TransformAnimator* __this, float* __retval)
{
    *__retval = __this->Y();
}

// public void set_Y(float value) :3360
void TransformAnimator__set_Y_fn(TransformAnimator* __this, float* value)
{
    __this->Y(*value);
}

// public float get_Z() :3365
void TransformAnimator__get_Z_fn(TransformAnimator* __this, float* __retval)
{
    *__retval = __this->Z();
}

// public void set_Z(float value) :3366
void TransformAnimator__set_Z_fn(TransformAnimator* __this, float* value)
{
    __this->Z(*value);
}

// internal TransformAnimator() [instance] :3346
void TransformAnimator::ctor_2()
{
    uStackFrame __("Fuse.Animations.TransformAnimator`1", ".ctor()");
    ctor_1();
    MixOp(0);
}

// public generated int get_Priority() [instance] :3379
int TransformAnimator::Priority()
{
    uStackFrame __("Fuse.Animations.TransformAnimator`1", "get_Priority()");
    return _Priority;
}

// public generated void set_Priority(int value) [instance] :3379
void TransformAnimator::Priority(int value)
{
    uStackFrame __("Fuse.Animations.TransformAnimator`1", "set_Priority(int)");
    _Priority = value;
}

// public generated Fuse.Node get_RelativeNode() [instance] :3375
::g::Fuse::Node* TransformAnimator::RelativeNode()
{
    uStackFrame __("Fuse.Animations.TransformAnimator`1", "get_RelativeNode()");
    return _RelativeNode;
}

// public generated void set_RelativeNode(Fuse.Node value) [instance] :3375
void TransformAnimator::RelativeNode(::g::Fuse::Node* value)
{
    uStackFrame __("Fuse.Animations.TransformAnimator`1", "set_RelativeNode(Fuse.Node)");
    _RelativeNode = value;
}

// public generated Fuse.Node get_Target() [instance] :3377
::g::Fuse::Node* TransformAnimator::Target()
{
    uStackFrame __("Fuse.Animations.TransformAnimator`1", "get_Target()");
    return _Target;
}

// public generated void set_Target(Fuse.Node value) [instance] :3377
void TransformAnimator::Target(::g::Fuse::Node* value)
{
    uStackFrame __("Fuse.Animations.TransformAnimator`1", "set_Target(Fuse.Node)");
    _Target = value;
}

// public float3 get_Vector() [instance] :3371
::g::Uno::Float3 TransformAnimator::Vector()
{
    uStackFrame __("Fuse.Animations.TransformAnimator`1", "get_Vector()");
    ::g::Uno::Float4 ind1 = _vectorValue;
    return ::g::Uno::Float3__New2(ind1.X, ind1.Y, ind1.Z);
}

// public void set_Vector(float3 value) [instance] :3372
void TransformAnimator::Vector(::g::Uno::Float3 value)
{
    uStackFrame __("Fuse.Animations.TransformAnimator`1", "set_Vector(float3)");
    _vectorValue = ::g::Uno::Float4__New8(value, _vectorValue.W);
}

// public float get_X() [instance] :3353
float TransformAnimator::X()
{
    uStackFrame __("Fuse.Animations.TransformAnimator`1", "get_X()");
    return _vectorValue.X;
}

// public void set_X(float value) [instance] :3354
void TransformAnimator::X(float value)
{
    uStackFrame __("Fuse.Animations.TransformAnimator`1", "set_X(float)");
    _vectorValue.X = value;
}

// public float get_Y() [instance] :3359
float TransformAnimator::Y()
{
    uStackFrame __("Fuse.Animations.TransformAnimator`1", "get_Y()");
    return _vectorValue.Y;
}

// public void set_Y(float value) [instance] :3360
void TransformAnimator::Y(float value)
{
    uStackFrame __("Fuse.Animations.TransformAnimator`1", "set_Y(float)");
    _vectorValue.Y = value;
}

// public float get_Z() [instance] :3365
float TransformAnimator::Z()
{
    uStackFrame __("Fuse.Animations.TransformAnimator`1", "get_Z()");
    return _vectorValue.Z;
}

// public void set_Z(float value) [instance] :3366
void TransformAnimator::Z(float value)
{
    uStackFrame __("Fuse.Animations.TransformAnimator`1", "set_Z(float)");
    _vectorValue.Z = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#20
// --------------------------------------------------------------

// internal sealed class TransformAnimatorState<TransformType> :3389
// {
::g::Fuse::Animations::TrackAnimatorState_type* TransformAnimatorState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(TransformAnimatorState);
    options.TypeSize = sizeof(::g::Fuse::Animations::TrackAnimatorState_type);
    type = (::g::Fuse::Animations::TrackAnimatorState_type*)uClassType::New("Fuse.Animations.TransformAnimatorState`1", options);
    type->SetBase(::g::Fuse::Animations::TrackAnimatorState_typeof());
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))TransformAnimatorState__Disable_fn;
    type->fp_SeekValue = (void(*)(::g::Fuse::Animations::TrackAnimatorState*, ::g::Uno::Float4*, float*))TransformAnimatorState__SeekValue_fn;
    ::STRINGS[5] = uString::Const("Invalid seek");
    ::STRINGS[15] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#20");
    ::TYPES[50] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[102] = ::g::Fuse::Animations::TransformAnimator_typeof();
    ::TYPES[46] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[47] = ::g::Fuse::Animations::AnimatorState_typeof();
    ::TYPES[103] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Transform_typeof());
    ::TYPES[69] = ::g::Fuse::Transform_typeof();
    ::TYPES[7] = ::g::Uno::Bool_typeof();
    type->SetPrecalc(
        ::TYPES[102/*Fuse.Animations.TransformAnimator`1*/]->MakeType(type->T(0)));
    type->SetFields(6,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TransformAnimatorState, _inSeek), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Animations::TransformAnimatorState, _lastStrength), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Transform_typeof()), offsetof(::g::Fuse::Animations::TransformAnimatorState, _matAct), 0,
        ::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Animations::TransformAnimatorState, Animator1), 0,
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(::g::Fuse::Transform_typeof()), offsetof(::g::Fuse::Animations::TransformAnimatorState, mixHandle), 0,
        type->T(0), offsetof(::g::Fuse::Animations::TransformAnimatorState, transform), 0);
    return type;
}

// public TransformAnimatorState(Fuse.Animations.TransformAnimator<TransformType> animator, Fuse.Animations.CreateStateParams p) :3397
void TransformAnimatorState__ctor_2_fn(TransformAnimatorState* __this, ::g::Fuse::Animations::TransformAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public override sealed void Disable() :3410
void TransformAnimatorState__Disable_fn(TransformAnimatorState* __this)
{
    uStackFrame __("Fuse.Animations.TransformAnimatorState`1", "Disable()");

    if (__this->mixHandle == NULL)
        return;

    ::g::Fuse::Animations::IMixerHandle::Unregister(uInterface(uPtr(__this->mixHandle), ::TYPES[74/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/]));
    __this->mixHandle = NULL;
    uPtr(uAs< ::g::Fuse::Transform*>(__this->transform, ::TYPES[69/*Fuse.Transform*/]))->remove_MatrixChanged(__this->_matAct);
    uPtr(uAs< ::g::Fuse::Transform*>(__this->transform, ::TYPES[69/*Fuse.Transform*/]))->Removed(__this->Node);
    __this->_matAct = NULL;
    __this->transform = NULL;
}

// public TransformAnimatorState New(Fuse.Animations.TransformAnimator<TransformType> animator, Fuse.Animations.CreateStateParams p) :3397
void TransformAnimatorState__New1_fn(uType* __type, ::g::Fuse::Animations::TransformAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, TransformAnimatorState** __retval)
{
    *__retval = TransformAnimatorState::New1(__type, animator, p);
}

// internal void OnMatrixChanged(Fuse.Transform ignore) :3443
void TransformAnimatorState__OnMatrixChanged_fn(TransformAnimatorState* __this, ::g::Fuse::Transform* ignore)
{
    __this->OnMatrixChanged(ignore);
}

// protected override sealed void SeekValue(float4 value, float strength) :3424
void TransformAnimatorState__SeekValue_fn(TransformAnimatorState* __this, ::g::Uno::Float4* value, float* strength)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Animations.TransformAnimator<TransformType>*/),
        __this->__type->T(0),
    };
    uStackFrame __("Fuse.Animations.TransformAnimatorState`1", "SeekValue(float4,float)");
    ::g::Fuse::Node* ind1;
    ::g::Uno::Float4 value_ = *value;
    float strength_ = *strength;

    if ((__this->mixHandle == NULL) || (__this->transform == NULL))
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[5/*"Invalid seek"*/], 1, ::STRINGS[15/*"/usr/local/...*/], 3428);
        return;
    }

    __this->_inSeek = true;
    uPtr(uAs< ::g::Fuse::Transform*>(__this->transform, ::TYPES[69/*Fuse.Transform*/]))->RelativeNode((ind1 = uPtr(__this->Animator1)->RelativeNode(), (ind1 != NULL) ? ind1 : (::g::Fuse::Node*)__this->Node));
    uPtr(__this->Animator1)->Update(__this->Node, __this->transform, value_);
    __this->_lastStrength = strength_;
    ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(__this->mixHandle), ::TYPES[74/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/]), __this->transform, uCRef(__this->_lastStrength));
    __this->_inSeek = false;
}

// public TransformAnimatorState(Fuse.Animations.TransformAnimator<TransformType> animator, Fuse.Animations.CreateStateParams p) [instance] :3397
void TransformAnimatorState::ctor_2(::g::Fuse::Animations::TransformAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(0/*Fuse.Animations.TransformAnimator<TransformType>*/),
    };
    uStackFrame __("Fuse.Animations.TransformAnimatorState`1", ".ctor(Fuse.Animations.TransformAnimator<TransformType>,Fuse.Animations.CreateStateParams)");
    transform = (::g::Fuse::Transform*)__types[0]->New();
    ctor_1(animator, p, uPtr(animator)->Target());
    Animator1 = animator;
    mixHandle = ::g::Fuse::Animations::IMixer::RegisterTransform(uInterface(uPtr(uPtr(Animator1)->Mixer), ::TYPES[51/*Fuse.Animations.IMixer*/]), Node, uPtr(Animator1)->MixOp(), uPtr(Animator1)->Priority());
    _matAct = uDelegate::New(::TYPES[103/*Uno.Action<Fuse.Transform>*/], (void*)TransformAnimatorState__OnMatrixChanged_fn, this);
    uPtr(uAs< ::g::Fuse::Transform*>(transform, ::TYPES[69/*Fuse.Transform*/]))->add_MatrixChanged(_matAct);
    uPtr(uAs< ::g::Fuse::Transform*>(transform, ::TYPES[69/*Fuse.Transform*/]))->Added(Node);
}

// internal void OnMatrixChanged(Fuse.Transform ignore) [instance] :3443
void TransformAnimatorState::OnMatrixChanged(::g::Fuse::Transform* ignore)
{
    uStackFrame __("Fuse.Animations.TransformAnimatorState`1", "OnMatrixChanged(Fuse.Transform)");

    if ((!_inSeek && (mixHandle != NULL)) && (transform != NULL))
        ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(mixHandle), ::TYPES[74/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/]), transform, uCRef(_lastStrength));
}

// public TransformAnimatorState New(Fuse.Animations.TransformAnimator<TransformType> animator, Fuse.Animations.CreateStateParams p) [static] :3397
TransformAnimatorState* TransformAnimatorState::New1(uType* __type, ::g::Fuse::Animations::TransformAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    TransformAnimatorState* obj2 = (TransformAnimatorState*)uNew(__type);
    obj2->ctor_2(animator, p);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#20
// --------------------------------------------------------------

// internal enum TransformPriority :3335
uEnumType* TransformPriority_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.TransformPriority", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Shear", 4000LL,
        "Rotate", 3000LL,
        "Scale", 2000LL,
        "Translate", 1000LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#21
// --------------------------------------------------------------

// public sealed class TriggerAnimation :3597
// {
uType* TriggerAnimation_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(TriggerAnimation);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Animations.TriggerAnimation", options);
    type->fp_ctor_ = (void*)TriggerAnimation__New1_fn;
    ::TYPES[1] = ::g::Fuse::Animations::CreateStateParams_typeof();
    ::TYPES[81] = ::g::Fuse::Animations::AnimatorState_typeof()->Array();
    ::TYPES[104] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof());
    ::TYPES[15] = ::g::Uno::Int_typeof();
    ::TYPES[55] = ::g::Uno::Delegate_typeof();
    ::TYPES[9] = ::g::Uno::Action_typeof();
    ::TYPES[7] = ::g::Uno::Bool_typeof();
    ::TYPES[105] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof());
    ::TYPES[46] = ::g::Fuse::Animations::Animator_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof()), offsetof(::g::Fuse::Animations::TriggerAnimation, _animators), 0,
        TriggerAnimation_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _backward), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _crossFadeDuration), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _hasStretchDuration), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _hasTimeMultiplier), 0,
        ::g::Fuse::Animations::PlayMode_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _playMode), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _stretchDuration), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, _timeMultiplier), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimation, TimeChanged1), 0);
    type->Reflection.SetFunctions(15,
        new uFunction("get_Animators", NULL, (void*)TriggerAnimation__get_Animators_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof()), 0),
        new uFunction("get_Backward", NULL, (void*)TriggerAnimation__get_Backward_fn, 0, false, TriggerAnimation_typeof(), 0),
        new uFunction("set_Backward", NULL, (void*)TriggerAnimation__set_Backward_fn, 0, false, uVoid_typeof(), 1, TriggerAnimation_typeof()),
        new uFunction("get_CrossFadeDuration", NULL, (void*)TriggerAnimation__get_CrossFadeDuration_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_CrossFadeDuration", NULL, (void*)TriggerAnimation__set_CrossFadeDuration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("GetAnimatorsDuration", NULL, (void*)TriggerAnimation__GetAnimatorsDuration_fn, 0, false, ::g::Uno::Double_typeof(), 1, ::g::Fuse::Animations::AnimationVariant_typeof()),
        new uFunction("GetTimeMultiplier", NULL, (void*)TriggerAnimation__GetTimeMultiplier_fn, 0, false, ::g::Uno::Double_typeof(), 1, ::g::Fuse::Animations::AnimationVariant_typeof()),
        new uFunction("get_HasAnimators", NULL, (void*)TriggerAnimation__get_HasAnimators_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)TriggerAnimation__New1_fn, 0, true, TriggerAnimation_typeof(), 0),
        new uFunction("get_PlayMode", NULL, (void*)TriggerAnimation__get_PlayMode_fn, 0, false, ::g::Fuse::Animations::PlayMode_typeof(), 0),
        new uFunction("set_PlayMode", NULL, (void*)TriggerAnimation__set_PlayMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::PlayMode_typeof()),
        new uFunction("get_StretchDuration", NULL, (void*)TriggerAnimation__get_StretchDuration_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_StretchDuration", NULL, (void*)TriggerAnimation__set_StretchDuration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_TimeMultiplier", NULL, (void*)TriggerAnimation__get_TimeMultiplier_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_TimeMultiplier", NULL, (void*)TriggerAnimation__set_TimeMultiplier_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
    return type;
}

// public generated TriggerAnimation() :3597
void TriggerAnimation__ctor__fn(TriggerAnimation* __this)
{
    __this->ctor_();
}

// public Uno.Collections.IList<Fuse.Animations.Animator> get_Animators() :3603
void TriggerAnimation__get_Animators_fn(TriggerAnimation* __this, uObject** __retval)
{
    *__retval = __this->Animators();
}

// public Fuse.Animations.TriggerAnimation get_Backward() :3618
void TriggerAnimation__get_Backward_fn(TriggerAnimation* __this, TriggerAnimation** __retval)
{
    *__retval = __this->Backward();
}

// public void set_Backward(Fuse.Animations.TriggerAnimation value) :3624
void TriggerAnimation__set_Backward_fn(TriggerAnimation* __this, TriggerAnimation* value)
{
    __this->Backward(value);
}

// internal Fuse.Animations.AnimatorState[] CreateAnimatorsState(Fuse.Animations.AnimationVariant variant, Fuse.Node elm) :3630
void TriggerAnimation__CreateAnimatorsState_fn(TriggerAnimation* __this, int* variant, ::g::Fuse::Node* elm, uArray** __retval)
{
    *__retval = __this->CreateAnimatorsState(*variant, elm);
}

// internal Fuse.Animations.Player CreatePlayer([Fuse.Node node], [Fuse.Animations.AnimationVariant variant]) :3761
void TriggerAnimation__CreatePlayer_fn(TriggerAnimation* __this, ::g::Fuse::Node* node, int* variant, ::g::Fuse::Animations::Player** __retval)
{
    *__retval = __this->CreatePlayer(node, *variant);
}

// internal Fuse.Animations.TriggerAnimationState CreateState([Fuse.Node elm]) :3749
void TriggerAnimation__CreateState_fn(TriggerAnimation* __this, ::g::Fuse::Node* elm, ::g::Fuse::Animations::TriggerAnimationState** __retval)
{
    *__retval = __this->CreateState(elm);
}

// public double get_CrossFadeDuration() :3694
void TriggerAnimation__get_CrossFadeDuration_fn(TriggerAnimation* __this, double* __retval)
{
    *__retval = __this->CrossFadeDuration();
}

// public void set_CrossFadeDuration(double value) :3695
void TriggerAnimation__set_CrossFadeDuration_fn(TriggerAnimation* __this, double* value)
{
    __this->CrossFadeDuration(*value);
}

// public double GetAnimatorsDuration(Fuse.Animations.AnimationVariant variant) :3645
void TriggerAnimation__GetAnimatorsDuration_fn(TriggerAnimation* __this, int* variant, double* __retval)
{
    *__retval = __this->GetAnimatorsDuration(*variant);
}

// public double GetTimeMultiplier(Fuse.Animations.AnimationVariant variant) :3704
void TriggerAnimation__GetTimeMultiplier_fn(TriggerAnimation* __this, int* variant, double* __retval)
{
    *__retval = __this->GetTimeMultiplier(*variant);
}

// public bool get_HasAnimators() :3612
void TriggerAnimation__get_HasAnimators_fn(TriggerAnimation* __this, bool* __retval)
{
    *__retval = __this->HasAnimators();
}

// internal bool get_HasDirectionVariant() :3729
void TriggerAnimation__get_HasDirectionVariant_fn(TriggerAnimation* __this, bool* __retval)
{
    *__retval = __this->HasDirectionVariant();
}

// public generated TriggerAnimation New() :3597
void TriggerAnimation__New1_fn(TriggerAnimation** __retval)
{
    *__retval = TriggerAnimation::New1();
}

// private void OnTimeChanged() :3698
void TriggerAnimation__OnTimeChanged_fn(TriggerAnimation* __this)
{
    __this->OnTimeChanged();
}

// public Fuse.Animations.PlayMode get_PlayMode() :3777
void TriggerAnimation__get_PlayMode_fn(TriggerAnimation* __this, int* __retval)
{
    *__retval = __this->PlayMode();
}

// public void set_PlayMode(Fuse.Animations.PlayMode value) :3778
void TriggerAnimation__set_PlayMode_fn(TriggerAnimation* __this, int* value)
{
    __this->PlayMode(*value);
}

// internal Fuse.Animations.AnimationVariant RestrictVariant(Fuse.Animations.AnimationVariant variant) :3754
void TriggerAnimation__RestrictVariant_fn(TriggerAnimation* __this, int* variant, int* __retval)
{
    *__retval = __this->RestrictVariant(*variant);
}

// public double get_StretchDuration() :3680
void TriggerAnimation__get_StretchDuration_fn(TriggerAnimation* __this, double* __retval)
{
    *__retval = __this->StretchDuration();
}

// public void set_StretchDuration(double value) :3681
void TriggerAnimation__set_StretchDuration_fn(TriggerAnimation* __this, double* value)
{
    __this->StretchDuration(*value);
}

// internal generated void add_TimeChanged(Uno.Action value) :3725
void TriggerAnimation__add_TimeChanged_fn(TriggerAnimation* __this, uDelegate* value)
{
    __this->add_TimeChanged(value);
}

// internal generated void remove_TimeChanged(Uno.Action value) :3725
void TriggerAnimation__remove_TimeChanged_fn(TriggerAnimation* __this, uDelegate* value)
{
    __this->remove_TimeChanged(value);
}

// public double get_TimeMultiplier() :3665
void TriggerAnimation__get_TimeMultiplier_fn(TriggerAnimation* __this, double* __retval)
{
    *__retval = __this->TimeMultiplier();
}

// public void set_TimeMultiplier(double value) :3666
void TriggerAnimation__set_TimeMultiplier_fn(TriggerAnimation* __this, double* value)
{
    __this->TimeMultiplier(*value);
}

// public generated TriggerAnimation() [instance] :3597
void TriggerAnimation::ctor_()
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", ".ctor()");
    _crossFadeDuration = 0.5;
}

// public Uno.Collections.IList<Fuse.Animations.Animator> get_Animators() [instance] :3603
uObject* TriggerAnimation::Animators()
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "get_Animators()");

    if (_animators == NULL)
        _animators = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[104/*Uno.Collections.List<Fuse.Animations.Animator>*/]));

    return (uObject*)_animators;
}

// public Fuse.Animations.TriggerAnimation get_Backward() [instance] :3618
TriggerAnimation* TriggerAnimation::Backward()
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "get_Backward()");

    if (_backward == NULL)
        _backward = TriggerAnimation::New1();

    return _backward;
}

// public void set_Backward(Fuse.Animations.TriggerAnimation value) [instance] :3624
void TriggerAnimation::Backward(TriggerAnimation* value)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "set_Backward(Fuse.Animations.TriggerAnimation)");
    _backward = value;
}

// internal Fuse.Animations.AnimatorState[] CreateAnimatorsState(Fuse.Animations.AnimationVariant variant, Fuse.Node elm) [instance] :3630
uArray* TriggerAnimation::CreateAnimatorsState(int variant, ::g::Fuse::Node* elm)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "CreateAnimatorsState(Fuse.Animations.AnimationVariant,Fuse.Node)");
    ::g::Fuse::Animations::CreateStateParams* collection1;
    ::g::Fuse::Animations::Animator* ret3;
    collection1 = ::g::Fuse::Animations::CreateStateParams::New1();
    uPtr(collection1)->Variant = variant;
    uPtr(collection1)->TotalDuration = GetAnimatorsDuration(variant);
    uPtr(collection1)->Attached = elm;
    ::g::Fuse::Animations::CreateStateParams* csp = collection1;

    if (_animators == NULL)
        return uArray::New(::TYPES[81/*Fuse.Animations.AnimatorState[]*/], 0);

    uArray* state = uArray::New(::TYPES[81/*Fuse.Animations.AnimatorState[]*/], uPtr(_animators)->Count());

    for (int i = 0; i < uPtr(_animators)->Count(); ++i)
        state->Strong< ::g::Fuse::Animations::AnimatorState*>(i) = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_animators), uCRef<int>(i), &ret3), ret3))->CreateState(csp);

    return state;
}

// internal Fuse.Animations.Player CreatePlayer([Fuse.Node node], [Fuse.Animations.AnimationVariant variant]) [instance] :3761
::g::Fuse::Animations::Player* TriggerAnimation::CreatePlayer(::g::Fuse::Node* node, int variant)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "CreatePlayer([Fuse.Node],[Fuse.Animations.AnimationVariant])");
    variant = RestrictVariant(variant);

    if (variant == 0)
        return ::g::Fuse::Animations::Player::New1(node, this, 0, PlayMode());

    if (_backward != NULL)
        return ::g::Fuse::Animations::Player::New1(node, _backward, 0, PlayMode());

    return ::g::Fuse::Animations::Player::New1(node, this, 1, PlayMode());
}

// internal Fuse.Animations.TriggerAnimationState CreateState([Fuse.Node elm]) [instance] :3749
::g::Fuse::Animations::TriggerAnimationState* TriggerAnimation::CreateState(::g::Fuse::Node* elm)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "CreateState([Fuse.Node])");
    return ::g::Fuse::Animations::TriggerAnimationState::New1(this, elm);
}

// public double get_CrossFadeDuration() [instance] :3694
double TriggerAnimation::CrossFadeDuration()
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "get_CrossFadeDuration()");
    return _crossFadeDuration;
}

// public void set_CrossFadeDuration(double value) [instance] :3695
void TriggerAnimation::CrossFadeDuration(double value)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "set_CrossFadeDuration(double)");
    _crossFadeDuration = value;
}

// public double GetAnimatorsDuration(Fuse.Animations.AnimationVariant variant) [instance] :3645
double TriggerAnimation::GetAnimatorsDuration(int variant)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "GetAnimatorsDuration(Fuse.Animations.AnimationVariant)");
    ::g::Fuse::Animations::Animator* ret4;

    if ((variant == 1) && (_backward != NULL))
        return uPtr(_backward)->GetAnimatorsDuration(0);

    if (_animators == NULL)
        return 0.0;

    double max = 0.0;
    int c = uPtr(_animators)->Count();

    for (int i = 0; i < c; ++i)
        max = ::g::Uno::Math::Max(max, uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_animators), uCRef<int>(i), &ret4), ret4))->GetDurationWithDelay(variant));

    return max;
}

// public double GetTimeMultiplier(Fuse.Animations.AnimationVariant variant) [instance] :3704
double TriggerAnimation::GetTimeMultiplier(int variant)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "GetTimeMultiplier(Fuse.Animations.AnimationVariant)");

    if (_hasStretchDuration)
    {
        double dur = GetAnimatorsDuration(variant);

        if (_stretchDuration < 9.9999997473787516e-06)
            return 1.0;

        double mult = dur / _stretchDuration;

        if (_hasTimeMultiplier)
            mult = mult * TimeMultiplier();

        return mult;
    }

    if (_hasTimeMultiplier)
        return TimeMultiplier();

    return 1.0;
}

// public bool get_HasAnimators() [instance] :3612
bool TriggerAnimation::HasAnimators()
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "get_HasAnimators()");
    return (_animators != NULL) && (uPtr(_animators)->Count() > 0);
}

// internal bool get_HasDirectionVariant() [instance] :3729
bool TriggerAnimation::HasDirectionVariant()
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "get_HasDirectionVariant()");
    ::g::Fuse::Animations::Animator* ret5;

    if (_animators == NULL)
        return false;

    bool has = false;
    int c = uPtr(_animators)->Count();

    for (int i = 0; i < c; ++i)
    {
        int v = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_animators), uCRef<int>(i), &ret5), ret5))->AnimatorVariant();

        if (v == 2)
            has = true;

        if (v == 1)
            return false;
    }

    return has;
}

// private void OnTimeChanged() [instance] :3698
void TriggerAnimation::OnTimeChanged()
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "OnTimeChanged()");

    if (::g::Uno::Delegate::op_Inequality(TimeChanged1, NULL))
        uPtr(TimeChanged1)->InvokeVoid();
}

// public Fuse.Animations.PlayMode get_PlayMode() [instance] :3777
int TriggerAnimation::PlayMode()
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "get_PlayMode()");
    return _playMode;
}

// public void set_PlayMode(Fuse.Animations.PlayMode value) [instance] :3778
void TriggerAnimation::PlayMode(int value)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "set_PlayMode(Fuse.Animations.PlayMode)");
    _playMode = value;
}

// internal Fuse.Animations.AnimationVariant RestrictVariant(Fuse.Animations.AnimationVariant variant) [instance] :3754
int TriggerAnimation::RestrictVariant(int variant)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "RestrictVariant(Fuse.Animations.AnimationVariant)");

    if (!HasDirectionVariant() && (_backward == NULL))
        return 0;

    return variant;
}

// public double get_StretchDuration() [instance] :3680
double TriggerAnimation::StretchDuration()
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "get_StretchDuration()");
    return _stretchDuration;
}

// public void set_StretchDuration(double value) [instance] :3681
void TriggerAnimation::StretchDuration(double value)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "set_StretchDuration(double)");

    if ((_stretchDuration == value) && _hasStretchDuration)
        return;

    _stretchDuration = value;
    _hasStretchDuration = true;
    OnTimeChanged();
}

// internal generated void add_TimeChanged(Uno.Action value) [instance] :3725
void TriggerAnimation::add_TimeChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "add_TimeChanged(Uno.Action)");
    TimeChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(TimeChanged1, value), ::TYPES[9/*Uno.Action*/]);
}

// internal generated void remove_TimeChanged(Uno.Action value) [instance] :3725
void TriggerAnimation::remove_TimeChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "remove_TimeChanged(Uno.Action)");
    TimeChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(TimeChanged1, value), ::TYPES[9/*Uno.Action*/]);
}

// public double get_TimeMultiplier() [instance] :3665
double TriggerAnimation::TimeMultiplier()
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "get_TimeMultiplier()");
    return _timeMultiplier;
}

// public void set_TimeMultiplier(double value) [instance] :3666
void TriggerAnimation::TimeMultiplier(double value)
{
    uStackFrame __("Fuse.Animations.TriggerAnimation", "set_TimeMultiplier(double)");

    if ((_timeMultiplier == value) && _hasTimeMultiplier)
        return;

    _timeMultiplier = value;
    _hasTimeMultiplier = true;
    OnTimeChanged();
}

// public generated TriggerAnimation New() [static] :3597
TriggerAnimation* TriggerAnimation::New1()
{
    TriggerAnimation* obj2 = (TriggerAnimation*)uNew(TriggerAnimation_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#21
// --------------------------------------------------------------

// public sealed class TriggerAnimationState :3782
// {
uType* TriggerAnimationState_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(TriggerAnimationState);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Animations.TriggerAnimationState", options);
    ::TYPES[106] = ::g::Fuse::Animations::TriggerAnimation_typeof();
    ::TYPES[9] = ::g::Uno::Action_typeof();
    ::TYPES[7] = ::g::Uno::Bool_typeof();
    ::TYPES[15] = ::g::Uno::Int_typeof();
    ::TYPES[107] = ::g::Fuse::Animations::Player_typeof();
    ::TYPES[55] = ::g::Uno::Delegate_typeof();
    ::TYPES[80] = ::g::Uno::Action1_typeof()->MakeType(uObject_typeof());
    ::TYPES[14] = uObject_typeof();
    type->SetFields(0,
        ::g::Fuse::Animations::Player_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, _backPlayer), 0,
        ::g::Fuse::Animations::Player_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, _curPlayer), 0,
        ::g::Fuse::Animations::AnimationVariant_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, _curPlayerVariant), 0,
        ::g::Fuse::Animations::Player_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, _forePlayer), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, _node), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, _prevProgress), 0,
        ::g::Fuse::Animations::TriggerAnimation_typeof(), offsetof(::g::Fuse::Animations::TriggerAnimationState, _Animation), 0,
        ::g::Uno::Action1_typeof()->MakeType(uObject_typeof()), offsetof(::g::Fuse::Animations::TriggerAnimationState, PlaybackDone1), 0,
        ::g::Uno::Action1_typeof()->MakeType(uObject_typeof()), offsetof(::g::Fuse::Animations::TriggerAnimationState, ProgressUpdated1), 0);
    type->Reflection.SetFunctions(15,
        new uFunction("get_CurrentAnimatorsDuration", NULL, (void*)TriggerAnimationState__get_CurrentAnimatorsDuration_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("Dispose", NULL, (void*)TriggerAnimationState__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("add_PlaybackDone", NULL, (void*)TriggerAnimationState__add_PlaybackDone_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(uObject_typeof())),
        new uFunction("remove_PlaybackDone", NULL, (void*)TriggerAnimationState__remove_PlaybackDone_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(uObject_typeof())),
        new uFunction("PlayEnd", NULL, (void*)TriggerAnimationState__PlayEnd_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("PlayOff", NULL, (void*)TriggerAnimationState__PlayOff_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("PlayOn", NULL, (void*)TriggerAnimationState__PlayOn_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("PlayToProgress", NULL, (void*)TriggerAnimationState__PlayToProgress_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Double_typeof(), ::g::Fuse::Animations::AnimationVariant_typeof(), TriggerAnimationState__SeekFlags_typeof()),
        new uFunction("get_PreviousProgress", NULL, (void*)TriggerAnimationState__get_PreviousProgress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_Progress", NULL, (void*)TriggerAnimationState__get_Progress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_ProgressFullOff", NULL, (void*)TriggerAnimationState__get_ProgressFullOff_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_ProgressFullOn", NULL, (void*)TriggerAnimationState__get_ProgressFullOn_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("add_ProgressUpdated", NULL, (void*)TriggerAnimationState__add_ProgressUpdated_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(uObject_typeof())),
        new uFunction("remove_ProgressUpdated", NULL, (void*)TriggerAnimationState__remove_ProgressUpdated_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(uObject_typeof())),
        new uFunction("SeekProgress", NULL, (void*)TriggerAnimationState__SeekProgress_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Double_typeof(), ::g::Fuse::Animations::AnimationVariant_typeof(), TriggerAnimationState__SeekFlags_typeof()));
    return type;
}

// internal TriggerAnimationState(Fuse.Animations.TriggerAnimation animation, Fuse.Node node) :3787
void TriggerAnimationState__ctor__fn(TriggerAnimationState* __this, ::g::Fuse::Animations::TriggerAnimation* animation, ::g::Fuse::Node* node)
{
    __this->ctor_(animation, node);
}

// private generated Fuse.Animations.TriggerAnimation get_Animation() :3784
void TriggerAnimationState__get_Animation_fn(TriggerAnimationState* __this, ::g::Fuse::Animations::TriggerAnimation** __retval)
{
    *__retval = __this->Animation();
}

// private generated void set_Animation(Fuse.Animations.TriggerAnimation value) :3784
void TriggerAnimationState__set_Animation_fn(TriggerAnimationState* __this, ::g::Fuse::Animations::TriggerAnimation* value)
{
    __this->Animation(value);
}

// public double get_CurrentAnimatorsDuration() :3961
void TriggerAnimationState__get_CurrentAnimatorsDuration_fn(TriggerAnimationState* __this, double* __retval)
{
    *__retval = __this->CurrentAnimatorsDuration();
}

// public void Dispose() :3798
void TriggerAnimationState__Dispose_fn(TriggerAnimationState* __this)
{
    __this->Dispose();
}

// private Fuse.Animations.Player GetCurrentPlayer(Fuse.Animations.AnimationVariant tendTo, Fuse.Animations.TriggerAnimationState.SeekFlags flags) :3972
void TriggerAnimationState__GetCurrentPlayer_fn(TriggerAnimationState* __this, int* tendTo, int* flags, ::g::Fuse::Animations::Player** __retval)
{
    *__retval = __this->GetCurrentPlayer(*tendTo, *flags);
}

// private Fuse.Animations.Player GetPlayer([Fuse.Animations.AnimationVariant variant], [bool noFade]) :3853
void TriggerAnimationState__GetPlayer_fn(TriggerAnimationState* __this, int* variant, bool* noFade, ::g::Fuse::Animations::Player** __retval)
{
    *__retval = __this->GetPlayer(*variant, *noFade);
}

// internal TriggerAnimationState New(Fuse.Animations.TriggerAnimation animation, Fuse.Node node) :3787
void TriggerAnimationState__New1_fn(::g::Fuse::Animations::TriggerAnimation* animation, ::g::Fuse::Node* node, TriggerAnimationState** __retval)
{
    *__retval = TriggerAnimationState::New1(animation, node);
}

// private void OnPlaybackDone(object s) :3844
void TriggerAnimationState__OnPlaybackDone_fn(TriggerAnimationState* __this, uObject* s)
{
    __this->OnPlaybackDone(s);
}

// private void OnProgressUpdated(object s) :3833
void TriggerAnimationState__OnProgressUpdated_fn(TriggerAnimationState* __this, uObject* s)
{
    __this->OnProgressUpdated(s);
}

// private void OnTimeChanged() :3816
void TriggerAnimationState__OnTimeChanged_fn(TriggerAnimationState* __this)
{
    __this->OnTimeChanged();
}

// public generated void add_PlaybackDone(Uno.Action<object> value) :3825
void TriggerAnimationState__add_PlaybackDone_fn(TriggerAnimationState* __this, uDelegate* value)
{
    __this->add_PlaybackDone(value);
}

// public generated void remove_PlaybackDone(Uno.Action<object> value) :3825
void TriggerAnimationState__remove_PlaybackDone_fn(TriggerAnimationState* __this, uDelegate* value)
{
    __this->remove_PlaybackDone(value);
}

// public void PlayEnd(bool on) :3933
void TriggerAnimationState__PlayEnd_fn(TriggerAnimationState* __this, bool* on)
{
    __this->PlayEnd(*on);
}

// public void PlayOff() :3921
void TriggerAnimationState__PlayOff_fn(TriggerAnimationState* __this)
{
    __this->PlayOff();
}

// public void PlayOn() :3927
void TriggerAnimationState__PlayOn_fn(TriggerAnimationState* __this)
{
    __this->PlayOn();
}

// public void PlayToProgress(double progress, [Fuse.Animations.AnimationVariant tendTo], [Fuse.Animations.TriggerAnimationState.SeekFlags flags]) :3999
void TriggerAnimationState__PlayToProgress_fn(TriggerAnimationState* __this, double* progress, int* tendTo, int* flags)
{
    __this->PlayToProgress(*progress, *tendTo, *flags);
}

// public double get_PreviousProgress() :3953
void TriggerAnimationState__get_PreviousProgress_fn(TriggerAnimationState* __this, double* __retval)
{
    *__retval = __this->PreviousProgress();
}

// public double get_Progress() :3943
void TriggerAnimationState__get_Progress_fn(TriggerAnimationState* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public bool get_ProgressFullOff() :3970
void TriggerAnimationState__get_ProgressFullOff_fn(TriggerAnimationState* __this, bool* __retval)
{
    *__retval = __this->ProgressFullOff();
}

// public bool get_ProgressFullOn() :3969
void TriggerAnimationState__get_ProgressFullOn_fn(TriggerAnimationState* __this, bool* __retval)
{
    *__retval = __this->ProgressFullOn();
}

// public generated void add_ProgressUpdated(Uno.Action<object> value) :3824
void TriggerAnimationState__add_ProgressUpdated_fn(TriggerAnimationState* __this, uDelegate* value)
{
    __this->add_ProgressUpdated(value);
}

// public generated void remove_ProgressUpdated(Uno.Action<object> value) :3824
void TriggerAnimationState__remove_ProgressUpdated_fn(TriggerAnimationState* __this, uDelegate* value)
{
    __this->remove_ProgressUpdated(value);
}

// public void SeekProgress(double newProgress, [Fuse.Animations.AnimationVariant tendTo], [Fuse.Animations.TriggerAnimationState.SeekFlags flags]) :3989
void TriggerAnimationState__SeekProgress_fn(TriggerAnimationState* __this, double* newProgress, int* tendTo, int* flags)
{
    __this->SeekProgress(*newProgress, *tendTo, *flags);
}

// private void TrackProgress(Fuse.Animations.Player player) :3826
void TriggerAnimationState__TrackProgress_fn(TriggerAnimationState* __this, ::g::Fuse::Animations::Player* player)
{
    __this->TrackProgress(player);
}

// internal TriggerAnimationState(Fuse.Animations.TriggerAnimation animation, Fuse.Node node) [instance] :3787
void TriggerAnimationState::ctor_(::g::Fuse::Animations::TriggerAnimation* animation, ::g::Fuse::Node* node)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", ".ctor(Fuse.Animations.TriggerAnimation,Fuse.Node)");
    Animation(animation);
    uPtr(Animation())->add_TimeChanged(uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)TriggerAnimationState__OnTimeChanged_fn, this));
    _node = node;
}

// private generated Fuse.Animations.TriggerAnimation get_Animation() [instance] :3784
::g::Fuse::Animations::TriggerAnimation* TriggerAnimationState::Animation()
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "get_Animation()");
    return _Animation;
}

// private generated void set_Animation(Fuse.Animations.TriggerAnimation value) [instance] :3784
void TriggerAnimationState::Animation(::g::Fuse::Animations::TriggerAnimation* value)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "set_Animation(Fuse.Animations.TriggerAnimation)");
    _Animation = value;
}

// public double get_CurrentAnimatorsDuration() [instance] :3961
double TriggerAnimationState::CurrentAnimatorsDuration()
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "get_CurrentAnimatorsDuration()");

    if (_curPlayer == NULL)
        return uPtr(Animation())->GetAnimatorsDuration(0);

    return uPtr(_curPlayer)->AnimatorsDuration();
}

// public void Dispose() [instance] :3798
void TriggerAnimationState::Dispose()
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "Dispose()");

    if (_forePlayer != NULL)
    {
        uPtr(_forePlayer)->Disable();
        _forePlayer = NULL;
    }

    if (_backPlayer != NULL)
    {
        uPtr(_backPlayer)->Disable();
        _backPlayer = NULL;
    }

    _curPlayer = NULL;
    _node = NULL;
}

// private Fuse.Animations.Player GetCurrentPlayer(Fuse.Animations.AnimationVariant tendTo, Fuse.Animations.TriggerAnimationState.SeekFlags flags) [instance] :3972
::g::Fuse::Animations::Player* TriggerAnimationState::GetCurrentPlayer(int tendTo, int flags)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "GetCurrentPlayer(Fuse.Animations.AnimationVariant,Fuse.Animations.TriggerAnimationState.SeekFlags)");

    if (!((flags & 1) == 1))
    {
        if (((_curPlayer != NULL) && (uPtr(_curPlayer)->Progress() < 1.0)) && (uPtr(_curPlayer)->Progress() > 0.0))
            return _curPlayer;
    }

    return uAs< ::g::Fuse::Animations::Player*>(GetPlayer(tendTo, false), ::TYPES[107/*Fuse.Animations.Player*/]);
}

// private Fuse.Animations.Player GetPlayer([Fuse.Animations.AnimationVariant variant], [bool noFade]) [instance] :3853
::g::Fuse::Animations::Player* TriggerAnimationState::GetPlayer(int variant, bool noFade)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "GetPlayer([Fuse.Animations.AnimationVariant],[bool])");
    ::g::Fuse::Animations::Player* cur;
    ::g::Fuse::Animations::Player* prev;
    variant = uPtr(Animation())->RestrictVariant(variant);

    if ((_curPlayer != NULL) && (_curPlayerVariant == variant))
        return _curPlayer;

    bool isNew = false;

    if (variant == 0)
    {
        if (_forePlayer == NULL)
        {
            _forePlayer = uPtr(Animation())->CreatePlayer(_node, variant);
            isNew = true;
        }

        cur = _forePlayer;
        prev = _backPlayer;
    }
    else
    {
        if (_backPlayer == NULL)
        {
            _backPlayer = uPtr(Animation())->CreatePlayer(_node, variant);
            uPtr(_backPlayer)->SeekProgress(1.0, false);
            isNew = true;
        }

        cur = _backPlayer;
        prev = _forePlayer;
    }

    if (isNew)
        TrackProgress(cur);

    _curPlayer = cur;
    _curPlayerVariant = variant;

    if (prev != NULL)
    {
        double prevProgress = uPtr(prev)->Progress();
        prev->SeekProgress(prevProgress, false);
        uPtr(cur)->SeekProgress(prevProgress, false);

        if (isNew)
            cur->Strength(0.0);

        double remainTime = prev->RemainTime();

        if ((prev->IsSyncState() || (remainTime < 9.9999997473787516e-06)) || noFade)
        {
            uPtr(prev)->Strength(0.0);
            uPtr(cur)->Strength(1.0);
        }
        else
        {
            double fadeTime = ::g::Uno::Math::Min(remainTime, uPtr(Animation())->CrossFadeDuration());
            uPtr(cur)->FadeIn(fadeTime);
            uPtr(prev)->FadeOut(fadeTime);
        }
    }

    return cur;
}

// private void OnPlaybackDone(object s) [instance] :3844
void TriggerAnimationState::OnPlaybackDone(uObject* s)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "OnPlaybackDone(object)");

    if (s != _curPlayer)
        return;

    if (::g::Uno::Delegate::op_Inequality(PlaybackDone1, NULL))
        uPtr(PlaybackDone1)->InvokeVoid(this);
}

// private void OnProgressUpdated(object s) [instance] :3833
void TriggerAnimationState::OnProgressUpdated(uObject* s)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "OnProgressUpdated(object)");

    if (s != _curPlayer)
        return;

    if (::g::Uno::Delegate::op_Inequality(ProgressUpdated1, NULL))
        uPtr(ProgressUpdated1)->InvokeVoid(this);

    _prevProgress = Progress();
}

// private void OnTimeChanged() [instance] :3816
void TriggerAnimationState::OnTimeChanged()
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "OnTimeChanged()");

    if (_forePlayer != NULL)
        uPtr(_forePlayer)->TimeChanged();

    if (_backPlayer != NULL)
        uPtr(_backPlayer)->TimeChanged();
}

// public generated void add_PlaybackDone(Uno.Action<object> value) [instance] :3825
void TriggerAnimationState::add_PlaybackDone(uDelegate* value)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "add_PlaybackDone(Uno.Action<object>)");
    PlaybackDone1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PlaybackDone1, value), ::TYPES[80/*Uno.Action<object>*/]);
}

// public generated void remove_PlaybackDone(Uno.Action<object> value) [instance] :3825
void TriggerAnimationState::remove_PlaybackDone(uDelegate* value)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "remove_PlaybackDone(Uno.Action<object>)");
    PlaybackDone1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PlaybackDone1, value), ::TYPES[80/*Uno.Action<object>*/]);
}

// public void PlayEnd(bool on) [instance] :3933
void TriggerAnimationState::PlayEnd(bool on)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "PlayEnd(bool)");

    if (on)
        PlayOn();
    else
        PlayOff();
}

// public void PlayOff() [instance] :3921
void TriggerAnimationState::PlayOff()
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "PlayOff()");
    ::g::Fuse::Animations::Player* p = GetPlayer(1, false);
    uPtr(p)->PlayToStart();
}

// public void PlayOn() [instance] :3927
void TriggerAnimationState::PlayOn()
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "PlayOn()");
    ::g::Fuse::Animations::Player* p = GetPlayer(0, false);
    uPtr(p)->PlayToEnd();
}

// public void PlayToProgress(double progress, [Fuse.Animations.AnimationVariant tendTo], [Fuse.Animations.TriggerAnimationState.SeekFlags flags]) [instance] :3999
void TriggerAnimationState::PlayToProgress(double progress, int tendTo, int flags)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "PlayToProgress(double,[Fuse.Animations.AnimationVariant],[Fuse.Animations.TriggerAnimationState.SeekFlags])");
    ::g::Fuse::Animations::Player* player = GetCurrentPlayer(tendTo, flags);
    uPtr(player)->PlayToProgress(progress);
}

// public double get_PreviousProgress() [instance] :3953
double TriggerAnimationState::PreviousProgress()
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "get_PreviousProgress()");
    return _prevProgress;
}

// public double get_Progress() [instance] :3943
double TriggerAnimationState::Progress()
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "get_Progress()");

    if (_curPlayer != NULL)
        return uPtr(_curPlayer)->Progress();

    return 0.0;
}

// public bool get_ProgressFullOff() [instance] :3970
bool TriggerAnimationState::ProgressFullOff()
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "get_ProgressFullOff()");
    return Progress() <= 0.0;
}

// public bool get_ProgressFullOn() [instance] :3969
bool TriggerAnimationState::ProgressFullOn()
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "get_ProgressFullOn()");
    return Progress() >= 1.0;
}

// public generated void add_ProgressUpdated(Uno.Action<object> value) [instance] :3824
void TriggerAnimationState::add_ProgressUpdated(uDelegate* value)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "add_ProgressUpdated(Uno.Action<object>)");
    ProgressUpdated1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressUpdated1, value), ::TYPES[80/*Uno.Action<object>*/]);
}

// public generated void remove_ProgressUpdated(Uno.Action<object> value) [instance] :3824
void TriggerAnimationState::remove_ProgressUpdated(uDelegate* value)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "remove_ProgressUpdated(Uno.Action<object>)");
    ProgressUpdated1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressUpdated1, value), ::TYPES[80/*Uno.Action<object>*/]);
}

// public void SeekProgress(double newProgress, [Fuse.Animations.AnimationVariant tendTo], [Fuse.Animations.TriggerAnimationState.SeekFlags flags]) [instance] :3989
void TriggerAnimationState::SeekProgress(double newProgress, int tendTo, int flags)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "SeekProgress(double,[Fuse.Animations.AnimationVariant],[Fuse.Animations.TriggerAnimationState.SeekFlags])");
    bool bypassUpdate = (flags & 2) == 2;
    ::g::Fuse::Animations::Player* player = GetCurrentPlayer(tendTo, flags);

    if (bypassUpdate)
        _prevProgress = newProgress;

    uPtr(player)->SeekProgress(newProgress, !bypassUpdate);
}

// private void TrackProgress(Fuse.Animations.Player player) [instance] :3826
void TriggerAnimationState::TrackProgress(::g::Fuse::Animations::Player* player)
{
    uStackFrame __("Fuse.Animations.TriggerAnimationState", "TrackProgress(Fuse.Animations.Player)");
    uPtr(player)->ProgressUpdated = uDelegate::New(::TYPES[80/*Uno.Action<object>*/], (void*)TriggerAnimationState__OnProgressUpdated_fn, this);
    player->DoneCallback(uDelegate::New(::TYPES[80/*Uno.Action<object>*/], (void*)TriggerAnimationState__OnPlaybackDone_fn, this));
}

// internal TriggerAnimationState New(Fuse.Animations.TriggerAnimation animation, Fuse.Node node) [static] :3787
TriggerAnimationState* TriggerAnimationState::New1(::g::Fuse::Animations::TriggerAnimation* animation, ::g::Fuse::Node* node)
{
    TriggerAnimationState* obj1 = (TriggerAnimationState*)uNew(TriggerAnimationState_typeof());
    obj1->ctor_(animation, node);
    return obj1;
}
// }

}}} // ::g::Fuse::Animations
