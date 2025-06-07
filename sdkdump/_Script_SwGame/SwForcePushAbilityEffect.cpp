#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CurveFloat.hpp"
#include "..\_Script_Engine\ParticleSystem.hpp"
#include "RsAbilityEffect.hpp"
#include "SwCollisionDamageData.hpp"
#include "SwForcePushAbilityEffect.hpp"
void* _Script_SwGame::SwForcePushAbilityEffect::get_VelocityDirectionOffset() {
    return (void*)((uintptr_t)this + 0x68);
}
float& _Script_SwGame::SwForcePushAbilityEffect::get_GlancingDamage() {
    return *(float*)((uintptr_t)this + 0x9c);
}
float& _Script_SwGame::SwForcePushAbilityEffect::get_VelocitySpeed() {
    return *(float*)((uintptr_t)this + 0x74);
}
float& _Script_SwGame::SwForcePushAbilityEffect::get_TorqueScalar() {
    return *(float*)((uintptr_t)this + 0x78);
}
_Script_Engine::CurveFloat*& _Script_SwGame::SwForcePushAbilityEffect::get_DampingCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x80);
}
float& _Script_SwGame::SwForcePushAbilityEffect::get_DirectDamage() {
    return *(float*)((uintptr_t)this + 0x98);
}
float& _Script_SwGame::SwForcePushAbilityEffect::get_MaxVerticalDistance() {
    return *(float*)((uintptr_t)this + 0x88);
}
_Script_Engine::ParticleSystem*& _Script_SwGame::SwForcePushAbilityEffect::get_ParticleTemplate() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0x90);
}
void* _Script_SwGame::SwForcePushAbilityEffect::get_DirectDamageType() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_SwGame::SwForcePushAbilityEffect::get_GlancingDamageType() {
    return (void*)((uintptr_t)this + 0xa8);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForcePushAbilityEffect::get_ForcePushCharacterSoundEffect() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0xb0);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForcePushAbilityEffect::get_ForcePushPullComboCharacterSoundEffect() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0xb8);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForcePushAbilityEffect::get_ForcePushCharacterGlancingSoundEffect() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0xc0);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForcePushAbilityEffect::get_ForcePushNonCharacterSoundEffect() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0xc8);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForcePushAbilityEffect::get_ForcePushPullComboNonCharacterSoundEffect() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0xd0);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForcePushAbilityEffect::get_ForcePushNonCharacterGlancingSoundEffect() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0xd8);
}
float& _Script_SwGame::SwForcePushAbilityEffect::get_NudgeSpeed() {
    return *(float*)((uintptr_t)this + 0xe0);
}
float& _Script_SwGame::SwForcePushAbilityEffect::get_PortionOfVelocityForRagdoll() {
    return *(float*)((uintptr_t)this + 0xe4);
}
_Script_SwGame::SwCollisionDamageData*& _Script_SwGame::SwForcePushAbilityEffect::get_DefaultCollisionDamageData() {
    return *(_Script_SwGame::SwCollisionDamageData**)((uintptr_t)this + 0xe8);
}
bool _Script_SwGame::SwForcePushAbilityEffect::get_bShouldUseDirectionAssist() {
    return (*(uint8_t*)((uintptr_t)this + 0xf0 + 0)) & 1 != 0;
}
void _Script_SwGame::SwForcePushAbilityEffect::set_bShouldUseDirectionAssist(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwForcePushAbilityEffect::get_DefaultDirectionAssistData() {
    return (void*)((uintptr_t)this + 0xf4);
}
_Script_CoreUObject::Class* _Script_SwGame::SwForcePushAbilityEffect::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwForcePushAbilityEffect");
    return result;
}
void _Script_SwGame::SwForcePushAbilityEffect::OnTopologyChanged(void* previousMode, void* newMode, float Poximity) {
    return;
}
