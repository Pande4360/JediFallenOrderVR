#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleEventReceiverBase.hpp"
#include "ParticleModuleEventReceiverSpawn.hpp"
void _Script_Engine::ParticleModuleEventReceiverSpawn::set_bUseParticleTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ParticleModuleEventReceiverSpawn::get_SpawnCount() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_Engine::ParticleModuleEventReceiverSpawn::get_bUseParticleTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 1 != 0;
}
void* _Script_Engine::ParticleModuleEventReceiverSpawn::get_InheritVelocityScale() {
    return (void*)((uintptr_t)this + 0x80);
}
bool _Script_Engine::ParticleModuleEventReceiverSpawn::get_bUsePSysLocation() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 2 != 0;
}
void _Script_Engine::ParticleModuleEventReceiverSpawn::set_bUsePSysLocation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::ParticleModuleEventReceiverSpawn::get_bInheritVelocity() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 4 != 0;
}
void _Script_Engine::ParticleModuleEventReceiverSpawn::set_bInheritVelocity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Engine::ParticleModuleEventReceiverSpawn::get_PhysicalMaterials() {
    return (void*)((uintptr_t)this + 0xd0);
}
bool _Script_Engine::ParticleModuleEventReceiverSpawn::get_bBanPhysicalMaterials() {
    return (*(uint8_t*)((uintptr_t)this + 0xe0 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleEventReceiverSpawn::set_bBanPhysicalMaterials(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleEventReceiverSpawn::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleEventReceiverSpawn");
    return result;
}
