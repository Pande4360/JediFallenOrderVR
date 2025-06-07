#include "..\FUObjectArray.hpp"
#include "AudioCaptureComponent.hpp"
#include "..\_Script_AudioMixer\SynthComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_AudioCapture::AudioCaptureComponent::get_JitterLatencyFrames() {
    return *(int32_t*)((uintptr_t)this + 0x650);
}
_Script_CoreUObject::Class* _Script_AudioCapture::AudioCaptureComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AudioCapture.AudioCaptureComponent");
    return result;
}
