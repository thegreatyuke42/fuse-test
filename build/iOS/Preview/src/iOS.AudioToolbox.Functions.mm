// This file was generated based on '/usr/local/share/uno/Packages/Experimental.iOS/0.27.2/functions/$.uno#3'.
// WARNING: Changes might be lost if you edit this file directly.

#include <AudioToolbox/AudioToolbox.h>
#include <iOS.AudioToolbox.Functions.h>
#include <Uno.UInt.h>

namespace g{
namespace iOS{
namespace AudioToolbox{

// public static class Functions :376
// {
uClassType* Functions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("iOS.AudioToolbox.Functions", options);
    type->Reflection.SetFunctions(1,
        new uFunction("AudioServicesPlayAlertSound", NULL, (void*)Functions__AudioServicesPlayAlertSound_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::UInt_typeof()));
    return type;
}

// public static void AudioServicesPlayAlertSound(uint inSystemSoundID) :562
void Functions__AudioServicesPlayAlertSound_fn(uint32_t* inSystemSoundID)
{
    Functions::AudioServicesPlayAlertSound(*inSystemSoundID);
}

// public static void AudioServicesPlayAlertSound(uint inSystemSoundID) [static] :562
void Functions::AudioServicesPlayAlertSound(uint32_t inSystemSoundID)
{
    uStackFrame __("iOS.AudioToolbox.Functions", "AudioServicesPlayAlertSound(uint)");
    ::AudioServicesPlayAlertSound((UInt32)inSystemSoundID);
}
// }

}}} // ::g::iOS::AudioToolbox
