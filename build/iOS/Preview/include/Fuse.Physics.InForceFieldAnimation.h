// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Physics/0.27.14/$.uno#3'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Physics.ForceFieldTrigger.h>
namespace g{namespace Fuse{namespace Physics{struct Body;}}}
namespace g{namespace Fuse{namespace Physics{struct InForceFieldAnimation;}}}

namespace g{
namespace Fuse{
namespace Physics{

// public sealed class InForceFieldAnimation :425
// {
::g::Fuse::Physics::ForceFieldTrigger_type* InForceFieldAnimation_typeof();
void InForceFieldAnimation__ctor_3_fn(InForceFieldAnimation* __this);
void InForceFieldAnimation__get_From_fn(InForceFieldAnimation* __this, float* __retval);
void InForceFieldAnimation__set_From_fn(InForceFieldAnimation* __this, float* value);
void InForceFieldAnimation__New1_fn(InForceFieldAnimation** __retval);
void InForceFieldAnimation__SetForce_fn(InForceFieldAnimation* __this, ::g::Fuse::Physics::Body* body, float* force);
void InForceFieldAnimation__get_To_fn(InForceFieldAnimation* __this, float* __retval);
void InForceFieldAnimation__set_To_fn(InForceFieldAnimation* __this, float* value);

struct InForceFieldAnimation : ::g::Fuse::Physics::ForceFieldTrigger
{
    float _From;
    float _To;

    void ctor_3();
    float From();
    void From(float value);
    float To();
    void To(float value);
    static InForceFieldAnimation* New1();
};
// }

}}} // ::g::Fuse::Physics
