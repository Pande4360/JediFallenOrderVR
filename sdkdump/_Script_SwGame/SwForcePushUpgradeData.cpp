#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "SwForcePushUpgradeData.hpp"
_Script_Engine::AnimMontage*& _Script_SwGame::SwForcePushUpgradeData::get_PreTriggerGroundNavAnimation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x8);
}
_Script_Engine::AnimMontage*& _Script_SwGame::SwForcePushUpgradeData::get_PreTriggerGroundStaticAnimation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x0);
}
_Script_Engine::AnimMontage*& _Script_SwGame::SwForcePushUpgradeData::get_PreTriggerLandingAnimation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x20);
}
_Script_Engine::AnimMontage*& _Script_SwGame::SwForcePushUpgradeData::get_PreTriggerAirAnimation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x10);
}
_Script_Engine::AnimMontage*& _Script_SwGame::SwForcePushUpgradeData::get_PreTriggerSpecialAnimation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x18);
}
_Script_Engine::AnimMontage*& _Script_SwGame::SwForcePushUpgradeData::get_ParryGroundAnimation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x28);
}
bool _Script_SwGame::SwForcePushUpgradeData::get_bShouldEffectOnlySingleTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 1 != 0;
}
_Script_Engine::AnimMontage*& _Script_SwGame::SwForcePushUpgradeData::get_ParryAirAnimation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x30);
}
bool _Script_SwGame::SwForcePushUpgradeData::get_bShouldCharactersBeGlancingHits() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_SwGame::SwForcePushUpgradeData::set_bShouldCharactersBeGlancingHits(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwForcePushUpgradeData::get_EffectType() {
    return (void*)((uintptr_t)this + 0x40);
}
float& _Script_SwGame::SwForcePushUpgradeData::get_PushMaxAngle() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_SwGame::SwForcePushUpgradeData::get_PushInnerDistance() {
    return *(float*)((uintptr_t)this + 0x4c);
}
float& _Script_SwGame::SwForcePushUpgradeData::get_PushMaxDistance() {
    return *(float*)((uintptr_t)this + 0x50);
}
float& _Script_SwGame::SwForcePushUpgradeData::get_PushSuperHitDistance() {
    return *(float*)((uintptr_t)this + 0x54);
}
float& _Script_SwGame::SwForcePushUpgradeData::get_PushInnerWidth() {
    return *(float*)((uintptr_t)this + 0x58);
}
float& _Script_SwGame::SwForcePushUpgradeData::get_PushOuterWidth() {
    return *(float*)((uintptr_t)this + 0x5c);
}
float& _Script_SwGame::SwForcePushUpgradeData::get_PushHeight() {
    return *(float*)((uintptr_t)this + 0x60);
}
void* _Script_SwGame::SwForcePushUpgradeData::get_PushStartOffset() {
    return (void*)((uintptr_t)this + 0x64);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForcePushUpgradeData::get_AudioPreTrigger() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x70);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForcePushUpgradeData::get_AudioTrigger() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x78);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForcePushUpgradeData::get_AudioParry() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x80);
}
void _Script_SwGame::SwForcePushUpgradeData::set_bShouldEffectOnlySingleTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwForcePushUpgradeData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwForcePushUpgradeData");
    return result;
}
