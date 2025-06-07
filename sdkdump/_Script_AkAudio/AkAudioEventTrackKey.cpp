#include "..\FUObjectArray.hpp"
#include "AkAudioEvent.hpp"
#include "AkAudioEventTrackKey.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AkAudio::AkAudioEventTrackKey::get_EventName() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_AkAudio::AkAudioEventTrackKey::get_Time() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_AkAudio::AkAudioEvent*& _Script_AkAudio::AkAudioEventTrackKey::get_AkAudioEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkAudioEventTrackKey::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AkAudio.AkAudioEventTrackKey");
    return result;
}
