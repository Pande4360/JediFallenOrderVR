#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "..\_Script_RsGameTechRT\RsPhysicalAnimationProfile.hpp"
#include "RsAbility.hpp"
#include "SwForceTelekinesisAbility.hpp"
bool _Script_SwGame::SwForceTelekinesisAbility::get_bShouldPauseForce() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 1 != 0;
}
_Script_Engine::DataTable*& _Script_SwGame::SwForceTelekinesisAbility::get_WeightTable() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0xb8);
}
void _Script_SwGame::SwForceTelekinesisAbility::set_bShouldPauseForce(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::AnimMontage*& _Script_SwGame::SwForceTelekinesisAbility::get_FailAnimation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0xe0);
}
_Script_Engine::AnimMontage*& _Script_SwGame::SwForceTelekinesisAbility::get_HeavyTKCharacterAnimation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0xd8);
}
_Script_Engine::AnimMontage*& _Script_SwGame::SwForceTelekinesisAbility::get_SuccessAnimation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0xc8);
}
_Script_Engine::AnimMontage*& _Script_SwGame::SwForceTelekinesisAbility::get_TKCharacterAnimation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0xd0);
}
void* _Script_SwGame::SwForceTelekinesisAbility::get_OutSection() {
    return (void*)((uintptr_t)this + 0xe8);
}
void* _Script_SwGame::SwForceTelekinesisAbility::get_DropSection() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_SwGame::SwForceTelekinesisAbility::get_EffectType() {
    return (void*)((uintptr_t)this + 0xf8);
}
void* _Script_SwGame::SwForceTelekinesisAbility::get_ShakeType() {
    return (void*)((uintptr_t)this + 0x100);
}
float& _Script_SwGame::SwForceTelekinesisAbility::get_TimeUntilForceUsageOverTimeTriggers() {
    return *(float*)((uintptr_t)this + 0x108);
}
bool _Script_SwGame::SwForceTelekinesisAbility::get_bUsePhysicalAnimation() {
    return (*(uint8_t*)((uintptr_t)this + 0x10c + 0)) & 1 != 0;
}
void _Script_SwGame::SwForceTelekinesisAbility::set_bUsePhysicalAnimation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10c + 0);
    *(uint8_t*)((uintptr_t)this + 0x10c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwForceTelekinesisAbility::get_bIgnoreObjectChannel() {
    return (*(uint8_t*)((uintptr_t)this + 0x10c + 0)) & 2 != 0;
}
void _Script_SwGame::SwForceTelekinesisAbility::set_bIgnoreObjectChannel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10c + 0);
    *(uint8_t*)((uintptr_t)this + 0x10c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_SwGame::SwForceTelekinesisAbility::get_bTopologyTraceChannel() {
    return (*(uint8_t*)((uintptr_t)this + 0x10c + 0)) & 4 != 0;
}
void _Script_SwGame::SwForceTelekinesisAbility::set_bTopologyTraceChannel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10c + 0);
    *(uint8_t*)((uintptr_t)this + 0x10c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_SwGame::SwForceTelekinesisAbility::get_IgnoreObjectChannel() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_SwGame::SwForceTelekinesisAbility::get_TopologyTraceChannel() {
    return (void*)((uintptr_t)this + 0x111);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForceTelekinesisAbility::get_ForceTKCastEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x118);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForceTelekinesisAbility::get_ForceTKCastStopEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x120);
}
_Script_RsGameTechRT::RsPhysicalAnimationProfile*& _Script_SwGame::SwForceTelekinesisAbility::get_PhysicalAnimationProfileTelekinesis() {
    return *(_Script_RsGameTechRT::RsPhysicalAnimationProfile**)((uintptr_t)this + 0x128);
}
float& _Script_SwGame::SwForceTelekinesisAbility::get_TurnDuration() {
    return *(float*)((uintptr_t)this + 0x130);
}
_Script_CoreUObject::Class* _Script_SwGame::SwForceTelekinesisAbility::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwForceTelekinesisAbility");
    return result;
}
void _Script_SwGame::SwForceTelekinesisAbility::OnForceMeterBarEmptied(void* ResponsibleForceName, float TimeUntilForceRegen) {
    return;
}
