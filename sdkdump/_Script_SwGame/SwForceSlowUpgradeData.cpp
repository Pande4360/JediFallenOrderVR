#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\ParticleSystem.hpp"
#include "SwForceSlowUpgradeData.hpp"
float& _Script_SwGame::SwForceSlowUpgradeData::get_BubbleDuration() {
    return *(float*)((uintptr_t)this + 0x28);
}
float& _Script_SwGame::SwForceSlowUpgradeData::get_BubbleRadius() {
    return *(float*)((uintptr_t)this + 0x24);
}
_Script_Engine::ParticleSystem*& _Script_SwGame::SwForceSlowUpgradeData::get_BoostParticle() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0x18);
}
_Script_Engine::AnimMontage*& _Script_SwGame::SwForceSlowUpgradeData::get_ReleaseAnimation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x0);
}
_Script_Engine::AnimMontage*& _Script_SwGame::SwForceSlowUpgradeData::get_BoostedReleaseAnimation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x8);
}
float& _Script_SwGame::SwForceSlowUpgradeData::get_BoostDuration() {
    return *(float*)((uintptr_t)this + 0x10);
}
void _Script_SwGame::SwForceSlowUpgradeData::set_bHasSlowBubble(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwForceSlowUpgradeData::get_EffectType() {
    return (void*)((uintptr_t)this + 0x38);
}
bool _Script_SwGame::SwForceSlowUpgradeData::get_bHasSlowBubble() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
_Script_Engine::ParticleSystem*& _Script_SwGame::SwForceSlowUpgradeData::get_BubbleParticle() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0x30);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForceSlowUpgradeData::get_AudioCastLeadin() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x40);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForceSlowUpgradeData::get_AudioTriggerStart() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_SwGame::SwForceSlowUpgradeData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwForceSlowUpgradeData");
    return result;
}
