#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleLocationBase.hpp"
#include "ParticleModuleLocationPrimitiveBase.hpp"
void _Script_Engine::ParticleModuleLocationPrimitiveBase::set_Positive_Y(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::ParticleModuleLocationPrimitiveBase::get_Positive_X() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleLocationPrimitiveBase::set_Negative_X(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::ParticleModuleLocationPrimitiveBase::set_Positive_X(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleModuleLocationPrimitiveBase::get_Negative_X() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 8 != 0;
}
bool _Script_Engine::ParticleModuleLocationPrimitiveBase::get_Positive_Y() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 2 != 0;
}
bool _Script_Engine::ParticleModuleLocationPrimitiveBase::get_Positive_Z() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 4 != 0;
}
void _Script_Engine::ParticleModuleLocationPrimitiveBase::set_Positive_Z(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::ParticleModuleLocationPrimitiveBase::get_Negative_Y() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 16 != 0;
}
void _Script_Engine::ParticleModuleLocationPrimitiveBase::set_Negative_Y(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::ParticleModuleLocationPrimitiveBase::get_Negative_Z() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 32 != 0;
}
void _Script_Engine::ParticleModuleLocationPrimitiveBase::set_Negative_Z(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::ParticleModuleLocationPrimitiveBase::get_SurfaceOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 64 != 0;
}
void _Script_Engine::ParticleModuleLocationPrimitiveBase::set_SurfaceOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::ParticleModuleLocationPrimitiveBase::get_Velocity() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 128 != 0;
}
void _Script_Engine::ParticleModuleLocationPrimitiveBase::set_Velocity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void* _Script_Engine::ParticleModuleLocationPrimitiveBase::get_VelocityScale() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::ParticleModuleLocationPrimitiveBase::get_StartLocation() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleLocationPrimitiveBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleLocationPrimitiveBase");
    return result;
}
