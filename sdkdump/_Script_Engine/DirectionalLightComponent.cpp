#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "DirectionalLightComponent.hpp"
#include "LightComponent.hpp"
void _Script_Engine::DirectionalLightComponent::SetEnableLightShaftOcclusion(bool bNewValue) {
    return;
}
bool _Script_Engine::DirectionalLightComponent::get_bEnableLightShaftOcclusion() {
    return (*(uint8_t*)((uintptr_t)this + 0x400 + 0)) & 1 != 0;
}
void _Script_Engine::DirectionalLightComponent::set_bEnableLightShaftOcclusion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x400 + 0);
    *(uint8_t*)((uintptr_t)this + 0x400 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::DirectionalLightComponent::get_DynamicShadowDistanceStationaryLight() {
    return *(float*)((uintptr_t)this + 0x420);
}
float& _Script_Engine::DirectionalLightComponent::get_OcclusionDepthRange() {
    return *(float*)((uintptr_t)this + 0x408);
}
float& _Script_Engine::DirectionalLightComponent::get_OcclusionMaskDarkness() {
    return *(float*)((uintptr_t)this + 0x404);
}
float& _Script_Engine::DirectionalLightComponent::get_WholeSceneDynamicShadowRadius() {
    return *(float*)((uintptr_t)this + 0x418);
}
void _Script_Engine::DirectionalLightComponent::SetLightShaftOverrideDirection(_Script_CoreUObject::Vector NewValue) {
    return;
}
void* _Script_Engine::DirectionalLightComponent::get_LightShaftOverrideDirection() {
    return (void*)((uintptr_t)this + 0x40c);
}
float& _Script_Engine::DirectionalLightComponent::get_DynamicShadowDistanceMovableLight() {
    return *(float*)((uintptr_t)this + 0x41c);
}
int32_t& _Script_Engine::DirectionalLightComponent::get_DynamicShadowCascades() {
    return *(int32_t*)((uintptr_t)this + 0x424);
}
float& _Script_Engine::DirectionalLightComponent::get_CascadeDistributionExponent() {
    return *(float*)((uintptr_t)this + 0x428);
}
float& _Script_Engine::DirectionalLightComponent::get_CascadeTransitionFraction() {
    return *(float*)((uintptr_t)this + 0x42c);
}
float& _Script_Engine::DirectionalLightComponent::get_ShadowDistanceFadeoutFraction() {
    return *(float*)((uintptr_t)this + 0x430);
}
bool _Script_Engine::DirectionalLightComponent::get_bUseInsetShadowsForMovableObjects() {
    return (*(uint8_t*)((uintptr_t)this + 0x434 + 0)) & 1 != 0;
}
void _Script_Engine::DirectionalLightComponent::set_bUseInsetShadowsForMovableObjects(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x434 + 0);
    *(uint8_t*)((uintptr_t)this + 0x434 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::DirectionalLightComponent::get_FarShadowCascadeCount() {
    return *(int32_t*)((uintptr_t)this + 0x438);
}
float& _Script_Engine::DirectionalLightComponent::get_FarShadowDistance() {
    return *(float*)((uintptr_t)this + 0x43c);
}
bool _Script_Engine::DirectionalLightComponent::get_bCastModulatedShadows() {
    return (*(uint8_t*)((uintptr_t)this + 0x464 + 0)) & 1 != 0;
}
float& _Script_Engine::DirectionalLightComponent::get_DistanceFieldShadowDistance() {
    return *(float*)((uintptr_t)this + 0x440);
}
float& _Script_Engine::DirectionalLightComponent::get_LightSourceAngle() {
    return *(float*)((uintptr_t)this + 0x444);
}
float& _Script_Engine::DirectionalLightComponent::get_LightSourceSoftAngle() {
    return *(float*)((uintptr_t)this + 0x448);
}
float& _Script_Engine::DirectionalLightComponent::get_TraceDistance() {
    return *(float*)((uintptr_t)this + 0x44c);
}
void* _Script_Engine::DirectionalLightComponent::get_LightmassSettings() {
    return (void*)((uintptr_t)this + 0x450);
}
void _Script_Engine::DirectionalLightComponent::set_bCastModulatedShadows(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x464 + 0);
    *(uint8_t*)((uintptr_t)this + 0x464 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::DirectionalLightComponent::get_ModulatedShadowColor() {
    return (void*)((uintptr_t)this + 0x468);
}
bool _Script_Engine::DirectionalLightComponent::get_bUsedAsAtmosphereSunLight() {
    return (*(uint8_t*)((uintptr_t)this + 0x46c + 0)) & 1 != 0;
}
void _Script_Engine::DirectionalLightComponent::set_bUsedAsAtmosphereSunLight(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x46c + 0);
    *(uint8_t*)((uintptr_t)this + 0x46c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::DirectionalLightComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DirectionalLightComponent");
    return result;
}
void _Script_Engine::DirectionalLightComponent::SetShadowDistanceFadeoutFraction(float NewValue) {
    return;
}
void _Script_Engine::DirectionalLightComponent::SetOcclusionMaskDarkness(float NewValue) {
    return;
}
void _Script_Engine::DirectionalLightComponent::SetDynamicShadowDistanceStationaryLight(float NewValue) {
    return;
}
void _Script_Engine::DirectionalLightComponent::SetDynamicShadowDistanceMovableLight(float NewValue) {
    return;
}
void _Script_Engine::DirectionalLightComponent::SetDynamicShadowCascades(int32_t NewValue) {
    return;
}
void _Script_Engine::DirectionalLightComponent::SetCascadeTransitionFraction(float NewValue) {
    return;
}
void _Script_Engine::DirectionalLightComponent::SetCascadeDistributionExponent(float NewValue) {
    return;
}
