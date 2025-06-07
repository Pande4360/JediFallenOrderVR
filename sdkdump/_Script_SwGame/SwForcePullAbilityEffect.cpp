#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ParticleSystem.hpp"
#include "..\_Script_RsGameTechRT\RsPhysicalAnimationProfile.hpp"
#include "RsAbilityEffect.hpp"
#include "SwForcePullAbilityEffect.hpp"
#include "SwTelekinesisConstraint.hpp"
_Script_Engine::ParticleSystem*& _Script_SwGame::SwForcePullAbilityEffect::get_ParticleTemplate() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0x68);
}
void* _Script_SwGame::SwForcePullAbilityEffect::get_PullRopeUserSocket() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_SwGame::SwForcePullAbilityEffect::get_ForcePullVolumeHalfSize() {
    return (void*)((uintptr_t)this + 0xb4);
}
void* _Script_SwGame::SwForcePullAbilityEffect::get_ParticleSocketName() {
    return (void*)((uintptr_t)this + 0x70);
}
float& _Script_SwGame::SwForcePullAbilityEffect::get_PullMaxDuration() {
    return *(float*)((uintptr_t)this + 0x78);
}
float& _Script_SwGame::SwForcePullAbilityEffect::get_PullRopeSpeed() {
    return *(float*)((uintptr_t)this + 0x80);
}
float& _Script_SwGame::SwForcePullAbilityEffect::get_PullBaseSpeed() {
    return *(float*)((uintptr_t)this + 0x7c);
}
void* _Script_SwGame::SwForcePullAbilityEffect::get_PullUserSocket() {
    return (void*)((uintptr_t)this + 0x88);
}
float& _Script_SwGame::SwForcePullAbilityEffect::get_DistanceToStartCatch() {
    return *(float*)((uintptr_t)this + 0x84);
}
void* _Script_SwGame::SwForcePullAbilityEffect::get_PullDefaultVictimSocket() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_SwGame::SwForcePullAbilityEffect::get_PullDefaultOffset() {
    return (void*)((uintptr_t)this + 0xa0);
}
float& _Script_SwGame::SwForcePullAbilityEffect::get_AngleJiggleScale() {
    return *(float*)((uintptr_t)this + 0xac);
}
float& _Script_SwGame::SwForcePullAbilityEffect::get_JiggleDuration() {
    return *(float*)((uintptr_t)this + 0xb0);
}
void* _Script_SwGame::SwForcePullAbilityEffect::get_ObjectTypesThatResidualPullAffects() {
    return (void*)((uintptr_t)this + 0xc0);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForcePullAbilityEffect::get_ForcePullEnterCharacterStartEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0xd0);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForcePullAbilityEffect::get_ForcePullEnterCharacterStopEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0xd8);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForcePullAbilityEffect::get_ForcePullLeadInCharacterEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0xe0);
}
float& _Script_SwGame::SwForcePullAbilityEffect::get_ForcePullLeadInThreshold() {
    return *(float*)((uintptr_t)this + 0xe8);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForcePullAbilityEffect::get_ForcePullEnterNonCharacterStartEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0xf0);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForcePullAbilityEffect::get_ForcePullEnterNonCharacterStopEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0xf8);
}
_Script_RsGameTechRT::RsPhysicalAnimationProfile*& _Script_SwGame::SwForcePullAbilityEffect::get_PhysicalAnimationProfileForcePull() {
    return *(_Script_RsGameTechRT::RsPhysicalAnimationProfile**)((uintptr_t)this + 0x100);
}
bool _Script_SwGame::SwForcePullAbilityEffect::get_bIgnoreObjectChannel() {
    return (*(uint8_t*)((uintptr_t)this + 0x108 + 0)) & 1 != 0;
}
void _Script_SwGame::SwForcePullAbilityEffect::set_bIgnoreObjectChannel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x108 + 0);
    *(uint8_t*)((uintptr_t)this + 0x108 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwForcePullAbilityEffect::get_bTopologyTraceChannel() {
    return (*(uint8_t*)((uintptr_t)this + 0x108 + 0)) & 2 != 0;
}
void _Script_SwGame::SwForcePullAbilityEffect::set_bTopologyTraceChannel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x108 + 0);
    *(uint8_t*)((uintptr_t)this + 0x108 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_SwGame::SwForcePullAbilityEffect::get_IgnoreObjectChannel() {
    return (void*)((uintptr_t)this + 0x10c);
}
void* _Script_SwGame::SwForcePullAbilityEffect::get_TopologyTraceChannel() {
    return (void*)((uintptr_t)this + 0x10d);
}
float& _Script_SwGame::SwForcePullAbilityEffect::get_DefaultCharacterYankDistance() {
    return *(float*)((uintptr_t)this + 0x110);
}
float& _Script_SwGame::SwForcePullAbilityEffect::get_DefaultCharacterClosestYank() {
    return *(float*)((uintptr_t)this + 0x114);
}
float& _Script_SwGame::SwForcePullAbilityEffect::get_TimeoutToHoldEnter() {
    return *(float*)((uintptr_t)this + 0x118);
}
_Script_SwGame::SwTelekinesisConstraint*& _Script_SwGame::SwForcePullAbilityEffect::get_TKConstraint() {
    return *(_Script_SwGame::SwTelekinesisConstraint**)((uintptr_t)this + 0x120);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForcePullAbilityEffect::get_PullEnterStopEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x1d8);
}
_Script_CoreUObject::Class* _Script_SwGame::SwForcePullAbilityEffect::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwForcePullAbilityEffect");
    return result;
}
