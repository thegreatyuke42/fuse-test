// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.27.14/NativeViews/$.uno#5'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.NativeViewHost.h>
#include <Fuse.IChildObject.h>
#include <Fuse.iOS.NativeViews.ParentNativeView-1.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace iOS{namespace NativeViews{struct NativeView;}}}}
namespace g{namespace Fuse{namespace iOS{namespace NativeViews{struct NativeViewHost;}}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace iOS{namespace UIKit{struct UIControl;}}}
namespace g{namespace iOS{namespace UIKit{struct UIView;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace iOS{
namespace NativeViews{

// internal sealed extern class NativeViewHost :588
// {
::g::Fuse::iOS::NativeViews::ParentNativeView_type* NativeViewHost_typeof();
void NativeViewHost__ctor_3_fn(NativeViewHost* __this);
void NativeViewHost__Create_fn(NativeViewHost* __this, ::g::iOS::UIKit::UIView** __retval);
void NativeViewHost__DeleteTexture_fn(NativeViewHost* __this);
void NativeViewHost__Draw_fn(NativeViewHost* __this, uObject* uiviewHandle, int* textureName, int* width, int* height, float* pointDensity);
void NativeViewHost__Invalidate_fn(NativeViewHost* __this);
void NativeViewHost__New1_fn(NativeViewHost** __retval);
void NativeViewHost__OnRedraw_fn(NativeViewHost* __this, uObject* sender, ::g::Fuse::DrawContext* dc);
void NativeViewHost__OnRenderToTextureChanged_fn(NativeViewHost* __this, uObject* sender, ::g::Uno::EventArgs* args);
void NativeViewHost__OnRooted_fn(NativeViewHost* __this, ::g::Fuse::Node* parentNode);
void NativeViewHost__OnUnrooted_fn(NativeViewHost* __this, ::g::Fuse::Node* parentNode);
void NativeViewHost__OnUpdateTransform_fn(NativeViewHost* __this);
void NativeViewHost__get_Parent_fn(NativeViewHost* __this, ::g::Fuse::iOS::NativeViews::NativeView** __retval);
void NativeViewHost__Update_fn(NativeViewHost* __this);

struct NativeViewHost : ::g::Fuse::iOS::NativeViews::ParentNativeView
{
    uStrong< ::g::iOS::UIKit::UIControl*> _group;
    ::g::Uno::Float2 _sizeCache;
    uint32_t _textureHandle;
    bool _visualValid;

    void ctor_3();
    void DeleteTexture();
    void Draw(uObject* uiviewHandle, int textureName, int width, int height, float pointDensity);
    void Invalidate();
    void OnRedraw(uObject* sender, ::g::Fuse::DrawContext* dc);
    void OnRenderToTextureChanged(uObject* sender, ::g::Uno::EventArgs* args);
    void Update();
    static NativeViewHost* New1();
};
// }

}}}} // ::g::Fuse::iOS::NativeViews
