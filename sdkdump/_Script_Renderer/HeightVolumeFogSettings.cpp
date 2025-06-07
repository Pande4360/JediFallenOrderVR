#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TextureCube.hpp"
#include "HeightVolumeFogSettings.hpp"
bool _Script_Renderer::HeightVolumeFogSettings::get_bOverride_FogEnable() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
bool _Script_Renderer::HeightVolumeFogSettings::get_bOverride_FogDensity() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 4 != 0;
}
void _Script_Renderer::HeightVolumeFogSettings::set_bOverride_FogEnable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Renderer::HeightVolumeFogSettings::get_FogHeightFalloff() {
    return *(float*)((uintptr_t)this + 0x5c);
}
void _Script_Renderer::HeightVolumeFogSettings::set_bOverride_FogInscatteringColor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Renderer::HeightVolumeFogSettings::get_bOverride_FogMaxOpacity() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 32 != 0;
}
bool _Script_Renderer::HeightVolumeFogSettings::get_bOverride_FogHeight() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 2 != 0;
}
void _Script_Renderer::HeightVolumeFogSettings::set_bOverride_FogNonDirectionalInscatteringColorDistance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Renderer::HeightVolumeFogSettings::set_bOverride_FogInscatteringColorCubemapAngle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void _Script_Renderer::HeightVolumeFogSettings::set_bOverride_FogHeight(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_CoreUObject::Class* _Script_Renderer::HeightVolumeFogSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Renderer.HeightVolumeFogSettings");
    return result;
}
void _Script_Renderer::HeightVolumeFogSettings::set_bOverride_FogDensity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Renderer::HeightVolumeFogSettings::get_bOverride_VolumetricFogEnable() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 1 != 0;
}
bool _Script_Renderer::HeightVolumeFogSettings::get_bOverride_FogInscatteringColor() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 8 != 0;
}
float& _Script_Renderer::HeightVolumeFogSettings::get_FogStartDistance() {
    return *(float*)((uintptr_t)this + 0x64);
}
bool _Script_Renderer::HeightVolumeFogSettings::get_bOverride_FogInscatteringColorCubemap() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 16 != 0;
}
float& _Script_Renderer::HeightVolumeFogSettings::get_FogDirectionalInscatteringExponent() {
    return *(float*)((uintptr_t)this + 0x44);
}
void _Script_Renderer::HeightVolumeFogSettings::set_bOverride_FogInscatteringColorCubemap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_Renderer::HeightVolumeFogSettings::set_bOverride_VolumetricFogScatteringDistribution(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Renderer::HeightVolumeFogSettings::get_bOverride_FogInscatteringColorCubemapAngle() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 32 != 0;
}
void* _Script_Renderer::HeightVolumeFogSettings::get_VolumetricFogAlbedo() {
    return (void*)((uintptr_t)this + 0x74);
}
bool _Script_Renderer::HeightVolumeFogSettings::get_bOverride_FogInscatteringTextureTint() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 64 != 0;
}
void _Script_Renderer::HeightVolumeFogSettings::set_bOverride_FogInscatteringTextureTint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Renderer::HeightVolumeFogSettings::get_bOverride_FogFullyDirectionalInscatteringColorDistance() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 128 != 0;
}
void _Script_Renderer::HeightVolumeFogSettings::set_bOverride_FogFullyDirectionalInscatteringColorDistance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Renderer::HeightVolumeFogSettings::get_bOverride_FogNonDirectionalInscatteringColorDistance() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
bool _Script_Renderer::HeightVolumeFogSettings::get_bOverride_FogDirectionalInscatteringExponent() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 2 != 0;
}
void _Script_Renderer::HeightVolumeFogSettings::set_bOverride_FogDirectionalInscatteringColor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Renderer::HeightVolumeFogSettings::set_bOverride_FogDirectionalInscatteringExponent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Renderer::HeightVolumeFogSettings::get_bOverride_FogDirectionalInscatteringStartDistance() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 4 != 0;
}
void _Script_Renderer::HeightVolumeFogSettings::set_bOverride_FogDirectionalInscatteringStartDistance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Renderer::HeightVolumeFogSettings::get_bOverride_FogDirectionalInscatteringColor() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 8 != 0;
}
float& _Script_Renderer::HeightVolumeFogSettings::get_FogMaxOpacity() {
    return *(float*)((uintptr_t)this + 0x60);
}
bool _Script_Renderer::HeightVolumeFogSettings::get_bOverride_FogHeightFalloff() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 16 != 0;
}
void _Script_Renderer::HeightVolumeFogSettings::set_bOverride_FogHeightFalloff(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_Renderer::HeightVolumeFogSettings::set_bOverride_FogMaxOpacity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Renderer::HeightVolumeFogSettings::get_bOverride_FogStartDistance() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 64 != 0;
}
void _Script_Renderer::HeightVolumeFogSettings::set_bOverride_FogStartDistance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Renderer::HeightVolumeFogSettings::get_bOverride_FogCutoffDistance() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 128 != 0;
}
void _Script_Renderer::HeightVolumeFogSettings::set_bOverride_FogCutoffDistance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_Renderer::HeightVolumeFogSettings::set_bOverride_VolumetricFogEnable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Renderer::HeightVolumeFogSettings::get_bOverride_VolumetricFogScatteringDistribution() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 2 != 0;
}
bool _Script_Renderer::HeightVolumeFogSettings::get_bOverride_VolumetricFogAlbedo() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 4 != 0;
}
void _Script_Renderer::HeightVolumeFogSettings::set_bOverride_VolumetricFogAlbedo(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Renderer::HeightVolumeFogSettings::get_bOverride_VolumetricFogEmissive() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 8 != 0;
}
void _Script_Renderer::HeightVolumeFogSettings::set_bOverride_VolumetricFogEmissive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Renderer::HeightVolumeFogSettings::get_bOverride_VolumetricFogExtinctionScale() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 16 != 0;
}
bool _Script_Renderer::HeightVolumeFogSettings::get_bOverride_VolumetricFogOverrideLightColorsWithFogInscatteringColors() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 128 != 0;
}
void _Script_Renderer::HeightVolumeFogSettings::set_bOverride_VolumetricFogExtinctionScale(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Renderer::HeightVolumeFogSettings::get_bOverride_VolumetricFogDistance() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 32 != 0;
}
void _Script_Renderer::HeightVolumeFogSettings::set_bOverride_VolumetricFogDistance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Renderer::HeightVolumeFogSettings::get_bOverride_VolumetricFogStaticLightingScatteringIntensity() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 64 != 0;
}
void _Script_Renderer::HeightVolumeFogSettings::set_bOverride_VolumetricFogStaticLightingScatteringIntensity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Renderer::HeightVolumeFogSettings::set_bOverride_VolumetricFogOverrideLightColorsWithFogInscatteringColors(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Renderer::HeightVolumeFogSettings::get_bFogEnable() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 1 != 0;
}
void _Script_Renderer::HeightVolumeFogSettings::set_bFogEnable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Renderer::HeightVolumeFogSettings::get_FogHeight() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Renderer::HeightVolumeFogSettings::get_FogDensity() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_Renderer::HeightVolumeFogSettings::get_FogInscatteringColor() {
    return (void*)((uintptr_t)this + 0xc);
}
_Script_Engine::TextureCube*& _Script_Renderer::HeightVolumeFogSettings::get_FogInscatteringColorCubemap() {
    return *(_Script_Engine::TextureCube**)((uintptr_t)this + 0x20);
}
float& _Script_Renderer::HeightVolumeFogSettings::get_FogInscatteringColorCubemapAngle() {
    return *(float*)((uintptr_t)this + 0x28);
}
float& _Script_Renderer::HeightVolumeFogSettings::get_FogDirectionalInscatteringStartDistance() {
    return *(float*)((uintptr_t)this + 0x48);
}
void* _Script_Renderer::HeightVolumeFogSettings::get_FogInscatteringTextureTint() {
    return (void*)((uintptr_t)this + 0x2c);
}
float& _Script_Renderer::HeightVolumeFogSettings::get_FogFullyDirectionalInscatteringColorDistance() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_Renderer::HeightVolumeFogSettings::get_FogNonDirectionalInscatteringColorDistance() {
    return *(float*)((uintptr_t)this + 0x40);
}
void* _Script_Renderer::HeightVolumeFogSettings::get_FogDirectionalInscatteringColor() {
    return (void*)((uintptr_t)this + 0x4c);
}
float& _Script_Renderer::HeightVolumeFogSettings::get_FogCutoffDistance() {
    return *(float*)((uintptr_t)this + 0x68);
}
bool _Script_Renderer::HeightVolumeFogSettings::get_bVolumetricFogEnable() {
    return (*(uint8_t*)((uintptr_t)this + 0x6c + 0)) & 1 != 0;
}
void _Script_Renderer::HeightVolumeFogSettings::set_bVolumetricFogEnable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6c + 0);
    *(uint8_t*)((uintptr_t)this + 0x6c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Renderer::HeightVolumeFogSettings::get_VolumetricFogScatteringDistribution() {
    return *(float*)((uintptr_t)this + 0x70);
}
void* _Script_Renderer::HeightVolumeFogSettings::get_VolumetricFogEmissive() {
    return (void*)((uintptr_t)this + 0x84);
}
float& _Script_Renderer::HeightVolumeFogSettings::get_VolumetricFogExtinctionScale() {
    return *(float*)((uintptr_t)this + 0x94);
}
float& _Script_Renderer::HeightVolumeFogSettings::get_VolumetricFogDistance() {
    return *(float*)((uintptr_t)this + 0x98);
}
float& _Script_Renderer::HeightVolumeFogSettings::get_VolumetricFogStaticLightingScatteringIntensity() {
    return *(float*)((uintptr_t)this + 0x9c);
}
bool _Script_Renderer::HeightVolumeFogSettings::get_bVolumetricFogOverrideLightColorsWithFogInscatteringColors() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 1 != 0;
}
void _Script_Renderer::HeightVolumeFogSettings::set_bVolumetricFogOverrideLightColorsWithFogInscatteringColors(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
