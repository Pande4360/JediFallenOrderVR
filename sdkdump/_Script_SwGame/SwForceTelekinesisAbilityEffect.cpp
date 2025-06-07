#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ParticleSystem.hpp"
#include "..\_Script_Engine\PhysicalMaterial.hpp"
#include "RsAbilityEffect.hpp"
#include "SwForceTelekinesisAbilityEffect.hpp"
#include "SwTelekinesisConstraint.hpp"
void* _Script_SwGame::SwForceTelekinesisAbilityEffect::get_TelekinesisSocketName() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_Engine::ParticleSystem*& _Script_SwGame::SwForceTelekinesisAbilityEffect::get_ParticleTemplate() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0x68);
}
void* _Script_SwGame::SwForceTelekinesisAbilityEffect::get_TelekinesisDefaultVictimSocket() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_SwGame::SwForceTelekinesisAbilityEffect::get_ParticleSocketName() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_SwGame::SwForceTelekinesisAbilityEffect::get_TelekinesisDefaultOffset() {
    return (void*)((uintptr_t)this + 0x88);
}
float& _Script_SwGame::SwForceTelekinesisAbilityEffect::get_AngleJiggleScale() {
    return *(float*)((uintptr_t)this + 0x94);
}
float& _Script_SwGame::SwForceTelekinesisAbilityEffect::get_JiggleDuration() {
    return *(float*)((uintptr_t)this + 0x98);
}
void* _Script_SwGame::SwForceTelekinesisAbilityEffect::get_DepthForwardKey() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_SwGame::SwForceTelekinesisAbilityEffect::get_DepthBackwardKey() {
    return (void*)((uintptr_t)this + 0xb8);
}
bool _Script_SwGame::SwForceTelekinesisAbilityEffect::get_bIsAxisConstrained() {
    return (*(uint8_t*)((uintptr_t)this + 0xd0 + 0)) & 1 != 0;
}
void _Script_SwGame::SwForceTelekinesisAbilityEffect::set_bIsAxisConstrained(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForceTelekinesisAbilityEffect::get_ForceTKLoopAudio() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0xd8);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwForceTelekinesisAbilityEffect::get_ForceTKLoopStopAudio() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0xe0);
}
float& _Script_SwGame::SwForceTelekinesisAbilityEffect::get_TKLoopMaxSpeed() {
    return *(float*)((uintptr_t)this + 0xe8);
}
_Script_SwGame::SwTelekinesisConstraint*& _Script_SwGame::SwForceTelekinesisAbilityEffect::get_TKConstraint() {
    return *(_Script_SwGame::SwTelekinesisConstraint**)((uintptr_t)this + 0xf0);
}
_Script_Engine::PhysicalMaterial*& _Script_SwGame::SwForceTelekinesisAbilityEffect::get_OverridenPhysMaterial() {
    return *(_Script_Engine::PhysicalMaterial**)((uintptr_t)this + 0x298);
}
_Script_CoreUObject::Class* _Script_SwGame::SwForceTelekinesisAbilityEffect::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwForceTelekinesisAbilityEffect");
    return result;
}
