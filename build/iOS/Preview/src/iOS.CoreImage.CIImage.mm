// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.27.2/class/$.uno#193'.
// WARNING: Changes might be lost if you edit this file directly.

#define uObjC_NATIVE_TYPE CIImage
#define uObjC_UNO_TYPE_IS_SEALED 1
#define uObjC_UNO_TYPE ::g::iOS::CoreImage::CIImage*
#define uObjC_UNO_TYPE_OBJECT ::g::iOS::CoreImage::CIImage_typeof()

#include <CoreImage/CoreImage.h>
#include <uObjC.Wrapper.h>
#include <iOS.CoreImage.CIImage.h>
#include <iOS.Foundation.NSURL.h>

namespace g{
namespace iOS{
namespace CoreImage{

// public sealed extern class CIImage :16428
// {
CIImage_type* CIImage_typeof()
{
    static uSStrong<CIImage_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(CIImage);
    options.TypeSize = sizeof(CIImage_type);
    type = (CIImage_type*)uClassType::New("iOS.CoreImage.CIImage", options);
    type->SetBase(::g::iOS::Foundation::NSObject_typeof());
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))::g::ObjC::Bindings::Object__get_Handle_fn;
    type->SetInterfaces(
        ::g::ObjC::Object_typeof(), offsetof(CIImage_type, interface0),
        ::g::iOS::Foundation::INSCopying_typeof(), offsetof(CIImage_type, interface1));
    type->SetFields(1);
    type->Reflection.SetFunctions(1,
        new uFunction("_imageWithContentsOfURL", NULL, (void*)CIImage___imageWithContentsOfURL_fn, 0, true, CIImage_typeof(), 1, ::g::iOS::Foundation::NSURL_typeof()));

    {
        uObjC_REGISTER_TYPE();
    }

    return type;
}

// public static extern iOS.CoreImage.CIImage _imageWithContentsOfURL(iOS.Foundation.NSURL url) :16457
void CIImage___imageWithContentsOfURL_fn(::g::iOS::Foundation::NSURL* url_, CIImage** __retval)
{
    *__retval = CIImage::_imageWithContentsOfURL(url_);
}

// public static extern iOS.CoreImage.CIImage _imageWithContentsOfURL(iOS.Foundation.NSURL url) [static] :16457
CIImage* CIImage::_imageWithContentsOfURL(::g::iOS::Foundation::NSURL* url_)
{
    uStackFrame __("iOS.CoreImage.CIImage", "_imageWithContentsOfURL(iOS.Foundation.NSURL)");
    ::CIImage* __return = uObjC_SEND_MESSAGE_TO_CLASS(uObjC_UNO_TYPE_OBJECT, ::CIImage*, @selector(imageWithContentsOfURL:),
        uObjC::Lifetime::GetNativeHandle((::uObject *)url_));
    return (CIImage*)uObjC::Lifetime::GetUnoObject(__return, CIImage_typeof());
}
// }

}}} // ::g::iOS::CoreImage
