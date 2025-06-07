#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LightPropagationVolumeSettings.hpp"
bool _Script_Renderer::LightPropagationVolumeSettings::get_bOverride_LPVIntensity() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
bool _Script_Renderer::LightPropagationVolumeSettings::get_bOverride_LPVDirectionalOcclusionRadius() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 4 != 0;
}
bool _Script_Renderer::LightPropagationVolumeSettings::get_bOverride_LPVDirectionalOcclusionIntensity() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 2 != 0;
}
void _Script_Renderer::LightPropagationVolumeSettings::set_bOverride_LPVIntensity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Renderer::LightPropagationVolumeSettings::set_bOverride_LPVDirectionalOcclusionIntensity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Renderer::LightPropagationVolumeSettings::set_bOverride_LPVDiffuseOcclusionExponent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Renderer::LightPropagationVolumeSettings::set_bOverride_LPVDirectionalOcclusionRadius(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Renderer::LightPropagationVolumeSettings::get_bOverride_LPVDiffuseOcclusionExponent() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 8 != 0;
}
bool _Script_Renderer::LightPropagationVolumeSettings::get_bOverride_LPVSpecularOcclusionExponent() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 16 != 0;
}
void _Script_Renderer::LightPropagationVolumeSettings::set_bOverride_LPVSpecularOcclusionExponent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Renderer::LightPropagationVolumeSettings::get_bOverride_LPVDiffuseOcclusionIntensity() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 32 != 0;
}
void _Script_Renderer::LightPropagationVolumeSettings::set_bOverride_LPVDiffuseOcclusionIntensity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Renderer::LightPropagationVolumeSettings::get_bOverride_LPVSpecularOcclusionIntensity() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 64 != 0;
}
void _Script_Renderer::LightPropagationVolumeSettings::set_bOverride_LPVSpecularOcclusionIntensity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Renderer::LightPropagationVolumeSettings::get_bOverride_LPVSize() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 128 != 0;
}
void _Script_Renderer::LightPropagationVolumeSettings::set_bOverride_LPVSize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Renderer::LightPropagationVolumeSettings::get_bOverride_LPVSecondaryOcclusionIntensity() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
void _Script_Renderer::LightPropagationVolumeSettings::set_bOverride_LPVSecondaryOcclusionIntensity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Renderer::LightPropagationVolumeSettings::get_bOverride_LPVSecondaryBounceIntensity() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 2 != 0;
}
void _Script_Renderer::LightPropagationVolumeSettings::set_bOverride_LPVSecondaryBounceIntensity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Renderer::LightPropagationVolumeSettings::get_bOverride_LPVGeometryVolumeBias() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 4 != 0;
}
void _Script_Renderer::LightPropagationVolumeSettings::set_bOverride_LPVGeometryVolumeBias(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Renderer::LightPropagationVolumeSettings::get_bOverride_LPVVplInjectionBias() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 8 != 0;
}
void _Script_Renderer::LightPropagationVolumeSettings::set_bOverride_LPVVplInjectionBias(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Renderer::LightPropagationVolumeSettings::get_bOverride_LPVEmissiveInjectionIntensity() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 16 != 0;
}
void _Script_Renderer::LightPropagationVolumeSettings::set_bOverride_LPVEmissiveInjectionIntensity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
float& _Script_Renderer::LightPropagationVolumeSettings::get_LPVIntensity() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Renderer::LightPropagationVolumeSettings::get_LPVVplInjectionBias() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Renderer::LightPropagationVolumeSettings::get_LPVSize() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Renderer::LightPropagationVolumeSettings::get_LPVSecondaryOcclusionIntensity() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_Renderer::LightPropagationVolumeSettings::get_LPVSecondaryBounceIntensity() {
    return *(float*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_Renderer::LightPropagationVolumeSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Renderer.LightPropagationVolumeSettings");
    return result;
}
float& _Script_Renderer::LightPropagationVolumeSettings::get_LPVGeometryVolumeBias() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_Renderer::LightPropagationVolumeSettings::get_LPVEmissiveInjectionIntensity() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_Renderer::LightPropagationVolumeSettings::get_LPVDirectionalOcclusionIntensity() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Script_Renderer::LightPropagationVolumeSettings::get_LPVDirectionalOcclusionRadius() {
    return *(float*)((uintptr_t)this + 0x24);
}
float& _Script_Renderer::LightPropagationVolumeSettings::get_LPVDiffuseOcclusionExponent() {
    return *(float*)((uintptr_t)this + 0x28);
}
float& _Script_Renderer::LightPropagationVolumeSettings::get_LPVSpecularOcclusionExponent() {
    return *(float*)((uintptr_t)this + 0x2c);
}
float& _Script_Renderer::LightPropagationVolumeSettings::get_LPVDiffuseOcclusionIntensity() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_Renderer::LightPropagationVolumeSettings::get_LPVSpecularOcclusionIntensity() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_Renderer::LightPropagationVolumeSettings::get_LPVFadeRange() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_Renderer::LightPropagationVolumeSettings::get_LPVDirectionalOcclusionFadeRange() {
    return *(float*)((uintptr_t)this + 0x3c);
}
