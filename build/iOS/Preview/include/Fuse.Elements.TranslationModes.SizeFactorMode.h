// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.27.14/$.uno#19'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IScalingMode.h>
#include <Fuse.ITransformMode.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Elements{struct TranslationModes__SizeFactorMode;}}}
namespace g{namespace Fuse{struct Scaling;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{
namespace Elements{

// private sealed class TranslationModes.SizeFactorMode :2553
// {
struct TranslationModes__SizeFactorMode_type : uType
{
    ::g::Fuse::IScalingMode interface0;
    ::g::Fuse::ITransformMode interface1;
};

TranslationModes__SizeFactorMode_type* TranslationModes__SizeFactorMode_typeof();
void TranslationModes__SizeFactorMode__ctor__fn(TranslationModes__SizeFactorMode* __this);
void TranslationModes__SizeFactorMode__get_Flags_fn(TranslationModes__SizeFactorMode* __this, int* __retval);
void TranslationModes__SizeFactorMode__GetScaleVector_fn(TranslationModes__SizeFactorMode* __this, ::g::Fuse::Scaling* t, ::g::Uno::Float3* __retval);
void TranslationModes__SizeFactorMode__New1_fn(TranslationModes__SizeFactorMode** __retval);

struct TranslationModes__SizeFactorMode : uObject
{
    void ctor_();
    int Flags();
    ::g::Uno::Float3 GetScaleVector(::g::Fuse::Scaling* t);
    static TranslationModes__SizeFactorMode* New1();
};
// }

}}} // ::g::Fuse::Elements
