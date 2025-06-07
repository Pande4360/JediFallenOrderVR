#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Color.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "ExponentialHeightFogComponent.hpp"
#include "SceneComponent.hpp"
#include "TextureCube.hpp"
float& _Script_Engine::ExponentialHeightFogComponent::get_NonDirectionalInscatteringColorDistance() {
    return *(float*)((uintptr_t)this + 0x300);
}
void _Script_Engine::ExponentialHeightFogComponent::SetVolumetricFogAlbedo(_Script_CoreUObject::Color NewValue) {
    return;
}
_Script_Engine::TextureCube*& _Script_Engine::ExponentialHeightFogComponent::get_InscatteringColorCubemap() {
    return *(_Script_Engine::TextureCube**)((uintptr_t)this + 0x2e0);
}
float& _Script_Engine::ExponentialHeightFogComponent::get_FogDensity() {
    return *(float*)((uintptr_t)this + 0x2c8);
}
float& _Script_Engine::ExponentialHeightFogComponent::get_VolumetricFogDistance() {
    return *(float*)((uintptr_t)this + 0x34c);
}
void* _Script_Engine::ExponentialHeightFogComponent::get_FogInscatteringColor() {
    return (void*)((uintptr_t)this + 0x2cc);
}
void _Script_Engine::ExponentialHeightFogComponent::SetDirectionalInscatteringColor(_Script_CoreUObject::LinearColor Value) {
    return;
}
float& _Script_Engine::ExponentialHeightFogComponent::get_InscatteringColorCubemapAngle() {
    return *(float*)((uintptr_t)this + 0x2e8);
}
void _Script_Engine::ExponentialHeightFogComponent::SetFogCutoffDistance(float Value) {
    return;
}
void* _Script_Engine::ExponentialHeightFogComponent::get_InscatteringTextureTint() {
    return (void*)((uintptr_t)this + 0x2ec);
}
float& _Script_Engine::ExponentialHeightFogComponent::get_DirectionalInscatteringExponent() {
    return *(float*)((uintptr_t)this + 0x304);
}
void _Script_Engine::ExponentialHeightFogComponent::SetFullyDirectionalInscatteringColorDistance(float Value) {
    return;
}
float& _Script_Engine::ExponentialHeightFogComponent::get_FullyDirectionalInscatteringColorDistance() {
    return *(float*)((uintptr_t)this + 0x2fc);
}
_Script_CoreUObject::Class* _Script_Engine::ExponentialHeightFogComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ExponentialHeightFogComponent");
    return result;
}
float& _Script_Engine::ExponentialHeightFogComponent::get_DirectionalInscatteringStartDistance() {
    return *(float*)((uintptr_t)this + 0x308);
}
float& _Script_Engine::ExponentialHeightFogComponent::get_VolumetricFogExtinctionScale() {
    return *(float*)((uintptr_t)this + 0x348);
}
void* _Script_Engine::ExponentialHeightFogComponent::get_DirectionalInscatteringColor() {
    return (void*)((uintptr_t)this + 0x30c);
}
float& _Script_Engine::ExponentialHeightFogComponent::get_FogHeightFalloff() {
    return *(float*)((uintptr_t)this + 0x31c);
}
void _Script_Engine::ExponentialHeightFogComponent::SetInscatteringColorCubemapAngle(float Value) {
    return;
}
float& _Script_Engine::ExponentialHeightFogComponent::get_FogMaxOpacity() {
    return *(float*)((uintptr_t)this + 0x320);
}
float& _Script_Engine::ExponentialHeightFogComponent::get_StartDistance() {
    return *(float*)((uintptr_t)this + 0x324);
}
float& _Script_Engine::ExponentialHeightFogComponent::get_FogCutoffDistance() {
    return *(float*)((uintptr_t)this + 0x328);
}
bool _Script_Engine::ExponentialHeightFogComponent::get_bEnableVolumetricFog() {
    return (*(uint8_t*)((uintptr_t)this + 0x32c + 0)) & 1 != 0;
}
void _Script_Engine::ExponentialHeightFogComponent::set_bEnableVolumetricFog(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x32c + 0);
    *(uint8_t*)((uintptr_t)this + 0x32c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::ExponentialHeightFogComponent::get_VolumetricFogStaticLightingScatteringIntensity() {
    return *(float*)((uintptr_t)this + 0x350);
}
float& _Script_Engine::ExponentialHeightFogComponent::get_VolumetricFogScatteringDistribution() {
    return *(float*)((uintptr_t)this + 0x330);
}
void* _Script_Engine::ExponentialHeightFogComponent::get_VolumetricFogAlbedo() {
    return (void*)((uintptr_t)this + 0x334);
}
void* _Script_Engine::ExponentialHeightFogComponent::get_VolumetricFogEmissive() {
    return (void*)((uintptr_t)this + 0x338);
}
bool _Script_Engine::ExponentialHeightFogComponent::get_bOverrideLightColorsWithFogInscatteringColors() {
    return (*(uint8_t*)((uintptr_t)this + 0x354 + 0)) & 1 != 0;
}
void _Script_Engine::ExponentialHeightFogComponent::set_bOverrideLightColorsWithFogInscatteringColors(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x354 + 0);
    *(uint8_t*)((uintptr_t)this + 0x354 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::ExponentialHeightFogComponent::SetVolumetricFogScatteringDistribution(float NewValue) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetVolumetricFogExtinctionScale(float NewValue) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetVolumetricFogEmissive(_Script_CoreUObject::LinearColor NewValue) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetVolumetricFogDistance(float NewValue) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetVolumetricFog(bool bNewValue) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetStartDistance(float Value) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetNonDirectionalInscatteringColorDistance(float Value) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetInscatteringTextureTint(_Script_CoreUObject::LinearColor Value) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetInscatteringColorCubemap(_Script_Engine::TextureCube* Value) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetFogMaxOpacity(float Value) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetFogInscatteringColor(_Script_CoreUObject::LinearColor Value) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetFogHeightFalloff(float Value) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetFogDensity(float Value) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetDirectionalInscatteringStartDistance(float Value) {
    return;
}
void _Script_Engine::ExponentialHeightFogComponent::SetDirectionalInscatteringExponent(float Value) {
    return;
}
