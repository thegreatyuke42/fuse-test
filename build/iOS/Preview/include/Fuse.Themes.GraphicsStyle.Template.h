// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Themes/0.27.14/.uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.TextControl.h>
#include <Uno.UX.ITemplate.h>
#include <Uno.UX.Template-1.h>
namespace g{namespace Fuse{namespace Themes{struct GraphicsStyle;}}}
namespace g{namespace Fuse{namespace Themes{struct GraphicsStyle__Template;}}}

namespace g{
namespace Fuse{
namespace Themes{

// public partial sealed class GraphicsStyle.Template :7
// {
::g::Uno::UX::Template_type* GraphicsStyle__Template_typeof();
void GraphicsStyle__Template__ctor_1_fn(GraphicsStyle__Template* __this, ::g::Fuse::Themes::GraphicsStyle* parent);
void GraphicsStyle__Template__New1_fn(::g::Fuse::Themes::GraphicsStyle* parent, GraphicsStyle__Template** __retval);
void GraphicsStyle__Template__OnApply_fn(GraphicsStyle__Template* __this, ::g::Fuse::Controls::TextControl* self);

struct GraphicsStyle__Template : ::g::Uno::UX::Template
{
    uStrong< ::g::Fuse::Themes::GraphicsStyle*> __parent1;

    void ctor_1(::g::Fuse::Themes::GraphicsStyle* parent);
    static GraphicsStyle__Template* New1(::g::Fuse::Themes::GraphicsStyle* parent);
};
// }

}}} // ::g::Fuse::Themes
