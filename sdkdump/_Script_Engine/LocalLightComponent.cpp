#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LightComponent.hpp"
#include "LocalLightComponent.hpp"
float& _Script_Engine::LocalLightComponent::get_DistancePercentFalloff() {
    return *(float*)((uintptr_t)this + 0x414);
}
void* _Script_Engine::LocalLightComponent::get_IntensityUnits() {
    return (void*)((uintptr_t)this + 0x400);
}
float& _Script_Engine::LocalLightComponent::get_Radius() {
    return *(float*)((uintptr_t)this + 0x404);
}
float& _Script_Engine::LocalLightComponent::get_AttenuationRadius() {
    return *(float*)((uintptr_t)this + 0x408);
}
float& _Script_Engine::LocalLightComponent::get_LightmassAttenuationRadius() {
    return *(float*)((uintptr_t)this + 0x40c);
}
bool _Script_Engine::LocalLightComponent::get_bSeparateLightmassAttenuationRadius() {
    return (*(uint8_t*)((uintptr_t)this + 0x418 + 0)) & 1 != 0;
}
float& _Script_Engine::LocalLightComponent::get_MinLuxFalloff() {
    return *(float*)((uintptr_t)this + 0x410);
}
void _Script_Engine::LocalLightComponent::set_bSeparateLightmassAttenuationRadius(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x418 + 0);
    *(uint8_t*)((uintptr_t)this + 0x418 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::LocalLightComponent::get_StartFalloffAngle() {
    return *(float*)((uintptr_t)this + 0x41c);
}
float& _Script_Engine::LocalLightComponent::get_EndFalloffAngle() {
    return *(float*)((uintptr_t)this + 0x420);
}
float& _Script_Engine::LocalLightComponent::get_AngularFalloffExponent() {
    return *(float*)((uintptr_t)this + 0x424);
}
void* _Script_Engine::LocalLightComponent::get_LightmassSettings() {
    return (void*)((uintptr_t)this + 0x428);
}
_Script_CoreUObject::Class* _Script_Engine::LocalLightComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LocalLightComponent");
    return result;
}
void _Script_Engine::LocalLightComponent::SetStartFalloffAngle(float NewValue) {
    return;
}
void _Script_Engine::LocalLightComponent::SetEndFalloffAngle(float NewValue) {
    return;
}
void _Script_Engine::LocalLightComponent::SetAttenuationRadius(float newRadius) {
    return;
}
float _Script_Engine::LocalLightComponent::GetUnitsConversionFactor(void* SrcUnits, void* TargetUnits, float CosHalfConeAngle) {
    return;
}
