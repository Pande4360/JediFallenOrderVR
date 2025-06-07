#include "..\FUObjectArray.hpp"
#include "AkAudioEvent.hpp"
#include "MovieSceneAkAudioEventSection.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
int32_t& _Script_AkAudio::MovieSceneAkAudioEventSection::get_ScrubTailLengthMs() {
    return *(int32_t*)((uintptr_t)this + 0x12c);
}
_Script_AkAudio::AkAudioEvent*& _Script_AkAudio::MovieSceneAkAudioEventSection::get_Event() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x120);
}
bool _Script_AkAudio::MovieSceneAkAudioEventSection::get_StopAtSectionEnd() {
    return (*(uint8_t*)((uintptr_t)this + 0x130 + 0)) & 1 != 0;
}
bool _Script_AkAudio::MovieSceneAkAudioEventSection::get_RetriggerEvent() {
    return (*(uint8_t*)((uintptr_t)this + 0x128 + 0)) & 1 != 0;
}
void _Script_AkAudio::MovieSceneAkAudioEventSection::set_StopAtSectionEnd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x130 + 0);
    *(uint8_t*)((uintptr_t)this + 0x130 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AkAudio::MovieSceneAkAudioEventSection::set_RetriggerEvent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x128 + 0);
    *(uint8_t*)((uintptr_t)this + 0x128 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AkAudio::MovieSceneAkAudioEventSection::get_EventName() {
    return (void*)((uintptr_t)this + 0x138);
}
float& _Script_AkAudio::MovieSceneAkAudioEventSection::get_MaxSourceDuration() {
    return *(float*)((uintptr_t)this + 0x168);
}
void* _Script_AkAudio::MovieSceneAkAudioEventSection::get_MaxDurationSourceID() {
    return (void*)((uintptr_t)this + 0x170);
}
_Script_CoreUObject::Class* _Script_AkAudio::MovieSceneAkAudioEventSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.MovieSceneAkAudioEventSection");
    return result;
}
