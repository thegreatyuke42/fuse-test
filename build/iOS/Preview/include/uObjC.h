#pragma once

#include <uObjC.String.h>

#include <Uno/Uno.h>
#include <uBase/Exception.h>
#include <objc/objc.h>

#if __OBJC__
@class NSException, NSString;
#else
struct NSException;
struct NSString;
#endif

namespace uObjC {

    using ::Class;
    using ::id;
    using ::NSException;
    using ::NSString;
    using ::SEL;

    using ::uObject;
    using ::uInterfaceType;
    using ::uString;
    using ::uType;

    template <class T> void UnusedVariable(T const &) { }

    struct Exception
        : uBase::Exception
    {
        Exception(NSException *exception, char const *function, int line)
            throw();

        ~Exception() throw();

        NSException *GetNativeException() const throw()
        {
            return _exception;
        }

    private:
        NSException *_exception;
    };

    // Should be ::objc_selector/::SEL, but that affects binary compatibility
    // between Objective C++ and C++, see clang PR21688.
    struct Selector
    {
        Selector(SEL selector = NULL) : selector_(selector) { }
        operator SEL() const { return selector_; }

    private:
        SEL selector_;
    };

    uString *UnoSelectorString(Selector);
    Selector NativeSelector(uString *);

    struct Protocol
    {
        Protocol(id protocol = nil) : protocol_(protocol) { }
        operator id() const { return protocol_; }

    private:
        id protocol_;
    };

    uString *UnoProtocolString(Protocol);
    Protocol NativeProtocol(uString *);

    template <class RT, class...Args>
    using Block = RT (^)(Args...);

} // namespace uObjC

//#if #{ObjC.Bindings.Object:IsStripped}
//#define _uObjC_OBJECT_IS_STRIPPED 1
//#else
#include <ObjC.Bindings.Object.h>

#define uObjC_OBJECT_TYPE ::g::ObjC::Bindings::Object*
#define uObjC_OBJECT_TYPE_OBJECT ::g::ObjC::Bindings::Object_typeof()
#define uObjC_OBJECT_HANDLE(obj) obj->__handle1

#define uObjC_AS_OBJECT(obj) \
    ::uCast< uObjC_OBJECT_TYPE>(obj, uObjC_OBJECT_TYPE_OBJECT)

#define uObjC_PROXY_CLASS(class) _uObjC_PROXY_NAME(uno_, class)
#define uObjC_PROXY_INTERFACE(interface) _uObjC_PROXY_NAME(uno_I, interface)

#define _uObjC_PROXY_NAME(prefix, name) prefix ## name ## _Proxy

#define uObjC_PROXY_FUNCTION_PROLOGUE                               \
    uAutoReleasePool __autoreleasepool;                             \
    uObjC::UnusedVariable(__autoreleasepool);                       \
                                                                    \
    uObjC_UNO_TYPE __this = static_cast< uObjC_UNO_TYPE>(           \
        uObjC::Lifetime::GetUnoObject(self, uObjC_UNO_TYPE_OBJECT));\
    /**/

#define uObjC_REGISTER_TYPE()                                       \
    uObjC::Lifetime::RegisterType(type, sizeof(*(uObjC_UNO_TYPE)0), \
        _uObjC_NATIVE_CLASS, _uObjC_PROXY_CLASS)                    \
    /**/
//#endif // !ObjC.Bindings.Object:IsStripped
