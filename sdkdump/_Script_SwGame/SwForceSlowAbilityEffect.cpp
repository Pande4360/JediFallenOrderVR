#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\CurveFloat.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\ParticleSystem.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "RsAbilityEffect.hpp"
#include "SwForceSlowAbilityEffect.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwForceSlowAbilityEffect::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwForceSlowAbilityEffect");
    return result;
}
float& _Script_SwGame::SwForceSlowAbilityEffect::get_DefaultCharacterSlowDurationMultiple() {
    return *(float*)((uintptr_t)this + 0x88);
}
void* _Script_SwGame::SwForceSlowAbilityEffect::get_MotionTweakName() {
    return (void*)((uintptr_t)this + 0x68);
}
float& _Script_SwGame::SwForceSlowAbilityEffect::get_DefaultCharacterBoostedDurationMultiple() {
    return *(float*)((uintptr_t)this + 0x8c);
}
float& _Script_SwGame::SwForceSlowAbilityEffect::get_DefaultCharacterSlowDuration() {
    return *(float*)((uintptr_t)this + 0x70);
}
float& _Script_SwGame::SwForceSlowAbilityEffect::get_DefaultCharacterSlowTimeDilation() {
    return *(float*)((uintptr_t)this + 0x74);
}
float& _Script_SwGame::SwForceSlowAbilityEffect::get_DefaultCharacterBoostedSlowTimeDilation() {
    return *(float*)((uintptr_t)this + 0x78);
}
_Script_Engine::CurveFloat*& _Script_SwGame::SwForceSlowAbilityEffect::get_DefaultCharacterTimeDilationCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x80);
}
float& _Script_SwGame::SwForceSlowAbilityEffect::get_DefaultNonCharacterSlowDuration() {
    return *(float*)((uintptr_t)this + 0x90);
}
float& _Script_SwGame::SwForceSlowAbilityEffect::get_DefaultNonCharacterSlowTimeDilation() {
    return *(float*)((uintptr_t)this + 0x94);
}
float& _Script_SwGame::SwForceSlowAbilityEffect::get_DefaultNonCharacterBoostedDurationMultiple() {
    return *(float*)((uintptr_t)this + 0x98);
}
float& _Script_SwGame::SwForceSlowAbilityEffect::get_SlowRecoveryPercentDuration() {
    return *(float*)((uintptr_t)this + 0x9c);
}
_Script_Engine::CurveFloat*& _Script_SwGame::SwForceSlowAbilityEffect::get_SlowRecoveryCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0xa0);
}
_Script_Engine::ParticleSystem*& _Script_SwGame::SwForceSlowAbilityEffect::get_ParticleSystemTemplate() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0xa8);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForceSlowAbilityEffect::get_ForceSlowSoundEffectStart() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0xb0);
}
float& _Script_SwGame::SwForceSlowAbilityEffect::get_RatioOfDurationToPlayBoost() {
    return *(float*)((uintptr_t)this + 0xe0);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForceSlowAbilityEffect::get_AudioSlowOverride() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0xb8);
}
void* _Script_SwGame::SwForceSlowAbilityEffect::get_CharacterVelocityBufferClipSpaceOverride() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_SwGame::SwForceSlowAbilityEffect::get_NonCharacterVelocityBufferClipSpaceOverride() {
    return (void*)((uintptr_t)this + 0xc8);
}
_Script_Engine::CurveFloat*& _Script_SwGame::SwForceSlowAbilityEffect::get_BoostCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0xd0);
}
_Script_Engine::CurveFloat*& _Script_SwGame::SwForceSlowAbilityEffect::get_ReleaseCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0xd8);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForceSlowAbilityEffect::get_SlowSoundEffect() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x2f8);
}
void _Script_SwGame::SwForceSlowAbilityEffect::OnPrimitiveOverlapped(_Script_Engine::PrimitiveComponent* OverlappedComp, _Script_Engine::Actor* Other, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
