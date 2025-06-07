#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BaseAttenuationSettings.hpp"
#include "SoundAttenuationSettings.hpp"
float& _Script_Engine::SoundAttenuationSettings::get_LPFRadiusMax() {
    return *(float*)((uintptr_t)this + 0xb4);
}
bool _Script_Engine::SoundAttenuationSettings::get_bAttenuate() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 1 != 0;
}
float& _Script_Engine::SoundAttenuationSettings::get_ReverbWetLevelMax() {
    return *(float*)((uintptr_t)this + 0x1f0);
}
void _Script_Engine::SoundAttenuationSettings::set_bEnableListenerFocus(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::SoundAttenuationSettings::set_bAttenuate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::SoundAttenuationSettings::get_OmniRadius() {
    return *(float*)((uintptr_t)this + 0xa8);
}
bool _Script_Engine::SoundAttenuationSettings::get_bSpatialize() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 2 != 0;
}
void _Script_Engine::SoundAttenuationSettings::set_bSpatialize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::SoundAttenuationSettings::set_bApplyNormalizationToStereoSounds(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SoundAttenuationSettings::get_bAttenuateWithLPF() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 4 != 0;
}
float& _Script_Engine::SoundAttenuationSettings::get_LPFFrequencyAtMax() {
    return *(float*)((uintptr_t)this + 0x1ac);
}
void _Script_Engine::SoundAttenuationSettings::set_bAttenuateWithLPF(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::SoundAttenuationSettings::get_bEnableListenerFocus() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 8 != 0;
}
bool _Script_Engine::SoundAttenuationSettings::get_bEnableFocusInterpolation() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 16 != 0;
}
void* _Script_Engine::SoundAttenuationSettings::get_CustomReverbSendCurve() {
    return (void*)((uintptr_t)this + 0x200);
}
void _Script_Engine::SoundAttenuationSettings::set_bEnableFocusInterpolation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::SoundAttenuationSettings::get_bEnableOcclusion() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 32 != 0;
}
bool _Script_Engine::SoundAttenuationSettings::get_bApplyNormalizationToStereoSounds() {
    return (*(uint8_t*)((uintptr_t)this + 0xa1 + 0)) & 1 != 0;
}
void _Script_Engine::SoundAttenuationSettings::set_bEnableOcclusion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::SoundAttenuationSettings::get_bUseComplexCollisionForOcclusion() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 64 != 0;
}
float& _Script_Engine::SoundAttenuationSettings::get_HPFFrequencyAtMin() {
    return *(float*)((uintptr_t)this + 0x1b0);
}
void _Script_Engine::SoundAttenuationSettings::set_bUseComplexCollisionForOcclusion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::SoundAttenuationSettings::get_bEnableReverbSend() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 128 != 0;
}
void _Script_Engine::SoundAttenuationSettings::set_bEnableReverbSend(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::SoundAttenuationSettings::get_bEnableLogFrequencyScaling() {
    return (*(uint8_t*)((uintptr_t)this + 0xa1 + 0)) & 2 != 0;
}
void _Script_Engine::SoundAttenuationSettings::set_bEnableLogFrequencyScaling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa1 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::SoundAttenuationSettings::get_OcclusionLowPassFilterFrequency() {
    return *(float*)((uintptr_t)this + 0x1e0);
}
void* _Script_Engine::SoundAttenuationSettings::get_SpatializationAlgorithm() {
    return (void*)((uintptr_t)this + 0xa2);
}
void* _Script_Engine::SoundAttenuationSettings::get_AbsorptionMethod() {
    return (void*)((uintptr_t)this + 0xa3);
}
void* _Script_Engine::SoundAttenuationSettings::get_OcclusionTraceChannel() {
    return (void*)((uintptr_t)this + 0xa4);
}
void* _Script_Engine::SoundAttenuationSettings::get_ReverbSendMethod() {
    return (void*)((uintptr_t)this + 0xa5);
}
float& _Script_Engine::SoundAttenuationSettings::get_StereoSpread() {
    return *(float*)((uintptr_t)this + 0xac);
}
float& _Script_Engine::SoundAttenuationSettings::get_LPFRadiusMin() {
    return *(float*)((uintptr_t)this + 0xb0);
}
void* _Script_Engine::SoundAttenuationSettings::get_CustomLowpassAirAbsorptionCurve() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_Engine::SoundAttenuationSettings::get_CustomHighpassAirAbsorptionCurve() {
    return (void*)((uintptr_t)this + 0x130);
}
float& _Script_Engine::SoundAttenuationSettings::get_NonFocusVolumeAttenuation() {
    return *(float*)((uintptr_t)this + 0x1d4);
}
float& _Script_Engine::SoundAttenuationSettings::get_LPFFrequencyAtMin() {
    return *(float*)((uintptr_t)this + 0x1a8);
}
float& _Script_Engine::SoundAttenuationSettings::get_HPFFrequencyAtMax() {
    return *(float*)((uintptr_t)this + 0x1b4);
}
float& _Script_Engine::SoundAttenuationSettings::get_FocusAzimuth() {
    return *(float*)((uintptr_t)this + 0x1b8);
}
float& _Script_Engine::SoundAttenuationSettings::get_NonFocusAzimuth() {
    return *(float*)((uintptr_t)this + 0x1bc);
}
float& _Script_Engine::SoundAttenuationSettings::get_FocusDistanceScale() {
    return *(float*)((uintptr_t)this + 0x1c0);
}
float& _Script_Engine::SoundAttenuationSettings::get_NonFocusDistanceScale() {
    return *(float*)((uintptr_t)this + 0x1c4);
}
float& _Script_Engine::SoundAttenuationSettings::get_FocusPriorityScale() {
    return *(float*)((uintptr_t)this + 0x1c8);
}
float& _Script_Engine::SoundAttenuationSettings::get_NonFocusPriorityScale() {
    return *(float*)((uintptr_t)this + 0x1cc);
}
float& _Script_Engine::SoundAttenuationSettings::get_FocusVolumeAttenuation() {
    return *(float*)((uintptr_t)this + 0x1d0);
}
float& _Script_Engine::SoundAttenuationSettings::get_FocusAttackInterpSpeed() {
    return *(float*)((uintptr_t)this + 0x1d8);
}
float& _Script_Engine::SoundAttenuationSettings::get_FocusReleaseInterpSpeed() {
    return *(float*)((uintptr_t)this + 0x1dc);
}
float& _Script_Engine::SoundAttenuationSettings::get_ReverbDistanceMin() {
    return *(float*)((uintptr_t)this + 0x1f4);
}
float& _Script_Engine::SoundAttenuationSettings::get_OcclusionVolumeAttenuation() {
    return *(float*)((uintptr_t)this + 0x1e4);
}
float& _Script_Engine::SoundAttenuationSettings::get_OcclusionInterpolationTime() {
    return *(float*)((uintptr_t)this + 0x1e8);
}
float& _Script_Engine::SoundAttenuationSettings::get_ReverbWetLevelMin() {
    return *(float*)((uintptr_t)this + 0x1ec);
}
float& _Script_Engine::SoundAttenuationSettings::get_ReverbDistanceMax() {
    return *(float*)((uintptr_t)this + 0x1f8);
}
float& _Script_Engine::SoundAttenuationSettings::get_ManualReverbSendLevel() {
    return *(float*)((uintptr_t)this + 0x1fc);
}
void* _Script_Engine::SoundAttenuationSettings::get_PluginSettings() {
    return (void*)((uintptr_t)this + 0x278);
}
_Script_CoreUObject::Class* _Script_Engine::SoundAttenuationSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SoundAttenuationSettings");
    return result;
}
