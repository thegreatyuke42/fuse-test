// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.27.14/Input/$.uno#1'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Input{struct FocusPredictStrategy;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Input{

// internal static class FocusPredictStrategy :69
// {
uClassType* FocusPredictStrategy_typeof();
void FocusPredictStrategy__Predict_fn(::g::Fuse::Node* n, int* direction, ::g::Fuse::Node** __retval);

struct FocusPredictStrategy : uObject
{
    static ::g::Fuse::Node* Predict(::g::Fuse::Node* n, int direction);
};
// }

}}} // ::g::Fuse::Input
