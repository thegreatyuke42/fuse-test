// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Paths/0.27.14/$.uno#10'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry;}}}
namespace g{namespace Fuse{namespace Drawing{struct RectangleFactory;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal static class RectangleFactory :1500
// {
uClassType* RectangleFactory_typeof();
void RectangleFactory__AppendTo_fn(::g::Fuse::Drawing::PathGeometry* self, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::PathGeometry** __retval);

struct RectangleFactory : uObject
{
    static ::g::Fuse::Drawing::PathGeometry* AppendTo(::g::Fuse::Drawing::PathGeometry* self, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius);
};
// }

}}} // ::g::Fuse::Drawing
