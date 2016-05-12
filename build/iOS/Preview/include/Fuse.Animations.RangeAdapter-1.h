// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.27.14/$.uno#15'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.IChildObject.h>
namespace g{namespace Fuse{namespace Animations{struct RangeAdapter;}}}
namespace g{namespace Fuse{namespace Internal{struct ScalarBlender;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace UX{struct Property;}}}
namespace g{namespace Uno{namespace UX{struct ValueChangedArgs;}}}

namespace g{
namespace Fuse{
namespace Animations{

// public sealed class RangeAdapter<T> :2526
// {
::g::Fuse::Behavior_type* RangeAdapter_typeof();
void RangeAdapter__ctor_1_fn(RangeAdapter* __this, ::g::Uno::UX::Property* source);
void RangeAdapter__In_fn(RangeAdapter* __this, void* value, uTRef __retval);
void RangeAdapter__New1_fn(uType* __type, ::g::Uno::UX::Property* source, RangeAdapter** __retval);
void RangeAdapter__OnRooted_fn(RangeAdapter* __this, ::g::Fuse::Node* parentNode);
void RangeAdapter__OnSourceValueChanged_fn(RangeAdapter* __this, uObject* s, ::g::Uno::UX::ValueChangedArgs* args);
void RangeAdapter__OnUnrooted_fn(RangeAdapter* __this, ::g::Fuse::Node* parentNode);
void RangeAdapter__Out_fn(RangeAdapter* __this, void* value, uTRef __retval);
void RangeAdapter__SetValue_fn(RangeAdapter* __this, void* value, uObject* origin);
void RangeAdapter__get_Source_fn(RangeAdapter* __this, ::g::Uno::UX::Property** __retval);
void RangeAdapter__set_Source_fn(RangeAdapter* __this, ::g::Uno::UX::Property* value);
void RangeAdapter__get_SourceRangeMax_fn(RangeAdapter* __this, uTRef __retval);
void RangeAdapter__set_SourceRangeMax_fn(RangeAdapter* __this, void* value);
void RangeAdapter__get_SourceRangeMin_fn(RangeAdapter* __this, uTRef __retval);
void RangeAdapter__set_SourceRangeMin_fn(RangeAdapter* __this, void* value);
void RangeAdapter__get_Value_fn(RangeAdapter* __this, uTRef __retval);
void RangeAdapter__set_Value_fn(RangeAdapter* __this, void* value);
void RangeAdapter__add_ValueChanged_fn(RangeAdapter* __this, uDelegate* value);
void RangeAdapter__remove_ValueChanged_fn(RangeAdapter* __this, uDelegate* value);
void RangeAdapter__get_ValueRangeMax_fn(RangeAdapter* __this, uTRef __retval);
void RangeAdapter__set_ValueRangeMax_fn(RangeAdapter* __this, void* value);
void RangeAdapter__get_ValueRangeMin_fn(RangeAdapter* __this, uTRef __retval);
void RangeAdapter__set_ValueRangeMin_fn(RangeAdapter* __this, void* value);

struct RangeAdapter : ::g::Fuse::Behavior
{
    uStrong< ::g::Fuse::Internal::ScalarBlender*> _blender;
    double _sourceRangeMax;
    double _sourceRangeMin;
    double _valueRangeMax;
    double _valueRangeMin;
    uStrong< ::g::Uno::UX::Property*> _Source;
    uStrong<uDelegate*> ValueChanged1;

    void ctor_1(::g::Uno::UX::Property* source);
    template<class T>
    T In(T value) { T __retval; return RangeAdapter__In_fn(this, uConstrain(__type->T(0), value), &__retval), __retval; }
    void OnSourceValueChanged(uObject* s, ::g::Uno::UX::ValueChangedArgs* args);
    template<class T>
    T Out(T value) { T __retval; return RangeAdapter__Out_fn(this, uConstrain(__type->T(0), value), &__retval), __retval; }
    template<class T>
    void SetValue(T value, uObject* origin) { RangeAdapter__SetValue_fn(this, uConstrain(__type->T(0), value), origin); }
    ::g::Uno::UX::Property* Source();
    void Source(::g::Uno::UX::Property* value);
    template<class T>
    T SourceRangeMax() { T __retval; return RangeAdapter__get_SourceRangeMax_fn(this, &__retval), __retval; }
    template<class T>
    void SourceRangeMax(T value) { RangeAdapter__set_SourceRangeMax_fn(this, uConstrain(__type->T(0), value)); }
    template<class T>
    T SourceRangeMin() { T __retval; return RangeAdapter__get_SourceRangeMin_fn(this, &__retval), __retval; }
    template<class T>
    void SourceRangeMin(T value) { RangeAdapter__set_SourceRangeMin_fn(this, uConstrain(__type->T(0), value)); }
    template<class T>
    T Value() { T __retval; return RangeAdapter__get_Value_fn(this, &__retval), __retval; }
    template<class T>
    void Value(T value) { RangeAdapter__set_Value_fn(this, uConstrain(__type->T(0), value)); }
    void add_ValueChanged(uDelegate* value);
    void remove_ValueChanged(uDelegate* value);
    template<class T>
    T ValueRangeMax() { T __retval; return RangeAdapter__get_ValueRangeMax_fn(this, &__retval), __retval; }
    template<class T>
    void ValueRangeMax(T value) { RangeAdapter__set_ValueRangeMax_fn(this, uConstrain(__type->T(0), value)); }
    template<class T>
    T ValueRangeMin() { T __retval; return RangeAdapter__get_ValueRangeMin_fn(this, &__retval), __retval; }
    template<class T>
    void ValueRangeMin(T value) { RangeAdapter__set_ValueRangeMin_fn(this, uConstrain(__type->T(0), value)); }
    static RangeAdapter* New1(uType* __type, ::g::Uno::UX::Property* source);
};
// }

}}} // ::g::Fuse::Animations
