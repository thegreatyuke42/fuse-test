// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Physics/0.27.14/$.uno#3'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Physics.ForceFieldEventTrigger.h>
namespace g{namespace Fuse{namespace Physics{struct Body;}}}
namespace g{namespace Fuse{namespace Physics{struct ExitedForceField;}}}

namespace g{
namespace Fuse{
namespace Physics{

// public sealed class ExitedForceField :412
// {
::g::Fuse::Physics::ForceFieldTrigger_type* ExitedForceField_typeof();
void ExitedForceField__ctor_4_fn(ExitedForceField* __this);
void ExitedForceField__New1_fn(ExitedForceField** __retval);
void ExitedForceField__SetForce_fn(ExitedForceField* __this, ::g::Fuse::Physics::Body* body, float* force);
void ExitedForceField__get_Threshold_fn(ExitedForceField* __this, float* __retval);
void ExitedForceField__set_Threshold_fn(ExitedForceField* __this, float* value);

struct ExitedForceField : ::g::Fuse::Physics::ForceFieldEventTrigger
{
    float _oldForce;
    float _Threshold;

    void ctor_4();
    float Threshold();
    void Threshold(float value);
    static ExitedForceField* New1();
};
// }

}}} // ::g::Fuse::Physics
