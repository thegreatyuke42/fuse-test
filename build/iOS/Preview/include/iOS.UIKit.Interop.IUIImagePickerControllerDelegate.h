// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.27.2/interface/wrapper/$.uno#166'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <iOS.UIKit.IUIImagePickerControllerDelegate.h>
#include <ObjC.Bindings.Object.h>
#include <ObjC.Object.h>
namespace g{namespace iOS{namespace Foundation{struct NSDictionary;}}}
namespace g{namespace iOS{namespace UIKit{namespace Interop{struct IUIImagePickerControllerDelegate;}}}}
namespace g{namespace iOS{namespace UIKit{struct UIImage;}}}
namespace g{namespace iOS{namespace UIKit{struct UIImagePickerController;}}}

namespace g{
namespace iOS{
namespace UIKit{
namespace Interop{

// public sealed extern class IUIImagePickerControllerDelegate :6424
// {
struct IUIImagePickerControllerDelegate_type : ::g::ObjC::Bindings::Object_type
{
    ::g::iOS::UIKit::IUIImagePickerControllerDelegate interface1;
};

IUIImagePickerControllerDelegate_type* IUIImagePickerControllerDelegate_typeof();
void IUIImagePickerControllerDelegate__imagePickerControllerDidCancel_fn(IUIImagePickerControllerDelegate* __this, ::g::iOS::UIKit::UIImagePickerController* picker_);
void IUIImagePickerControllerDelegate__imagePickerControllerDidFinishPickingImageEditingInfo_fn(IUIImagePickerControllerDelegate* __this, ::g::iOS::UIKit::UIImagePickerController* picker_, ::g::iOS::UIKit::UIImage* image_, ::g::iOS::Foundation::NSDictionary* editingInfo_);
void IUIImagePickerControllerDelegate__imagePickerControllerDidFinishPickingMediaWithInfo_fn(IUIImagePickerControllerDelegate* __this, ::g::iOS::UIKit::UIImagePickerController* picker_, ::g::iOS::Foundation::NSDictionary* info_);

struct IUIImagePickerControllerDelegate : ::g::ObjC::Bindings::Object
{
    void imagePickerControllerDidCancel(::g::iOS::UIKit::UIImagePickerController* picker_);
    void imagePickerControllerDidFinishPickingImageEditingInfo(::g::iOS::UIKit::UIImagePickerController* picker_, ::g::iOS::UIKit::UIImage* image_, ::g::iOS::Foundation::NSDictionary* editingInfo_);
    void imagePickerControllerDidFinishPickingMediaWithInfo(::g::iOS::UIKit::UIImagePickerController* picker_, ::g::iOS::Foundation::NSDictionary* info_);
};
// }

}}}} // ::g::iOS::UIKit::Interop
