// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#6'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IMixerMaster.h>
#include <Fuse.Animations.MasterProperty-1.h>
#include <Fuse.Animations.MasterPropertyGet.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct DiscreteMasterProperty;}}}
namespace g{namespace Fuse{namespace Animations{struct MixerBase;}}}
namespace g{namespace Uno{namespace UX{struct Property;}}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class DiscreteMasterProperty<T> :866
// {
::g::Fuse::Animations::MasterProperty_type* DiscreteMasterProperty_typeof();
void DiscreteMasterProperty__ctor_2_fn(DiscreteMasterProperty* __this, ::g::Uno::UX::Property* property, ::g::Fuse::Animations::MixerBase* mixerBase);
void DiscreteMasterProperty__New1_fn(uType* __type, ::g::Uno::UX::Property* property, ::g::Fuse::Animations::MixerBase* mixerBase, DiscreteMasterProperty** __retval);
void DiscreteMasterProperty__OnComplete_fn(DiscreteMasterProperty* __this);

struct DiscreteMasterProperty : ::g::Fuse::Animations::MasterProperty
{
    void ctor_2(::g::Uno::UX::Property* property, ::g::Fuse::Animations::MixerBase* mixerBase);
    static DiscreteMasterProperty* New1(uType* __type, ::g::Uno::UX::Property* property, ::g::Fuse::Animations::MixerBase* mixerBase);
};
// }

}}} // ::g::Fuse::Animations
