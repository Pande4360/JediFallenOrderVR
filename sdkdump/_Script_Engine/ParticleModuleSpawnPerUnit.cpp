#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleSpawnBase.hpp"
#include "ParticleModuleSpawnPerUnit.hpp"
bool _Script_Engine::ParticleModuleSpawnPerUnit::get_bIgnoreSpawnRateWhenMoving() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 1 != 0;
}
float& _Script_Engine::ParticleModuleSpawnPerUnit::get_UnitScalar() {
    return *(float*)((uintptr_t)this + 0x38);
}
bool _Script_Engine::ParticleModuleSpawnPerUnit::get_bIgnoreMovementAlongX() {
    return (*(uint8_t*)((uintptr_t)this + 0x84 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleSpawnPerUnit::set_bIgnoreSpawnRateWhenMoving(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ParticleModuleSpawnPerUnit::get_SpawnPerUnit() {
    return (void*)((uintptr_t)this + 0x40);
}
void _Script_Engine::ParticleModuleSpawnPerUnit::set_bIgnoreMovementAlongX(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84 + 0);
    *(uint8_t*)((uintptr_t)this + 0x84 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::ParticleModuleSpawnPerUnit::get_MovementTolerance() {
    return *(float*)((uintptr_t)this + 0x7c);
}
float& _Script_Engine::ParticleModuleSpawnPerUnit::get_MaxFrameDistance() {
    return *(float*)((uintptr_t)this + 0x80);
}
bool _Script_Engine::ParticleModuleSpawnPerUnit::get_bIgnoreMovementAlongY() {
    return (*(uint8_t*)((uintptr_t)this + 0x84 + 0)) & 2 != 0;
}
void _Script_Engine::ParticleModuleSpawnPerUnit::set_bIgnoreMovementAlongY(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84 + 0);
    *(uint8_t*)((uintptr_t)this + 0x84 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::ParticleModuleSpawnPerUnit::get_bIgnoreMovementAlongZ() {
    return (*(uint8_t*)((uintptr_t)this + 0x84 + 0)) & 4 != 0;
}
void _Script_Engine::ParticleModuleSpawnPerUnit::set_bIgnoreMovementAlongZ(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84 + 0);
    *(uint8_t*)((uintptr_t)this + 0x84 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleSpawnPerUnit::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleSpawnPerUnit");
    return result;
}
