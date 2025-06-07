#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleLocationBase.hpp"
#include "ParticleModuleLocationEmitter.hpp"
float& _Script_Engine::ParticleModuleLocationEmitter::get_InheritSourceRotationScale() {
    return *(float*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::ParticleModuleLocationEmitter::get_EmitterName() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::ParticleModuleLocationEmitter::get_SelectionMethod() {
    return (void*)((uintptr_t)this + 0x38);
}
bool _Script_Engine::ParticleModuleLocationEmitter::get_InheritSourceVelocity() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleLocationEmitter::set_InheritSourceVelocity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleModuleLocationEmitter::get_bInheritSourceRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 1 != 0;
}
float& _Script_Engine::ParticleModuleLocationEmitter::get_InheritSourceVelocityScale() {
    return *(float*)((uintptr_t)this + 0x40);
}
void _Script_Engine::ParticleModuleLocationEmitter::set_bInheritSourceRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleLocationEmitter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleLocationEmitter");
    return result;
}
