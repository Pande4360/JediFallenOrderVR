#include "..\FUObjectArray.hpp"
#include "AkAudioEvent.hpp"
#include "AkAuxBus.hpp"
#include "AkComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\LatentActionInfo.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
bool _Script_AkAudio::AkComponent::get_bUseSpatialAudio() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c8 + 0)) & 1 != 0;
}
void _Script_AkAudio::AkComponent::set_bUseSpatialAudio(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_AkAudio::AkAuxBus*& _Script_AkAudio::AkComponent::get_EarlyReflectionAuxBus() {
    return *(_Script_AkAudio::AkAuxBus**)((uintptr_t)this + 0x2d0);
}
float& _Script_AkAudio::AkComponent::get_diffractionMaxPathLength() {
    return *(float*)((uintptr_t)this + 0x30c);
}
void* _Script_AkAudio::AkComponent::get_EarlyReflectionAuxBusName() {
    return (void*)((uintptr_t)this + 0x2d8);
}
void _Script_AkAudio::AkComponent::PostTrigger(void* Trigger) {
    return;
}
int32_t& _Script_AkAudio::AkComponent::get_EarlyReflectionOrder() {
    return *(int32_t*)((uintptr_t)this + 0x2e8);
}
void* _Script_AkAudio::AkComponent::get_OcclusionCollisionChannel() {
    return (void*)((uintptr_t)this + 0x2f4);
}
float& _Script_AkAudio::AkComponent::get_EarlyReflectionBusSendGain() {
    return *(float*)((uintptr_t)this + 0x2ec);
}
float& _Script_AkAudio::AkComponent::get_EarlyReflectionMaxPathLength() {
    return *(float*)((uintptr_t)this + 0x2f0);
}
bool _Script_AkAudio::AkComponent::get_DrawSoundPropagation() {
    return (*(uint8_t*)((uintptr_t)this + 0x310 + 0)) & 16 != 0;
}
bool _Script_AkAudio::AkComponent::get_EnableSpotReflectors() {
    return (*(uint8_t*)((uintptr_t)this + 0x2fc + 0)) & 1 != 0;
}
void _Script_AkAudio::AkComponent::set_EnableSpotReflectors(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2fc + 0);
    *(uint8_t*)((uintptr_t)this + 0x2fc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_AkAudio::AkComponent::get_roomReverbAuxBusGain() {
    return *(float*)((uintptr_t)this + 0x300);
}
void _Script_AkAudio::AkComponent::SetRTPCValue(void* RTPC, float Value, int32_t InterpolationTimeMs) {
    return;
}
int32_t& _Script_AkAudio::AkComponent::get_diffractionMaxEdges() {
    return *(int32_t*)((uintptr_t)this + 0x304);
}
void* _Script_AkAudio::AkComponent::get_EventName() {
    return (void*)((uintptr_t)this + 0x378);
}
int32_t& _Script_AkAudio::AkComponent::get_diffractionMaxPaths() {
    return *(int32_t*)((uintptr_t)this + 0x308);
}
bool _Script_AkAudio::AkComponent::get_DrawFirstOrderReflections() {
    return (*(uint8_t*)((uintptr_t)this + 0x310 + 0)) & 1 != 0;
}
float& _Script_AkAudio::AkComponent::get_OcclusionInterpolationRate() {
    return *(float*)((uintptr_t)this + 0x360);
}
void _Script_AkAudio::AkComponent::set_DrawFirstOrderReflections(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x310 + 0);
    *(uint8_t*)((uintptr_t)this + 0x310 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AkAudio::AkComponent::get_DrawSecondOrderReflections() {
    return (*(uint8_t*)((uintptr_t)this + 0x310 + 0)) & 2 != 0;
}
void _Script_AkAudio::AkComponent::Stop() {
    return;
}
void _Script_AkAudio::AkComponent::set_DrawSecondOrderReflections(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x310 + 0);
    *(uint8_t*)((uintptr_t)this + 0x310 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_AkAudio::AkComponent::get_DrawHigherOrderReflections() {
    return (*(uint8_t*)((uintptr_t)this + 0x310 + 0)) & 4 != 0;
}
void _Script_AkAudio::AkComponent::set_DrawHigherOrderReflections(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x310 + 0);
    *(uint8_t*)((uintptr_t)this + 0x310 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_AkAudio::AkComponent::UseReverbVolumes(bool inUseReverbVolumes) {
    return;
}
bool _Script_AkAudio::AkComponent::get_DrawGeometricDiffraction() {
    return (*(uint8_t*)((uintptr_t)this + 0x310 + 0)) & 8 != 0;
}
void _Script_AkAudio::AkComponent::set_DrawGeometricDiffraction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x310 + 0);
    *(uint8_t*)((uintptr_t)this + 0x310 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_AkAudio::AkComponent::set_DrawSoundPropagation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x310 + 0);
    *(uint8_t*)((uintptr_t)this + 0x310 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_AkAudio::AkComponent::get_StopWhenOwnerDestroyed() {
    return (*(uint8_t*)((uintptr_t)this + 0x314 + 0)) & 1 != 0;
}
void _Script_AkAudio::AkComponent::set_StopWhenOwnerDestroyed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x314 + 0);
    *(uint8_t*)((uintptr_t)this + 0x314 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AkAudio::AkComponent::SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed) {
    return;
}
float& _Script_AkAudio::AkComponent::get_AttenuationScalingFactor() {
    return *(float*)((uintptr_t)this + 0x318);
}
bool _Script_AkAudio::AkComponent::get_OcclusionEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x364 + 0)) & 1 != 0;
}
void _Script_AkAudio::AkComponent::set_OcclusionEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x364 + 0);
    *(uint8_t*)((uintptr_t)this + 0x364 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_AkAudio::AkAudioEvent*& _Script_AkAudio::AkComponent::get_AkAudioEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x370);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkComponent");
    return result;
}
void _Script_AkAudio::AkComponent::UseEarlyReflections(_Script_AkAudio::AkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, void* AuxBusName) {
    return;
}
void _Script_AkAudio::AkComponent::SetUseSpatialAudio(bool bNewValue) {
    return;
}
void _Script_AkAudio::AkComponent::SetSwitch(void* SwitchGroup, void* SwitchState) {
    return;
}
void _Script_AkAudio::AkComponent::SetOutputBusVolume(float BusVolume) {
    return;
}
void _Script_AkAudio::AkComponent::SetListeners(void*& Listeners) {
    return;
}
void _Script_AkAudio::AkComponent::SetOcclusionEnabled(bool Value) {
    return;
}
void _Script_AkAudio::AkComponent::SetAttenuationScalingFactor(float Value) {
    return;
}
int32_t _Script_AkAudio::AkComponent::PostAssociatedAkEventAndWaitForEnd(_Script_Engine::LatentActionInfo LatentInfo) {
    return;
}
float _Script_AkAudio::AkComponent::GetAttenuationRadius() {
    return;
}
int32_t _Script_AkAudio::AkComponent::PostAssociatedAkEvent(int32_t CallbackMask, void*& PostEventCallback) {
    return;
}
int32_t _Script_AkAudio::AkComponent::PostAkEventByName(void* in_EventName) {
    return;
}
int32_t _Script_AkAudio::AkComponent::PostAkEventAndWaitForEnd(_Script_AkAudio::AkAudioEvent* AkEvent, void* in_EventName, _Script_Engine::LatentActionInfo LatentInfo) {
    return;
}
int32_t _Script_AkAudio::AkComponent::PostAkEvent(_Script_AkAudio::AkAudioEvent* AkEvent, int32_t CallbackMask, void*& PostEventCallback, void* in_EventName) {
    return;
}
void _Script_AkAudio::AkComponent::DisableRelativeVelocityRTPC() {
    return;
}
void _Script_AkAudio::AkComponent::OcclusionFinished() {
    return;
}
float _Script_AkAudio::AkComponent::GetRelativeVelocityRTPC() {
    return;
}
void _Script_AkAudio::AkComponent::EnableRelativeVelocityRTPC(float MaxRelativeVelocity, float MinRelativeVelocity, bool DebugDraw, int32_t InterpolationTimeMs) {
    return;
}
