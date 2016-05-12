// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.14/$.uno#4'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IChildObject.h>
#include <Fuse.IDataContext.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Controls{struct ContentControl;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Controls{

// public class ContentControl :350
// {
struct ContentControl_type : ::g::Fuse::Controls::Control_type
{
    void(*fp_OnContentChanged)(::g::Fuse::Controls::ContentControl*, ::g::Fuse::Node*, ::g::Fuse::Node*);
};

ContentControl_type* ContentControl_typeof();
void ContentControl__ctor_3_fn(ContentControl* __this);
void ContentControl__ArrangePaddingBox_fn(ContentControl* __this, ::g::Fuse::LayoutParams* lp);
void ContentControl__CalcRenderBounds_fn(ContentControl* __this, ::g::Uno::Rect* __retval);
void ContentControl__get_Content_fn(ContentControl* __this, ::g::Fuse::Node** __retval);
void ContentControl__set_Content_fn(ContentControl* __this, ::g::Fuse::Node* value);
void ContentControl__GetContentSize_fn(ContentControl* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void ContentControl__GetSubNode_fn(ContentControl* __this, int* index, ::g::Fuse::Node** __retval);
void ContentControl__New1_fn(ContentControl** __retval);
void ContentControl__OnContentChanged_fn(ContentControl* __this, ::g::Fuse::Node* oldContent, ::g::Fuse::Node* newContent);
void ContentControl__OnDrawControl_fn(ContentControl* __this, ::g::Fuse::DrawContext* dc);
void ContentControl__OnHitTestChildren_fn(ContentControl* __this, ::g::Fuse::HitTestContext* htc);
void ContentControl__get_SubNodeCount_fn(ContentControl* __this, int* __retval);

struct ContentControl : ::g::Fuse::Controls::Control
{
    uStrong< ::g::Fuse::Node*> _content;

    void ctor_3();
    ::g::Fuse::Node* Content();
    void Content(::g::Fuse::Node* value);
    void OnContentChanged(::g::Fuse::Node* oldContent, ::g::Fuse::Node* newContent) { (((ContentControl_type*)__type)->fp_OnContentChanged)(this, oldContent, newContent); }
    static ContentControl* New1();
    static void OnContentChanged(ContentControl* __this, ::g::Fuse::Node* oldContent, ::g::Fuse::Node* newContent) { ContentControl__OnContentChanged_fn(__this, oldContent, newContent); }
};
// }

}}} // ::g::Fuse::Controls
