#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "..\_Script_Engine\ParticleSystem.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "SwProjectileEffectsData.hpp"
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwProjectileEffectsData::get_ReflectSFX() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0xc0);
}
_Script_Engine::ParticleSystem*& _Script_SwGame::SwProjectileEffectsData::get_ProjectileEffect() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0x8);
}
float& _Script_SwGame::SwProjectileEffectsData::get_InitialSpeed() {
    return *(float*)((uintptr_t)this + 0x34);
}
void* _Script_SwGame::SwProjectileEffectsData::get_EffectScale() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_Engine::DataTable*& _Script_SwGame::SwProjectileEffectsData::get_DamageTable() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x78);
}
_Script_Engine::StaticMesh*& _Script_SwGame::SwProjectileEffectsData::get_ProjectileStaticMesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x20);
}
bool _Script_SwGame::SwProjectileEffectsData::get_bPenetrateOverlaps() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
void* _Script_SwGame::SwProjectileEffectsData::get_StaticMeshScale() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_SwGame::SwProjectileEffectsData::get_HitEvent() {
    return (void*)((uintptr_t)this + 0x38);
}
float& _Script_SwGame::SwProjectileEffectsData::get_RadialOuterRadius() {
    return *(float*)((uintptr_t)this + 0x90);
}
void _Script_SwGame::SwProjectileEffectsData::set_bPenetrateOverlaps(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwProjectileEffectsData::get_bMakeAISoundOnSpawn() {
    return (*(uint8_t*)((uintptr_t)this + 0x81 + 0)) & 1 != 0;
}
void _Script_SwGame::SwProjectileEffectsData::set_bMakeAISoundOnSpawn(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x81 + 0);
    *(uint8_t*)((uintptr_t)this + 0x81 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwProjectileEffectsData::get_AISoundType() {
    return (void*)((uintptr_t)this + 0x82);
}
bool _Script_SwGame::SwProjectileEffectsData::get_bUseSoundOcclusion() {
    return (*(uint8_t*)((uintptr_t)this + 0x83 + 0)) & 1 != 0;
}
void _Script_SwGame::SwProjectileEffectsData::set_bUseSoundOcclusion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x83 + 0);
    *(uint8_t*)((uintptr_t)this + 0x83 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwProjectileEffectsData::get_RadialInnerDamage() {
    return *(float*)((uintptr_t)this + 0x84);
}
float& _Script_SwGame::SwProjectileEffectsData::get_RadialOuterDamage() {
    return *(float*)((uintptr_t)this + 0x88);
}
float& _Script_SwGame::SwProjectileEffectsData::get_RadialInnerRadius() {
    return *(float*)((uintptr_t)this + 0x8c);
}
_Script_Engine::ParticleSystem*& _Script_SwGame::SwProjectileEffectsData::get_SpawnEffect() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0x98);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwProjectileEffectsData::get_SpawnSFX() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0xa0);
}
float& _Script_SwGame::SwProjectileEffectsData::get_FlybySoundFireDistance() {
    return *(float*)((uintptr_t)this + 0xa8);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwProjectileEffectsData::get_FlybySFX() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0xb0);
}
_Script_Engine::ParticleSystem*& _Script_SwGame::SwProjectileEffectsData::get_ReflectEffect() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0xb8);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwProjectileEffectsData::get_ReflectedImpactSFX() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0xc8);
}
_Script_Engine::ParticleSystem*& _Script_SwGame::SwProjectileEffectsData::get_DeflectEffect() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0xd0);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwProjectileEffectsData::get_DeflectSFX() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0xd8);
}
_Script_CoreUObject::Class* _Script_SwGame::SwProjectileEffectsData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwProjectileEffectsData");
    return result;
}
