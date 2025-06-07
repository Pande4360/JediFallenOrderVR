#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleAttractorBase.hpp"
#include "ParticleModuleAttractorPoint.hpp"
void _Script_Engine::ParticleModuleAttractorPoint::set_StrengthByDistance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ParticleModuleAttractorPoint::get_Range() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_Engine::ParticleModuleAttractorPoint::get_Position() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::ParticleModuleAttractorPoint::get_Strength() {
    return (void*)((uintptr_t)this + 0xb8);
}
bool _Script_Engine::ParticleModuleAttractorPoint::get_bOverrideVelocity() {
    return (*(uint8_t*)((uintptr_t)this + 0xf0 + 0)) & 4 != 0;
}
bool _Script_Engine::ParticleModuleAttractorPoint::get_StrengthByDistance() {
    return (*(uint8_t*)((uintptr_t)this + 0xf0 + 0)) & 1 != 0;
}
bool _Script_Engine::ParticleModuleAttractorPoint::get_bAffectBaseVelocity() {
    return (*(uint8_t*)((uintptr_t)this + 0xf0 + 0)) & 2 != 0;
}
void _Script_Engine::ParticleModuleAttractorPoint::set_bAffectBaseVelocity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::ParticleModuleAttractorPoint::set_bOverrideVelocity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::ParticleModuleAttractorPoint::get_bUseWorldSpacePosition() {
    return (*(uint8_t*)((uintptr_t)this + 0xf0 + 0)) & 8 != 0;
}
void _Script_Engine::ParticleModuleAttractorPoint::set_bUseWorldSpacePosition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::ParticleModuleAttractorPoint::get_Positive_X() {
    return (*(uint8_t*)((uintptr_t)this + 0xf0 + 0)) & 16 != 0;
}
void _Script_Engine::ParticleModuleAttractorPoint::set_Positive_X(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf0 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::ParticleModuleAttractorPoint::get_Positive_Y() {
    return (*(uint8_t*)((uintptr_t)this + 0xf0 + 0)) & 32 != 0;
}
void _Script_Engine::ParticleModuleAttractorPoint::set_Positive_Y(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf0 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::ParticleModuleAttractorPoint::get_Positive_Z() {
    return (*(uint8_t*)((uintptr_t)this + 0xf0 + 0)) & 64 != 0;
}
void _Script_Engine::ParticleModuleAttractorPoint::set_Positive_Z(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf0 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::ParticleModuleAttractorPoint::get_Negative_X() {
    return (*(uint8_t*)((uintptr_t)this + 0xf0 + 0)) & 128 != 0;
}
void _Script_Engine::ParticleModuleAttractorPoint::set_Negative_X(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf0 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::ParticleModuleAttractorPoint::get_Negative_Y() {
    return (*(uint8_t*)((uintptr_t)this + 0xf1 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleAttractorPoint::set_Negative_Y(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleModuleAttractorPoint::get_Negative_Z() {
    return (*(uint8_t*)((uintptr_t)this + 0xf1 + 0)) & 2 != 0;
}
void _Script_Engine::ParticleModuleAttractorPoint::set_Negative_Z(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf1 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleAttractorPoint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleAttractorPoint");
    return result;
}
