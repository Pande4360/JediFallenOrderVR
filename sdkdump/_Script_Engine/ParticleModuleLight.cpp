#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleLight.hpp"
#include "ParticleModuleLightBase.hpp"
void* _Script_Engine::ParticleModuleLight::get_ColorScaleOverLife() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_Engine::ParticleModuleLight::set_bAffectsTranslucency(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x31 + 0);
    *(uint8_t*)((uintptr_t)this + 0x31 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleModuleLight::get_bUseInverseSquaredFalloff() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void* _Script_Engine::ParticleModuleLight::get_LightingChannels() {
    return (void*)((uintptr_t)this + 0x130);
}
void _Script_Engine::ParticleModuleLight::set_bPreviewLightRadius(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x32 + 0);
    *(uint8_t*)((uintptr_t)this + 0x32 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::ParticleModuleLight::set_bUseInverseSquaredFalloff(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleModuleLight::get_bAffectsTranslucency() {
    return (*(uint8_t*)((uintptr_t)this + 0x31 + 0)) & 1 != 0;
}
bool _Script_Engine::ParticleModuleLight::get_bPreviewLightRadius() {
    return (*(uint8_t*)((uintptr_t)this + 0x32 + 0)) & 1 != 0;
}
float& _Script_Engine::ParticleModuleLight::get_SpawnFraction() {
    return *(float*)((uintptr_t)this + 0x34);
}
void* _Script_Engine::ParticleModuleLight::get_BrightnessOverLife() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_Engine::ParticleModuleLight::get_RadiusScale() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_Engine::ParticleModuleLight::get_LightExponent() {
    return (void*)((uintptr_t)this + 0xf8);
}
float& _Script_Engine::ParticleModuleLight::get_VolumetricScatteringIntensity() {
    return *(float*)((uintptr_t)this + 0x134);
}
bool _Script_Engine::ParticleModuleLight::get_bHighQualityLights() {
    return (*(uint8_t*)((uintptr_t)this + 0x138 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleLight::set_bHighQualityLights(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x138 + 0);
    *(uint8_t*)((uintptr_t)this + 0x138 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleModuleLight::get_bShadowCastingLights() {
    return (*(uint8_t*)((uintptr_t)this + 0x139 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleLight::set_bShadowCastingLights(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x139 + 0);
    *(uint8_t*)((uintptr_t)this + 0x139 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleLight::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleLight");
    return result;
}
