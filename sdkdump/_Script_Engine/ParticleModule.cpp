#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "ParticleModule.hpp"
bool _Script_Engine::ParticleModule::get_bSpawnModule() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModule::set_bUpdateModule(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::ParticleModule::get_bUpdateModule() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 2 != 0;
}
void _Script_Engine::ParticleModule::set_bSpawnModule(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::ParticleModule::set_bFinalUpdateModule(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::ParticleModule::get_bFinalUpdateModule() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 4 != 0;
}
bool _Script_Engine::ParticleModule::get_bUpdateForGPUEmitter() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 8 != 0;
}
void _Script_Engine::ParticleModule::set_bUpdateForGPUEmitter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::ParticleModule::get_bCurvesAsColor() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 16 != 0;
}
void _Script_Engine::ParticleModule::set_bCurvesAsColor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::ParticleModule::get_b3DDrawMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 32 != 0;
}
void _Script_Engine::ParticleModule::set_b3DDrawMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::ParticleModule::get_bSupported3DDrawMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 64 != 0;
}
void _Script_Engine::ParticleModule::set_bSupported3DDrawMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::ParticleModule::set_bEditable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29 + 0);
    *(uint8_t*)((uintptr_t)this + 0x29 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleModule::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 128 != 0;
}
void _Script_Engine::ParticleModule::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::ParticleModule::get_bEditable() {
    return (*(uint8_t*)((uintptr_t)this + 0x29 + 0)) & 1 != 0;
}
bool _Script_Engine::ParticleModule::get_LODDuplicate() {
    return (*(uint8_t*)((uintptr_t)this + 0x29 + 0)) & 2 != 0;
}
void _Script_Engine::ParticleModule::set_LODDuplicate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29 + 0);
    *(uint8_t*)((uintptr_t)this + 0x29 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::ParticleModule::get_bSupportsRandomSeed() {
    return (*(uint8_t*)((uintptr_t)this + 0x29 + 0)) & 4 != 0;
}
void _Script_Engine::ParticleModule::set_bSupportsRandomSeed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29 + 0);
    *(uint8_t*)((uintptr_t)this + 0x29 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::ParticleModule::get_bRequiresLoopingNotification() {
    return (*(uint8_t*)((uintptr_t)this + 0x29 + 0)) & 8 != 0;
}
void _Script_Engine::ParticleModule::set_bRequiresLoopingNotification(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29 + 0);
    *(uint8_t*)((uintptr_t)this + 0x29 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_Engine::ParticleModule::get_LODValidity() {
    return (void*)((uintptr_t)this + 0x2c);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModule::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModule");
    return result;
}
