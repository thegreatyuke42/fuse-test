// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <iOS.CoreFoundation.CFStringRef.h>

namespace g{
namespace iOS{
namespace CoreFoundation{

// /usr/local/share/uno/Packages/Experimental.iOS/0.27.2/opaque/$.uno#62
// ---------------------------------------------------------------------

// public extern struct CFStringRef :1065
// {
uStructType* CFStringRef_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(app::CFStringRef*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("iOS.CoreFoundation.CFStringRef", options);
    return type;
}
// }

}}} // ::g::iOS::CoreFoundation
