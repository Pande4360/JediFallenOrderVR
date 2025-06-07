#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleTrailBase.hpp"
#include "ParticleModuleTrailSource.hpp"
int32_t& _Script_Engine::ParticleModuleTrailSource::get_SourceOffsetCount() {
    return *(int32_t*)((uintptr_t)this + 0x7c);
}
void* _Script_Engine::ParticleModuleTrailSource::get_SourceMethod() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::ParticleModuleTrailSource::get_SourceName() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::ParticleModuleTrailSource::get_SelectionMethod() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Engine::ParticleModuleTrailSource::get_SourceStrength() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_Engine::ParticleModuleTrailSource::get_bLockSourceStength() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleTrailSource::set_bLockSourceStength(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ParticleModuleTrailSource::get_SourceOffsetDefaults() {
    return (void*)((uintptr_t)this + 0x80);
}
bool _Script_Engine::ParticleModuleTrailSource::get_bInheritRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x94 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleTrailSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleTrailSource");
    return result;
}
void _Script_Engine::ParticleModuleTrailSource::set_bInheritRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x94 + 0);
    *(uint8_t*)((uintptr_t)this + 0x94 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
