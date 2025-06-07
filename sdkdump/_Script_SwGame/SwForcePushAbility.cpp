#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\CurveFloat.hpp"
#include "..\_Script_Engine\ParticleSystem.hpp"
#include "RsAbility.hpp"
#include "SwForcePushAbility.hpp"
_Script_Engine::CurveFloat*& _Script_SwGame::SwForcePushAbility::get_DirectionVarianceScalingCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x130);
}
void _Script_SwGame::SwForcePushAbility::set_bUseForwardVectorForPushDirection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwForcePushAbility::get_DistanceExtensionData() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_SwGame::SwForcePushAbility::get_ForceMeterRow() {
    return (void*)((uintptr_t)this + 0xc8);
}
float& _Script_SwGame::SwForcePushAbility::get_DistanceToRemovePitch() {
    return *(float*)((uintptr_t)this + 0xec);
}
_Script_Engine::AnimMontage*& _Script_SwGame::SwForcePushAbility::get_PullPushAnimation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x140);
}
void _Script_SwGame::SwForcePushAbility::set_bShouldRemovePitch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwForcePushAbility::get_ForceMeterPullPushRow() {
    return (void*)((uintptr_t)this + 0xd8);
}
bool _Script_SwGame::SwForcePushAbility::get_bShouldRemovePitch() {
    return (*(uint8_t*)((uintptr_t)this + 0xe8 + 0)) & 1 != 0;
}
bool _Script_SwGame::SwForcePushAbility::get_bUseForwardVectorForPushDirection() {
    return (*(uint8_t*)((uintptr_t)this + 0xf0 + 0)) & 1 != 0;
}
bool _Script_SwGame::SwForcePushAbility::get_bShouldAddPrimaryTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0xf1 + 0)) & 1 != 0;
}
void _Script_SwGame::SwForcePushAbility::set_bShouldAddPrimaryTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwForcePushAbility::get_PushSuperHitMinDurationMultiplier() {
    return *(float*)((uintptr_t)this + 0xf8);
}
void* _Script_SwGame::SwForcePushAbility::get_TraceType() {
    return (void*)((uintptr_t)this + 0xf2);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForcePushAbility::get_AudioCastStart() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x1b0);
}
float& _Script_SwGame::SwForcePushAbility::get_PushSuperHitMaxDurationMultiplier() {
    return *(float*)((uintptr_t)this + 0xf4);
}
_Script_Engine::AnimMontage*& _Script_SwGame::SwForcePushAbility::get_GroundNavFailAnimation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x178);
}
float& _Script_SwGame::SwForcePushAbility::get_PushGlancingHitMaxDurationMultiplier() {
    return *(float*)((uintptr_t)this + 0xfc);
}
float& _Script_SwGame::SwForcePushAbility::get_PushGlancingHitMinDurationMultiplier() {
    return *(float*)((uintptr_t)this + 0x100);
}
float& _Script_SwGame::SwForcePushAbility::get_PushSuperHitMaxStrength() {
    return *(float*)((uintptr_t)this + 0x104);
}
float& _Script_SwGame::SwForcePushAbility::get_PushSuperHitMinStrength() {
    return *(float*)((uintptr_t)this + 0x108);
}
float& _Script_SwGame::SwForcePushAbility::get_PushSecondaryMaxStrength() {
    return *(float*)((uintptr_t)this + 0x10c);
}
float& _Script_SwGame::SwForcePushAbility::get_PushSecondaryMinStrength() {
    return *(float*)((uintptr_t)this + 0x110);
}
bool _Script_SwGame::SwForcePushAbility::get_bShouldAddUserSpeed() {
    return (*(uint8_t*)((uintptr_t)this + 0x114 + 0)) & 1 != 0;
}
void _Script_SwGame::SwForcePushAbility::set_bShouldAddUserSpeed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x114 + 0);
    *(uint8_t*)((uintptr_t)this + 0x114 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForcePushAbility::get_AudioCastStop() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x1b8);
}
float& _Script_SwGame::SwForcePushAbility::get_PushWaveSpeed() {
    return *(float*)((uintptr_t)this + 0x118);
}
bool _Script_SwGame::SwForcePushAbility::get_bCanIgnoreStops() {
    return (*(uint8_t*)((uintptr_t)this + 0x11c + 0)) & 1 != 0;
}
void _Script_SwGame::SwForcePushAbility::set_bCanIgnoreStops(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11c + 0);
    *(uint8_t*)((uintptr_t)this + 0x11c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwForcePushAbility::get_PushDirectionOffset() {
    return (void*)((uintptr_t)this + 0x120);
}
float& _Script_SwGame::SwForcePushAbility::get_MaxDirectionVarianceAngle() {
    return *(float*)((uintptr_t)this + 0x12c);
}
float& _Script_SwGame::SwForcePushAbility::get_TurnDuration() {
    return *(float*)((uintptr_t)this + 0x138);
}
float& _Script_SwGame::SwForcePushAbility::get_MinSpeedToUseGroundNav() {
    return *(float*)((uintptr_t)this + 0x13c);
}
float& _Script_SwGame::SwForcePushAbility::get_WaveParticleTimeToDeath() {
    return *(float*)((uintptr_t)this + 0x198);
}
_Script_Engine::AnimMontage*& _Script_SwGame::SwForcePushAbility::get_GroundAnimation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x148);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForcePushAbility::get_AudioFail() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x1c0);
}
_Script_Engine::AnimMontage*& _Script_SwGame::SwForcePushAbility::get_GroundNavRightAnimation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x150);
}
_Script_Engine::AnimMontage*& _Script_SwGame::SwForcePushAbility::get_GroundNavLeftAnimation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x158);
}
_Script_Engine::AnimMontage*& _Script_SwGame::SwForcePushAbility::get_AirAnimation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x160);
}
_Script_Engine::AnimMontage*& _Script_SwGame::SwForcePushAbility::get_SpecialAnimation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x168);
}
_Script_Engine::AnimMontage*& _Script_SwGame::SwForcePushAbility::get_GroundStaticFailAnimation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x170);
}
_Script_Engine::AnimMontage*& _Script_SwGame::SwForcePushAbility::get_AirFailAnimation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x180);
}
_Script_Engine::AnimMontage*& _Script_SwGame::SwForcePushAbility::get_SpecialFailAnimation() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x188);
}
_Script_Engine::ParticleSystem*& _Script_SwGame::SwForcePushAbility::get_WaveParticleSystem() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0x190);
}
void* _Script_SwGame::SwForcePushAbility::get_ObjectTypesThatPushAffects() {
    return (void*)((uintptr_t)this + 0x1a0);
}
void* _Script_SwGame::SwForcePushAbility::get_UpgradeData() {
    return (void*)((uintptr_t)this + 0x1c8);
}
_Script_CoreUObject::Class* _Script_SwGame::SwForcePushAbility::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwForcePushAbility");
    return result;
}
