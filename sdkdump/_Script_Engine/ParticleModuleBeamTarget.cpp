#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleBeamBase.hpp"
#include "ParticleModuleBeamTarget.hpp"
bool _Script_Engine::ParticleModuleBeamTarget::get_bLockTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x90 + 0)) & 2 != 0;
}
void* _Script_Engine::ParticleModuleBeamTarget::get_TargetMethod() {
    return (void*)((uintptr_t)this + 0x30);
}
void _Script_Engine::ParticleModuleBeamTarget::set_bLockTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x90 + 0);
    *(uint8_t*)((uintptr_t)this + 0x90 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::ParticleModuleBeamTarget::get_TargetName() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::ParticleModuleBeamTarget::get_Target() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_Engine::ParticleModuleBeamTarget::get_bTargetAbsolute() {
    return (*(uint8_t*)((uintptr_t)this + 0x90 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleBeamTarget::set_bTargetAbsolute(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x90 + 0);
    *(uint8_t*)((uintptr_t)this + 0x90 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ParticleModuleBeamTarget::get_TargetTangentMethod() {
    return (void*)((uintptr_t)this + 0x94);
}
void* _Script_Engine::ParticleModuleBeamTarget::get_TargetTangent() {
    return (void*)((uintptr_t)this + 0x98);
}
bool _Script_Engine::ParticleModuleBeamTarget::get_bLockTargetTangent() {
    return (*(uint8_t*)((uintptr_t)this + 0xe8 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleBeamTarget::set_bLockTargetTangent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ParticleModuleBeamTarget::get_TargetStrength() {
    return (void*)((uintptr_t)this + 0xf0);
}
bool _Script_Engine::ParticleModuleBeamTarget::get_bLockTargetStength() {
    return (*(uint8_t*)((uintptr_t)this + 0x128 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleBeamTarget::set_bLockTargetStength(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x128 + 0);
    *(uint8_t*)((uintptr_t)this + 0x128 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::ParticleModuleBeamTarget::get_LockRadius() {
    return *(float*)((uintptr_t)this + 0x12c);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleBeamTarget::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleBeamTarget");
    return result;
}
