// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Entities/0.27.14/$.uno#5'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Entities.Light.h>
#include <Uno.Geometry.Box.h>
namespace g{namespace Fuse{namespace Entities{struct DirectionalLight;}}}

namespace g{
namespace Fuse{
namespace Entities{

// public sealed class DirectionalLight :913
// {
::g::Fuse::Entities::Light_type* DirectionalLight_typeof();
void DirectionalLight__ctor_2_fn(DirectionalLight* __this);
void DirectionalLight__Accept_fn(DirectionalLight* __this, uObject* visitor);
void DirectionalLight__get_Box_fn(DirectionalLight* __this, ::g::Uno::Geometry::Box* __retval);
void DirectionalLight__set_Box_fn(DirectionalLight* __this, ::g::Uno::Geometry::Box* value);
void DirectionalLight__New1_fn(DirectionalLight** __retval);

struct DirectionalLight : ::g::Fuse::Entities::Light
{
    ::g::Uno::Geometry::Box _Box;

    void ctor_2();
    ::g::Uno::Geometry::Box Box();
    void Box(::g::Uno::Geometry::Box value);
    static DirectionalLight* New1();
};
// }

}}} // ::g::Fuse::Entities
