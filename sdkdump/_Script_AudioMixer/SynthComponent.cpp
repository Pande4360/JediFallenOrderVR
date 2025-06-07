#include "..\FUObjectArray.hpp"
#include "SynthComponent.hpp"
#include "SynthSound.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SoundAttenuation.hpp"
#include "..\_Script_Engine\SoundClass.hpp"
#include "..\_Script_Engine\SoundConcurrency.hpp"
#include "..\_Script_Engine\SoundEffectSourcePresetChain.hpp"
#include "..\_Script_Engine\SoundSubmix.hpp"
bool _Script_AudioMixer::SynthComponent::get_bAutoDestroy() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c8 + 0)) & 1 != 0;
}
void _Script_AudioMixer::SynthComponent::set_bAutoDestroy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AudioMixer::SynthComponent::get_bAllowSpatialization() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c8 + 0)) & 4 != 0;
}
_Script_Engine::SoundConcurrency*& _Script_AudioMixer::SynthComponent::get_ConcurrencySettings() {
    return *(_Script_Engine::SoundConcurrency**)((uintptr_t)this + 0x580);
}
bool _Script_AudioMixer::SynthComponent::get_bStopWhenOwnerDestroyed() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c8 + 0)) & 2 != 0;
}
void _Script_AudioMixer::SynthComponent::set_bStopWhenOwnerDestroyed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_AudioMixer::SynthComponent::set_bAllowSpatialization(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c8 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_AudioMixer::SynthComponent::get_bOverrideAttenuation() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c8 + 0)) & 8 != 0;
}
void _Script_AudioMixer::SynthComponent::set_bOverrideAttenuation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c8 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_AudioMixer::SynthComponent::get_bOutputToBusOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x2cc + 0)) & 1 != 0;
}
void _Script_AudioMixer::SynthComponent::set_bOutputToBusOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2cc + 0);
    *(uint8_t*)((uintptr_t)this + 0x2cc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SoundAttenuation*& _Script_AudioMixer::SynthComponent::get_AttenuationSettings() {
    return *(_Script_Engine::SoundAttenuation**)((uintptr_t)this + 0x2d0);
}
void* _Script_AudioMixer::SynthComponent::get_AttenuationOverrides() {
    return (void*)((uintptr_t)this + 0x2d8);
}
_Script_Engine::SoundClass*& _Script_AudioMixer::SynthComponent::get_SoundClass() {
    return *(_Script_Engine::SoundClass**)((uintptr_t)this + 0x588);
}
_Script_Engine::SoundEffectSourcePresetChain*& _Script_AudioMixer::SynthComponent::get_SourceEffectChain() {
    return *(_Script_Engine::SoundEffectSourcePresetChain**)((uintptr_t)this + 0x590);
}
_Script_Engine::SoundSubmix*& _Script_AudioMixer::SynthComponent::get_SoundSubmix() {
    return *(_Script_Engine::SoundSubmix**)((uintptr_t)this + 0x598);
}
void* _Script_AudioMixer::SynthComponent::get_SoundSubmixSends() {
    return (void*)((uintptr_t)this + 0x5a0);
}
void* _Script_AudioMixer::SynthComponent::get_BusSends() {
    return (void*)((uintptr_t)this + 0x5b0);
}
void* _Script_AudioMixer::SynthComponent::get_PreEffectBusSends() {
    return (void*)((uintptr_t)this + 0x5c0);
}
bool _Script_AudioMixer::SynthComponent::get_bIsUISound() {
    return (*(uint8_t*)((uintptr_t)this + 0x5d0 + 0)) & 1 != 0;
}
void _Script_AudioMixer::SynthComponent::set_bIsUISound(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AudioMixer::SynthComponent::get_bIsPreviewSound() {
    return (*(uint8_t*)((uintptr_t)this + 0x5d0 + 0)) & 2 != 0;
}
void _Script_AudioMixer::SynthComponent::set_bIsPreviewSound(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5d0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
int32_t& _Script_AudioMixer::SynthComponent::get_EnvelopeFollowerAttackTime() {
    return *(int32_t*)((uintptr_t)this + 0x5d4);
}
bool _Script_AudioMixer::SynthComponent::IsPlaying() {
    return;
}
int32_t& _Script_AudioMixer::SynthComponent::get_EnvelopeFollowerReleaseTime() {
    return *(int32_t*)((uintptr_t)this + 0x5d8);
}
void* _Script_AudioMixer::SynthComponent::get_OnAudioEnvelopeValue() {
    return (void*)((uintptr_t)this + 0x5e0);
}
_Script_AudioMixer::SynthSound*& _Script_AudioMixer::SynthComponent::get_Synth() {
    return *(_Script_AudioMixer::SynthSound**)((uintptr_t)this + 0x610);
}
_Script_Engine::AudioComponent*& _Script_AudioMixer::SynthComponent::get_AudioComponent() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x618);
}
_Script_CoreUObject::Class* _Script_AudioMixer::SynthComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AudioMixer.SynthComponent");
    return result;
}
void _Script_AudioMixer::SynthComponent::Stop() {
    return;
}
void _Script_AudioMixer::SynthComponent::Start() {
    return;
}
void _Script_AudioMixer::SynthComponent::SetVolumeMultiplier(float VolumeMultiplier) {
    return;
}
void _Script_AudioMixer::SynthComponent::SetSubmixSend(_Script_Engine::SoundSubmix* Submix, float SendLevel) {
    return;
}
