// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.27.2/interface/wrapper/$.uno#166'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE_IS_INTERFACE 1
#define uObjC_NATIVE_TYPE UIImagePickerControllerDelegate
#define uObjC_UNO_TYPE uObject*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::UIKit::IUIImagePickerControllerDelegate_typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <iOS.Foundation.NSDictionary.h>
#include <iOS.UIKit.Interop.IUIImagePickerControllerDelegate.h>
#include <iOS.UIKit.UIImage.h>
#include <iOS.UIKit.UIImagePickerController.h>

namespace g{
namespace iOS{
namespace UIKit{
namespace Interop{

// public sealed extern class IUIImagePickerControllerDelegate :6424
// {
IUIImagePickerControllerDelegate_type* IUIImagePickerControllerDelegate_typeof()
{
    static uSStrong<IUIImagePickerControllerDelegate_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(IUIImagePickerControllerDelegate);
    options.TypeSize = sizeof(IUIImagePickerControllerDelegate_type);
    type = (IUIImagePickerControllerDelegate_type*)uClassType::New("iOS.UIKit.Interop.IUIImagePickerControllerDelegate", options);
    type->SetBase(::g::ObjC::Bindings::Object_typeof());
    type->interface1.fp_imagePickerControllerDidFinishPickingImageEditingInfo = (void(*)(uObject*, ::g::iOS::UIKit::UIImagePickerController*, ::g::iOS::UIKit::UIImage*, ::g::iOS::Foundation::NSDictionary*))IUIImagePickerControllerDelegate__imagePickerControllerDidFinishPickingImageEditingInfo_fn;
    type->interface1.fp_imagePickerControllerDidFinishPickingMediaWithInfo = (void(*)(uObject*, ::g::iOS::UIKit::UIImagePickerController*, ::g::iOS::Foundation::NSDictionary*))IUIImagePickerControllerDelegate__imagePickerControllerDidFinishPickingMediaWithInfo_fn;
    type->interface1.fp_imagePickerControllerDidCancel = (void(*)(uObject*, ::g::iOS::UIKit::UIImagePickerController*))IUIImagePickerControllerDelegate__imagePickerControllerDidCancel_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(IUIImagePickerControllerDelegate_type, interface0),
        ::g::iOS::UIKit::IUIImagePickerControllerDelegate_typeof(), offsetof(IUIImagePickerControllerDelegate_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(3,
        new uFunction("imagePickerControllerDidCancel", NULL, (void*)IUIImagePickerControllerDelegate__imagePickerControllerDidCancel_fn, 0, false, uVoid_typeof(), 1, ::g::iOS::UIKit::UIImagePickerController_typeof()),
        new uFunction("imagePickerControllerDidFinishPickingImageEditingInfo", NULL, (void*)IUIImagePickerControllerDelegate__imagePickerControllerDidFinishPickingImageEditingInfo_fn, 0, false, uVoid_typeof(), 3, ::g::iOS::UIKit::UIImagePickerController_typeof(), ::g::iOS::UIKit::UIImage_typeof(), ::g::iOS::Foundation::NSDictionary_typeof()),
        new uFunction("imagePickerControllerDidFinishPickingMediaWithInfo", NULL, (void*)IUIImagePickerControllerDelegate__imagePickerControllerDidFinishPickingMediaWithInfo_fn, 0, false, uVoid_typeof(), 2, ::g::iOS::UIKit::UIImagePickerController_typeof(), ::g::iOS::Foundation::NSDictionary_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public extern void imagePickerControllerDidCancel(iOS.UIKit.UIImagePickerController picker) :6439
void IUIImagePickerControllerDelegate__imagePickerControllerDidCancel_fn(IUIImagePickerControllerDelegate* __this, ::g::iOS::UIKit::UIImagePickerController* picker_)
{
    __this->imagePickerControllerDidCancel(picker_);
}

// public extern void imagePickerControllerDidFinishPickingImageEditingInfo(iOS.UIKit.UIImagePickerController picker, iOS.UIKit.UIImage image, iOS.Foundation.NSDictionary editingInfo) :6433
void IUIImagePickerControllerDelegate__imagePickerControllerDidFinishPickingImageEditingInfo_fn(IUIImagePickerControllerDelegate* __this, ::g::iOS::UIKit::UIImagePickerController* picker_, ::g::iOS::UIKit::UIImage* image_, ::g::iOS::Foundation::NSDictionary* editingInfo_)
{
    __this->imagePickerControllerDidFinishPickingImageEditingInfo(picker_, image_, editingInfo_);
}

// public extern void imagePickerControllerDidFinishPickingMediaWithInfo(iOS.UIKit.UIImagePickerController picker, iOS.Foundation.NSDictionary info) :6436
void IUIImagePickerControllerDelegate__imagePickerControllerDidFinishPickingMediaWithInfo_fn(IUIImagePickerControllerDelegate* __this, ::g::iOS::UIKit::UIImagePickerController* picker_, ::g::iOS::Foundation::NSDictionary* info_)
{
    __this->imagePickerControllerDidFinishPickingMediaWithInfo(picker_, info_);
}

// public extern void imagePickerControllerDidCancel(iOS.UIKit.UIImagePickerController picker) [instance] :6439
void IUIImagePickerControllerDelegate::imagePickerControllerDidCancel(::g::iOS::UIKit::UIImagePickerController* picker_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIImagePickerControllerDelegate", "imagePickerControllerDidCancel(iOS.UIKit.UIImagePickerController)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(imagePickerControllerDidCancel:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)picker_));
}

// public extern void imagePickerControllerDidFinishPickingImageEditingInfo(iOS.UIKit.UIImagePickerController picker, iOS.UIKit.UIImage image, iOS.Foundation.NSDictionary editingInfo) [instance] :6433
void IUIImagePickerControllerDelegate::imagePickerControllerDidFinishPickingImageEditingInfo(::g::iOS::UIKit::UIImagePickerController* picker_, ::g::iOS::UIKit::UIImage* image_, ::g::iOS::Foundation::NSDictionary* editingInfo_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIImagePickerControllerDelegate", "imagePickerControllerDidFinishPickingImageEditingInfo(iOS.UIKit.UIImagePickerController,iOS.UIKit.UIImage,iOS.Foundation.NSDictionary)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(imagePickerController:didFinishPickingImage:editingInfo:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)picker_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)image_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)editingInfo_));
}

// public extern void imagePickerControllerDidFinishPickingMediaWithInfo(iOS.UIKit.UIImagePickerController picker, iOS.Foundation.NSDictionary info) [instance] :6436
void IUIImagePickerControllerDelegate::imagePickerControllerDidFinishPickingMediaWithInfo(::g::iOS::UIKit::UIImagePickerController* picker_, ::g::iOS::Foundation::NSDictionary* info_)
{
    uStackFrame __("iOS.UIKit.Interop.IUIImagePickerControllerDelegate", "imagePickerControllerDidFinishPickingMediaWithInfo(iOS.UIKit.UIImagePickerController,iOS.Foundation.NSDictionary)");
    uObjC_SEND_MESSAGE_TO_INSTANCE(this, void, @selector(imagePickerController:didFinishPickingMediaWithInfo:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)picker_),
        uObjC::Lifetime::GetNativeHandle((::uObject *)info_));
}
// }

}}}} // ::g::iOS::UIKit::Interop
