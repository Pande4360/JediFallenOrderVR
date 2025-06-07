#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LightmassWorldInfoSettings.hpp"
void _Script_Engine::LightmassWorldInfoSettings::set_bVisualizeMaterialDiffuse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::LightmassWorldInfoSettings::get_StaticLightingLevelScale() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::LightmassWorldInfoSettings::get_IndirectLightingQuality() {
    return *(float*)((uintptr_t)this + 0xc);
}
int32_t& _Script_Engine::LightmassWorldInfoSettings::get_NumIndirectLightingBounces() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
int32_t& _Script_Engine::LightmassWorldInfoSettings::get_NumSkyLightingBounces() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::LightmassWorldInfoSettings::get_EnvironmentIntensity() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_Engine::LightmassWorldInfoSettings::get_IndirectLightingSmoothness() {
    return *(float*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::LightmassWorldInfoSettings::get_EnvironmentColor() {
    return (void*)((uintptr_t)this + 0x14);
}
float& _Script_Engine::LightmassWorldInfoSettings::get_EmissiveBoost() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_Engine::LightmassWorldInfoSettings::get_DiffuseBoost() {
    return *(float*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::LightmassWorldInfoSettings::get_VolumeLightingMethod() {
    return (void*)((uintptr_t)this + 0x24);
}
float& _Script_Engine::LightmassWorldInfoSettings::get_VolumetricLightmapDetailCellSize() {
    return *(float*)((uintptr_t)this + 0x28);
}
float& _Script_Engine::LightmassWorldInfoSettings::get_VolumetricLightmapMaximumBrickMemoryMb() {
    return *(float*)((uintptr_t)this + 0x2c);
}
float& _Script_Engine::LightmassWorldInfoSettings::get_VolumetricLightmapSphericalHarmonicSmoothing() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_Engine::LightmassWorldInfoSettings::get_VolumeLightSamplePlacementScale() {
    return *(float*)((uintptr_t)this + 0x34);
}
bool _Script_Engine::LightmassWorldInfoSettings::get_bUseAmbientOcclusion() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_Engine::LightmassWorldInfoSettings::set_bUseAmbientOcclusion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::LightmassWorldInfoSettings::get_bGenerateAmbientOcclusionMaterialMask() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 2 != 0;
}
void _Script_Engine::LightmassWorldInfoSettings::set_bGenerateAmbientOcclusionMaterialMask(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::LightmassWorldInfoSettings::get_DirectIlluminationOcclusionFraction() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_Engine::LightmassWorldInfoSettings::get_IndirectIlluminationOcclusionFraction() {
    return *(float*)((uintptr_t)this + 0x40);
}
float& _Script_Engine::LightmassWorldInfoSettings::get_OcclusionExponent() {
    return *(float*)((uintptr_t)this + 0x44);
}
float& _Script_Engine::LightmassWorldInfoSettings::get_FullyOccludedSamplesFraction() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_Engine::LightmassWorldInfoSettings::get_MaxOcclusionDistance() {
    return *(float*)((uintptr_t)this + 0x4c);
}
bool _Script_Engine::LightmassWorldInfoSettings::get_bVisualizeMaterialDiffuse() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
bool _Script_Engine::LightmassWorldInfoSettings::get_bVisualizeAmbientOcclusion() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 2 != 0;
}
void _Script_Engine::LightmassWorldInfoSettings::set_bVisualizeAmbientOcclusion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::LightmassWorldInfoSettings::get_bCompressLightmaps() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 4 != 0;
}
void _Script_Engine::LightmassWorldInfoSettings::set_bCompressLightmaps(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::LightmassWorldInfoSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.LightmassWorldInfoSettings");
    return result;
}
