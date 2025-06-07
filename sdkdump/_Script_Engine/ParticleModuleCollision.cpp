#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleCollision.hpp"
#include "ParticleModuleCollisionBase.hpp"
void* _Script_Engine::ParticleModuleCollision::get_CollisionTypes() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_Engine::ParticleModuleCollision::get_DampingFactor() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::ParticleModuleCollision::get_CollisionCompletionOption() {
    return (void*)((uintptr_t)this + 0x108);
}
void* _Script_Engine::ParticleModuleCollision::get_DampingFactorRotation() {
    return (void*)((uintptr_t)this + 0x80);
}
void _Script_Engine::ParticleModuleCollision::set_bApplyPhysics(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x128 + 0);
    *(uint8_t*)((uintptr_t)this + 0x128 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ParticleModuleCollision::get_MaxCollisions() {
    return (void*)((uintptr_t)this + 0xd0);
}
bool _Script_Engine::ParticleModuleCollision::get_bApplyPhysics() {
    return (*(uint8_t*)((uintptr_t)this + 0x128 + 0)) & 1 != 0;
}
bool _Script_Engine::ParticleModuleCollision::get_bIgnoreTriggerVolumes() {
    return (*(uint8_t*)((uintptr_t)this + 0x128 + 0)) & 2 != 0;
}
void _Script_Engine::ParticleModuleCollision::set_bIgnoreTriggerVolumes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x128 + 0);
    *(uint8_t*)((uintptr_t)this + 0x128 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::ParticleModuleCollision::get_ParticleMass() {
    return (void*)((uintptr_t)this + 0x130);
}
float& _Script_Engine::ParticleModuleCollision::get_DirScalar() {
    return *(float*)((uintptr_t)this + 0x168);
}
bool _Script_Engine::ParticleModuleCollision::get_bPawnsDoNotDecrementCount() {
    return (*(uint8_t*)((uintptr_t)this + 0x16c + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleCollision::set_bPawnsDoNotDecrementCount(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x16c + 0);
    *(uint8_t*)((uintptr_t)this + 0x16c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::ParticleModuleCollision::set_bOnlyVerticalNormalsDecrementCount(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x16c + 0);
    *(uint8_t*)((uintptr_t)this + 0x16c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::ParticleModuleCollision::get_bOnlyVerticalNormalsDecrementCount() {
    return (*(uint8_t*)((uintptr_t)this + 0x16c + 0)) & 2 != 0;
}
float& _Script_Engine::ParticleModuleCollision::get_VerticalFudgeFactor() {
    return *(float*)((uintptr_t)this + 0x170);
}
void* _Script_Engine::ParticleModuleCollision::get_DelayAmount() {
    return (void*)((uintptr_t)this + 0x178);
}
bool _Script_Engine::ParticleModuleCollision::get_bDropDetail() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b0 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleCollision::set_bDropDetail(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::ParticleModuleCollision::set_bCollideOnlyIfVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::ParticleModuleCollision::get_bCollideOnlyIfVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b0 + 0)) & 2 != 0;
}
bool _Script_Engine::ParticleModuleCollision::get_bIgnoreSourceActor() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b0 + 0)) & 4 != 0;
}
void _Script_Engine::ParticleModuleCollision::set_bIgnoreSourceActor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleCollision::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleCollision");
    return result;
}
float& _Script_Engine::ParticleModuleCollision::get_MaxCollisionDistance() {
    return *(float*)((uintptr_t)this + 0x1b4);
}
