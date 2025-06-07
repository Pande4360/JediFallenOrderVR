#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleTypeDataBase.hpp"
#include "ParticleModuleTypeDataRibbon.hpp"
int32_t& _Script_Engine::ParticleModuleTypeDataRibbon::get_MaxTessellationBetweenParticles() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
int32_t& _Script_Engine::ParticleModuleTypeDataRibbon::get_SheetsPerTrail() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
int32_t& _Script_Engine::ParticleModuleTypeDataRibbon::get_MaxTrailCount() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
void _Script_Engine::ParticleModuleTypeDataRibbon::set_bDeadTrailsOnSourceLoss(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::ParticleModuleTypeDataRibbon::get_bDeadTrailsOnDeactivate() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
int32_t& _Script_Engine::ParticleModuleTypeDataRibbon::get_MaxParticleInTrailCount() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
bool _Script_Engine::ParticleModuleTypeDataRibbon::get_bDeadTrailsOnSourceLoss() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 2 != 0;
}
void _Script_Engine::ParticleModuleTypeDataRibbon::set_bDeadTrailsOnDeactivate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleModuleTypeDataRibbon::get_bClipSourceSegement() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 4 != 0;
}
void _Script_Engine::ParticleModuleTypeDataRibbon::set_bClipSourceSegement(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::ParticleModuleTypeDataRibbon::get_bEnablePreviousTangentRecalculation() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 8 != 0;
}
void _Script_Engine::ParticleModuleTypeDataRibbon::set_bEnablePreviousTangentRecalculation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::ParticleModuleTypeDataRibbon::get_bTangentRecalculationEveryFrame() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 16 != 0;
}
void _Script_Engine::ParticleModuleTypeDataRibbon::set_bTangentRecalculationEveryFrame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::ParticleModuleTypeDataRibbon::get_bSpawnInitialParticle() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 32 != 0;
}
void _Script_Engine::ParticleModuleTypeDataRibbon::set_bSpawnInitialParticle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void* _Script_Engine::ParticleModuleTypeDataRibbon::get_RenderAxis() {
    return (void*)((uintptr_t)this + 0x44);
}
float& _Script_Engine::ParticleModuleTypeDataRibbon::get_TangentSpawningScalar() {
    return *(float*)((uintptr_t)this + 0x48);
}
bool _Script_Engine::ParticleModuleTypeDataRibbon::get_bRenderGeometry() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleTypeDataRibbon::set_bRenderGeometry(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleModuleTypeDataRibbon::get_bRenderSpawnPoints() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c + 0)) & 2 != 0;
}
void _Script_Engine::ParticleModuleTypeDataRibbon::set_bRenderSpawnPoints(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::ParticleModuleTypeDataRibbon::get_bRenderTangents() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c + 0)) & 4 != 0;
}
bool _Script_Engine::ParticleModuleTypeDataRibbon::get_bRenderTessellation() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c + 0)) & 8 != 0;
}
void _Script_Engine::ParticleModuleTypeDataRibbon::set_bRenderTangents(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::ParticleModuleTypeDataRibbon::set_bRenderTessellation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
float& _Script_Engine::ParticleModuleTypeDataRibbon::get_TilingDistance() {
    return *(float*)((uintptr_t)this + 0x50);
}
bool _Script_Engine::ParticleModuleTypeDataRibbon::get_bEnableTangentDiffInterpScale() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
float& _Script_Engine::ParticleModuleTypeDataRibbon::get_DistanceTessellationStepSize() {
    return *(float*)((uintptr_t)this + 0x54);
}
void _Script_Engine::ParticleModuleTypeDataRibbon::set_bEnableTangentDiffInterpScale(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::ParticleModuleTypeDataRibbon::get_TangentTessellationScalar() {
    return *(float*)((uintptr_t)this + 0x5c);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleTypeDataRibbon::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleTypeDataRibbon");
    return result;
}
