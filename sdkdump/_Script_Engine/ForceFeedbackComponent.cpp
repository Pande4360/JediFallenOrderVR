#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ForceFeedbackAttenuation.hpp"
#include "ForceFeedbackAttenuationSettings.hpp"
#include "ForceFeedbackComponent.hpp"
#include "ForceFeedbackEffect.hpp"
#include "SceneComponent.hpp"
_Script_Engine::ForceFeedbackEffect*& _Script_Engine::ForceFeedbackComponent::get_ForceFeedbackEffect() {
    return *(_Script_Engine::ForceFeedbackEffect**)((uintptr_t)this + 0x2c8);
}
bool _Script_Engine::ForceFeedbackComponent::get_bIgnoreTimeDilation() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d0 + 0)) & 8 != 0;
}
void _Script_Engine::ForceFeedbackComponent::AdjustAttenuation(_Script_Engine::ForceFeedbackAttenuationSettings& InAttenuationSettings) {
    return;
}
bool _Script_Engine::ForceFeedbackComponent::get_bAutoDestroy() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d0 + 0)) & 1 != 0;
}
void _Script_Engine::ForceFeedbackComponent::set_bAutoDestroy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ForceFeedbackComponent::get_bStopWhenOwnerDestroyed() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d0 + 0)) & 2 != 0;
}
void _Script_Engine::ForceFeedbackComponent::set_bStopWhenOwnerDestroyed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::ForceFeedbackComponent::get_bLooping() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d0 + 0)) & 4 != 0;
}
void _Script_Engine::ForceFeedbackComponent::set_bLooping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::ForceFeedbackComponent::set_bIgnoreTimeDilation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::ForceFeedbackComponent::get_bOverrideAttenuation() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d0 + 0)) & 16 != 0;
}
void _Script_Engine::ForceFeedbackComponent::set_bOverrideAttenuation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d0 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
float& _Script_Engine::ForceFeedbackComponent::get_IntensityMultiplier() {
    return *(float*)((uintptr_t)this + 0x2d4);
}
_Script_Engine::ForceFeedbackAttenuation*& _Script_Engine::ForceFeedbackComponent::get_AttenuationSettings() {
    return *(_Script_Engine::ForceFeedbackAttenuation**)((uintptr_t)this + 0x2d8);
}
void* _Script_Engine::ForceFeedbackComponent::get_AttenuationOverrides() {
    return (void*)((uintptr_t)this + 0x2e0);
}
void* _Script_Engine::ForceFeedbackComponent::get_OnForceFeedbackFinished() {
    return (void*)((uintptr_t)this + 0x380);
}
_Script_CoreUObject::Class* _Script_Engine::ForceFeedbackComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ForceFeedbackComponent");
    return result;
}
void _Script_Engine::ForceFeedbackComponent::Stop() {
    return;
}
void _Script_Engine::ForceFeedbackComponent::SetIntensityMultiplier(float NewIntensityMultiplier) {
    return;
}
void _Script_Engine::ForceFeedbackComponent::SetForceFeedbackEffect(_Script_Engine::ForceFeedbackEffect* NewForceFeedbackEffect) {
    return;
}
void _Script_Engine::ForceFeedbackComponent::Play(float StartTime) {
    return;
}
bool _Script_Engine::ForceFeedbackComponent::BP_GetAttenuationSettingsToApply(_Script_Engine::ForceFeedbackAttenuationSettings& OutAttenuationSettings) {
    return;
}
