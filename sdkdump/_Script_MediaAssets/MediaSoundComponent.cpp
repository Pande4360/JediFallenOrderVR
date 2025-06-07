#include "..\FUObjectArray.hpp"
#include "..\_Script_AudioMixer\SynthComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundAttenuationSettings.hpp"
#include "MediaPlayer.hpp"
#include "MediaSoundComponent.hpp"
void _Script_MediaAssets::MediaSoundComponent::set_DynamicRateAdjustment(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x654 + 0);
    *(uint8_t*)((uintptr_t)this + 0x654 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MediaAssets::MediaSoundComponent::get_Channels() {
    return (void*)((uintptr_t)this + 0x650);
}
_Script_MediaAssets::MediaPlayer*& _Script_MediaAssets::MediaSoundComponent::get_MediaPlayer() {
    return *(_Script_MediaAssets::MediaPlayer**)((uintptr_t)this + 0x670);
}
void* _Script_MediaAssets::MediaSoundComponent::get_RateAdjustmentRange() {
    return (void*)((uintptr_t)this + 0x65c);
}
bool _Script_MediaAssets::MediaSoundComponent::get_DynamicRateAdjustment() {
    return (*(uint8_t*)((uintptr_t)this + 0x654 + 0)) & 1 != 0;
}
float& _Script_MediaAssets::MediaSoundComponent::get_RateAdjustmentFactor() {
    return *(float*)((uintptr_t)this + 0x658);
}
_Script_CoreUObject::Class* _Script_MediaAssets::MediaSoundComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MediaAssets.MediaSoundComponent");
    return result;
}
void _Script_MediaAssets::MediaSoundComponent::SetMediaPlayer(_Script_MediaAssets::MediaPlayer* NewMediaPlayer) {
    return;
}
_Script_MediaAssets::MediaPlayer* _Script_MediaAssets::MediaSoundComponent::GetMediaPlayer() {
    return;
}
bool _Script_MediaAssets::MediaSoundComponent::BP_GetAttenuationSettingsToApply(_Script_Engine::SoundAttenuationSettings& OutAttenuationSettings) {
    return;
}
