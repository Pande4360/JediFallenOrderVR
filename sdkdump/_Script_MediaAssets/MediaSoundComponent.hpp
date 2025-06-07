#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AudioMixer\SynthComponent.hpp"
namespace _Script_MediaAssets {
struct MediaPlayer;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SoundAttenuationSettings;
}
namespace _Script_MediaAssets {
#pragma pack(push, 1)
struct MediaSoundComponent : public _Script_AudioMixer::SynthComponent {
    private: char pad_650[0xa0]; public:
    void* get_Channels();
    bool get_DynamicRateAdjustment();
    void set_DynamicRateAdjustment(bool value);
    float& get_RateAdjustmentFactor();
    void* get_RateAdjustmentRange();
    _Script_MediaAssets::MediaPlayer*& get_MediaPlayer();
    static _Script_CoreUObject::Class* static_class();
    void SetMediaPlayer(_Script_MediaAssets::MediaPlayer* NewMediaPlayer);
    _Script_MediaAssets::MediaPlayer* GetMediaPlayer();
    bool BP_GetAttenuationSettingsToApply(_Script_Engine::SoundAttenuationSettings& OutAttenuationSettings);
}; // Size: 0x6f0
#pragma pack(pop)
}
