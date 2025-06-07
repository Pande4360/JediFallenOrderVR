#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Actor.hpp"
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AmbientSound : public Actor {
    private: char pad_360[0x8]; public:
    _Script_Engine::AudioComponent*& get_AudioComponent();
    static _Script_CoreUObject::Class* static_class();
    void Stop();
    void Play(float StartTime);
    void FadeOut(float FadeOutDuration, float FadeVolumeLevel);
    void FadeIn(float FadeInDuration, float FadeVolumeLevel);
    void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel);
}; // Size: 0x368
#pragma pack(pop)
}
