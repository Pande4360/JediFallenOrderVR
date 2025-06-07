#include "..\FUObjectArray.hpp"
#include "AkAmbientSound.hpp"
#include "AkAudioEvent.hpp"
#include "AkComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
void _Script_AkAudio::AkAmbientSound::set_AutoPost(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x371 + 0);
    *(uint8_t*)((uintptr_t)this + 0x371 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_AkAudio::AkAudioEvent*& _Script_AkAudio::AkAmbientSound::get_AkAudioEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x360);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkAmbientSound::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkAmbientSound");
    return result;
}
_Script_AkAudio::AkComponent*& _Script_AkAudio::AkAmbientSound::get_AkComponent() {
    return *(_Script_AkAudio::AkComponent**)((uintptr_t)this + 0x368);
}
void _Script_AkAudio::AkAmbientSound::set_StopWhenOwnerIsDestroyed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x370 + 0);
    *(uint8_t*)((uintptr_t)this + 0x370 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AkAudio::AkAmbientSound::get_StopWhenOwnerIsDestroyed() {
    return (*(uint8_t*)((uintptr_t)this + 0x370 + 0)) & 1 != 0;
}
void _Script_AkAudio::AkAmbientSound::StopAmbientSound() {
    return;
}
bool _Script_AkAudio::AkAmbientSound::get_AutoPost() {
    return (*(uint8_t*)((uintptr_t)this + 0x371 + 0)) & 1 != 0;
}
void _Script_AkAudio::AkAmbientSound::StartAmbientSound() {
    return;
}
