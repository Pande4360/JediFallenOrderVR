#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "Actor.hpp"
#include "Light.hpp"
#include "LightComponent.hpp"
#include "MaterialInterface.hpp"
#include "RsLightTriggerComponent.hpp"
_Script_Engine::LightComponent*& _Script_Engine::Light::get_LightComponent() {
    return *(_Script_Engine::LightComponent**)((uintptr_t)this + 0x360);
}
void _Script_Engine::Light::SetLightFunctionMaterial(_Script_Engine::MaterialInterface* NewLightFunctionMaterial) {
    return;
}
_Script_Engine::RsLightTriggerComponent*& _Script_Engine::Light::get_LightTriggerComponent() {
    return *(_Script_Engine::RsLightTriggerComponent**)((uintptr_t)this + 0x368);
}
_Script_CoreUObject::Class* _Script_Engine::Light::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Light");
    return result;
}
bool _Script_Engine::Light::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x370 + 0)) & 1 != 0;
}
void _Script_Engine::Light::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x370 + 0);
    *(uint8_t*)((uintptr_t)this + 0x370 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::Light::ToggleEnabled() {
    return;
}
void _Script_Engine::Light::SetLightFunctionScale(_Script_CoreUObject::Vector NewLightFunctionScale) {
    return;
}
void _Script_Engine::Light::SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance) {
    return;
}
void _Script_Engine::Light::SetLightColor(_Script_CoreUObject::LinearColor NewLightColor) {
    return;
}
void _Script_Engine::Light::SetEnabled(bool bSetEnabled) {
    return;
}
void _Script_Engine::Light::SetCastShadows(bool bNewValue) {
    return;
}
void _Script_Engine::Light::SetBrightness(float NewBrightness) {
    return;
}
void _Script_Engine::Light::SetAffectTranslucentLighting(bool bNewValue) {
    return;
}
void _Script_Engine::Light::OnRep_bEnabled() {
    return;
}
bool _Script_Engine::Light::IsEnabled() {
    return;
}
_Script_CoreUObject::LinearColor _Script_Engine::Light::GetLightColor() {
    return;
}
float _Script_Engine::Light::GetBrightness() {
    return;
}
