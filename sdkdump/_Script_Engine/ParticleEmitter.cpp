#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "ParticleEmitter.hpp"
bool _Script_Engine::ParticleEmitter::get_bUseLegacySpawningBehavior() {
    return (*(uint8_t*)((uintptr_t)this + 0x37 + 0)) & 1 != 0;
}
void* _Script_Engine::ParticleEmitter::get_EmitterName() {
    return (void*)((uintptr_t)this + 0x28);
}
bool _Script_Engine::ParticleEmitter::get_ConvertedModules() {
    return (*(uint8_t*)((uintptr_t)this + 0x37 + 0)) & 16 != 0;
}
int32_t& _Script_Engine::ParticleEmitter::get_SubUVDataOffset() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::ParticleEmitter::get_EmitterRenderMode() {
    return (void*)((uintptr_t)this + 0x34);
}
void* _Script_Engine::ParticleEmitter::get_SignificanceLevel() {
    return (void*)((uintptr_t)this + 0x35);
}
void _Script_Engine::ParticleEmitter::set_bUseLegacySpawningBehavior(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x37 + 0);
    *(uint8_t*)((uintptr_t)this + 0x37 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::ParticleEmitter::set_ConvertedModules(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x37 + 0);
    *(uint8_t*)((uintptr_t)this + 0x37 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::ParticleEmitter::get_bIsSoloing() {
    return (*(uint8_t*)((uintptr_t)this + 0x37 + 0)) & 32 != 0;
}
void* _Script_Engine::ParticleEmitter::get_DetailModeBitmask() {
    return (void*)((uintptr_t)this + 0x5c);
}
void _Script_Engine::ParticleEmitter::set_bIsSoloing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x37 + 0);
    *(uint8_t*)((uintptr_t)this + 0x37 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::ParticleEmitter::get_bCookedOut() {
    return (*(uint8_t*)((uintptr_t)this + 0x37 + 0)) & 64 != 0;
}
void _Script_Engine::ParticleEmitter::set_bCookedOut(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x37 + 0);
    *(uint8_t*)((uintptr_t)this + 0x37 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::ParticleEmitter::get_bDisabledLODsKeepEmitterAlive() {
    return (*(uint8_t*)((uintptr_t)this + 0x37 + 0)) & 128 != 0;
}
void _Script_Engine::ParticleEmitter::set_bDisabledLODsKeepEmitterAlive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x37 + 0);
    *(uint8_t*)((uintptr_t)this + 0x37 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::ParticleEmitter::get_bDisableWhenInsignficant() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleEmitter::set_bDisableWhenInsignficant(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ParticleEmitter::get_LODLevels() {
    return (void*)((uintptr_t)this + 0x40);
}
int32_t& _Script_Engine::ParticleEmitter::get_PeakActiveParticles() {
    return *(int32_t*)((uintptr_t)this + 0x50);
}
int32_t& _Script_Engine::ParticleEmitter::get_InitialAllocationCount() {
    return *(int32_t*)((uintptr_t)this + 0x54);
}
float& _Script_Engine::ParticleEmitter::get_QualityLevelSpawnRateScale() {
    return *(float*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleEmitter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleEmitter");
    return result;
}
