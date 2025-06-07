#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AudioComponent.hpp"
#include "SceneComponent.hpp"
#include "SoundAttenuation.hpp"
#include "SoundAttenuationSettings.hpp"
#include "SoundBase.hpp"
#include "SoundClass.hpp"
#include "SoundConcurrency.hpp"
#include "SoundSubmix.hpp"
#include "SoundWave.hpp"
int32_t& _Script_Engine::AudioComponent::get_EnvelopeFollowerAttackTime() {
    return *(int32_t*)((uintptr_t)this + 0x30c);
}
_Script_Engine::SoundBase*& _Script_Engine::AudioComponent::get_Sound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x2c8);
}
bool _Script_Engine::AudioComponent::get_bShouldRemainActiveIfDropped() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e8 + 0)) & 4 != 0;
}
void _Script_Engine::AudioComponent::SetIntParameter(void* InName, int32_t inInt) {
    return;
}
void* _Script_Engine::AudioComponent::get_InstanceParameters() {
    return (void*)((uintptr_t)this + 0x2d0);
}
void _Script_Engine::AudioComponent::set_bStopWhenOwnerDestroyed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::AudioComponent::get_VolumeModulationMax() {
    return *(float*)((uintptr_t)this + 0x304);
}
void _Script_Engine::AudioComponent::Stop() {
    return;
}
_Script_Engine::SoundClass*& _Script_Engine::AudioComponent::get_SoundClassOverride() {
    return *(_Script_Engine::SoundClass**)((uintptr_t)this + 0x2e0);
}
bool _Script_Engine::AudioComponent::get_bAutoDestroy() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e8 + 0)) & 1 != 0;
}
void _Script_Engine::AudioComponent::set_bAutoDestroy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AudioComponent::get_bStopWhenOwnerDestroyed() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e8 + 0)) & 2 != 0;
}
bool _Script_Engine::AudioComponent::get_bIsUISound() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e8 + 0)) & 64 != 0;
}
void _Script_Engine::AudioComponent::set_bShouldRemainActiveIfDropped(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e8 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::AudioComponent::get_bAllowSpatialization() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e8 + 0)) & 8 != 0;
}
void _Script_Engine::AudioComponent::set_bAllowSpatialization(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e8 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::AudioComponent::SetLowPassFilterEnabled(bool InLowPassFilterEnabled) {
    return;
}
bool _Script_Engine::AudioComponent::get_bOverrideAttenuation() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e8 + 0)) & 16 != 0;
}
void _Script_Engine::AudioComponent::SetPaused(bool bPause) {
    return;
}
void _Script_Engine::AudioComponent::set_bOverrideAttenuation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e8 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::AudioComponent::get_bOverrideSubtitlePriority() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e8 + 0)) & 32 != 0;
}
void* _Script_Engine::AudioComponent::get_AutoAttachRotationRule() {
    return (void*)((uintptr_t)this + 0x5e5);
}
void _Script_Engine::AudioComponent::set_bOverrideSubtitlePriority(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e8 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void* _Script_Engine::AudioComponent::get_OnAudioMultiEnvelopeValue() {
    return (void*)((uintptr_t)this + 0x660);
}
void _Script_Engine::AudioComponent::set_bIsUISound(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e8 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void* _Script_Engine::AudioComponent::get_OnQueueSubtitles() {
    return (void*)((uintptr_t)this + 0x688);
}
bool _Script_Engine::AudioComponent::get_bEnableLowPassFilter() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e8 + 0)) & 128 != 0;
}
void _Script_Engine::AudioComponent::set_bEnableLowPassFilter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e8 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_Engine::AudioComponent::SetPitchMultiplier(float NewPitchMultiplier) {
    return;
}
bool _Script_Engine::AudioComponent::get_bOverridePriority() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e9 + 0)) & 1 != 0;
}
float& _Script_Engine::AudioComponent::get_PitchModulationMax() {
    return *(float*)((uintptr_t)this + 0x2fc);
}
void _Script_Engine::AudioComponent::set_bOverridePriority(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AudioComponent::get_bSuppressSubtitles() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e9 + 0)) & 2 != 0;
}
void _Script_Engine::AudioComponent::set_bSuppressSubtitles(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e9 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::AudioComponent::get_Priority() {
    return *(float*)((uintptr_t)this + 0x314);
}
bool _Script_Engine::AudioComponent::get_bAutoManageAttachment() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ea + 0)) & 8 != 0;
}
void _Script_Engine::AudioComponent::set_bAutoManageAttachment(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ea + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ea + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::AudioComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AudioComponent");
    return result;
}
void* _Script_Engine::AudioComponent::get_AudioComponentUserID() {
    return (void*)((uintptr_t)this + 0x2f0);
}
void _Script_Engine::AudioComponent::AdjustAttenuation(_Script_Engine::SoundAttenuationSettings& InAttenuationSettings) {
    return;
}
float& _Script_Engine::AudioComponent::get_PitchModulationMin() {
    return *(float*)((uintptr_t)this + 0x2f8);
}
float& _Script_Engine::AudioComponent::get_VolumeModulationMin() {
    return *(float*)((uintptr_t)this + 0x300);
}
float& _Script_Engine::AudioComponent::get_VolumeMultiplier() {
    return *(float*)((uintptr_t)this + 0x308);
}
int32_t& _Script_Engine::AudioComponent::get_EnvelopeFollowerReleaseTime() {
    return *(int32_t*)((uintptr_t)this + 0x310);
}
float& _Script_Engine::AudioComponent::get_SubtitlePriority() {
    return *(float*)((uintptr_t)this + 0x318);
}
float& _Script_Engine::AudioComponent::get_PitchMultiplier() {
    return *(float*)((uintptr_t)this + 0x31c);
}
float& _Script_Engine::AudioComponent::get_LowPassFilterFrequency() {
    return *(float*)((uintptr_t)this + 0x320);
}
_Script_Engine::SoundAttenuation*& _Script_Engine::AudioComponent::get_AttenuationSettings() {
    return *(_Script_Engine::SoundAttenuation**)((uintptr_t)this + 0x328);
}
void* _Script_Engine::AudioComponent::get_AttenuationOverrides() {
    return (void*)((uintptr_t)this + 0x330);
}
_Script_Engine::SoundConcurrency*& _Script_Engine::AudioComponent::get_ConcurrencySettings() {
    return *(_Script_Engine::SoundConcurrency**)((uintptr_t)this + 0x5d8);
}
void* _Script_Engine::AudioComponent::get_AutoAttachLocationRule() {
    return (void*)((uintptr_t)this + 0x5e4);
}
void* _Script_Engine::AudioComponent::get_AutoAttachScaleRule() {
    return (void*)((uintptr_t)this + 0x5e6);
}
void* _Script_Engine::AudioComponent::get_OnAudioFinished() {
    return (void*)((uintptr_t)this + 0x5e8);
}
void* _Script_Engine::AudioComponent::get_OnAudioPlaybackPercent() {
    return (void*)((uintptr_t)this + 0x610);
}
void* _Script_Engine::AudioComponent::get_OnAudioSingleEnvelopeValue() {
    return (void*)((uintptr_t)this + 0x638);
}
void* _Script_Engine::AudioComponent::get_AutoAttachParent() {
    return (void*)((uintptr_t)this + 0x698);
}
void* _Script_Engine::AudioComponent::get_AutoAttachSocketName() {
    return (void*)((uintptr_t)this + 0x6a0);
}
void _Script_Engine::AudioComponent::SetWaveParameter(void* InName, _Script_Engine::SoundWave* InWave) {
    return;
}
void _Script_Engine::AudioComponent::SetVolumeMultiplier(float NewVolumeMultiplier) {
    return;
}
void _Script_Engine::AudioComponent::SetUISound(bool bInUISound) {
    return;
}
void _Script_Engine::AudioComponent::SetSubmixSend(_Script_Engine::SoundSubmix* Submix, float SendLevel) {
    return;
}
void _Script_Engine::AudioComponent::SetSound(_Script_Engine::SoundBase* NewSound) {
    return;
}
void _Script_Engine::AudioComponent::SetLowPassFilterFrequency(float InLowPassFilterFrequency) {
    return;
}
void _Script_Engine::AudioComponent::SetBoolParameter(void* InName, bool InBool) {
    return;
}
void _Script_Engine::AudioComponent::SetFloatParameter(void* InName, float InFloat) {
    return;
}
void _Script_Engine::AudioComponent::Play(float StartTime) {
    return;
}
bool _Script_Engine::AudioComponent::IsPlaying() {
    return;
}
void _Script_Engine::AudioComponent::FadeOut(float FadeOutDuration, float FadeVolumeLevel) {
    return;
}
void _Script_Engine::AudioComponent::FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime) {
    return;
}
bool _Script_Engine::AudioComponent::BP_GetAttenuationSettingsToApply(_Script_Engine::SoundAttenuationSettings& OutAttenuationSettings) {
    return;
}
void _Script_Engine::AudioComponent::AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel) {
    return;
}
