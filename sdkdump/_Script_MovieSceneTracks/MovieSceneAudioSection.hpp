#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
namespace _Script_Engine {
struct SoundBase;
}
namespace _Script_Engine {
struct SoundAttenuation;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneAudioSection : public _Script_MovieScene::MovieSceneSection {
    private: char pad_e0[0x198]; public:
    _Script_Engine::SoundBase*& get_Sound();
    float& get_StartOffset();
    float& get_AudioStartTime();
    float& get_AudioDilationFactor();
    float& get_AudioVolume();
    void* get_SoundVolume();
    void* get_PitchMultiplier();
    bool get_bSuppressSubtitles();
    void set_bSuppressSubtitles(bool value);
    bool get_bOverrideAttenuation();
    void set_bOverrideAttenuation(bool value);
    _Script_Engine::SoundAttenuation*& get_AttenuationSettings();
    void* get_OnQueueSubtitles();
    void* get_OnAudioFinished();
    void* get_OnAudioPlaybackPercent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x278
#pragma pack(pop)
}
