#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
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
struct MovieSceneAudioSectionTemplateData {
    private: char pad_0[0x198]; public:
    _Script_Engine::SoundBase*& get_Sound();
    float& get_AudioStartOffset();
    double& get_SectionStartTimeSeconds();
    void* get_AudioPitchMultiplierCurve();
    void* get_AudioVolumeCurve();
    int32_t& get_RowIndex();
    bool get_bOverrideAttenuation();
    void set_bOverrideAttenuation(bool value);
    _Script_Engine::SoundAttenuation*& get_AttenuationSettings();
    void* get_OnQueueSubtitles();
    void* get_OnAudioFinished();
    void* get_OnAudioPlaybackPercent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x198
#pragma pack(pop)
}
