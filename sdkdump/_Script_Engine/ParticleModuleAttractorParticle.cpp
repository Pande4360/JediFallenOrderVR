#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleAttractorBase.hpp"
#include "ParticleModuleAttractorParticle.hpp"
void _Script_Engine::ParticleModuleAttractorParticle::set_bStrengthByDistance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x70 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ParticleModuleAttractorParticle::get_EmitterName() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_Engine::ParticleModuleAttractorParticle::get_bAffectBaseVelocity() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 1 != 0;
}
void* _Script_Engine::ParticleModuleAttractorParticle::get_Range() {
    return (void*)((uintptr_t)this + 0x38);
}
bool _Script_Engine::ParticleModuleAttractorParticle::get_bStrengthByDistance() {
    return (*(uint8_t*)((uintptr_t)this + 0x70 + 0)) & 1 != 0;
}
void* _Script_Engine::ParticleModuleAttractorParticle::get_SelectionMethod() {
    return (void*)((uintptr_t)this + 0xb4);
}
void* _Script_Engine::ParticleModuleAttractorParticle::get_Strength() {
    return (void*)((uintptr_t)this + 0x78);
}
void _Script_Engine::ParticleModuleAttractorParticle::set_bAffectBaseVelocity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleModuleAttractorParticle::get_bRenewSource() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleAttractorParticle::set_bRenewSource(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleModuleAttractorParticle::get_bInheritSourceVel() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8 + 0)) & 2 != 0;
}
void _Script_Engine::ParticleModuleAttractorParticle::set_bInheritSourceVel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
int32_t& _Script_Engine::ParticleModuleAttractorParticle::get_LastSelIndex() {
    return *(int32_t*)((uintptr_t)this + 0xbc);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleAttractorParticle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleAttractorParticle");
    return result;
}
