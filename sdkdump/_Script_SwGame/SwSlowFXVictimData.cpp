#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ParticleSystem.hpp"
#include "SwSlowFXVictimData.hpp"
_Script_Engine::ParticleSystem*& _Script_SwGame::SwSlowFXVictimData::get_ForceSlowParticleSystem() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0x0);
}
bool _Script_SwGame::SwSlowFXVictimData::get_bShouldPlayOverrideSound() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
bool _Script_SwGame::SwSlowFXVictimData::get_bShouldPlayForceSlowSoundEffect() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_SwGame::SwSlowFXVictimData::set_bShouldPlayForceSlowSoundEffect(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_SwGame::SwSlowFXVictimData::set_bShouldVictimDataApplyClipSpaceOverride(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x19 + 0);
    *(uint8_t*)((uintptr_t)this + 0x19 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwSlowFXVictimData::get_ForceSlowSoundEffectStartOverride() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x10);
}
void _Script_SwGame::SwSlowFXVictimData::set_bShouldPlayOverrideSound(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwSlowFXVictimData::get_bShouldVictimDataApplyClipSpaceOverride() {
    return (*(uint8_t*)((uintptr_t)this + 0x19 + 0)) & 1 != 0;
}
void* _Script_SwGame::SwSlowFXVictimData::get_VelocityBufferClipSpaceOverride() {
    return (void*)((uintptr_t)this + 0x1c);
}
_Script_CoreUObject::Class* _Script_SwGame::SwSlowFXVictimData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwSlowFXVictimData");
    return result;
}
