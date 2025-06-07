#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialInterface.hpp"
#include "ParticleModule.hpp"
#include "ParticleModuleRequired.hpp"
#include "Texture2D.hpp"
_Script_Engine::MaterialInterface*& _Script_Engine::ParticleModuleRequired::get_Material() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x30);
}
float& _Script_Engine::ParticleModuleRequired::get_MaxFacingCameraBlendDistance() {
    return *(float*)((uintptr_t)this + 0x58);
}
void _Script_Engine::ParticleModuleRequired::set_bRemoveHMDRoll(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x64 + 0);
    *(uint8_t*)((uintptr_t)this + 0x64 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::ParticleModuleRequired::get_EmitterOrigin() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_Engine::ParticleModuleRequired::set_bScaleUV(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ParticleModuleRequired::get_EmitterRotation() {
    return (void*)((uintptr_t)this + 0x44);
}
bool _Script_Engine::ParticleModuleRequired::get_bKillOnDeactivate() {
    return (*(uint8_t*)((uintptr_t)this + 0x5c + 0)) & 2 != 0;
}
float& _Script_Engine::ParticleModuleRequired::get_MinFacingCameraBlendDistance() {
    return *(float*)((uintptr_t)this + 0x54);
}
void* _Script_Engine::ParticleModuleRequired::get_ParticleBurstMethod() {
    return (void*)((uintptr_t)this + 0xb0);
}
bool _Script_Engine::ParticleModuleRequired::get_bUseLegacyEmitterTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x64 + 0)) & 1 != 0;
}
void* _Script_Engine::ParticleModuleRequired::get_ScreenAlignment() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Engine::ParticleModuleRequired::get_NormalsSphereCenter() {
    return (void*)((uintptr_t)this + 0x124);
}
bool _Script_Engine::ParticleModuleRequired::get_bUseLocalSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x5c + 0)) & 1 != 0;
}
bool _Script_Engine::ParticleModuleRequired::get_bScaleUV() {
    return (*(uint8_t*)((uintptr_t)this + 0xe0 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleRequired::set_bUseLocalSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5c + 0);
    *(uint8_t*)((uintptr_t)this + 0x5c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::ParticleModuleRequired::get_EmitterDelayLow() {
    return *(float*)((uintptr_t)this + 0xcc);
}
void _Script_Engine::ParticleModuleRequired::set_bKillOnDeactivate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5c + 0);
    *(uint8_t*)((uintptr_t)this + 0x5c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::ParticleModuleRequired::get_bKillOnCompleted() {
    return (*(uint8_t*)((uintptr_t)this + 0x5c + 0)) & 4 != 0;
}
_Script_Engine::Texture2D*& _Script_Engine::ParticleModuleRequired::get_CutoutTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x110);
}
void _Script_Engine::ParticleModuleRequired::set_bKillOnCompleted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5c + 0);
    *(uint8_t*)((uintptr_t)this + 0x5c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Engine::ParticleModuleRequired::get_SortMode() {
    return (void*)((uintptr_t)this + 0x60);
}
void _Script_Engine::ParticleModuleRequired::set_bUseLegacyEmitterTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x64 + 0);
    *(uint8_t*)((uintptr_t)this + 0x64 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::ParticleModuleRequired::set_bDelayFirstLoopOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::ParticleModuleRequired::get_bRemoveHMDRoll() {
    return (*(uint8_t*)((uintptr_t)this + 0x64 + 0)) & 2 != 0;
}
float& _Script_Engine::ParticleModuleRequired::get_EmitterDuration() {
    return *(float*)((uintptr_t)this + 0x68);
}
float& _Script_Engine::ParticleModuleRequired::get_EmitterDurationLow() {
    return *(float*)((uintptr_t)this + 0x6c);
}
bool _Script_Engine::ParticleModuleRequired::get_bEmitterDurationUseRange() {
    return (*(uint8_t*)((uintptr_t)this + 0x70 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleRequired::set_bEmitterDurationUseRange(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x70 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::ParticleModuleRequired::set_bUseMaxDrawCount(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x100 + 0);
    *(uint8_t*)((uintptr_t)this + 0x100 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleModuleRequired::get_bDurationRecalcEachLoop() {
    return (*(uint8_t*)((uintptr_t)this + 0x70 + 0)) & 2 != 0;
}
void _Script_Engine::ParticleModuleRequired::set_bDurationRecalcEachLoop(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x70 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::ParticleModuleRequired::set_bOrbitModuleAffectsVelocityAlignment(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x13c + 0);
    *(uint8_t*)((uintptr_t)this + 0x13c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::ParticleModuleRequired::get_EmitterLoops() {
    return *(int32_t*)((uintptr_t)this + 0x74);
}
void* _Script_Engine::ParticleModuleRequired::get_SpawnRate() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_Engine::ParticleModuleRequired::get_BurstList() {
    return (void*)((uintptr_t)this + 0xb8);
}
float& _Script_Engine::ParticleModuleRequired::get_EmitterDelay() {
    return *(float*)((uintptr_t)this + 0xc8);
}
bool _Script_Engine::ParticleModuleRequired::get_bEmitterDelayUseRange() {
    return (*(uint8_t*)((uintptr_t)this + 0xd0 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleRequired::set_bEmitterDelayUseRange(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleModuleRequired::get_bDelayFirstLoopOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0xd0 + 0)) & 2 != 0;
}
void* _Script_Engine::ParticleModuleRequired::get_NamedMaterialOverrides() {
    return (void*)((uintptr_t)this + 0x140);
}
void* _Script_Engine::ParticleModuleRequired::get_InterpolationMethod() {
    return (void*)((uintptr_t)this + 0xd4);
}
int32_t& _Script_Engine::ParticleModuleRequired::get_SubImages_Horizontal() {
    return *(int32_t*)((uintptr_t)this + 0xd8);
}
int32_t& _Script_Engine::ParticleModuleRequired::get_SubImages_Vertical() {
    return *(int32_t*)((uintptr_t)this + 0xdc);
}
float& _Script_Engine::ParticleModuleRequired::get_RandomImageTime() {
    return *(float*)((uintptr_t)this + 0xe4);
}
int32_t& _Script_Engine::ParticleModuleRequired::get_RandomImageChanges() {
    return *(int32_t*)((uintptr_t)this + 0xe8);
}
bool _Script_Engine::ParticleModuleRequired::get_bOverrideSystemMacroUV() {
    return (*(uint8_t*)((uintptr_t)this + 0xec + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleRequired::set_bOverrideSystemMacroUV(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xec + 0);
    *(uint8_t*)((uintptr_t)this + 0xec + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ParticleModuleRequired::get_MacroUVPosition() {
    return (void*)((uintptr_t)this + 0xf0);
}
float& _Script_Engine::ParticleModuleRequired::get_MacroUVRadius() {
    return *(float*)((uintptr_t)this + 0xfc);
}
bool _Script_Engine::ParticleModuleRequired::get_bUseMaxDrawCount() {
    return (*(uint8_t*)((uintptr_t)this + 0x100 + 0)) & 1 != 0;
}
int32_t& _Script_Engine::ParticleModuleRequired::get_MaxDrawCount() {
    return *(int32_t*)((uintptr_t)this + 0x104);
}
void* _Script_Engine::ParticleModuleRequired::get_UVFlippingMode() {
    return (void*)((uintptr_t)this + 0x108);
}
float& _Script_Engine::ParticleModuleRequired::get_AlphaThreshold() {
    return *(float*)((uintptr_t)this + 0x11c);
}
void* _Script_Engine::ParticleModuleRequired::get_BoundingMode() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_Engine::ParticleModuleRequired::get_OpacitySourceMode() {
    return (void*)((uintptr_t)this + 0x119);
}
void* _Script_Engine::ParticleModuleRequired::get_EmitterNormalsMode() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_Engine::ParticleModuleRequired::get_NormalsCylinderDirection() {
    return (void*)((uintptr_t)this + 0x130);
}
bool _Script_Engine::ParticleModuleRequired::get_bOrbitModuleAffectsVelocityAlignment() {
    return (*(uint8_t*)((uintptr_t)this + 0x13c + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleRequired::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleRequired");
    return result;
}
