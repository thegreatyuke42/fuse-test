// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Entities/0.27.14/$.uno#13'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Entities.MeshRenderer.h>
namespace g{namespace Fuse{namespace Entities{namespace Primitives{struct SphereRenderer;}}}}

namespace g{
namespace Fuse{
namespace Entities{
namespace Primitives{

// public sealed class SphereRenderer :1741
// {
::g::Fuse::Entities::MeshRenderer_type* SphereRenderer_typeof();
void SphereRenderer__ctor_2_fn(SphereRenderer* __this);
void SphereRenderer__New2_fn(SphereRenderer** __retval);
void SphereRenderer__get_Quality_fn(SphereRenderer* __this, int* __retval);
void SphereRenderer__set_Quality_fn(SphereRenderer* __this, int* value);
void SphereRenderer__get_Radius_fn(SphereRenderer* __this, float* __retval);
void SphereRenderer__set_Radius_fn(SphereRenderer* __this, float* value);
void SphereRenderer__Validate_fn(SphereRenderer* __this);

struct SphereRenderer : ::g::Fuse::Entities::MeshRenderer
{
    bool _isDirty;
    int _quality;
    float _radius;

    void ctor_2();
    int Quality();
    void Quality(int value);
    float Radius();
    void Radius(float value);
    static SphereRenderer* New2();
};
// }

}}}} // ::g::Fuse::Entities::Primitives
