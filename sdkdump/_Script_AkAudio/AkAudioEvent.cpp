#include "..\FUObjectArray.hpp"
#include "AkAudioBank.hpp"
#include "AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
_Script_AkAudio::AkAudioBank*& _Script_AkAudio::AkAudioEvent::get_RequiredBank() {
    return *(_Script_AkAudio::AkAudioBank**)((uintptr_t)this + 0x1d8);
}
void _Script_AkAudio::AkAudioEvent::set_IsInfinite(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_AkAudio::AkAudioEvent::get_MaxAttenuationRadius() {
    return *(float*)((uintptr_t)this + 0x1e0);
}
float& _Script_AkAudio::AkAudioEvent::get_MaximumDuration() {
    return *(float*)((uintptr_t)this + 0x1ec);
}
bool _Script_AkAudio::AkAudioEvent::get_IsInfinite() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e4 + 0)) & 1 != 0;
}
float& _Script_AkAudio::AkAudioEvent::get_MinimumDuration() {
    return *(float*)((uintptr_t)this + 0x1e8);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkAudioEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkAudioEvent");
    return result;
}
