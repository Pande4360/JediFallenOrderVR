#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "ParticleLODLevel.hpp"
#include "ParticleModuleEventGenerator.hpp"
#include "ParticleModuleRequired.hpp"
#include "ParticleModuleSpawn.hpp"
#include "ParticleModuleTypeDataBase.hpp"
void* _Script_Engine::ParticleLODLevel::get_SpawnModules() {
    return (void*)((uintptr_t)this + 0x70);
}
int32_t& _Script_Engine::ParticleLODLevel::get_Level() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::ParticleLODLevel::get_OrbitModules() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_Engine::ParticleModuleTypeDataBase*& _Script_Engine::ParticleLODLevel::get_TypeDataModule() {
    return *(_Script_Engine::ParticleModuleTypeDataBase**)((uintptr_t)this + 0x48);
}
bool _Script_Engine::ParticleLODLevel::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c + 0)) & 1 != 0;
}
void _Script_Engine::ParticleLODLevel::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ParticleLODLevel::get_Modules() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_Engine::ParticleModuleRequired*& _Script_Engine::ParticleLODLevel::get_RequiredModule() {
    return *(_Script_Engine::ParticleModuleRequired**)((uintptr_t)this + 0x30);
}
_Script_Engine::ParticleModuleSpawn*& _Script_Engine::ParticleLODLevel::get_SpawnModule() {
    return *(_Script_Engine::ParticleModuleSpawn**)((uintptr_t)this + 0x50);
}
_Script_Engine::ParticleModuleEventGenerator*& _Script_Engine::ParticleLODLevel::get_EventGenerator() {
    return *(_Script_Engine::ParticleModuleEventGenerator**)((uintptr_t)this + 0x58);
}
void* _Script_Engine::ParticleLODLevel::get_SpawningModules() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::ParticleLODLevel::get_UpdateModules() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_Engine::ParticleLODLevel::get_EventReceiverModules() {
    return (void*)((uintptr_t)this + 0xa0);
}
bool _Script_Engine::ParticleLODLevel::get_ConvertedModules() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleLODLevel::set_ConvertedModules(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::ParticleLODLevel::get_PeakActiveParticles() {
    return *(int32_t*)((uintptr_t)this + 0xb4);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleLODLevel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleLODLevel");
    return result;
}
